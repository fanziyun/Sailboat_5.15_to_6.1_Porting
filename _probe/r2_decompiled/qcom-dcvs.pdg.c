// decompiled from qcom-dcvs by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1420) =====

//WARNING: Switch with 1 destination removed at 0x08005758

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x13ec78e54c45d64b) {
        if (arg1 < -0x218c0108fde83420) {
            if (arg1 < -0x4dd1060d18ca35a0) {
                if (arg1 == -0x6e08873de7d4bc1a) {
                    pcVar2 = sym.__traceiter_qcom_dcvs_update.cfi_jt;
                }
                else {
                    if (arg1 == -0x6d6552ddb35a714d) {
                        pcVar2 = sym.__bpf_trace_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt;
                        goto code_r0x08003578;
                    }
                    if (arg1 != -0x6b3d9e003d87fc34) goto code_r0x08005718;
                    pcVar2 = sym.__traceiter_qcom_dcvs_boost.cfi_jt;
                }
            }
            else if (arg1 < -0x3ace520cc098245b) {
                if (arg1 != -0x4dd1060d18ca35a0) {
                    if (arg1 != -0x44dce6be38b41a63) goto code_r0x08005718;
                    pcVar2 = sym.trace_event_raw_event_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt;
                    goto code_r0x08003578;
                }
                pcVar2 = sym.qcom_dcvs_update_votes.cfi_jt;
            }
            else {
                if (arg1 == -0x3ace520cc098245b) {
                    pcVar2 = sym.__typeid__ZTSFiP9dcvs_pathP9dcvs_freqjE_global_addr;
                    goto code_r0x08003578;
                }
                if (arg1 != -0x3557318fb8d07b71) goto code_r0x08005718;
                pcVar2 = sym.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt;
            }
        }
        else {
            if (-0x79ecf0202e0eb8f < arg1) {
                if (arg1 < 0x2b3a43e29242445) {
                    if (arg1 != -0x79ecf0202e0eb8e) {
                        if (arg1 != -0x558484723f05168) goto code_r0x08005718;
                        pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr;
                        goto code_r0x08003520;
                    }
                    pcVar2 = sym.perf_trace_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt;
                }
                else {
                    if (arg1 == 0x2b3a43e29242445) {
                        pcVar2 = sym.init_module.cfi_jt;
                        goto code_r0x08003560;
                    }
                    if (arg1 != 0x11f9cf71b82835f3) goto code_r0x08005718;
                    pcVar2 = sym.perf_trace_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt;
                }
code_r0x08003578:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                    return;
                }
                goto code_r0x08005718;
            }
            if (arg1 == -0x218c0108fde83420) {
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
            else {
                if (arg1 == -0x14e72abafc0346e9) {
                    pcVar2 = sym.qcom_dcvs_unregister_voter.cfi_jt;
code_r0x08003520:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08005718;
                }
                if (arg1 != -0xc0eaff446d00dcd) goto code_r0x08005718;
                pcVar2 = sym.__traceiter_memlat_dev_update.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x47ce015a85343a42) {
        if (arg1 < 0x2c1d832160b5d123) {
            if (arg1 == 0x13ec78e54c45d64b) {
                pcVar2 = sym.__traceiter_memlat_dev_meas.cfi_jt;
            }
            else if (arg1 == 0x1c2b0952efa24c7a) {
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
            else {
                if (arg1 != 0x29e48b5848f830be) goto code_r0x08005718;
                pcVar2 = sym.qcom_dcvs_hw_minmax_get.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x3b61b7caa0550be6) {
                if (arg1 == 0x2c1d832160b5d123) {
                    if ((pcVar1 + -0x8003708 >> 3 | pcVar1 << 0x3d) < 6) {
                        return;
                    }
                    goto code_r0x08005718;
                }
                if (arg1 != 0x395f2f03c14e9ee0) goto code_r0x08005718;
                pcVar2 = sym.__bpf_trace_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt;
                goto code_r0x08003578;
            }
            if (arg1 != 0x3b61b7caa0550be6) {
                if ((arg1 == 0x3dd1a39e589289fe) && ((pcVar1 + -0x8003688 >> 3 | pcVar1 << 0x3d) < 7)) {
                    return;
                }
                goto code_r0x08005718;
            }
            pcVar2 = sym.__traceiter_bw_hwmon_update.cfi_jt;
        }
    }
    else if (arg1 < 0x6e33cd912334f0c4) {
        if (arg1 < 0x4cccd731a1e51b64) {
            if (arg1 == 0x47ce015a85343a42) {
                pcVar2 = sym.boost_ddr_freq.cfi_jt;
            }
            else {
                if (arg1 != 0x493fe86aec3f3a07) goto code_r0x08005718;
                pcVar2 = sym.qcom_dcvs_kobject_get.cfi_jt;
            }
        }
        else {
            if (arg1 != 0x4cccd731a1e51b64) {
                if (arg1 != 0x4e557fdba3561c90) goto code_r0x08005718;
                pcVar2 = sym.__bpf_trace_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt;
                goto code_r0x08003578;
            }
            pcVar2 = sym.__traceiter_bw_hwmon_debug.cfi_jt;
        }
    }
    else if (arg1 < 0x7d9e9361ec3c8895) {
        if (arg1 == 0x6e33cd912334f0c4) {
            pcVar2 = sym.qcom_dcvs_get_ddr_child_node.cfi_jt;
        }
        else {
            if (arg1 != 0x6fd8f5418241719b) goto code_r0x08005718;
            pcVar2 = sym.__traceiter_bw_hwmon_meas.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x7d9e9361ec3c8895) {
            pcVar2 = sym.trace_event_raw_event_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt;
            goto code_r0x08003578;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005718;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x08003560:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005718:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800576c);
    (*pcVar1)();
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x08003598 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr @ 0x080035a0 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    code *extraout_x8;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int iVar10;
    ulong *in_x18;
    int64_t unaff_x21;
    int64_t unaff_x22;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_48;
    int iStack_44;
    uint uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_3c = 0;
    auVar11 = kstrtouint(param_3,10,&uStack_3c);
    if (auVar11._0_4_ < 0) {
        param_4 = auVar11._0_4_;
        goto code_r0x080053c4;
    }
    if (*(param_1 + 0x7c) < uStack_3c) {
        param_4 = -0x16;
        goto code_r0x080053c4;
    }
    unaff_x21 = *(param_1 + 0x88);
    if (unaff_x21 == 0) {
        param_4 = -1;
        goto code_r0x080053c4;
    }
    unaff_x22 = unaff_x21 + 0x48;
    if (uStack_3c <= *(param_1 + 0x78)) {
        uStack_3c = *(param_1 + 0x78);
    }
    *(param_1 + 0x80) = uStack_3c;
    mutex_lock(unaff_x22);
    uStack_40 = *(param_1 + 0x60);
    piVar7 = unaff_x21 + 0x30;
    piVar8 = *piVar7;
    iStack_44 = 0;
    if (piVar7 == piVar8) {
        uVar5 = 0;
    }
    else {
        iStack_44 = 0;
        uVar4 = 0;
        do {
            iStack_44 = *(piVar8 + -0xc) + iStack_44;
            puVar1 = piVar8 + -2;
            piVar8 = *piVar8;
            uVar5 = *puVar1;
            if (*puVar1 <= uVar4) {
                uVar5 = uVar4;
            }
            uVar4 = uVar5;
        } while (piVar7 != piVar8);
    }
    iVar9 = *(unaff_x21 + 0x10);
    iVar2 = *(iVar9 + 0x78);
    if (*(unaff_x21 + 8) == 0) {
        if (uVar5 <= *(iVar9 + 0x88)) {
            uVar5 = *(iVar9 + 0x88);
        }
        iVar10 = 0;
        if (iVar2 != 0) goto code_r0x08005324;
code_r0x08005354:
        iVar10 = 0;
        uStack_48 = 0;
code_r0x08005358:
        if (iVar10 != iVar2) goto code_r0x08005368;
    }
    else {
        iVar10 = 0;
        if (iVar2 == 0) goto code_r0x08005354;
code_r0x08005324:
        do {
            uStack_48 = *(*(iVar9 + 0x70) + iVar10 * 4);
            if (uVar5 <= uStack_48) goto code_r0x08005358;
            iVar10 = iVar10 + 1;
        } while (iVar2 != iVar10);
    }
    uStack_48 = *(*(iVar9 + 0x70) + (iVar2 - 1) * 4);
code_r0x08005368:
    if (uStack_48 == *(unaff_x21 + 0x18)) goto code_r0x080053a8;
    pcVar6 = *(unaff_x21 + 0x80);
    if (2 < (pcVar6 + -0x8003638 >> 3 | pcVar6 << 0x3d)) goto code_r0x08005410;
    while( true ) {
        iVar2 = (*pcVar6)(unaff_x21,&uStack_48,1);
        if (iVar2 < 0) {
            _printk(0x8001f84,iVar2);
        }
code_r0x080053a8:
        uVar3 = mutex_unlock(unaff_x22);
        auVar11._8_4_ = *(param_1 + 0x60);
        auVar11._0_8_ = uVar3;
        auVar11._12_4_ = 0;
code_r0x080053c4:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(auVar11._0_8_,auVar11._8_8_);
        pcVar6 = extraout_x8;
code_r0x08005410:
        __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar6,0x80017e0);
    }
    return param_4;
}


// ===== sym.attr_store.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt @ 0x080035a8 (size 8) =====

ulong sym.attr_store.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (1 < (pcVar2 + -0x80035a0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x80017c0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.init_module.cfi_jt @ 0x080035b0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.__traceiter_memlat_dev_update.cfi_jt @ 0x080035b8 (size 8) =====

ulong sym.__traceiter_memlat_dev_update.cfi_jt
                (ulong param_1,ulong param_2,uint param_3,ulong param_4,ulong param_5,ulong param_6,ulong param_7)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008338;
    piVar1 = *0x8008338;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6,param_7);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.qcom_dcvs_update_votes.cfi_jt @ 0x080035c0 (size 8) =====

ulong sym.qcom_dcvs_update_votes.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,int param_4)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_4 == 2) {
        uVar1 = sym.qcom_dcvs_percpu_update(param_1,param_2,param_3);
    }
    else if (param_4 == 1) {
        uVar1 = sym.qcom_dcvs_fp_update(param_1,param_2,param_3);
    }
    else if (param_4 == 0) {
        uVar1 = sym.qcom_dcvs_sp_update(param_1,param_2,param_3);
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.__traceiter_bw_hwmon_meas.cfi_jt @ 0x080035c8 (size 8) =====

ulong sym.__traceiter_bw_hwmon_meas.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008380;
    piVar1 = *0x8008380;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_qcom_dcvs_boost.cfi_jt @ 0x080035d0 (size 8) =====

ulong sym.__traceiter_qcom_dcvs_boost.cfi_jt
                (ulong param_1,uint param_2,uint param_3,ulong param_4,ulong param_5,ulong param_6)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80082a8;
    piVar1 = *0x80082a8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_bw_hwmon_debug.cfi_jt @ 0x080035d8 (size 8) =====

ulong sym.__traceiter_bw_hwmon_debug.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,ulong param_7
                ,ulong param_8)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008410;
    piVar1 = *0x8008410;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.boost_ddr_freq.cfi_jt @ 0x080035e0 (size 8) =====

void sym.boost_ddr_freq.cfi_jt
               (uint32_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,uint64_t param_5,
               uint64_t param_6)

{
    uint32_t *puVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    code *extraout_x8;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int iVar10;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t iVar11;
    ulong unaff_x30;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    iVar11 = *(_segment.ehdr + 0x60);
    if (iVar11 == 0) {
        uVar3 = 0xfffffff4;
        goto code_r0x080038f4;
    }
    if (*(iVar11 + 0x84) < param_1) {
        uVar3 = 0xffffffea;
        goto code_r0x080038f4;
    }
    unaff_x19 = *(iVar11 + 0x90);
    if (unaff_x19 == 0) {
        uVar3 = 0xffffffff;
        goto code_r0x080038f4;
    }
    unaff_x20 = unaff_x19 + 0x48;
    if (param_1 <= *(iVar11 + 0x80)) {
        param_1 = *(iVar11 + 0x80);
    }
    *(iVar11 + 0x88) = param_1;
    mutex_lock(unaff_x20);
    uStack_40 = *(iVar11 + 0x68);
    piVar7 = unaff_x19 + 0x30;
    piVar8 = *piVar7;
    uStack_44 = 0;
    if (piVar7 == piVar8) {
        uVar5 = 0;
    }
    else {
        uStack_44 = 0;
        uVar4 = 0;
        do {
            uStack_44 = *(piVar8 + -0xc) + uStack_44;
            puVar1 = piVar8 + -2;
            piVar8 = *piVar8;
            uVar5 = *puVar1;
            if (*puVar1 <= uVar4) {
                uVar5 = uVar4;
            }
            uVar4 = uVar5;
        } while (piVar7 != piVar8);
    }
    iVar9 = *(unaff_x19 + 0x10);
    iVar2 = *(iVar9 + 0x78);
    if (*(unaff_x19 + 8) == 0) {
        if (uVar5 <= *(iVar9 + 0x88)) {
            uVar5 = *(iVar9 + 0x88);
        }
        iVar10 = 0;
        if (iVar2 != 0) goto code_r0x08003850;
code_r0x08003880:
        iVar10 = 0;
        uStack_48 = 0;
code_r0x08003884:
        if (iVar10 != iVar2) goto code_r0x08003894;
    }
    else {
        iVar10 = 0;
        if (iVar2 == 0) goto code_r0x08003880;
code_r0x08003850:
        do {
            uStack_48 = *(*(iVar9 + 0x70) + iVar10 * 4);
            if (uVar5 <= uStack_48) goto code_r0x08003884;
            iVar10 = iVar10 + 1;
        } while (iVar2 != iVar10);
    }
    uStack_48 = *(*(iVar9 + 0x70) + (iVar2 - 1) * 4);
code_r0x08003894:
    if (uStack_48 == *(unaff_x19 + 0x18)) goto code_r0x080038d4;
    pcVar6 = *(unaff_x19 + 0x80);
    if (2 < (pcVar6 + -0x8003638 >> 3 | pcVar6 << 0x3d)) goto code_r0x0800393c;
    while( true ) {
        iVar2 = (*pcVar6)(unaff_x19,&uStack_48,1);
        if (iVar2 < 0) {
            _printk(0x8001f84,iVar2);
        }
code_r0x080038d4:
        mutex_unlock(unaff_x20);
        param_5 = uStack_48;
        param_6 = uStack_44;
        param_2 = *(iVar11 + 0x68);
        param_3 = *(unaff_x19 + 8);
        param_4 = *(iVar11 + 0x88);
        uVar3 = 0;
code_r0x080038f4:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(uVar3,param_2,param_3,param_4,param_5,param_6);
        pcVar6 = extraout_x8;
code_r0x0800393c:
        __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar6,0x8001720);
    }
    return;
}


// ===== sym.__bpf_trace_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080035e8 (size 8) =====

void sym.__bpf_trace_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt(ulong param_1,uint param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(param_1,param_2,param_3);
    return;
}


// ===== sym.trace_event_raw_event_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080035f0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006a1c)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6,
               int64_t *param_7,uint64_t param_8)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    int64_t *piVar26;
    uint64_t uVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    code *pcVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    char *pcVar33;
    uint64_t uVar34;
    char *pcVar35;
    uint64_t uVar36;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar37 [12];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    uchar auVar43 [16];
    int64_t iStack_690;
    int64_t *piStack_688;
    uint64_t uStack_680;
    uint32_t uStack_674;
    int64_t iStack_670;
    int64_t iStack_668;
    ulong **ppuStack_660;
    code *pcStack_658;
    code *pcStack_650;
    uint64_t uStack_648;
    ulong uStack_640;
    ulong uStack_638;
    uint32_t *puStack_630;
    uint64_t uStack_628;
    uint64_t uStack_620;
    int64_t iStack_618;
    int64_t *piStack_610;
    uint64_t uStack_608;
    ulong uStack_5f8;
    ulong uStack_5f0;
    ulong uStack_5e8;
    ulong uStack_5e0;
    ulong uStack_5d8;
    ulong uStack_5d0;
    int64_t iStack_5c8;
    ulong **ppuStack_5c0;
    ulong uStack_5b8;
    code *pcStack_5b0;
    ulong uStack_5a0;
    char *pcStack_598;
    int64_t *piStack_590;
    uint32_t *puStack_588;
    uint64_t uStack_580;
    uint64_t uStack_578;
    uint64_t uStack_570;
    uint64_t uStack_568;
    int64_t iStack_560;
    uint32_t uStack_554;
    int64_t iStack_550;
    int64_t iStack_548;
    ulong **ppuStack_540;
    code *pcStack_538;
    int64_t iStack_530;
    code *pcStack_528;
    char *pcStack_520;
    uint64_t uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    uint32_t *puStack_500;
    uint64_t uStack_4f8;
    uint64_t uStack_4f0;
    int64_t iStack_4e8;
    ulong uStack_4d8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    ulong uStack_4c0;
    ulong uStack_4b8;
    ulong uStack_4b0;
    int64_t iStack_4a8;
    ulong **ppuStack_4a0;
    ulong uStack_498;
    ulong uStack_490;
    char *pcStack_480;
    int64_t *piStack_478;
    uint32_t *puStack_470;
    uint64_t uStack_468;
    uint64_t uStack_460;
    uint64_t uStack_458;
    uchar auStack_450 [12];
    uint32_t uStack_444;
    int64_t iStack_440;
    int64_t iStack_438;
    ulong **ppuStack_430;
    code *pcStack_428;
    int64_t iStack_420;
    char *pcStack_418;
    char *pcStack_410;
    int64_t *piStack_408;
    uint64_t uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    uint32_t *puStack_3e8;
    uint64_t uStack_3e0;
    uint64_t uStack_3d8;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    int64_t iStack_398;
    ulong **ppuStack_390;
    ulong uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    uint64_t uStack_370;
    uint64_t uStack_368;
    code *pcStack_360;
    uint64_t uStack_358;
    uchar auStack_350 [8];
    int64_t iStack_348;
    int64_t *piStack_340;
    uint32_t uStack_334;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong **ppuStack_320;
    code *pcStack_318;
    uint64_t uStack_310;
    char *pcStack_308;
    uint64_t uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    int64_t iStack_2d0;
    int64_t *piStack_2c8;
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
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uchar auStack_230 [8];
    int64_t iStack_228;
    uint uStack_21c;
    uint uStack_218;
    uint32_t uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    code *pcStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    int64_t iStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uint32_t uStack_1a0;
    uint64_t auStack_198 [7];
    uchar **ppuStack_160;
    ulong uStack_158;
    uint32_t auStack_100 [2];
    uint32_t uStack_f8;
    uint32_t uStack_f4;
    int64_t iStack_f0;
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
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar29 = *(param_1 + 0x48);
    uVar20 = param_4;
    uVar21 = param_5;
    iVar14 = param_6;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = param_3;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(param_1), (uVar10 & 1) == 0))))
        goto code_r0x080068e0;
    }
    else {
code_r0x080068e0:
        puVar17 = 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = param_2;
            *(iVar11 + 0xc) = param_3;
            *(iVar11 + 0x10) = param_4;
            *(iVar11 + 0x18) = param_5;
            *(iVar11 + 0x20) = param_6;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar27 = auVar37._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_dcvs_boost;
    pcStack_d8 = sym.perf_trace_qcom_dcvs_boost;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    iVar11 = tpidr_el1;
    piVar24 = iVar11 + *(uVar27 + 0x78);
    uVar10 = uVar20;
    uVar22 = uVar21;
    iVar11 = iVar14;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((*(uVar27 + 0x80) != 0) || (puVar18 = puVar17, *piVar24 != 0)) {
        puVar18 = &uStack_f4;
        iVar12 = perf_trace_buf_alloc(0x2c,&iStack_f0);
        uVar34 = ___cpu_online_mask;
        if (iVar12 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            puVar18 = uStack_f4;
            uVar22 = 1;
            param_8 = 0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar34 & 0x3f)) & 0x8006944;
            *(iStack_f0 + 0x108) = 5;
            *(iVar12 + 8) = auVar37._8_4_;
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar20;
            *(iVar12 + 0x18) = uVar21;
            *(iVar12 + 0x20) = iVar14;
            iVar11 = iStack_f0;
            perf_trace_run_bpf_submit(iVar12,0x2c);
            uVar10 = uVar27;
            param_7 = piVar24;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    iVar12 = auVar38._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x8006a7c;
    uStack_158 = 0x8006a7c;
    iVar14 = sp_el0;
    auStack_198[6] = *(iVar14 + 0x5e0);
    uVar34 = *(iVar12 + 0x48);
    auStack_198[4] = 0;
    auStack_198[5] = 0;
    auStack_198[2] = 0;
    auStack_198[3] = 0;
    auStack_198[0] = 0;
    auStack_198[1] = 0;
    uVar29 = uVar34;
    uVar20 = uVar10;
    uVar21 = uVar22;
    iVar14 = iVar11;
    piVar24 = param_7;
    uVar27 = param_8;
    ppuStack_160 = &puStack_e0;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar35 = "(null)";
        if (auVar38._8_8_ != NULL) {
            pcVar35 = auVar38._8_8_;
        }
        auVar38._8_8_ = pcVar35;
        auVar38._0_8_ = iVar12;
        iVar9 = strlen(pcVar35);
        uVar29 = iVar9 + 1;
        uVar34 = uVar29;
        puVar17 = uVar29 + 0x38;
        iVar12 = trace_event_buffer_reserve(auStack_198,iVar12);
        auVar39._8_8_ = pcVar35;
        auVar39._0_8_ = iVar12;
        if (iVar12 != 0) {
            unaff_x28 = uStack_f8;
            uVar34 = auStack_100[0];
            *(iVar12 + 8) = uVar29 * 0x10000 | 0x38;
            strcpy(iVar12 + 0x38,pcVar35);
            *(iVar12 + 0xc) = puVar18;
            *(iVar12 + 0x10) = uVar10;
            *(iVar12 + 0x18) = uVar22;
            *(iVar12 + 0x20) = iVar11;
            *(iVar12 + 0x28) = param_7;
            *(iVar12 + 0x2c) = param_8;
            *(iVar12 + 0x30) = auStack_100[0];
            *(iVar12 + 0x34) = uStack_f8;
            trace_event_buffer_commit(auStack_198);
            auVar38 = auVar39;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == auStack_198[6]) {
        return;
    }
    auVar39 = __stack_chk_fail();
    uVar13 = auVar39._0_8_;
    *extraout_x18_01 = sym.perf_trace_memlat_dev_meas;
    pcStack_1f8 = sym.perf_trace_memlat_dev_meas;
    uStack_21c = SUB84(piVar24,0);
    uStack_218 = uVar27;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar39._8_8_ != NULL) {
        pcVar35 = auVar39._8_8_;
    }
    iStack_208 = *(iVar12 + 0x5e0);
    pcVar28 = sym.perf_trace_memlat_dev_meas;
    uVar30 = puVar17 & 0xffffffff;
    iStack_210 = 0;
    uStack_214 = 0;
    puVar19 = puVar17;
    uVar31 = uVar20;
    uVar23 = uVar21;
    iStack_228 = iVar14;
    ppuStack_200 = &ppuStack_160;
    uStack_1f0 = unaff_x28;
    uStack_1e8 = uVar34;
    uStack_1e0 = auVar38._8_8_;
    uStack_1d8 = auVar38._0_8_;
    uStack_1d0 = puVar18 & 0xffffffff;
    uStack_1c8 = uVar10;
    uStack_1c0 = uVar22;
    iStack_1b8 = iVar11;
    uStack_1b0 = param_7 & 0xffffffff;
    uStack_1a8 = param_8 & 0xffffffff;
    uVar10 = strlen(pcVar35);
    iVar11 = tpidr_el1;
    piVar26 = iVar11 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar26 != 0)) {
        iVar9 = uVar10;
        puVar19 = &uStack_214;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar34 = perf_trace_buf_alloc(unaff_x28,&iStack_210);
        if (uVar34 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_198[0];
            pcVar28 = auStack_198[0] & 0xffffffff;
            *(iStack_210 + 0xe8) = &ppuStack_200;
            *(iStack_210 + 0xf8) = auStack_230;
            uVar10 = uStack_1a0;
            *(iStack_210 + 0x100) = ~(-1L << uVar22) & 0x8006bd0;
            *(iStack_210 + 0x108) = 5;
            *(uVar34 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar34 + 0x38,pcVar35);
            puVar19 = uStack_214;
            *(uVar34 + 0x20) = iStack_228;
            uVar23 = 1;
            uVar27 = 0;
            *(uVar34 + 0xc) = puVar17;
            *(uVar34 + 0x10) = uVar20;
            *(uVar34 + 0x18) = uVar21;
            *(uVar34 + 0x28) = uStack_21c;
            *(uVar34 + 0x2c) = uStack_218;
            *(uVar34 + 0x30) = uStack_1a0;
            *(uVar34 + 0x34) = uVar8;
            uVar31 = uVar13;
            iVar14 = iStack_210;
            piVar24 = piVar26;
            perf_trace_run_bpf_submit(uVar34,unaff_x28);
            uVar22 = uVar34;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_208) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar12 = auVar40._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x8006d78;
    uStack_278 = 0x8006d78;
    iVar11 = sp_el0;
    iStack_288 = *(iVar11 + 0x5e0);
    uVar32 = *(iVar12 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar29 = uVar32;
    uVar34 = uVar31;
    uVar36 = uVar23;
    iVar11 = iVar14;
    piVar25 = piVar24;
    ppuStack_280 = &ppuStack_200;
    piStack_270 = piVar26;
    uStack_268 = uVar30;
    uStack_260 = uVar20;
    uStack_258 = uVar21;
    uStack_250 = uVar22;
    pcStack_248 = pcVar28;
    uStack_240 = uVar10;
    uStack_238 = uVar13;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar34 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar33 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar33 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar33;
        auVar40._0_8_ = iVar12;
        iVar9 = strlen(pcVar33);
        uVar29 = iVar9 + 1;
        uVar32 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar12 = trace_event_buffer_reserve(&uStack_2b8,iVar12);
        auVar4._8_8_ = pcVar33;
        auVar4._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar33);
            *(iVar12 + 0xc) = puVar19;
            *(iVar12 + 0x10) = uVar31;
            *(iVar12 + 0x18) = uVar23;
            *(iVar12 + 0x20) = iVar14;
            *(iVar12 + 0x28) = piVar24;
            trace_event_buffer_commit(&uStack_2b8);
            auVar40 = auVar4;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_288) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_03 = sym.perf_trace_memlat_dev_update;
    pcStack_318 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    pcVar33 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar33 = auVar38._8_8_;
    }
    iStack_328 = *(iVar12 + 0x5e0);
    uVar22 = puVar17 & 0xffffffff;
    iStack_330 = 0;
    uStack_334 = 0;
    puVar18 = puVar17;
    uVar21 = uVar34;
    uVar10 = uVar36;
    iStack_348 = iVar11;
    piStack_340 = piVar25;
    ppuStack_320 = &ppuStack_280;
    uStack_310 = unaff_x28;
    pcStack_308 = pcVar35;
    uStack_300 = uVar32;
    uStack_2f8 = auVar40._8_8_;
    uStack_2f0 = auVar40._0_8_;
    uStack_2e8 = puVar19 & 0xffffffff;
    uStack_2e0 = uVar31;
    uStack_2d8 = uVar23;
    iStack_2d0 = iVar14;
    piStack_2c8 = piVar24;
    iVar12 = strlen(pcVar33);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_334;
        pcVar35 = (iVar12 + 0x3cU & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(pcVar35,&iStack_330);
        if (uVar13 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_330 + 0xe8) = &ppuStack_320;
            *(iStack_330 + 0xf8) = auStack_350;
            *(iStack_330 + 0x100) = ~(-1L << uVar21) & 0x8006eb0;
            *(iStack_330 + 0x108) = 5;
            *(uVar13 + 8) = iVar12 * 0x10000 + 0x10030;
            strcpy(uVar13 + 0x30,pcVar33);
            puVar18 = uStack_334;
            uVar10 = 1;
            uVar27 = 0;
            *(uVar13 + 0xc) = puVar17;
            *(uVar13 + 0x10) = uVar34;
            *(uVar13 + 0x18) = uVar36;
            *(uVar13 + 0x20) = iStack_348;
            *(uVar13 + 0x28) = piStack_340;
            uVar21 = uVar20;
            iVar11 = iStack_330;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(uVar13,pcVar35);
            uVar23 = uVar13;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_328) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar16 = auVar41._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_04 = 0x8007040;
    uStack_388 = 0x8007040;
    pcStack_360 = sym.perf_trace_memlat_dev_update;
    iVar14 = sp_el0;
    iStack_398 = *(iVar14 + 0x5e0);
    uVar30 = *(iVar16 + 0x48);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uVar29 = uVar30;
    uVar13 = uVar21;
    uVar31 = uVar10;
    ppuStack_390 = &ppuStack_320;
    uStack_380 = uVar22;
    uStack_378 = uVar34;
    uStack_370 = uVar36;
    uStack_368 = uVar23;
    uStack_358 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar1 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar1;
        auVar41._0_8_ = iVar16;
        iVar9 = strlen(pcVar1);
        uVar29 = iVar9 + 1;
        uVar30 = uVar29;
        puVar17 = uVar29 + 0x28;
        iVar14 = trace_event_buffer_reserve(&uStack_3c8,iVar16);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar29 * 0x10000 | 0x24;
            strcpy(iVar14 + 0x24,pcVar1);
            *(iVar14 + 0x10) = puVar18;
            *(iVar14 + 0x18) = uVar21;
            *(iVar14 + 0x20) = uVar10;
            trace_event_buffer_commit(&uStack_3c8);
            auVar41 = auVar5;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_398) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_05 = sym.perf_trace_bw_hwmon_meas;
    pcStack_428 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar1 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar1 = auVar38._8_8_;
    }
    iStack_438 = *(iVar14 + 0x5e0);
    pcVar28 = sym.perf_trace_bw_hwmon_meas;
    uVar23 = uVar31 & 0xffffffff;
    iStack_440 = 0;
    uStack_444 = 0;
    puVar19 = puVar17;
    uVar22 = uVar13;
    uVar34 = uVar31;
    ppuStack_430 = &ppuStack_390;
    iStack_420 = iVar12;
    pcStack_418 = pcVar35;
    pcStack_410 = pcVar33;
    piStack_408 = piVar24;
    uStack_400 = uVar30;
    uStack_3f8 = auVar41._8_8_;
    uStack_3f0 = auVar41._0_8_;
    puStack_3e8 = puVar18;
    uStack_3e0 = uVar21;
    uStack_3d8 = uVar10 & 0xffffffff;
    uVar15 = strlen(pcVar1);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar19 = &uStack_444;
        pcVar33 = (uVar15 + 0x34U & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(pcVar33,&iStack_440);
        if (iVar14 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_440 + 0xe8) = &ppuStack_430;
            *(iStack_440 + 0xf8) = auStack_450;
            *(iStack_440 + 0x100) = ~(-1L << uVar21) & 0x8007164;
            *(iStack_440 + 0x108) = 5;
            *(iVar14 + 8) = uVar15 * 0x10000 + 0x10024;
            strcpy(iVar14 + 0x24,pcVar1);
            puVar19 = uStack_444;
            uVar34 = 1;
            uVar27 = 0;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar13;
            *(iVar14 + 0x20) = uVar31;
            uVar22 = uVar20;
            iVar11 = iStack_440;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(iVar14,pcVar33);
            iVar12 = iVar14;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_438) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar16 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_06 = 0x80072e4;
    uStack_498 = 0x80072e4;
    iVar14 = sp_el0;
    iStack_4a8 = *(iVar14 + 0x5e0);
    uVar31 = *(iVar16 + 0x48);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uVar29 = uVar31;
    uVar21 = uVar22;
    uVar10 = uVar34;
    iVar14 = iVar11;
    ppuStack_4a0 = &ppuStack_430;
    uStack_490 = uVar15;
    pcStack_480 = pcVar1;
    piStack_478 = piVar24;
    puStack_470 = puVar17;
    uStack_468 = uVar13;
    uStack_460 = uVar23;
    uStack_458 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar35 = "(null)";
        if (auVar42._8_8_ != NULL) {
            pcVar35 = auVar42._8_8_;
        }
        auVar42._8_8_ = pcVar35;
        auVar42._0_8_ = iVar16;
        iVar9 = strlen(pcVar35);
        uVar29 = iVar9 + 1;
        uVar31 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar16 = trace_event_buffer_reserve(&uStack_4d8,iVar16);
        auVar6._8_8_ = pcVar35;
        auVar6._0_8_ = iVar16;
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar16 + 0x30,pcVar35);
            *(iVar16 + 0x10) = puVar19;
            *(iVar16 + 0x18) = uVar22;
            *(iVar16 + 0x20) = uVar34;
            *(iVar16 + 0x28) = iVar11;
            trace_event_buffer_commit(&uStack_4d8);
            auVar42 = auVar6;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_4a8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_07 = sym.perf_trace_bw_hwmon_update;
    pcStack_538 = sym.perf_trace_bw_hwmon_update;
    pcStack_528 = sym.perf_trace_bw_hwmon_meas;
    iVar16 = sp_el0;
    pcVar35 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar35 = auVar38._8_8_;
    }
    iStack_548 = *(iVar16 + 0x5e0);
    iStack_550 = 0;
    uStack_554 = 0;
    puVar18 = puVar17;
    uVar13 = uVar21;
    uVar23 = uVar10;
    iStack_560 = iVar14;
    ppuStack_540 = &ppuStack_4a0;
    iStack_530 = iVar12;
    pcStack_520 = pcVar33;
    uStack_518 = uVar31;
    uStack_510 = auVar42._8_8_;
    uStack_508 = auVar42._0_8_;
    puStack_500 = puVar19;
    uStack_4f8 = uVar22;
    uStack_4f0 = uVar34;
    iStack_4e8 = iVar11;
    uVar15 = strlen(pcVar35);
    iVar11 = tpidr_el1;
    piVar24 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_554;
        pcVar28 = (uVar15 + 0x3cU & 0xfffffff8) - 4;
        uVar22 = perf_trace_buf_alloc(pcVar28,&iStack_550);
        if (uVar22 != 0) {
            uVar27 = ___cpu_online_mask & 0x3f;
            *(iStack_550 + 0xe8) = &ppuStack_540;
            *(iStack_550 + 0xf8) = &iStack_560;
            *(iStack_550 + 0x100) = ~(-1L << uVar27) & 0x8007414;
            *(iStack_550 + 0x108) = 5;
            *(uVar22 + 8) = uVar15 * 0x10000 + 0x10030;
            strcpy(uVar22 + 0x30,pcVar35);
            puVar18 = uStack_554;
            uVar23 = 1;
            uVar27 = 0;
            *(uVar22 + 0x10) = puVar17;
            *(uVar22 + 0x18) = uVar21;
            *(uVar22 + 0x20) = uVar10;
            *(uVar22 + 0x28) = iStack_560;
            uVar13 = uVar20;
            iVar14 = iStack_550;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(uVar22,pcVar28);
            uVar34 = uVar22;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_548) {
        return;
    }
    auVar43 = __stack_chk_fail();
    iVar12 = auVar43._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_08 = 0x800759c;
    uStack_5b8 = 0x800759c;
    iVar11 = sp_el0;
    iStack_5c8 = *(iVar11 + 0x5e0);
    uVar36 = *(iVar12 + 0x48);
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uVar29 = uVar36;
    uVar22 = uVar13;
    uVar31 = uVar23;
    iVar11 = iVar14;
    piVar26 = piVar25;
    uVar30 = uVar27;
    ppuStack_5c0 = &ppuStack_540;
    pcStack_5b0 = pcVar28;
    uStack_5a0 = uVar15;
    pcStack_598 = pcVar35;
    piStack_590 = piVar24;
    puStack_588 = puVar17;
    uStack_580 = uVar21;
    uStack_578 = uVar10;
    uStack_570 = uVar34;
    uStack_568 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar22 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) != 0) ||
           (((uVar29 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar35 = "(null)";
    if (auVar43._8_8_ != NULL) {
        pcVar35 = auVar43._8_8_;
    }
    auVar43._8_8_ = pcVar35;
    auVar43._0_8_ = iVar12;
    iVar9 = strlen(pcVar35);
    uVar29 = iVar9 + 1;
    uVar36 = uVar29;
    puVar17 = uVar29 + 0x40;
    iVar12 = trace_event_buffer_reserve(&uStack_5f8,iVar12);
    auVar7._8_8_ = pcVar35;
    auVar7._0_8_ = iVar12;
    if (iVar12 != 0) {
        *(iVar12 + 8) = uVar29 * 0x10000 | 0x40;
        strcpy(iVar12 + 0x40,pcVar35);
        *(iVar12 + 0x10) = puVar18;
        *(iVar12 + 0x18) = uVar13;
        *(iVar12 + 0x20) = uVar23;
        *(iVar12 + 0x28) = iVar14;
        *(iVar12 + 0x30) = piVar25;
        *(iVar12 + 0x38) = uVar27;
        trace_event_buffer_commit(&uStack_5f8);
        auVar43 = auVar7;
    }
code_r0x080076a0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_5c8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_09 = sym.perf_trace_bw_hwmon_debug;
    pcStack_658 = sym.perf_trace_bw_hwmon_debug;
    pcStack_650 = sym.perf_trace_bw_hwmon_update;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar35 = auVar38._8_8_;
    }
    iStack_668 = *(iVar12 + 0x5e0);
    iStack_670 = 0;
    uStack_674 = 0;
    puVar19 = puVar17;
    uVar21 = uVar22;
    iStack_690 = iVar11;
    piStack_688 = piVar26;
    uStack_680 = uVar30;
    ppuStack_660 = &ppuStack_5c0;
    uStack_648 = uVar36;
    uStack_640 = auVar43._8_8_;
    uStack_638 = auVar43._0_8_;
    puStack_630 = puVar18;
    uStack_628 = uVar13;
    uStack_620 = uVar23;
    iStack_618 = iVar14;
    piStack_610 = piVar25;
    uStack_608 = uVar27;
    iVar9 = strlen(pcVar35);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar19 = &uStack_674;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(iVar2,&iStack_670,puVar19);
        if (iVar14 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_670 + 0xe8) = &ppuStack_660;
            *(iStack_670 + 0xf8) = &iStack_690;
            *(iStack_670 + 0x100) = ~(-1L << uVar21) & 0x80076e0;
            *(iStack_670 + 0x108) = 5;
            *(iVar14 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar14 + 0x40,pcVar35);
            puVar19 = uStack_674;
            *(iVar14 + 0x20) = uVar31;
            *(iVar14 + 0x28) = iStack_690;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar22;
            *(iVar14 + 0x30) = piStack_688;
            *(iVar14 + 0x38) = uStack_680;
            perf_trace_run_bpf_submit(iVar14,iVar2,puVar19,uVar20,1,iStack_670,piVar24,0);
            uVar21 = uVar20;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_668) {
        auVar38 = __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_10 = 0x8007878;
        bpf_trace_run8(auVar38._0_8_,auVar38._8_8_,puVar19 & 0xffffffff,uVar21 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080035f8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (uint64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6,
               int64_t *param_7,uint64_t param_8)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong uVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    int64_t *piVar22;
    int64_t *piVar23;
    int64_t *piVar24;
    uint64_t uVar25;
    uint64_t uVar26;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    code *pcVar27;
    uint32_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    char *pcVar33;
    uint64_t uVar34;
    char *pcVar35;
    uint64_t uVar36;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    int64_t iStack_600;
    int64_t *piStack_5f8;
    uint64_t uStack_5f0;
    uint32_t uStack_5e4;
    int64_t iStack_5e0;
    int64_t iStack_5d8;
    ulong **ppuStack_5d0;
    code *pcStack_5c8;
    code *pcStack_5c0;
    uint64_t uStack_5b8;
    ulong uStack_5b0;
    ulong uStack_5a8;
    uint32_t *puStack_5a0;
    uint64_t uStack_598;
    uint64_t uStack_590;
    int64_t iStack_588;
    int64_t *piStack_580;
    uint64_t uStack_578;
    ulong uStack_568;
    ulong uStack_560;
    ulong uStack_558;
    ulong uStack_550;
    ulong uStack_548;
    ulong uStack_540;
    int64_t iStack_538;
    ulong **ppuStack_530;
    ulong uStack_528;
    code *pcStack_520;
    ulong uStack_510;
    char *pcStack_508;
    int64_t *piStack_500;
    uint32_t *puStack_4f8;
    uint64_t uStack_4f0;
    uint64_t uStack_4e8;
    uint64_t uStack_4e0;
    uint64_t uStack_4d8;
    int64_t iStack_4d0;
    uint32_t uStack_4c4;
    int64_t iStack_4c0;
    int64_t iStack_4b8;
    ulong **ppuStack_4b0;
    code *pcStack_4a8;
    int64_t iStack_4a0;
    code *pcStack_498;
    char *pcStack_490;
    uint64_t uStack_488;
    ulong uStack_480;
    ulong uStack_478;
    uint32_t *puStack_470;
    uint64_t uStack_468;
    uint64_t uStack_460;
    int64_t iStack_458;
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    int64_t iStack_418;
    ulong **ppuStack_410;
    ulong uStack_408;
    ulong uStack_400;
    char *pcStack_3f0;
    int64_t *piStack_3e8;
    uint32_t *puStack_3e0;
    uint64_t uStack_3d8;
    uint64_t uStack_3d0;
    uint64_t uStack_3c8;
    uchar auStack_3c0 [12];
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    ulong **ppuStack_3a0;
    code *pcStack_398;
    int64_t iStack_390;
    char *pcStack_388;
    char *pcStack_380;
    int64_t *piStack_378;
    uint64_t uStack_370;
    ulong uStack_368;
    ulong uStack_360;
    uint32_t *puStack_358;
    uint64_t uStack_350;
    uint64_t uStack_348;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    int64_t iStack_308;
    ulong **ppuStack_300;
    ulong uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    code *pcStack_2d0;
    uint64_t uStack_2c8;
    uchar auStack_2c0 [8];
    int64_t iStack_2b8;
    int64_t *piStack_2b0;
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    uint64_t uStack_280;
    char *pcStack_278;
    uint64_t uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    int64_t iStack_240;
    int64_t *piStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    ulong uStack_1e8;
    int64_t *piStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    code *pcStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uchar auStack_1a0 [8];
    int64_t iStack_198;
    uint uStack_18c;
    uint uStack_188;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint32_t uStack_110;
    uint64_t auStack_108 [7];
    uchar *puStack_d0;
    ulong uStack_c8;
    uint32_t auStack_70 [2];
    uint32_t uStack_68;
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(param_1 + 0x78);
    uVar13 = param_4;
    uVar20 = param_5;
    iVar16 = param_6;
    if ((*(param_1 + 0x80) != 0) || (puVar17 = param_3, *piVar22 != 0)) {
        puVar17 = &uStack_64;
        iVar10 = perf_trace_buf_alloc(0x2c,&iStack_60);
        uVar26 = ___cpu_online_mask;
        if (iVar10 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar17 = uStack_64;
            uVar26 = -1L << (uVar26 & 0x3f);
            uVar20 = 1;
            uVar13 = (~uVar26 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar13 = uVar26 | unaff_x30;
            }
            param_8 = 0;
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar13;
            *(iStack_60 + 0x108) = 5;
            *(iVar10 + 8) = param_2;
            *(iVar10 + 0xc) = param_3;
            *(iVar10 + 0x10) = param_4;
            *(iVar10 + 0x18) = param_5;
            *(iVar10 + 0x20) = param_6;
            iVar16 = iStack_60;
            perf_trace_run_bpf_submit(iVar10,0x2c);
            uVar13 = param_1;
            param_7 = piVar22;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar12 = auVar37._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18 = 0x8006a7c;
    uStack_c8 = 0x8006a7c;
    iVar10 = sp_el0;
    auStack_108[6] = *(iVar10 + 0x5e0);
    uVar34 = *(iVar12 + 0x48);
    auStack_108[4] = 0;
    auStack_108[5] = 0;
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    auStack_108[0] = 0;
    auStack_108[1] = 0;
    uVar28 = uVar34;
    uVar26 = uVar13;
    uVar29 = uVar20;
    iVar10 = iVar16;
    piVar22 = param_7;
    uVar25 = param_8;
    puStack_d0 = &stack0xffffffffffffffb0;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar18 = puVar17;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar26 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar11 = trace_event_ignore_this_pid(iVar12), (uVar11 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar35 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar35 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar35;
        auVar37._0_8_ = iVar12;
        iVar9 = strlen(pcVar35);
        uVar28 = iVar9 + 1;
        uVar34 = uVar28;
        puVar18 = uVar28 + 0x38;
        iVar12 = trace_event_buffer_reserve(auStack_108,iVar12);
        auVar38._8_8_ = pcVar35;
        auVar38._0_8_ = iVar12;
        if (iVar12 != 0) {
            unaff_x28 = uStack_68;
            uVar34 = auStack_70[0];
            *(iVar12 + 8) = uVar28 * 0x10000 | 0x38;
            strcpy(iVar12 + 0x38,pcVar35);
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar13;
            *(iVar12 + 0x18) = uVar20;
            *(iVar12 + 0x20) = iVar16;
            *(iVar12 + 0x28) = param_7;
            *(iVar12 + 0x2c) = param_8;
            *(iVar12 + 0x30) = auStack_70[0];
            *(iVar12 + 0x34) = uStack_68;
            trace_event_buffer_commit(auStack_108);
            auVar37 = auVar38;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == auStack_108[6]) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar11 = auVar38._0_8_;
    *extraout_x18_00 = sym.perf_trace_memlat_dev_meas;
    pcStack_168 = sym.perf_trace_memlat_dev_meas;
    uStack_18c = SUB84(piVar22,0);
    uStack_188 = uVar25;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar35 = auVar38._8_8_;
    }
    iStack_178 = *(iVar12 + 0x5e0);
    pcVar27 = sym.perf_trace_memlat_dev_meas;
    uVar30 = puVar18 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    puVar19 = puVar18;
    uVar31 = uVar26;
    uVar21 = uVar29;
    iStack_198 = iVar10;
    ppuStack_170 = &puStack_d0;
    uStack_160 = unaff_x28;
    uStack_158 = uVar34;
    uStack_150 = auVar37._8_8_;
    uStack_148 = auVar37._0_8_;
    uStack_140 = puVar17 & 0xffffffff;
    uStack_138 = uVar13;
    uStack_130 = uVar20;
    iStack_128 = iVar16;
    uStack_120 = param_7 & 0xffffffff;
    uStack_118 = param_8 & 0xffffffff;
    uVar13 = strlen(pcVar35);
    iVar16 = tpidr_el1;
    piVar24 = iVar16 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar24 != 0)) {
        iVar9 = uVar13;
        puVar19 = &uStack_184;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar34 = perf_trace_buf_alloc(unaff_x28,&iStack_180);
        if (uVar34 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_108[0];
            pcVar27 = auStack_108[0] & 0xffffffff;
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = auStack_1a0;
            uVar13 = uStack_110;
            *(iStack_180 + 0x100) = ~(-1L << uVar20) & 0x8006bd0;
            *(iStack_180 + 0x108) = 5;
            *(uVar34 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar34 + 0x38,pcVar35);
            puVar19 = uStack_184;
            *(uVar34 + 0x20) = iStack_198;
            uVar21 = 1;
            uVar25 = 0;
            *(uVar34 + 0xc) = puVar18;
            *(uVar34 + 0x10) = uVar26;
            *(uVar34 + 0x18) = uVar29;
            *(uVar34 + 0x28) = uStack_18c;
            *(uVar34 + 0x2c) = uStack_188;
            *(uVar34 + 0x30) = uStack_110;
            *(uVar34 + 0x34) = uVar8;
            uVar31 = uVar11;
            iVar10 = iStack_180;
            piVar22 = piVar24;
            perf_trace_run_bpf_submit(uVar34,unaff_x28);
            uVar20 = uVar34;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_178) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar12 = auVar39._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_01 = 0x8006d78;
    uStack_1e8 = 0x8006d78;
    iVar16 = sp_el0;
    iStack_1f8 = *(iVar16 + 0x5e0);
    uVar32 = *(iVar12 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar28 = uVar32;
    uVar34 = uVar31;
    uVar36 = uVar21;
    iVar16 = iVar10;
    piVar23 = piVar22;
    ppuStack_1f0 = &ppuStack_170;
    piStack_1e0 = piVar24;
    uStack_1d8 = uVar30;
    uStack_1d0 = uVar26;
    uStack_1c8 = uVar29;
    uStack_1c0 = uVar20;
    pcStack_1b8 = pcVar27;
    uStack_1b0 = uVar13;
    uStack_1a8 = uVar11;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar34 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar33 = "(null)";
        if (auVar39._8_8_ != NULL) {
            pcVar33 = auVar39._8_8_;
        }
        auVar39._8_8_ = pcVar33;
        auVar39._0_8_ = iVar12;
        iVar9 = strlen(pcVar33);
        uVar28 = iVar9 + 1;
        uVar32 = uVar28;
        puVar17 = uVar28 + 0x30;
        iVar12 = trace_event_buffer_reserve(&uStack_228,iVar12);
        auVar4._8_8_ = pcVar33;
        auVar4._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar28 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar33);
            *(iVar12 + 0xc) = puVar19;
            *(iVar12 + 0x10) = uVar31;
            *(iVar12 + 0x18) = uVar21;
            *(iVar12 + 0x20) = iVar10;
            *(iVar12 + 0x28) = piVar22;
            trace_event_buffer_commit(&uStack_228);
            auVar39 = auVar4;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_02 = sym.perf_trace_memlat_dev_update;
    pcStack_288 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    pcVar33 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar33 = auVar37._8_8_;
    }
    iStack_298 = *(iVar12 + 0x5e0);
    uVar29 = puVar17 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar18 = puVar17;
    uVar20 = uVar34;
    uVar26 = uVar36;
    iStack_2b8 = iVar16;
    piStack_2b0 = piVar23;
    ppuStack_290 = &ppuStack_1f0;
    uStack_280 = unaff_x28;
    pcStack_278 = pcVar35;
    uStack_270 = uVar32;
    uStack_268 = auVar39._8_8_;
    uStack_260 = auVar39._0_8_;
    uStack_258 = puVar19 & 0xffffffff;
    uStack_250 = uVar31;
    uStack_248 = uVar21;
    iStack_240 = iVar10;
    piStack_238 = piVar22;
    iVar12 = strlen(pcVar33);
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar18 = &uStack_2a4;
        pcVar35 = (iVar12 + 0x3cU & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(pcVar35,&iStack_2a0);
        if (uVar11 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_2a0 + 0xe8) = &ppuStack_290;
            *(iStack_2a0 + 0xf8) = auStack_2c0;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar20) & 0x8006eb0;
            *(iStack_2a0 + 0x108) = 5;
            *(uVar11 + 8) = iVar12 * 0x10000 + 0x10030;
            strcpy(uVar11 + 0x30,pcVar33);
            puVar18 = uStack_2a4;
            uVar26 = 1;
            uVar25 = 0;
            *(uVar11 + 0xc) = puVar17;
            *(uVar11 + 0x10) = uVar34;
            *(uVar11 + 0x18) = uVar36;
            *(uVar11 + 0x20) = iStack_2b8;
            *(uVar11 + 0x28) = piStack_2b0;
            uVar20 = uVar13;
            iVar16 = iStack_2a0;
            piVar23 = piVar22;
            perf_trace_run_bpf_submit(uVar11,pcVar35);
            uVar21 = uVar11;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_298) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar15 = auVar40._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_03 = 0x8007040;
    uStack_2f8 = 0x8007040;
    pcStack_2d0 = sym.perf_trace_memlat_dev_update;
    iVar10 = sp_el0;
    iStack_308 = *(iVar10 + 0x5e0);
    uVar30 = *(iVar15 + 0x48);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uVar28 = uVar30;
    uVar11 = uVar20;
    uVar31 = uVar26;
    ppuStack_300 = &ppuStack_290;
    uStack_2f0 = uVar29;
    uStack_2e8 = uVar34;
    uStack_2e0 = uVar36;
    uStack_2d8 = uVar21;
    uStack_2c8 = uVar13;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar15), (uVar13 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar1 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar1;
        auVar40._0_8_ = iVar15;
        iVar9 = strlen(pcVar1);
        uVar28 = iVar9 + 1;
        uVar30 = uVar28;
        puVar17 = uVar28 + 0x28;
        iVar10 = trace_event_buffer_reserve(&uStack_338,iVar15);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar28 * 0x10000 | 0x24;
            strcpy(iVar10 + 0x24,pcVar1);
            *(iVar10 + 0x10) = puVar18;
            *(iVar10 + 0x18) = uVar20;
            *(iVar10 + 0x20) = uVar26;
            trace_event_buffer_commit(&uStack_338);
            auVar40 = auVar5;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_308) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_04 = sym.perf_trace_bw_hwmon_meas;
    pcStack_398 = sym.perf_trace_bw_hwmon_meas;
    iVar10 = sp_el0;
    pcVar1 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar1 = auVar37._8_8_;
    }
    iStack_3a8 = *(iVar10 + 0x5e0);
    pcVar27 = sym.perf_trace_bw_hwmon_meas;
    uVar21 = uVar31 & 0xffffffff;
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    puVar19 = puVar17;
    uVar29 = uVar11;
    uVar34 = uVar31;
    ppuStack_3a0 = &ppuStack_300;
    iStack_390 = iVar12;
    pcStack_388 = pcVar35;
    pcStack_380 = pcVar33;
    piStack_378 = piVar22;
    uStack_370 = uVar30;
    uStack_368 = auVar40._8_8_;
    uStack_360 = auVar40._0_8_;
    puStack_358 = puVar18;
    uStack_350 = uVar20;
    uStack_348 = uVar26 & 0xffffffff;
    uVar14 = strlen(pcVar1);
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar19 = &uStack_3b4;
        pcVar33 = (uVar14 + 0x34U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(pcVar33,&iStack_3b0);
        if (iVar10 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_3b0 + 0xe8) = &ppuStack_3a0;
            *(iStack_3b0 + 0xf8) = auStack_3c0;
            *(iStack_3b0 + 0x100) = ~(-1L << uVar20) & 0x8007164;
            *(iStack_3b0 + 0x108) = 5;
            *(iVar10 + 8) = uVar14 * 0x10000 + 0x10024;
            strcpy(iVar10 + 0x24,pcVar1);
            puVar19 = uStack_3b4;
            uVar34 = 1;
            uVar25 = 0;
            *(iVar10 + 0x10) = puVar17;
            *(iVar10 + 0x18) = uVar11;
            *(iVar10 + 0x20) = uVar31;
            uVar29 = uVar13;
            iVar16 = iStack_3b0;
            piVar23 = piVar22;
            perf_trace_run_bpf_submit(iVar10,pcVar33);
            iVar12 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar15 = auVar41._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_05 = 0x80072e4;
    uStack_408 = 0x80072e4;
    iVar10 = sp_el0;
    iStack_418 = *(iVar10 + 0x5e0);
    uVar31 = *(iVar15 + 0x48);
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uVar28 = uVar31;
    uVar20 = uVar29;
    uVar26 = uVar34;
    iVar10 = iVar16;
    ppuStack_410 = &ppuStack_3a0;
    uStack_400 = uVar14;
    pcStack_3f0 = pcVar1;
    piStack_3e8 = piVar22;
    puStack_3e0 = puVar17;
    uStack_3d8 = uVar11;
    uStack_3d0 = uVar21;
    uStack_3c8 = uVar13;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar15), (uVar13 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar35 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar35 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar35;
        auVar41._0_8_ = iVar15;
        iVar9 = strlen(pcVar35);
        uVar28 = iVar9 + 1;
        uVar31 = uVar28;
        puVar17 = uVar28 + 0x30;
        iVar15 = trace_event_buffer_reserve(&uStack_448,iVar15);
        auVar6._8_8_ = pcVar35;
        auVar6._0_8_ = iVar15;
        if (iVar15 != 0) {
            *(iVar15 + 8) = uVar28 * 0x10000 | 0x30;
            strcpy(iVar15 + 0x30,pcVar35);
            *(iVar15 + 0x10) = puVar19;
            *(iVar15 + 0x18) = uVar29;
            *(iVar15 + 0x20) = uVar34;
            *(iVar15 + 0x28) = iVar16;
            trace_event_buffer_commit(&uStack_448);
            auVar41 = auVar6;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_418) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_06 = sym.perf_trace_bw_hwmon_update;
    pcStack_4a8 = sym.perf_trace_bw_hwmon_update;
    pcStack_498 = sym.perf_trace_bw_hwmon_meas;
    iVar15 = sp_el0;
    pcVar35 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar35 = auVar37._8_8_;
    }
    iStack_4b8 = *(iVar15 + 0x5e0);
    iStack_4c0 = 0;
    uStack_4c4 = 0;
    puVar18 = puVar17;
    uVar11 = uVar20;
    uVar21 = uVar26;
    iStack_4d0 = iVar10;
    ppuStack_4b0 = &ppuStack_410;
    iStack_4a0 = iVar12;
    pcStack_490 = pcVar33;
    uStack_488 = uVar31;
    uStack_480 = auVar41._8_8_;
    uStack_478 = auVar41._0_8_;
    puStack_470 = puVar19;
    uStack_468 = uVar29;
    uStack_460 = uVar34;
    iStack_458 = iVar16;
    uVar14 = strlen(pcVar35);
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar18 = &uStack_4c4;
        pcVar27 = (uVar14 + 0x3cU & 0xfffffff8) - 4;
        uVar29 = perf_trace_buf_alloc(pcVar27,&iStack_4c0);
        if (uVar29 != 0) {
            uVar25 = ___cpu_online_mask & 0x3f;
            *(iStack_4c0 + 0xe8) = &ppuStack_4b0;
            *(iStack_4c0 + 0xf8) = &iStack_4d0;
            *(iStack_4c0 + 0x100) = ~(-1L << uVar25) & 0x8007414;
            *(iStack_4c0 + 0x108) = 5;
            *(uVar29 + 8) = uVar14 * 0x10000 + 0x10030;
            strcpy(uVar29 + 0x30,pcVar35);
            puVar18 = uStack_4c4;
            uVar21 = 1;
            uVar25 = 0;
            *(uVar29 + 0x10) = puVar17;
            *(uVar29 + 0x18) = uVar20;
            *(uVar29 + 0x20) = uVar26;
            *(uVar29 + 0x28) = iStack_4d0;
            uVar11 = uVar13;
            iVar10 = iStack_4c0;
            piVar23 = piVar22;
            perf_trace_run_bpf_submit(uVar29,pcVar27);
            uVar34 = uVar29;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_4b8) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar12 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_07 = 0x800759c;
    uStack_528 = 0x800759c;
    iVar16 = sp_el0;
    iStack_538 = *(iVar16 + 0x5e0);
    uVar36 = *(iVar12 + 0x48);
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uVar28 = uVar36;
    uVar29 = uVar11;
    uVar31 = uVar21;
    iVar16 = iVar10;
    piVar24 = piVar23;
    uVar30 = uVar25;
    ppuStack_530 = &ppuStack_4b0;
    pcStack_520 = pcVar27;
    uStack_510 = uVar14;
    pcStack_508 = pcVar35;
    piStack_500 = piVar22;
    puStack_4f8 = puVar17;
    uStack_4f0 = uVar20;
    uStack_4e8 = uVar26;
    uStack_4e0 = uVar34;
    uStack_4d8 = uVar13;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar29 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) != 0) ||
           (((uVar28 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar35 = "(null)";
    if (auVar42._8_8_ != NULL) {
        pcVar35 = auVar42._8_8_;
    }
    auVar42._8_8_ = pcVar35;
    auVar42._0_8_ = iVar12;
    iVar9 = strlen(pcVar35);
    uVar28 = iVar9 + 1;
    uVar36 = uVar28;
    puVar17 = uVar28 + 0x40;
    iVar12 = trace_event_buffer_reserve(&uStack_568,iVar12);
    auVar7._8_8_ = pcVar35;
    auVar7._0_8_ = iVar12;
    if (iVar12 != 0) {
        *(iVar12 + 8) = uVar28 * 0x10000 | 0x40;
        strcpy(iVar12 + 0x40,pcVar35);
        *(iVar12 + 0x10) = puVar18;
        *(iVar12 + 0x18) = uVar11;
        *(iVar12 + 0x20) = uVar21;
        *(iVar12 + 0x28) = iVar10;
        *(iVar12 + 0x30) = piVar23;
        *(iVar12 + 0x38) = uVar25;
        trace_event_buffer_commit(&uStack_568);
        auVar42 = auVar7;
    }
code_r0x080076a0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_538) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_08 = sym.perf_trace_bw_hwmon_debug;
    pcStack_5c8 = sym.perf_trace_bw_hwmon_debug;
    pcStack_5c0 = sym.perf_trace_bw_hwmon_update;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar35 = auVar37._8_8_;
    }
    iStack_5d8 = *(iVar12 + 0x5e0);
    iStack_5e0 = 0;
    uStack_5e4 = 0;
    puVar19 = puVar17;
    uVar20 = uVar29;
    iStack_600 = iVar16;
    piStack_5f8 = piVar24;
    uStack_5f0 = uVar30;
    ppuStack_5d0 = &ppuStack_530;
    uStack_5b8 = uVar36;
    uStack_5b0 = auVar42._8_8_;
    uStack_5a8 = auVar42._0_8_;
    puStack_5a0 = puVar18;
    uStack_598 = uVar11;
    uStack_590 = uVar21;
    iStack_588 = iVar10;
    piStack_580 = piVar23;
    uStack_578 = uVar25;
    iVar9 = strlen(pcVar35);
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar19 = &uStack_5e4;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar16 = perf_trace_buf_alloc(iVar2,&iStack_5e0,puVar19);
        if (iVar16 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_5e0 + 0xe8) = &ppuStack_5d0;
            *(iStack_5e0 + 0xf8) = &iStack_600;
            *(iStack_5e0 + 0x100) = ~(-1L << uVar20) & 0x80076e0;
            *(iStack_5e0 + 0x108) = 5;
            *(iVar16 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar16 + 0x40,pcVar35);
            puVar19 = uStack_5e4;
            *(iVar16 + 0x20) = uVar31;
            *(iVar16 + 0x28) = iStack_600;
            *(iVar16 + 0x10) = puVar17;
            *(iVar16 + 0x18) = uVar29;
            *(iVar16 + 0x30) = piStack_5f8;
            *(iVar16 + 0x38) = uStack_5f0;
            perf_trace_run_bpf_submit(iVar16,iVar2,puVar19,uVar13,1,iStack_5e0,piVar22,0);
            uVar20 = uVar13;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) != iStack_5d8) {
        auVar37 = __stack_chk_fail();
        uVar14 = tpidr_el2;
        *extraout_x18_09 = 0x8007878;
        bpf_trace_run8(auVar37._0_8_,auVar37._8_8_,puVar19 & 0xffffffff,uVar20 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.qcom_dcvs_kobject_get.cfi_jt @ 0x08003600 (size 8) =====

int64_t sym.qcom_dcvs_kobject_get.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if (4 < param_1) {
        return -0x16;
    }
    if (*(_segment.ehdr + 0x88) != '\0') {
        iVar2 = _segment.ehdr;
        if (param_1 != 4) {
            iVar2 = *(_segment.ehdr + param_1 * 8 + 0x60);
            if (iVar2 == 0) {
                return -0x13;
            }
            iVar2 = iVar2 + 8;
        }
        iVar1 = -0x13;
        if ((*(iVar2 + 0x3c) & 1) != 0) {
            iVar1 = iVar2;
        }
        return iVar1;
    }
    return -0x205;
}


// ===== sym.qcom_dcvs_unregister_voter.cfi_jt @ 0x08003608 (size 8) =====

uint sym.qcom_dcvs_unregister_voter.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = 0xffffffea;
    if (((param_1 != 0) && (param_2 < 4)) && (param_3 < 3)) {
        if (((_segment.ehdr == 0) || (iVar5 = *(_segment.ehdr + param_2 * 8 + 0x60), iVar5 == 0)) ||
           (iVar5 = *(iVar5 + param_3 * 8 + 0x90), iVar5 == 0)) {
            uVar6 = 0xffffffed;
        }
        else {
            mutex_lock(iVar5 + 0x48);
            for (piVar7 = *(iVar5 + 0x30); iVar5 + 0x30 != piVar7; piVar7 = *piVar7) {
                iVar3 = strcmp(piVar7[-3],param_1);
                if (iVar3 == 0) {
                    *(iVar5 + 0x40) = *(iVar5 + 0x40) + -1;
                    uVar4 = __list_del_entry_valid(piVar7);
                    if ((uVar4 & 1) != 0) {
                        iVar1 = *piVar7;
                        piVar2 = piVar7[1];
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *piVar7 = -0x2152ffffffffff00;
                    piVar7[1] = -0x2152fffffffffede;
                    kfree(piVar7 + -3);
                    uVar6 = 0;
                    goto code_r0x08004540;
                }
            }
            uVar6 = 0xffffffea;
code_r0x08004540:
            mutex_unlock(iVar5 + 0x48);
        }
    }
    return uVar6;
}


// ===== sym.qcom_dcvs_register_voter.cfi_jt @ 0x08003610 (size 8) =====

uint sym.qcom_dcvs_register_voter.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *puVar5;
    uint uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = 0xffffffea;
    if (((param_1 != 0) && (param_2 < 4)) && (param_3 < 3)) {
        if (*(_segment.ehdr + 0x88) == '\0') {
            uVar6 = 0xfffffdfb;
        }
        else if (((_segment.ehdr == 0) || (iVar4 = *(_segment.ehdr + param_2 * 8 + 0x60), iVar4 == 0)) ||
                (iVar4 = *(iVar4 + param_3 * 8 + 0x90), iVar4 == 0)) {
            uVar6 = 0xffffffed;
        }
        else {
            mutex_lock(iVar4 + 0x48);
            if ((param_3 == 1) && (*(iVar4 + 0x40) != 0)) {
code_r0x0800436c:
                uVar6 = 0xffffffea;
            }
            else {
                piVar7 = iVar4 + 0x30;
                for (piVar8 = *piVar7; piVar7 != piVar8; piVar8 = *piVar8) {
                    iVar2 = strcmp(piVar8[-3],param_1);
                    if (iVar2 == 0) goto code_r0x0800436c;
                }
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
                if (piVar8 == NULL) {
                    uVar6 = 0xfffffff4;
                }
                else {
                    piVar9 = piVar8 + 3;
                    *piVar8 = param_1;
                    puVar5 = *(iVar4 + 0x38);
                    uVar3 = __list_add_valid(piVar9,puVar5,piVar7);
                    if ((uVar3 & 1) != 0) {
                        *(iVar4 + 0x38) = piVar9;
                        piVar8[3] = piVar7;
                        piVar8[4] = puVar5;
                        *puVar5 = piVar9;
                    }
                    uVar6 = 0;
                    *(iVar4 + 0x40) = *(iVar4 + 0x40) + 1;
                }
            }
            mutex_unlock(iVar4 + 0x48);
        }
    }
    return uVar6;
}


// ===== sym.perf_trace_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003618 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006a1c)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6
               ,int64_t *param_7,uint64_t param_8,ulong param_9)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    int64_t *piVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    uint64_t uVar23;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    code *pcVar24;
    int64_t unaff_x22;
    uint64_t uVar25;
    uint64_t uVar26;
    uint32_t uVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    ulong uVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    uint64_t uVar33;
    char *pcVar34;
    uint64_t uVar35;
    char *pcVar36;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    int64_t iStack_720;
    int64_t *piStack_718;
    uint64_t uStack_710;
    uint32_t uStack_704;
    int64_t iStack_700;
    int64_t iStack_6f8;
    ulong **ppuStack_6f0;
    code *pcStack_6e8;
    code *pcStack_6e0;
    uint64_t uStack_6d8;
    ulong uStack_6d0;
    ulong uStack_6c8;
    uint32_t *puStack_6c0;
    uint64_t uStack_6b8;
    uint64_t uStack_6b0;
    int64_t iStack_6a8;
    int64_t *piStack_6a0;
    uint64_t uStack_698;
    ulong uStack_688;
    ulong uStack_680;
    ulong uStack_678;
    ulong uStack_670;
    ulong uStack_668;
    ulong uStack_660;
    int64_t iStack_658;
    ulong **ppuStack_650;
    ulong uStack_648;
    code *pcStack_640;
    ulong uStack_630;
    char *pcStack_628;
    int64_t *piStack_620;
    uint32_t *puStack_618;
    uint64_t uStack_610;
    uint64_t uStack_608;
    uint64_t uStack_600;
    uint64_t uStack_5f8;
    int64_t iStack_5f0;
    uint32_t uStack_5e4;
    int64_t iStack_5e0;
    int64_t iStack_5d8;
    ulong **ppuStack_5d0;
    code *pcStack_5c8;
    int64_t iStack_5c0;
    code *pcStack_5b8;
    char *pcStack_5b0;
    uint64_t uStack_5a8;
    ulong uStack_5a0;
    ulong uStack_598;
    uint32_t *puStack_590;
    uint64_t uStack_588;
    uint64_t uStack_580;
    int64_t iStack_578;
    ulong uStack_568;
    ulong uStack_560;
    ulong uStack_558;
    ulong uStack_550;
    ulong uStack_548;
    ulong uStack_540;
    int64_t iStack_538;
    ulong **ppuStack_530;
    ulong uStack_528;
    ulong uStack_520;
    char *pcStack_510;
    int64_t *piStack_508;
    uint32_t *puStack_500;
    uint64_t uStack_4f8;
    uint64_t uStack_4f0;
    uint64_t uStack_4e8;
    uchar auStack_4e0 [12];
    uint32_t uStack_4d4;
    int64_t iStack_4d0;
    int64_t iStack_4c8;
    ulong **ppuStack_4c0;
    code *pcStack_4b8;
    int64_t iStack_4b0;
    char *pcStack_4a8;
    char *pcStack_4a0;
    int64_t *piStack_498;
    uint64_t uStack_490;
    ulong uStack_488;
    ulong uStack_480;
    uint32_t *puStack_478;
    uint64_t uStack_470;
    uint64_t uStack_468;
    ulong uStack_458;
    ulong uStack_450;
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    int64_t iStack_428;
    ulong **ppuStack_420;
    ulong uStack_418;
    uint64_t uStack_410;
    uint64_t uStack_408;
    uint64_t uStack_400;
    uint64_t uStack_3f8;
    code *pcStack_3f0;
    uint64_t uStack_3e8;
    uchar auStack_3e0 [8];
    int64_t iStack_3d8;
    int64_t *piStack_3d0;
    uint32_t uStack_3c4;
    int64_t iStack_3c0;
    int64_t iStack_3b8;
    ulong **ppuStack_3b0;
    code *pcStack_3a8;
    uint64_t uStack_3a0;
    char *pcStack_398;
    uint64_t uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    uint64_t uStack_378;
    uint64_t uStack_370;
    uint64_t uStack_368;
    int64_t iStack_360;
    int64_t *piStack_358;
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
    uint64_t uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    code *pcStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    uchar auStack_2c0 [8];
    int64_t iStack_2b8;
    uint uStack_2ac;
    uint uStack_2a8;
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    int64_t iStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uint32_t uStack_230;
    uint64_t auStack_228 [7];
    ulong **ppuStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    char *pcStack_1d8;
    code *pcStack_1d0;
    uint64_t uStack_1c8;
    int64_t *piStack_1c0;
    uint64_t uStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_198;
    uint32_t auStack_190 [2];
    uint32_t uStack_188;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    code *pcStack_168;
    int64_t *piStack_160;
    ulong uStack_158;
    int64_t iStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    int64_t iStack_90;
    int64_t *piStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    pcVar36 = "(null)";
    if (param_2 != NULL) {
        pcVar36 = param_2;
    }
    iStack_68 = *(iVar10 + 0x5e0);
    uVar28 = param_4 & 0xffffffff;
    uVar29 = param_3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar14 = param_3;
    uVar18 = param_4;
    uVar23 = param_5;
    iStack_90 = param_6;
    piStack_88 = param_7;
    uStack_80 = param_8;
    iVar9 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar20 = iVar10 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar14 = &uStack_74;
        unaff_x28 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x28,&iStack_70);
        if (iVar10 != 0) {
            uVar23 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &iStack_90;
            uVar18 = (~uVar23 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar18 = uVar23 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar18;
            *(iStack_70 + 0x108) = 5;
            *(iVar10 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar10 + 0x40,pcVar36);
            puVar14 = uStack_74;
            *(iVar10 + 0x18) = param_5;
            *(iVar10 + 0x20) = iStack_90;
            uVar23 = 1;
            param_8 = 0;
            *(iVar10 + 0xc) = param_3;
            *(iVar10 + 0x10) = param_4;
            *(iVar10 + 0x28) = piStack_88;
            *(iVar10 + 0x30) = uStack_80;
            *(iVar10 + 0x38) = param_9;
            param_6 = iStack_70;
            param_7 = piVar20;
            perf_trace_run_bpf_submit(iVar10,unaff_x28);
            uVar18 = param_1;
            unaff_x22 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar12 = auVar37._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18 = 0x800684c;
    uStack_d8 = 0x800684c;
    iVar10 = sp_el0;
    iStack_e8 = *(iVar10 + 0x5e0);
    uVar25 = auVar37._8_8_ & 0xffffffff;
    uVar30 = *(iVar12 + 0x48);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uVar27 = uVar30;
    uVar17 = uVar18;
    uVar32 = uVar23;
    iVar10 = param_6;
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = uVar29;
    uStack_c0 = uVar28;
    uStack_b8 = param_5;
    iStack_b0 = unaff_x22;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar15 = puVar14;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar17 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar28 = trace_event_ignore_this_pid(iVar12), (uVar28 & 1) == 0))))
        goto code_r0x080068e0;
    }
    else {
code_r0x080068e0:
        puVar15 = 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_118,iVar12);
        if (iVar11 != 0) {
            *(iVar11 + 8) = auVar37._8_4_;
            *(iVar11 + 0xc) = puVar14;
            *(iVar11 + 0x10) = uVar18;
            *(iVar11 + 0x18) = uVar23;
            *(iVar11 + 0x20) = param_6;
            trace_event_buffer_commit(&uStack_118);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar19 = auVar37._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_dcvs_boost;
    pcStack_168 = sym.perf_trace_qcom_dcvs_boost;
    iVar11 = sp_el0;
    iStack_178 = *(iVar11 + 0x5e0);
    uVar26 = puVar15 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    uVar31 = auVar37._8_8_ & 0xffffffff;
    iVar11 = tpidr_el1;
    piVar22 = iVar11 + *(uVar19 + 0x78);
    uVar28 = uVar17;
    uVar29 = uVar32;
    iVar11 = iVar10;
    ppuStack_170 = &puStack_e0;
    piStack_160 = piVar20;
    uStack_158 = uVar30;
    iStack_150 = iVar12;
    uStack_148 = uVar25;
    uStack_140 = puVar14 & 0xffffffff;
    uStack_138 = uVar18;
    uStack_130 = uVar23;
    iStack_128 = param_6;
    if ((*(uVar19 + 0x80) != 0) || (puVar16 = puVar15, *piVar22 != 0)) {
        puVar16 = &uStack_184;
        iVar12 = perf_trace_buf_alloc(0x2c,&iStack_180);
        uVar18 = ___cpu_online_mask;
        if (iVar12 != 0) {
            *(iStack_180 + 0xe8) = &ppuStack_170;
            puVar16 = uStack_184;
            uVar29 = 1;
            param_8 = 0;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << (uVar18 & 0x3f)) & 0x8006944;
            *(iStack_180 + 0x108) = 5;
            *(iVar12 + 8) = auVar37._8_4_;
            *(iVar12 + 0xc) = puVar15;
            *(iVar12 + 0x10) = uVar17;
            *(iVar12 + 0x18) = uVar32;
            *(iVar12 + 0x20) = iVar10;
            uVar28 = uVar19;
            iVar11 = iStack_180;
            param_7 = piVar22;
            perf_trace_run_bpf_submit(iVar12,0x2c);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_178) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar13 = auVar37._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18_01 = 0x8006a7c;
    uStack_1e8 = 0x8006a7c;
    pcStack_1d0 = sym.perf_trace_qcom_dcvs_boost;
    iVar12 = sp_el0;
    auStack_228[6] = *(iVar12 + 0x5e0);
    uVar35 = *(iVar13 + 0x48);
    auStack_228[4] = 0;
    auStack_228[5] = 0;
    auStack_228[2] = 0;
    auStack_228[3] = 0;
    auStack_228[0] = 0;
    auStack_228[1] = 0;
    uVar27 = uVar35;
    uVar18 = uVar28;
    uVar23 = uVar29;
    iVar12 = iVar11;
    piVar20 = param_7;
    uVar25 = param_8;
    ppuStack_1f0 = &ppuStack_170;
    uStack_1e0 = unaff_x28;
    pcStack_1d8 = pcVar36;
    uStack_1c8 = uVar31;
    piStack_1c0 = piVar22;
    uStack_1b8 = uVar26;
    uStack_1b0 = uVar17;
    uStack_1a8 = uVar32;
    iStack_1a0 = iVar10;
    uStack_198 = uVar19;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar18 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar13), (uVar17 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar36 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar36 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar36;
        auVar37._0_8_ = iVar13;
        iVar9 = strlen(pcVar36);
        uVar27 = iVar9 + 1;
        uVar35 = uVar27;
        puVar14 = uVar27 + 0x38;
        iVar10 = trace_event_buffer_reserve(auStack_228,iVar13);
        auVar38._8_8_ = pcVar36;
        auVar38._0_8_ = iVar10;
        if (iVar10 != 0) {
            unaff_x28 = uStack_188;
            uVar35 = auStack_190[0];
            *(iVar10 + 8) = uVar27 * 0x10000 | 0x38;
            strcpy(iVar10 + 0x38,pcVar36);
            *(iVar10 + 0xc) = puVar16;
            *(iVar10 + 0x10) = uVar28;
            *(iVar10 + 0x18) = uVar29;
            *(iVar10 + 0x20) = iVar11;
            *(iVar10 + 0x28) = param_7;
            *(iVar10 + 0x2c) = param_8;
            *(iVar10 + 0x30) = auStack_190[0];
            *(iVar10 + 0x34) = uStack_188;
            trace_event_buffer_commit(auStack_228);
            auVar37 = auVar38;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == auStack_228[6]) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar17 = auVar38._0_8_;
    *extraout_x18_02 = sym.perf_trace_memlat_dev_meas;
    pcStack_288 = sym.perf_trace_memlat_dev_meas;
    uStack_2ac = SUB84(piVar20,0);
    uStack_2a8 = uVar25;
    iVar10 = sp_el0;
    pcVar36 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar36 = auVar38._8_8_;
    }
    iStack_298 = *(iVar10 + 0x5e0);
    pcVar24 = sym.perf_trace_memlat_dev_meas;
    uVar26 = puVar14 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar15 = puVar14;
    uVar32 = uVar18;
    uVar19 = uVar23;
    iStack_2b8 = iVar12;
    ppuStack_290 = &ppuStack_1f0;
    uStack_280 = unaff_x28;
    uStack_278 = uVar35;
    uStack_270 = auVar37._8_8_;
    uStack_268 = auVar37._0_8_;
    uStack_260 = puVar16 & 0xffffffff;
    uStack_258 = uVar28;
    uStack_250 = uVar29;
    iStack_248 = iVar11;
    uStack_240 = param_7 & 0xffffffff;
    uStack_238 = param_8 & 0xffffffff;
    uVar28 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar22 != 0)) {
        iVar9 = uVar28;
        puVar15 = &uStack_2a4;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar31 = perf_trace_buf_alloc(unaff_x28,&iStack_2a0);
        if (uVar31 != 0) {
            uVar29 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_228[0];
            pcVar24 = auStack_228[0] & 0xffffffff;
            *(iStack_2a0 + 0xe8) = &ppuStack_290;
            *(iStack_2a0 + 0xf8) = auStack_2c0;
            uVar28 = uStack_230;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar29) & 0x8006bd0;
            *(iStack_2a0 + 0x108) = 5;
            *(uVar31 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar31 + 0x38,pcVar36);
            puVar15 = uStack_2a4;
            *(uVar31 + 0x20) = iStack_2b8;
            uVar19 = 1;
            uVar25 = 0;
            *(uVar31 + 0xc) = puVar14;
            *(uVar31 + 0x10) = uVar18;
            *(uVar31 + 0x18) = uVar23;
            *(uVar31 + 0x28) = uStack_2ac;
            *(uVar31 + 0x2c) = uStack_2a8;
            *(uVar31 + 0x30) = uStack_230;
            *(uVar31 + 0x34) = uVar8;
            uVar32 = uVar17;
            iVar12 = iStack_2a0;
            piVar20 = piVar22;
            perf_trace_run_bpf_submit(uVar31,unaff_x28);
            uVar29 = uVar31;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_298) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar11 = auVar39._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18_03 = 0x8006d78;
    uStack_308 = 0x8006d78;
    iVar10 = sp_el0;
    iStack_318 = *(iVar10 + 0x5e0);
    uVar33 = *(iVar11 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar27 = uVar33;
    uVar31 = uVar32;
    uVar35 = uVar19;
    iVar10 = iVar12;
    piVar21 = piVar20;
    ppuStack_310 = &ppuStack_290;
    piStack_300 = piVar22;
    uStack_2f8 = uVar26;
    uStack_2f0 = uVar18;
    uStack_2e8 = uVar23;
    uStack_2e0 = uVar29;
    pcStack_2d8 = pcVar24;
    uStack_2d0 = uVar28;
    uStack_2c8 = uVar17;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar31 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar11), (uVar18 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar34 = "(null)";
        if (auVar39._8_8_ != NULL) {
            pcVar34 = auVar39._8_8_;
        }
        auVar39._8_8_ = pcVar34;
        auVar39._0_8_ = iVar11;
        iVar9 = strlen(pcVar34);
        uVar27 = iVar9 + 1;
        uVar33 = uVar27;
        puVar14 = uVar27 + 0x30;
        iVar11 = trace_event_buffer_reserve(&uStack_348,iVar11);
        auVar4._8_8_ = pcVar34;
        auVar4._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar27 * 0x10000 | 0x30;
            strcpy(iVar11 + 0x30,pcVar34);
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar32;
            *(iVar11 + 0x18) = uVar19;
            *(iVar11 + 0x20) = iVar12;
            *(iVar11 + 0x28) = piVar20;
            trace_event_buffer_commit(&uStack_348);
            auVar39 = auVar4;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_318) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_04 = sym.perf_trace_memlat_dev_update;
    pcStack_3a8 = sym.perf_trace_memlat_dev_update;
    iVar11 = sp_el0;
    pcVar34 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar34 = auVar37._8_8_;
    }
    iStack_3b8 = *(iVar11 + 0x5e0);
    uVar29 = puVar14 & 0xffffffff;
    iStack_3c0 = 0;
    uStack_3c4 = 0;
    puVar16 = puVar14;
    uVar23 = uVar31;
    uVar28 = uVar35;
    iStack_3d8 = iVar10;
    piStack_3d0 = piVar21;
    ppuStack_3b0 = &ppuStack_310;
    uStack_3a0 = unaff_x28;
    pcStack_398 = pcVar36;
    uStack_390 = uVar33;
    uStack_388 = auVar39._8_8_;
    uStack_380 = auVar39._0_8_;
    uStack_378 = puVar15 & 0xffffffff;
    uStack_370 = uVar32;
    uStack_368 = uVar19;
    iStack_360 = iVar12;
    piStack_358 = piVar20;
    iVar11 = strlen(pcVar34);
    iVar12 = tpidr_el1;
    piVar20 = iVar12 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar16 = &uStack_3c4;
        pcVar36 = (iVar11 + 0x3cU & 0xfffffff8) - 4;
        uVar17 = perf_trace_buf_alloc(pcVar36,&iStack_3c0);
        if (uVar17 != 0) {
            uVar23 = ___cpu_online_mask & 0x3f;
            *(iStack_3c0 + 0xe8) = &ppuStack_3b0;
            *(iStack_3c0 + 0xf8) = auStack_3e0;
            *(iStack_3c0 + 0x100) = ~(-1L << uVar23) & 0x8006eb0;
            *(iStack_3c0 + 0x108) = 5;
            *(uVar17 + 8) = iVar11 * 0x10000 + 0x10030;
            strcpy(uVar17 + 0x30,pcVar34);
            puVar16 = uStack_3c4;
            uVar28 = 1;
            uVar25 = 0;
            *(uVar17 + 0xc) = puVar14;
            *(uVar17 + 0x10) = uVar31;
            *(uVar17 + 0x18) = uVar35;
            *(uVar17 + 0x20) = iStack_3d8;
            *(uVar17 + 0x28) = piStack_3d0;
            uVar23 = uVar18;
            iVar10 = iStack_3c0;
            piVar21 = piVar20;
            perf_trace_run_bpf_submit(uVar17,pcVar36);
            uVar19 = uVar17;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar13 = auVar40._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18_05 = 0x8007040;
    uStack_418 = 0x8007040;
    pcStack_3f0 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    iStack_428 = *(iVar12 + 0x5e0);
    uVar26 = *(iVar13 + 0x48);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    uVar27 = uVar26;
    uVar17 = uVar23;
    uVar32 = uVar28;
    ppuStack_420 = &ppuStack_3b0;
    uStack_410 = uVar29;
    uStack_408 = uVar31;
    uStack_400 = uVar35;
    uStack_3f8 = uVar19;
    uStack_3e8 = uVar18;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar17 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar13), (uVar18 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar1 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar1;
        auVar40._0_8_ = iVar13;
        iVar9 = strlen(pcVar1);
        uVar27 = iVar9 + 1;
        uVar26 = uVar27;
        puVar14 = uVar27 + 0x28;
        iVar12 = trace_event_buffer_reserve(&uStack_458,iVar13);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar27 * 0x10000 | 0x24;
            strcpy(iVar12 + 0x24,pcVar1);
            *(iVar12 + 0x10) = puVar16;
            *(iVar12 + 0x18) = uVar23;
            *(iVar12 + 0x20) = uVar28;
            trace_event_buffer_commit(&uStack_458);
            auVar40 = auVar5;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_428) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_06 = sym.perf_trace_bw_hwmon_meas;
    pcStack_4b8 = sym.perf_trace_bw_hwmon_meas;
    iVar12 = sp_el0;
    pcVar1 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar1 = auVar37._8_8_;
    }
    iStack_4c8 = *(iVar12 + 0x5e0);
    pcVar24 = sym.perf_trace_bw_hwmon_meas;
    uVar31 = uVar32 & 0xffffffff;
    iStack_4d0 = 0;
    uStack_4d4 = 0;
    puVar15 = puVar14;
    uVar29 = uVar17;
    uVar19 = uVar32;
    ppuStack_4c0 = &ppuStack_420;
    iStack_4b0 = iVar11;
    pcStack_4a8 = pcVar36;
    pcStack_4a0 = pcVar34;
    piStack_498 = piVar20;
    uStack_490 = uVar26;
    uStack_488 = auVar40._8_8_;
    uStack_480 = auVar40._0_8_;
    puStack_478 = puVar16;
    uStack_470 = uVar23;
    uStack_468 = uVar28 & 0xffffffff;
    uVar30 = strlen(pcVar1);
    iVar12 = tpidr_el1;
    piVar20 = iVar12 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar15 = &uStack_4d4;
        pcVar34 = (uVar30 + 0x34U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(pcVar34,&iStack_4d0);
        if (iVar12 != 0) {
            uVar23 = ___cpu_online_mask & 0x3f;
            *(iStack_4d0 + 0xe8) = &ppuStack_4c0;
            *(iStack_4d0 + 0xf8) = auStack_4e0;
            *(iStack_4d0 + 0x100) = ~(-1L << uVar23) & 0x8007164;
            *(iStack_4d0 + 0x108) = 5;
            *(iVar12 + 8) = uVar30 * 0x10000 + 0x10024;
            strcpy(iVar12 + 0x24,pcVar1);
            puVar15 = uStack_4d4;
            uVar19 = 1;
            uVar25 = 0;
            *(iVar12 + 0x10) = puVar14;
            *(iVar12 + 0x18) = uVar17;
            *(iVar12 + 0x20) = uVar32;
            uVar29 = uVar18;
            iVar10 = iStack_4d0;
            piVar21 = piVar20;
            perf_trace_run_bpf_submit(iVar12,pcVar34);
            iVar11 = iVar12;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_4c8) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar13 = auVar41._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_07 = 0x80072e4;
    uStack_528 = 0x80072e4;
    iVar12 = sp_el0;
    iStack_538 = *(iVar12 + 0x5e0);
    uVar32 = *(iVar13 + 0x48);
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uVar27 = uVar32;
    uVar23 = uVar29;
    uVar28 = uVar19;
    iVar12 = iVar10;
    ppuStack_530 = &ppuStack_4c0;
    uStack_520 = uVar30;
    pcStack_510 = pcVar1;
    piStack_508 = piVar20;
    puStack_500 = puVar14;
    uStack_4f8 = uVar17;
    uStack_4f0 = uVar31;
    uStack_4e8 = uVar18;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar23 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar13), (uVar18 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar36 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar36 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar36;
        auVar41._0_8_ = iVar13;
        iVar9 = strlen(pcVar36);
        uVar27 = iVar9 + 1;
        uVar32 = uVar27;
        puVar14 = uVar27 + 0x30;
        iVar13 = trace_event_buffer_reserve(&uStack_568,iVar13);
        auVar6._8_8_ = pcVar36;
        auVar6._0_8_ = iVar13;
        if (iVar13 != 0) {
            *(iVar13 + 8) = uVar27 * 0x10000 | 0x30;
            strcpy(iVar13 + 0x30,pcVar36);
            *(iVar13 + 0x10) = puVar15;
            *(iVar13 + 0x18) = uVar29;
            *(iVar13 + 0x20) = uVar19;
            *(iVar13 + 0x28) = iVar10;
            trace_event_buffer_commit(&uStack_568);
            auVar41 = auVar6;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_538) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_08 = sym.perf_trace_bw_hwmon_update;
    pcStack_5c8 = sym.perf_trace_bw_hwmon_update;
    pcStack_5b8 = sym.perf_trace_bw_hwmon_meas;
    iVar13 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_5d8 = *(iVar13 + 0x5e0);
    iStack_5e0 = 0;
    uStack_5e4 = 0;
    puVar16 = puVar14;
    uVar17 = uVar23;
    uVar26 = uVar28;
    iStack_5f0 = iVar12;
    ppuStack_5d0 = &ppuStack_530;
    iStack_5c0 = iVar11;
    pcStack_5b0 = pcVar34;
    uStack_5a8 = uVar32;
    uStack_5a0 = auVar41._8_8_;
    uStack_598 = auVar41._0_8_;
    puStack_590 = puVar15;
    uStack_588 = uVar29;
    uStack_580 = uVar19;
    iStack_578 = iVar10;
    uVar30 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar20 = iVar10 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar16 = &uStack_5e4;
        pcVar24 = (uVar30 + 0x3cU & 0xfffffff8) - 4;
        uVar29 = perf_trace_buf_alloc(pcVar24,&iStack_5e0);
        if (uVar29 != 0) {
            uVar17 = ___cpu_online_mask & 0x3f;
            *(iStack_5e0 + 0xe8) = &ppuStack_5d0;
            *(iStack_5e0 + 0xf8) = &iStack_5f0;
            *(iStack_5e0 + 0x100) = ~(-1L << uVar17) & 0x8007414;
            *(iStack_5e0 + 0x108) = 5;
            *(uVar29 + 8) = uVar30 * 0x10000 + 0x10030;
            strcpy(uVar29 + 0x30,pcVar36);
            puVar16 = uStack_5e4;
            uVar26 = 1;
            uVar25 = 0;
            *(uVar29 + 0x10) = puVar14;
            *(uVar29 + 0x18) = uVar23;
            *(uVar29 + 0x20) = uVar28;
            *(uVar29 + 0x28) = iStack_5f0;
            uVar17 = uVar18;
            iVar12 = iStack_5e0;
            piVar21 = piVar20;
            perf_trace_run_bpf_submit(uVar29,pcVar24);
            uVar19 = uVar29;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar11 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_09 = 0x800759c;
    uStack_648 = 0x800759c;
    iVar10 = sp_el0;
    iStack_658 = *(iVar10 + 0x5e0);
    uVar35 = *(iVar11 + 0x48);
    uStack_668 = 0;
    uStack_660 = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    uStack_688 = 0;
    uStack_680 = 0;
    uVar27 = uVar35;
    uVar29 = uVar17;
    uVar32 = uVar26;
    iVar10 = iVar12;
    piVar22 = piVar21;
    uVar31 = uVar25;
    ppuStack_650 = &ppuStack_5d0;
    pcStack_640 = pcVar24;
    uStack_630 = uVar30;
    pcStack_628 = pcVar36;
    piStack_620 = piVar20;
    puStack_618 = puVar14;
    uStack_610 = uVar23;
    uStack_608 = uVar28;
    uStack_600 = uVar19;
    uStack_5f8 = uVar18;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar29 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar27 >> 6 & 1) != 0) ||
           (((uVar27 >> 9 & 1) != 0 && (uVar18 = trace_event_ignore_this_pid(iVar11), (uVar18 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar36 = "(null)";
    if (auVar42._8_8_ != NULL) {
        pcVar36 = auVar42._8_8_;
    }
    auVar42._8_8_ = pcVar36;
    auVar42._0_8_ = iVar11;
    iVar9 = strlen(pcVar36);
    uVar27 = iVar9 + 1;
    uVar35 = uVar27;
    puVar14 = uVar27 + 0x40;
    iVar11 = trace_event_buffer_reserve(&uStack_688,iVar11);
    auVar7._8_8_ = pcVar36;
    auVar7._0_8_ = iVar11;
    if (iVar11 != 0) {
        *(iVar11 + 8) = uVar27 * 0x10000 | 0x40;
        strcpy(iVar11 + 0x40,pcVar36);
        *(iVar11 + 0x10) = puVar16;
        *(iVar11 + 0x18) = uVar17;
        *(iVar11 + 0x20) = uVar26;
        *(iVar11 + 0x28) = iVar12;
        *(iVar11 + 0x30) = piVar21;
        *(iVar11 + 0x38) = uVar25;
        trace_event_buffer_commit(&uStack_688);
        auVar42 = auVar7;
    }
code_r0x080076a0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_658) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_10 = sym.perf_trace_bw_hwmon_debug;
    pcStack_6e8 = sym.perf_trace_bw_hwmon_debug;
    pcStack_6e0 = sym.perf_trace_bw_hwmon_update;
    iVar11 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_6f8 = *(iVar11 + 0x5e0);
    iStack_700 = 0;
    uStack_704 = 0;
    puVar15 = puVar14;
    uVar23 = uVar29;
    iStack_720 = iVar10;
    piStack_718 = piVar22;
    uStack_710 = uVar31;
    ppuStack_6f0 = &ppuStack_650;
    uStack_6d8 = uVar35;
    uStack_6d0 = auVar42._8_8_;
    uStack_6c8 = auVar42._0_8_;
    puStack_6c0 = puVar16;
    uStack_6b8 = uVar17;
    uStack_6b0 = uVar26;
    iStack_6a8 = iVar12;
    piStack_6a0 = piVar21;
    uStack_698 = uVar25;
    iVar9 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar20 = iVar10 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar15 = &uStack_704;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar2,&iStack_700,puVar15);
        if (iVar10 != 0) {
            uVar23 = ___cpu_online_mask & 0x3f;
            *(iStack_700 + 0xe8) = &ppuStack_6f0;
            *(iStack_700 + 0xf8) = &iStack_720;
            *(iStack_700 + 0x100) = ~(-1L << uVar23) & 0x80076e0;
            *(iStack_700 + 0x108) = 5;
            *(iVar10 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar10 + 0x40,pcVar36);
            puVar15 = uStack_704;
            *(iVar10 + 0x20) = uVar32;
            *(iVar10 + 0x28) = iStack_720;
            *(iVar10 + 0x10) = puVar14;
            *(iVar10 + 0x18) = uVar29;
            *(iVar10 + 0x30) = piStack_718;
            *(iVar10 + 0x38) = uStack_710;
            perf_trace_run_bpf_submit(iVar10,iVar2,puVar15,uVar18,1,iStack_700,piVar20,0);
            uVar23 = uVar18;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_6f8) {
        auVar37 = __stack_chk_fail();
        uVar30 = tpidr_el2;
        *extraout_x18_11 = 0x8007878;
        bpf_trace_run8(auVar37._0_8_,auVar37._8_8_,puVar15 & 0xffffffff,uVar23 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003620 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006a1c)
//WARNING: Removing unreachable block (ram,0x080067ac)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6,
               int64_t *param_7,uint64_t param_8,ulong param_9)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    uint64_t uVar26;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *extraout_x18_12;
    code *pcVar27;
    uint64_t uVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    ulong uVar32;
    uint64_t uVar33;
    char *pcVar34;
    uint64_t uVar35;
    char *pcVar36;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    int64_t iStack_7c0;
    int64_t *piStack_7b8;
    uint64_t uStack_7b0;
    uint32_t uStack_7a4;
    int64_t iStack_7a0;
    int64_t iStack_798;
    ulong **ppuStack_790;
    code *pcStack_788;
    code *pcStack_780;
    uint64_t uStack_778;
    ulong uStack_770;
    ulong uStack_768;
    uint32_t *puStack_760;
    uint64_t uStack_758;
    uint64_t uStack_750;
    int64_t iStack_748;
    int64_t *piStack_740;
    uint64_t uStack_738;
    ulong uStack_728;
    ulong uStack_720;
    ulong uStack_718;
    ulong uStack_710;
    ulong uStack_708;
    ulong uStack_700;
    int64_t iStack_6f8;
    ulong **ppuStack_6f0;
    ulong uStack_6e8;
    code *pcStack_6e0;
    ulong uStack_6d0;
    char *pcStack_6c8;
    int64_t *piStack_6c0;
    uint32_t *puStack_6b8;
    uint64_t uStack_6b0;
    uint64_t uStack_6a8;
    uint64_t uStack_6a0;
    uint64_t uStack_698;
    int64_t iStack_690;
    uint32_t uStack_684;
    int64_t iStack_680;
    int64_t iStack_678;
    ulong **ppuStack_670;
    code *pcStack_668;
    int64_t iStack_660;
    code *pcStack_658;
    char *pcStack_650;
    uint64_t uStack_648;
    ulong uStack_640;
    ulong uStack_638;
    uint32_t *puStack_630;
    uint64_t uStack_628;
    uint64_t uStack_620;
    int64_t iStack_618;
    ulong uStack_608;
    ulong uStack_600;
    ulong uStack_5f8;
    ulong uStack_5f0;
    ulong uStack_5e8;
    ulong uStack_5e0;
    int64_t iStack_5d8;
    ulong **ppuStack_5d0;
    ulong uStack_5c8;
    ulong uStack_5c0;
    char *pcStack_5b0;
    int64_t *piStack_5a8;
    uint32_t *puStack_5a0;
    uint64_t uStack_598;
    uint64_t uStack_590;
    uint64_t uStack_588;
    uchar auStack_580 [12];
    uint32_t uStack_574;
    int64_t iStack_570;
    int64_t iStack_568;
    ulong **ppuStack_560;
    code *pcStack_558;
    int64_t iStack_550;
    char *pcStack_548;
    char *pcStack_540;
    int64_t *piStack_538;
    uint64_t uStack_530;
    ulong uStack_528;
    ulong uStack_520;
    uint32_t *puStack_518;
    uint64_t uStack_510;
    uint64_t uStack_508;
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4e0;
    ulong uStack_4d8;
    ulong uStack_4d0;
    int64_t iStack_4c8;
    ulong **ppuStack_4c0;
    ulong uStack_4b8;
    uint64_t uStack_4b0;
    uint64_t uStack_4a8;
    uint64_t uStack_4a0;
    uint64_t uStack_498;
    code *pcStack_490;
    uint64_t uStack_488;
    uchar auStack_480 [8];
    int64_t iStack_478;
    int64_t *piStack_470;
    uint32_t uStack_464;
    int64_t iStack_460;
    int64_t iStack_458;
    ulong **ppuStack_450;
    code *pcStack_448;
    uint64_t uStack_440;
    char *pcStack_438;
    uint64_t uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    uint64_t uStack_418;
    uint64_t uStack_410;
    uint64_t uStack_408;
    int64_t iStack_400;
    int64_t *piStack_3f8;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    int64_t iStack_3b8;
    ulong **ppuStack_3b0;
    ulong uStack_3a8;
    int64_t *piStack_3a0;
    uint64_t uStack_398;
    uint64_t uStack_390;
    uint64_t uStack_388;
    uint64_t uStack_380;
    code *pcStack_378;
    uint64_t uStack_370;
    uint64_t uStack_368;
    uchar auStack_360 [8];
    int64_t iStack_358;
    uint uStack_34c;
    uint uStack_348;
    uint32_t uStack_344;
    int64_t iStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    code *pcStack_328;
    uint64_t uStack_320;
    uint64_t uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uint64_t uStack_2f0;
    int64_t iStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uint32_t uStack_2d0;
    uint64_t auStack_2c8 [7];
    ulong **ppuStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    char *pcStack_278;
    code *pcStack_270;
    uint64_t uStack_268;
    int64_t *piStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    int64_t iStack_240;
    uint64_t uStack_238;
    uint32_t auStack_230 [2];
    uint32_t uStack_228;
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    int64_t *piStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    ulong uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    code *pcStack_148;
    ulong uStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t *piStack_128;
    uint64_t uStack_120;
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_68 = *(iVar15 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar29 = *(param_1 + 0x48);
    uVar20 = param_4;
    uVar13 = param_5;
    iVar15 = param_6;
    piVar23 = param_7;
    uVar26 = param_8;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = param_3;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(param_1), (uVar10 & 1) == 0))))
        goto code_r0x08006600;
    }
    else {
code_r0x08006600:
        pcVar36 = "(null)";
        if (param_2 != NULL) {
            pcVar36 = param_2;
        }
        iVar9 = strlen(pcVar36);
        puVar17 = iVar9 + 1 + 0x40;
        iVar11 = trace_event_buffer_reserve(&uStack_98,param_1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x40;
            strcpy(iVar11 + 0x40,pcVar36);
            *(iVar11 + 0xc) = param_3;
            *(iVar11 + 0x10) = param_4;
            *(iVar11 + 0x18) = param_5;
            *(iVar11 + 0x20) = param_6;
            *(iVar11 + 0x28) = param_7;
            *(iVar11 + 0x30) = param_8;
            *(iVar11 + 0x38) = param_9;
            trace_event_buffer_commit(&uStack_98);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar10 = auVar37._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_dcvs_update;
    pcStack_f8 = sym.perf_trace_qcom_dcvs_update;
    iVar11 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_108 = *(iVar11 + 0x5e0);
    uVar30 = uVar20 & 0xffffffff;
    uVar31 = puVar17 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    puVar18 = puVar17;
    uVar21 = uVar20;
    uVar22 = uVar13;
    iStack_130 = iVar15;
    piStack_128 = piVar23;
    uStack_120 = uVar26;
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_140 = strlen(pcVar36);
    iVar11 = tpidr_el1;
    piVar24 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_114;
        unaff_x28 = (uStack_140 + 0x4cU & 0xfffffff8) - 4;
        uVar12 = perf_trace_buf_alloc(unaff_x28,&iStack_110);
        if (uVar12 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = &iStack_130;
            *(iStack_110 + 0x100) = ~(-1L << uVar26) & 0x80066ac;
            *(iStack_110 + 0x108) = 5;
            *(uVar12 + 8) = uStack_140 * 0x10000 + 0x10040;
            strcpy(uVar12 + 0x40,pcVar36);
            puVar18 = uStack_114;
            *(uVar12 + 0x18) = uVar13;
            *(uVar12 + 0x20) = iStack_130;
            uVar22 = 1;
            uVar26 = 0;
            *(uVar12 + 0xc) = puVar17;
            *(uVar12 + 0x10) = uVar20;
            *(uVar12 + 0x28) = piStack_128;
            *(uVar12 + 0x30) = uStack_120;
            *(uVar12 + 0x38) = uStack_a0;
            uVar21 = uVar10;
            iVar15 = iStack_110;
            piVar23 = piVar24;
            perf_trace_run_bpf_submit(uVar12,unaff_x28);
            uStack_140 = uStack_a0;
            param_5 = uVar12;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar16 = auVar37._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_00 = 0x800684c;
    uStack_178 = 0x800684c;
    pcStack_148 = sym.perf_trace_qcom_dcvs_update;
    iVar11 = sp_el0;
    iStack_188 = *(iVar11 + 0x5e0);
    uVar28 = auVar37._8_8_ & 0xffffffff;
    uVar32 = *(iVar16 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar29 = uVar32;
    uVar20 = uVar21;
    uVar12 = uVar22;
    iVar11 = iVar15;
    ppuStack_180 = &puStack_100;
    uStack_170 = uVar31;
    uStack_160 = uVar30;
    uStack_158 = uVar13;
    uStack_150 = param_5;
    uStack_138 = uVar10;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar16), (uVar13 & 1) == 0))))
        goto code_r0x080068e0;
    }
    else {
code_r0x080068e0:
        puVar17 = 0x28;
        iVar14 = trace_event_buffer_reserve(&uStack_1b8,iVar16);
        if (iVar14 != 0) {
            *(iVar14 + 8) = auVar37._8_4_;
            *(iVar14 + 0xc) = puVar18;
            *(iVar14 + 0x10) = uVar21;
            *(iVar14 + 0x18) = uVar22;
            *(iVar14 + 0x20) = iVar15;
            trace_event_buffer_commit(&uStack_1b8);
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_188) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar30 = auVar37._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_dcvs_boost;
    pcStack_208 = sym.perf_trace_qcom_dcvs_boost;
    iVar14 = sp_el0;
    iStack_218 = *(iVar14 + 0x5e0);
    uVar31 = puVar17 & 0xffffffff;
    iStack_220 = 0;
    uStack_224 = 0;
    uVar33 = auVar37._8_8_ & 0xffffffff;
    iVar14 = tpidr_el1;
    piVar25 = iVar14 + *(uVar30 + 0x78);
    uVar13 = uVar20;
    uVar10 = uVar12;
    iVar14 = iVar11;
    ppuStack_210 = &ppuStack_180;
    piStack_200 = piVar24;
    uStack_1f8 = uVar32;
    iStack_1f0 = iVar16;
    uStack_1e8 = uVar28;
    uStack_1e0 = puVar18 & 0xffffffff;
    uStack_1d8 = uVar21;
    uStack_1d0 = uVar22;
    iStack_1c8 = iVar15;
    if ((*(uVar30 + 0x80) != 0) || (puVar19 = puVar17, *piVar25 != 0)) {
        puVar19 = &uStack_224;
        iVar15 = perf_trace_buf_alloc(0x2c,&iStack_220);
        uVar21 = ___cpu_online_mask;
        if (iVar15 != 0) {
            *(iStack_220 + 0xe8) = &ppuStack_210;
            puVar19 = uStack_224;
            uVar10 = 1;
            uVar26 = 0;
            *(iStack_220 + 0xf8) = auStack_230;
            *(iStack_220 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8006944;
            *(iStack_220 + 0x108) = 5;
            *(iVar15 + 8) = auVar37._8_4_;
            *(iVar15 + 0xc) = puVar17;
            *(iVar15 + 0x10) = uVar20;
            *(iVar15 + 0x18) = uVar12;
            *(iVar15 + 0x20) = iVar11;
            uVar13 = uVar30;
            iVar14 = iStack_220;
            piVar23 = piVar25;
            perf_trace_run_bpf_submit(iVar15,0x2c);
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_218) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar16 = auVar37._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_02 = 0x8006a7c;
    uStack_288 = 0x8006a7c;
    pcStack_270 = sym.perf_trace_qcom_dcvs_boost;
    iVar15 = sp_el0;
    auStack_2c8[6] = *(iVar15 + 0x5e0);
    uVar35 = *(iVar16 + 0x48);
    auStack_2c8[4] = 0;
    auStack_2c8[5] = 0;
    auStack_2c8[2] = 0;
    auStack_2c8[3] = 0;
    auStack_2c8[0] = 0;
    auStack_2c8[1] = 0;
    uVar29 = uVar35;
    uVar21 = uVar13;
    uVar22 = uVar10;
    iVar15 = iVar14;
    piVar24 = piVar23;
    uVar28 = uVar26;
    ppuStack_290 = &ppuStack_210;
    uStack_280 = unaff_x28;
    pcStack_278 = pcVar36;
    uStack_268 = uVar33;
    piStack_260 = piVar25;
    uStack_258 = uVar31;
    uStack_250 = uVar20;
    uStack_248 = uVar12;
    iStack_240 = iVar11;
    uStack_238 = uVar30;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar36 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar36 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar36;
        auVar37._0_8_ = iVar16;
        iVar9 = strlen(pcVar36);
        uVar29 = iVar9 + 1;
        uVar35 = uVar29;
        puVar17 = uVar29 + 0x38;
        iVar11 = trace_event_buffer_reserve(auStack_2c8,iVar16);
        auVar38._8_8_ = pcVar36;
        auVar38._0_8_ = iVar11;
        if (iVar11 != 0) {
            unaff_x28 = uStack_228;
            uVar35 = auStack_230[0];
            *(iVar11 + 8) = uVar29 * 0x10000 | 0x38;
            strcpy(iVar11 + 0x38,pcVar36);
            *(iVar11 + 0xc) = puVar19;
            *(iVar11 + 0x10) = uVar13;
            *(iVar11 + 0x18) = uVar10;
            *(iVar11 + 0x20) = iVar14;
            *(iVar11 + 0x28) = piVar23;
            *(iVar11 + 0x2c) = uVar26;
            *(iVar11 + 0x30) = auStack_230[0];
            *(iVar11 + 0x34) = uStack_228;
            trace_event_buffer_commit(auStack_2c8);
            auVar37 = auVar38;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == auStack_2c8[6]) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_03 = sym.perf_trace_memlat_dev_meas;
    pcStack_328 = sym.perf_trace_memlat_dev_meas;
    uStack_34c = SUB84(piVar24,0);
    uStack_348 = uVar28;
    iVar11 = sp_el0;
    pcVar36 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar36 = auVar38._8_8_;
    }
    iStack_338 = *(iVar11 + 0x5e0);
    pcVar27 = sym.perf_trace_memlat_dev_meas;
    uVar12 = puVar17 & 0xffffffff;
    iStack_340 = 0;
    uStack_344 = 0;
    puVar18 = puVar17;
    uVar30 = uVar21;
    uVar31 = uVar22;
    iStack_358 = iVar15;
    ppuStack_330 = &ppuStack_290;
    uStack_320 = unaff_x28;
    uStack_318 = uVar35;
    uStack_310 = auVar37._8_8_;
    uStack_308 = auVar37._0_8_;
    uStack_300 = puVar19 & 0xffffffff;
    uStack_2f8 = uVar13;
    uStack_2f0 = uVar10;
    iStack_2e8 = iVar14;
    uStack_2e0 = piVar23 & 0xffffffff;
    uStack_2d8 = uVar26 & 0xffffffff;
    uVar13 = strlen(pcVar36);
    iVar11 = tpidr_el1;
    piVar23 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        iVar9 = uVar13;
        puVar18 = &uStack_344;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar26 = perf_trace_buf_alloc(unaff_x28,&iStack_340);
        if (uVar26 != 0) {
            uVar10 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_2c8[0];
            pcVar27 = auStack_2c8[0] & 0xffffffff;
            *(iStack_340 + 0xe8) = &ppuStack_330;
            *(iStack_340 + 0xf8) = auStack_360;
            uVar13 = uStack_2d0;
            *(iStack_340 + 0x100) = ~(-1L << uVar10) & 0x8006bd0;
            *(iStack_340 + 0x108) = 5;
            *(uVar26 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar26 + 0x38,pcVar36);
            puVar18 = uStack_344;
            *(uVar26 + 0x20) = iStack_358;
            uVar31 = 1;
            uVar28 = 0;
            *(uVar26 + 0xc) = puVar17;
            *(uVar26 + 0x10) = uVar21;
            *(uVar26 + 0x18) = uVar22;
            *(uVar26 + 0x28) = uStack_34c;
            *(uVar26 + 0x2c) = uStack_348;
            *(uVar26 + 0x30) = uStack_2d0;
            *(uVar26 + 0x34) = uVar8;
            uVar30 = uVar20;
            iVar15 = iStack_340;
            piVar24 = piVar23;
            perf_trace_run_bpf_submit(uVar26,unaff_x28);
            uVar10 = uVar26;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_338) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar16 = auVar39._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_04 = 0x8006d78;
    uStack_3a8 = 0x8006d78;
    iVar11 = sp_el0;
    iStack_3b8 = *(iVar11 + 0x5e0);
    uVar35 = *(iVar16 + 0x48);
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uVar29 = uVar35;
    uVar26 = uVar30;
    uVar33 = uVar31;
    iVar11 = iVar15;
    piVar25 = piVar24;
    ppuStack_3b0 = &ppuStack_330;
    piStack_3a0 = piVar23;
    uStack_398 = uVar12;
    uStack_390 = uVar21;
    uStack_388 = uVar22;
    uStack_380 = uVar10;
    pcStack_378 = pcVar27;
    uStack_370 = uVar13;
    uStack_368 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar26 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar34 = "(null)";
        if (auVar39._8_8_ != NULL) {
            pcVar34 = auVar39._8_8_;
        }
        auVar39._8_8_ = pcVar34;
        auVar39._0_8_ = iVar16;
        iVar9 = strlen(pcVar34);
        uVar29 = iVar9 + 1;
        uVar35 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar16 = trace_event_buffer_reserve(&uStack_3e8,iVar16);
        auVar4._8_8_ = pcVar34;
        auVar4._0_8_ = iVar16;
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar16 + 0x30,pcVar34);
            *(iVar16 + 0xc) = puVar18;
            *(iVar16 + 0x10) = uVar30;
            *(iVar16 + 0x18) = uVar31;
            *(iVar16 + 0x20) = iVar15;
            *(iVar16 + 0x28) = piVar24;
            trace_event_buffer_commit(&uStack_3e8);
            auVar39 = auVar4;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_05 = sym.perf_trace_memlat_dev_update;
    pcStack_448 = sym.perf_trace_memlat_dev_update;
    iVar16 = sp_el0;
    pcVar34 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar34 = auVar37._8_8_;
    }
    iStack_458 = *(iVar16 + 0x5e0);
    uVar21 = puVar17 & 0xffffffff;
    iStack_460 = 0;
    uStack_464 = 0;
    puVar19 = puVar17;
    uVar13 = uVar26;
    uVar10 = uVar33;
    iStack_478 = iVar11;
    piStack_470 = piVar25;
    ppuStack_450 = &ppuStack_3b0;
    uStack_440 = unaff_x28;
    pcStack_438 = pcVar36;
    uStack_430 = uVar35;
    uStack_428 = auVar39._8_8_;
    uStack_420 = auVar39._0_8_;
    uStack_418 = puVar18 & 0xffffffff;
    uStack_410 = uVar30;
    uStack_408 = uVar31;
    iStack_400 = iVar15;
    piStack_3f8 = piVar24;
    iVar16 = strlen(pcVar34);
    iVar15 = tpidr_el1;
    piVar23 = iVar15 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar19 = &uStack_464;
        pcVar36 = (iVar16 + 0x3cU & 0xfffffff8) - 4;
        uVar22 = perf_trace_buf_alloc(pcVar36,&iStack_460);
        if (uVar22 != 0) {
            uVar13 = ___cpu_online_mask & 0x3f;
            *(iStack_460 + 0xe8) = &ppuStack_450;
            *(iStack_460 + 0xf8) = auStack_480;
            *(iStack_460 + 0x100) = ~(-1L << uVar13) & 0x8006eb0;
            *(iStack_460 + 0x108) = 5;
            *(uVar22 + 8) = iVar16 * 0x10000 + 0x10030;
            strcpy(uVar22 + 0x30,pcVar34);
            puVar19 = uStack_464;
            uVar10 = 1;
            uVar28 = 0;
            *(uVar22 + 0xc) = puVar17;
            *(uVar22 + 0x10) = uVar26;
            *(uVar22 + 0x18) = uVar33;
            *(uVar22 + 0x20) = iStack_478;
            *(uVar22 + 0x28) = piStack_470;
            uVar13 = uVar20;
            iVar11 = iStack_460;
            piVar25 = piVar23;
            perf_trace_run_bpf_submit(uVar22,pcVar36);
            uVar31 = uVar22;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_458) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar14 = auVar40._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_06 = 0x8007040;
    uStack_4b8 = 0x8007040;
    pcStack_490 = sym.perf_trace_memlat_dev_update;
    iVar15 = sp_el0;
    iStack_4c8 = *(iVar15 + 0x5e0);
    uVar12 = *(iVar14 + 0x48);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uVar29 = uVar12;
    uVar22 = uVar13;
    uVar30 = uVar10;
    ppuStack_4c0 = &ppuStack_450;
    uStack_4b0 = uVar21;
    uStack_4a8 = uVar26;
    uStack_4a0 = uVar33;
    uStack_498 = uVar31;
    uStack_488 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar22 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar14), (uVar20 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar1 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar1;
        auVar40._0_8_ = iVar14;
        iVar9 = strlen(pcVar1);
        uVar29 = iVar9 + 1;
        uVar12 = uVar29;
        puVar17 = uVar29 + 0x28;
        iVar15 = trace_event_buffer_reserve(&uStack_4f8,iVar14);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar15;
        if (iVar15 != 0) {
            *(iVar15 + 8) = uVar29 * 0x10000 | 0x24;
            strcpy(iVar15 + 0x24,pcVar1);
            *(iVar15 + 0x10) = puVar19;
            *(iVar15 + 0x18) = uVar13;
            *(iVar15 + 0x20) = uVar10;
            trace_event_buffer_commit(&uStack_4f8);
            auVar40 = auVar5;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_4c8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_07 = sym.perf_trace_bw_hwmon_meas;
    pcStack_558 = sym.perf_trace_bw_hwmon_meas;
    iVar15 = sp_el0;
    pcVar1 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar1 = auVar37._8_8_;
    }
    iStack_568 = *(iVar15 + 0x5e0);
    pcVar27 = sym.perf_trace_bw_hwmon_meas;
    uVar31 = uVar30 & 0xffffffff;
    iStack_570 = 0;
    uStack_574 = 0;
    puVar18 = puVar17;
    uVar26 = uVar22;
    uVar21 = uVar30;
    ppuStack_560 = &ppuStack_4c0;
    iStack_550 = iVar16;
    pcStack_548 = pcVar36;
    pcStack_540 = pcVar34;
    piStack_538 = piVar23;
    uStack_530 = uVar12;
    uStack_528 = auVar40._8_8_;
    uStack_520 = auVar40._0_8_;
    puStack_518 = puVar19;
    uStack_510 = uVar13;
    uStack_508 = uVar10 & 0xffffffff;
    uVar32 = strlen(pcVar1);
    iVar15 = tpidr_el1;
    piVar23 = iVar15 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_574;
        pcVar34 = (uVar32 + 0x34U & 0xfffffff8) - 4;
        iVar15 = perf_trace_buf_alloc(pcVar34,&iStack_570);
        if (iVar15 != 0) {
            uVar13 = ___cpu_online_mask & 0x3f;
            *(iStack_570 + 0xe8) = &ppuStack_560;
            *(iStack_570 + 0xf8) = auStack_580;
            *(iStack_570 + 0x100) = ~(-1L << uVar13) & 0x8007164;
            *(iStack_570 + 0x108) = 5;
            *(iVar15 + 8) = uVar32 * 0x10000 + 0x10024;
            strcpy(iVar15 + 0x24,pcVar1);
            puVar18 = uStack_574;
            uVar21 = 1;
            uVar28 = 0;
            *(iVar15 + 0x10) = puVar17;
            *(iVar15 + 0x18) = uVar22;
            *(iVar15 + 0x20) = uVar30;
            uVar26 = uVar20;
            iVar11 = iStack_570;
            piVar25 = piVar23;
            perf_trace_run_bpf_submit(iVar15,pcVar34);
            iVar16 = iVar15;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_568) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar14 = auVar41._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_08 = 0x80072e4;
    uStack_5c8 = 0x80072e4;
    iVar15 = sp_el0;
    iStack_5d8 = *(iVar15 + 0x5e0);
    uVar30 = *(iVar14 + 0x48);
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_608 = 0;
    uStack_600 = 0;
    uVar29 = uVar30;
    uVar13 = uVar26;
    uVar10 = uVar21;
    iVar15 = iVar11;
    ppuStack_5d0 = &ppuStack_560;
    uStack_5c0 = uVar32;
    pcStack_5b0 = pcVar1;
    piStack_5a8 = piVar23;
    puStack_5a0 = puVar17;
    uStack_598 = uVar22;
    uStack_590 = uVar31;
    uStack_588 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar14), (uVar20 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar36 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar36 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar36;
        auVar41._0_8_ = iVar14;
        iVar9 = strlen(pcVar36);
        uVar29 = iVar9 + 1;
        uVar30 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar14 = trace_event_buffer_reserve(&uStack_608,iVar14);
        auVar6._8_8_ = pcVar36;
        auVar6._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar14 + 0x30,pcVar36);
            *(iVar14 + 0x10) = puVar18;
            *(iVar14 + 0x18) = uVar26;
            *(iVar14 + 0x20) = uVar21;
            *(iVar14 + 0x28) = iVar11;
            trace_event_buffer_commit(&uStack_608);
            auVar41 = auVar6;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_09 = sym.perf_trace_bw_hwmon_update;
    pcStack_668 = sym.perf_trace_bw_hwmon_update;
    pcStack_658 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_678 = *(iVar14 + 0x5e0);
    iStack_680 = 0;
    uStack_684 = 0;
    puVar19 = puVar17;
    uVar22 = uVar13;
    uVar31 = uVar10;
    iStack_690 = iVar15;
    ppuStack_670 = &ppuStack_5d0;
    iStack_660 = iVar16;
    pcStack_650 = pcVar34;
    uStack_648 = uVar30;
    uStack_640 = auVar41._8_8_;
    uStack_638 = auVar41._0_8_;
    puStack_630 = puVar18;
    uStack_628 = uVar26;
    uStack_620 = uVar21;
    iStack_618 = iVar11;
    uVar32 = strlen(pcVar36);
    iVar11 = tpidr_el1;
    piVar23 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar19 = &uStack_684;
        pcVar27 = (uVar32 + 0x3cU & 0xfffffff8) - 4;
        uVar26 = perf_trace_buf_alloc(pcVar27,&iStack_680);
        if (uVar26 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_680 + 0xe8) = &ppuStack_670;
            *(iStack_680 + 0xf8) = &iStack_690;
            *(iStack_680 + 0x100) = ~(-1L << uVar21) & 0x8007414;
            *(iStack_680 + 0x108) = 5;
            *(uVar26 + 8) = uVar32 * 0x10000 + 0x10030;
            strcpy(uVar26 + 0x30,pcVar36);
            puVar19 = uStack_684;
            uVar31 = 1;
            uVar28 = 0;
            *(uVar26 + 0x10) = puVar17;
            *(uVar26 + 0x18) = uVar13;
            *(uVar26 + 0x20) = uVar10;
            *(uVar26 + 0x28) = iStack_690;
            uVar22 = uVar20;
            iVar15 = iStack_680;
            piVar25 = piVar23;
            perf_trace_run_bpf_submit(uVar26,pcVar27);
            uVar21 = uVar26;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_678) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar16 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_10 = 0x800759c;
    uStack_6e8 = 0x800759c;
    iVar11 = sp_el0;
    iStack_6f8 = *(iVar11 + 0x5e0);
    uVar33 = *(iVar16 + 0x48);
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    uStack_728 = 0;
    uStack_720 = 0;
    uVar29 = uVar33;
    uVar26 = uVar22;
    uVar30 = uVar31;
    iVar11 = iVar15;
    piVar24 = piVar25;
    uVar12 = uVar28;
    ppuStack_6f0 = &ppuStack_670;
    pcStack_6e0 = pcVar27;
    uStack_6d0 = uVar32;
    pcStack_6c8 = pcVar36;
    piStack_6c0 = piVar23;
    puStack_6b8 = puVar17;
    uStack_6b0 = uVar13;
    uStack_6a8 = uVar10;
    uStack_6a0 = uVar21;
    uStack_698 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar26 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) != 0) ||
           (((uVar29 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar36 = "(null)";
    if (auVar42._8_8_ != NULL) {
        pcVar36 = auVar42._8_8_;
    }
    auVar42._8_8_ = pcVar36;
    auVar42._0_8_ = iVar16;
    iVar9 = strlen(pcVar36);
    uVar29 = iVar9 + 1;
    uVar33 = uVar29;
    puVar17 = uVar29 + 0x40;
    iVar16 = trace_event_buffer_reserve(&uStack_728,iVar16);
    auVar7._8_8_ = pcVar36;
    auVar7._0_8_ = iVar16;
    if (iVar16 != 0) {
        *(iVar16 + 8) = uVar29 * 0x10000 | 0x40;
        strcpy(iVar16 + 0x40,pcVar36);
        *(iVar16 + 0x10) = puVar19;
        *(iVar16 + 0x18) = uVar22;
        *(iVar16 + 0x20) = uVar31;
        *(iVar16 + 0x28) = iVar15;
        *(iVar16 + 0x30) = piVar25;
        *(iVar16 + 0x38) = uVar28;
        trace_event_buffer_commit(&uStack_728);
        auVar42 = auVar7;
    }
code_r0x080076a0:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_6f8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_11 = sym.perf_trace_bw_hwmon_debug;
    pcStack_788 = sym.perf_trace_bw_hwmon_debug;
    pcStack_780 = sym.perf_trace_bw_hwmon_update;
    iVar16 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_798 = *(iVar16 + 0x5e0);
    iStack_7a0 = 0;
    uStack_7a4 = 0;
    puVar18 = puVar17;
    uVar13 = uVar26;
    iStack_7c0 = iVar11;
    piStack_7b8 = piVar24;
    uStack_7b0 = uVar12;
    ppuStack_790 = &ppuStack_6f0;
    uStack_778 = uVar33;
    uStack_770 = auVar42._8_8_;
    uStack_768 = auVar42._0_8_;
    puStack_760 = puVar19;
    uStack_758 = uVar22;
    uStack_750 = uVar31;
    iStack_748 = iVar15;
    piStack_740 = piVar25;
    uStack_738 = uVar28;
    iVar9 = strlen(pcVar36);
    iVar15 = tpidr_el1;
    piVar23 = iVar15 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_7a4;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar15 = perf_trace_buf_alloc(iVar2,&iStack_7a0,puVar18);
        if (iVar15 != 0) {
            uVar13 = ___cpu_online_mask & 0x3f;
            *(iStack_7a0 + 0xe8) = &ppuStack_790;
            *(iStack_7a0 + 0xf8) = &iStack_7c0;
            *(iStack_7a0 + 0x100) = ~(-1L << uVar13) & 0x80076e0;
            *(iStack_7a0 + 0x108) = 5;
            *(iVar15 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar15 + 0x40,pcVar36);
            puVar18 = uStack_7a4;
            *(iVar15 + 0x20) = uVar30;
            *(iVar15 + 0x28) = iStack_7c0;
            *(iVar15 + 0x10) = puVar17;
            *(iVar15 + 0x18) = uVar26;
            *(iVar15 + 0x30) = piStack_7b8;
            *(iVar15 + 0x38) = uStack_7b0;
            perf_trace_run_bpf_submit(iVar15,iVar2,puVar18,uVar20,1,iStack_7a0,piVar23,0);
            uVar13 = uVar20;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_798) {
        auVar37 = __stack_chk_fail();
        uVar32 = tpidr_el2;
        *extraout_x18_12 = 0x8007878;
        bpf_trace_run8(auVar37._0_8_,auVar37._8_8_,puVar18 & 0xffffffff,uVar13 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003628 (size 8) =====

void sym.__bpf_trace_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run8(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.qcom_dcvs_get_ddr_child_node.cfi_jt @ 0x08003630 (size 8) =====

uint64_t sym.qcom_dcvs_get_ddr_child_node.cfi_jt(ulong param_1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar13;
    ulong uVar14;
    int64_t arg1;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    uint32_t uStack_cc;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int iStack_40;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_40 = -1;
    iStack_3c = 0;
    iVar5 = of_find_node_opts_by_path("/memory",0);
    iVar13 = -2;
    if (iVar5 != 0) {
        iVar3 = of_property_read_variable_u32_array(iVar5,"ddr_device_type",&iStack_3c,1,0);
        iVar13 = -2;
        if (-1 < iVar3) {
            iVar13 = iStack_3c;
        }
    }
    uVar6 = of_get_next_child(param_1,0);
    while ((uVar6 != 0 &&
           ((iVar3 = of_property_read_variable_u32_array(uVar6,"qcom,ddr-type",&iStack_40,1,0), iVar3 < 0 ||
            (iStack_40 != iVar13))))) {
        uVar6 = of_get_next_child(param_1,uVar6);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_dcvs_probe;
    pcStack_88 = sym.qcom_dcvs_probe;
    iVar9 = sp_el0;
    iVar5 = iVar7 + 0x10;
    iStack_98 = *(iVar9 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffd0;
    piVar8 = of_device_get_match_data(iVar5);
    if (piVar8 == NULL) {
        iVar13 = 3;
code_r0x08004ab4:
        _dev_err(iVar5,"Invalid qcom-dcvs type: %u\n",iVar13);
        uVar6 = 0xffffffea;
    }
    else {
        iVar13 = *piVar8;
        if (iVar13 == 2) {
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            iVar9 = *(*(iVar7 + 0x70) + 0x98);
            uStack_cc = 3;
            uStack_c8 = 0;
            uStack_c0 = 0;
            if (iVar9 == 0) {
                _dev_err(iVar5,"QCOM DCVS HW not configured\n");
                uVar6 = 0xffffffed;
            }
            else {
                uVar4 = of_property_read_variable_u32_array(*(iVar7 + 0x300),"qcom,dcvs-path-type",&uStack_cc,1,0);
                if ((uVar4 < 0) || (2 < uStack_cc)) {
                    _dev_err(iVar5,"Invalid path type:%d, ret:%d\n",uStack_cc,uVar4 & uVar4 >> 0x1f);
                    uVar6 = 0xffffffed;
                }
                else {
                    piVar10 = devm_kmalloc(iVar5,0x88,0xdc0);
                    if (piVar10 == NULL) {
code_r0x08004b20:
                        uVar6 = 0xfffffff4;
                    }
                    else {
                        *piVar10 = iVar5;
                        piVar10[2] = iVar9;
                        *(piVar10 + 1) = uStack_cc;
                        if (uStack_cc == 2) {
                            if (*(iVar9 + 0x68) != 2) {
                                pcVar12 = "Unsupported HW for path: %d\n";
code_r0x08004fdc:
                                _dev_err(iVar5,pcVar12,0);
                                uVar6 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            _trace_event_raw_init = piVar10;
                            uVar6 = __sw_hweight64();
                            iVar7 = devm_kmalloc(iVar5,(uVar6 & 0xffffffff) << 2,0xdc0);
                            piVar10[5] = iVar7;
                            if (iVar7 == 0) goto code_r0x08004b20;
                            uVar4 = sym.setup_epss_l3_device(iVar5,noname_1_00,piVar10,0);
                            uVar6 = uVar4;
                            if (-1 < uVar4) goto code_r0x08004c84;
                            pcVar12 = "Error setting up percpu dev: %d\n";
code_r0x08004c6c:
                            _dev_err(iVar5,pcVar12,uVar6);
                            iVar13 = uVar6;
                        }
                        else {
                            if (uStack_cc == 1) {
                                if (1 < *(iVar9 + 0x68)) {
                                    pcVar12 = "Unsupported HW for dcvs fp: %d\n";
                                    goto code_r0x08004fdc;
                                }
                                uVar4 = setup_ddrllcc_fp_device(iVar5,iVar9,piVar10);
                                uVar6 = uVar4;
                                if (uVar4 < 0) {
                                    pcVar12 = "Error setting up fp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
                            else {
                                if (uStack_cc != 0) {
                                    uVar6 = 0xffffffea;
                                    goto code_r0x08004f78;
                                }
                                uVar4 = *(iVar9 + 0x68);
                                if (uVar4 < 2) {
code_r0x080048f8:
                                    uVar4 = sym.setup_icc_sp_device(iVar5,iVar9,piVar10);
                                }
                                else {
                                    if (uVar4 != 2) {
                                        if (uVar4 != 3) {
                                            uVar6 = 0;
                                            goto code_r0x08004c84;
                                        }
                                        goto code_r0x080048f8;
                                    }
                                    uVar4 = sym.setup_epss_l3_device(iVar5,noname_1,piVar10,1);
                                }
                                uVar6 = uVar4;
                                if (uVar4 < 0) {
                                    pcVar12 = "Error setting up sp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
code_r0x08004c84:
                            piVar10[6] = piVar10 + 6;
                            piVar10[7] = piVar10 + 6;
                            __mutex_init(piVar10 + 9,"&path->voter_lock",
                                         reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt);
                            if (piVar10[1] == 0) {
                                *(iVar9 + 0x88) = *(iVar9 + 0x84);
                                if (3 < *(iVar9 + 0x68)) goto code_r0x08005010;
                                *(&uStack_c8 + *(iVar9 + 0x68) * 0xc) = *(iVar9 + 0x84);
                                if (3 < *(iVar9 + 0x68)) goto code_r0x08005010;
                                *(&uStack_c8 + *(iVar9 + 0x68) * 0xc + 4) = 0;
                                uVar4 = *(iVar9 + 0x68);
                                if (3 < uVar4) goto code_r0x08005010;
                                pcVar2 = piVar10[0x10];
                                *(&uStack_c0 + uVar4 * 0xc) = uVar4;
                                if (2 < (pcVar2 + -0x8003638 >> 3 | pcVar2 << 0x3d)) {
                                    __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar2,0x8001800);
                                }
                                if (4 < *(iVar9 + 0x68)) goto code_r0x08005010;
                                uVar4 = (*pcVar2)(piVar10,&uStack_c8 + *(iVar9 + 0x68) * 0xc,1);
                                uVar6 = uVar4;
                                if (uVar4 < 0) {
                                    _dev_err(iVar5,"Err committing freq for path=%d\n",uVar6);
                                }
                            }
                            if (2 < uStack_cc) goto code_r0x08005010;
                            *(iVar9 + uStack_cc * 8 + 0x90) = piVar10;
                            piVar10 = _segment.ehdr;
                            *(iVar9 + 0xac) = *(iVar9 + 0xac) + 1;
                            if ((((*(piVar10 + 0x10) <= *(piVar10 + 0x84)) &&
                                 ((iVar9 = piVar10[0xc], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))))) &&
                                ((iVar9 = piVar10[0xd], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))))) &&
                               (((iVar9 = piVar10[0xe], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))) &&
                                ((iVar9 = piVar10[0xf], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))))))) {
                                *(piVar10 + 0x11) = 1;
                            }
code_r0x08004ed0:
                            iVar13 = uVar6;
                        }
                        if (-1 < iVar13) {
code_r0x08004f54:
                            uVar6 = 0;
                            goto code_r0x08004f8c;
                        }
                    }
                }
            }
        }
        else {
            if (iVar13 == 1) {
                uStack_cc = 4;
                if (_segment.ehdr == NULL) {
                    pcVar12 = "Missing QCOM DCVS dev data\n";
                    goto code_r0x08004c3c;
                }
                uVar4 = of_property_read_variable_u32_array(*(iVar7 + 0x300),"qcom,dcvs-hw-type",&uStack_cc,1,0);
                if ((uVar4 < 0) || (3 < uStack_cc)) {
                    _dev_err(iVar5,"Invalid dcvs hw type:%d, ret:%d\n",uStack_cc,uVar4 & uVar4 >> 0x1f);
                    uVar6 = 0xffffffed;
                    goto code_r0x08004f78;
                }
                piVar10 = devm_kmalloc(iVar5,0xb0,0xdc0);
                if (piVar10 == NULL) goto code_r0x08004b70;
                uVar14 = *(iVar7 + 0x300);
                *piVar10 = iVar5;
                *(piVar10 + 0xd) = uStack_cc;
                iVar9 = of_get_next_available_child(uVar14,0);
                if (iVar9 == 0) {
                    *(piVar10 + 0x15) = 0;
                }
                else {
                    iVar13 = 0;
                    do {
                        iVar9 = of_get_next_available_child(uVar14,iVar9);
                        iVar13 = iVar13 + -1;
                    } while (iVar9 != 0);
                    *(piVar10 + 0x15) = -iVar13;
                    if (iVar13 != 0) {
                        if (uStack_cc == 2) {
                            uVar6 = sym.populate_l3_table(iVar5,piVar10 + 0xe);
                            uVar6 = uVar6 & 0xffffffff;
                        }
                        else {
                            arg1 = *(iVar7 + 0x300);
                            uStack_c8 = uStack_c8 & 0xffffffff00000000;
                            iVar9 = of_parse_phandle(arg1,"qcom,freq-tbl",0);
                            if (iVar9 != 0) {
                                arg1 = of_parse_phandle(arg1,"qcom,freq-tbl",0);
                            }
                            iVar9 = of_get_next_child(arg1,0);
                            if (iVar9 != 0) {
                                iVar13 = 0;
                                do {
                                    iVar9 = of_get_next_child(arg1,iVar9);
                                    iVar13 = iVar13 + -1;
                                } while (iVar9 != 0);
                                if (iVar13 != 0) {
                                    arg1 = sym.qcom_dcvs_get_ddr_child_node(arg1);
                                }
                            }
                            iVar9 = of_find_property(arg1,"qcom,freq-tbl",&uStack_c8);
                            if (iVar9 == 0) {
                                pcVar12 = "Unable to find freq tbl prop\n";
                            }
                            else {
                                uVar1 = uStack_c8;
                                uVar4 = uStack_c8 >> 2;
                                uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar4);
                                if (3 < uVar1) {
                                    iVar9 = devm_kmalloc(iVar5,-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2,
                                                         0xdc0);
                                    piVar10[0xe] = iVar9;
                                    if (iVar9 == 0) {
                                        uVar6 = 0xfffffff4;
                                    }
                                    else {
                                        uVar4 = of_property_read_variable_u32_array
                                                          (arg1,"qcom,freq-tbl",iVar9,uStack_c8,0);
                                        if (uVar4 < 0) {
                                            uVar6 = uVar4;
                                            _dev_err(iVar5,"Error reading freq table from DT: %d\n",uVar6);
                                        }
                                        else {
                                            uVar6 = uStack_c8 & 0xffffffff;
                                        }
                                    }
                                    goto code_r0x08004e1c;
                                }
                                pcVar12 = "Error: empty freq table\n";
                            }
                            _dev_err(iVar5,pcVar12);
                            uVar6 = 0xffffffea;
                        }
code_r0x08004e1c:
                        uVar4 = uVar6;
                        if (uVar4 < 1) {
                            _dev_err(iVar5,"Error reading freq table: %d\n",uVar6);
                        }
                        else {
                            *(piVar10 + 0xf) = uVar4;
                            uVar14 = *(iVar7 + 0x300);
                            *(piVar10 + 0x84) = piVar10[0xe][uVar4 - 1];
                            *(piVar10 + 0x10) = *piVar10[0xe];
                            uVar4 = of_property_read_variable_u32_array(uVar14,"qcom,bus-width",piVar10 + 0x7c,1,0);
                            if ((uVar4 < 0) || (*(piVar10 + 0x7c) == 0)) {
                                _dev_err(iVar5,"Missing or invalid bus-width: %d\n",uVar4 & uVar4 >> 0x1f);
                                uVar6 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            if (3 < uStack_cc) goto code_r0x08005010;
                            piVar11 = piVar10 + 1;
                            uVar4 = kobject_init_and_add
                                              (piVar11,obj.dcvs_hw_ktype,_segment.ehdr,
                                               *(obj.dcvs_hw_names + uStack_cc * 8));
                            uVar6 = uVar4;
                            if (uVar4 < 0) {
                                _dev_err(iVar5,"failed to init dcvs hw kobj: %d\n",uVar6);
                                goto code_r0x08004f74;
                            }
                            *(iVar7 + 0xa8) = piVar10;
                            piVar11 = _segment.ehdr;
                            if (3 < uStack_cc) goto code_r0x08005010;
                            _segment.ehdr[uStack_cc + 0xc] = piVar10;
                            *(piVar11 + 0x84) = *(piVar11 + 0x84) + 1;
                        }
                        if (uVar4 == 0) {
                            uVar14 = *(iVar7 + 0x300);
                            iVar9 = of_get_next_available_child(uVar14,0);
                            if (iVar9 != 0) {
                                iVar13 = 0;
                                do {
                                    iVar9 = of_get_next_available_child(uVar14,iVar9);
                                    iVar13 = iVar13 + -1;
                                } while (iVar9 != 0);
                                goto code_r0x08004f3c;
                            }
                            goto code_r0x08004f54;
                        }
                        goto code_r0x08004ed0;
                    }
                }
                pcVar12 = "No dcvs paths provided!\n";
            }
            else {
                if (iVar13 != 0) goto code_r0x08004ab4;
                if (_segment.ehdr != NULL) {
                    pcVar12 = "Only one qcom-dcvs device allowed\n";
                    goto code_r0x08004c3c;
                }
                _segment.ehdr = devm_kmalloc(iVar5,0x90,0xdc0);
                if (_segment.ehdr == NULL) {
code_r0x08004b70:
                    uVar6 = 0xfffffff4;
                    goto code_r0x08004f78;
                }
                uVar14 = *(iVar7 + 0x300);
                iVar9 = of_get_next_available_child(uVar14,0);
                if (iVar9 == 0) {
                    pcVar12 = "No dcvs hw nodes provided!\n";
                    *(_segment.ehdr + 0x10) = 0;
                }
                else {
                    iVar13 = 0;
                    do {
                        iVar9 = of_get_next_available_child(uVar14,iVar9);
                        piVar10 = _segment.ehdr;
                        iVar13 = iVar13 + -1;
                    } while (iVar9 != 0);
                    *(_segment.ehdr + 0x10) = -iVar13;
                    if (iVar13 != 0) {
                        uVar4 = kobject_init_and_add(piVar10,obj.qcom_dcvs_ktype,_trace_event_raw_init,"bus_dcvs");
                        if (uVar4 < 0) {
                            uVar6 = uVar4;
                            _dev_err(iVar5,"failed to init qcom-dcvs kobj: %d\n",uVar6);
                            piVar11 = _segment.ehdr;
code_r0x08004f74:
                            kobject_put(piVar11);
                            goto code_r0x08004f78;
                        }
                        uVar14 = *(iVar7 + 0x300);
                        iVar9 = of_get_next_available_child(uVar14,0);
                        if (iVar9 != 0) {
                            iVar13 = 0;
                            do {
                                iVar9 = of_get_next_available_child(uVar14,iVar9);
                                iVar13 = iVar13 + -1;
                            } while (iVar9 != 0);
code_r0x08004f3c:
                            if (iVar13 != 0) {
                                of_platform_populate(*(iVar7 + 0x300),0,0,iVar5);
                            }
                        }
                        goto code_r0x08004f54;
                    }
                    pcVar12 = "No dcvs hw nodes provided!\n";
                }
            }
code_r0x08004c3c:
            _dev_err(iVar5,pcVar12);
            uVar6 = 0xffffffed;
        }
code_r0x08004f78:
        _dev_err(iVar5,"Failed to probe qcom-dcvs device: %d\n",uVar6);
    }
code_r0x08004f8c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_98) {
        return uVar6;
    }
    __stack_chk_fail();
code_r0x08005010:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005014);
    (*pcVar2)();
}


// ===== sym.__typeid__ZTSFiP9dcvs_pathP9dcvs_freqjE_global_addr @ 0x08003638 (size 8) =====

ulong sym.__typeid__ZTSFiP9dcvs_pathP9dcvs_freqjE_global_addr(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x10);
    uVar1 = *(iVar2 + 0x78);
    if (uVar1 == 0) {
        arg1 = 0;
    }
    else {
        arg1 = 0;
        do {
            if (*param_2 <= *(*(iVar2 + 0x70) + arg1 * 4)) goto code_r0x08005fd4;
            arg1 = arg1 + 1;
        } while (uVar1 != arg1);
        arg1 = uVar1;
    }
code_r0x08005fd4:
    if (*(iVar2 + 0x68) == 2) {
        iVar2 = tpidr_el1;
        sym.writel_relaxed(arg1,**(param_1 + 0x78) + *((*(param_1 + 0x78))[2] + *(cpu_number + iVar2) * 4));
    }
    *(param_1 + 0x18) = *param_2;
    return 0;
}


// ===== sym.commit_icc_freq.3221f8ace5cb55c67e6fac8d82522723.cfi_jt @ 0x08003640 (size 8) =====

int sym.commit_icc_freq.3221f8ace5cb55c67e6fac8d82522723.cfi_jt(ulong *param_1,int *param_2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = icc_set_bw(*param_1[0xf],param_2[1] * *(param_1[2] + 0x7c),*(param_1[2] + 0x7c) * *param_2);
    if (iVar1 < 0) {
        _dev_err(*param_1,"icc set bw request failed: %d\n",iVar1);
    }
    else {
        *(param_1 + 3) = *param_2;
        *(param_1 + 0x1c) = param_2[1];
    }
    return iVar1;
}


// ===== sym.commit_epss_l3_shared.109e05b8b2abd977843f24c428d1ffbd.cfi_jt @ 0x08003648 (size 8) =====

ulong sym.commit_epss_l3_shared.109e05b8b2abd977843f24c428d1ffbd.cfi_jt(int64_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint64_t arg1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x10);
    uVar1 = *(iVar2 + 0x78);
    if (uVar1 == 0) {
        arg1 = 0;
    }
    else {
        arg1 = 0;
        do {
            if (*param_2 <= *(*(iVar2 + 0x70) + arg1 * 4)) goto code_r0x08005f3c;
            arg1 = arg1 + 1;
        } while (uVar1 != arg1);
        arg1 = uVar1;
    }
code_r0x08005f3c:
    if (*(iVar2 + 0x68) == 2) {
        sym.writel_relaxed(arg1,**(param_1 + 0x78) + *(*(param_1 + 0x78) + 1));
    }
    *(param_1 + 0x18) = *param_2;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003650 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt);
    return;
}


// ===== sym.qcom_dcvs_hw_minmax_get.cfi_jt @ 0x08003658 (size 8) =====

ulong sym.qcom_dcvs_hw_minmax_get.cfi_jt(uint32_t param_1,uint *param_2,uint *param_3)

{
    int64_t iVar1;
    
    if (3 < param_1) {
        return 0xffffffea;
    }
    if (*(_segment.ehdr + 0x88) != '\0') {
        iVar1 = *(_segment.ehdr + param_1 * 8 + 0x60);
        if (iVar1 != 0) {
            *param_2 = *(iVar1 + 0x80);
            *param_3 = *(iVar1 + 0x84);
            return 0;
        }
        return 0xffffffed;
    }
    return 0xfffffdfb;
}


// ===== sym.__traceiter_memlat_dev_meas.cfi_jt @ 0x08003660 (size 8) =====

ulong sym.__traceiter_memlat_dev_meas.cfi_jt
                (ulong param_1,ulong param_2,uint param_3,ulong param_4,ulong param_5,ulong param_6,uint param_7,
                uint param_8,uint param_9,uint param_10)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80082f0;
    piVar1 = *0x80082f0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_bw_hwmon_update.cfi_jt @ 0x08003668 (size 8) =====

ulong sym.__traceiter_bw_hwmon_update.cfi_jt
                (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80083c8;
    piVar1 = *0x80083c8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003670 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,ulong param_5,ulong param_6,
               ulong param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong uVar11;
    ulong uVar12;
    ulong uVar13;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint32_t uStack_114;
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
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar15 = *(param_1 + 0x48);
    uVar9 = param_4;
    uVar11 = param_5;
    uVar12 = param_6;
    uVar13 = param_7;
    uVar14 = param_8;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar7 = param_3;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar9 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar4 = strlen(pcVar2);
    puVar7 = iVar4 + 1 + 0x40;
    iVar6 = trace_event_buffer_reserve(&uStack_98,param_1);
    if (iVar6 != 0) {
        *(iVar6 + 8) = (iVar4 + 1) * 0x10000 | 0x40;
        strcpy(iVar6 + 0x40,pcVar2);
        *(iVar6 + 0x10) = param_3;
        *(iVar6 + 0x18) = param_4;
        *(iVar6 + 0x20) = param_5;
        *(iVar6 + 0x28) = param_6;
        *(iVar6 + 0x30) = param_7;
        *(iVar6 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_98);
    }
code_r0x080076a0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar16 = __stack_chk_fail();
    uVar5 = auVar16._0_8_;
    *extraout_x18 = sym.perf_trace_bw_hwmon_debug;
    pcStack_f8 = sym.perf_trace_bw_hwmon_debug;
    iVar6 = sp_el0;
    pcVar2 = "(null)";
    if (auVar16._8_8_ != NULL) {
        pcVar2 = auVar16._8_8_;
    }
    iStack_108 = *(iVar6 + 0x5e0);
    iStack_110 = 0;
    uStack_114 = 0;
    puVar8 = puVar7;
    uVar10 = uVar9;
    uStack_130 = uVar12;
    uStack_128 = uVar13;
    uStack_120 = uVar14;
    puStack_100 = &stack0xffffffffffffffa0;
    iVar4 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_114;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_110,puVar8);
        if (iVar6 != 0) {
            uVar10 = ___cpu_online_mask & 0x3f;
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = &uStack_130;
            *(iStack_110 + 0x100) = ~(-1L << uVar10) & 0x80076e0;
            *(iStack_110 + 0x108) = 5;
            *(iVar6 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,pcVar2);
            puVar8 = uStack_114;
            *(iVar6 + 0x20) = uVar11;
            *(iVar6 + 0x28) = uStack_130;
            *(iVar6 + 0x10) = puVar7;
            *(iVar6 + 0x18) = uVar9;
            *(iVar6 + 0x30) = uStack_128;
            *(iVar6 + 0x38) = uStack_120;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar8,uVar5,1,iStack_110,piVar1,0);
            uVar10 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_108) {
        auVar16 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_00 = 0x8007878;
        bpf_trace_run8(auVar16._0_8_,auVar16._8_8_,puVar8 & 0xffffffff,uVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003678 (size 8) =====

void sym.__bpf_trace_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run7();
    return;
}


// ===== sym.perf_trace_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003680 (size 8) =====

void sym.perf_trace_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,ulong param_5,ulong param_6,
               ulong param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar10 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    puVar7 = param_3;
    uVar8 = param_4;
    uStack_90 = param_6;
    uStack_88 = param_7;
    uStack_80 = param_8;
    iVar5 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &uStack_74;
        iVar3 = (iVar5 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_70,puVar7);
        if (iVar6 != 0) {
            uVar9 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &uStack_90;
            uVar8 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar9 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar8;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = iVar5 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,pcVar2);
            puVar7 = uStack_74;
            *(iVar6 + 0x20) = param_5;
            *(iVar6 + 0x28) = uStack_90;
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x30) = uStack_88;
            *(iVar6 + 0x38) = uStack_80;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar7,param_1,1,iStack_70,piVar1,0);
            uVar8 = param_1;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x8007878;
    bpf_trace_run8(auVar10._0_8_,auVar10._8_8_,puVar7 & 0xffffffff,uVar8 & 0xffffffff);
    return;
}


// ===== sym.trace_raw_output_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003688 (size 8) =====

void sym.trace_raw_output_qcom_dcvs_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
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
        trace_event_printf(param_1,"name=%s hw=%d path=%d ib=%lu path_ib=%lu ab=%lu path_ab=%lu boost=%lu\n",
                           iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),
                           *(iVar2 + 0x28),*(iVar2 + 0x30),*(iVar2 + 0x38));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003690 (size 8) =====

void sym.trace_raw_output_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
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
        trace_event_printf(param_1,"dev: %s, mbps = %lu, freq = %lu, up = %lu, down = %lu\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003698 (size 8) =====

void sym.trace_raw_output_qcom_dcvs_boost.d034cccb1b59d5699f08df130583ff8d.cfi_jt
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
        trace_event_printf(param_1,"hw=%d path=%d boost=%lu path_ib=%lu path_ab=%lu\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036a0 (size 8) =====

void sym.trace_raw_output_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt
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
        trace_event_printf(param_1,
                           "dev: %s, id=%u, inst=%lu, mem=%lu, freq=%lu, stall=%u, wb=%u, ratio=%u, fe_stall=%u\n",
                           iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),
                           *(iVar2 + 0x28),*(iVar2 + 0x2c),*(iVar2 + 0x30),*(iVar2 + 0x34));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036a8 (size 8) =====

void sym.trace_raw_output_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt
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
        trace_event_printf(param_1,"dev: %s, mbps = %lu, us = %lu, wake = %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0x10)
                           ,*(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036b0 (size 8) =====

void sym.trace_raw_output_bw_hwmon_debug.d034cccb1b59d5699f08df130583ff8d.cfi_jt
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
        trace_event_printf(param_1,"dev=%s mbps=%lu zone=%lu hist_max=%lu hist_mem=%lu hyst_mbps=%lu hyst_len=%lu\n",
                           iVar2 + *(iVar2 + 8),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28),
                           *(iVar2 + 0x30),*(iVar2 + 0x38));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036b8 (size 8) =====

void sym.trace_raw_output_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
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
        trace_event_printf(param_1,"dev: %s, id=%u, inst=%lu, mem=%lu, freq=%lu, vote=%lu\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x080036c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt @ 0x080036c8 (size 8) =====

uint64_t sym.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    uint32_t uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar1 = param_1 + 0x10;
    iStack_58 = *(iVar7 + 0x5e0);
    piVar6 = of_device_get_match_data(iVar1);
    if (piVar6 == NULL) {
        iVar5 = 3;
code_r0x08004ab4:
        _dev_err(iVar1,"Invalid qcom-dcvs type: %u\n",iVar5);
        uVar13 = 0xffffffea;
    }
    else {
        iVar5 = *piVar6;
        if (iVar5 == 2) {
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            iVar7 = *(*(param_1 + 0x70) + 0x98);
            uStack_8c = 3;
            uStack_88 = 0;
            uStack_80 = 0;
            if (iVar7 == 0) {
                _dev_err(iVar1,"QCOM DCVS HW not configured\n");
                uVar13 = 0xffffffed;
            }
            else {
                uVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,dcvs-path-type",&uStack_8c,1,0)
                ;
                if ((uVar4 < 0) || (2 < uStack_8c)) {
                    _dev_err(iVar1,"Invalid path type:%d, ret:%d\n",uStack_8c,uVar4 & uVar4 >> 0x1f);
                    uVar13 = 0xffffffed;
                }
                else {
                    piVar8 = devm_kmalloc(iVar1,0x88,0xdc0);
                    if (piVar8 == NULL) {
code_r0x08004b20:
                        uVar13 = 0xfffffff4;
                    }
                    else {
                        *piVar8 = iVar1;
                        piVar8[2] = iVar7;
                        *(piVar8 + 1) = uStack_8c;
                        if (uStack_8c == 2) {
                            if (*(iVar7 + 0x68) != 2) {
                                pcVar11 = "Unsupported HW for path: %d\n";
code_r0x08004fdc:
                                _dev_err(iVar1,pcVar11,0);
                                uVar13 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            _trace_event_raw_init = piVar8;
                            uVar13 = __sw_hweight64();
                            iVar14 = devm_kmalloc(iVar1,(uVar13 & 0xffffffff) << 2,0xdc0);
                            piVar8[5] = iVar14;
                            if (iVar14 == 0) goto code_r0x08004b20;
                            uVar9 = sym.setup_epss_l3_device(iVar1,noname_1_00,piVar8,0);
                            uVar13 = uVar9 & 0xffffffff;
                            if (-1 < uVar9) goto code_r0x08004c84;
                            pcVar11 = "Error setting up percpu dev: %d\n";
code_r0x08004c6c:
                            _dev_err(iVar1,pcVar11,uVar13);
                            iVar5 = uVar13;
                        }
                        else {
                            if (uStack_8c == 1) {
                                if (1 < *(iVar7 + 0x68)) {
                                    pcVar11 = "Unsupported HW for dcvs fp: %d\n";
                                    goto code_r0x08004fdc;
                                }
                                uVar9 = setup_ddrllcc_fp_device(iVar1,iVar7,piVar8);
                                uVar13 = uVar9 & 0xffffffff;
                                if (uVar9 < 0) {
                                    pcVar11 = "Error setting up fp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
                            else {
                                if (uStack_8c != 0) {
                                    uVar13 = 0xffffffea;
                                    goto code_r0x08004f78;
                                }
                                uVar4 = *(iVar7 + 0x68);
                                if (uVar4 < 2) {
code_r0x080048f8:
                                    uVar9 = sym.setup_icc_sp_device(iVar1,iVar7,piVar8);
                                }
                                else {
                                    if (uVar4 != 2) {
                                        if (uVar4 != 3) {
                                            uVar13 = 0;
                                            goto code_r0x08004c84;
                                        }
                                        goto code_r0x080048f8;
                                    }
                                    uVar9 = sym.setup_epss_l3_device(iVar1,noname_1,piVar8,1);
                                }
                                uVar13 = uVar9 & 0xffffffff;
                                if (uVar9 < 0) {
                                    pcVar11 = "Error setting up sp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
code_r0x08004c84:
                            piVar8[6] = piVar8 + 6;
                            piVar8[7] = piVar8 + 6;
                            __mutex_init(piVar8 + 9,"&path->voter_lock",
                                         reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt);
                            if (piVar8[1] == 0) {
                                *(iVar7 + 0x88) = *(iVar7 + 0x84);
                                if (3 < *(iVar7 + 0x68)) goto code_r0x08005010;
                                *(&uStack_88 + *(iVar7 + 0x68) * 0xc) = *(iVar7 + 0x84);
                                if (3 < *(iVar7 + 0x68)) goto code_r0x08005010;
                                *(&uStack_88 + *(iVar7 + 0x68) * 0xc + 4) = 0;
                                uVar4 = *(iVar7 + 0x68);
                                if (3 < uVar4) goto code_r0x08005010;
                                pcVar3 = piVar8[0x10];
                                *(&uStack_80 + uVar4 * 0xc) = uVar4;
                                if (2 < (pcVar3 + -0x8003638 >> 3 | pcVar3 << 0x3d)) {
                                    __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar3,0x8001800);
                                }
                                if (4 < *(iVar7 + 0x68)) goto code_r0x08005010;
                                uVar9 = (*pcVar3)(piVar8,&uStack_88 + *(iVar7 + 0x68) * 0xc,1);
                                uVar13 = uVar9 & 0xffffffff;
                                if (uVar9 < 0) {
                                    _dev_err(iVar1,"Err committing freq for path=%d\n",uVar13);
                                }
                            }
                            if (2 < uStack_8c) goto code_r0x08005010;
                            *(iVar7 + uStack_8c * 8 + 0x90) = piVar8;
                            piVar8 = _segment.ehdr;
                            *(iVar7 + 0xac) = *(iVar7 + 0xac) + 1;
                            if ((((*(piVar8 + 0x10) <= *(piVar8 + 0x84)) &&
                                 ((iVar7 = piVar8[0xc], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))))) &&
                                ((iVar7 = piVar8[0xd], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))))) &&
                               (((iVar7 = piVar8[0xe], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))) &&
                                ((iVar7 = piVar8[0xf], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))))))) {
                                *(piVar8 + 0x11) = 1;
                            }
code_r0x08004ed0:
                            iVar5 = uVar13;
                        }
                        if (-1 < iVar5) {
code_r0x08004f54:
                            uVar13 = 0;
                            goto code_r0x08004f8c;
                        }
                    }
                }
            }
        }
        else {
            if (iVar5 == 1) {
                uStack_8c = 4;
                if (_segment.ehdr == NULL) {
                    pcVar11 = "Missing QCOM DCVS dev data\n";
                    goto code_r0x08004c3c;
                }
                uVar4 = of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,dcvs-hw-type",&uStack_8c,1,0);
                if ((uVar4 < 0) || (3 < uStack_8c)) {
                    _dev_err(iVar1,"Invalid dcvs hw type:%d, ret:%d\n",uStack_8c,uVar4 & uVar4 >> 0x1f);
                    uVar13 = 0xffffffed;
                    goto code_r0x08004f78;
                }
                piVar8 = devm_kmalloc(iVar1,0xb0,0xdc0);
                if (piVar8 == NULL) goto code_r0x08004b70;
                uVar12 = *(param_1 + 0x300);
                *piVar8 = iVar1;
                *(piVar8 + 0xd) = uStack_8c;
                iVar7 = of_get_next_available_child(uVar12,0);
                if (iVar7 == 0) {
                    *(piVar8 + 0x15) = 0;
                }
                else {
                    iVar5 = 0;
                    do {
                        iVar7 = of_get_next_available_child(uVar12,iVar7);
                        iVar5 = iVar5 + -1;
                    } while (iVar7 != 0);
                    *(piVar8 + 0x15) = -iVar5;
                    if (iVar5 != 0) {
                        if (uStack_8c == 2) {
                            uVar13 = sym.populate_l3_table(iVar1,piVar8 + 0xe);
                            uVar13 = uVar13 & 0xffffffff;
                        }
                        else {
                            iVar14 = *(param_1 + 0x300);
                            uStack_88 = uStack_88 & 0xffffffff00000000;
                            iVar7 = of_parse_phandle(iVar14,"qcom,freq-tbl",0);
                            if (iVar7 != 0) {
                                iVar14 = of_parse_phandle(iVar14,"qcom,freq-tbl",0);
                            }
                            iVar7 = of_get_next_child(iVar14,0);
                            if (iVar7 != 0) {
                                iVar5 = 0;
                                do {
                                    iVar7 = of_get_next_child(iVar14,iVar7);
                                    iVar5 = iVar5 + -1;
                                } while (iVar7 != 0);
                                if (iVar5 != 0) {
                                    iVar14 = sym.qcom_dcvs_get_ddr_child_node(iVar14);
                                }
                            }
                            iVar7 = of_find_property(iVar14,"qcom,freq-tbl",&uStack_88);
                            if (iVar7 == 0) {
                                pcVar11 = "Unable to find freq tbl prop\n";
                            }
                            else {
                                uVar2 = uStack_88;
                                uVar4 = uStack_88 >> 2;
                                uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
                                if (3 < uVar2) {
                                    iVar7 = devm_kmalloc(iVar1,-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2,
                                                         0xdc0);
                                    piVar8[0xe] = iVar7;
                                    if (iVar7 == 0) {
                                        uVar13 = 0xfffffff4;
                                    }
                                    else {
                                        uVar4 = of_property_read_variable_u32_array
                                                          (iVar14,"qcom,freq-tbl",iVar7,uStack_88,0);
                                        if (uVar4 < 0) {
                                            uVar13 = uVar4;
                                            _dev_err(iVar1,"Error reading freq table from DT: %d\n",uVar13);
                                        }
                                        else {
                                            uVar13 = uStack_88 & 0xffffffff;
                                        }
                                    }
                                    goto code_r0x08004e1c;
                                }
                                pcVar11 = "Error: empty freq table\n";
                            }
                            _dev_err(iVar1,pcVar11);
                            uVar13 = 0xffffffea;
                        }
code_r0x08004e1c:
                        iVar5 = uVar13;
                        if (iVar5 < 1) {
                            _dev_err(iVar1,"Error reading freq table: %d\n",uVar13);
                        }
                        else {
                            *(piVar8 + 0xf) = iVar5;
                            uVar12 = *(param_1 + 0x300);
                            *(piVar8 + 0x84) = piVar8[0xe][iVar5 - 1];
                            *(piVar8 + 0x10) = *piVar8[0xe];
                            uVar4 = of_property_read_variable_u32_array(uVar12,"qcom,bus-width",piVar8 + 0x7c,1,0);
                            if ((uVar4 < 0) || (*(piVar8 + 0x7c) == 0)) {
                                _dev_err(iVar1,"Missing or invalid bus-width: %d\n",uVar4 & uVar4 >> 0x1f);
                                uVar13 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            if (3 < uStack_8c) goto code_r0x08005010;
                            piVar10 = piVar8 + 1;
                            uVar9 = kobject_init_and_add
                                              (piVar10,obj.dcvs_hw_ktype,_segment.ehdr,
                                               *(obj.dcvs_hw_names + uStack_8c * 8));
                            uVar13 = uVar9 & 0xffffffff;
                            iVar5 = uVar9;
                            if (iVar5 < 0) {
                                _dev_err(iVar1,"failed to init dcvs hw kobj: %d\n",uVar13);
                                goto code_r0x08004f74;
                            }
                            *(param_1 + 0xa8) = piVar8;
                            piVar10 = _segment.ehdr;
                            if (3 < uStack_8c) goto code_r0x08005010;
                            _segment.ehdr[uStack_8c + 0xc] = piVar8;
                            *(piVar10 + 0x84) = *(piVar10 + 0x84) + 1;
                        }
                        if (iVar5 == 0) {
                            uVar12 = *(param_1 + 0x300);
                            iVar7 = of_get_next_available_child(uVar12,0);
                            if (iVar7 != 0) {
                                iVar5 = 0;
                                do {
                                    iVar7 = of_get_next_available_child(uVar12,iVar7);
                                    iVar5 = iVar5 + -1;
                                } while (iVar7 != 0);
                                goto code_r0x08004f3c;
                            }
                            goto code_r0x08004f54;
                        }
                        goto code_r0x08004ed0;
                    }
                }
                pcVar11 = "No dcvs paths provided!\n";
            }
            else {
                if (iVar5 != 0) goto code_r0x08004ab4;
                if (_segment.ehdr != NULL) {
                    pcVar11 = "Only one qcom-dcvs device allowed\n";
                    goto code_r0x08004c3c;
                }
                _segment.ehdr = devm_kmalloc(iVar1,0x90,0xdc0);
                if (_segment.ehdr == NULL) {
code_r0x08004b70:
                    uVar13 = 0xfffffff4;
                    goto code_r0x08004f78;
                }
                uVar12 = *(param_1 + 0x300);
                iVar7 = of_get_next_available_child(uVar12,0);
                if (iVar7 == 0) {
                    pcVar11 = "No dcvs hw nodes provided!\n";
                    *(_segment.ehdr + 0x10) = 0;
                }
                else {
                    iVar5 = 0;
                    do {
                        iVar7 = of_get_next_available_child(uVar12,iVar7);
                        piVar8 = _segment.ehdr;
                        iVar5 = iVar5 + -1;
                    } while (iVar7 != 0);
                    *(_segment.ehdr + 0x10) = -iVar5;
                    if (iVar5 != 0) {
                        uVar4 = kobject_init_and_add(piVar8,obj.qcom_dcvs_ktype,_trace_event_raw_init,"bus_dcvs");
                        if (uVar4 < 0) {
                            uVar13 = uVar4;
                            _dev_err(iVar1,"failed to init qcom-dcvs kobj: %d\n",uVar13);
                            piVar10 = _segment.ehdr;
code_r0x08004f74:
                            kobject_put(piVar10);
                            goto code_r0x08004f78;
                        }
                        uVar12 = *(param_1 + 0x300);
                        iVar7 = of_get_next_available_child(uVar12,0);
                        if (iVar7 != 0) {
                            iVar5 = 0;
                            do {
                                iVar7 = of_get_next_available_child(uVar12,iVar7);
                                iVar5 = iVar5 + -1;
                            } while (iVar7 != 0);
code_r0x08004f3c:
                            if (iVar5 != 0) {
                                of_platform_populate(*(param_1 + 0x300),0,0,iVar1);
                            }
                        }
                        goto code_r0x08004f54;
                    }
                    pcVar11 = "No dcvs hw nodes provided!\n";
                }
            }
code_r0x08004c3c:
            _dev_err(iVar1,pcVar11);
            uVar13 = 0xffffffed;
        }
code_r0x08004f78:
        _dev_err(iVar1,"Failed to probe qcom-dcvs device: %d\n",uVar13);
    }
code_r0x08004f8c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar13;
    }
    __stack_chk_fail();
code_r0x08005010:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8005014);
    (*pcVar3)();
}


// ===== sym.__traceiter_qcom_dcvs_update.cfi_jt @ 0x080036d0 (size 8) =====

ulong sym.__traceiter_qcom_dcvs_update.cfi_jt
                (ulong param_1,ulong param_2,uint param_3,uint param_4,ulong param_5,ulong param_6,ulong param_7,
                ulong param_8,ulong param_9)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008260;
    piVar1 = *0x8008260;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__bpf_trace_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036d8 (size 8) =====

void sym.__bpf_trace_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (ulong param_1,ulong param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run6(param_1,param_2,param_3);
    return;
}


// ===== sym.perf_trace_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036e0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6
               ,int64_t *param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t *piVar18;
    ulong uVar19;
    uint64_t uVar20;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar21;
    int64_t unaff_x21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    char *pcVar26;
    uint64_t unaff_x27;
    code *pcVar27;
    uint64_t unaff_x30;
    uchar auVar28 [16];
    uchar auVar29 [16];
    uchar auVar30 [16];
    uchar auVar31 [16];
    int64_t iStack_3d0;
    int64_t *piStack_3c8;
    ulong uStack_3c0;
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    ulong **ppuStack_3a0;
    code *pcStack_398;
    code *pcStack_390;
    uint64_t uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    uint32_t *puStack_370;
    uint64_t uStack_368;
    uint64_t uStack_360;
    int64_t iStack_358;
    int64_t *piStack_350;
    ulong uStack_348;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    int64_t iStack_308;
    ulong **ppuStack_300;
    ulong uStack_2f8;
    code *pcStack_2f0;
    ulong uStack_2e0;
    char *pcStack_2d8;
    int64_t *piStack_2d0;
    uint32_t *puStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    int64_t iStack_2a0;
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    code *pcStack_268;
    char *pcStack_260;
    uint64_t uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    uint32_t *puStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    char *pcStack_1c0;
    int64_t *piStack_1b8;
    uint32_t *puStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uchar auStack_190 [12];
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    char *pcStack_150;
    int64_t *piStack_148;
    uint64_t uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    uint32_t *puStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar auStack_90 [8];
    int64_t iStack_88;
    int64_t *piStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    pcVar26 = "(null)";
    if (param_2 != NULL) {
        pcVar26 = param_2;
    }
    iStack_68 = *(iVar8 + 0x5e0);
    uVar23 = param_3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar11 = param_3;
    uVar16 = param_4;
    uVar20 = param_5;
    iStack_88 = param_6;
    piStack_80 = param_7;
    iVar7 = strlen(pcVar26);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_74;
        unaff_x27 = (iVar7 + 0x3cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(unaff_x27,&iStack_70);
        if (iVar8 != 0) {
            uVar20 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_90;
            uVar16 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar16 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar16;
            *(iStack_70 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x10030;
            strcpy(iVar8 + 0x30,pcVar26);
            puVar11 = uStack_74;
            uVar20 = 1;
            param_8 = 0;
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4;
            *(iVar8 + 0x18) = param_5;
            *(iVar8 + 0x20) = iStack_88;
            *(iVar8 + 0x28) = piStack_80;
            param_6 = iStack_70;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(iVar8,unaff_x27);
            uVar16 = param_1;
            unaff_x21 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    auVar28 = __stack_chk_fail();
    iVar10 = auVar28._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18 = 0x8007040;
    uStack_c8 = 0x8007040;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uVar24 = *(iVar10 + 0x48);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uVar22 = uVar24;
    uVar14 = uVar16;
    uVar25 = uVar20;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = uVar23;
    uStack_b8 = param_4;
    uStack_b0 = param_5;
    iStack_a8 = unaff_x21;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar23 = trace_event_ignore_this_pid(iVar10), (uVar23 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar2 = "(null)";
        if (auVar28._8_8_ != NULL) {
            pcVar2 = auVar28._8_8_;
        }
        auVar28._8_8_ = pcVar2;
        auVar28._0_8_ = iVar10;
        iVar6 = strlen(pcVar2);
        uVar22 = iVar6 + 1;
        uVar24 = uVar22;
        puVar12 = uVar22 + 0x28;
        iVar8 = trace_event_buffer_reserve(&uStack_108,iVar10);
        auVar29._8_8_ = pcVar2;
        auVar29._0_8_ = iVar8;
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar22 * 0x10000 | 0x24;
            strcpy(iVar8 + 0x24,pcVar2);
            *(iVar8 + 0x10) = puVar11;
            *(iVar8 + 0x18) = uVar16;
            *(iVar8 + 0x20) = uVar20;
            trace_event_buffer_commit(&uStack_108);
            auVar28 = auVar29;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    uVar23 = auVar29._0_8_;
    *extraout_x18_00 = sym.perf_trace_bw_hwmon_meas;
    pcStack_168 = sym.perf_trace_bw_hwmon_meas;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar29._8_8_ != NULL) {
        pcVar2 = auVar29._8_8_;
    }
    iStack_178 = *(iVar8 + 0x5e0);
    pcVar27 = sym.perf_trace_bw_hwmon_meas;
    uVar21 = uVar25 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    puVar13 = puVar12;
    uVar15 = uVar14;
    uVar17 = uVar25;
    ppuStack_170 = &puStack_d0;
    iStack_160 = iVar7;
    uStack_158 = unaff_x27;
    pcStack_150 = pcVar26;
    piStack_148 = piVar1;
    uStack_140 = uVar24;
    uStack_138 = auVar28._8_8_;
    uStack_130 = auVar28._0_8_;
    puStack_128 = puVar11;
    uStack_120 = uVar16;
    uStack_118 = uVar20 & 0xffffffff;
    uVar9 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar23 + 0x78);
    if ((*(uVar23 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &uStack_184;
        pcVar26 = (uVar9 + 0x34U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(pcVar26,&iStack_180);
        if (iVar8 != 0) {
            uVar16 = ___cpu_online_mask & 0x3f;
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << uVar16) & 0x8007164;
            *(iStack_180 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x10024;
            strcpy(iVar8 + 0x24,pcVar2);
            puVar13 = uStack_184;
            uVar17 = 1;
            param_8 = 0;
            *(iVar8 + 0x10) = puVar12;
            *(iVar8 + 0x18) = uVar14;
            *(iVar8 + 0x20) = uVar25;
            uVar15 = uVar23;
            param_6 = iStack_180;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(iVar8,pcVar26);
            iVar7 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_178) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar10 = auVar30._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_01 = 0x80072e4;
    uStack_1d8 = 0x80072e4;
    iVar8 = sp_el0;
    iStack_1e8 = *(iVar8 + 0x5e0);
    uVar25 = *(iVar10 + 0x48);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uVar22 = uVar25;
    uVar16 = uVar15;
    uVar20 = uVar17;
    iVar8 = param_6;
    ppuStack_1e0 = &ppuStack_170;
    uStack_1d0 = uVar9;
    pcStack_1c0 = pcVar2;
    piStack_1b8 = piVar1;
    puStack_1b0 = puVar12;
    uStack_1a8 = uVar14;
    uStack_1a0 = uVar21;
    uStack_198 = uVar23;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar11 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar23 = trace_event_ignore_this_pid(iVar10), (uVar23 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar2 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar2;
        auVar30._0_8_ = iVar10;
        iVar6 = strlen(pcVar2);
        uVar22 = iVar6 + 1;
        uVar25 = uVar22;
        puVar11 = uVar22 + 0x30;
        iVar10 = trace_event_buffer_reserve(&uStack_218,iVar10);
        auVar4._8_8_ = pcVar2;
        auVar4._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar22 * 0x10000 | 0x30;
            strcpy(iVar10 + 0x30,pcVar2);
            *(iVar10 + 0x10) = puVar13;
            *(iVar10 + 0x18) = uVar15;
            *(iVar10 + 0x20) = uVar17;
            *(iVar10 + 0x28) = param_6;
            trace_event_buffer_commit(&uStack_218);
            auVar30 = auVar4;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    uVar23 = auVar28._0_8_;
    *extraout_x18_02 = sym.perf_trace_bw_hwmon_update;
    pcStack_278 = sym.perf_trace_bw_hwmon_update;
    pcStack_268 = sym.perf_trace_bw_hwmon_meas;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar28._8_8_ != NULL) {
        pcVar2 = auVar28._8_8_;
    }
    iStack_288 = *(iVar10 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    puVar12 = puVar11;
    uVar14 = uVar16;
    uVar24 = uVar20;
    iStack_2a0 = iVar8;
    ppuStack_280 = &ppuStack_1e0;
    iStack_270 = iVar7;
    pcStack_260 = pcVar26;
    uStack_258 = uVar25;
    uStack_250 = auVar30._8_8_;
    uStack_248 = auVar30._0_8_;
    puStack_240 = puVar13;
    uStack_238 = uVar15;
    uStack_230 = uVar17;
    iStack_228 = param_6;
    uVar9 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar23 + 0x78);
    if ((*(uVar23 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_294;
        pcVar27 = (uVar9 + 0x3cU & 0xfffffff8) - 4;
        uVar25 = perf_trace_buf_alloc(pcVar27,&iStack_290);
        if (uVar25 != 0) {
            uVar14 = ___cpu_online_mask & 0x3f;
            *(iStack_290 + 0xe8) = &ppuStack_280;
            *(iStack_290 + 0xf8) = &iStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << uVar14) & 0x8007414;
            *(iStack_290 + 0x108) = 5;
            *(uVar25 + 8) = uVar9 * 0x10000 + 0x10030;
            strcpy(uVar25 + 0x30,pcVar2);
            puVar12 = uStack_294;
            uVar24 = 1;
            param_8 = 0;
            *(uVar25 + 0x10) = puVar11;
            *(uVar25 + 0x18) = uVar16;
            *(uVar25 + 0x20) = uVar20;
            *(uVar25 + 0x28) = iStack_2a0;
            uVar14 = uVar23;
            iVar8 = iStack_290;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(uVar25,pcVar27);
            uVar17 = uVar25;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar10 = auVar31._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_03 = 0x800759c;
    uStack_2f8 = 0x800759c;
    iVar7 = sp_el0;
    iStack_308 = *(iVar7 + 0x5e0);
    uVar21 = *(iVar10 + 0x48);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uVar22 = uVar21;
    uVar25 = uVar14;
    uVar15 = uVar24;
    iVar7 = iVar8;
    piVar18 = param_7;
    uVar19 = param_8;
    ppuStack_300 = &ppuStack_280;
    pcStack_2f0 = pcVar27;
    uStack_2e0 = uVar9;
    pcStack_2d8 = pcVar2;
    piStack_2d0 = piVar1;
    puStack_2c8 = puVar11;
    uStack_2c0 = uVar16;
    uStack_2b8 = uVar20;
    uStack_2b0 = uVar17;
    uStack_2a8 = uVar23;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar25 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar26 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar26 = auVar31._8_8_;
    }
    auVar31._8_8_ = pcVar26;
    auVar31._0_8_ = iVar10;
    iVar6 = strlen(pcVar26);
    uVar22 = iVar6 + 1;
    uVar21 = uVar22;
    puVar11 = uVar22 + 0x40;
    iVar10 = trace_event_buffer_reserve(&uStack_338,iVar10);
    auVar5._8_8_ = pcVar26;
    auVar5._0_8_ = iVar10;
    if (iVar10 != 0) {
        *(iVar10 + 8) = uVar22 * 0x10000 | 0x40;
        strcpy(iVar10 + 0x40,pcVar26);
        *(iVar10 + 0x10) = puVar12;
        *(iVar10 + 0x18) = uVar14;
        *(iVar10 + 0x20) = uVar24;
        *(iVar10 + 0x28) = iVar8;
        *(iVar10 + 0x30) = param_7;
        *(iVar10 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_338);
        auVar31 = auVar5;
    }
code_r0x080076a0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_308) {
        return;
    }
    auVar28 = __stack_chk_fail();
    uVar16 = auVar28._0_8_;
    *extraout_x18_04 = sym.perf_trace_bw_hwmon_debug;
    pcStack_398 = sym.perf_trace_bw_hwmon_debug;
    pcStack_390 = sym.perf_trace_bw_hwmon_update;
    iVar10 = sp_el0;
    pcVar26 = "(null)";
    if (auVar28._8_8_ != NULL) {
        pcVar26 = auVar28._8_8_;
    }
    iStack_3a8 = *(iVar10 + 0x5e0);
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    puVar13 = puVar11;
    uVar20 = uVar25;
    iStack_3d0 = iVar7;
    piStack_3c8 = piVar18;
    uStack_3c0 = uVar19;
    ppuStack_3a0 = &ppuStack_300;
    uStack_388 = uVar21;
    uStack_380 = auVar31._8_8_;
    uStack_378 = auVar31._0_8_;
    puStack_370 = puVar12;
    uStack_368 = uVar14;
    uStack_360 = uVar24;
    iStack_358 = iVar8;
    piStack_350 = param_7;
    uStack_348 = param_8;
    iVar6 = strlen(pcVar26);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &uStack_3b4;
        iVar3 = (iVar6 + 0x4cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&iStack_3b0,puVar13);
        if (iVar8 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_3b0 + 0xe8) = &ppuStack_3a0;
            *(iStack_3b0 + 0xf8) = &iStack_3d0;
            *(iStack_3b0 + 0x100) = ~(-1L << uVar20) & 0x80076e0;
            *(iStack_3b0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10040;
            strcpy(iVar8 + 0x40,pcVar26);
            puVar13 = uStack_3b4;
            *(iVar8 + 0x20) = uVar15;
            *(iVar8 + 0x28) = iStack_3d0;
            *(iVar8 + 0x10) = puVar11;
            *(iVar8 + 0x18) = uVar25;
            *(iVar8 + 0x30) = piStack_3c8;
            *(iVar8 + 0x38) = uStack_3c0;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar13,uVar16,1,iStack_3b0,piVar1,0);
            uVar20 = uVar16;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_3a8) {
        auVar28 = __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_05 = 0x8007878;
        bpf_trace_run8(auVar28._0_8_,auVar28._8_8_,puVar13 & 0xffffffff,uVar20 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036e8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_memlat_dev_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6,
               int64_t *param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    ulong uVar23;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint32_t uVar24;
    uint64_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    char *pcVar28;
    uint64_t unaff_x27;
    code *pcVar29;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    int64_t iStack_460;
    int64_t *piStack_458;
    ulong uStack_450;
    uint32_t uStack_444;
    int64_t iStack_440;
    int64_t iStack_438;
    ulong **ppuStack_430;
    code *pcStack_428;
    code *pcStack_420;
    uint64_t uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    uint32_t *puStack_400;
    uint64_t uStack_3f8;
    uint64_t uStack_3f0;
    int64_t iStack_3e8;
    int64_t *piStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    int64_t iStack_398;
    ulong **ppuStack_390;
    ulong uStack_388;
    code *pcStack_380;
    ulong uStack_370;
    char *pcStack_368;
    int64_t *piStack_360;
    uint32_t *puStack_358;
    uint64_t uStack_350;
    uint64_t uStack_348;
    uint64_t uStack_340;
    uint64_t uStack_338;
    int64_t iStack_330;
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    code *pcStack_308;
    int64_t iStack_300;
    code *pcStack_2f8;
    char *pcStack_2f0;
    uint64_t uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    uint32_t *puStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    ulong uStack_268;
    ulong uStack_260;
    char *pcStack_250;
    int64_t *piStack_248;
    uint32_t *puStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    uint64_t uStack_228;
    uchar auStack_220 [12];
    uint32_t uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    code *pcStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    char *pcStack_1e0;
    int64_t *piStack_1d8;
    uint64_t uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    uint32_t *puStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    ulong uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    code *pcStack_130;
    uint64_t uStack_128;
    uchar auStack_120 [8];
    int64_t iStack_118;
    int64_t *piStack_110;
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
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar24 = *(param_1 + 0x48);
    uVar18 = param_4;
    uVar13 = param_5;
    iVar14 = param_6;
    piVar21 = param_7;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar15 = param_3;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar18 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar24 >> 6 & 1) == 0) &&
           (((uVar24 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(param_1), (uVar7 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar28 = "(null)";
        if (param_2 != NULL) {
            pcVar28 = param_2;
        }
        iVar6 = strlen(pcVar28);
        puVar15 = iVar6 + 1 + 0x30;
        iVar8 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x30;
            strcpy(iVar8 + 0x30,pcVar28);
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4;
            *(iVar8 + 0x18) = param_5;
            *(iVar8 + 0x20) = param_6;
            *(iVar8 + 0x28) = param_7;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar7 = auVar30._0_8_;
    *extraout_x18 = sym.perf_trace_memlat_dev_update;
    pcStack_e8 = sym.perf_trace_memlat_dev_update;
    iVar8 = sp_el0;
    pcVar28 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar28 = auVar30._8_8_;
    }
    iStack_f8 = *(iVar8 + 0x5e0);
    uVar25 = puVar15 & 0xffffffff;
    iStack_100 = 0;
    uStack_104 = 0;
    puVar16 = puVar15;
    uVar19 = uVar18;
    uVar20 = uVar13;
    iStack_118 = iVar14;
    piStack_110 = piVar21;
    puStack_f0 = &stack0xffffffffffffffb0;
    iVar9 = strlen(pcVar28);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &uStack_104;
        unaff_x27 = (iVar9 + 0x3cU & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(unaff_x27,&iStack_100);
        if (uVar10 != 0) {
            uVar19 = ___cpu_online_mask & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_120;
            *(iStack_100 + 0x100) = ~(-1L << uVar19) & 0x8006eb0;
            *(iStack_100 + 0x108) = 5;
            *(uVar10 + 8) = iVar9 * 0x10000 + 0x10030;
            strcpy(uVar10 + 0x30,pcVar28);
            puVar16 = uStack_104;
            uVar20 = 1;
            param_8 = 0;
            *(uVar10 + 0xc) = puVar15;
            *(uVar10 + 0x10) = uVar18;
            *(uVar10 + 0x18) = uVar13;
            *(uVar10 + 0x20) = iStack_118;
            *(uVar10 + 0x28) = piStack_110;
            uVar19 = uVar7;
            iVar14 = iStack_100;
            piVar21 = piVar1;
            perf_trace_run_bpf_submit(uVar10,unaff_x27);
            param_5 = uVar10;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar12 = auVar30._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_00 = 0x8007040;
    uStack_158 = 0x8007040;
    pcStack_130 = sym.perf_trace_memlat_dev_update;
    iVar8 = sp_el0;
    iStack_168 = *(iVar8 + 0x5e0);
    uVar26 = *(iVar12 + 0x48);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar24 = uVar26;
    uVar10 = uVar19;
    uVar27 = uVar20;
    ppuStack_160 = &puStack_f0;
    uStack_150 = uVar25;
    uStack_148 = uVar18;
    uStack_140 = uVar13;
    uStack_138 = param_5;
    uStack_128 = uVar7;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) == 0) &&
           (((uVar24 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar12), (uVar18 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar2 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar2 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar2;
        auVar30._0_8_ = iVar12;
        iVar6 = strlen(pcVar2);
        uVar24 = iVar6 + 1;
        uVar26 = uVar24;
        puVar15 = uVar24 + 0x28;
        iVar8 = trace_event_buffer_reserve(&uStack_198,iVar12);
        auVar31._8_8_ = pcVar2;
        auVar31._0_8_ = iVar8;
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar24 * 0x10000 | 0x24;
            strcpy(iVar8 + 0x24,pcVar2);
            *(iVar8 + 0x10) = puVar16;
            *(iVar8 + 0x18) = uVar19;
            *(iVar8 + 0x20) = uVar20;
            trace_event_buffer_commit(&uStack_198);
            auVar30 = auVar31;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_168) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar18 = auVar31._0_8_;
    *extraout_x18_01 = sym.perf_trace_bw_hwmon_meas;
    pcStack_1f8 = sym.perf_trace_bw_hwmon_meas;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar2 = auVar31._8_8_;
    }
    iStack_208 = *(iVar8 + 0x5e0);
    pcVar29 = sym.perf_trace_bw_hwmon_meas;
    uVar25 = uVar27 & 0xffffffff;
    iStack_210 = 0;
    uStack_214 = 0;
    puVar17 = puVar15;
    uVar13 = uVar10;
    uVar7 = uVar27;
    ppuStack_200 = &ppuStack_160;
    iStack_1f0 = iVar9;
    uStack_1e8 = unaff_x27;
    pcStack_1e0 = pcVar28;
    piStack_1d8 = piVar1;
    uStack_1d0 = uVar26;
    uStack_1c8 = auVar30._8_8_;
    uStack_1c0 = auVar30._0_8_;
    puStack_1b8 = puVar16;
    uStack_1b0 = uVar19;
    uStack_1a8 = uVar20 & 0xffffffff;
    uVar11 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar17 = &uStack_214;
        pcVar28 = (uVar11 + 0x34U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(pcVar28,&iStack_210);
        if (iVar8 != 0) {
            uVar13 = ___cpu_online_mask & 0x3f;
            *(iStack_210 + 0xe8) = &ppuStack_200;
            *(iStack_210 + 0xf8) = auStack_220;
            *(iStack_210 + 0x100) = ~(-1L << uVar13) & 0x8007164;
            *(iStack_210 + 0x108) = 5;
            *(iVar8 + 8) = uVar11 * 0x10000 + 0x10024;
            strcpy(iVar8 + 0x24,pcVar2);
            puVar17 = uStack_214;
            uVar7 = 1;
            param_8 = 0;
            *(iVar8 + 0x10) = puVar15;
            *(iVar8 + 0x18) = uVar10;
            *(iVar8 + 0x20) = uVar27;
            uVar13 = uVar18;
            iVar14 = iStack_210;
            piVar21 = piVar1;
            perf_trace_run_bpf_submit(iVar8,pcVar28);
            iVar9 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_208) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar12 = auVar32._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_02 = 0x80072e4;
    uStack_268 = 0x80072e4;
    iVar8 = sp_el0;
    iStack_278 = *(iVar8 + 0x5e0);
    uVar27 = *(iVar12 + 0x48);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar24 = uVar27;
    uVar19 = uVar13;
    uVar20 = uVar7;
    iVar8 = iVar14;
    ppuStack_270 = &ppuStack_200;
    uStack_260 = uVar11;
    pcStack_250 = pcVar2;
    piStack_248 = piVar1;
    puStack_240 = puVar15;
    uStack_238 = uVar10;
    uStack_230 = uVar25;
    uStack_228 = uVar18;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar19 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) == 0) &&
           (((uVar24 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar12), (uVar18 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar2 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar2;
        auVar32._0_8_ = iVar12;
        iVar6 = strlen(pcVar2);
        uVar24 = iVar6 + 1;
        uVar27 = uVar24;
        puVar15 = uVar24 + 0x30;
        iVar12 = trace_event_buffer_reserve(&uStack_2a8,iVar12);
        auVar4._8_8_ = pcVar2;
        auVar4._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar24 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar2);
            *(iVar12 + 0x10) = puVar17;
            *(iVar12 + 0x18) = uVar13;
            *(iVar12 + 0x20) = uVar7;
            *(iVar12 + 0x28) = iVar14;
            trace_event_buffer_commit(&uStack_2a8);
            auVar32 = auVar4;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_278) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar18 = auVar30._0_8_;
    *extraout_x18_03 = sym.perf_trace_bw_hwmon_update;
    pcStack_308 = sym.perf_trace_bw_hwmon_update;
    pcStack_2f8 = sym.perf_trace_bw_hwmon_meas;
    iVar12 = sp_el0;
    pcVar2 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar2 = auVar30._8_8_;
    }
    iStack_318 = *(iVar12 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    puVar16 = puVar15;
    uVar25 = uVar19;
    uVar10 = uVar20;
    iStack_330 = iVar8;
    ppuStack_310 = &ppuStack_270;
    iStack_300 = iVar9;
    pcStack_2f0 = pcVar28;
    uStack_2e8 = uVar27;
    uStack_2e0 = auVar32._8_8_;
    uStack_2d8 = auVar32._0_8_;
    puStack_2d0 = puVar17;
    uStack_2c8 = uVar13;
    uStack_2c0 = uVar7;
    iStack_2b8 = iVar14;
    uVar11 = strlen(pcVar2);
    iVar14 = tpidr_el1;
    piVar1 = iVar14 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &uStack_324;
        pcVar29 = (uVar11 + 0x3cU & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(pcVar29,&iStack_320);
        if (uVar13 != 0) {
            uVar7 = ___cpu_online_mask & 0x3f;
            *(iStack_320 + 0xe8) = &ppuStack_310;
            *(iStack_320 + 0xf8) = &iStack_330;
            *(iStack_320 + 0x100) = ~(-1L << uVar7) & 0x8007414;
            *(iStack_320 + 0x108) = 5;
            *(uVar13 + 8) = uVar11 * 0x10000 + 0x10030;
            strcpy(uVar13 + 0x30,pcVar2);
            puVar16 = uStack_324;
            uVar10 = 1;
            param_8 = 0;
            *(uVar13 + 0x10) = puVar15;
            *(uVar13 + 0x18) = uVar19;
            *(uVar13 + 0x20) = uVar20;
            *(uVar13 + 0x28) = iStack_330;
            uVar25 = uVar18;
            iVar8 = iStack_320;
            piVar21 = piVar1;
            perf_trace_run_bpf_submit(uVar13,pcVar29);
            uVar7 = uVar13;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_318) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar9 = auVar33._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_04 = 0x800759c;
    uStack_388 = 0x800759c;
    iVar14 = sp_el0;
    iStack_398 = *(iVar14 + 0x5e0);
    uVar26 = *(iVar9 + 0x48);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uVar24 = uVar26;
    uVar13 = uVar25;
    uVar27 = uVar10;
    iVar14 = iVar8;
    piVar22 = piVar21;
    uVar23 = param_8;
    ppuStack_390 = &ppuStack_310;
    pcStack_380 = pcVar29;
    uStack_370 = uVar11;
    pcStack_368 = pcVar2;
    piStack_360 = piVar1;
    puStack_358 = puVar15;
    uStack_350 = uVar19;
    uStack_348 = uVar20;
    uStack_340 = uVar7;
    uStack_338 = uVar18;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar24 >> 6 & 1) != 0) ||
           (((uVar24 >> 9 & 1) != 0 && (uVar18 = trace_event_ignore_this_pid(iVar9), (uVar18 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar28 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar28 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar28;
    auVar33._0_8_ = iVar9;
    iVar6 = strlen(pcVar28);
    uVar24 = iVar6 + 1;
    uVar26 = uVar24;
    puVar15 = uVar24 + 0x40;
    iVar9 = trace_event_buffer_reserve(&uStack_3c8,iVar9);
    auVar5._8_8_ = pcVar28;
    auVar5._0_8_ = iVar9;
    if (iVar9 != 0) {
        *(iVar9 + 8) = uVar24 * 0x10000 | 0x40;
        strcpy(iVar9 + 0x40,pcVar28);
        *(iVar9 + 0x10) = puVar16;
        *(iVar9 + 0x18) = uVar25;
        *(iVar9 + 0x20) = uVar10;
        *(iVar9 + 0x28) = iVar8;
        *(iVar9 + 0x30) = piVar21;
        *(iVar9 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_3c8);
        auVar33 = auVar5;
    }
code_r0x080076a0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_398) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar18 = auVar30._0_8_;
    *extraout_x18_05 = sym.perf_trace_bw_hwmon_debug;
    pcStack_428 = sym.perf_trace_bw_hwmon_debug;
    pcStack_420 = sym.perf_trace_bw_hwmon_update;
    iVar9 = sp_el0;
    pcVar28 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar28 = auVar30._8_8_;
    }
    iStack_438 = *(iVar9 + 0x5e0);
    iStack_440 = 0;
    uStack_444 = 0;
    puVar17 = puVar15;
    uVar7 = uVar13;
    iStack_460 = iVar14;
    piStack_458 = piVar22;
    uStack_450 = uVar23;
    ppuStack_430 = &ppuStack_390;
    uStack_418 = uVar26;
    uStack_410 = auVar33._8_8_;
    uStack_408 = auVar33._0_8_;
    puStack_400 = puVar16;
    uStack_3f8 = uVar25;
    uStack_3f0 = uVar10;
    iStack_3e8 = iVar8;
    piStack_3e0 = piVar21;
    uStack_3d8 = param_8;
    iVar6 = strlen(pcVar28);
    iVar14 = tpidr_el1;
    piVar21 = iVar14 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar21 != 0)) {
        puVar17 = &uStack_444;
        iVar3 = (iVar6 + 0x4cU & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(iVar3,&iStack_440,puVar17);
        if (iVar14 != 0) {
            uVar7 = ___cpu_online_mask & 0x3f;
            *(iStack_440 + 0xe8) = &ppuStack_430;
            *(iStack_440 + 0xf8) = &iStack_460;
            *(iStack_440 + 0x100) = ~(-1L << uVar7) & 0x80076e0;
            *(iStack_440 + 0x108) = 5;
            *(iVar14 + 8) = iVar6 * 0x10000 + 0x10040;
            strcpy(iVar14 + 0x40,pcVar28);
            puVar17 = uStack_444;
            *(iVar14 + 0x20) = uVar27;
            *(iVar14 + 0x28) = iStack_460;
            *(iVar14 + 0x10) = puVar15;
            *(iVar14 + 0x18) = uVar13;
            *(iVar14 + 0x30) = piStack_458;
            *(iVar14 + 0x38) = uStack_450;
            perf_trace_run_bpf_submit(iVar14,iVar3,puVar17,uVar18,1,iStack_440,piVar21,0);
            uVar7 = uVar18;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_438) {
        auVar30 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_06 = 0x8007878;
        bpf_trace_run8(auVar30._0_8_,auVar30._8_8_,puVar17 & 0xffffffff,uVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036f0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,ulong param_5,int64_t param_6,
               int64_t *param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    ulong uVar12;
    ulong uVar13;
    int64_t *piVar14;
    ulong uVar15;
    uint64_t uVar16;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x20;
    uint32_t uVar17;
    uint64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar18 [16];
    int64_t iStack_1b0;
    int64_t *piStack_1a8;
    ulong uStack_1a0;
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    code *pcStack_178;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c0;
    char *pcStack_b8;
    int64_t *piStack_b0;
    uint32_t *puStack_a8;
    uint64_t uStack_a0;
    ulong uStack_98;
    int64_t iStack_90;
    uint64_t uStack_88;
    int64_t iStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    puVar9 = param_3;
    uVar11 = param_4;
    uVar12 = param_5;
    iStack_80 = param_6;
    uVar5 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_74;
        unaff_x27 = (uVar5 + 0x3cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x27,&iStack_70);
        if (iVar6 != 0) {
            uVar16 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &iStack_80;
            uVar11 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar16 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar11;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10030;
            strcpy(iVar6 + 0x30,pcVar2);
            puVar9 = uStack_74;
            uVar12 = 1;
            param_8 = 0;
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x20) = param_5;
            *(iVar6 + 0x28) = iStack_80;
            uVar11 = param_1;
            param_6 = iStack_70;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(iVar6,unaff_x27);
            unaff_x20 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar8 = auVar18._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x800759c;
    uStack_d8 = 0x800759c;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uVar17 = *(iVar8 + 0x48);
    uVar16 = uVar11;
    uVar13 = uVar12;
    iVar6 = param_6;
    piVar14 = param_7;
    uVar15 = param_8;
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = unaff_x27;
    uStack_c0 = uVar5;
    pcStack_b8 = pcVar2;
    piStack_b0 = piVar1;
    puStack_a8 = param_3;
    uStack_a0 = param_4;
    uStack_98 = param_5;
    iStack_90 = unaff_x20;
    uStack_88 = param_1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar10 = puVar9;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar8), (uVar7 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar2 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar2 = auVar18._8_8_;
    }
    iVar4 = strlen(pcVar2);
    puVar10 = iVar4 + 1 + 0x40;
    iVar8 = trace_event_buffer_reserve(&uStack_118,iVar8);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar4 + 1) * 0x10000 | 0x40;
        strcpy(iVar8 + 0x40,pcVar2);
        *(iVar8 + 0x10) = puVar9;
        *(iVar8 + 0x18) = uVar11;
        *(iVar8 + 0x20) = uVar12;
        *(iVar8 + 0x28) = param_6;
        *(iVar8 + 0x30) = param_7;
        *(iVar8 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_118);
    }
code_r0x080076a0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar11 = auVar18._0_8_;
    *extraout_x18_00 = sym.perf_trace_bw_hwmon_debug;
    pcStack_178 = sym.perf_trace_bw_hwmon_debug;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar2 = auVar18._8_8_;
    }
    iStack_188 = *(iVar8 + 0x5e0);
    iStack_190 = 0;
    uStack_194 = 0;
    puVar9 = puVar10;
    uVar7 = uVar16;
    iStack_1b0 = iVar6;
    piStack_1a8 = piVar14;
    uStack_1a0 = uVar15;
    ppuStack_180 = &puStack_e0;
    iVar4 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &uStack_194;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_190,puVar9);
        if (iVar6 != 0) {
            uVar7 = ___cpu_online_mask & 0x3f;
            *(iStack_190 + 0xe8) = &ppuStack_180;
            *(iStack_190 + 0xf8) = &iStack_1b0;
            *(iStack_190 + 0x100) = ~(-1L << uVar7) & 0x80076e0;
            *(iStack_190 + 0x108) = 5;
            *(iVar6 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,pcVar2);
            puVar9 = uStack_194;
            *(iVar6 + 0x20) = uVar13;
            *(iVar6 + 0x28) = iStack_1b0;
            *(iVar6 + 0x10) = puVar10;
            *(iVar6 + 0x18) = uVar16;
            *(iVar6 + 0x30) = piStack_1a8;
            *(iVar6 + 0x38) = uStack_1a0;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar9,uVar11,1,iStack_190,piVar1,0);
            uVar7 = uVar11;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_188) {
        auVar18 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_01 = 0x8007878;
        bpf_trace_run8(auVar18._0_8_,auVar18._8_8_,puVar9 & 0xffffffff,uVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x080036f8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,int64_t param_5,int64_t param_6,
               int64_t *param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t *piVar19;
    ulong uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar21;
    uint64_t unaff_x27;
    uint64_t uVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    uchar auVar24 [16];
    int64_t iStack_240;
    int64_t *piStack_238;
    ulong uStack_230;
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    uint64_t uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    uint32_t *puStack_1e0;
    uint64_t uStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    int64_t *piStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    ulong uStack_168;
    uint64_t uStack_160;
    ulong uStack_150;
    char *pcStack_148;
    int64_t *piStack_140;
    uint32_t *puStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    int64_t iStack_120;
    uint64_t uStack_118;
    int64_t iStack_110;
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
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar21 = *(param_1 + 0x48);
    uVar13 = param_4;
    iVar9 = param_5;
    iVar17 = param_6;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar21 >> 6 & 1) == 0) &&
           (((uVar21 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(param_1), (uVar5 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (param_2 != NULL) {
            pcVar2 = param_2;
        }
        iVar4 = strlen(pcVar2);
        puVar10 = iVar4 + 1 + 0x30;
        iVar6 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar4 + 1) * 0x10000 | 0x30;
            strcpy(iVar6 + 0x30,pcVar2);
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x20) = param_5;
            *(iVar6 + 0x28) = param_6;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar5 = auVar23._0_8_;
    *extraout_x18 = sym.perf_trace_bw_hwmon_update;
    pcStack_e8 = sym.perf_trace_bw_hwmon_update;
    iVar6 = sp_el0;
    pcVar2 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar2 = auVar23._8_8_;
    }
    iStack_f8 = *(iVar6 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    puVar11 = puVar10;
    uVar14 = uVar13;
    iVar16 = iVar9;
    iStack_110 = iVar17;
    puStack_f0 = &stack0xffffffffffffffb0;
    uVar7 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_104;
        unaff_x27 = (uVar7 + 0x3cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x27,&iStack_100);
        if (iVar6 != 0) {
            uVar14 = ___cpu_online_mask & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = &iStack_110;
            *(iStack_100 + 0x100) = ~(-1L << uVar14) & 0x8007414;
            *(iStack_100 + 0x108) = 5;
            *(iVar6 + 8) = uVar7 * 0x10000 + 0x10030;
            strcpy(iVar6 + 0x30,pcVar2);
            puVar11 = uStack_104;
            iVar16 = 1;
            param_8 = 0;
            *(iVar6 + 0x10) = puVar10;
            *(iVar6 + 0x18) = uVar13;
            *(iVar6 + 0x20) = iVar9;
            *(iVar6 + 0x28) = iStack_110;
            uVar14 = uVar5;
            iVar17 = iStack_100;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(iVar6,unaff_x27);
            param_5 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar8 = auVar23._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18_00 = 0x800759c;
    uStack_168 = 0x800759c;
    iVar6 = sp_el0;
    iStack_178 = *(iVar6 + 0x5e0);
    uVar22 = *(iVar8 + 0x48);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uVar21 = uVar22;
    uVar15 = uVar14;
    iVar6 = iVar16;
    iVar18 = iVar17;
    piVar19 = param_7;
    uVar20 = param_8;
    ppuStack_170 = &puStack_f0;
    uStack_160 = unaff_x27;
    uStack_150 = uVar7;
    pcStack_148 = pcVar2;
    piStack_140 = piVar1;
    puStack_138 = puVar10;
    uStack_130 = uVar13;
    iStack_128 = iVar9;
    iStack_120 = param_5;
    uStack_118 = uVar5;
    if ((uVar21 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar21 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar21 >> 6 & 1) != 0) ||
           (((uVar21 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar8), (uVar13 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar2 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar2 = auVar23._8_8_;
    }
    auVar23._8_8_ = pcVar2;
    auVar23._0_8_ = iVar8;
    iVar4 = strlen(pcVar2);
    uVar21 = iVar4 + 1;
    uVar22 = uVar21;
    puVar10 = uVar21 + 0x40;
    iVar9 = trace_event_buffer_reserve(&uStack_1a8,iVar8);
    auVar24._8_8_ = pcVar2;
    auVar24._0_8_ = iVar9;
    if (iVar9 != 0) {
        *(iVar9 + 8) = uVar21 * 0x10000 | 0x40;
        strcpy(iVar9 + 0x40,pcVar2);
        *(iVar9 + 0x10) = puVar11;
        *(iVar9 + 0x18) = uVar14;
        *(iVar9 + 0x20) = iVar16;
        *(iVar9 + 0x28) = iVar17;
        *(iVar9 + 0x30) = param_7;
        *(iVar9 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_1a8);
        auVar23 = auVar24;
    }
code_r0x080076a0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_178) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar13 = auVar24._0_8_;
    *extraout_x18_01 = sym.perf_trace_bw_hwmon_debug;
    pcStack_208 = sym.perf_trace_bw_hwmon_debug;
    pcStack_200 = sym.perf_trace_bw_hwmon_update;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    iStack_218 = *(iVar9 + 0x5e0);
    iStack_220 = 0;
    uStack_224 = 0;
    puVar12 = puVar10;
    uVar5 = uVar15;
    iStack_240 = iVar18;
    piStack_238 = piVar19;
    uStack_230 = uVar20;
    ppuStack_210 = &ppuStack_170;
    uStack_1f8 = uVar22;
    uStack_1f0 = auVar23._8_8_;
    uStack_1e8 = auVar23._0_8_;
    puStack_1e0 = puVar11;
    uStack_1d8 = uVar14;
    iStack_1d0 = iVar16;
    iStack_1c8 = iVar17;
    piStack_1c0 = param_7;
    uStack_1b8 = param_8;
    iVar4 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_224;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_220,puVar12);
        if (iVar9 != 0) {
            uVar5 = ___cpu_online_mask & 0x3f;
            *(iStack_220 + 0xe8) = &ppuStack_210;
            *(iStack_220 + 0xf8) = &iStack_240;
            *(iStack_220 + 0x100) = ~(-1L << uVar5) & 0x80076e0;
            *(iStack_220 + 0x108) = 5;
            *(iVar9 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar9 + 0x40,pcVar2);
            puVar12 = uStack_224;
            *(iVar9 + 0x20) = iVar6;
            *(iVar9 + 0x28) = iStack_240;
            *(iVar9 + 0x10) = puVar10;
            *(iVar9 + 0x18) = uVar15;
            *(iVar9 + 0x30) = piStack_238;
            *(iVar9 + 0x38) = uStack_230;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar12,uVar13,1,iStack_220,piVar1,0);
            uVar5 = uVar13;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_218) {
        auVar23 = __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_02 = 0x8007878;
        bpf_trace_run8(auVar23._0_8_,auVar23._8_8_,puVar12 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003700 (size 8) =====

void sym.__bpf_trace_bw_hwmon_update.d034cccb1b59d5699f08df130583ff8d.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5();
    return;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x08003708 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001ab1,*(param_1 + 0x78));
    return iVar1;
}


// ===== sym.show_cur_freq.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt @ 0x08003710 (size 8) =====

int64_t sym.show_cur_freq.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong unaff_x23;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x88);
    uVar6 = unaff_x23;
    _trace_event_raw_init = unaff_x23;
    if (iVar5 == 0) {
code_r0x08005540:
        uVar4 = 0;
        iVar5 = *(param_1 + 0x90);
    }
    else {
        if (*(iVar5 + 8) == 2) {
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            if (uVar6 <= uVar3) goto code_r0x08005540;
            iVar5 = *(iVar5 + 0x28);
            uVar4 = 0;
            do {
                uVar1 = *(iVar5 + uVar3 * 4);
                if (uVar4 <= uVar1) {
                    uVar4 = uVar1;
                }
                uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
            } while (uVar3 < uVar6);
        }
        else {
            uVar4 = *(iVar5 + 0x18);
        }
        iVar5 = *(param_1 + 0x90);
    }
    if (iVar5 != 0) {
        if (*(iVar5 + 8) == 2) {
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            if (uVar3 < uVar6) {
                iVar5 = *(iVar5 + 0x28);
                do {
                    uVar1 = *(iVar5 + uVar3 * 4);
                    if (uVar4 <= uVar1) {
                        uVar4 = uVar1;
                    }
                    uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
                } while (uVar3 < uVar6);
            }
        }
        else if (uVar4 <= *(iVar5 + 0x18)) {
            uVar4 = *(iVar5 + 0x18);
        }
    }
    iVar5 = *(param_1 + 0x98);
    if (iVar5 != 0) {
        if (*(iVar5 + 8) == 2) {
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            if (uVar3 < uVar6) {
                iVar5 = *(iVar5 + 0x28);
                do {
                    uVar1 = *(iVar5 + uVar3 * 4);
                    if (uVar4 <= uVar1) {
                        uVar4 = uVar1;
                    }
                    uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
                } while (uVar3 < uVar6);
            }
        }
        else if (uVar4 <= *(iVar5 + 0x18)) {
            uVar4 = *(iVar5 + 0x18);
        }
    }
    iVar2 = scnprintf(param_3,0x1000,"%lu\n",uVar4);
    return iVar2;
}


// ===== sym.show_available_frequencies.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt @ 0x08003718 (size 8) =====

int64_t sym.show_available_frequencies.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int iVar1;
    ulong *in_x18;
    int iVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x70) != 0) {
        iVar2 = 0;
        uVar3 = 0;
        do {
            iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,"%lu ",*(*(param_1 + 0x68) + uVar3 * 4));
            iVar2 = iVar1 + iVar2;
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(param_1 + 0x70));
        if (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            goto code_r0x080056d4;
        }
    }
    iVar2 = 0;
code_r0x080056d4:
    iVar1 = scnprintf(param_3 + iVar2,0x1000 - iVar2,0x8001ebe);
    return iVar1 + iVar2;
}


// ===== sym.show_hw_max_freq.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt @ 0x08003720 (size 8) =====

int64_t sym.show_hw_max_freq.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001ab1,*(param_1 + 0x7c));
    return iVar1;
}


// ===== sym.show_boost_freq.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt @ 0x08003728 (size 8) =====

int64_t sym.show_boost_freq.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8001ab1,*(param_1 + 0x80));
    return iVar1;
}


// ===== sym.attr_show.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt @ 0x08003730 (size 8) =====

ulong sym.attr_show.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (5 < (pcVar2 + -0x8003708 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80017a0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.__bpf_trace_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003738 (size 8) =====

void sym.__bpf_trace_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.perf_trace_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003740 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6
               ,int64_t *param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t *piVar18;
    ulong uVar19;
    uint64_t uVar20;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    int64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    int64_t iStack_2c0;
    int64_t *piStack_2b8;
    ulong uStack_2b0;
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    code *pcStack_280;
    uint64_t uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    uint32_t *puStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    int64_t iStack_248;
    int64_t *piStack_240;
    ulong uStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    ulong uStack_1d0;
    char *pcStack_1c8;
    int64_t *piStack_1c0;
    uint32_t *puStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    int64_t iStack_190;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    char *pcStack_b0;
    int64_t *piStack_a8;
    uint32_t *puStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_68 = *(iVar6 + 0x5e0);
    uVar21 = param_5 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar11 = param_3;
    uVar9 = param_4;
    uVar20 = param_5;
    uVar5 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_74;
        iVar4 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar4,&iStack_70);
        if (iVar6 != 0) {
            uVar20 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar9 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar9;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10024;
            strcpy(iVar6 + 0x24,pcVar2);
            puVar11 = uStack_74;
            uVar20 = 1;
            param_8 = 0;
            *(iVar6 + 0x10) = param_3;
            *(iVar6 + 0x18) = param_4;
            *(iVar6 + 0x20) = param_5;
            uVar9 = param_1;
            param_6 = iStack_70;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(iVar6,iVar4);
            unaff_x28 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar7 = auVar24._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18 = 0x80072e4;
    uStack_c8 = 0x80072e4;
    iVar6 = sp_el0;
    iStack_d8 = *(iVar6 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uVar22 = *(iVar7 + 0x48);
    uVar14 = uVar9;
    uVar15 = uVar20;
    iVar6 = param_6;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = uVar5;
    pcStack_b0 = pcVar2;
    piStack_a8 = piVar1;
    puStack_a0 = param_3;
    uStack_98 = param_4;
    uStack_90 = uVar21;
    uStack_88 = param_1;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar21 = trace_event_ignore_this_pid(iVar7), (uVar21 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (auVar24._8_8_ != NULL) {
            pcVar2 = auVar24._8_8_;
        }
        iVar4 = strlen(pcVar2);
        puVar12 = iVar4 + 1 + 0x30;
        iVar7 = trace_event_buffer_reserve(&uStack_108,iVar7);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar4 + 1) * 0x10000 | 0x30;
            strcpy(iVar7 + 0x30,pcVar2);
            *(iVar7 + 0x10) = puVar11;
            *(iVar7 + 0x18) = uVar9;
            *(iVar7 + 0x20) = uVar20;
            *(iVar7 + 0x28) = param_6;
            trace_event_buffer_commit(&uStack_108);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar9 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_bw_hwmon_update;
    pcStack_168 = sym.perf_trace_bw_hwmon_update;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_180 = 0;
    uStack_184 = 0;
    puVar11 = puVar12;
    uVar21 = uVar14;
    uVar16 = uVar15;
    iStack_190 = iVar6;
    ppuStack_170 = &puStack_d0;
    iStack_160 = unaff_x28;
    uVar5 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_184;
        unaff_x30 = (uVar5 + 0x3cU & 0xfffffff8) - 4;
        uVar8 = perf_trace_buf_alloc(unaff_x30,&iStack_180);
        if (uVar8 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = &iStack_190;
            *(iStack_180 + 0x100) = ~(-1L << uVar20) & 0x8007414;
            *(iStack_180 + 0x108) = 5;
            *(uVar8 + 8) = uVar5 * 0x10000 + 0x10030;
            strcpy(uVar8 + 0x30,pcVar2);
            puVar11 = uStack_184;
            uVar16 = 1;
            param_8 = 0;
            *(uVar8 + 0x10) = puVar12;
            *(uVar8 + 0x18) = uVar14;
            *(uVar8 + 0x20) = uVar15;
            *(uVar8 + 0x28) = iStack_190;
            uVar21 = uVar9;
            iVar6 = iStack_180;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(uVar8,unaff_x30);
            uVar20 = uVar8;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar10 = auVar24._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_01 = 0x800759c;
    uStack_1e8 = 0x800759c;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    uVar23 = *(iVar10 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar22 = uVar23;
    uVar8 = uVar21;
    uVar17 = uVar16;
    iVar7 = iVar6;
    piVar18 = param_7;
    uVar19 = param_8;
    ppuStack_1f0 = &ppuStack_170;
    uStack_1e0 = unaff_x30;
    uStack_1d0 = uVar5;
    pcStack_1c8 = pcVar2;
    piStack_1c0 = piVar1;
    puStack_1b8 = puVar12;
    uStack_1b0 = uVar14;
    uStack_1a8 = uVar15;
    uStack_1a0 = uVar20;
    uStack_198 = uVar9;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar9 = trace_event_ignore_this_pid(iVar10), (uVar9 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    auVar24._8_8_ = pcVar2;
    auVar24._0_8_ = iVar10;
    iVar4 = strlen(pcVar2);
    uVar22 = iVar4 + 1;
    uVar23 = uVar22;
    puVar12 = uVar22 + 0x40;
    iVar10 = trace_event_buffer_reserve(&uStack_228,iVar10);
    auVar25._8_8_ = pcVar2;
    auVar25._0_8_ = iVar10;
    if (iVar10 != 0) {
        *(iVar10 + 8) = uVar22 * 0x10000 | 0x40;
        strcpy(iVar10 + 0x40,pcVar2);
        *(iVar10 + 0x10) = puVar11;
        *(iVar10 + 0x18) = uVar21;
        *(iVar10 + 0x20) = uVar16;
        *(iVar10 + 0x28) = iVar6;
        *(iVar10 + 0x30) = param_7;
        *(iVar10 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_228);
        auVar24 = auVar25;
    }
code_r0x080076a0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar9 = auVar25._0_8_;
    *extraout_x18_02 = sym.perf_trace_bw_hwmon_debug;
    pcStack_288 = sym.perf_trace_bw_hwmon_debug;
    pcStack_280 = sym.perf_trace_bw_hwmon_update;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar25._8_8_ != NULL) {
        pcVar2 = auVar25._8_8_;
    }
    iStack_298 = *(iVar10 + 0x5e0);
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar13 = puVar12;
    uVar20 = uVar8;
    iStack_2c0 = iVar7;
    piStack_2b8 = piVar18;
    uStack_2b0 = uVar19;
    ppuStack_290 = &ppuStack_1f0;
    uStack_278 = uVar23;
    uStack_270 = auVar24._8_8_;
    uStack_268 = auVar24._0_8_;
    puStack_260 = puVar11;
    uStack_258 = uVar21;
    uStack_250 = uVar16;
    iStack_248 = iVar6;
    piStack_240 = param_7;
    uStack_238 = param_8;
    iVar4 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &uStack_2a4;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_2a0,puVar13);
        if (iVar6 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_2a0 + 0xe8) = &ppuStack_290;
            *(iStack_2a0 + 0xf8) = &iStack_2c0;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar20) & 0x80076e0;
            *(iStack_2a0 + 0x108) = 5;
            *(iVar6 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,pcVar2);
            puVar13 = uStack_2a4;
            *(iVar6 + 0x20) = uVar17;
            *(iVar6 + 0x28) = iStack_2c0;
            *(iVar6 + 0x10) = puVar12;
            *(iVar6 + 0x18) = uVar8;
            *(iVar6 + 0x30) = piStack_2b8;
            *(iVar6 + 0x38) = uStack_2b0;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar13,uVar9,1,iStack_2a0,piVar1,0);
            uVar20 = uVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_298) {
        auVar24 = __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_03 = 0x8007878;
        bpf_trace_run8(auVar24._0_8_,auVar24._8_8_,puVar13 & 0xffffffff,uVar20 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003748 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_bw_hwmon_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6,
               int64_t *param_7,ulong param_8)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uchar auVar4 [16];
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    ulong uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x26;
    code *pcVar24;
    uint64_t uVar25;
    int64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    int64_t iStack_340;
    int64_t *piStack_338;
    ulong uStack_330;
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    code *pcStack_308;
    code *pcStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    uint32_t *puStack_2e0;
    uint64_t uStack_2d8;
    uint64_t uStack_2d0;
    int64_t iStack_2c8;
    int64_t *piStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    ulong uStack_268;
    code *pcStack_260;
    ulong uStack_250;
    char *pcStack_248;
    int64_t *piStack_240;
    uint32_t *puStack_238;
    uint64_t uStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    uint64_t uStack_218;
    int64_t iStack_210;
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    code *pcStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    uint32_t *puStack_1b0;
    uint64_t uStack_1a8;
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
    ulong uStack_140;
    char *pcStack_130;
    int64_t *piStack_128;
    uint32_t *puStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
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
    uVar22 = *(param_1 + 0x48);
    uVar15 = param_4;
    uVar16 = param_5;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(param_1), (uVar6 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar2 = "(null)";
        if (param_2 != NULL) {
            pcVar2 = param_2;
        }
        iVar5 = strlen(pcVar2);
        puVar12 = iVar5 + 1 + 0x28;
        iVar7 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0x24;
            strcpy(iVar7 + 0x24,pcVar2);
            *(iVar7 + 0x10) = param_3;
            *(iVar7 + 0x18) = param_4;
            *(iVar7 + 0x20) = param_5;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar6 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_bw_hwmon_meas;
    pcStack_d8 = sym.perf_trace_bw_hwmon_meas;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iStack_e8 = *(iVar7 + 0x5e0);
    pcVar24 = sym.perf_trace_bw_hwmon_meas;
    uVar21 = uVar16 & 0xffffffff;
    iStack_f0 = 0;
    uStack_f4 = 0;
    puVar13 = puVar12;
    uVar10 = uVar15;
    uVar17 = uVar16;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar8 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar6 + 0x78);
    if ((*(uVar6 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &uStack_f4;
        unaff_x26 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x26,&iStack_f0);
        if (iVar7 != 0) {
            uVar10 = ___cpu_online_mask & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar10) & 0x8007164;
            *(iStack_f0 + 0x108) = 5;
            *(iVar7 + 8) = uVar8 * 0x10000 + 0x10024;
            strcpy(iVar7 + 0x24,pcVar2);
            puVar13 = uStack_f4;
            uVar17 = 1;
            param_8 = 0;
            *(iVar7 + 0x10) = puVar12;
            *(iVar7 + 0x18) = uVar15;
            *(iVar7 + 0x20) = uVar16;
            uVar10 = uVar6;
            param_6 = iStack_f0;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(iVar7,unaff_x26);
            unaff_x28 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18_00 = 0x80072e4;
    uStack_148 = 0x80072e4;
    iVar7 = sp_el0;
    iStack_158 = *(iVar7 + 0x5e0);
    uVar23 = *(iVar9 + 0x48);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar22 = uVar23;
    uVar16 = uVar10;
    uVar18 = uVar17;
    iVar7 = param_6;
    ppuStack_150 = &puStack_e0;
    uStack_140 = uVar8;
    pcStack_130 = pcVar2;
    piStack_128 = piVar1;
    puStack_120 = puVar12;
    uStack_118 = uVar15;
    uStack_110 = uVar21;
    uStack_108 = uVar6;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar9), (uVar15 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (auVar26._8_8_ != NULL) {
            pcVar2 = auVar26._8_8_;
        }
        auVar26._8_8_ = pcVar2;
        auVar26._0_8_ = iVar9;
        iVar5 = strlen(pcVar2);
        uVar22 = iVar5 + 1;
        uVar23 = uVar22;
        puVar12 = uVar22 + 0x30;
        iVar9 = trace_event_buffer_reserve(&uStack_188,iVar9);
        auVar27._8_8_ = pcVar2;
        auVar27._0_8_ = iVar9;
        if (iVar9 != 0) {
            *(iVar9 + 8) = uVar22 * 0x10000 | 0x30;
            strcpy(iVar9 + 0x30,pcVar2);
            *(iVar9 + 0x10) = puVar13;
            *(iVar9 + 0x18) = uVar10;
            *(iVar9 + 0x20) = uVar17;
            *(iVar9 + 0x28) = param_6;
            trace_event_buffer_commit(&uStack_188);
            auVar26 = auVar27;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_158) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar15 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_bw_hwmon_update;
    pcStack_1e8 = sym.perf_trace_bw_hwmon_update;
    pcStack_1d8 = sym.perf_trace_bw_hwmon_meas;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar27._8_8_ != NULL) {
        pcVar2 = auVar27._8_8_;
    }
    iStack_1f8 = *(iVar9 + 0x5e0);
    iStack_200 = 0;
    uStack_204 = 0;
    puVar14 = puVar12;
    uVar6 = uVar16;
    uVar21 = uVar18;
    iStack_210 = iVar7;
    ppuStack_1f0 = &ppuStack_150;
    iStack_1e0 = unaff_x28;
    uStack_1d0 = unaff_x26;
    uStack_1c8 = uVar23;
    uStack_1c0 = auVar26._8_8_;
    uStack_1b8 = auVar26._0_8_;
    puStack_1b0 = puVar13;
    uStack_1a8 = uVar10;
    uStack_1a0 = uVar17;
    iStack_198 = param_6;
    uVar8 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar14 = &uStack_204;
        pcVar24 = (uVar8 + 0x3cU & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(pcVar24,&iStack_200);
        if (uVar10 != 0) {
            uVar6 = ___cpu_online_mask & 0x3f;
            *(iStack_200 + 0xe8) = &ppuStack_1f0;
            *(iStack_200 + 0xf8) = &iStack_210;
            *(iStack_200 + 0x100) = ~(-1L << uVar6) & 0x8007414;
            *(iStack_200 + 0x108) = 5;
            *(uVar10 + 8) = uVar8 * 0x10000 + 0x10030;
            strcpy(uVar10 + 0x30,pcVar2);
            puVar14 = uStack_204;
            uVar21 = 1;
            param_8 = 0;
            *(uVar10 + 0x10) = puVar12;
            *(uVar10 + 0x18) = uVar16;
            *(uVar10 + 0x20) = uVar18;
            *(uVar10 + 0x28) = iStack_210;
            uVar6 = uVar15;
            iVar7 = iStack_200;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(uVar10,pcVar24);
            uVar17 = uVar10;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    iVar11 = auVar28._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18_02 = 0x800759c;
    uStack_268 = 0x800759c;
    iVar9 = sp_el0;
    iStack_278 = *(iVar9 + 0x5e0);
    uVar25 = *(iVar11 + 0x48);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar22 = uVar25;
    uVar10 = uVar6;
    uVar23 = uVar21;
    iVar9 = iVar7;
    piVar19 = param_7;
    uVar20 = param_8;
    ppuStack_270 = &ppuStack_1f0;
    pcStack_260 = pcVar24;
    uStack_250 = uVar8;
    pcStack_248 = pcVar2;
    piStack_240 = piVar1;
    puStack_238 = puVar12;
    uStack_230 = uVar16;
    uStack_228 = uVar18;
    uStack_220 = uVar17;
    uStack_218 = uVar15;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar11), (uVar15 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar2 = "(null)";
    if (auVar28._8_8_ != NULL) {
        pcVar2 = auVar28._8_8_;
    }
    auVar28._8_8_ = pcVar2;
    auVar28._0_8_ = iVar11;
    iVar5 = strlen(pcVar2);
    uVar22 = iVar5 + 1;
    uVar25 = uVar22;
    puVar12 = uVar22 + 0x40;
    iVar11 = trace_event_buffer_reserve(&uStack_2a8,iVar11);
    auVar4._8_8_ = pcVar2;
    auVar4._0_8_ = iVar11;
    if (iVar11 != 0) {
        *(iVar11 + 8) = uVar22 * 0x10000 | 0x40;
        strcpy(iVar11 + 0x40,pcVar2);
        *(iVar11 + 0x10) = puVar14;
        *(iVar11 + 0x18) = uVar6;
        *(iVar11 + 0x20) = uVar21;
        *(iVar11 + 0x28) = iVar7;
        *(iVar11 + 0x30) = param_7;
        *(iVar11 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_2a8);
        auVar28 = auVar4;
    }
code_r0x080076a0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_278) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar15 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_bw_hwmon_debug;
    pcStack_308 = sym.perf_trace_bw_hwmon_debug;
    pcStack_300 = sym.perf_trace_bw_hwmon_update;
    iVar11 = sp_el0;
    pcVar2 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar2 = auVar26._8_8_;
    }
    iStack_318 = *(iVar11 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    puVar13 = puVar12;
    uVar16 = uVar10;
    iStack_340 = iVar9;
    piStack_338 = piVar19;
    uStack_330 = uVar20;
    ppuStack_310 = &ppuStack_270;
    uStack_2f8 = uVar25;
    uStack_2f0 = auVar28._8_8_;
    uStack_2e8 = auVar28._0_8_;
    puStack_2e0 = puVar14;
    uStack_2d8 = uVar6;
    uStack_2d0 = uVar21;
    iStack_2c8 = iVar7;
    piStack_2c0 = param_7;
    uStack_2b8 = param_8;
    iVar5 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &uStack_324;
        iVar3 = (iVar5 + 0x4cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_320,puVar13);
        if (iVar7 != 0) {
            uVar16 = ___cpu_online_mask & 0x3f;
            *(iStack_320 + 0xe8) = &ppuStack_310;
            *(iStack_320 + 0xf8) = &iStack_340;
            *(iStack_320 + 0x100) = ~(-1L << uVar16) & 0x80076e0;
            *(iStack_320 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x10040;
            strcpy(iVar7 + 0x40,pcVar2);
            puVar13 = uStack_324;
            *(iVar7 + 0x20) = uVar23;
            *(iVar7 + 0x28) = iStack_340;
            *(iVar7 + 0x10) = puVar12;
            *(iVar7 + 0x18) = uVar10;
            *(iVar7 + 0x30) = piStack_338;
            *(iVar7 + 0x38) = uStack_330;
            perf_trace_run_bpf_submit(iVar7,iVar3,puVar13,uVar15,1,iStack_320,piVar1,0);
            uVar16 = uVar15;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_318) {
        auVar26 = __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_04 = 0x8007878;
        bpf_trace_run8(auVar26._0_8_,auVar26._8_8_,puVar13 & 0xffffffff,uVar16 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003750 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6,
               int64_t *param_7,uint64_t param_8,uint32_t param_9,uint32_t param_10)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uint uVar7;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    int64_t *piVar26;
    uint64_t uVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    code *pcVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    char *pcVar32;
    uint64_t uVar33;
    char *pcVar34;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar35 [16];
    uchar auVar36 [16];
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    int64_t iStack_590;
    int64_t *piStack_588;
    uint64_t uStack_580;
    uint32_t uStack_574;
    int64_t iStack_570;
    int64_t iStack_568;
    ulong **ppuStack_560;
    code *pcStack_558;
    code *pcStack_550;
    uint64_t uStack_548;
    ulong uStack_540;
    ulong uStack_538;
    uint32_t *puStack_530;
    uint64_t uStack_528;
    uint64_t uStack_520;
    int64_t iStack_518;
    int64_t *piStack_510;
    uint64_t uStack_508;
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4e0;
    ulong uStack_4d8;
    ulong uStack_4d0;
    int64_t iStack_4c8;
    ulong **ppuStack_4c0;
    ulong uStack_4b8;
    code *pcStack_4b0;
    ulong uStack_4a0;
    char *pcStack_498;
    int64_t *piStack_490;
    uint32_t *puStack_488;
    uint64_t uStack_480;
    uint64_t uStack_478;
    uint64_t uStack_470;
    uint64_t uStack_468;
    int64_t iStack_460;
    uint32_t uStack_454;
    int64_t iStack_450;
    int64_t iStack_448;
    ulong **ppuStack_440;
    code *pcStack_438;
    int64_t iStack_430;
    code *pcStack_428;
    char *pcStack_420;
    uint64_t uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    uint32_t *puStack_400;
    uint64_t uStack_3f8;
    uint64_t uStack_3f0;
    int64_t iStack_3e8;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    int64_t iStack_3a8;
    ulong **ppuStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    char *pcStack_380;
    int64_t *piStack_378;
    uint32_t *puStack_370;
    uint64_t uStack_368;
    uint64_t uStack_360;
    uint64_t uStack_358;
    uchar auStack_350 [12];
    uint32_t uStack_344;
    int64_t iStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    code *pcStack_328;
    int64_t iStack_320;
    char *pcStack_318;
    char *pcStack_310;
    int64_t *piStack_308;
    uint64_t uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    uint32_t *puStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    code *pcStack_260;
    uint64_t uStack_258;
    uchar auStack_250 [8];
    int64_t iStack_248;
    int64_t *piStack_240;
    uint32_t uStack_234;
    int64_t iStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    char *pcStack_208;
    uint64_t uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    int64_t iStack_1d0;
    int64_t *piStack_1c8;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    ulong uStack_178;
    int64_t *piStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uint64_t uStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uchar auStack_130 [8];
    int64_t iStack_128;
    uint uStack_11c;
    uint uStack_118;
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    char *pcStack_e0;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_a0;
    uint64_t auStack_98 [7];
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    auStack_98[6] = *(iVar14 + 0x5e0);
    uVar33 = *(param_1 + 0x48);
    auStack_98[4] = 0;
    auStack_98[5] = 0;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    uVar29 = uVar33;
    uVar20 = param_4;
    uVar21 = param_5;
    iVar14 = param_6;
    piVar24 = param_7;
    uVar27 = param_8;
    pcVar32 = param_2;
    iStack_d8 = param_1;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = param_3;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(param_1), (uVar9 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar32 = "(null)";
        if (param_2 != NULL) {
            pcVar32 = param_2;
        }
        iVar8 = strlen(pcVar32);
        uVar29 = iVar8 + 1;
        uVar33 = uVar29;
        puVar17 = uVar29 + 0x38;
        iVar10 = trace_event_buffer_reserve(auStack_98,param_1);
        if (iVar10 != 0) {
            unaff_x28 = param_10;
            uVar33 = param_9;
            *(iVar10 + 8) = uVar29 * 0x10000 | 0x38;
            strcpy(iVar10 + 0x38,pcVar32);
            *(iVar10 + 0xc) = param_3;
            *(iVar10 + 0x10) = param_4;
            *(iVar10 + 0x18) = param_5;
            *(iVar10 + 0x20) = param_6;
            *(iVar10 + 0x28) = param_7;
            *(iVar10 + 0x2c) = param_8;
            *(iVar10 + 0x30) = param_9;
            *(iVar10 + 0x34) = param_10;
            trace_event_buffer_commit(auStack_98);
            iStack_d8 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == auStack_98[6]) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar9 = auVar35._0_8_;
    *extraout_x18 = sym.perf_trace_memlat_dev_meas;
    pcStack_f8 = sym.perf_trace_memlat_dev_meas;
    uStack_11c = SUB84(piVar24,0);
    uStack_118 = uVar27;
    iVar10 = sp_el0;
    pcVar34 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar34 = auVar35._8_8_;
    }
    iStack_108 = *(iVar10 + 0x5e0);
    pcVar28 = sym.perf_trace_memlat_dev_meas;
    uVar30 = puVar17 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    puVar18 = puVar17;
    uVar13 = uVar20;
    uVar22 = uVar21;
    iStack_128 = iVar14;
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x28;
    uStack_e8 = uVar33;
    pcStack_e0 = pcVar32;
    uStack_d0 = param_3 & 0xffffffff;
    uStack_c8 = param_4;
    uStack_c0 = param_5;
    iStack_b8 = param_6;
    uStack_b0 = param_7 & 0xffffffff;
    uStack_a8 = param_8 & 0xffffffff;
    uVar33 = strlen(pcVar34);
    iVar10 = tpidr_el1;
    piVar26 = iVar10 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar26 != 0)) {
        iVar8 = uVar33;
        puVar18 = &uStack_114;
        unaff_x28 = (iVar8 + 0x44U & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(unaff_x28,&iStack_110);
        if (uVar11 != 0) {
            uVar27 = ___cpu_online_mask & 0x3f;
            uVar7 = auStack_98[0];
            pcVar28 = auStack_98[0] & 0xffffffff;
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = auStack_130;
            uVar33 = uStack_a0;
            *(iStack_110 + 0x100) = ~(-1L << uVar27) & 0x8006bd0;
            *(iStack_110 + 0x108) = 5;
            *(uVar11 + 8) = iVar8 * 0x10000 + 0x10038;
            strcpy(uVar11 + 0x38,pcVar34);
            puVar18 = uStack_114;
            *(uVar11 + 0x20) = iStack_128;
            uVar22 = 1;
            uVar27 = 0;
            *(uVar11 + 0xc) = puVar17;
            *(uVar11 + 0x10) = uVar20;
            *(uVar11 + 0x18) = uVar21;
            *(uVar11 + 0x28) = uStack_11c;
            *(uVar11 + 0x2c) = uStack_118;
            *(uVar11 + 0x30) = uStack_a0;
            *(uVar11 + 0x34) = uVar7;
            uVar13 = uVar9;
            iVar14 = iStack_110;
            piVar24 = piVar26;
            perf_trace_run_bpf_submit(uVar11,unaff_x28);
            param_5 = uVar11;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_108) {
        return;
    }
    auVar35 = __stack_chk_fail();
    iVar12 = auVar35._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x8006d78;
    uStack_178 = 0x8006d78;
    iVar10 = sp_el0;
    iStack_188 = *(iVar10 + 0x5e0);
    uVar31 = *(iVar12 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar29 = uVar31;
    uVar11 = uVar13;
    uVar23 = uVar22;
    iVar10 = iVar14;
    piVar25 = piVar24;
    ppuStack_180 = &puStack_100;
    piStack_170 = piVar26;
    uStack_168 = uVar30;
    uStack_160 = uVar20;
    uStack_158 = uVar21;
    uStack_150 = param_5;
    pcStack_148 = pcVar28;
    uStack_140 = uVar33;
    uStack_138 = uVar9;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar32 = "(null)";
        if (auVar35._8_8_ != NULL) {
            pcVar32 = auVar35._8_8_;
        }
        auVar35._8_8_ = pcVar32;
        auVar35._0_8_ = iVar12;
        iVar8 = strlen(pcVar32);
        uVar29 = iVar8 + 1;
        uVar31 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar12 = trace_event_buffer_reserve(&uStack_1b8,iVar12);
        auVar36._8_8_ = pcVar32;
        auVar36._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar32);
            *(iVar12 + 0xc) = puVar18;
            *(iVar12 + 0x10) = uVar13;
            *(iVar12 + 0x18) = uVar22;
            *(iVar12 + 0x20) = iVar14;
            *(iVar12 + 0x28) = piVar24;
            trace_event_buffer_commit(&uStack_1b8);
            auVar35 = auVar36;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_188) {
        return;
    }
    auVar36 = __stack_chk_fail();
    uVar20 = auVar36._0_8_;
    *extraout_x18_01 = sym.perf_trace_memlat_dev_update;
    pcStack_218 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    pcVar32 = "(null)";
    if (auVar36._8_8_ != NULL) {
        pcVar32 = auVar36._8_8_;
    }
    iStack_228 = *(iVar12 + 0x5e0);
    uVar9 = puVar17 & 0xffffffff;
    iStack_230 = 0;
    uStack_234 = 0;
    puVar19 = puVar17;
    uVar21 = uVar11;
    uVar33 = uVar23;
    iStack_248 = iVar10;
    piStack_240 = piVar25;
    ppuStack_220 = &ppuStack_180;
    uStack_210 = unaff_x28;
    pcStack_208 = pcVar34;
    uStack_200 = uVar31;
    uStack_1f8 = auVar35._8_8_;
    uStack_1f0 = auVar35._0_8_;
    uStack_1e8 = puVar18 & 0xffffffff;
    uStack_1e0 = uVar13;
    uStack_1d8 = uVar22;
    iStack_1d0 = iVar14;
    piStack_1c8 = piVar24;
    iVar12 = strlen(pcVar32);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar19 = &uStack_234;
        pcVar34 = (iVar12 + 0x3cU & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(pcVar34,&iStack_230);
        if (uVar13 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_230 + 0xe8) = &ppuStack_220;
            *(iStack_230 + 0xf8) = auStack_250;
            *(iStack_230 + 0x100) = ~(-1L << uVar21) & 0x8006eb0;
            *(iStack_230 + 0x108) = 5;
            *(uVar13 + 8) = iVar12 * 0x10000 + 0x10030;
            strcpy(uVar13 + 0x30,pcVar32);
            puVar19 = uStack_234;
            uVar33 = 1;
            uVar27 = 0;
            *(uVar13 + 0xc) = puVar17;
            *(uVar13 + 0x10) = uVar11;
            *(uVar13 + 0x18) = uVar23;
            *(uVar13 + 0x20) = iStack_248;
            *(uVar13 + 0x28) = piStack_240;
            uVar21 = uVar20;
            iVar10 = iStack_230;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(uVar13,pcVar34);
            uVar22 = uVar13;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_228) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar16 = auVar37._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x8007040;
    uStack_288 = 0x8007040;
    pcStack_260 = sym.perf_trace_memlat_dev_update;
    iVar14 = sp_el0;
    iStack_298 = *(iVar14 + 0x5e0);
    uVar31 = *(iVar16 + 0x48);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar29 = uVar31;
    uVar13 = uVar21;
    uVar30 = uVar33;
    ppuStack_290 = &ppuStack_220;
    uStack_280 = uVar9;
    uStack_278 = uVar11;
    uStack_270 = uVar23;
    uStack_268 = uVar22;
    uStack_258 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar1 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar1;
        auVar37._0_8_ = iVar16;
        iVar8 = strlen(pcVar1);
        uVar29 = iVar8 + 1;
        uVar31 = uVar29;
        puVar17 = uVar29 + 0x28;
        iVar14 = trace_event_buffer_reserve(&uStack_2c8,iVar16);
        auVar4._8_8_ = pcVar1;
        auVar4._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar29 * 0x10000 | 0x24;
            strcpy(iVar14 + 0x24,pcVar1);
            *(iVar14 + 0x10) = puVar19;
            *(iVar14 + 0x18) = uVar21;
            *(iVar14 + 0x20) = uVar33;
            trace_event_buffer_commit(&uStack_2c8);
            auVar37 = auVar4;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_298) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar20 = auVar35._0_8_;
    *extraout_x18_03 = sym.perf_trace_bw_hwmon_meas;
    pcStack_328 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar1 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar1 = auVar35._8_8_;
    }
    iStack_338 = *(iVar14 + 0x5e0);
    pcVar28 = sym.perf_trace_bw_hwmon_meas;
    uVar11 = uVar30 & 0xffffffff;
    iStack_340 = 0;
    uStack_344 = 0;
    puVar18 = puVar17;
    uVar9 = uVar13;
    uVar22 = uVar30;
    ppuStack_330 = &ppuStack_290;
    iStack_320 = iVar12;
    pcStack_318 = pcVar34;
    pcStack_310 = pcVar32;
    piStack_308 = piVar24;
    uStack_300 = uVar31;
    uStack_2f8 = auVar37._8_8_;
    uStack_2f0 = auVar37._0_8_;
    puStack_2e8 = puVar19;
    uStack_2e0 = uVar21;
    uStack_2d8 = uVar33 & 0xffffffff;
    uVar15 = strlen(pcVar1);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_344;
        pcVar32 = (uVar15 + 0x34U & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(pcVar32,&iStack_340);
        if (iVar14 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_340 + 0xe8) = &ppuStack_330;
            *(iStack_340 + 0xf8) = auStack_350;
            *(iStack_340 + 0x100) = ~(-1L << uVar21) & 0x8007164;
            *(iStack_340 + 0x108) = 5;
            *(iVar14 + 8) = uVar15 * 0x10000 + 0x10024;
            strcpy(iVar14 + 0x24,pcVar1);
            puVar18 = uStack_344;
            uVar22 = 1;
            uVar27 = 0;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar13;
            *(iVar14 + 0x20) = uVar30;
            uVar9 = uVar20;
            iVar10 = iStack_340;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(iVar14,pcVar32);
            iVar12 = iVar14;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_338) {
        return;
    }
    auVar38 = __stack_chk_fail();
    iVar16 = auVar38._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_04 = 0x80072e4;
    uStack_398 = 0x80072e4;
    iVar14 = sp_el0;
    iStack_3a8 = *(iVar14 + 0x5e0);
    uVar30 = *(iVar16 + 0x48);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uVar29 = uVar30;
    uVar21 = uVar9;
    uVar33 = uVar22;
    iVar14 = iVar10;
    ppuStack_3a0 = &ppuStack_330;
    uStack_390 = uVar15;
    pcStack_380 = pcVar1;
    piStack_378 = piVar24;
    puStack_370 = puVar17;
    uStack_368 = uVar13;
    uStack_360 = uVar11;
    uStack_358 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar34 = "(null)";
        if (auVar38._8_8_ != NULL) {
            pcVar34 = auVar38._8_8_;
        }
        auVar38._8_8_ = pcVar34;
        auVar38._0_8_ = iVar16;
        iVar8 = strlen(pcVar34);
        uVar29 = iVar8 + 1;
        uVar30 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar16 = trace_event_buffer_reserve(&uStack_3d8,iVar16);
        auVar5._8_8_ = pcVar34;
        auVar5._0_8_ = iVar16;
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar16 + 0x30,pcVar34);
            *(iVar16 + 0x10) = puVar18;
            *(iVar16 + 0x18) = uVar9;
            *(iVar16 + 0x20) = uVar22;
            *(iVar16 + 0x28) = iVar10;
            trace_event_buffer_commit(&uStack_3d8);
            auVar38 = auVar5;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar20 = auVar35._0_8_;
    *extraout_x18_05 = sym.perf_trace_bw_hwmon_update;
    pcStack_438 = sym.perf_trace_bw_hwmon_update;
    pcStack_428 = sym.perf_trace_bw_hwmon_meas;
    iVar16 = sp_el0;
    pcVar34 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar34 = auVar35._8_8_;
    }
    iStack_448 = *(iVar16 + 0x5e0);
    iStack_450 = 0;
    uStack_454 = 0;
    puVar19 = puVar17;
    uVar13 = uVar21;
    uVar11 = uVar33;
    iStack_460 = iVar14;
    ppuStack_440 = &ppuStack_3a0;
    iStack_430 = iVar12;
    pcStack_420 = pcVar32;
    uStack_418 = uVar30;
    uStack_410 = auVar38._8_8_;
    uStack_408 = auVar38._0_8_;
    puStack_400 = puVar18;
    uStack_3f8 = uVar9;
    uStack_3f0 = uVar22;
    iStack_3e8 = iVar10;
    uVar15 = strlen(pcVar34);
    iVar10 = tpidr_el1;
    piVar24 = iVar10 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar19 = &uStack_454;
        pcVar28 = (uVar15 + 0x3cU & 0xfffffff8) - 4;
        uVar9 = perf_trace_buf_alloc(pcVar28,&iStack_450);
        if (uVar9 != 0) {
            uVar27 = ___cpu_online_mask & 0x3f;
            *(iStack_450 + 0xe8) = &ppuStack_440;
            *(iStack_450 + 0xf8) = &iStack_460;
            *(iStack_450 + 0x100) = ~(-1L << uVar27) & 0x8007414;
            *(iStack_450 + 0x108) = 5;
            *(uVar9 + 8) = uVar15 * 0x10000 + 0x10030;
            strcpy(uVar9 + 0x30,pcVar34);
            puVar19 = uStack_454;
            uVar11 = 1;
            uVar27 = 0;
            *(uVar9 + 0x10) = puVar17;
            *(uVar9 + 0x18) = uVar21;
            *(uVar9 + 0x20) = uVar33;
            *(uVar9 + 0x28) = iStack_460;
            uVar13 = uVar20;
            iVar14 = iStack_450;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(uVar9,pcVar28);
            uVar22 = uVar9;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_448) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar12 = auVar39._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_06 = 0x800759c;
    uStack_4b8 = 0x800759c;
    iVar10 = sp_el0;
    iStack_4c8 = *(iVar10 + 0x5e0);
    uVar31 = *(iVar12 + 0x48);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uVar29 = uVar31;
    uVar9 = uVar13;
    uVar30 = uVar11;
    iVar10 = iVar14;
    piVar26 = piVar25;
    uVar23 = uVar27;
    ppuStack_4c0 = &ppuStack_440;
    pcStack_4b0 = pcVar28;
    uStack_4a0 = uVar15;
    pcStack_498 = pcVar34;
    piStack_490 = piVar24;
    puStack_488 = puVar17;
    uStack_480 = uVar21;
    uStack_478 = uVar33;
    uStack_470 = uVar22;
    uStack_468 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar9 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) != 0) ||
           (((uVar29 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar32 = "(null)";
    if (auVar39._8_8_ != NULL) {
        pcVar32 = auVar39._8_8_;
    }
    auVar39._8_8_ = pcVar32;
    auVar39._0_8_ = iVar12;
    iVar8 = strlen(pcVar32);
    uVar29 = iVar8 + 1;
    uVar31 = uVar29;
    puVar17 = uVar29 + 0x40;
    iVar12 = trace_event_buffer_reserve(&uStack_4f8,iVar12);
    auVar6._8_8_ = pcVar32;
    auVar6._0_8_ = iVar12;
    if (iVar12 != 0) {
        *(iVar12 + 8) = uVar29 * 0x10000 | 0x40;
        strcpy(iVar12 + 0x40,pcVar32);
        *(iVar12 + 0x10) = puVar19;
        *(iVar12 + 0x18) = uVar13;
        *(iVar12 + 0x20) = uVar11;
        *(iVar12 + 0x28) = iVar14;
        *(iVar12 + 0x30) = piVar25;
        *(iVar12 + 0x38) = uVar27;
        trace_event_buffer_commit(&uStack_4f8);
        auVar39 = auVar6;
    }
code_r0x080076a0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_4c8) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar20 = auVar35._0_8_;
    *extraout_x18_07 = sym.perf_trace_bw_hwmon_debug;
    pcStack_558 = sym.perf_trace_bw_hwmon_debug;
    pcStack_550 = sym.perf_trace_bw_hwmon_update;
    iVar12 = sp_el0;
    pcVar32 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar32 = auVar35._8_8_;
    }
    iStack_568 = *(iVar12 + 0x5e0);
    iStack_570 = 0;
    uStack_574 = 0;
    puVar18 = puVar17;
    uVar21 = uVar9;
    iStack_590 = iVar10;
    piStack_588 = piVar26;
    uStack_580 = uVar23;
    ppuStack_560 = &ppuStack_4c0;
    uStack_548 = uVar31;
    uStack_540 = auVar39._8_8_;
    uStack_538 = auVar39._0_8_;
    puStack_530 = puVar19;
    uStack_528 = uVar13;
    uStack_520 = uVar11;
    iStack_518 = iVar14;
    piStack_510 = piVar25;
    uStack_508 = uVar27;
    iVar8 = strlen(pcVar32);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_574;
        iVar2 = (iVar8 + 0x4cU & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(iVar2,&iStack_570,puVar18);
        if (iVar14 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_570 + 0xe8) = &ppuStack_560;
            *(iStack_570 + 0xf8) = &iStack_590;
            *(iStack_570 + 0x100) = ~(-1L << uVar21) & 0x80076e0;
            *(iStack_570 + 0x108) = 5;
            *(iVar14 + 8) = iVar8 * 0x10000 + 0x10040;
            strcpy(iVar14 + 0x40,pcVar32);
            puVar18 = uStack_574;
            *(iVar14 + 0x20) = uVar30;
            *(iVar14 + 0x28) = iStack_590;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar9;
            *(iVar14 + 0x30) = piStack_588;
            *(iVar14 + 0x38) = uStack_580;
            perf_trace_run_bpf_submit(iVar14,iVar2,puVar18,uVar20,1,iStack_570,piVar24,0);
            uVar21 = uVar20;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_568) {
        auVar35 = __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_08 = 0x8007878;
        bpf_trace_run8(auVar35._0_8_,auVar35._8_8_,puVar18 & 0xffffffff,uVar21 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003758 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5,int64_t param_6
               ,int64_t *param_7,ulong param_8,uint32_t param_9,uint32_t param_10)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    int64_t *piVar19;
    int64_t *piVar20;
    ulong uVar21;
    uint64_t uVar22;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar23;
    uint64_t uVar24;
    int64_t unaff_x22;
    uint32_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    char *pcVar30;
    char *pcVar31;
    code *pcVar32;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar33 [16];
    uchar auVar34 [16];
    uchar auVar35 [16];
    uchar auVar36 [16];
    uchar auVar37 [16];
    int64_t iStack_4f0;
    int64_t *piStack_4e8;
    ulong uStack_4e0;
    uint32_t uStack_4d4;
    int64_t iStack_4d0;
    int64_t iStack_4c8;
    ulong **ppuStack_4c0;
    code *pcStack_4b8;
    code *pcStack_4b0;
    uint64_t uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    uint32_t *puStack_490;
    uint64_t uStack_488;
    uint64_t uStack_480;
    int64_t iStack_478;
    int64_t *piStack_470;
    ulong uStack_468;
    ulong uStack_458;
    ulong uStack_450;
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    int64_t iStack_428;
    ulong **ppuStack_420;
    ulong uStack_418;
    code *pcStack_410;
    ulong uStack_400;
    char *pcStack_3f8;
    int64_t *piStack_3f0;
    uint32_t *puStack_3e8;
    uint64_t uStack_3e0;
    uint64_t uStack_3d8;
    uint64_t uStack_3d0;
    uint64_t uStack_3c8;
    int64_t iStack_3c0;
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    ulong **ppuStack_3a0;
    code *pcStack_398;
    int64_t iStack_390;
    code *pcStack_388;
    char *pcStack_380;
    uint64_t uStack_378;
    ulong uStack_370;
    ulong uStack_368;
    uint32_t *puStack_360;
    uint64_t uStack_358;
    uint64_t uStack_350;
    int64_t iStack_348;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    int64_t iStack_308;
    ulong **ppuStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    char *pcStack_2e0;
    int64_t *piStack_2d8;
    uint32_t *puStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uchar auStack_2b0 [12];
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    code *pcStack_288;
    int64_t iStack_280;
    char *pcStack_278;
    char *pcStack_270;
    int64_t *piStack_268;
    uint64_t uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    uint32_t *puStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    uchar auStack_1b0 [8];
    int64_t iStack_1a8;
    int64_t *piStack_1a0;
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    char *pcStack_168;
    uint64_t uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t *piStack_128;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    int64_t *piStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    uchar auStack_90 [8];
    int64_t iStack_88;
    uint uStack_7c;
    uint uStack_78;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uStack_7c = SUB84(param_7,0);
    uStack_78 = param_8;
    iVar9 = sp_el0;
    pcVar31 = "(null)";
    if (param_2 != NULL) {
        pcVar31 = param_2;
    }
    iStack_68 = *(iVar9 + 0x5e0);
    uVar28 = param_3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar15 = param_3;
    uVar12 = param_4;
    uVar22 = param_5;
    iStack_88 = param_6;
    uVar8 = strlen(pcVar31);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(param_1 + 0x78);
    uVar24 = unaff_x30;
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar7 = uVar8;
        puVar15 = &uStack_74;
        unaff_x28 = (iVar7 + 0x44U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(unaff_x28,&iStack_70);
        if (iVar9 != 0) {
            uVar22 = -1L << (___cpu_online_mask & 0x3f);
            uVar24 = param_10;
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_90;
            uVar12 = (~uVar22 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar22 | unaff_x30;
            }
            uVar8 = param_9;
            *(iStack_70 + 0x100) = uVar12;
            *(iStack_70 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10038;
            strcpy(iVar9 + 0x38,pcVar31);
            puVar15 = uStack_74;
            *(iVar9 + 0x20) = iStack_88;
            uVar22 = 1;
            param_8 = 0;
            *(iVar9 + 0xc) = param_3;
            *(iVar9 + 0x10) = param_4;
            *(iVar9 + 0x18) = param_5;
            *(iVar9 + 0x28) = uStack_7c;
            *(iVar9 + 0x2c) = uStack_78;
            *(iVar9 + 0x30) = param_9;
            *(iVar9 + 0x34) = param_10;
            uVar12 = param_1;
            param_6 = iStack_70;
            param_7 = piVar1;
            perf_trace_run_bpf_submit(iVar9,unaff_x28);
            unaff_x22 = iVar9;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar10 = auVar33._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x8006d78;
    uStack_d8 = 0x8006d78;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    uVar29 = *(iVar10 + 0x48);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uVar25 = uVar29;
    uVar18 = uVar12;
    uVar23 = uVar22;
    iVar9 = param_6;
    piVar19 = param_7;
    puStack_e0 = &stack0xffffffffffffffa0;
    piStack_d0 = piVar1;
    uStack_c8 = uVar28;
    uStack_c0 = param_4;
    uStack_b8 = param_5;
    iStack_b0 = unaff_x22;
    uStack_a8 = uVar24;
    uStack_a0 = uVar8;
    uStack_98 = param_1;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar16 = puVar15;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar18 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar24 = trace_event_ignore_this_pid(iVar10), (uVar24 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar30 = "(null)";
        if (auVar33._8_8_ != NULL) {
            pcVar30 = auVar33._8_8_;
        }
        auVar33._8_8_ = pcVar30;
        auVar33._0_8_ = iVar10;
        iVar7 = strlen(pcVar30);
        uVar25 = iVar7 + 1;
        uVar29 = uVar25;
        puVar16 = uVar25 + 0x30;
        iVar10 = trace_event_buffer_reserve(&uStack_118,iVar10);
        auVar34._8_8_ = pcVar30;
        auVar34._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar25 * 0x10000 | 0x30;
            strcpy(iVar10 + 0x30,pcVar30);
            *(iVar10 + 0xc) = puVar15;
            *(iVar10 + 0x10) = uVar12;
            *(iVar10 + 0x18) = uVar22;
            *(iVar10 + 0x20) = param_6;
            *(iVar10 + 0x28) = param_7;
            trace_event_buffer_commit(&uStack_118);
            auVar33 = auVar34;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    uVar24 = auVar34._0_8_;
    *extraout_x18_00 = sym.perf_trace_memlat_dev_update;
    pcStack_178 = sym.perf_trace_memlat_dev_update;
    iVar10 = sp_el0;
    pcVar30 = "(null)";
    if (auVar34._8_8_ != NULL) {
        pcVar30 = auVar34._8_8_;
    }
    iStack_188 = *(iVar10 + 0x5e0);
    uVar26 = puVar16 & 0xffffffff;
    iStack_190 = 0;
    uStack_194 = 0;
    puVar17 = puVar16;
    uVar8 = uVar18;
    uVar28 = uVar23;
    iStack_1a8 = iVar9;
    piStack_1a0 = piVar19;
    ppuStack_180 = &puStack_e0;
    uStack_170 = unaff_x28;
    pcStack_168 = pcVar31;
    uStack_160 = uVar29;
    uStack_158 = auVar33._8_8_;
    uStack_150 = auVar33._0_8_;
    uStack_148 = puVar15 & 0xffffffff;
    uStack_140 = uVar12;
    uStack_138 = uVar22;
    iStack_130 = param_6;
    piStack_128 = param_7;
    iVar11 = strlen(pcVar30);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar24 + 0x78);
    if ((*(uVar24 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar17 = &uStack_194;
        pcVar31 = (iVar11 + 0x3cU & 0xfffffff8) - 4;
        uVar12 = perf_trace_buf_alloc(pcVar31,&iStack_190);
        if (uVar12 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            *(iStack_190 + 0xe8) = &ppuStack_180;
            *(iStack_190 + 0xf8) = auStack_1b0;
            *(iStack_190 + 0x100) = ~(-1L << uVar22) & 0x8006eb0;
            *(iStack_190 + 0x108) = 5;
            *(uVar12 + 8) = iVar11 * 0x10000 + 0x10030;
            strcpy(uVar12 + 0x30,pcVar30);
            puVar17 = uStack_194;
            uVar28 = 1;
            param_8 = 0;
            *(uVar12 + 0xc) = puVar16;
            *(uVar12 + 0x10) = uVar18;
            *(uVar12 + 0x18) = uVar23;
            *(uVar12 + 0x20) = iStack_1a8;
            *(uVar12 + 0x28) = piStack_1a0;
            uVar8 = uVar24;
            iVar9 = iStack_190;
            piVar19 = piVar1;
            perf_trace_run_bpf_submit(uVar12,pcVar31);
            uVar22 = uVar12;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_188) {
        return;
    }
    auVar35 = __stack_chk_fail();
    iVar14 = auVar35._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_01 = 0x8007040;
    uStack_1e8 = 0x8007040;
    pcStack_1c0 = sym.perf_trace_memlat_dev_update;
    iVar10 = sp_el0;
    iStack_1f8 = *(iVar10 + 0x5e0);
    uVar27 = *(iVar14 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar25 = uVar27;
    uVar12 = uVar8;
    uVar29 = uVar28;
    ppuStack_1f0 = &ppuStack_180;
    uStack_1e0 = uVar26;
    uStack_1d8 = uVar18;
    uStack_1d0 = uVar23;
    uStack_1c8 = uVar22;
    uStack_1b8 = uVar24;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar22 = trace_event_ignore_this_pid(iVar14), (uVar22 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar2 = "(null)";
        if (auVar35._8_8_ != NULL) {
            pcVar2 = auVar35._8_8_;
        }
        auVar35._8_8_ = pcVar2;
        auVar35._0_8_ = iVar14;
        iVar7 = strlen(pcVar2);
        uVar25 = iVar7 + 1;
        uVar27 = uVar25;
        puVar15 = uVar25 + 0x28;
        iVar10 = trace_event_buffer_reserve(&uStack_228,iVar14);
        auVar4._8_8_ = pcVar2;
        auVar4._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar25 * 0x10000 | 0x24;
            strcpy(iVar10 + 0x24,pcVar2);
            *(iVar10 + 0x10) = puVar17;
            *(iVar10 + 0x18) = uVar8;
            *(iVar10 + 0x20) = uVar28;
            trace_event_buffer_commit(&uStack_228);
            auVar35 = auVar4;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar33 = __stack_chk_fail();
    uVar22 = auVar33._0_8_;
    *extraout_x18_02 = sym.perf_trace_bw_hwmon_meas;
    pcStack_288 = sym.perf_trace_bw_hwmon_meas;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar2 = auVar33._8_8_;
    }
    iStack_298 = *(iVar10 + 0x5e0);
    pcVar32 = sym.perf_trace_bw_hwmon_meas;
    uVar23 = uVar29 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar16 = puVar15;
    uVar24 = uVar12;
    uVar18 = uVar29;
    ppuStack_290 = &ppuStack_1f0;
    iStack_280 = iVar11;
    pcStack_278 = pcVar31;
    pcStack_270 = pcVar30;
    piStack_268 = piVar1;
    uStack_260 = uVar27;
    uStack_258 = auVar35._8_8_;
    uStack_250 = auVar35._0_8_;
    puStack_248 = puVar17;
    uStack_240 = uVar8;
    uStack_238 = uVar28 & 0xffffffff;
    uVar13 = strlen(pcVar2);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar22 + 0x78);
    if ((*(uVar22 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &uStack_2a4;
        pcVar30 = (uVar13 + 0x34U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(pcVar30,&iStack_2a0);
        if (iVar10 != 0) {
            uVar24 = ___cpu_online_mask & 0x3f;
            *(iStack_2a0 + 0xe8) = &ppuStack_290;
            *(iStack_2a0 + 0xf8) = auStack_2b0;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar24) & 0x8007164;
            *(iStack_2a0 + 0x108) = 5;
            *(iVar10 + 8) = uVar13 * 0x10000 + 0x10024;
            strcpy(iVar10 + 0x24,pcVar2);
            puVar16 = uStack_2a4;
            uVar18 = 1;
            param_8 = 0;
            *(iVar10 + 0x10) = puVar15;
            *(iVar10 + 0x18) = uVar12;
            *(iVar10 + 0x20) = uVar29;
            uVar24 = uVar22;
            iVar9 = iStack_2a0;
            piVar19 = piVar1;
            perf_trace_run_bpf_submit(iVar10,pcVar30);
            iVar11 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_298) {
        return;
    }
    auVar36 = __stack_chk_fail();
    iVar14 = auVar36._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_03 = 0x80072e4;
    uStack_2f8 = 0x80072e4;
    iVar10 = sp_el0;
    iStack_308 = *(iVar10 + 0x5e0);
    uVar29 = *(iVar14 + 0x48);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uVar25 = uVar29;
    uVar8 = uVar24;
    uVar28 = uVar18;
    iVar10 = iVar9;
    ppuStack_300 = &ppuStack_290;
    uStack_2f0 = uVar13;
    pcStack_2e0 = pcVar2;
    piStack_2d8 = piVar1;
    puStack_2d0 = puVar15;
    uStack_2c8 = uVar12;
    uStack_2c0 = uVar23;
    uStack_2b8 = uVar22;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar14), (uVar12 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar31 = "(null)";
        if (auVar36._8_8_ != NULL) {
            pcVar31 = auVar36._8_8_;
        }
        auVar36._8_8_ = pcVar31;
        auVar36._0_8_ = iVar14;
        iVar7 = strlen(pcVar31);
        uVar25 = iVar7 + 1;
        uVar29 = uVar25;
        puVar15 = uVar25 + 0x30;
        iVar14 = trace_event_buffer_reserve(&uStack_338,iVar14);
        auVar5._8_8_ = pcVar31;
        auVar5._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar25 * 0x10000 | 0x30;
            strcpy(iVar14 + 0x30,pcVar31);
            *(iVar14 + 0x10) = puVar16;
            *(iVar14 + 0x18) = uVar24;
            *(iVar14 + 0x20) = uVar18;
            *(iVar14 + 0x28) = iVar9;
            trace_event_buffer_commit(&uStack_338);
            auVar36 = auVar5;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_308) {
        return;
    }
    auVar33 = __stack_chk_fail();
    uVar12 = auVar33._0_8_;
    *extraout_x18_04 = sym.perf_trace_bw_hwmon_update;
    pcStack_398 = sym.perf_trace_bw_hwmon_update;
    pcStack_388 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar31 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar31 = auVar33._8_8_;
    }
    iStack_3a8 = *(iVar14 + 0x5e0);
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    puVar17 = puVar15;
    uVar22 = uVar8;
    uVar23 = uVar28;
    iStack_3c0 = iVar10;
    ppuStack_3a0 = &ppuStack_300;
    iStack_390 = iVar11;
    pcStack_380 = pcVar30;
    uStack_378 = uVar29;
    uStack_370 = auVar36._8_8_;
    uStack_368 = auVar36._0_8_;
    puStack_360 = puVar16;
    uStack_358 = uVar24;
    uStack_350 = uVar18;
    iStack_348 = iVar9;
    uVar13 = strlen(pcVar31);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar17 = &uStack_3b4;
        pcVar32 = (uVar13 + 0x3cU & 0xfffffff8) - 4;
        uVar24 = perf_trace_buf_alloc(pcVar32,&iStack_3b0);
        if (uVar24 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            *(iStack_3b0 + 0xe8) = &ppuStack_3a0;
            *(iStack_3b0 + 0xf8) = &iStack_3c0;
            *(iStack_3b0 + 0x100) = ~(-1L << uVar22) & 0x8007414;
            *(iStack_3b0 + 0x108) = 5;
            *(uVar24 + 8) = uVar13 * 0x10000 + 0x10030;
            strcpy(uVar24 + 0x30,pcVar31);
            puVar17 = uStack_3b4;
            uVar23 = 1;
            param_8 = 0;
            *(uVar24 + 0x10) = puVar15;
            *(uVar24 + 0x18) = uVar8;
            *(uVar24 + 0x20) = uVar28;
            *(uVar24 + 0x28) = iStack_3c0;
            uVar22 = uVar12;
            iVar10 = iStack_3b0;
            piVar19 = piVar1;
            perf_trace_run_bpf_submit(uVar24,pcVar32);
            uVar18 = uVar24;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar11 = auVar37._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_05 = 0x800759c;
    uStack_418 = 0x800759c;
    iVar9 = sp_el0;
    iStack_428 = *(iVar9 + 0x5e0);
    uVar26 = *(iVar11 + 0x48);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    uVar25 = uVar26;
    uVar24 = uVar22;
    uVar29 = uVar23;
    iVar9 = iVar10;
    piVar20 = piVar19;
    uVar21 = param_8;
    ppuStack_420 = &ppuStack_3a0;
    pcStack_410 = pcVar32;
    uStack_400 = uVar13;
    pcStack_3f8 = pcVar31;
    piStack_3f0 = piVar1;
    puStack_3e8 = puVar15;
    uStack_3e0 = uVar8;
    uStack_3d8 = uVar28;
    uStack_3d0 = uVar18;
    uStack_3c8 = uVar12;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar24 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar25 >> 6 & 1) != 0) ||
           (((uVar25 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar11), (uVar12 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar31 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar31 = auVar37._8_8_;
    }
    auVar37._8_8_ = pcVar31;
    auVar37._0_8_ = iVar11;
    iVar7 = strlen(pcVar31);
    uVar25 = iVar7 + 1;
    uVar26 = uVar25;
    puVar15 = uVar25 + 0x40;
    iVar11 = trace_event_buffer_reserve(&uStack_458,iVar11);
    auVar6._8_8_ = pcVar31;
    auVar6._0_8_ = iVar11;
    if (iVar11 != 0) {
        *(iVar11 + 8) = uVar25 * 0x10000 | 0x40;
        strcpy(iVar11 + 0x40,pcVar31);
        *(iVar11 + 0x10) = puVar17;
        *(iVar11 + 0x18) = uVar22;
        *(iVar11 + 0x20) = uVar23;
        *(iVar11 + 0x28) = iVar10;
        *(iVar11 + 0x30) = piVar19;
        *(iVar11 + 0x38) = param_8;
        trace_event_buffer_commit(&uStack_458);
        auVar37 = auVar6;
    }
code_r0x080076a0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_428) {
        return;
    }
    auVar33 = __stack_chk_fail();
    uVar12 = auVar33._0_8_;
    *extraout_x18_06 = sym.perf_trace_bw_hwmon_debug;
    pcStack_4b8 = sym.perf_trace_bw_hwmon_debug;
    pcStack_4b0 = sym.perf_trace_bw_hwmon_update;
    iVar11 = sp_el0;
    pcVar31 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar31 = auVar33._8_8_;
    }
    iStack_4c8 = *(iVar11 + 0x5e0);
    iStack_4d0 = 0;
    uStack_4d4 = 0;
    puVar16 = puVar15;
    uVar8 = uVar24;
    iStack_4f0 = iVar9;
    piStack_4e8 = piVar20;
    uStack_4e0 = uVar21;
    ppuStack_4c0 = &ppuStack_420;
    uStack_4a8 = uVar26;
    uStack_4a0 = auVar37._8_8_;
    uStack_498 = auVar37._0_8_;
    puStack_490 = puVar17;
    uStack_488 = uVar22;
    uStack_480 = uVar23;
    iStack_478 = iVar10;
    piStack_470 = piVar19;
    uStack_468 = param_8;
    iVar7 = strlen(pcVar31);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &uStack_4d4;
        iVar3 = (iVar7 + 0x4cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_4d0,puVar16);
        if (iVar9 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            *(iStack_4d0 + 0xe8) = &ppuStack_4c0;
            *(iStack_4d0 + 0xf8) = &iStack_4f0;
            *(iStack_4d0 + 0x100) = ~(-1L << uVar22) & 0x80076e0;
            *(iStack_4d0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10040;
            strcpy(iVar9 + 0x40,pcVar31);
            puVar16 = uStack_4d4;
            *(iVar9 + 0x20) = uVar29;
            *(iVar9 + 0x28) = iStack_4f0;
            *(iVar9 + 0x10) = puVar15;
            *(iVar9 + 0x18) = uVar24;
            *(iVar9 + 0x30) = piStack_4e8;
            *(iVar9 + 0x38) = uStack_4e0;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar16,uVar12,1,iStack_4d0,piVar1,0);
            uVar8 = uVar12;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_4c8) {
        auVar33 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_07 = 0x8007878;
        bpf_trace_run8(auVar33._0_8_,auVar33._8_8_,puVar16 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt @ 0x08003760 (size 8) =====

void sym.__bpf_trace_memlat_dev_meas.d034cccb1b59d5699f08df130583ff8d.cfi_jt(ulong param_1,ulong param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run9(param_1,param_2,param_3);
    return;
}


// ===== sym.boost_ddr_freq @ 0x08003768 (size 512) =====

void sym.boost_ddr_freq(uint32_t arg1)

{
    uint32_t *puVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    code *extraout_x8;
    int64_t *piVar7;
    int64_t *piVar8;
    int iVar9;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t iVar10;
    ulong unaff_x30;
    uint32_t uStack_48;
    int iStack_44;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    iVar10 = *(_segment.ehdr + 0x60);
    if (iVar10 == 0) {
        uVar3 = 0xfffffff4;
        goto code_r0x080038f4;
    }
    if (*(iVar10 + 0x84) < arg1) {
        uVar3 = 0xffffffea;
        goto code_r0x080038f4;
    }
    unaff_x19 = *(iVar10 + 0x90);
    if (unaff_x19 == 0) {
        uVar3 = 0xffffffff;
        goto code_r0x080038f4;
    }
    unaff_x20 = unaff_x19 + 0x48;
    if (arg1 <= *(iVar10 + 0x80)) {
        arg1 = *(iVar10 + 0x80);
    }
    *(iVar10 + 0x88) = arg1;
    mutex_lock(unaff_x20);
    uStack_40 = *(iVar10 + 0x68);
    piVar7 = unaff_x19 + 0x30;
    piVar8 = *piVar7;
    iStack_44 = 0;
    if (piVar7 == piVar8) {
        uVar5 = 0;
    }
    else {
        iStack_44 = 0;
        uVar4 = 0;
        do {
            iStack_44 = *(piVar8 + -0xc) + iStack_44;
            puVar1 = piVar8 + -2;
            piVar8 = *piVar8;
            uVar5 = *puVar1;
            if (*puVar1 <= uVar4) {
                uVar5 = uVar4;
            }
            uVar4 = uVar5;
        } while (piVar7 != piVar8);
    }
    iVar10 = *(unaff_x19 + 0x10);
    iVar2 = *(iVar10 + 0x78);
    if (*(unaff_x19 + 8) == 0) {
        if (uVar5 <= *(iVar10 + 0x88)) {
            uVar5 = *(iVar10 + 0x88);
        }
        iVar9 = 0;
        if (iVar2 != 0) goto code_r0x08003850;
code_r0x08003880:
        iVar9 = 0;
        uStack_48 = 0;
code_r0x08003884:
        if (iVar9 != iVar2) goto code_r0x08003894;
    }
    else {
        iVar9 = 0;
        if (iVar2 == 0) goto code_r0x08003880;
code_r0x08003850:
        do {
            uStack_48 = *(*(iVar10 + 0x70) + iVar9 * 4);
            if (uVar5 <= uStack_48) goto code_r0x08003884;
            iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
    }
    uStack_48 = *(*(iVar10 + 0x70) + (iVar2 - 1) * 4);
code_r0x08003894:
    if (uStack_48 == *(unaff_x19 + 0x18)) goto code_r0x080038d4;
    pcVar6 = *(unaff_x19 + 0x80);
    if (2 < (pcVar6 + -0x8003638 >> 3 | pcVar6 << 0x3d)) goto code_r0x0800393c;
    while( true ) {
        iVar2 = (*pcVar6)(unaff_x19,&uStack_48,1);
        if (iVar2 < 0) {
            _printk(0x8001f84,iVar2);
        }
code_r0x080038d4:
        mutex_unlock(unaff_x20);
        uVar3 = 0;
code_r0x080038f4:
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(uVar3);
        pcVar6 = extraout_x8;
code_r0x0800393c:
        __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar6,0x8001720);
    }
    return;
}


// ===== sym.qcom_dcvs_update_votes @ 0x080039e4 (size 80) =====

ulong sym.qcom_dcvs_update_votes(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg4 == 2) {
        uVar1 = sym.qcom_dcvs_percpu_update(arg1,arg2,arg3);
    }
    else if (arg4 == 1) {
        uVar1 = sym.qcom_dcvs_fp_update(arg1,arg2,arg3);
    }
    else if (arg4 == 0) {
        uVar1 = sym.qcom_dcvs_sp_update(arg1,arg2,arg3);
    }
    else {
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.qcom_dcvs_sp_update @ 0x08003a34 (size 844) =====

uint64_t sym.qcom_dcvs_sp_update(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint32_t *puVar3;
    int iVar4;
    code *pcVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    int64_t *piVar11;
    code *unaff_x20;
    code *pcVar12;
    int64_t unaff_x21;
    uint32_t *unaff_x22;
    int64_t unaff_x23;
    int64_t *unaff_x24;
    int64_t *piVar13;
    ulong unaff_x25;
    uint64_t unaff_x26;
    uint64_t unaff_x27;
    uint32_t uVar14;
    uint32_t *unaff_x28;
    uint64_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint32_t auStack_148 [12];
    int64_t iStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    uint32_t *puStack_100;
    uint64_t uStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    int64_t *piStack_e0;
    int64_t iStack_d8;
    uint32_t *puStack_d0;
    int64_t iStack_c8;
    code *pcStack_c0;
    uint64_t uStack_b8;
    ulong uStack_a8;
    code *pcStack_a0;
    uint64_t uStack_98;
    uint32_t uStack_8c;
    int64_t *piStack_88;
    int64_t iStack_80;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    uVar6 = arg3;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar10 = 0xffffffea;
    iStack_68 = *(iVar7 + 0x5e0);
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    if (((arg1 != 0) && (arg2 != 0)) && (uVar6 != 0)) {
        unaff_x26 = 0;
        uVar10 = 0;
        uVar9 = arg3 & 0xffffffff;
        uStack_a8 = sp_el0;
        uStack_98 = uVar9;
        iStack_80 = arg2;
        do {
            uVar6 = arg3;
            unaff_x21 = arg1;
            if ((uVar9 >> (unaff_x26 & 0x3f) & 1) != 0) {
                if (_segment.ehdr != 0) {
                    uVar14 = *(arg2 + unaff_x26 * 0xc + 8);
                    pcVar12 = uVar14;
                    if (3 < uVar14) {
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8003d6c);
                        (*pcVar12)();
                    }
                    iVar7 = *(_segment.ehdr + pcVar12 * 8 + 0x60);
                    unaff_x20 = pcVar12;
                    if ((iVar7 != 0) && (unaff_x23 = *(iVar7 + 0x90), unaff_x23 != 0)) {
                        piStack_88 = unaff_x23 + 0x48;
                        uStack_8c = uVar10;
                        mutex_lock();
                        uVar6 = arg3;
                        uStack_78 = 0;
                        uStack_74 = 0;
                        piVar13 = unaff_x23 + 0x30;
                        piVar11 = *piVar13;
                        pcStack_a0 = pcVar12;
                        uStack_70 = uVar14;
                        if (piVar13 != piVar11) {
                            unaff_x27 = 0;
                            unaff_x20 = NULL;
                            unaff_x25 = 0;
                            unaff_x28 = iStack_80 + unaff_x26 * 0xc;
                            unaff_x22 = unaff_x28 + 1;
                            do {
                                iVar4 = strcmp(piVar11[-3],arg1);
                                unaff_x24 = piStack_88;
                                uVar6 = arg3;
                                if (iVar4 == 0) {
                                    uVar14 = *unaff_x28;
                                    unaff_x25 = 1;
                                    *(piVar11 + -2) = uVar14;
                                    *(piVar11 + -0xc) = *unaff_x22;
                                }
                                else {
                                    uVar14 = *(piVar11 + -2);
                                    uStack_78 = unaff_x20;
                                    uStack_74 = unaff_x27;
                                }
                                if (uVar14 <= uStack_78) {
                                    uVar14 = uStack_78;
                                }
                                unaff_x20 = uVar14;
                                uStack_74 = *(piVar11 + -0xc) + uStack_74;
                                unaff_x27 = uStack_74;
                                piVar11 = *piVar11;
                                uStack_78 = uVar14;
                            } while (piVar13 != piVar11);
                            if (unaff_x25 != 0) {
                                iVar7 = *(unaff_x23 + 0x10);
                                if (*(unaff_x23 + 8) == 0) {
                                    if (uVar14 <= *(iVar7 + 0x88)) {
                                        uVar14 = *(iVar7 + 0x88);
                                    }
                                    unaff_x20 = uVar14;
                                }
                                iVar1 = *(iVar7 + 0x78);
                                iVar4 = 0;
                                uVar10 = uStack_8c;
                                if (iVar1 == 0) {
                                    uStack_78 = 0;
code_r0x08003be4:
                                    if (iVar4 == iVar1) goto code_r0x08003bec;
                                }
                                else {
                                    do {
                                        uStack_78 = *(*(iVar7 + 0x70) + iVar4 * 4);
                                        if (unaff_x20 <= uStack_78) goto code_r0x08003be4;
                                        iVar4 = iVar4 + 1;
                                    } while (iVar1 != iVar4);
code_r0x08003bec:
                                    uStack_78 = *(*(iVar7 + 0x70) + (iVar1 - 1) * 4);
                                }
                                if ((uStack_78 != *(unaff_x23 + 0x18)) || (uStack_74 != *(unaff_x23 + 0x1c))) {
                                    pcVar12 = *(unaff_x23 + 0x80);
                                    if (2 < (pcVar12 + -0x8003638 >> 3 | pcVar12 << 0x3d)) {
                                        __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar12,0x8001740);
                                    }
                                    arg3 = 1;
                                    uVar10 = (*pcVar12)(unaff_x23,&stack0xffffffffffffff88);
                                    uVar10 = uVar10 & 0xffffffff;
                                }
                                mutex_unlock(unaff_x24);
                                uVar6 = arg3;
                                arg2 = iStack_80;
                                uVar9 = uStack_98;
                                if (-1 < uVar10) goto code_r0x08003aa4;
                                break;
                            }
                        }
                        mutex_unlock(piStack_88);
                        unaff_x24 = piVar13;
                    }
                }
                uVar10 = 0xffffffea;
                break;
            }
code_r0x08003aa4:
            uVar6 = arg3;
            unaff_x26 = unaff_x26 + 1;
        } while (unaff_x26 != 4);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar10;
    }
    auVar16 = __stack_chk_fail();
    pcVar5 = auVar16._8_8_;
    uVar2 = tpidr_el2;
    *extraout_x18 = 0x8003d70;
    uStack_108 = 0x8003d70;
    iVar7 = sp_el0;
    iStack_118 = *(iVar7 + 0x5e0);
    uVar9 = 0xffffffea;
    auStack_148[8] = 0;
    auStack_148[9] = 0;
    auStack_148[10] = 0;
    auStack_148[0xb] = 0;
    auStack_148[4] = 0;
    auStack_148[5] = 0;
    auStack_148[6] = 0;
    auStack_148[7] = 0;
    auStack_148[0] = 0;
    auStack_148[1] = 0;
    auStack_148[2] = 0;
    auStack_148[3] = 0;
    pcVar12 = unaff_x20;
    puStack_110 = &stack0xffffffffffffffa0;
    puStack_100 = unaff_x28;
    uStack_f8 = unaff_x27;
    uStack_f0 = unaff_x26;
    uStack_e8 = unaff_x25;
    piStack_e0 = unaff_x24;
    iStack_d8 = unaff_x23;
    puStack_d0 = unaff_x22;
    iStack_c8 = unaff_x21;
    pcStack_c0 = unaff_x20;
    uStack_b8 = uVar10;
    if (((auVar16._0_8_ != 0) && (pcVar12 = pcVar5, pcVar5 != NULL)) && (uVar6 != 0)) {
        uVar9 = 0;
        uVar10 = 0;
        uVar2 = sp_el0;
        puVar3 = NULL;
        do {
            unaff_x22 = puVar3;
            uVar15 = 1L << (uVar9 & 0x3f);
            if ((uVar15 & uVar6) != 0) {
                if (_segment.ehdr != 0) {
                    uVar14 = *(pcVar5 + uVar9 * 0xc + 8);
                    if (3 < uVar14) {
    //WARNING: Does not return
                        pcVar12 = SoftwareBreakpoint(0x5512,0x8004000);
                        (*pcVar12)();
                    }
                    iVar7 = *(_segment.ehdr + uVar14 * 8 + 0x60);
                    if (((iVar7 != 0) && (unaff_x22 = *(iVar7 + 0x98), unaff_x22 != NULL && uVar9 == uVar14)) &&
                       ((*(unaff_x22 + 0xc) + -0x18 != NULL &&
                        (iVar4 = strcmp(*(*(unaff_x22 + 0xc) + -0x18),auVar16._0_8_), iVar4 == 0)))) {
                        uVar14 = *(pcVar5 + uVar9 * 0xc);
                        iVar7 = *(unaff_x22 + 4);
                        if ((unaff_x22[2] == 0) && (uVar14 <= *(iVar7 + 0x88))) {
                            uVar14 = *(iVar7 + 0x88);
                        }
                        iVar1 = *(iVar7 + 0x78);
                        iVar4 = 0;
                        if (iVar1 == 0) {
                            uVar8 = 0;
code_r0x08003eec:
                            if (iVar4 == iVar1) goto code_r0x08003dfc;
                        }
                        else {
                            do {
                                uVar8 = *(*(iVar7 + 0x70) + iVar4 * 4);
                                if (uVar14 <= uVar8) goto code_r0x08003eec;
                                iVar4 = iVar4 + 1;
                            } while (iVar1 != iVar4);
code_r0x08003dfc:
                            uVar8 = *(*(iVar7 + 0x70) + (iVar1 - 1) * 4);
                        }
                        *(&stack0xfffffffffffffeb8 + uVar9 * 0xc) = uVar8;
                        uVar14 = 0;
                        if (uVar8 != unaff_x22[6]) {
                            uVar14 = uVar15;
                        }
                        uVar10 = uVar14 | uVar10;
                        goto code_r0x08003e2c;
                    }
                }
                uVar9 = 0xffffffea;
                goto code_r0x08003f84;
            }
code_r0x08003e2c:
            uVar9 = uVar9 + 1;
            puVar3 = unaff_x22;
        } while (uVar9 != 4);
        if (uVar10 != 0) {
            pcVar12 = *(unaff_x22 + 0x20);
            if (2 < (pcVar12 + -0x8003638 >> 3 | pcVar12 << 0x3d)) goto code_r0x08004004;
            goto code_r0x08003fe0;
        }
        uVar9 = 0;
    }
code_r0x08003f84:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_118) {
        __stack_chk_fail(uVar9);
code_r0x08004004:
        __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar12,0x8001760);
code_r0x08003fe0:
        uVar9 = (*pcVar12)(unaff_x22,&stack0xfffffffffffffeb8,uVar10);
    }
    return uVar9;
}


// ===== sym.qcom_dcvs_fp_update @ 0x08003d80 (size 680) =====

void sym.qcom_dcvs_fp_update(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong *puVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong *in_x18;
    uint32_t unaff_w19;
    code *unaff_x20;
    int64_t unaff_x22;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    uint32_t auStack_98 [12];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uVar5 = 0xffffffea;
    auStack_98[8] = 0;
    auStack_98[9] = 0;
    auStack_98[10] = 0;
    auStack_98[0xb] = 0;
    auStack_98[4] = 0;
    auStack_98[5] = 0;
    auStack_98[6] = 0;
    auStack_98[7] = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    if (((arg1 != 0) && (unaff_x20 = arg2, arg2 != 0)) && (arg3 != 0)) {
        uVar8 = 0;
        unaff_x22 = 0;
        unaff_w19 = 0;
        uVar5 = sp_el0;
        do {
            uVar10 = 1L << (uVar8 & 0x3f);
            if ((uVar10 & arg3 & 0xffffffffU) != 0) {
                if (_segment.ehdr != 0) {
                    uVar9 = *(arg2 + uVar8 * 0xc + 8);
                    if (3 < uVar9) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x5512,0x8004000);
                        (*pcVar3)();
                    }
                    iVar6 = *(_segment.ehdr + uVar9 * 8 + 0x60);
                    if (((iVar6 != 0) && (unaff_x22 = *(iVar6 + 0x98), unaff_x22 != 0 && uVar8 == uVar9)) &&
                       ((puVar2 = *(unaff_x22 + 0x30) + -0x18, puVar2 != NULL &&
                        (iVar4 = strcmp(*puVar2,arg1), iVar4 == 0)))) {
                        uVar9 = *(arg2 + uVar8 * 0xc);
                        iVar6 = *(unaff_x22 + 0x10);
                        if ((*(unaff_x22 + 8) == 0) && (uVar9 <= *(iVar6 + 0x88))) {
                            uVar9 = *(iVar6 + 0x88);
                        }
                        iVar1 = *(iVar6 + 0x78);
                        iVar4 = 0;
                        if (iVar1 == 0) {
                            uVar7 = 0;
code_r0x08003eec:
                            if (iVar4 == iVar1) goto code_r0x08003dfc;
                        }
                        else {
                            do {
                                uVar7 = *(*(iVar6 + 0x70) + iVar4 * 4);
                                if (uVar9 <= uVar7) goto code_r0x08003eec;
                                iVar4 = iVar4 + 1;
                            } while (iVar1 != iVar4);
code_r0x08003dfc:
                            uVar7 = *(*(iVar6 + 0x70) + (iVar1 - 1) * 4);
                        }
                        auStack_98[uVar8 * 3] = uVar7;
                        uVar9 = 0;
                        if (uVar7 != *(unaff_x22 + 0x18)) {
                            uVar9 = uVar10;
                        }
                        unaff_w19 = uVar9 | unaff_w19;
                        goto code_r0x08003e2c;
                    }
                }
                uVar5 = 0xffffffea;
                goto code_r0x08003f84;
            }
code_r0x08003e2c:
            uVar8 = uVar8 + 1;
        } while (uVar8 != 4);
        if (unaff_w19 != 0) {
            unaff_x20 = *(unaff_x22 + 0x80);
            if (2 < (unaff_x20 + -0x8003638 >> 3 | unaff_x20 << 0x3d)) goto code_r0x08004004;
            goto code_r0x08003fe0;
        }
        uVar5 = 0;
    }
code_r0x08003f84:
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_68) {
        __stack_chk_fail(uVar5);
code_r0x08004004:
        __cfi_slowpath_diag(0xc531adf33f67dba5,unaff_x20,0x8001760);
code_r0x08003fe0:
        uVar5 = (*unaff_x20)(unaff_x22,auStack_98,unaff_w19);
    }
    return;
}


// ===== sym.qcom_dcvs_percpu_update @ 0x08004038 (size 688) =====

int sym.qcom_dcvs_percpu_update(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    int iVar7;
    int iVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar12;
    ulong *puVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    ulong uStack_78;
    uint32_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar8 = -0x16;
    iVar9 = tpidr_el1;
    uVar5 = *(cpu_number + iVar9);
    uStack_70 = 0;
    uStack_78 = 0;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
code_r0x0800428c:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_68) {
            return iVar8;
        }
        auVar19 = __stack_chk_fail();
        iVar9 = auVar19._0_8_;
        uVar6 = tpidr_el2;
        uVar6 = tpidr_el2;
        *extraout_x18 = 0x80042d4;
        iVar8 = -0x16;
        if ((iVar9 != 0) && (auVar19._8_4_ < 4)) {
            if (arg3 < 3) {
                if (*(_segment.ehdr + 0x88) == '\0') {
                    iVar8 = -0x205;
                }
                else if (((_segment.ehdr == 0) ||
                         (iVar11 = *(_segment.ehdr + (auVar19._8_8_ & 0xffffffff) * 8 + 0x60), iVar11 == 0)) ||
                        (iVar11 = *(iVar11 + (arg3 & 0xffffffffU) * 8 + 0x90), iVar11 == 0)) {
                    iVar8 = -0x13;
                }
                else {
                    mutex_lock(iVar11 + 0x48);
                    if ((arg3 == 1) && (*(iVar11 + 0x40) != 0)) {
code_r0x0800436c:
                        iVar8 = -0x16;
                    }
                    else {
                        piVar14 = iVar11 + 0x30;
                        for (piVar15 = *piVar14; piVar14 != piVar15; piVar15 = *piVar15) {
                            iVar8 = strcmp(piVar15[-3],iVar9);
                            if (iVar8 == 0) goto code_r0x0800436c;
                        }
                        iVar1 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar1 = 0x30;
                        }
                        piVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
                        if (piVar15 == NULL) {
                            iVar8 = -0xc;
                        }
                        else {
                            piVar16 = piVar15 + 3;
                            *piVar15 = iVar9;
                            puVar13 = *(iVar11 + 0x38);
                            uVar17 = __list_add_valid(piVar16,puVar13,piVar14);
                            if ((uVar17 & 1) != 0) {
                                *(iVar11 + 0x38) = piVar16;
                                piVar15[3] = piVar14;
                                piVar15[4] = puVar13;
                                *puVar13 = piVar16;
                            }
                            iVar8 = 0;
                            *(iVar11 + 0x40) = *(iVar11 + 0x40) + 1;
                        }
                    }
                    mutex_unlock(iVar11 + 0x48);
                }
            }
        }
        return iVar8;
    }
    uVar17 = 0;
    iVar8 = 0;
    uVar18 = arg3 & 0xffffffff;
    uVar6 = sp_el0;
code_r0x080040d4:
    if ((uVar18 >> (uVar17 & 0x3f) & 1) == 0) {
code_r0x080040c8:
        uVar17 = uVar17 + 1;
        if (uVar17 == 4) goto code_r0x0800428c;
        goto code_r0x080040d4;
    }
    if (_segment.ehdr != 0) {
        uVar2 = *(arg2 + uVar17 * 0xc + 8);
        if (3 < uVar2) {
    //WARNING: Does not return
            pcVar12 = SoftwareBreakpoint(0x5512,0x80042d0);
            (*pcVar12)();
        }
        iVar9 = *(_segment.ehdr + uVar2 * 8 + 0x60);
        if (((iVar9 != 0) && (iVar9 = *(iVar9 + 0xa0), iVar9 != 0)) &&
           ((puVar13 = *(iVar9 + 0x30) + -0x18, puVar13 != NULL && (iVar7 = strcmp(*puVar13,arg1), iVar7 == 0)))) {
            iVar11 = *(iVar9 + 0x10);
            uVar3 = *(arg2 + uVar17 * 0xc);
            if ((*(iVar9 + 8) == 0) && (uVar3 <= *(iVar11 + 0x88))) {
                uVar3 = *(iVar11 + 0x88);
            }
            iVar4 = *(iVar11 + 0x78);
            iVar7 = 0;
            if (iVar4 == 0) {
                uVar10 = 0;
code_r0x0800417c:
                if (iVar7 == iVar4) goto code_r0x08004184;
            }
            else {
                do {
                    uVar10 = *(*(iVar11 + 0x70) + iVar7 * 4);
                    if (uVar3 <= uVar10) goto code_r0x0800417c;
                    iVar7 = iVar7 + 1;
                } while (iVar4 != iVar7);
code_r0x08004184:
                uVar10 = *(*(iVar11 + 0x70) + (iVar4 - 1) * 4);
            }
            uStack_78 = CONCAT44(uStack_78._4_4_,uVar10);
            uStack_70 = uVar2;
            if (uVar10 == *(*(iVar9 + 0x28) + uVar5 * 4)) goto code_r0x080040c8;
            pcVar12 = *(iVar9 + 0x80);
            if (2 < (pcVar12 + -0x8003638 >> 3 | pcVar12 << 0x3d)) {
                __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar12,0x8001780);
            }
            arg3 = 1;
            iVar8 = (*pcVar12)(iVar9,&stack0xffffffffffffff88);
            if (iVar8 < 0) goto code_r0x0800428c;
            goto code_r0x080040c8;
        }
    }
    iVar8 = -0x16;
    goto code_r0x0800428c;
}


// ===== sym.qcom_dcvs_register_voter @ 0x080042e8 (size 364) =====

uint sym.qcom_dcvs_register_voter(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *puVar5;
    uint uVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = 0xffffffea;
    if (((arg1 != 0) && (arg2 < 4)) && (arg3 < 3)) {
        if (*(_segment.ehdr + 0x88) == '\0') {
            uVar6 = 0xfffffdfb;
        }
        else if (((_segment.ehdr == 0) || (iVar4 = *(_segment.ehdr + arg2 * 8 + 0x60), iVar4 == 0)) ||
                (iVar4 = *(iVar4 + arg3 * 8 + 0x90), iVar4 == 0)) {
            uVar6 = 0xffffffed;
        }
        else {
            mutex_lock(iVar4 + 0x48);
            if ((arg3 == 1) && (*(iVar4 + 0x40) != 0)) {
code_r0x0800436c:
                uVar6 = 0xffffffea;
            }
            else {
                piVar7 = iVar4 + 0x30;
                for (piVar8 = *piVar7; piVar7 != piVar8; piVar8 = *piVar8) {
                    iVar2 = strcmp(piVar8[-3],arg1);
                    if (iVar2 == 0) goto code_r0x0800436c;
                }
                iVar1 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar1 = 0x30;
                }
                piVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
                if (piVar8 == NULL) {
                    uVar6 = 0xfffffff4;
                }
                else {
                    piVar9 = piVar8 + 3;
                    *piVar8 = arg1;
                    puVar5 = *(iVar4 + 0x38);
                    uVar3 = __list_add_valid(piVar9,puVar5,piVar7);
                    if ((uVar3 & 1) != 0) {
                        *(iVar4 + 0x38) = piVar9;
                        piVar8[3] = piVar7;
                        piVar8[4] = puVar5;
                        *puVar5 = piVar9;
                    }
                    uVar6 = 0;
                    *(iVar4 + 0x40) = *(iVar4 + 0x40) + 1;
                }
            }
            mutex_unlock(iVar4 + 0x48);
        }
    }
    return uVar6;
}


// ===== sym.qcom_dcvs_unregister_voter @ 0x08004454 (size 276) =====

uint sym.qcom_dcvs_unregister_voter(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = 0xffffffea;
    if (((arg1 != 0) && (arg2 < 4)) && (arg3 < 3)) {
        if (((_segment.ehdr == 0) || (iVar5 = *(_segment.ehdr + arg2 * 8 + 0x60), iVar5 == 0)) ||
           (iVar5 = *(iVar5 + arg3 * 8 + 0x90), iVar5 == 0)) {
            uVar6 = 0xffffffed;
        }
        else {
            mutex_lock(iVar5 + 0x48);
            for (piVar7 = *(iVar5 + 0x30); iVar5 + 0x30 != piVar7; piVar7 = *piVar7) {
                iVar3 = strcmp(piVar7[-3],arg1);
                if (iVar3 == 0) {
                    *(iVar5 + 0x40) = *(iVar5 + 0x40) + -1;
                    uVar4 = __list_del_entry_valid(piVar7);
                    if ((uVar4 & 1) != 0) {
                        iVar1 = *piVar7;
                        piVar2 = piVar7[1];
                        *(iVar1 + 8) = piVar2;
                        *piVar2 = iVar1;
                    }
                    *piVar7 = -0x2152ffffffffff00;
                    piVar7[1] = -0x2152fffffffffede;
                    kfree(piVar7 + -3);
                    uVar6 = 0;
                    goto code_r0x08004540;
                }
            }
            uVar6 = 0xffffffea;
code_r0x08004540:
            mutex_unlock(iVar5 + 0x48);
        }
    }
    return uVar6;
}


// ===== sym.qcom_dcvs_kobject_get @ 0x08004568 (size 112) =====

int64_t sym.qcom_dcvs_kobject_get(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if (4 < arg1) {
        return -0x16;
    }
    if (*(_segment.ehdr + 0x88) != '\0') {
        iVar2 = _segment.ehdr;
        if (arg1 != 4) {
            iVar2 = *(_segment.ehdr + arg1 * 8 + 0x60);
            if (iVar2 == 0) {
                return -0x13;
            }
            iVar2 = iVar2 + 8;
        }
        iVar1 = -0x13;
        if ((*(iVar2 + 0x3c) & 1) != 0) {
            iVar1 = iVar2;
        }
        return iVar1;
    }
    return -0x205;
}


// ===== sym.qcom_dcvs_hw_minmax_get @ 0x080045d8 (size 104) =====

ulong sym.qcom_dcvs_hw_minmax_get(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (3 < arg1) {
        return 0xffffffea;
    }
    if (*(_segment.ehdr + 0x88) != '\0') {
        iVar1 = *(_segment.ehdr + arg1 * 8 + 0x60);
        if (iVar1 != 0) {
            *arg2 = *(iVar1 + 0x80);
            *arg3 = *(iVar1 + 0x84);
            return 0;
        }
        return 0xffffffed;
    }
    return 0xfffffdfb;
}


// ===== sym.qcom_dcvs_get_ddr_child_node @ 0x08004640 (size 260) =====

uint64_t sym.qcom_dcvs_get_ddr_child_node(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    char *pcVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar13;
    ulong uVar14;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    uint32_t uStack_cc;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int iStack_40;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iStack_40 = -1;
    iStack_3c = 0;
    iVar5 = of_find_node_opts_by_path("/memory",0);
    iVar13 = -2;
    if (iVar5 != 0) {
        iVar3 = of_property_read_variable_u32_array(iVar5,"ddr_device_type",&iStack_3c,1,0);
        iVar13 = -2;
        if (-1 < iVar3) {
            iVar13 = iStack_3c;
        }
    }
    uVar6 = of_get_next_child(arg1,0);
    while ((uVar6 != 0 &&
           ((iVar3 = of_property_read_variable_u32_array(uVar6,"qcom,ddr-type",&iStack_40,1,0), iVar3 < 0 ||
            (iStack_40 != iVar13))))) {
        uVar6 = of_get_next_child(arg1,uVar6);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_dcvs_probe;
    pcStack_88 = sym.qcom_dcvs_probe;
    iVar9 = sp_el0;
    iVar5 = iVar7 + 0x10;
    iStack_98 = *(iVar9 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffd0;
    piVar8 = of_device_get_match_data(iVar5);
    if (piVar8 == NULL) {
        iVar13 = 3;
code_r0x08004ab4:
        _dev_err(iVar5,"Invalid qcom-dcvs type: %u\n",iVar13);
        uVar6 = 0xffffffea;
    }
    else {
        iVar13 = *piVar8;
        if (iVar13 == 2) {
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            iVar9 = *(*(iVar7 + 0x70) + 0x98);
            uStack_cc = 3;
            uStack_c8 = 0;
            uStack_c0 = 0;
            if (iVar9 == 0) {
                _dev_err(iVar5,"QCOM DCVS HW not configured\n");
                uVar6 = 0xffffffed;
            }
            else {
                uVar4 = of_property_read_variable_u32_array(*(iVar7 + 0x300),"qcom,dcvs-path-type",&uStack_cc,1,0);
                if ((uVar4 < 0) || (2 < uStack_cc)) {
                    _dev_err(iVar5,"Invalid path type:%d, ret:%d\n",uStack_cc,uVar4 & uVar4 >> 0x1f);
                    uVar6 = 0xffffffed;
                }
                else {
                    piVar10 = devm_kmalloc(iVar5,0x88,0xdc0);
                    if (piVar10 == NULL) {
code_r0x08004b20:
                        uVar6 = 0xfffffff4;
                    }
                    else {
                        *piVar10 = iVar5;
                        piVar10[2] = iVar9;
                        *(piVar10 + 1) = uStack_cc;
                        if (uStack_cc == 2) {
                            if (*(iVar9 + 0x68) != 2) {
                                pcVar12 = "Unsupported HW for path: %d\n";
code_r0x08004fdc:
                                _dev_err(iVar5,pcVar12,0);
                                uVar6 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            _trace_event_raw_init = piVar10;
                            uVar6 = __sw_hweight64();
                            iVar7 = devm_kmalloc(iVar5,(uVar6 & 0xffffffff) << 2,0xdc0);
                            piVar10[5] = iVar7;
                            if (iVar7 == 0) goto code_r0x08004b20;
                            uVar4 = sym.setup_epss_l3_device(iVar5,noname_1_00,piVar10,0);
                            uVar6 = uVar4;
                            if (-1 < uVar4) goto code_r0x08004c84;
                            pcVar12 = "Error setting up percpu dev: %d\n";
code_r0x08004c6c:
                            _dev_err(iVar5,pcVar12,uVar6);
                            iVar13 = uVar6;
                        }
                        else {
                            if (uStack_cc == 1) {
                                if (1 < *(iVar9 + 0x68)) {
                                    pcVar12 = "Unsupported HW for dcvs fp: %d\n";
                                    goto code_r0x08004fdc;
                                }
                                uVar4 = setup_ddrllcc_fp_device(iVar5,iVar9,piVar10);
                                uVar6 = uVar4;
                                if (uVar4 < 0) {
                                    pcVar12 = "Error setting up fp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
                            else {
                                if (uStack_cc != 0) {
                                    uVar6 = 0xffffffea;
                                    goto code_r0x08004f78;
                                }
                                uVar4 = *(iVar9 + 0x68);
                                if (uVar4 < 2) {
code_r0x080048f8:
                                    uVar4 = sym.setup_icc_sp_device(iVar5,iVar9,piVar10);
                                }
                                else {
                                    if (uVar4 != 2) {
                                        if (uVar4 != 3) {
                                            uVar6 = 0;
                                            goto code_r0x08004c84;
                                        }
                                        goto code_r0x080048f8;
                                    }
                                    uVar4 = sym.setup_epss_l3_device(iVar5,noname_1,piVar10,1);
                                }
                                uVar6 = uVar4;
                                if (uVar4 < 0) {
                                    pcVar12 = "Error setting up sp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
code_r0x08004c84:
                            piVar10[6] = piVar10 + 6;
                            piVar10[7] = piVar10 + 6;
                            __mutex_init(piVar10 + 9,"&path->voter_lock",
                                         reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt);
                            if (piVar10[1] == 0) {
                                *(iVar9 + 0x88) = *(iVar9 + 0x84);
                                if (3 < *(iVar9 + 0x68)) goto code_r0x08005010;
                                *(&uStack_c8 + *(iVar9 + 0x68) * 0xc) = *(iVar9 + 0x84);
                                if (3 < *(iVar9 + 0x68)) goto code_r0x08005010;
                                *(&uStack_c8 + *(iVar9 + 0x68) * 0xc + 4) = 0;
                                uVar4 = *(iVar9 + 0x68);
                                if (3 < uVar4) goto code_r0x08005010;
                                pcVar2 = piVar10[0x10];
                                *(&uStack_c0 + uVar4 * 0xc) = uVar4;
                                if (2 < (pcVar2 + -0x8003638 >> 3 | pcVar2 << 0x3d)) {
                                    __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar2,0x8001800);
                                }
                                if (4 < *(iVar9 + 0x68)) goto code_r0x08005010;
                                uVar4 = (*pcVar2)(piVar10,&uStack_c8 + *(iVar9 + 0x68) * 0xc,1);
                                uVar6 = uVar4;
                                if (uVar4 < 0) {
                                    _dev_err(iVar5,"Err committing freq for path=%d\n",uVar6);
                                }
                            }
                            if (2 < uStack_cc) goto code_r0x08005010;
                            *(iVar9 + uStack_cc * 8 + 0x90) = piVar10;
                            piVar10 = _segment.ehdr;
                            *(iVar9 + 0xac) = *(iVar9 + 0xac) + 1;
                            if ((((*(piVar10 + 0x10) <= *(piVar10 + 0x84)) &&
                                 ((iVar9 = piVar10[0xc], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))))) &&
                                ((iVar9 = piVar10[0xd], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))))) &&
                               (((iVar9 = piVar10[0xe], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))) &&
                                ((iVar9 = piVar10[0xf], iVar9 == 0 || (*(iVar9 + 0xa8) <= *(iVar9 + 0xac))))))) {
                                *(piVar10 + 0x11) = 1;
                            }
code_r0x08004ed0:
                            iVar13 = uVar6;
                        }
                        if (-1 < iVar13) {
code_r0x08004f54:
                            uVar6 = 0;
                            goto code_r0x08004f8c;
                        }
                    }
                }
            }
        }
        else {
            if (iVar13 == 1) {
                uStack_cc = 4;
                if (_segment.ehdr == NULL) {
                    pcVar12 = "Missing QCOM DCVS dev data\n";
                    goto code_r0x08004c3c;
                }
                uVar4 = of_property_read_variable_u32_array(*(iVar7 + 0x300),"qcom,dcvs-hw-type",&uStack_cc,1,0);
                if ((uVar4 < 0) || (3 < uStack_cc)) {
                    _dev_err(iVar5,"Invalid dcvs hw type:%d, ret:%d\n",uStack_cc,uVar4 & uVar4 >> 0x1f);
                    uVar6 = 0xffffffed;
                    goto code_r0x08004f78;
                }
                piVar10 = devm_kmalloc(iVar5,0xb0,0xdc0);
                if (piVar10 == NULL) goto code_r0x08004b70;
                uVar14 = *(iVar7 + 0x300);
                *piVar10 = iVar5;
                *(piVar10 + 0xd) = uStack_cc;
                iVar9 = of_get_next_available_child(uVar14,0);
                if (iVar9 == 0) {
                    *(piVar10 + 0x15) = 0;
                }
                else {
                    iVar13 = 0;
                    do {
                        iVar9 = of_get_next_available_child(uVar14,iVar9);
                        iVar13 = iVar13 + -1;
                    } while (iVar9 != 0);
                    *(piVar10 + 0x15) = -iVar13;
                    if (iVar13 != 0) {
                        if (uStack_cc == 2) {
                            uVar6 = sym.populate_l3_table(iVar5,piVar10 + 0xe);
                            uVar6 = uVar6 & 0xffffffff;
                        }
                        else {
                            arg1_00 = *(iVar7 + 0x300);
                            uStack_c8 = uStack_c8 & 0xffffffff00000000;
                            iVar9 = of_parse_phandle(arg1_00,"qcom,freq-tbl",0);
                            if (iVar9 != 0) {
                                arg1_00 = of_parse_phandle(arg1_00,"qcom,freq-tbl",0);
                            }
                            iVar9 = of_get_next_child(arg1_00,0);
                            if (iVar9 != 0) {
                                iVar13 = 0;
                                do {
                                    iVar9 = of_get_next_child(arg1_00,iVar9);
                                    iVar13 = iVar13 + -1;
                                } while (iVar9 != 0);
                                if (iVar13 != 0) {
                                    arg1_00 = sym.qcom_dcvs_get_ddr_child_node(arg1_00);
                                }
                            }
                            iVar9 = of_find_property(arg1_00,"qcom,freq-tbl",&uStack_c8);
                            if (iVar9 == 0) {
                                pcVar12 = "Unable to find freq tbl prop\n";
                            }
                            else {
                                uVar1 = uStack_c8;
                                uVar4 = uStack_c8 >> 2;
                                uStack_c8 = CONCAT44(uStack_c8._4_4_,uVar4);
                                if (3 < uVar1) {
                                    iVar9 = devm_kmalloc(iVar5,-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2,
                                                         0xdc0);
                                    piVar10[0xe] = iVar9;
                                    if (iVar9 == 0) {
                                        uVar6 = 0xfffffff4;
                                    }
                                    else {
                                        uVar4 = of_property_read_variable_u32_array
                                                          (arg1_00,"qcom,freq-tbl",iVar9,uStack_c8,0);
                                        if (uVar4 < 0) {
                                            uVar6 = uVar4;
                                            _dev_err(iVar5,"Error reading freq table from DT: %d\n",uVar6);
                                        }
                                        else {
                                            uVar6 = uStack_c8 & 0xffffffff;
                                        }
                                    }
                                    goto code_r0x08004e1c;
                                }
                                pcVar12 = "Error: empty freq table\n";
                            }
                            _dev_err(iVar5,pcVar12);
                            uVar6 = 0xffffffea;
                        }
code_r0x08004e1c:
                        uVar4 = uVar6;
                        if (uVar4 < 1) {
                            _dev_err(iVar5,"Error reading freq table: %d\n",uVar6);
                        }
                        else {
                            *(piVar10 + 0xf) = uVar4;
                            uVar14 = *(iVar7 + 0x300);
                            *(piVar10 + 0x84) = piVar10[0xe][uVar4 - 1];
                            *(piVar10 + 0x10) = *piVar10[0xe];
                            uVar4 = of_property_read_variable_u32_array(uVar14,"qcom,bus-width",piVar10 + 0x7c,1,0);
                            if ((uVar4 < 0) || (*(piVar10 + 0x7c) == 0)) {
                                _dev_err(iVar5,"Missing or invalid bus-width: %d\n",uVar4 & uVar4 >> 0x1f);
                                uVar6 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            if (3 < uStack_cc) goto code_r0x08005010;
                            piVar11 = piVar10 + 1;
                            uVar4 = kobject_init_and_add
                                              (piVar11,obj.dcvs_hw_ktype,_segment.ehdr,
                                               *(obj.dcvs_hw_names + uStack_cc * 8));
                            uVar6 = uVar4;
                            if (uVar4 < 0) {
                                _dev_err(iVar5,"failed to init dcvs hw kobj: %d\n",uVar6);
                                goto code_r0x08004f74;
                            }
                            *(iVar7 + 0xa8) = piVar10;
                            piVar11 = _segment.ehdr;
                            if (3 < uStack_cc) goto code_r0x08005010;
                            _segment.ehdr[uStack_cc + 0xc] = piVar10;
                            *(piVar11 + 0x84) = *(piVar11 + 0x84) + 1;
                        }
                        if (uVar4 == 0) {
                            uVar14 = *(iVar7 + 0x300);
                            iVar9 = of_get_next_available_child(uVar14,0);
                            if (iVar9 != 0) {
                                iVar13 = 0;
                                do {
                                    iVar9 = of_get_next_available_child(uVar14,iVar9);
                                    iVar13 = iVar13 + -1;
                                } while (iVar9 != 0);
                                goto code_r0x08004f3c;
                            }
                            goto code_r0x08004f54;
                        }
                        goto code_r0x08004ed0;
                    }
                }
                pcVar12 = "No dcvs paths provided!\n";
            }
            else {
                if (iVar13 != 0) goto code_r0x08004ab4;
                if (_segment.ehdr != NULL) {
                    pcVar12 = "Only one qcom-dcvs device allowed\n";
                    goto code_r0x08004c3c;
                }
                _segment.ehdr = devm_kmalloc(iVar5,0x90,0xdc0);
                if (_segment.ehdr == NULL) {
code_r0x08004b70:
                    uVar6 = 0xfffffff4;
                    goto code_r0x08004f78;
                }
                uVar14 = *(iVar7 + 0x300);
                iVar9 = of_get_next_available_child(uVar14,0);
                if (iVar9 == 0) {
                    pcVar12 = "No dcvs hw nodes provided!\n";
                    *(_segment.ehdr + 0x10) = 0;
                }
                else {
                    iVar13 = 0;
                    do {
                        iVar9 = of_get_next_available_child(uVar14,iVar9);
                        piVar10 = _segment.ehdr;
                        iVar13 = iVar13 + -1;
                    } while (iVar9 != 0);
                    *(_segment.ehdr + 0x10) = -iVar13;
                    if (iVar13 != 0) {
                        uVar4 = kobject_init_and_add(piVar10,obj.qcom_dcvs_ktype,_trace_event_raw_init,"bus_dcvs");
                        if (uVar4 < 0) {
                            uVar6 = uVar4;
                            _dev_err(iVar5,"failed to init qcom-dcvs kobj: %d\n",uVar6);
                            piVar11 = _segment.ehdr;
code_r0x08004f74:
                            kobject_put(piVar11);
                            goto code_r0x08004f78;
                        }
                        uVar14 = *(iVar7 + 0x300);
                        iVar9 = of_get_next_available_child(uVar14,0);
                        if (iVar9 != 0) {
                            iVar13 = 0;
                            do {
                                iVar9 = of_get_next_available_child(uVar14,iVar9);
                                iVar13 = iVar13 + -1;
                            } while (iVar9 != 0);
code_r0x08004f3c:
                            if (iVar13 != 0) {
                                of_platform_populate(*(iVar7 + 0x300),0,0,iVar5);
                            }
                        }
                        goto code_r0x08004f54;
                    }
                    pcVar12 = "No dcvs hw nodes provided!\n";
                }
            }
code_r0x08004c3c:
            _dev_err(iVar5,pcVar12);
            uVar6 = 0xffffffed;
        }
code_r0x08004f78:
        _dev_err(iVar5,"Failed to probe qcom-dcvs device: %d\n",uVar6);
    }
code_r0x08004f8c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_98) {
        return uVar6;
    }
    __stack_chk_fail();
code_r0x08005010:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8005014);
    (*pcVar2)();
}


// ===== sym.qcom_dcvs_probe @ 0x08004744 (size 2292) =====

uint64_t sym.qcom_dcvs_probe(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    char *pcVar11;
    ulong *in_x18;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    uint32_t uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar1 = arg1 + 0x10;
    iStack_58 = *(iVar7 + 0x5e0);
    piVar6 = of_device_get_match_data(iVar1);
    if (piVar6 == NULL) {
        iVar5 = 3;
code_r0x08004ab4:
        _dev_err(iVar1,"Invalid qcom-dcvs type: %u\n",iVar5);
        uVar13 = 0xffffffea;
    }
    else {
        iVar5 = *piVar6;
        if (iVar5 == 2) {
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_78 = 0;
            uStack_70 = 0;
            iVar7 = *(*(arg1 + 0x70) + 0x98);
            uStack_8c = 3;
            uStack_88 = 0;
            uStack_80 = 0;
            if (iVar7 == 0) {
                _dev_err(iVar1,"QCOM DCVS HW not configured\n");
                uVar13 = 0xffffffed;
            }
            else {
                uVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,dcvs-path-type",&uStack_8c,1,0);
                if ((uVar4 < 0) || (2 < uStack_8c)) {
                    _dev_err(iVar1,"Invalid path type:%d, ret:%d\n",uStack_8c,uVar4 & uVar4 >> 0x1f);
                    uVar13 = 0xffffffed;
                }
                else {
                    piVar8 = devm_kmalloc(iVar1,0x88,0xdc0);
                    if (piVar8 == NULL) {
code_r0x08004b20:
                        uVar13 = 0xfffffff4;
                    }
                    else {
                        *piVar8 = iVar1;
                        piVar8[2] = iVar7;
                        *(piVar8 + 1) = uStack_8c;
                        if (uStack_8c == 2) {
                            if (*(iVar7 + 0x68) != 2) {
                                pcVar11 = "Unsupported HW for path: %d\n";
code_r0x08004fdc:
                                _dev_err(iVar1,pcVar11,0);
                                uVar13 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            _trace_event_raw_init = piVar8;
                            uVar13 = __sw_hweight64();
                            iVar14 = devm_kmalloc(iVar1,(uVar13 & 0xffffffff) << 2,0xdc0);
                            piVar8[5] = iVar14;
                            if (iVar14 == 0) goto code_r0x08004b20;
                            uVar9 = sym.setup_epss_l3_device(iVar1,noname_1_00,piVar8,0);
                            uVar13 = uVar9 & 0xffffffff;
                            if (-1 < uVar9) goto code_r0x08004c84;
                            pcVar11 = "Error setting up percpu dev: %d\n";
code_r0x08004c6c:
                            _dev_err(iVar1,pcVar11,uVar13);
                            iVar5 = uVar13;
                        }
                        else {
                            if (uStack_8c == 1) {
                                if (1 < *(iVar7 + 0x68)) {
                                    pcVar11 = "Unsupported HW for dcvs fp: %d\n";
                                    goto code_r0x08004fdc;
                                }
                                uVar9 = setup_ddrllcc_fp_device(iVar1,iVar7,piVar8);
                                uVar13 = uVar9 & 0xffffffff;
                                if (uVar9 < 0) {
                                    pcVar11 = "Error setting up fp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
                            else {
                                if (uStack_8c != 0) {
                                    uVar13 = 0xffffffea;
                                    goto code_r0x08004f78;
                                }
                                uVar4 = *(iVar7 + 0x68);
                                if (uVar4 < 2) {
code_r0x080048f8:
                                    uVar9 = sym.setup_icc_sp_device(iVar1,iVar7,piVar8);
                                }
                                else {
                                    if (uVar4 != 2) {
                                        if (uVar4 != 3) {
                                            uVar13 = 0;
                                            goto code_r0x08004c84;
                                        }
                                        goto code_r0x080048f8;
                                    }
                                    uVar9 = sym.setup_epss_l3_device(iVar1,noname_1,piVar8,1);
                                }
                                uVar13 = uVar9 & 0xffffffff;
                                if (uVar9 < 0) {
                                    pcVar11 = "Error setting up sp dev: %d\n";
                                    goto code_r0x08004c6c;
                                }
                            }
code_r0x08004c84:
                            piVar8[6] = piVar8 + 6;
                            piVar8[7] = piVar8 + 6;
                            __mutex_init(piVar8 + 9,"&path->voter_lock",
                                         reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt);
                            if (piVar8[1] == 0) {
                                *(iVar7 + 0x88) = *(iVar7 + 0x84);
                                if (3 < *(iVar7 + 0x68)) goto code_r0x08005010;
                                *(&uStack_88 + *(iVar7 + 0x68) * 0xc) = *(iVar7 + 0x84);
                                if (3 < *(iVar7 + 0x68)) goto code_r0x08005010;
                                *(&uStack_88 + *(iVar7 + 0x68) * 0xc + 4) = 0;
                                uVar4 = *(iVar7 + 0x68);
                                if (3 < uVar4) goto code_r0x08005010;
                                pcVar3 = piVar8[0x10];
                                *(&uStack_80 + uVar4 * 0xc) = uVar4;
                                if (2 < (pcVar3 + -0x8003638 >> 3 | pcVar3 << 0x3d)) {
                                    __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar3,0x8001800);
                                }
                                if (4 < *(iVar7 + 0x68)) goto code_r0x08005010;
                                uVar9 = (*pcVar3)(piVar8,&uStack_88 + *(iVar7 + 0x68) * 0xc,1);
                                uVar13 = uVar9 & 0xffffffff;
                                if (uVar9 < 0) {
                                    _dev_err(iVar1,"Err committing freq for path=%d\n",uVar13);
                                }
                            }
                            if (2 < uStack_8c) goto code_r0x08005010;
                            *(iVar7 + uStack_8c * 8 + 0x90) = piVar8;
                            piVar8 = _segment.ehdr;
                            *(iVar7 + 0xac) = *(iVar7 + 0xac) + 1;
                            if ((((*(piVar8 + 0x10) <= *(piVar8 + 0x84)) &&
                                 ((iVar7 = piVar8[0xc], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))))) &&
                                ((iVar7 = piVar8[0xd], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))))) &&
                               (((iVar7 = piVar8[0xe], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))) &&
                                ((iVar7 = piVar8[0xf], iVar7 == 0 || (*(iVar7 + 0xa8) <= *(iVar7 + 0xac))))))) {
                                *(piVar8 + 0x11) = 1;
                            }
code_r0x08004ed0:
                            iVar5 = uVar13;
                        }
                        if (-1 < iVar5) {
code_r0x08004f54:
                            uVar13 = 0;
                            goto code_r0x08004f8c;
                        }
                    }
                }
            }
        }
        else {
            if (iVar5 == 1) {
                uStack_8c = 4;
                if (_segment.ehdr == NULL) {
                    pcVar11 = "Missing QCOM DCVS dev data\n";
                    goto code_r0x08004c3c;
                }
                uVar4 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,dcvs-hw-type",&uStack_8c,1,0);
                if ((uVar4 < 0) || (3 < uStack_8c)) {
                    _dev_err(iVar1,"Invalid dcvs hw type:%d, ret:%d\n",uStack_8c,uVar4 & uVar4 >> 0x1f);
                    uVar13 = 0xffffffed;
                    goto code_r0x08004f78;
                }
                piVar8 = devm_kmalloc(iVar1,0xb0,0xdc0);
                if (piVar8 == NULL) goto code_r0x08004b70;
                uVar12 = *(arg1 + 0x300);
                *piVar8 = iVar1;
                *(piVar8 + 0xd) = uStack_8c;
                iVar7 = of_get_next_available_child(uVar12,0);
                if (iVar7 == 0) {
                    *(piVar8 + 0x15) = 0;
                }
                else {
                    iVar5 = 0;
                    do {
                        iVar7 = of_get_next_available_child(uVar12,iVar7);
                        iVar5 = iVar5 + -1;
                    } while (iVar7 != 0);
                    *(piVar8 + 0x15) = -iVar5;
                    if (iVar5 != 0) {
                        if (uStack_8c == 2) {
                            uVar13 = sym.populate_l3_table(iVar1,piVar8 + 0xe);
                            uVar13 = uVar13 & 0xffffffff;
                        }
                        else {
                            iVar14 = *(arg1 + 0x300);
                            uStack_88 = uStack_88 & 0xffffffff00000000;
                            iVar7 = of_parse_phandle(iVar14,"qcom,freq-tbl",0);
                            if (iVar7 != 0) {
                                iVar14 = of_parse_phandle(iVar14,"qcom,freq-tbl",0);
                            }
                            iVar7 = of_get_next_child(iVar14,0);
                            if (iVar7 != 0) {
                                iVar5 = 0;
                                do {
                                    iVar7 = of_get_next_child(iVar14,iVar7);
                                    iVar5 = iVar5 + -1;
                                } while (iVar7 != 0);
                                if (iVar5 != 0) {
                                    iVar14 = sym.qcom_dcvs_get_ddr_child_node(iVar14);
                                }
                            }
                            iVar7 = of_find_property(iVar14,"qcom,freq-tbl",&uStack_88);
                            if (iVar7 == 0) {
                                pcVar11 = "Unable to find freq tbl prop\n";
                            }
                            else {
                                uVar2 = uStack_88;
                                uVar4 = uStack_88 >> 2;
                                uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
                                if (3 < uVar2) {
                                    iVar7 = devm_kmalloc(iVar1,-(uVar4 >> 0x1f) & 0xfffffffc00000000 | uVar4 << 2,
                                                         0xdc0);
                                    piVar8[0xe] = iVar7;
                                    if (iVar7 == 0) {
                                        uVar13 = 0xfffffff4;
                                    }
                                    else {
                                        uVar4 = of_property_read_variable_u32_array
                                                          (iVar14,"qcom,freq-tbl",iVar7,uStack_88,0);
                                        if (uVar4 < 0) {
                                            uVar13 = uVar4;
                                            _dev_err(iVar1,"Error reading freq table from DT: %d\n",uVar13);
                                        }
                                        else {
                                            uVar13 = uStack_88 & 0xffffffff;
                                        }
                                    }
                                    goto code_r0x08004e1c;
                                }
                                pcVar11 = "Error: empty freq table\n";
                            }
                            _dev_err(iVar1,pcVar11);
                            uVar13 = 0xffffffea;
                        }
code_r0x08004e1c:
                        iVar5 = uVar13;
                        if (iVar5 < 1) {
                            _dev_err(iVar1,"Error reading freq table: %d\n",uVar13);
                        }
                        else {
                            *(piVar8 + 0xf) = iVar5;
                            uVar12 = *(arg1 + 0x300);
                            *(piVar8 + 0x84) = piVar8[0xe][iVar5 - 1];
                            *(piVar8 + 0x10) = *piVar8[0xe];
                            uVar4 = of_property_read_variable_u32_array(uVar12,"qcom,bus-width",piVar8 + 0x7c,1,0);
                            if ((uVar4 < 0) || (*(piVar8 + 0x7c) == 0)) {
                                _dev_err(iVar1,"Missing or invalid bus-width: %d\n",uVar4 & uVar4 >> 0x1f);
                                uVar13 = 0xffffffea;
                                goto code_r0x08004f78;
                            }
                            if (3 < uStack_8c) goto code_r0x08005010;
                            piVar10 = piVar8 + 1;
                            uVar9 = kobject_init_and_add
                                              (piVar10,obj.dcvs_hw_ktype,_segment.ehdr,
                                               *(obj.dcvs_hw_names + uStack_8c * 8));
                            uVar13 = uVar9 & 0xffffffff;
                            iVar5 = uVar9;
                            if (iVar5 < 0) {
                                _dev_err(iVar1,"failed to init dcvs hw kobj: %d\n",uVar13);
                                goto code_r0x08004f74;
                            }
                            *(arg1 + 0xa8) = piVar8;
                            piVar10 = _segment.ehdr;
                            if (3 < uStack_8c) goto code_r0x08005010;
                            _segment.ehdr[uStack_8c + 0xc] = piVar8;
                            *(piVar10 + 0x84) = *(piVar10 + 0x84) + 1;
                        }
                        if (iVar5 == 0) {
                            uVar12 = *(arg1 + 0x300);
                            iVar7 = of_get_next_available_child(uVar12,0);
                            if (iVar7 != 0) {
                                iVar5 = 0;
                                do {
                                    iVar7 = of_get_next_available_child(uVar12,iVar7);
                                    iVar5 = iVar5 + -1;
                                } while (iVar7 != 0);
                                goto code_r0x08004f3c;
                            }
                            goto code_r0x08004f54;
                        }
                        goto code_r0x08004ed0;
                    }
                }
                pcVar11 = "No dcvs paths provided!\n";
            }
            else {
                if (iVar5 != 0) goto code_r0x08004ab4;
                if (_segment.ehdr != NULL) {
                    pcVar11 = "Only one qcom-dcvs device allowed\n";
                    goto code_r0x08004c3c;
                }
                _segment.ehdr = devm_kmalloc(iVar1,0x90,0xdc0);
                if (_segment.ehdr == NULL) {
code_r0x08004b70:
                    uVar13 = 0xfffffff4;
                    goto code_r0x08004f78;
                }
                uVar12 = *(arg1 + 0x300);
                iVar7 = of_get_next_available_child(uVar12,0);
                if (iVar7 == 0) {
                    pcVar11 = "No dcvs hw nodes provided!\n";
                    *(_segment.ehdr + 0x10) = 0;
                }
                else {
                    iVar5 = 0;
                    do {
                        iVar7 = of_get_next_available_child(uVar12,iVar7);
                        piVar8 = _segment.ehdr;
                        iVar5 = iVar5 + -1;
                    } while (iVar7 != 0);
                    *(_segment.ehdr + 0x10) = -iVar5;
                    if (iVar5 != 0) {
                        uVar4 = kobject_init_and_add(piVar8,obj.qcom_dcvs_ktype,_trace_event_raw_init,"bus_dcvs");
                        if (uVar4 < 0) {
                            uVar13 = uVar4;
                            _dev_err(iVar1,"failed to init qcom-dcvs kobj: %d\n",uVar13);
                            piVar10 = _segment.ehdr;
code_r0x08004f74:
                            kobject_put(piVar10);
                            goto code_r0x08004f78;
                        }
                        uVar12 = *(arg1 + 0x300);
                        iVar7 = of_get_next_available_child(uVar12,0);
                        if (iVar7 != 0) {
                            iVar5 = 0;
                            do {
                                iVar7 = of_get_next_available_child(uVar12,iVar7);
                                iVar5 = iVar5 + -1;
                            } while (iVar7 != 0);
code_r0x08004f3c:
                            if (iVar5 != 0) {
                                of_platform_populate(*(arg1 + 0x300),0,0,iVar1);
                            }
                        }
                        goto code_r0x08004f54;
                    }
                    pcVar11 = "No dcvs hw nodes provided!\n";
                }
            }
code_r0x08004c3c:
            _dev_err(iVar1,pcVar11);
            uVar13 = 0xffffffed;
        }
code_r0x08004f78:
        _dev_err(iVar1,"Failed to probe qcom-dcvs device: %d\n",uVar13);
    }
code_r0x08004f8c:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar13;
    }
    __stack_chk_fail();
code_r0x08005010:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8005014);
    (*pcVar3)();
}


// ===== sym.attr_show @ 0x08005038 (size 148) =====

ulong sym.attr_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (5 < (pcVar2 + -0x8003708 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80017a0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x080050cc (size 148) =====

ulong sym.attr_store(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (1 < (pcVar2 + -0x80035a0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x80017c0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.show_hw_min_freq @ 0x08005160 (size 64) =====

int64_t sym.show_hw_min_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001ab1,*(arg1 + 0x78));
    return iVar1;
}


// ===== sym.show_hw_max_freq @ 0x080051a0 (size 64) =====

int64_t sym.show_hw_max_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001ab1,*(arg1 + 0x7c));
    return iVar1;
}


// ===== sym.show_boost_freq @ 0x080051e0 (size 64) =====

int64_t sym.show_boost_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8001ab1,*(arg1 + 0x80));
    return iVar1;
}


// ===== sym.store_boost_freq @ 0x08005220 (size 540) =====

int64_t sym.store_boost_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    int iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    code *extraout_x8;
    int64_t *piVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int iVar10;
    ulong *in_x18;
    int64_t unaff_x21;
    int64_t unaff_x22;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint32_t uStack_48;
    int iStack_44;
    uint uStack_40;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_3c = 0;
    auVar11 = kstrtouint(arg2,10,&uStack_3c);
    if (auVar11._0_4_ < 0) {
        arg3 = auVar11._0_4_;
        goto code_r0x080053c4;
    }
    if (*(arg1 + 0x7c) < uStack_3c) {
        arg3 = -0x16;
        goto code_r0x080053c4;
    }
    unaff_x21 = *(arg1 + 0x88);
    if (unaff_x21 == 0) {
        arg3 = -1;
        goto code_r0x080053c4;
    }
    unaff_x22 = unaff_x21 + 0x48;
    if (uStack_3c <= *(arg1 + 0x78)) {
        uStack_3c = *(arg1 + 0x78);
    }
    *(arg1 + 0x80) = uStack_3c;
    mutex_lock(unaff_x22);
    uStack_40 = *(arg1 + 0x60);
    piVar7 = unaff_x21 + 0x30;
    piVar8 = *piVar7;
    iStack_44 = 0;
    if (piVar7 == piVar8) {
        uVar5 = 0;
    }
    else {
        iStack_44 = 0;
        uVar4 = 0;
        do {
            iStack_44 = *(piVar8 + -0xc) + iStack_44;
            puVar1 = piVar8 + -2;
            piVar8 = *piVar8;
            uVar5 = *puVar1;
            if (*puVar1 <= uVar4) {
                uVar5 = uVar4;
            }
            uVar4 = uVar5;
        } while (piVar7 != piVar8);
    }
    iVar9 = *(unaff_x21 + 0x10);
    iVar2 = *(iVar9 + 0x78);
    if (*(unaff_x21 + 8) == 0) {
        if (uVar5 <= *(iVar9 + 0x88)) {
            uVar5 = *(iVar9 + 0x88);
        }
        iVar10 = 0;
        if (iVar2 != 0) goto code_r0x08005324;
code_r0x08005354:
        iVar10 = 0;
        uStack_48 = 0;
code_r0x08005358:
        if (iVar10 != iVar2) goto code_r0x08005368;
    }
    else {
        iVar10 = 0;
        if (iVar2 == 0) goto code_r0x08005354;
code_r0x08005324:
        do {
            uStack_48 = *(*(iVar9 + 0x70) + iVar10 * 4);
            if (uVar5 <= uStack_48) goto code_r0x08005358;
            iVar10 = iVar10 + 1;
        } while (iVar2 != iVar10);
    }
    uStack_48 = *(*(iVar9 + 0x70) + (iVar2 - 1) * 4);
code_r0x08005368:
    if (uStack_48 == *(unaff_x21 + 0x18)) goto code_r0x080053a8;
    pcVar6 = *(unaff_x21 + 0x80);
    if (2 < (pcVar6 + -0x8003638 >> 3 | pcVar6 << 0x3d)) goto code_r0x08005410;
    while( true ) {
        iVar2 = (*pcVar6)(unaff_x21,&uStack_48,1);
        if (iVar2 < 0) {
            _printk(0x8001f84,iVar2);
        }
code_r0x080053a8:
        uVar3 = mutex_unlock(unaff_x22);
        auVar11._8_4_ = *(arg1 + 0x60);
        auVar11._0_8_ = uVar3;
        auVar11._12_4_ = 0;
code_r0x080053c4:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_38) break;
        __stack_chk_fail(auVar11._0_8_,auVar11._8_8_);
        pcVar6 = extraout_x8;
code_r0x08005410:
        __cfi_slowpath_diag(0xc531adf33f67dba5,pcVar6,0x80017e0);
    }
    return arg3;
}


// ===== sym.show_cur_freq @ 0x080054b8 (size 412) =====

int64_t sym.show_cur_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong unaff_x23;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x88);
    uVar6 = unaff_x23;
    _trace_event_raw_init = unaff_x23;
    if (iVar5 == 0) {
code_r0x08005540:
        uVar4 = 0;
        iVar5 = *(arg1 + 0x90);
    }
    else {
        if (*(iVar5 + 8) == 2) {
            uVar3 = cpumask_next(0xffffffff,__cpu_possible_mask);
            noname_1 = extraout_q0;
            if (uVar6 <= uVar3) goto code_r0x08005540;
            iVar5 = *(iVar5 + 0x28);
            uVar4 = 0;
            do {
                uVar1 = *(iVar5 + uVar3 * 4);
                if (uVar4 <= uVar1) {
                    uVar4 = uVar1;
                }
                uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
                noname_1 = extraout_q0_00;
            } while (uVar3 < uVar6);
        }
        else {
            uVar4 = *(iVar5 + 0x18);
        }
        iVar5 = *(arg1 + 0x90);
    }
    if (iVar5 != 0) {
        if (*(iVar5 + 8) == 2) {
            uVar3 = cpumask_next(noname_1,0xffffffff,__cpu_possible_mask);
            noname_1 = extraout_q0_01;
            if (uVar3 < uVar6) {
                iVar5 = *(iVar5 + 0x28);
                do {
                    uVar1 = *(iVar5 + uVar3 * 4);
                    if (uVar4 <= uVar1) {
                        uVar4 = uVar1;
                    }
                    uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
                    noname_1 = extraout_q0_02;
                } while (uVar3 < uVar6);
            }
        }
        else if (uVar4 <= *(iVar5 + 0x18)) {
            uVar4 = *(iVar5 + 0x18);
        }
    }
    iVar5 = *(arg1 + 0x98);
    if (iVar5 != 0) {
        if (*(iVar5 + 8) == 2) {
            uVar3 = cpumask_next(noname_1,0xffffffff,__cpu_possible_mask);
            if (uVar3 < uVar6) {
                iVar5 = *(iVar5 + 0x28);
                do {
                    uVar1 = *(iVar5 + uVar3 * 4);
                    if (uVar4 <= uVar1) {
                        uVar4 = uVar1;
                    }
                    uVar3 = cpumask_next(uVar3,__cpu_possible_mask);
                } while (uVar3 < uVar6);
            }
        }
        else if (uVar4 <= *(iVar5 + 0x18)) {
            uVar4 = *(iVar5 + 0x18);
        }
    }
    iVar2 = scnprintf(arg2,0x1000,"%lu\n",uVar4);
    return iVar2;
}


// ===== sym.show_available_frequencies @ 0x08005654 (size 192) =====

int64_t sym.show_available_frequencies(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int iVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x70) != 0) {
        iVar2 = 0;
        uVar3 = 0;
        do {
            iVar1 = scnprintf(noname_1,arg2 + iVar2,0x1000 - iVar2,"%lu ",*(*(arg1 + 0x68) + uVar3 * 4));
            iVar2 = iVar1 + iVar2;
            uVar3 = uVar3 + 1;
            noname_1 = extraout_q0;
        } while (uVar3 < *(arg1 + 0x70));
        if (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            goto code_r0x080056d4;
        }
    }
    iVar2 = 0;
code_r0x080056d4:
    iVar1 = scnprintf(noname_1,arg2 + iVar2,0x1000 - iVar2,0x8001ebe);
    return iVar1 + iVar2;
}


// ===== sym.__cfi_check_fail @ 0x08005714 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005758

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
    //switch table (4 cases) at 0x8001820
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800576c);
    (*pcVar1)();
}


// ===== sym.setup_icc_sp_device @ 0x0800576c (size 248) =====

uint64_t sym.setup_icc_sp_device(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (3 < *(arg2 + 0x68) || *(arg2 + 0x68) == 2) {
        uVar2 = 0xffffffea;
        goto code_r0x0800582c;
    }
    puVar1 = devm_kmalloc(arg1,8,0xdc0);
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
        goto code_r0x0800582c;
    }
    uVar2 = of_icc_get(arg1,0);
    *puVar1 = uVar2;
    if (0xfffffffffffff000 < uVar2) {
        if (uVar2 == -0x205) {
            uVar2 = 0xfffffdfb;
        }
        else {
            _dev_err(arg1,"Unable to register icc path: %d\n",uVar2 & 0xffffffff);
        }
        goto code_r0x0800582c;
    }
    if (*(arg2 + 0x68) < 2) {
        uVar3 = 3;
code_r0x08005814:
        icc_set_tag(uVar2,uVar3);
    }
    else if (*(arg2 + 0x68) == 3) {
        uVar3 = 0xb;
        goto code_r0x08005814;
    }
    uVar2 = 0;
    *(arg3 + 0x78) = puVar1;
    *(arg3 + 0x80) = sym.commit_icc_freq.3221f8ace5cb55c67e6fac8d82522723.cfi_jt;
code_r0x0800582c:
    return uVar2 & 0xffffffff;
}


// ===== sym.commit_icc_freq @ 0x08005864 (size 140) =====

int sym.commit_icc_freq(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(*(arg1 + 0x10) + 0x7c);
    iVar1 = icc_set_bw(**(arg1 + 0x78),*(arg2 + 4) * iVar1,iVar1 * *arg2);
    if (iVar1 < 0) {
        _dev_err(*arg1,"icc set bw request failed: %d\n",iVar1);
    }
    else {
        *(arg1 + 0x18) = *arg2;
        *(arg1 + 0x1c) = *(arg2 + 4);
    }
    return iVar1;
}


// ===== sym.populate_l3_table @ 0x080058f0 (size 648) =====

uint64_t sym.populate_l3_table(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    uint *puVar7;
    uint32_t *puVar8;
    char *pcVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    ulong unaff_x30;
    int iStack_cc;
    int64_t iStack_c8;
    int64_t iStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    iStack_c8 = 0;
    iStack_c0 = 0;
    iStack_cc = 0;
    iVar3 = of_property_match_string(*(arg1 + 0x2f0),"reg-names","l3tbl-base");
    if (iVar3 < 0) {
        pcVar9 = "Unable to find l3tbl-base: %d\n";
    }
    else {
        iVar3 = of_address_to_resource(*(arg1 + 0x2f0),iVar3,&iStack_c8);
        if (-1 < iVar3) {
            uVar2 = 0x68000000000713;
            if (arm64_use_ng_mappings != 0x0) {
                uVar2 = 0x68000000000f13;
            }
            iVar5 = __ioremap(iStack_c8,(iStack_c0 - iStack_c8) + 1,uVar2);
            if (iVar5 == 0) {
                _dev_err(arg1,"Unable to map l3tbl-base!\n");
            }
            else {
                iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"qcom,ftbl-row-size",&iStack_cc,1,0);
                if (iVar3 < 0) {
                    iStack_cc = 4;
                }
                puVar6 = kmem_cache_alloc_trace(___cfi_slowpath_diag,0xdc0,0xa0);
                if (puVar6 != NULL) {
                    uVar11 = 0;
                    uVar10 = 0;
                    do {
                        uVar4 = sym.readl_relaxed(iVar5 + iStack_cc * uVar11);
                        uVar1 = 300000000;
                        if (uVar4 >> 0x1e != 0) {
                            uVar1 = (uVar4 & 0xff) * 19200000;
                        }
                        if ((uVar11 != 0) && (uVar10 == uVar1)) break;
                        puVar6[uVar11] = uVar1 / 1000;
                        uVar11 = uVar11 + 1;
                        uVar10 = uVar1;
                    } while (uVar11 != 0x28);
                    puVar7 = devm_kmalloc(arg1,(uVar11 & 0xffffffff) << 2,0xdc0);
                    *arg2 = puVar7;
                    if (puVar7 != NULL) {
                        iVar3 = uVar11;
                        if (((iVar3 != 0) && (*puVar7 = *puVar6, iVar3 != 1)) && (puVar7[1] = puVar6[1], iVar3 != 2))
                        {
                            uVar10 = 2;
                            do {
                                uVar1 = uVar10 + 1;
                                *(*arg2 + uVar10 * 4) = puVar6[uVar10];
                                uVar10 = uVar1;
                            } while ((uVar11 & 0xffffffff) != uVar1);
                        }
                        iounmap(iVar5);
                        kfree(puVar6);
                        goto code_r0x08005af0;
                    }
                }
                iounmap(iVar5);
            }
            uVar11 = 0xfffffff4;
            goto code_r0x08005af0;
        }
        pcVar9 = "Unable to get resource from address: %d\n";
    }
    _dev_err(arg1,pcVar9,iVar3);
    uVar11 = 0xffffffea;
code_r0x08005af0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar11 & 0xffffffff;
    }
    puVar8 = __stack_chk_fail();
    *extraout_x18 = sym.readl_relaxed;
    log_read_mmio(0x20,puVar8,0x8005b7c);
    uVar4 = *puVar8;
    log_post_read_mmio(uVar4,0x20,puVar8,0x8005bb0);
    return uVar4;
}


// ===== sym.readl_relaxed @ 0x08005b78 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8005b7c);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8005bb0);
    return uVar1;
}


// ===== sym.setup_epss_l3_device @ 0x08005be8 (size 764) =====

int sym.setup_epss_l3_device(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t arg1_00;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint64_t uStack_a8;
    int64_t iStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
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
    mutex_lock(obj.epss_lock);
    if (_segment.ehdr != NULL) {
code_r0x08005ccc:
        mutex_unlock(obj.epss_lock);
        piVar2 = _segment.ehdr;
        if ((arg3 & 1U) == 0) {
            uVar7 = *(arg1 + 0x2f0);
            uStack_a8 = uStack_a8 & 0xffffffff00000000;
            iVar5 = of_parse_phandle(uVar7,"qcom,percpu-offsets",0);
            if (iVar5 != 0) {
                uVar7 = of_parse_phandle(uVar7,"qcom,percpu-offsets",0);
            }
            iVar5 = of_find_property(uVar7,"qcom,percpu-offsets",&uStack_a8);
            if (iVar5 == 0) {
                _dev_err(arg1,"Unable to find percpu offsets prop!\n");
                iVar3 = -0x16;
            }
            else {
                iVar3 = uStack_a8 >> 2;
                *(uStack_a8 & 0xffffffff) = iVar5;
                uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar3);
                iVar4 = __sw_hweight64();
                if (iVar3 == iVar4) {
                    iVar5 = devm_kmalloc(arg1,uStack_a8 << 2,0xdc0);
                    piVar2[2] = iVar5;
                    if (iVar5 == 0) {
                        iVar3 = -0xc;
                    }
                    else {
                        iVar3 = of_property_read_variable_u32_array(uVar7,"qcom,percpu-offsets",iVar5,uStack_a8,0);
                        if (-1 < iVar3) {
                            pcVar8 = sym.__typeid__ZTSFiP9dcvs_pathP9dcvs_freqjE_global_addr;
                            goto code_r0x08005ddc;
                        }
                        _dev_err(arg1,"Error reading percpu offsets from DT: %d\n",iVar3);
                    }
                }
                else {
                    _dev_err(arg1,"Invalid percpu offsets table len=%d\n");
                    iVar3 = -0x16;
                }
            }
            *(arg2 + 0x80) = sym.__typeid__ZTSFiP9dcvs_pathP9dcvs_freqjE_global_addr;
        }
        else {
            iVar3 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"qcom,shared-offset",_segment.ehdr + 1,1,0);
            pcVar8 = sym.commit_epss_l3_shared.109e05b8b2abd977843f24c428d1ffbd.cfi_jt;
            if (iVar3 < 0) {
                _dev_err(arg1,"Error reading shared offset: %d\n",iVar3);
                *(arg2 + 0x80) = sym.commit_epss_l3_shared.109e05b8b2abd977843f24c428d1ffbd.cfi_jt;
                goto code_r0x08005ea8;
            }
code_r0x08005ddc:
            iVar3 = 0;
            *(arg2 + 0x78) = _segment.ehdr;
            *(arg2 + 0x80) = pcVar8;
        }
        goto code_r0x08005ea8;
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    iStack_a0 = 0;
    _segment.ehdr = devm_kmalloc(arg1,0x18,0xdc0);
    if (_segment.ehdr == NULL) {
code_r0x08005e98:
        iVar3 = -0xc;
    }
    else {
        iVar3 = of_property_match_string(*(*(arg1 + 0x60) + 0x2f0),"reg-names","l3-base");
        if (iVar3 < 0) {
            _dev_err(arg1,"%s: Unable to find l3-base: %d\n","init_epss_data");
            iVar3 = -0x16;
        }
        else {
            iVar3 = of_address_to_resource(*(*(arg1 + 0x60) + 0x2f0),iVar3,&uStack_a8);
            if (-1 < iVar3) {
                iVar5 = devm_ioremap(*(arg1 + 0x60),uStack_a8,(iStack_a0 - uStack_a8) + 1);
                *_segment.ehdr = iVar5;
                if (*_segment.ehdr != 0) goto code_r0x08005ccc;
                _dev_err(arg1,"Unable to map l3-base!\n");
                goto code_r0x08005e98;
            }
            _dev_err(arg1,"Unable to get resource from address: %d\n",iVar3);
        }
    }
    mutex_unlock(obj.epss_lock);
code_r0x08005ea8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    auVar9 = __stack_chk_fail();
    iVar5 = auVar9._0_8_;
    *extraout_x18 = sym.commit_epss_l3_shared;
    iVar6 = *(iVar5 + 0x10);
    uVar1 = *(iVar6 + 0x78);
    if (uVar1 == 0) {
        arg1_00 = 0;
    }
    else {
        arg1_00 = 0;
        do {
            if (*auVar9._8_8_ <= *(*(iVar6 + 0x70) + arg1_00 * 4)) goto code_r0x08005f3c;
            arg1_00 = arg1_00 + 1;
        } while (uVar1 != arg1_00);
        arg1_00 = uVar1;
    }
code_r0x08005f3c:
    if (*(iVar6 + 0x68) == 2) {
        sym.writel_relaxed(arg1_00,**(iVar5 + 0x78) + *(*(iVar5 + 0x78) + 1));
    }
    *(iVar5 + 0x18) = *auVar9._8_8_;
    return 0;
}


// ===== sym.commit_epss_l3_shared @ 0x08005ee4 (size 152) =====

ulong sym.commit_epss_l3_shared(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x10);
    uVar1 = *(iVar2 + 0x78);
    if (uVar1 == 0) {
        arg1_00 = 0;
    }
    else {
        arg1_00 = 0;
        do {
            if (*arg2 <= *(*(iVar2 + 0x70) + arg1_00 * 4)) goto code_r0x08005f3c;
            arg1_00 = arg1_00 + 1;
        } while (uVar1 != arg1_00);
        arg1_00 = uVar1;
    }
code_r0x08005f3c:
    if (*(iVar2 + 0x68) == 2) {
        sym.writel_relaxed(arg1_00,**(arg1 + 0x78) + *(*(arg1 + 0x78) + 1));
    }
    *(arg1 + 0x18) = *arg2;
    return 0;
}


// ===== sym.commit_epss_l3_percpu @ 0x08005f7c (size 172) =====

ulong sym.commit_epss_l3_percpu(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t arg1_00;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x10);
    uVar1 = *(iVar2 + 0x78);
    if (uVar1 == 0) {
        arg1_00 = 0;
    }
    else {
        arg1_00 = 0;
        do {
            if (*arg2 <= *(*(iVar2 + 0x70) + arg1_00 * 4)) goto code_r0x08005fd4;
            arg1_00 = arg1_00 + 1;
        } while (uVar1 != arg1_00);
        arg1_00 = uVar1;
    }
code_r0x08005fd4:
    if (*(iVar2 + 0x68) == 2) {
        iVar2 = tpidr_el1;
        sym.writel_relaxed(arg1_00,**(arg1 + 0x78) + *((*(arg1 + 0x78))[2] + *(cpu_number + iVar2) * 4));
    }
    *(arg1 + 0x18) = *arg2;
    return 0;
}


// ===== sym.setup_epss_l3_sp_device @ 0x0800602c (size 40) =====

void sym.setup_epss_l3_sp_device(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    sym.setup_epss_l3_device(arg1,in_q0,arg3,1);
    return;
}


// ===== sym.setup_epss_l3_percpu_device @ 0x08006054 (size 40) =====

void sym.setup_epss_l3_percpu_device(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    uchar in_q0 [16];
    
    *in_x18 = unaff_x30;
    sym.setup_epss_l3_device(arg1,in_q0,arg3,0);
    return;
}


// ===== sym.writel_relaxed @ 0x0800607c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8006098);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80060c0);
    return;
}


// ===== sym.__traceiter_qcom_dcvs_update @ 0x080060f4 (size 184) =====

ulong sym.__traceiter_qcom_dcvs_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8008260 != NULL) {
        piVar1 = *0x8008260;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_qcom_dcvs_boost @ 0x080061b4 (size 136) =====

ulong sym.__traceiter_qcom_dcvs_boost(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80082a8 != NULL) {
        piVar1 = *0x80082a8;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_memlat_dev_meas @ 0x08006244 (size 192) =====

ulong sym.__traceiter_memlat_dev_meas(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x80082f0 != NULL) {
        piVar1 = *0x80082f0;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_memlat_dev_update @ 0x0800630c (size 152) =====

ulong sym.__traceiter_memlat_dev_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8008338 != NULL) {
        piVar1 = *0x8008338;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_bw_hwmon_meas @ 0x080063ac (size 128) =====

ulong sym.__traceiter_bw_hwmon_meas(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008380;
    piVar1 = *0x8008380;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4,in_w4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_bw_hwmon_update @ 0x08006434 (size 136) =====

ulong sym.__traceiter_bw_hwmon_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x80083c8;
    piVar1 = *0x80083c8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_bw_hwmon_debug @ 0x080064c4 (size 160) =====

ulong sym.__traceiter_bw_hwmon_debug(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8008410;
    piVar1 = *0x8008410;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],arg2,arg3,arg4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.trace_event_raw_event_qcom_dcvs_update @ 0x0800656c (size 320) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006a1c)
//WARNING: Removing unreachable block (ram,0x080067ac)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_qcom_dcvs_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint64_t uVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t in_x4;
    uint64_t uVar22;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    uint64_t in_x7;
    uint64_t uVar26;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    ulong *extraout_x18_12;
    code *pcVar27;
    uint64_t uVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    ulong uVar32;
    uint64_t uVar33;
    char *pcVar34;
    uint64_t uVar35;
    char *pcVar36;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    ulong in_stack_00000000;
    int64_t iStack_7c0;
    int64_t *piStack_7b8;
    uint64_t uStack_7b0;
    uint32_t uStack_7a4;
    int64_t iStack_7a0;
    int64_t iStack_798;
    ulong **ppuStack_790;
    code *pcStack_788;
    code *pcStack_780;
    uint64_t uStack_778;
    ulong uStack_770;
    ulong uStack_768;
    uint32_t *puStack_760;
    uint64_t uStack_758;
    uint64_t uStack_750;
    int64_t iStack_748;
    int64_t *piStack_740;
    uint64_t uStack_738;
    ulong uStack_728;
    ulong uStack_720;
    ulong uStack_718;
    ulong uStack_710;
    ulong uStack_708;
    ulong uStack_700;
    int64_t iStack_6f8;
    ulong **ppuStack_6f0;
    ulong uStack_6e8;
    code *pcStack_6e0;
    ulong uStack_6d0;
    char *pcStack_6c8;
    int64_t *piStack_6c0;
    uint32_t *puStack_6b8;
    uint64_t uStack_6b0;
    uint64_t uStack_6a8;
    uint64_t uStack_6a0;
    uint64_t uStack_698;
    int64_t iStack_690;
    uint32_t uStack_684;
    int64_t iStack_680;
    int64_t iStack_678;
    ulong **ppuStack_670;
    code *pcStack_668;
    int64_t iStack_660;
    code *pcStack_658;
    char *pcStack_650;
    uint64_t uStack_648;
    ulong uStack_640;
    ulong uStack_638;
    uint32_t *puStack_630;
    uint64_t uStack_628;
    uint64_t uStack_620;
    int64_t iStack_618;
    ulong uStack_608;
    ulong uStack_600;
    ulong uStack_5f8;
    ulong uStack_5f0;
    ulong uStack_5e8;
    ulong uStack_5e0;
    int64_t iStack_5d8;
    ulong **ppuStack_5d0;
    ulong uStack_5c8;
    ulong uStack_5c0;
    char *pcStack_5b0;
    int64_t *piStack_5a8;
    uint32_t *puStack_5a0;
    uint64_t uStack_598;
    uint64_t uStack_590;
    uint64_t uStack_588;
    uchar auStack_580 [12];
    uint32_t uStack_574;
    int64_t iStack_570;
    int64_t iStack_568;
    ulong **ppuStack_560;
    code *pcStack_558;
    int64_t iStack_550;
    char *pcStack_548;
    char *pcStack_540;
    int64_t *piStack_538;
    uint64_t uStack_530;
    ulong uStack_528;
    ulong uStack_520;
    uint32_t *puStack_518;
    uint64_t uStack_510;
    uint64_t uStack_508;
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4e0;
    ulong uStack_4d8;
    ulong uStack_4d0;
    int64_t iStack_4c8;
    ulong **ppuStack_4c0;
    ulong uStack_4b8;
    uint64_t uStack_4b0;
    uint64_t uStack_4a8;
    uint64_t uStack_4a0;
    uint64_t uStack_498;
    code *pcStack_490;
    uint64_t uStack_488;
    uchar auStack_480 [8];
    int64_t iStack_478;
    int64_t *piStack_470;
    uint32_t uStack_464;
    int64_t iStack_460;
    int64_t iStack_458;
    ulong **ppuStack_450;
    code *pcStack_448;
    uint64_t uStack_440;
    char *pcStack_438;
    uint64_t uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    uint64_t uStack_418;
    uint64_t uStack_410;
    uint64_t uStack_408;
    int64_t iStack_400;
    int64_t *piStack_3f8;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    int64_t iStack_3b8;
    ulong **ppuStack_3b0;
    ulong uStack_3a8;
    int64_t *piStack_3a0;
    uint64_t uStack_398;
    uint64_t uStack_390;
    uint64_t uStack_388;
    uint64_t uStack_380;
    code *pcStack_378;
    uint64_t uStack_370;
    uint64_t uStack_368;
    uchar auStack_360 [8];
    int64_t iStack_358;
    uint uStack_34c;
    uint uStack_348;
    uint32_t uStack_344;
    int64_t iStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    code *pcStack_328;
    uint64_t uStack_320;
    uint64_t uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uint64_t uStack_2f0;
    int64_t iStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    uint32_t uStack_2d0;
    uint64_t auStack_2c8 [7];
    ulong **ppuStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    char *pcStack_278;
    code *pcStack_270;
    uint64_t uStack_268;
    int64_t *piStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    int64_t iStack_240;
    uint64_t uStack_238;
    uint32_t auStack_230 [2];
    uint32_t uStack_228;
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    int64_t *piStack_200;
    ulong uStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    int64_t iStack_1c8;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    ulong uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_160;
    uint64_t uStack_150;
    code *pcStack_148;
    ulong uStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t *piStack_128;
    uint64_t uStack_120;
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar29 = *(arg1 + 0x48);
    uVar20 = arg4;
    uVar16 = in_x4;
    iVar14 = in_x5;
    piVar23 = in_x6;
    uVar26 = in_x7;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = arg3;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(arg1), (uVar10 & 1) == 0))))
        goto code_r0x08006600;
    }
    else {
code_r0x08006600:
        pcVar36 = "(null)";
        if (arg2 != 0) {
            pcVar36 = arg2;
        }
        iVar9 = strlen(pcVar36);
        puVar17 = iVar9 + 1 + 0x40;
        iVar11 = trace_event_buffer_reserve(&uStack_98,arg1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x40;
            strcpy(iVar11 + 0x40,pcVar36);
            *(iVar11 + 0xc) = arg3;
            *(iVar11 + 0x10) = arg4;
            *(iVar11 + 0x18) = in_x4;
            *(iVar11 + 0x20) = in_x5;
            *(iVar11 + 0x28) = in_x6;
            *(iVar11 + 0x30) = in_x7;
            *(iVar11 + 0x38) = in_stack_00000000;
            trace_event_buffer_commit(&uStack_98);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar10 = auVar37._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_dcvs_update;
    pcStack_f8 = sym.perf_trace_qcom_dcvs_update;
    iVar11 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_108 = *(iVar11 + 0x5e0);
    uVar30 = uVar20 & 0xffffffff;
    uVar31 = puVar17 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    puVar18 = puVar17;
    uVar21 = uVar20;
    uVar22 = uVar16;
    iStack_130 = iVar14;
    piStack_128 = piVar23;
    uStack_120 = uVar26;
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_140 = strlen(pcVar36);
    iVar11 = tpidr_el1;
    piVar24 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_114;
        unaff_x28 = (uStack_140 + 0x4cU & 0xfffffff8) - 4;
        uVar12 = perf_trace_buf_alloc(unaff_x28,&iStack_110);
        if (uVar12 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = &iStack_130;
            *(iStack_110 + 0x100) = ~(-1L << uVar26) & 0x80066ac;
            *(iStack_110 + 0x108) = 5;
            *(uVar12 + 8) = uStack_140 * 0x10000 + 0x10040;
            strcpy(uVar12 + 0x40,pcVar36);
            puVar18 = uStack_114;
            *(uVar12 + 0x18) = uVar16;
            *(uVar12 + 0x20) = iStack_130;
            uVar22 = 1;
            uVar26 = 0;
            *(uVar12 + 0xc) = puVar17;
            *(uVar12 + 0x10) = uVar20;
            *(uVar12 + 0x28) = piStack_128;
            *(uVar12 + 0x30) = uStack_120;
            *(uVar12 + 0x38) = uStack_a0;
            uVar21 = uVar10;
            iVar14 = iStack_110;
            piVar23 = piVar24;
            perf_trace_run_bpf_submit(uVar12,unaff_x28);
            uStack_140 = uStack_a0;
            in_x4 = uVar12;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_108) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar15 = auVar37._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_00 = 0x800684c;
    uStack_178 = 0x800684c;
    pcStack_148 = sym.perf_trace_qcom_dcvs_update;
    iVar11 = sp_el0;
    iStack_188 = *(iVar11 + 0x5e0);
    uVar12 = auVar37._8_8_ & 0xffffffff;
    uVar32 = *(iVar15 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar29 = uVar32;
    uVar20 = uVar21;
    uVar16 = uVar22;
    iVar11 = iVar14;
    ppuStack_180 = &puStack_100;
    uStack_170 = uVar31;
    uStack_160 = uVar30;
    uStack_150 = in_x4;
    uStack_138 = uVar10;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar15), (uVar10 & 1) == 0))))
        goto code_r0x080068e0;
    }
    else {
code_r0x080068e0:
        puVar17 = 0x28;
        iVar13 = trace_event_buffer_reserve(&uStack_1b8,iVar15);
        if (iVar13 != 0) {
            *(iVar13 + 8) = auVar37._8_4_;
            *(iVar13 + 0xc) = puVar18;
            *(iVar13 + 0x10) = uVar21;
            *(iVar13 + 0x18) = uVar22;
            *(iVar13 + 0x20) = iVar14;
            trace_event_buffer_commit(&uStack_1b8);
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_188) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar31 = auVar37._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_dcvs_boost;
    pcStack_208 = sym.perf_trace_qcom_dcvs_boost;
    iVar13 = sp_el0;
    iStack_218 = *(iVar13 + 0x5e0);
    uVar28 = puVar17 & 0xffffffff;
    iStack_220 = 0;
    uStack_224 = 0;
    uVar33 = auVar37._8_8_ & 0xffffffff;
    iVar13 = tpidr_el1;
    piVar25 = iVar13 + *(uVar31 + 0x78);
    uVar10 = uVar20;
    uVar30 = uVar16;
    iVar13 = iVar11;
    ppuStack_210 = &ppuStack_180;
    piStack_200 = piVar24;
    uStack_1f8 = uVar32;
    iStack_1f0 = iVar15;
    uStack_1e8 = uVar12;
    uStack_1e0 = puVar18 & 0xffffffff;
    uStack_1d8 = uVar21;
    uStack_1d0 = uVar22;
    iStack_1c8 = iVar14;
    if ((*(uVar31 + 0x80) != 0) || (puVar19 = puVar17, *piVar25 != 0)) {
        puVar19 = &uStack_224;
        iVar14 = perf_trace_buf_alloc(0x2c,&iStack_220);
        uVar21 = ___cpu_online_mask;
        if (iVar14 != 0) {
            *(iStack_220 + 0xe8) = &ppuStack_210;
            puVar19 = uStack_224;
            uVar30 = 1;
            uVar26 = 0;
            *(iStack_220 + 0xf8) = auStack_230;
            *(iStack_220 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8006944;
            *(iStack_220 + 0x108) = 5;
            *(iVar14 + 8) = auVar37._8_4_;
            *(iVar14 + 0xc) = puVar17;
            *(iVar14 + 0x10) = uVar20;
            *(iVar14 + 0x18) = uVar16;
            *(iVar14 + 0x20) = iVar11;
            uVar10 = uVar31;
            iVar13 = iStack_220;
            piVar23 = piVar25;
            perf_trace_run_bpf_submit(iVar14,0x2c);
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_218) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar15 = auVar37._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_02 = 0x8006a7c;
    uStack_288 = 0x8006a7c;
    pcStack_270 = sym.perf_trace_qcom_dcvs_boost;
    iVar14 = sp_el0;
    auStack_2c8[6] = *(iVar14 + 0x5e0);
    uVar35 = *(iVar15 + 0x48);
    auStack_2c8[4] = 0;
    auStack_2c8[5] = 0;
    auStack_2c8[2] = 0;
    auStack_2c8[3] = 0;
    auStack_2c8[0] = 0;
    auStack_2c8[1] = 0;
    uVar29 = uVar35;
    uVar21 = uVar10;
    uVar22 = uVar30;
    iVar14 = iVar13;
    piVar24 = piVar23;
    uVar12 = uVar26;
    ppuStack_290 = &ppuStack_210;
    uStack_280 = unaff_x28;
    pcStack_278 = pcVar36;
    uStack_268 = uVar33;
    piStack_260 = piVar25;
    uStack_258 = uVar28;
    uStack_250 = uVar20;
    uStack_248 = uVar16;
    iStack_240 = iVar11;
    uStack_238 = uVar31;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar36 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar36 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar36;
        auVar37._0_8_ = iVar15;
        iVar9 = strlen(pcVar36);
        uVar29 = iVar9 + 1;
        uVar35 = uVar29;
        puVar17 = uVar29 + 0x38;
        iVar11 = trace_event_buffer_reserve(auStack_2c8,iVar15);
        auVar38._8_8_ = pcVar36;
        auVar38._0_8_ = iVar11;
        if (iVar11 != 0) {
            unaff_x28 = uStack_228;
            uVar35 = auStack_230[0];
            *(iVar11 + 8) = uVar29 * 0x10000 | 0x38;
            strcpy(iVar11 + 0x38,pcVar36);
            *(iVar11 + 0xc) = puVar19;
            *(iVar11 + 0x10) = uVar10;
            *(iVar11 + 0x18) = uVar30;
            *(iVar11 + 0x20) = iVar13;
            *(iVar11 + 0x28) = piVar23;
            *(iVar11 + 0x2c) = uVar26;
            *(iVar11 + 0x30) = auStack_230[0];
            *(iVar11 + 0x34) = uStack_228;
            trace_event_buffer_commit(auStack_2c8);
            auVar37 = auVar38;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == auStack_2c8[6]) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_03 = sym.perf_trace_memlat_dev_meas;
    pcStack_328 = sym.perf_trace_memlat_dev_meas;
    uStack_34c = SUB84(piVar24,0);
    uStack_348 = uVar12;
    iVar11 = sp_el0;
    pcVar36 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar36 = auVar38._8_8_;
    }
    iStack_338 = *(iVar11 + 0x5e0);
    pcVar27 = sym.perf_trace_memlat_dev_meas;
    uVar28 = puVar17 & 0xffffffff;
    iStack_340 = 0;
    uStack_344 = 0;
    puVar18 = puVar17;
    uVar16 = uVar21;
    uVar31 = uVar22;
    iStack_358 = iVar14;
    ppuStack_330 = &ppuStack_290;
    uStack_320 = unaff_x28;
    uStack_318 = uVar35;
    uStack_310 = auVar37._8_8_;
    uStack_308 = auVar37._0_8_;
    uStack_300 = puVar19 & 0xffffffff;
    uStack_2f8 = uVar10;
    uStack_2f0 = uVar30;
    iStack_2e8 = iVar13;
    uStack_2e0 = piVar23 & 0xffffffff;
    uStack_2d8 = uVar26 & 0xffffffff;
    uVar26 = strlen(pcVar36);
    iVar11 = tpidr_el1;
    piVar23 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        iVar9 = uVar26;
        puVar18 = &uStack_344;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(unaff_x28,&iStack_340);
        if (uVar10 != 0) {
            uVar16 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_2c8[0];
            pcVar27 = auStack_2c8[0] & 0xffffffff;
            *(iStack_340 + 0xe8) = &ppuStack_330;
            *(iStack_340 + 0xf8) = auStack_360;
            uVar26 = uStack_2d0;
            *(iStack_340 + 0x100) = ~(-1L << uVar16) & 0x8006bd0;
            *(iStack_340 + 0x108) = 5;
            *(uVar10 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar10 + 0x38,pcVar36);
            puVar18 = uStack_344;
            *(uVar10 + 0x20) = iStack_358;
            uVar31 = 1;
            uVar12 = 0;
            *(uVar10 + 0xc) = puVar17;
            *(uVar10 + 0x10) = uVar21;
            *(uVar10 + 0x18) = uVar22;
            *(uVar10 + 0x28) = uStack_34c;
            *(uVar10 + 0x2c) = uStack_348;
            *(uVar10 + 0x30) = uStack_2d0;
            *(uVar10 + 0x34) = uVar8;
            uVar16 = uVar20;
            iVar14 = iStack_340;
            piVar24 = piVar23;
            perf_trace_run_bpf_submit(uVar10,unaff_x28);
            uVar30 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_338) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar15 = auVar39._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_04 = 0x8006d78;
    uStack_3a8 = 0x8006d78;
    iVar11 = sp_el0;
    iStack_3b8 = *(iVar11 + 0x5e0);
    uVar35 = *(iVar15 + 0x48);
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uVar29 = uVar35;
    uVar10 = uVar16;
    uVar33 = uVar31;
    iVar11 = iVar14;
    piVar25 = piVar24;
    ppuStack_3b0 = &ppuStack_330;
    piStack_3a0 = piVar23;
    uStack_398 = uVar28;
    uStack_390 = uVar21;
    uStack_388 = uVar22;
    uStack_380 = uVar30;
    pcStack_378 = pcVar27;
    uStack_370 = uVar26;
    uStack_368 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar34 = "(null)";
        if (auVar39._8_8_ != NULL) {
            pcVar34 = auVar39._8_8_;
        }
        auVar39._8_8_ = pcVar34;
        auVar39._0_8_ = iVar15;
        iVar9 = strlen(pcVar34);
        uVar29 = iVar9 + 1;
        uVar35 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar15 = trace_event_buffer_reserve(&uStack_3e8,iVar15);
        auVar4._8_8_ = pcVar34;
        auVar4._0_8_ = iVar15;
        if (iVar15 != 0) {
            *(iVar15 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar15 + 0x30,pcVar34);
            *(iVar15 + 0xc) = puVar18;
            *(iVar15 + 0x10) = uVar16;
            *(iVar15 + 0x18) = uVar31;
            *(iVar15 + 0x20) = iVar14;
            *(iVar15 + 0x28) = piVar24;
            trace_event_buffer_commit(&uStack_3e8);
            auVar39 = auVar4;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_05 = sym.perf_trace_memlat_dev_update;
    pcStack_448 = sym.perf_trace_memlat_dev_update;
    iVar15 = sp_el0;
    pcVar34 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar34 = auVar37._8_8_;
    }
    iStack_458 = *(iVar15 + 0x5e0);
    uVar22 = puVar17 & 0xffffffff;
    iStack_460 = 0;
    uStack_464 = 0;
    puVar19 = puVar17;
    uVar26 = uVar10;
    uVar21 = uVar33;
    iStack_478 = iVar11;
    piStack_470 = piVar25;
    ppuStack_450 = &ppuStack_3b0;
    uStack_440 = unaff_x28;
    pcStack_438 = pcVar36;
    uStack_430 = uVar35;
    uStack_428 = auVar39._8_8_;
    uStack_420 = auVar39._0_8_;
    uStack_418 = puVar18 & 0xffffffff;
    uStack_410 = uVar16;
    uStack_408 = uVar31;
    iStack_400 = iVar14;
    piStack_3f8 = piVar24;
    iVar15 = strlen(pcVar34);
    iVar14 = tpidr_el1;
    piVar23 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar19 = &uStack_464;
        pcVar36 = (iVar15 + 0x3cU & 0xfffffff8) - 4;
        uVar16 = perf_trace_buf_alloc(pcVar36,&iStack_460);
        if (uVar16 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            *(iStack_460 + 0xe8) = &ppuStack_450;
            *(iStack_460 + 0xf8) = auStack_480;
            *(iStack_460 + 0x100) = ~(-1L << uVar26) & 0x8006eb0;
            *(iStack_460 + 0x108) = 5;
            *(uVar16 + 8) = iVar15 * 0x10000 + 0x10030;
            strcpy(uVar16 + 0x30,pcVar34);
            puVar19 = uStack_464;
            uVar21 = 1;
            uVar12 = 0;
            *(uVar16 + 0xc) = puVar17;
            *(uVar16 + 0x10) = uVar10;
            *(uVar16 + 0x18) = uVar33;
            *(uVar16 + 0x20) = iStack_478;
            *(uVar16 + 0x28) = piStack_470;
            uVar26 = uVar20;
            iVar11 = iStack_460;
            piVar25 = piVar23;
            perf_trace_run_bpf_submit(uVar16,pcVar36);
            uVar31 = uVar16;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_458) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar13 = auVar40._0_8_;
    uVar32 = tpidr_el2;
    *extraout_x18_06 = 0x8007040;
    uStack_4b8 = 0x8007040;
    pcStack_490 = sym.perf_trace_memlat_dev_update;
    iVar14 = sp_el0;
    iStack_4c8 = *(iVar14 + 0x5e0);
    uVar28 = *(iVar13 + 0x48);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uVar29 = uVar28;
    uVar16 = uVar26;
    uVar30 = uVar21;
    ppuStack_4c0 = &ppuStack_450;
    uStack_4b0 = uVar22;
    uStack_4a8 = uVar10;
    uStack_4a0 = uVar33;
    uStack_498 = uVar31;
    uStack_488 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar13), (uVar20 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar1 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar1;
        auVar40._0_8_ = iVar13;
        iVar9 = strlen(pcVar1);
        uVar29 = iVar9 + 1;
        uVar28 = uVar29;
        puVar17 = uVar29 + 0x28;
        iVar14 = trace_event_buffer_reserve(&uStack_4f8,iVar13);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar29 * 0x10000 | 0x24;
            strcpy(iVar14 + 0x24,pcVar1);
            *(iVar14 + 0x10) = puVar19;
            *(iVar14 + 0x18) = uVar26;
            *(iVar14 + 0x20) = uVar21;
            trace_event_buffer_commit(&uStack_4f8);
            auVar40 = auVar5;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_4c8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_07 = sym.perf_trace_bw_hwmon_meas;
    pcStack_558 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar1 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar1 = auVar37._8_8_;
    }
    iStack_568 = *(iVar14 + 0x5e0);
    pcVar27 = sym.perf_trace_bw_hwmon_meas;
    uVar31 = uVar30 & 0xffffffff;
    iStack_570 = 0;
    uStack_574 = 0;
    puVar18 = puVar17;
    uVar10 = uVar16;
    uVar22 = uVar30;
    ppuStack_560 = &ppuStack_4c0;
    iStack_550 = iVar15;
    pcStack_548 = pcVar36;
    pcStack_540 = pcVar34;
    piStack_538 = piVar23;
    uStack_530 = uVar28;
    uStack_528 = auVar40._8_8_;
    uStack_520 = auVar40._0_8_;
    puStack_518 = puVar19;
    uStack_510 = uVar26;
    uStack_508 = uVar21 & 0xffffffff;
    uVar32 = strlen(pcVar1);
    iVar14 = tpidr_el1;
    piVar23 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_574;
        pcVar34 = (uVar32 + 0x34U & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(pcVar34,&iStack_570);
        if (iVar14 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            *(iStack_570 + 0xe8) = &ppuStack_560;
            *(iStack_570 + 0xf8) = auStack_580;
            *(iStack_570 + 0x100) = ~(-1L << uVar26) & 0x8007164;
            *(iStack_570 + 0x108) = 5;
            *(iVar14 + 8) = uVar32 * 0x10000 + 0x10024;
            strcpy(iVar14 + 0x24,pcVar1);
            puVar18 = uStack_574;
            uVar22 = 1;
            uVar12 = 0;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar16;
            *(iVar14 + 0x20) = uVar30;
            uVar10 = uVar20;
            iVar11 = iStack_570;
            piVar25 = piVar23;
            perf_trace_run_bpf_submit(iVar14,pcVar34);
            iVar15 = iVar14;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_568) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar13 = auVar41._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_08 = 0x80072e4;
    uStack_5c8 = 0x80072e4;
    iVar14 = sp_el0;
    iStack_5d8 = *(iVar14 + 0x5e0);
    uVar30 = *(iVar13 + 0x48);
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uStack_608 = 0;
    uStack_600 = 0;
    uVar29 = uVar30;
    uVar26 = uVar10;
    uVar21 = uVar22;
    iVar14 = iVar11;
    ppuStack_5d0 = &ppuStack_560;
    uStack_5c0 = uVar32;
    pcStack_5b0 = pcVar1;
    piStack_5a8 = piVar23;
    puStack_5a0 = puVar17;
    uStack_598 = uVar16;
    uStack_590 = uVar31;
    uStack_588 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar26 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar13), (uVar20 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar36 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar36 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar36;
        auVar41._0_8_ = iVar13;
        iVar9 = strlen(pcVar36);
        uVar29 = iVar9 + 1;
        uVar30 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar13 = trace_event_buffer_reserve(&uStack_608,iVar13);
        auVar6._8_8_ = pcVar36;
        auVar6._0_8_ = iVar13;
        if (iVar13 != 0) {
            *(iVar13 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar13 + 0x30,pcVar36);
            *(iVar13 + 0x10) = puVar18;
            *(iVar13 + 0x18) = uVar10;
            *(iVar13 + 0x20) = uVar22;
            *(iVar13 + 0x28) = iVar11;
            trace_event_buffer_commit(&uStack_608);
            auVar41 = auVar6;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_09 = sym.perf_trace_bw_hwmon_update;
    pcStack_668 = sym.perf_trace_bw_hwmon_update;
    pcStack_658 = sym.perf_trace_bw_hwmon_meas;
    iVar13 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_678 = *(iVar13 + 0x5e0);
    iStack_680 = 0;
    uStack_684 = 0;
    puVar19 = puVar17;
    uVar16 = uVar26;
    uVar31 = uVar21;
    iStack_690 = iVar14;
    ppuStack_670 = &ppuStack_5d0;
    iStack_660 = iVar15;
    pcStack_650 = pcVar34;
    uStack_648 = uVar30;
    uStack_640 = auVar41._8_8_;
    uStack_638 = auVar41._0_8_;
    puStack_630 = puVar18;
    uStack_628 = uVar10;
    uStack_620 = uVar22;
    iStack_618 = iVar11;
    uVar32 = strlen(pcVar36);
    iVar11 = tpidr_el1;
    piVar23 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar19 = &uStack_684;
        pcVar27 = (uVar32 + 0x3cU & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(pcVar27,&iStack_680);
        if (uVar10 != 0) {
            uVar16 = ___cpu_online_mask & 0x3f;
            *(iStack_680 + 0xe8) = &ppuStack_670;
            *(iStack_680 + 0xf8) = &iStack_690;
            *(iStack_680 + 0x100) = ~(-1L << uVar16) & 0x8007414;
            *(iStack_680 + 0x108) = 5;
            *(uVar10 + 8) = uVar32 * 0x10000 + 0x10030;
            strcpy(uVar10 + 0x30,pcVar36);
            puVar19 = uStack_684;
            uVar31 = 1;
            uVar12 = 0;
            *(uVar10 + 0x10) = puVar17;
            *(uVar10 + 0x18) = uVar26;
            *(uVar10 + 0x20) = uVar21;
            *(uVar10 + 0x28) = iStack_690;
            uVar16 = uVar20;
            iVar14 = iStack_680;
            piVar25 = piVar23;
            perf_trace_run_bpf_submit(uVar10,pcVar27);
            uVar22 = uVar10;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_678) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar15 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_10 = 0x800759c;
    uStack_6e8 = 0x800759c;
    iVar11 = sp_el0;
    iStack_6f8 = *(iVar11 + 0x5e0);
    uVar33 = *(iVar15 + 0x48);
    uStack_708 = 0;
    uStack_700 = 0;
    uStack_718 = 0;
    uStack_710 = 0;
    uStack_728 = 0;
    uStack_720 = 0;
    uVar29 = uVar33;
    uVar10 = uVar16;
    uVar30 = uVar31;
    iVar11 = iVar14;
    piVar24 = piVar25;
    uVar28 = uVar12;
    ppuStack_6f0 = &ppuStack_670;
    pcStack_6e0 = pcVar27;
    uStack_6d0 = uVar32;
    pcStack_6c8 = pcVar36;
    piStack_6c0 = piVar23;
    puStack_6b8 = puVar17;
    uStack_6b0 = uVar26;
    uStack_6a8 = uVar21;
    uStack_6a0 = uVar22;
    uStack_698 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar29 >> 6 & 1) != 0) ||
           (((uVar29 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar36 = "(null)";
    if (auVar42._8_8_ != NULL) {
        pcVar36 = auVar42._8_8_;
    }
    auVar42._8_8_ = pcVar36;
    auVar42._0_8_ = iVar15;
    iVar9 = strlen(pcVar36);
    uVar29 = iVar9 + 1;
    uVar33 = uVar29;
    puVar17 = uVar29 + 0x40;
    iVar15 = trace_event_buffer_reserve(&uStack_728,iVar15);
    auVar7._8_8_ = pcVar36;
    auVar7._0_8_ = iVar15;
    if (iVar15 != 0) {
        *(iVar15 + 8) = uVar29 * 0x10000 | 0x40;
        strcpy(iVar15 + 0x40,pcVar36);
        *(iVar15 + 0x10) = puVar19;
        *(iVar15 + 0x18) = uVar16;
        *(iVar15 + 0x20) = uVar31;
        *(iVar15 + 0x28) = iVar14;
        *(iVar15 + 0x30) = piVar25;
        *(iVar15 + 0x38) = uVar12;
        trace_event_buffer_commit(&uStack_728);
        auVar42 = auVar7;
    }
code_r0x080076a0:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_6f8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar20 = auVar37._0_8_;
    *extraout_x18_11 = sym.perf_trace_bw_hwmon_debug;
    pcStack_788 = sym.perf_trace_bw_hwmon_debug;
    pcStack_780 = sym.perf_trace_bw_hwmon_update;
    iVar15 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_798 = *(iVar15 + 0x5e0);
    iStack_7a0 = 0;
    uStack_7a4 = 0;
    puVar18 = puVar17;
    uVar26 = uVar10;
    iStack_7c0 = iVar11;
    piStack_7b8 = piVar24;
    uStack_7b0 = uVar28;
    ppuStack_790 = &ppuStack_6f0;
    uStack_778 = uVar33;
    uStack_770 = auVar42._8_8_;
    uStack_768 = auVar42._0_8_;
    puStack_760 = puVar19;
    uStack_758 = uVar16;
    uStack_750 = uVar31;
    iStack_748 = iVar14;
    piStack_740 = piVar25;
    uStack_738 = uVar12;
    iVar9 = strlen(pcVar36);
    iVar14 = tpidr_el1;
    piVar23 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_7a4;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(iVar2,&iStack_7a0,puVar18);
        if (iVar14 != 0) {
            uVar16 = ___cpu_online_mask & 0x3f;
            *(iStack_7a0 + 0xe8) = &ppuStack_790;
            *(iStack_7a0 + 0xf8) = &iStack_7c0;
            *(iStack_7a0 + 0x100) = ~(-1L << uVar16) & 0x80076e0;
            *(iStack_7a0 + 0x108) = 5;
            *(iVar14 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar14 + 0x40,pcVar36);
            puVar18 = uStack_7a4;
            *(iVar14 + 0x20) = uVar30;
            *(iVar14 + 0x28) = iStack_7c0;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar10;
            *(iVar14 + 0x30) = piStack_7b8;
            *(iVar14 + 0x38) = uStack_7b0;
            perf_trace_run_bpf_submit(iVar14,iVar2,puVar18,uVar20,1,iStack_7a0,piVar23,0);
            uVar26 = uVar20;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_798) {
        auVar37 = __stack_chk_fail();
        uVar32 = tpidr_el2;
        *extraout_x18_12 = 0x8007878;
        bpf_trace_run8(auVar37._0_8_,auVar37._8_8_,puVar18 & 0xffffffff,uVar26 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qcom_dcvs_update @ 0x080066ac (size 428) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006a1c)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_qcom_dcvs_update(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    uchar *puVar14;
    uchar *puVar15;
    uchar *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t in_x4;
    uint64_t uVar19;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    uint64_t in_x7;
    uint64_t uVar23;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    ulong *extraout_x18_11;
    code *pcVar24;
    int64_t unaff_x22;
    uint64_t uVar25;
    uint64_t uVar26;
    uint32_t uVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    ulong uVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    uint64_t uVar33;
    char *pcVar34;
    uint64_t uVar35;
    char *pcVar36;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    ulong in_stack_00000000;
    int64_t iStack_720;
    int64_t *piStack_718;
    uint64_t uStack_710;
    uint32_t uStack_704;
    int64_t iStack_700;
    int64_t iStack_6f8;
    uchar *puStack_6f0;
    code *pcStack_6e8;
    code *pcStack_6e0;
    uint64_t uStack_6d8;
    ulong uStack_6d0;
    ulong uStack_6c8;
    uchar *puStack_6c0;
    uint64_t uStack_6b8;
    uint64_t uStack_6b0;
    int64_t iStack_6a8;
    int64_t *piStack_6a0;
    uint64_t uStack_698;
    ulong uStack_688;
    ulong uStack_680;
    ulong uStack_678;
    ulong uStack_670;
    ulong uStack_668;
    ulong uStack_660;
    int64_t iStack_658;
    uchar *puStack_650;
    ulong uStack_648;
    code *pcStack_640;
    ulong uStack_630;
    char *pcStack_628;
    int64_t *piStack_620;
    uchar *puStack_618;
    uint64_t uStack_610;
    uint64_t uStack_608;
    uint64_t uStack_600;
    uint64_t uStack_5f8;
    int64_t iStack_5f0;
    uint32_t uStack_5e4;
    int64_t iStack_5e0;
    int64_t iStack_5d8;
    uchar *puStack_5d0;
    code *pcStack_5c8;
    int64_t iStack_5c0;
    code *pcStack_5b8;
    char *pcStack_5b0;
    uint64_t uStack_5a8;
    ulong uStack_5a0;
    ulong uStack_598;
    uchar *puStack_590;
    uint64_t uStack_588;
    uint64_t uStack_580;
    int64_t iStack_578;
    ulong uStack_568;
    ulong uStack_560;
    ulong uStack_558;
    ulong uStack_550;
    ulong uStack_548;
    ulong uStack_540;
    int64_t iStack_538;
    uchar *puStack_530;
    ulong uStack_528;
    ulong uStack_520;
    char *pcStack_510;
    int64_t *piStack_508;
    uchar *puStack_500;
    uint64_t uStack_4f8;
    uint64_t uStack_4f0;
    uint64_t uStack_4e8;
    uchar auStack_4e0 [12];
    uint32_t uStack_4d4;
    int64_t iStack_4d0;
    int64_t iStack_4c8;
    uchar *puStack_4c0;
    code *pcStack_4b8;
    int64_t iStack_4b0;
    char *pcStack_4a8;
    char *pcStack_4a0;
    int64_t *piStack_498;
    uint64_t uStack_490;
    ulong uStack_488;
    ulong uStack_480;
    uchar *puStack_478;
    uint64_t uStack_470;
    uint64_t uStack_468;
    ulong uStack_458;
    ulong uStack_450;
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    int64_t iStack_428;
    uchar *puStack_420;
    ulong uStack_418;
    uint64_t uStack_410;
    uint64_t uStack_408;
    uint64_t uStack_400;
    uint64_t uStack_3f8;
    code *pcStack_3f0;
    uint64_t uStack_3e8;
    uchar auStack_3e0 [8];
    int64_t iStack_3d8;
    int64_t *piStack_3d0;
    uint32_t uStack_3c4;
    int64_t iStack_3c0;
    int64_t iStack_3b8;
    uchar *puStack_3b0;
    code *pcStack_3a8;
    uint64_t uStack_3a0;
    char *pcStack_398;
    uint64_t uStack_390;
    ulong uStack_388;
    ulong uStack_380;
    uint64_t uStack_378;
    uint64_t uStack_370;
    uint64_t uStack_368;
    int64_t iStack_360;
    int64_t *piStack_358;
    ulong uStack_348;
    ulong uStack_340;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    int64_t iStack_318;
    uchar *puStack_310;
    ulong uStack_308;
    int64_t *piStack_300;
    uint64_t uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    code *pcStack_2d8;
    uint64_t uStack_2d0;
    uint64_t uStack_2c8;
    uchar auStack_2c0 [8];
    int64_t iStack_2b8;
    uint uStack_2ac;
    uint uStack_2a8;
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    uchar *puStack_290;
    code *pcStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    int64_t iStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uint32_t uStack_230;
    uint64_t auStack_228 [7];
    uchar *puStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    char *pcStack_1d8;
    code *pcStack_1d0;
    uint64_t uStack_1c8;
    int64_t *piStack_1c0;
    uint64_t uStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    int64_t iStack_1a0;
    uint64_t uStack_198;
    uint32_t auStack_190 [2];
    uint32_t uStack_188;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar *puStack_170;
    code *pcStack_168;
    int64_t *piStack_160;
    ulong uStack_158;
    int64_t iStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    int64_t iStack_b0;
    int64_t iStack_90;
    int64_t *piStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    pcVar36 = "(null)";
    if (arg2 != NULL) {
        pcVar36 = arg2;
    }
    iStack_68 = *(iVar10 + 0x5e0);
    uVar28 = arg4 & 0xffffffff;
    uVar29 = arg3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar14 = arg3;
    uVar18 = arg4;
    uVar23 = in_x4;
    iStack_90 = in_x5;
    piStack_88 = in_x6;
    uStack_80 = in_x7;
    iVar9 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar20 = iVar10 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar14 = &stack0xffffffffffffff8c;
        unaff_x28 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(unaff_x28,&stack0xffffffffffffff90);
        if (iVar10 != 0) {
            uVar23 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            uVar18 = (~uVar23 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar18 = uVar23 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar18;
            *(iStack_70 + 0x108) = 5;
            *(iVar10 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar10 + 0x40,pcVar36);
            puVar14 = uStack_74;
            *(iVar10 + 0x18) = in_x4;
            *(iVar10 + 0x20) = iStack_90;
            uVar23 = 1;
            in_x7 = 0;
            *(iVar10 + 0xc) = arg3;
            *(iVar10 + 0x10) = arg4;
            *(iVar10 + 0x28) = piStack_88;
            *(iVar10 + 0x30) = uStack_80;
            *(iVar10 + 0x38) = in_stack_00000000;
            in_x5 = iStack_70;
            in_x6 = piVar20;
            perf_trace_run_bpf_submit(iVar10,unaff_x28);
            uVar18 = arg1;
            unaff_x22 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar12 = auVar37._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18 = 0x800684c;
    uStack_d8 = 0x800684c;
    iVar10 = sp_el0;
    iStack_e8 = *(iVar10 + 0x5e0);
    uVar25 = auVar37._8_8_ & 0xffffffff;
    uVar30 = *(iVar12 + 0x48);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uVar27 = uVar30;
    uVar17 = uVar18;
    uVar32 = uVar23;
    iVar10 = in_x5;
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = uVar29;
    uStack_c0 = uVar28;
    iStack_b0 = unaff_x22;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar15 = puVar14;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar17 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar28 = trace_event_ignore_this_pid(iVar12), (uVar28 & 1) == 0))))
        goto code_r0x080068e0;
    }
    else {
code_r0x080068e0:
        puVar15 = 0x28;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffee8,iVar12);
        if (iVar11 != 0) {
            *(iVar11 + 8) = auVar37._8_4_;
            *(iVar11 + 0xc) = puVar14;
            *(iVar11 + 0x10) = uVar18;
            *(iVar11 + 0x18) = uVar23;
            *(iVar11 + 0x20) = in_x5;
            trace_event_buffer_commit(&stack0xfffffffffffffee8);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar19 = auVar37._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_dcvs_boost;
    pcStack_168 = sym.perf_trace_qcom_dcvs_boost;
    iVar11 = sp_el0;
    iStack_178 = *(iVar11 + 0x5e0);
    uVar26 = puVar15 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    uVar31 = auVar37._8_8_ & 0xffffffff;
    iVar11 = tpidr_el1;
    piVar22 = iVar11 + *(uVar19 + 0x78);
    uVar28 = uVar17;
    uVar29 = uVar32;
    iVar11 = iVar10;
    puStack_170 = &stack0xffffffffffffff20;
    piStack_160 = piVar20;
    uStack_158 = uVar30;
    iStack_150 = iVar12;
    uStack_148 = uVar25;
    uStack_140 = puVar14 & 0xffffffff;
    uStack_138 = uVar18;
    uStack_130 = uVar23;
    iStack_128 = in_x5;
    if ((*(uVar19 + 0x80) != 0) || (puVar16 = puVar15, *piVar22 != 0)) {
        puVar16 = &stack0xfffffffffffffe7c;
        iVar12 = perf_trace_buf_alloc(0x2c,&stack0xfffffffffffffe80);
        uVar18 = ___cpu_online_mask;
        if (iVar12 != 0) {
            *(iStack_180 + 0xe8) = &stack0xfffffffffffffe90;
            puVar16 = uStack_184;
            uVar29 = 1;
            in_x7 = 0;
            *(iStack_180 + 0xf8) = &stack0xfffffffffffffe70;
            *(iStack_180 + 0x100) = ~(-1L << (uVar18 & 0x3f)) & 0x8006944;
            *(iStack_180 + 0x108) = 5;
            *(iVar12 + 8) = auVar37._8_4_;
            *(iVar12 + 0xc) = puVar15;
            *(iVar12 + 0x10) = uVar17;
            *(iVar12 + 0x18) = uVar32;
            *(iVar12 + 0x20) = iVar10;
            uVar28 = uVar19;
            iVar11 = iStack_180;
            in_x6 = piVar22;
            perf_trace_run_bpf_submit(iVar12,0x2c);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_178) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar13 = auVar37._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18_01 = 0x8006a7c;
    uStack_1e8 = 0x8006a7c;
    pcStack_1d0 = sym.perf_trace_qcom_dcvs_boost;
    iVar12 = sp_el0;
    auStack_228[6] = *(iVar12 + 0x5e0);
    uVar35 = *(iVar13 + 0x48);
    auStack_228[4] = 0;
    auStack_228[5] = 0;
    auStack_228[2] = 0;
    auStack_228[3] = 0;
    auStack_228[0] = 0;
    auStack_228[1] = 0;
    uVar27 = uVar35;
    uVar18 = uVar28;
    uVar23 = uVar29;
    iVar12 = iVar11;
    piVar20 = in_x6;
    uVar25 = in_x7;
    puStack_1f0 = &stack0xfffffffffffffe90;
    uStack_1e0 = unaff_x28;
    pcStack_1d8 = pcVar36;
    uStack_1c8 = uVar31;
    piStack_1c0 = piVar22;
    uStack_1b8 = uVar26;
    uStack_1b0 = uVar17;
    uStack_1a8 = uVar32;
    iStack_1a0 = iVar10;
    uStack_198 = uVar19;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar18 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar13), (uVar17 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar36 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar36 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar36;
        auVar37._0_8_ = iVar13;
        iVar9 = strlen(pcVar36);
        uVar27 = iVar9 + 1;
        uVar35 = uVar27;
        puVar14 = uVar27 + 0x38;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffdd8,iVar13);
        auVar38._8_8_ = pcVar36;
        auVar38._0_8_ = iVar10;
        if (iVar10 != 0) {
            unaff_x28 = uStack_188;
            uVar35 = auStack_190[0];
            *(iVar10 + 8) = uVar27 * 0x10000 | 0x38;
            strcpy(iVar10 + 0x38,pcVar36);
            *(iVar10 + 0xc) = puVar16;
            *(iVar10 + 0x10) = uVar28;
            *(iVar10 + 0x18) = uVar29;
            *(iVar10 + 0x20) = iVar11;
            *(iVar10 + 0x28) = in_x6;
            *(iVar10 + 0x2c) = in_x7;
            *(iVar10 + 0x30) = auStack_190[0];
            *(iVar10 + 0x34) = uStack_188;
            trace_event_buffer_commit(&stack0xfffffffffffffdd8);
            auVar37 = auVar38;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == auStack_228[6]) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar17 = auVar38._0_8_;
    *extraout_x18_02 = sym.perf_trace_memlat_dev_meas;
    pcStack_288 = sym.perf_trace_memlat_dev_meas;
    uStack_2ac = SUB84(piVar20,0);
    uStack_2a8 = uVar25;
    iVar10 = sp_el0;
    pcVar36 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar36 = auVar38._8_8_;
    }
    iStack_298 = *(iVar10 + 0x5e0);
    pcVar24 = sym.perf_trace_memlat_dev_meas;
    uVar26 = puVar14 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar15 = puVar14;
    uVar32 = uVar18;
    uVar19 = uVar23;
    iStack_2b8 = iVar12;
    puStack_290 = &stack0xfffffffffffffe10;
    uStack_280 = unaff_x28;
    uStack_278 = uVar35;
    uStack_270 = auVar37._8_8_;
    uStack_268 = auVar37._0_8_;
    uStack_260 = puVar16 & 0xffffffff;
    uStack_258 = uVar28;
    uStack_250 = uVar29;
    iStack_248 = iVar11;
    uStack_240 = in_x6 & 0xffffffff;
    uStack_238 = in_x7 & 0xffffffff;
    uVar28 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar22 != 0)) {
        iVar9 = uVar28;
        puVar15 = &stack0xfffffffffffffd5c;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar31 = perf_trace_buf_alloc(unaff_x28,&stack0xfffffffffffffd60);
        if (uVar31 != 0) {
            uVar29 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_228[0];
            pcVar24 = auStack_228[0] & 0xffffffff;
            *(iStack_2a0 + 0xe8) = &stack0xfffffffffffffd70;
            *(iStack_2a0 + 0xf8) = &stack0xfffffffffffffd40;
            uVar28 = uStack_230;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar29) & 0x8006bd0;
            *(iStack_2a0 + 0x108) = 5;
            *(uVar31 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar31 + 0x38,pcVar36);
            puVar15 = uStack_2a4;
            *(uVar31 + 0x20) = iStack_2b8;
            uVar19 = 1;
            uVar25 = 0;
            *(uVar31 + 0xc) = puVar14;
            *(uVar31 + 0x10) = uVar18;
            *(uVar31 + 0x18) = uVar23;
            *(uVar31 + 0x28) = uStack_2ac;
            *(uVar31 + 0x2c) = uStack_2a8;
            *(uVar31 + 0x30) = uStack_230;
            *(uVar31 + 0x34) = uVar8;
            uVar32 = uVar17;
            iVar12 = iStack_2a0;
            piVar20 = piVar22;
            perf_trace_run_bpf_submit(uVar31,unaff_x28);
            uVar29 = uVar31;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_298) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar11 = auVar39._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18_03 = 0x8006d78;
    uStack_308 = 0x8006d78;
    iVar10 = sp_el0;
    iStack_318 = *(iVar10 + 0x5e0);
    uVar33 = *(iVar11 + 0x48);
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    uVar27 = uVar33;
    uVar31 = uVar32;
    uVar35 = uVar19;
    iVar10 = iVar12;
    piVar21 = piVar20;
    puStack_310 = &stack0xfffffffffffffd70;
    piStack_300 = piVar22;
    uStack_2f8 = uVar26;
    uStack_2f0 = uVar18;
    uStack_2e8 = uVar23;
    uStack_2e0 = uVar29;
    pcStack_2d8 = pcVar24;
    uStack_2d0 = uVar28;
    uStack_2c8 = uVar17;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar31 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar11), (uVar18 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar34 = "(null)";
        if (auVar39._8_8_ != NULL) {
            pcVar34 = auVar39._8_8_;
        }
        auVar39._8_8_ = pcVar34;
        auVar39._0_8_ = iVar11;
        iVar9 = strlen(pcVar34);
        uVar27 = iVar9 + 1;
        uVar33 = uVar27;
        puVar14 = uVar27 + 0x30;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffcb8,iVar11);
        auVar4._8_8_ = pcVar34;
        auVar4._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar27 * 0x10000 | 0x30;
            strcpy(iVar11 + 0x30,pcVar34);
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar32;
            *(iVar11 + 0x18) = uVar19;
            *(iVar11 + 0x20) = iVar12;
            *(iVar11 + 0x28) = piVar20;
            trace_event_buffer_commit(&stack0xfffffffffffffcb8);
            auVar39 = auVar4;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_318) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_04 = sym.perf_trace_memlat_dev_update;
    pcStack_3a8 = sym.perf_trace_memlat_dev_update;
    iVar11 = sp_el0;
    pcVar34 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar34 = auVar37._8_8_;
    }
    iStack_3b8 = *(iVar11 + 0x5e0);
    uVar29 = puVar14 & 0xffffffff;
    iStack_3c0 = 0;
    uStack_3c4 = 0;
    puVar16 = puVar14;
    uVar23 = uVar31;
    uVar28 = uVar35;
    iStack_3d8 = iVar10;
    piStack_3d0 = piVar21;
    puStack_3b0 = &stack0xfffffffffffffcf0;
    uStack_3a0 = unaff_x28;
    pcStack_398 = pcVar36;
    uStack_390 = uVar33;
    uStack_388 = auVar39._8_8_;
    uStack_380 = auVar39._0_8_;
    uStack_378 = puVar15 & 0xffffffff;
    uStack_370 = uVar32;
    uStack_368 = uVar19;
    iStack_360 = iVar12;
    piStack_358 = piVar20;
    iVar11 = strlen(pcVar34);
    iVar12 = tpidr_el1;
    piVar20 = iVar12 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar16 = &stack0xfffffffffffffc3c;
        pcVar36 = (iVar11 + 0x3cU & 0xfffffff8) - 4;
        uVar17 = perf_trace_buf_alloc(pcVar36,&stack0xfffffffffffffc40);
        if (uVar17 != 0) {
            uVar23 = ___cpu_online_mask & 0x3f;
            *(iStack_3c0 + 0xe8) = &stack0xfffffffffffffc50;
            *(iStack_3c0 + 0xf8) = &stack0xfffffffffffffc20;
            *(iStack_3c0 + 0x100) = ~(-1L << uVar23) & 0x8006eb0;
            *(iStack_3c0 + 0x108) = 5;
            *(uVar17 + 8) = iVar11 * 0x10000 + 0x10030;
            strcpy(uVar17 + 0x30,pcVar34);
            puVar16 = uStack_3c4;
            uVar28 = 1;
            uVar25 = 0;
            *(uVar17 + 0xc) = puVar14;
            *(uVar17 + 0x10) = uVar31;
            *(uVar17 + 0x18) = uVar35;
            *(uVar17 + 0x20) = iStack_3d8;
            *(uVar17 + 0x28) = piStack_3d0;
            uVar23 = uVar18;
            iVar10 = iStack_3c0;
            piVar21 = piVar20;
            perf_trace_run_bpf_submit(uVar17,pcVar36);
            uVar19 = uVar17;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar13 = auVar40._0_8_;
    uVar30 = tpidr_el2;
    *extraout_x18_05 = 0x8007040;
    uStack_418 = 0x8007040;
    pcStack_3f0 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    iStack_428 = *(iVar12 + 0x5e0);
    uVar26 = *(iVar13 + 0x48);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    uVar27 = uVar26;
    uVar17 = uVar23;
    uVar32 = uVar28;
    puStack_420 = &stack0xfffffffffffffc50;
    uStack_410 = uVar29;
    uStack_408 = uVar31;
    uStack_400 = uVar35;
    uStack_3f8 = uVar19;
    uStack_3e8 = uVar18;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar17 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar13), (uVar18 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar1 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar1;
        auVar40._0_8_ = iVar13;
        iVar9 = strlen(pcVar1);
        uVar27 = iVar9 + 1;
        uVar26 = uVar27;
        puVar14 = uVar27 + 0x28;
        iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffba8,iVar13);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar27 * 0x10000 | 0x24;
            strcpy(iVar12 + 0x24,pcVar1);
            *(iVar12 + 0x10) = puVar16;
            *(iVar12 + 0x18) = uVar23;
            *(iVar12 + 0x20) = uVar28;
            trace_event_buffer_commit(&stack0xfffffffffffffba8);
            auVar40 = auVar5;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_428) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_06 = sym.perf_trace_bw_hwmon_meas;
    pcStack_4b8 = sym.perf_trace_bw_hwmon_meas;
    iVar12 = sp_el0;
    pcVar1 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar1 = auVar37._8_8_;
    }
    iStack_4c8 = *(iVar12 + 0x5e0);
    pcVar24 = sym.perf_trace_bw_hwmon_meas;
    uVar31 = uVar32 & 0xffffffff;
    iStack_4d0 = 0;
    uStack_4d4 = 0;
    puVar15 = puVar14;
    uVar29 = uVar17;
    uVar19 = uVar32;
    puStack_4c0 = &stack0xfffffffffffffbe0;
    iStack_4b0 = iVar11;
    pcStack_4a8 = pcVar36;
    pcStack_4a0 = pcVar34;
    piStack_498 = piVar20;
    uStack_490 = uVar26;
    uStack_488 = auVar40._8_8_;
    uStack_480 = auVar40._0_8_;
    puStack_478 = puVar16;
    uStack_470 = uVar23;
    uStack_468 = uVar28 & 0xffffffff;
    uVar30 = strlen(pcVar1);
    iVar12 = tpidr_el1;
    piVar20 = iVar12 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar15 = &stack0xfffffffffffffb2c;
        pcVar34 = (uVar30 + 0x34U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(pcVar34,&stack0xfffffffffffffb30);
        if (iVar12 != 0) {
            uVar23 = ___cpu_online_mask & 0x3f;
            *(iStack_4d0 + 0xe8) = &stack0xfffffffffffffb40;
            *(iStack_4d0 + 0xf8) = &stack0xfffffffffffffb20;
            *(iStack_4d0 + 0x100) = ~(-1L << uVar23) & 0x8007164;
            *(iStack_4d0 + 0x108) = 5;
            *(iVar12 + 8) = uVar30 * 0x10000 + 0x10024;
            strcpy(iVar12 + 0x24,pcVar1);
            puVar15 = uStack_4d4;
            uVar19 = 1;
            uVar25 = 0;
            *(iVar12 + 0x10) = puVar14;
            *(iVar12 + 0x18) = uVar17;
            *(iVar12 + 0x20) = uVar32;
            uVar29 = uVar18;
            iVar10 = iStack_4d0;
            piVar21 = piVar20;
            perf_trace_run_bpf_submit(iVar12,pcVar34);
            iVar11 = iVar12;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_4c8) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar13 = auVar41._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_07 = 0x80072e4;
    uStack_528 = 0x80072e4;
    iVar12 = sp_el0;
    iStack_538 = *(iVar12 + 0x5e0);
    uVar32 = *(iVar13 + 0x48);
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uVar27 = uVar32;
    uVar23 = uVar29;
    uVar28 = uVar19;
    iVar12 = iVar10;
    puStack_530 = &stack0xfffffffffffffb40;
    uStack_520 = uVar30;
    pcStack_510 = pcVar1;
    piStack_508 = piVar20;
    puStack_500 = puVar14;
    uStack_4f8 = uVar17;
    uStack_4f0 = uVar31;
    uStack_4e8 = uVar18;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar23 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar27 >> 6 & 1) == 0) &&
           (((uVar27 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar13), (uVar18 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar36 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar36 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar36;
        auVar41._0_8_ = iVar13;
        iVar9 = strlen(pcVar36);
        uVar27 = iVar9 + 1;
        uVar32 = uVar27;
        puVar14 = uVar27 + 0x30;
        iVar13 = trace_event_buffer_reserve(&stack0xfffffffffffffa98,iVar13);
        auVar6._8_8_ = pcVar36;
        auVar6._0_8_ = iVar13;
        if (iVar13 != 0) {
            *(iVar13 + 8) = uVar27 * 0x10000 | 0x30;
            strcpy(iVar13 + 0x30,pcVar36);
            *(iVar13 + 0x10) = puVar15;
            *(iVar13 + 0x18) = uVar29;
            *(iVar13 + 0x20) = uVar19;
            *(iVar13 + 0x28) = iVar10;
            trace_event_buffer_commit(&stack0xfffffffffffffa98);
            auVar41 = auVar6;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_538) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_08 = sym.perf_trace_bw_hwmon_update;
    pcStack_5c8 = sym.perf_trace_bw_hwmon_update;
    pcStack_5b8 = sym.perf_trace_bw_hwmon_meas;
    iVar13 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_5d8 = *(iVar13 + 0x5e0);
    iStack_5e0 = 0;
    uStack_5e4 = 0;
    puVar16 = puVar14;
    uVar17 = uVar23;
    uVar26 = uVar28;
    iStack_5f0 = iVar12;
    puStack_5d0 = &stack0xfffffffffffffad0;
    iStack_5c0 = iVar11;
    pcStack_5b0 = pcVar34;
    uStack_5a8 = uVar32;
    uStack_5a0 = auVar41._8_8_;
    uStack_598 = auVar41._0_8_;
    puStack_590 = puVar15;
    uStack_588 = uVar29;
    uStack_580 = uVar19;
    iStack_578 = iVar10;
    uVar30 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar20 = iVar10 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar16 = &stack0xfffffffffffffa1c;
        pcVar24 = (uVar30 + 0x3cU & 0xfffffff8) - 4;
        uVar29 = perf_trace_buf_alloc(pcVar24,&stack0xfffffffffffffa20);
        if (uVar29 != 0) {
            uVar17 = ___cpu_online_mask & 0x3f;
            *(iStack_5e0 + 0xe8) = &stack0xfffffffffffffa30;
            *(iStack_5e0 + 0xf8) = &stack0xfffffffffffffa10;
            *(iStack_5e0 + 0x100) = ~(-1L << uVar17) & 0x8007414;
            *(iStack_5e0 + 0x108) = 5;
            *(uVar29 + 8) = uVar30 * 0x10000 + 0x10030;
            strcpy(uVar29 + 0x30,pcVar36);
            puVar16 = uStack_5e4;
            uVar26 = 1;
            uVar25 = 0;
            *(uVar29 + 0x10) = puVar14;
            *(uVar29 + 0x18) = uVar23;
            *(uVar29 + 0x20) = uVar28;
            *(uVar29 + 0x28) = iStack_5f0;
            uVar17 = uVar18;
            iVar12 = iStack_5e0;
            piVar21 = piVar20;
            perf_trace_run_bpf_submit(uVar29,pcVar24);
            uVar19 = uVar29;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_5d8) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar11 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_09 = 0x800759c;
    uStack_648 = 0x800759c;
    iVar10 = sp_el0;
    iStack_658 = *(iVar10 + 0x5e0);
    uVar35 = *(iVar11 + 0x48);
    uStack_668 = 0;
    uStack_660 = 0;
    uStack_678 = 0;
    uStack_670 = 0;
    uStack_688 = 0;
    uStack_680 = 0;
    uVar27 = uVar35;
    uVar29 = uVar17;
    uVar32 = uVar26;
    iVar10 = iVar12;
    piVar22 = piVar21;
    uVar31 = uVar25;
    puStack_650 = &stack0xfffffffffffffa30;
    pcStack_640 = pcVar24;
    uStack_630 = uVar30;
    pcStack_628 = pcVar36;
    piStack_620 = piVar20;
    puStack_618 = puVar14;
    uStack_610 = uVar23;
    uStack_608 = uVar28;
    uStack_600 = uVar19;
    uStack_5f8 = uVar18;
    if ((uVar27 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar27 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar29 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar27 >> 6 & 1) != 0) ||
           (((uVar27 >> 9 & 1) != 0 && (uVar18 = trace_event_ignore_this_pid(iVar11), (uVar18 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar36 = "(null)";
    if (auVar42._8_8_ != NULL) {
        pcVar36 = auVar42._8_8_;
    }
    auVar42._8_8_ = pcVar36;
    auVar42._0_8_ = iVar11;
    iVar9 = strlen(pcVar36);
    uVar27 = iVar9 + 1;
    uVar35 = uVar27;
    puVar14 = uVar27 + 0x40;
    iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffff978,iVar11);
    auVar7._8_8_ = pcVar36;
    auVar7._0_8_ = iVar11;
    if (iVar11 != 0) {
        *(iVar11 + 8) = uVar27 * 0x10000 | 0x40;
        strcpy(iVar11 + 0x40,pcVar36);
        *(iVar11 + 0x10) = puVar16;
        *(iVar11 + 0x18) = uVar17;
        *(iVar11 + 0x20) = uVar26;
        *(iVar11 + 0x28) = iVar12;
        *(iVar11 + 0x30) = piVar21;
        *(iVar11 + 0x38) = uVar25;
        trace_event_buffer_commit(&stack0xfffffffffffff978);
        auVar42 = auVar7;
    }
code_r0x080076a0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_658) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar18 = auVar37._0_8_;
    *extraout_x18_10 = sym.perf_trace_bw_hwmon_debug;
    pcStack_6e8 = sym.perf_trace_bw_hwmon_debug;
    pcStack_6e0 = sym.perf_trace_bw_hwmon_update;
    iVar11 = sp_el0;
    pcVar36 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar36 = auVar37._8_8_;
    }
    iStack_6f8 = *(iVar11 + 0x5e0);
    iStack_700 = 0;
    uStack_704 = 0;
    puVar15 = puVar14;
    uVar23 = uVar29;
    iStack_720 = iVar10;
    piStack_718 = piVar22;
    uStack_710 = uVar31;
    puStack_6f0 = &stack0xfffffffffffff9b0;
    uStack_6d8 = uVar35;
    uStack_6d0 = auVar42._8_8_;
    uStack_6c8 = auVar42._0_8_;
    puStack_6c0 = puVar16;
    uStack_6b8 = uVar17;
    uStack_6b0 = uVar26;
    iStack_6a8 = iVar12;
    piStack_6a0 = piVar21;
    uStack_698 = uVar25;
    iVar9 = strlen(pcVar36);
    iVar10 = tpidr_el1;
    piVar20 = iVar10 + *(uVar18 + 0x78);
    if ((*(uVar18 + 0x80) != 0) || (*piVar20 != 0)) {
        puVar15 = &stack0xfffffffffffff8fc;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar2,&stack0xfffffffffffff900,puVar15);
        if (iVar10 != 0) {
            uVar23 = ___cpu_online_mask & 0x3f;
            *(iStack_700 + 0xe8) = &stack0xfffffffffffff910;
            *(iStack_700 + 0xf8) = &stack0xfffffffffffff8e0;
            *(iStack_700 + 0x100) = ~(-1L << uVar23) & 0x80076e0;
            *(iStack_700 + 0x108) = 5;
            *(iVar10 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar10 + 0x40,pcVar36);
            puVar15 = uStack_704;
            *(iVar10 + 0x20) = uVar32;
            *(iVar10 + 0x28) = iStack_720;
            *(iVar10 + 0x10) = puVar14;
            *(iVar10 + 0x18) = uVar29;
            *(iVar10 + 0x30) = piStack_718;
            *(iVar10 + 0x38) = uStack_710;
            perf_trace_run_bpf_submit(iVar10,iVar2,puVar15,uVar18,1,iStack_700,piVar20,0);
            uVar23 = uVar18;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_6f8) {
        auVar37 = __stack_chk_fail();
        uVar30 = tpidr_el2;
        *extraout_x18_11 = 0x8007878;
        bpf_trace_run8(auVar37._0_8_,auVar37._8_8_,puVar15 & 0xffffffff,uVar23 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qcom_dcvs_boost @ 0x08006858 (size 236) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006a1c)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_qcom_dcvs_boost(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t in_x4;
    uint64_t uVar22;
    uint64_t uVar23;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar24;
    int64_t *piVar25;
    int64_t *piVar26;
    uint64_t in_x7;
    uint64_t uVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    ulong *extraout_x18_10;
    code *pcVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    char *pcVar33;
    uint64_t uVar34;
    char *pcVar35;
    uint64_t uVar36;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar37 [12];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    uchar auVar43 [16];
    int64_t iStack_690;
    int64_t *piStack_688;
    uint64_t uStack_680;
    uint32_t uStack_674;
    int64_t iStack_670;
    int64_t iStack_668;
    ulong **ppuStack_660;
    code *pcStack_658;
    code *pcStack_650;
    uint64_t uStack_648;
    ulong uStack_640;
    ulong uStack_638;
    uint32_t *puStack_630;
    uint64_t uStack_628;
    uint64_t uStack_620;
    int64_t iStack_618;
    int64_t *piStack_610;
    uint64_t uStack_608;
    ulong uStack_5f8;
    ulong uStack_5f0;
    ulong uStack_5e8;
    ulong uStack_5e0;
    ulong uStack_5d8;
    ulong uStack_5d0;
    int64_t iStack_5c8;
    ulong **ppuStack_5c0;
    ulong uStack_5b8;
    code *pcStack_5b0;
    ulong uStack_5a0;
    char *pcStack_598;
    int64_t *piStack_590;
    uint32_t *puStack_588;
    uint64_t uStack_580;
    uint64_t uStack_578;
    uint64_t uStack_570;
    uint64_t uStack_568;
    int64_t iStack_560;
    uint32_t uStack_554;
    int64_t iStack_550;
    int64_t iStack_548;
    ulong **ppuStack_540;
    code *pcStack_538;
    int64_t iStack_530;
    code *pcStack_528;
    char *pcStack_520;
    uint64_t uStack_518;
    ulong uStack_510;
    ulong uStack_508;
    uint32_t *puStack_500;
    uint64_t uStack_4f8;
    uint64_t uStack_4f0;
    int64_t iStack_4e8;
    ulong uStack_4d8;
    ulong uStack_4d0;
    ulong uStack_4c8;
    ulong uStack_4c0;
    ulong uStack_4b8;
    ulong uStack_4b0;
    int64_t iStack_4a8;
    ulong **ppuStack_4a0;
    ulong uStack_498;
    ulong uStack_490;
    char *pcStack_480;
    int64_t *piStack_478;
    uint32_t *puStack_470;
    uint64_t uStack_468;
    uint64_t uStack_460;
    uint64_t uStack_458;
    uchar auStack_450 [12];
    uint32_t uStack_444;
    int64_t iStack_440;
    int64_t iStack_438;
    ulong **ppuStack_430;
    code *pcStack_428;
    int64_t iStack_420;
    char *pcStack_418;
    char *pcStack_410;
    int64_t *piStack_408;
    uint64_t uStack_400;
    ulong uStack_3f8;
    ulong uStack_3f0;
    uint32_t *puStack_3e8;
    uint64_t uStack_3e0;
    uint64_t uStack_3d8;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    int64_t iStack_398;
    ulong **ppuStack_390;
    ulong uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    uint64_t uStack_370;
    uint64_t uStack_368;
    code *pcStack_360;
    uint64_t uStack_358;
    uchar auStack_350 [8];
    int64_t iStack_348;
    int64_t *piStack_340;
    uint32_t uStack_334;
    int64_t iStack_330;
    int64_t iStack_328;
    ulong **ppuStack_320;
    code *pcStack_318;
    uint64_t uStack_310;
    char *pcStack_308;
    uint64_t uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    int64_t iStack_2d0;
    int64_t *piStack_2c8;
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
    uint64_t uStack_268;
    uint64_t uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    uchar auStack_230 [8];
    int64_t iStack_228;
    uint uStack_21c;
    uint uStack_218;
    uint32_t uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    code *pcStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    int64_t iStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uint32_t uStack_1a0;
    uint64_t auStack_198 [7];
    uchar **ppuStack_160;
    ulong uStack_158;
    uint32_t auStack_100 [2];
    uint32_t uStack_f8;
    uint32_t uStack_f4;
    int64_t iStack_f0;
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
    iVar14 = sp_el0;
    iStack_58 = *(iVar14 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar29 = *(arg1 + 0x48);
    uVar20 = arg4;
    uVar21 = in_x4;
    iVar14 = in_x5;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = arg3;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(arg1), (uVar10 & 1) == 0))))
        goto code_r0x080068e0;
    }
    else {
code_r0x080068e0:
        puVar17 = 0x28;
        iVar11 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = arg2;
            *(iVar11 + 0xc) = arg3;
            *(iVar11 + 0x10) = arg4;
            *(iVar11 + 0x18) = in_x4;
            *(iVar11 + 0x20) = in_x5;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar27 = auVar37._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_dcvs_boost;
    pcStack_d8 = sym.perf_trace_qcom_dcvs_boost;
    iVar11 = sp_el0;
    iStack_e8 = *(iVar11 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    iVar11 = tpidr_el1;
    piVar24 = iVar11 + *(uVar27 + 0x78);
    uVar10 = uVar20;
    uVar22 = uVar21;
    iVar11 = iVar14;
    puStack_e0 = &stack0xffffffffffffffb0;
    if ((*(uVar27 + 0x80) != 0) || (puVar18 = puVar17, *piVar24 != 0)) {
        puVar18 = &uStack_f4;
        iVar12 = perf_trace_buf_alloc(0x2c,&iStack_f0);
        uVar34 = ___cpu_online_mask;
        if (iVar12 != 0) {
            *(iStack_f0 + 0xe8) = &puStack_e0;
            puVar18 = uStack_f4;
            uVar22 = 1;
            in_x7 = 0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << (uVar34 & 0x3f)) & 0x8006944;
            *(iStack_f0 + 0x108) = 5;
            *(iVar12 + 8) = auVar37._8_4_;
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar20;
            *(iVar12 + 0x18) = uVar21;
            *(iVar12 + 0x20) = iVar14;
            iVar11 = iStack_f0;
            perf_trace_run_bpf_submit(iVar12,0x2c);
            uVar10 = uVar27;
            in_x6 = piVar24;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    iVar12 = auVar38._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x8006a7c;
    uStack_158 = 0x8006a7c;
    iVar14 = sp_el0;
    auStack_198[6] = *(iVar14 + 0x5e0);
    uVar34 = *(iVar12 + 0x48);
    auStack_198[4] = 0;
    auStack_198[5] = 0;
    auStack_198[2] = 0;
    auStack_198[3] = 0;
    auStack_198[0] = 0;
    auStack_198[1] = 0;
    uVar29 = uVar34;
    uVar20 = uVar10;
    uVar21 = uVar22;
    iVar14 = iVar11;
    piVar24 = in_x6;
    uVar27 = in_x7;
    ppuStack_160 = &puStack_e0;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar35 = "(null)";
        if (auVar38._8_8_ != NULL) {
            pcVar35 = auVar38._8_8_;
        }
        auVar38._8_8_ = pcVar35;
        auVar38._0_8_ = iVar12;
        iVar9 = strlen(pcVar35);
        uVar29 = iVar9 + 1;
        uVar34 = uVar29;
        puVar17 = uVar29 + 0x38;
        iVar12 = trace_event_buffer_reserve(auStack_198,iVar12);
        auVar39._8_8_ = pcVar35;
        auVar39._0_8_ = iVar12;
        if (iVar12 != 0) {
            unaff_x28 = uStack_f8;
            uVar34 = auStack_100[0];
            *(iVar12 + 8) = uVar29 * 0x10000 | 0x38;
            strcpy(iVar12 + 0x38,pcVar35);
            *(iVar12 + 0xc) = puVar18;
            *(iVar12 + 0x10) = uVar10;
            *(iVar12 + 0x18) = uVar22;
            *(iVar12 + 0x20) = iVar11;
            *(iVar12 + 0x28) = in_x6;
            *(iVar12 + 0x2c) = in_x7;
            *(iVar12 + 0x30) = auStack_100[0];
            *(iVar12 + 0x34) = uStack_f8;
            trace_event_buffer_commit(auStack_198);
            auVar38 = auVar39;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == auStack_198[6]) {
        return;
    }
    auVar39 = __stack_chk_fail();
    uVar13 = auVar39._0_8_;
    *extraout_x18_01 = sym.perf_trace_memlat_dev_meas;
    pcStack_1f8 = sym.perf_trace_memlat_dev_meas;
    uStack_21c = SUB84(piVar24,0);
    uStack_218 = uVar27;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar39._8_8_ != NULL) {
        pcVar35 = auVar39._8_8_;
    }
    iStack_208 = *(iVar12 + 0x5e0);
    pcVar28 = sym.perf_trace_memlat_dev_meas;
    uVar30 = puVar17 & 0xffffffff;
    iStack_210 = 0;
    uStack_214 = 0;
    puVar19 = puVar17;
    uVar31 = uVar20;
    uVar23 = uVar21;
    iStack_228 = iVar14;
    ppuStack_200 = &ppuStack_160;
    uStack_1f0 = unaff_x28;
    uStack_1e8 = uVar34;
    uStack_1e0 = auVar38._8_8_;
    uStack_1d8 = auVar38._0_8_;
    uStack_1d0 = puVar18 & 0xffffffff;
    uStack_1c8 = uVar10;
    uStack_1c0 = uVar22;
    iStack_1b8 = iVar11;
    uStack_1b0 = in_x6 & 0xffffffff;
    uStack_1a8 = in_x7 & 0xffffffff;
    uVar10 = strlen(pcVar35);
    iVar11 = tpidr_el1;
    piVar26 = iVar11 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar26 != 0)) {
        iVar9 = uVar10;
        puVar19 = &uStack_214;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar34 = perf_trace_buf_alloc(unaff_x28,&iStack_210);
        if (uVar34 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_198[0];
            pcVar28 = auStack_198[0] & 0xffffffff;
            *(iStack_210 + 0xe8) = &ppuStack_200;
            *(iStack_210 + 0xf8) = auStack_230;
            uVar10 = uStack_1a0;
            *(iStack_210 + 0x100) = ~(-1L << uVar22) & 0x8006bd0;
            *(iStack_210 + 0x108) = 5;
            *(uVar34 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar34 + 0x38,pcVar35);
            puVar19 = uStack_214;
            *(uVar34 + 0x20) = iStack_228;
            uVar23 = 1;
            uVar27 = 0;
            *(uVar34 + 0xc) = puVar17;
            *(uVar34 + 0x10) = uVar20;
            *(uVar34 + 0x18) = uVar21;
            *(uVar34 + 0x28) = uStack_21c;
            *(uVar34 + 0x2c) = uStack_218;
            *(uVar34 + 0x30) = uStack_1a0;
            *(uVar34 + 0x34) = uVar8;
            uVar31 = uVar13;
            iVar14 = iStack_210;
            piVar24 = piVar26;
            perf_trace_run_bpf_submit(uVar34,unaff_x28);
            uVar22 = uVar34;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_208) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar12 = auVar40._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x8006d78;
    uStack_278 = 0x8006d78;
    iVar11 = sp_el0;
    iStack_288 = *(iVar11 + 0x5e0);
    uVar32 = *(iVar12 + 0x48);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uVar29 = uVar32;
    uVar34 = uVar31;
    uVar36 = uVar23;
    iVar11 = iVar14;
    piVar25 = piVar24;
    ppuStack_280 = &ppuStack_200;
    piStack_270 = piVar26;
    uStack_268 = uVar30;
    uStack_260 = uVar20;
    uStack_258 = uVar21;
    uStack_250 = uVar22;
    pcStack_248 = pcVar28;
    uStack_240 = uVar10;
    uStack_238 = uVar13;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar34 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar33 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar33 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar33;
        auVar40._0_8_ = iVar12;
        iVar9 = strlen(pcVar33);
        uVar29 = iVar9 + 1;
        uVar32 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar12 = trace_event_buffer_reserve(&uStack_2b8,iVar12);
        auVar4._8_8_ = pcVar33;
        auVar4._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar33);
            *(iVar12 + 0xc) = puVar19;
            *(iVar12 + 0x10) = uVar31;
            *(iVar12 + 0x18) = uVar23;
            *(iVar12 + 0x20) = iVar14;
            *(iVar12 + 0x28) = piVar24;
            trace_event_buffer_commit(&uStack_2b8);
            auVar40 = auVar4;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_288) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_03 = sym.perf_trace_memlat_dev_update;
    pcStack_318 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    pcVar33 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar33 = auVar38._8_8_;
    }
    iStack_328 = *(iVar12 + 0x5e0);
    uVar22 = puVar17 & 0xffffffff;
    iStack_330 = 0;
    uStack_334 = 0;
    puVar18 = puVar17;
    uVar21 = uVar34;
    uVar10 = uVar36;
    iStack_348 = iVar11;
    piStack_340 = piVar25;
    ppuStack_320 = &ppuStack_280;
    uStack_310 = unaff_x28;
    pcStack_308 = pcVar35;
    uStack_300 = uVar32;
    uStack_2f8 = auVar40._8_8_;
    uStack_2f0 = auVar40._0_8_;
    uStack_2e8 = puVar19 & 0xffffffff;
    uStack_2e0 = uVar31;
    uStack_2d8 = uVar23;
    iStack_2d0 = iVar14;
    piStack_2c8 = piVar24;
    iVar12 = strlen(pcVar33);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_334;
        pcVar35 = (iVar12 + 0x3cU & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(pcVar35,&iStack_330);
        if (uVar13 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_330 + 0xe8) = &ppuStack_320;
            *(iStack_330 + 0xf8) = auStack_350;
            *(iStack_330 + 0x100) = ~(-1L << uVar21) & 0x8006eb0;
            *(iStack_330 + 0x108) = 5;
            *(uVar13 + 8) = iVar12 * 0x10000 + 0x10030;
            strcpy(uVar13 + 0x30,pcVar33);
            puVar18 = uStack_334;
            uVar10 = 1;
            uVar27 = 0;
            *(uVar13 + 0xc) = puVar17;
            *(uVar13 + 0x10) = uVar34;
            *(uVar13 + 0x18) = uVar36;
            *(uVar13 + 0x20) = iStack_348;
            *(uVar13 + 0x28) = piStack_340;
            uVar21 = uVar20;
            iVar11 = iStack_330;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(uVar13,pcVar35);
            uVar23 = uVar13;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_328) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar16 = auVar41._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_04 = 0x8007040;
    uStack_388 = 0x8007040;
    pcStack_360 = sym.perf_trace_memlat_dev_update;
    iVar14 = sp_el0;
    iStack_398 = *(iVar14 + 0x5e0);
    uVar30 = *(iVar16 + 0x48);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uVar29 = uVar30;
    uVar13 = uVar21;
    uVar31 = uVar10;
    ppuStack_390 = &ppuStack_320;
    uStack_380 = uVar22;
    uStack_378 = uVar34;
    uStack_370 = uVar36;
    uStack_368 = uVar23;
    uStack_358 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar1 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar1;
        auVar41._0_8_ = iVar16;
        iVar9 = strlen(pcVar1);
        uVar29 = iVar9 + 1;
        uVar30 = uVar29;
        puVar17 = uVar29 + 0x28;
        iVar14 = trace_event_buffer_reserve(&uStack_3c8,iVar16);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar29 * 0x10000 | 0x24;
            strcpy(iVar14 + 0x24,pcVar1);
            *(iVar14 + 0x10) = puVar18;
            *(iVar14 + 0x18) = uVar21;
            *(iVar14 + 0x20) = uVar10;
            trace_event_buffer_commit(&uStack_3c8);
            auVar41 = auVar5;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_398) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_05 = sym.perf_trace_bw_hwmon_meas;
    pcStack_428 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar1 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar1 = auVar38._8_8_;
    }
    iStack_438 = *(iVar14 + 0x5e0);
    pcVar28 = sym.perf_trace_bw_hwmon_meas;
    uVar23 = uVar31 & 0xffffffff;
    iStack_440 = 0;
    uStack_444 = 0;
    puVar19 = puVar17;
    uVar22 = uVar13;
    uVar34 = uVar31;
    ppuStack_430 = &ppuStack_390;
    iStack_420 = iVar12;
    pcStack_418 = pcVar35;
    pcStack_410 = pcVar33;
    piStack_408 = piVar24;
    uStack_400 = uVar30;
    uStack_3f8 = auVar41._8_8_;
    uStack_3f0 = auVar41._0_8_;
    puStack_3e8 = puVar18;
    uStack_3e0 = uVar21;
    uStack_3d8 = uVar10 & 0xffffffff;
    uVar15 = strlen(pcVar1);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar19 = &uStack_444;
        pcVar33 = (uVar15 + 0x34U & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(pcVar33,&iStack_440);
        if (iVar14 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_440 + 0xe8) = &ppuStack_430;
            *(iStack_440 + 0xf8) = auStack_450;
            *(iStack_440 + 0x100) = ~(-1L << uVar21) & 0x8007164;
            *(iStack_440 + 0x108) = 5;
            *(iVar14 + 8) = uVar15 * 0x10000 + 0x10024;
            strcpy(iVar14 + 0x24,pcVar1);
            puVar19 = uStack_444;
            uVar34 = 1;
            uVar27 = 0;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar13;
            *(iVar14 + 0x20) = uVar31;
            uVar22 = uVar20;
            iVar11 = iStack_440;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(iVar14,pcVar33);
            iVar12 = iVar14;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_438) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar16 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_06 = 0x80072e4;
    uStack_498 = 0x80072e4;
    iVar14 = sp_el0;
    iStack_4a8 = *(iVar14 + 0x5e0);
    uVar31 = *(iVar16 + 0x48);
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4c8 = 0;
    uStack_4c0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uVar29 = uVar31;
    uVar21 = uVar22;
    uVar10 = uVar34;
    iVar14 = iVar11;
    ppuStack_4a0 = &ppuStack_430;
    uStack_490 = uVar15;
    pcStack_480 = pcVar1;
    piStack_478 = piVar24;
    puStack_470 = puVar17;
    uStack_468 = uVar13;
    uStack_460 = uVar23;
    uStack_458 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar29 >> 6 & 1) == 0) &&
           (((uVar29 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar35 = "(null)";
        if (auVar42._8_8_ != NULL) {
            pcVar35 = auVar42._8_8_;
        }
        auVar42._8_8_ = pcVar35;
        auVar42._0_8_ = iVar16;
        iVar9 = strlen(pcVar35);
        uVar29 = iVar9 + 1;
        uVar31 = uVar29;
        puVar17 = uVar29 + 0x30;
        iVar16 = trace_event_buffer_reserve(&uStack_4d8,iVar16);
        auVar6._8_8_ = pcVar35;
        auVar6._0_8_ = iVar16;
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar29 * 0x10000 | 0x30;
            strcpy(iVar16 + 0x30,pcVar35);
            *(iVar16 + 0x10) = puVar19;
            *(iVar16 + 0x18) = uVar22;
            *(iVar16 + 0x20) = uVar34;
            *(iVar16 + 0x28) = iVar11;
            trace_event_buffer_commit(&uStack_4d8);
            auVar42 = auVar6;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_4a8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_07 = sym.perf_trace_bw_hwmon_update;
    pcStack_538 = sym.perf_trace_bw_hwmon_update;
    pcStack_528 = sym.perf_trace_bw_hwmon_meas;
    iVar16 = sp_el0;
    pcVar35 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar35 = auVar38._8_8_;
    }
    iStack_548 = *(iVar16 + 0x5e0);
    iStack_550 = 0;
    uStack_554 = 0;
    puVar18 = puVar17;
    uVar13 = uVar21;
    uVar23 = uVar10;
    iStack_560 = iVar14;
    ppuStack_540 = &ppuStack_4a0;
    iStack_530 = iVar12;
    pcStack_520 = pcVar33;
    uStack_518 = uVar31;
    uStack_510 = auVar42._8_8_;
    uStack_508 = auVar42._0_8_;
    puStack_500 = puVar19;
    uStack_4f8 = uVar22;
    uStack_4f0 = uVar34;
    iStack_4e8 = iVar11;
    uVar15 = strlen(pcVar35);
    iVar11 = tpidr_el1;
    piVar24 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar18 = &uStack_554;
        pcVar28 = (uVar15 + 0x3cU & 0xfffffff8) - 4;
        uVar22 = perf_trace_buf_alloc(pcVar28,&iStack_550);
        if (uVar22 != 0) {
            uVar27 = ___cpu_online_mask & 0x3f;
            *(iStack_550 + 0xe8) = &ppuStack_540;
            *(iStack_550 + 0xf8) = &iStack_560;
            *(iStack_550 + 0x100) = ~(-1L << uVar27) & 0x8007414;
            *(iStack_550 + 0x108) = 5;
            *(uVar22 + 8) = uVar15 * 0x10000 + 0x10030;
            strcpy(uVar22 + 0x30,pcVar35);
            puVar18 = uStack_554;
            uVar23 = 1;
            uVar27 = 0;
            *(uVar22 + 0x10) = puVar17;
            *(uVar22 + 0x18) = uVar21;
            *(uVar22 + 0x20) = uVar10;
            *(uVar22 + 0x28) = iStack_560;
            uVar13 = uVar20;
            iVar14 = iStack_550;
            piVar25 = piVar24;
            perf_trace_run_bpf_submit(uVar22,pcVar28);
            uVar34 = uVar22;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_548) {
        return;
    }
    auVar43 = __stack_chk_fail();
    iVar12 = auVar43._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_08 = 0x800759c;
    uStack_5b8 = 0x800759c;
    iVar11 = sp_el0;
    iStack_5c8 = *(iVar11 + 0x5e0);
    uVar36 = *(iVar12 + 0x48);
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    uStack_5e8 = 0;
    uStack_5e0 = 0;
    uStack_5f8 = 0;
    uStack_5f0 = 0;
    uVar29 = uVar36;
    uVar22 = uVar13;
    uVar31 = uVar23;
    iVar11 = iVar14;
    piVar26 = piVar25;
    uVar30 = uVar27;
    ppuStack_5c0 = &ppuStack_540;
    pcStack_5b0 = pcVar28;
    uStack_5a0 = uVar15;
    pcStack_598 = pcVar35;
    piStack_590 = piVar24;
    puStack_588 = puVar17;
    uStack_580 = uVar21;
    uStack_578 = uVar10;
    uStack_570 = uVar34;
    uStack_568 = uVar20;
    if ((uVar29 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar29 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar22 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar29 >> 6 & 1) != 0) ||
           (((uVar29 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar35 = "(null)";
    if (auVar43._8_8_ != NULL) {
        pcVar35 = auVar43._8_8_;
    }
    auVar43._8_8_ = pcVar35;
    auVar43._0_8_ = iVar12;
    iVar9 = strlen(pcVar35);
    uVar29 = iVar9 + 1;
    uVar36 = uVar29;
    puVar17 = uVar29 + 0x40;
    iVar12 = trace_event_buffer_reserve(&uStack_5f8,iVar12);
    auVar7._8_8_ = pcVar35;
    auVar7._0_8_ = iVar12;
    if (iVar12 != 0) {
        *(iVar12 + 8) = uVar29 * 0x10000 | 0x40;
        strcpy(iVar12 + 0x40,pcVar35);
        *(iVar12 + 0x10) = puVar18;
        *(iVar12 + 0x18) = uVar13;
        *(iVar12 + 0x20) = uVar23;
        *(iVar12 + 0x28) = iVar14;
        *(iVar12 + 0x30) = piVar25;
        *(iVar12 + 0x38) = uVar27;
        trace_event_buffer_commit(&uStack_5f8);
        auVar43 = auVar7;
    }
code_r0x080076a0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_5c8) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar20 = auVar38._0_8_;
    *extraout_x18_09 = sym.perf_trace_bw_hwmon_debug;
    pcStack_658 = sym.perf_trace_bw_hwmon_debug;
    pcStack_650 = sym.perf_trace_bw_hwmon_update;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar35 = auVar38._8_8_;
    }
    iStack_668 = *(iVar12 + 0x5e0);
    iStack_670 = 0;
    uStack_674 = 0;
    puVar19 = puVar17;
    uVar21 = uVar22;
    iStack_690 = iVar11;
    piStack_688 = piVar26;
    uStack_680 = uVar30;
    ppuStack_660 = &ppuStack_5c0;
    uStack_648 = uVar36;
    uStack_640 = auVar43._8_8_;
    uStack_638 = auVar43._0_8_;
    puStack_630 = puVar18;
    uStack_628 = uVar13;
    uStack_620 = uVar23;
    iStack_618 = iVar14;
    piStack_610 = piVar25;
    uStack_608 = uVar27;
    iVar9 = strlen(pcVar35);
    iVar14 = tpidr_el1;
    piVar24 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar24 != 0)) {
        puVar19 = &uStack_674;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(iVar2,&iStack_670,puVar19);
        if (iVar14 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_670 + 0xe8) = &ppuStack_660;
            *(iStack_670 + 0xf8) = &iStack_690;
            *(iStack_670 + 0x100) = ~(-1L << uVar21) & 0x80076e0;
            *(iStack_670 + 0x108) = 5;
            *(iVar14 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar14 + 0x40,pcVar35);
            puVar19 = uStack_674;
            *(iVar14 + 0x20) = uVar31;
            *(iVar14 + 0x28) = iStack_690;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar22;
            *(iVar14 + 0x30) = piStack_688;
            *(iVar14 + 0x38) = uStack_680;
            perf_trace_run_bpf_submit(iVar14,iVar2,puVar19,uVar20,1,iStack_670,piVar24,0);
            uVar21 = uVar20;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_668) {
        auVar38 = __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_10 = 0x8007878;
        bpf_trace_run8(auVar38._0_8_,auVar38._8_8_,puVar19 & 0xffffffff,uVar21 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_qcom_dcvs_boost @ 0x08006944 (size 324) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_qcom_dcvs_boost(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    uint uVar8;
    int iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong uVar14;
    int64_t iVar15;
    int64_t iVar16;
    uchar *puVar17;
    uchar *puVar18;
    uchar *puVar19;
    uint64_t in_x4;
    uint64_t uVar20;
    uint64_t uVar21;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar22;
    int64_t *piVar23;
    int64_t *piVar24;
    uint64_t in_x7;
    uint64_t uVar25;
    uint64_t uVar26;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    ulong *extraout_x18_09;
    code *pcVar27;
    uint32_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    uint64_t uVar32;
    char *pcVar33;
    uint64_t uVar34;
    char *pcVar35;
    uint64_t uVar36;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uchar auVar40 [16];
    uchar auVar41 [16];
    uchar auVar42 [16];
    int64_t iStack_600;
    int64_t *piStack_5f8;
    uint64_t uStack_5f0;
    uint32_t uStack_5e4;
    int64_t iStack_5e0;
    int64_t iStack_5d8;
    uchar *puStack_5d0;
    code *pcStack_5c8;
    code *pcStack_5c0;
    uint64_t uStack_5b8;
    ulong uStack_5b0;
    ulong uStack_5a8;
    uchar *puStack_5a0;
    uint64_t uStack_598;
    uint64_t uStack_590;
    int64_t iStack_588;
    int64_t *piStack_580;
    uint64_t uStack_578;
    ulong uStack_568;
    ulong uStack_560;
    ulong uStack_558;
    ulong uStack_550;
    ulong uStack_548;
    ulong uStack_540;
    int64_t iStack_538;
    uchar *puStack_530;
    ulong uStack_528;
    code *pcStack_520;
    ulong uStack_510;
    char *pcStack_508;
    int64_t *piStack_500;
    uchar *puStack_4f8;
    uint64_t uStack_4f0;
    uint64_t uStack_4e8;
    uint64_t uStack_4e0;
    uint64_t uStack_4d8;
    int64_t iStack_4d0;
    uint32_t uStack_4c4;
    int64_t iStack_4c0;
    int64_t iStack_4b8;
    uchar *puStack_4b0;
    code *pcStack_4a8;
    int64_t iStack_4a0;
    code *pcStack_498;
    char *pcStack_490;
    uint64_t uStack_488;
    ulong uStack_480;
    ulong uStack_478;
    uchar *puStack_470;
    uint64_t uStack_468;
    uint64_t uStack_460;
    int64_t iStack_458;
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    ulong uStack_428;
    ulong uStack_420;
    int64_t iStack_418;
    uchar *puStack_410;
    ulong uStack_408;
    ulong uStack_400;
    char *pcStack_3f0;
    int64_t *piStack_3e8;
    uchar *puStack_3e0;
    uint64_t uStack_3d8;
    uint64_t uStack_3d0;
    uint64_t uStack_3c8;
    uchar auStack_3c0 [12];
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    uchar *puStack_3a0;
    code *pcStack_398;
    int64_t iStack_390;
    char *pcStack_388;
    char *pcStack_380;
    int64_t *piStack_378;
    uint64_t uStack_370;
    ulong uStack_368;
    ulong uStack_360;
    uchar *puStack_358;
    uint64_t uStack_350;
    uint64_t uStack_348;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    int64_t iStack_308;
    uchar *puStack_300;
    ulong uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    code *pcStack_2d0;
    uint64_t uStack_2c8;
    uchar auStack_2c0 [8];
    int64_t iStack_2b8;
    int64_t *piStack_2b0;
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    uchar *puStack_290;
    code *pcStack_288;
    uint64_t uStack_280;
    char *pcStack_278;
    uint64_t uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    uint64_t uStack_248;
    int64_t iStack_240;
    int64_t *piStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    ulong uStack_1e8;
    int64_t *piStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    uint64_t uStack_1c0;
    code *pcStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uchar auStack_1a0 [8];
    int64_t iStack_198;
    uint uStack_18c;
    uint uStack_188;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar *puStack_170;
    code *pcStack_168;
    uint64_t uStack_160;
    uint64_t uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uint64_t uStack_130;
    int64_t iStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    uint32_t uStack_110;
    uint64_t auStack_108 [7];
    uchar *puStack_d0;
    ulong uStack_c8;
    uint32_t auStack_70 [2];
    uint32_t uStack_68;
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    iStack_60 = 0;
    uStack_64 = 0;
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(arg1 + 0x78);
    uVar13 = arg4;
    uVar20 = in_x4;
    iVar16 = in_x5;
    if ((*(arg1 + 0x80) != 0) || (puVar17 = arg3, *piVar22 != 0)) {
        puVar17 = &stack0xffffffffffffff9c;
        iVar10 = perf_trace_buf_alloc(0x2c,&stack0xffffffffffffffa0);
        uVar26 = ___cpu_online_mask;
        if (iVar10 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar17 = uStack_64;
            uVar26 = -1L << (uVar26 & 0x3f);
            uVar20 = 1;
            uVar13 = (~uVar26 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar13 = uVar26 | unaff_x30;
            }
            in_x7 = 0;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar13;
            *(iStack_60 + 0x108) = 5;
            *(iVar10 + 8) = arg2;
            *(iVar10 + 0xc) = arg3;
            *(iVar10 + 0x10) = arg4;
            *(iVar10 + 0x18) = in_x4;
            *(iVar10 + 0x20) = in_x5;
            iVar16 = iStack_60;
            perf_trace_run_bpf_submit(iVar10,0x2c);
            uVar13 = arg1;
            in_x6 = piVar22;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar12 = auVar37._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18 = 0x8006a7c;
    uStack_c8 = 0x8006a7c;
    iVar10 = sp_el0;
    auStack_108[6] = *(iVar10 + 0x5e0);
    uVar34 = *(iVar12 + 0x48);
    auStack_108[4] = 0;
    auStack_108[5] = 0;
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    auStack_108[0] = 0;
    auStack_108[1] = 0;
    uVar28 = uVar34;
    uVar26 = uVar13;
    uVar29 = uVar20;
    iVar10 = iVar16;
    piVar22 = in_x6;
    uVar25 = in_x7;
    puStack_d0 = &stack0xffffffffffffffb0;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar18 = puVar17;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar26 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar11 = trace_event_ignore_this_pid(iVar12), (uVar11 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar35 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar35 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar35;
        auVar37._0_8_ = iVar12;
        iVar9 = strlen(pcVar35);
        uVar28 = iVar9 + 1;
        uVar34 = uVar28;
        puVar18 = uVar28 + 0x38;
        iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffef8,iVar12);
        auVar38._8_8_ = pcVar35;
        auVar38._0_8_ = iVar12;
        if (iVar12 != 0) {
            unaff_x28 = uStack_68;
            uVar34 = auStack_70[0];
            *(iVar12 + 8) = uVar28 * 0x10000 | 0x38;
            strcpy(iVar12 + 0x38,pcVar35);
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar13;
            *(iVar12 + 0x18) = uVar20;
            *(iVar12 + 0x20) = iVar16;
            *(iVar12 + 0x28) = in_x6;
            *(iVar12 + 0x2c) = in_x7;
            *(iVar12 + 0x30) = auStack_70[0];
            *(iVar12 + 0x34) = uStack_68;
            trace_event_buffer_commit(&stack0xfffffffffffffef8);
            auVar37 = auVar38;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == auStack_108[6]) {
        return;
    }
    auVar38 = __stack_chk_fail();
    uVar11 = auVar38._0_8_;
    *extraout_x18_00 = sym.perf_trace_memlat_dev_meas;
    pcStack_168 = sym.perf_trace_memlat_dev_meas;
    uStack_18c = SUB84(piVar22,0);
    uStack_188 = uVar25;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar38._8_8_ != NULL) {
        pcVar35 = auVar38._8_8_;
    }
    iStack_178 = *(iVar12 + 0x5e0);
    pcVar27 = sym.perf_trace_memlat_dev_meas;
    uVar30 = puVar18 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    puVar19 = puVar18;
    uVar31 = uVar26;
    uVar21 = uVar29;
    iStack_198 = iVar10;
    puStack_170 = &stack0xffffffffffffff30;
    uStack_160 = unaff_x28;
    uStack_158 = uVar34;
    uStack_150 = auVar37._8_8_;
    uStack_148 = auVar37._0_8_;
    uStack_140 = puVar17 & 0xffffffff;
    uStack_138 = uVar13;
    uStack_130 = uVar20;
    iStack_128 = iVar16;
    uStack_120 = in_x6 & 0xffffffff;
    uStack_118 = in_x7 & 0xffffffff;
    uVar13 = strlen(pcVar35);
    iVar16 = tpidr_el1;
    piVar24 = iVar16 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar24 != 0)) {
        iVar9 = uVar13;
        puVar19 = &stack0xfffffffffffffe7c;
        unaff_x28 = (iVar9 + 0x44U & 0xfffffff8) - 4;
        uVar34 = perf_trace_buf_alloc(unaff_x28,&stack0xfffffffffffffe80);
        if (uVar34 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            uVar8 = auStack_108[0];
            pcVar27 = auStack_108[0] & 0xffffffff;
            *(iStack_180 + 0xe8) = &stack0xfffffffffffffe90;
            *(iStack_180 + 0xf8) = &stack0xfffffffffffffe60;
            uVar13 = uStack_110;
            *(iStack_180 + 0x100) = ~(-1L << uVar20) & 0x8006bd0;
            *(iStack_180 + 0x108) = 5;
            *(uVar34 + 8) = iVar9 * 0x10000 + 0x10038;
            strcpy(uVar34 + 0x38,pcVar35);
            puVar19 = uStack_184;
            *(uVar34 + 0x20) = iStack_198;
            uVar21 = 1;
            uVar25 = 0;
            *(uVar34 + 0xc) = puVar18;
            *(uVar34 + 0x10) = uVar26;
            *(uVar34 + 0x18) = uVar29;
            *(uVar34 + 0x28) = uStack_18c;
            *(uVar34 + 0x2c) = uStack_188;
            *(uVar34 + 0x30) = uStack_110;
            *(uVar34 + 0x34) = uVar8;
            uVar31 = uVar11;
            iVar10 = iStack_180;
            piVar22 = piVar24;
            perf_trace_run_bpf_submit(uVar34,unaff_x28);
            uVar20 = uVar34;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_178) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar12 = auVar39._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_01 = 0x8006d78;
    uStack_1e8 = 0x8006d78;
    iVar16 = sp_el0;
    iStack_1f8 = *(iVar16 + 0x5e0);
    uVar32 = *(iVar12 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar28 = uVar32;
    uVar34 = uVar31;
    uVar36 = uVar21;
    iVar16 = iVar10;
    piVar23 = piVar22;
    puStack_1f0 = &stack0xfffffffffffffe90;
    piStack_1e0 = piVar24;
    uStack_1d8 = uVar30;
    uStack_1d0 = uVar26;
    uStack_1c8 = uVar29;
    uStack_1c0 = uVar20;
    pcStack_1b8 = pcVar27;
    uStack_1b0 = uVar13;
    uStack_1a8 = uVar11;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar34 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar33 = "(null)";
        if (auVar39._8_8_ != NULL) {
            pcVar33 = auVar39._8_8_;
        }
        auVar39._8_8_ = pcVar33;
        auVar39._0_8_ = iVar12;
        iVar9 = strlen(pcVar33);
        uVar28 = iVar9 + 1;
        uVar32 = uVar28;
        puVar17 = uVar28 + 0x30;
        iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffdd8,iVar12);
        auVar4._8_8_ = pcVar33;
        auVar4._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar28 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar33);
            *(iVar12 + 0xc) = puVar19;
            *(iVar12 + 0x10) = uVar31;
            *(iVar12 + 0x18) = uVar21;
            *(iVar12 + 0x20) = iVar10;
            *(iVar12 + 0x28) = piVar22;
            trace_event_buffer_commit(&stack0xfffffffffffffdd8);
            auVar39 = auVar4;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_02 = sym.perf_trace_memlat_dev_update;
    pcStack_288 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    pcVar33 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar33 = auVar37._8_8_;
    }
    iStack_298 = *(iVar12 + 0x5e0);
    uVar29 = puVar17 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar18 = puVar17;
    uVar20 = uVar34;
    uVar26 = uVar36;
    iStack_2b8 = iVar16;
    piStack_2b0 = piVar23;
    puStack_290 = &stack0xfffffffffffffe10;
    uStack_280 = unaff_x28;
    pcStack_278 = pcVar35;
    uStack_270 = uVar32;
    uStack_268 = auVar39._8_8_;
    uStack_260 = auVar39._0_8_;
    uStack_258 = puVar19 & 0xffffffff;
    uStack_250 = uVar31;
    uStack_248 = uVar21;
    iStack_240 = iVar10;
    piStack_238 = piVar22;
    iVar12 = strlen(pcVar33);
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar18 = &stack0xfffffffffffffd5c;
        pcVar35 = (iVar12 + 0x3cU & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(pcVar35,&stack0xfffffffffffffd60);
        if (uVar11 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_2a0 + 0xe8) = &stack0xfffffffffffffd70;
            *(iStack_2a0 + 0xf8) = &stack0xfffffffffffffd40;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar20) & 0x8006eb0;
            *(iStack_2a0 + 0x108) = 5;
            *(uVar11 + 8) = iVar12 * 0x10000 + 0x10030;
            strcpy(uVar11 + 0x30,pcVar33);
            puVar18 = uStack_2a4;
            uVar26 = 1;
            uVar25 = 0;
            *(uVar11 + 0xc) = puVar17;
            *(uVar11 + 0x10) = uVar34;
            *(uVar11 + 0x18) = uVar36;
            *(uVar11 + 0x20) = iStack_2b8;
            *(uVar11 + 0x28) = piStack_2b0;
            uVar20 = uVar13;
            iVar16 = iStack_2a0;
            piVar23 = piVar22;
            perf_trace_run_bpf_submit(uVar11,pcVar35);
            uVar21 = uVar11;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_298) {
        return;
    }
    auVar40 = __stack_chk_fail();
    iVar15 = auVar40._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_03 = 0x8007040;
    uStack_2f8 = 0x8007040;
    pcStack_2d0 = sym.perf_trace_memlat_dev_update;
    iVar10 = sp_el0;
    iStack_308 = *(iVar10 + 0x5e0);
    uVar30 = *(iVar15 + 0x48);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uVar28 = uVar30;
    uVar11 = uVar20;
    uVar31 = uVar26;
    puStack_300 = &stack0xfffffffffffffd70;
    uStack_2f0 = uVar29;
    uStack_2e8 = uVar34;
    uStack_2e0 = uVar36;
    uStack_2d8 = uVar21;
    uStack_2c8 = uVar13;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar15), (uVar13 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar40._8_8_ != NULL) {
            pcVar1 = auVar40._8_8_;
        }
        auVar40._8_8_ = pcVar1;
        auVar40._0_8_ = iVar15;
        iVar9 = strlen(pcVar1);
        uVar28 = iVar9 + 1;
        uVar30 = uVar28;
        puVar17 = uVar28 + 0x28;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffcc8,iVar15);
        auVar5._8_8_ = pcVar1;
        auVar5._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar28 * 0x10000 | 0x24;
            strcpy(iVar10 + 0x24,pcVar1);
            *(iVar10 + 0x10) = puVar18;
            *(iVar10 + 0x18) = uVar20;
            *(iVar10 + 0x20) = uVar26;
            trace_event_buffer_commit(&stack0xfffffffffffffcc8);
            auVar40 = auVar5;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_308) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_04 = sym.perf_trace_bw_hwmon_meas;
    pcStack_398 = sym.perf_trace_bw_hwmon_meas;
    iVar10 = sp_el0;
    pcVar1 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar1 = auVar37._8_8_;
    }
    iStack_3a8 = *(iVar10 + 0x5e0);
    pcVar27 = sym.perf_trace_bw_hwmon_meas;
    uVar21 = uVar31 & 0xffffffff;
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    puVar19 = puVar17;
    uVar29 = uVar11;
    uVar34 = uVar31;
    puStack_3a0 = &stack0xfffffffffffffd00;
    iStack_390 = iVar12;
    pcStack_388 = pcVar35;
    pcStack_380 = pcVar33;
    piStack_378 = piVar22;
    uStack_370 = uVar30;
    uStack_368 = auVar40._8_8_;
    uStack_360 = auVar40._0_8_;
    puStack_358 = puVar18;
    uStack_350 = uVar20;
    uStack_348 = uVar26 & 0xffffffff;
    uVar14 = strlen(pcVar1);
    iVar10 = tpidr_el1;
    piVar22 = iVar10 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar19 = &stack0xfffffffffffffc4c;
        pcVar33 = (uVar14 + 0x34U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(pcVar33,&stack0xfffffffffffffc50);
        if (iVar10 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_3b0 + 0xe8) = &stack0xfffffffffffffc60;
            *(iStack_3b0 + 0xf8) = &stack0xfffffffffffffc40;
            *(iStack_3b0 + 0x100) = ~(-1L << uVar20) & 0x8007164;
            *(iStack_3b0 + 0x108) = 5;
            *(iVar10 + 8) = uVar14 * 0x10000 + 0x10024;
            strcpy(iVar10 + 0x24,pcVar1);
            puVar19 = uStack_3b4;
            uVar34 = 1;
            uVar25 = 0;
            *(iVar10 + 0x10) = puVar17;
            *(iVar10 + 0x18) = uVar11;
            *(iVar10 + 0x20) = uVar31;
            uVar29 = uVar13;
            iVar16 = iStack_3b0;
            piVar23 = piVar22;
            perf_trace_run_bpf_submit(iVar10,pcVar33);
            iVar12 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar41 = __stack_chk_fail();
    iVar15 = auVar41._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_05 = 0x80072e4;
    uStack_408 = 0x80072e4;
    iVar10 = sp_el0;
    iStack_418 = *(iVar10 + 0x5e0);
    uVar31 = *(iVar15 + 0x48);
    uStack_428 = 0;
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uVar28 = uVar31;
    uVar20 = uVar29;
    uVar26 = uVar34;
    iVar10 = iVar16;
    puStack_410 = &stack0xfffffffffffffc60;
    uStack_400 = uVar14;
    pcStack_3f0 = pcVar1;
    piStack_3e8 = piVar22;
    puStack_3e0 = puVar17;
    uStack_3d8 = uVar11;
    uStack_3d0 = uVar21;
    uStack_3c8 = uVar13;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar13 = trace_event_ignore_this_pid(iVar15), (uVar13 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar35 = "(null)";
        if (auVar41._8_8_ != NULL) {
            pcVar35 = auVar41._8_8_;
        }
        auVar41._8_8_ = pcVar35;
        auVar41._0_8_ = iVar15;
        iVar9 = strlen(pcVar35);
        uVar28 = iVar9 + 1;
        uVar31 = uVar28;
        puVar17 = uVar28 + 0x30;
        iVar15 = trace_event_buffer_reserve(&stack0xfffffffffffffbb8,iVar15);
        auVar6._8_8_ = pcVar35;
        auVar6._0_8_ = iVar15;
        if (iVar15 != 0) {
            *(iVar15 + 8) = uVar28 * 0x10000 | 0x30;
            strcpy(iVar15 + 0x30,pcVar35);
            *(iVar15 + 0x10) = puVar19;
            *(iVar15 + 0x18) = uVar29;
            *(iVar15 + 0x20) = uVar34;
            *(iVar15 + 0x28) = iVar16;
            trace_event_buffer_commit(&stack0xfffffffffffffbb8);
            auVar41 = auVar6;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_418) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_06 = sym.perf_trace_bw_hwmon_update;
    pcStack_4a8 = sym.perf_trace_bw_hwmon_update;
    pcStack_498 = sym.perf_trace_bw_hwmon_meas;
    iVar15 = sp_el0;
    pcVar35 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar35 = auVar37._8_8_;
    }
    iStack_4b8 = *(iVar15 + 0x5e0);
    iStack_4c0 = 0;
    uStack_4c4 = 0;
    puVar18 = puVar17;
    uVar11 = uVar20;
    uVar21 = uVar26;
    iStack_4d0 = iVar10;
    puStack_4b0 = &stack0xfffffffffffffbf0;
    iStack_4a0 = iVar12;
    pcStack_490 = pcVar33;
    uStack_488 = uVar31;
    uStack_480 = auVar41._8_8_;
    uStack_478 = auVar41._0_8_;
    puStack_470 = puVar19;
    uStack_468 = uVar29;
    uStack_460 = uVar34;
    iStack_458 = iVar16;
    uVar14 = strlen(pcVar35);
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar18 = &stack0xfffffffffffffb3c;
        pcVar27 = (uVar14 + 0x3cU & 0xfffffff8) - 4;
        uVar29 = perf_trace_buf_alloc(pcVar27,&stack0xfffffffffffffb40);
        if (uVar29 != 0) {
            uVar25 = ___cpu_online_mask & 0x3f;
            *(iStack_4c0 + 0xe8) = &stack0xfffffffffffffb50;
            *(iStack_4c0 + 0xf8) = &stack0xfffffffffffffb30;
            *(iStack_4c0 + 0x100) = ~(-1L << uVar25) & 0x8007414;
            *(iStack_4c0 + 0x108) = 5;
            *(uVar29 + 8) = uVar14 * 0x10000 + 0x10030;
            strcpy(uVar29 + 0x30,pcVar35);
            puVar18 = uStack_4c4;
            uVar21 = 1;
            uVar25 = 0;
            *(uVar29 + 0x10) = puVar17;
            *(uVar29 + 0x18) = uVar20;
            *(uVar29 + 0x20) = uVar26;
            *(uVar29 + 0x28) = iStack_4d0;
            uVar11 = uVar13;
            iVar10 = iStack_4c0;
            piVar23 = piVar22;
            perf_trace_run_bpf_submit(uVar29,pcVar27);
            uVar34 = uVar29;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_4b8) {
        return;
    }
    auVar42 = __stack_chk_fail();
    iVar12 = auVar42._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_07 = 0x800759c;
    uStack_528 = 0x800759c;
    iVar16 = sp_el0;
    iStack_538 = *(iVar16 + 0x5e0);
    uVar36 = *(iVar12 + 0x48);
    uStack_548 = 0;
    uStack_540 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uVar28 = uVar36;
    uVar29 = uVar11;
    uVar31 = uVar21;
    iVar16 = iVar10;
    piVar24 = piVar23;
    uVar30 = uVar25;
    puStack_530 = &stack0xfffffffffffffb50;
    pcStack_520 = pcVar27;
    uStack_510 = uVar14;
    pcStack_508 = pcVar35;
    piStack_500 = piVar22;
    puStack_4f8 = puVar17;
    uStack_4f0 = uVar20;
    uStack_4e8 = uVar26;
    uStack_4e0 = uVar34;
    uStack_4d8 = uVar13;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar29 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) != 0) ||
           (((uVar28 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar12), (uVar13 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar35 = "(null)";
    if (auVar42._8_8_ != NULL) {
        pcVar35 = auVar42._8_8_;
    }
    auVar42._8_8_ = pcVar35;
    auVar42._0_8_ = iVar12;
    iVar9 = strlen(pcVar35);
    uVar28 = iVar9 + 1;
    uVar36 = uVar28;
    puVar17 = uVar28 + 0x40;
    iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffa98,iVar12);
    auVar7._8_8_ = pcVar35;
    auVar7._0_8_ = iVar12;
    if (iVar12 != 0) {
        *(iVar12 + 8) = uVar28 * 0x10000 | 0x40;
        strcpy(iVar12 + 0x40,pcVar35);
        *(iVar12 + 0x10) = puVar18;
        *(iVar12 + 0x18) = uVar11;
        *(iVar12 + 0x20) = uVar21;
        *(iVar12 + 0x28) = iVar10;
        *(iVar12 + 0x30) = piVar23;
        *(iVar12 + 0x38) = uVar25;
        trace_event_buffer_commit(&stack0xfffffffffffffa98);
        auVar42 = auVar7;
    }
code_r0x080076a0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_538) {
        return;
    }
    auVar37 = __stack_chk_fail();
    uVar13 = auVar37._0_8_;
    *extraout_x18_08 = sym.perf_trace_bw_hwmon_debug;
    pcStack_5c8 = sym.perf_trace_bw_hwmon_debug;
    pcStack_5c0 = sym.perf_trace_bw_hwmon_update;
    iVar12 = sp_el0;
    pcVar35 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar35 = auVar37._8_8_;
    }
    iStack_5d8 = *(iVar12 + 0x5e0);
    iStack_5e0 = 0;
    uStack_5e4 = 0;
    puVar19 = puVar17;
    uVar20 = uVar29;
    iStack_600 = iVar16;
    piStack_5f8 = piVar24;
    uStack_5f0 = uVar30;
    puStack_5d0 = &stack0xfffffffffffffad0;
    uStack_5b8 = uVar36;
    uStack_5b0 = auVar42._8_8_;
    uStack_5a8 = auVar42._0_8_;
    puStack_5a0 = puVar18;
    uStack_598 = uVar11;
    uStack_590 = uVar21;
    iStack_588 = iVar10;
    piStack_580 = piVar23;
    uStack_578 = uVar25;
    iVar9 = strlen(pcVar35);
    iVar16 = tpidr_el1;
    piVar22 = iVar16 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar22 != 0)) {
        puVar19 = &stack0xfffffffffffffa1c;
        iVar2 = (iVar9 + 0x4cU & 0xfffffff8) - 4;
        iVar16 = perf_trace_buf_alloc(iVar2,&stack0xfffffffffffffa20,puVar19);
        if (iVar16 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_5e0 + 0xe8) = &stack0xfffffffffffffa30;
            *(iStack_5e0 + 0xf8) = &stack0xfffffffffffffa00;
            *(iStack_5e0 + 0x100) = ~(-1L << uVar20) & 0x80076e0;
            *(iStack_5e0 + 0x108) = 5;
            *(iVar16 + 8) = iVar9 * 0x10000 + 0x10040;
            strcpy(iVar16 + 0x40,pcVar35);
            puVar19 = uStack_5e4;
            *(iVar16 + 0x20) = uVar31;
            *(iVar16 + 0x28) = iStack_600;
            *(iVar16 + 0x10) = puVar17;
            *(iVar16 + 0x18) = uVar29;
            *(iVar16 + 0x30) = piStack_5f8;
            *(iVar16 + 0x38) = uStack_5f0;
            perf_trace_run_bpf_submit(iVar16,iVar2,puVar19,uVar13,1,iStack_5e0,piVar22,0);
            uVar20 = uVar13;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) != iStack_5d8) {
        auVar37 = __stack_chk_fail();
        uVar14 = tpidr_el2;
        *extraout_x18_09 = 0x8007878;
        bpf_trace_run8(auVar37._0_8_,auVar37._8_8_,puVar19 & 0xffffffff,uVar20 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_memlat_dev_meas @ 0x08006a88 (size 328) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x08006cd4)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_memlat_dev_meas(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int iVar2;
    ulong uVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uint uVar7;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    int64_t iVar14;
    ulong uVar15;
    int64_t iVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint32_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t in_x4;
    uint64_t uVar22;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar23;
    int64_t *piVar24;
    int64_t *piVar25;
    uint64_t in_x7;
    uint64_t uVar26;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    code *pcVar27;
    uint32_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    char *pcVar32;
    uint64_t uVar33;
    char *pcVar34;
    uint64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar35 [16];
    uchar auVar36 [16];
    uchar auVar37 [16];
    uchar auVar38 [16];
    uchar auVar39 [16];
    uint32_t in_stack_00000000;
    uint32_t in_stack_00000008;
    int64_t iStack_590;
    int64_t *piStack_588;
    uint64_t uStack_580;
    uint32_t uStack_574;
    int64_t iStack_570;
    int64_t iStack_568;
    ulong **ppuStack_560;
    code *pcStack_558;
    code *pcStack_550;
    uint64_t uStack_548;
    ulong uStack_540;
    ulong uStack_538;
    uint32_t *puStack_530;
    uint64_t uStack_528;
    uint64_t uStack_520;
    int64_t iStack_518;
    int64_t *piStack_510;
    uint64_t uStack_508;
    ulong uStack_4f8;
    ulong uStack_4f0;
    ulong uStack_4e8;
    ulong uStack_4e0;
    ulong uStack_4d8;
    ulong uStack_4d0;
    int64_t iStack_4c8;
    ulong **ppuStack_4c0;
    ulong uStack_4b8;
    code *pcStack_4b0;
    ulong uStack_4a0;
    char *pcStack_498;
    int64_t *piStack_490;
    uint32_t *puStack_488;
    uint64_t uStack_480;
    uint64_t uStack_478;
    uint64_t uStack_470;
    uint64_t uStack_468;
    int64_t iStack_460;
    uint32_t uStack_454;
    int64_t iStack_450;
    int64_t iStack_448;
    ulong **ppuStack_440;
    code *pcStack_438;
    int64_t iStack_430;
    code *pcStack_428;
    char *pcStack_420;
    uint64_t uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    uint32_t *puStack_400;
    uint64_t uStack_3f8;
    uint64_t uStack_3f0;
    int64_t iStack_3e8;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    int64_t iStack_3a8;
    ulong **ppuStack_3a0;
    ulong uStack_398;
    ulong uStack_390;
    char *pcStack_380;
    int64_t *piStack_378;
    uint32_t *puStack_370;
    uint64_t uStack_368;
    uint64_t uStack_360;
    uint64_t uStack_358;
    uchar auStack_350 [12];
    uint32_t uStack_344;
    int64_t iStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    code *pcStack_328;
    int64_t iStack_320;
    char *pcStack_318;
    char *pcStack_310;
    int64_t *piStack_308;
    uint64_t uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    uint32_t *puStack_2e8;
    uint64_t uStack_2e0;
    uint64_t uStack_2d8;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    int64_t iStack_298;
    ulong **ppuStack_290;
    ulong uStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    code *pcStack_260;
    uint64_t uStack_258;
    uchar auStack_250 [8];
    int64_t iStack_248;
    int64_t *piStack_240;
    uint32_t uStack_234;
    int64_t iStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    code *pcStack_218;
    uint64_t uStack_210;
    char *pcStack_208;
    uint64_t uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    uint64_t uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    int64_t iStack_1d0;
    int64_t *piStack_1c8;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar **ppuStack_180;
    ulong uStack_178;
    int64_t *piStack_170;
    uint64_t uStack_168;
    uint64_t uStack_160;
    uint64_t uStack_150;
    code *pcStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    uchar auStack_130 [8];
    int64_t iStack_128;
    uint uStack_11c;
    uint uStack_118;
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    char *pcStack_e0;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint32_t uStack_a0;
    uint64_t auStack_98 [7];
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    auStack_98[6] = *(iVar14 + 0x5e0);
    uVar33 = *(arg1 + 0x48);
    auStack_98[4] = 0;
    auStack_98[5] = 0;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    uVar28 = uVar33;
    uVar20 = arg4;
    uVar21 = in_x4;
    iVar14 = in_x5;
    piVar23 = in_x6;
    uVar26 = in_x7;
    iStack_d8 = arg1;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = arg3;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar20 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(arg1), (uVar9 & 1) == 0))))
        goto code_r0x08006b1c;
    }
    else {
code_r0x08006b1c:
        pcVar34 = "(null)";
        if (arg2 != 0) {
            pcVar34 = arg2;
        }
        iVar8 = strlen(pcVar34);
        uVar28 = iVar8 + 1;
        uVar33 = uVar28;
        puVar17 = uVar28 + 0x38;
        iVar10 = trace_event_buffer_reserve(auStack_98,arg1);
        arg2 = pcVar34;
        if (iVar10 != 0) {
            unaff_x28 = in_stack_00000008;
            uVar33 = in_stack_00000000;
            *(iVar10 + 8) = uVar28 * 0x10000 | 0x38;
            strcpy(iVar10 + 0x38,pcVar34);
            *(iVar10 + 0xc) = arg3;
            *(iVar10 + 0x10) = arg4;
            *(iVar10 + 0x18) = in_x4;
            *(iVar10 + 0x20) = in_x5;
            *(iVar10 + 0x28) = in_x6;
            *(iVar10 + 0x2c) = in_x7;
            *(iVar10 + 0x30) = in_stack_00000000;
            *(iVar10 + 0x34) = in_stack_00000008;
            trace_event_buffer_commit(auStack_98);
            iStack_d8 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == auStack_98[6]) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar9 = auVar35._0_8_;
    *extraout_x18 = sym.perf_trace_memlat_dev_meas;
    pcStack_f8 = sym.perf_trace_memlat_dev_meas;
    uStack_11c = SUB84(piVar23,0);
    uStack_118 = uVar26;
    iVar10 = sp_el0;
    pcVar34 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar34 = auVar35._8_8_;
    }
    iStack_108 = *(iVar10 + 0x5e0);
    pcVar27 = sym.perf_trace_memlat_dev_meas;
    uVar30 = puVar17 & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    puVar18 = puVar17;
    uVar13 = uVar20;
    uVar22 = uVar21;
    iStack_128 = iVar14;
    puStack_100 = &stack0xffffffffffffffa0;
    uStack_f0 = unaff_x28;
    uStack_e8 = uVar33;
    pcStack_e0 = arg2;
    uStack_d0 = arg3 & 0xffffffff;
    iStack_c8 = arg4;
    uStack_b0 = in_x6 & 0xffffffff;
    uStack_a8 = in_x7 & 0xffffffff;
    uVar33 = strlen(pcVar34);
    iVar10 = tpidr_el1;
    piVar25 = iVar10 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar25 != 0)) {
        iVar8 = uVar33;
        puVar18 = &uStack_114;
        unaff_x28 = (iVar8 + 0x44U & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(unaff_x28,&iStack_110);
        if (uVar11 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            uVar7 = auStack_98[0];
            pcVar27 = auStack_98[0] & 0xffffffff;
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = auStack_130;
            uVar33 = uStack_a0;
            *(iStack_110 + 0x100) = ~(-1L << uVar26) & 0x8006bd0;
            *(iStack_110 + 0x108) = 5;
            *(uVar11 + 8) = iVar8 * 0x10000 + 0x10038;
            strcpy(uVar11 + 0x38,pcVar34);
            puVar18 = uStack_114;
            *(uVar11 + 0x20) = iStack_128;
            uVar22 = 1;
            uVar26 = 0;
            *(uVar11 + 0xc) = puVar17;
            *(uVar11 + 0x10) = uVar20;
            *(uVar11 + 0x18) = uVar21;
            *(uVar11 + 0x28) = uStack_11c;
            *(uVar11 + 0x2c) = uStack_118;
            *(uVar11 + 0x30) = uStack_a0;
            *(uVar11 + 0x34) = uVar7;
            uVar13 = uVar9;
            iVar14 = iStack_110;
            piVar23 = piVar25;
            perf_trace_run_bpf_submit(uVar11,unaff_x28);
            in_x4 = uVar11;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_108) {
        return;
    }
    auVar35 = __stack_chk_fail();
    iVar12 = auVar35._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_00 = 0x8006d78;
    uStack_178 = 0x8006d78;
    iVar10 = sp_el0;
    iStack_188 = *(iVar10 + 0x5e0);
    uVar31 = *(iVar12 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar28 = uVar31;
    uVar21 = uVar13;
    uVar11 = uVar22;
    iVar10 = iVar14;
    piVar24 = piVar23;
    ppuStack_180 = &puStack_100;
    piStack_170 = piVar25;
    uStack_168 = uVar30;
    uStack_160 = uVar20;
    uStack_150 = in_x4;
    pcStack_148 = pcVar27;
    uStack_140 = uVar33;
    uStack_138 = uVar9;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar32 = "(null)";
        if (auVar35._8_8_ != NULL) {
            pcVar32 = auVar35._8_8_;
        }
        auVar35._8_8_ = pcVar32;
        auVar35._0_8_ = iVar12;
        iVar8 = strlen(pcVar32);
        uVar28 = iVar8 + 1;
        uVar31 = uVar28;
        puVar17 = uVar28 + 0x30;
        iVar12 = trace_event_buffer_reserve(&uStack_1b8,iVar12);
        auVar36._8_8_ = pcVar32;
        auVar36._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar28 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar32);
            *(iVar12 + 0xc) = puVar18;
            *(iVar12 + 0x10) = uVar13;
            *(iVar12 + 0x18) = uVar22;
            *(iVar12 + 0x20) = iVar14;
            *(iVar12 + 0x28) = piVar23;
            trace_event_buffer_commit(&uStack_1b8);
            auVar35 = auVar36;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_188) {
        return;
    }
    auVar36 = __stack_chk_fail();
    uVar20 = auVar36._0_8_;
    *extraout_x18_01 = sym.perf_trace_memlat_dev_update;
    pcStack_218 = sym.perf_trace_memlat_dev_update;
    iVar12 = sp_el0;
    pcVar32 = "(null)";
    if (auVar36._8_8_ != NULL) {
        pcVar32 = auVar36._8_8_;
    }
    iStack_228 = *(iVar12 + 0x5e0);
    uVar30 = puVar17 & 0xffffffff;
    iStack_230 = 0;
    uStack_234 = 0;
    puVar19 = puVar17;
    uVar33 = uVar21;
    uVar9 = uVar11;
    iStack_248 = iVar10;
    piStack_240 = piVar24;
    ppuStack_220 = &ppuStack_180;
    uStack_210 = unaff_x28;
    pcStack_208 = pcVar34;
    uStack_200 = uVar31;
    uStack_1f8 = auVar35._8_8_;
    uStack_1f0 = auVar35._0_8_;
    uStack_1e8 = puVar18 & 0xffffffff;
    uStack_1e0 = uVar13;
    uStack_1d8 = uVar22;
    iStack_1d0 = iVar14;
    piStack_1c8 = piVar23;
    iVar12 = strlen(pcVar32);
    iVar14 = tpidr_el1;
    piVar23 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar19 = &uStack_234;
        pcVar34 = (iVar12 + 0x3cU & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(pcVar34,&iStack_230);
        if (uVar13 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            *(iStack_230 + 0xe8) = &ppuStack_220;
            *(iStack_230 + 0xf8) = auStack_250;
            *(iStack_230 + 0x100) = ~(-1L << uVar26) & 0x8006eb0;
            *(iStack_230 + 0x108) = 5;
            *(uVar13 + 8) = iVar12 * 0x10000 + 0x10030;
            strcpy(uVar13 + 0x30,pcVar32);
            puVar19 = uStack_234;
            uVar9 = 1;
            uVar26 = 0;
            *(uVar13 + 0xc) = puVar17;
            *(uVar13 + 0x10) = uVar21;
            *(uVar13 + 0x18) = uVar11;
            *(uVar13 + 0x20) = iStack_248;
            *(uVar13 + 0x28) = piStack_240;
            uVar33 = uVar20;
            iVar10 = iStack_230;
            piVar24 = piVar23;
            perf_trace_run_bpf_submit(uVar13,pcVar34);
            uVar22 = uVar13;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_228) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar16 = auVar37._0_8_;
    uVar15 = tpidr_el2;
    *extraout_x18_02 = 0x8007040;
    uStack_288 = 0x8007040;
    pcStack_260 = sym.perf_trace_memlat_dev_update;
    iVar14 = sp_el0;
    iStack_298 = *(iVar14 + 0x5e0);
    uVar29 = *(iVar16 + 0x48);
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uVar28 = uVar29;
    uVar13 = uVar33;
    uVar31 = uVar9;
    ppuStack_290 = &ppuStack_220;
    uStack_280 = uVar30;
    uStack_278 = uVar21;
    uStack_270 = uVar11;
    uStack_268 = uVar22;
    uStack_258 = uVar20;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (auVar37._8_8_ != NULL) {
            pcVar1 = auVar37._8_8_;
        }
        auVar37._8_8_ = pcVar1;
        auVar37._0_8_ = iVar16;
        iVar8 = strlen(pcVar1);
        uVar28 = iVar8 + 1;
        uVar29 = uVar28;
        puVar17 = uVar28 + 0x28;
        iVar14 = trace_event_buffer_reserve(&uStack_2c8,iVar16);
        auVar4._8_8_ = pcVar1;
        auVar4._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar28 * 0x10000 | 0x24;
            strcpy(iVar14 + 0x24,pcVar1);
            *(iVar14 + 0x10) = puVar19;
            *(iVar14 + 0x18) = uVar33;
            *(iVar14 + 0x20) = uVar9;
            trace_event_buffer_commit(&uStack_2c8);
            auVar37 = auVar4;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_298) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar20 = auVar35._0_8_;
    *extraout_x18_03 = sym.perf_trace_bw_hwmon_meas;
    pcStack_328 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar1 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar1 = auVar35._8_8_;
    }
    iStack_338 = *(iVar14 + 0x5e0);
    pcVar27 = sym.perf_trace_bw_hwmon_meas;
    uVar30 = uVar31 & 0xffffffff;
    iStack_340 = 0;
    uStack_344 = 0;
    puVar18 = puVar17;
    uVar21 = uVar13;
    uVar22 = uVar31;
    ppuStack_330 = &ppuStack_290;
    iStack_320 = iVar12;
    pcStack_318 = pcVar34;
    pcStack_310 = pcVar32;
    piStack_308 = piVar23;
    uStack_300 = uVar29;
    uStack_2f8 = auVar37._8_8_;
    uStack_2f0 = auVar37._0_8_;
    puStack_2e8 = puVar19;
    uStack_2e0 = uVar33;
    uStack_2d8 = uVar9 & 0xffffffff;
    uVar15 = strlen(pcVar1);
    iVar14 = tpidr_el1;
    piVar23 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_344;
        pcVar32 = (uVar15 + 0x34U & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(pcVar32,&iStack_340);
        if (iVar14 != 0) {
            uVar21 = ___cpu_online_mask & 0x3f;
            *(iStack_340 + 0xe8) = &ppuStack_330;
            *(iStack_340 + 0xf8) = auStack_350;
            *(iStack_340 + 0x100) = ~(-1L << uVar21) & 0x8007164;
            *(iStack_340 + 0x108) = 5;
            *(iVar14 + 8) = uVar15 * 0x10000 + 0x10024;
            strcpy(iVar14 + 0x24,pcVar1);
            puVar18 = uStack_344;
            uVar22 = 1;
            uVar26 = 0;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar13;
            *(iVar14 + 0x20) = uVar31;
            uVar21 = uVar20;
            iVar10 = iStack_340;
            piVar24 = piVar23;
            perf_trace_run_bpf_submit(iVar14,pcVar32);
            iVar12 = iVar14;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_338) {
        return;
    }
    auVar38 = __stack_chk_fail();
    iVar16 = auVar38._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_04 = 0x80072e4;
    uStack_398 = 0x80072e4;
    iVar14 = sp_el0;
    iStack_3a8 = *(iVar14 + 0x5e0);
    uVar11 = *(iVar16 + 0x48);
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uVar28 = uVar11;
    uVar33 = uVar21;
    uVar9 = uVar22;
    iVar14 = iVar10;
    ppuStack_3a0 = &ppuStack_330;
    uStack_390 = uVar15;
    pcStack_380 = pcVar1;
    piStack_378 = piVar23;
    puStack_370 = puVar17;
    uStack_368 = uVar13;
    uStack_360 = uVar30;
    uStack_358 = uVar20;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar18;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar33 = 0;
            event_triggers_call(iVar16,0);
        }
        if (((uVar28 >> 6 & 1) == 0) &&
           (((uVar28 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar16), (uVar20 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar34 = "(null)";
        if (auVar38._8_8_ != NULL) {
            pcVar34 = auVar38._8_8_;
        }
        auVar38._8_8_ = pcVar34;
        auVar38._0_8_ = iVar16;
        iVar8 = strlen(pcVar34);
        uVar28 = iVar8 + 1;
        uVar11 = uVar28;
        puVar17 = uVar28 + 0x30;
        iVar16 = trace_event_buffer_reserve(&uStack_3d8,iVar16);
        auVar5._8_8_ = pcVar34;
        auVar5._0_8_ = iVar16;
        if (iVar16 != 0) {
            *(iVar16 + 8) = uVar28 * 0x10000 | 0x30;
            strcpy(iVar16 + 0x30,pcVar34);
            *(iVar16 + 0x10) = puVar18;
            *(iVar16 + 0x18) = uVar21;
            *(iVar16 + 0x20) = uVar22;
            *(iVar16 + 0x28) = iVar10;
            trace_event_buffer_commit(&uStack_3d8);
            auVar38 = auVar5;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar20 = auVar35._0_8_;
    *extraout_x18_05 = sym.perf_trace_bw_hwmon_update;
    pcStack_438 = sym.perf_trace_bw_hwmon_update;
    pcStack_428 = sym.perf_trace_bw_hwmon_meas;
    iVar16 = sp_el0;
    pcVar34 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar34 = auVar35._8_8_;
    }
    iStack_448 = *(iVar16 + 0x5e0);
    iStack_450 = 0;
    uStack_454 = 0;
    puVar19 = puVar17;
    uVar13 = uVar33;
    uVar30 = uVar9;
    iStack_460 = iVar14;
    ppuStack_440 = &ppuStack_3a0;
    iStack_430 = iVar12;
    pcStack_420 = pcVar32;
    uStack_418 = uVar11;
    uStack_410 = auVar38._8_8_;
    uStack_408 = auVar38._0_8_;
    puStack_400 = puVar18;
    uStack_3f8 = uVar21;
    uStack_3f0 = uVar22;
    iStack_3e8 = iVar10;
    uVar15 = strlen(pcVar34);
    iVar10 = tpidr_el1;
    piVar23 = iVar10 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar19 = &uStack_454;
        pcVar27 = (uVar15 + 0x3cU & 0xfffffff8) - 4;
        uVar21 = perf_trace_buf_alloc(pcVar27,&iStack_450);
        if (uVar21 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            *(iStack_450 + 0xe8) = &ppuStack_440;
            *(iStack_450 + 0xf8) = &iStack_460;
            *(iStack_450 + 0x100) = ~(-1L << uVar26) & 0x8007414;
            *(iStack_450 + 0x108) = 5;
            *(uVar21 + 8) = uVar15 * 0x10000 + 0x10030;
            strcpy(uVar21 + 0x30,pcVar34);
            puVar19 = uStack_454;
            uVar30 = 1;
            uVar26 = 0;
            *(uVar21 + 0x10) = puVar17;
            *(uVar21 + 0x18) = uVar33;
            *(uVar21 + 0x20) = uVar9;
            *(uVar21 + 0x28) = iStack_460;
            uVar13 = uVar20;
            iVar14 = iStack_450;
            piVar24 = piVar23;
            perf_trace_run_bpf_submit(uVar21,pcVar27);
            uVar22 = uVar21;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_448) {
        return;
    }
    auVar39 = __stack_chk_fail();
    iVar12 = auVar39._0_8_;
    uVar3 = tpidr_el2;
    *extraout_x18_06 = 0x800759c;
    uStack_4b8 = 0x800759c;
    iVar10 = sp_el0;
    iStack_4c8 = *(iVar10 + 0x5e0);
    uVar29 = *(iVar12 + 0x48);
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    uStack_4f8 = 0;
    uStack_4f0 = 0;
    uVar28 = uVar29;
    uVar21 = uVar13;
    uVar11 = uVar30;
    iVar10 = iVar14;
    piVar25 = piVar24;
    uVar31 = uVar26;
    ppuStack_4c0 = &ppuStack_440;
    pcStack_4b0 = pcVar27;
    uStack_4a0 = uVar15;
    pcStack_498 = pcVar34;
    piStack_490 = piVar23;
    puStack_488 = puVar17;
    uStack_480 = uVar33;
    uStack_478 = uVar9;
    uStack_470 = uVar22;
    uStack_468 = uVar20;
    if ((uVar28 >> 8 & 1) == 0) {
        puVar17 = puVar19;
        if ((uVar28 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar28 >> 6 & 1) != 0) ||
           (((uVar28 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar12), (uVar20 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar34 = "(null)";
    if (auVar39._8_8_ != NULL) {
        pcVar34 = auVar39._8_8_;
    }
    auVar39._8_8_ = pcVar34;
    auVar39._0_8_ = iVar12;
    iVar8 = strlen(pcVar34);
    uVar28 = iVar8 + 1;
    uVar29 = uVar28;
    puVar17 = uVar28 + 0x40;
    iVar12 = trace_event_buffer_reserve(&uStack_4f8,iVar12);
    auVar6._8_8_ = pcVar34;
    auVar6._0_8_ = iVar12;
    if (iVar12 != 0) {
        *(iVar12 + 8) = uVar28 * 0x10000 | 0x40;
        strcpy(iVar12 + 0x40,pcVar34);
        *(iVar12 + 0x10) = puVar19;
        *(iVar12 + 0x18) = uVar13;
        *(iVar12 + 0x20) = uVar30;
        *(iVar12 + 0x28) = iVar14;
        *(iVar12 + 0x30) = piVar24;
        *(iVar12 + 0x38) = uVar26;
        trace_event_buffer_commit(&uStack_4f8);
        auVar39 = auVar6;
    }
code_r0x080076a0:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_4c8) {
        return;
    }
    auVar35 = __stack_chk_fail();
    uVar20 = auVar35._0_8_;
    *extraout_x18_07 = sym.perf_trace_bw_hwmon_debug;
    pcStack_558 = sym.perf_trace_bw_hwmon_debug;
    pcStack_550 = sym.perf_trace_bw_hwmon_update;
    iVar12 = sp_el0;
    pcVar34 = "(null)";
    if (auVar35._8_8_ != NULL) {
        pcVar34 = auVar35._8_8_;
    }
    iStack_568 = *(iVar12 + 0x5e0);
    iStack_570 = 0;
    uStack_574 = 0;
    puVar18 = puVar17;
    uVar33 = uVar21;
    iStack_590 = iVar10;
    piStack_588 = piVar25;
    uStack_580 = uVar31;
    ppuStack_560 = &ppuStack_4c0;
    uStack_548 = uVar29;
    uStack_540 = auVar39._8_8_;
    uStack_538 = auVar39._0_8_;
    puStack_530 = puVar19;
    uStack_528 = uVar13;
    uStack_520 = uVar30;
    iStack_518 = iVar14;
    piStack_510 = piVar24;
    uStack_508 = uVar26;
    iVar8 = strlen(pcVar34);
    iVar14 = tpidr_el1;
    piVar23 = iVar14 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar23 != 0)) {
        puVar18 = &uStack_574;
        iVar2 = (iVar8 + 0x4cU & 0xfffffff8) - 4;
        iVar14 = perf_trace_buf_alloc(iVar2,&iStack_570,puVar18);
        if (iVar14 != 0) {
            uVar26 = ___cpu_online_mask & 0x3f;
            *(iStack_570 + 0xe8) = &ppuStack_560;
            *(iStack_570 + 0xf8) = &iStack_590;
            *(iStack_570 + 0x100) = ~(-1L << uVar26) & 0x80076e0;
            *(iStack_570 + 0x108) = 5;
            *(iVar14 + 8) = iVar8 * 0x10000 + 0x10040;
            strcpy(iVar14 + 0x40,pcVar34);
            puVar18 = uStack_574;
            *(iVar14 + 0x20) = uVar11;
            *(iVar14 + 0x28) = iStack_590;
            *(iVar14 + 0x10) = puVar17;
            *(iVar14 + 0x18) = uVar21;
            *(iVar14 + 0x30) = piStack_588;
            *(iVar14 + 0x38) = uStack_580;
            perf_trace_run_bpf_submit(iVar14,iVar2,puVar18,uVar20,1,iStack_570,piVar23,0);
            uVar33 = uVar20;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_568) {
        auVar35 = __stack_chk_fail();
        uVar15 = tpidr_el2;
        *extraout_x18_08 = 0x8007878;
        bpf_trace_run8(auVar35._0_8_,auVar35._8_8_,puVar18 & 0xffffffff,uVar33 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_memlat_dev_meas @ 0x08006bd0 (size 436) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_memlat_dev_meas(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    uchar *puVar15;
    uchar *puVar16;
    uchar *puVar17;
    uint64_t uVar18;
    uint64_t in_x4;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar19;
    int64_t *piVar20;
    ulong in_x7;
    ulong uVar21;
    uint64_t uVar22;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar23;
    uint64_t uVar24;
    int64_t unaff_x22;
    uint32_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    char *pcVar30;
    char *pcVar31;
    code *pcVar32;
    uint64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar33 [16];
    uchar auVar34 [16];
    uchar auVar35 [16];
    uchar auVar36 [16];
    uchar auVar37 [16];
    uint32_t in_stack_00000000;
    uint32_t in_stack_00000008;
    int64_t iStack_4f0;
    int64_t *piStack_4e8;
    ulong uStack_4e0;
    uint32_t uStack_4d4;
    int64_t iStack_4d0;
    int64_t iStack_4c8;
    uchar *puStack_4c0;
    code *pcStack_4b8;
    code *pcStack_4b0;
    uint64_t uStack_4a8;
    ulong uStack_4a0;
    ulong uStack_498;
    uchar *puStack_490;
    uint64_t uStack_488;
    uint64_t uStack_480;
    int64_t iStack_478;
    int64_t *piStack_470;
    ulong uStack_468;
    ulong uStack_458;
    ulong uStack_450;
    ulong uStack_448;
    ulong uStack_440;
    ulong uStack_438;
    ulong uStack_430;
    int64_t iStack_428;
    uchar *puStack_420;
    ulong uStack_418;
    code *pcStack_410;
    ulong uStack_400;
    char *pcStack_3f8;
    int64_t *piStack_3f0;
    uchar *puStack_3e8;
    uint64_t uStack_3e0;
    uint64_t uStack_3d8;
    uint64_t uStack_3d0;
    uint64_t uStack_3c8;
    int64_t iStack_3c0;
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    uchar *puStack_3a0;
    code *pcStack_398;
    int64_t iStack_390;
    code *pcStack_388;
    char *pcStack_380;
    uint64_t uStack_378;
    ulong uStack_370;
    ulong uStack_368;
    uchar *puStack_360;
    uint64_t uStack_358;
    uint64_t uStack_350;
    int64_t iStack_348;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    int64_t iStack_308;
    uchar *puStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    char *pcStack_2e0;
    int64_t *piStack_2d8;
    uchar *puStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uchar auStack_2b0 [12];
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    uchar *puStack_290;
    code *pcStack_288;
    int64_t iStack_280;
    char *pcStack_278;
    char *pcStack_270;
    int64_t *piStack_268;
    uint64_t uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    uchar *puStack_248;
    uint64_t uStack_240;
    uint64_t uStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    uchar auStack_1b0 [8];
    int64_t iStack_1a8;
    int64_t *piStack_1a0;
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    char *pcStack_168;
    uint64_t uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    uint64_t uStack_148;
    uint64_t uStack_140;
    uint64_t uStack_138;
    int64_t iStack_130;
    int64_t *piStack_128;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    int64_t *piStack_d0;
    uint64_t uStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uchar auStack_90 [8];
    int64_t iStack_88;
    uint uStack_7c;
    uint uStack_78;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uStack_7c = SUB84(in_x6,0);
    uStack_78 = in_x7;
    iVar9 = sp_el0;
    pcVar31 = "(null)";
    if (arg2 != NULL) {
        pcVar31 = arg2;
    }
    iStack_68 = *(iVar9 + 0x5e0);
    uVar28 = arg3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar15 = arg3;
    uVar12 = arg4;
    uVar22 = in_x4;
    iStack_88 = in_x5;
    uVar8 = strlen(pcVar31);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(arg1 + 0x78);
    uVar24 = unaff_x30;
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        iVar7 = uVar8;
        puVar15 = &stack0xffffffffffffff8c;
        unaff_x28 = (iVar7 + 0x44U & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(unaff_x28,&stack0xffffffffffffff90);
        if (iVar9 != 0) {
            uVar22 = -1L << (___cpu_online_mask & 0x3f);
            uVar24 = in_stack_00000008;
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            uVar12 = (~uVar22 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar22 | unaff_x30;
            }
            uVar8 = in_stack_00000000;
            *(iStack_70 + 0x100) = uVar12;
            *(iStack_70 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10038;
            strcpy(iVar9 + 0x38,pcVar31);
            puVar15 = uStack_74;
            *(iVar9 + 0x20) = iStack_88;
            uVar22 = 1;
            in_x7 = 0;
            *(iVar9 + 0xc) = arg3;
            *(iVar9 + 0x10) = arg4;
            *(iVar9 + 0x18) = in_x4;
            *(iVar9 + 0x28) = uStack_7c;
            *(iVar9 + 0x2c) = uStack_78;
            *(iVar9 + 0x30) = in_stack_00000000;
            *(iVar9 + 0x34) = in_stack_00000008;
            uVar12 = arg1;
            in_x5 = iStack_70;
            in_x6 = piVar1;
            perf_trace_run_bpf_submit(iVar9,unaff_x28);
            unaff_x22 = iVar9;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar10 = auVar33._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x8006d78;
    uStack_d8 = 0x8006d78;
    iVar9 = sp_el0;
    iStack_e8 = *(iVar9 + 0x5e0);
    uVar29 = *(iVar10 + 0x48);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uVar25 = uVar29;
    uVar18 = uVar12;
    uVar23 = uVar22;
    iVar9 = in_x5;
    piVar19 = in_x6;
    puStack_e0 = &stack0xffffffffffffffa0;
    piStack_d0 = piVar1;
    uStack_c8 = uVar28;
    iStack_c0 = arg4;
    iStack_b0 = unaff_x22;
    uStack_a8 = uVar24;
    uStack_a0 = uVar8;
    iStack_98 = arg1;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar16 = puVar15;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar18 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar24 = trace_event_ignore_this_pid(iVar10), (uVar24 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar30 = "(null)";
        if (auVar33._8_8_ != NULL) {
            pcVar30 = auVar33._8_8_;
        }
        auVar33._8_8_ = pcVar30;
        auVar33._0_8_ = iVar10;
        iVar7 = strlen(pcVar30);
        uVar25 = iVar7 + 1;
        uVar29 = uVar25;
        puVar16 = uVar25 + 0x30;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffee8,iVar10);
        auVar34._8_8_ = pcVar30;
        auVar34._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar25 * 0x10000 | 0x30;
            strcpy(iVar10 + 0x30,pcVar30);
            *(iVar10 + 0xc) = puVar15;
            *(iVar10 + 0x10) = uVar12;
            *(iVar10 + 0x18) = uVar22;
            *(iVar10 + 0x20) = in_x5;
            *(iVar10 + 0x28) = in_x6;
            trace_event_buffer_commit(&stack0xfffffffffffffee8);
            auVar33 = auVar34;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar34 = __stack_chk_fail();
    uVar24 = auVar34._0_8_;
    *extraout_x18_00 = sym.perf_trace_memlat_dev_update;
    pcStack_178 = sym.perf_trace_memlat_dev_update;
    iVar10 = sp_el0;
    pcVar30 = "(null)";
    if (auVar34._8_8_ != NULL) {
        pcVar30 = auVar34._8_8_;
    }
    iStack_188 = *(iVar10 + 0x5e0);
    uVar26 = puVar16 & 0xffffffff;
    iStack_190 = 0;
    uStack_194 = 0;
    puVar17 = puVar16;
    uVar8 = uVar18;
    uVar28 = uVar23;
    iStack_1a8 = iVar9;
    piStack_1a0 = piVar19;
    puStack_180 = &stack0xffffffffffffff20;
    uStack_170 = unaff_x28;
    pcStack_168 = pcVar31;
    uStack_160 = uVar29;
    uStack_158 = auVar33._8_8_;
    uStack_150 = auVar33._0_8_;
    uStack_148 = puVar15 & 0xffffffff;
    uStack_140 = uVar12;
    uStack_138 = uVar22;
    iStack_130 = in_x5;
    piStack_128 = in_x6;
    iVar11 = strlen(pcVar30);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar24 + 0x78);
    if ((*(uVar24 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar17 = &stack0xfffffffffffffe6c;
        pcVar31 = (iVar11 + 0x3cU & 0xfffffff8) - 4;
        uVar12 = perf_trace_buf_alloc(pcVar31,&stack0xfffffffffffffe70);
        if (uVar12 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            *(iStack_190 + 0xe8) = &stack0xfffffffffffffe80;
            *(iStack_190 + 0xf8) = &stack0xfffffffffffffe50;
            *(iStack_190 + 0x100) = ~(-1L << uVar22) & 0x8006eb0;
            *(iStack_190 + 0x108) = 5;
            *(uVar12 + 8) = iVar11 * 0x10000 + 0x10030;
            strcpy(uVar12 + 0x30,pcVar30);
            puVar17 = uStack_194;
            uVar28 = 1;
            in_x7 = 0;
            *(uVar12 + 0xc) = puVar16;
            *(uVar12 + 0x10) = uVar18;
            *(uVar12 + 0x18) = uVar23;
            *(uVar12 + 0x20) = iStack_1a8;
            *(uVar12 + 0x28) = piStack_1a0;
            uVar8 = uVar24;
            iVar9 = iStack_190;
            piVar19 = piVar1;
            perf_trace_run_bpf_submit(uVar12,pcVar31);
            uVar22 = uVar12;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_188) {
        return;
    }
    auVar35 = __stack_chk_fail();
    iVar14 = auVar35._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18_01 = 0x8007040;
    uStack_1e8 = 0x8007040;
    pcStack_1c0 = sym.perf_trace_memlat_dev_update;
    iVar10 = sp_el0;
    iStack_1f8 = *(iVar10 + 0x5e0);
    uVar27 = *(iVar14 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar25 = uVar27;
    uVar12 = uVar8;
    uVar29 = uVar28;
    puStack_1f0 = &stack0xfffffffffffffe80;
    uStack_1e0 = uVar26;
    uStack_1d8 = uVar18;
    uStack_1d0 = uVar23;
    uStack_1c8 = uVar22;
    uStack_1b8 = uVar24;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar22 = trace_event_ignore_this_pid(iVar14), (uVar22 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar2 = "(null)";
        if (auVar35._8_8_ != NULL) {
            pcVar2 = auVar35._8_8_;
        }
        auVar35._8_8_ = pcVar2;
        auVar35._0_8_ = iVar14;
        iVar7 = strlen(pcVar2);
        uVar25 = iVar7 + 1;
        uVar27 = uVar25;
        puVar15 = uVar25 + 0x28;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffdd8,iVar14);
        auVar4._8_8_ = pcVar2;
        auVar4._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar25 * 0x10000 | 0x24;
            strcpy(iVar10 + 0x24,pcVar2);
            *(iVar10 + 0x10) = puVar17;
            *(iVar10 + 0x18) = uVar8;
            *(iVar10 + 0x20) = uVar28;
            trace_event_buffer_commit(&stack0xfffffffffffffdd8);
            auVar35 = auVar4;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar33 = __stack_chk_fail();
    uVar22 = auVar33._0_8_;
    *extraout_x18_02 = sym.perf_trace_bw_hwmon_meas;
    pcStack_288 = sym.perf_trace_bw_hwmon_meas;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar2 = auVar33._8_8_;
    }
    iStack_298 = *(iVar10 + 0x5e0);
    pcVar32 = sym.perf_trace_bw_hwmon_meas;
    uVar23 = uVar29 & 0xffffffff;
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar16 = puVar15;
    uVar24 = uVar12;
    uVar18 = uVar29;
    puStack_290 = &stack0xfffffffffffffe10;
    iStack_280 = iVar11;
    pcStack_278 = pcVar31;
    pcStack_270 = pcVar30;
    piStack_268 = piVar1;
    uStack_260 = uVar27;
    uStack_258 = auVar35._8_8_;
    uStack_250 = auVar35._0_8_;
    puStack_248 = puVar17;
    uStack_240 = uVar8;
    uStack_238 = uVar28 & 0xffffffff;
    uVar13 = strlen(pcVar2);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar22 + 0x78);
    if ((*(uVar22 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &stack0xfffffffffffffd5c;
        pcVar30 = (uVar13 + 0x34U & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(pcVar30,&stack0xfffffffffffffd60);
        if (iVar10 != 0) {
            uVar24 = ___cpu_online_mask & 0x3f;
            *(iStack_2a0 + 0xe8) = &stack0xfffffffffffffd70;
            *(iStack_2a0 + 0xf8) = &stack0xfffffffffffffd50;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar24) & 0x8007164;
            *(iStack_2a0 + 0x108) = 5;
            *(iVar10 + 8) = uVar13 * 0x10000 + 0x10024;
            strcpy(iVar10 + 0x24,pcVar2);
            puVar16 = uStack_2a4;
            uVar18 = 1;
            in_x7 = 0;
            *(iVar10 + 0x10) = puVar15;
            *(iVar10 + 0x18) = uVar12;
            *(iVar10 + 0x20) = uVar29;
            uVar24 = uVar22;
            iVar9 = iStack_2a0;
            piVar19 = piVar1;
            perf_trace_run_bpf_submit(iVar10,pcVar30);
            iVar11 = iVar10;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_298) {
        return;
    }
    auVar36 = __stack_chk_fail();
    iVar14 = auVar36._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_03 = 0x80072e4;
    uStack_2f8 = 0x80072e4;
    iVar10 = sp_el0;
    iStack_308 = *(iVar10 + 0x5e0);
    uVar29 = *(iVar14 + 0x48);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uVar25 = uVar29;
    uVar8 = uVar24;
    uVar28 = uVar18;
    iVar10 = iVar9;
    puStack_300 = &stack0xfffffffffffffd70;
    uStack_2f0 = uVar13;
    pcStack_2e0 = pcVar2;
    piStack_2d8 = piVar1;
    puStack_2d0 = puVar15;
    uStack_2c8 = uVar12;
    uStack_2c0 = uVar23;
    uStack_2b8 = uVar22;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar14), (uVar12 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar31 = "(null)";
        if (auVar36._8_8_ != NULL) {
            pcVar31 = auVar36._8_8_;
        }
        auVar36._8_8_ = pcVar31;
        auVar36._0_8_ = iVar14;
        iVar7 = strlen(pcVar31);
        uVar25 = iVar7 + 1;
        uVar29 = uVar25;
        puVar15 = uVar25 + 0x30;
        iVar14 = trace_event_buffer_reserve(&stack0xfffffffffffffcc8,iVar14);
        auVar5._8_8_ = pcVar31;
        auVar5._0_8_ = iVar14;
        if (iVar14 != 0) {
            *(iVar14 + 8) = uVar25 * 0x10000 | 0x30;
            strcpy(iVar14 + 0x30,pcVar31);
            *(iVar14 + 0x10) = puVar16;
            *(iVar14 + 0x18) = uVar24;
            *(iVar14 + 0x20) = uVar18;
            *(iVar14 + 0x28) = iVar9;
            trace_event_buffer_commit(&stack0xfffffffffffffcc8);
            auVar36 = auVar5;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_308) {
        return;
    }
    auVar33 = __stack_chk_fail();
    uVar12 = auVar33._0_8_;
    *extraout_x18_04 = sym.perf_trace_bw_hwmon_update;
    pcStack_398 = sym.perf_trace_bw_hwmon_update;
    pcStack_388 = sym.perf_trace_bw_hwmon_meas;
    iVar14 = sp_el0;
    pcVar31 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar31 = auVar33._8_8_;
    }
    iStack_3a8 = *(iVar14 + 0x5e0);
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    puVar17 = puVar15;
    uVar22 = uVar8;
    uVar23 = uVar28;
    iStack_3c0 = iVar10;
    puStack_3a0 = &stack0xfffffffffffffd00;
    iStack_390 = iVar11;
    pcStack_380 = pcVar30;
    uStack_378 = uVar29;
    uStack_370 = auVar36._8_8_;
    uStack_368 = auVar36._0_8_;
    puStack_360 = puVar16;
    uStack_358 = uVar24;
    uStack_350 = uVar18;
    iStack_348 = iVar9;
    uVar13 = strlen(pcVar31);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar17 = &stack0xfffffffffffffc4c;
        pcVar32 = (uVar13 + 0x3cU & 0xfffffff8) - 4;
        uVar24 = perf_trace_buf_alloc(pcVar32,&stack0xfffffffffffffc50);
        if (uVar24 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            *(iStack_3b0 + 0xe8) = &stack0xfffffffffffffc60;
            *(iStack_3b0 + 0xf8) = &stack0xfffffffffffffc40;
            *(iStack_3b0 + 0x100) = ~(-1L << uVar22) & 0x8007414;
            *(iStack_3b0 + 0x108) = 5;
            *(uVar24 + 8) = uVar13 * 0x10000 + 0x10030;
            strcpy(uVar24 + 0x30,pcVar31);
            puVar17 = uStack_3b4;
            uVar23 = 1;
            in_x7 = 0;
            *(uVar24 + 0x10) = puVar15;
            *(uVar24 + 0x18) = uVar8;
            *(uVar24 + 0x20) = uVar28;
            *(uVar24 + 0x28) = iStack_3c0;
            uVar22 = uVar12;
            iVar10 = iStack_3b0;
            piVar19 = piVar1;
            perf_trace_run_bpf_submit(uVar24,pcVar32);
            uVar18 = uVar24;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_3a8) {
        return;
    }
    auVar37 = __stack_chk_fail();
    iVar11 = auVar37._0_8_;
    uVar21 = tpidr_el2;
    *extraout_x18_05 = 0x800759c;
    uStack_418 = 0x800759c;
    iVar9 = sp_el0;
    iStack_428 = *(iVar9 + 0x5e0);
    uVar26 = *(iVar11 + 0x48);
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    uVar25 = uVar26;
    uVar24 = uVar22;
    uVar29 = uVar23;
    iVar9 = iVar10;
    piVar20 = piVar19;
    uVar21 = in_x7;
    puStack_420 = &stack0xfffffffffffffc60;
    pcStack_410 = pcVar32;
    uStack_400 = uVar13;
    pcStack_3f8 = pcVar31;
    piStack_3f0 = piVar1;
    puStack_3e8 = puVar15;
    uStack_3e0 = uVar8;
    uStack_3d8 = uVar28;
    uStack_3d0 = uVar18;
    uStack_3c8 = uVar12;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar24 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar25 >> 6 & 1) != 0) ||
           (((uVar25 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar11), (uVar12 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar31 = "(null)";
    if (auVar37._8_8_ != NULL) {
        pcVar31 = auVar37._8_8_;
    }
    auVar37._8_8_ = pcVar31;
    auVar37._0_8_ = iVar11;
    iVar7 = strlen(pcVar31);
    uVar25 = iVar7 + 1;
    uVar26 = uVar25;
    puVar15 = uVar25 + 0x40;
    iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffba8,iVar11);
    auVar6._8_8_ = pcVar31;
    auVar6._0_8_ = iVar11;
    if (iVar11 != 0) {
        *(iVar11 + 8) = uVar25 * 0x10000 | 0x40;
        strcpy(iVar11 + 0x40,pcVar31);
        *(iVar11 + 0x10) = puVar17;
        *(iVar11 + 0x18) = uVar22;
        *(iVar11 + 0x20) = uVar23;
        *(iVar11 + 0x28) = iVar10;
        *(iVar11 + 0x30) = piVar19;
        *(iVar11 + 0x38) = in_x7;
        trace_event_buffer_commit(&stack0xfffffffffffffba8);
        auVar37 = auVar6;
    }
code_r0x080076a0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_428) {
        return;
    }
    auVar33 = __stack_chk_fail();
    uVar12 = auVar33._0_8_;
    *extraout_x18_06 = sym.perf_trace_bw_hwmon_debug;
    pcStack_4b8 = sym.perf_trace_bw_hwmon_debug;
    pcStack_4b0 = sym.perf_trace_bw_hwmon_update;
    iVar11 = sp_el0;
    pcVar31 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar31 = auVar33._8_8_;
    }
    iStack_4c8 = *(iVar11 + 0x5e0);
    iStack_4d0 = 0;
    uStack_4d4 = 0;
    puVar16 = puVar15;
    uVar8 = uVar24;
    iStack_4f0 = iVar9;
    piStack_4e8 = piVar20;
    uStack_4e0 = uVar21;
    puStack_4c0 = &stack0xfffffffffffffbe0;
    uStack_4a8 = uVar26;
    uStack_4a0 = auVar37._8_8_;
    uStack_498 = auVar37._0_8_;
    puStack_490 = puVar17;
    uStack_488 = uVar22;
    uStack_480 = uVar23;
    iStack_478 = iVar10;
    piStack_470 = piVar19;
    uStack_468 = in_x7;
    iVar7 = strlen(pcVar31);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &stack0xfffffffffffffb2c;
        iVar3 = (iVar7 + 0x4cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffb30,puVar16);
        if (iVar9 != 0) {
            uVar22 = ___cpu_online_mask & 0x3f;
            *(iStack_4d0 + 0xe8) = &stack0xfffffffffffffb40;
            *(iStack_4d0 + 0xf8) = &stack0xfffffffffffffb10;
            *(iStack_4d0 + 0x100) = ~(-1L << uVar22) & 0x80076e0;
            *(iStack_4d0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x10040;
            strcpy(iVar9 + 0x40,pcVar31);
            puVar16 = uStack_4d4;
            *(iVar9 + 0x20) = uVar29;
            *(iVar9 + 0x28) = iStack_4f0;
            *(iVar9 + 0x10) = puVar15;
            *(iVar9 + 0x18) = uVar24;
            *(iVar9 + 0x30) = piStack_4e8;
            *(iVar9 + 0x38) = uStack_4e0;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar16,uVar12,1,iStack_4d0,piVar1,0);
            uVar8 = uVar12;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_4c8) {
        auVar33 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_07 = 0x8007878;
        bpf_trace_run8(auVar33._0_8_,auVar33._8_8_,puVar16 & 0xffffffff,uVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_memlat_dev_update @ 0x08006d84 (size 300) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x08006fac)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_memlat_dev_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t in_x4;
    uint64_t uVar20;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar21;
    int64_t *piVar22;
    ulong in_x7;
    ulong uVar23;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar24;
    uint32_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    char *pcVar28;
    uint64_t unaff_x27;
    code *pcVar29;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    int64_t iStack_460;
    int64_t *piStack_458;
    ulong uStack_450;
    uint32_t uStack_444;
    int64_t iStack_440;
    int64_t iStack_438;
    ulong **ppuStack_430;
    code *pcStack_428;
    code *pcStack_420;
    uint64_t uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    uint32_t *puStack_400;
    uint64_t uStack_3f8;
    uint64_t uStack_3f0;
    int64_t iStack_3e8;
    int64_t *piStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3c8;
    ulong uStack_3c0;
    ulong uStack_3b8;
    ulong uStack_3b0;
    ulong uStack_3a8;
    ulong uStack_3a0;
    int64_t iStack_398;
    ulong **ppuStack_390;
    ulong uStack_388;
    code *pcStack_380;
    ulong uStack_370;
    char *pcStack_368;
    int64_t *piStack_360;
    uint32_t *puStack_358;
    uint64_t uStack_350;
    uint64_t uStack_348;
    uint64_t uStack_340;
    uint64_t uStack_338;
    int64_t iStack_330;
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    code *pcStack_308;
    int64_t iStack_300;
    code *pcStack_2f8;
    char *pcStack_2f0;
    uint64_t uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    uint32_t *puStack_2d0;
    uint64_t uStack_2c8;
    uint64_t uStack_2c0;
    int64_t iStack_2b8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    ulong uStack_268;
    ulong uStack_260;
    char *pcStack_250;
    int64_t *piStack_248;
    uint32_t *puStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    uint64_t uStack_228;
    uchar auStack_220 [12];
    uint32_t uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    code *pcStack_1f8;
    int64_t iStack_1f0;
    uint64_t uStack_1e8;
    char *pcStack_1e0;
    int64_t *piStack_1d8;
    uint64_t uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    uint32_t *puStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    ulong uStack_158;
    uint64_t uStack_150;
    uint64_t uStack_148;
    uint64_t uStack_138;
    code *pcStack_130;
    uint64_t uStack_128;
    uchar auStack_120 [8];
    int64_t iStack_118;
    int64_t *piStack_110;
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
    iVar13 = sp_el0;
    iStack_58 = *(iVar13 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar25 = *(arg1 + 0x48);
    uVar17 = arg4;
    uVar18 = in_x4;
    iVar13 = in_x5;
    piVar21 = in_x6;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar14 = arg3;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar17 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(arg1), (uVar7 & 1) == 0))))
        goto code_r0x08006e10;
    }
    else {
code_r0x08006e10:
        pcVar28 = "(null)";
        if (arg2 != 0) {
            pcVar28 = arg2;
        }
        iVar6 = strlen(pcVar28);
        puVar14 = iVar6 + 1 + 0x30;
        iVar8 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x30;
            strcpy(iVar8 + 0x30,pcVar28);
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4;
            *(iVar8 + 0x18) = in_x4;
            *(iVar8 + 0x20) = in_x5;
            *(iVar8 + 0x28) = in_x6;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar7 = auVar30._0_8_;
    *extraout_x18 = sym.perf_trace_memlat_dev_update;
    pcStack_e8 = sym.perf_trace_memlat_dev_update;
    iVar8 = sp_el0;
    pcVar28 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar28 = auVar30._8_8_;
    }
    iStack_f8 = *(iVar8 + 0x5e0);
    uVar26 = puVar14 & 0xffffffff;
    iStack_100 = 0;
    uStack_104 = 0;
    puVar15 = puVar14;
    uVar19 = uVar17;
    uVar20 = uVar18;
    iStack_118 = iVar13;
    piStack_110 = piVar21;
    puStack_f0 = &stack0xffffffffffffffb0;
    iVar9 = strlen(pcVar28);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar15 = &uStack_104;
        unaff_x27 = (iVar9 + 0x3cU & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(unaff_x27,&iStack_100);
        if (uVar10 != 0) {
            uVar19 = ___cpu_online_mask & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_120;
            *(iStack_100 + 0x100) = ~(-1L << uVar19) & 0x8006eb0;
            *(iStack_100 + 0x108) = 5;
            *(uVar10 + 8) = iVar9 * 0x10000 + 0x10030;
            strcpy(uVar10 + 0x30,pcVar28);
            puVar15 = uStack_104;
            uVar20 = 1;
            in_x7 = 0;
            *(uVar10 + 0xc) = puVar14;
            *(uVar10 + 0x10) = uVar17;
            *(uVar10 + 0x18) = uVar18;
            *(uVar10 + 0x20) = iStack_118;
            *(uVar10 + 0x28) = piStack_110;
            uVar19 = uVar7;
            iVar13 = iStack_100;
            piVar21 = piVar1;
            perf_trace_run_bpf_submit(uVar10,unaff_x27);
            in_x4 = uVar10;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar12 = auVar30._0_8_;
    uVar11 = tpidr_el2;
    *extraout_x18_00 = 0x8007040;
    uStack_158 = 0x8007040;
    pcStack_130 = sym.perf_trace_memlat_dev_update;
    iVar8 = sp_el0;
    iStack_168 = *(iVar8 + 0x5e0);
    uVar27 = *(iVar12 + 0x48);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar25 = uVar27;
    uVar18 = uVar19;
    uVar10 = uVar20;
    ppuStack_160 = &puStack_f0;
    uStack_150 = uVar26;
    uStack_148 = uVar17;
    uStack_138 = in_x4;
    uStack_128 = uVar7;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar18 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar12), (uVar17 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar2 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar2 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar2;
        auVar30._0_8_ = iVar12;
        iVar6 = strlen(pcVar2);
        uVar25 = iVar6 + 1;
        uVar27 = uVar25;
        puVar14 = uVar25 + 0x28;
        iVar8 = trace_event_buffer_reserve(&uStack_198,iVar12);
        auVar31._8_8_ = pcVar2;
        auVar31._0_8_ = iVar8;
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar25 * 0x10000 | 0x24;
            strcpy(iVar8 + 0x24,pcVar2);
            *(iVar8 + 0x10) = puVar15;
            *(iVar8 + 0x18) = uVar19;
            *(iVar8 + 0x20) = uVar20;
            trace_event_buffer_commit(&uStack_198);
            auVar30 = auVar31;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_168) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar17 = auVar31._0_8_;
    *extraout_x18_01 = sym.perf_trace_bw_hwmon_meas;
    pcStack_1f8 = sym.perf_trace_bw_hwmon_meas;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar2 = auVar31._8_8_;
    }
    iStack_208 = *(iVar8 + 0x5e0);
    pcVar29 = sym.perf_trace_bw_hwmon_meas;
    uVar24 = uVar10 & 0xffffffff;
    iStack_210 = 0;
    uStack_214 = 0;
    puVar16 = puVar14;
    uVar7 = uVar18;
    uVar26 = uVar10;
    ppuStack_200 = &ppuStack_160;
    iStack_1f0 = iVar9;
    uStack_1e8 = unaff_x27;
    pcStack_1e0 = pcVar28;
    piStack_1d8 = piVar1;
    uStack_1d0 = uVar27;
    uStack_1c8 = auVar30._8_8_;
    uStack_1c0 = auVar30._0_8_;
    puStack_1b8 = puVar15;
    uStack_1b0 = uVar19;
    uStack_1a8 = uVar20 & 0xffffffff;
    uVar11 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &uStack_214;
        pcVar28 = (uVar11 + 0x34U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(pcVar28,&iStack_210);
        if (iVar8 != 0) {
            uVar7 = ___cpu_online_mask & 0x3f;
            *(iStack_210 + 0xe8) = &ppuStack_200;
            *(iStack_210 + 0xf8) = auStack_220;
            *(iStack_210 + 0x100) = ~(-1L << uVar7) & 0x8007164;
            *(iStack_210 + 0x108) = 5;
            *(iVar8 + 8) = uVar11 * 0x10000 + 0x10024;
            strcpy(iVar8 + 0x24,pcVar2);
            puVar16 = uStack_214;
            uVar26 = 1;
            in_x7 = 0;
            *(iVar8 + 0x10) = puVar14;
            *(iVar8 + 0x18) = uVar18;
            *(iVar8 + 0x20) = uVar10;
            uVar7 = uVar17;
            iVar13 = iStack_210;
            piVar21 = piVar1;
            perf_trace_run_bpf_submit(iVar8,pcVar28);
            iVar9 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_208) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar12 = auVar32._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_02 = 0x80072e4;
    uStack_268 = 0x80072e4;
    iVar8 = sp_el0;
    iStack_278 = *(iVar8 + 0x5e0);
    uVar10 = *(iVar12 + 0x48);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar25 = uVar10;
    uVar19 = uVar7;
    uVar20 = uVar26;
    iVar8 = iVar13;
    ppuStack_270 = &ppuStack_200;
    uStack_260 = uVar11;
    pcStack_250 = pcVar2;
    piStack_248 = piVar1;
    puStack_240 = puVar14;
    uStack_238 = uVar18;
    uStack_230 = uVar24;
    uStack_228 = uVar17;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar14 = puVar16;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar19 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar17 = trace_event_ignore_this_pid(iVar12), (uVar17 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar2 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar2;
        auVar32._0_8_ = iVar12;
        iVar6 = strlen(pcVar2);
        uVar25 = iVar6 + 1;
        uVar10 = uVar25;
        puVar14 = uVar25 + 0x30;
        iVar12 = trace_event_buffer_reserve(&uStack_2a8,iVar12);
        auVar4._8_8_ = pcVar2;
        auVar4._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar25 * 0x10000 | 0x30;
            strcpy(iVar12 + 0x30,pcVar2);
            *(iVar12 + 0x10) = puVar16;
            *(iVar12 + 0x18) = uVar7;
            *(iVar12 + 0x20) = uVar26;
            *(iVar12 + 0x28) = iVar13;
            trace_event_buffer_commit(&uStack_2a8);
            auVar32 = auVar4;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_278) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar17 = auVar30._0_8_;
    *extraout_x18_03 = sym.perf_trace_bw_hwmon_update;
    pcStack_308 = sym.perf_trace_bw_hwmon_update;
    pcStack_2f8 = sym.perf_trace_bw_hwmon_meas;
    iVar12 = sp_el0;
    pcVar2 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar2 = auVar30._8_8_;
    }
    iStack_318 = *(iVar12 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    puVar15 = puVar14;
    uVar18 = uVar19;
    uVar27 = uVar20;
    iStack_330 = iVar8;
    ppuStack_310 = &ppuStack_270;
    iStack_300 = iVar9;
    pcStack_2f0 = pcVar28;
    uStack_2e8 = uVar10;
    uStack_2e0 = auVar32._8_8_;
    uStack_2d8 = auVar32._0_8_;
    puStack_2d0 = puVar16;
    uStack_2c8 = uVar7;
    uStack_2c0 = uVar26;
    iStack_2b8 = iVar13;
    uVar11 = strlen(pcVar2);
    iVar13 = tpidr_el1;
    piVar1 = iVar13 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar15 = &uStack_324;
        pcVar29 = (uVar11 + 0x3cU & 0xfffffff8) - 4;
        uVar7 = perf_trace_buf_alloc(pcVar29,&iStack_320);
        if (uVar7 != 0) {
            uVar18 = ___cpu_online_mask & 0x3f;
            *(iStack_320 + 0xe8) = &ppuStack_310;
            *(iStack_320 + 0xf8) = &iStack_330;
            *(iStack_320 + 0x100) = ~(-1L << uVar18) & 0x8007414;
            *(iStack_320 + 0x108) = 5;
            *(uVar7 + 8) = uVar11 * 0x10000 + 0x10030;
            strcpy(uVar7 + 0x30,pcVar2);
            puVar15 = uStack_324;
            uVar27 = 1;
            in_x7 = 0;
            *(uVar7 + 0x10) = puVar14;
            *(uVar7 + 0x18) = uVar19;
            *(uVar7 + 0x20) = uVar20;
            *(uVar7 + 0x28) = iStack_330;
            uVar18 = uVar17;
            iVar8 = iStack_320;
            piVar21 = piVar1;
            perf_trace_run_bpf_submit(uVar7,pcVar29);
            uVar26 = uVar7;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_318) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar9 = auVar33._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_04 = 0x800759c;
    uStack_388 = 0x800759c;
    iVar13 = sp_el0;
    iStack_398 = *(iVar13 + 0x5e0);
    uVar24 = *(iVar9 + 0x48);
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uVar25 = uVar24;
    uVar7 = uVar18;
    uVar10 = uVar27;
    iVar13 = iVar8;
    piVar22 = piVar21;
    uVar23 = in_x7;
    ppuStack_390 = &ppuStack_310;
    pcStack_380 = pcVar29;
    uStack_370 = uVar11;
    pcStack_368 = pcVar2;
    piStack_360 = piVar1;
    puStack_358 = puVar14;
    uStack_350 = uVar19;
    uStack_348 = uVar20;
    uStack_340 = uVar26;
    uStack_338 = uVar17;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar7 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar25 >> 6 & 1) != 0) ||
           (((uVar25 >> 9 & 1) != 0 && (uVar17 = trace_event_ignore_this_pid(iVar9), (uVar17 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar28 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar28 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar28;
    auVar33._0_8_ = iVar9;
    iVar6 = strlen(pcVar28);
    uVar25 = iVar6 + 1;
    uVar24 = uVar25;
    puVar14 = uVar25 + 0x40;
    iVar9 = trace_event_buffer_reserve(&uStack_3c8,iVar9);
    auVar5._8_8_ = pcVar28;
    auVar5._0_8_ = iVar9;
    if (iVar9 != 0) {
        *(iVar9 + 8) = uVar25 * 0x10000 | 0x40;
        strcpy(iVar9 + 0x40,pcVar28);
        *(iVar9 + 0x10) = puVar15;
        *(iVar9 + 0x18) = uVar18;
        *(iVar9 + 0x20) = uVar27;
        *(iVar9 + 0x28) = iVar8;
        *(iVar9 + 0x30) = piVar21;
        *(iVar9 + 0x38) = in_x7;
        trace_event_buffer_commit(&uStack_3c8);
        auVar33 = auVar5;
    }
code_r0x080076a0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_398) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar17 = auVar30._0_8_;
    *extraout_x18_05 = sym.perf_trace_bw_hwmon_debug;
    pcStack_428 = sym.perf_trace_bw_hwmon_debug;
    pcStack_420 = sym.perf_trace_bw_hwmon_update;
    iVar9 = sp_el0;
    pcVar28 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar28 = auVar30._8_8_;
    }
    iStack_438 = *(iVar9 + 0x5e0);
    iStack_440 = 0;
    uStack_444 = 0;
    puVar16 = puVar14;
    uVar19 = uVar7;
    iStack_460 = iVar13;
    piStack_458 = piVar22;
    uStack_450 = uVar23;
    ppuStack_430 = &ppuStack_390;
    uStack_418 = uVar24;
    uStack_410 = auVar33._8_8_;
    uStack_408 = auVar33._0_8_;
    puStack_400 = puVar15;
    uStack_3f8 = uVar18;
    uStack_3f0 = uVar27;
    iStack_3e8 = iVar8;
    piStack_3e0 = piVar21;
    uStack_3d8 = in_x7;
    iVar6 = strlen(pcVar28);
    iVar13 = tpidr_el1;
    piVar21 = iVar13 + *(uVar17 + 0x78);
    if ((*(uVar17 + 0x80) != 0) || (*piVar21 != 0)) {
        puVar16 = &uStack_444;
        iVar3 = (iVar6 + 0x4cU & 0xfffffff8) - 4;
        iVar13 = perf_trace_buf_alloc(iVar3,&iStack_440,puVar16);
        if (iVar13 != 0) {
            uVar18 = ___cpu_online_mask & 0x3f;
            *(iStack_440 + 0xe8) = &ppuStack_430;
            *(iStack_440 + 0xf8) = &iStack_460;
            *(iStack_440 + 0x100) = ~(-1L << uVar18) & 0x80076e0;
            *(iStack_440 + 0x108) = 5;
            *(iVar13 + 8) = iVar6 * 0x10000 + 0x10040;
            strcpy(iVar13 + 0x40,pcVar28);
            puVar16 = uStack_444;
            *(iVar13 + 0x20) = uVar10;
            *(iVar13 + 0x28) = iStack_460;
            *(iVar13 + 0x10) = puVar14;
            *(iVar13 + 0x18) = uVar7;
            *(iVar13 + 0x30) = piStack_458;
            *(iVar13 + 0x38) = uStack_450;
            perf_trace_run_bpf_submit(iVar13,iVar3,puVar16,uVar17,1,iStack_440,piVar21,0);
            uVar19 = uVar17;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) != iStack_438) {
        auVar30 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_06 = 0x8007878;
        bpf_trace_run8(auVar30._0_8_,auVar30._8_8_,puVar16 & 0xffffffff,uVar19 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_memlat_dev_update @ 0x08006eb0 (size 412) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_memlat_dev_update(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uchar *puVar11;
    uchar *puVar12;
    uchar *puVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t in_x4;
    uint64_t uVar17;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar18;
    ulong in_x7;
    ulong uVar19;
    uint64_t uVar20;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar21;
    int64_t unaff_x21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    char *pcVar26;
    uint64_t unaff_x27;
    code *pcVar27;
    uint64_t unaff_x30;
    uchar auVar28 [16];
    uchar auVar29 [16];
    uchar auVar30 [16];
    uchar auVar31 [16];
    int64_t iStack_3d0;
    int64_t *piStack_3c8;
    ulong uStack_3c0;
    uint32_t uStack_3b4;
    int64_t iStack_3b0;
    int64_t iStack_3a8;
    uchar *puStack_3a0;
    code *pcStack_398;
    code *pcStack_390;
    uint64_t uStack_388;
    ulong uStack_380;
    ulong uStack_378;
    uchar *puStack_370;
    uint64_t uStack_368;
    uint64_t uStack_360;
    int64_t iStack_358;
    int64_t *piStack_350;
    ulong uStack_348;
    ulong uStack_338;
    ulong uStack_330;
    ulong uStack_328;
    ulong uStack_320;
    ulong uStack_318;
    ulong uStack_310;
    int64_t iStack_308;
    uchar *puStack_300;
    ulong uStack_2f8;
    code *pcStack_2f0;
    ulong uStack_2e0;
    char *pcStack_2d8;
    int64_t *piStack_2d0;
    uchar *puStack_2c8;
    uint64_t uStack_2c0;
    uint64_t uStack_2b8;
    uint64_t uStack_2b0;
    uint64_t uStack_2a8;
    int64_t iStack_2a0;
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    uchar *puStack_280;
    code *pcStack_278;
    int64_t iStack_270;
    code *pcStack_268;
    char *pcStack_260;
    uint64_t uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    uchar *puStack_240;
    uint64_t uStack_238;
    uint64_t uStack_230;
    int64_t iStack_228;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    uchar *puStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    char *pcStack_1c0;
    int64_t *piStack_1b8;
    uchar *puStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    uchar auStack_190 [12];
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar *puStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    char *pcStack_150;
    int64_t *piStack_148;
    uint64_t uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    uchar *puStack_128;
    uint64_t uStack_120;
    uint64_t uStack_118;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_a8;
    uchar auStack_90 [8];
    int64_t iStack_88;
    int64_t *piStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    pcVar26 = "(null)";
    if (arg2 != NULL) {
        pcVar26 = arg2;
    }
    iStack_68 = *(iVar8 + 0x5e0);
    uVar23 = arg3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar11 = arg3;
    uVar16 = arg4;
    uVar20 = in_x4;
    iStack_88 = in_x5;
    piStack_80 = in_x6;
    iVar7 = strlen(pcVar26);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &stack0xffffffffffffff8c;
        unaff_x27 = (iVar7 + 0x3cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(unaff_x27,&stack0xffffffffffffff90);
        if (iVar8 != 0) {
            uVar20 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            uVar16 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar16 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar16;
            *(iStack_70 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x10030;
            strcpy(iVar8 + 0x30,pcVar26);
            puVar11 = uStack_74;
            uVar20 = 1;
            in_x7 = 0;
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4;
            *(iVar8 + 0x18) = in_x4;
            *(iVar8 + 0x20) = iStack_88;
            *(iVar8 + 0x28) = piStack_80;
            in_x5 = iStack_70;
            in_x6 = piVar1;
            perf_trace_run_bpf_submit(iVar8,unaff_x27);
            uVar16 = arg1;
            unaff_x21 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return;
    }
    auVar28 = __stack_chk_fail();
    iVar10 = auVar28._0_8_;
    uVar9 = tpidr_el2;
    *extraout_x18 = 0x8007040;
    uStack_c8 = 0x8007040;
    iVar8 = sp_el0;
    iStack_d8 = *(iVar8 + 0x5e0);
    uVar24 = *(iVar10 + 0x48);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uVar22 = uVar24;
    uVar14 = uVar16;
    uVar25 = uVar20;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = uVar23;
    iStack_b8 = arg4;
    iStack_a8 = unaff_x21;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar23 = trace_event_ignore_this_pid(iVar10), (uVar23 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar2 = "(null)";
        if (auVar28._8_8_ != NULL) {
            pcVar2 = auVar28._8_8_;
        }
        auVar28._8_8_ = pcVar2;
        auVar28._0_8_ = iVar10;
        iVar6 = strlen(pcVar2);
        uVar22 = iVar6 + 1;
        uVar24 = uVar22;
        puVar12 = uVar22 + 0x28;
        iVar8 = trace_event_buffer_reserve(&stack0xfffffffffffffef8,iVar10);
        auVar29._8_8_ = pcVar2;
        auVar29._0_8_ = iVar8;
        if (iVar8 != 0) {
            *(iVar8 + 8) = uVar22 * 0x10000 | 0x24;
            strcpy(iVar8 + 0x24,pcVar2);
            *(iVar8 + 0x10) = puVar11;
            *(iVar8 + 0x18) = uVar16;
            *(iVar8 + 0x20) = uVar20;
            trace_event_buffer_commit(&stack0xfffffffffffffef8);
            auVar28 = auVar29;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    uVar23 = auVar29._0_8_;
    *extraout_x18_00 = sym.perf_trace_bw_hwmon_meas;
    pcStack_168 = sym.perf_trace_bw_hwmon_meas;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar29._8_8_ != NULL) {
        pcVar2 = auVar29._8_8_;
    }
    iStack_178 = *(iVar8 + 0x5e0);
    pcVar27 = sym.perf_trace_bw_hwmon_meas;
    uVar21 = uVar25 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    puVar13 = puVar12;
    uVar15 = uVar14;
    uVar17 = uVar25;
    puStack_170 = &stack0xffffffffffffff30;
    iStack_160 = iVar7;
    uStack_158 = unaff_x27;
    pcStack_150 = pcVar26;
    piStack_148 = piVar1;
    uStack_140 = uVar24;
    uStack_138 = auVar28._8_8_;
    uStack_130 = auVar28._0_8_;
    puStack_128 = puVar11;
    uStack_120 = uVar16;
    uStack_118 = uVar20 & 0xffffffff;
    uVar9 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar23 + 0x78);
    if ((*(uVar23 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &stack0xfffffffffffffe7c;
        pcVar26 = (uVar9 + 0x34U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(pcVar26,&stack0xfffffffffffffe80);
        if (iVar8 != 0) {
            uVar16 = ___cpu_online_mask & 0x3f;
            *(iStack_180 + 0xe8) = &stack0xfffffffffffffe90;
            *(iStack_180 + 0xf8) = &stack0xfffffffffffffe70;
            *(iStack_180 + 0x100) = ~(-1L << uVar16) & 0x8007164;
            *(iStack_180 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x10024;
            strcpy(iVar8 + 0x24,pcVar2);
            puVar13 = uStack_184;
            uVar17 = 1;
            in_x7 = 0;
            *(iVar8 + 0x10) = puVar12;
            *(iVar8 + 0x18) = uVar14;
            *(iVar8 + 0x20) = uVar25;
            uVar15 = uVar23;
            in_x5 = iStack_180;
            in_x6 = piVar1;
            perf_trace_run_bpf_submit(iVar8,pcVar26);
            iVar7 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_178) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar10 = auVar30._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_01 = 0x80072e4;
    uStack_1d8 = 0x80072e4;
    iVar8 = sp_el0;
    iStack_1e8 = *(iVar8 + 0x5e0);
    uVar25 = *(iVar10 + 0x48);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uVar22 = uVar25;
    uVar16 = uVar15;
    uVar20 = uVar17;
    iVar8 = in_x5;
    puStack_1e0 = &stack0xfffffffffffffe90;
    uStack_1d0 = uVar9;
    pcStack_1c0 = pcVar2;
    piStack_1b8 = piVar1;
    puStack_1b0 = puVar12;
    uStack_1a8 = uVar14;
    uStack_1a0 = uVar21;
    uStack_198 = uVar23;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar11 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar23 = trace_event_ignore_this_pid(iVar10), (uVar23 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar2 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar2;
        auVar30._0_8_ = iVar10;
        iVar6 = strlen(pcVar2);
        uVar22 = iVar6 + 1;
        uVar25 = uVar22;
        puVar11 = uVar22 + 0x30;
        iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffde8,iVar10);
        auVar4._8_8_ = pcVar2;
        auVar4._0_8_ = iVar10;
        if (iVar10 != 0) {
            *(iVar10 + 8) = uVar22 * 0x10000 | 0x30;
            strcpy(iVar10 + 0x30,pcVar2);
            *(iVar10 + 0x10) = puVar13;
            *(iVar10 + 0x18) = uVar15;
            *(iVar10 + 0x20) = uVar17;
            *(iVar10 + 0x28) = in_x5;
            trace_event_buffer_commit(&stack0xfffffffffffffde8);
            auVar30 = auVar4;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    uVar23 = auVar28._0_8_;
    *extraout_x18_02 = sym.perf_trace_bw_hwmon_update;
    pcStack_278 = sym.perf_trace_bw_hwmon_update;
    pcStack_268 = sym.perf_trace_bw_hwmon_meas;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar28._8_8_ != NULL) {
        pcVar2 = auVar28._8_8_;
    }
    iStack_288 = *(iVar10 + 0x5e0);
    iStack_290 = 0;
    uStack_294 = 0;
    puVar12 = puVar11;
    uVar14 = uVar16;
    uVar24 = uVar20;
    iStack_2a0 = iVar8;
    puStack_280 = &stack0xfffffffffffffe20;
    iStack_270 = iVar7;
    pcStack_260 = pcVar26;
    uStack_258 = uVar25;
    uStack_250 = auVar30._8_8_;
    uStack_248 = auVar30._0_8_;
    puStack_240 = puVar13;
    uStack_238 = uVar15;
    uStack_230 = uVar17;
    iStack_228 = in_x5;
    uVar9 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar23 + 0x78);
    if ((*(uVar23 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &stack0xfffffffffffffd6c;
        pcVar27 = (uVar9 + 0x3cU & 0xfffffff8) - 4;
        uVar25 = perf_trace_buf_alloc(pcVar27,&stack0xfffffffffffffd70);
        if (uVar25 != 0) {
            uVar14 = ___cpu_online_mask & 0x3f;
            *(iStack_290 + 0xe8) = &stack0xfffffffffffffd80;
            *(iStack_290 + 0xf8) = &stack0xfffffffffffffd60;
            *(iStack_290 + 0x100) = ~(-1L << uVar14) & 0x8007414;
            *(iStack_290 + 0x108) = 5;
            *(uVar25 + 8) = uVar9 * 0x10000 + 0x10030;
            strcpy(uVar25 + 0x30,pcVar2);
            puVar12 = uStack_294;
            uVar24 = 1;
            in_x7 = 0;
            *(uVar25 + 0x10) = puVar11;
            *(uVar25 + 0x18) = uVar16;
            *(uVar25 + 0x20) = uVar20;
            *(uVar25 + 0x28) = iStack_2a0;
            uVar14 = uVar23;
            iVar8 = iStack_290;
            in_x6 = piVar1;
            perf_trace_run_bpf_submit(uVar25,pcVar27);
            uVar17 = uVar25;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_288) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar10 = auVar31._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_03 = 0x800759c;
    uStack_2f8 = 0x800759c;
    iVar7 = sp_el0;
    iStack_308 = *(iVar7 + 0x5e0);
    uVar21 = *(iVar10 + 0x48);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_320 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    uVar22 = uVar21;
    uVar25 = uVar14;
    uVar15 = uVar24;
    iVar7 = iVar8;
    piVar18 = in_x6;
    uVar19 = in_x7;
    puStack_300 = &stack0xfffffffffffffd80;
    pcStack_2f0 = pcVar27;
    uStack_2e0 = uVar9;
    pcStack_2d8 = pcVar2;
    piStack_2d0 = piVar1;
    puStack_2c8 = puVar11;
    uStack_2c0 = uVar16;
    uStack_2b8 = uVar20;
    uStack_2b0 = uVar17;
    uStack_2a8 = uVar23;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar25 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar26 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar26 = auVar31._8_8_;
    }
    auVar31._8_8_ = pcVar26;
    auVar31._0_8_ = iVar10;
    iVar6 = strlen(pcVar26);
    uVar22 = iVar6 + 1;
    uVar21 = uVar22;
    puVar11 = uVar22 + 0x40;
    iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffcc8,iVar10);
    auVar5._8_8_ = pcVar26;
    auVar5._0_8_ = iVar10;
    if (iVar10 != 0) {
        *(iVar10 + 8) = uVar22 * 0x10000 | 0x40;
        strcpy(iVar10 + 0x40,pcVar26);
        *(iVar10 + 0x10) = puVar12;
        *(iVar10 + 0x18) = uVar14;
        *(iVar10 + 0x20) = uVar24;
        *(iVar10 + 0x28) = iVar8;
        *(iVar10 + 0x30) = in_x6;
        *(iVar10 + 0x38) = in_x7;
        trace_event_buffer_commit(&stack0xfffffffffffffcc8);
        auVar31 = auVar5;
    }
code_r0x080076a0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_308) {
        return;
    }
    auVar28 = __stack_chk_fail();
    uVar16 = auVar28._0_8_;
    *extraout_x18_04 = sym.perf_trace_bw_hwmon_debug;
    pcStack_398 = sym.perf_trace_bw_hwmon_debug;
    pcStack_390 = sym.perf_trace_bw_hwmon_update;
    iVar10 = sp_el0;
    pcVar26 = "(null)";
    if (auVar28._8_8_ != NULL) {
        pcVar26 = auVar28._8_8_;
    }
    iStack_3a8 = *(iVar10 + 0x5e0);
    iStack_3b0 = 0;
    uStack_3b4 = 0;
    puVar13 = puVar11;
    uVar20 = uVar25;
    iStack_3d0 = iVar7;
    piStack_3c8 = piVar18;
    uStack_3c0 = uVar19;
    puStack_3a0 = &stack0xfffffffffffffd00;
    uStack_388 = uVar21;
    uStack_380 = auVar31._8_8_;
    uStack_378 = auVar31._0_8_;
    puStack_370 = puVar12;
    uStack_368 = uVar14;
    uStack_360 = uVar24;
    iStack_358 = iVar8;
    piStack_350 = in_x6;
    uStack_348 = in_x7;
    iVar6 = strlen(pcVar26);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &stack0xfffffffffffffc4c;
        iVar3 = (iVar6 + 0x4cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffc50,puVar13);
        if (iVar8 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_3b0 + 0xe8) = &stack0xfffffffffffffc60;
            *(iStack_3b0 + 0xf8) = &stack0xfffffffffffffc30;
            *(iStack_3b0 + 0x100) = ~(-1L << uVar20) & 0x80076e0;
            *(iStack_3b0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10040;
            strcpy(iVar8 + 0x40,pcVar26);
            puVar13 = uStack_3b4;
            *(iVar8 + 0x20) = uVar15;
            *(iVar8 + 0x28) = iStack_3d0;
            *(iVar8 + 0x10) = puVar11;
            *(iVar8 + 0x18) = uVar25;
            *(iVar8 + 0x30) = piStack_3c8;
            *(iVar8 + 0x38) = uStack_3c0;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar13,uVar16,1,iStack_3b0,piVar1,0);
            uVar20 = uVar16;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_3a8) {
        auVar28 = __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_05 = 0x8007878;
        bpf_trace_run8(auVar28._0_8_,auVar28._8_8_,puVar13 & 0xffffffff,uVar20 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_bw_hwmon_meas @ 0x0800704c (size 280) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x0800725c)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_bw_hwmon_meas(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    uchar auVar4 [16];
    int iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t in_x4;
    uint64_t uVar17;
    uint64_t uVar18;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar19;
    ulong in_x7;
    ulong uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint64_t unaff_x26;
    code *pcVar24;
    uint64_t uVar25;
    int64_t unaff_x28;
    ulong unaff_x30;
    uchar auVar26 [16];
    uchar auVar27 [16];
    uchar auVar28 [16];
    int64_t iStack_340;
    int64_t *piStack_338;
    ulong uStack_330;
    uint32_t uStack_324;
    int64_t iStack_320;
    int64_t iStack_318;
    ulong **ppuStack_310;
    code *pcStack_308;
    code *pcStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    uint32_t *puStack_2e0;
    uint64_t uStack_2d8;
    uint64_t uStack_2d0;
    int64_t iStack_2c8;
    int64_t *piStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2a8;
    ulong uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    ulong uStack_288;
    ulong uStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    ulong uStack_268;
    code *pcStack_260;
    ulong uStack_250;
    char *pcStack_248;
    int64_t *piStack_240;
    uint32_t *puStack_238;
    uint64_t uStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    uint64_t uStack_218;
    int64_t iStack_210;
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    code *pcStack_1e8;
    int64_t iStack_1e0;
    code *pcStack_1d8;
    uint64_t uStack_1d0;
    uint64_t uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    uint32_t *puStack_1b0;
    uint64_t uStack_1a8;
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
    ulong uStack_140;
    char *pcStack_130;
    int64_t *piStack_128;
    uint32_t *puStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
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
    uVar22 = *(arg1 + 0x48);
    uVar15 = arg4;
    uVar16 = in_x4;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = arg3;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar6 = trace_event_ignore_this_pid(arg1), (uVar6 & 1) == 0))))
        goto code_r0x080070cc;
    }
    else {
code_r0x080070cc:
        pcVar1 = "(null)";
        if (arg2 != 0) {
            pcVar1 = arg2;
        }
        iVar5 = strlen(pcVar1);
        puVar12 = iVar5 + 1 + 0x28;
        iVar7 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0x24;
            strcpy(iVar7 + 0x24,pcVar1);
            *(iVar7 + 0x10) = arg3;
            *(iVar7 + 0x18) = arg4;
            *(iVar7 + 0x20) = in_x4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar6 = auVar26._0_8_;
    *extraout_x18 = sym.perf_trace_bw_hwmon_meas;
    pcStack_d8 = sym.perf_trace_bw_hwmon_meas;
    iVar7 = sp_el0;
    pcVar1 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar1 = auVar26._8_8_;
    }
    iStack_e8 = *(iVar7 + 0x5e0);
    pcVar24 = sym.perf_trace_bw_hwmon_meas;
    uVar21 = uVar16 & 0xffffffff;
    iStack_f0 = 0;
    uStack_f4 = 0;
    puVar13 = puVar12;
    uVar10 = uVar15;
    uVar17 = uVar16;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar8 = strlen(pcVar1);
    iVar7 = tpidr_el1;
    piVar2 = iVar7 + *(uVar6 + 0x78);
    if ((*(uVar6 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar13 = &uStack_f4;
        unaff_x26 = (uVar8 + 0x34U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(unaff_x26,&iStack_f0);
        if (iVar7 != 0) {
            uVar10 = ___cpu_online_mask & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar10) & 0x8007164;
            *(iStack_f0 + 0x108) = 5;
            *(iVar7 + 8) = uVar8 * 0x10000 + 0x10024;
            strcpy(iVar7 + 0x24,pcVar1);
            puVar13 = uStack_f4;
            uVar17 = 1;
            in_x7 = 0;
            *(iVar7 + 0x10) = puVar12;
            *(iVar7 + 0x18) = uVar15;
            *(iVar7 + 0x20) = uVar16;
            uVar10 = uVar6;
            in_x5 = iStack_f0;
            in_x6 = piVar2;
            perf_trace_run_bpf_submit(iVar7,unaff_x26);
            unaff_x28 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar26 = __stack_chk_fail();
    iVar9 = auVar26._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18_00 = 0x80072e4;
    uStack_148 = 0x80072e4;
    iVar7 = sp_el0;
    iStack_158 = *(iVar7 + 0x5e0);
    uVar23 = *(iVar9 + 0x48);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar22 = uVar23;
    uVar16 = uVar10;
    uVar18 = uVar17;
    iVar7 = in_x5;
    ppuStack_150 = &puStack_e0;
    uStack_140 = uVar8;
    pcStack_130 = pcVar1;
    piStack_128 = piVar2;
    puStack_120 = puVar12;
    uStack_118 = uVar15;
    uStack_110 = uVar21;
    uStack_108 = uVar6;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar9), (uVar15 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar1 = "(null)";
        if (auVar26._8_8_ != NULL) {
            pcVar1 = auVar26._8_8_;
        }
        auVar26._8_8_ = pcVar1;
        auVar26._0_8_ = iVar9;
        iVar5 = strlen(pcVar1);
        uVar22 = iVar5 + 1;
        uVar23 = uVar22;
        puVar12 = uVar22 + 0x30;
        iVar9 = trace_event_buffer_reserve(&uStack_188,iVar9);
        auVar27._8_8_ = pcVar1;
        auVar27._0_8_ = iVar9;
        if (iVar9 != 0) {
            *(iVar9 + 8) = uVar22 * 0x10000 | 0x30;
            strcpy(iVar9 + 0x30,pcVar1);
            *(iVar9 + 0x10) = puVar13;
            *(iVar9 + 0x18) = uVar10;
            *(iVar9 + 0x20) = uVar17;
            *(iVar9 + 0x28) = in_x5;
            trace_event_buffer_commit(&uStack_188);
            auVar26 = auVar27;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_158) {
        return;
    }
    auVar27 = __stack_chk_fail();
    uVar15 = auVar27._0_8_;
    *extraout_x18_01 = sym.perf_trace_bw_hwmon_update;
    pcStack_1e8 = sym.perf_trace_bw_hwmon_update;
    pcStack_1d8 = sym.perf_trace_bw_hwmon_meas;
    iVar9 = sp_el0;
    pcVar1 = "(null)";
    if (auVar27._8_8_ != NULL) {
        pcVar1 = auVar27._8_8_;
    }
    iStack_1f8 = *(iVar9 + 0x5e0);
    iStack_200 = 0;
    uStack_204 = 0;
    puVar14 = puVar12;
    uVar6 = uVar16;
    uVar21 = uVar18;
    iStack_210 = iVar7;
    ppuStack_1f0 = &ppuStack_150;
    iStack_1e0 = unaff_x28;
    uStack_1d0 = unaff_x26;
    uStack_1c8 = uVar23;
    uStack_1c0 = auVar26._8_8_;
    uStack_1b8 = auVar26._0_8_;
    puStack_1b0 = puVar13;
    uStack_1a8 = uVar10;
    uStack_1a0 = uVar17;
    iStack_198 = in_x5;
    uVar8 = strlen(pcVar1);
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar14 = &uStack_204;
        pcVar24 = (uVar8 + 0x3cU & 0xfffffff8) - 4;
        uVar10 = perf_trace_buf_alloc(pcVar24,&iStack_200);
        if (uVar10 != 0) {
            uVar6 = ___cpu_online_mask & 0x3f;
            *(iStack_200 + 0xe8) = &ppuStack_1f0;
            *(iStack_200 + 0xf8) = &iStack_210;
            *(iStack_200 + 0x100) = ~(-1L << uVar6) & 0x8007414;
            *(iStack_200 + 0x108) = 5;
            *(uVar10 + 8) = uVar8 * 0x10000 + 0x10030;
            strcpy(uVar10 + 0x30,pcVar1);
            puVar14 = uStack_204;
            uVar21 = 1;
            in_x7 = 0;
            *(uVar10 + 0x10) = puVar12;
            *(uVar10 + 0x18) = uVar16;
            *(uVar10 + 0x20) = uVar18;
            *(uVar10 + 0x28) = iStack_210;
            uVar6 = uVar15;
            iVar7 = iStack_200;
            in_x6 = piVar2;
            perf_trace_run_bpf_submit(uVar10,pcVar24);
            uVar17 = uVar10;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar28 = __stack_chk_fail();
    iVar11 = auVar28._0_8_;
    uVar20 = tpidr_el2;
    *extraout_x18_02 = 0x800759c;
    uStack_268 = 0x800759c;
    iVar9 = sp_el0;
    iStack_278 = *(iVar9 + 0x5e0);
    uVar25 = *(iVar11 + 0x48);
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uVar22 = uVar25;
    uVar10 = uVar6;
    uVar23 = uVar21;
    iVar9 = iVar7;
    piVar19 = in_x6;
    uVar20 = in_x7;
    ppuStack_270 = &ppuStack_1f0;
    pcStack_260 = pcVar24;
    uStack_250 = uVar8;
    pcStack_248 = pcVar1;
    piStack_240 = piVar2;
    puStack_238 = puVar12;
    uStack_230 = uVar16;
    uStack_228 = uVar18;
    uStack_220 = uVar17;
    uStack_218 = uVar15;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar11), (uVar15 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar1 = "(null)";
    if (auVar28._8_8_ != NULL) {
        pcVar1 = auVar28._8_8_;
    }
    auVar28._8_8_ = pcVar1;
    auVar28._0_8_ = iVar11;
    iVar5 = strlen(pcVar1);
    uVar22 = iVar5 + 1;
    uVar25 = uVar22;
    puVar12 = uVar22 + 0x40;
    iVar11 = trace_event_buffer_reserve(&uStack_2a8,iVar11);
    auVar4._8_8_ = pcVar1;
    auVar4._0_8_ = iVar11;
    if (iVar11 != 0) {
        *(iVar11 + 8) = uVar22 * 0x10000 | 0x40;
        strcpy(iVar11 + 0x40,pcVar1);
        *(iVar11 + 0x10) = puVar14;
        *(iVar11 + 0x18) = uVar6;
        *(iVar11 + 0x20) = uVar21;
        *(iVar11 + 0x28) = iVar7;
        *(iVar11 + 0x30) = in_x6;
        *(iVar11 + 0x38) = in_x7;
        trace_event_buffer_commit(&uStack_2a8);
        auVar28 = auVar4;
    }
code_r0x080076a0:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_278) {
        return;
    }
    auVar26 = __stack_chk_fail();
    uVar15 = auVar26._0_8_;
    *extraout_x18_03 = sym.perf_trace_bw_hwmon_debug;
    pcStack_308 = sym.perf_trace_bw_hwmon_debug;
    pcStack_300 = sym.perf_trace_bw_hwmon_update;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar26._8_8_ != NULL) {
        pcVar1 = auVar26._8_8_;
    }
    iStack_318 = *(iVar11 + 0x5e0);
    iStack_320 = 0;
    uStack_324 = 0;
    puVar13 = puVar12;
    uVar16 = uVar10;
    iStack_340 = iVar9;
    piStack_338 = piVar19;
    uStack_330 = uVar20;
    ppuStack_310 = &ppuStack_270;
    uStack_2f8 = uVar25;
    uStack_2f0 = auVar28._8_8_;
    uStack_2e8 = auVar28._0_8_;
    puStack_2e0 = puVar14;
    uStack_2d8 = uVar6;
    uStack_2d0 = uVar21;
    iStack_2c8 = iVar7;
    piStack_2c0 = in_x6;
    uStack_2b8 = in_x7;
    iVar5 = strlen(pcVar1);
    iVar7 = tpidr_el1;
    piVar2 = iVar7 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar13 = &uStack_324;
        iVar3 = (iVar5 + 0x4cU & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_320,puVar13);
        if (iVar7 != 0) {
            uVar16 = ___cpu_online_mask & 0x3f;
            *(iStack_320 + 0xe8) = &ppuStack_310;
            *(iStack_320 + 0xf8) = &iStack_340;
            *(iStack_320 + 0x100) = ~(-1L << uVar16) & 0x80076e0;
            *(iStack_320 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x10040;
            strcpy(iVar7 + 0x40,pcVar1);
            puVar13 = uStack_324;
            *(iVar7 + 0x20) = uVar23;
            *(iVar7 + 0x28) = iStack_340;
            *(iVar7 + 0x10) = puVar12;
            *(iVar7 + 0x18) = uVar10;
            *(iVar7 + 0x30) = piStack_338;
            *(iVar7 + 0x38) = uStack_330;
            perf_trace_run_bpf_submit(iVar7,iVar3,puVar13,uVar15,1,iStack_320,piVar2,0);
            uVar16 = uVar15;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_318) {
        auVar26 = __stack_chk_fail();
        uVar8 = tpidr_el2;
        *extraout_x18_04 = 0x8007878;
        bpf_trace_run8(auVar26._0_8_,auVar26._8_8_,puVar13 & 0xffffffff,uVar16 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_bw_hwmon_meas @ 0x08007164 (size 396) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_bw_hwmon_meas(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uchar *puVar11;
    uchar *puVar12;
    uchar *puVar13;
    uint64_t uVar14;
    uint64_t in_x4;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar18;
    ulong in_x7;
    ulong uVar19;
    uint64_t uVar20;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    int64_t unaff_x28;
    uint64_t unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [16];
    int64_t iStack_2c0;
    int64_t *piStack_2b8;
    ulong uStack_2b0;
    uint32_t uStack_2a4;
    int64_t iStack_2a0;
    int64_t iStack_298;
    uchar *puStack_290;
    code *pcStack_288;
    code *pcStack_280;
    uint64_t uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    uchar *puStack_260;
    uint64_t uStack_258;
    uint64_t uStack_250;
    int64_t iStack_248;
    int64_t *piStack_240;
    ulong uStack_238;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    ulong uStack_1e8;
    uint64_t uStack_1e0;
    ulong uStack_1d0;
    char *pcStack_1c8;
    int64_t *piStack_1c0;
    uchar *puStack_1b8;
    uint64_t uStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    uint64_t uStack_198;
    int64_t iStack_190;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar *puStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    char *pcStack_b0;
    int64_t *piStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    pcVar2 = "(null)";
    if (arg2 != NULL) {
        pcVar2 = arg2;
    }
    iStack_68 = *(iVar6 + 0x5e0);
    uVar21 = in_x4 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar11 = arg3;
    uVar9 = arg4;
    uVar20 = in_x4;
    uVar5 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &stack0xffffffffffffff8c;
        iVar4 = (uVar5 + 0x34U & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar4,&stack0xffffffffffffff90);
        if (iVar6 != 0) {
            uVar20 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar9 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar9 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar9;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10024;
            strcpy(iVar6 + 0x24,pcVar2);
            puVar11 = uStack_74;
            uVar20 = 1;
            in_x7 = 0;
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x20) = in_x4;
            uVar9 = arg1;
            in_x5 = iStack_70;
            in_x6 = piVar1;
            perf_trace_run_bpf_submit(iVar6,iVar4);
            unaff_x28 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar7 = auVar24._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18 = 0x80072e4;
    uStack_c8 = 0x80072e4;
    iVar6 = sp_el0;
    iStack_d8 = *(iVar6 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uVar22 = *(iVar7 + 0x48);
    uVar14 = uVar9;
    uVar15 = uVar20;
    iVar6 = in_x5;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = uVar5;
    pcStack_b0 = pcVar2;
    piStack_a8 = piVar1;
    iStack_a0 = arg3;
    iStack_98 = arg4;
    uStack_90 = uVar21;
    iStack_88 = arg1;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar7,0);
        }
        if (((uVar22 >> 6 & 1) == 0) &&
           (((uVar22 >> 9 & 1) == 0 || (uVar21 = trace_event_ignore_this_pid(iVar7), (uVar21 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar2 = "(null)";
        if (auVar24._8_8_ != NULL) {
            pcVar2 = auVar24._8_8_;
        }
        iVar4 = strlen(pcVar2);
        puVar12 = iVar4 + 1 + 0x30;
        iVar7 = trace_event_buffer_reserve(&stack0xfffffffffffffef8,iVar7);
        if (iVar7 != 0) {
            *(iVar7 + 8) = (iVar4 + 1) * 0x10000 | 0x30;
            strcpy(iVar7 + 0x30,pcVar2);
            *(iVar7 + 0x10) = puVar11;
            *(iVar7 + 0x18) = uVar9;
            *(iVar7 + 0x20) = uVar20;
            *(iVar7 + 0x28) = in_x5;
            trace_event_buffer_commit(&stack0xfffffffffffffef8);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar9 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_bw_hwmon_update;
    pcStack_168 = sym.perf_trace_bw_hwmon_update;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    iStack_178 = *(iVar7 + 0x5e0);
    iStack_180 = 0;
    uStack_184 = 0;
    puVar11 = puVar12;
    uVar21 = uVar14;
    uVar16 = uVar15;
    iStack_190 = iVar6;
    puStack_170 = &stack0xffffffffffffff30;
    iStack_160 = unaff_x28;
    uVar5 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &stack0xfffffffffffffe7c;
        unaff_x30 = (uVar5 + 0x3cU & 0xfffffff8) - 4;
        uVar8 = perf_trace_buf_alloc(unaff_x30,&stack0xfffffffffffffe80);
        if (uVar8 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_180 + 0xe8) = &stack0xfffffffffffffe90;
            *(iStack_180 + 0xf8) = &stack0xfffffffffffffe70;
            *(iStack_180 + 0x100) = ~(-1L << uVar20) & 0x8007414;
            *(iStack_180 + 0x108) = 5;
            *(uVar8 + 8) = uVar5 * 0x10000 + 0x10030;
            strcpy(uVar8 + 0x30,pcVar2);
            puVar11 = uStack_184;
            uVar16 = 1;
            in_x7 = 0;
            *(uVar8 + 0x10) = puVar12;
            *(uVar8 + 0x18) = uVar14;
            *(uVar8 + 0x20) = uVar15;
            *(uVar8 + 0x28) = iStack_190;
            uVar21 = uVar9;
            iVar6 = iStack_180;
            in_x6 = piVar1;
            perf_trace_run_bpf_submit(uVar8,unaff_x30);
            uVar20 = uVar8;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_178) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar10 = auVar24._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_01 = 0x800759c;
    uStack_1e8 = 0x800759c;
    iVar7 = sp_el0;
    iStack_1f8 = *(iVar7 + 0x5e0);
    uVar23 = *(iVar10 + 0x48);
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uVar22 = uVar23;
    uVar8 = uVar21;
    uVar17 = uVar16;
    iVar7 = iVar6;
    piVar18 = in_x6;
    uVar19 = in_x7;
    puStack_1f0 = &stack0xfffffffffffffe90;
    uStack_1e0 = unaff_x30;
    uStack_1d0 = uVar5;
    pcStack_1c8 = pcVar2;
    piStack_1c0 = piVar1;
    puStack_1b8 = puVar12;
    uStack_1b0 = uVar14;
    uStack_1a8 = uVar15;
    uStack_1a0 = uVar20;
    uStack_198 = uVar9;
    if ((uVar22 >> 8 & 1) == 0) {
        puVar12 = puVar11;
        if ((uVar22 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar22 >> 6 & 1) != 0) ||
           (((uVar22 >> 9 & 1) != 0 && (uVar9 = trace_event_ignore_this_pid(iVar10), (uVar9 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar2 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar2 = auVar24._8_8_;
    }
    auVar24._8_8_ = pcVar2;
    auVar24._0_8_ = iVar10;
    iVar4 = strlen(pcVar2);
    uVar22 = iVar4 + 1;
    uVar23 = uVar22;
    puVar12 = uVar22 + 0x40;
    iVar10 = trace_event_buffer_reserve(&stack0xfffffffffffffdd8,iVar10);
    auVar25._8_8_ = pcVar2;
    auVar25._0_8_ = iVar10;
    if (iVar10 != 0) {
        *(iVar10 + 8) = uVar22 * 0x10000 | 0x40;
        strcpy(iVar10 + 0x40,pcVar2);
        *(iVar10 + 0x10) = puVar11;
        *(iVar10 + 0x18) = uVar21;
        *(iVar10 + 0x20) = uVar16;
        *(iVar10 + 0x28) = iVar6;
        *(iVar10 + 0x30) = in_x6;
        *(iVar10 + 0x38) = in_x7;
        trace_event_buffer_commit(&stack0xfffffffffffffdd8);
        auVar24 = auVar25;
    }
code_r0x080076a0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar9 = auVar25._0_8_;
    *extraout_x18_02 = sym.perf_trace_bw_hwmon_debug;
    pcStack_288 = sym.perf_trace_bw_hwmon_debug;
    pcStack_280 = sym.perf_trace_bw_hwmon_update;
    iVar10 = sp_el0;
    pcVar2 = "(null)";
    if (auVar25._8_8_ != NULL) {
        pcVar2 = auVar25._8_8_;
    }
    iStack_298 = *(iVar10 + 0x5e0);
    iStack_2a0 = 0;
    uStack_2a4 = 0;
    puVar13 = puVar12;
    uVar20 = uVar8;
    iStack_2c0 = iVar7;
    piStack_2b8 = piVar18;
    uStack_2b0 = uVar19;
    puStack_290 = &stack0xfffffffffffffe10;
    uStack_278 = uVar23;
    uStack_270 = auVar24._8_8_;
    uStack_268 = auVar24._0_8_;
    puStack_260 = puVar11;
    uStack_258 = uVar21;
    uStack_250 = uVar16;
    iStack_248 = iVar6;
    piStack_240 = in_x6;
    uStack_238 = in_x7;
    iVar4 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &stack0xfffffffffffffd5c;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffd60,puVar13);
        if (iVar6 != 0) {
            uVar20 = ___cpu_online_mask & 0x3f;
            *(iStack_2a0 + 0xe8) = &stack0xfffffffffffffd70;
            *(iStack_2a0 + 0xf8) = &stack0xfffffffffffffd40;
            *(iStack_2a0 + 0x100) = ~(-1L << uVar20) & 0x80076e0;
            *(iStack_2a0 + 0x108) = 5;
            *(iVar6 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,pcVar2);
            puVar13 = uStack_2a4;
            *(iVar6 + 0x20) = uVar17;
            *(iVar6 + 0x28) = iStack_2c0;
            *(iVar6 + 0x10) = puVar12;
            *(iVar6 + 0x18) = uVar8;
            *(iVar6 + 0x30) = piStack_2b8;
            *(iVar6 + 0x38) = uStack_2b0;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar13,uVar9,1,iStack_2a0,piVar1,0);
            uVar20 = uVar9;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_298) {
        auVar24 = __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_03 = 0x8007878;
        bpf_trace_run8(auVar24._0_8_,auVar24._8_8_,puVar13 & 0xffffffff,uVar20 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_bw_hwmon_update @ 0x080072f0 (size 292) =====

//WARNING: Removing unreachable block (ram,0x08007510)
//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_bw_hwmon_update(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t in_x4;
    int64_t iVar16;
    int64_t iVar17;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar18;
    ulong in_x7;
    ulong uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar20;
    uint64_t unaff_x27;
    uint64_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [16];
    int64_t iStack_240;
    int64_t *piStack_238;
    ulong uStack_230;
    uint32_t uStack_224;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong **ppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    uint64_t uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    uint32_t *puStack_1e0;
    uint64_t uStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    int64_t *piStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    ulong uStack_168;
    uint64_t uStack_160;
    ulong uStack_150;
    char *pcStack_148;
    int64_t *piStack_140;
    uint32_t *puStack_138;
    uint64_t uStack_130;
    int64_t iStack_120;
    uint64_t uStack_118;
    int64_t iStack_110;
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
    iVar16 = sp_el0;
    iStack_58 = *(iVar16 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar20 = *(arg1 + 0x48);
    uVar13 = arg4;
    iVar16 = in_x4;
    iVar9 = in_x5;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = arg3;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar13 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar20 >> 6 & 1) == 0) &&
           (((uVar20 >> 9 & 1) == 0 || (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) == 0))))
        goto code_r0x08007378;
    }
    else {
code_r0x08007378:
        pcVar1 = "(null)";
        if (arg2 != 0) {
            pcVar1 = arg2;
        }
        iVar4 = strlen(pcVar1);
        puVar10 = iVar4 + 1 + 0x30;
        iVar6 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar6 != 0) {
            *(iVar6 + 8) = (iVar4 + 1) * 0x10000 | 0x30;
            strcpy(iVar6 + 0x30,pcVar1);
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x20) = in_x4;
            *(iVar6 + 0x28) = in_x5;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar5 = auVar22._0_8_;
    *extraout_x18 = sym.perf_trace_bw_hwmon_update;
    pcStack_e8 = sym.perf_trace_bw_hwmon_update;
    iVar6 = sp_el0;
    pcVar1 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar1 = auVar22._8_8_;
    }
    iStack_f8 = *(iVar6 + 0x5e0);
    iStack_100 = 0;
    uStack_104 = 0;
    puVar11 = puVar10;
    uVar14 = uVar13;
    iVar17 = iVar16;
    iStack_110 = iVar9;
    puStack_f0 = &stack0xffffffffffffffb0;
    uVar7 = strlen(pcVar1);
    iVar6 = tpidr_el1;
    piVar2 = iVar6 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar11 = &uStack_104;
        unaff_x27 = (uVar7 + 0x3cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x27,&iStack_100);
        if (iVar6 != 0) {
            uVar14 = ___cpu_online_mask & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = &iStack_110;
            *(iStack_100 + 0x100) = ~(-1L << uVar14) & 0x8007414;
            *(iStack_100 + 0x108) = 5;
            *(iVar6 + 8) = uVar7 * 0x10000 + 0x10030;
            strcpy(iVar6 + 0x30,pcVar1);
            puVar11 = uStack_104;
            iVar17 = 1;
            in_x7 = 0;
            *(iVar6 + 0x10) = puVar10;
            *(iVar6 + 0x18) = uVar13;
            *(iVar6 + 0x20) = iVar16;
            *(iVar6 + 0x28) = iStack_110;
            uVar14 = uVar5;
            iVar9 = iStack_100;
            in_x6 = piVar2;
            perf_trace_run_bpf_submit(iVar6,unaff_x27);
            in_x4 = iVar6;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar8 = auVar22._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_00 = 0x800759c;
    uStack_168 = 0x800759c;
    iVar16 = sp_el0;
    iStack_178 = *(iVar16 + 0x5e0);
    uVar21 = *(iVar8 + 0x48);
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uVar20 = uVar21;
    uVar15 = uVar14;
    iVar16 = iVar17;
    iVar6 = iVar9;
    piVar18 = in_x6;
    uVar19 = in_x7;
    ppuStack_170 = &puStack_f0;
    uStack_160 = unaff_x27;
    uStack_150 = uVar7;
    pcStack_148 = pcVar1;
    piStack_140 = piVar2;
    puStack_138 = puVar10;
    uStack_130 = uVar13;
    iStack_120 = in_x4;
    uStack_118 = uVar5;
    if ((uVar20 >> 8 & 1) == 0) {
        puVar10 = puVar11;
        if ((uVar20 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar20 >> 6 & 1) != 0) ||
           (((uVar20 >> 9 & 1) != 0 && (uVar13 = trace_event_ignore_this_pid(iVar8), (uVar13 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar1 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar1 = auVar22._8_8_;
    }
    auVar22._8_8_ = pcVar1;
    auVar22._0_8_ = iVar8;
    iVar4 = strlen(pcVar1);
    uVar20 = iVar4 + 1;
    uVar21 = uVar20;
    puVar10 = uVar20 + 0x40;
    iVar8 = trace_event_buffer_reserve(&uStack_1a8,iVar8);
    auVar23._8_8_ = pcVar1;
    auVar23._0_8_ = iVar8;
    if (iVar8 != 0) {
        *(iVar8 + 8) = uVar20 * 0x10000 | 0x40;
        strcpy(iVar8 + 0x40,pcVar1);
        *(iVar8 + 0x10) = puVar11;
        *(iVar8 + 0x18) = uVar14;
        *(iVar8 + 0x20) = iVar17;
        *(iVar8 + 0x28) = iVar9;
        *(iVar8 + 0x30) = in_x6;
        *(iVar8 + 0x38) = in_x7;
        trace_event_buffer_commit(&uStack_1a8);
        auVar22 = auVar23;
    }
code_r0x080076a0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_178) {
        return;
    }
    auVar23 = __stack_chk_fail();
    uVar13 = auVar23._0_8_;
    *extraout_x18_01 = sym.perf_trace_bw_hwmon_debug;
    pcStack_208 = sym.perf_trace_bw_hwmon_debug;
    pcStack_200 = sym.perf_trace_bw_hwmon_update;
    iVar8 = sp_el0;
    pcVar1 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar1 = auVar23._8_8_;
    }
    iStack_218 = *(iVar8 + 0x5e0);
    iStack_220 = 0;
    uStack_224 = 0;
    puVar12 = puVar10;
    uVar5 = uVar15;
    iStack_240 = iVar6;
    piStack_238 = piVar18;
    uStack_230 = uVar19;
    ppuStack_210 = &ppuStack_170;
    uStack_1f8 = uVar21;
    uStack_1f0 = auVar22._8_8_;
    uStack_1e8 = auVar22._0_8_;
    puStack_1e0 = puVar11;
    uStack_1d8 = uVar14;
    iStack_1d0 = iVar17;
    iStack_1c8 = iVar9;
    piStack_1c0 = in_x6;
    uStack_1b8 = in_x7;
    iVar4 = strlen(pcVar1);
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(uVar13 + 0x78);
    if ((*(uVar13 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &uStack_224;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_220,puVar12);
        if (iVar9 != 0) {
            uVar5 = ___cpu_online_mask & 0x3f;
            *(iStack_220 + 0xe8) = &ppuStack_210;
            *(iStack_220 + 0xf8) = &iStack_240;
            *(iStack_220 + 0x100) = ~(-1L << uVar5) & 0x80076e0;
            *(iStack_220 + 0x108) = 5;
            *(iVar9 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar9 + 0x40,pcVar1);
            puVar12 = uStack_224;
            *(iVar9 + 0x20) = iVar16;
            *(iVar9 + 0x28) = iStack_240;
            *(iVar9 + 0x10) = puVar10;
            *(iVar9 + 0x18) = uVar15;
            *(iVar9 + 0x30) = piStack_238;
            *(iVar9 + 0x38) = uStack_230;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar12,uVar13,1,iStack_220,piVar2,0);
            uVar5 = uVar13;
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) != iStack_218) {
        auVar22 = __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_02 = 0x8007878;
        bpf_trace_run8(auVar22._0_8_,auVar22._8_8_,puVar12 & 0xffffffff,uVar5 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_bw_hwmon_update @ 0x08007414 (size 404) =====

//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.perf_trace_bw_hwmon_update(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uchar *puVar9;
    uchar *puVar10;
    uint64_t uVar11;
    ulong in_x4;
    ulong uVar12;
    ulong uVar13;
    int64_t in_x5;
    int64_t *in_x6;
    int64_t *piVar14;
    ulong in_x7;
    ulong uVar15;
    uint64_t uVar16;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x20;
    uint32_t uVar17;
    uint64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar18 [16];
    int64_t iStack_1b0;
    int64_t *piStack_1a8;
    ulong uStack_1a0;
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    code *pcStack_178;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c0;
    char *pcStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    pcVar2 = "(null)";
    if (arg2 != NULL) {
        pcVar2 = arg2;
    }
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    puVar9 = arg3;
    uVar11 = arg4;
    uVar12 = in_x4;
    iStack_80 = in_x5;
    uVar5 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &stack0xffffffffffffff8c;
        unaff_x27 = (uVar5 + 0x3cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(unaff_x27,&stack0xffffffffffffff90);
        if (iVar6 != 0) {
            uVar16 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar11 = (~uVar16 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar16 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar11;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = uVar5 * 0x10000 + 0x10030;
            strcpy(iVar6 + 0x30,pcVar2);
            puVar9 = uStack_74;
            uVar12 = 1;
            in_x7 = 0;
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x20) = in_x4;
            *(iVar6 + 0x28) = iStack_80;
            uVar11 = arg1;
            in_x5 = iStack_70;
            in_x6 = piVar1;
            perf_trace_run_bpf_submit(iVar6,unaff_x27);
            unaff_x20 = iVar6;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar8 = auVar18._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x800759c;
    uStack_d8 = 0x800759c;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uVar17 = *(iVar8 + 0x48);
    uVar16 = uVar11;
    uVar13 = uVar12;
    iVar6 = in_x5;
    piVar14 = in_x6;
    uVar15 = in_x7;
    puStack_e0 = &stack0xffffffffffffffa0;
    uStack_d0 = unaff_x27;
    uStack_c0 = uVar5;
    pcStack_b8 = pcVar2;
    piStack_b0 = piVar1;
    iStack_a8 = arg3;
    iStack_a0 = arg4;
    iStack_90 = unaff_x20;
    iStack_88 = arg1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar10 = puVar9;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar8,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar8), (uVar7 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar2 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar2 = auVar18._8_8_;
    }
    iVar4 = strlen(pcVar2);
    puVar10 = iVar4 + 1 + 0x40;
    iVar8 = trace_event_buffer_reserve(&stack0xfffffffffffffee8,iVar8);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar4 + 1) * 0x10000 | 0x40;
        strcpy(iVar8 + 0x40,pcVar2);
        *(iVar8 + 0x10) = puVar9;
        *(iVar8 + 0x18) = uVar11;
        *(iVar8 + 0x20) = uVar12;
        *(iVar8 + 0x28) = in_x5;
        *(iVar8 + 0x30) = in_x6;
        *(iVar8 + 0x38) = in_x7;
        trace_event_buffer_commit(&stack0xfffffffffffffee8);
    }
code_r0x080076a0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar11 = auVar18._0_8_;
    *extraout_x18_00 = sym.perf_trace_bw_hwmon_debug;
    pcStack_178 = sym.perf_trace_bw_hwmon_debug;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar2 = auVar18._8_8_;
    }
    iStack_188 = *(iVar8 + 0x5e0);
    iStack_190 = 0;
    uStack_194 = 0;
    puVar9 = puVar10;
    uVar7 = uVar16;
    iStack_1b0 = iVar6;
    piStack_1a8 = piVar14;
    uStack_1a0 = uVar15;
    puStack_180 = &stack0xffffffffffffff20;
    iVar4 = strlen(pcVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar9 = &stack0xfffffffffffffe6c;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffe70,puVar9);
        if (iVar6 != 0) {
            uVar7 = ___cpu_online_mask & 0x3f;
            *(iStack_190 + 0xe8) = &stack0xfffffffffffffe80;
            *(iStack_190 + 0xf8) = &stack0xfffffffffffffe50;
            *(iStack_190 + 0x100) = ~(-1L << uVar7) & 0x80076e0;
            *(iStack_190 + 0x108) = 5;
            *(iVar6 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,pcVar2);
            puVar9 = uStack_194;
            *(iVar6 + 0x20) = uVar13;
            *(iVar6 + 0x28) = iStack_1b0;
            *(iVar6 + 0x10) = puVar10;
            *(iVar6 + 0x18) = uVar16;
            *(iVar6 + 0x30) = piStack_1a8;
            *(iVar6 + 0x38) = uStack_1a0;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar9,uVar11,1,iStack_190,piVar1,0);
            uVar7 = uVar11;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_188) {
        auVar18 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_01 = 0x8007878;
        bpf_trace_run8(auVar18._0_8_,auVar18._8_8_,puVar9 & 0xffffffff,uVar7 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_bw_hwmon_debug @ 0x080075a8 (size 312) =====

//WARNING: Removing unreachable block (ram,0x080077e0)

void sym.trace_event_raw_event_bw_hwmon_debug(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong in_x4;
    ulong uVar11;
    ulong in_x5;
    ulong uVar12;
    ulong in_x6;
    ulong uVar13;
    ulong in_x7;
    ulong uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    uint32_t uStack_114;
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
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar15 = *(arg1 + 0x48);
    uVar9 = arg4;
    uVar11 = in_x4;
    uVar12 = in_x5;
    uVar13 = in_x6;
    uVar14 = in_x7;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar7 = arg3;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar7 = NULL;
            uVar9 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar5 = trace_event_ignore_this_pid(arg1), (uVar5 & 1) != 0))))
        goto code_r0x080076a0;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar4 = strlen(pcVar1);
    puVar7 = iVar4 + 1 + 0x40;
    iVar6 = trace_event_buffer_reserve(&uStack_98,arg1);
    if (iVar6 != 0) {
        *(iVar6 + 8) = (iVar4 + 1) * 0x10000 | 0x40;
        strcpy(iVar6 + 0x40,pcVar1);
        *(iVar6 + 0x10) = arg3;
        *(iVar6 + 0x18) = arg4;
        *(iVar6 + 0x20) = in_x4;
        *(iVar6 + 0x28) = in_x5;
        *(iVar6 + 0x30) = in_x6;
        *(iVar6 + 0x38) = in_x7;
        trace_event_buffer_commit(&uStack_98);
    }
code_r0x080076a0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar16 = __stack_chk_fail();
    uVar5 = auVar16._0_8_;
    *extraout_x18 = sym.perf_trace_bw_hwmon_debug;
    pcStack_f8 = sym.perf_trace_bw_hwmon_debug;
    iVar6 = sp_el0;
    pcVar1 = "(null)";
    if (auVar16._8_8_ != NULL) {
        pcVar1 = auVar16._8_8_;
    }
    iStack_108 = *(iVar6 + 0x5e0);
    iStack_110 = 0;
    uStack_114 = 0;
    puVar8 = puVar7;
    uVar10 = uVar9;
    uStack_130 = uVar12;
    uStack_128 = uVar13;
    uStack_120 = uVar14;
    puStack_100 = &stack0xffffffffffffffa0;
    iVar4 = strlen(pcVar1);
    iVar6 = tpidr_el1;
    piVar2 = iVar6 + *(uVar5 + 0x78);
    if ((*(uVar5 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar8 = &uStack_114;
        iVar3 = (iVar4 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&iStack_110,puVar8);
        if (iVar6 != 0) {
            uVar10 = ___cpu_online_mask & 0x3f;
            *(iStack_110 + 0xe8) = &puStack_100;
            *(iStack_110 + 0xf8) = &uStack_130;
            *(iStack_110 + 0x100) = ~(-1L << uVar10) & 0x80076e0;
            *(iStack_110 + 0x108) = 5;
            *(iVar6 + 8) = iVar4 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,pcVar1);
            puVar8 = uStack_114;
            *(iVar6 + 0x20) = uVar11;
            *(iVar6 + 0x28) = uStack_130;
            *(iVar6 + 0x10) = puVar7;
            *(iVar6 + 0x18) = uVar9;
            *(iVar6 + 0x30) = uStack_128;
            *(iVar6 + 0x38) = uStack_120;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar8,uVar5,1,iStack_110,piVar2,0);
            uVar10 = uVar5;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_108) {
        auVar16 = __stack_chk_fail();
        uVar11 = tpidr_el2;
        *extraout_x18_00 = 0x8007878;
        bpf_trace_run8(auVar16._0_8_,auVar16._8_8_,puVar8 & 0xffffffff,uVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_bw_hwmon_debug @ 0x080076e0 (size 420) =====

void sym.perf_trace_bw_hwmon_debug(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    uchar *puVar7;
    uint64_t uVar8;
    ulong in_x4;
    ulong in_x5;
    ulong in_x6;
    ulong in_x7;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar10 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    uVar2 = 0x8001f74;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_68 = *(iVar6 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    puVar7 = arg3;
    uVar8 = arg4;
    uStack_90 = in_x5;
    uStack_88 = in_x6;
    uStack_80 = in_x7;
    iVar5 = strlen(uVar2);
    iVar6 = tpidr_el1;
    piVar1 = iVar6 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar7 = &stack0xffffffffffffff8c;
        iVar3 = (iVar5 + 0x4cU & 0xfffffff8) - 4;
        iVar6 = perf_trace_buf_alloc(iVar3,&stack0xffffffffffffff90,puVar7);
        if (iVar6 != 0) {
            uVar9 = -1L << (___cpu_online_mask & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff70;
            uVar8 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar8 = uVar9 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar8;
            *(iStack_70 + 0x108) = 5;
            *(iVar6 + 8) = iVar5 * 0x10000 + 0x10040;
            strcpy(iVar6 + 0x40,uVar2);
            puVar7 = uStack_74;
            *(iVar6 + 0x20) = in_x4;
            *(iVar6 + 0x28) = uStack_90;
            *(iVar6 + 0x10) = arg3;
            *(iVar6 + 0x18) = arg4;
            *(iVar6 + 0x30) = uStack_88;
            *(iVar6 + 0x38) = uStack_80;
            perf_trace_run_bpf_submit(iVar6,iVar3,puVar7,arg1,1,iStack_70,piVar1,0);
            uVar8 = arg1;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x8007878;
    bpf_trace_run8(auVar10._0_8_,auVar10._8_8_,puVar7 & 0xffffffff,uVar8 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_qcom_dcvs_update @ 0x08007884 (size 60) =====

void sym.__bpf_trace_qcom_dcvs_update(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run8(in_x0,in_x1,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_qcom_dcvs_boost @ 0x080078c0 (size 44) =====

void sym.__bpf_trace_qcom_dcvs_boost(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_memlat_dev_meas @ 0x080078ec (size 68) =====

void sym.__bpf_trace_memlat_dev_meas(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run9(in_x0,in_x1,arg1 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_memlat_dev_update @ 0x08007930 (size 40) =====

void sym.__bpf_trace_memlat_dev_update(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run6(in_x0,in_x1,arg1 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_bw_hwmon_meas @ 0x08007958 (size 40) =====

void sym.__bpf_trace_bw_hwmon_meas(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4();
    return;
}


// ===== sym.__bpf_trace_bw_hwmon_update @ 0x08007980 (size 36) =====

void sym.__bpf_trace_bw_hwmon_update(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5();
    return;
}


// ===== sym.__bpf_trace_bw_hwmon_debug @ 0x080079a4 (size 36) =====

void sym.__bpf_trace_bw_hwmon_debug(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run7();
    return;
}


// ===== sym.trace_raw_output_qcom_dcvs_update @ 0x080079c8 (size 140) =====

void sym.trace_raw_output_qcom_dcvs_update(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"name=%s hw=%d path=%d ib=%lu path_ib=%lu ab=%lu path_ab=%lu boost=%lu\n",
                           iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),
                           *(iVar2 + 0x28),*(iVar2 + 0x30),*(iVar2 + 0x38));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_dcvs_boost @ 0x08007a54 (size 116) =====

void sym.trace_raw_output_qcom_dcvs_boost(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"hw=%d path=%d boost=%lu path_ib=%lu path_ab=%lu\n",*(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_memlat_dev_meas @ 0x08007ac8 (size 152) =====

void sym.trace_raw_output_memlat_dev_meas(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"dev: %s, id=%u, inst=%lu, mem=%lu, freq=%lu, stall=%u, wb=%u, ratio=%u, fe_stall=%u\n"
                           ,iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),
                           *(iVar2 + 0x28),*(iVar2 + 0x2c),*(iVar2 + 0x30),*(iVar2 + 0x34));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_memlat_dev_update @ 0x08007b60 (size 124) =====

void sym.trace_raw_output_memlat_dev_update(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"dev: %s, id=%u, inst=%lu, mem=%lu, freq=%lu, vote=%lu\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_bw_hwmon_meas @ 0x08007bdc (size 120) =====

void sym.trace_raw_output_bw_hwmon_meas(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"dev: %s, mbps = %lu, us = %lu, wake = %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0x10),
                           *(iVar2 + 0x18),*(iVar2 + 0x20));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_bw_hwmon_update @ 0x08007c54 (size 120) =====

void sym.trace_raw_output_bw_hwmon_update(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"dev: %s, mbps = %lu, freq = %lu, up = %lu, down = %lu\n",iVar2 + *(iVar2 + 8),
                           *(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_bw_hwmon_debug @ 0x08007ccc (size 136) =====

void sym.trace_raw_output_bw_hwmon_debug(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"dev=%s mbps=%lu zone=%lu hist_max=%lu hist_mem=%lu hyst_mbps=%lu hyst_len=%lu\n",
                           iVar2 + *(iVar2 + 8),*(iVar2 + 0x10),*(iVar2 + 0x18),*(iVar2 + 0x20),*(iVar2 + 0x28),
                           *(iVar2 + 0x30),*(iVar2 + 0x38));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.init_module @ 0x08008074 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080080a8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_dcvs_probe.9ac77a0d0a8a52cf199846deaca30e89.cfi_jt);
    return;
}

