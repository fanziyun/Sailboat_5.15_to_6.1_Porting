// decompiled from coresight-funnel by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x08001d34

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x333e5f8f10676d42) {
        if (arg1 < -0x57be845bca9148ef) {
            if (arg1 != -0x66d421a09845f9f8) {
                if (arg1 != -0x66c3af2d2c79087e) goto code_r0x08001cf4;
                pcVar2 = sym.funnel_disable.974d03737bee1ce513d68140352655fc.cfi_jt;
                goto code_r0x080011c8;
            }
            pcVar2 = sym.funnel_ctrl_show.974d03737bee1ce513d68140352655fc.cfi_jt;
        }
        else if (arg1 == -0x57be845bca9148ef) {
            pcVar2 = sym.funnel_runtime_suspend.974d03737bee1ce513d68140352655fc.cfi_jt;
        }
        else {
            if (arg1 == -0x54930935f5088e63) {
                pcVar2 = sym.funnel_enable.974d03737bee1ce513d68140352655fc.cfi_jt;
                goto code_r0x080011c8;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08001cf4;
            pcVar2 = sym.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt;
        }
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 < 0x1e3d0ffe3d0499e9) {
            if (arg1 == -0x333e5f8f10676d42) {
                pcVar2 = sym.dynamic_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08001cf4;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 == 0x1e3d0ffe3d0499e9) {
            pcVar2 = sym.priority_store.974d03737bee1ce513d68140352655fc.cfi_jt;
        }
        else if (arg1 == 0x5ca94cbce5f388f2) {
            pcVar2 = sym.dynamic_funnel_remove.974d03737bee1ce513d68140352655fc.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001cf4;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x080011c8:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x08001cf4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d48);
    (*pcVar1)();
}


// ===== sym.funnel_runtime_suspend.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.funnel_runtime_suspend.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x98) != 0) && (uVar1 = *(*(param_1 + 0x98) + 8), uVar1 < 0xfffffffffffff001)) {
        clk_disable(uVar1);
        clk_unprepare(uVar1);
    }
    return 0;
}


// ===== sym.funnel_runtime_resume.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x080011e8 (size 8) =====

ulong sym.funnel_runtime_resume.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((*(param_1 + 0x98) != 0) && (uVar2 = *(*(param_1 + 0x98) + 8), uVar2 < 0xfffffffffffff001)) &&
        (iVar1 = clk_prepare(uVar2), iVar1 == 0)) && (iVar1 = clk_enable(uVar2), iVar1 != 0)) {
        clk_unprepare(uVar2);
    }
    return 0;
}


// ===== sym.funnel_disable.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x080011f0 (size 8) =====

void sym.funnel_disable.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x98) + 0x98);
    uVar6 = _raw_spin_lock_irqsave(piVar8 + 4);
    piVar1 = *(param_1 + 0x3c8) + param_2 * 4;
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
    DataMemoryBarrier(2,3);
    if ((iVar2 + -1 == 0) && (*piVar8 != 0)) {
        iVar7 = piVar8[2];
        sym.writel_relaxed(0xc5acce55,*piVar8 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar5 = sym.readl_relaxed(*piVar8);
        uVar5 = uVar5 & (1 << (param_2 & 0x1f) ^ 0xffffffffU);
        sym.writel_relaxed(uVar5,*piVar8);
        if ((uVar5 & 0xff) == 0) {
            coresight_disclaim_device_unlocked(iVar7);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar8 + 0xfb0);
    }
    _raw_spin_unlock_irqrestore(piVar8 + 4,uVar6);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt);
    amba_driver_unregister(obj.dynamic_funnel_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001200 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = amba_driver_register(obj.dynamic_funnel_driver);
        if (iVar1 != 0) {
            _printk(0x80005cb);
            platform_driver_unregister(reloc.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt);
        }
    }
    else {
        _printk(0x80005fc);
    }
    return iVar1;
}


// ===== sym.priority_store.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001208 (size 8) =====

uint64_t sym.priority_store.974d03737bee1ce513d68140352655fc.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_30 = 0;
    iVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar4 = kstrtoull(param_3,0x10,&uStack_30);
    if (iVar4 == 0) {
        *(iVar9 + 0x18) = uStack_30;
    }
    else {
        param_4 = iVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return param_4;
    }
    auVar12 = __stack_chk_fail();
    uVar8 = auVar12._8_4_;
    iVar9 = auVar12._0_8_;
    *extraout_x18 = sym.funnel_enable;
    piVar11 = *(*(iVar9 + 0x98) + 0x98);
    uVar7 = _raw_spin_lock_irqsave(piVar11 + 4);
    if ((*(*(iVar9 + 0x3c8) + uVar8 * 4) == 0) && (*piVar11 != 0)) {
        iVar10 = piVar11[2];
        sym.writel_relaxed(0xc5acce55,*piVar11 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar5 = sym.readl_relaxed(*piVar11);
        if (((uVar5 & 0xff) != 0) || (uVar6 = coresight_claim_device_unlocked(iVar10), uVar6 == 0)) {
            sym.writel_relaxed(1 << (uVar8 & 0x1f) | uVar5 & 0xfffff0ff | 0x700,*piVar11);
            sym.writel_relaxed(*(piVar11 + 3),*piVar11 + 4);
            uVar6 = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar11 + 0xfb0);
        if (uVar6 != 0) goto code_r0x080019e4;
    }
    piVar1 = *(iVar9 + 0x3c8) + uVar8 * 4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    uVar6 = 0;
code_r0x080019e4:
    _raw_spin_unlock_irqrestore(piVar11 + 4,uVar7);
    return uVar6;
}


// ===== sym.funnel_enable.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001210 (size 8) =====

int sym.funnel_enable.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(param_1 + 0x98) + 0x98);
    uVar6 = _raw_spin_lock_irqsave(piVar8 + 4);
    if ((*(*(param_1 + 0x3c8) + param_2 * 4) == 0) && (*piVar8 != 0)) {
        iVar7 = piVar8[2];
        sym.writel_relaxed(0xc5acce55,*piVar8 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar4 = sym.readl_relaxed(*piVar8);
        if (((uVar4 & 0xff) != 0) || (iVar5 = coresight_claim_device_unlocked(iVar7), iVar5 == 0)) {
            sym.writel_relaxed(1 << (param_2 & 0x1f) | uVar4 & 0xfffff0ff | 0x700,*piVar8);
            sym.writel_relaxed(*(piVar8 + 3),*piVar8 + 4);
            iVar5 = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar8 + 0xfb0);
        if (iVar5 != 0) goto code_r0x080019e4;
    }
    piVar1 = *(param_1 + 0x3c8) + param_2 * 4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar5 = 0;
code_r0x080019e4:
    _raw_spin_unlock_irqrestore(piVar8 + 4,uVar6);
    return iVar5;
}


// ===== sym.funnel_ctrl_show.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001218 (size 8) =====

int64_t sym.funnel_ctrl_show.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(param_1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(param_1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08001778;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08001778:
        } while (uVar7 != uVar2);
    }
    else {
        sym.writel_relaxed(0xc5acce55,*piVar9 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar6 = sym.readl_relaxed(*piVar9);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar9 + 0xfb0);
        __pm_runtime_idle(*(param_1 + 0x60),5);
        iVar5 = sprintf(param_3,"%#x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.priority_show.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001220 (size 8) =====

int64_t sym.priority_show.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(param_3,"%#lx\n",*(*(*(param_1 + 0x60) + 0x98) + 0x18));
    return iVar1;
}


// ===== sym.dynamic_funnel_remove.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001228 (size 8) =====

void sym.dynamic_funnel_remove.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(param_1 + 0x98) + 0x10));
    return;
}


// ===== sym.dynamic_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001230 (size 8) =====

void sym.dynamic_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.funnel_probe(param_1,param_1 + 0x390);
    return;
}


// ===== sym.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001238 (size 8) =====

int sym.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + 0x10;
    puVar1 = param_1 + 0x208;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    __pm_runtime_set_status(arg1,0);
    pm_runtime_enable(arg1);
    iVar5 = sym.funnel_probe(arg1,0);
    if (iVar5 != 0) {
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x080012c8;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080012c8:
        } while (uVar6 != uVar2);
        __pm_runtime_disable(arg1,1);
    }
    return iVar5;
}


// ===== sym.static_funnel_remove.974d03737bee1ce513d68140352655fc.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.static_funnel_remove.974d03737bee1ce513d68140352655fc.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(param_1 + 0xa8) + 0x10));
    __pm_runtime_disable(param_1 + 0x10,1);
    return 0;
}


// ===== sym.static_funnel_probe @ 0x08001248 (size 268) =====

int sym.static_funnel_probe(int64_t arg1)

{
    int64_t arg1_00;
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + 0x10;
    puVar1 = arg1 + 0x208;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    __pm_runtime_set_status(arg1_00,0);
    pm_runtime_enable(arg1_00);
    iVar5 = sym.funnel_probe(arg1_00,0);
    if (iVar5 != 0) {
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x080012c8;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080012c8:
        } while (uVar6 != uVar2);
        __pm_runtime_disable(arg1_00,1);
    }
    return iVar5;
}


// ===== sym.static_funnel_remove @ 0x08001354 (size 72) =====

ulong sym.static_funnel_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(arg1 + 0xa8) + 0x10));
    __pm_runtime_disable(arg1 + 0x10,1);
    return 0;
}


// ===== sym.funnel_probe @ 0x0800139c (size 764) =====

uint64_t sym.funnel_probe(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint uVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    ulong uStack_100;
    ulong uStack_f8;
    code *pcStack_f0;
    uint64_t uStack_e8;
    int64_t iStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    ulong uStack_c8;
    uint64_t uStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uVar12 = *(arg1 + 0x2f0);
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    iStack_b0 = 0;
    iStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    iStack_d0 = 0;
    uStack_c8 = 0;
    iStack_e0 = 0;
    pcStack_d8 = NULL;
    pcStack_f0 = NULL;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uVar8 = dev_fwnode();
    if ((((uVar8 != 0) && (uVar8 < 0xfffffffffffff001)) && (*(uVar8 + 8) == of_fwnode_ops)) &&
       ((iVar4 = of_device_is_compatible(*(arg1 + 0x2f0),"arm,coresight-funnel"), iVar4 != 0 &&
        ((obj.funnel_probe.__print_once & 1) == 0)))) {
        obj.funnel_probe.__print_once = 0x1;
        _dev_warn(arg1,"Uses OBSOLETE CoreSight funnel binding\n");
    }
    iStack_d0 = coresight_alloc_device_name(obj.funnel_devs,arg1);
    if (iStack_d0 != 0) {
        in_x2 = 0xdc0;
        puVar9 = devm_kmalloc(arg1,0x28,0xdc0);
        if (puVar9 != NULL) {
            uVar8 = devm_clk_get(arg1,"atclk");
            puVar9[1] = uVar8;
            if (uVar8 < 0xfffffffffffff001) {
                uVar11 = clk_prepare();
                uVar14 = uVar11 & 0xffffffff;
                if (uVar11 != 0) goto code_r0x0800151c;
                uVar6 = clk_enable(uVar8);
                if (uVar6 == 0) goto code_r0x08001490;
                uVar14 = uVar6;
            }
            else {
code_r0x08001490:
                in_x2 = NULL;
                iVar10 = of_find_property(uVar12,"qcom,duplicate-funnel",0);
                if (iVar10 != 0) {
                    in_x2 = &iStack_50;
                    iStack_50 = 0;
                    iVar4 = of_property_read_string_helper(uVar12,"reg-names",in_x2,1,0);
                    if (-1 < iVar4) {
                        iVar4 = 0;
                        do {
                            iVar5 = strcmp("funnel-base-real",iStack_50);
                            if (iVar5 == 0) {
                                in_x2 = &iStack_b0;
                                uVar8 = of_address_to_resource(uVar12,iVar4,in_x2);
                                uVar14 = uVar8 & 0xffffffff;
                                if (uVar8 != 0) goto code_r0x0800151c;
                                in_x2 = (iStack_a8 - iStack_b0) + 1;
                                uVar14 = devm_ioremap(arg1,iStack_b0,in_x2);
                                goto code_r0x080015bc;
                            }
                            iVar4 = iVar4 + 1;
                            in_x2 = &iStack_50;
                            iVar5 = of_property_read_string_helper(uVar12,"reg-names",in_x2,1,iVar4);
                        } while (-1 < iVar5);
                    }
                    uVar14 = 0xffffffea;
                    goto code_r0x0800151c;
                }
                if (arg2 == 0) {
code_r0x080015e4:
                    *(arg1 + 0x98) = puVar9;
                    uVar14 = coresight_get_platform_data(arg1);
                    if (uVar14 < 0xfffffffffffff001) {
                        *(arg1 + 0x90) = uVar14;
                        *(puVar9 + 4) = 0;
                        uStack_100 = CONCAT44(uStack_100._4_4_,2);
                        uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
                        pcStack_f0 = obj.funnel_cs_ops;
                        uStack_e8 = uVar14;
                        iStack_e0 = arg1;
                        uVar14 = coresight_register(&uStack_100);
                        puVar9[2] = uVar14;
                        if (uVar14 < 0xfffffffffffff001) {
                            __pm_runtime_idle(arg1,5);
                            uVar14 = 0;
                            goto code_r0x0800151c;
                        }
                    }
                }
                else {
                    uVar14 = devm_ioremap_resource(arg1,arg2);
code_r0x080015bc:
                    if (uVar14 < 0xfffffffffffff001) {
                        *puVar9 = uVar14;
                        uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
                        pcStack_d8 = obj.coresight_funnel_groups;
                        uStack_c0 = uVar14;
                        goto code_r0x080015e4;
                    }
                }
                if (((uVar14 == 0) || (uVar8 = puVar9[1], uVar8 == 0)) || (0xfffffffffffff000 < uVar8))
                goto code_r0x0800151c;
                clk_disable(uVar8);
            }
            clk_unprepare(uVar8);
            goto code_r0x0800151c;
        }
    }
    uVar14 = 0xfffffff4;
code_r0x0800151c:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return uVar14 & 0xffffffff;
    }
    iVar10 = __stack_chk_fail();
    *extraout_x18 = sym.funnel_ctrl_show;
    piVar13 = *(*(iVar10 + 0x60) + 0x98);
    iVar4 = __pm_runtime_resume(*(iVar10 + 0x60),4);
    if (iVar4 < 0) {
        puVar9 = *(iVar10 + 0x60) + 0x1f8;
        uVar8 = *puVar9;
        do {
            uVar6 = uVar8;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar9,2,0,1);
            do {
                uVar1 = *puVar9;
                uVar8 = uVar1;
                if (uVar1 != uVar6) goto code_r0x08001778;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar9,0x10);
                if (bVar3) {
                    *puVar9 = uVar6 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08001778:
        } while (uVar6 != uVar1);
    }
    else {
        sym.writel_relaxed(0xc5acce55,*piVar13 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar7 = sym.readl_relaxed(*piVar13);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar13 + 0xfb0);
        __pm_runtime_idle(*(iVar10 + 0x60),5);
        iVar4 = sprintf(in_x2,"%#x\n",uVar7);
    }
    return iVar4;
}


// ===== sym.funnel_ctrl_show @ 0x08001698 (size 288) =====

int64_t sym.funnel_ctrl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar5 = __pm_runtime_resume(*(arg1 + 0x60),4);
    if (iVar5 < 0) {
        puVar1 = *(arg1 + 0x60) + 0x1f8;
        uVar8 = *puVar1;
        do {
            uVar7 = uVar8;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar8 = uVar2;
                if (uVar2 != uVar7) goto code_r0x08001778;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08001778:
        } while (uVar7 != uVar2);
    }
    else {
        sym.writel_relaxed(0xc5acce55,*piVar9 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar6 = sym.readl_relaxed(*piVar9);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar9 + 0xfb0);
        __pm_runtime_idle(*(arg1 + 0x60),5);
        iVar5 = sprintf(arg2,"%#x\n",uVar6);
    }
    return iVar5;
}


// ===== sym.readl_relaxed @ 0x080017b8 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80017bc);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80017f0);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08001828 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001844);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800186c);
    return;
}


// ===== sym.priority_show @ 0x080018a0 (size 68) =====

int64_t sym.priority_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sprintf(arg2,"%#lx\n",*(*(*(arg1 + 0x60) + 0x98) + 0x18));
    return iVar1;
}


// ===== sym.priority_store @ 0x080018e4 (size 144) =====

uint64_t sym.priority_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    uStack_30 = 0;
    iVar9 = *(*(arg1 + 0x60) + 0x98);
    iVar4 = kstrtoull(arg2,0x10,&uStack_30);
    if (iVar4 == 0) {
        *(iVar9 + 0x18) = uStack_30;
    }
    else {
        arg3 = iVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar12 = __stack_chk_fail();
    uVar8 = auVar12._8_4_;
    iVar9 = auVar12._0_8_;
    *extraout_x18 = sym.funnel_enable;
    piVar11 = *(*(iVar9 + 0x98) + 0x98);
    uVar7 = _raw_spin_lock_irqsave(piVar11 + 4);
    if ((*(*(iVar9 + 0x3c8) + uVar8 * 4) == 0) && (*piVar11 != 0)) {
        iVar10 = piVar11[2];
        sym.writel_relaxed(0xc5acce55,*piVar11 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar5 = sym.readl_relaxed(*piVar11);
        if (((uVar5 & 0xff) != 0) || (uVar6 = coresight_claim_device_unlocked(iVar10), uVar6 == 0)) {
            sym.writel_relaxed(1 << (uVar8 & 0x1f) | uVar5 & 0xfffff0ff | 0x700,*piVar11);
            sym.writel_relaxed(*(piVar11 + 3),*piVar11 + 4);
            uVar6 = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar11 + 0xfb0);
        if (uVar6 != 0) goto code_r0x080019e4;
    }
    piVar1 = *(iVar9 + 0x3c8) + uVar8 * 4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    uVar6 = 0;
code_r0x080019e4:
    _raw_spin_unlock_irqrestore(piVar11 + 4,uVar7);
    return uVar6;
}


// ===== sym.funnel_enable @ 0x08001974 (size 348) =====

int sym.funnel_enable(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = arg2;
    piVar9 = *(*(arg1 + 0x98) + 0x98);
    uVar7 = _raw_spin_lock_irqsave(piVar9 + 4);
    if ((*(*(arg1 + 0x3c8) + uVar4 * 4) == 0) && (*piVar9 != 0)) {
        iVar8 = piVar9[2];
        sym.writel_relaxed(0xc5acce55,*piVar9 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar5 = sym.readl_relaxed(*piVar9);
        if (((uVar5 & 0xff) != 0) || (iVar6 = coresight_claim_device_unlocked(iVar8), iVar6 == 0)) {
            sym.writel_relaxed(1 << (uVar4 & 0x1f) | uVar5 & 0xfffff0ff | 0x700,*piVar9);
            sym.writel_relaxed(*(piVar9 + 3),*piVar9 + 4);
            iVar6 = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar9 + 0xfb0);
        if (iVar6 != 0) goto code_r0x080019e4;
    }
    piVar1 = *(arg1 + 0x3c8) + uVar4 * 4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar6 = 0;
code_r0x080019e4:
    _raw_spin_unlock_irqrestore(piVar9 + 4,uVar7);
    return iVar6;
}


// ===== sym.funnel_disable @ 0x08001ad0 (size 284) =====

void sym.funnel_disable(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    uint32_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(*(arg1 + 0x98) + 0x98);
    uVar6 = _raw_spin_lock_irqsave(piVar8 + 4);
    piVar1 = *(arg1 + 0x3c8) + arg2 * 4;
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
    DataMemoryBarrier(2,3);
    if ((iVar2 + -1 == 0) && (*piVar8 != 0)) {
        iVar7 = piVar8[2];
        sym.writel_relaxed(0xc5acce55,*piVar8 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar5 = sym.readl_relaxed(*piVar8);
        uVar5 = uVar5 & (1 << (arg2 & 0x1f) ^ 0xffffffffU);
        sym.writel_relaxed(uVar5,*piVar8);
        if ((uVar5 & 0xff) == 0) {
            coresight_disclaim_device_unlocked(iVar7);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar8 + 0xfb0);
    }
    _raw_spin_unlock_irqrestore(piVar8 + 4,uVar6);
    return;
}


// ===== sym.funnel_runtime_suspend @ 0x08001bec (size 80) =====

ulong sym.funnel_runtime_suspend(int64_t arg1)

{
    ulong *in_x18;
    uint64_t uVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x98) != 0) && (uVar1 = *(*(arg1 + 0x98) + 8), uVar1 < 0xfffffffffffff001)) {
        clk_disable(uVar1);
        clk_unprepare(uVar1);
    }
    return 0;
}


// ===== sym.funnel_runtime_resume @ 0x08001c3c (size 96) =====

ulong sym.funnel_runtime_resume(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    uint64_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((((*(arg1 + 0x98) != 0) && (uVar2 = *(*(arg1 + 0x98) + 8), uVar2 < 0xfffffffffffff001)) &&
        (iVar1 = clk_prepare(uVar2), iVar1 == 0)) && (iVar1 = clk_enable(uVar2), iVar1 != 0)) {
        clk_unprepare(uVar2);
    }
    return 0;
}


// ===== sym.dynamic_funnel_probe @ 0x08001c9c (size 40) =====

void sym.dynamic_funnel_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.funnel_probe(arg1,arg1 + 0x390);
    return;
}


// ===== sym.dynamic_funnel_remove @ 0x08001cc4 (size 44) =====

void sym.dynamic_funnel_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(arg1 + 0x98) + 0x10));
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001cf0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001d34

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
    //switch table (4 cases) at 0x8000358
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d48);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001d54 (size 136) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = amba_driver_register(obj.dynamic_funnel_driver);
        if (iVar1 != 0) {
            _printk(0x80005cb);
            platform_driver_unregister(reloc.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt);
        }
    }
    else {
        _printk(0x80005fc);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001ddc (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.static_funnel_probe.974d03737bee1ce513d68140352655fc.cfi_jt);
    amba_driver_unregister(obj.dynamic_funnel_driver);
    return;
}

