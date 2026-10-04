// decompiled from coresight-replicator by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x08001d3c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x3557318fb8d07b71) {
        if (arg1 < -0x57be845bca9148ef) {
            if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.idfilter0_show.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt;
code_r0x08001198:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001cfc;
            }
            if (arg1 != -0x66c3af2d2c79087e) goto code_r0x08001cfc;
            pcVar2 = sym.replicator_disable.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt;
        }
        else {
            if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.replicator_runtime_suspend.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt;
                goto code_r0x08001198;
            }
            if (arg1 != -0x54930935f5088e63) goto code_r0x08001cfc;
            pcVar2 = sym.replicator_enable.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt;
        }
    }
    else if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt;
            goto code_r0x08001198;
        }
        if (arg1 != -0x333e5f8f10676d42) goto code_r0x08001cfc;
        pcVar2 = sym.dynamic_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x5ca94cbce5f388f2) {
        pcVar2 = sym.dynamic_replicator_remove.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001cfc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001cfc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d50);
    (*pcVar1)();
}


// ===== sym.replicator_enable.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x080011c0 (size 8) =====

int sym.replicator_enable.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    ulong *in_x18;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar12 = *(*(param_1 + 0x98) + 0x98);
    uVar8 = _raw_spin_lock_irqsave(piVar12 + 3);
    if ((*(*(param_1 + 0x3c8) + param_3 * 4) == 0) && (*piVar12 != 0)) {
        iVar9 = piVar12[2];
        sym.writel_relaxed(0xc5acce55,*piVar12 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar5 = sym.readl_relaxed(*piVar12);
        uVar6 = sym.readl_relaxed(*piVar12 + 4);
        uVar11 = 0xff;
        uVar10 = 0xff;
        if ((*(piVar12 + 0x1c) == '\0' || uVar5 != 0) || uVar6 != 0) {
            uVar11 = uVar6;
            uVar10 = uVar5;
        }
        if (((uVar10 != 0xff) || (uVar11 != 0xff)) || (iVar7 = coresight_claim_device_unlocked(iVar9), iVar7 == 0)) {
            if (param_3 == 0) {
                uVar10 = 0;
            }
            else {
                if (param_3 != 1) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x80019f0);
                    (*pcVar4)();
                }
                uVar11 = 0;
            }
            sym.writel_relaxed(uVar10,*piVar12);
            sym.writel_relaxed(uVar11,*piVar12 + 4);
            iVar7 = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar12 + 0xfb0);
        if (iVar7 != 0) goto code_r0x080018f4;
    }
    piVar1 = *(param_1 + 0x3c8) + param_3 * 4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    iVar7 = 0;
code_r0x080018f4:
    _raw_spin_unlock_irqrestore(piVar12 + 3,uVar8);
    return iVar7;
}


// ===== sym.dynamic_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x080011c8 (size 8) =====

void sym.dynamic_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.replicator_probe(param_1,param_1 + 0x390);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt);
    amba_driver_unregister(obj.dynamic_replicator_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011d8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = __platform_driver_register
                      (reloc.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = amba_driver_register(obj.dynamic_replicator_driver);
        if (iVar1 != 0) {
            _printk(0x8000431);
            platform_driver_unregister(reloc.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt);
        }
    }
    else {
        _printk(0x800046b);
    }
    return iVar1;
}


// ===== sym.idfilter0_show.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x080011e0 (size 8) =====

int64_t sym.idfilter0_show.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

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
                if (uVar2 != uVar7) goto code_r0x080016d4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080016d4:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.idfilter1_show.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x080011e8 (size 8) =====

int64_t sym.idfilter1_show.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

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
                if (uVar2 != uVar7) goto code_r0x08001844;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08001844:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 4);
        __pm_runtime_idle(*(param_1 + 0x60),4);
        iVar5 = scnprintf(param_3,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.dynamic_replicator_remove.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x080011f0 (size 8) =====

void sym.dynamic_replicator_remove.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(param_1 + 0x98) + 0x10));
    return;
}


// ===== sym.replicator_runtime_suspend.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.replicator_runtime_suspend.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1)

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


// ===== sym.replicator_runtime_resume.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x08001200 (size 8) =====

ulong sym.replicator_runtime_resume.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1)

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


// ===== sym.replicator_disable.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x08001208 (size 8) =====

void sym.replicator_disable.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = *(*(param_1 + 0x98) + 0x98);
    uVar6 = _raw_spin_lock_irqsave(piVar9 + 3);
    piVar1 = *(param_1 + 0x3c8) + param_3 * 4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if ((iVar5 + -1 == 0) && (*piVar9 != 0)) {
        iVar7 = piVar9[2];
        if (param_3 == 0) {
            iVar8 = 0;
        }
        else {
            if (param_3 != 1) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8001b24);
                (*pcVar4)();
            }
            iVar8 = 4;
        }
        sym.writel_relaxed(0xc5acce55,*piVar9 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0xff,*piVar9 + iVar8);
        iVar5 = sym.readl_relaxed(*piVar9);
        if ((iVar5 == 0xff) && (iVar5 = sym.readl_relaxed(*piVar9 + 4), iVar5 == 0xff)) {
            coresight_disclaim_device_unlocked(iVar7);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar9 + 0xfb0);
    }
    _raw_spin_unlock_irqrestore(piVar9 + 3,uVar6);
    return;
}


// ===== sym.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x08001210 (size 8) =====

int sym.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1)

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
    iVar5 = sym.replicator_probe(arg1,0);
    if (iVar5 != 0) {
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x080012a0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080012a0:
        } while (uVar6 != uVar2);
        __pm_runtime_disable(arg1,1);
    }
    return iVar5;
}


// ===== sym.static_replicator_remove.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.static_replicator_remove.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(param_1 + 0xa8) + 0x10));
    __pm_runtime_disable(param_1 + 0x10,1);
    return 0;
}


// ===== sym.static_replicator_probe @ 0x08001220 (size 268) =====

int sym.static_replicator_probe(int64_t arg1)

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
    iVar5 = sym.replicator_probe(arg1_00,0);
    if (iVar5 != 0) {
        uVar7 = *puVar1;
        do {
            uVar6 = uVar7;
            if (uVar6 == 0) break;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar2 = *puVar1;
                uVar7 = uVar2;
                if (uVar2 != uVar6) goto code_r0x080012a0;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar6 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080012a0:
        } while (uVar6 != uVar2);
        __pm_runtime_disable(arg1_00,1);
    }
    return iVar5;
}


// ===== sym.static_replicator_remove @ 0x0800132c (size 72) =====

ulong sym.static_replicator_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(arg1 + 0xa8) + 0x10));
    __pm_runtime_disable(arg1 + 0x10,1);
    return 0;
}


// ===== sym.replicator_probe @ 0x08001374 (size 676) =====

uint64_t sym.replicator_probe(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    uint64_t uVar9;
    ulong uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    ulong uStack_60;
    uint64_t uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    iStack_68 = 0;
    uStack_60 = 0;
    iStack_78 = 0;
    pcStack_70 = NULL;
    pcStack_88 = NULL;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar7 = dev_fwnode();
    if ((((uVar7 != 0) && (uVar7 < 0xfffffffffffff001)) && (*(uVar7 + 8) == of_fwnode_ops)) &&
       ((iVar4 = of_device_is_compatible(*(arg1 + 0x2f0),0x8000452), iVar4 != 0 &&
        ((obj.replicator_probe.__print_once & 1) == 0)))) {
        obj.replicator_probe.__print_once = 0x1;
        _dev_warn(arg1,"Uses OBSOLETE CoreSight replicator binding\n");
    }
    iStack_68 = coresight_alloc_device_name(obj.replicator_devs,arg1);
    if (iStack_68 != 0) {
        in_x2 = 0xdc0;
        puVar8 = devm_kmalloc(arg1,0x20,0xdc0);
        if (puVar8 != NULL) {
            uVar7 = devm_clk_get(arg1,"atclk");
            puVar8[1] = uVar7;
            if (uVar7 < 0xfffffffffffff001) {
                uVar11 = clk_prepare();
                uVar9 = uVar11 & 0xffffffff;
                if (uVar11 != 0) goto code_r0x08001520;
                uVar5 = clk_enable(uVar7);
                if (uVar5 == 0) goto code_r0x0800144c;
                uVar9 = uVar5;
            }
            else {
code_r0x0800144c:
                if (arg2 == 0) {
code_r0x08001484:
                    uVar10 = dev_fwnode(arg1);
                    uVar7 = fwnode_property_present(uVar10,"qcom,replicator-loses-context");
                    if ((uVar7 & 1) != 0) {
                        *(puVar8 + 0x1c) = 1;
                    }
                    *(arg1 + 0x98) = puVar8;
                    uVar9 = coresight_get_platform_data(arg1);
                    if (uVar9 < 0xfffffffffffff001) {
                        *(arg1 + 0x90) = uVar9;
                        *(puVar8 + 3) = 0;
                        uStack_98 = CONCAT44(uStack_98._4_4_,2);
                        uStack_90 = CONCAT44(uStack_90._4_4_,2);
                        pcStack_88 = obj.replicator_cs_ops;
                        uStack_80 = uVar9;
                        iStack_78 = arg1;
                        uVar9 = coresight_register(&uStack_98);
                        puVar8[2] = uVar9;
                        if (uVar9 < 0xfffffffffffff001) {
                            if (*puVar8 != 0) {
                                sym.writel_relaxed(0xc5acce55,*puVar8 + 0xfb0);
                                DataSynchronizationBarrier(3,3,0);
                                iVar4 = coresight_claim_device_unlocked(uVar9);
                                if (iVar4 == 0) {
                                    sym.writel_relaxed(0xff,*puVar8);
                                    sym.writel_relaxed(0xff,*puVar8 + 4);
                                    coresight_disclaim_device_unlocked(uVar9);
                                }
                                DataSynchronizationBarrier(3,3,0);
                                sym.writel_relaxed(0,*puVar8 + 0xfb0);
                            }
                            __pm_runtime_idle(arg1,5);
                            uVar9 = 0;
                            goto code_r0x08001520;
                        }
                    }
                }
                else {
                    uVar9 = devm_ioremap_resource(arg1,arg2);
                    if (uVar9 < 0xfffffffffffff001) {
                        *puVar8 = uVar9;
                        uStack_60 = CONCAT71(uStack_60._1_7_,1);
                        pcStack_70 = obj.replicator_groups;
                        uStack_58 = uVar9;
                        goto code_r0x08001484;
                    }
                }
                if (((uVar9 == 0) || (uVar7 = puVar8[1], uVar7 == 0)) || (0xfffffffffffff000 < uVar7))
                goto code_r0x08001520;
                clk_disable(uVar7);
            }
            clk_unprepare(uVar7);
            goto code_r0x08001520;
        }
    }
    uVar9 = 0xfffffff4;
code_r0x08001520:
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_48) {
        return uVar9 & 0xffffffff;
    }
    iVar12 = __stack_chk_fail();
    *extraout_x18 = sym.idfilter0_show;
    piVar13 = *(*(iVar12 + 0x60) + 0x98);
    iVar4 = __pm_runtime_resume(*(iVar12 + 0x60),4);
    if (iVar4 < 0) {
        puVar8 = *(iVar12 + 0x60) + 0x1f8;
        uVar7 = *puVar8;
        do {
            uVar5 = uVar7;
            if (uVar5 == 0) break;
            Hint_Prefetch(puVar8,2,0,1);
            do {
                uVar1 = *puVar8;
                uVar7 = uVar1;
                if (uVar1 != uVar5) goto code_r0x080016d4;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(puVar8,0x10);
                if (bVar3) {
                    *puVar8 = uVar5 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080016d4:
        } while (uVar5 != uVar1);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar13);
        __pm_runtime_idle(*(iVar12 + 0x60),4);
        iVar4 = scnprintf(in_x2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar4;
}


// ===== sym.idfilter0_show @ 0x08001618 (size 252) =====

int64_t sym.idfilter0_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

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
                if (uVar2 != uVar7) goto code_r0x080016d4;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080016d4:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.readl_relaxed @ 0x08001714 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8001718);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800174c);
    return uVar1;
}


// ===== sym.idfilter1_show @ 0x08001784 (size 256) =====

int64_t sym.idfilter1_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

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
                if (uVar2 != uVar7) goto code_r0x08001844;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            DataMemoryBarrier(2,3);
code_r0x08001844:
        } while (uVar7 != uVar2);
    }
    else {
        uVar6 = sym.readl_relaxed(*piVar9 + 4);
        __pm_runtime_idle(*(arg1 + 0x60),4);
        iVar5 = scnprintf(arg2,0x1000,"0x%llx\n",uVar6);
    }
    return iVar5;
}


// ===== sym.replicator_enable @ 0x08001884 (size 432) =====

int sym.replicator_enable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    char cVar3;
    code *pcVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    ulong uVar9;
    int iVar10;
    ulong *in_x18;
    uint64_t arg1_00;
    int64_t iVar11;
    uint32_t uVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    iVar10 = arg2;
    *in_x18 = unaff_x30;
    arg1_00 = arg2 & 0xffffffff;
    piVar13 = *(*(arg1 + 0x98) + 0x98);
    uVar9 = _raw_spin_lock_irqsave(piVar13 + 3);
    if ((*(*(arg1 + 0x3c8) + iVar10 * 4) == 0) && (*piVar13 != 0)) {
        iVar11 = piVar13[2];
        sym.writel_relaxed(0xc5acce55,*piVar13 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        uVar6 = sym.readl_relaxed(*piVar13);
        uVar7 = sym.readl_relaxed(*piVar13 + 4);
        bVar5 = *(piVar13 + 0x1c) == '\0';
        uVar2 = 0xff;
        if ((bVar5 || uVar6 != 0) || uVar7 != 0) {
            uVar2 = uVar6;
        }
        uVar12 = 0xff;
        if ((bVar5 || uVar6 != 0) || uVar7 != 0) {
            uVar12 = uVar7;
        }
        if (((uVar2 != 0xff) || (uVar12 != 0xff)) || (iVar8 = coresight_claim_device_unlocked(iVar11), iVar8 == 0)) {
            if (iVar10 != 0) {
                if (iVar10 != 1) {
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x80019f0);
                    (*pcVar4)();
                }
                uVar12 = 0;
                arg1_00 = uVar2;
            }
            sym.writel_relaxed(arg1_00,*piVar13);
            sym.writel_relaxed(uVar12,*piVar13 + 4);
            iVar8 = 0;
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar13 + 0xfb0);
        if (iVar8 != 0) goto code_r0x080018f4;
    }
    piVar1 = *(arg1 + 0x3c8) + iVar10 * 4;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    iVar8 = 0;
code_r0x080018f4:
    _raw_spin_unlock_irqrestore(piVar13 + 3,uVar9);
    return iVar8;
}


// ===== sym.replicator_disable @ 0x08001a34 (size 328) =====

void sym.replicator_disable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    ulong uVar7;
    ulong *in_x18;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    
    iVar6 = arg2;
    *in_x18 = unaff_x30;
    piVar10 = *(*(arg1 + 0x98) + 0x98);
    uVar7 = _raw_spin_lock_irqsave(piVar10 + 3);
    piVar1 = *(arg1 + 0x3c8) + iVar6 * 4;
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
    if ((iVar2 + -1 == 0) && (*piVar10 != 0)) {
        iVar8 = piVar10[2];
        if (iVar6 == 0) {
            iVar9 = 0;
        }
        else {
            if (iVar6 != 1) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8001b24);
                (*pcVar5)();
            }
            iVar9 = 4;
        }
        sym.writel_relaxed(0xc5acce55,*piVar10 + 0xfb0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0xff,*piVar10 + iVar9);
        iVar6 = sym.readl_relaxed(*piVar10);
        if ((iVar6 == 0xff) && (iVar6 = sym.readl_relaxed(*piVar10 + 4), iVar6 == 0xff)) {
            coresight_disclaim_device_unlocked(iVar8);
        }
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0,*piVar10 + 0xfb0);
    }
    _raw_spin_unlock_irqrestore(piVar10 + 3,uVar7);
    return;
}


// ===== sym.writel_relaxed @ 0x08001b7c (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001b98);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001bc0);
    return;
}


// ===== sym.replicator_runtime_suspend @ 0x08001bf4 (size 80) =====

ulong sym.replicator_runtime_suspend(int64_t arg1)

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


// ===== sym.replicator_runtime_resume @ 0x08001c44 (size 96) =====

ulong sym.replicator_runtime_resume(int64_t arg1)

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


// ===== sym.dynamic_replicator_probe @ 0x08001ca4 (size 40) =====

void sym.dynamic_replicator_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.replicator_probe(arg1,arg1 + 0x390);
    return;
}


// ===== sym.dynamic_replicator_remove @ 0x08001ccc (size 44) =====

void sym.dynamic_replicator_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(arg1 + 0x98) + 0x10));
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001cf8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001d3c

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
    //switch table (4 cases) at 0x80004e7
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d50);
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
                      (reloc.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt,obj.__this_module);
    if (iVar1 == 0) {
        iVar1 = amba_driver_register(obj.dynamic_replicator_driver);
        if (iVar1 != 0) {
            _printk(0x8000431);
            platform_driver_unregister(reloc.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt);
        }
    }
    else {
        _printk(0x800046b);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001ddc (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.static_replicator_probe.d64f7c5c414e1e82baca4e93d0ac94e4.cfi_jt);
    amba_driver_unregister(obj.dynamic_replicator_driver);
    return;
}

