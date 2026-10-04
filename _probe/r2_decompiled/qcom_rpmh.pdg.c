// decompiled from qcom_rpmh by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1240) =====

//WARNING: Switch with 1 destination removed at 0x08006c08

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0xb4860a47666c551) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x5b6973360e766783) {
                if (arg1 != -0x72c52d8acc552041) {
                    if (arg1 == -0x6cb6241bce1a4f46) {
                        pcVar2 = sym.rpmh_init_fast_path.cfi_jt;
                    }
                    else {
                        if (arg1 != -0x6bd3c49712ca3ba7) goto code_r0x08006bc8;
                        pcVar2 = sym.rpmh_mode_solver_set.cfi_jt;
                    }
                    goto code_r0x080024c8;
                }
                pcVar2 = sym.perf_trace_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
            }
            else if (arg1 == -0x5b6973360e766783) {
                pcVar2 = sym.perf_trace_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
            }
            else {
                if (arg1 == -0x57be845bca9148ef) {
                    pcVar2 = sym.rpmh_rsc_restore_noirq.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
                    goto code_r0x08002478;
                }
                if (arg1 != -0x3b6844421019517e) goto code_r0x08006bc8;
                pcVar2 = sym.__bpf_trace_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
            }
code_r0x080024a0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08006bc8;
        }
        if (arg1 < -0x522d73d7b867371) {
            if (arg1 == -0x3987c0e26ee29729) {
                pcVar2 = sym.tcs_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
            }
            else if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.rpmh_rsc_probe.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
            }
            else {
                if (arg1 != -0x218c0108fde83420) goto code_r0x08006bc8;
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
        }
        else if (arg1 < 0x1be91139b4d3e03) {
            if (arg1 != -0x522d73d7b867371) {
                if (arg1 != 0xf181497ac0a3ed) goto code_r0x08006bc8;
                pcVar2 = sym.rpmh_write_async.cfi_jt;
code_r0x08002478:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08006bc8;
            }
            pcVar2 = sym.__traceiter_rpmh_switch_channel.cfi_jt;
        }
        else if (arg1 == 0x1be91139b4d3e03) {
            pcVar2 = sym.__traceiter_rpmh_solver_set.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08006bc8;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x3dd1a39e589289fe) {
        if (arg1 < 0x1d3e0dab2cef19ba) {
            if (arg1 == 0xb4860a47666c551) {
                pcVar2 = sym.__traceiter_rpmh_drv_enable.cfi_jt;
            }
            else if (arg1 == 0xf9d367146e6831e) {
                pcVar2 = sym.rpmh_get_device.cfi_jt;
            }
            else {
                if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x08006bc8;
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
        }
        else if (arg1 == 0x1d3e0dab2cef19ba) {
            pcVar2 = sym.rpmh_write_batch.cfi_jt;
        }
        else {
            if (arg1 == 0x3a53c791496020ad) {
                pcVar2 = sym.trace_event_raw_event_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
                goto code_r0x080024a0;
            }
            if (arg1 != 0x3c039fe8e9d85e1e) goto code_r0x08006bc8;
            pcVar2 = sym.__traceiter_rpmh_tx_done.cfi_jt;
        }
    }
    else if (arg1 < 0x461ea5e3ecdb487e) {
        if (arg1 == 0x3dd1a39e589289fe) {
            if ((pcVar1 + -0x8002610 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x08006bc8;
        }
        if (arg1 != 0x3ecc9640e5e62d25) {
            if (arg1 != 0x3f1b631f53c25a91) goto code_r0x08006bc8;
            pcVar2 = sym.__bpf_trace_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
            goto code_r0x080024a0;
        }
        pcVar2 = sym.rpmh_invalidate.cfi_jt;
    }
    else if (arg1 < 0x692dede8719161e4) {
        if (arg1 != 0x461ea5e3ecdb487e) {
            if ((arg1 == 0x5085e3d962da905e) && ((pcVar1 + -0x8002510 >> 3 | pcVar1 << 0x3d) < 4)) {
                return;
            }
            goto code_r0x08006bc8;
        }
        pcVar2 = sym.rpmh_update_fast_path.cfi_jt;
    }
    else {
        if (arg1 != 0x692dede8719161e4) {
            if (arg1 != 0x7d57972cd3914fb1) goto code_r0x08006bc8;
            pcVar2 = sym.rpmh_rsc_cpu_pm_callback.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
            goto code_r0x08002478;
        }
        pcVar2 = sym.__traceiter_rpmh_send_msg.cfi_jt;
    }
code_r0x080024c8:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08006bc8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006c1c);
    (*pcVar1)();
}


// ===== sym.rpmh_write_batch.cfi_jt @ 0x080024e0 (size 8) =====

uint32_t sym.rpmh_write_batch.cfi_jt(int64_t param_1,int param_2,int64_t param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    char cVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    ulong uVar7;
    int64_t extraout_x1;
    ulong *in_x18;
    int64_t arg1;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *puVar10;
    int64_t iVar11;
    uint *puVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t iVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        arg1 = *(*(param_1 + 0x60) + 0x98);
        if ((param_2 == 2) && ((*(arg1 + 0x348) & 1) != 0)) {
            _raw_spin_lock(arg1 + 0x340);
            cVar2 = *(arg1 + 0x345);
            _raw_spin_unlock(arg1 + 0x340);
            if (cVar2 != '\0') {
                return 0xfffffff0;
            }
        }
        if (param_3 == 0) {
            return 0xffffffea;
        }
        if (param_4 == NULL) {
            return 0xffffffea;
        }
        uVar13 = 0xffffffff;
        do {
            uVar1 = uVar13 + 1;
            uVar13 = uVar1;
        } while (param_4[uVar1] != 0);
        if (uVar1 == 0) {
            return 0xffffffea;
        }
        piVar6 = __kmalloc(uVar1 * 0x110 + 0x20,0xb20);
        if (piVar6 == NULL) {
            return 0xfffffff4;
        }
        *(piVar6 + 2) = uVar1;
        piVar6[3] = piVar6 + 4;
        if (0 < uVar1) {
            piVar8 = piVar6 + 7;
            do {
                uVar4 = *param_4;
                uVar16 = uVar4;
                if ((param_3 != 0) && (0xffffffef < uVar4 - 0x11)) {
                    memcpy(piVar8,param_3,uVar16 * 0xc);
                    *(piVar8 + -2) = uVar4;
                    uVar16 = *param_4;
                    *(piVar8 + -3) = param_2;
                    piVar8[-1] = piVar8;
                }
                param_3 = param_3 + uVar16 * 0xc;
                uVar13 = uVar13 - 1;
                param_4 = param_4 + 1;
                piVar8 = piVar8 + 0x1e;
            } while (uVar13 != 0);
        }
        if (param_2 == 2) {
            uVar4 = sym.rpmh_rsc_get_channel(arg1);
            iVar15 = extraout_x1;
            if (-1 < uVar4) {
                if (uVar1 < 1) {
                    uVar14 = 0;
                    uVar4 = 0;
                }
                else {
                    uVar14 = 0;
                    iVar15 = 0;
                    iVar9 = uVar1 * 0xf0;
                    do {
                        puVar12 = piVar6 + iVar9 + 0x20;
                        *puVar12 = 0;
                        __init_swait_queue_head(piVar6 + iVar9 + 0x28,"&x->wait",obj.init_completion.__key);
                        *(piVar6 + iVar15 + 0xf8) = puVar12;
                        uVar5 = sym.rpmh_rsc_send_data(arg1,piVar6 + iVar15 + 0x20,uVar4);
                        if (uVar5 != 0) {
                            _printk(0x800129e,uVar5,**(piVar6 + iVar15 + 0x30));
                            uVar4 = uVar5;
                            goto code_r0x080073cc;
                        }
                        iVar15 = iVar15 + 0xf0;
                        uVar14 = uVar14 + 1;
                        iVar9 = iVar9 + 0x20;
                    } while (uVar1 * 0xf0 - iVar15 != 0);
                    uVar4 = 0;
                    uVar14 = uVar1;
                }
code_r0x080073cc:
                iVar15 = 0x9c4;
                iVar9 = uVar14 << 5;
                while (iVar11 = iVar9 + -0x20, iVar11 != -0x20) {
                    iVar15 = wait_for_completion_timeout(piVar6 + iVar9 + uVar1 * 0xf0);
                    iVar9 = iVar11;
                    if (iVar15 == 0) {
                        sym.rpmh_rsc_debug(arg1,piVar6 + iVar11 + uVar1 * 0xf0 + 0x20);
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x800741c);
                        (*pcVar3)();
                    }
                }
            }
            kfree(piVar6,iVar15);
            return uVar4;
        }
        uVar7 = _raw_spin_lock_irqsave(arg1 + 0x340);
        puVar10 = *(arg1 + 0x358);
        uVar13 = __list_add_valid(piVar6,puVar10,arg1 + 0x350);
        if ((uVar13 & 1) != 0) {
            *(arg1 + 0x358) = piVar6;
            *piVar6 = arg1 + 0x350;
            piVar6[1] = puVar10;
            *puVar10 = piVar6;
        }
        *(arg1 + 0x344) = 1;
        _raw_spin_unlock_irqrestore(arg1 + 0x340,uVar7);
    }
    return 0;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080024e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x080024f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.rpmh_rsc_probe.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.rpmh_invalidate.cfi_jt @ 0x080024f8 (size 8) =====

void sym.rpmh_invalidate.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar7 = *(*(param_1 + 0x60) + 0x98);
        uVar5 = _raw_spin_lock_irqsave(iVar7 + 0x340);
        piVar1 = iVar7 + 0x350;
        piVar4 = *(iVar7 + 0x350);
        while (piVar4 != piVar1) {
            piVar8 = *piVar4;
            uVar6 = __list_del_entry_valid(piVar4);
            if ((uVar6 & 1) != 0) {
                iVar2 = *piVar4;
                piVar3 = piVar4[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4);
            piVar4 = piVar8;
        }
        *(iVar7 + 0x350) = piVar1;
        *(iVar7 + 0x358) = piVar1;
        *(iVar7 + 0x344) = 1;
        _raw_spin_unlock_irqrestore(iVar7 + 0x340,uVar5);
    }
    return;
}


// ===== sym.rpmh_rsc_restore_noirq.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002500 (size 8) =====

ulong sym.rpmh_rsc_restore_noirq.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    if (0 < *(iVar3 + 0x14)) {
        iVar4 = 0;
        iVar5 = 0x300;
        do {
            iVar6 = *(iVar3 + 0x18);
            iVar1 = iVar6 + iVar5;
            if (*(iVar1 + -0x2bf) != '\0') {
                piVar7 = iVar1 + -0x2e0;
                piVar8 = iVar1 + -0x2d8;
                if (*(iVar1 + -0x150) != '\0') {
                    uVar2 = sym.readl_relaxed(*piVar7 + *(*piVar8 + 0x10));
                    sym.writel_relaxed(*(iVar6 + iVar5 + -0x20c) | uVar2,*piVar7 + *(*piVar8 + 0x10));
                }
                if (*(iVar6 + iVar5) != '\0') {
                    uVar2 = sym.readl_relaxed(*piVar7 + *(*piVar8 + 0x10));
                    sym.writel_relaxed(*(iVar6 + iVar5 + -0xbc) | uVar2,*piVar7 + *(*piVar8 + 0x10));
                }
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x390;
        } while (iVar4 < *(iVar3 + 0x14));
    }
    return 0;
}


// ===== sym.rpmh_rsc_poweroff_noirq.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002508 (size 8) =====

ulong sym.rpmh_rsc_poweroff_noirq.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt(void)

{
    return 0;
}


// ===== sym.rpmh_drv_start.cfi_jt @ 0x08002510 (size 8) =====

ulong sym.rpmh_drv_start.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_drv_enable(*(param_1 + 0x98),1);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.rpmh_write_sleep_and_wake_no_child.cfi_jt @ 0x08002518 (size 8) =====

uint32_t sym.rpmh_write_sleep_and_wake_no_child.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    uVar1 = sym.rpmh_rsc_get_channel(arg1);
    if (uVar1 < 0) {
        return uVar1;
    }
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar2 = _raw_spin_trylock(arg1 + 0x340);
        if (iVar2 == 0) {
            return 0xfffffff0;
        }
        uVar3 = sym._rpmh_flush(arg1 + 0x330,uVar1);
        _raw_spin_unlock(arg1 + 0x340);
        if (uVar3 != 0) {
            return uVar3;
        }
    }
    if ((*(arg1 + 0x348) >> 1 & 1) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.rpmh_rsc_switch_channel(arg1,uVar1);
    }
    return uVar1;
}


// ===== sym.rpmh_drv_stop.cfi_jt @ 0x08002520 (size 8) =====

ulong sym.rpmh_drv_stop.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_drv_enable(*(param_1 + 0x98),0);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.rpmh_write_sleep_and_wake.cfi_jt @ 0x08002528 (size 8) =====

uint32_t sym.rpmh_write_sleep_and_wake.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x60) + 0x98);
    uVar1 = sym.rpmh_rsc_get_channel(arg1);
    if (uVar1 < 0) {
        return uVar1;
    }
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar2 = _raw_spin_trylock(arg1 + 0x340);
        if (iVar2 == 0) {
            return 0xfffffff0;
        }
        uVar3 = sym._rpmh_flush(arg1 + 0x330,uVar1);
        _raw_spin_unlock(arg1 + 0x340);
        if (uVar3 != 0) {
            return uVar3;
        }
    }
    if ((*(arg1 + 0x348) >> 1 & 1) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.rpmh_rsc_switch_channel(arg1,uVar1);
    }
    return uVar1;
}


// ===== sym.__traceiter_rpmh_tx_done.cfi_jt @ 0x08002530 (size 8) =====

ulong sym.__traceiter_rpmh_tx_done.cfi_jt(ulong param_1,ulong param_2,uint param_3,ulong param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8007cf0;
    piVar1 = *0x8007cf0;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.__traceiter_rpmh_switch_channel.cfi_jt @ 0x08002538 (size 8) =====

ulong sym.__traceiter_rpmh_switch_channel.cfi_jt(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8007dc8;
    piVar1 = *0x8007dc8;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.tcs_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002540 (size 8) =====

ulong sym.tcs_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt(ulong param_1,int64_t param_2)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    ulong uVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = sym.readl_relaxed(*(param_2 + 0x20) + *(*(param_2 + 0x28) + 0x14));
    uVar9 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = 0x20;
    if (uVar8 != 0) {
        uVar9 = LZCOUNT((uVar10 >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    if (uVar9 < 0x20) {
        puVar1 = param_2 + 0x308;
        uVar5 = sp_el0;
        do {
            uVar10 = 1L << (uVar9 & 0x3f);
            if (*(param_2 + 0x1b0) == '\0') {
code_r0x0800673c:
                if (*(param_2 + 0x300) == '\0') goto code_r0x080067c8;
                iVar11 = 0x1f8;
                if (*(param_2 + 0x24c) != 0) {
                    iVar11 = 0x238;
                }
                iVar11 = param_2 + iVar11;
                if ((uVar10 & *(iVar11 + 0xc)) == 0) goto code_r0x080067c8;
                uVar7 = 1;
            }
            else {
                iVar11 = 0xa8;
                if (*(param_2 + 0xfc) != 0) {
                    iVar11 = 0xe8;
                }
                iVar11 = param_2 + iVar11;
                if ((uVar10 & *(iVar11 + 0xc)) == 0) goto code_r0x0800673c;
                uVar7 = 0;
            }
            uVar4 = uVar9 - *(iVar11 + 0x10);
            if (2 < uVar4) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x80069a4);
                (*pcVar6)();
            }
            iVar11 = *(iVar11 + uVar4 * 8 + 0x20);
            if (iVar11 == 0) {
code_r0x080067c8:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80067d4);
                (*pcVar6)();
            }
            ipc_log_string(*(param_2 + 0x380),"IRQ response: m=%d",uVar9);
            if (*(param_2 + 0x68 + uVar7 * 0x150 + 0x94) == 0) {
                sym.__tcs_set_trigger(param_2,uVar9,0);
            }
            sym.writel_relaxed(0,*(param_2 + 0x20) + **(param_2 + 0x28) * uVar9 + (*(param_2 + 0x28))[10]);
            sym.writel_relaxed(uVar10 & 0xffffffff,*(param_2 + 0x20) + *(*(param_2 + 0x28) + 0x18));
            _raw_spin_lock(param_2 + 0x310);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & (uVar10 ^ 0xffffffffffffffff);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (*(param_2 + 0x68 + uVar7 * 0x150 + 0x94) == 0) {
                uVar7 = sym.readl_relaxed(*(param_2 + 0x20) + *(*(param_2 + 0x28) + 0x10));
                sym.writel_relaxed(uVar7 & (uVar10 ^ 0xffffffff),*(param_2 + 0x20) + *(*(param_2 + 0x28) + 0x10));
            }
            _raw_spin_unlock(param_2 + 0x310);
            __wake_up(param_2 + 0x318,3,1,0);
            sym.rpmh_tx_done(iVar11);
            uVar9 = (uVar9 << 0x20) + 0x100000000;
        } while (((uVar9 >> 0x25 == 0) && (uVar9 = -1L << (uVar9 >> 0x20 & 0x3f) & uVar8 & 0xffffffff, uVar9 != 0)) &&
                (uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1,
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2,
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4,
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8,
                uVar9 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20), uVar9 < 0x20));
    }
    return 1;
}


// ===== sym.__traceiter_rpmh_send_msg.cfi_jt @ 0x08002548 (size 8) =====

ulong sym.__traceiter_rpmh_send_msg.cfi_jt
                (ulong param_1,ulong param_2,uint param_3,uint param_4,uint param_5,ulong param_6)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8007d38;
    piVar1 = *0x8007d38;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4,param_5,param_6);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.rpmh_rsc_probe.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002550 (size 8) =====

uint64_t sym.rpmh_rsc_probe.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar auVar6 [16];
    code *pcVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int64_t iVar21;
    int64_t *piVar22;
    ulong *in_x18;
    int64_t iVar23;
    int64_t *piVar24;
    uint32_t uVar25;
    ulong uVar26;
    ulong uVar27;
    uint64_t uVar28;
    int64_t *piVar29;
    ulong unaff_x30;
    uint32_t uStack_a8;
    int iStack_a4;
    int iStack_a0;
    uint32_t uStack_9c;
    uint32_t auStack_98 [2];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_70 = *(iVar13 + 0x5e0);
    uVar26 = *(param_1 + 0x300);
    iStack_a4 = 0;
    iStack_a0 = 0;
    uVar12 = cmd_db_ready();
    uVar28 = uVar12 & 0xffffffff;
    if (uVar12 == -0x205) goto code_r0x08006440;
    piVar1 = param_1 + 0x10;
    if (uVar12 != 0) {
        _dev_err(piVar1,"Command DB not available (%d)\n",uVar12 & 0xffffffff);
        goto code_r0x08006440;
    }
    uVar8 = cmd_db_is_standalone();
    reloc.__traceiter_rpmh_tx_done.cfi_jt = uVar8 & 1;
    if ((uVar8 & 1) != 0) {
        _dev_info(piVar1,"RPMH is running in standalone mode.\n");
    }
    iVar13 = devm_kmalloc(piVar1,0x38,0xdc0);
    if (iVar13 == 0) {
code_r0x08006178:
        uVar28 = 0xfffffff4;
    }
    else {
        uVar28 = of_property_read_variable_u32_array(uVar26,"qcom,drv-count",&iStack_a4,1,0);
        if (-1 < uVar28) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = iStack_a4;
            if ((SUB168(auVar6 * ZEXT816(0x390),8) != 0) ||
               (iVar14 = devm_kmalloc(piVar1,iStack_a4 * 0x390,0xdc0), iVar14 == 0)) goto code_r0x08006178;
            iVar15 = of_get_property(uVar26,"label",0);
            if ((iVar15 == 0) && (iVar15 = *(param_1 + 0x80), iVar15 == 0)) {
                iVar15 = *piVar1;
            }
            *(iVar13 + 0x14) = iStack_a4;
            *(iVar13 + 0x18) = iVar14;
            *(iVar13 + 0x20) = piVar1;
            scnprintf(iVar13,0x14,0x800101b,iVar15);
            iVar16 = of_get_next_child(uVar26,0);
            if (iVar16 != 0) {
                do {
                    uVar12 = of_node_name_eq(iVar16,0x80013b5);
                    if ((uVar12 & 1) != 0) {
                        uVar28 = of_property_read_variable_u32_array(iVar16,"qcom,drv-id",&iStack_a0,1,0);
                        if (uVar28 < 0) goto code_r0x0800643c;
                        scnprintf(iVar14 + iStack_a0 * 0x390,0x14,"%s-drv-%d",iVar15);
                        uVar28 = devm_platform_ioremap_resource(param_1,iStack_a0);
                        *(iVar14 + iStack_a0 * 0x390 + 0x18) = uVar28;
                        if (0xfffffffffffff000 < uVar28) goto code_r0x08006440;
                        iVar17 = kmem_cache_alloc_trace(_event_triggers_call,0xdc0,0x390);
                        if (iVar17 == 0) goto code_r0x08006178;
                        iVar18 = *(param_1 + 0x80);
                        *(iVar17 + 0x60) = piVar1;
                        *(iVar17 + 0x2f0) = iVar16;
                        iVar19 = iVar14 + iStack_a0 * 0x390;
                        *(iVar19 + 0x30) = iStack_a0;
                        *(iVar19 + 0x388) = param_1;
                        *(iVar19 + 0x378) = iVar17;
                        if (iVar18 == 0) {
                            iVar18 = *piVar1;
                        }
                        dev_set_name(iVar17,"%s:%pOFn%d",iVar18,iVar16);
                        uVar28 = device_register(iVar17);
                        if (uVar28 != 0) goto code_r0x0800643c;
                        uVar9 = sym.readl_relaxed(*(iVar14 + iStack_a0 * 0x390 + 0x18));
                        iVar19 = iStack_a0;
                        iVar18 = iVar14 + iVar19 * 0x390;
                        pcVar7 = obj.rpmh_rsc_reg_offsets_ver_3_0;
                        if ((uVar9 & 0xff0000) < 0x20001) {
                            pcVar7 = obj.rpmh_rsc_reg_offsets_ver_2_7;
                        }
                        piVar29 = iVar18 + 0x28;
                        *piVar29 = pcVar7;
                        uVar27 = *(*(iVar18 + 0x378) + 0x2f0);
                        uStack_9c = 0;
                        uVar28 = of_property_read_variable_u32_array(uVar27,"qcom,tcs-offset",&uStack_9c,1,0);
                        if (uVar28 < 0) goto code_r0x0800643c;
                        iVar23 = iVar14 + iVar19 * 0x390;
                        iVar21 = *piVar29;
                        piVar24 = iVar23 + 0x20;
                        *piVar24 = *(iVar23 + 0x18) + uStack_9c;
                        uVar9 = sym.readl_relaxed(*(iVar23 + 0x18) + *(iVar21 + 0xc));
                        iVar10 = *(iVar23 + 0x30);
                        iVar21 = of_get_next_child(uVar27,0);
                        if (iVar21 == 0) {
                            uStack_a8 = 0;
                        }
                        else {
                            uVar5 = iVar10 * 6;
                            piVar2 = iVar23 + 0x34;
                            uStack_a8 = 0;
                            do {
                                uVar12 = of_node_name_eq(iVar21,"channel");
                                if ((uVar12 & 1) != 0) {
                                    uStack_80 = 0;
                                    uStack_78 = 0;
                                    uStack_90 = 0;
                                    uStack_88 = 0;
                                    auStack_98[0] = 0;
                                    auStack_98[1] = 0;
                                    if (2 < uStack_a8) goto code_r0x0800648c;
                                    iVar10 = of_property_count_elems_of_size(iVar21,"qcom,tcs-config",4);
                                    if (iVar10 == 10) {
                                        uVar28 = of_property_read_u32_index(iVar21,"qcom,tcs-config",0,auStack_98);
                                        if (uVar28 != 0) goto code_r0x0800643c;
                                        if (auStack_98[0] < 5) {
                                            uVar28 = of_property_read_u32_index
                                                               (iVar21,"qcom,tcs-config",1,auStack_98 | 4);
                                            if (uVar28 != 0) goto code_r0x0800643c;
                                            if (auStack_98[1] < 4) {
                                                uVar28 = of_property_read_u32_index
                                                                   (iVar21,"qcom,tcs-config",2,&uStack_90);
                                                if (uVar28 != 0) goto code_r0x0800643c;
                                                if (uStack_90 < 5) {
                                                    uVar28 = of_property_read_u32_index
                                                                       (iVar21,"qcom,tcs-config",3,&uStack_90 + 4);
                                                    if (uVar28 != 0) goto code_r0x0800643c;
                                                    if (uStack_90._4_4_ < 4) {
                                                        uVar28 = of_property_read_u32_index
                                                                           (iVar21,"qcom,tcs-config",4,&uStack_88);
                                                        if (uVar28 != 0) goto code_r0x0800643c;
                                                        if (uStack_88 < 5) {
                                                            uVar28 = of_property_read_u32_index
                                                                               (iVar21,"qcom,tcs-config",5,
                                                                                &uStack_88 + 4);
                                                            if (uVar28 != 0) goto code_r0x0800643c;
                                                            if (uStack_88._4_4_ < 4) {
                                                                uVar28 = of_property_read_u32_index
                                                                                   (iVar21,"qcom,tcs-config",6,
                                                                                    &uStack_80);
                                                                if (uVar28 != 0) goto code_r0x0800643c;
                                                                if (uStack_80 < 5) {
                                                                    uVar28 = of_property_read_u32_index
                                                                                       (iVar21,"qcom,tcs-config",7,
                                                                                        &uStack_80 + 4);
                                                                    if (uVar28 != 0) goto code_r0x0800643c;
                                                                    if (uStack_80._4_4_ < 4) {
                                                                        uVar28 = of_property_read_u32_index
                                                                                           (iVar21,"qcom,tcs-config",8
                                                                                            ,&uStack_78);
                                                                        if (uVar28 != 0) goto code_r0x0800643c;
                                                                        if (uStack_78 < 5) {
                                                                            uVar28 = of_property_read_u32_index
                                                                                               (iVar21,
                                                            "qcom,tcs-config",9,&uStack_78 + 4);
                                                            if (uVar28 != 0) goto code_r0x0800643c;
                                                            if (uStack_78._4_4_ < 4) {
                                                                iVar23 = 0;
                                                                uVar25 = 0;
                                                                uVar12 = uStack_a8;
                                                                do {
                                                                    uVar11 = *(auStack_98 + iVar23);
                                                                    uVar20 = uVar11;
                                                                    if (5 < uVar11) goto code_r0x0800648c;
                                                                    piVar22 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150 +
                                                                              uVar20 * 0x40 + 0x68;
                                                                    if (*piVar22 != 0) goto code_r0x080063c0;
                                                                    *piVar22 = iVar18;
                                                                    iVar3 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150 +
                                                                            uVar20 * 0x40;
                                                                    uVar4 = *(auStack_98 + iVar23 + 4);
                                                                    *(iVar3 + 0x70) = uVar11;
                                                                    *(iVar3 + 0x7c) = uVar4;
                                                                    *(iVar3 + 0x80) = uVar9 >> 0x1b;
                                                                    if ((uVar4 != 0) && (uVar11 != 3)) {
                                                                        uVar11 = uVar4 + uVar25;
                                                                        uVar28 = 0xffffffea;
                                                                        if (((0x3f << (uVar5 & 0x1f) & uVar9) >>
                                                                             (uVar5 & 0x1f) < uVar11) || (0x1f < uVar11)
                                                                           ) goto code_r0x08006440;
                                                                        iVar10 = *piVar2;
                                                                        iVar3 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150
                                                                                + uVar20 * 0x40;
                                                                        *(iVar3 + 0x74) =
                                                                             ~(-1 << (uVar4 & 0x1f)) <<
                                                                             (iVar10 + uVar25 & 0x1f);
                                                                        *(iVar3 + 0x78) = iVar10 + uVar25;
                                                                        uVar25 = uVar11;
                                                                    }
                                                                    iVar23 = iVar23 + 8;
                                                                } while (iVar23 != 0x28);
                                                                uVar11 = sym.readl_relaxed(*piVar24 + *(*piVar29 + 0x10)
                                                                                          );
                                                                if (uStack_a8 < 2) {
                                                                    iVar23 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150;
                                                                    sym.writel_relaxed(*(iVar23 + 0xf4) | uVar11,
                                                                                       *piVar24 + *(*piVar29 + 0x10));
                                                                    *(iVar23 + 0x1a8) = iVar18;
                                                                    uStack_a8 = uStack_a8 + 1;
                                                                    *piVar2 = *piVar2 + uVar25;
                                                                    *(iVar23 + 0x1b0) = 1;
                                                                    goto code_r0x08005e60;
                                                                }
                                                                goto code_r0x0800648c;
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
code_r0x080063c0:
                                    uVar28 = 0xffffffea;
                                    goto code_r0x08006440;
                                }
code_r0x08005e60:
                                iVar21 = of_get_next_child(uVar27,iVar21);
                            } while (iVar21 != 0);
                        }
                        iVar18 = iVar14 + iStack_a0 * 0x390;
                        *(iVar14 + iVar19 * 0x390 + 0x38) = uStack_a8;
                        *(iVar17 + 0x98) = iVar18;
                        *(iVar18 + 0x41) = 1;
                    }
                    iVar16 = of_get_next_child(uVar26,iVar16);
                } while (iVar16 != 0);
            }
            iStack_a0 = 0;
            iVar10 = iStack_a4;
            if (0 < iStack_a4) {
                do {
                    if (*(iVar14 + iStack_a0 * 0x390 + 0x41) != '\0') {
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        uVar9 = sym.readl_relaxed(*(iVar15 + 0x18) + *(*(iVar15 + 0x28) + 8));
                        iVar15 = of_find_property(uVar26,"power-domains",0);
                        if (iVar15 == 0) {
                            if ((uVar9 >> 0x18 & 1) == 0) {
                                iVar15 = of_find_property(uVar26,"qcom,hw-channel",0);
                                if (iVar15 == 0) {
                                    iVar15 = iVar14 + iStack_a0 * 0x390;
                                    *(iVar15 + 0x48) =
                                         sym.rpmh_rsc_cpu_pm_callback.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
                                    *(iVar15 + 0x58) = 0x7fffffff;
                                    cpu_pm_register_notifier();
                                }
                                else {
                                    iVar15 = iVar14 + iStack_a0 * 0x390;
                                    *(iVar15 + 0x348) = 3;
                                    *(iVar15 + 0x345) = 1;
                                    *(iVar15 + 0x40) = 1;
                                    *(iVar15 + 0x28) = obj.rpmh_rsc_reg_offsets_ver_3_0_hw_channel;
                                }
                            }
                            else {
                                *(iVar14 + iStack_a0 * 0x390 + 0x348) = 1;
                            }
                        }
                        else {
                            iVar15 = iStack_a0;
                            iVar16 = iVar14 + iVar15 * 0x390;
                            pm_runtime_enable(*(iVar16 + 0x388) + 0x10);
                            uVar28 = dev_pm_domain_attach(*(iVar16 + 0x388) + 0x10,0);
                            if (uVar28 != 0) goto code_r0x0800643c;
                            iVar17 = iVar14 + iVar15 * 0x390;
                            iVar15 = *(iVar16 + 0x388);
                            *(iVar17 + 0x360) = sym.rpmh_rsc_pd_cb.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
                            uVar28 = dev_pm_genpd_add_notifier(iVar15 + 0x10,iVar17 + 0x360);
                            if (uVar28 != 0) goto code_r0x0800643c;
                        }
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x310) = 0;
                        __init_waitqueue_head(iVar15 + 0x318,"&drv[i].tcs_wait",0x8000501);
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x308) = 0;
                        uVar12 = platform_get_irq(param_1,*(iVar15 + 0x30));
                        uVar28 = uVar12 & 0xffffffff;
                        if (uVar12 < 0) goto code_r0x08006440;
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x3c) = uVar12;
                        uVar28 = devm_request_threaded_irq
                                           (piVar1,uVar28,sym.tcs_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt,0,
                                            0x4004,iVar15,iVar15);
                        if (uVar28 != 0) goto code_r0x0800643c;
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x340) = 0;
                        *(iVar15 + 0x330) = iVar15 + 0x330;
                        *(iVar15 + 0x338) = iVar15 + 0x330;
                        *(iVar15 + 0x350) = iVar15 + 0x350;
                        *(iVar15 + 0x358) = iVar15 + 0x350;
                        uVar27 = ipc_log_context_create(2,iVar15,0);
                        iVar10 = _segment.ehdr;
                        iVar15 = iStack_a0;
                        iVar16 = _segment.ehdr;
                        *(iVar14 + iVar15 * 0x390 + 0x380) = uVar27;
                        if (iVar10 < 5) {
                            _segment.ehdr = iVar10 + 1;
                            *(reloc.__traceiter_rpmh_send_msg.cfi_jt + iVar16 * 8) = iVar14 + iVar15 * 0x390;
                        }
                        uVar28 = devm_of_platform_populate(*(iVar14 + iVar15 * 0x390 + 0x378));
                        iVar10 = iStack_a4;
                        if (uVar28 != 0) goto code_r0x0800643c;
                    }
                    iStack_a0 = iStack_a0 + 1;
                } while (iStack_a0 < iVar10);
            }
            piVar29 = iVar13 + 0x28;
            *(iVar13 + 0x28) = piVar29;
            *(iVar13 + 0x30) = piVar29;
            piVar24 = *0x8000d68;
            uVar12 = __list_add_valid(piVar29,*0x8000d68,obj.rpmh_rsc_dev_list);
            if ((uVar12 & 1) != 0) {
                *0x8000d68 = piVar29;
                *(iVar13 + 0x28) = obj.rpmh_rsc_dev_list;
                *(iVar13 + 0x30) = piVar24;
                *piVar24 = piVar29;
            }
            *(param_1 + 0xa8) = iVar13;
            uVar28 = devm_of_platform_populate(piVar1);
        }
code_r0x0800643c:
        uVar28 = uVar28 & 0xffffffff;
    }
code_r0x08006440:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return uVar28 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800648c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8006490);
    (*pcVar7)();
}


// ===== sym.rpmh_rsc_cpu_pm_callback.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002558 (size 8) =====

ulong sym.rpmh_rsc_cpu_pm_callback.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int *piVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 - 1U < 2) {
        piVar2 = param_1 + 0x18;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
                *piVar2 = *piVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        return 1;
    }
    if (param_2 != 0) {
        return 0;
    }
    puVar3 = param_1 + 0x18;
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar1 = *puVar3 + 1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
            *puVar3 = uVar1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    if (uVar1 < ___num_online_cpus) {
        return 1;
    }
    iVar4 = param_1 + 0x2c8;
    iVar7 = _raw_spin_trylock(iVar4);
    if (iVar7 == 0) {
        return 1;
    }
    if (*(param_1 + -0x10) == 1) {
code_r0x08006528:
        uVar8 = 0;
    }
    else {
        do {
            uVar8 = sym.readl_relaxed(*(param_1 + -0x30) + *(*(param_1 + -0x20) + 0x48));
            uVar9 = sym.readl_relaxed(*(param_1 + -0x30) + *(*(param_1 + -0x20) + 0x4c));
        } while (uVar9 != uVar8);
        if ((uVar8 & 1) == 0) {
            if ((uVar8 >> 1 & 1) == 0) goto code_r0x0800659c;
            goto code_r0x08006528;
        }
        uVar8 = 1;
    }
    uVar10 = sym.rpmh_rsc_ctrlr_is_busy(param_1 + -0x48);
    if (((uVar10 & 1) == 0) && (iVar7 = sym.rpmh_flush(param_1 + 0x2e8,uVar8), iVar7 == 0)) {
        _raw_spin_unlock(iVar4);
        return 1;
    }
code_r0x0800659c:
    _raw_spin_unlock(iVar4);
    if (uVar1 < ___num_online_cpus) {
        return 1;
    }
    Hint_Prefetch(puVar3,2,0,1);
    do {
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
            *puVar3 = *puVar3 - 1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    return 0x8002;
}


// ===== sym.rpmh_rsc_pd_cb.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002560 (size 8) =====

uint sym.rpmh_rsc_pd_cb.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != 0) {
        return 1;
    }
    if (*(param_1 + -0x328) != 1) {
        do {
            uVar1 = sym.readl_relaxed(*(param_1 + -0x348) + *(*(param_1 + -0x338) + 0x48));
            uVar2 = sym.readl_relaxed(*(param_1 + -0x348) + *(*(param_1 + -0x338) + 0x4c));
        } while (uVar2 != uVar1);
        if ((uVar1 & 1) != 0) {
            uVar1 = 1;
            goto code_r0x08006a68;
        }
        if ((uVar1 >> 1 & 1) == 0) {
            return 0x8002;
        }
    }
    uVar1 = 0;
code_r0x08006a68:
    uVar4 = sym.rpmh_rsc_ctrlr_is_busy(param_1 + -0x360);
    uVar5 = 0x8002;
    if ((uVar4 & 1) == 0) {
        iVar3 = sym._rpmh_flush(param_1 + -0x30,uVar1);
        uVar5 = 0x8002;
        if (iVar3 == 0) {
            uVar5 = 1;
        }
    }
    return uVar5;
}


// ===== sym.rpmh_mode_solver_set.cfi_jt @ 0x08002568 (size 8) =====

int sym.rpmh_mode_solver_set.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        arg1 = *(*(param_1 + 0x60) + 0x98);
        if ((*(arg1 + 0x348) & 1) == 0) {
            iVar1 = -0x16;
        }
        else {
            _raw_spin_lock(arg1 + 0x340);
            iVar1 = sym.rpmh_rsc_mode_solver_set(arg1,param_2 & 1);
            if (iVar1 == 0) {
                *(arg1 + 0x345) = param_2 & 1;
            }
            _raw_spin_unlock(arg1 + 0x340);
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08002570 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.perf_trace_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002578 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint uVar12;
    uint uVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    int64_t iStack_240;
    code *pcStack_230;
    uint64_t uStack_228;
    ulong uStack_220;
    uint64_t uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    ulong uStack_1a8;
    char *pcStack_1a0;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uchar auStack_170 [12];
    uint32_t uStack_164;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar **ppuStack_150;
    code *pcStack_148;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    char *pcStack_90;
    int64_t *piStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iVar9;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (param_2 != NULL) {
        pcVar3 = param_2;
    }
    iStack_58 = *(iVar8 + 0x5e0);
    uVar16 = param_3 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    puVar10 = param_3;
    uVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_64;
        iVar6 = (uVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar6,&iStack_60);
        if (iVar8 != 0) {
            uVar15 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            uVar19 = param_3 & 1;
            uVar16 = uVar19;
            *(iStack_60 + 0xf8) = auStack_70;
            uVar14 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar14 = uVar15 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar14;
            *(iStack_60 + 0x108) = 5;
            *(iVar8 + 8) = uVar7 * 0x10000 + 0x1000d;
            strcpy(iVar8 + 0xd,pcVar3);
            puVar10 = uStack_64;
            *(iVar8 + 0xc) = uVar19;
            param_4 = param_1;
            perf_trace_run_bpf_submit(iVar8,iVar6,puVar10,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar9 = auVar21._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x80030e8;
    uStack_a8 = 0x80030e8;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar19 = *(iVar9 + 0x48);
    uVar14 = param_4;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar7;
    pcStack_90 = pcVar3;
    piStack_88 = piVar1;
    uStack_80 = uVar16;
    uStack_78 = param_1;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar3 = "(null)";
        if (auVar21._8_8_ != NULL) {
            pcVar3 = auVar21._8_8_;
        }
        iVar6 = strlen(pcVar3);
        puVar11 = iVar6 + 1 + 0x14;
        iVar8 = trace_event_buffer_reserve(&uStack_e8,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            strcpy(iVar8 + 0x14,pcVar3);
            *(iVar8 + 0xc) = puVar10;
            *(iVar8 + 0x10) = param_4;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar16 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_switch_channel;
    pcStack_148 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    iStack_158 = *(iVar8 + 0x5e0);
    uVar17 = uVar14 & 0xffffffff;
    uVar18 = puVar11 & 0xffffffff;
    iStack_160 = 0;
    uStack_164 = 0;
    puVar10 = puVar11;
    uVar15 = uVar14;
    ppuStack_150 = &puStack_b0;
    uVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_164;
        unaff_x30 = (uVar7 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(unaff_x30,&iStack_160);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_160 + 0xe8) = &ppuStack_150;
            *(iStack_160 + 0xf8) = auStack_170;
            *(iStack_160 + 0x100) = ~(-1L << uVar15) & 0x8003204;
            *(iStack_160 + 0x108) = 5;
            *(iVar8 + 8) = uVar7 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar10 = uStack_164;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar14;
            uVar15 = uVar16;
            perf_trace_run_bpf_submit(iVar8,unaff_x30,puVar10,uVar16,1,iStack_160,piVar1,0);
            unaff_x27 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_158) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar9 = auVar21._0_8_;
    uVar12 = uVar15;
    uVar5 = tpidr_el2;
    *extraout_x18_01 = 0x800337c;
    uStack_1a8 = 0x800337c;
    iVar8 = sp_el0;
    iStack_1b8 = *(iVar8 + 0x5e0);
    uVar14 = puVar10 & 0xffffffff;
    uVar20 = *(iVar9 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar19 = uVar20;
    uVar13 = uVar12;
    ppuStack_1b0 = &ppuStack_150;
    pcStack_1a0 = pcVar3;
    piStack_190 = piVar1;
    uStack_188 = uVar18;
    uStack_180 = uVar17;
    uStack_178 = uVar16;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    auVar21._8_8_ = pcVar3;
    auVar21._0_8_ = iVar9;
    iVar6 = strlen(pcVar3);
    uVar19 = iVar6 + 1;
    uVar20 = uVar19;
    puVar11 = uVar19 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_1e8,iVar9);
    auVar22._8_8_ = pcVar3;
    auVar22._0_8_ = iVar8;
    if (iVar8 != 0) {
        uVar2 = puVar10 & 1;
        uVar14 = uVar2;
        *(iVar8 + 8) = uVar19 * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar3);
        *(iVar8 + 0xc) = uVar2;
        *(iVar8 + 0x10) = uVar12;
        trace_event_buffer_commit(&uStack_1e8);
        auVar21 = auVar22;
    }
code_r0x08003468:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar9 = auVar22._0_8_;
    *extraout_x18_02 = sym.perf_trace_rpmh_drv_enable;
    pcStack_248 = sym.perf_trace_rpmh_drv_enable;
    pcStack_230 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar3 = auVar22._8_8_;
    }
    iStack_258 = *(iVar8 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    puVar10 = puVar11;
    ppuStack_250 = &ppuStack_1b0;
    iStack_240 = unaff_x27;
    uStack_228 = unaff_x30;
    uStack_220 = uVar7;
    uStack_218 = uVar20;
    uStack_210 = auVar21._8_8_;
    uStack_208 = auVar21._0_8_;
    uStack_200 = uVar14;
    uStack_1f8 = uVar15 & 0xffffffff;
    iVar6 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_264;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&iStack_260,puVar10);
        if (iVar8 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_260 + 0xe8) = &ppuStack_250;
            *(iStack_260 + 0xf8) = auStack_270;
            *(iStack_260 + 0x100) = ~(-1L << uVar16) & 0x80034a0;
            *(iStack_260 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar10 = uStack_264;
            *(iVar8 + 0xc) = puVar11 & 1;
            *(iVar8 + 0x10) = uVar13;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar10,iVar9,1,iStack_260,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_258) {
        auVar21 = __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_03 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_,puVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002580 (size 8) =====

void sym.__bpf_trace_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (ulong param_1,ulong param_2,uint64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(param_1,param_2,param_3 & 1);
    return;
}


// ===== sym.trace_event_raw_event_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002588 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint uVar13;
    uint uVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    code *pcVar21;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [16];
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong **ppuStack_2c0;
    code *pcStack_2b8;
    int64_t iStack_2b0;
    code *pcStack_2a0;
    code *pcStack_298;
    ulong uStack_290;
    uint64_t uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    char *pcStack_210;
    int64_t *piStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    ulong uStack_110;
    char *pcStack_100;
    int64_t *piStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
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
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar19 = *(param_1 + 0x48);
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = param_3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(param_1), (uVar7 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar3 = "(null)";
        if (param_2 != NULL) {
            pcVar3 = param_2;
        }
        iVar6 = strlen(pcVar3);
        puVar11 = iVar6 + 1 + 0x10;
        iVar8 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0xd;
            strcpy(iVar8 + 0xd,pcVar3);
            *(iVar8 + 0xc) = param_3 & 1;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar7 = auVar22._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_solver_set;
    pcStack_b8 = sym.perf_trace_rpmh_solver_set;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar3 = auVar22._8_8_;
    }
    iStack_c8 = *(iVar8 + 0x5e0);
    pcVar21 = sym.perf_trace_rpmh_solver_set;
    uVar16 = puVar11 & 0xffffffff;
    iStack_d0 = 0;
    uStack_d4 = 0;
    puVar12 = puVar11;
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar9 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_d4;
        iVar6 = (uVar9 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar6,&iStack_d0);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_d0 + 0xe8) = &puStack_c0;
            uVar19 = puVar11 & 1;
            uVar16 = uVar19;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << uVar15) & 0x8002f78;
            *(iStack_d0 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x1000d;
            strcpy(iVar8 + 0xd,pcVar3);
            puVar12 = uStack_d4;
            *(iVar8 + 0xc) = uVar19;
            param_4 = uVar7;
            perf_trace_run_bpf_submit(iVar8,iVar6,puVar12,uVar7,1,iStack_d0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar10 = auVar22._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_00 = 0x80030e8;
    uStack_118 = 0x80030e8;
    iVar8 = sp_el0;
    iStack_128 = *(iVar8 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar19 = *(iVar10 + 0x48);
    uVar15 = param_4;
    ppuStack_120 = &puStack_c0;
    uStack_110 = uVar9;
    pcStack_100 = pcVar3;
    piStack_f8 = piVar1;
    uStack_f0 = uVar16;
    uStack_e8 = uVar7;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar10), (uVar7 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar3 = "(null)";
        if (auVar22._8_8_ != NULL) {
            pcVar3 = auVar22._8_8_;
        }
        iVar6 = strlen(pcVar3);
        puVar11 = iVar6 + 1 + 0x14;
        iVar8 = trace_event_buffer_reserve(&uStack_158,iVar10);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            strcpy(iVar8 + 0x14,pcVar3);
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = param_4;
            trace_event_buffer_commit(&uStack_158);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_128) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar7 = auVar22._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_switch_channel;
    pcStack_1b8 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar3 = auVar22._8_8_;
    }
    iStack_1c8 = *(iVar8 + 0x5e0);
    uVar17 = uVar15 & 0xffffffff;
    uVar18 = puVar11 & 0xffffffff;
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    puVar12 = puVar11;
    uVar16 = uVar15;
    ppuStack_1c0 = &ppuStack_120;
    uVar9 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_1d4;
        pcVar21 = (uVar9 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(pcVar21,&iStack_1d0);
        if (iVar8 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_1d0 + 0xe8) = &ppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << uVar16) & 0x8003204;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar12 = uStack_1d4;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar15;
            uVar16 = uVar7;
            perf_trace_run_bpf_submit(iVar8,pcVar21,puVar12,uVar7,1,iStack_1d0,piVar1,0);
            unaff_x27 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar10 = auVar22._0_8_;
    uVar13 = uVar16;
    uVar5 = tpidr_el2;
    *extraout_x18_02 = 0x800337c;
    uStack_218 = 0x800337c;
    iVar8 = sp_el0;
    iStack_228 = *(iVar8 + 0x5e0);
    uVar15 = puVar12 & 0xffffffff;
    uVar20 = *(iVar10 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar19 = uVar20;
    uVar14 = uVar13;
    ppuStack_220 = &ppuStack_1c0;
    pcStack_210 = pcVar3;
    piStack_200 = piVar1;
    uStack_1f8 = uVar18;
    uStack_1f0 = uVar17;
    uStack_1e8 = uVar7;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar10), (uVar7 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar3 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar3 = auVar22._8_8_;
    }
    auVar22._8_8_ = pcVar3;
    auVar22._0_8_ = iVar10;
    iVar6 = strlen(pcVar3);
    uVar19 = iVar6 + 1;
    uVar20 = uVar19;
    puVar11 = uVar19 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_258,iVar10);
    auVar23._8_8_ = pcVar3;
    auVar23._0_8_ = iVar8;
    if (iVar8 != 0) {
        uVar2 = puVar12 & 1;
        uVar15 = uVar2;
        *(iVar8 + 8) = uVar19 * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar3);
        *(iVar8 + 0xc) = uVar2;
        *(iVar8 + 0x10) = uVar13;
        trace_event_buffer_commit(&uStack_258);
        auVar22 = auVar23;
    }
code_r0x08003468:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_228) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar10 = auVar23._0_8_;
    *extraout_x18_03 = sym.perf_trace_rpmh_drv_enable;
    pcStack_2b8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_2a0 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar3 = auVar23._8_8_;
    }
    iStack_2c8 = *(iVar8 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    puVar12 = puVar11;
    ppuStack_2c0 = &ppuStack_220;
    iStack_2b0 = unaff_x27;
    pcStack_298 = pcVar21;
    uStack_290 = uVar9;
    uStack_288 = uVar20;
    uStack_280 = auVar22._8_8_;
    uStack_278 = auVar22._0_8_;
    uStack_270 = uVar15;
    uStack_268 = uVar16 & 0xffffffff;
    iVar6 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_2d4;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&iStack_2d0,puVar12);
        if (iVar8 != 0) {
            uVar7 = _trace_event_raw_init & 0x3f;
            *(iStack_2d0 + 0xe8) = &ppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << uVar7) & 0x80034a0;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar12 = uStack_2d4;
            *(iVar8 + 0xc) = puVar11 & 1;
            *(iVar8 + 0x10) = uVar14;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar12,iVar10,1,iStack_2d0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_2c8) {
        auVar22 = __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_04 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar22._0_8_,auVar22._8_8_,puVar12 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002590 (size 8) =====

void sym.__bpf_trace_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,uint param_4,uint param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(param_1,param_2,param_3,param_4,param_5);
    return;
}


// ===== sym.trace_event_raw_event_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002598 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08002dbc)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint param_5,uint *param_6)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong uVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint uVar21;
    uint *puVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar23;
    uint64_t uVar24;
    uint32_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    int64_t *piVar28;
    code *pcVar29;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auStack_3f0 [12];
    uint32_t uStack_3e4;
    int64_t iStack_3e0;
    int64_t iStack_3d8;
    ulong **ppuStack_3d0;
    code *pcStack_3c8;
    int64_t iStack_3c0;
    code *pcStack_3b0;
    code *pcStack_3a8;
    ulong uStack_3a0;
    uint64_t uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    ulong uStack_328;
    char *pcStack_320;
    int64_t *piStack_310;
    uint64_t uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uchar auStack_2f0 [12];
    uint32_t uStack_2e4;
    int64_t iStack_2e0;
    int64_t iStack_2d8;
    ulong **ppuStack_2d0;
    code *pcStack_2c8;
    int64_t iStack_2c0;
    uint64_t uStack_2b0;
    code *pcStack_2a8;
    int64_t *piStack_2a0;
    uint64_t uStack_298;
    ulong uStack_290;
    ulong uStack_288;
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
    ulong uStack_220;
    char *pcStack_210;
    int64_t *piStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    char *pcStack_1b8;
    int64_t *piStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
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
    uint64_t uStack_130;
    code *pcStack_128;
    uint *puStack_120;
    uint64_t uStack_118;
    uchar auStack_110 [8];
    uint uStack_108;
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
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar25 = *(param_1 + 0x48);
    uVar19 = param_4;
    puVar22 = param_6;
    uVar21 = param_5;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = param_3;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar19 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(param_1), (uVar10 & 1) == 0))))
        goto code_r0x08002c04;
    }
    else {
code_r0x08002c04:
        pcVar4 = "(null)";
        if (param_2 != NULL) {
            pcVar4 = param_2;
        }
        iVar9 = strlen(pcVar4);
        puVar15 = iVar9 + 1 + 0x24;
        iVar11 = trace_event_buffer_reserve(&uStack_88,param_1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x21;
            strcpy(iVar11 + 0x21,pcVar4);
            *(iVar11 + 0xc) = param_3;
            *(iVar11 + 0x10) = param_4;
            *(iVar11 + 0x14) = param_5;
            *(iVar11 + 0x18) = *param_6;
            *(iVar11 + 0x1c) = param_6[1];
            *(iVar11 + 0x20) = param_6[2] != 0;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar10 = auVar30._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_send_msg;
    pcStack_e8 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_f8 = *(iVar11 + 0x5e0);
    uVar26 = uVar19 & 0xffffffff;
    iStack_100 = 0;
    uStack_104 = 0;
    puVar17 = puVar15;
    uVar20 = uVar19;
    uStack_108 = uVar21;
    puStack_f0 = &stack0xffffffffffffffb0;
    iVar12 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_104;
        unaff_x26 = (iVar12 + 0x30U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(unaff_x26,&iStack_100);
        if (iVar11 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_110;
            *(iStack_100 + 0x100) = ~(-1L << uVar20) & 0x8002cc0;
            *(iStack_100 + 0x108) = 5;
            *(iVar11 + 8) = iVar12 * 0x10000 + 0x10021;
            strcpy(iVar11 + 0x21,pcVar4);
            puVar17 = uStack_104;
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar19;
            *(iVar11 + 0x14) = uStack_108;
            *(iVar11 + 0x18) = *puVar22;
            *(iVar11 + 0x1c) = puVar22[1];
            *(iVar11 + 0x20) = puVar22[2] != 0;
            uVar20 = uVar10;
            perf_trace_run_bpf_submit(iVar11,unaff_x26,puVar17,uVar10,1,iStack_100,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar13 = auVar30._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_00 = 0x8002e64;
    uStack_138 = 0x8002e64;
    pcStack_128 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    uVar19 = puVar17 & 0xffffffff;
    iStack_148 = *(iVar11 + 0x5e0);
    uVar27 = *(iVar13 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar25 = uVar27;
    ppuStack_140 = &puStack_f0;
    uStack_130 = uVar26;
    puStack_120 = puVar22;
    uStack_118 = uVar10;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar3 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar3 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar3;
        auVar30._0_8_ = iVar13;
        iVar9 = strlen(pcVar3);
        uVar25 = iVar9 + 1;
        uVar27 = uVar25;
        puVar16 = uVar25 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_178,iVar13);
        auVar31._8_8_ = pcVar3;
        auVar31._0_8_ = iVar11;
        if (iVar11 != 0) {
            uVar2 = puVar17 & 1;
            uVar19 = uVar2;
            *(iVar11 + 8) = uVar25 * 0x10000 | 0xd;
            strcpy(iVar11 + 0xd,pcVar3);
            *(iVar11 + 0xc) = uVar2;
            trace_event_buffer_commit(&uStack_178);
            auVar30 = auVar31;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_148) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar10 = auVar31._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_solver_set;
    pcStack_1c8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar3 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar3 = auVar31._8_8_;
    }
    iStack_1d8 = *(iVar11 + 0x5e0);
    pcVar29 = sym.perf_trace_rpmh_solver_set;
    uVar26 = puVar16 & 0xffffffff;
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    puVar17 = puVar16;
    ppuStack_1d0 = &ppuStack_140;
    uStack_1c0 = unaff_x26;
    pcStack_1b8 = pcVar4;
    piStack_1b0 = piVar28;
    uStack_1a8 = puVar15 & 0xffffffff;
    uStack_1a0 = uVar27;
    uStack_198 = auVar30._8_8_;
    uStack_190 = auVar30._0_8_;
    uStack_188 = uVar19;
    uVar14 = strlen(pcVar3);
    iVar11 = tpidr_el1;
    piVar1 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar17 = &uStack_1e4;
        piVar28 = (uVar14 + 0x1cU & 0xfffffff8) - 4;
        uVar19 = perf_trace_buf_alloc(piVar28,&iStack_1e0);
        if (uVar19 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            uVar25 = puVar16 & 1;
            uVar26 = uVar25;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            *(iStack_1e0 + 0x100) = ~(-1L << uVar20) & 0x8002f78;
            *(iStack_1e0 + 0x108) = 5;
            *(uVar19 + 8) = uVar14 * 0x10000 + 0x1000d;
            strcpy(uVar19 + 0xd,pcVar3);
            puVar17 = uStack_1e4;
            *(uVar19 + 0xc) = uVar25;
            uVar20 = uVar10;
            perf_trace_run_bpf_submit(uVar19,piVar28,puVar17,uVar10,1,iStack_1e0,piVar1,0);
            unaff_x26 = uVar19;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar13 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_02 = 0x80030e8;
    uStack_228 = 0x80030e8;
    iVar11 = sp_el0;
    iStack_238 = *(iVar11 + 0x5e0);
    uVar27 = *(iVar13 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar25 = uVar27;
    uVar19 = uVar20;
    ppuStack_230 = &ppuStack_1d0;
    uStack_220 = uVar14;
    pcStack_210 = pcVar3;
    piStack_208 = piVar1;
    uStack_200 = uVar26;
    uStack_1f8 = uVar10;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar19 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar4 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar4 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar4;
        auVar32._0_8_ = iVar13;
        iVar9 = strlen(pcVar4);
        uVar25 = iVar9 + 1;
        uVar27 = uVar25;
        puVar15 = uVar25 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_268,iVar13);
        auVar7._8_8_ = pcVar4;
        auVar7._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar25 * 0x10000 | 0x14;
            strcpy(iVar11 + 0x14,pcVar4);
            *(iVar11 + 0xc) = puVar17;
            *(iVar11 + 0x10) = uVar20;
            trace_event_buffer_commit(&uStack_268);
            auVar32 = auVar7;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_238) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar10 = auVar30._0_8_;
    *extraout_x18_03 = sym.perf_trace_rpmh_switch_channel;
    pcStack_2c8 = sym.perf_trace_rpmh_switch_channel;
    pcStack_2a8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_2d8 = *(iVar11 + 0x5e0);
    uVar23 = uVar19 & 0xffffffff;
    uVar24 = puVar15 & 0xffffffff;
    iStack_2e0 = 0;
    uStack_2e4 = 0;
    puVar16 = puVar15;
    uVar26 = uVar19;
    ppuStack_2d0 = &ppuStack_230;
    iStack_2c0 = iVar12;
    uStack_2b0 = unaff_x26;
    piStack_2a0 = piVar28;
    uStack_298 = uVar27;
    uStack_290 = auVar32._8_8_;
    uStack_288 = auVar32._0_8_;
    uStack_280 = puVar17 & 0xffffffff;
    uStack_278 = uVar20 & 0xffffffff;
    uVar14 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar16 = &uStack_2e4;
        pcVar29 = (uVar14 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar29,&iStack_2e0);
        if (iVar11 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_2e0 + 0xe8) = &ppuStack_2d0;
            *(iStack_2e0 + 0xf8) = auStack_2f0;
            *(iStack_2e0 + 0x100) = ~(-1L << uVar20) & 0x8003204;
            *(iStack_2e0 + 0x108) = 5;
            *(iVar11 + 8) = uVar14 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar16 = uStack_2e4;
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar19;
            uVar26 = uVar10;
            perf_trace_run_bpf_submit(iVar11,pcVar29,puVar16,uVar10,1,iStack_2e0,piVar28,0);
            iVar12 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar13 = auVar33._0_8_;
    uVar18 = uVar26;
    uVar6 = tpidr_el2;
    *extraout_x18_04 = 0x800337c;
    uStack_328 = 0x800337c;
    iVar11 = sp_el0;
    iStack_338 = *(iVar11 + 0x5e0);
    uVar19 = puVar16 & 0xffffffff;
    uVar20 = *(iVar13 + 0x48);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uVar25 = uVar20;
    uVar21 = uVar18;
    ppuStack_330 = &ppuStack_2d0;
    pcStack_320 = pcVar4;
    piStack_310 = piVar28;
    uStack_308 = uVar24;
    uStack_300 = uVar23;
    uStack_2f8 = uVar10;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar25 >> 6 & 1) != 0) ||
           (((uVar25 >> 9 & 1) != 0 && (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar4 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar4 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar4;
    auVar33._0_8_ = iVar13;
    iVar9 = strlen(pcVar4);
    uVar25 = iVar9 + 1;
    uVar20 = uVar25;
    puVar15 = uVar25 + 0x14;
    iVar11 = trace_event_buffer_reserve(&uStack_368,iVar13);
    auVar8._8_8_ = pcVar4;
    auVar8._0_8_ = iVar11;
    if (iVar11 != 0) {
        uVar2 = puVar16 & 1;
        uVar19 = uVar2;
        *(iVar11 + 8) = uVar25 * 0x10000 | 0x14;
        strcpy(iVar11 + 0x14,pcVar4);
        *(iVar11 + 0xc) = uVar2;
        *(iVar11 + 0x10) = uVar18;
        trace_event_buffer_commit(&uStack_368);
        auVar33 = auVar8;
    }
code_r0x08003468:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_338) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar13 = auVar30._0_8_;
    *extraout_x18_05 = sym.perf_trace_rpmh_drv_enable;
    pcStack_3c8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_3b0 = sym.perf_trace_rpmh_switch_channel;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_3d8 = *(iVar11 + 0x5e0);
    iStack_3e0 = 0;
    uStack_3e4 = 0;
    puVar17 = puVar15;
    ppuStack_3d0 = &ppuStack_330;
    iStack_3c0 = iVar12;
    pcStack_3a8 = pcVar29;
    uStack_3a0 = uVar14;
    uStack_398 = uVar20;
    uStack_390 = auVar33._8_8_;
    uStack_388 = auVar33._0_8_;
    uStack_380 = uVar19;
    uStack_378 = uVar26 & 0xffffffff;
    iVar9 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(iVar13 + 0x78);
    if ((*(iVar13 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_3e4;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar5,&iStack_3e0,puVar17);
        if (iVar11 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_3e0 + 0xe8) = &ppuStack_3d0;
            *(iStack_3e0 + 0xf8) = auStack_3f0;
            *(iStack_3e0 + 0x100) = ~(-1L << uVar19) & 0x80034a0;
            *(iStack_3e0 + 0x108) = 5;
            *(iVar11 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar17 = uStack_3e4;
            *(iVar11 + 0xc) = puVar15 & 1;
            *(iVar11 + 0x10) = uVar21;
            perf_trace_run_bpf_submit(iVar11,iVar5,puVar17,iVar13,1,iStack_3e0,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_3d8) {
        auVar30 = __stack_chk_fail();
        uVar14 = tpidr_el2;
        *extraout_x18_06 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar30._0_8_,auVar30._8_8_,puVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025a0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint param_5,uint *param_6)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar13;
    uint32_t *puVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint uVar17;
    uint uVar18;
    uint64_t uVar19;
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
    uint64_t uVar22;
    uint64_t uVar23;
    uint32_t uVar24;
    uint64_t uVar25;
    uint64_t uVar26;
    int64_t *piVar27;
    code *pcVar28;
    uint64_t unaff_x26;
    uint64_t unaff_x30;
    uchar auVar29 [16];
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auStack_360 [12];
    uint32_t uStack_354;
    int64_t iStack_350;
    int64_t iStack_348;
    ulong **ppuStack_340;
    code *pcStack_338;
    int64_t iStack_330;
    code *pcStack_320;
    code *pcStack_318;
    ulong uStack_310;
    uint64_t uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    ulong **ppuStack_2a0;
    ulong uStack_298;
    char *pcStack_290;
    int64_t *piStack_280;
    uint64_t uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    uchar auStack_260 [12];
    uint32_t uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    uint64_t uStack_220;
    code *pcStack_218;
    int64_t *piStack_210;
    uint64_t uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
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
    ulong uStack_190;
    char *pcStack_180;
    int64_t *piStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    char *pcStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
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
    uchar auStack_80 [8];
    uint uStack_78;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iVar12;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (param_2 != NULL) {
        pcVar4 = param_2;
    }
    iStack_68 = *(iVar11 + 0x5e0);
    uVar25 = param_4 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar15 = param_3;
    uVar19 = param_4;
    uStack_78 = param_5;
    iVar10 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar27 = iVar11 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar27 != 0)) {
        puVar15 = &uStack_74;
        unaff_x26 = (iVar10 + 0x30U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(unaff_x26,&iStack_70);
        if (iVar11 != 0) {
            uVar20 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar19 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar19 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar19;
            *(iStack_70 + 0x108) = 5;
            *(iVar11 + 8) = iVar10 * 0x10000 + 0x10021;
            strcpy(iVar11 + 0x21,pcVar4);
            puVar15 = uStack_74;
            *(iVar11 + 0xc) = param_3;
            *(iVar11 + 0x10) = param_4;
            *(iVar11 + 0x14) = uStack_78;
            *(iVar11 + 0x18) = *param_6;
            *(iVar11 + 0x1c) = param_6[1];
            *(iVar11 + 0x20) = param_6[2] != 0;
            perf_trace_run_bpf_submit(iVar11,unaff_x26,puVar15,param_1,1,iStack_70,piVar27,0);
            uVar19 = param_1;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar29 = __stack_chk_fail();
    iVar12 = auVar29._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x8002e64;
    uStack_a8 = 0x8002e64;
    iVar11 = sp_el0;
    uVar20 = puVar15 & 0xffffffff;
    iStack_b8 = *(iVar11 + 0x5e0);
    uVar26 = *(iVar12 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar24 = uVar26;
    puStack_b0 = &stack0xffffffffffffffa0;
    uStack_a0 = uVar25;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar19 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) == 0) &&
           (((uVar24 >> 9 & 1) == 0 || (uVar25 = trace_event_ignore_this_pid(iVar12), (uVar25 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar3 = "(null)";
        if (auVar29._8_8_ != NULL) {
            pcVar3 = auVar29._8_8_;
        }
        auVar29._8_8_ = pcVar3;
        auVar29._0_8_ = iVar12;
        iVar9 = strlen(pcVar3);
        uVar24 = iVar9 + 1;
        uVar26 = uVar24;
        puVar14 = uVar24 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_e8,iVar12);
        auVar30._8_8_ = pcVar3;
        auVar30._0_8_ = iVar11;
        if (iVar11 != 0) {
            uVar2 = puVar15 & 1;
            uVar20 = uVar2;
            *(iVar11 + 8) = uVar24 * 0x10000 | 0xd;
            strcpy(iVar11 + 0xd,pcVar3);
            *(iVar11 + 0xc) = uVar2;
            trace_event_buffer_commit(&uStack_e8);
            auVar29 = auVar30;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar25 = auVar30._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_solver_set;
    pcStack_138 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar3 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar3 = auVar30._8_8_;
    }
    iStack_148 = *(iVar11 + 0x5e0);
    pcVar28 = sym.perf_trace_rpmh_solver_set;
    uVar21 = puVar14 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    puVar15 = puVar14;
    ppuStack_140 = &puStack_b0;
    uStack_130 = unaff_x26;
    pcStack_128 = pcVar4;
    piStack_120 = piVar27;
    uStack_118 = param_3 & 0xffffffff;
    uStack_110 = uVar26;
    uStack_108 = auVar29._8_8_;
    uStack_100 = auVar29._0_8_;
    uStack_f8 = uVar20;
    uVar13 = strlen(pcVar3);
    iVar11 = tpidr_el1;
    piVar1 = iVar11 + *(uVar25 + 0x78);
    if ((*(uVar25 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar15 = &uStack_154;
        piVar27 = (uVar13 + 0x1cU & 0xfffffff8) - 4;
        uVar20 = perf_trace_buf_alloc(piVar27,&iStack_150);
        if (uVar20 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_150 + 0xe8) = &ppuStack_140;
            uVar24 = puVar14 & 1;
            uVar21 = uVar24;
            *(iStack_150 + 0xf8) = auStack_160;
            *(iStack_150 + 0x100) = ~(-1L << uVar19) & 0x8002f78;
            *(iStack_150 + 0x108) = 5;
            *(uVar20 + 8) = uVar13 * 0x10000 + 0x1000d;
            strcpy(uVar20 + 0xd,pcVar3);
            puVar15 = uStack_154;
            *(uVar20 + 0xc) = uVar24;
            uVar19 = uVar25;
            perf_trace_run_bpf_submit(uVar20,piVar27,puVar15,uVar25,1,iStack_150,piVar1,0);
            unaff_x26 = uVar20;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_148) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar12 = auVar31._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_01 = 0x80030e8;
    uStack_198 = 0x80030e8;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    uVar26 = *(iVar12 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar24 = uVar26;
    uVar20 = uVar19;
    ppuStack_1a0 = &ppuStack_140;
    uStack_190 = uVar13;
    pcStack_180 = pcVar3;
    piStack_178 = piVar1;
    uStack_170 = uVar21;
    uStack_168 = uVar25;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) == 0) &&
           (((uVar24 >> 9 & 1) == 0 || (uVar25 = trace_event_ignore_this_pid(iVar12), (uVar25 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar4 = "(null)";
        if (auVar31._8_8_ != NULL) {
            pcVar4 = auVar31._8_8_;
        }
        auVar31._8_8_ = pcVar4;
        auVar31._0_8_ = iVar12;
        iVar9 = strlen(pcVar4);
        uVar24 = iVar9 + 1;
        uVar26 = uVar24;
        puVar14 = uVar24 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_1d8,iVar12);
        auVar7._8_8_ = pcVar4;
        auVar7._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar24 * 0x10000 | 0x14;
            strcpy(iVar11 + 0x14,pcVar4);
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar19;
            trace_event_buffer_commit(&uStack_1d8);
            auVar31 = auVar7;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    uVar25 = auVar29._0_8_;
    *extraout_x18_02 = sym.perf_trace_rpmh_switch_channel;
    pcStack_238 = sym.perf_trace_rpmh_switch_channel;
    pcStack_218 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar29._8_8_ != NULL) {
        pcVar4 = auVar29._8_8_;
    }
    iStack_248 = *(iVar11 + 0x5e0);
    uVar22 = uVar20 & 0xffffffff;
    uVar23 = puVar14 & 0xffffffff;
    iStack_250 = 0;
    uStack_254 = 0;
    puVar16 = puVar14;
    uVar21 = uVar20;
    ppuStack_240 = &ppuStack_1a0;
    iStack_230 = iVar10;
    uStack_220 = unaff_x26;
    piStack_210 = piVar27;
    uStack_208 = uVar26;
    uStack_200 = auVar31._8_8_;
    uStack_1f8 = auVar31._0_8_;
    uStack_1f0 = puVar15 & 0xffffffff;
    uStack_1e8 = uVar19 & 0xffffffff;
    uVar13 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar27 = iVar11 + *(uVar25 + 0x78);
    if ((*(uVar25 + 0x80) != 0) || (*piVar27 != 0)) {
        puVar16 = &uStack_254;
        pcVar28 = (uVar13 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar28,&iStack_250);
        if (iVar11 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_250 + 0xe8) = &ppuStack_240;
            *(iStack_250 + 0xf8) = auStack_260;
            *(iStack_250 + 0x100) = ~(-1L << uVar19) & 0x8003204;
            *(iStack_250 + 0x108) = 5;
            *(iVar11 + 8) = uVar13 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar16 = uStack_254;
            *(iVar11 + 0xc) = puVar14;
            *(iVar11 + 0x10) = uVar20;
            uVar21 = uVar25;
            perf_trace_run_bpf_submit(iVar11,pcVar28,puVar16,uVar25,1,iStack_250,piVar27,0);
            iVar10 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_248) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar12 = auVar32._0_8_;
    uVar17 = uVar21;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800337c;
    uStack_298 = 0x800337c;
    iVar11 = sp_el0;
    iStack_2a8 = *(iVar11 + 0x5e0);
    uVar19 = puVar16 & 0xffffffff;
    uVar20 = *(iVar12 + 0x48);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uVar24 = uVar20;
    uVar18 = uVar17;
    ppuStack_2a0 = &ppuStack_240;
    pcStack_290 = pcVar4;
    piStack_280 = piVar27;
    uStack_278 = uVar23;
    uStack_270 = uVar22;
    uStack_268 = uVar25;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar18 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) != 0) ||
           (((uVar24 >> 9 & 1) != 0 && (uVar25 = trace_event_ignore_this_pid(iVar12), (uVar25 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar4 = "(null)";
    if (auVar32._8_8_ != NULL) {
        pcVar4 = auVar32._8_8_;
    }
    auVar32._8_8_ = pcVar4;
    auVar32._0_8_ = iVar12;
    iVar9 = strlen(pcVar4);
    uVar24 = iVar9 + 1;
    uVar20 = uVar24;
    puVar15 = uVar24 + 0x14;
    iVar11 = trace_event_buffer_reserve(&uStack_2d8,iVar12);
    auVar8._8_8_ = pcVar4;
    auVar8._0_8_ = iVar11;
    if (iVar11 != 0) {
        uVar2 = puVar16 & 1;
        uVar19 = uVar2;
        *(iVar11 + 8) = uVar24 * 0x10000 | 0x14;
        strcpy(iVar11 + 0x14,pcVar4);
        *(iVar11 + 0xc) = uVar2;
        *(iVar11 + 0x10) = uVar17;
        trace_event_buffer_commit(&uStack_2d8);
        auVar32 = auVar8;
    }
code_r0x08003468:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    iVar12 = auVar29._0_8_;
    *extraout_x18_04 = sym.perf_trace_rpmh_drv_enable;
    pcStack_338 = sym.perf_trace_rpmh_drv_enable;
    pcStack_320 = sym.perf_trace_rpmh_switch_channel;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar29._8_8_ != NULL) {
        pcVar4 = auVar29._8_8_;
    }
    iStack_348 = *(iVar11 + 0x5e0);
    iStack_350 = 0;
    uStack_354 = 0;
    puVar14 = puVar15;
    ppuStack_340 = &ppuStack_2a0;
    iStack_330 = iVar10;
    pcStack_318 = pcVar28;
    uStack_310 = uVar13;
    uStack_308 = uVar20;
    uStack_300 = auVar32._8_8_;
    uStack_2f8 = auVar32._0_8_;
    uStack_2f0 = uVar19;
    uStack_2e8 = uVar21 & 0xffffffff;
    iVar9 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar27 = iVar11 + *(iVar12 + 0x78);
    if ((*(iVar12 + 0x80) != 0) || (*piVar27 != 0)) {
        puVar14 = &uStack_354;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar5,&iStack_350,puVar14);
        if (iVar11 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_350 + 0xe8) = &ppuStack_340;
            *(iStack_350 + 0xf8) = auStack_360;
            *(iStack_350 + 0x100) = ~(-1L << uVar19) & 0x80034a0;
            *(iStack_350 + 0x108) = 5;
            *(iVar11 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar14 = uStack_354;
            *(iVar11 + 0xc) = puVar15 & 1;
            *(iVar11 + 0x10) = uVar18;
            perf_trace_run_bpf_submit(iVar11,iVar5,puVar14,iVar12,1,iStack_350,piVar27,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_348) {
        auVar29 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_05 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar29._0_8_,auVar29._8_8_,puVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025a8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint uVar13;
    uint uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    ulong uStack_1b0;
    uint64_t uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
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
    char *pcStack_130;
    int64_t *piStack_120;
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
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar19 = *(param_1 + 0x48);
    uVar15 = param_4;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = param_3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar15 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(param_1), (uVar7 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar3 = "(null)";
        if (param_2 != NULL) {
            pcVar3 = param_2;
        }
        iVar6 = strlen(pcVar3);
        puVar11 = iVar6 + 1 + 0x14;
        iVar8 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            strcpy(iVar8 + 0x14,pcVar3);
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar7 = auVar21._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_switch_channel;
    pcStack_d8 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    iStack_e8 = *(iVar8 + 0x5e0);
    uVar17 = uVar15 & 0xffffffff;
    uVar18 = puVar11 & 0xffffffff;
    iStack_f0 = 0;
    uStack_f4 = 0;
    puVar12 = puVar11;
    uVar16 = uVar15;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar9 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_f4;
        unaff_x25 = (uVar9 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(unaff_x25,&iStack_f0);
        if (iVar8 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar16) & 0x8003204;
            *(iStack_f0 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar12 = uStack_f4;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar15;
            uVar16 = uVar7;
            perf_trace_run_bpf_submit(iVar8,unaff_x25,puVar12,uVar7,1,iStack_f0,piVar1,0);
            unaff_x27 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar10 = auVar21._0_8_;
    uVar13 = uVar16;
    uVar5 = tpidr_el2;
    *extraout_x18_00 = 0x800337c;
    uStack_138 = 0x800337c;
    iVar8 = sp_el0;
    iStack_148 = *(iVar8 + 0x5e0);
    uVar15 = puVar12 & 0xffffffff;
    uVar20 = *(iVar10 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar19 = uVar20;
    uVar14 = uVar13;
    ppuStack_140 = &puStack_e0;
    pcStack_130 = pcVar3;
    piStack_120 = piVar1;
    uStack_118 = uVar18;
    uStack_110 = uVar17;
    uStack_108 = uVar7;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar10), (uVar7 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    auVar21._8_8_ = pcVar3;
    auVar21._0_8_ = iVar10;
    iVar6 = strlen(pcVar3);
    uVar19 = iVar6 + 1;
    uVar20 = uVar19;
    puVar11 = uVar19 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_178,iVar10);
    auVar22._8_8_ = pcVar3;
    auVar22._0_8_ = iVar8;
    if (iVar8 != 0) {
        uVar2 = puVar12 & 1;
        uVar15 = uVar2;
        *(iVar8 + 8) = uVar19 * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar3);
        *(iVar8 + 0xc) = uVar2;
        *(iVar8 + 0x10) = uVar13;
        trace_event_buffer_commit(&uStack_178);
        auVar21 = auVar22;
    }
code_r0x08003468:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_148) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar10 = auVar22._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_drv_enable;
    pcStack_1d8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_1c0 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar3 = auVar22._8_8_;
    }
    iStack_1e8 = *(iVar8 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    puVar12 = puVar11;
    ppuStack_1e0 = &ppuStack_140;
    iStack_1d0 = unaff_x27;
    uStack_1b8 = unaff_x25;
    uStack_1b0 = uVar9;
    uStack_1a8 = uVar20;
    uStack_1a0 = auVar21._8_8_;
    uStack_198 = auVar21._0_8_;
    uStack_190 = uVar15;
    uStack_188 = uVar16 & 0xffffffff;
    iVar6 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_1f4;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&iStack_1f0,puVar12);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_1f0 + 0xe8) = &ppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << uVar15) & 0x80034a0;
            *(iStack_1f0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar12 = uStack_1f4;
            *(iVar8 + 0xc) = puVar11 & 1;
            *(iVar8 + 0x10) = uVar14;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar12,iVar10,1,iStack_1f0,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_1e8) {
        auVar21 = __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_02 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_,puVar12 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025b0 (size 8) =====

void sym.__bpf_trace_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.perf_trace_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025b8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint32_t param_4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar17 [16];
    uchar auStack_180 [12];
    uint32_t uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar **ppuStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    char *pcStack_b0;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar3 = "(null)";
    if (param_2 != NULL) {
        pcVar3 = param_2;
    }
    iStack_68 = *(iVar7 + 0x5e0);
    uVar14 = param_4;
    uVar15 = param_3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar8 = param_3;
    uVar10 = param_4;
    iVar6 = strlen(pcVar3);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_74;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_70);
        if (iVar7 != 0) {
            uVar13 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar2 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar13 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar2;
            *(iStack_70 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar3);
            puVar8 = uStack_74;
            *(iVar7 + 0xc) = param_3;
            *(iVar7 + 0x10) = param_4;
            iVar12 = param_1;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar8,param_1,1,iStack_70,piVar1,0);
            uVar10 = iVar12;
            unaff_x27 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar12 = auVar17._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x800337c;
    uStack_b8 = 0x800337c;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar16 = *(iVar12 + 0x48);
    uVar11 = uVar10;
    puStack_c0 = &stack0xffffffffffffffa0;
    pcStack_b0 = pcVar3;
    piStack_a0 = piVar1;
    uStack_98 = uVar15;
    uStack_90 = uVar14;
    iStack_88 = param_1;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar16 >> 6 & 1) != 0) ||
           (((uVar16 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar12), (uVar14 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar3 = "(null)";
    if (auVar17._8_8_ != NULL) {
        pcVar3 = auVar17._8_8_;
    }
    iVar6 = strlen(pcVar3);
    puVar9 = iVar6 + 1 + 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_f8,iVar12);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar7 + 0x14,pcVar3);
        *(iVar7 + 0xc) = puVar8 & 1;
        *(iVar7 + 0x10) = uVar10;
        trace_event_buffer_commit(&uStack_f8);
    }
code_r0x08003468:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar12 = auVar17._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_drv_enable;
    pcStack_158 = sym.perf_trace_rpmh_drv_enable;
    iVar7 = sp_el0;
    pcVar3 = "(null)";
    if (auVar17._8_8_ != NULL) {
        pcVar3 = auVar17._8_8_;
    }
    iStack_168 = *(iVar7 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    puVar8 = puVar9;
    ppuStack_160 = &puStack_c0;
    iStack_150 = unaff_x27;
    iVar6 = strlen(pcVar3);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(iVar12 + 0x78);
    if ((*(iVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_174;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_170,puVar8);
        if (iVar7 != 0) {
            uVar14 = _trace_event_raw_init & 0x3f;
            *(iStack_170 + 0xe8) = &ppuStack_160;
            *(iStack_170 + 0xf8) = auStack_180;
            *(iStack_170 + 0x100) = ~(-1L << uVar14) & 0x80034a0;
            *(iStack_170 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar3);
            puVar8 = uStack_174;
            *(iVar7 + 0xc) = puVar9 & 1;
            *(iVar7 + 0x10) = uVar11;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar8,iVar12,1,iStack_170,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_168) {
        auVar17 = __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_01 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.rpmh_init_fast_path.cfi_jt @ 0x080025c0 (size 8) =====

uint64_t sym.rpmh_init_fast_path.cfi_jt(int64_t param_1,ulong param_2,uint param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    uStack_48 = 0;
    iVar4 = *(*(param_1 + 0x60) + 0x98);
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_get_channel(iVar4);
        uVar2 = uVar1;
        if (-1 < uVar1) {
            uStack_50 = uStack_50 & 0xffffffff;
            uStack_48 = CONCAT44(uStack_48._4_4_,param_3);
            uStack_40 = param_2;
            uVar2 = sym.rpmh_rsc_init_fast_path(iVar4,&uStack_50,uVar1);
            uVar2 = uVar2 & 0xffffffff;
        }
    }
    else {
        uVar2 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.rpmh_update_fast_path;
    pcStack_78 = sym.rpmh_update_fast_path;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    uStack_a0 = 0;
    uStack_98 = 0;
    iVar4 = *(*(auVar5._0_8_ + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_get_channel(iVar4);
        uVar3 = uVar1;
        if (-1 < uVar1) {
            uStack_a0 = uStack_a0 & 0xffffffff;
            uStack_98 = CONCAT44(uStack_98._4_4_,uVar2);
            uStack_90 = auVar5._8_8_;
            uVar3 = sym.rpmh_rsc_update_fast_path(iVar4,&uStack_a0,param_4 & 0xffffffff,uVar1);
            uVar3 = uVar3 & 0xffffffff;
        }
    }
    else {
        uVar3 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return uVar3;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.rpmh_get_device;
    uVar2 = sym.rpmh_rsc_get_device(auVar5._0_8_,auVar5._8_8_);
    return uVar2;
}


// ===== sym.__traceiter_rpmh_solver_set.cfi_jt @ 0x080025c8 (size 8) =====

ulong sym.__traceiter_rpmh_solver_set.cfi_jt(ulong param_1,ulong param_2,uint32_t param_3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8007d80 != NULL) {
        piVar1 = *0x8007d80;
        do {
            (**piVar1)(piVar1[1],param_2,param_3 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_rpmh_drv_enable.cfi_jt @ 0x080025d0 (size 8) =====

ulong sym.__traceiter_rpmh_drv_enable.cfi_jt(ulong param_1,ulong param_2,uint32_t param_3,uint param_4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8007e10 != NULL) {
        piVar1 = *0x8007e10;
        do {
            (**piVar1)(piVar1[1],param_2,param_3 & 1,param_4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__bpf_trace_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025d8 (size 8) =====

void sym.__bpf_trace_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (ulong param_1,ulong param_2,uint64_t param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3 & 1,param_4);
    return;
}


// ===== sym.perf_trace_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025e0 (size 8) =====

void sym.perf_trace_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint param_4)

{
    int64_t *piVar1;
    char *pcVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar10 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    puVar8 = param_3;
    iVar6 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &uStack_74;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&iStack_70,puVar8);
        if (iVar7 != 0) {
            uVar9 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar3 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar9 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar2);
            puVar8 = uStack_74;
            *(iVar7 + 0xc) = param_3 & 1;
            *(iVar7 + 0x10) = param_4;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar8,param_1,1,iStack_70,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8003620;
    bpf_trace_run3(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_,puVar8 & 0xffffffff);
    return;
}


// ===== sym.trace_event_raw_event_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025e8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint param_4)

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
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
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
    uVar12 = *(param_1 + 0x48);
    uVar11 = param_4;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar9 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar11 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(param_1), (uVar6 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar5 = strlen(pcVar2);
    puVar9 = iVar5 + 1 + 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0x14;
        strcpy(iVar7 + 0x14,pcVar2);
        *(iVar7 + 0xc) = param_3 & 1;
        *(iVar7 + 0x10) = param_4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08003468:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    iVar8 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_drv_enable;
    pcStack_d8 = sym.perf_trace_rpmh_drv_enable;
    iVar7 = sp_el0;
    pcVar2 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar2 = auVar13._8_8_;
    }
    iStack_e8 = *(iVar7 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puVar10 = puVar9;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar5 = strlen(pcVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_f4;
        iVar3 = (iVar5 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar10);
        if (iVar7 != 0) {
            uVar6 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar6) & 0x80034a0;
            *(iStack_f0 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar2);
            puVar10 = uStack_f4;
            *(iVar7 + 0xc) = puVar9 & 1;
            *(iVar7 + 0x10) = uVar11;
            perf_trace_run_bpf_submit(iVar7,iVar3,puVar10,iVar8,1,iStack_f0,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_e8) {
        auVar13 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar13._0_8_,auVar13._8_8_,puVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.rpmh_get_device.cfi_jt @ 0x080025f0 (size 8) =====

void sym.rpmh_get_device.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.rpmh_rsc_get_device(param_1,param_2);
    return;
}


// ===== sym.perf_trace_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x080025f8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08002dbc)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint param_5,uint *param_6)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint uVar19;
    uint uVar20;
    uint *puVar21;
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
    uint64_t uVar25;
    uint32_t uVar26;
    uint64_t uVar27;
    uint64_t unaff_x24;
    int64_t *piVar28;
    code *pcVar29;
    uint64_t unaff_x26;
    uint64_t unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auStack_470 [12];
    uint32_t uStack_464;
    int64_t iStack_460;
    int64_t iStack_458;
    ulong **ppuStack_450;
    code *pcStack_448;
    int64_t iStack_440;
    code *pcStack_430;
    code *pcStack_428;
    ulong uStack_420;
    uint64_t uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    uint64_t uStack_400;
    uint64_t uStack_3f8;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    int64_t iStack_3b8;
    ulong **ppuStack_3b0;
    ulong uStack_3a8;
    char *pcStack_3a0;
    int64_t *piStack_390;
    uint64_t uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    uchar auStack_370 [12];
    uint32_t uStack_364;
    int64_t iStack_360;
    int64_t iStack_358;
    ulong **ppuStack_350;
    code *pcStack_348;
    int64_t iStack_340;
    uint64_t uStack_330;
    code *pcStack_328;
    int64_t *piStack_320;
    uint64_t uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    ulong **ppuStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    char *pcStack_290;
    int64_t *piStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    char *pcStack_238;
    int64_t *piStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    uint64_t uStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    ulong uStack_1b8;
    uint64_t uStack_1b0;
    code *pcStack_1a8;
    uint *puStack_1a0;
    uint64_t uStack_198;
    uchar auStack_190 [8];
    uint uStack_188;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar **ppuStack_170;
    code *pcStack_168;
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
    uint64_t uStack_b0;
    char *pcStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    uint *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (param_2 != NULL) {
        pcVar4 = param_2;
    }
    iStack_68 = *(iVar12 + 0x5e0);
    uVar24 = param_3 & 0xffffffff;
    puStack_70 = NULL;
    uStack_74 = 0;
    puVar16 = param_3;
    uVar15 = param_4;
    uVar10 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar16 = &uStack_74;
        unaff_x24 = (uVar10 + 0x24U & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(unaff_x24,&puStack_70);
        if (uVar11 != 0) {
            uVar22 = -1L << (_trace_event_raw_init & 0x3f);
            *(puStack_70 + 0x3a) = &stack0xffffffffffffffa0;
            *(puStack_70 + 0x3e) = auStack_80;
            uVar15 = (~uVar22 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar15 = uVar22 | unaff_x30;
            }
            *(puStack_70 + 0x40) = uVar15;
            *(puStack_70 + 0x42) = 5;
            *(uVar11 + 8) = uVar10 * 0x10000 + 0x10018;
            strcpy(uVar11 + 0x18,pcVar4);
            *(uVar11 + 0xc) = param_3;
            puVar16 = uStack_74;
            param_5 = 1;
            *(uVar11 + 0x10) = **(param_4 + 0x10);
            *(uVar11 + 0x14) = *(*(param_4 + 0x10) + 4);
            uVar15 = param_1;
            param_6 = puStack_70;
            perf_trace_run_bpf_submit(uVar11,unaff_x24);
            unaff_x26 = uVar11;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar13 = auVar30._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18 = 0x8002b70;
    uStack_c8 = 0x8002b70;
    iVar12 = sp_el0;
    iStack_d8 = *(iVar12 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uVar26 = *(iVar13 + 0x48);
    uVar11 = uVar15;
    puVar21 = param_6;
    uVar20 = param_5;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = uVar10;
    uStack_b0 = unaff_x24;
    pcStack_a8 = pcVar4;
    piStack_a0 = piVar28;
    uStack_98 = uVar24;
    uStack_90 = param_4;
    uStack_88 = param_1;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar17 = puVar16;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar24 = trace_event_ignore_this_pid(iVar13), (uVar24 & 1) == 0))))
        goto code_r0x08002c04;
    }
    else {
code_r0x08002c04:
        pcVar4 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar4 = auVar30._8_8_;
        }
        iVar9 = strlen(pcVar4);
        puVar17 = iVar9 + 1 + 0x24;
        iVar12 = trace_event_buffer_reserve(&uStack_108,iVar13);
        if (iVar12 != 0) {
            *(iVar12 + 8) = (iVar9 + 1) * 0x10000 | 0x21;
            strcpy(iVar12 + 0x21,pcVar4);
            *(iVar12 + 0xc) = puVar16;
            *(iVar12 + 0x10) = uVar15;
            *(iVar12 + 0x14) = param_5;
            *(iVar12 + 0x18) = *param_6;
            *(iVar12 + 0x1c) = param_6[1];
            *(iVar12 + 0x20) = param_6[2] != 0;
            trace_event_buffer_commit(&uStack_108);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar15 = auVar30._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_send_msg;
    pcStack_168 = sym.perf_trace_rpmh_send_msg;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_178 = *(iVar12 + 0x5e0);
    uVar22 = uVar11 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    puVar16 = puVar17;
    uVar24 = uVar11;
    uStack_188 = uVar20;
    ppuStack_170 = &puStack_d0;
    iVar13 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar16 = &uStack_184;
        unaff_x26 = (iVar13 + 0x30U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(unaff_x26,&iStack_180);
        if (iVar12 != 0) {
            uVar24 = _trace_event_raw_init & 0x3f;
            *(iStack_180 + 0xe8) = &ppuStack_170;
            *(iStack_180 + 0xf8) = auStack_190;
            *(iStack_180 + 0x100) = ~(-1L << uVar24) & 0x8002cc0;
            *(iStack_180 + 0x108) = 5;
            *(iVar12 + 8) = iVar13 * 0x10000 + 0x10021;
            strcpy(iVar12 + 0x21,pcVar4);
            puVar16 = uStack_184;
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar11;
            *(iVar12 + 0x14) = uStack_188;
            *(iVar12 + 0x18) = *puVar21;
            *(iVar12 + 0x1c) = puVar21[1];
            *(iVar12 + 0x20) = puVar21[2] != 0;
            uVar24 = uVar15;
            perf_trace_run_bpf_submit(iVar12,unaff_x26,puVar16,uVar15,1,iStack_180,piVar28,0);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_178) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar14 = auVar30._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_01 = 0x8002e64;
    uStack_1b8 = 0x8002e64;
    pcStack_1a8 = sym.perf_trace_rpmh_send_msg;
    iVar12 = sp_el0;
    uVar11 = puVar16 & 0xffffffff;
    iStack_1c8 = *(iVar12 + 0x5e0);
    uVar27 = *(iVar14 + 0x48);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uVar26 = uVar27;
    ppuStack_1c0 = &ppuStack_170;
    uStack_1b0 = uVar22;
    puStack_1a0 = puVar21;
    uStack_198 = uVar15;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar18 = puVar16;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar24 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar14), (uVar15 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar3 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar3 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar3;
        auVar30._0_8_ = iVar14;
        iVar9 = strlen(pcVar3);
        uVar26 = iVar9 + 1;
        uVar27 = uVar26;
        puVar18 = uVar26 + 0x10;
        iVar12 = trace_event_buffer_reserve(&uStack_1f8,iVar14);
        auVar31._8_8_ = pcVar3;
        auVar31._0_8_ = iVar12;
        if (iVar12 != 0) {
            uVar2 = puVar16 & 1;
            uVar11 = uVar2;
            *(iVar12 + 8) = uVar26 * 0x10000 | 0xd;
            strcpy(iVar12 + 0xd,pcVar3);
            *(iVar12 + 0xc) = uVar2;
            trace_event_buffer_commit(&uStack_1f8);
            auVar30 = auVar31;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar15 = auVar31._0_8_;
    *extraout_x18_02 = sym.perf_trace_rpmh_solver_set;
    pcStack_248 = sym.perf_trace_rpmh_solver_set;
    iVar12 = sp_el0;
    pcVar3 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar3 = auVar31._8_8_;
    }
    iStack_258 = *(iVar12 + 0x5e0);
    pcVar29 = sym.perf_trace_rpmh_solver_set;
    uVar22 = puVar18 & 0xffffffff;
    iStack_260 = 0;
    uStack_264 = 0;
    puVar16 = puVar18;
    ppuStack_250 = &ppuStack_1c0;
    uStack_240 = unaff_x26;
    pcStack_238 = pcVar4;
    piStack_230 = piVar28;
    uStack_228 = puVar17 & 0xffffffff;
    uStack_220 = uVar27;
    uStack_218 = auVar30._8_8_;
    uStack_210 = auVar30._0_8_;
    uStack_208 = uVar11;
    uVar10 = strlen(pcVar3);
    iVar12 = tpidr_el1;
    piVar1 = iVar12 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &uStack_264;
        piVar28 = (uVar10 + 0x1cU & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(piVar28,&iStack_260);
        if (uVar11 != 0) {
            uVar24 = _trace_event_raw_init & 0x3f;
            *(iStack_260 + 0xe8) = &ppuStack_250;
            uVar26 = puVar18 & 1;
            uVar22 = uVar26;
            *(iStack_260 + 0xf8) = auStack_270;
            *(iStack_260 + 0x100) = ~(-1L << uVar24) & 0x8002f78;
            *(iStack_260 + 0x108) = 5;
            *(uVar11 + 8) = uVar10 * 0x10000 + 0x1000d;
            strcpy(uVar11 + 0xd,pcVar3);
            puVar16 = uStack_264;
            *(uVar11 + 0xc) = uVar26;
            uVar24 = uVar15;
            perf_trace_run_bpf_submit(uVar11,piVar28,puVar16,uVar15,1,iStack_260,piVar1,0);
            unaff_x26 = uVar11;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_258) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar14 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x80030e8;
    uStack_2a8 = 0x80030e8;
    iVar12 = sp_el0;
    iStack_2b8 = *(iVar12 + 0x5e0);
    uVar27 = *(iVar14 + 0x48);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uVar26 = uVar27;
    uVar11 = uVar24;
    ppuStack_2b0 = &ppuStack_250;
    uStack_2a0 = uVar10;
    pcStack_290 = pcVar3;
    piStack_288 = piVar1;
    uStack_280 = uVar22;
    uStack_278 = uVar15;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar17 = puVar16;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar14), (uVar15 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar4 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar4 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar4;
        auVar32._0_8_ = iVar14;
        iVar9 = strlen(pcVar4);
        uVar26 = iVar9 + 1;
        uVar27 = uVar26;
        puVar17 = uVar26 + 0x14;
        iVar12 = trace_event_buffer_reserve(&uStack_2e8,iVar14);
        auVar7._8_8_ = pcVar4;
        auVar7._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar26 * 0x10000 | 0x14;
            strcpy(iVar12 + 0x14,pcVar4);
            *(iVar12 + 0xc) = puVar16;
            *(iVar12 + 0x10) = uVar24;
            trace_event_buffer_commit(&uStack_2e8);
            auVar32 = auVar7;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar15 = auVar30._0_8_;
    *extraout_x18_04 = sym.perf_trace_rpmh_switch_channel;
    pcStack_348 = sym.perf_trace_rpmh_switch_channel;
    pcStack_328 = sym.perf_trace_rpmh_solver_set;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_358 = *(iVar12 + 0x5e0);
    uVar23 = uVar11 & 0xffffffff;
    uVar25 = puVar17 & 0xffffffff;
    iStack_360 = 0;
    uStack_364 = 0;
    puVar18 = puVar17;
    uVar22 = uVar11;
    ppuStack_350 = &ppuStack_2b0;
    iStack_340 = iVar13;
    uStack_330 = unaff_x26;
    piStack_320 = piVar28;
    uStack_318 = uVar27;
    uStack_310 = auVar32._8_8_;
    uStack_308 = auVar32._0_8_;
    uStack_300 = puVar16 & 0xffffffff;
    uStack_2f8 = uVar24 & 0xffffffff;
    uVar10 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar18 = &uStack_364;
        pcVar29 = (uVar10 + 0x20U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(pcVar29,&iStack_360);
        if (iVar12 != 0) {
            uVar24 = _trace_event_raw_init & 0x3f;
            *(iStack_360 + 0xe8) = &ppuStack_350;
            *(iStack_360 + 0xf8) = auStack_370;
            *(iStack_360 + 0x100) = ~(-1L << uVar24) & 0x8003204;
            *(iStack_360 + 0x108) = 5;
            *(iVar12 + 8) = uVar10 * 0x10000 + 0x10014;
            strcpy(iVar12 + 0x14,pcVar4);
            puVar18 = uStack_364;
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar11;
            uVar22 = uVar15;
            perf_trace_run_bpf_submit(iVar12,pcVar29,puVar18,uVar15,1,iStack_360,piVar28,0);
            iVar13 = iVar12;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_358) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar14 = auVar33._0_8_;
    uVar19 = uVar22;
    uVar6 = tpidr_el2;
    *extraout_x18_05 = 0x800337c;
    uStack_3a8 = 0x800337c;
    iVar12 = sp_el0;
    iStack_3b8 = *(iVar12 + 0x5e0);
    uVar24 = puVar18 & 0xffffffff;
    uVar11 = *(iVar14 + 0x48);
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uVar26 = uVar11;
    uVar20 = uVar19;
    ppuStack_3b0 = &ppuStack_350;
    pcStack_3a0 = pcVar4;
    piStack_390 = piVar28;
    uStack_388 = uVar25;
    uStack_380 = uVar23;
    uStack_378 = uVar15;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar18;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) != 0) ||
           (((uVar26 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar14), (uVar15 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar4 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar4 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar4;
    auVar33._0_8_ = iVar14;
    iVar9 = strlen(pcVar4);
    uVar26 = iVar9 + 1;
    uVar11 = uVar26;
    puVar16 = uVar26 + 0x14;
    iVar12 = trace_event_buffer_reserve(&uStack_3e8,iVar14);
    auVar8._8_8_ = pcVar4;
    auVar8._0_8_ = iVar12;
    if (iVar12 != 0) {
        uVar2 = puVar18 & 1;
        uVar24 = uVar2;
        *(iVar12 + 8) = uVar26 * 0x10000 | 0x14;
        strcpy(iVar12 + 0x14,pcVar4);
        *(iVar12 + 0xc) = uVar2;
        *(iVar12 + 0x10) = uVar19;
        trace_event_buffer_commit(&uStack_3e8);
        auVar33 = auVar8;
    }
code_r0x08003468:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar14 = auVar30._0_8_;
    *extraout_x18_06 = sym.perf_trace_rpmh_drv_enable;
    pcStack_448 = sym.perf_trace_rpmh_drv_enable;
    pcStack_430 = sym.perf_trace_rpmh_switch_channel;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_458 = *(iVar12 + 0x5e0);
    iStack_460 = 0;
    uStack_464 = 0;
    puVar17 = puVar16;
    ppuStack_450 = &ppuStack_3b0;
    iStack_440 = iVar13;
    pcStack_428 = pcVar29;
    uStack_420 = uVar10;
    uStack_418 = uVar11;
    uStack_410 = auVar33._8_8_;
    uStack_408 = auVar33._0_8_;
    uStack_400 = uVar24;
    uStack_3f8 = uVar22 & 0xffffffff;
    iVar9 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_464;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(iVar5,&iStack_460,puVar17);
        if (iVar12 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_460 + 0xe8) = &ppuStack_450;
            *(iStack_460 + 0xf8) = auStack_470;
            *(iStack_460 + 0x100) = ~(-1L << uVar15) & 0x80034a0;
            *(iStack_460 + 0x108) = 5;
            *(iVar12 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar12 + 0x14,pcVar4);
            puVar17 = uStack_464;
            *(iVar12 + 0xc) = puVar16 & 1;
            *(iVar12 + 0x10) = uVar20;
            perf_trace_run_bpf_submit(iVar12,iVar5,puVar17,iVar14,1,iStack_460,piVar28,0);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_458) {
        auVar30 = __stack_chk_fail();
        uVar10 = tpidr_el2;
        *extraout_x18_07 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar30._0_8_,auVar30._8_8_,puVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002600 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08002dbc)
//WARNING: Removing unreachable block (ram,0x08002ad4)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint param_5,uint *param_6)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint uVar19;
    uint64_t uVar20;
    uint uVar21;
    uint *puVar22;
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
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    uint32_t uVar26;
    uint64_t uVar27;
    uint64_t unaff_x24;
    int64_t *piVar28;
    code *pcVar29;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auStack_4f0 [12];
    uint32_t uStack_4e4;
    int64_t iStack_4e0;
    int64_t iStack_4d8;
    ulong **ppuStack_4d0;
    code *pcStack_4c8;
    int64_t iStack_4c0;
    code *pcStack_4b0;
    code *pcStack_4a8;
    ulong uStack_4a0;
    uint64_t uStack_498;
    ulong uStack_490;
    ulong uStack_488;
    uint64_t uStack_480;
    uint64_t uStack_478;
    ulong uStack_468;
    ulong uStack_460;
    ulong uStack_458;
    ulong uStack_450;
    ulong uStack_448;
    ulong uStack_440;
    int64_t iStack_438;
    ulong **ppuStack_430;
    ulong uStack_428;
    char *pcStack_420;
    int64_t *piStack_410;
    uint64_t uStack_408;
    uint64_t uStack_400;
    uint64_t uStack_3f8;
    uchar auStack_3f0 [12];
    uint32_t uStack_3e4;
    int64_t iStack_3e0;
    int64_t iStack_3d8;
    ulong **ppuStack_3d0;
    code *pcStack_3c8;
    int64_t iStack_3c0;
    uint64_t uStack_3b0;
    code *pcStack_3a8;
    int64_t *piStack_3a0;
    uint64_t uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    ulong uStack_328;
    ulong uStack_320;
    char *pcStack_310;
    int64_t *piStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uchar auStack_2f0 [12];
    uint32_t uStack_2e4;
    int64_t iStack_2e0;
    int64_t iStack_2d8;
    ulong **ppuStack_2d0;
    code *pcStack_2c8;
    uint64_t uStack_2c0;
    char *pcStack_2b8;
    int64_t *piStack_2b0;
    uint64_t uStack_2a8;
    uint64_t uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    uint64_t uStack_288;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    ulong uStack_238;
    uint64_t uStack_230;
    code *pcStack_228;
    uint *puStack_220;
    uint64_t uStack_218;
    uchar auStack_210 [8];
    uint uStack_208;
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    code *pcStack_1e8;
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
    uint64_t uStack_130;
    char *pcStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    uint *puStack_f0;
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
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar26 = *(param_1 + 0x48);
    uVar20 = param_4;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = param_3;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(param_1), (uVar10 & 1) == 0))))
        goto code_r0x08002934;
    }
    else {
code_r0x08002934:
        pcVar4 = "(null)";
        if (param_2 != NULL) {
            pcVar4 = param_2;
        }
        iVar9 = strlen(pcVar4);
        puVar16 = iVar9 + 1 + 0x18;
        iVar11 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x18;
            strcpy(iVar11 + 0x18,pcVar4);
            *(iVar11 + 0xc) = param_3;
            *(iVar11 + 0x10) = **(param_4 + 0x10);
            *(iVar11 + 0x14) = *(*(param_4 + 0x10) + 4);
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar10 = auVar30._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_tx_done;
    pcStack_d8 = sym.perf_trace_rpmh_tx_done;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_e8 = *(iVar11 + 0x5e0);
    uVar24 = puVar16 & 0xffffffff;
    puStack_f0 = NULL;
    uStack_f4 = 0;
    puVar17 = puVar16;
    uVar27 = uVar20;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar12 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_f4;
        unaff_x24 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(unaff_x24,&puStack_f0);
        if (uVar13 != 0) {
            uVar27 = _trace_event_raw_init & 0x3f;
            *(puStack_f0 + 0x3a) = &puStack_e0;
            *(puStack_f0 + 0x3e) = auStack_100;
            *(puStack_f0 + 0x40) = ~(-1L << uVar27) & 0x80029e0;
            *(puStack_f0 + 0x42) = 5;
            *(uVar13 + 8) = uVar12 * 0x10000 + 0x10018;
            strcpy(uVar13 + 0x18,pcVar4);
            *(uVar13 + 0xc) = puVar16;
            puVar17 = uStack_f4;
            param_5 = 1;
            *(uVar13 + 0x10) = **(uVar20 + 0x10);
            *(uVar13 + 0x14) = *(*(uVar20 + 0x10) + 4);
            uVar27 = uVar10;
            param_6 = puStack_f0;
            perf_trace_run_bpf_submit(uVar13,unaff_x24);
            unaff_x26 = uVar13;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar14 = auVar30._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_00 = 0x8002b70;
    uStack_148 = 0x8002b70;
    iVar11 = sp_el0;
    iStack_158 = *(iVar11 + 0x5e0);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar26 = *(iVar14 + 0x48);
    uVar13 = uVar27;
    puVar22 = param_6;
    uVar21 = param_5;
    ppuStack_150 = &puStack_e0;
    uStack_140 = uVar12;
    uStack_130 = unaff_x24;
    pcStack_128 = pcVar4;
    piStack_120 = piVar28;
    uStack_118 = uVar24;
    uStack_110 = uVar20;
    uStack_108 = uVar10;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar14), (uVar20 & 1) == 0))))
        goto code_r0x08002c04;
    }
    else {
code_r0x08002c04:
        pcVar4 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar4 = auVar30._8_8_;
        }
        iVar9 = strlen(pcVar4);
        puVar16 = iVar9 + 1 + 0x24;
        iVar11 = trace_event_buffer_reserve(&uStack_188,iVar14);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x21;
            strcpy(iVar11 + 0x21,pcVar4);
            *(iVar11 + 0xc) = puVar17;
            *(iVar11 + 0x10) = uVar27;
            *(iVar11 + 0x14) = param_5;
            *(iVar11 + 0x18) = *param_6;
            *(iVar11 + 0x1c) = param_6[1];
            *(iVar11 + 0x20) = param_6[2] != 0;
            trace_event_buffer_commit(&uStack_188);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_158) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar20 = auVar30._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_send_msg;
    pcStack_1e8 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_1f8 = *(iVar11 + 0x5e0);
    uVar27 = uVar13 & 0xffffffff;
    iStack_200 = 0;
    uStack_204 = 0;
    puVar17 = puVar16;
    uVar10 = uVar13;
    uStack_208 = uVar21;
    ppuStack_1f0 = &ppuStack_150;
    iVar14 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_204;
        unaff_x26 = (iVar14 + 0x30U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(unaff_x26,&iStack_200);
        if (iVar11 != 0) {
            uVar10 = _trace_event_raw_init & 0x3f;
            *(iStack_200 + 0xe8) = &ppuStack_1f0;
            *(iStack_200 + 0xf8) = auStack_210;
            *(iStack_200 + 0x100) = ~(-1L << uVar10) & 0x8002cc0;
            *(iStack_200 + 0x108) = 5;
            *(iVar11 + 8) = iVar14 * 0x10000 + 0x10021;
            strcpy(iVar11 + 0x21,pcVar4);
            puVar17 = uStack_204;
            *(iVar11 + 0xc) = puVar16;
            *(iVar11 + 0x10) = uVar13;
            *(iVar11 + 0x14) = uStack_208;
            *(iVar11 + 0x18) = *puVar22;
            *(iVar11 + 0x1c) = puVar22[1];
            *(iVar11 + 0x20) = puVar22[2] != 0;
            uVar10 = uVar20;
            perf_trace_run_bpf_submit(iVar11,unaff_x26,puVar17,uVar20,1,iStack_200,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar15 = auVar30._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_02 = 0x8002e64;
    uStack_238 = 0x8002e64;
    pcStack_228 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    uVar24 = puVar17 & 0xffffffff;
    iStack_248 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar15 + 0x48);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uVar26 = uVar13;
    ppuStack_240 = &ppuStack_1f0;
    uStack_230 = uVar27;
    puStack_220 = puVar22;
    uStack_218 = uVar20;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar18 = puVar17;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar3 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar3 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar3;
        auVar30._0_8_ = iVar15;
        iVar9 = strlen(pcVar3);
        uVar26 = iVar9 + 1;
        uVar13 = uVar26;
        puVar18 = uVar26 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_278,iVar15);
        auVar31._8_8_ = pcVar3;
        auVar31._0_8_ = iVar11;
        if (iVar11 != 0) {
            uVar2 = puVar17 & 1;
            uVar24 = uVar2;
            *(iVar11 + 8) = uVar26 * 0x10000 | 0xd;
            strcpy(iVar11 + 0xd,pcVar3);
            *(iVar11 + 0xc) = uVar2;
            trace_event_buffer_commit(&uStack_278);
            auVar30 = auVar31;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_248) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar20 = auVar31._0_8_;
    *extraout_x18_03 = sym.perf_trace_rpmh_solver_set;
    pcStack_2c8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar3 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar3 = auVar31._8_8_;
    }
    iStack_2d8 = *(iVar11 + 0x5e0);
    pcVar29 = sym.perf_trace_rpmh_solver_set;
    uVar27 = puVar18 & 0xffffffff;
    iStack_2e0 = 0;
    uStack_2e4 = 0;
    puVar17 = puVar18;
    ppuStack_2d0 = &ppuStack_240;
    uStack_2c0 = unaff_x26;
    pcStack_2b8 = pcVar4;
    piStack_2b0 = piVar28;
    uStack_2a8 = puVar16 & 0xffffffff;
    uStack_2a0 = uVar13;
    uStack_298 = auVar30._8_8_;
    uStack_290 = auVar30._0_8_;
    uStack_288 = uVar24;
    uVar12 = strlen(pcVar3);
    iVar11 = tpidr_el1;
    piVar1 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar17 = &uStack_2e4;
        piVar28 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar24 = perf_trace_buf_alloc(piVar28,&iStack_2e0);
        if (uVar24 != 0) {
            uVar10 = _trace_event_raw_init & 0x3f;
            *(iStack_2e0 + 0xe8) = &ppuStack_2d0;
            uVar26 = puVar18 & 1;
            uVar27 = uVar26;
            *(iStack_2e0 + 0xf8) = auStack_2f0;
            *(iStack_2e0 + 0x100) = ~(-1L << uVar10) & 0x8002f78;
            *(iStack_2e0 + 0x108) = 5;
            *(uVar24 + 8) = uVar12 * 0x10000 + 0x1000d;
            strcpy(uVar24 + 0xd,pcVar3);
            puVar17 = uStack_2e4;
            *(uVar24 + 0xc) = uVar26;
            uVar10 = uVar20;
            perf_trace_run_bpf_submit(uVar24,piVar28,puVar17,uVar20,1,iStack_2e0,piVar1,0);
            unaff_x26 = uVar24;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar15 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_04 = 0x80030e8;
    uStack_328 = 0x80030e8;
    iVar11 = sp_el0;
    iStack_338 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar15 + 0x48);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uVar26 = uVar13;
    uVar24 = uVar10;
    ppuStack_330 = &ppuStack_2d0;
    uStack_320 = uVar12;
    pcStack_310 = pcVar3;
    piStack_308 = piVar1;
    uStack_300 = uVar27;
    uStack_2f8 = uVar20;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar24 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar4 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar4 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar4;
        auVar32._0_8_ = iVar15;
        iVar9 = strlen(pcVar4);
        uVar26 = iVar9 + 1;
        uVar13 = uVar26;
        puVar16 = uVar26 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_368,iVar15);
        auVar7._8_8_ = pcVar4;
        auVar7._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar26 * 0x10000 | 0x14;
            strcpy(iVar11 + 0x14,pcVar4);
            *(iVar11 + 0xc) = puVar17;
            *(iVar11 + 0x10) = uVar10;
            trace_event_buffer_commit(&uStack_368);
            auVar32 = auVar7;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_338) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar20 = auVar30._0_8_;
    *extraout_x18_05 = sym.perf_trace_rpmh_switch_channel;
    pcStack_3c8 = sym.perf_trace_rpmh_switch_channel;
    pcStack_3a8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_3d8 = *(iVar11 + 0x5e0);
    uVar23 = uVar24 & 0xffffffff;
    uVar25 = puVar16 & 0xffffffff;
    iStack_3e0 = 0;
    uStack_3e4 = 0;
    puVar18 = puVar16;
    uVar27 = uVar24;
    ppuStack_3d0 = &ppuStack_330;
    iStack_3c0 = iVar14;
    uStack_3b0 = unaff_x26;
    piStack_3a0 = piVar28;
    uStack_398 = uVar13;
    uStack_390 = auVar32._8_8_;
    uStack_388 = auVar32._0_8_;
    uStack_380 = puVar17 & 0xffffffff;
    uStack_378 = uVar10 & 0xffffffff;
    uVar12 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar18 = &uStack_3e4;
        pcVar29 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar29,&iStack_3e0);
        if (iVar11 != 0) {
            uVar10 = _trace_event_raw_init & 0x3f;
            *(iStack_3e0 + 0xe8) = &ppuStack_3d0;
            *(iStack_3e0 + 0xf8) = auStack_3f0;
            *(iStack_3e0 + 0x100) = ~(-1L << uVar10) & 0x8003204;
            *(iStack_3e0 + 0x108) = 5;
            *(iVar11 + 8) = uVar12 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar18 = uStack_3e4;
            *(iVar11 + 0xc) = puVar16;
            *(iVar11 + 0x10) = uVar24;
            uVar27 = uVar20;
            perf_trace_run_bpf_submit(iVar11,pcVar29,puVar18,uVar20,1,iStack_3e0,piVar28,0);
            iVar14 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_3d8) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar15 = auVar33._0_8_;
    uVar19 = uVar27;
    uVar6 = tpidr_el2;
    *extraout_x18_06 = 0x800337c;
    uStack_428 = 0x800337c;
    iVar11 = sp_el0;
    iStack_438 = *(iVar11 + 0x5e0);
    uVar10 = puVar18 & 0xffffffff;
    uVar24 = *(iVar15 + 0x48);
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_468 = 0;
    uStack_460 = 0;
    uVar26 = uVar24;
    uVar21 = uVar19;
    ppuStack_430 = &ppuStack_3d0;
    pcStack_420 = pcVar4;
    piStack_410 = piVar28;
    uStack_408 = uVar25;
    uStack_400 = uVar23;
    uStack_3f8 = uVar20;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar18;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar26 >> 6 & 1) != 0) ||
           (((uVar26 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar4 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar4 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar4;
    auVar33._0_8_ = iVar15;
    iVar9 = strlen(pcVar4);
    uVar26 = iVar9 + 1;
    uVar24 = uVar26;
    puVar16 = uVar26 + 0x14;
    iVar11 = trace_event_buffer_reserve(&uStack_468,iVar15);
    auVar8._8_8_ = pcVar4;
    auVar8._0_8_ = iVar11;
    if (iVar11 != 0) {
        uVar2 = puVar18 & 1;
        uVar10 = uVar2;
        *(iVar11 + 8) = uVar26 * 0x10000 | 0x14;
        strcpy(iVar11 + 0x14,pcVar4);
        *(iVar11 + 0xc) = uVar2;
        *(iVar11 + 0x10) = uVar19;
        trace_event_buffer_commit(&uStack_468);
        auVar33 = auVar8;
    }
code_r0x08003468:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_438) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar15 = auVar30._0_8_;
    *extraout_x18_07 = sym.perf_trace_rpmh_drv_enable;
    pcStack_4c8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_4b0 = sym.perf_trace_rpmh_switch_channel;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_4d8 = *(iVar11 + 0x5e0);
    iStack_4e0 = 0;
    uStack_4e4 = 0;
    puVar17 = puVar16;
    ppuStack_4d0 = &ppuStack_430;
    iStack_4c0 = iVar14;
    pcStack_4a8 = pcVar29;
    uStack_4a0 = uVar12;
    uStack_498 = uVar24;
    uStack_490 = auVar33._8_8_;
    uStack_488 = auVar33._0_8_;
    uStack_480 = uVar10;
    uStack_478 = uVar27 & 0xffffffff;
    iVar9 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(iVar15 + 0x78);
    if ((*(iVar15 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_4e4;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar5,&iStack_4e0,puVar17);
        if (iVar11 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_4e0 + 0xe8) = &ppuStack_4d0;
            *(iStack_4e0 + 0xf8) = auStack_4f0;
            *(iStack_4e0 + 0x100) = ~(-1L << uVar20) & 0x80034a0;
            *(iStack_4e0 + 0x108) = 5;
            *(iVar11 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar17 = uStack_4e4;
            *(iVar11 + 0xc) = puVar16 & 1;
            *(iVar11 + 0x10) = uVar21;
            perf_trace_run_bpf_submit(iVar11,iVar5,puVar17,iVar15,1,iStack_4e0,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_4d8) {
        auVar30 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_08 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar30._0_8_,auVar30._8_8_,puVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002608 (size 8) =====

void sym.__bpf_trace_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt(ulong param_1,ulong param_2,uint param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3);
    return;
}


// ===== sym.trace_raw_output_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002610 (size 8) =====

void sym.trace_raw_output_rpmh_drv_enable.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
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
        trace_event_printf(param_1,"%s: drv enable: %d ret: %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002618 (size 8) =====

void sym.trace_raw_output_rpmh_solver_set.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
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
        trace_event_printf(param_1,"%s: solver mode set: %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002620 (size 8) =====

void sym.trace_raw_output_rpmh_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
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
        trace_event_printf(param_1,"%s: ack: tcs-m: %d addr: %#x data: %#x\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002628 (size 8) =====

void sym.trace_raw_output_rpmh_switch_channel.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
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
        trace_event_printf(param_1,"%s: channel switched to: %d ret: %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt @ 0x08002630 (size 8) =====

void sym.trace_raw_output_rpmh_send_msg.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt
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
        trace_event_printf(param_1,"%s: send-msg: tcs(m): %d cmd(n): %d msgid: %#x addr: %#x data: %#x complete: %d\n"
                           ,iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x14),*(iVar2 + 0x18),
                           *(iVar2 + 0x1c),*(iVar2 + 0x20));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.rpmh_write_async.cfi_jt @ 0x08002638 (size 8) =====

ulong sym.rpmh_write_async.cfi_jt(int64_t param_1,uint32_t param_2,int64_t param_3,uint32_t param_4)

{
    char cVar1;
    ulong uVar2;
    uint32_t *arg3;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        if ((param_2 == 2) && (iVar3 = *(*(param_1 + 0x60) + 0x98), (*(iVar3 + 0x348) & 1) != 0)) {
            _raw_spin_lock(iVar3 + 0x340);
            cVar1 = *(iVar3 + 0x345);
            _raw_spin_unlock(iVar3 + 0x340);
            if (cVar1 != '\0') {
                return 0xfffffff0;
            }
        }
        arg3 = kmem_cache_alloc_trace(_event_triggers_call,0xb20,0xf0);
        if (arg3 == NULL) {
            uVar2 = 0xfffffff4;
        }
        else {
            *(arg3 + 0x3a) = 1;
            if ((param_3 == 0) || (param_4 - 0x11 < 0xfffffff0)) {
                kfree(arg3);
                uVar2 = 0xffffffea;
            }
            else {
                memcpy(arg3 + 6,param_3,param_4 * 0xc);
                *arg3 = param_2;
                *(arg3 + 4) = arg3 + 6;
                arg3[2] = param_4;
                uVar2 = sym.__rpmh_write(param_1,param_2,arg3);
            }
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.rpmh_write.cfi_jt @ 0x08002640 (size 8) =====

uint64_t sym.rpmh_write.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4)

{
    uint32_t uVar1;
    char cVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t extraout_x1;
    uint32_t *arg3;
    int iVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t *piVar13;
    uint32_t *puVar14;
    int64_t iVar15;
    ulong *puVar16;
    int64_t iVar17;
    uint *puVar18;
    uint32_t uVar19;
    int64_t iVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uchar auVar22 [12];
    ulong uStack_178;
    ulong uStack_170;
    ulong ***pppuStack_168;
    ulong ***pppuStack_160;
    uint32_t auStack_158 [4];
    ulong *puStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong *puStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    uVar11 = param_4 >> 0x20;
    iVar4 = param_4;
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    puStack_80 = &uStack_178;
    iStack_68 = *(iVar12 + 0x5e0);
    pppuStack_168 = &pppuStack_168;
    uStack_88 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    auStack_158[1] = 1;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    auStack_158[2] = 0;
    auStack_158[3] = 0;
    uStack_140 = 0;
    uStack_70 = 0;
    arg3 = param_3;
    iVar10 = iVar4;
    pppuStack_160 = pppuStack_168;
    auStack_158[0] = param_2;
    puStack_148 = &uStack_140;
    iStack_78 = param_1;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar12 = *(*(param_1 + 0x60) + 0x98);
        if ((param_2 == 2) && ((*(iVar12 + 0x348) & 1) != 0)) {
            _raw_spin_lock(iVar12 + 0x340);
            cVar2 = *(iVar12 + 0x345);
            _raw_spin_unlock(iVar12 + 0x340);
            if (cVar2 == '\0') goto code_r0x08007108;
            uVar7 = 0xfffffff0;
        }
        else {
code_r0x08007108:
            uVar7 = 0xffffffea;
            if ((param_3 != NULL) && (0xffffffef < iVar4 - 0x11U)) {
                memcpy(&uStack_140,param_3,(param_4 & 0xffffffff) * 0xc);
                arg3 = auStack_158;
                auStack_158[2] = iVar4;
                auStack_158[0] = param_2;
                puStack_148 = &uStack_140;
                uVar7 = sym.__rpmh_write(param_1,param_2,arg3);
                if (uVar7 == 0) {
                    iVar4 = wait_for_completion_timeout(&uStack_178,0x9c4);
                    if (iVar4 != 0) goto code_r0x0800707c;
                    sym.rpmh_rsc_debug(iVar12,&uStack_178);
                    uVar7 = 0xffffff92;
                }
            }
        }
    }
    else {
code_r0x0800707c:
        uVar7 = 0;
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    auVar22 = __stack_chk_fail(uVar7);
    iVar4 = auVar22._8_4_;
    *extraout_x18 = sym.rpmh_write_batch;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        puVar14 = CONCAT44(uVar11,iVar10);
        iVar12 = *(*(auVar22._0_8_ + 0x60) + 0x98);
        if ((iVar4 == 2) && ((*(iVar12 + 0x348) & 1) != 0)) {
            _raw_spin_lock(iVar12 + 0x340);
            cVar2 = *(iVar12 + 0x345);
            _raw_spin_unlock(iVar12 + 0x340);
            if (cVar2 != '\0') {
                uVar5 = 0xfffffff0;
                goto code_r0x080071ac;
            }
        }
        uVar5 = 0xffffffea;
        if ((arg3 == NULL) || (puVar14 == NULL)) goto code_r0x080071ac;
        uVar7 = 0xffffffff;
        do {
            uVar1 = uVar7 + 1;
            uVar7 = uVar1;
        } while (puVar14[uVar1] != 0);
        if (uVar1 == 0) {
            uVar5 = 0xffffffea;
            goto code_r0x080071ac;
        }
        piVar8 = __kmalloc(uVar1 * 0x110 + 0x20,0xb20);
        if (piVar8 == NULL) {
            uVar5 = 0xfffffff4;
            goto code_r0x080071ac;
        }
        *(piVar8 + 2) = uVar1;
        piVar8[3] = piVar8 + 4;
        if (0 < uVar1) {
            piVar13 = piVar8 + 7;
            do {
                uVar5 = *puVar14;
                uVar21 = uVar5;
                if ((arg3 != NULL) && (0xffffffef < uVar5 - 0x11)) {
                    memcpy(piVar13,arg3,uVar21 * 0xc);
                    *(piVar13 + -2) = uVar5;
                    uVar21 = *puVar14;
                    *(piVar13 + -3) = iVar4;
                    piVar13[-1] = piVar13;
                }
                arg3 = arg3 + uVar21 * 3;
                uVar7 = uVar7 - 1;
                puVar14 = puVar14 + 1;
                piVar13 = piVar13 + 0x1e;
            } while (uVar7 != 0);
        }
        if (iVar4 == 2) {
            uVar5 = sym.rpmh_rsc_get_channel(iVar12);
            iVar20 = extraout_x1;
            if (-1 < uVar5) {
                if (uVar1 < 1) {
                    uVar19 = 0;
                    uVar5 = 0;
                }
                else {
                    uVar19 = 0;
                    iVar20 = 0;
                    iVar15 = uVar1 * 0xf0;
                    do {
                        puVar18 = piVar8 + iVar15 + 0x20;
                        *puVar18 = 0;
                        __init_swait_queue_head(piVar8 + iVar15 + 0x28,"&x->wait",obj.init_completion.__key);
                        *(piVar8 + iVar20 + 0xf8) = puVar18;
                        uVar6 = sym.rpmh_rsc_send_data(iVar12,piVar8 + iVar20 + 0x20,uVar5);
                        if (uVar6 != 0) {
                            _printk(0x800129e,uVar6,**(piVar8 + iVar20 + 0x30));
                            uVar5 = uVar6;
                            goto code_r0x080073cc;
                        }
                        iVar20 = iVar20 + 0xf0;
                        uVar19 = uVar19 + 1;
                        iVar15 = iVar15 + 0x20;
                    } while (uVar1 * 0xf0 - iVar20 != 0);
                    uVar5 = 0;
                    uVar19 = uVar1;
                }
code_r0x080073cc:
                iVar20 = 0x9c4;
                iVar15 = uVar19 << 5;
                while (iVar17 = iVar15 + -0x20, iVar17 != -0x20) {
                    iVar20 = wait_for_completion_timeout(piVar8 + iVar15 + uVar1 * 0xf0);
                    iVar15 = iVar17;
                    if (iVar20 == 0) {
                        sym.rpmh_rsc_debug(iVar12,piVar8 + iVar17 + uVar1 * 0xf0 + 0x20);
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x800741c);
                        (*pcVar3)();
                    }
                }
            }
            kfree(piVar8,iVar20);
            goto code_r0x080071ac;
        }
        uVar9 = _raw_spin_lock_irqsave(iVar12 + 0x340);
        puVar16 = *(iVar12 + 0x358);
        uVar7 = __list_add_valid(piVar8,puVar16,iVar12 + 0x350);
        if ((uVar7 & 1) != 0) {
            *(iVar12 + 0x358) = piVar8;
            *piVar8 = iVar12 + 0x350;
            piVar8[1] = puVar16;
            *puVar16 = piVar8;
        }
        *(iVar12 + 0x344) = 1;
        _raw_spin_unlock_irqrestore(iVar12 + 0x340,uVar9);
    }
    uVar5 = 0;
code_r0x080071ac:
    return uVar5;
}


// ===== sym.rpmh_update_fast_path.cfi_jt @ 0x08002648 (size 8) =====

uint64_t sym.rpmh_update_fast_path.cfi_jt(int64_t param_1,ulong param_2,uint param_3,uint32_t param_4)

{
    uint32_t arg4;
    uint64_t uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_50 = 0;
    uStack_48 = 0;
    iVar2 = *(*(param_1 + 0x60) + 0x98);
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        arg4 = sym.rpmh_rsc_get_channel(iVar2);
        uVar1 = arg4;
        if (-1 < arg4) {
            uStack_50 = uStack_50 & 0xffffffff;
            uStack_48 = CONCAT44(uStack_48._4_4_,param_3);
            uStack_40 = param_2;
            uVar1 = sym.rpmh_rsc_update_fast_path(iVar2,&uStack_50,param_4,arg4);
            uVar1 = uVar1 & 0xffffffff;
        }
    }
    else {
        uVar1 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.rpmh_get_device;
    uVar1 = sym.rpmh_rsc_get_device(auVar3._0_8_,auVar3._8_8_);
    return uVar1;
}


// ===== sym.__traceiter_rpmh_tx_done @ 0x08002650 (size 112) =====

ulong sym.__traceiter_rpmh_tx_done(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8007cf0 != NULL) {
        piVar1 = *0x8007cf0;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_rpmh_send_msg @ 0x080026c8 (size 136) =====

ulong sym.__traceiter_rpmh_send_msg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8007d38 != NULL) {
        piVar1 = *0x8007d38;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff,in_w4);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_rpmh_solver_set @ 0x08002758 (size 104) =====

ulong sym.__traceiter_rpmh_solver_set(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8007d80 != NULL) {
        piVar1 = *0x8007d80;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_rpmh_switch_channel @ 0x080027c8 (size 112) =====

ulong sym.__traceiter_rpmh_switch_channel(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8007dc8 != NULL) {
        piVar1 = *0x8007dc8;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_rpmh_drv_enable @ 0x08002840 (size 112) =====

ulong sym.__traceiter_rpmh_drv_enable(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8007e10 != NULL) {
        piVar1 = *0x8007e10;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 1,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_rpmh_tx_done @ 0x080028b8 (size 296) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08002dbc)
//WARNING: Removing unreachable block (ram,0x08002ad4)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_tx_done(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    uint uVar19;
    uint64_t uVar20;
    uint in_w4;
    uint uVar21;
    uint *in_x5;
    uint *puVar22;
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
    uint64_t uVar23;
    uint64_t uVar24;
    uint64_t uVar25;
    uint32_t uVar26;
    uint64_t uVar27;
    uint64_t unaff_x24;
    int64_t *piVar28;
    code *pcVar29;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auStack_4f0 [12];
    uint32_t uStack_4e4;
    int64_t iStack_4e0;
    int64_t iStack_4d8;
    ulong **ppuStack_4d0;
    code *pcStack_4c8;
    int64_t iStack_4c0;
    code *pcStack_4b0;
    code *pcStack_4a8;
    ulong uStack_4a0;
    uint64_t uStack_498;
    ulong uStack_490;
    ulong uStack_488;
    uint64_t uStack_480;
    uint64_t uStack_478;
    ulong uStack_468;
    ulong uStack_460;
    ulong uStack_458;
    ulong uStack_450;
    ulong uStack_448;
    ulong uStack_440;
    int64_t iStack_438;
    ulong **ppuStack_430;
    ulong uStack_428;
    char *pcStack_420;
    int64_t *piStack_410;
    uint64_t uStack_408;
    uint64_t uStack_400;
    uint64_t uStack_3f8;
    uchar auStack_3f0 [12];
    uint32_t uStack_3e4;
    int64_t iStack_3e0;
    int64_t iStack_3d8;
    ulong **ppuStack_3d0;
    code *pcStack_3c8;
    int64_t iStack_3c0;
    uint64_t uStack_3b0;
    code *pcStack_3a8;
    int64_t *piStack_3a0;
    uint64_t uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    ulong uStack_328;
    ulong uStack_320;
    char *pcStack_310;
    int64_t *piStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uchar auStack_2f0 [12];
    uint32_t uStack_2e4;
    int64_t iStack_2e0;
    int64_t iStack_2d8;
    ulong **ppuStack_2d0;
    code *pcStack_2c8;
    uint64_t uStack_2c0;
    char *pcStack_2b8;
    int64_t *piStack_2b0;
    uint64_t uStack_2a8;
    uint64_t uStack_2a0;
    ulong uStack_298;
    ulong uStack_290;
    uint64_t uStack_288;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    ulong uStack_258;
    ulong uStack_250;
    int64_t iStack_248;
    ulong **ppuStack_240;
    ulong uStack_238;
    uint64_t uStack_230;
    code *pcStack_228;
    uint *puStack_220;
    uint64_t uStack_218;
    uchar auStack_210 [8];
    uint uStack_208;
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    code *pcStack_1e8;
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
    uint64_t uStack_130;
    char *pcStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    uint *puStack_f0;
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
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar26 = *(arg1 + 0x48);
    uVar20 = arg4;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = arg3;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(arg1), (uVar10 & 1) == 0))))
        goto code_r0x08002934;
    }
    else {
code_r0x08002934:
        pcVar1 = "(null)";
        if (arg2 != 0) {
            pcVar1 = arg2;
        }
        iVar9 = strlen(pcVar1);
        puVar16 = iVar9 + 1 + 0x18;
        iVar11 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x18;
            strcpy(iVar11 + 0x18,pcVar1);
            *(iVar11 + 0xc) = arg3;
            *(iVar11 + 0x10) = **(arg4 + 0x10);
            *(iVar11 + 0x14) = *(*(arg4 + 0x10) + 4);
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar10 = auVar30._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_tx_done;
    pcStack_d8 = sym.perf_trace_rpmh_tx_done;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar1 = auVar30._8_8_;
    }
    iStack_e8 = *(iVar11 + 0x5e0);
    uVar24 = puVar16 & 0xffffffff;
    puStack_f0 = NULL;
    uStack_f4 = 0;
    puVar17 = puVar16;
    uVar27 = uVar20;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar12 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_f4;
        unaff_x24 = (uVar12 + 0x24U & 0xfffffff8) - 4;
        uVar13 = perf_trace_buf_alloc(unaff_x24,&puStack_f0);
        if (uVar13 != 0) {
            uVar27 = _trace_event_raw_init & 0x3f;
            *(puStack_f0 + 0x3a) = &puStack_e0;
            *(puStack_f0 + 0x3e) = auStack_100;
            *(puStack_f0 + 0x40) = ~(-1L << uVar27) & 0x80029e0;
            *(puStack_f0 + 0x42) = 5;
            *(uVar13 + 8) = uVar12 * 0x10000 + 0x10018;
            strcpy(uVar13 + 0x18,pcVar1);
            *(uVar13 + 0xc) = puVar16;
            puVar17 = uStack_f4;
            in_w4 = 1;
            *(uVar13 + 0x10) = **(uVar20 + 0x10);
            *(uVar13 + 0x14) = *(*(uVar20 + 0x10) + 4);
            uVar27 = uVar10;
            in_x5 = puStack_f0;
            perf_trace_run_bpf_submit(uVar13,unaff_x24);
            unaff_x26 = uVar13;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar14 = auVar30._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_00 = 0x8002b70;
    uStack_148 = 0x8002b70;
    iVar11 = sp_el0;
    iStack_158 = *(iVar11 + 0x5e0);
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uVar26 = *(iVar14 + 0x48);
    uVar13 = uVar27;
    puVar22 = in_x5;
    uVar21 = in_w4;
    ppuStack_150 = &puStack_e0;
    uStack_140 = uVar12;
    uStack_130 = unaff_x24;
    pcStack_128 = pcVar1;
    piStack_120 = piVar28;
    uStack_118 = uVar24;
    uStack_110 = uVar20;
    uStack_108 = uVar10;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar14), (uVar20 & 1) == 0))))
        goto code_r0x08002c04;
    }
    else {
code_r0x08002c04:
        pcVar1 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar1 = auVar30._8_8_;
        }
        iVar9 = strlen(pcVar1);
        puVar16 = iVar9 + 1 + 0x24;
        iVar11 = trace_event_buffer_reserve(&uStack_188,iVar14);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x21;
            strcpy(iVar11 + 0x21,pcVar1);
            *(iVar11 + 0xc) = puVar17;
            *(iVar11 + 0x10) = uVar27;
            *(iVar11 + 0x14) = in_w4;
            *(iVar11 + 0x18) = *in_x5;
            *(iVar11 + 0x1c) = in_x5[1];
            *(iVar11 + 0x20) = in_x5[2] != 0;
            trace_event_buffer_commit(&uStack_188);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_158) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar20 = auVar30._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_send_msg;
    pcStack_1e8 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar1 = auVar30._8_8_;
    }
    iStack_1f8 = *(iVar11 + 0x5e0);
    uVar27 = uVar13 & 0xffffffff;
    iStack_200 = 0;
    uStack_204 = 0;
    puVar17 = puVar16;
    uVar10 = uVar13;
    uStack_208 = uVar21;
    ppuStack_1f0 = &ppuStack_150;
    iVar14 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_204;
        unaff_x26 = (iVar14 + 0x30U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(unaff_x26,&iStack_200);
        if (iVar11 != 0) {
            uVar10 = _trace_event_raw_init & 0x3f;
            *(iStack_200 + 0xe8) = &ppuStack_1f0;
            *(iStack_200 + 0xf8) = auStack_210;
            *(iStack_200 + 0x100) = ~(-1L << uVar10) & 0x8002cc0;
            *(iStack_200 + 0x108) = 5;
            *(iVar11 + 8) = iVar14 * 0x10000 + 0x10021;
            strcpy(iVar11 + 0x21,pcVar1);
            puVar17 = uStack_204;
            *(iVar11 + 0xc) = puVar16;
            *(iVar11 + 0x10) = uVar13;
            *(iVar11 + 0x14) = uStack_208;
            *(iVar11 + 0x18) = *puVar22;
            *(iVar11 + 0x1c) = puVar22[1];
            *(iVar11 + 0x20) = puVar22[2] != 0;
            uVar10 = uVar20;
            perf_trace_run_bpf_submit(iVar11,unaff_x26,puVar17,uVar20,1,iStack_200,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar15 = auVar30._0_8_;
    uVar12 = tpidr_el2;
    *extraout_x18_02 = 0x8002e64;
    uStack_238 = 0x8002e64;
    pcStack_228 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    uVar24 = puVar17 & 0xffffffff;
    iStack_248 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar15 + 0x48);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uVar26 = uVar13;
    ppuStack_240 = &ppuStack_1f0;
    uStack_230 = uVar27;
    puStack_220 = puVar22;
    uStack_218 = uVar20;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar18 = puVar17;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar10 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar4 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar4 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar4;
        auVar30._0_8_ = iVar15;
        iVar9 = strlen(pcVar4);
        uVar26 = iVar9 + 1;
        uVar13 = uVar26;
        puVar18 = uVar26 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_278,iVar15);
        auVar31._8_8_ = pcVar4;
        auVar31._0_8_ = iVar11;
        if (iVar11 != 0) {
            uVar3 = puVar17 & 1;
            uVar24 = uVar3;
            *(iVar11 + 8) = uVar26 * 0x10000 | 0xd;
            strcpy(iVar11 + 0xd,pcVar4);
            *(iVar11 + 0xc) = uVar3;
            trace_event_buffer_commit(&uStack_278);
            auVar30 = auVar31;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_248) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar20 = auVar31._0_8_;
    *extraout_x18_03 = sym.perf_trace_rpmh_solver_set;
    pcStack_2c8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar4 = auVar31._8_8_;
    }
    iStack_2d8 = *(iVar11 + 0x5e0);
    pcVar29 = sym.perf_trace_rpmh_solver_set;
    uVar27 = puVar18 & 0xffffffff;
    iStack_2e0 = 0;
    uStack_2e4 = 0;
    puVar17 = puVar18;
    ppuStack_2d0 = &ppuStack_240;
    uStack_2c0 = unaff_x26;
    pcStack_2b8 = pcVar1;
    piStack_2b0 = piVar28;
    uStack_2a8 = puVar16 & 0xffffffff;
    uStack_2a0 = uVar13;
    uStack_298 = auVar30._8_8_;
    uStack_290 = auVar30._0_8_;
    uStack_288 = uVar24;
    uVar12 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar2 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar17 = &uStack_2e4;
        piVar28 = (uVar12 + 0x1cU & 0xfffffff8) - 4;
        uVar24 = perf_trace_buf_alloc(piVar28,&iStack_2e0);
        if (uVar24 != 0) {
            uVar10 = _trace_event_raw_init & 0x3f;
            *(iStack_2e0 + 0xe8) = &ppuStack_2d0;
            uVar26 = puVar18 & 1;
            uVar27 = uVar26;
            *(iStack_2e0 + 0xf8) = auStack_2f0;
            *(iStack_2e0 + 0x100) = ~(-1L << uVar10) & 0x8002f78;
            *(iStack_2e0 + 0x108) = 5;
            *(uVar24 + 8) = uVar12 * 0x10000 + 0x1000d;
            strcpy(uVar24 + 0xd,pcVar4);
            puVar17 = uStack_2e4;
            *(uVar24 + 0xc) = uVar26;
            uVar10 = uVar20;
            perf_trace_run_bpf_submit(uVar24,piVar28,puVar17,uVar20,1,iStack_2e0,piVar2,0);
            unaff_x26 = uVar24;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar15 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_04 = 0x80030e8;
    uStack_328 = 0x80030e8;
    iVar11 = sp_el0;
    iStack_338 = *(iVar11 + 0x5e0);
    uVar13 = *(iVar15 + 0x48);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uVar26 = uVar13;
    uVar24 = uVar10;
    ppuStack_330 = &ppuStack_2d0;
    uStack_320 = uVar12;
    pcStack_310 = pcVar4;
    piStack_308 = piVar2;
    uStack_300 = uVar27;
    uStack_2f8 = uVar20;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar24 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar1 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar1 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar1;
        auVar32._0_8_ = iVar15;
        iVar9 = strlen(pcVar1);
        uVar26 = iVar9 + 1;
        uVar13 = uVar26;
        puVar16 = uVar26 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_368,iVar15);
        auVar7._8_8_ = pcVar1;
        auVar7._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar26 * 0x10000 | 0x14;
            strcpy(iVar11 + 0x14,pcVar1);
            *(iVar11 + 0xc) = puVar17;
            *(iVar11 + 0x10) = uVar10;
            trace_event_buffer_commit(&uStack_368);
            auVar32 = auVar7;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_338) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar20 = auVar30._0_8_;
    *extraout_x18_05 = sym.perf_trace_rpmh_switch_channel;
    pcStack_3c8 = sym.perf_trace_rpmh_switch_channel;
    pcStack_3a8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar1 = auVar30._8_8_;
    }
    iStack_3d8 = *(iVar11 + 0x5e0);
    uVar23 = uVar24 & 0xffffffff;
    uVar25 = puVar16 & 0xffffffff;
    iStack_3e0 = 0;
    uStack_3e4 = 0;
    puVar18 = puVar16;
    uVar27 = uVar24;
    ppuStack_3d0 = &ppuStack_330;
    iStack_3c0 = iVar14;
    uStack_3b0 = unaff_x26;
    piStack_3a0 = piVar28;
    uStack_398 = uVar13;
    uStack_390 = auVar32._8_8_;
    uStack_388 = auVar32._0_8_;
    uStack_380 = puVar17 & 0xffffffff;
    uStack_378 = uVar10 & 0xffffffff;
    uVar12 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar20 + 0x78);
    if ((*(uVar20 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar18 = &uStack_3e4;
        pcVar29 = (uVar12 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar29,&iStack_3e0);
        if (iVar11 != 0) {
            uVar10 = _trace_event_raw_init & 0x3f;
            *(iStack_3e0 + 0xe8) = &ppuStack_3d0;
            *(iStack_3e0 + 0xf8) = auStack_3f0;
            *(iStack_3e0 + 0x100) = ~(-1L << uVar10) & 0x8003204;
            *(iStack_3e0 + 0x108) = 5;
            *(iVar11 + 8) = uVar12 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar1);
            puVar18 = uStack_3e4;
            *(iVar11 + 0xc) = puVar16;
            *(iVar11 + 0x10) = uVar24;
            uVar27 = uVar20;
            perf_trace_run_bpf_submit(iVar11,pcVar29,puVar18,uVar20,1,iStack_3e0,piVar28,0);
            iVar14 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_3d8) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar15 = auVar33._0_8_;
    uVar19 = uVar27;
    uVar6 = tpidr_el2;
    *extraout_x18_06 = 0x800337c;
    uStack_428 = 0x800337c;
    iVar11 = sp_el0;
    iStack_438 = *(iVar11 + 0x5e0);
    uVar10 = puVar18 & 0xffffffff;
    uVar24 = *(iVar15 + 0x48);
    uStack_448 = 0;
    uStack_440 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_468 = 0;
    uStack_460 = 0;
    uVar26 = uVar24;
    uVar21 = uVar19;
    ppuStack_430 = &ppuStack_3d0;
    pcStack_420 = pcVar1;
    piStack_410 = piVar28;
    uStack_408 = uVar25;
    uStack_400 = uVar23;
    uStack_3f8 = uVar20;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar18;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar15,0);
        }
        if (((uVar26 >> 6 & 1) != 0) ||
           (((uVar26 >> 9 & 1) != 0 && (uVar20 = trace_event_ignore_this_pid(iVar15), (uVar20 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar1 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar1 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar1;
    auVar33._0_8_ = iVar15;
    iVar9 = strlen(pcVar1);
    uVar26 = iVar9 + 1;
    uVar24 = uVar26;
    puVar16 = uVar26 + 0x14;
    iVar11 = trace_event_buffer_reserve(&uStack_468,iVar15);
    auVar8._8_8_ = pcVar1;
    auVar8._0_8_ = iVar11;
    if (iVar11 != 0) {
        uVar3 = puVar18 & 1;
        uVar10 = uVar3;
        *(iVar11 + 8) = uVar26 * 0x10000 | 0x14;
        strcpy(iVar11 + 0x14,pcVar1);
        *(iVar11 + 0xc) = uVar3;
        *(iVar11 + 0x10) = uVar19;
        trace_event_buffer_commit(&uStack_468);
        auVar33 = auVar8;
    }
code_r0x08003468:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_438) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar15 = auVar30._0_8_;
    *extraout_x18_07 = sym.perf_trace_rpmh_drv_enable;
    pcStack_4c8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_4b0 = sym.perf_trace_rpmh_switch_channel;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar1 = auVar30._8_8_;
    }
    iStack_4d8 = *(iVar11 + 0x5e0);
    iStack_4e0 = 0;
    uStack_4e4 = 0;
    puVar17 = puVar16;
    ppuStack_4d0 = &ppuStack_430;
    iStack_4c0 = iVar14;
    pcStack_4a8 = pcVar29;
    uStack_4a0 = uVar12;
    uStack_498 = uVar24;
    uStack_490 = auVar33._8_8_;
    uStack_488 = auVar33._0_8_;
    uStack_480 = uVar10;
    uStack_478 = uVar27 & 0xffffffff;
    iVar9 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(iVar15 + 0x78);
    if ((*(iVar15 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_4e4;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar5,&iStack_4e0,puVar17);
        if (iVar11 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_4e0 + 0xe8) = &ppuStack_4d0;
            *(iStack_4e0 + 0xf8) = auStack_4f0;
            *(iStack_4e0 + 0x100) = ~(-1L << uVar20) & 0x80034a0;
            *(iStack_4e0 + 0x108) = 5;
            *(iVar11 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar1);
            puVar17 = uStack_4e4;
            *(iVar11 + 0xc) = puVar16 & 1;
            *(iVar11 + 0x10) = uVar21;
            perf_trace_run_bpf_submit(iVar11,iVar5,puVar17,iVar15,1,iStack_4e0,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_4d8) {
        auVar30 = __stack_chk_fail();
        uVar12 = tpidr_el2;
        *extraout_x18_08 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar30._0_8_,auVar30._8_8_,puVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_rpmh_tx_done @ 0x080029e0 (size 412) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08002dbc)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_tx_done(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uchar *puVar16;
    uchar *puVar17;
    uchar *puVar18;
    uint uVar19;
    uint in_w4;
    uint uVar20;
    uint *in_x5;
    uint *puVar21;
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
    uint64_t uVar25;
    uint32_t uVar26;
    uint64_t uVar27;
    uint64_t unaff_x24;
    int64_t *piVar28;
    code *pcVar29;
    uint64_t unaff_x26;
    uint64_t unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auStack_470 [12];
    uint32_t uStack_464;
    int64_t iStack_460;
    int64_t iStack_458;
    uchar *puStack_450;
    code *pcStack_448;
    int64_t iStack_440;
    code *pcStack_430;
    code *pcStack_428;
    ulong uStack_420;
    uint64_t uStack_418;
    ulong uStack_410;
    ulong uStack_408;
    uint64_t uStack_400;
    uint64_t uStack_3f8;
    ulong uStack_3e8;
    ulong uStack_3e0;
    ulong uStack_3d8;
    ulong uStack_3d0;
    ulong uStack_3c8;
    ulong uStack_3c0;
    int64_t iStack_3b8;
    uchar *puStack_3b0;
    ulong uStack_3a8;
    char *pcStack_3a0;
    int64_t *piStack_390;
    uint64_t uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    uchar auStack_370 [12];
    uint32_t uStack_364;
    int64_t iStack_360;
    int64_t iStack_358;
    uchar *puStack_350;
    code *pcStack_348;
    int64_t iStack_340;
    uint64_t uStack_330;
    code *pcStack_328;
    int64_t *piStack_320;
    uint64_t uStack_318;
    ulong uStack_310;
    ulong uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    ulong uStack_2e8;
    ulong uStack_2e0;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    int64_t iStack_2b8;
    uchar *puStack_2b0;
    ulong uStack_2a8;
    ulong uStack_2a0;
    char *pcStack_290;
    int64_t *piStack_288;
    uint64_t uStack_280;
    uint64_t uStack_278;
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    uchar *puStack_250;
    code *pcStack_248;
    uint64_t uStack_240;
    char *pcStack_238;
    int64_t *piStack_230;
    uint64_t uStack_228;
    uint64_t uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    uint64_t uStack_208;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    int64_t iStack_1c8;
    uchar *puStack_1c0;
    ulong uStack_1b8;
    uint64_t uStack_1b0;
    code *pcStack_1a8;
    uint *puStack_1a0;
    uint64_t uStack_198;
    uchar auStack_190 [8];
    uint uStack_188;
    uint32_t uStack_184;
    int64_t iStack_180;
    int64_t iStack_178;
    uchar *puStack_170;
    code *pcStack_168;
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
    uint64_t uStack_b0;
    char *pcStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    uint *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (arg2 != NULL) {
        pcVar4 = arg2;
    }
    iStack_68 = *(iVar12 + 0x5e0);
    uVar24 = arg3 & 0xffffffff;
    puStack_70 = NULL;
    uStack_74 = 0;
    puVar16 = arg3;
    uVar15 = arg4;
    uVar10 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar16 = &stack0xffffffffffffff8c;
        unaff_x24 = (uVar10 + 0x24U & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(unaff_x24,&stack0xffffffffffffff90);
        if (uVar11 != 0) {
            uVar22 = -1L << (_trace_event_raw_init & 0x3f);
            *(puStack_70 + 0x3a) = &stack0xffffffffffffffa0;
            *(puStack_70 + 0x3e) = &stack0xffffffffffffff80;
            uVar15 = (~uVar22 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar15 = uVar22 | unaff_x30;
            }
            *(puStack_70 + 0x40) = uVar15;
            *(puStack_70 + 0x42) = 5;
            *(uVar11 + 8) = uVar10 * 0x10000 + 0x10018;
            strcpy(uVar11 + 0x18,pcVar4);
            *(uVar11 + 0xc) = arg3;
            puVar16 = uStack_74;
            in_w4 = 1;
            *(uVar11 + 0x10) = **(arg4 + 0x10);
            *(uVar11 + 0x14) = *(*(arg4 + 0x10) + 4);
            uVar15 = arg1;
            in_x5 = puStack_70;
            perf_trace_run_bpf_submit(uVar11,unaff_x24);
            unaff_x26 = uVar11;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_68) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar13 = auVar30._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18 = 0x8002b70;
    uStack_c8 = 0x8002b70;
    iVar12 = sp_el0;
    iStack_d8 = *(iVar12 + 0x5e0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uVar26 = *(iVar13 + 0x48);
    uVar11 = uVar15;
    puVar21 = in_x5;
    uVar20 = in_w4;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = uVar10;
    uStack_b0 = unaff_x24;
    pcStack_a8 = pcVar4;
    piStack_a0 = piVar28;
    uStack_98 = uVar24;
    iStack_90 = arg4;
    iStack_88 = arg1;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar17 = puVar16;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar24 = trace_event_ignore_this_pid(iVar13), (uVar24 & 1) == 0))))
        goto code_r0x08002c04;
    }
    else {
code_r0x08002c04:
        pcVar4 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar4 = auVar30._8_8_;
        }
        iVar9 = strlen(pcVar4);
        puVar17 = iVar9 + 1 + 0x24;
        iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffef8,iVar13);
        if (iVar12 != 0) {
            *(iVar12 + 8) = (iVar9 + 1) * 0x10000 | 0x21;
            strcpy(iVar12 + 0x21,pcVar4);
            *(iVar12 + 0xc) = puVar16;
            *(iVar12 + 0x10) = uVar15;
            *(iVar12 + 0x14) = in_w4;
            *(iVar12 + 0x18) = *in_x5;
            *(iVar12 + 0x1c) = in_x5[1];
            *(iVar12 + 0x20) = in_x5[2] != 0;
            trace_event_buffer_commit(&stack0xfffffffffffffef8);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar15 = auVar30._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_send_msg;
    pcStack_168 = sym.perf_trace_rpmh_send_msg;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_178 = *(iVar12 + 0x5e0);
    uVar22 = uVar11 & 0xffffffff;
    iStack_180 = 0;
    uStack_184 = 0;
    puVar16 = puVar17;
    uVar24 = uVar11;
    uStack_188 = uVar20;
    puStack_170 = &stack0xffffffffffffff30;
    iVar13 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar16 = &stack0xfffffffffffffe7c;
        unaff_x26 = (iVar13 + 0x30U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(unaff_x26,&stack0xfffffffffffffe80);
        if (iVar12 != 0) {
            uVar24 = _trace_event_raw_init & 0x3f;
            *(iStack_180 + 0xe8) = &stack0xfffffffffffffe90;
            *(iStack_180 + 0xf8) = &stack0xfffffffffffffe70;
            *(iStack_180 + 0x100) = ~(-1L << uVar24) & 0x8002cc0;
            *(iStack_180 + 0x108) = 5;
            *(iVar12 + 8) = iVar13 * 0x10000 + 0x10021;
            strcpy(iVar12 + 0x21,pcVar4);
            puVar16 = uStack_184;
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar11;
            *(iVar12 + 0x14) = uStack_188;
            *(iVar12 + 0x18) = *puVar21;
            *(iVar12 + 0x1c) = puVar21[1];
            *(iVar12 + 0x20) = puVar21[2] != 0;
            uVar24 = uVar15;
            perf_trace_run_bpf_submit(iVar12,unaff_x26,puVar16,uVar15,1,iStack_180,piVar28,0);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_178) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar14 = auVar30._0_8_;
    uVar10 = tpidr_el2;
    *extraout_x18_01 = 0x8002e64;
    uStack_1b8 = 0x8002e64;
    pcStack_1a8 = sym.perf_trace_rpmh_send_msg;
    iVar12 = sp_el0;
    uVar11 = puVar16 & 0xffffffff;
    iStack_1c8 = *(iVar12 + 0x5e0);
    uVar27 = *(iVar14 + 0x48);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uVar26 = uVar27;
    puStack_1c0 = &stack0xfffffffffffffe90;
    uStack_1b0 = uVar22;
    puStack_1a0 = puVar21;
    uStack_198 = uVar15;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar18 = puVar16;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar18 = NULL;
            uVar24 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar14), (uVar15 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar3 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar3 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar3;
        auVar30._0_8_ = iVar14;
        iVar9 = strlen(pcVar3);
        uVar26 = iVar9 + 1;
        uVar27 = uVar26;
        puVar18 = uVar26 + 0x10;
        iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffe08,iVar14);
        auVar31._8_8_ = pcVar3;
        auVar31._0_8_ = iVar12;
        if (iVar12 != 0) {
            uVar2 = puVar16 & 1;
            uVar11 = uVar2;
            *(iVar12 + 8) = uVar26 * 0x10000 | 0xd;
            strcpy(iVar12 + 0xd,pcVar3);
            *(iVar12 + 0xc) = uVar2;
            trace_event_buffer_commit(&stack0xfffffffffffffe08);
            auVar30 = auVar31;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar15 = auVar31._0_8_;
    *extraout_x18_02 = sym.perf_trace_rpmh_solver_set;
    pcStack_248 = sym.perf_trace_rpmh_solver_set;
    iVar12 = sp_el0;
    pcVar3 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar3 = auVar31._8_8_;
    }
    iStack_258 = *(iVar12 + 0x5e0);
    pcVar29 = sym.perf_trace_rpmh_solver_set;
    uVar22 = puVar18 & 0xffffffff;
    iStack_260 = 0;
    uStack_264 = 0;
    puVar16 = puVar18;
    puStack_250 = &stack0xfffffffffffffe40;
    uStack_240 = unaff_x26;
    pcStack_238 = pcVar4;
    piStack_230 = piVar28;
    uStack_228 = puVar17 & 0xffffffff;
    uStack_220 = uVar27;
    uStack_218 = auVar30._8_8_;
    uStack_210 = auVar30._0_8_;
    uStack_208 = uVar11;
    uVar10 = strlen(pcVar3);
    iVar12 = tpidr_el1;
    piVar1 = iVar12 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar16 = &stack0xfffffffffffffd9c;
        piVar28 = (uVar10 + 0x1cU & 0xfffffff8) - 4;
        uVar11 = perf_trace_buf_alloc(piVar28,&stack0xfffffffffffffda0);
        if (uVar11 != 0) {
            uVar24 = _trace_event_raw_init & 0x3f;
            *(iStack_260 + 0xe8) = &stack0xfffffffffffffdb0;
            uVar26 = puVar18 & 1;
            uVar22 = uVar26;
            *(iStack_260 + 0xf8) = &stack0xfffffffffffffd90;
            *(iStack_260 + 0x100) = ~(-1L << uVar24) & 0x8002f78;
            *(iStack_260 + 0x108) = 5;
            *(uVar11 + 8) = uVar10 * 0x10000 + 0x1000d;
            strcpy(uVar11 + 0xd,pcVar3);
            puVar16 = uStack_264;
            *(uVar11 + 0xc) = uVar26;
            uVar24 = uVar15;
            perf_trace_run_bpf_submit(uVar11,piVar28,puVar16,uVar15,1,iStack_260,piVar1,0);
            unaff_x26 = uVar11;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_258) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar14 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x80030e8;
    uStack_2a8 = 0x80030e8;
    iVar12 = sp_el0;
    iStack_2b8 = *(iVar12 + 0x5e0);
    uVar27 = *(iVar14 + 0x48);
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uVar26 = uVar27;
    uVar11 = uVar24;
    puStack_2b0 = &stack0xfffffffffffffdb0;
    uStack_2a0 = uVar10;
    pcStack_290 = pcVar3;
    piStack_288 = piVar1;
    uStack_280 = uVar22;
    uStack_278 = uVar15;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar17 = puVar16;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar17 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) == 0) &&
           (((uVar26 >> 9 & 1) == 0 || (uVar15 = trace_event_ignore_this_pid(iVar14), (uVar15 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar4 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar4 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar4;
        auVar32._0_8_ = iVar14;
        iVar9 = strlen(pcVar4);
        uVar26 = iVar9 + 1;
        uVar27 = uVar26;
        puVar17 = uVar26 + 0x14;
        iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffd18,iVar14);
        auVar7._8_8_ = pcVar4;
        auVar7._0_8_ = iVar12;
        if (iVar12 != 0) {
            *(iVar12 + 8) = uVar26 * 0x10000 | 0x14;
            strcpy(iVar12 + 0x14,pcVar4);
            *(iVar12 + 0xc) = puVar16;
            *(iVar12 + 0x10) = uVar24;
            trace_event_buffer_commit(&stack0xfffffffffffffd18);
            auVar32 = auVar7;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_2b8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar15 = auVar30._0_8_;
    *extraout_x18_04 = sym.perf_trace_rpmh_switch_channel;
    pcStack_348 = sym.perf_trace_rpmh_switch_channel;
    pcStack_328 = sym.perf_trace_rpmh_solver_set;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_358 = *(iVar12 + 0x5e0);
    uVar23 = uVar11 & 0xffffffff;
    uVar25 = puVar17 & 0xffffffff;
    iStack_360 = 0;
    uStack_364 = 0;
    puVar18 = puVar17;
    uVar22 = uVar11;
    puStack_350 = &stack0xfffffffffffffd50;
    iStack_340 = iVar13;
    uStack_330 = unaff_x26;
    piStack_320 = piVar28;
    uStack_318 = uVar27;
    uStack_310 = auVar32._8_8_;
    uStack_308 = auVar32._0_8_;
    uStack_300 = puVar16 & 0xffffffff;
    uStack_2f8 = uVar24 & 0xffffffff;
    uVar10 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(uVar15 + 0x78);
    if ((*(uVar15 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar18 = &stack0xfffffffffffffc9c;
        pcVar29 = (uVar10 + 0x20U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(pcVar29,&stack0xfffffffffffffca0);
        if (iVar12 != 0) {
            uVar24 = _trace_event_raw_init & 0x3f;
            *(iStack_360 + 0xe8) = &stack0xfffffffffffffcb0;
            *(iStack_360 + 0xf8) = &stack0xfffffffffffffc90;
            *(iStack_360 + 0x100) = ~(-1L << uVar24) & 0x8003204;
            *(iStack_360 + 0x108) = 5;
            *(iVar12 + 8) = uVar10 * 0x10000 + 0x10014;
            strcpy(iVar12 + 0x14,pcVar4);
            puVar18 = uStack_364;
            *(iVar12 + 0xc) = puVar17;
            *(iVar12 + 0x10) = uVar11;
            uVar22 = uVar15;
            perf_trace_run_bpf_submit(iVar12,pcVar29,puVar18,uVar15,1,iStack_360,piVar28,0);
            iVar13 = iVar12;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_358) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar14 = auVar33._0_8_;
    uVar19 = uVar22;
    uVar6 = tpidr_el2;
    *extraout_x18_05 = 0x800337c;
    uStack_3a8 = 0x800337c;
    iVar12 = sp_el0;
    iStack_3b8 = *(iVar12 + 0x5e0);
    uVar24 = puVar18 & 0xffffffff;
    uVar11 = *(iVar14 + 0x48);
    uStack_3c8 = 0;
    uStack_3c0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    uStack_3e8 = 0;
    uStack_3e0 = 0;
    uVar26 = uVar11;
    uVar20 = uVar19;
    puStack_3b0 = &stack0xfffffffffffffcb0;
    pcStack_3a0 = pcVar4;
    piStack_390 = piVar28;
    uStack_388 = uVar25;
    uStack_380 = uVar23;
    uStack_378 = uVar15;
    if ((uVar26 >> 8 & 1) == 0) {
        puVar16 = puVar18;
        if ((uVar26 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar14,0);
        }
        if (((uVar26 >> 6 & 1) != 0) ||
           (((uVar26 >> 9 & 1) != 0 && (uVar15 = trace_event_ignore_this_pid(iVar14), (uVar15 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar4 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar4 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar4;
    auVar33._0_8_ = iVar14;
    iVar9 = strlen(pcVar4);
    uVar26 = iVar9 + 1;
    uVar11 = uVar26;
    puVar16 = uVar26 + 0x14;
    iVar12 = trace_event_buffer_reserve(&stack0xfffffffffffffc18,iVar14);
    auVar8._8_8_ = pcVar4;
    auVar8._0_8_ = iVar12;
    if (iVar12 != 0) {
        uVar2 = puVar18 & 1;
        uVar24 = uVar2;
        *(iVar12 + 8) = uVar26 * 0x10000 | 0x14;
        strcpy(iVar12 + 0x14,pcVar4);
        *(iVar12 + 0xc) = uVar2;
        *(iVar12 + 0x10) = uVar19;
        trace_event_buffer_commit(&stack0xfffffffffffffc18);
        auVar33 = auVar8;
    }
code_r0x08003468:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_3b8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar14 = auVar30._0_8_;
    *extraout_x18_06 = sym.perf_trace_rpmh_drv_enable;
    pcStack_448 = sym.perf_trace_rpmh_drv_enable;
    pcStack_430 = sym.perf_trace_rpmh_switch_channel;
    iVar12 = sp_el0;
    pcVar4 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar4 = auVar30._8_8_;
    }
    iStack_458 = *(iVar12 + 0x5e0);
    iStack_460 = 0;
    uStack_464 = 0;
    puVar17 = puVar16;
    puStack_450 = &stack0xfffffffffffffc50;
    iStack_440 = iVar13;
    pcStack_428 = pcVar29;
    uStack_420 = uVar10;
    uStack_418 = uVar11;
    uStack_410 = auVar33._8_8_;
    uStack_408 = auVar33._0_8_;
    uStack_400 = uVar24;
    uStack_3f8 = uVar22 & 0xffffffff;
    iVar9 = strlen(pcVar4);
    iVar12 = tpidr_el1;
    piVar28 = iVar12 + *(iVar14 + 0x78);
    if ((*(iVar14 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &stack0xfffffffffffffb9c;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar12 = perf_trace_buf_alloc(iVar5,&stack0xfffffffffffffba0,puVar17);
        if (iVar12 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_460 + 0xe8) = &stack0xfffffffffffffbb0;
            *(iStack_460 + 0xf8) = &stack0xfffffffffffffb90;
            *(iStack_460 + 0x100) = ~(-1L << uVar15) & 0x80034a0;
            *(iStack_460 + 0x108) = 5;
            *(iVar12 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar12 + 0x14,pcVar4);
            puVar17 = uStack_464;
            *(iVar12 + 0xc) = puVar16 & 1;
            *(iVar12 + 0x10) = uVar20;
            perf_trace_run_bpf_submit(iVar12,iVar5,puVar17,iVar14,1,iStack_460,piVar28,0);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) != iStack_458) {
        auVar30 = __stack_chk_fail();
        uVar10 = tpidr_el2;
        *extraout_x18_07 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar30._0_8_,auVar30._8_8_,puVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rpmh_send_msg @ 0x08002b7c (size 324) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08002dbc)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_send_msg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong uVar14;
    uint32_t *puVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint in_w4;
    uint uVar21;
    uint *in_x5;
    uint *puVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar23;
    uint64_t uVar24;
    uint32_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    int64_t *piVar28;
    code *pcVar29;
    uint64_t unaff_x26;
    ulong unaff_x30;
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auVar33 [16];
    uchar auStack_3f0 [12];
    uint32_t uStack_3e4;
    int64_t iStack_3e0;
    int64_t iStack_3d8;
    ulong **ppuStack_3d0;
    code *pcStack_3c8;
    int64_t iStack_3c0;
    code *pcStack_3b0;
    code *pcStack_3a8;
    ulong uStack_3a0;
    uint64_t uStack_398;
    ulong uStack_390;
    ulong uStack_388;
    uint64_t uStack_380;
    uint64_t uStack_378;
    ulong uStack_368;
    ulong uStack_360;
    ulong uStack_358;
    ulong uStack_350;
    ulong uStack_348;
    ulong uStack_340;
    int64_t iStack_338;
    ulong **ppuStack_330;
    ulong uStack_328;
    char *pcStack_320;
    int64_t *piStack_310;
    uint64_t uStack_308;
    uint64_t uStack_300;
    uint64_t uStack_2f8;
    uchar auStack_2f0 [12];
    uint32_t uStack_2e4;
    int64_t iStack_2e0;
    int64_t iStack_2d8;
    ulong **ppuStack_2d0;
    code *pcStack_2c8;
    int64_t iStack_2c0;
    uint64_t uStack_2b0;
    code *pcStack_2a8;
    int64_t *piStack_2a0;
    uint64_t uStack_298;
    ulong uStack_290;
    ulong uStack_288;
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
    ulong uStack_220;
    char *pcStack_210;
    int64_t *piStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    uchar auStack_1f0 [12];
    uint32_t uStack_1e4;
    int64_t iStack_1e0;
    int64_t iStack_1d8;
    ulong **ppuStack_1d0;
    code *pcStack_1c8;
    uint64_t uStack_1c0;
    char *pcStack_1b8;
    int64_t *piStack_1b0;
    uint64_t uStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
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
    uint64_t uStack_130;
    code *pcStack_128;
    uint64_t uStack_118;
    uchar auStack_110 [8];
    uint uStack_108;
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
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uVar25 = *(arg1 + 0x48);
    uVar19 = arg4;
    puVar22 = in_x5;
    uVar21 = in_w4;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = arg3;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar19 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(arg1), (uVar10 & 1) == 0))))
        goto code_r0x08002c04;
    }
    else {
code_r0x08002c04:
        pcVar1 = "(null)";
        if (arg2 != 0) {
            pcVar1 = arg2;
        }
        iVar9 = strlen(pcVar1);
        puVar15 = iVar9 + 1 + 0x24;
        iVar11 = trace_event_buffer_reserve(&uStack_88,arg1);
        if (iVar11 != 0) {
            *(iVar11 + 8) = (iVar9 + 1) * 0x10000 | 0x21;
            strcpy(iVar11 + 0x21,pcVar1);
            *(iVar11 + 0xc) = arg3;
            *(iVar11 + 0x10) = arg4;
            *(iVar11 + 0x14) = in_w4;
            *(iVar11 + 0x18) = *in_x5;
            *(iVar11 + 0x1c) = in_x5[1];
            *(iVar11 + 0x20) = in_x5[2] != 0;
            trace_event_buffer_commit(&uStack_88);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar10 = auVar30._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_send_msg;
    pcStack_e8 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar1 = auVar30._8_8_;
    }
    iStack_f8 = *(iVar11 + 0x5e0);
    uVar26 = uVar19 & 0xffffffff;
    iStack_100 = 0;
    uStack_104 = 0;
    puVar17 = puVar15;
    uVar20 = uVar19;
    uStack_108 = uVar21;
    puStack_f0 = &stack0xffffffffffffffb0;
    iVar12 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_104;
        unaff_x26 = (iVar12 + 0x30U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(unaff_x26,&iStack_100);
        if (iVar11 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_100 + 0xe8) = &puStack_f0;
            *(iStack_100 + 0xf8) = auStack_110;
            *(iStack_100 + 0x100) = ~(-1L << uVar20) & 0x8002cc0;
            *(iStack_100 + 0x108) = 5;
            *(iVar11 + 8) = iVar12 * 0x10000 + 0x10021;
            strcpy(iVar11 + 0x21,pcVar1);
            puVar17 = uStack_104;
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar19;
            *(iVar11 + 0x14) = uStack_108;
            *(iVar11 + 0x18) = *puVar22;
            *(iVar11 + 0x1c) = puVar22[1];
            *(iVar11 + 0x20) = puVar22[2] != 0;
            uVar20 = uVar10;
            perf_trace_run_bpf_submit(iVar11,unaff_x26,puVar17,uVar10,1,iStack_100,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_f8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar13 = auVar30._0_8_;
    uVar14 = tpidr_el2;
    *extraout_x18_00 = 0x8002e64;
    uStack_138 = 0x8002e64;
    pcStack_128 = sym.perf_trace_rpmh_send_msg;
    iVar11 = sp_el0;
    uVar19 = puVar17 & 0xffffffff;
    iStack_148 = *(iVar11 + 0x5e0);
    uVar27 = *(iVar13 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar25 = uVar27;
    ppuStack_140 = &puStack_f0;
    uStack_130 = uVar26;
    uStack_118 = uVar10;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar16 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar16 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar4 = "(null)";
        if (auVar30._8_8_ != NULL) {
            pcVar4 = auVar30._8_8_;
        }
        auVar30._8_8_ = pcVar4;
        auVar30._0_8_ = iVar13;
        iVar9 = strlen(pcVar4);
        uVar25 = iVar9 + 1;
        uVar27 = uVar25;
        puVar16 = uVar25 + 0x10;
        iVar11 = trace_event_buffer_reserve(&uStack_178,iVar13);
        auVar31._8_8_ = pcVar4;
        auVar31._0_8_ = iVar11;
        if (iVar11 != 0) {
            uVar3 = puVar17 & 1;
            uVar19 = uVar3;
            *(iVar11 + 8) = uVar25 * 0x10000 | 0xd;
            strcpy(iVar11 + 0xd,pcVar4);
            *(iVar11 + 0xc) = uVar3;
            trace_event_buffer_commit(&uStack_178);
            auVar30 = auVar31;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_148) {
        return;
    }
    auVar31 = __stack_chk_fail();
    uVar10 = auVar31._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_solver_set;
    pcStack_1c8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar31._8_8_ != NULL) {
        pcVar4 = auVar31._8_8_;
    }
    iStack_1d8 = *(iVar11 + 0x5e0);
    pcVar29 = sym.perf_trace_rpmh_solver_set;
    uVar26 = puVar16 & 0xffffffff;
    iStack_1e0 = 0;
    uStack_1e4 = 0;
    puVar17 = puVar16;
    ppuStack_1d0 = &ppuStack_140;
    uStack_1c0 = unaff_x26;
    pcStack_1b8 = pcVar1;
    piStack_1b0 = piVar28;
    uStack_1a8 = puVar15 & 0xffffffff;
    uStack_1a0 = uVar27;
    uStack_198 = auVar30._8_8_;
    uStack_190 = auVar30._0_8_;
    uStack_188 = uVar19;
    uVar14 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar2 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar17 = &uStack_1e4;
        piVar28 = (uVar14 + 0x1cU & 0xfffffff8) - 4;
        uVar19 = perf_trace_buf_alloc(piVar28,&iStack_1e0);
        if (uVar19 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_1e0 + 0xe8) = &ppuStack_1d0;
            uVar25 = puVar16 & 1;
            uVar26 = uVar25;
            *(iStack_1e0 + 0xf8) = auStack_1f0;
            *(iStack_1e0 + 0x100) = ~(-1L << uVar20) & 0x8002f78;
            *(iStack_1e0 + 0x108) = 5;
            *(uVar19 + 8) = uVar14 * 0x10000 + 0x1000d;
            strcpy(uVar19 + 0xd,pcVar4);
            puVar17 = uStack_1e4;
            *(uVar19 + 0xc) = uVar25;
            uVar20 = uVar10;
            perf_trace_run_bpf_submit(uVar19,piVar28,puVar17,uVar10,1,iStack_1e0,piVar2,0);
            unaff_x26 = uVar19;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1d8) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar13 = auVar32._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_02 = 0x80030e8;
    uStack_228 = 0x80030e8;
    iVar11 = sp_el0;
    iStack_238 = *(iVar11 + 0x5e0);
    uVar27 = *(iVar13 + 0x48);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uVar25 = uVar27;
    uVar19 = uVar20;
    ppuStack_230 = &ppuStack_1d0;
    uStack_220 = uVar14;
    pcStack_210 = pcVar4;
    piStack_208 = piVar2;
    uStack_200 = uVar26;
    uStack_1f8 = uVar10;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar17;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar19 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar25 >> 6 & 1) == 0) &&
           (((uVar25 >> 9 & 1) == 0 || (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar1 = "(null)";
        if (auVar32._8_8_ != NULL) {
            pcVar1 = auVar32._8_8_;
        }
        auVar32._8_8_ = pcVar1;
        auVar32._0_8_ = iVar13;
        iVar9 = strlen(pcVar1);
        uVar25 = iVar9 + 1;
        uVar27 = uVar25;
        puVar15 = uVar25 + 0x14;
        iVar11 = trace_event_buffer_reserve(&uStack_268,iVar13);
        auVar7._8_8_ = pcVar1;
        auVar7._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar25 * 0x10000 | 0x14;
            strcpy(iVar11 + 0x14,pcVar1);
            *(iVar11 + 0xc) = puVar17;
            *(iVar11 + 0x10) = uVar20;
            trace_event_buffer_commit(&uStack_268);
            auVar32 = auVar7;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_238) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar10 = auVar30._0_8_;
    *extraout_x18_03 = sym.perf_trace_rpmh_switch_channel;
    pcStack_2c8 = sym.perf_trace_rpmh_switch_channel;
    pcStack_2a8 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar1 = auVar30._8_8_;
    }
    iStack_2d8 = *(iVar11 + 0x5e0);
    uVar23 = uVar19 & 0xffffffff;
    uVar24 = puVar15 & 0xffffffff;
    iStack_2e0 = 0;
    uStack_2e4 = 0;
    puVar16 = puVar15;
    uVar26 = uVar19;
    ppuStack_2d0 = &ppuStack_230;
    iStack_2c0 = iVar12;
    uStack_2b0 = unaff_x26;
    piStack_2a0 = piVar28;
    uStack_298 = uVar27;
    uStack_290 = auVar32._8_8_;
    uStack_288 = auVar32._0_8_;
    uStack_280 = puVar17 & 0xffffffff;
    uStack_278 = uVar20 & 0xffffffff;
    uVar14 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(uVar10 + 0x78);
    if ((*(uVar10 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar16 = &uStack_2e4;
        pcVar29 = (uVar14 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar29,&iStack_2e0);
        if (iVar11 != 0) {
            uVar20 = _trace_event_raw_init & 0x3f;
            *(iStack_2e0 + 0xe8) = &ppuStack_2d0;
            *(iStack_2e0 + 0xf8) = auStack_2f0;
            *(iStack_2e0 + 0x100) = ~(-1L << uVar20) & 0x8003204;
            *(iStack_2e0 + 0x108) = 5;
            *(iVar11 + 8) = uVar14 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar1);
            puVar16 = uStack_2e4;
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar19;
            uVar26 = uVar10;
            perf_trace_run_bpf_submit(iVar11,pcVar29,puVar16,uVar10,1,iStack_2e0,piVar28,0);
            iVar12 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar33 = __stack_chk_fail();
    iVar13 = auVar33._0_8_;
    uVar18 = uVar26;
    uVar6 = tpidr_el2;
    *extraout_x18_04 = 0x800337c;
    uStack_328 = 0x800337c;
    iVar11 = sp_el0;
    iStack_338 = *(iVar11 + 0x5e0);
    uVar19 = puVar16 & 0xffffffff;
    uVar20 = *(iVar13 + 0x48);
    uStack_348 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uVar25 = uVar20;
    uVar21 = uVar18;
    ppuStack_330 = &ppuStack_2d0;
    pcStack_320 = pcVar1;
    piStack_310 = piVar28;
    uStack_308 = uVar24;
    uStack_300 = uVar23;
    uStack_2f8 = uVar10;
    if ((uVar25 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar25 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar21 = 0;
            event_triggers_call(iVar13,0);
        }
        if (((uVar25 >> 6 & 1) != 0) ||
           (((uVar25 >> 9 & 1) != 0 && (uVar10 = trace_event_ignore_this_pid(iVar13), (uVar10 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar1 = "(null)";
    if (auVar33._8_8_ != NULL) {
        pcVar1 = auVar33._8_8_;
    }
    auVar33._8_8_ = pcVar1;
    auVar33._0_8_ = iVar13;
    iVar9 = strlen(pcVar1);
    uVar25 = iVar9 + 1;
    uVar20 = uVar25;
    puVar15 = uVar25 + 0x14;
    iVar11 = trace_event_buffer_reserve(&uStack_368,iVar13);
    auVar8._8_8_ = pcVar1;
    auVar8._0_8_ = iVar11;
    if (iVar11 != 0) {
        uVar3 = puVar16 & 1;
        uVar19 = uVar3;
        *(iVar11 + 8) = uVar25 * 0x10000 | 0x14;
        strcpy(iVar11 + 0x14,pcVar1);
        *(iVar11 + 0xc) = uVar3;
        *(iVar11 + 0x10) = uVar18;
        trace_event_buffer_commit(&uStack_368);
        auVar33 = auVar8;
    }
code_r0x08003468:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_338) {
        return;
    }
    auVar30 = __stack_chk_fail();
    iVar13 = auVar30._0_8_;
    *extraout_x18_05 = sym.perf_trace_rpmh_drv_enable;
    pcStack_3c8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_3b0 = sym.perf_trace_rpmh_switch_channel;
    iVar11 = sp_el0;
    pcVar1 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar1 = auVar30._8_8_;
    }
    iStack_3d8 = *(iVar11 + 0x5e0);
    iStack_3e0 = 0;
    uStack_3e4 = 0;
    puVar17 = puVar15;
    ppuStack_3d0 = &ppuStack_330;
    iStack_3c0 = iVar12;
    pcStack_3a8 = pcVar29;
    uStack_3a0 = uVar14;
    uStack_398 = uVar20;
    uStack_390 = auVar33._8_8_;
    uStack_388 = auVar33._0_8_;
    uStack_380 = uVar19;
    uStack_378 = uVar26 & 0xffffffff;
    iVar9 = strlen(pcVar1);
    iVar11 = tpidr_el1;
    piVar28 = iVar11 + *(iVar13 + 0x78);
    if ((*(iVar13 + 0x80) != 0) || (*piVar28 != 0)) {
        puVar17 = &uStack_3e4;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar5,&iStack_3e0,puVar17);
        if (iVar11 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_3e0 + 0xe8) = &ppuStack_3d0;
            *(iStack_3e0 + 0xf8) = auStack_3f0;
            *(iStack_3e0 + 0x100) = ~(-1L << uVar19) & 0x80034a0;
            *(iStack_3e0 + 0x108) = 5;
            *(iVar11 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar1);
            puVar17 = uStack_3e4;
            *(iVar11 + 0xc) = puVar15 & 1;
            *(iVar11 + 0x10) = uVar21;
            perf_trace_run_bpf_submit(iVar11,iVar5,puVar17,iVar13,1,iStack_3e0,piVar28,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_3d8) {
        auVar30 = __stack_chk_fail();
        uVar14 = tpidr_el2;
        *extraout_x18_06 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar30._0_8_,auVar30._8_8_,puVar17 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_rpmh_send_msg @ 0x08002cc0 (size 432) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_send_msg(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    ulong uVar6;
    uchar auVar7 [16];
    uchar auVar8 [16];
    ulong in_tmp_ldXn;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar13;
    uchar *puVar14;
    uchar *puVar15;
    uchar *puVar16;
    uint uVar17;
    uint uVar18;
    uint64_t uVar19;
    uint in_w4;
    uint *in_x5;
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
    uint64_t uVar22;
    uint64_t uVar23;
    uint32_t uVar24;
    uint64_t uVar25;
    uint64_t uVar26;
    int64_t *piVar27;
    code *pcVar28;
    uint64_t unaff_x26;
    uint64_t unaff_x30;
    uchar auVar29 [16];
    uchar auVar30 [16];
    uchar auVar31 [16];
    uchar auVar32 [16];
    uchar auStack_360 [12];
    uint32_t uStack_354;
    int64_t iStack_350;
    int64_t iStack_348;
    uchar *puStack_340;
    code *pcStack_338;
    int64_t iStack_330;
    code *pcStack_320;
    code *pcStack_318;
    ulong uStack_310;
    uint64_t uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    uint64_t uStack_2f0;
    uint64_t uStack_2e8;
    ulong uStack_2d8;
    ulong uStack_2d0;
    ulong uStack_2c8;
    ulong uStack_2c0;
    ulong uStack_2b8;
    ulong uStack_2b0;
    int64_t iStack_2a8;
    uchar *puStack_2a0;
    ulong uStack_298;
    char *pcStack_290;
    int64_t *piStack_280;
    uint64_t uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    uchar auStack_260 [12];
    uint32_t uStack_254;
    int64_t iStack_250;
    int64_t iStack_248;
    uchar *puStack_240;
    code *pcStack_238;
    int64_t iStack_230;
    uint64_t uStack_220;
    code *pcStack_218;
    int64_t *piStack_210;
    uint64_t uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
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
    ulong uStack_190;
    char *pcStack_180;
    int64_t *piStack_178;
    uint64_t uStack_170;
    uint64_t uStack_168;
    uchar auStack_160 [12];
    uint32_t uStack_154;
    int64_t iStack_150;
    int64_t iStack_148;
    uchar *puStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    char *pcStack_128;
    int64_t *piStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    ulong uStack_108;
    ulong uStack_100;
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
    uchar auStack_80 [8];
    uint uStack_78;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iVar12;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (arg2 != NULL) {
        pcVar4 = arg2;
    }
    iStack_68 = *(iVar11 + 0x5e0);
    uVar25 = arg4 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar15 = arg3;
    uVar19 = arg4;
    uStack_78 = in_w4;
    iVar10 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar27 = iVar11 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar27 != 0)) {
        puVar15 = &stack0xffffffffffffff8c;
        unaff_x26 = (iVar10 + 0x30U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(unaff_x26,&stack0xffffffffffffff90);
        if (iVar11 != 0) {
            uVar20 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar19 = (~uVar20 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar19 = uVar20 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar19;
            *(iStack_70 + 0x108) = 5;
            *(iVar11 + 8) = iVar10 * 0x10000 + 0x10021;
            strcpy(iVar11 + 0x21,pcVar4);
            puVar15 = uStack_74;
            *(iVar11 + 0xc) = arg3;
            *(iVar11 + 0x10) = arg4;
            *(iVar11 + 0x14) = uStack_78;
            *(iVar11 + 0x18) = *in_x5;
            *(iVar11 + 0x1c) = in_x5[1];
            *(iVar11 + 0x20) = in_x5[2] != 0;
            perf_trace_run_bpf_submit(iVar11,unaff_x26,puVar15,arg1,1,iStack_70,piVar27,0);
            uVar19 = arg1;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_68) {
        return;
    }
    auVar29 = __stack_chk_fail();
    iVar12 = auVar29._0_8_;
    uVar13 = tpidr_el2;
    *extraout_x18 = 0x8002e64;
    uStack_a8 = 0x8002e64;
    iVar11 = sp_el0;
    uVar20 = puVar15 & 0xffffffff;
    iStack_b8 = *(iVar11 + 0x5e0);
    uVar26 = *(iVar12 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar24 = uVar26;
    puStack_b0 = &stack0xffffffffffffffa0;
    uStack_a0 = uVar25;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar19 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) == 0) &&
           (((uVar24 >> 9 & 1) == 0 || (uVar25 = trace_event_ignore_this_pid(iVar12), (uVar25 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar3 = "(null)";
        if (auVar29._8_8_ != NULL) {
            pcVar3 = auVar29._8_8_;
        }
        auVar29._8_8_ = pcVar3;
        auVar29._0_8_ = iVar12;
        iVar9 = strlen(pcVar3);
        uVar24 = iVar9 + 1;
        uVar26 = uVar24;
        puVar14 = uVar24 + 0x10;
        iVar11 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar12);
        auVar30._8_8_ = pcVar3;
        auVar30._0_8_ = iVar11;
        if (iVar11 != 0) {
            uVar2 = puVar15 & 1;
            uVar20 = uVar2;
            *(iVar11 + 8) = uVar24 * 0x10000 | 0xd;
            strcpy(iVar11 + 0xd,pcVar3);
            *(iVar11 + 0xc) = uVar2;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
            auVar29 = auVar30;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar30 = __stack_chk_fail();
    uVar25 = auVar30._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_solver_set;
    pcStack_138 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar3 = "(null)";
    if (auVar30._8_8_ != NULL) {
        pcVar3 = auVar30._8_8_;
    }
    iStack_148 = *(iVar11 + 0x5e0);
    pcVar28 = sym.perf_trace_rpmh_solver_set;
    uVar21 = puVar14 & 0xffffffff;
    iStack_150 = 0;
    uStack_154 = 0;
    puVar15 = puVar14;
    puStack_140 = &stack0xffffffffffffff50;
    uStack_130 = unaff_x26;
    pcStack_128 = pcVar4;
    piStack_120 = piVar27;
    uStack_118 = arg3 & 0xffffffff;
    uStack_110 = uVar26;
    uStack_108 = auVar29._8_8_;
    uStack_100 = auVar29._0_8_;
    uStack_f8 = uVar20;
    uVar13 = strlen(pcVar3);
    iVar11 = tpidr_el1;
    piVar1 = iVar11 + *(uVar25 + 0x78);
    if ((*(uVar25 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar15 = &stack0xfffffffffffffeac;
        piVar27 = (uVar13 + 0x1cU & 0xfffffff8) - 4;
        uVar20 = perf_trace_buf_alloc(piVar27,&stack0xfffffffffffffeb0);
        if (uVar20 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_150 + 0xe8) = &stack0xfffffffffffffec0;
            uVar24 = puVar14 & 1;
            uVar21 = uVar24;
            *(iStack_150 + 0xf8) = &stack0xfffffffffffffea0;
            *(iStack_150 + 0x100) = ~(-1L << uVar19) & 0x8002f78;
            *(iStack_150 + 0x108) = 5;
            *(uVar20 + 8) = uVar13 * 0x10000 + 0x1000d;
            strcpy(uVar20 + 0xd,pcVar3);
            puVar15 = uStack_154;
            *(uVar20 + 0xc) = uVar24;
            uVar19 = uVar25;
            perf_trace_run_bpf_submit(uVar20,piVar27,puVar15,uVar25,1,iStack_150,piVar1,0);
            unaff_x26 = uVar20;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_148) {
        return;
    }
    auVar31 = __stack_chk_fail();
    iVar12 = auVar31._0_8_;
    uVar6 = tpidr_el2;
    *extraout_x18_01 = 0x80030e8;
    uStack_198 = 0x80030e8;
    iVar11 = sp_el0;
    iStack_1a8 = *(iVar11 + 0x5e0);
    uVar26 = *(iVar12 + 0x48);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uVar24 = uVar26;
    uVar20 = uVar19;
    puStack_1a0 = &stack0xfffffffffffffec0;
    uStack_190 = uVar13;
    pcStack_180 = pcVar3;
    piStack_178 = piVar1;
    uStack_170 = uVar21;
    uStack_168 = uVar25;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar14 = puVar15;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar20 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) == 0) &&
           (((uVar24 >> 9 & 1) == 0 || (uVar25 = trace_event_ignore_this_pid(iVar12), (uVar25 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar4 = "(null)";
        if (auVar31._8_8_ != NULL) {
            pcVar4 = auVar31._8_8_;
        }
        auVar31._8_8_ = pcVar4;
        auVar31._0_8_ = iVar12;
        iVar9 = strlen(pcVar4);
        uVar24 = iVar9 + 1;
        uVar26 = uVar24;
        puVar14 = uVar24 + 0x14;
        iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffe28,iVar12);
        auVar7._8_8_ = pcVar4;
        auVar7._0_8_ = iVar11;
        if (iVar11 != 0) {
            *(iVar11 + 8) = uVar24 * 0x10000 | 0x14;
            strcpy(iVar11 + 0x14,pcVar4);
            *(iVar11 + 0xc) = puVar15;
            *(iVar11 + 0x10) = uVar19;
            trace_event_buffer_commit(&stack0xfffffffffffffe28);
            auVar31 = auVar7;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_1a8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    uVar25 = auVar29._0_8_;
    *extraout_x18_02 = sym.perf_trace_rpmh_switch_channel;
    pcStack_238 = sym.perf_trace_rpmh_switch_channel;
    pcStack_218 = sym.perf_trace_rpmh_solver_set;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar29._8_8_ != NULL) {
        pcVar4 = auVar29._8_8_;
    }
    iStack_248 = *(iVar11 + 0x5e0);
    uVar22 = uVar20 & 0xffffffff;
    uVar23 = puVar14 & 0xffffffff;
    iStack_250 = 0;
    uStack_254 = 0;
    puVar16 = puVar14;
    uVar21 = uVar20;
    puStack_240 = &stack0xfffffffffffffe60;
    iStack_230 = iVar10;
    uStack_220 = unaff_x26;
    piStack_210 = piVar27;
    uStack_208 = uVar26;
    uStack_200 = auVar31._8_8_;
    uStack_1f8 = auVar31._0_8_;
    uStack_1f0 = puVar15 & 0xffffffff;
    uStack_1e8 = uVar19 & 0xffffffff;
    uVar13 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar27 = iVar11 + *(uVar25 + 0x78);
    if ((*(uVar25 + 0x80) != 0) || (*piVar27 != 0)) {
        puVar16 = &stack0xfffffffffffffdac;
        pcVar28 = (uVar13 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(pcVar28,&stack0xfffffffffffffdb0);
        if (iVar11 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_250 + 0xe8) = &stack0xfffffffffffffdc0;
            *(iStack_250 + 0xf8) = &stack0xfffffffffffffda0;
            *(iStack_250 + 0x100) = ~(-1L << uVar19) & 0x8003204;
            *(iStack_250 + 0x108) = 5;
            *(iVar11 + 8) = uVar13 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar16 = uStack_254;
            *(iVar11 + 0xc) = puVar14;
            *(iVar11 + 0x10) = uVar20;
            uVar21 = uVar25;
            perf_trace_run_bpf_submit(iVar11,pcVar28,puVar16,uVar25,1,iStack_250,piVar27,0);
            iVar10 = iVar11;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_248) {
        return;
    }
    auVar32 = __stack_chk_fail();
    iVar12 = auVar32._0_8_;
    uVar17 = uVar21;
    uVar6 = tpidr_el2;
    *extraout_x18_03 = 0x800337c;
    uStack_298 = 0x800337c;
    iVar11 = sp_el0;
    iStack_2a8 = *(iVar11 + 0x5e0);
    uVar19 = puVar16 & 0xffffffff;
    uVar20 = *(iVar12 + 0x48);
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uVar24 = uVar20;
    uVar18 = uVar17;
    puStack_2a0 = &stack0xfffffffffffffdc0;
    pcStack_290 = pcVar4;
    piStack_280 = piVar27;
    uStack_278 = uVar23;
    uStack_270 = uVar22;
    uStack_268 = uVar25;
    if ((uVar24 >> 8 & 1) == 0) {
        puVar15 = puVar16;
        if ((uVar24 >> 7 & 1) != 0) {
            puVar15 = NULL;
            uVar18 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar24 >> 6 & 1) != 0) ||
           (((uVar24 >> 9 & 1) != 0 && (uVar25 = trace_event_ignore_this_pid(iVar12), (uVar25 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar4 = "(null)";
    if (auVar32._8_8_ != NULL) {
        pcVar4 = auVar32._8_8_;
    }
    auVar32._8_8_ = pcVar4;
    auVar32._0_8_ = iVar12;
    iVar9 = strlen(pcVar4);
    uVar24 = iVar9 + 1;
    uVar20 = uVar24;
    puVar15 = uVar24 + 0x14;
    iVar11 = trace_event_buffer_reserve(&stack0xfffffffffffffd28,iVar12);
    auVar8._8_8_ = pcVar4;
    auVar8._0_8_ = iVar11;
    if (iVar11 != 0) {
        uVar2 = puVar16 & 1;
        uVar19 = uVar2;
        *(iVar11 + 8) = uVar24 * 0x10000 | 0x14;
        strcpy(iVar11 + 0x14,pcVar4);
        *(iVar11 + 0xc) = uVar2;
        *(iVar11 + 0x10) = uVar17;
        trace_event_buffer_commit(&stack0xfffffffffffffd28);
        auVar32 = auVar8;
    }
code_r0x08003468:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_2a8) {
        return;
    }
    auVar29 = __stack_chk_fail();
    iVar12 = auVar29._0_8_;
    *extraout_x18_04 = sym.perf_trace_rpmh_drv_enable;
    pcStack_338 = sym.perf_trace_rpmh_drv_enable;
    pcStack_320 = sym.perf_trace_rpmh_switch_channel;
    iVar11 = sp_el0;
    pcVar4 = "(null)";
    if (auVar29._8_8_ != NULL) {
        pcVar4 = auVar29._8_8_;
    }
    iStack_348 = *(iVar11 + 0x5e0);
    iStack_350 = 0;
    uStack_354 = 0;
    puVar14 = puVar15;
    puStack_340 = &stack0xfffffffffffffd60;
    iStack_330 = iVar10;
    pcStack_318 = pcVar28;
    uStack_310 = uVar13;
    uStack_308 = uVar20;
    uStack_300 = auVar32._8_8_;
    uStack_2f8 = auVar32._0_8_;
    uStack_2f0 = uVar19;
    uStack_2e8 = uVar21 & 0xffffffff;
    iVar9 = strlen(pcVar4);
    iVar11 = tpidr_el1;
    piVar27 = iVar11 + *(iVar12 + 0x78);
    if ((*(iVar12 + 0x80) != 0) || (*piVar27 != 0)) {
        puVar14 = &stack0xfffffffffffffcac;
        iVar5 = (iVar9 + 0x20U & 0xfffffff8) - 4;
        iVar11 = perf_trace_buf_alloc(iVar5,&stack0xfffffffffffffcb0,puVar14);
        if (iVar11 != 0) {
            uVar19 = _trace_event_raw_init & 0x3f;
            *(iStack_350 + 0xe8) = &stack0xfffffffffffffcc0;
            *(iStack_350 + 0xf8) = &stack0xfffffffffffffca0;
            *(iStack_350 + 0x100) = ~(-1L << uVar19) & 0x80034a0;
            *(iStack_350 + 0x108) = 5;
            *(iVar11 + 8) = iVar9 * 0x10000 + 0x10014;
            strcpy(iVar11 + 0x14,pcVar4);
            puVar14 = uStack_354;
            *(iVar11 + 0xc) = puVar15 & 1;
            *(iVar11 + 0x10) = uVar18;
            perf_trace_run_bpf_submit(iVar11,iVar5,puVar14,iVar12,1,iStack_350,piVar27,0);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_348) {
        auVar29 = __stack_chk_fail();
        uVar13 = tpidr_el2;
        *extraout_x18_05 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar29._0_8_,auVar29._8_8_,puVar14 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rpmh_solver_set @ 0x08002e70 (size 264) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003068)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_solver_set(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint uVar13;
    uint uVar14;
    uint64_t in_x3;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    code *pcVar21;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar22 [16];
    uchar auVar23 [16];
    uchar auStack_2e0 [12];
    uint32_t uStack_2d4;
    int64_t iStack_2d0;
    int64_t iStack_2c8;
    ulong **ppuStack_2c0;
    code *pcStack_2b8;
    int64_t iStack_2b0;
    code *pcStack_2a0;
    code *pcStack_298;
    ulong uStack_290;
    uint64_t uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    uint64_t uStack_270;
    uint64_t uStack_268;
    ulong uStack_258;
    ulong uStack_250;
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
    ulong uStack_230;
    int64_t iStack_228;
    ulong **ppuStack_220;
    ulong uStack_218;
    char *pcStack_210;
    int64_t *piStack_200;
    uint64_t uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e8;
    uchar auStack_1e0 [12];
    uint32_t uStack_1d4;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong **ppuStack_1c0;
    code *pcStack_1b8;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    ulong uStack_118;
    ulong uStack_110;
    char *pcStack_100;
    int64_t *piStack_f8;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
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
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar19 = *(arg1 + 0x48);
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = arg3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(arg1), (uVar7 & 1) == 0))))
        goto code_r0x08002ee4;
    }
    else {
code_r0x08002ee4:
        pcVar1 = "(null)";
        if (arg2 != 0) {
            pcVar1 = arg2;
        }
        iVar6 = strlen(pcVar1);
        puVar11 = iVar6 + 1 + 0x10;
        iVar8 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0xd;
            strcpy(iVar8 + 0xd,pcVar1);
            *(iVar8 + 0xc) = arg3 & 1;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar7 = auVar22._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_solver_set;
    pcStack_b8 = sym.perf_trace_rpmh_solver_set;
    iVar8 = sp_el0;
    pcVar1 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar1 = auVar22._8_8_;
    }
    iStack_c8 = *(iVar8 + 0x5e0);
    pcVar21 = sym.perf_trace_rpmh_solver_set;
    uVar16 = puVar11 & 0xffffffff;
    iStack_d0 = 0;
    uStack_d4 = 0;
    puVar12 = puVar11;
    puStack_c0 = &stack0xffffffffffffffd0;
    uVar9 = strlen(pcVar1);
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &uStack_d4;
        iVar6 = (uVar9 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar6,&iStack_d0);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_d0 + 0xe8) = &puStack_c0;
            uVar19 = puVar11 & 1;
            uVar16 = uVar19;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << uVar15) & 0x8002f78;
            *(iStack_d0 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x1000d;
            strcpy(iVar8 + 0xd,pcVar1);
            puVar12 = uStack_d4;
            *(iVar8 + 0xc) = uVar19;
            in_x3 = uVar7;
            perf_trace_run_bpf_submit(iVar8,iVar6,puVar12,uVar7,1,iStack_d0,piVar2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar10 = auVar22._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18_00 = 0x80030e8;
    uStack_118 = 0x80030e8;
    iVar8 = sp_el0;
    iStack_128 = *(iVar8 + 0x5e0);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uVar19 = *(iVar10 + 0x48);
    uVar15 = in_x3;
    ppuStack_120 = &puStack_c0;
    uStack_110 = uVar9;
    pcStack_100 = pcVar1;
    piStack_f8 = piVar2;
    uStack_f0 = uVar16;
    uStack_e8 = uVar7;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(iVar10), (uVar7 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar1 = "(null)";
        if (auVar22._8_8_ != NULL) {
            pcVar1 = auVar22._8_8_;
        }
        iVar6 = strlen(pcVar1);
        puVar11 = iVar6 + 1 + 0x14;
        iVar8 = trace_event_buffer_reserve(&uStack_158,iVar10);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            strcpy(iVar8 + 0x14,pcVar1);
            *(iVar8 + 0xc) = puVar12;
            *(iVar8 + 0x10) = in_x3;
            trace_event_buffer_commit(&uStack_158);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_128) {
        return;
    }
    auVar22 = __stack_chk_fail();
    uVar7 = auVar22._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_switch_channel;
    pcStack_1b8 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar1 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar1 = auVar22._8_8_;
    }
    iStack_1c8 = *(iVar8 + 0x5e0);
    uVar17 = uVar15 & 0xffffffff;
    uVar18 = puVar11 & 0xffffffff;
    iStack_1d0 = 0;
    uStack_1d4 = 0;
    puVar12 = puVar11;
    uVar16 = uVar15;
    ppuStack_1c0 = &ppuStack_120;
    uVar9 = strlen(pcVar1);
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &uStack_1d4;
        pcVar21 = (uVar9 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(pcVar21,&iStack_1d0);
        if (iVar8 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_1d0 + 0xe8) = &ppuStack_1c0;
            *(iStack_1d0 + 0xf8) = auStack_1e0;
            *(iStack_1d0 + 0x100) = ~(-1L << uVar16) & 0x8003204;
            *(iStack_1d0 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar1);
            puVar12 = uStack_1d4;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar15;
            uVar16 = uVar7;
            perf_trace_run_bpf_submit(iVar8,pcVar21,puVar12,uVar7,1,iStack_1d0,piVar2,0);
            unaff_x27 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1c8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar10 = auVar22._0_8_;
    uVar13 = uVar16;
    uVar5 = tpidr_el2;
    *extraout_x18_02 = 0x800337c;
    uStack_218 = 0x800337c;
    iVar8 = sp_el0;
    iStack_228 = *(iVar8 + 0x5e0);
    uVar15 = puVar12 & 0xffffffff;
    uVar20 = *(iVar10 + 0x48);
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uVar19 = uVar20;
    uVar14 = uVar13;
    ppuStack_220 = &ppuStack_1c0;
    pcStack_210 = pcVar1;
    piStack_200 = piVar2;
    uStack_1f8 = uVar18;
    uStack_1f0 = uVar17;
    uStack_1e8 = uVar7;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar10), (uVar7 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar1 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar1 = auVar22._8_8_;
    }
    auVar22._8_8_ = pcVar1;
    auVar22._0_8_ = iVar10;
    iVar6 = strlen(pcVar1);
    uVar19 = iVar6 + 1;
    uVar20 = uVar19;
    puVar11 = uVar19 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_258,iVar10);
    auVar23._8_8_ = pcVar1;
    auVar23._0_8_ = iVar8;
    if (iVar8 != 0) {
        uVar3 = puVar12 & 1;
        uVar15 = uVar3;
        *(iVar8 + 8) = uVar19 * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar1);
        *(iVar8 + 0xc) = uVar3;
        *(iVar8 + 0x10) = uVar13;
        trace_event_buffer_commit(&uStack_258);
        auVar22 = auVar23;
    }
code_r0x08003468:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_228) {
        return;
    }
    auVar23 = __stack_chk_fail();
    iVar10 = auVar23._0_8_;
    *extraout_x18_03 = sym.perf_trace_rpmh_drv_enable;
    pcStack_2b8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_2a0 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar1 = "(null)";
    if (auVar23._8_8_ != NULL) {
        pcVar1 = auVar23._8_8_;
    }
    iStack_2c8 = *(iVar8 + 0x5e0);
    iStack_2d0 = 0;
    uStack_2d4 = 0;
    puVar12 = puVar11;
    ppuStack_2c0 = &ppuStack_220;
    iStack_2b0 = unaff_x27;
    pcStack_298 = pcVar21;
    uStack_290 = uVar9;
    uStack_288 = uVar20;
    uStack_280 = auVar22._8_8_;
    uStack_278 = auVar22._0_8_;
    uStack_270 = uVar15;
    uStack_268 = uVar16 & 0xffffffff;
    iVar6 = strlen(pcVar1);
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &uStack_2d4;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&iStack_2d0,puVar12);
        if (iVar8 != 0) {
            uVar7 = _trace_event_raw_init & 0x3f;
            *(iStack_2d0 + 0xe8) = &ppuStack_2c0;
            *(iStack_2d0 + 0xf8) = auStack_2e0;
            *(iStack_2d0 + 0x100) = ~(-1L << uVar7) & 0x80034a0;
            *(iStack_2d0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar1);
            puVar12 = uStack_2d4;
            *(iVar8 + 0xc) = puVar11 & 1;
            *(iVar8 + 0x10) = uVar14;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar12,iVar10,1,iStack_2d0,piVar2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_2c8) {
        auVar22 = __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_04 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar22._0_8_,auVar22._8_8_,puVar12 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_rpmh_solver_set @ 0x08002f78 (size 380) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_solver_set(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint32_t uVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uchar *puVar10;
    uchar *puVar11;
    uint uVar12;
    uint uVar13;
    uint64_t in_x3;
    uint64_t uVar14;
    uint64_t uVar15;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_270 [12];
    uint32_t uStack_264;
    int64_t iStack_260;
    int64_t iStack_258;
    uchar *puStack_250;
    code *pcStack_248;
    int64_t iStack_240;
    code *pcStack_230;
    uint64_t uStack_228;
    ulong uStack_220;
    uint64_t uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    uint64_t uStack_200;
    uint64_t uStack_1f8;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    int64_t iStack_1b8;
    uchar *puStack_1b0;
    ulong uStack_1a8;
    char *pcStack_1a0;
    int64_t *piStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    uchar auStack_170 [12];
    uint32_t uStack_164;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar *puStack_150;
    code *pcStack_148;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    char *pcStack_90;
    int64_t *piStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iVar9;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (arg2 != NULL) {
        pcVar3 = arg2;
    }
    iStack_58 = *(iVar8 + 0x5e0);
    uVar16 = arg3 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    puVar10 = arg3;
    uVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &stack0xffffffffffffff9c;
        iVar6 = (uVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar6,&stack0xffffffffffffffa0);
        if (iVar8 != 0) {
            uVar15 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            uVar19 = arg3 & 1;
            uVar16 = uVar19;
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            uVar14 = (~uVar15 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar14 = uVar15 | unaff_x30;
            }
            *(iStack_60 + 0x100) = uVar14;
            *(iStack_60 + 0x108) = 5;
            *(iVar8 + 8) = uVar7 * 0x10000 + 0x1000d;
            strcpy(iVar8 + 0xd,pcVar3);
            puVar10 = uStack_64;
            *(iVar8 + 0xc) = uVar19;
            in_x3 = arg1;
            perf_trace_run_bpf_submit(iVar8,iVar6,puVar10,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar9 = auVar21._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x80030e8;
    uStack_a8 = 0x80030e8;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar19 = *(iVar9 + 0x48);
    uVar14 = in_x3;
    puStack_b0 = &stack0xffffffffffffffb0;
    uStack_a0 = uVar7;
    pcStack_90 = pcVar3;
    piStack_88 = piVar1;
    uStack_80 = uVar16;
    iStack_78 = arg1;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar3 = "(null)";
        if (auVar21._8_8_ != NULL) {
            pcVar3 = auVar21._8_8_;
        }
        iVar6 = strlen(pcVar3);
        puVar11 = iVar6 + 1 + 0x14;
        iVar8 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            strcpy(iVar8 + 0x14,pcVar3);
            *(iVar8 + 0xc) = puVar10;
            *(iVar8 + 0x10) = in_x3;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar16 = auVar21._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_switch_channel;
    pcStack_148 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    iStack_158 = *(iVar8 + 0x5e0);
    uVar17 = uVar14 & 0xffffffff;
    uVar18 = puVar11 & 0xffffffff;
    iStack_160 = 0;
    uStack_164 = 0;
    puVar10 = puVar11;
    uVar15 = uVar14;
    puStack_150 = &stack0xffffffffffffff50;
    uVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &stack0xfffffffffffffe9c;
        unaff_x30 = (uVar7 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(unaff_x30,&stack0xfffffffffffffea0);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_160 + 0xe8) = &stack0xfffffffffffffeb0;
            *(iStack_160 + 0xf8) = &stack0xfffffffffffffe90;
            *(iStack_160 + 0x100) = ~(-1L << uVar15) & 0x8003204;
            *(iStack_160 + 0x108) = 5;
            *(iVar8 + 8) = uVar7 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar10 = uStack_164;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar14;
            uVar15 = uVar16;
            perf_trace_run_bpf_submit(iVar8,unaff_x30,puVar10,uVar16,1,iStack_160,piVar1,0);
            unaff_x27 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_158) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar9 = auVar21._0_8_;
    uVar12 = uVar15;
    uVar5 = tpidr_el2;
    *extraout_x18_01 = 0x800337c;
    uStack_1a8 = 0x800337c;
    iVar8 = sp_el0;
    iStack_1b8 = *(iVar8 + 0x5e0);
    uVar14 = puVar10 & 0xffffffff;
    uVar20 = *(iVar9 + 0x48);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uVar19 = uVar20;
    uVar13 = uVar12;
    puStack_1b0 = &stack0xfffffffffffffeb0;
    pcStack_1a0 = pcVar3;
    piStack_190 = piVar1;
    uStack_188 = uVar18;
    uStack_180 = uVar17;
    uStack_178 = uVar16;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    auVar21._8_8_ = pcVar3;
    auVar21._0_8_ = iVar9;
    iVar6 = strlen(pcVar3);
    uVar19 = iVar6 + 1;
    uVar20 = uVar19;
    puVar11 = uVar19 + 0x14;
    iVar8 = trace_event_buffer_reserve(&stack0xfffffffffffffe18,iVar9);
    auVar22._8_8_ = pcVar3;
    auVar22._0_8_ = iVar8;
    if (iVar8 != 0) {
        uVar2 = puVar10 & 1;
        uVar14 = uVar2;
        *(iVar8 + 8) = uVar19 * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar3);
        *(iVar8 + 0xc) = uVar2;
        *(iVar8 + 0x10) = uVar12;
        trace_event_buffer_commit(&stack0xfffffffffffffe18);
        auVar21 = auVar22;
    }
code_r0x08003468:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar9 = auVar22._0_8_;
    *extraout_x18_02 = sym.perf_trace_rpmh_drv_enable;
    pcStack_248 = sym.perf_trace_rpmh_drv_enable;
    pcStack_230 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar3 = auVar22._8_8_;
    }
    iStack_258 = *(iVar8 + 0x5e0);
    iStack_260 = 0;
    uStack_264 = 0;
    puVar10 = puVar11;
    puStack_250 = &stack0xfffffffffffffe50;
    iStack_240 = unaff_x27;
    uStack_228 = unaff_x30;
    uStack_220 = uVar7;
    uStack_218 = uVar20;
    uStack_210 = auVar21._8_8_;
    uStack_208 = auVar21._0_8_;
    uStack_200 = uVar14;
    uStack_1f8 = uVar15 & 0xffffffff;
    iVar6 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(iVar9 + 0x78);
    if ((*(iVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &stack0xfffffffffffffd9c;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&stack0xfffffffffffffda0,puVar10);
        if (iVar8 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_260 + 0xe8) = &stack0xfffffffffffffdb0;
            *(iStack_260 + 0xf8) = &stack0xfffffffffffffd90;
            *(iStack_260 + 0x100) = ~(-1L << uVar16) & 0x80034a0;
            *(iStack_260 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar3);
            puVar10 = uStack_264;
            *(iVar8 + 0xc) = puVar11 & 1;
            *(iVar8 + 0x10) = uVar13;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar10,iVar9,1,iStack_260,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_258) {
        auVar21 = __stack_chk_fail();
        uVar7 = tpidr_el2;
        *extraout_x18_03 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_,puVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rpmh_switch_channel @ 0x080030f4 (size 272) =====

//WARNING: Removing unreachable block (ram,0x080032f8)
//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_switch_channel(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong uVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint uVar13;
    uint uVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint64_t unaff_x25;
    int64_t unaff_x27;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auVar22 [16];
    uchar auStack_200 [12];
    uint32_t uStack_1f4;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    ulong uStack_1b0;
    uint64_t uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
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
    char *pcStack_130;
    int64_t *piStack_120;
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
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar19 = *(arg1 + 0x48);
    uVar15 = arg4;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = arg3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar15 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar7 = trace_event_ignore_this_pid(arg1), (uVar7 & 1) == 0))))
        goto code_r0x08003170;
    }
    else {
code_r0x08003170:
        pcVar1 = "(null)";
        if (arg2 != 0) {
            pcVar1 = arg2;
        }
        iVar6 = strlen(pcVar1);
        puVar11 = iVar6 + 1 + 0x14;
        iVar8 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar8 != 0) {
            *(iVar8 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
            strcpy(iVar8 + 0x14,pcVar1);
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar7 = auVar21._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_switch_channel;
    pcStack_d8 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar1 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar1 = auVar21._8_8_;
    }
    iStack_e8 = *(iVar8 + 0x5e0);
    uVar17 = uVar15 & 0xffffffff;
    uVar18 = puVar11 & 0xffffffff;
    iStack_f0 = 0;
    uStack_f4 = 0;
    puVar12 = puVar11;
    uVar16 = uVar15;
    puStack_e0 = &stack0xffffffffffffffc0;
    uVar9 = strlen(pcVar1);
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(uVar7 + 0x78);
    if ((*(uVar7 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &uStack_f4;
        unaff_x25 = (uVar9 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(unaff_x25,&iStack_f0);
        if (iVar8 != 0) {
            uVar16 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar16) & 0x8003204;
            *(iStack_f0 + 0x108) = 5;
            *(iVar8 + 8) = uVar9 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar1);
            puVar12 = uStack_f4;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar15;
            uVar16 = uVar7;
            perf_trace_run_bpf_submit(iVar8,unaff_x25,puVar12,uVar7,1,iStack_f0,piVar2,0);
            unaff_x27 = iVar8;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_e8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar10 = auVar21._0_8_;
    uVar13 = uVar16;
    uVar5 = tpidr_el2;
    *extraout_x18_00 = 0x800337c;
    uStack_138 = 0x800337c;
    iVar8 = sp_el0;
    iStack_148 = *(iVar8 + 0x5e0);
    uVar15 = puVar12 & 0xffffffff;
    uVar20 = *(iVar10 + 0x48);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uVar19 = uVar20;
    uVar14 = uVar13;
    ppuStack_140 = &puStack_e0;
    pcStack_130 = pcVar1;
    piStack_120 = piVar2;
    uStack_118 = uVar18;
    uStack_110 = uVar17;
    uStack_108 = uVar7;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar11 = puVar12;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar7 = trace_event_ignore_this_pid(iVar10), (uVar7 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar1 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar1 = auVar21._8_8_;
    }
    auVar21._8_8_ = pcVar1;
    auVar21._0_8_ = iVar10;
    iVar6 = strlen(pcVar1);
    uVar19 = iVar6 + 1;
    uVar20 = uVar19;
    puVar11 = uVar19 + 0x14;
    iVar8 = trace_event_buffer_reserve(&uStack_178,iVar10);
    auVar22._8_8_ = pcVar1;
    auVar22._0_8_ = iVar8;
    if (iVar8 != 0) {
        uVar3 = puVar12 & 1;
        uVar15 = uVar3;
        *(iVar8 + 8) = uVar19 * 0x10000 | 0x14;
        strcpy(iVar8 + 0x14,pcVar1);
        *(iVar8 + 0xc) = uVar3;
        *(iVar8 + 0x10) = uVar13;
        trace_event_buffer_commit(&uStack_178);
        auVar21 = auVar22;
    }
code_r0x08003468:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_148) {
        return;
    }
    auVar22 = __stack_chk_fail();
    iVar10 = auVar22._0_8_;
    *extraout_x18_01 = sym.perf_trace_rpmh_drv_enable;
    pcStack_1d8 = sym.perf_trace_rpmh_drv_enable;
    pcStack_1c0 = sym.perf_trace_rpmh_switch_channel;
    iVar8 = sp_el0;
    pcVar1 = "(null)";
    if (auVar22._8_8_ != NULL) {
        pcVar1 = auVar22._8_8_;
    }
    iStack_1e8 = *(iVar8 + 0x5e0);
    iStack_1f0 = 0;
    uStack_1f4 = 0;
    puVar12 = puVar11;
    ppuStack_1e0 = &ppuStack_140;
    iStack_1d0 = unaff_x27;
    uStack_1b8 = unaff_x25;
    uStack_1b0 = uVar9;
    uStack_1a8 = uVar20;
    uStack_1a0 = auVar21._8_8_;
    uStack_198 = auVar21._0_8_;
    uStack_190 = uVar15;
    uStack_188 = uVar16 & 0xffffffff;
    iVar6 = strlen(pcVar1);
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(iVar10 + 0x78);
    if ((*(iVar10 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &uStack_1f4;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&iStack_1f0,puVar12);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_1f0 + 0xe8) = &ppuStack_1e0;
            *(iStack_1f0 + 0xf8) = auStack_200;
            *(iStack_1f0 + 0x100) = ~(-1L << uVar15) & 0x80034a0;
            *(iStack_1f0 + 0x108) = 5;
            *(iVar8 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar8 + 0x14,pcVar1);
            puVar12 = uStack_1f4;
            *(iVar8 + 0xc) = puVar11 & 1;
            *(iVar8 + 0x10) = uVar14;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar12,iVar10,1,iStack_1f0,piVar2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_1e8) {
        auVar21 = __stack_chk_fail();
        uVar9 = tpidr_el2;
        *extraout_x18_02 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_,puVar12 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_rpmh_switch_channel @ 0x08003204 (size 388) =====

//WARNING: Removing unreachable block (ram,0x08003598)

void sym.perf_trace_rpmh_switch_channel(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    char *pcVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    uchar *puVar8;
    uchar *puVar9;
    uint uVar10;
    uint uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    int64_t unaff_x27;
    uint64_t unaff_x30;
    uchar auVar17 [16];
    uchar auStack_180 [12];
    uint32_t uStack_174;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    code *pcStack_158;
    int64_t iStack_150;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    char *pcStack_b0;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar3 = "(null)";
    if (arg2 != NULL) {
        pcVar3 = arg2;
    }
    iStack_68 = *(iVar7 + 0x5e0);
    uVar14 = arg4 & 0xffffffff;
    uVar15 = arg3 & 0xffffffff;
    iStack_70 = 0;
    uStack_74 = 0;
    puVar8 = arg3;
    uVar10 = arg4;
    iVar6 = strlen(pcVar3);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &stack0xffffffffffffff8c;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&stack0xffffffffffffff90);
        if (iVar7 != 0) {
            uVar13 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar2 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar2 = uVar13 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar2;
            *(iStack_70 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar3);
            puVar8 = uStack_74;
            *(iVar7 + 0xc) = arg3;
            *(iVar7 + 0x10) = arg4;
            iVar12 = arg1;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar8,arg1,1,iStack_70,piVar1,0);
            uVar10 = iVar12;
            unaff_x27 = iVar7;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar12 = auVar17._0_8_;
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x800337c;
    uStack_b8 = 0x800337c;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar16 = *(iVar12 + 0x48);
    uVar11 = uVar10;
    puStack_c0 = &stack0xffffffffffffffa0;
    pcStack_b0 = pcVar3;
    piStack_a0 = piVar1;
    uStack_98 = uVar15;
    uStack_90 = uVar14;
    iStack_88 = arg1;
    if ((uVar16 >> 8 & 1) == 0) {
        puVar9 = puVar8;
        if ((uVar16 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar12,0);
        }
        if (((uVar16 >> 6 & 1) != 0) ||
           (((uVar16 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar12), (uVar14 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar3 = "(null)";
    if (auVar17._8_8_ != NULL) {
        pcVar3 = auVar17._8_8_;
    }
    iVar6 = strlen(pcVar3);
    puVar9 = iVar6 + 1 + 0x14;
    iVar7 = trace_event_buffer_reserve(&stack0xffffffffffffff08,iVar12);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar6 + 1) * 0x10000 | 0x14;
        strcpy(iVar7 + 0x14,pcVar3);
        *(iVar7 + 0xc) = puVar8 & 1;
        *(iVar7 + 0x10) = uVar10;
        trace_event_buffer_commit(&stack0xffffffffffffff08);
    }
code_r0x08003468:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar17 = __stack_chk_fail();
    iVar12 = auVar17._0_8_;
    *extraout_x18_00 = sym.perf_trace_rpmh_drv_enable;
    pcStack_158 = sym.perf_trace_rpmh_drv_enable;
    iVar7 = sp_el0;
    pcVar3 = "(null)";
    if (auVar17._8_8_ != NULL) {
        pcVar3 = auVar17._8_8_;
    }
    iStack_168 = *(iVar7 + 0x5e0);
    iStack_170 = 0;
    uStack_174 = 0;
    puVar8 = puVar9;
    puStack_160 = &stack0xffffffffffffff40;
    iStack_150 = unaff_x27;
    iVar6 = strlen(pcVar3);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(iVar12 + 0x78);
    if ((*(iVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &stack0xfffffffffffffe8c;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&stack0xfffffffffffffe90,puVar8);
        if (iVar7 != 0) {
            uVar14 = _trace_event_raw_init & 0x3f;
            *(iStack_170 + 0xe8) = &stack0xfffffffffffffea0;
            *(iStack_170 + 0xf8) = &stack0xfffffffffffffe80;
            *(iStack_170 + 0x100) = ~(-1L << uVar14) & 0x80034a0;
            *(iStack_170 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar3);
            puVar8 = uStack_174;
            *(iVar7 + 0xc) = puVar9 & 1;
            *(iVar7 + 0x10) = uVar11;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar8,iVar12,1,iStack_170,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_168) {
        auVar17 = __stack_chk_fail();
        uVar5 = tpidr_el2;
        *extraout_x18_01 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar17._0_8_,auVar17._8_8_,puVar8 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_rpmh_drv_enable @ 0x08003388 (size 280) =====

//WARNING: Removing unreachable block (ram,0x08003598)

void sym.trace_event_raw_event_rpmh_drv_enable(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    uint32_t *puVar9;
    uint32_t *puVar10;
    uint uVar11;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
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
    
    uVar11 = arg4;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar13 = *(arg1 + 0x48);
    uVar12 = uVar11;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar9 = arg3;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar9 = NULL;
            uVar12 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar6 = trace_event_ignore_this_pid(arg1), (uVar6 & 1) != 0))))
        goto code_r0x08003468;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar5 = strlen(pcVar1);
    puVar9 = iVar5 + 1 + 0x14;
    iVar7 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar7 != 0) {
        *(iVar7 + 8) = (iVar5 + 1) * 0x10000 | 0x14;
        strcpy(iVar7 + 0x14,pcVar1);
        *(iVar7 + 0xc) = arg3 & 1;
        *(iVar7 + 0x10) = uVar11;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08003468:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar8 = auVar14._0_8_;
    *extraout_x18 = sym.perf_trace_rpmh_drv_enable;
    pcStack_d8 = sym.perf_trace_rpmh_drv_enable;
    iVar7 = sp_el0;
    pcVar1 = "(null)";
    if (auVar14._8_8_ != NULL) {
        pcVar1 = auVar14._8_8_;
    }
    iStack_e8 = *(iVar7 + 0x5e0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puVar10 = puVar9;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar5 = strlen(pcVar1);
    iVar7 = tpidr_el1;
    piVar2 = iVar7 + *(iVar8 + 0x78);
    if ((*(iVar8 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar10 = &uStack_f4;
        iVar3 = (iVar5 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar10);
        if (iVar7 != 0) {
            uVar6 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar6) & 0x80034a0;
            *(iStack_f0 + 0x108) = 5;
            *(iVar7 + 8) = iVar5 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,pcVar1);
            puVar10 = uStack_f4;
            *(iVar7 + 0xc) = puVar9 & 1;
            *(iVar7 + 0x10) = uVar12;
            perf_trace_run_bpf_submit(iVar7,iVar3,puVar10,iVar8,1,iStack_f0,piVar2,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_e8) {
        auVar14 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8003620;
        bpf_trace_run3(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_,puVar10 & 0xffffffff);
        return;
    }
    return;
}


// ===== sym.perf_trace_rpmh_drv_enable @ 0x080034a0 (size 396) =====

void sym.perf_trace_rpmh_drv_enable(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong in_tmp_ldXn;
    int iVar6;
    int64_t iVar7;
    uchar *puVar8;
    uint64_t uVar9;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar10 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    uVar2 = 0x8001344;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_68 = *(iVar7 + 0x5e0);
    iStack_70 = 0;
    uStack_74 = 0;
    puVar8 = arg3;
    iVar6 = strlen(uVar2);
    iVar7 = tpidr_el1;
    piVar1 = iVar7 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar8 = &stack0xffffffffffffff8c;
        iVar4 = (iVar6 + 0x20U & 0xfffffff8) - 4;
        iVar7 = perf_trace_buf_alloc(iVar4,&stack0xffffffffffffff90,puVar8);
        if (iVar7 != 0) {
            uVar9 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar3 = (~uVar9 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar9 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar7 + 8) = iVar6 * 0x10000 + 0x10014;
            strcpy(iVar7 + 0x14,uVar2);
            puVar8 = uStack_74;
            *(iVar7 + 0xc) = arg3 & 1;
            *(iVar7 + 0x10) = arg4;
            perf_trace_run_bpf_submit(iVar7,iVar4,puVar8,arg1,1,iStack_70,piVar1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar10 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8003620;
    bpf_trace_run3(in_tmp_ldXn,auVar10._0_8_,auVar10._8_8_,puVar8 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_rpmh_tx_done @ 0x0800362c (size 40) =====

void sym.__bpf_trace_rpmh_tx_done(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,in_x1,arg1 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_rpmh_send_msg @ 0x08003654 (size 48) =====

void sym.__bpf_trace_rpmh_send_msg(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run5(in_x0,in_x1,arg1 & 0xffffffff,arg2 & 0xffffffff,in_w4);
    return;
}


// ===== sym.__bpf_trace_rpmh_solver_set @ 0x08003684 (size 40) =====

void sym.__bpf_trace_rpmh_solver_set(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run2(in_x0,in_x1,arg1 & 1);
    return;
}


// ===== sym.__bpf_trace_rpmh_switch_channel @ 0x080036ac (size 44) =====

void sym.__bpf_trace_rpmh_switch_channel(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,in_x1,arg1 & 0xffffffff,arg2 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_rpmh_drv_enable @ 0x080036d8 (size 44) =====

void sym.__bpf_trace_rpmh_drv_enable(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,in_x1,arg1 & 1,arg2 & 0xffffffff);
    return;
}


// ===== sym.rpmh_rsc_get_channel @ 0x08003704 (size 144) =====

uint sym.rpmh_rsc_get_channel(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) == 1) {
        uVar3 = 0;
    }
    else {
        do {
            uVar1 = sym.readl_relaxed(*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x48));
            uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x4c));
        } while (uVar2 != uVar1);
        if ((uVar1 & 1) == 0) {
            uVar3 = 0xfffffff0;
            if ((uVar1 & 2) != 0) {
                uVar3 = 0;
            }
        }
        else {
            uVar3 = 1;
        }
    }
    return uVar3;
}


// ===== sym.readl_relaxed @ 0x08003794 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003798);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80037cc);
    return uVar1;
}


// ===== sym.rpmh_rsc_invalidate @ 0x08003804 (size 76) =====

void sym.rpmh_rsc_invalidate(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.tcs_invalidate.llvm.14368635875067709643(arg1,0,arg2);
    sym.tcs_invalidate.llvm.14368635875067709643(arg1,1,arg2);
    return;
}


// ===== sym.tcs_invalidate.llvm.14368635875067709643 @ 0x08003850 (size 380) =====

void sym.tcs_invalidate.llvm.14368635875067709643(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint64_t uVar4;
    int iVar5;
    ulong *in_x18;
    uint32_t uVar6;
    uint64_t uVar7;
    int *piVar8;
    uint32_t *puVar9;
    int iVar10;
    ulong unaff_x30;
    
    if (1 < arg3) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x80039cc);
        (*pcVar2)();
    }
    *in_x18 = unaff_x30;
    iVar1 = arg1 + arg3 * 0x150 + (arg2 & 0xffffffffU) * 0x40;
    piVar8 = iVar1 + 0x7c;
    uVar7 = *piVar8 * *(iVar1 + 0x80);
    uVar4 = _find_first_bit(iVar1 + 0xa0,uVar7);
    if (uVar4 != uVar7) {
        iVar5 = *piVar8;
        puVar9 = arg1 + arg3 * 0x150 + (arg2 & 0xffffffffU) * 0x40 + 0x78;
        uVar6 = *puVar9;
        if (uVar6 < uVar6 + iVar5) {
            do {
                iVar5 = (*(arg1 + 0x28))[10];
                sym.writel(0,*(arg1 + 0x20) + **(arg1 + 0x28) * uVar6 + iVar5);
                iVar10 = 1000000;
                do {
                    iVar3 = sym.readl(*(arg1 + 0x20) + iVar5 + **(arg1 + 0x28) * uVar6);
                    if (iVar3 == 0) goto code_r0x080038f8;
                    __const_udelay(0x10c7);
                    iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
                _printk(0x800138f,"qcom_rpmh",arg1,0,uVar6,iVar5);
code_r0x080038f8:
                uVar6 = uVar6 + 1;
                iVar5 = *piVar8;
            } while (uVar6 < iVar5 + *puVar9);
        }
        memset(iVar1 + 0xa0,0,*(iVar1 + 0x80) * iVar5 + 0x3f >> 3 & 0x3ffffff8);
    }
    return;
}


// ===== sym.rpmh_rsc_send_data @ 0x080039cc (size 816) =====

uint64_t sym.rpmh_rsc_send_data(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint64_t *puVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    code *pcVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong *in_x18;
    uint64_t arg2_00;
    int iVar12;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar3 = *arg2;
    if (iVar3 == 2) {
        if (1 < arg3) goto code_r0x08003cd4;
        iVar11 = arg1 + arg3 * 0x150;
        arg2_00 = iVar11 + 0xa8;
        if (*(iVar11 + 0xfc) != 0) {
            arg2_00 = iVar11 + 0xe8;
        }
        if (0xfffffffffffff000 < arg2_00) goto code_r0x08003c94;
code_r0x08003a78:
        iVar11 = arg1 + 0x310;
        uVar10 = _raw_spin_lock_irqsave(iVar11);
        if (*(arg1 + 0x40) == '\0') {
            uVar7 = sym.claim_tcs_for_req(arg1,arg2_00,arg2);
            if (uVar7 < 0) {
                uStack_68 = 0;
                uStack_60 = 0;
                uStack_78 = 0;
                uStack_70 = 0;
                uStack_80 = 0;
                init_wait_entry(&uStack_80,0);
                iVar1 = arg1 + 0x318;
                prepare_to_wait_event(iVar1,&uStack_80,2);
                uVar7 = sym.claim_tcs_for_req(arg1,arg2_00,arg2);
                while (uVar7 < 0) {
                    _raw_spin_unlock_irq(iVar11);
                    schedule();
                    _raw_spin_lock_irq(iVar11);
                    prepare_to_wait_event(iVar1,&uStack_80,2);
                    uVar7 = sym.claim_tcs_for_req(arg1,arg2_00,arg2);
                }
                finish_wait(iVar1,&uStack_80);
            }
            uVar9 = uVar7 - *(arg2_00 + 0x10);
            if (2 < uVar9) goto code_r0x08003cd4;
            puVar2 = arg1 + (uVar7 >> 3 & 0x1ffffff8) + 0x308;
            *(arg2_00 + uVar9 * 8 + 0x20) = arg2;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                    *puVar2 = *puVar2 | 1L << (uVar7 & 0x3f);
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            if ((*arg2 == 2) && (*(arg2_00 + 8) != 2)) {
                iVar3 = (*(arg1 + 0x28))[10];
                sym.writel(0,*(arg1 + 0x20) + **(arg1 + 0x28) * uVar7 + iVar3);
                iVar12 = 1000000;
                do {
                    iVar8 = sym.readl(*(arg1 + 0x20) + iVar3 + **(arg1 + 0x28) * uVar7);
                    if (iVar8 == 0) goto code_r0x08003c20;
                    __const_udelay(0x10c7);
                    iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
                _printk(0x800138f,"qcom_rpmh",arg1,0,uVar7,iVar3);
code_r0x08003c20:
                uVar9 = sym.readl_relaxed(*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x10));
                sym.writel_relaxed(uVar9 | 1L << (uVar7 & 0x3f),*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x10));
            }
            _raw_spin_unlock_irqrestore(iVar11,uVar10);
            sym.__tcs_buffer_write(arg1,uVar7,0,arg2);
            sym.__tcs_set_trigger(arg1,uVar7,1);
            ipc_log_string(*(arg1 + 0x380),"TCS trigger: m=%d",uVar7);
            arg2_00 = 0;
        }
        else {
            _raw_spin_unlock_irqrestore(iVar11,uVar10);
            arg2_00 = 0xfffffff0;
        }
    }
    else if (iVar3 == 1) {
        iVar11 = 1;
code_r0x08003a28:
        if (1 < arg3) goto code_r0x08003cd4;
        arg2_00 = arg1 + arg3 * 0x150 + iVar11 * 0x40 + 0x68;
        if (arg2_00 < 0xfffffffffffff001) goto code_r0x08003a78;
    }
    else {
        if (iVar3 == 0) {
            iVar11 = 0;
            goto code_r0x08003a28;
        }
        arg2_00 = 0xffffffffffffffea;
    }
code_r0x08003c94:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return arg2_00 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08003cd4:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x8003cd8);
    (*pcVar6)();
}


// ===== sym.claim_tcs_for_req @ 0x08003cfc (size 484) =====

void sym.claim_tcs_for_req(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int *piVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    int iVar13;
    uint32_t *puVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    uStack_60 = 0;
    uVar11 = *(arg2 + 0x10);
    uVar10 = *(arg2 + 0x14) + *(arg2 + 0x10);
    uVar4 = _find_next_bit(arg1 + 0x308,0,uVar10,uVar11,0,0);
    uVar15 = *(arg2 + 0x10);
    iVar5 = *(arg2 + 0x14);
    if (uVar4 < iVar5 + uVar15) {
        do {
            uStack_60 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar4 + (*(arg1 + 0x28))[10]);
            uStack_60 = uStack_60 & 0xffffffff;
            iVar5 = _find_first_bit(&uStack_60,*(arg2 + 0x18));
            while (iVar5 < *(arg2 + 0x18)) {
                piVar2 = *(arg1 + 0x28);
                iVar6 = sym.readl_relaxed(*(arg1 + 0x20) + *piVar2 * uVar4 + piVar2[0xc] + piVar2[1] * iVar5);
                if (*(arg3 + 8) != 0) {
                    iVar13 = 0;
                    do {
                        if (iVar6 == *(*(arg3 + 0x10) + iVar13 * 0xc)) {
                            uVar7 = 0xfffffff0;
                            goto code_r0x08003ea4;
                        }
                        iVar13 = iVar13 + 1;
                    } while (*(arg3 + 8) != iVar13);
                }
                uVar10 = *(arg2 + 0x18);
                uVar11 = iVar5 + 1;
                iVar5 = _find_next_bit(&uStack_60,0,uVar10,uVar11,0,0);
            }
            uVar11 = uVar4 + 1;
            uVar10 = *(arg2 + 0x14) + *(arg2 + 0x10);
            uVar4 = _find_next_bit(arg1 + 0x308,0,uVar10,uVar11,0,0);
            uVar15 = *(arg2 + 0x10);
            iVar5 = *(arg2 + 0x14);
        } while (uVar4 < iVar5 + uVar15);
    }
    uVar11 = uVar15;
    uVar12 = uVar15 + iVar5;
    uVar10 = uVar12;
    uVar8 = _find_next_bit(*arg2 + 0x308,0,uVar12,uVar11,0xffffffffffffffff,0);
    uVar7 = uVar8;
    if (uVar12 <= uVar8) {
        uVar7 = 0xfffffff0;
    }
code_r0x08003ea4:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_58) {
        auVar16 = __stack_chk_fail(uVar7);
        iVar9 = auVar16._0_8_;
        *extraout_x18 = sym.__tcs_buffer_write;
        iVar5 = auVar16._8_4_;
        if (*(uVar11 + 8) == 0) {
            uVar15 = 0;
        }
        else {
            uVar10 = uVar10 & 0xffffffff;
            uVar4 = 0;
            uVar15 = 0;
            iVar6 = *(uVar11 + 4);
            uVar3 = sp_el0;
            do {
                puVar14 = *(uVar11 + 0x10) + uVar4 * 0xc;
                piVar2 = *(iVar9 + 0x28);
                iVar13 = uVar10;
                uVar1 = 0x10008;
                if (puVar14[2] != 0 || iVar6 != 0) {
                    uVar1 = 0x10108;
                }
                sym.writel_relaxed(uVar1,*(iVar9 + 0x20) + *piVar2 * iVar5 + piVar2[0xb] + piVar2[1] * iVar13);
                piVar2 = *(iVar9 + 0x28);
                sym.writel_relaxed(*puVar14,*(iVar9 + 0x20) + *piVar2 * iVar5 + piVar2[0xc] + piVar2[1] * iVar13);
                piVar2 = *(iVar9 + 0x28);
                sym.writel_relaxed(puVar14[1],*(iVar9 + 0x20) + *piVar2 * iVar5 + piVar2[0xd] + piVar2[1] * iVar13);
                uVar15 = uVar15 | 1L << (uVar10 & 0x3f);
                ipc_log_string(*(iVar9 + 0x380),"TCS write: m=%d n=%d msgid=%#x addr=%#x data=%#x wait=%d",
                               auVar16._8_8_ & 0xffffffff,uVar10,uVar1,*puVar14,puVar14[1],puVar14[2]);
                uVar4 = uVar4 + 1;
                uVar10 = iVar13 + 1;
            } while (uVar4 < *(uVar11 + 8));
        }
        uVar4 = sym.readl_relaxed(*(iVar9 + 0x20) + **(iVar9 + 0x28) * iVar5 + (*(iVar9 + 0x28))[10]);
        sym.writel_relaxed(uVar4 | uVar15,*(iVar9 + 0x20) + **(iVar9 + 0x28) * iVar5 + (*(iVar9 + 0x28))[10]);
        return;
    }
    return;
}


// ===== sym.__tcs_buffer_write @ 0x08003ee0 (size 632) =====

void sym.__tcs_buffer_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int *piVar2;
    int iVar3;
    ulong uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int iVar6;
    int iVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = arg2;
    if (*(arg4 + 8) == 0) {
        uVar10 = 0;
    }
    else {
        uVar8 = arg3 & 0xffffffff;
        uVar5 = 0;
        uVar10 = 0;
        iVar3 = *(arg4 + 4);
        uVar4 = sp_el0;
        do {
            puVar9 = *(arg4 + 0x10) + uVar5 * 0xc;
            piVar2 = *(arg1 + 0x28);
            iVar7 = uVar8;
            uVar1 = 0x10008;
            if (puVar9[2] != 0 || iVar3 != 0) {
                uVar1 = 0x10108;
            }
            sym.writel_relaxed(uVar1,*(arg1 + 0x20) + *piVar2 * iVar6 + piVar2[0xb] + piVar2[1] * iVar7);
            piVar2 = *(arg1 + 0x28);
            sym.writel_relaxed(*puVar9,*(arg1 + 0x20) + *piVar2 * iVar6 + piVar2[0xc] + piVar2[1] * iVar7);
            piVar2 = *(arg1 + 0x28);
            sym.writel_relaxed(puVar9[1],*(arg1 + 0x20) + *piVar2 * iVar6 + piVar2[0xd] + piVar2[1] * iVar7);
            uVar10 = uVar10 | 1L << (uVar8 & 0x3f);
            ipc_log_string(*(arg1 + 0x380),"TCS write: m=%d n=%d msgid=%#x addr=%#x data=%#x wait=%d",
                           arg2 & 0xffffffff,uVar8,uVar1,*puVar9,puVar9[1],puVar9[2]);
            uVar5 = uVar5 + 1;
            uVar8 = iVar7 + 1;
        } while (uVar5 < *(arg4 + 8));
    }
    uVar5 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * iVar6 + (*(arg1 + 0x28))[10]);
    sym.writel_relaxed(uVar5 | uVar10,*(arg1 + 0x20) + **(arg1 + 0x28) * iVar6 + (*(arg1 + 0x28))[10]);
    return;
}


// ===== sym.__tcs_set_trigger @ 0x08004170 (size 528) =====

void sym.__tcs_set_trigger(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong *in_x18;
    int iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = arg2;
    iVar7 = 1000000;
    uVar3 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * iVar2 + (*(arg1 + 0x28))[8]);
    uVar5 = uVar3 & 0xfeffffff;
    iVar1 = (*(arg1 + 0x28))[8];
    sym.writel(uVar5,*(arg1 + 0x20) + **(arg1 + 0x28) * iVar2 + iVar1);
    iVar6 = 1000000;
    do {
        uVar4 = sym.readl(*(arg1 + 0x20) + iVar1 + **(arg1 + 0x28) * iVar2);
        if (uVar4 == uVar5) goto code_r0x08004244;
        __const_udelay(0x10c7);
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    _printk(0x800138f,"qcom_rpmh",arg1,uVar5,arg2 & 0xffffffff,iVar1);
code_r0x08004244:
    iVar1 = (*(arg1 + 0x28))[8];
    uVar3 = uVar3 & 0xfefeffff;
    sym.writel(uVar3,*(arg1 + 0x20) + **(arg1 + 0x28) * iVar2 + iVar1);
    iVar6 = 1000000;
    do {
        uVar5 = sym.readl(*(arg1 + 0x20) + iVar1 + **(arg1 + 0x28) * iVar2);
        if (uVar5 == uVar3) goto code_r0x080042c8;
        __const_udelay(0x10c7);
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    _printk(0x800138f,"qcom_rpmh",arg1,uVar3,arg2 & 0xffffffff,iVar1);
code_r0x080042c8:
    if ((arg3 & 1U) != 0) {
        iVar1 = (*(arg1 + 0x28))[8];
        sym.writel(0x10000,*(arg1 + 0x20) + **(arg1 + 0x28) * iVar2 + iVar1);
        do {
            iVar6 = sym.readl(*(arg1 + 0x20) + iVar1 + **(arg1 + 0x28) * iVar2);
            if (iVar6 == 0x10000) goto code_r0x08004340;
            __const_udelay(0x10c7);
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        _printk(0x800138f,"qcom_rpmh",arg1,0x10000,arg2 & 0xffffffff,iVar1);
code_r0x08004340:
        sym.writel_relaxed(0x1010000,*(arg1 + 0x20) + **(arg1 + 0x28) * iVar2 + (*(arg1 + 0x28))[8]);
    }
    return;
}


// ===== sym.rpmh_rsc_write_ctrl_data @ 0x08004380 (size 344) =====

uint64_t sym.rpmh_rsc_write_ctrl_data(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *arg2;
    if (iVar6 == 2) {
        if (1 < arg3) goto code_r0x080044d4;
        iVar5 = arg1 + arg3 * 0x150;
        uVar7 = iVar5 + 0xa8;
        if (*(iVar5 + 0xfc) != 0) {
            uVar7 = iVar5 + 0xe8;
        }
    }
    else {
        if (iVar6 == 1) {
            iVar5 = 1;
        }
        else {
            if (iVar6 != 0) {
                uVar7 = 0xffffffffffffffea;
                goto code_r0x080044b4;
            }
            iVar5 = 0;
        }
        if (1 < arg3) {
code_r0x080044d4:
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5512,0x80044d8);
            (*pcVar1)();
        }
        uVar7 = arg1 + arg3 * 0x150 + iVar5 * 0x40 + 0x68;
    }
    if (uVar7 < 0xfffffffffffff001) {
        iVar6 = *(uVar7 + 0x14);
        iVar4 = *(uVar7 + 0x18);
        uVar8 = 0;
        iVar3 = *(arg2 + 8);
        do {
            iVar2 = bitmap_find_next_zero_area_off(uVar7 + 0x38,iVar4 * iVar6,uVar8,iVar3,0,0);
            iVar6 = *(uVar7 + 0x14);
            iVar4 = *(uVar7 + 0x18);
            if (iVar4 * iVar6 <= iVar2) {
                uVar7 = 0xfffffff4;
                goto code_r0x080044b4;
            }
            iVar3 = *(arg2 + 8);
            uVar8 = iVar4 + uVar8;
        } while (uVar8 <= (iVar2 + iVar3) - 1U);
        __bitmap_set(uVar7 + 0x38,iVar2,iVar3);
        iVar6 = *(uVar7 + 0x18);
        iVar4 = 0;
        if (iVar6 != 0) {
            iVar4 = iVar2 / iVar6;
        }
        sym.__tcs_buffer_write(arg1,*(uVar7 + 0x10) + iVar4,iVar2 - iVar4 * iVar6,arg2);
        uVar7 = 0;
    }
code_r0x080044b4:
    return uVar7 & 0xffffffff;
}


// ===== sym.rpmh_rsc_debug @ 0x080044d8 (size 824) =====

void sym.rpmh_rsc_debug(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char *pcVar2;
    char cVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    code *pcVar7;
    int iVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint64_t uVar10;
    int iVar11;
    ulong unaff_x30;
    uint64_t uStack_80;
    char acStack_78 [4];
    char acStack_74 [4];
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    iVar9 = irq_get_irq_data(*(arg1 + 0x3c));
    acStack_74[0] = '\0';
    acStack_78[0] = '\0';
    uStack_80 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    _printk(0x800101e,"qcom_rpmh",arg1);
    iVar8 = *(arg1 + 0x34);
    iVar11 = 0;
    if (0 < iVar8) {
        uVar10 = 0;
        iVar11 = 0;
        do {
            if ((*(arg1 + (uVar10 >> 6) * 8 + 0x308) >> (uVar10 & 0x3f) & 1) != 0) {
                iVar11 = iVar11 + 1;
                sym.print_tcs_info(arg1,uVar10,&uStack_80,acStack_78);
                iVar8 = *(arg1 + 0x34);
            }
            uVar1 = uVar10 + 1;
            uVar10 = uVar1;
        } while (uVar1 < iVar8);
    }
    if (iVar9 == 0) {
        _printk(0x8001074,"qcom_rpmh",arg1);
    }
    else {
        irq_get_irqchip_state(*(arg1 + 0x3c),0,acStack_74);
        pcVar2 = "NOT PENDING";
        if (acStack_74[0] != '\0') {
            pcVar2 = "PENDING";
        }
        _printk(0x800111d,"qcom_rpmh",*(iVar9 + 8),pcVar2);
        uVar10 = completion_done(arg2);
        pcVar2 = "PENDING";
        if ((uVar10 & 1) == 0) {
            pcVar2 = "NOT PENDING";
        }
        _printk(0x800114d,"qcom_rpmh",pcVar2);
        uVar10 = uStack_80 & 0x3f;
        uVar4 = (uStack_80 & 0x2a) >> 1 | (uStack_80 & 0x15) << 1;
        uVar5 = (uVar4 & 0x3333333333333333) << 2;
        uVar6 = 6;
        if (uVar10 != 0) {
            uVar6 = LZCOUNT((uVar5 >> 4 | ((uVar4 & 0xcccccccccccccccc) >> 2 | uVar5 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38)
            ;
        }
        while (uVar6 < 6) {
            strlcat(&uStack_70,*(obj.accl_str + uVar6 * 8),0x14);
            strlcat(&uStack_70,0x8000ff3,0x14);
            if ((4 < uVar6) || (uVar4 = -1L << (uVar6 + 1 & 0x3f) & uVar10, uVar4 == 0)) break;
            uVar4 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
            uVar5 = (uVar4 & 0x3333333333333333) << 2;
            uVar6 = LZCOUNT((uVar5 >> 4 | ((uVar4 & 0xcccccccccccccccc) >> 2 | uVar5 & 0xf0f0f0f0f0f0f0f) << 4) << 0x38)
            ;
        }
        if ((iVar11 == 0 || acStack_74[0] != '\0') && (acStack_78[0] != '\0')) {
            if (acStack_74[0] != '\0') {
                _printk(0x80012c9,"qcom_rpmh");
            }
        }
        else {
            _printk(0x8000f77,"qcom_rpmh",&uStack_70);
        }
        if ((*(arg1 + 0x1b0) == '\0') || (*(arg1 + 0x17c) == 0)) {
code_r0x08004704:
            cVar3 = *(arg1 + 0x300);
        }
        else {
            uVar1 = *(arg1 + 0x178);
            iVar8 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar1 + (*(arg1 + 0x28))[9]);
            if (iVar8 != 0) goto code_r0x08004704;
            _printk(0x8000ff5,"qcom_rpmh");
            sym.print_tcs_info(arg1,uVar1,&uStack_80,acStack_78);
            cVar3 = *(arg1 + 0x300);
        }
        if ((cVar3 != '\0') && (*(arg1 + 0x2cc) != 0)) {
            uVar1 = *(arg1 + 0x2c8);
            iVar8 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar1 + (*(arg1 + 0x28))[9]);
            if (iVar8 == 0) {
                _printk(0x8000ff5,"qcom_rpmh");
                sym.print_tcs_info(arg1,uVar1,&uStack_80,acStack_78);
            }
        }
        if (iVar11 != 0) goto code_r0x0800480c;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return;
    }
    __stack_chk_fail();
code_r0x0800480c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x800,0x8004810);
    (*pcVar7)();
}


// ===== sym.print_tcs_info @ 0x08004810 (size 1200) =====

void sym.print_tcs_info(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ulong uVar2;
    char *pcVar3;
    char *pcVar4;
    int *piVar5;
    char cVar6;
    char cVar7;
    uint32_t uVar8;
    code *pcVar9;
    bool bVar10;
    int iVar11;
    uint32_t uVar12;
    uint uVar13;
    uint uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    int64_t iVar17;
    int64_t iVar18;
    ulong *in_x18;
    uint64_t uVar19;
    uint *puVar20;
    uint64_t uVar21;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    uVar8 = arg2;
    uVar21 = 1L << (arg2 & 0x3fU);
    cVar6 = *(arg1 + 0x1b0);
    if ((cVar6 == '\0') || ((uVar21 & *(arg1 + 0x74)) == 0)) {
        cVar7 = *(arg1 + 0x300);
        if ((cVar7 != '\0') && ((uVar21 & *(arg1 + 0x1c4)) != 0)) {
            iVar18 = 0;
            iVar17 = 1;
            goto code_r0x08004974;
        }
        if ((cVar6 != '\0') && ((uVar21 & *(arg1 + 0xb4)) != 0)) {
            iVar17 = 0;
            iVar18 = 1;
            goto code_r0x08004974;
        }
        if ((cVar7 != '\0') && ((uVar21 & *(arg1 + 0x204)) != 0)) {
            iVar18 = 1;
            iVar17 = 1;
            goto code_r0x08004974;
        }
        if ((cVar6 != '\0') && ((uVar21 & *(arg1 + 0xf4)) != 0)) {
            iVar17 = 0;
            iVar18 = 2;
            goto code_r0x08004974;
        }
        if ((cVar7 != '\0') && ((uVar21 & *(arg1 + 0x244)) != 0)) {
            iVar17 = 1;
            iVar18 = 2;
            goto code_r0x08004974;
        }
        if ((cVar6 != '\0') && ((uVar21 & *(arg1 + 0x134)) != 0)) {
            iVar17 = 0;
            iVar18 = 3;
            goto code_r0x08004974;
        }
        if ((cVar7 != '\0') && ((uVar21 & *(arg1 + 0x284)) != 0)) {
            iVar17 = 1;
            iVar18 = 3;
            goto code_r0x08004974;
        }
        if ((cVar6 != '\0') && ((uVar21 & *(arg1 + 0x174)) != 0)) {
            iVar17 = 0;
code_r0x08004970:
            iVar18 = 4;
            goto code_r0x08004974;
        }
        if ((cVar7 != '\0') && ((uVar21 & *(arg1 + 0x2c4)) != 0)) {
            iVar17 = 1;
            goto code_r0x08004970;
        }
        iVar17 = 0;
        if (cVar6 != '\0') goto code_r0x08004988;
code_r0x080049a8:
        if (*(arg1 + 0x300) != '\0') {
            iVar18 = arg1 + 0x1f8;
            if (*(arg1 + 0x24c) != 0) {
                iVar18 = arg1 + 0x238;
            }
            if ((uVar21 & *(iVar18 + 0xc)) != 0) goto code_r0x080049d0;
        }
        puVar20 = NULL;
    }
    else {
        iVar18 = 0;
        iVar17 = 0;
code_r0x08004974:
        iVar17 = arg1 + iVar17 * 0x150 + iVar18 * 0x40 + 0x68;
        if (cVar6 == '\0') goto code_r0x080049a8;
code_r0x08004988:
        iVar18 = arg1 + 0xa8;
        if (*(arg1 + 0xfc) != 0) {
            iVar18 = arg1 + 0xe8;
        }
        if ((uVar21 & *(iVar18 + 0xc)) == 0) goto code_r0x080049a8;
code_r0x080049d0:
        uVar12 = uVar8 - *(iVar18 + 0x10);
        if (2 < uVar12) goto code_r0x08004cbc;
        puVar20 = *(iVar18 + uVar12 * 8 + 0x20);
    }
    uVar19 = *(arg1 + (uVar8 >> 6) * 8 + 0x308);
    iVar11 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar8 + (*(arg1 + 0x28))[9]);
    uVar12 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar8 + (*(arg1 + 0x28))[10]);
    uStack_70 = uVar12;
    if ((iVar17 != 0) && (uVar12 != 0)) {
        if (puVar20 != NULL) {
            uVar13 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar8 + (*(arg1 + 0x28))[8]);
            uVar16 = sym.readl_relaxed(*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x14));
            uVar1 = 0x8001172;
            if ((uVar19 & 1L << (arg2 & 0x3fU)) != 0) {
                uVar1 = 0x8001037;
            }
            uVar2 = 0x8001037;
            if (*(iVar17 + 8) != 2) {
                uVar2 = 0x8001172;
            }
            _printk(0x800144e,"qcom_rpmh",uVar1,uVar2,*(iVar17 + 8),*puVar20,puVar20[1]);
            pcVar3 = "BUSY";
            if (iVar11 != 0) {
                pcVar3 = "IDLE";
            }
            bVar10 = (uVar21 & uVar16 & 0xffffffff) != 0;
            pcVar4 = "COMPLETED";
            if (!bVar10) {
                pcVar4 = "PENDING";
            }
            _printk(0x80011b2,"qcom_rpmh",arg2 & 0xffffffff,pcVar3,uVar13,pcVar4);
            *arg4 = bVar10;
        }
        iVar11 = _find_first_bit(&uStack_70,*(iVar17 + 0x18));
        if (iVar11 < *(iVar17 + 0x18)) {
            do {
                piVar5 = *(arg1 + 0x28);
                uVar12 = sym.readl_relaxed(*(arg1 + 0x20) + *piVar5 * uVar8 + piVar5[0xc] + piVar5[1] * iVar11);
                piVar5 = *(arg1 + 0x28);
                uVar13 = sym.readl_relaxed(*(arg1 + 0x20) + *piVar5 * uVar8 + piVar5[0xd] + piVar5[1] * iVar11);
                piVar5 = *(arg1 + 0x28);
                uVar14 = sym.readl_relaxed(*(arg1 + 0x20) + *piVar5 * uVar8 + piVar5[0xb] + piVar5[1] * iVar11);
                piVar5 = *(arg1 + 0x28);
                uVar15 = sym.readl_relaxed(*(arg1 + 0x20) + *piVar5 * uVar8 + piVar5[0xe] + piVar5[1] * iVar11);
                _printk(0x80010dd,"qcom_rpmh",iVar11,uVar12,uVar13,uVar14,uVar15);
                if ((uVar15 & 0x10100) == 0x100) {
                    *arg3 = *arg3 | 1L << (uVar12 >> 0x10 & 0xf);
                }
                iVar11 = _find_next_bit(&uStack_70,0,*(iVar17 + 0x18),iVar11 + 1,0,0);
            } while (iVar11 < *(iVar17 + 0x18));
        }
    }
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08004cbc:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8004cc0);
    (*pcVar9)();
}


// ===== sym.rpmh_rsc_mode_solver_set @ 0x08004cc0 (size 160) =====

uint sym.rpmh_rsc_mode_solver_set(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = _raw_spin_trylock(arg1 + 0x310);
    if (iVar1 == 0) {
        uVar3 = 0xfffffff0;
    }
    else {
        if (((arg2 & 1U) == 0) || (uVar2 = sym.rpmh_rsc_ctrlr_is_busy(arg1), (uVar2 & 1) == 0)) {
            *(arg1 + 0x40) = arg2 & 1;
            ipc_log_string(*(arg1 + 0x380),"solver mode set: %d",arg2 & 1);
            uVar3 = 0;
        }
        else {
            uVar3 = 0xfffffff0;
        }
        _raw_spin_unlock(arg1 + 0x310);
    }
    return uVar3;
}


// ===== sym.rpmh_rsc_ctrlr_is_busy @ 0x08004e0c (size 292) =====

ulong sym.rpmh_rsc_ctrlr_is_busy(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x1b0) == '\0') {
code_r0x08004e9c:
        if (*(arg1 + 0x300) != '\0') {
            iVar1 = arg1 + 0x1f8;
            if (*(arg1 + 0x24c) != 0) {
                iVar1 = arg1 + 0x238;
            }
            uVar5 = *(iVar1 + 0x14) + *(iVar1 + 0x10);
            uVar3 = _find_next_bit(arg1 + 0x308,0,uVar5,*(iVar1 + 0x10),0,0);
            if ((uVar3 < uVar5) ||
               ((*(arg1 + 0x2cc) != 0 &&
                (iVar2 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * *(arg1 + 0x2c8) + (*(arg1 + 0x28))[9]),
                iVar2 == 0)))) goto code_r0x08004ee0;
        }
        uVar4 = 0;
    }
    else {
        iVar1 = arg1 + 0xa8;
        if (*(arg1 + 0xfc) != 0) {
            iVar1 = arg1 + 0xe8;
        }
        uVar5 = *(iVar1 + 0x14) + *(iVar1 + 0x10);
        uVar3 = _find_next_bit(arg1 + 0x308,0,uVar5,*(iVar1 + 0x10),0,0);
        if ((uVar5 <= uVar3) &&
           ((*(arg1 + 0x17c) == 0 ||
            (iVar2 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * *(arg1 + 0x178) + (*(arg1 + 0x28))[9]),
            iVar2 != 0)))) goto code_r0x08004e9c;
code_r0x08004ee0:
        uVar4 = 1;
    }
    return uVar4;
}


// ===== sym.rpmh_rsc_is_tcs_completed @ 0x08004f30 (size 192) =====

ulong sym.rpmh_rsc_is_tcs_completed(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = 4;
    if (arg2 == 0) {
        uVar4 = 1;
    }
    iVar1 = -9;
    do {
        iVar5 = iVar1;
        uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x44));
        iVar1 = iVar5 + 1;
    } while ((uVar2 & uVar4) == 0 && iVar5 != 0);
    if (iVar5 == 0) {
        uVar3 = 0xfffffff0;
    }
    else {
        sym.writel_relaxed(0x80000000,*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x44));
        uVar3 = 0;
    }
    ipc_log_string(*(arg1 + 0x380),"channel switched to: %d ret: %d",arg2,uVar3);
    return 0;
}


// ===== sym.writel_relaxed @ 0x080050ac (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80050c8);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80050f0);
    return;
}


// ===== sym.rpmh_rsc_switch_channel @ 0x08005124 (size 92) =====

ulong sym.rpmh_rsc_switch_channel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(1L << (arg2 & 0x3fU),*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x48));
    sym.rpmh_rsc_is_tcs_completed(arg1,arg2);
    return 0;
}


// ===== sym.rpmh_rsc_drv_enable @ 0x08005180 (size 460) =====

int sym.rpmh_rsc_drv_enable(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock(arg1 + 0x310);
    uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x50));
    uVar1 = arg2 & 1;
    if (uVar2 == uVar1) {
        iVar3 = -0x16;
    }
    else if ((arg2 & 1U) == 0) {
        if (*(arg1 + 0x38) == 1) {
            uVar4 = 0;
        }
        else {
            do {
                uVar2 = sym.readl_relaxed(*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x48));
                uVar4 = sym.readl_relaxed(*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x4c));
            } while (uVar4 != uVar2);
            if ((uVar2 & 1) == 0) {
                uVar4 = 0;
                iVar3 = 0;
                if ((uVar2 >> 1 & 1) == 0) goto code_r0x08005304;
            }
            else {
                uVar4 = 1;
            }
        }
        iVar3 = sym.rpmh_flush(arg1 + 0x330,uVar4);
        if (iVar3 == 0) {
            sym.writel_relaxed(1 << uVar4,*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x48));
            sym.rpmh_rsc_is_tcs_completed(arg1,uVar4);
            sym.writel_relaxed(0,*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x48));
            sym.writel_relaxed(uVar1,*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x50));
        }
    }
    else {
        iVar3 = sym.rpmh_flush(arg1 + 0x330,0);
        if (iVar3 == 0) {
            sym.writel_relaxed(uVar1,*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x50));
            sym.writel_relaxed(1,*(arg1 + 0x18) + *(*(arg1 + 0x28) + 0x48));
            sym.rpmh_rsc_is_tcs_completed(arg1,0);
        }
    }
code_r0x08005304:
    _raw_spin_unlock(arg1 + 0x310);
    ipc_log_string(*(arg1 + 0x380),"drv enable: %d ret: %d",uVar1,iVar3);
    return iVar3;
}


// ===== sym.rpmh_rsc_init_fast_path @ 0x080053fc (size 180) =====

ulong sym.rpmh_rsc_init_fast_path(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    
    if (arg3 < 2) {
        *in_x18 = unaff_x30;
        if (*(arg1 + arg3 * 0x150 + 0x17c) == 0) {
            uVar3 = 0xffffffed;
        }
        else {
            arg2_00 = *(arg1 + arg3 * 0x150 + 0x178);
            uVar2 = sym.readl_relaxed(*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x10));
            sym.writel_relaxed(uVar2 & (1L << (arg2_00 & 0x3f) ^ 0xffffffff),*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x10))
            ;
            sym.__tcs_buffer_write(arg1,arg2_00,0,arg2);
            uVar3 = 0;
        }
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80054b0);
    (*pcVar1)();
}


// ===== sym.rpmh_rsc_update_fast_path @ 0x080054b0 (size 464) =====

ulong sym.rpmh_rsc_update_fast_path(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int *piVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    ulong uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    if (1 < arg4) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8005680);
        (*pcVar3)();
    }
    *in_x18 = unaff_x30;
    if (*(arg1 + arg4 * 0x150 + 0x17c) == 0) {
        uVar5 = 0xffffffed;
    }
    else {
        uVar2 = *(arg1 + arg4 * 0x150 + 0x178);
        iVar4 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar2 + (*(arg1 + 0x28))[9]);
        if (iVar4 == 0) {
            __const_udelay(0x10c7);
            iVar4 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar2 + (*(arg1 + 0x28))[9]);
            if (iVar4 == 0) {
                __const_udelay(0x10c7);
                iVar4 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar2 + (*(arg1 + 0x28))[9]);
                if (iVar4 == 0) {
                    __const_udelay(0x10c7);
                    iVar4 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar2 + (*(arg1 + 0x28))[9]);
                    if (iVar4 == 0) {
                        __const_udelay(0x10c7);
                        iVar4 = sym.readl_relaxed(*(arg1 + 0x20) + **(arg1 + 0x28) * uVar2 + (*(arg1 + 0x28))[9]);
                        if (iVar4 == 0) {
                            _printk(0x8000fb1,"qcom_rpmh");
                            return 0xfffffff0;
                        }
                    }
                }
            }
        }
        uVar6 = *(arg2 + 8);
        if (uVar6 != 0) {
            uVar7 = 0;
            do {
                if (((arg3 & 0xffffffffU) >> (uVar7 & 0x3f) & 1) != 0) {
                    piVar1 = *(arg1 + 0x28);
                    sym.writel_relaxed(*(*(arg2 + 0x10) + uVar7 * 0xc + 4),
                                       *(arg1 + 0x20) + *piVar1 * uVar2 + piVar1[0xd] + piVar1[1] * uVar7);
                    uVar6 = *(arg2 + 8);
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
        }
        sym.__tcs_set_trigger(arg1,uVar2,1);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.rpmh_rsc_get_device @ 0x08005680 (size 208) =====

ulong sym.rpmh_rsc_get_device(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    uint64_t uVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.rpmh_rsc_dev_list != obj.rpmh_rsc_dev_list) {
        uVar4 = arg2 & 0xffffffff;
        pcVar5 = _obj.rpmh_rsc_dev_list;
        do {
            iVar1 = strcmp(arg1,pcVar5 + -0x28);
            if (iVar1 == 0) {
                if (0xfffffffffffff000 < pcVar5 + -0x28) {
                    return 0xffffffffffffffed;
                }
                uVar2 = *(pcVar5 + -0x14);
                uVar3 = uVar4;
                if (*(pcVar5 + -0x14) < 1) {
                    return 0xffffffffffffffed;
                }
                while ((uVar3 != 0 || (*(*(pcVar5 + -0x10) + uVar4 * 0x390 + 0x41) == '\0'))) {
                    uVar2 = uVar2 - 1;
                    uVar3 = uVar3 - 1;
                    if (uVar2 == 0) {
                        return 0xffffffffffffffed;
                    }
                }
                return *(*(pcVar5 + -0x10) + uVar4 * 0x390 + 0x378);
            }
            pcVar5 = *pcVar5;
        } while (pcVar5 != obj.rpmh_rsc_dev_list);
    }
    return 0xffffffffffffffed;
}


// ===== sym.trace_raw_output_rpmh_tx_done @ 0x08005750 (size 120) =====

void sym.trace_raw_output_rpmh_tx_done(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: ack: tcs-m: %d addr: %#x data: %#x\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10),*(iVar2 + 0x14));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_send_msg @ 0x080057c8 (size 140) =====

void sym.trace_raw_output_rpmh_send_msg(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: send-msg: tcs(m): %d cmd(n): %d msgid: %#x addr: %#x data: %#x complete: %d\n",
                           iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x14),*(iVar2 + 0x18),
                           *(iVar2 + 0x1c),*(iVar2 + 0x20));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_solver_set @ 0x08005854 (size 116) =====

void sym.trace_raw_output_rpmh_solver_set(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: solver mode set: %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_switch_channel @ 0x080058c8 (size 116) =====

void sym.trace_raw_output_rpmh_switch_channel(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: channel switched to: %d ret: %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_rpmh_drv_enable @ 0x0800593c (size 120) =====

void sym.trace_raw_output_rpmh_drv_enable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"%s: drv enable: %d ret: %d\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.writel @ 0x080059b4 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80059d0);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80059fc);
    return;
}


// ===== sym.readl @ 0x08005a30 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8005a34);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8005a78);
    return uVar1;
}


// ===== sym.rpmh_rsc_probe @ 0x08005ab0 (size 2528) =====

uint64_t sym.rpmh_rsc_probe(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar auVar6 [16];
    code *pcVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    int64_t iVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    int64_t iVar21;
    int64_t *piVar22;
    ulong *in_x18;
    int64_t iVar23;
    int64_t *piVar24;
    uint32_t uVar25;
    ulong uVar26;
    ulong uVar27;
    uint64_t uVar28;
    int64_t *piVar29;
    ulong unaff_x30;
    uint32_t uStack_a8;
    int iStack_a4;
    int iStack_a0;
    uint32_t uStack_9c;
    uint32_t auStack_98 [2];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_70 = *(iVar13 + 0x5e0);
    uVar26 = *(arg1 + 0x300);
    iStack_a4 = 0;
    iStack_a0 = 0;
    uVar12 = cmd_db_ready();
    uVar28 = uVar12 & 0xffffffff;
    if (uVar12 == -0x205) goto code_r0x08006440;
    piVar1 = arg1 + 0x10;
    if (uVar12 != 0) {
        _dev_err(piVar1,"Command DB not available (%d)\n",uVar12 & 0xffffffff);
        goto code_r0x08006440;
    }
    uVar8 = cmd_db_is_standalone();
    reloc.__traceiter_rpmh_tx_done.cfi_jt = uVar8 & 1;
    if ((uVar8 & 1) != 0) {
        _dev_info(piVar1,"RPMH is running in standalone mode.\n");
    }
    iVar13 = devm_kmalloc(piVar1,0x38,0xdc0);
    if (iVar13 == 0) {
code_r0x08006178:
        uVar28 = 0xfffffff4;
    }
    else {
        uVar28 = of_property_read_variable_u32_array(uVar26,"qcom,drv-count",&iStack_a4,1,0);
        if (-1 < uVar28) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = iStack_a4;
            if ((SUB168(auVar6 * ZEXT816(0x390),8) != 0) ||
               (iVar14 = devm_kmalloc(piVar1,iStack_a4 * 0x390,0xdc0), iVar14 == 0)) goto code_r0x08006178;
            iVar15 = of_get_property(uVar26,"label",0);
            if ((iVar15 == 0) && (iVar15 = *(arg1 + 0x80), iVar15 == 0)) {
                iVar15 = *piVar1;
            }
            *(iVar13 + 0x14) = iStack_a4;
            *(iVar13 + 0x18) = iVar14;
            *(iVar13 + 0x20) = piVar1;
            scnprintf(iVar13,0x14,0x800101b,iVar15);
            iVar16 = of_get_next_child(uVar26,0);
            if (iVar16 != 0) {
                do {
                    uVar12 = of_node_name_eq(iVar16,0x80013b5);
                    if ((uVar12 & 1) != 0) {
                        uVar28 = of_property_read_variable_u32_array(iVar16,"qcom,drv-id",&iStack_a0,1,0);
                        if (uVar28 < 0) goto code_r0x0800643c;
                        scnprintf(iVar14 + iStack_a0 * 0x390,0x14,"%s-drv-%d",iVar15);
                        uVar28 = devm_platform_ioremap_resource(arg1,iStack_a0);
                        *(iVar14 + iStack_a0 * 0x390 + 0x18) = uVar28;
                        if (0xfffffffffffff000 < uVar28) goto code_r0x08006440;
                        iVar17 = kmem_cache_alloc_trace(_event_triggers_call,0xdc0,0x390);
                        if (iVar17 == 0) goto code_r0x08006178;
                        iVar18 = *(arg1 + 0x80);
                        *(iVar17 + 0x60) = piVar1;
                        *(iVar17 + 0x2f0) = iVar16;
                        iVar19 = iVar14 + iStack_a0 * 0x390;
                        *(iVar19 + 0x30) = iStack_a0;
                        *(iVar19 + 0x388) = arg1;
                        *(iVar19 + 0x378) = iVar17;
                        if (iVar18 == 0) {
                            iVar18 = *piVar1;
                        }
                        dev_set_name(iVar17,"%s:%pOFn%d",iVar18,iVar16);
                        uVar28 = device_register(iVar17);
                        if (uVar28 != 0) goto code_r0x0800643c;
                        uVar9 = sym.readl_relaxed(*(iVar14 + iStack_a0 * 0x390 + 0x18));
                        iVar19 = iStack_a0;
                        iVar18 = iVar14 + iVar19 * 0x390;
                        pcVar7 = obj.rpmh_rsc_reg_offsets_ver_3_0;
                        if ((uVar9 & 0xff0000) < 0x20001) {
                            pcVar7 = obj.rpmh_rsc_reg_offsets_ver_2_7;
                        }
                        piVar29 = iVar18 + 0x28;
                        *piVar29 = pcVar7;
                        uVar27 = *(*(iVar18 + 0x378) + 0x2f0);
                        uStack_9c = 0;
                        uVar28 = of_property_read_variable_u32_array(uVar27,"qcom,tcs-offset",&uStack_9c,1,0);
                        if (uVar28 < 0) goto code_r0x0800643c;
                        iVar23 = iVar14 + iVar19 * 0x390;
                        iVar21 = *piVar29;
                        piVar24 = iVar23 + 0x20;
                        *piVar24 = *(iVar23 + 0x18) + uStack_9c;
                        uVar9 = sym.readl_relaxed(*(iVar23 + 0x18) + *(iVar21 + 0xc));
                        iVar10 = *(iVar23 + 0x30);
                        iVar21 = of_get_next_child(uVar27,0);
                        if (iVar21 == 0) {
                            uStack_a8 = 0;
                        }
                        else {
                            uVar5 = iVar10 * 6;
                            piVar2 = iVar23 + 0x34;
                            uStack_a8 = 0;
                            do {
                                uVar12 = of_node_name_eq(iVar21,"channel");
                                if ((uVar12 & 1) != 0) {
                                    uStack_80 = 0;
                                    uStack_78 = 0;
                                    uStack_90 = 0;
                                    uStack_88 = 0;
                                    auStack_98[0] = 0;
                                    auStack_98[1] = 0;
                                    if (2 < uStack_a8) goto code_r0x0800648c;
                                    iVar10 = of_property_count_elems_of_size(iVar21,"qcom,tcs-config",4);
                                    if (iVar10 == 10) {
                                        uVar28 = of_property_read_u32_index(iVar21,"qcom,tcs-config",0,auStack_98);
                                        if (uVar28 != 0) goto code_r0x0800643c;
                                        if (auStack_98[0] < 5) {
                                            uVar28 = of_property_read_u32_index
                                                               (iVar21,"qcom,tcs-config",1,auStack_98 | 4);
                                            if (uVar28 != 0) goto code_r0x0800643c;
                                            if (auStack_98[1] < 4) {
                                                uVar28 = of_property_read_u32_index
                                                                   (iVar21,"qcom,tcs-config",2,&uStack_90);
                                                if (uVar28 != 0) goto code_r0x0800643c;
                                                if (uStack_90 < 5) {
                                                    uVar28 = of_property_read_u32_index
                                                                       (iVar21,"qcom,tcs-config",3,&uStack_90 + 4);
                                                    if (uVar28 != 0) goto code_r0x0800643c;
                                                    if (uStack_90._4_4_ < 4) {
                                                        uVar28 = of_property_read_u32_index
                                                                           (iVar21,"qcom,tcs-config",4,&uStack_88);
                                                        if (uVar28 != 0) goto code_r0x0800643c;
                                                        if (uStack_88 < 5) {
                                                            uVar28 = of_property_read_u32_index
                                                                               (iVar21,"qcom,tcs-config",5,
                                                                                &uStack_88 + 4);
                                                            if (uVar28 != 0) goto code_r0x0800643c;
                                                            if (uStack_88._4_4_ < 4) {
                                                                uVar28 = of_property_read_u32_index
                                                                                   (iVar21,"qcom,tcs-config",6,
                                                                                    &uStack_80);
                                                                if (uVar28 != 0) goto code_r0x0800643c;
                                                                if (uStack_80 < 5) {
                                                                    uVar28 = of_property_read_u32_index
                                                                                       (iVar21,"qcom,tcs-config",7,
                                                                                        &uStack_80 + 4);
                                                                    if (uVar28 != 0) goto code_r0x0800643c;
                                                                    if (uStack_80._4_4_ < 4) {
                                                                        uVar28 = of_property_read_u32_index
                                                                                           (iVar21,"qcom,tcs-config",8
                                                                                            ,&uStack_78);
                                                                        if (uVar28 != 0) goto code_r0x0800643c;
                                                                        if (uStack_78 < 5) {
                                                                            uVar28 = of_property_read_u32_index
                                                                                               (iVar21,
                                                            "qcom,tcs-config",9,&uStack_78 + 4);
                                                            if (uVar28 != 0) goto code_r0x0800643c;
                                                            if (uStack_78._4_4_ < 4) {
                                                                iVar23 = 0;
                                                                uVar25 = 0;
                                                                uVar12 = uStack_a8;
                                                                do {
                                                                    uVar11 = *(auStack_98 + iVar23);
                                                                    uVar20 = uVar11;
                                                                    if (5 < uVar11) goto code_r0x0800648c;
                                                                    piVar22 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150 +
                                                                              uVar20 * 0x40 + 0x68;
                                                                    if (*piVar22 != 0) goto code_r0x080063c0;
                                                                    *piVar22 = iVar18;
                                                                    iVar3 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150 +
                                                                            uVar20 * 0x40;
                                                                    uVar4 = *(auStack_98 + iVar23 + 4);
                                                                    *(iVar3 + 0x70) = uVar11;
                                                                    *(iVar3 + 0x7c) = uVar4;
                                                                    *(iVar3 + 0x80) = uVar9 >> 0x1b;
                                                                    if ((uVar4 != 0) && (uVar11 != 3)) {
                                                                        uVar11 = uVar4 + uVar25;
                                                                        uVar28 = 0xffffffea;
                                                                        if (((0x3f << (uVar5 & 0x1f) & uVar9) >>
                                                                             (uVar5 & 0x1f) < uVar11) || (0x1f < uVar11)
                                                                           ) goto code_r0x08006440;
                                                                        iVar10 = *piVar2;
                                                                        iVar3 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150
                                                                                + uVar20 * 0x40;
                                                                        *(iVar3 + 0x74) =
                                                                             ~(-1 << (uVar4 & 0x1f)) <<
                                                                             (iVar10 + uVar25 & 0x1f);
                                                                        *(iVar3 + 0x78) = iVar10 + uVar25;
                                                                        uVar25 = uVar11;
                                                                    }
                                                                    iVar23 = iVar23 + 8;
                                                                } while (iVar23 != 0x28);
                                                                uVar11 = sym.readl_relaxed(*piVar24 + *(*piVar29 + 0x10)
                                                                                          );
                                                                if (uStack_a8 < 2) {
                                                                    iVar23 = iVar14 + iVar19 * 0x390 + uVar12 * 0x150;
                                                                    sym.writel_relaxed(*(iVar23 + 0xf4) | uVar11,
                                                                                       *piVar24 + *(*piVar29 + 0x10));
                                                                    *(iVar23 + 0x1a8) = iVar18;
                                                                    uStack_a8 = uStack_a8 + 1;
                                                                    *piVar2 = *piVar2 + uVar25;
                                                                    *(iVar23 + 0x1b0) = 1;
                                                                    goto code_r0x08005e60;
                                                                }
                                                                goto code_r0x0800648c;
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
code_r0x080063c0:
                                    uVar28 = 0xffffffea;
                                    goto code_r0x08006440;
                                }
code_r0x08005e60:
                                iVar21 = of_get_next_child(uVar27,iVar21);
                            } while (iVar21 != 0);
                        }
                        iVar18 = iVar14 + iStack_a0 * 0x390;
                        *(iVar14 + iVar19 * 0x390 + 0x38) = uStack_a8;
                        *(iVar17 + 0x98) = iVar18;
                        *(iVar18 + 0x41) = 1;
                    }
                    iVar16 = of_get_next_child(uVar26,iVar16);
                } while (iVar16 != 0);
            }
            iStack_a0 = 0;
            iVar10 = iStack_a4;
            if (0 < iStack_a4) {
                do {
                    if (*(iVar14 + iStack_a0 * 0x390 + 0x41) != '\0') {
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        uVar9 = sym.readl_relaxed(*(iVar15 + 0x18) + *(*(iVar15 + 0x28) + 8));
                        iVar15 = of_find_property(uVar26,"power-domains",0);
                        if (iVar15 == 0) {
                            if ((uVar9 >> 0x18 & 1) == 0) {
                                iVar15 = of_find_property(uVar26,"qcom,hw-channel",0);
                                if (iVar15 == 0) {
                                    iVar15 = iVar14 + iStack_a0 * 0x390;
                                    *(iVar15 + 0x48) =
                                         sym.rpmh_rsc_cpu_pm_callback.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
                                    *(iVar15 + 0x58) = 0x7fffffff;
                                    cpu_pm_register_notifier();
                                }
                                else {
                                    iVar15 = iVar14 + iStack_a0 * 0x390;
                                    *(iVar15 + 0x348) = 3;
                                    *(iVar15 + 0x345) = 1;
                                    *(iVar15 + 0x40) = 1;
                                    *(iVar15 + 0x28) = obj.rpmh_rsc_reg_offsets_ver_3_0_hw_channel;
                                }
                            }
                            else {
                                *(iVar14 + iStack_a0 * 0x390 + 0x348) = 1;
                            }
                        }
                        else {
                            iVar15 = iStack_a0;
                            iVar16 = iVar14 + iVar15 * 0x390;
                            pm_runtime_enable(*(iVar16 + 0x388) + 0x10);
                            uVar28 = dev_pm_domain_attach(*(iVar16 + 0x388) + 0x10,0);
                            if (uVar28 != 0) goto code_r0x0800643c;
                            iVar17 = iVar14 + iVar15 * 0x390;
                            iVar15 = *(iVar16 + 0x388);
                            *(iVar17 + 0x360) = sym.rpmh_rsc_pd_cb.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt;
                            uVar28 = dev_pm_genpd_add_notifier(iVar15 + 0x10,iVar17 + 0x360);
                            if (uVar28 != 0) goto code_r0x0800643c;
                        }
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x310) = 0;
                        __init_waitqueue_head(iVar15 + 0x318,"&drv[i].tcs_wait",0x8000501);
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x308) = 0;
                        uVar12 = platform_get_irq(arg1,*(iVar15 + 0x30));
                        uVar28 = uVar12 & 0xffffffff;
                        if (uVar12 < 0) goto code_r0x08006440;
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x3c) = uVar12;
                        uVar28 = devm_request_threaded_irq
                                           (piVar1,uVar28,sym.tcs_tx_done.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt,0,
                                            0x4004,iVar15,iVar15);
                        if (uVar28 != 0) goto code_r0x0800643c;
                        iVar15 = iVar14 + iStack_a0 * 0x390;
                        *(iVar15 + 0x340) = 0;
                        *(iVar15 + 0x330) = iVar15 + 0x330;
                        *(iVar15 + 0x338) = iVar15 + 0x330;
                        *(iVar15 + 0x350) = iVar15 + 0x350;
                        *(iVar15 + 0x358) = iVar15 + 0x350;
                        uVar27 = ipc_log_context_create(2,iVar15,0);
                        iVar10 = _segment.ehdr;
                        iVar15 = iStack_a0;
                        iVar16 = _segment.ehdr;
                        *(iVar14 + iVar15 * 0x390 + 0x380) = uVar27;
                        if (iVar10 < 5) {
                            _segment.ehdr = iVar10 + 1;
                            *(reloc.__traceiter_rpmh_send_msg.cfi_jt + iVar16 * 8) = iVar14 + iVar15 * 0x390;
                        }
                        uVar28 = devm_of_platform_populate(*(iVar14 + iVar15 * 0x390 + 0x378));
                        iVar10 = iStack_a4;
                        if (uVar28 != 0) goto code_r0x0800643c;
                    }
                    iStack_a0 = iStack_a0 + 1;
                } while (iStack_a0 < iVar10);
            }
            piVar29 = iVar13 + 0x28;
            *(iVar13 + 0x28) = piVar29;
            *(iVar13 + 0x30) = piVar29;
            piVar24 = *0x8000d68;
            uVar12 = __list_add_valid(piVar29,*0x8000d68,obj.rpmh_rsc_dev_list);
            if ((uVar12 & 1) != 0) {
                *0x8000d68 = piVar29;
                *(iVar13 + 0x28) = obj.rpmh_rsc_dev_list;
                *(iVar13 + 0x30) = piVar24;
                *piVar24 = piVar29;
            }
            *(arg1 + 0xa8) = iVar13;
            uVar28 = devm_of_platform_populate(piVar1);
        }
code_r0x0800643c:
        uVar28 = uVar28 & 0xffffffff;
    }
code_r0x08006440:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return uVar28 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x0800648c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x5512,0x8006490);
    (*pcVar7)();
}


// ===== sym.rpmh_rsc_cpu_pm_callback @ 0x08006490 (size 500) =====

ulong sym.rpmh_rsc_cpu_pm_callback(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int *piVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 - 1U < 2) {
        piVar2 = arg1 + 0x18;
        Hint_Prefetch(piVar2,2,0,1);
        do {
            cVar5 = '\x01';
            bVar6 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
                *piVar2 = *piVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
            }
        } while (cVar5 != '\0');
        return 1;
    }
    if (arg2 != 0) {
        return 0;
    }
    puVar3 = arg1 + 0x18;
    Hint_Prefetch(puVar3,2,0,1);
    do {
        uVar1 = *puVar3 + 1;
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
            *puVar3 = uVar1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    DataMemoryBarrier(2,3);
    if (uVar1 < ___num_online_cpus) {
        return 1;
    }
    iVar4 = arg1 + 0x2c8;
    iVar7 = _raw_spin_trylock(iVar4);
    if (iVar7 == 0) {
        return 1;
    }
    if (*(arg1 + -0x10) == 1) {
code_r0x08006528:
        uVar8 = 0;
    }
    else {
        do {
            uVar8 = sym.readl_relaxed(*(arg1 + -0x30) + *(*(arg1 + -0x20) + 0x48));
            uVar9 = sym.readl_relaxed(*(arg1 + -0x30) + *(*(arg1 + -0x20) + 0x4c));
        } while (uVar9 != uVar8);
        if ((uVar8 & 1) == 0) {
            if ((uVar8 >> 1 & 1) == 0) goto code_r0x0800659c;
            goto code_r0x08006528;
        }
        uVar8 = 1;
    }
    uVar10 = sym.rpmh_rsc_ctrlr_is_busy(arg1 + -0x48);
    if (((uVar10 & 1) == 0) && (iVar7 = sym.rpmh_flush(arg1 + 0x2e8,uVar8), iVar7 == 0)) {
        _raw_spin_unlock(iVar4);
        return 1;
    }
code_r0x0800659c:
    _raw_spin_unlock(iVar4);
    if (uVar1 < ___num_online_cpus) {
        return 1;
    }
    Hint_Prefetch(puVar3,2,0,1);
    do {
        cVar5 = '\x01';
        bVar6 = ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
            *puVar3 = *puVar3 - 1;
            cVar5 = ExclusiveMonitorsStatus();
        }
    } while (cVar5 != '\0');
    return 0x8002;
}


// ===== sym.tcs_tx_done @ 0x08006684 (size 824) =====

ulong sym.tcs_tx_done(ulong noname_0,int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    ulong uVar5;
    code *pcVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = sym.readl_relaxed(*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x14));
    uVar9 = (uVar8 & 0xaaaaaaaa) >> 1 | (uVar8 & 0x55555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = 0x20;
    if (uVar8 != 0) {
        uVar9 = LZCOUNT((uVar10 >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10) << 0x20);
    }
    if (uVar9 < 0x20) {
        puVar1 = arg1 + 0x308;
        uVar5 = sp_el0;
        do {
            uVar10 = 1L << (uVar9 & 0x3f);
            if (*(arg1 + 0x1b0) == '\0') {
code_r0x0800673c:
                if (*(arg1 + 0x300) == '\0') goto code_r0x080067c8;
                iVar11 = 0x1f8;
                if (*(arg1 + 0x24c) != 0) {
                    iVar11 = 0x238;
                }
                iVar11 = arg1 + iVar11;
                if ((uVar10 & *(iVar11 + 0xc)) == 0) goto code_r0x080067c8;
                uVar7 = 1;
            }
            else {
                iVar11 = 0xa8;
                if (*(arg1 + 0xfc) != 0) {
                    iVar11 = 0xe8;
                }
                iVar11 = arg1 + iVar11;
                if ((uVar10 & *(iVar11 + 0xc)) == 0) goto code_r0x0800673c;
                uVar7 = 0;
            }
            uVar4 = uVar9 - *(iVar11 + 0x10);
            if (2 < uVar4) {
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x5512,0x80069a4);
                (*pcVar6)();
            }
            iVar11 = *(iVar11 + uVar4 * 8 + 0x20);
            if (iVar11 == 0) {
code_r0x080067c8:
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x80067d4);
                (*pcVar6)();
            }
            ipc_log_string(*(arg1 + 0x380),"IRQ response: m=%d",uVar9);
            if (*(arg1 + 0x68 + uVar7 * 0x150 + 0x94) == 0) {
                sym.__tcs_set_trigger(arg1,uVar9,0);
            }
            sym.writel_relaxed(0,*(arg1 + 0x20) + **(arg1 + 0x28) * uVar9 + (*(arg1 + 0x28))[10]);
            sym.writel_relaxed(uVar10 & 0xffffffff,*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x18));
            _raw_spin_lock(arg1 + 0x310);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                    *puVar1 = *puVar1 & (uVar10 ^ 0xffffffffffffffff);
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (*(arg1 + 0x68 + uVar7 * 0x150 + 0x94) == 0) {
                uVar7 = sym.readl_relaxed(*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x10));
                sym.writel_relaxed(uVar7 & (uVar10 ^ 0xffffffff),*(arg1 + 0x20) + *(*(arg1 + 0x28) + 0x10));
            }
            _raw_spin_unlock(arg1 + 0x310);
            __wake_up(arg1 + 0x318,3,1,0);
            sym.rpmh_tx_done(iVar11);
            uVar9 = (uVar9 << 0x20) + 0x100000000;
        } while (((uVar9 >> 0x25 == 0) && (uVar9 = -1L << (uVar9 >> 0x20 & 0x3f) & uVar8 & 0xffffffff, uVar9 != 0)) &&
                (uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1,
                uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2,
                uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4,
                uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8,
                uVar9 = LZCOUNT((uVar9 >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10) << 0x20), uVar9 < 0x20));
    }
    return 1;
}


// ===== sym.rpmh_rsc_pd_cb @ 0x080069d4 (size 212) =====

uint sym.rpmh_rsc_pd_cb(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t in_x1;
    ulong *in_x18;
    uint uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x1 != 0) {
        return 1;
    }
    if (*(arg1 + -0x328) != 1) {
        do {
            uVar1 = sym.readl_relaxed(*(arg1 + -0x348) + *(*(arg1 + -0x338) + 0x48));
            uVar2 = sym.readl_relaxed(*(arg1 + -0x348) + *(*(arg1 + -0x338) + 0x4c));
        } while (uVar2 != uVar1);
        if ((uVar1 & 1) != 0) {
            uVar1 = 1;
            goto code_r0x08006a68;
        }
        if ((uVar1 >> 1 & 1) == 0) {
            return 0x8002;
        }
    }
    uVar1 = 0;
code_r0x08006a68:
    uVar4 = sym.rpmh_rsc_ctrlr_is_busy(arg1 + -0x360);
    uVar5 = 0x8002;
    if ((uVar4 & 1) == 0) {
        iVar3 = sym._rpmh_flush(arg1 + -0x30,uVar1);
        uVar5 = 0x8002;
        if (iVar3 == 0) {
            uVar5 = 1;
        }
    }
    return uVar5;
}


// ===== sym.rpmh_rsc_poweroff_noirq @ 0x08006aa8 (size 16) =====

ulong sym.rpmh_rsc_poweroff_noirq(int64_t arg1)

{
    return 0;
}


// ===== sym.rpmh_rsc_restore_noirq @ 0x08006ab8 (size 268) =====

ulong sym.rpmh_rsc_restore_noirq(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    if (0 < *(iVar3 + 0x14)) {
        iVar4 = 0;
        iVar5 = 0x300;
        do {
            iVar6 = *(iVar3 + 0x18);
            iVar1 = iVar6 + iVar5;
            if (*(iVar1 + -0x2bf) != '\0') {
                piVar7 = iVar1 + -0x2e0;
                piVar8 = iVar1 + -0x2d8;
                if (*(iVar1 + -0x150) != '\0') {
                    uVar2 = sym.readl_relaxed(*piVar7 + *(*piVar8 + 0x10));
                    sym.writel_relaxed(*(iVar6 + iVar5 + -0x20c) | uVar2,*piVar7 + *(*piVar8 + 0x10));
                }
                if (*(iVar6 + iVar5) != '\0') {
                    uVar2 = sym.readl_relaxed(*piVar7 + *(*piVar8 + 0x10));
                    sym.writel_relaxed(*(iVar6 + iVar5 + -0xbc) | uVar2,*piVar7 + *(*piVar8 + 0x10));
                }
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 0x390;
        } while (iVar4 < *(iVar3 + 0x14));
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08006bc4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006c08

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
    //switch table (4 cases) at 0x80014a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006c1c);
    (*pcVar1)();
}


// ===== sym.rpmh_tx_done @ 0x08006c1c (size 72) =====

void sym.rpmh_tx_done(int64_t arg1)

{
    char cVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cVar1 = *(arg1 + 0xe8);
    if (*(arg1 + 0xd8) != 0) {
        complete();
    }
    if (cVar1 != '\0') {
        kfree(arg1);
    }
    return;
}


// ===== sym.rpmh_write_async @ 0x08006c64 (size 280) =====

ulong sym.rpmh_write_async(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int *arg3_00;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        if ((arg2 == 2) && (iVar3 = *(*(arg1 + 0x60) + 0x98), (*(iVar3 + 0x348) & 1) != 0)) {
            _raw_spin_lock(iVar3 + 0x340);
            cVar1 = *(iVar3 + 0x345);
            _raw_spin_unlock(iVar3 + 0x340);
            if (cVar1 != '\0') {
                return 0xfffffff0;
            }
        }
        arg3_00 = kmem_cache_alloc_trace(_event_triggers_call,0xb20,0xf0);
        if (arg3_00 == NULL) {
            uVar2 = 0xfffffff4;
        }
        else {
            *(arg3_00 + 0x3a) = 1;
            if ((arg3 == 0) || (arg4 - 0x11U < 0xfffffff0)) {
                kfree(arg3_00);
                uVar2 = 0xffffffea;
            }
            else {
                memcpy(arg3_00 + 6,arg3,(arg4 & 0xffffffffU) * 0xc);
                *arg3_00 = arg2;
                *(arg3_00 + 4) = arg3_00 + 6;
                arg3_00[2] = arg4;
                uVar2 = sym.__rpmh_write(arg1,arg2 & 0xffffffff,arg3_00);
            }
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.__rpmh_write @ 0x08006d7c (size 596) =====

uint64_t sym.__rpmh_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    char cVar5;
    code *pcVar6;
    bool bVar7;
    ulong uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    int iVar11;
    int iVar12;
    int64_t *piVar13;
    int iVar14;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar15;
    int *piVar16;
    int64_t *piVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = arg2;
    arg1_00 = *(*(arg1 + 0x60) + 0x98);
    if (*(arg3 + 8) != 0) {
        uVar18 = 0;
        piVar1 = arg1_00 + 0x330;
        iVar2 = arg1_00 + 0x340;
        do {
            iVar15 = *(arg3 + 0x10);
            uVar8 = _raw_spin_lock_irqsave(iVar2);
            piVar13 = *piVar1;
            piVar16 = iVar15 + uVar18 * 0xc;
            if (piVar1 != piVar13) {
                do {
                    piVar9 = piVar13 + -2;
                    if (*piVar9 == *piVar16) {
                        if (piVar9 != NULL) goto code_r0x08006e94;
                        break;
                    }
                    piVar13 = *piVar13;
                } while (piVar1 != piVar13);
            }
            iVar3 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar3 = 0x30;
            }
            piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xb20,0x20);
            if (piVar9 == NULL) {
                _raw_spin_unlock_irqrestore(iVar2,uVar8);
                piVar9 = 0xfffffffffffffff4;
                goto code_r0x08006fa0;
            }
            iVar14 = *piVar16;
            piVar13 = piVar9 + 2;
            (piVar9 + 4)[0] = -1;
            (piVar9 + 4)[1] = -1;
            *piVar9 = iVar14;
            piVar17 = *(arg1_00 + 0x338);
            uVar10 = __list_add_valid(piVar13,piVar17,piVar1);
            if ((uVar10 & 1) != 0) {
                *(arg1_00 + 0x338) = piVar13;
                piVar9[2] = piVar1;
                piVar9[3] = piVar17;
                *piVar17 = piVar13;
            }
code_r0x08006e94:
            iVar14 = *(piVar9 + 4);
            iVar3 = piVar9[1];
            if (iVar11 - 1U < 2) {
                iVar12 = *(iVar15 + uVar18 * 0xc + 4);
                *(piVar9 + 1) = iVar12;
                if (iVar12 == iVar3) goto code_r0x08006ef8;
code_r0x08006ee4:
                if (iVar14 == -1) goto code_r0x08006ef8;
                bVar7 = iVar12 != -1;
            }
            else {
                if (iVar11 == 0) {
                    iVar4 = *(iVar15 + uVar18 * 0xc + 4);
                    bVar7 = iVar4 != iVar14;
                    *(piVar9 + 4) = iVar4;
                    iVar12 = iVar3;
                    iVar14 = iVar4;
                    if (bVar7) goto code_r0x08006ee4;
                }
code_r0x08006ef8:
                bVar7 = false;
            }
            *(arg1_00 + 0x344) = *(arg1_00 + 0x344) | bVar7;
            _raw_spin_unlock_irqrestore(iVar2,uVar8);
            if (0xfffffffffffff000 < piVar9) goto code_r0x08006fa0;
            uVar18 = uVar18 + 1;
        } while (uVar18 < *(arg3 + 8));
    }
    if (iVar11 == 2) {
        uVar10 = daif;
        if ((uVar10 & 0x80) != 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8006fd0);
            (*pcVar6)();
        }
        uVar10 = sym.rpmh_rsc_get_channel(arg1_00);
        piVar9 = uVar10 & 0xffffffff;
        if (-1 < uVar10) {
            uVar10 = sym.rpmh_rsc_send_data(arg1_00,arg3,uVar10);
            piVar9 = uVar10 & 0xffffffff;
        }
    }
    else {
        cVar5 = *(arg3 + 0xe8);
        if (*(arg3 + 0xd8) != 0) {
            complete();
        }
        if (cVar5 != '\0') {
            kfree(arg3);
        }
        piVar9 = NULL;
    }
code_r0x08006fa0:
    return piVar9 & 0xffffffff;
}


// ===== sym.rpmh_write @ 0x08006fdc (size 412) =====

uint64_t sym.rpmh_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    code *pcVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t extraout_x1;
    int *arg3_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t *piVar11;
    uint32_t *puVar12;
    int64_t iVar13;
    ulong *puVar14;
    int64_t iVar15;
    uint *puVar16;
    uint32_t uVar17;
    int64_t iVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [12];
    ulong uStack_178;
    ulong uStack_170;
    ulong ***pppuStack_168;
    ulong ***pppuStack_160;
    int aiStack_158 [4];
    ulong *puStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong *puStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    puStack_80 = &uStack_178;
    iStack_68 = *(iVar10 + 0x5e0);
    pppuStack_168 = &pppuStack_168;
    uStack_88 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iVar4 = arg2;
    aiStack_158[1] = 1;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    aiStack_158[2] = 0;
    aiStack_158[3] = 0;
    uStack_140 = 0;
    uStack_70 = 0;
    arg3_00 = arg3;
    pppuStack_160 = pppuStack_168;
    aiStack_158[0] = iVar4;
    puStack_148 = &uStack_140;
    iStack_78 = arg1;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar10 = *(*(arg1 + 0x60) + 0x98);
        puVar12 = arg4;
        if ((iVar4 == 2) && ((*(iVar10 + 0x348) & 1) != 0)) {
            _raw_spin_lock(iVar10 + 0x340);
            cVar2 = *(iVar10 + 0x345);
            _raw_spin_unlock(iVar10 + 0x340);
            if (cVar2 == '\0') goto code_r0x08007108;
            uVar7 = 0xfffffff0;
        }
        else {
code_r0x08007108:
            uVar7 = 0xffffffea;
            if ((arg3 != 0) && (0xffffffef < arg4 - 0x11U)) {
                memcpy(&uStack_140,arg3,(arg4 & 0xffffffffU) * 0xc);
                arg3_00 = aiStack_158;
                aiStack_158[2] = arg4;
                aiStack_158[0] = iVar4;
                puStack_148 = &uStack_140;
                uVar7 = sym.__rpmh_write(arg1,arg2 & 0xffffffff,arg3_00);
                if (uVar7 == 0) {
                    arg4 = puVar12;
                    iVar4 = wait_for_completion_timeout(&uStack_178,0x9c4);
                    if (iVar4 != 0) goto code_r0x0800707c;
                    puVar12 = arg4;
                    sym.rpmh_rsc_debug(iVar10,&uStack_178);
                    uVar7 = 0xffffff92;
                }
            }
        }
    }
    else {
code_r0x0800707c:
        uVar7 = 0;
        puVar12 = arg4;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return uVar7;
    }
    auVar20 = __stack_chk_fail(uVar7);
    iVar4 = auVar20._8_4_;
    *extraout_x18 = sym.rpmh_write_batch;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar10 = *(*(auVar20._0_8_ + 0x60) + 0x98);
        if ((iVar4 == 2) && ((*(iVar10 + 0x348) & 1) != 0)) {
            _raw_spin_lock(iVar10 + 0x340);
            cVar2 = *(iVar10 + 0x345);
            _raw_spin_unlock(iVar10 + 0x340);
            if (cVar2 != '\0') {
                uVar5 = 0xfffffff0;
                goto code_r0x080071ac;
            }
        }
        uVar5 = 0xffffffea;
        if ((arg3_00 == NULL) || (puVar12 == NULL)) goto code_r0x080071ac;
        uVar7 = 0xffffffff;
        do {
            uVar1 = uVar7 + 1;
            uVar7 = uVar1;
        } while (puVar12[uVar1] != 0);
        if (uVar1 == 0) {
            uVar5 = 0xffffffea;
            goto code_r0x080071ac;
        }
        piVar8 = __kmalloc(uVar1 * 0x110 + 0x20,0xb20);
        if (piVar8 == NULL) {
            uVar5 = 0xfffffff4;
            goto code_r0x080071ac;
        }
        *(piVar8 + 2) = uVar1;
        piVar8[3] = piVar8 + 4;
        if (0 < uVar1) {
            piVar11 = piVar8 + 7;
            do {
                uVar5 = *puVar12;
                uVar19 = uVar5;
                if ((arg3_00 != NULL) && (0xffffffef < uVar5 - 0x11)) {
                    memcpy(piVar11,arg3_00,uVar19 * 0xc);
                    *(piVar11 + -2) = uVar5;
                    uVar19 = *puVar12;
                    *(piVar11 + -3) = iVar4;
                    piVar11[-1] = piVar11;
                }
                arg3_00 = arg3_00 + uVar19 * 3;
                uVar7 = uVar7 - 1;
                puVar12 = puVar12 + 1;
                piVar11 = piVar11 + 0x1e;
            } while (uVar7 != 0);
        }
        if (iVar4 == 2) {
            uVar5 = sym.rpmh_rsc_get_channel(iVar10);
            iVar18 = extraout_x1;
            if (-1 < uVar5) {
                if (uVar1 < 1) {
                    uVar17 = 0;
                    uVar5 = 0;
                }
                else {
                    uVar17 = 0;
                    iVar18 = 0;
                    iVar13 = uVar1 * 0xf0;
                    do {
                        puVar16 = piVar8 + iVar13 + 0x20;
                        *puVar16 = 0;
                        __init_swait_queue_head(piVar8 + iVar13 + 0x28,"&x->wait",obj.init_completion.__key);
                        *(piVar8 + iVar18 + 0xf8) = puVar16;
                        uVar6 = sym.rpmh_rsc_send_data(iVar10,piVar8 + iVar18 + 0x20,uVar5);
                        if (uVar6 != 0) {
                            _printk(0x800129e,uVar6,**(piVar8 + iVar18 + 0x30));
                            uVar5 = uVar6;
                            goto code_r0x080073cc;
                        }
                        iVar18 = iVar18 + 0xf0;
                        uVar17 = uVar17 + 1;
                        iVar13 = iVar13 + 0x20;
                    } while (uVar1 * 0xf0 - iVar18 != 0);
                    uVar5 = 0;
                    uVar17 = uVar1;
                }
code_r0x080073cc:
                iVar18 = 0x9c4;
                iVar13 = uVar17 << 5;
                while (iVar15 = iVar13 + -0x20, iVar15 != -0x20) {
                    iVar18 = wait_for_completion_timeout(piVar8 + iVar13 + uVar1 * 0xf0);
                    iVar13 = iVar15;
                    if (iVar18 == 0) {
                        sym.rpmh_rsc_debug(iVar10,piVar8 + iVar15 + uVar1 * 0xf0 + 0x20);
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x800741c);
                        (*pcVar3)();
                    }
                }
            }
            kfree(piVar8,iVar18);
            goto code_r0x080071ac;
        }
        uVar9 = _raw_spin_lock_irqsave(iVar10 + 0x340);
        puVar14 = *(iVar10 + 0x358);
        uVar7 = __list_add_valid(piVar8,puVar14,iVar10 + 0x350);
        if ((uVar7 & 1) != 0) {
            *(iVar10 + 0x358) = piVar8;
            *piVar8 = iVar10 + 0x350;
            piVar8[1] = puVar14;
            *puVar14 = piVar8;
        }
        *(iVar10 + 0x344) = 1;
        _raw_spin_unlock_irqrestore(iVar10 + 0x340,uVar9);
    }
    uVar5 = 0;
code_r0x080071ac:
    return uVar5;
}


// ===== sym.rpmh_write_batch @ 0x08007178 (size 724) =====

uint32_t sym.rpmh_write_batch(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t extraout_x1;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t *piVar9;
    int64_t iVar10;
    ulong *puVar11;
    int64_t iVar12;
    uint *puVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    int64_t iVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar3 = arg2;
        arg1_00 = *(*(arg1 + 0x60) + 0x98);
        if ((iVar3 == 2) && ((*(arg1_00 + 0x348) & 1) != 0)) {
            _raw_spin_lock(arg1_00 + 0x340);
            cVar2 = *(arg1_00 + 0x345);
            _raw_spin_unlock(arg1_00 + 0x340);
            if (cVar2 != '\0') {
                return 0xfffffff0;
            }
        }
        if (arg3 == 0) {
            return 0xffffffea;
        }
        if (arg4 == 0) {
            return 0xffffffea;
        }
        uVar14 = 0xffffffff;
        do {
            uVar1 = uVar14 + 1;
            uVar14 = uVar1;
        } while (*(arg4 + uVar1 * 4) != 0);
        if (uVar1 == 0) {
            return 0xffffffea;
        }
        piVar7 = __kmalloc(uVar1 * 0x110 + 0x20,0xb20);
        if (piVar7 == NULL) {
            return 0xfffffff4;
        }
        *(piVar7 + 2) = uVar1;
        piVar7[3] = piVar7 + 4;
        if (0 < uVar1) {
            piVar9 = piVar7 + 7;
            do {
                uVar5 = *arg4;
                uVar17 = uVar5;
                if ((arg3 != 0) && (0xffffffef < uVar5 - 0x11)) {
                    memcpy(piVar9,arg3,uVar17 * 0xc);
                    *(piVar9 + -2) = uVar5;
                    uVar17 = *arg4;
                    *(piVar9 + -3) = iVar3;
                    piVar9[-1] = piVar9;
                }
                arg3 = arg3 + uVar17 * 0xc;
                uVar14 = uVar14 - 1;
                arg4 = arg4 + 4;
                piVar9 = piVar9 + 0x1e;
            } while (uVar14 != 0);
        }
        if (iVar3 == 2) {
            uVar5 = sym.rpmh_rsc_get_channel(arg1_00);
            iVar16 = extraout_x1;
            if (-1 < uVar5) {
                if (uVar1 < 1) {
                    uVar15 = 0;
                    uVar5 = 0;
                }
                else {
                    uVar15 = 0;
                    iVar16 = 0;
                    iVar10 = uVar1 * 0xf0;
                    do {
                        puVar13 = piVar7 + iVar10 + 0x20;
                        *puVar13 = 0;
                        __init_swait_queue_head(piVar7 + iVar10 + 0x28,"&x->wait",obj.init_completion.__key);
                        *(piVar7 + iVar16 + 0xf8) = puVar13;
                        uVar6 = sym.rpmh_rsc_send_data(arg1_00,piVar7 + iVar16 + 0x20,uVar5);
                        if (uVar6 != 0) {
                            _printk(0x800129e,uVar6,**(piVar7 + iVar16 + 0x30));
                            uVar5 = uVar6;
                            goto code_r0x080073cc;
                        }
                        iVar16 = iVar16 + 0xf0;
                        uVar15 = uVar15 + 1;
                        iVar10 = iVar10 + 0x20;
                    } while (uVar1 * 0xf0 - iVar16 != 0);
                    uVar5 = 0;
                    uVar15 = uVar1;
                }
code_r0x080073cc:
                iVar16 = 0x9c4;
                iVar10 = uVar15 << 5;
                while (iVar12 = iVar10 + -0x20, iVar12 != -0x20) {
                    iVar16 = wait_for_completion_timeout(piVar7 + iVar10 + uVar1 * 0xf0);
                    iVar10 = iVar12;
                    if (iVar16 == 0) {
                        sym.rpmh_rsc_debug(arg1_00,piVar7 + iVar12 + uVar1 * 0xf0 + 0x20);
    //WARNING: Does not return
                        pcVar4 = SoftwareBreakpoint(0x800,0x800741c);
                        (*pcVar4)();
                    }
                }
            }
            kfree(piVar7,iVar16);
            return uVar5;
        }
        uVar8 = _raw_spin_lock_irqsave(arg1_00 + 0x340);
        puVar11 = *(arg1_00 + 0x358);
        uVar14 = __list_add_valid(piVar7,puVar11,arg1_00 + 0x350);
        if ((uVar14 & 1) != 0) {
            *(arg1_00 + 0x358) = piVar7;
            *piVar7 = arg1_00 + 0x350;
            piVar7[1] = puVar11;
            *puVar11 = piVar7;
        }
        *(arg1_00 + 0x344) = 1;
        _raw_spin_unlock_irqrestore(arg1_00 + 0x340,uVar8);
    }
    return 0;
}


// ===== sym._rpmh_flush @ 0x0800744c (size 596) =====

uint64_t sym._rpmh_flush(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_158;
    ulong uStack_150;
    uint *puStack_148;
    uint uStack_140;
    int iStack_13c;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
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
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    if (*(arg1 + 0x14) == '\0') {
        uVar3 = 0;
    }
    else {
        iVar4 = arg1 + -0x330;
        uVar2 = arg2;
        sym.tcs_invalidate.llvm.14368635875067709643(iVar4,0,uVar2);
        sym.tcs_invalidate.llvm.14368635875067709643(iVar4,1,uVar2);
        piVar5 = arg1 + 0x20;
        piVar6 = *piVar5;
        if (piVar6 != piVar5) {
            uVar3 = 0;
            do {
                while (piVar6[2] < 1) {
code_r0x080074cc:
                    piVar6 = *piVar6;
                    if (piVar6 == piVar5) {
                        if (uVar3 != 0) goto code_r0x08007660;
                        goto code_r0x08007538;
                    }
                }
                iVar7 = 0;
                iVar8 = 0;
                do {
                    uVar3 = sym.rpmh_rsc_write_ctrl_data(iVar4,piVar6[3] + iVar7,uVar2);
                    if (uVar3 != 0) goto code_r0x080074cc;
                    iVar8 = iVar8 + 1;
                    iVar7 = iVar7 + 0xf0;
                } while (iVar8 < piVar6[2]);
                piVar6 = *piVar6;
                uVar3 = 0;
            } while (piVar6 != piVar5);
        }
code_r0x08007538:
        piVar5 = *arg1;
        if (arg1 != piVar5) {
            do {
                iVar1 = *(piVar5 + -0xc);
                if (((iVar1 != -1) && (piVar5[-1] != -1)) && (iVar1 != piVar5[-1])) {
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
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_e0 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_130 = 0;
                    uStack_158 = 0;
                    _uStack_140 = CONCAT44(iVar1,piVar5[-2]);
                    uStack_150 = 1;
                    puStack_148 = &uStack_140;
                    uVar3 = sym.rpmh_rsc_write_ctrl_data(iVar4,&uStack_158,uVar2);
                    if (uVar3 != 0) goto code_r0x08007660;
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
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e8 = 0;
                    uStack_e0 = 0;
                    uStack_f8 = 0;
                    uStack_f0 = 0;
                    uStack_108 = 0;
                    uStack_100 = 0;
                    uStack_118 = 0;
                    uStack_110 = 0;
                    uStack_128 = 0;
                    uStack_120 = 0;
                    uStack_138 = 0;
                    uStack_130 = 0;
                    uStack_158 = 0x100000001;
                    _uStack_140 = CONCAT44(piVar5[-1],piVar5[-2]);
                    uStack_150 = 1;
                    puStack_148 = &uStack_140;
                    uVar3 = sym.rpmh_rsc_write_ctrl_data(iVar4,&uStack_158,uVar2);
                    if (uVar3 != 0) goto code_r0x08007660;
                }
                piVar5 = *piVar5;
            } while (arg1 != piVar5);
        }
        uVar3 = 0;
        *(arg1 + 0x14) = 0;
    }
code_r0x08007660:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        auVar9 = __stack_chk_fail(uVar3);
        *extraout_x18 = sym.rpmh_flush;
        if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
            iVar4 = auVar9._0_8_ + 0x10;
            iVar1 = _raw_spin_trylock(iVar4);
            if (iVar1 == 0) {
                uVar2 = 0xfffffff0;
            }
            else {
                uVar2 = sym._rpmh_flush(auVar9._0_8_,auVar9._8_8_ & 0xffffffff);
                _raw_spin_unlock(iVar4);
            }
        }
        else {
            uVar2 = 0;
        }
        return uVar2;
    }
    return uVar3;
}


// ===== sym.rpmh_flush @ 0x080076a0 (size 128) =====

uint sym.rpmh_flush(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar1 = _raw_spin_trylock(arg1 + 0x10);
        if (iVar1 == 0) {
            uVar2 = 0xfffffff0;
        }
        else {
            uVar2 = sym._rpmh_flush(arg1,arg2 & 0xffffffff);
            _raw_spin_unlock(arg1 + 0x10);
        }
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.rpmh_write_sleep_and_wake @ 0x08007720 (size 184) =====

uint32_t sym.rpmh_write_sleep_and_wake(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x60) + 0x98);
    uVar1 = sym.rpmh_rsc_get_channel(arg1_00);
    if (uVar1 < 0) {
        return uVar1;
    }
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar2 = _raw_spin_trylock(arg1_00 + 0x340);
        if (iVar2 == 0) {
            return 0xfffffff0;
        }
        uVar3 = sym._rpmh_flush(arg1_00 + 0x330,uVar1);
        _raw_spin_unlock(arg1_00 + 0x340);
        if (uVar3 != 0) {
            return uVar3;
        }
    }
    if ((*(arg1_00 + 0x348) >> 1 & 1) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.rpmh_rsc_switch_channel(arg1_00,uVar1);
    }
    return uVar1;
}


// ===== sym.rpmh_write_sleep_and_wake_no_child @ 0x080077d8 (size 180) =====

uint32_t sym.rpmh_write_sleep_and_wake_no_child(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    uVar1 = sym.rpmh_rsc_get_channel(arg1_00);
    if (uVar1 < 0) {
        return uVar1;
    }
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar2 = _raw_spin_trylock(arg1_00 + 0x340);
        if (iVar2 == 0) {
            return 0xfffffff0;
        }
        uVar3 = sym._rpmh_flush(arg1_00 + 0x330,uVar1);
        _raw_spin_unlock(arg1_00 + 0x340);
        if (uVar3 != 0) {
            return uVar3;
        }
    }
    if ((*(arg1_00 + 0x348) >> 1 & 1) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.rpmh_rsc_switch_channel(arg1_00,uVar1);
    }
    return uVar1;
}


// ===== sym.rpmh_invalidate @ 0x0800788c (size 216) =====

void sym.rpmh_invalidate(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        iVar7 = *(*(arg1 + 0x60) + 0x98);
        uVar5 = _raw_spin_lock_irqsave(iVar7 + 0x340);
        piVar1 = iVar7 + 0x350;
        piVar4 = *(iVar7 + 0x350);
        while (piVar4 != piVar1) {
            piVar8 = *piVar4;
            uVar6 = __list_del_entry_valid(piVar4);
            if ((uVar6 & 1) != 0) {
                iVar2 = *piVar4;
                piVar3 = piVar4[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar4 = -0x2152ffffffffff00;
            piVar4[1] = -0x2152fffffffffede;
            kfree(piVar4);
            piVar4 = piVar8;
        }
        *(iVar7 + 0x350) = piVar1;
        *(iVar7 + 0x358) = piVar1;
        *(iVar7 + 0x344) = 1;
        _raw_spin_unlock_irqrestore(iVar7 + 0x340,uVar5);
    }
    return;
}


// ===== sym.rpmh_mode_solver_set @ 0x08007964 (size 148) =====

int sym.rpmh_mode_solver_set(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        arg1_00 = *(*(arg1 + 0x60) + 0x98);
        if ((*(arg1_00 + 0x348) & 1) == 0) {
            iVar1 = -0x16;
        }
        else {
            _raw_spin_lock(arg1_00 + 0x340);
            iVar1 = sym.rpmh_rsc_mode_solver_set(arg1_00,arg2 & 1);
            if (iVar1 == 0) {
                *(arg1_00 + 0x345) = arg2 & 1;
            }
            _raw_spin_unlock(arg1_00 + 0x340);
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.rpmh_init_fast_path @ 0x080079f8 (size 176) =====

uint64_t sym.rpmh_init_fast_path(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t in_x3;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint64_t uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    uStack_48 = 0;
    iVar4 = *(*(arg1 + 0x60) + 0x98);
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_get_channel(iVar4);
        uVar2 = uVar1;
        if (-1 < uVar1) {
            uStack_50 = uStack_50 & 0xffffffff;
            uStack_48 = CONCAT44(uStack_48._4_4_,arg3);
            iStack_40 = arg2;
            uVar2 = sym.rpmh_rsc_init_fast_path(iVar4,&uStack_50,uVar1);
            uVar2 = uVar2 & 0xffffffff;
        }
    }
    else {
        uVar2 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.rpmh_update_fast_path;
    pcStack_78 = sym.rpmh_update_fast_path;
    iVar4 = sp_el0;
    iStack_88 = *(iVar4 + 0x5e0);
    uStack_a0 = 0;
    uStack_98 = 0;
    iVar4 = *(*(auVar5._0_8_ + 0x60) + 0x98);
    puStack_80 = &stack0xffffffffffffffd0;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_get_channel(iVar4);
        uVar3 = uVar1;
        if (-1 < uVar1) {
            uStack_a0 = uStack_a0 & 0xffffffff;
            uStack_98 = CONCAT44(uStack_98._4_4_,uVar2);
            uStack_90 = auVar5._8_8_;
            uVar3 = sym.rpmh_rsc_update_fast_path(iVar4,&uStack_a0,in_x3 & 0xffffffff,uVar1);
            uVar3 = uVar3 & 0xffffffff;
        }
    }
    else {
        uVar3 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return uVar3;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18_00 = sym.rpmh_get_device;
    uVar2 = sym.rpmh_rsc_get_device(auVar5._0_8_,auVar5._8_8_);
    return uVar2;
}


// ===== sym.rpmh_update_fast_path @ 0x08007aa8 (size 184) =====

uint64_t sym.rpmh_update_fast_path(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg4_00;
    uint64_t uVar1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    ulong unaff_x30;
    uchar auVar3 [16];
    uint64_t uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_50 = 0;
    uStack_48 = 0;
    iVar2 = *(*(arg1 + 0x60) + 0x98);
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        arg4_00 = sym.rpmh_rsc_get_channel(iVar2);
        uVar1 = arg4_00;
        if (-1 < arg4_00) {
            uStack_50 = uStack_50 & 0xffffffff;
            uStack_48 = CONCAT44(uStack_48._4_4_,arg3);
            iStack_40 = arg2;
            uVar1 = sym.rpmh_rsc_update_fast_path(iVar2,&uStack_50,arg4 & 0xffffffff,arg4_00);
            uVar1 = uVar1 & 0xffffffff;
        }
    }
    else {
        uVar1 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    auVar3 = __stack_chk_fail();
    *extraout_x18 = sym.rpmh_get_device;
    uVar1 = sym.rpmh_rsc_get_device(auVar3._0_8_,auVar3._8_8_);
    return uVar1;
}


// ===== sym.rpmh_get_device @ 0x08007b60 (size 36) =====

void sym.rpmh_get_device(int64_t arg2,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.rpmh_rsc_get_device(arg2,arg1);
    return;
}


// ===== sym.rpmh_drv_start @ 0x08007b84 (size 64) =====

ulong sym.rpmh_drv_start(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_drv_enable(*(arg1 + 0x98),1);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.rpmh_drv_stop @ 0x08007bc4 (size 64) =====

ulong sym.rpmh_drv_stop(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.__traceiter_rpmh_tx_done.cfi_jt == 0x0) {
        uVar1 = sym.rpmh_rsc_drv_enable(*(arg1 + 0x98),0);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.init_module @ 0x08007c28 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.rpmh_rsc_probe.a8d6439b6d65b6560ed4d39b649f681f.cfi_jt,obj.__this_module);
    return;
}

