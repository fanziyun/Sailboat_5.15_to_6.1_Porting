// decompiled from bwmon by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 788) =====

//WARNING: Switch with 1 destination removed at 0x08006e6c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x558484723f05168) {
        if (arg1 < -0x358c311aa1c0ee44) {
            if (arg1 == -0x7bb57194eea6b3f6) {
                pcVar2 = sym.__typeid__ZTSFiP8bw_hwmonjE_global_addr;
            }
            else {
                if (arg1 != -0x550b9e52359ac614) {
                    if ((arg1 == -0x3987c0e26ee29729) && ((pcVar1 + -0x8002338 >> 3 | pcVar1 << 0x3d) < 4)) {
                        return;
                    }
                    goto code_r0x08006e2c;
                }
                pcVar2 = sym.bwmon_monitor_work.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            }
        }
        else if (arg1 < -0x1d11b7e627e03a98) {
            if (arg1 == -0x358c311aa1c0ee44) {
                pcVar2 = sym.__typeid__ZTSFvP8bw_hwmonE_global_addr;
                goto code_r0x080022a0;
            }
            if (arg1 != -0x3557318fb8d07b71) goto code_r0x08006e2c;
            pcVar2 = sym.qcom_bwmon_driver_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        }
        else if (arg1 == -0x1d11b7e627e03a98) {
            pcVar2 = sym.__typeid__ZTSFmP8bw_hwmonmE_global_addr;
        }
        else {
            if (arg1 != -0xef4825473ba2583) goto code_r0x08006e2c;
            pcVar2 = sym.bwmon_jiffies_update_cb.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        }
    }
    else if (arg1 < 0x3ed5ca9cf025e3fa) {
        if (arg1 < 0x1e8fcbdd1fb7098a) {
            if (arg1 == -0x558484723f05168) {
                if ((pcVar1 + -0x80023d8 >> 3 | pcVar1 << 0x3d) < 0x16) {
                    return;
                }
                goto code_r0x08006e2c;
            }
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08006e2c;
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1e8fcbdd1fb7098a) {
                if ((arg1 == 0x2c1d832160b5d123) && ((pcVar1 + -0x8002488 >> 3 | pcVar1 << 0x3d) < 0x17)) {
                    return;
                }
                goto code_r0x08006e2c;
            }
            pcVar2 = sym.__typeid__ZTSFjP8bw_hwmonE_global_addr;
        }
    }
    else {
        if (arg1 < 0x719e0009391e73c4) {
            if (arg1 == 0x3ed5ca9cf025e3fa) {
                pcVar2 = sym.__typeid__ZTSFiP8bw_hwmonmE_global_addr;
            }
            else {
                if (arg1 != 0x5e9afb0bf0e16ac2) goto code_r0x08006e2c;
                pcVar2 = sym.__typeid__ZTSFmP8bw_hwmonE_global_addr;
            }
code_r0x080022a0:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08006e2c;
        }
        if (arg1 == 0x719e0009391e73c4) {
            if ((pcVar1 + -0x8002390 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08006e2c;
        }
        if (arg1 != 0x7d57972cd3914fb1) goto code_r0x08006e2c;
        pcVar2 = sym.bwmon_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08006e2c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006e80);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFjP8bw_hwmonE_global_addr @ 0x08002320 (size 8) =====

ushort sym.__typeid__ZTSFjP8bw_hwmonE_global_addr(int64_t param_1)

{
    return *(param_1 + 0xe6);
}


// ===== sym.init_module.cfi_jt @ 0x08002328 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_bwmon_driver_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.bwmon_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002330 (size 8) =====

ulong sym.bwmon_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 2) {
        iVar5 = *(param_1 + -0x40);
        uVar2 = ktime_get();
        *(iVar5 + 0x90) = 0;
        *(iVar5 + 0xf0) = uVar2;
        uVar3 = *(param_1 + -0x60) * 1000;
        pcVar4 = *(param_1 + -0xa8);
        uVar3 = (((uVar3 >> 0x14) * *(iVar5 + 0x10) + ((uVar3 & 0xffff8) * *(iVar5 + 0x10) >> 0x14)) * *(iVar5 + 0x34))
                / 100;
        *(param_1 + 0x20) = uVar3;
        *(param_1 + 0x28) = 500;
        if (2 < (pcVar4 + -0x80023c0 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x3ed5ca9cf025e3fa,pcVar4,0x80006d0);
        }
        iVar1 = (*pcVar4)(param_1 + -0xa8,uVar3);
        if (iVar1 < 0) {
            _dev_err(*(param_1 + -0x70),"Unable to start HW monitor! (%d)\n",iVar1);
        }
        else {
            *(iVar5 + 0x101) = 1;
        }
    }
    else if (param_2 == 1) {
        iVar6 = *(param_1 + -0x40);
        iVar5 = iVar6 + 0x180;
        mutex_lock(iVar5);
        *(iVar6 + 0x101) = 0;
        mutex_unlock(iVar5);
        pcVar4 = *(param_1 + -0xa0);
        if (2 < (pcVar4 + -0x8002378 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xca73cee55e3f11bc,pcVar4,0x8000770);
        }
        (*pcVar4)(param_1 + -0xa8);
    }
    return 1;
}


// ===== sym.bwmon_intr_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002338 (size 8) =====

void sym.bwmon_intr_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__bwmon_intr_handler(param_2,0);
    return;
}


// ===== sym.bwmon_intr_handler2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002340 (size 8) =====

void sym.bwmon_intr_handler2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__bwmon_intr_handler(param_2,1);
    return;
}


// ===== sym.bwmon_intr_handler3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002348 (size 8) =====

void sym.bwmon_intr_handler3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__bwmon_intr_handler(param_2,2);
    return;
}


// ===== sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002350 (size 8) =====

ulong sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_2 + 0x90);
    mutex_lock(arg1 + 0x180);
    if (*(arg1 + 0x101) != '\0') {
        *(param_2 + 0xe8) = 0;
        cancel_work_sync(param_2 + 0xa0);
        mutex_lock(arg1 + 0x1b0);
        uVar2 = sym.bwmon_update_cur_freq(arg1);
        if ((uVar2 & 1) != 0) {
            iVar3 = (*(param_2 + 0x60))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(param_2 + 0x60);
            }
            iVar1 = qcom_dcvs_update_votes(iVar3,arg1 + 0x10,*(param_2 + 0x7c) << 1 | 1,*(param_2 + 0x6c));
            if (iVar1 < 0) {
                _dev_err(*(param_2 + 0x60),"bwmon irq update failed: %d\n",iVar1);
            }
        }
        mutex_unlock(arg1 + 0x1b0);
        uVar4 = ktime_get();
        *(param_2 + 0x98) = uVar4;
        *(param_2 + 0xe8) = 1;
    }
    mutex_unlock(arg1 + 0x180);
    return 1;
}


// ===== sym.__typeid__ZTSFmP8bw_hwmonmE_global_addr @ 0x08002358 (size 8) =====

uint64_t sym.__typeid__ZTSFmP8bw_hwmonmE_global_addr(int64_t param_1,uint64_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(param_1 + 0xe4),*(param_1 + -0x28) + 0x280);
    DataSynchronizationBarrier(3,3,0);
    uVar2 = sym.readl_relaxed(*(param_1 + -0x28) + 0x288);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = sym.readl_relaxed(*(param_1 + -0x28) + 0x100);
    if (((uVar1 & 3) >> 1 != 0) && (*(*(param_1 + -0x10) + 1) != '\0')) {
        uVar2 = uVar2 + 0xffffffff;
    }
    if (((uVar1 & 1) != 0) && (**(param_1 + -0x10) != '\0')) {
        uVar3 = sym.readl_relaxed(*(param_1 + -0x28) + 0x290);
        uVar2 = uVar2 + (uVar3 & 0xffffffff);
    }
    sym.writel_relaxed(1,*(param_1 + -0x28) + 0x284);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(3,*(param_1 + -0x28) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f),*(param_1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    if ((**(param_1 + -0x10) != '\0') && (param_2 < 0x7a121)) {
        param_2 = 500000;
    }
    sym.writel_relaxed(param_2 & 0xffffffff,*(param_1 + -0x28) + 0x290);
    sym.writel_relaxed(*(param_1 + 0xe4) | 1,*(param_1 + -0x28) + 0x280);
    return uVar2;
}


// ===== sym.bwmon_monitor_work.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002360 (size 8) =====

void sym.bwmon_monitor_work.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + -0x10);
    mutex_lock(arg1 + 0x1b0);
    uVar2 = sym.bwmon_update_cur_freq(arg1);
    if ((uVar2 & 1) != 0) {
        iVar3 = (*(param_1 + -0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(param_1 + -0x40);
        }
        iVar1 = qcom_dcvs_update_votes(iVar3,arg1 + 0x10,*(param_1 + -0x24) << 1 | 1,*(param_1 + -0x34));
        if (iVar1 < 0) {
            _dev_err(*(param_1 + -0x40),"bwmon monitor update failed: %d\n",iVar1);
        }
    }
    mutex_unlock(arg1 + 0x1b0);
    return;
}


// ===== sym.bwmon_jiffies_update_cb.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002368 (size 8) =====

void sym.bwmon_jiffies_update_cb.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    uVar2 = _raw_spin_lock_irqsave(obj.configure_hwmon_node.__key);
    if (_obj.hwmon_list != obj.hwmon_list) {
        pcVar3 = _obj.hwmon_list;
        do {
            iVar4 = *(pcVar3 + 0x10);
            if ((*(iVar4 + 0xc0) != '\0') && (*(*(iVar4 + 0x68) + 0x28) * 1000000 < (iVar1 + 2000000) - *(iVar4 + 0x70))
               ) {
                queue_work_on(0x20,_segment.ehdr,iVar4 + 0x78);
                *(iVar4 + 0x70) = iVar1;
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.hwmon_list);
    }
    _raw_spin_unlock_irqrestore(obj.configure_hwmon_node.__key,uVar2);
    return;
}


// ===== sym.__typeid__ZTSFiP8bw_hwmonjE_global_addr @ 0x08002370 (size 8) =====

ulong sym.__typeid__ZTSFiP8bw_hwmonjE_global_addr(int64_t param_1,uint32_t param_2)

{
    if (0x1f < param_2) {
        return 0xffffffea;
    }
    *(param_1 + 0xe4) = (param_2 & 0x1f) << 0x10;
    return 0;
}


// ===== sym.__typeid__ZTSFvP8bw_hwmonE_global_addr @ 0x08002378 (size 8) =====

void sym.__typeid__ZTSFvP8bw_hwmonE_global_addr(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0xc0) = 0;
    cancel_work_sync(param_1 + 0x78);
    _raw_spin_lock(obj.mon_irq_lock);
    uVar1 = sym.readl_relaxed(*(param_1 + -0x20) + 0x10c);
    sym.writel_relaxed(uVar1 & (1 << (*(param_1 + -0x18) & 0x1f) ^ 0xffffffffU),*(param_1 + -0x20) + 0x10c);
    piVar2 = param_1 + -0x28;
    uVar1 = sym.readl_relaxed(*piVar2 + 0x10c);
    sym.writel_relaxed(uVar1 & 0xfffffffe,*piVar2 + 0x10c);
    _raw_spin_unlock(obj.mon_irq_lock);
    DataSynchronizationBarrier(3,3,0);
    free_irq(*(param_1 + -0x14),piVar2);
    sym.writel_relaxed(*(param_1 + 0xe4),*piVar2 + 0x280);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1,*piVar2 + 0x284);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(3,*piVar2 + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f),*(param_1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.stop_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002380 (size 8) =====

void sym.stop_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0xc0) = 0;
    cancel_work_sync(param_1 + 0x78);
    _raw_spin_lock(obj.mon_irq_lock);
    piVar2 = param_1 + -0x28;
    uVar1 = sym.readl_relaxed(*piVar2 + 0xc);
    sym.writel_relaxed(uVar1 & 0xfffffff0,*piVar2 + 0xc);
    _raw_spin_unlock(obj.mon_irq_lock);
    DataSynchronizationBarrier(3,3,0);
    free_irq(*(param_1 + -0x14),piVar2);
    sym.writel_relaxed(*(param_1 + 0xe4),*piVar2 + 0x10);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(2,*piVar2 + 0x14);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*piVar2 + 0x14);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf,*piVar2 + 8);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*piVar2 + 8);
    return;
}


// ===== sym.stop_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002388 (size 8) =====

void sym.stop_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 0xc0) = 0;
    cancel_work_sync(param_1 + 0x78);
    _raw_spin_lock(obj.mon_irq_lock);
    uVar1 = sym.readl_relaxed(*(param_1 + -0x20) + 0x10c);
    sym.writel_relaxed(uVar1 & (1 << (*(param_1 + -0x18) & 0x1f) ^ 0xffffffffU),*(param_1 + -0x20) + 0x10c);
    piVar2 = param_1 + -0x28;
    uVar1 = sym.readl_relaxed(*piVar2 + 0x10c);
    sym.writel_relaxed(uVar1 & 0xffffff0f,*piVar2 + 0x10c);
    _raw_spin_unlock(obj.mon_irq_lock);
    DataSynchronizationBarrier(3,3,0);
    free_irq(*(param_1 + -0x14),piVar2);
    sym.writel_relaxed(*(param_1 + 0xe4),*piVar2 + 0x2a0);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(2,*piVar2 + 0x2a4);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf0,*piVar2 + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f),*(param_1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.__typeid__ZTSFmP8bw_hwmonjE_global_addr @ 0x08002390 (size 8) =====

ulong sym.__typeid__ZTSFmP8bw_hwmonjE_global_addr(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__set_hw_events(param_1,param_2,2);
    return 0;
}


// ===== sym.set_hw_events.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002398 (size 8) =====

ulong sym.set_hw_events.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__set_hw_events(param_1,param_2,1);
    return 0;
}


// ===== sym.__typeid__ZTSFmP8bw_hwmonE_global_addr @ 0x080023a0 (size 8) =====

int64_t sym.__typeid__ZTSFmP8bw_hwmonE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(param_1 + 0xe4),*(param_1 + -0x28) + 0x2a0);
    DataSynchronizationBarrier(3,3,0);
    if (*(param_1 + 0xec) == 0) {
        iVar3 = sym.readl_relaxed(*(param_1 + -0x28) + 0x2d8);
        if (iVar3 == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = LZCOUNT(iVar3) >> 3 ^ 3;
        }
    }
    else {
        uVar4 = LZCOUNT(*(param_1 + 0xec)) ^ 0x1f;
    }
    *(param_1 + 0xec) = 0;
    uVar4 = sym.readl_relaxed(*(param_1 + -0x28) + (uVar4 << 2) + 0x2e0);
    uVar2 = *(param_1 + 0xf0);
    iVar1 = 0;
    if (uVar4 != 0) {
        iVar1 = uVar4 + 1;
    }
    sym.writel_relaxed(1,*(param_1 + -0x28) + 0x2a4);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf0,*(param_1 + -0x28) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f),*(param_1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(*(param_1 + 0xe4) | 1,*(param_1 + -0x28) + 0x2a0);
    return iVar1 << (uVar2 & 0x3f);
}


// ===== sym.get_bytes_and_clear3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023a8 (size 8) =====

int64_t sym.get_bytes_and_clear3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(param_1 + 0xe4),*(param_1 + -0x28) + 0x10);
    DataSynchronizationBarrier(3,3,0);
    if (*(param_1 + 0xec) == 0) {
        iVar3 = sym.readl_relaxed(*(param_1 + -0x28) + 0x40);
        if (iVar3 == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = LZCOUNT(iVar3) >> 3 ^ 3;
        }
    }
    else {
        uVar4 = LZCOUNT(*(param_1 + 0xec)) ^ 0x1f;
    }
    *(param_1 + 0xec) = 0;
    uVar4 = sym.readl_relaxed(*(param_1 + -0x28) + (uVar4 << 2) + 0x44);
    uVar2 = *(param_1 + 0xf0);
    iVar1 = 0;
    if (uVar4 != 0) {
        iVar1 = uVar4 + 1;
    }
    sym.writel_relaxed(1,*(param_1 + -0x28) + 0x14);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*(param_1 + -0x28) + 0x14);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf,*(param_1 + -0x28) + 8);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*(param_1 + -0x28) + 8);
    sym.writel_relaxed(*(param_1 + 0xe4) | 1,*(param_1 + -0x28) + 0x10);
    return iVar1 << (uVar2 & 0x3f);
}


// ===== sym.get_bytes_and_clear.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023b0 (size 8) =====

uint64_t sym.get_bytes_and_clear.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(param_1 + 0xe4),*(param_1 + -0x28) + 0x280);
    DataSynchronizationBarrier(3,3,0);
    uVar2 = sym.readl_relaxed(*(param_1 + -0x28) + 0x288);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = sym.readl_relaxed(*(param_1 + -0x28) + 0x100);
    if (((uVar1 & 3) >> 1 != 0) && (*(*(param_1 + -0x10) + 1) != '\0')) {
        uVar2 = uVar2 + 0xffffffff;
    }
    if (((uVar1 & 1) != 0) && (**(param_1 + -0x10) != '\0')) {
        uVar3 = sym.readl_relaxed(*(param_1 + -0x28) + 0x290);
        uVar2 = uVar2 + (uVar3 & 0xffffffff);
    }
    sym.writel_relaxed(1,*(param_1 + -0x28) + 0x284);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(3,*(param_1 + -0x28) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f),*(param_1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(*(param_1 + 0xe4) | 1,*(param_1 + -0x28) + 0x280);
    return uVar2;
}


// ===== sym.qcom_bwmon_driver_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023b8 (size 8) =====

void sym.qcom_bwmon_driver_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(uint *param_1)

{
    int *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong uVar11;
    uint *puVar12;
    char *pcVar13;
    code *pcVar14;
    uint64_t uVar15;
    code *pcVar16;
    ulong *in_x18;
    int64_t *unaff_x21;
    int64_t *unaff_x22;
    uint *unaff_x23;
    code *unaff_x24;
    int64_t *unaff_x25;
    code *unaff_x27;
    ulong unaff_x30;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
    uint uStack_78;
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    piVar2 = param_1 + 4;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_84 = 3;
    uStack_80 = 3;
    piVar8 = devm_kmalloc(piVar2,0x128,0xdc0);
    if (piVar8 == NULL) {
        piVar8 = unaff_x21;
        uVar6 = 0xfffffff4;
        goto code_r0x08002f20;
    }
    piVar8[4] = piVar2;
    piVar8[0xc] = piVar2;
    iVar9 = of_device_get_match_data(piVar2);
    piVar8[3] = iVar9;
    if (iVar9 == 0) {
        _dev_err(piVar2,"Unknown device type!\n");
        uVar6 = 0xffffffed;
        goto code_r0x08002f20;
    }
    piVar10 = platform_get_resource_byname(param_1,0x200,"base");
    if (piVar10 == NULL) {
        pcVar13 = "base not found!\n";
        goto code_r0x08002e2c;
    }
    iVar9 = devm_ioremap(piVar2,*piVar10,(piVar10[1] - *piVar10) + 1);
    *piVar8 = iVar9;
    if (iVar9 == 0) {
        pcVar13 = "Unable map base!\n";
code_r0x08002df4:
        _dev_err(piVar2,pcVar13);
        uVar6 = 0xfffffff4;
        goto code_r0x08002f20;
    }
    if (*(piVar8[3] + 4) != '\0') {
        piVar10 = platform_get_resource_byname(param_1,0x200,"global_base");
        if (piVar10 == NULL) {
            pcVar13 = "global_base not found!\n";
            goto code_r0x08002e2c;
        }
        iVar9 = devm_ioremap(piVar2,*piVar10,(piVar10[1] - *piVar10) + 1);
        piVar8[1] = iVar9;
        if (iVar9 == 0) {
            pcVar13 = "Unable map global_base!\n";
            goto code_r0x08002df4;
        }
        uVar6 = of_property_read_variable_u32_array(*(param_1 + 0xc0),"qcom,mport",&uStack_78,1,0);
        uStack_74 = uVar6 & uVar6 >> 0x1f;
        pcVar14 = uStack_74;
        if (uVar6 < 0) {
            pcVar13 = "mport not found! (%d)\n";
            goto code_r0x08002f18;
        }
        *(piVar8 + 2) = uStack_78;
    }
    iVar7 = platform_get_irq(param_1,0);
    *(piVar8 + 0x14) = iVar7;
    if (iVar7 < 0) {
        _dev_err(piVar2,"Unable to get IRQ number\n");
        uVar6 = *(piVar8 + 0x14);
        goto code_r0x08002f20;
    }
    if (*(piVar8[3] + 3) != '\0') {
        uVar6 = of_property_read_variable_u32_array(*(param_1 + 0xc0),"qcom,hw-timer-hz",piVar8 + 0x21,1,0);
        uStack_74 = uVar6 & uVar6 >> 0x1f;
        if (uVar6 < 0) {
            _dev_err(piVar2,"HW sampling rate not specified!\n");
            uVar6 = uStack_74;
            goto code_r0x08002f20;
        }
    }
    iVar7 = of_property_read_variable_u32_array(*(param_1 + 0xc0),"qcom,count-unit",&uStack_7c,1,0);
    if (iVar7 < 0) {
        uStack_7c = 0x100000;
    }
    uVar6 = 0x40 - LZCOUNT(uStack_7c - 1);
    if (uStack_7c < 2) {
        uVar6 = 0;
    }
    *(piVar8 + 0x23) = uVar6;
    *(piVar8 + 0x11c) = 0xffffffff >> (uVar6 & 0x1f);
    iVar7 = *(piVar8[3] + 8);
    if (iVar7 == 0) {
        piVar8[5] = sym.__typeid__ZTSFiP8bw_hwmonmE_global_addr;
        piVar8[6] = sym.__typeid__ZTSFvP8bw_hwmonE_global_addr;
        piVar8[9] = sym.get_bytes_and_clear.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        piVar8[7] = sym.__typeid__ZTSFmP8bw_hwmonmE_global_addr;
    }
    else {
        if (iVar7 == 1) {
            piVar8[5] = sym.start_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            piVar8[6] = sym.stop_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            pcVar14 = sym.__typeid__ZTSFmP8bw_hwmonE_global_addr;
            pcVar16 = sym.set_hw_events.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        }
        else {
            if (iVar7 != 2) goto code_r0x080027a8;
            piVar8[5] = sym.start_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            piVar8[6] = sym.stop_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            pcVar14 = sym.get_bytes_and_clear3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            pcVar16 = sym.__typeid__ZTSFmP8bw_hwmonjE_global_addr;
        }
        piVar8[8] = pcVar16;
        piVar8[9] = pcVar14;
    }
code_r0x080027a8:
    of_property_read_variable_u32_array(*(param_1 + 0xc0),"qcom,byte-mid-match",piVar8 + 0x124,1,0);
    of_property_read_variable_u32_array(*(param_1 + 0xc0),"qcom,byte-mid-mask",piVar8 + 0x24,1,0);
    if (*(piVar8[3] + 2) != '\0') {
        piVar8[10] = sym.__typeid__ZTSFiP8bw_hwmonjE_global_addr;
        piVar8[0xb] = sym.__typeid__ZTSFjP8bw_hwmonE_global_addr;
    }
    piVar10 = of_parse_phandle(*(param_1 + 0xc0),"qcom,target-dev",0);
    if (piVar10 == NULL) {
        pcVar13 = "Unable to find target-dev for bwmon device\n";
        goto code_r0x08002e2c;
    }
    uVar6 = of_property_read_variable_u32_array(piVar10,"qcom,dcvs-hw-type",&uStack_80,1,0);
    uStack_74 = uVar6 & uVar6 >> 0x1f;
    unaff_x22 = piVar10;
    if ((uVar6 < 0) || (3 < uStack_80)) {
        pcVar13 = "invalid dcvs_hw=%d, ret=%d\n";
        goto code_r0x08002eec;
    }
    *(piVar8 + 0xd) = uStack_80;
    uVar6 = of_property_read_variable_u32_array(piVar10,"qcom,bus-width",piVar8 + 0xe,1,0);
    uStack_74 = uVar6 & uVar6 >> 0x1f;
    if ((uVar6 < 0) || (piVar8[0xe] == 0)) {
        pcVar13 = "invalid hw width=%d, ret=%d\n";
        goto code_r0x08002eec;
    }
    uVar11 = *(param_1 + 0xc0);
    *(piVar8 + 0x6c) = 0;
    puVar12 = of_parse_phandle(uVar11,"qcom,second-vote",0);
    if (puVar12 != NULL) {
        unaff_x22 = of_parse_phandle(puVar12,"qcom,target-dev",0);
        unaff_x23 = puVar12;
        if (unaff_x22 == NULL) {
            pcVar13 = "Unable to find target-dev for second vote\n";
            unaff_x22 = piVar10;
            goto code_r0x08002e2c;
        }
        uVar6 = of_property_read_variable_u32_array(unaff_x22,"qcom,dcvs-hw-type",&uStack_84,1,0);
        uStack_74 = uVar6 & uVar6 >> 0x1f;
        if ((uVar6 < 0) || (3 < uStack_84)) {
            pcVar13 = "invalid sec dcvs_hw=%d, ret=%d\n";
            goto code_r0x08002eec;
        }
        *(piVar8 + 0x74) = uStack_84;
        iVar9 = of_find_property(puVar12,"qcom,secondary-map",&uStack_74);
        if (iVar9 != 0) {
            uStack_70 = 0;
            iVar9 = of_find_property(puVar12,"qcom,secondary-map",&uStack_70 + 4);
            if (iVar9 != 0) {
                uVar6 = uStack_70._4_4_;
                unaff_x25 = uStack_70._4_4_;
                iVar7 = uStack_70._4_4_ >> 2;
                bVar5 = 3 < uStack_70._4_4_;
                uStack_70 = CONCAT44(iVar7,uStack_70);
                if ((bVar5) && ((uVar6 >> 2 & 1) == 0)) {
                    if (iVar7 < 0) {
                        iVar7 = iVar7 + 1;
                    }
                    uVar4 = iVar7 >> 1;
                    pcVar14 = devm_kmalloc(piVar2,-(uVar4 + 1 >> 0x1f) & 0xfffffff800000000 | uVar4 + 1 << 3,0xdc0);
                    if (pcVar14 != NULL) {
                        unaff_x24 = pcVar14;
                        if (uVar6 < 8) {
                            uVar15 = 0;
                        }
                        else {
                            unaff_x25 = NULL;
                            if (uVar4 < 2) {
                                uVar4 = 1;
                            }
                            uVar15 = uVar4;
                            do {
                                iVar7 = of_property_read_u32_index
                                                  (puVar12,"qcom,secondary-map",unaff_x25 & 0xffffffff,&uStack_70);
                                if (iVar7 < 0) goto code_r0x08002dc4;
                                unaff_x27 = unaff_x25 + 1;
                                *(pcVar14 + unaff_x25 * 4) = uStack_70;
                                iVar7 = of_property_read_u32_index
                                                  (puVar12,"qcom,secondary-map",unaff_x27 & 0xffffffff,&uStack_70);
                                if (iVar7 < 0) goto code_r0x08002dc4;
                                iVar9 = unaff_x25 * 4;
                                iVar3 = unaff_x25 + 2;
                                unaff_x25 = unaff_x25 + 2;
                                *(pcVar14 + iVar9 + 4) = uStack_70;
                            } while (uVar15 * 2 - iVar3 != 0);
                        }
                        piVar8[0x11] = pcVar14;
                        *(pcVar14 + uVar15 * 8) = 0;
                        goto joined_r0x08002a04;
                    }
                }
            }
code_r0x08002dc4:
            piVar8[0x11] = 0;
            pcVar13 = "error importing second map!\n";
code_r0x08002e2c:
            _dev_err(piVar2,pcVar13);
            uVar6 = 0xffffffea;
            goto code_r0x08002f20;
        }
        unaff_x24 = piVar8[0x11];
joined_r0x08002a04:
        if (unaff_x24 == NULL) {
            uVar6 = of_property_read_variable_u32_array(unaff_x22,"qcom,bus-width",piVar8 + 0xf,1,0);
            uStack_74 = uVar6 & uVar6 >> 0x1f;
            if ((uVar6 < 0) || (piVar8[0xf] == 0)) {
                pcVar13 = "invalid sec hw width=%d, ret=%d\n";
code_r0x08002eec:
                _dev_err(piVar2,pcVar13);
                uVar6 = 0xffffffea;
                goto code_r0x08002f20;
            }
        }
        *(piVar8 + 0x7c) = 1;
    }
    iVar9 = *(param_1 + 0x20);
    if (iVar9 == 0) {
        iVar9 = *piVar2;
    }
    uStack_74 = qcom_dcvs_register_voter(iVar9,uStack_80,*(piVar8 + 0x6c));
    if (uStack_74 < 0) {
        pcVar14 = uStack_74;
        if (uStack_74 == 0xfffffdfb) {
            uVar6 = 0xfffffdfb;
            goto code_r0x08002f20;
        }
        pcVar13 = "qcom dcvs registration error: %d\n";
    }
    else {
        if (*(piVar8 + 0x7c) != '\0') {
            iVar9 = *(param_1 + 0x20);
            if (iVar9 == 0) {
                iVar9 = *piVar2;
            }
            uStack_74 = qcom_dcvs_register_voter(iVar9,uStack_84,0);
            if (uStack_74 < 0) {
                pcVar14 = uStack_74;
                pcVar13 = "second hw qcom dcvs reg err: %d\n";
                goto code_r0x08002f18;
            }
        }
        iVar9 = devm_kmalloc(piVar8[0xc],0x1e0,0xdc0);
        if (iVar9 == 0) {
            pcVar13 = "bwmon node configuration failed: %d\n";
            pcVar14 = 0xfffffff4;
            uStack_74 = 0xfffffff4;
        }
        else {
            *(iVar9 + 0x28) = 0x6400000032;
            *(iVar9 + 0x30) = 0x100000005a;
            piVar8[0x12] = iVar9;
            unaff_x22 = piVar8 + 5;
            *(iVar9 + 0x38) = 0x32000000be;
            *(iVar9 + 0x40) = 0xa00000000;
            *(iVar9 + 0x48) = 0x300000000;
            *(iVar9 + 0x50) = 0x300000000;
            *(iVar9 + 0x58) = 0;
            *(iVar9 + 0x60) = 0x6400000190;
            *(iVar9 + 0x68) = 0;
            *(iVar9 + 0x118) = unaff_x22;
            __mutex_init(iVar9 + 0x180,"&node->mon_lock",obj.configure_hwmon_node.__key);
            __mutex_init(iVar9 + 0x1b0,"&node->update_lock",obj.configure_hwmon_node.__key);
            unaff_x24 = _raw_spin_lock_irqsave(obj.configure_hwmon_node.__key);
            piVar10 = *0x80002d0;
            unaff_x25 = iVar9 + 0x108;
            unaff_x27 = obj.hwmon_list;
            uVar15 = __list_add_valid(unaff_x25,*0x80002d0,obj.hwmon_list);
            if ((uVar15 & 1) != 0) {
                *0x80002d0 = unaff_x25;
                *(iVar9 + 0x108) = obj.hwmon_list;
                *(iVar9 + 0x110) = piVar10;
                *piVar10 = unaff_x25;
            }
            _raw_spin_unlock_irqrestore(obj.configure_hwmon_node.__key,unaff_x24);
            unaff_x23 = piVar8[0x12];
            uStack_74 = 0;
            uStack_74 = qcom_dcvs_hw_minmax_get(uStack_80,unaff_x23,unaff_x23 + 1);
            if (-1 < uStack_74) {
                unaff_x23[2] = *unaff_x23;
                unaff_x23[3] = unaff_x23[1];
                unaff_x23[4] = *unaff_x23;
                unaff_x23[5] = 0;
                unaff_x23[6] = uStack_80;
                unaff_x23[9] = uStack_84;
                if (piVar8[0x11] != 0) {
                    iVar9 = piVar8[0x11] + -4;
                    do {
                        piVar1 = iVar9 + 4;
                        iVar9 = iVar9 + 8;
                    } while (1 < *piVar1 + 1U);
                    iVar3 = -8;
                    if (*piVar1 != 0) {
                        iVar3 = 0;
                    }
                    *(piVar8 + 0x10) = *(iVar9 + iVar3);
                }
                *(piVar8 + 0x1d) = 0;
                mutex_lock(obj.bwmon_lock);
                unaff_x24 = segment.ehdr;
                if (_segment.ehdr == 0) {
                    _segment.ehdr = alloc_workqueue(0x800088a,0x4000e,1,"bwmon_wq");
                    if (_segment.ehdr == 0) {
                        _dev_err(piVar2,"Couldn\'t create bwmon workqueue.\n");
                        mutex_unlock(obj.bwmon_lock);
                        uVar6 = 0xfffffff4;
                        goto code_r0x08002f20;
                    }
                    tracepoint_probe_register
                              (__tracepoint_android_vh_jiffies_update,
                               sym.bwmon_jiffies_update_cb.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0);
                }
                mutex_unlock(obj.bwmon_lock);
                piVar8[0x1a] = sym.bwmon_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
                piVar8[0x14] = 0xfffffffe0;
                piVar8[0x15] = piVar8 + 0x15;
                piVar8[0x16] = piVar8 + 0x15;
                piVar8[0x17] = sym.bwmon_monitor_work.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
                register_pm_notifier(piVar8 + 0x1a);
                unaff_x27 = piVar8[0x12];
                uVar11 = ktime_get();
                *(unaff_x27 + 0x90) = 0;
                *(unaff_x27 + 0xf0) = uVar11;
                unaff_x24 = piVar8[5];
                unaff_x25 = (((*(piVar8 + 0xe) * 1000 >> 0x14) * *(unaff_x27 + 0x10) +
                             ((*(piVar8 + 0xe) * 1000 & 0xffff8) * *(unaff_x27 + 0x10) >> 0x14)) * *(unaff_x27 + 0x34))
                            / 100;
                piVar8[0x1e] = unaff_x25;
                piVar8[0x1f] = 500;
                if (2 < (unaff_x24 + -0x80023c0 >> 3 | unaff_x24 << 0x3d)) goto code_r0x08002f84;
                goto code_r0x08002cf0;
            }
            pcVar14 = uStack_74;
            pcVar13 = "error getting minmax from qcom dcvs: %d\n";
        }
    }
code_r0x08002f18:
    do {
        _dev_err(piVar2,pcVar13,pcVar14);
        uVar6 = uStack_74;
code_r0x08002f20:
        while( true ) {
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail(uVar6);
code_r0x08002f84:
            __cfi_slowpath_diag(0x3ed5ca9cf025e3fa,unaff_x24,0x80006d0);
code_r0x08002cf0:
            uVar6 = (*unaff_x24)(unaff_x22,unaff_x25);
            if (uVar6 < 0) break;
            uStack_74 = 0;
            unaff_x27[0x101] = 0x1;
            uVar15 = qcom_dcvs_kobject_get(uStack_80);
            if (uVar15 < 0xfffffffffffff001) {
                iVar9 = *(param_1 + 0x20);
                param_1 = unaff_x23 + 0x48;
                if (iVar9 == 0) {
                    iVar9 = *piVar2;
                }
                uStack_74 = kobject_init_and_add(param_1,obj.bwmon_ktype,uVar15,iVar9);
                if (uStack_74 < 0) {
                    _dev_err(piVar2,"failed to init bwmon kobj: %d\n",uStack_74);
                    kobject_put(param_1);
                    goto code_r0x08002ed8;
                }
                uVar6 = 0;
            }
            else {
                uStack_74 = uVar15;
                _dev_err(piVar2,"error getting kobj from qcom_dcvs: %d\n");
code_r0x08002ed8:
                sym.stop_monitor(unaff_x22);
                uVar6 = uStack_74;
            }
        }
        pcVar14 = uVar6;
        _dev_err(piVar8[0xc],"Unable to start HW monitor! (%d)\n",pcVar14);
        pcVar13 = "Error starting BWMON monitor: %d\n";
        unaff_x24 = pcVar14;
        uStack_74 = uVar6;
    } while( true );
}


// ===== sym.__typeid__ZTSFiP8bw_hwmonmE_global_addr @ 0x080023c0 (size 8) =====

int sym.__typeid__ZTSFiP8bw_hwmonmE_global_addr(int64_t param_1,int64_t param_2)

{
    uchar auVar1 [16];
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = param_1 + -0x28;
    iVar5 = (*(param_1 + -8))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(param_1 + -8);
    }
    uVar3 = *(*(param_1 + 0x68) + 0x28);
    iVar2 = request_threaded_irq
                      (*(param_1 + -0x14),sym.bwmon_intr_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
                       sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2080,iVar5,piVar6);
    if (iVar2 < 0) {
        _dev_err(*(param_1 + -8),"Unable to register interrupt handler! (%d)\n",iVar2);
    }
    else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3 * param_2 + 999 >> 3;
        sym.writel_relaxed(*(param_1 + 0xe4),*piVar6 + 0x280);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*piVar6 + 0x284);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed((SUB164(auVar1 * ZEXT816(0x20c49ba5e353f7cf),8) & 0xfff0) << 0x10,*piVar6 + 0x290);
        if (*(param_1 + 0xf8) != 0) {
            sym.writel_relaxed(*(param_1 + 0xf8),*piVar6 + 0x298);
            sym.writel_relaxed(*(param_1 + 0xfc),*piVar6 + 0x29c);
        }
        sym.writel_relaxed(3,*(param_1 + -0x28) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f),*(param_1 + -0x20) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        _raw_spin_lock(obj.mon_irq_lock);
        uVar3 = sym.readl_relaxed(*(param_1 + -0x20) + 0x10c);
        sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f) | uVar3,*(param_1 + -0x20) + 0x10c);
        uVar3 = sym.readl_relaxed(*(param_1 + -0x28) + 0x10c);
        sym.writel_relaxed(uVar3 | 1,*(param_1 + -0x28) + 0x10c);
        _raw_spin_unlock(obj.mon_irq_lock);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(*(param_1 + 0xe4) | 1,*(param_1 + -0x28) + 0x280);
        uVar4 = ktime_get();
        iVar2 = 0;
        *(param_1 + 0xc0) = 1;
        *(param_1 + 0x70) = uVar4;
    }
    return iVar2;
}


// ===== sym.start_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023c8 (size 8) =====

int sym.start_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = param_1 + -0x28;
    iVar5 = (*(param_1 + -8))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(param_1 + -8);
    }
    iVar2 = request_threaded_irq
                      (*(param_1 + -0x14),sym.bwmon_intr_handler2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
                       sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2080,iVar5,piVar9);
    if (iVar2 < 0) {
        _dev_err(*(param_1 + -8),"Unable to register interrupt handler! (%d)\n",iVar2);
    }
    else {
        sym.writel_relaxed(*(param_1 + 0xe4),*(param_1 + -0x28) + 0x2a0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(param_1 + -0x28) + 0x2a4);
        DataSynchronizationBarrier(3,3,0);
        uVar3 = *(*(param_1 + 0x68) + 0x28);
        if (*(param_1 + 0xe8) != uVar3) {
            *(param_1 + 0xe8) = uVar3;
            uVar10 = (*(param_1 + 0xe0) * (uVar3 % 1000)) / 1000 + *(param_1 + 0xe0) * (uVar3 / 1000);
            if (uVar10 >> 0x18 != 0) {
                uVar10 = 0xffffff;
                _printk(0x8000d9c,0xffffff,0xffffff);
            }
            sym.writel_relaxed(uVar10,*piVar9 + 0x2a8);
        }
        uVar10 = *(param_1 + 0xd8);
        uVar1 = *(param_1 + 0xf0);
        if (0xfe < uVar10) {
            uVar10 = 0xff;
        }
        uVar6 = *(param_1 + 200) * uVar3;
        uVar8 = 0x14 - uVar1;
        uVar11 = uVar1 - 0x14;
        uVar7 = *(param_1 + 0xd0) * uVar3;
        uVar12 = uVar7 >> (uVar11 & 0x3f);
        uVar13 = uVar6 >> (uVar11 & 0x3f);
        if (uVar1 < 0x14 || uVar11 == 0) {
            uVar12 = uVar7 << (uVar8 & 0x3f);
            uVar13 = uVar6 << (uVar8 & 0x3f);
        }
        uVar13 = (uVar13 + 999) / 1000;
        uVar12 = (uVar12 + 999) / 1000;
        uVar3 = uVar13;
        uVar11 = uVar12;
        if ((*(param_1 + 0xf4) < uVar3) || (uVar3 < uVar11)) {
            _printk(0x800098b,uVar13 & 0xffffffff,uVar12 & 0xffffffff,0);
            if (*(param_1 + 0xf4) <= uVar3) {
                uVar3 = *(param_1 + 0xf4);
            }
            uVar13 = uVar3;
            if (uVar3 - 1 <= uVar11) {
                uVar11 = uVar3 - 1;
            }
            uVar12 = uVar11;
        }
        sym.writel_relaxed(uVar13 & 0xffffffff,*piVar9 + 0x2ac);
        sym.writel_relaxed(uVar12 & 0xffffffff,*piVar9 + 0x2b0);
        sym.writel_relaxed(0,*piVar9 + 0x2b4);
        sym.writel_relaxed(uVar10 << 8 | 0x1ff00ff,*piVar9 + 700);
        sym.writel_relaxed(0x95250901,*piVar9 + 0x2b8);
        if (*(param_1 + 0xf8) != 0) {
            sym.writel_relaxed(*(param_1 + 0xf8),*piVar9 + 0x298);
            sym.writel_relaxed(*(param_1 + 0xfc),*piVar9 + 0x29c);
        }
        sym.writel_relaxed(0xf0,*(param_1 + -0x28) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f),*(param_1 + -0x20) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        _raw_spin_lock(obj.mon_irq_lock);
        uVar3 = sym.readl_relaxed(*(param_1 + -0x20) + 0x10c);
        sym.writel_relaxed(1 << (*(param_1 + -0x18) & 0x1f) | uVar3,*(param_1 + -0x20) + 0x10c);
        uVar3 = sym.readl_relaxed(*(param_1 + -0x28) + 0x10c);
        sym.writel_relaxed(uVar3 | 0xf0,*(param_1 + -0x28) + 0x10c);
        _raw_spin_unlock(obj.mon_irq_lock);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(*(param_1 + 0xe4) | 1,*(param_1 + -0x28) + 0x2a0);
        uVar4 = ktime_get();
        iVar2 = 0;
        *(param_1 + 0xc0) = 1;
        *(param_1 + 0x70) = uVar4;
    }
    return iVar2;
}


// ===== sym.start_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023d0 (size 8) =====

int sym.start_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = param_1 + -0x28;
    iVar5 = (*(param_1 + -8))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(param_1 + -8);
    }
    iVar2 = request_threaded_irq
                      (*(param_1 + -0x14),sym.bwmon_intr_handler3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
                       sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2080,iVar5,piVar9);
    if (iVar2 < 0) {
        _dev_err(*(param_1 + -8),"Unable to register interrupt handler! (%d)\n",iVar2);
    }
    else {
        sym.writel_relaxed(*(param_1 + 0xe4),*(param_1 + -0x28) + 0x10);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(param_1 + -0x28) + 0x14);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(param_1 + -0x28) + 0x14);
        DataSynchronizationBarrier(3,3,0);
        uVar3 = *(*(param_1 + 0x68) + 0x28);
        if (*(param_1 + 0xe8) != uVar3) {
            *(param_1 + 0xe8) = uVar3;
            uVar10 = (*(param_1 + 0xe0) * (uVar3 % 1000)) / 1000 + *(param_1 + 0xe0) * (uVar3 / 1000);
            if (uVar10 >> 0x18 != 0) {
                uVar10 = 0xffffff;
                _printk(0x8000d9c,0xffffff,0xffffff);
            }
            sym.writel_relaxed(uVar10,*piVar9 + 0x20);
        }
        uVar10 = *(param_1 + 0xd8);
        uVar1 = *(param_1 + 0xf0);
        if (0xfe < uVar10) {
            uVar10 = 0xff;
        }
        uVar6 = *(param_1 + 200) * uVar3;
        uVar8 = 0x14 - uVar1;
        uVar11 = uVar1 - 0x14;
        uVar7 = *(param_1 + 0xd0) * uVar3;
        uVar12 = uVar7 >> (uVar11 & 0x3f);
        uVar13 = uVar6 >> (uVar11 & 0x3f);
        if (uVar1 < 0x14 || uVar11 == 0) {
            uVar12 = uVar7 << (uVar8 & 0x3f);
            uVar13 = uVar6 << (uVar8 & 0x3f);
        }
        uVar13 = (uVar13 + 999) / 1000;
        uVar12 = (uVar12 + 999) / 1000;
        uVar3 = uVar13;
        uVar11 = uVar12;
        if ((*(param_1 + 0xf4) < uVar3) || (uVar3 < uVar11)) {
            _printk(0x800098b,uVar13 & 0xffffffff,uVar12 & 0xffffffff,0);
            if (*(param_1 + 0xf4) <= uVar3) {
                uVar3 = *(param_1 + 0xf4);
            }
            uVar13 = uVar3;
            if (uVar3 - 1 <= uVar11) {
                uVar11 = uVar3 - 1;
            }
            uVar12 = uVar11;
        }
        sym.writel_relaxed(uVar13 & 0xffffffff,*piVar9 + 0x24);
        sym.writel_relaxed(uVar12 & 0xffffffff,*piVar9 + 0x28);
        sym.writel_relaxed(0,*piVar9 + 0x2c);
        sym.writel_relaxed(uVar10 << 8 | 0x1ff00ff,*piVar9 + 0x34);
        sym.writel_relaxed(0x95250901,*piVar9 + 0x30);
        if (*(param_1 + 0xf8) != 0) {
            sym.writel_relaxed(*(param_1 + 0xf8),*piVar9 + 0x18);
            sym.writel_relaxed(*(param_1 + 0xfc),*piVar9 + 0x1c);
        }
        sym.writel_relaxed(0xf,*(param_1 + -0x28) + 8);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(param_1 + -0x28) + 8);
        _raw_spin_lock(obj.mon_irq_lock);
        uVar3 = sym.readl_relaxed(*(param_1 + -0x28) + 0xc);
        sym.writel_relaxed(uVar3 | 0xf,*(param_1 + -0x28) + 0xc);
        _raw_spin_unlock(obj.mon_irq_lock);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(*(param_1 + 0xe4) | 1,*(param_1 + -0x28) + 0x10);
        uVar4 = ktime_get();
        iVar2 = 0;
        *(param_1 + 0x70) = uVar4;
        *(param_1 + 0xc0) = 1;
    }
    return iVar2;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr @ 0x080023d8 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c <= *(param_1 + -0x120)) {
            uVar1 = *(param_1 + -0x120);
        }
        if (*(param_1 + -0x114) <= uVar1) {
            uVar1 = *(param_1 + -0x114);
        }
        *(param_1 + -0x118) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_max_freq;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0x114));
    return iVar2;
}


// ===== sym.store_sample_ms.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023e0 (size 8) =====

int64_t sym.store_sample_ms.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtoint(param_3,10,puVar4);
    if (iVar2 == 0) {
        uVar1 = uStack_2c;
        if (uStack_2c < 2) {
            uVar1 = 1;
        }
        if (0x31 < uVar1) {
            uVar1 = 0x32;
        }
        if (*(param_1 + -0xf8) < uVar1) {
            param_4 = -0x16;
        }
        else {
            *(param_1 + -0xe4) = uVar1;
        }
    }
    else {
        param_4 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_up_scale;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xe0));
    return iVar2;
}


// ===== sym.store_up_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023e8 (size 8) =====

int64_t sym.store_up_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (499 < uStack_2c) {
            uVar1 = 500;
        }
        *(param_1 + -0xe0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_up_thres;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xdc));
    return iVar2;
}


// ===== sym.store_max_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023f0 (size 8) =====

int64_t sym.store_max_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c <= *(param_1 + -0x118)) {
            uVar1 = *(param_1 + -0x118);
        }
        if (*(param_1 + -0x11c) <= uVar1) {
            uVar1 = *(param_1 + -0x11c);
        }
        *(param_1 + -0x114) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_cur_freq;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0x110));
    return iVar2;
}


// ===== sym.store_up_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080023f8 (size 8) =====

int64_t sym.store_up_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 2) {
            uVar1 = 1;
        }
        if (99 < uVar1) {
            uVar1 = 100;
        }
        *(param_1 + -0xdc) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_down_thres;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xd8));
    return iVar2;
}


// ===== sym.store_throttle_adj.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002400 (size 8) =====

void sym.store_throttle_adj.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    code *extraout_x8;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (*(*(param_1 + -8) + 0x28) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = kstrtouint(param_3,10,&uStack_2c);
        unaff_x19 = param_4;
        unaff_x20 = param_1;
        if (-1 < iVar2) {
            iVar3 = *(param_1 + -8);
            pcVar4 = *(iVar3 + 0x28);
            if (pcVar4 != sym.__typeid__ZTSFiP8bw_hwmonjE_global_addr) goto code_r0x08006c98;
            goto code_r0x08006c44;
        }
        iVar3 = iVar2;
    }
    while (iVar1 = sp_el0, *(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail(iVar3);
        pcVar4 = extraout_x8;
code_r0x08006c98:
        __cfi_slowpath_diag(0x844a8e6b11594c0a,pcVar4,0x8000750);
        iVar3 = *(unaff_x20 + -8);
code_r0x08006c44:
        iVar2 = (*pcVar4)(iVar3,uStack_2c);
        iVar3 = unaff_x19;
        if (iVar2 != 0) {
            iVar3 = iVar2;
        }
    }
    return;
}


// ===== sym.store_second_vote_limit.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002408 (size 8) =====

uchar * sym.store_second_vote_limit.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uchar *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + -8);
    uStack_3c = 0;
    if (*(iVar5 + 0x54) == '\0') {
        param_4 = 0xffffffffffffffed;
    }
    else {
        iVar2 = kstrtouint(param_3,10,&uStack_3c);
        if (iVar2 < 0) {
            param_4 = iVar2;
        }
        else if (uStack_3c != *(iVar5 + 0x58)) {
            mutex_lock(param_1 + 0x90);
            if (uStack_3c < *(param_1 + -0x104)) {
                *(param_1 + -0x104) = uStack_3c;
                iVar3 = (*(iVar5 + 0x38))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(iVar5 + 0x38);
                }
                iVar2 = qcom_dcvs_update_votes(iVar3,param_1 + -0x110,3,*(iVar5 + 0x44));
                if (iVar2 < 0) {
                    _dev_err(*(iVar5 + 0x38),"second vote update failed: %d\n",iVar2);
                }
            }
            *(iVar5 + 0x58) = uStack_3c;
            mutex_unlock(param_1 + 0x90);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail();
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8006e80);
        (*pcVar1)();
    }
    return param_4;
}


// ===== sym.store_down_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002410 (size 8) =====

int64_t sym.store_down_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(param_1 + -0xd4) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_hist_memory;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xd0));
    return iVar2;
}


// ===== sym.store_mbps_zones.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002418 (size 8) =====

void sym.store_mbps_zones.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    code *pcVar1;
    int iVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *unaff_x19;
    int64_t iVar5;
    uint *unaff_x23;
    ulong unaff_x30;
    uint uStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    uStack_4c = 0;
    puVar3 = argv_split(0xcc0,param_3,&uStack_4c);
    if (puVar3 == NULL) {
        iVar4 = -0xc;
    }
    else {
        unaff_x23 = param_1 + -0xb8;
        if (8 < uStack_4c) {
            uStack_4c = 9;
        }
        unaff_x19 = puVar3;
        if (uStack_4c == 0) {
            iVar5 = 0;
        }
        else {
            iVar2 = kstrtouint(*puVar3,10,&uStack_50);
            if (iVar2 < 0) {
                iVar5 = 0;
                param_4 = iVar2;
            }
            else {
                *unaff_x23 = uStack_50;
                if (uStack_4c < 2) {
                    iVar5 = 1;
                }
                else {
                    iVar2 = kstrtouint(puVar3[1],10,&uStack_50);
                    if (iVar2 < 0) {
                        iVar5 = 1;
                        param_4 = iVar2;
                    }
                    else {
                        *(param_1 + -0xb4) = uStack_50;
                        if (uStack_4c < 3) {
                            iVar5 = 2;
                        }
                        else {
                            iVar2 = kstrtouint(puVar3[2],10,&uStack_50);
                            if (iVar2 < 0) {
                                iVar5 = 2;
                                param_4 = iVar2;
                            }
                            else {
                                *(param_1 + -0xb0) = uStack_50;
                                if (uStack_4c < 4) {
                                    iVar5 = 3;
                                }
                                else {
                                    iVar2 = kstrtouint(puVar3[3],10,&uStack_50);
                                    if (iVar2 < 0) {
                                        iVar5 = 3;
                                        param_4 = iVar2;
                                    }
                                    else {
                                        *(param_1 + -0xac) = uStack_50;
                                        if (uStack_4c < 5) {
                                            iVar5 = 4;
                                        }
                                        else {
                                            iVar2 = kstrtouint(puVar3[4],10,&uStack_50);
                                            if (iVar2 < 0) {
                                                iVar5 = 4;
                                                param_4 = iVar2;
                                            }
                                            else {
                                                *(param_1 + -0xa8) = uStack_50;
                                                if (uStack_4c < 6) {
                                                    iVar5 = 5;
                                                }
                                                else {
                                                    iVar2 = kstrtouint(puVar3[5],10,&uStack_50);
                                                    if (iVar2 < 0) {
                                                        iVar5 = 5;
                                                        param_4 = iVar2;
                                                    }
                                                    else {
                                                        *(param_1 + -0xa4) = uStack_50;
                                                        if (uStack_4c < 7) {
                                                            iVar5 = 6;
                                                        }
                                                        else {
                                                            iVar2 = kstrtouint(puVar3[6],10,&uStack_50);
                                                            if (iVar2 < 0) {
                                                                iVar5 = 6;
                                                                param_4 = iVar2;
                                                            }
                                                            else {
                                                                *(param_1 + -0xa0) = uStack_50;
                                                                if (uStack_4c < 8) {
                                                                    iVar5 = 7;
                                                                }
                                                                else {
                                                                    iVar2 = kstrtouint(puVar3[7],10,&uStack_50);
                                                                    if (iVar2 < 0) {
                                                                        iVar5 = 7;
                                                                        param_4 = iVar2;
                                                                    }
                                                                    else {
                                                                        *(param_1 + -0x9c) = uStack_50;
                                                                        if (uStack_4c < 9) {
                                                                            iVar5 = 8;
                                                                        }
                                                                        else {
                                                                            iVar2 = kstrtouint(puVar3[8],10,&uStack_50
                                                                                              );
                                                                            if (iVar2 < 0) {
                                                                                iVar5 = 8;
                                                                                param_4 = iVar2;
                                                                            }
                                                                            else {
                                                                                *(param_1 + -0x98) = uStack_50;
                                                                                if (uStack_4c < 10) {
                                                                                    iVar5 = 9;
                                                                                }
                                                                                else {
                                                                                    param_4 = kstrtouint(puVar3[9],10,
                                                                                                         &uStack_50);
                                                                                    if (-1 < param_4)
                                                                                    goto code_r0x08006afc;
                                                                                    iVar5 = 9;
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
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        argv_free(puVar3);
        iVar4 = param_4;
        unaff_x23[iVar5] = 0;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08006afc:
    unaff_x23[9] = uStack_50;
    if ((uStack_4c < 0xb) || (iVar2 = kstrtouint(unaff_x19[10],10,&uStack_50), iVar2 < 0)) {
        argv_free(unaff_x19);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006b2c);
    (*pcVar1)();
}


// ===== sym.store_idle_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002420 (size 8) =====

int64_t sym.store_idle_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(param_1 + -0xc4) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_idle_mbps;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xc0));
    return iVar2;
}


// ===== sym.attr_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002428 (size 8) =====

ulong sym.attr_store.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
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
        if (0x15 < (pcVar2 + -0x80023d8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000710);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.store_ab_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002430 (size 8) =====

uint64_t sym.store_ab_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    puVar5 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtouint(param_3,10,puVar5);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        uVar2 = uStack_2c;
        if (99 < uStack_2c) {
            uVar2 = 100;
        }
        *(param_1 + -0xbc) = uVar2;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.show_mbps_zones;
    if (*(iVar4 + -0xb8) == 0) {
        uVar6 = 0;
    }
    else {
        uVar2 = scnprintf(puVar5,0x1000,0x800080d);
        uVar6 = uVar2;
        if (*(iVar4 + -0xb4) != 0) {
            iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
            uVar6 = iVar1 + uVar2;
            if (*(iVar4 + -0xb0) != 0) {
                iVar3 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                uVar2 = iVar3 + iVar1 + uVar2;
                uVar6 = uVar2;
                if (*(iVar4 + -0xac) != 0) {
                    iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                    uVar2 = iVar1 + uVar2;
                    uVar6 = uVar2;
                    if (*(iVar4 + -0xa8) != 0) {
                        iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                        uVar2 = iVar1 + uVar2;
                        uVar6 = uVar2;
                        if (*(iVar4 + -0xa4) != 0) {
                            iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                            uVar2 = iVar1 + uVar2;
                            uVar6 = uVar2;
                            if (*(iVar4 + -0xa0) != 0) {
                                iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                uVar2 = iVar1 + uVar2;
                                uVar6 = uVar2;
                                if (*(iVar4 + -0x9c) != 0) {
                                    iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                    uVar2 = iVar1 + uVar2;
                                    uVar6 = uVar2;
                                    if (*(iVar4 + -0x98) != 0) {
                                        iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                        uVar2 = iVar1 + uVar2;
                                        uVar6 = uVar2;
                                        if (*(iVar4 + -0x94) != 0) {
                                            iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                            uVar6 = iVar1 + uVar2;
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
    iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x8000b72);
    return iVar1 + uVar6;
}


// ===== sym.store_idle_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002438 (size 8) =====

int64_t sym.store_idle_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (1999 < uStack_2c) {
            uVar1 = 2000;
        }
        *(param_1 + -0xc0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_ab_scale;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xbc));
    return iVar2;
}


// ===== sym.store_io_percent.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002440 (size 8) =====

int64_t sym.store_io_percent.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 2) {
            uVar1 = 1;
        }
        if (399 < uVar1) {
            uVar1 = 400;
        }
        *(param_1 + -0xec) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_bw_step;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xe8));
    return iVar2;
}


// ===== sym.store_hyst_trigger_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002448 (size 8) =====

int64_t sym.store_hyst_trigger_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(param_1 + -0xcc) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_hyst_length;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -200));
    return iVar2;
}


// ===== sym.store_hist_memory.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002450 (size 8) =====

int64_t sym.store_hist_memory.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(param_1 + -0xd0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_hyst_trigger_count;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xcc));
    return iVar2;
}


// ===== sym.store_guard_band_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002458 (size 8) =====

int64_t sym.store_guard_band_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (1999 < uStack_2c) {
            uVar1 = 2000;
        }
        *(param_1 + -0xf4) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_decay_rate;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xf0));
    return iVar2;
}


// ===== sym.store_hyst_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002460 (size 8) =====

int64_t sym.store_hyst_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(param_1 + -200) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_idle_length;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xc4));
    return iVar2;
}


// ===== sym.store_decay_rate.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002468 (size 8) =====

int64_t sym.store_decay_rate.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (99 < uStack_2c) {
            uVar1 = 100;
        }
        *(param_1 + -0xf0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_io_percent;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xec));
    return iVar2;
}


// ===== sym.store_bw_step.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002470 (size 8) =====

int64_t sym.store_bw_step.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 0x33) {
            uVar1 = 0x32;
        }
        if (999 < uVar1) {
            uVar1 = 1000;
        }
        *(param_1 + -0xe8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_sample_ms;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xe4));
    return iVar2;
}


// ===== sym.store_window_ms.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002478 (size 8) =====

int64_t sym.store_window_ms.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 9) {
            uVar1 = 8;
        }
        if (999 < uVar1) {
            uVar1 = 1000;
        }
        *(param_1 + -0xf8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_guard_band_mbps;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xf4));
    return iVar2;
}


// ===== sym.store_down_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002480 (size 8) =====

int64_t sym.store_down_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(param_3,10,puVar4);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(param_1 + -0xd8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_down_count;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xd4));
    return iVar2;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x08002488 (size 8) =====

int64_t sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xe4));
    return iVar1;
}


// ===== sym.show_idle_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002490 (size 8) =====

int64_t sym.show_idle_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xc0));
    return iVar1;
}


// ===== sym.show_idle_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002498 (size 8) =====

int64_t sym.show_idle_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xc4));
    return iVar1;
}


// ===== sym.show_window_ms.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024a0 (size 8) =====

int64_t sym.show_window_ms.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xf8));
    return iVar1;
}


// ===== sym.show_hist_memory.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024a8 (size 8) =====

int64_t sym.show_hist_memory.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xd0));
    return iVar1;
}


// ===== sym.show_up_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024b0 (size 8) =====

int64_t sym.show_up_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xdc));
    return iVar1;
}


// ===== sym.show_ab_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024b8 (size 8) =====

int64_t sym.show_ab_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xbc));
    return iVar1;
}


// ===== sym.show_hyst_trigger_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024c0 (size 8) =====

int64_t sym.show_hyst_trigger_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xcc));
    return iVar1;
}


// ===== sym.show_throttle_adj.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024c8 (size 8) =====

int64_t sym.show_throttle_adj.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + -8);
    pcVar4 = *(iVar3 + 0x30);
    if (pcVar4 == NULL) {
        uVar1 = 0;
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFjP8bw_hwmonE_global_addr) {
            __cfi_slowpath_diag(0x1e8fcbdd1fb7098a,pcVar4,0x8000730);
            iVar3 = *(param_1 + -8);
        }
        uVar1 = (*pcVar4)(iVar3);
    }
    iVar2 = scnprintf(param_3,0x1000,0x8000909,uVar1);
    return iVar2;
}


// ===== sym.show_up_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024d0 (size 8) =====

int64_t sym.show_up_scale.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xe0));
    return iVar1;
}


// ===== sym.show_max_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024d8 (size 8) =====

int64_t sym.show_max_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0x114));
    return iVar1;
}


// ===== sym.show_down_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024e0 (size 8) =====

int64_t sym.show_down_count.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xd4));
    return iVar1;
}


// ===== sym.show_down_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024e8 (size 8) =====

int64_t sym.show_down_thres.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xd8));
    return iVar1;
}


// ===== sym.attr_show.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024f0 (size 8) =====

ulong sym.attr_show.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

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
        if (0x16 < (pcVar2 + -0x8002488 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80006f0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.show_io_percent.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x080024f8 (size 8) =====

int64_t sym.show_io_percent.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xec));
    return iVar1;
}


// ===== sym.show_mbps_zones.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002500 (size 8) =====

int sym.show_mbps_zones.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0xb8) == 0) {
        uVar4 = 0;
    }
    else {
        uVar1 = scnprintf(param_3,0x1000,0x800080d);
        uVar4 = uVar1;
        if (*(param_1 + -0xb4) != 0) {
            iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
            uVar4 = iVar2 + uVar1;
            if (*(param_1 + -0xb0) != 0) {
                iVar3 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                uVar1 = iVar3 + iVar2 + uVar1;
                uVar4 = uVar1;
                if (*(param_1 + -0xac) != 0) {
                    iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                    uVar1 = iVar2 + uVar1;
                    uVar4 = uVar1;
                    if (*(param_1 + -0xa8) != 0) {
                        iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                        uVar1 = iVar2 + uVar1;
                        uVar4 = uVar1;
                        if (*(param_1 + -0xa4) != 0) {
                            iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                            uVar1 = iVar2 + uVar1;
                            uVar4 = uVar1;
                            if (*(param_1 + -0xa0) != 0) {
                                iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                                uVar1 = iVar2 + uVar1;
                                uVar4 = uVar1;
                                if (*(param_1 + -0x9c) != 0) {
                                    iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                                    uVar1 = iVar2 + uVar1;
                                    uVar4 = uVar1;
                                    if (*(param_1 + -0x98) != 0) {
                                        iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                                        uVar1 = iVar2 + uVar1;
                                        uVar4 = uVar1;
                                        if (*(param_1 + -0x94) != 0) {
                                            iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x800080d);
                                            uVar4 = iVar2 + uVar1;
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
    iVar2 = scnprintf(param_3 + uVar4,0x1000 - uVar4,0x8000b72);
    return iVar2 + uVar4;
}


// ===== sym.show_cur_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002508 (size 8) =====

int64_t sym.show_cur_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0x110));
    return iVar1;
}


// ===== sym.show_min_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002510 (size 8) =====

int64_t sym.show_min_freq.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0x118));
    return iVar1;
}


// ===== sym.show_bw_step.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002518 (size 8) =====

int64_t sym.show_bw_step.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xe8));
    return iVar1;
}


// ===== sym.show_decay_rate.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002520 (size 8) =====

int64_t sym.show_decay_rate.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xf0));
    return iVar1;
}


// ===== sym.show_hyst_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002528 (size 8) =====

int64_t sym.show_hyst_length.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -200));
    return iVar1;
}


// ===== sym.show_guard_band_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002530 (size 8) =====

int64_t sym.show_guard_band_mbps.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(param_1 + -0xf4));
    return iVar1;
}


// ===== sym.show_second_vote_limit.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08002538 (size 8) =====

int64_t sym.show_second_vote_limit.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000909,*(*(param_1 + -8) + 0x58));
    return iVar1;
}


// ===== sym.qcom_bwmon_driver_probe @ 0x08002540 (size 2664) =====

void sym.qcom_bwmon_driver_probe(int64_t arg1)

{
    int *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong uVar11;
    uint *puVar12;
    char *pcVar13;
    code *pcVar14;
    uint64_t uVar15;
    code *pcVar16;
    ulong *in_x18;
    int64_t *unaff_x21;
    int64_t *unaff_x22;
    uint *unaff_x23;
    code *unaff_x24;
    int64_t *unaff_x25;
    code *unaff_x27;
    ulong unaff_x30;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
    uint uStack_78;
    uint32_t uStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    piVar2 = arg1 + 0x10;
    iStack_68 = *(iVar9 + 0x5e0);
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_84 = 3;
    uStack_80 = 3;
    piVar8 = devm_kmalloc(piVar2,0x128,0xdc0);
    if (piVar8 == NULL) {
        piVar8 = unaff_x21;
        uVar6 = 0xfffffff4;
        goto code_r0x08002f20;
    }
    piVar8[4] = piVar2;
    piVar8[0xc] = piVar2;
    iVar9 = of_device_get_match_data(piVar2);
    piVar8[3] = iVar9;
    if (iVar9 == 0) {
        _dev_err(piVar2,"Unknown device type!\n");
        uVar6 = 0xffffffed;
        goto code_r0x08002f20;
    }
    piVar10 = platform_get_resource_byname(arg1,0x200,"base");
    if (piVar10 == NULL) {
        pcVar13 = "base not found!\n";
        goto code_r0x08002e2c;
    }
    iVar9 = devm_ioremap(piVar2,*piVar10,(piVar10[1] - *piVar10) + 1);
    *piVar8 = iVar9;
    if (iVar9 == 0) {
        pcVar13 = "Unable map base!\n";
code_r0x08002df4:
        _dev_err(piVar2,pcVar13);
        uVar6 = 0xfffffff4;
        goto code_r0x08002f20;
    }
    if (*(piVar8[3] + 4) != '\0') {
        piVar10 = platform_get_resource_byname(arg1,0x200,"global_base");
        if (piVar10 == NULL) {
            pcVar13 = "global_base not found!\n";
            goto code_r0x08002e2c;
        }
        iVar9 = devm_ioremap(piVar2,*piVar10,(piVar10[1] - *piVar10) + 1);
        piVar8[1] = iVar9;
        if (iVar9 == 0) {
            pcVar13 = "Unable map global_base!\n";
            goto code_r0x08002df4;
        }
        uVar6 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,mport",&uStack_78,1,0);
        uStack_74 = uVar6 & uVar6 >> 0x1f;
        pcVar14 = uStack_74;
        if (uVar6 < 0) {
            pcVar13 = "mport not found! (%d)\n";
            goto code_r0x08002f18;
        }
        *(piVar8 + 2) = uStack_78;
    }
    iVar7 = platform_get_irq(arg1,0);
    *(piVar8 + 0x14) = iVar7;
    if (iVar7 < 0) {
        _dev_err(piVar2,"Unable to get IRQ number\n");
        uVar6 = *(piVar8 + 0x14);
        goto code_r0x08002f20;
    }
    if (*(piVar8[3] + 3) != '\0') {
        uVar6 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,hw-timer-hz",piVar8 + 0x21,1,0);
        uStack_74 = uVar6 & uVar6 >> 0x1f;
        if (uVar6 < 0) {
            _dev_err(piVar2,"HW sampling rate not specified!\n");
            uVar6 = uStack_74;
            goto code_r0x08002f20;
        }
    }
    iVar7 = of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,count-unit",&uStack_7c,1,0);
    if (iVar7 < 0) {
        uStack_7c = 0x100000;
    }
    uVar6 = 0x40 - LZCOUNT(uStack_7c - 1);
    if (uStack_7c < 2) {
        uVar6 = 0;
    }
    *(piVar8 + 0x23) = uVar6;
    *(piVar8 + 0x11c) = 0xffffffff >> (uVar6 & 0x1f);
    iVar7 = *(piVar8[3] + 8);
    if (iVar7 == 0) {
        piVar8[5] = sym.__typeid__ZTSFiP8bw_hwmonmE_global_addr;
        piVar8[6] = sym.__typeid__ZTSFvP8bw_hwmonE_global_addr;
        piVar8[9] = sym.get_bytes_and_clear.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        piVar8[7] = sym.__typeid__ZTSFmP8bw_hwmonmE_global_addr;
    }
    else {
        if (iVar7 == 1) {
            piVar8[5] = sym.start_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            piVar8[6] = sym.stop_bw_hwmon2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            pcVar14 = sym.__typeid__ZTSFmP8bw_hwmonE_global_addr;
            pcVar16 = sym.set_hw_events.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        }
        else {
            if (iVar7 != 2) goto code_r0x080027a8;
            piVar8[5] = sym.start_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            piVar8[6] = sym.stop_bw_hwmon3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            pcVar14 = sym.get_bytes_and_clear3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
            pcVar16 = sym.__typeid__ZTSFmP8bw_hwmonjE_global_addr;
        }
        piVar8[8] = pcVar16;
        piVar8[9] = pcVar14;
    }
code_r0x080027a8:
    of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,byte-mid-match",piVar8 + 0x124,1,0);
    of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,byte-mid-mask",piVar8 + 0x24,1,0);
    if (*(piVar8[3] + 2) != '\0') {
        piVar8[10] = sym.__typeid__ZTSFiP8bw_hwmonjE_global_addr;
        piVar8[0xb] = sym.__typeid__ZTSFjP8bw_hwmonE_global_addr;
    }
    piVar10 = of_parse_phandle(*(arg1 + 0x300),"qcom,target-dev",0);
    if (piVar10 == NULL) {
        pcVar13 = "Unable to find target-dev for bwmon device\n";
        goto code_r0x08002e2c;
    }
    uVar6 = of_property_read_variable_u32_array(piVar10,"qcom,dcvs-hw-type",&uStack_80,1,0);
    uStack_74 = uVar6 & uVar6 >> 0x1f;
    unaff_x22 = piVar10;
    if ((uVar6 < 0) || (3 < uStack_80)) {
        pcVar13 = "invalid dcvs_hw=%d, ret=%d\n";
        goto code_r0x08002eec;
    }
    *(piVar8 + 0xd) = uStack_80;
    uVar6 = of_property_read_variable_u32_array(piVar10,"qcom,bus-width",piVar8 + 0xe,1,0);
    uStack_74 = uVar6 & uVar6 >> 0x1f;
    if ((uVar6 < 0) || (piVar8[0xe] == 0)) {
        pcVar13 = "invalid hw width=%d, ret=%d\n";
        goto code_r0x08002eec;
    }
    uVar11 = *(arg1 + 0x300);
    *(piVar8 + 0x6c) = 0;
    puVar12 = of_parse_phandle(uVar11,"qcom,second-vote",0);
    if (puVar12 != NULL) {
        unaff_x22 = of_parse_phandle(puVar12,"qcom,target-dev",0);
        unaff_x23 = puVar12;
        if (unaff_x22 == NULL) {
            pcVar13 = "Unable to find target-dev for second vote\n";
            unaff_x22 = piVar10;
            goto code_r0x08002e2c;
        }
        uVar6 = of_property_read_variable_u32_array(unaff_x22,"qcom,dcvs-hw-type",&uStack_84,1,0);
        uStack_74 = uVar6 & uVar6 >> 0x1f;
        if ((uVar6 < 0) || (3 < uStack_84)) {
            pcVar13 = "invalid sec dcvs_hw=%d, ret=%d\n";
            goto code_r0x08002eec;
        }
        *(piVar8 + 0x74) = uStack_84;
        iVar9 = of_find_property(puVar12,"qcom,secondary-map",&uStack_74);
        if (iVar9 != 0) {
            uStack_70 = 0;
            iVar9 = of_find_property(puVar12,"qcom,secondary-map",&uStack_70 + 4);
            if (iVar9 != 0) {
                uVar6 = uStack_70._4_4_;
                unaff_x25 = uStack_70._4_4_;
                iVar7 = uStack_70._4_4_ >> 2;
                bVar5 = 3 < uStack_70._4_4_;
                uStack_70 = CONCAT44(iVar7,uStack_70);
                if ((bVar5) && ((uVar6 >> 2 & 1) == 0)) {
                    if (iVar7 < 0) {
                        iVar7 = iVar7 + 1;
                    }
                    uVar4 = iVar7 >> 1;
                    pcVar14 = devm_kmalloc(piVar2,-(uVar4 + 1 >> 0x1f) & 0xfffffff800000000 | uVar4 + 1 << 3,0xdc0);
                    if (pcVar14 != NULL) {
                        unaff_x24 = pcVar14;
                        if (uVar6 < 8) {
                            uVar15 = 0;
                        }
                        else {
                            unaff_x25 = NULL;
                            if (uVar4 < 2) {
                                uVar4 = 1;
                            }
                            uVar15 = uVar4;
                            do {
                                iVar7 = of_property_read_u32_index
                                                  (puVar12,"qcom,secondary-map",unaff_x25 & 0xffffffff,&uStack_70);
                                if (iVar7 < 0) goto code_r0x08002dc4;
                                unaff_x27 = unaff_x25 + 1;
                                *(pcVar14 + unaff_x25 * 4) = uStack_70;
                                iVar7 = of_property_read_u32_index
                                                  (puVar12,"qcom,secondary-map",unaff_x27 & 0xffffffff,&uStack_70);
                                if (iVar7 < 0) goto code_r0x08002dc4;
                                iVar9 = unaff_x25 * 4;
                                iVar3 = unaff_x25 + 2;
                                unaff_x25 = unaff_x25 + 2;
                                *(pcVar14 + iVar9 + 4) = uStack_70;
                            } while (uVar15 * 2 - iVar3 != 0);
                        }
                        piVar8[0x11] = pcVar14;
                        *(pcVar14 + uVar15 * 8) = 0;
                        goto joined_r0x08002a04;
                    }
                }
            }
code_r0x08002dc4:
            piVar8[0x11] = 0;
            pcVar13 = "error importing second map!\n";
code_r0x08002e2c:
            _dev_err(piVar2,pcVar13);
            uVar6 = 0xffffffea;
            goto code_r0x08002f20;
        }
        unaff_x24 = piVar8[0x11];
joined_r0x08002a04:
        if (unaff_x24 == NULL) {
            uVar6 = of_property_read_variable_u32_array(unaff_x22,"qcom,bus-width",piVar8 + 0xf,1,0);
            uStack_74 = uVar6 & uVar6 >> 0x1f;
            if ((uVar6 < 0) || (piVar8[0xf] == 0)) {
                pcVar13 = "invalid sec hw width=%d, ret=%d\n";
code_r0x08002eec:
                _dev_err(piVar2,pcVar13);
                uVar6 = 0xffffffea;
                goto code_r0x08002f20;
            }
        }
        *(piVar8 + 0x7c) = 1;
    }
    iVar9 = *(arg1 + 0x80);
    if (iVar9 == 0) {
        iVar9 = *piVar2;
    }
    uStack_74 = qcom_dcvs_register_voter(iVar9,uStack_80,*(piVar8 + 0x6c));
    if (uStack_74 < 0) {
        pcVar14 = uStack_74;
        if (uStack_74 == 0xfffffdfb) {
            uVar6 = 0xfffffdfb;
            goto code_r0x08002f20;
        }
        pcVar13 = "qcom dcvs registration error: %d\n";
    }
    else {
        if (*(piVar8 + 0x7c) != '\0') {
            iVar9 = *(arg1 + 0x80);
            if (iVar9 == 0) {
                iVar9 = *piVar2;
            }
            uStack_74 = qcom_dcvs_register_voter(iVar9,uStack_84,0);
            if (uStack_74 < 0) {
                pcVar14 = uStack_74;
                pcVar13 = "second hw qcom dcvs reg err: %d\n";
                goto code_r0x08002f18;
            }
        }
        iVar9 = devm_kmalloc(piVar8[0xc],0x1e0,0xdc0);
        if (iVar9 == 0) {
            pcVar13 = "bwmon node configuration failed: %d\n";
            pcVar14 = 0xfffffff4;
            uStack_74 = 0xfffffff4;
        }
        else {
            *(iVar9 + 0x28) = 0x6400000032;
            *(iVar9 + 0x30) = 0x100000005a;
            piVar8[0x12] = iVar9;
            unaff_x22 = piVar8 + 5;
            *(iVar9 + 0x38) = 0x32000000be;
            *(iVar9 + 0x40) = 0xa00000000;
            *(iVar9 + 0x48) = 0x300000000;
            *(iVar9 + 0x50) = 0x300000000;
            *(iVar9 + 0x58) = 0;
            *(iVar9 + 0x60) = 0x6400000190;
            *(iVar9 + 0x68) = 0;
            *(iVar9 + 0x118) = unaff_x22;
            __mutex_init(iVar9 + 0x180,"&node->mon_lock",obj.configure_hwmon_node.__key);
            __mutex_init(iVar9 + 0x1b0,"&node->update_lock",obj.configure_hwmon_node.__key);
            unaff_x24 = _raw_spin_lock_irqsave(obj.configure_hwmon_node.__key);
            piVar10 = *0x80002d0;
            unaff_x25 = iVar9 + 0x108;
            unaff_x27 = obj.hwmon_list;
            uVar15 = __list_add_valid(unaff_x25,*0x80002d0,obj.hwmon_list);
            if ((uVar15 & 1) != 0) {
                *0x80002d0 = unaff_x25;
                *(iVar9 + 0x108) = obj.hwmon_list;
                *(iVar9 + 0x110) = piVar10;
                *piVar10 = unaff_x25;
            }
            _raw_spin_unlock_irqrestore(obj.configure_hwmon_node.__key,unaff_x24);
            unaff_x23 = piVar8[0x12];
            uStack_74 = 0;
            uStack_74 = qcom_dcvs_hw_minmax_get(uStack_80,unaff_x23,unaff_x23 + 1);
            if (-1 < uStack_74) {
                unaff_x23[2] = *unaff_x23;
                unaff_x23[3] = unaff_x23[1];
                unaff_x23[4] = *unaff_x23;
                unaff_x23[5] = 0;
                unaff_x23[6] = uStack_80;
                unaff_x23[9] = uStack_84;
                if (piVar8[0x11] != 0) {
                    iVar9 = piVar8[0x11] + -4;
                    do {
                        piVar1 = iVar9 + 4;
                        iVar9 = iVar9 + 8;
                    } while (1 < *piVar1 + 1U);
                    iVar3 = -8;
                    if (*piVar1 != 0) {
                        iVar3 = 0;
                    }
                    *(piVar8 + 0x10) = *(iVar9 + iVar3);
                }
                *(piVar8 + 0x1d) = 0;
                mutex_lock(obj.bwmon_lock);
                unaff_x24 = segment.ehdr;
                if (_segment.ehdr == 0) {
                    _segment.ehdr = alloc_workqueue(0x800088a,0x4000e,1,"bwmon_wq");
                    if (_segment.ehdr == 0) {
                        _dev_err(piVar2,"Couldn\'t create bwmon workqueue.\n");
                        mutex_unlock(obj.bwmon_lock);
                        uVar6 = 0xfffffff4;
                        goto code_r0x08002f20;
                    }
                    tracepoint_probe_register
                              (__tracepoint_android_vh_jiffies_update,
                               sym.bwmon_jiffies_update_cb.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0);
                }
                mutex_unlock(obj.bwmon_lock);
                piVar8[0x1a] = sym.bwmon_pm_notifier.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
                piVar8[0x14] = 0xfffffffe0;
                piVar8[0x15] = piVar8 + 0x15;
                piVar8[0x16] = piVar8 + 0x15;
                piVar8[0x17] = sym.bwmon_monitor_work.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
                register_pm_notifier(piVar8 + 0x1a);
                unaff_x27 = piVar8[0x12];
                uVar11 = ktime_get();
                *(unaff_x27 + 0x90) = 0;
                *(unaff_x27 + 0xf0) = uVar11;
                unaff_x24 = piVar8[5];
                unaff_x25 = (((*(piVar8 + 0xe) * 1000 >> 0x14) * *(unaff_x27 + 0x10) +
                             ((*(piVar8 + 0xe) * 1000 & 0xffff8) * *(unaff_x27 + 0x10) >> 0x14)) * *(unaff_x27 + 0x34))
                            / 100;
                piVar8[0x1e] = unaff_x25;
                piVar8[0x1f] = 500;
                if (2 < (unaff_x24 + -0x80023c0 >> 3 | unaff_x24 << 0x3d)) goto code_r0x08002f84;
                goto code_r0x08002cf0;
            }
            pcVar14 = uStack_74;
            pcVar13 = "error getting minmax from qcom dcvs: %d\n";
        }
    }
code_r0x08002f18:
    do {
        _dev_err(piVar2,pcVar13,pcVar14);
        uVar6 = uStack_74;
code_r0x08002f20:
        while( true ) {
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) == iStack_68) {
                return;
            }
            __stack_chk_fail(uVar6);
code_r0x08002f84:
            __cfi_slowpath_diag(0x3ed5ca9cf025e3fa,unaff_x24,0x80006d0);
code_r0x08002cf0:
            uVar6 = (*unaff_x24)(unaff_x22,unaff_x25);
            if (uVar6 < 0) break;
            uStack_74 = 0;
            unaff_x27[0x101] = 0x1;
            uVar15 = qcom_dcvs_kobject_get(uStack_80);
            if (uVar15 < 0xfffffffffffff001) {
                iVar9 = *(arg1 + 0x80);
                arg1 = unaff_x23 + 0x48;
                if (iVar9 == 0) {
                    iVar9 = *piVar2;
                }
                uStack_74 = kobject_init_and_add(arg1,obj.bwmon_ktype,uVar15,iVar9);
                if (uStack_74 < 0) {
                    _dev_err(piVar2,"failed to init bwmon kobj: %d\n",uStack_74);
                    kobject_put(arg1);
                    goto code_r0x08002ed8;
                }
                uVar6 = 0;
            }
            else {
                uStack_74 = uVar15;
                _dev_err(piVar2,"error getting kobj from qcom_dcvs: %d\n");
code_r0x08002ed8:
                sym.stop_monitor(unaff_x22);
                uVar6 = uStack_74;
            }
        }
        pcVar14 = uVar6;
        _dev_err(piVar8[0xc],"Unable to start HW monitor! (%d)\n",pcVar14);
        pcVar13 = "Error starting BWMON monitor: %d\n";
        unaff_x24 = pcVar14;
        uStack_74 = uVar6;
    } while( true );
}


// ===== sym.start_bw_hwmon3 @ 0x08002fa8 (size 784) =====

int sym.start_bw_hwmon3(int64_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = arg1 + -0x28;
    iVar5 = (*(arg1 + -8))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(arg1 + -8);
    }
    iVar2 = request_threaded_irq
                      (*(arg1 + -0x14),sym.bwmon_intr_handler3.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
                       sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2080,iVar5,piVar9);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + -8),"Unable to register interrupt handler! (%d)\n",iVar2);
    }
    else {
        sym.writel_relaxed(*(arg1 + 0xe4),*(arg1 + -0x28) + 0x10);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(arg1 + -0x28) + 0x14);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(arg1 + -0x28) + 0x14);
        DataSynchronizationBarrier(3,3,0);
        uVar3 = *(*(arg1 + 0x68) + 0x28);
        if (*(arg1 + 0xe8) != uVar3) {
            *(arg1 + 0xe8) = uVar3;
            uVar10 = (*(arg1 + 0xe0) * (uVar3 % 1000)) / 1000 + *(arg1 + 0xe0) * (uVar3 / 1000);
            if (uVar10 >> 0x18 != 0) {
                uVar10 = 0xffffff;
                _printk(0x8000d9c,0xffffff,0xffffff);
            }
            sym.writel_relaxed(uVar10,*piVar9 + 0x20);
        }
        uVar10 = *(arg1 + 0xd8);
        uVar1 = *(arg1 + 0xf0);
        if (0xfe < uVar10) {
            uVar10 = 0xff;
        }
        uVar6 = *(arg1 + 200) * uVar3;
        uVar8 = 0x14 - uVar1;
        uVar11 = uVar1 - 0x14;
        uVar7 = *(arg1 + 0xd0) * uVar3;
        uVar12 = uVar7 >> (uVar11 & 0x3f);
        uVar13 = uVar6 >> (uVar11 & 0x3f);
        if (uVar1 < 0x14 || uVar11 == 0) {
            uVar12 = uVar7 << (uVar8 & 0x3f);
            uVar13 = uVar6 << (uVar8 & 0x3f);
        }
        uVar13 = (uVar13 + 999) / 1000;
        uVar12 = (uVar12 + 999) / 1000;
        uVar3 = uVar13;
        uVar11 = uVar12;
        if ((*(arg1 + 0xf4) < uVar3) || (uVar3 < uVar11)) {
            _printk(0x800098b,uVar13 & 0xffffffff,uVar12 & 0xffffffff,0);
            if (*(arg1 + 0xf4) <= uVar3) {
                uVar3 = *(arg1 + 0xf4);
            }
            uVar13 = uVar3;
            if (uVar3 - 1 <= uVar11) {
                uVar11 = uVar3 - 1;
            }
            uVar12 = uVar11;
        }
        sym.writel_relaxed(uVar13 & 0xffffffff,*piVar9 + 0x24);
        sym.writel_relaxed(uVar12 & 0xffffffff,*piVar9 + 0x28);
        sym.writel_relaxed(0,*piVar9 + 0x2c);
        sym.writel_relaxed(uVar10 << 8 | 0x1ff00ff,*piVar9 + 0x34);
        sym.writel_relaxed(0x95250901,*piVar9 + 0x30);
        if (*(arg1 + 0xf8) != 0) {
            sym.writel_relaxed(*(arg1 + 0xf8),*piVar9 + 0x18);
            sym.writel_relaxed(*(arg1 + 0xfc),*piVar9 + 0x1c);
        }
        sym.writel_relaxed(0xf,*(arg1 + -0x28) + 8);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(arg1 + -0x28) + 8);
        _raw_spin_lock(obj.mon_irq_lock);
        uVar3 = sym.readl_relaxed(*(arg1 + -0x28) + 0xc);
        sym.writel_relaxed(uVar3 | 0xf,*(arg1 + -0x28) + 0xc);
        _raw_spin_unlock(obj.mon_irq_lock);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + 0x10);
        uVar4 = ktime_get();
        iVar2 = 0;
        *(arg1 + 0x70) = uVar4;
        *(arg1 + 0xc0) = 1;
    }
    return iVar2;
}


// ===== sym.stop_bw_hwmon3 @ 0x080032b8 (size 220) =====

void sym.stop_bw_hwmon3(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xc0) = 0;
    cancel_work_sync(arg1 + 0x78);
    _raw_spin_lock(obj.mon_irq_lock);
    piVar2 = arg1 + -0x28;
    uVar1 = sym.readl_relaxed(*piVar2 + 0xc);
    sym.writel_relaxed(uVar1 & 0xfffffff0,*piVar2 + 0xc);
    _raw_spin_unlock(obj.mon_irq_lock);
    DataSynchronizationBarrier(3,3,0);
    free_irq(*(arg1 + -0x14),piVar2);
    sym.writel_relaxed(*(arg1 + 0xe4),*piVar2 + 0x10);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(2,*piVar2 + 0x14);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*piVar2 + 0x14);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf,*piVar2 + 8);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*piVar2 + 8);
    return;
}


// ===== sym.get_bytes_and_clear3 @ 0x08003394 (size 264) =====

int64_t sym.get_bytes_and_clear3(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(arg1 + 0xe4),*(arg1 + -0x28) + 0x10);
    DataSynchronizationBarrier(3,3,0);
    if (*(arg1 + 0xec) == 0) {
        iVar3 = sym.readl_relaxed(*(arg1 + -0x28) + 0x40);
        if (iVar3 == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = LZCOUNT(iVar3) >> 3 ^ 3;
        }
    }
    else {
        uVar4 = LZCOUNT(*(arg1 + 0xec)) ^ 0x1f;
    }
    *(arg1 + 0xec) = 0;
    uVar4 = sym.readl_relaxed(*(arg1 + -0x28) + (uVar4 << 2) + 0x44);
    uVar2 = *(arg1 + 0xf0);
    iVar1 = 0;
    if (uVar4 != 0) {
        iVar1 = uVar4 + 1;
    }
    sym.writel_relaxed(1,*(arg1 + -0x28) + 0x14);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*(arg1 + -0x28) + 0x14);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf,*(arg1 + -0x28) + 8);
    DataSynchronizationBarrier(3,2,0);
    sym.writel_relaxed(0,*(arg1 + -0x28) + 8);
    sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + 0x10);
    return iVar1 << (uVar2 & 0x3f);
}


// ===== sym.set_hw_events3 @ 0x0800349c (size 44) =====

ulong sym.set_hw_events3(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__set_hw_events(arg1,arg2,2);
    return 0;
}


// ===== sym.start_bw_hwmon2 @ 0x080034c8 (size 808) =====

int sym.start_bw_hwmon2(int64_t arg1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar9 = arg1 + -0x28;
    iVar5 = (*(arg1 + -8))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(arg1 + -8);
    }
    iVar2 = request_threaded_irq
                      (*(arg1 + -0x14),sym.bwmon_intr_handler2.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
                       sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2080,iVar5,piVar9);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + -8),"Unable to register interrupt handler! (%d)\n",iVar2);
    }
    else {
        sym.writel_relaxed(*(arg1 + 0xe4),*(arg1 + -0x28) + 0x2a0);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*(arg1 + -0x28) + 0x2a4);
        DataSynchronizationBarrier(3,3,0);
        uVar3 = *(*(arg1 + 0x68) + 0x28);
        if (*(arg1 + 0xe8) != uVar3) {
            *(arg1 + 0xe8) = uVar3;
            uVar10 = (*(arg1 + 0xe0) * (uVar3 % 1000)) / 1000 + *(arg1 + 0xe0) * (uVar3 / 1000);
            if (uVar10 >> 0x18 != 0) {
                uVar10 = 0xffffff;
                _printk(0x8000d9c,0xffffff,0xffffff);
            }
            sym.writel_relaxed(uVar10,*piVar9 + 0x2a8);
        }
        uVar10 = *(arg1 + 0xd8);
        uVar1 = *(arg1 + 0xf0);
        if (0xfe < uVar10) {
            uVar10 = 0xff;
        }
        uVar6 = *(arg1 + 200) * uVar3;
        uVar8 = 0x14 - uVar1;
        uVar11 = uVar1 - 0x14;
        uVar7 = *(arg1 + 0xd0) * uVar3;
        uVar12 = uVar7 >> (uVar11 & 0x3f);
        uVar13 = uVar6 >> (uVar11 & 0x3f);
        if (uVar1 < 0x14 || uVar11 == 0) {
            uVar12 = uVar7 << (uVar8 & 0x3f);
            uVar13 = uVar6 << (uVar8 & 0x3f);
        }
        uVar13 = (uVar13 + 999) / 1000;
        uVar12 = (uVar12 + 999) / 1000;
        uVar3 = uVar13;
        uVar11 = uVar12;
        if ((*(arg1 + 0xf4) < uVar3) || (uVar3 < uVar11)) {
            _printk(0x800098b,uVar13 & 0xffffffff,uVar12 & 0xffffffff,0);
            if (*(arg1 + 0xf4) <= uVar3) {
                uVar3 = *(arg1 + 0xf4);
            }
            uVar13 = uVar3;
            if (uVar3 - 1 <= uVar11) {
                uVar11 = uVar3 - 1;
            }
            uVar12 = uVar11;
        }
        sym.writel_relaxed(uVar13 & 0xffffffff,*piVar9 + 0x2ac);
        sym.writel_relaxed(uVar12 & 0xffffffff,*piVar9 + 0x2b0);
        sym.writel_relaxed(0,*piVar9 + 0x2b4);
        sym.writel_relaxed(uVar10 << 8 | 0x1ff00ff,*piVar9 + 700);
        sym.writel_relaxed(0x95250901,*piVar9 + 0x2b8);
        if (*(arg1 + 0xf8) != 0) {
            sym.writel_relaxed(*(arg1 + 0xf8),*piVar9 + 0x298);
            sym.writel_relaxed(*(arg1 + 0xfc),*piVar9 + 0x29c);
        }
        sym.writel_relaxed(0xf0,*(arg1 + -0x28) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        _raw_spin_lock(obj.mon_irq_lock);
        uVar3 = sym.readl_relaxed(*(arg1 + -0x20) + 0x10c);
        sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f) | uVar3,*(arg1 + -0x20) + 0x10c);
        uVar3 = sym.readl_relaxed(*(arg1 + -0x28) + 0x10c);
        sym.writel_relaxed(uVar3 | 0xf0,*(arg1 + -0x28) + 0x10c);
        _raw_spin_unlock(obj.mon_irq_lock);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + 0x2a0);
        uVar4 = ktime_get();
        iVar2 = 0;
        *(arg1 + 0xc0) = 1;
        *(arg1 + 0x70) = uVar4;
    }
    return iVar2;
}


// ===== sym.stop_bw_hwmon2 @ 0x080037f0 (size 260) =====

void sym.stop_bw_hwmon2(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xc0) = 0;
    cancel_work_sync(arg1 + 0x78);
    _raw_spin_lock(obj.mon_irq_lock);
    uVar1 = sym.readl_relaxed(*(arg1 + -0x20) + 0x10c);
    sym.writel_relaxed(uVar1 & (1 << (*(arg1 + -0x18) & 0x1f) ^ 0xffffffffU),*(arg1 + -0x20) + 0x10c);
    piVar2 = arg1 + -0x28;
    uVar1 = sym.readl_relaxed(*piVar2 + 0x10c);
    sym.writel_relaxed(uVar1 & 0xffffff0f,*piVar2 + 0x10c);
    _raw_spin_unlock(obj.mon_irq_lock);
    DataSynchronizationBarrier(3,3,0);
    free_irq(*(arg1 + -0x14),piVar2);
    sym.writel_relaxed(*(arg1 + 0xe4),*piVar2 + 0x2a0);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(2,*piVar2 + 0x2a4);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf0,*piVar2 + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.get_bytes_and_clear2 @ 0x080038f4 (size 264) =====

int64_t sym.get_bytes_and_clear2(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(arg1 + 0xe4),*(arg1 + -0x28) + 0x2a0);
    DataSynchronizationBarrier(3,3,0);
    if (*(arg1 + 0xec) == 0) {
        iVar3 = sym.readl_relaxed(*(arg1 + -0x28) + 0x2d8);
        if (iVar3 == 0) {
            uVar4 = 0;
        }
        else {
            uVar4 = LZCOUNT(iVar3) >> 3 ^ 3;
        }
    }
    else {
        uVar4 = LZCOUNT(*(arg1 + 0xec)) ^ 0x1f;
    }
    *(arg1 + 0xec) = 0;
    uVar4 = sym.readl_relaxed(*(arg1 + -0x28) + (uVar4 << 2) + 0x2e0);
    uVar2 = *(arg1 + 0xf0);
    iVar1 = 0;
    if (uVar4 != 0) {
        iVar1 = uVar4 + 1;
    }
    sym.writel_relaxed(1,*(arg1 + -0x28) + 0x2a4);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(0xf0,*(arg1 + -0x28) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + 0x2a0);
    return iVar1 << (uVar2 & 0x3f);
}


// ===== sym.set_hw_events @ 0x080039fc (size 44) =====

ulong sym.set_hw_events(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__set_hw_events(arg1,arg2,1);
    return 0;
}


// ===== sym.start_bw_hwmon @ 0x08003a28 (size 468) =====

int sym.start_bw_hwmon(int64_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = arg1 + -0x28;
    iVar5 = (*(arg1 + -8))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(arg1 + -8);
    }
    uVar3 = *(*(arg1 + 0x68) + 0x28);
    iVar2 = request_threaded_irq
                      (*(arg1 + -0x14),sym.bwmon_intr_handler.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
                       sym.bwmon_intr_thread.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,0x2080,iVar5,piVar6);
    if (iVar2 < 0) {
        _dev_err(*(arg1 + -8),"Unable to register interrupt handler! (%d)\n",iVar2);
    }
    else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3 * arg2 + 999 >> 3;
        sym.writel_relaxed(*(arg1 + 0xe4),*piVar6 + 0x280);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1,*piVar6 + 0x284);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed((SUB164(auVar1 * ZEXT816(0x20c49ba5e353f7cf),8) & 0xfff0) << 0x10,*piVar6 + 0x290);
        if (*(arg1 + 0xf8) != 0) {
            sym.writel_relaxed(*(arg1 + 0xf8),*piVar6 + 0x298);
            sym.writel_relaxed(*(arg1 + 0xfc),*piVar6 + 0x29c);
        }
        sym.writel_relaxed(3,*(arg1 + -0x28) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        _raw_spin_lock(obj.mon_irq_lock);
        uVar3 = sym.readl_relaxed(*(arg1 + -0x20) + 0x10c);
        sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f) | uVar3,*(arg1 + -0x20) + 0x10c);
        uVar3 = sym.readl_relaxed(*(arg1 + -0x28) + 0x10c);
        sym.writel_relaxed(uVar3 | 1,*(arg1 + -0x28) + 0x10c);
        _raw_spin_unlock(obj.mon_irq_lock);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + 0x280);
        uVar4 = ktime_get();
        iVar2 = 0;
        *(arg1 + 0xc0) = 1;
        *(arg1 + 0x70) = uVar4;
    }
    return iVar2;
}


// ===== sym.stop_bw_hwmon @ 0x08003bfc (size 260) =====

void sym.stop_bw_hwmon(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xc0) = 0;
    cancel_work_sync(arg1 + 0x78);
    _raw_spin_lock(obj.mon_irq_lock);
    uVar1 = sym.readl_relaxed(*(arg1 + -0x20) + 0x10c);
    sym.writel_relaxed(uVar1 & (1 << (*(arg1 + -0x18) & 0x1f) ^ 0xffffffffU),*(arg1 + -0x20) + 0x10c);
    piVar2 = arg1 + -0x28;
    uVar1 = sym.readl_relaxed(*piVar2 + 0x10c);
    sym.writel_relaxed(uVar1 & 0xfffffffe,*piVar2 + 0x10c);
    _raw_spin_unlock(obj.mon_irq_lock);
    DataSynchronizationBarrier(3,3,0);
    free_irq(*(arg1 + -0x14),piVar2);
    sym.writel_relaxed(*(arg1 + 0xe4),*piVar2 + 0x280);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1,*piVar2 + 0x284);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(3,*piVar2 + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    return;
}


// ===== sym.get_bytes_and_clear @ 0x08003d00 (size 256) =====

uint64_t sym.get_bytes_and_clear(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(arg1 + 0xe4),*(arg1 + -0x28) + 0x280);
    DataSynchronizationBarrier(3,3,0);
    uVar2 = sym.readl_relaxed(*(arg1 + -0x28) + 0x288);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = sym.readl_relaxed(*(arg1 + -0x28) + 0x100);
    if (((uVar1 & 3) >> 1 != 0) && (*(*(arg1 + -0x10) + 1) != '\0')) {
        uVar2 = uVar2 + 0xffffffff;
    }
    if (((uVar1 & 1) != 0) && (**(arg1 + -0x10) != '\0')) {
        uVar3 = sym.readl_relaxed(*(arg1 + -0x28) + 0x290);
        uVar2 = uVar2 + (uVar3 & 0xffffffff);
    }
    sym.writel_relaxed(1,*(arg1 + -0x28) + 0x284);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(3,*(arg1 + -0x28) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + 0x280);
    return uVar2;
}


// ===== sym.set_thres @ 0x08003e00 (size 308) =====

uint64_t sym.set_thres(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.writel_relaxed(*(arg1 + 0xe4),*(arg1 + -0x28) + 0x280);
    DataSynchronizationBarrier(3,3,0);
    uVar2 = sym.readl_relaxed(*(arg1 + -0x28) + 0x288);
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = sym.readl_relaxed(*(arg1 + -0x28) + 0x100);
    if (((uVar1 & 3) >> 1 != 0) && (*(*(arg1 + -0x10) + 1) != '\0')) {
        uVar2 = uVar2 + 0xffffffff;
    }
    if (((uVar1 & 1) != 0) && (**(arg1 + -0x10) != '\0')) {
        uVar3 = sym.readl_relaxed(*(arg1 + -0x28) + 0x290);
        uVar2 = uVar2 + (uVar3 & 0xffffffff);
    }
    sym.writel_relaxed(1,*(arg1 + -0x28) + 0x284);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(3,*(arg1 + -0x28) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
    DataSynchronizationBarrier(3,3,0);
    if ((**(arg1 + -0x10) != '\0') && (arg2 < 0x7a121)) {
        arg2 = 500000;
    }
    sym.writel_relaxed(arg2 & 0xffffffff,*(arg1 + -0x28) + 0x290);
    sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + 0x280);
    return uVar2;
}


// ===== sym.mon_set_throttle_adj @ 0x08003f34 (size 44) =====

ulong sym.mon_set_throttle_adj(int64_t arg1,uint32_t arg2)

{
    if (0x1f < arg2) {
        return 0xffffffea;
    }
    *(arg1 + 0xe4) = (arg2 & 0x1f) << 0x10;
    return 0;
}


// ===== sym.mon_get_throttle_adj @ 0x08003f60 (size 16) =====

ushort sym.mon_get_throttle_adj(int64_t arg1)

{
    return *(arg1 + 0xe6);
}


// ===== sym.bwmon_jiffies_update_cb @ 0x08003f70 (size 220) =====

void sym.bwmon_jiffies_update_cb(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = ktime_get();
    uVar2 = _raw_spin_lock_irqsave(obj.configure_hwmon_node.__key);
    if (_obj.hwmon_list != obj.hwmon_list) {
        pcVar3 = _obj.hwmon_list;
        do {
            iVar4 = *(pcVar3 + 0x10);
            if ((*(iVar4 + 0xc0) != '\0') && (*(*(iVar4 + 0x68) + 0x28) * 1000000 < (iVar1 + 2000000) - *(iVar4 + 0x70))
               ) {
                queue_work_on(0x20,_segment.ehdr,iVar4 + 0x78);
                *(iVar4 + 0x70) = iVar1;
            }
            pcVar3 = *pcVar3;
        } while (pcVar3 != obj.hwmon_list);
    }
    _raw_spin_unlock_irqrestore(obj.configure_hwmon_node.__key,uVar2);
    return;
}


// ===== sym.bwmon_monitor_work @ 0x0800404c (size 156) =====

void sym.bwmon_monitor_work(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + -0x10);
    mutex_lock(arg1_00 + 0x1b0);
    uVar2 = sym.bwmon_update_cur_freq(arg1_00);
    if ((uVar2 & 1) != 0) {
        iVar3 = (*(arg1 + -0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + -0x40);
        }
        iVar1 = qcom_dcvs_update_votes(iVar3,arg1_00 + 0x10,*(arg1 + -0x24) << 1 | 1,*(arg1 + -0x34));
        if (iVar1 < 0) {
            _dev_err(*(arg1 + -0x40),"bwmon monitor update failed: %d\n",iVar1);
        }
    }
    mutex_unlock(arg1_00 + 0x1b0);
    return;
}


// ===== sym.bwmon_pm_notifier @ 0x080040e8 (size 400) =====

ulong sym.bwmon_pm_notifier(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 2) {
        iVar5 = *(arg1 + -0x40);
        uVar2 = ktime_get();
        *(iVar5 + 0x90) = 0;
        *(iVar5 + 0xf0) = uVar2;
        uVar3 = *(arg1 + -0x60) * 1000;
        pcVar4 = *(arg1 + -0xa8);
        uVar3 = (((uVar3 >> 0x14) * *(iVar5 + 0x10) + ((uVar3 & 0xffff8) * *(iVar5 + 0x10) >> 0x14)) * *(iVar5 + 0x34))
                / 100;
        *(arg1 + 0x20) = uVar3;
        *(arg1 + 0x28) = 500;
        if (2 < (pcVar4 + -0x80023c0 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0x3ed5ca9cf025e3fa,pcVar4,0x80006d0);
        }
        iVar1 = (*pcVar4)(arg1 + -0xa8,uVar3);
        if (iVar1 < 0) {
            _dev_err(*(arg1 + -0x70),"Unable to start HW monitor! (%d)\n",iVar1);
        }
        else {
            *(iVar5 + 0x101) = 1;
        }
    }
    else if (arg2 == 1) {
        iVar6 = *(arg1 + -0x40);
        iVar5 = iVar6 + 0x180;
        mutex_lock(iVar5);
        *(iVar6 + 0x101) = 0;
        mutex_unlock(iVar5);
        pcVar4 = *(arg1 + -0xa0);
        if (2 < (pcVar4 + -0x8002378 >> 3 | pcVar4 << 0x3d)) {
            __cfi_slowpath_diag(0xca73cee55e3f11bc,pcVar4,0x8000770);
        }
        (*pcVar4)(arg1 + -0xa8);
    }
    return 1;
}


// ===== sym.stop_monitor @ 0x08004278 (size 160) =====

void sym.stop_monitor(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x68);
    iVar1 = iVar3 + 0x180;
    mutex_lock(iVar1);
    *(iVar3 + 0x101) = 0;
    mutex_unlock(iVar1);
    pcVar2 = *(arg1 + 8);
    if (2 < (pcVar2 + -0x8002378 >> 3 | pcVar2 << 0x3d)) {
        __cfi_slowpath_diag(0xca73cee55e3f11bc,pcVar2,0x8000770);
    }
    (*pcVar2)(arg1);
    return;
}


// ===== sym.bwmon_intr_handler @ 0x08004318 (size 44) =====

void sym.bwmon_intr_handler(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__bwmon_intr_handler(arg1,0);
    return;
}


// ===== sym.bwmon_intr_handler2 @ 0x08004344 (size 44) =====

void sym.bwmon_intr_handler2(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__bwmon_intr_handler(arg1,1);
    return;
}


// ===== sym.bwmon_intr_handler3 @ 0x08004370 (size 44) =====

void sym.bwmon_intr_handler3(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__bwmon_intr_handler(arg1,2);
    return;
}


// ===== sym.bwmon_intr_thread @ 0x0800439c (size 216) =====

ulong sym.bwmon_intr_thread(ulong noname_0,int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x90);
    mutex_lock(arg1_00 + 0x180);
    if (*(arg1_00 + 0x101) != '\0') {
        *(arg1 + 0xe8) = 0;
        cancel_work_sync(arg1 + 0xa0);
        mutex_lock(arg1_00 + 0x1b0);
        uVar2 = sym.bwmon_update_cur_freq(arg1_00);
        if ((uVar2 & 1) != 0) {
            iVar3 = (*(arg1 + 0x60))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x60);
            }
            iVar1 = qcom_dcvs_update_votes(iVar3,arg1_00 + 0x10,*(arg1 + 0x7c) << 1 | 1,*(arg1 + 0x6c));
            if (iVar1 < 0) {
                _dev_err(*(arg1 + 0x60),"bwmon irq update failed: %d\n",iVar1);
            }
        }
        mutex_unlock(arg1_00 + 0x1b0);
        uVar4 = ktime_get();
        *(arg1 + 0x98) = uVar4;
        *(arg1 + 0xe8) = 1;
    }
    mutex_unlock(arg1_00 + 0x180);
    return 1;
}


// ===== sym.writel_relaxed @ 0x08004474 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8004490);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80044b8);
    return;
}


// ===== sym.__bwmon_intr_handler @ 0x080044ec (size 256) =====

ulong sym.__bwmon_intr_handler(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        uVar1 = sym.readl_relaxed(*arg1 + 0x100);
        uVar1 = uVar1 & 3;
        *(arg1 + 0x114) = uVar1;
    }
    else if (arg2 == 1) {
        uVar1 = sym.readl_relaxed(*arg1 + 0x100);
        uVar1 = uVar1 >> 4 & 0xf;
        *(arg1 + 0x114) = uVar1;
    }
    else {
        if (arg2 != 2) {
            *(arg1 + 0x114) = 0;
            return 0;
        }
        uVar1 = sym.readl_relaxed(*arg1);
        uVar1 = uVar1 & 0xf;
        *(arg1 + 0x114) = uVar1;
    }
    if (uVar1 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = _raw_spin_lock_irqsave(obj.sample_irq_lock);
        if (*(arg1 + 0x40) == 0) {
            iVar2 = sym.__bw_hwmon_sw_sample_end(arg1 + 0x28);
            _raw_spin_unlock_irqrestore(obj.sample_irq_lock,uVar3);
            if (iVar2 < 1) {
                return 1;
            }
        }
        else {
            sym.__bw_hwmon_hw_sample_end(arg1 + 0x28);
            _raw_spin_unlock_irqrestore(obj.sample_irq_lock,uVar3);
        }
        uVar3 = 2;
    }
    return uVar3;
}


// ===== sym.readl_relaxed @ 0x080045ec (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x80045f0);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8004624);
    return uVar1;
}


// ===== sym.__bw_hwmon_hw_sample_end @ 0x0800465c (size 256) =====

void sym.__bw_hwmon_hw_sample_end(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    code *pcVar4;
    uint64_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = *(arg1 + 0x20);
    iVar6 = *(arg1 + 0x68);
    if (2 < (pcVar4 + -0x80023a0 >> 3 | pcVar4 << 0x3d)) {
        __cfi_slowpath_diag(0x5e9afb0bf0e16ac2,pcVar4,0x8000650);
    }
    iVar1 = (*pcVar4)(arg1);
    iVar3 = 1;
    uVar5 = *(iVar6 + 0x3c) * 1000;
    uVar2 = 0;
    if (uVar5 != 0) {
        uVar2 = (iVar1 * 1000000) / uVar5;
    }
    uVar2 = uVar2 + 0xfffff >> 0x14;
    *(iVar6 + 0xa0) = uVar2;
    if (uVar2 <= *(*(iVar6 + 0x118) + 200)) {
        iVar3 = (uVar2 < *(*(iVar6 + 0x118) + 0xd0)) << 1;
    }
    *(iVar6 + 0xe8) = iVar3;
    *(iVar6 + 0x100) = 1;
    return;
}


// ===== sym.__bw_hwmon_sw_sample_end @ 0x080047d8 (size 352) =====

int sym.__bw_hwmon_sw_sample_end(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int iVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0x68);
    iVar3 = ktime_get();
    iVar8 = *(iVar9 + 0xf0);
    pcVar7 = *(arg1 + 0x20);
    if (2 < (pcVar7 + -0x80023a0 >> 3 | pcVar7 << 0x3d)) {
        __cfi_slowpath_diag(0x5e9afb0bf0e16ac2,pcVar7,0x8000670);
    }
    iVar4 = (*pcVar7)(arg1);
    uVar5 = (iVar3 - iVar8) / 1000 & 0xffffffff;
    uVar2 = 0;
    if (uVar5 != 0) {
        uVar2 = ((*(iVar9 + 0x98) + iVar4) * 1000000) / uVar5;
    }
    uVar5 = uVar2 + 0xfffff >> 0x14;
    uVar2 = *(iVar9 + 0xa0);
    if (*(iVar9 + 0xa0) <= uVar5) {
        uVar2 = uVar5;
    }
    *(iVar9 + 0x98) = 0;
    *(iVar9 + 0xa0) = uVar2;
    iVar6 = 1;
    if (uVar5 <= *(*(iVar9 + 0x118) + 200)) {
        if (uVar5 < *(*(iVar9 + 0x118) + 0xd0)) {
            if (*(iVar9 + 0xec) == 0) {
                iVar6 = 2;
            }
            else {
                iVar1 = *(iVar9 + 0xec) + -1;
                iVar6 = (iVar1 == 0) << 1;
                *(iVar9 + 0xec) = iVar1;
            }
        }
        else {
            iVar6 = 0;
        }
    }
    *(iVar9 + 0xf0) = iVar3;
    *(iVar9 + 0xe8) = iVar6;
    *(iVar9 + 0x100) = 1;
    return iVar6;
}


// ===== sym.bwmon_update_cur_freq @ 0x080049c4 (size 356) =====

void sym.bwmon_update_cur_freq(int64_t arg1)

{
    uint64_t uVar1;
    uchar auVar2 [16];
    ulong uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    code *pcVar10;
    uint64_t uVar11;
    int iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar15;
    int64_t iVar16;
    uint64_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    uint64_t uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_28 = *(iVar15 + 0x5e0);
    iVar15 = *(arg1 + 0x118);
    uStack_30 = 0;
    uStack_38 = 0;
    sym.get_bw_and_set_irq(arg1,&uStack_38);
    uVar9 = *(iVar15 + 0x48) * 1000;
    uVar17 = 0;
    if (uVar9 != 0) {
        uVar17 = (uStack_38 & 0xffffffff) / uVar9;
    }
    uVar14 = 0;
    if (uVar9 != 0) {
        uVar14 = (uStack_38 >> 0x20) / uVar9;
    }
    iVar8 = 0;
    if (uVar9 != 0) {
        iVar8 = (((uStack_38 & 0xffffffff) - uVar17 * uVar9) * 0x100000) / uVar9;
    }
    uVar6 = iVar8 + uVar17 * 0x100000;
    iVar8 = 0;
    if (uVar9 != 0) {
        iVar8 = (((uStack_38 >> 0x20) - uVar14 * uVar9) * 0x100000) / uVar9;
    }
    if (uVar6 <= *(arg1 + 8)) {
        uVar6 = *(arg1 + 8);
    }
    iVar8 = iVar8 + uVar14 * 0x100000;
    if (*(arg1 + 0xc) <= uVar6) {
        uVar6 = *(arg1 + 0xc);
    }
    if ((uVar6 == *(arg1 + 0x10)) && (*(arg1 + 0x14) == iVar8)) {
        uVar3 = 0;
    }
    else {
        *(arg1 + 0x10) = uVar6;
        *(arg1 + 0x14) = iVar8;
        if (*(iVar15 + 0x54) == '\0') {
            uVar3 = 1;
        }
        else {
            if (*(iVar15 + 0x60) == 0) {
                if (*(iVar15 + 0x50) == 0) {
                    uVar6 = 0;
                }
                else {
                    uVar9 = *(iVar15 + 0x50) * 1000;
                    uVar17 = 0;
                    if (uVar9 != 0) {
                        uVar17 = uVar6 / uVar9;
                    }
                    iVar8 = 0;
                    if (uVar9 != 0) {
                        iVar8 = ((uVar6 - uVar17 * uVar9) * 0x100000) / uVar9;
                    }
                    uVar6 = iVar8 + uVar17 * 0x100000;
                }
            }
            else {
                iVar16 = *(iVar15 + 0x60) + -4;
                do {
                    uVar7 = *(iVar16 + 4);
                    iVar16 = iVar16 + 8;
                    if (uVar7 == 0) break;
                } while (uVar7 < uVar6);
                iVar4 = -8;
                if (uVar7 != 0) {
                    iVar4 = 0;
                }
                uVar6 = *(iVar16 + iVar4);
            }
            *(arg1 + 0x1c) = uVar6;
            uVar3 = 1;
            if (*(iVar15 + 0x58) <= uVar6) {
                uVar6 = *(iVar15 + 0x58);
            }
            *(arg1 + 0x1c) = uVar6;
        }
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_28) {
        return;
    }
    auVar18 = __stack_chk_fail(uVar3);
    iVar15 = auVar18._0_8_;
    *extraout_x18 = sym.get_bw_and_set_irq;
    iVar16 = *(iVar15 + 0x118);
    uVar6 = *(iVar15 + 0x34);
    uVar17 = uVar6;
    uVar3 = _raw_spin_lock_irqsave(obj.sample_irq_lock);
    if (*(iVar16 + 0x18) == 0) {
        iVar4 = ktime_get();
        auVar2 = SEXT816(iVar4 - *(iVar15 + 0xf0)) * SEXT816(0x431bde82d7b634db);
        uVar7 = (auVar2._8_8_ >> 0x12) - (auVar2._12_4_ >> 0x1f);
        if (*(iVar15 + 0x100) != '\0') goto code_r0x08004bb8;
code_r0x08004bc4:
        iVar4 = *(iVar15 + 0x118);
        if (*(iVar4 + 0x18) == 0) {
            sym.__bw_hwmon_sw_sample_end(iVar4);
        }
        else {
            sym.__bw_hwmon_hw_sample_end(iVar4);
        }
    }
    else {
        uVar7 = 0;
        if (*(iVar15 + 0x100) == '\0') goto code_r0x08004bc4;
code_r0x08004bb8:
        if (*(iVar15 + 0x3c) <= uVar7) goto code_r0x08004bc4;
    }
    uVar14 = *(iVar15 + 0xa0);
    uVar9 = *(iVar15 + 0xa8);
    *(iVar15 + 0x100) = 0;
    *(iVar15 + 0xa0) = 0;
    if ((uVar9 < uVar14) || (*(iVar15 + 0xb0) == 0)) {
        uVar11 = *(iVar15 + 0x50);
        *(iVar15 + 0xa8) = uVar14;
        uVar9 = uVar14;
    }
    else if (uVar14 < (uVar9 * 0x4b) / 100) {
        uVar11 = *(iVar15 + 0xb0) - 1;
    }
    else {
        uVar11 = *(iVar15 + 0x50);
    }
    *(iVar15 + 0xb0) = uVar11;
    uVar11 = *(iVar15 + 0x68);
    if (*(iVar15 + 0x68) == 0) {
code_r0x08004ce8:
        uVar11 = *(*(iVar15 + 0x118) + 0x48) * 1000;
        uVar11 = (uVar11 >> 0x14) * *(iVar15 + 0xc) + ((uVar11 & 0xffff8) * *(iVar15 + 0xc) >> 0x14);
    }
    else {
        uVar1 = 0;
        if (uVar17 != 0) {
            uVar1 = (uVar14 * 100) / uVar17;
        }
        if ((uVar11 < uVar1) &&
           ((uVar11 = *(iVar15 + 0x6c), *(iVar15 + 0x6c) == 0 ||
            ((uVar11 < uVar1 &&
             ((uVar11 = *(iVar15 + 0x70), *(iVar15 + 0x70) == 0 ||
              ((uVar11 < uVar1 &&
               ((uVar11 = *(iVar15 + 0x74), *(iVar15 + 0x74) == 0 ||
                ((uVar11 < uVar1 &&
                 ((uVar11 = *(iVar15 + 0x78), *(iVar15 + 0x78) == 0 ||
                  ((uVar11 < uVar1 &&
                   ((uVar11 = *(iVar15 + 0x7c), *(iVar15 + 0x7c) == 0 ||
                    ((uVar11 < uVar1 &&
                     ((uVar11 = *(iVar15 + 0x80), *(iVar15 + 0x80) == 0 ||
                      ((uVar11 < uVar1 &&
                       ((uVar11 = *(iVar15 + 0x84), *(iVar15 + 0x84) == 0 ||
                        ((uVar11 < uVar1 &&
                         ((uVar11 = *(iVar15 + 0x88), *(iVar15 + 0x88) == 0 ||
                          ((uVar11 < uVar1 && ((uVar11 = *(iVar15 + 0x8c), *(iVar15 + 0x8c) == 0 || (uVar11 < uVar1))))
                          )))))))))))))))))))))))))))))))) goto code_r0x08004ce8;
    }
    uVar11 = (uVar11 * uVar17) / 100;
    uVar17 = uVar14;
    if (uVar14 <= uVar11) {
        uVar17 = uVar11;
    }
    uVar11 = uVar14;
    if (*(iVar15 + 0xe8) == 1) {
        uVar11 = uVar14 + ((uVar14 - *(iVar15 + 0xe0)) * *(iVar15 + 0x40)) / 100;
        if (uVar11 <= uVar9 || uVar9 <= uVar14) {
            uVar9 = uVar11;
        }
        uVar11 = uVar9;
        if (uVar17 <= uVar9) {
            uVar11 = uVar17;
        }
    }
    uVar17 = *(iVar15 + 0xc0);
    if ((500 < uVar14) && (uVar17 < uVar14)) {
        *(iVar15 + 0xb8) = 0;
        *(iVar15 + 0xc0) = uVar14;
        *(iVar15 + 200) = *(iVar15 + 0x58);
        uVar17 = uVar14;
        if (*(iVar15 + 0xd0) != 0) {
            *(iVar15 + 0xd0) = *(iVar15 + 0x58);
        }
    }
    if (((500 < uVar14) && ((uVar17 * 0x4b) / 100 <= uVar14)) &&
       (uVar9 = *(iVar15 + 0xb8) + 1, *(iVar15 + 0xb8) = uVar9, *(iVar15 + 0x54) <= uVar9)) {
        *(iVar15 + 0xb8) = 0;
        *(iVar15 + 0xd0) = *(iVar15 + 0x58);
    }
    if (*(iVar15 + 200) == 0) {
        if (*(iVar15 + 0xd0) != 0) {
            iVar4 = *(iVar15 + 0xd0) + -1;
            *(iVar15 + 0xd0) = iVar4;
code_r0x08004e40:
            if (iVar4 != 0) goto code_r0x08004e44;
        }
    }
    else {
        iVar13 = *(iVar15 + 200) + -1;
        *(iVar15 + 200) = iVar13;
        if (*(iVar15 + 0xd0) != 0) {
            iVar4 = *(iVar15 + 0xd0) + -1;
            *(iVar15 + 0xd0) = iVar4;
            if (iVar13 == 0) goto code_r0x08004e40;
            if (iVar4 == 0) goto code_r0x08004e7c;
code_r0x08004e44:
            if (*(iVar15 + 0x60) < uVar14) {
                uVar9 = *(iVar15 + 0x5c);
            }
            else {
                if (*(iVar15 + 0xd8) == 0) goto code_r0x08004e7c;
                uVar9 = *(iVar15 + 0xd8) - 1;
            }
            if (uVar11 <= uVar17) {
                uVar11 = uVar17;
            }
            *(iVar15 + 0xd8) = uVar9;
            goto code_r0x08004e7c;
        }
        if (iVar13 != 0) goto code_r0x08004e7c;
    }
    *(iVar15 + 0xb8) = 0;
    *(iVar15 + 0xc0) = 0;
code_r0x08004e7c:
    if (uVar14 < 500) {
        uVar17 = 0;
        uVar9 = uVar11;
        if (uVar11 < 0x1f5) {
            uVar9 = 500;
        }
        uVar14 = uVar11 >> 1;
        if (uVar14 < 0x1f5) {
            uVar14 = 500;
        }
        *(iVar16 + 200) = (uVar9 * (*(iVar15 + 0x44) + 100)) / 100;
    }
    else {
        *(iVar16 + 200) = (uVar11 * (*(iVar15 + 0x44) + 100)) / 100;
        uVar17 = (uVar14 * *(iVar15 + 0x48)) / 100;
    }
    *(iVar16 + 0xd0) = uVar17;
    pcVar10 = *(iVar16 + 0x18);
    if (pcVar10 == NULL) {
        *(iVar15 + 0xec) = *(iVar15 + 0x4c);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar14 * *(iVar15 + 0x3c) + 999 >> 3;
        pcVar10 = *(iVar16 + 0x10);
        if (pcVar10 != sym.__typeid__ZTSFmP8bw_hwmonmE_global_addr) {
            __cfi_slowpath_diag(0xe2ee4819d81fc568,pcVar10,0x80006b0);
        }
        uVar5 = (*pcVar10)(iVar16,(SUB164(auVar2 * ZEXT816(0x20c49ba5e353f7cf),8) & 0xfff0) << 0x10);
        *(iVar15 + 0x98) = uVar5;
    }
    else {
        *(iVar16 + 0xd8) = *(iVar15 + 0x4c);
        if (1 < (pcVar10 + -0x8002390 >> 3 | pcVar10 << 0x3d)) {
            __cfi_slowpath_diag(0x719e0009391e73c4,pcVar10,0x8000690);
        }
        (*pcVar10)(iVar16,*(iVar15 + 0x3c));
    }
    *(iVar15 + 0xe8) = 0;
    *(iVar15 + 0xe0) = uVar11;
    _raw_spin_unlock_irqrestore(obj.sample_irq_lock,uVar3);
    uVar11 = uVar11 + *(iVar15 + 0x2c);
    if (uVar11 <= *(iVar15 + 0x90)) {
        uVar11 = (uVar11 * *(iVar15 + 0x30) + *(iVar15 + 0x90) * (100 - *(iVar15 + 0x30))) / 100;
    }
    iVar8 = uVar11;
    uVar7 = 0;
    if (uVar6 != 0) {
        uVar7 = (iVar8 * 100) / uVar6;
    }
    *(iVar15 + 0x90) = uVar11 & 0xffffffff;
    *auVar18._8_8_ = uVar7;
    uVar6 = *(iVar15 + 100);
    if (uVar6 < 100) {
        iVar12 = (uVar11 & 0xffffffff) / 100;
        iVar8 = uVar6 * iVar12 + (uVar6 * (iVar8 + iVar12 * -100) >> 2 & 0x3fff) / 0x19;
    }
    uVar6 = *(iVar15 + 0x38);
    uVar7 = 0;
    if (uVar6 != 0) {
        uVar7 = ((iVar8 + uVar6) - 1) / uVar6;
    }
    auVar18._8_8_[1] = uVar7 * uVar6;
    return;
}


// ===== sym.get_bw_and_set_irq @ 0x08004b28 (size 1528) =====

void sym.get_bw_and_set_irq(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar auVar3 [16];
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t uVar7;
    int iVar8;
    code *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    int64_t iVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar15 = *(arg1 + 0x118);
    uVar1 = *(arg1 + 0x34);
    uVar16 = uVar1;
    uVar4 = _raw_spin_lock_irqsave(obj.sample_irq_lock);
    if (*(iVar15 + 0x18) == 0) {
        iVar5 = ktime_get();
        auVar3 = SEXT816(iVar5 - *(arg1 + 0xf0)) * SEXT816(0x431bde82d7b634db);
        uVar7 = (auVar3._8_8_ >> 0x12) - (auVar3._12_4_ >> 0x1f);
        if (*(arg1 + 0x100) != '\0') goto code_r0x08004bb8;
code_r0x08004bc4:
        iVar5 = *(arg1 + 0x118);
        if (*(iVar5 + 0x18) == 0) {
            sym.__bw_hwmon_sw_sample_end(iVar5);
        }
        else {
            sym.__bw_hwmon_hw_sample_end(iVar5);
        }
    }
    else {
        uVar7 = 0;
        if (*(arg1 + 0x100) == '\0') goto code_r0x08004bc4;
code_r0x08004bb8:
        if (*(arg1 + 0x3c) <= uVar7) goto code_r0x08004bc4;
    }
    uVar14 = *(arg1 + 0xa0);
    uVar11 = *(arg1 + 0xa8);
    *(arg1 + 0x100) = 0;
    *(arg1 + 0xa0) = 0;
    if ((uVar11 < uVar14) || (*(arg1 + 0xb0) == 0)) {
        uVar10 = *(arg1 + 0x50);
        *(arg1 + 0xa8) = uVar14;
        uVar11 = uVar14;
    }
    else if (uVar14 < (uVar11 * 0x4b) / 100) {
        uVar10 = *(arg1 + 0xb0) - 1;
    }
    else {
        uVar10 = *(arg1 + 0x50);
    }
    *(arg1 + 0xb0) = uVar10;
    uVar10 = *(arg1 + 0x68);
    if (*(arg1 + 0x68) == 0) {
code_r0x08004ce8:
        uVar10 = *(*(arg1 + 0x118) + 0x48) * 1000;
        uVar10 = (uVar10 >> 0x14) * *(arg1 + 0xc) + ((uVar10 & 0xffff8) * *(arg1 + 0xc) >> 0x14);
    }
    else {
        uVar2 = 0;
        if (uVar16 != 0) {
            uVar2 = (uVar14 * 100) / uVar16;
        }
        if ((uVar10 < uVar2) &&
           ((uVar10 = *(arg1 + 0x6c), *(arg1 + 0x6c) == 0 ||
            ((uVar10 < uVar2 &&
             ((uVar10 = *(arg1 + 0x70), *(arg1 + 0x70) == 0 ||
              ((uVar10 < uVar2 &&
               ((uVar10 = *(arg1 + 0x74), *(arg1 + 0x74) == 0 ||
                ((uVar10 < uVar2 &&
                 ((uVar10 = *(arg1 + 0x78), *(arg1 + 0x78) == 0 ||
                  ((uVar10 < uVar2 &&
                   ((uVar10 = *(arg1 + 0x7c), *(arg1 + 0x7c) == 0 ||
                    ((uVar10 < uVar2 &&
                     ((uVar10 = *(arg1 + 0x80), *(arg1 + 0x80) == 0 ||
                      ((uVar10 < uVar2 &&
                       ((uVar10 = *(arg1 + 0x84), *(arg1 + 0x84) == 0 ||
                        ((uVar10 < uVar2 &&
                         ((uVar10 = *(arg1 + 0x88), *(arg1 + 0x88) == 0 ||
                          ((uVar10 < uVar2 && ((uVar10 = *(arg1 + 0x8c), *(arg1 + 0x8c) == 0 || (uVar10 < uVar2))))))))
                        )))))))))))))))))))))))))))) goto code_r0x08004ce8;
    }
    uVar10 = (uVar10 * uVar16) / 100;
    uVar16 = uVar14;
    if (uVar14 <= uVar10) {
        uVar16 = uVar10;
    }
    uVar10 = uVar14;
    if (*(arg1 + 0xe8) == 1) {
        uVar10 = uVar14 + ((uVar14 - *(arg1 + 0xe0)) * *(arg1 + 0x40)) / 100;
        if (uVar10 <= uVar11 || uVar11 <= uVar14) {
            uVar11 = uVar10;
        }
        uVar10 = uVar11;
        if (uVar16 <= uVar11) {
            uVar10 = uVar16;
        }
    }
    uVar16 = *(arg1 + 0xc0);
    if ((500 < uVar14) && (uVar16 < uVar14)) {
        *(arg1 + 0xb8) = 0;
        *(arg1 + 0xc0) = uVar14;
        *(arg1 + 200) = *(arg1 + 0x58);
        uVar16 = uVar14;
        if (*(arg1 + 0xd0) != 0) {
            *(arg1 + 0xd0) = *(arg1 + 0x58);
        }
    }
    if (((500 < uVar14) && ((uVar16 * 0x4b) / 100 <= uVar14)) &&
       (uVar11 = *(arg1 + 0xb8) + 1, *(arg1 + 0xb8) = uVar11, *(arg1 + 0x54) <= uVar11)) {
        *(arg1 + 0xb8) = 0;
        *(arg1 + 0xd0) = *(arg1 + 0x58);
    }
    if (*(arg1 + 200) == 0) {
        if (*(arg1 + 0xd0) != 0) {
            iVar5 = *(arg1 + 0xd0) + -1;
            *(arg1 + 0xd0) = iVar5;
code_r0x08004e40:
            if (iVar5 != 0) goto code_r0x08004e44;
        }
    }
    else {
        iVar13 = *(arg1 + 200) + -1;
        *(arg1 + 200) = iVar13;
        if (*(arg1 + 0xd0) != 0) {
            iVar5 = *(arg1 + 0xd0) + -1;
            *(arg1 + 0xd0) = iVar5;
            if (iVar13 == 0) goto code_r0x08004e40;
            if (iVar5 == 0) goto code_r0x08004e7c;
code_r0x08004e44:
            if (*(arg1 + 0x60) < uVar14) {
                uVar11 = *(arg1 + 0x5c);
            }
            else {
                if (*(arg1 + 0xd8) == 0) goto code_r0x08004e7c;
                uVar11 = *(arg1 + 0xd8) - 1;
            }
            if (uVar10 <= uVar16) {
                uVar10 = uVar16;
            }
            *(arg1 + 0xd8) = uVar11;
            goto code_r0x08004e7c;
        }
        if (iVar13 != 0) goto code_r0x08004e7c;
    }
    *(arg1 + 0xb8) = 0;
    *(arg1 + 0xc0) = 0;
code_r0x08004e7c:
    if (uVar14 < 500) {
        uVar16 = 0;
        uVar11 = uVar10;
        if (uVar10 < 0x1f5) {
            uVar11 = 500;
        }
        uVar14 = uVar10 >> 1;
        if (uVar14 < 0x1f5) {
            uVar14 = 500;
        }
        *(iVar15 + 200) = (uVar11 * (*(arg1 + 0x44) + 100)) / 100;
    }
    else {
        *(iVar15 + 200) = (uVar10 * (*(arg1 + 0x44) + 100)) / 100;
        uVar16 = (uVar14 * *(arg1 + 0x48)) / 100;
    }
    *(iVar15 + 0xd0) = uVar16;
    pcVar9 = *(iVar15 + 0x18);
    if (pcVar9 == NULL) {
        *(arg1 + 0xec) = *(arg1 + 0x4c);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar14 * *(arg1 + 0x3c) + 999 >> 3;
        pcVar9 = *(iVar15 + 0x10);
        if (pcVar9 != sym.__typeid__ZTSFmP8bw_hwmonmE_global_addr) {
            __cfi_slowpath_diag(0xe2ee4819d81fc568,pcVar9,0x80006b0);
        }
        uVar6 = (*pcVar9)(iVar15,(SUB164(auVar3 * ZEXT816(0x20c49ba5e353f7cf),8) & 0xfff0) << 0x10);
        *(arg1 + 0x98) = uVar6;
    }
    else {
        *(iVar15 + 0xd8) = *(arg1 + 0x4c);
        if (1 < (pcVar9 + -0x8002390 >> 3 | pcVar9 << 0x3d)) {
            __cfi_slowpath_diag(0x719e0009391e73c4,pcVar9,0x8000690);
        }
        (*pcVar9)(iVar15,*(arg1 + 0x3c));
    }
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0xe0) = uVar10;
    _raw_spin_unlock_irqrestore(obj.sample_irq_lock,uVar4);
    uVar10 = uVar10 + *(arg1 + 0x2c);
    if (uVar10 <= *(arg1 + 0x90)) {
        uVar10 = (uVar10 * *(arg1 + 0x30) + *(arg1 + 0x90) * (100 - *(arg1 + 0x30))) / 100;
    }
    iVar8 = uVar10;
    uVar7 = 0;
    if (uVar1 != 0) {
        uVar7 = (iVar8 * 100) / uVar1;
    }
    *(arg1 + 0x90) = uVar10 & 0xffffffff;
    *arg2 = uVar7;
    uVar1 = *(arg1 + 100);
    if (uVar1 < 100) {
        iVar12 = (uVar10 & 0xffffffff) / 100;
        iVar8 = uVar1 * iVar12 + (uVar1 * (iVar8 + iVar12 * -100) >> 2 & 0x3fff) / 0x19;
    }
    uVar1 = *(arg1 + 0x38);
    uVar7 = 0;
    if (uVar1 != 0) {
        uVar7 = ((iVar8 + uVar1) - 1) / uVar1;
    }
    *(arg2 + 4) = uVar7 * uVar1;
    return;
}


// ===== sym.__set_hw_events @ 0x08005220 (size 804) =====

void sym.__set_hw_events(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t iVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = arg2 & 0xffffffff;
    if (arg3 == 1) {
        iVar3 = 0x2a0;
code_r0x0800526c:
        sym.writel_relaxed(*(arg1 + 0xe4),*(arg1 + -0x28) + iVar3);
    }
    else if (arg3 == 2) {
        iVar3 = 0x10;
        goto code_r0x0800526c;
    }
    DataSynchronizationBarrier(3,3,0);
    if (arg3 == 2) {
        sym.writel_relaxed(1,*(arg1 + -0x28) + 0x14);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(arg1 + -0x28) + 0x14);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0xf,*(arg1 + -0x28) + 8);
        DataSynchronizationBarrier(3,2,0);
        sym.writel_relaxed(0,*(arg1 + -0x28) + 8);
    }
    else if (arg3 == 1) {
        sym.writel_relaxed(1,*(arg1 + -0x28) + 0x2a4);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(0xf0,*(arg1 + -0x28) + 0x108);
        DataSynchronizationBarrier(3,3,0);
        sym.writel_relaxed(1 << (*(arg1 + -0x18) & 0x1f),*(arg1 + -0x20) + 0x108);
        DataSynchronizationBarrier(3,3,0);
    }
    else {
        DataSynchronizationBarrier(3,3,0);
    }
    iVar7 = arg2;
    if (*(arg1 + 0xe8) == iVar7) goto code_r0x08005338;
    *(arg1 + 0xe8) = iVar7;
    iVar5 = uVar9 / 1000;
    uVar12 = (*(arg1 + 0xe0) * (iVar7 + iVar5 * -1000)) / 1000 + *(arg1 + 0xe0) * iVar5;
    if (uVar12 >> 0x18 == 0) {
        if (arg3 != 1) goto code_r0x080054fc;
code_r0x0800552c:
        iVar3 = 0x2a8;
    }
    else {
        uVar12 = 0xffffff;
        _printk(0x8000d9c,0xffffff,0xffffff);
        if (arg3 == 1) goto code_r0x0800552c;
code_r0x080054fc:
        if (arg3 != 2) goto code_r0x08005338;
        iVar3 = 0x20;
    }
    sym.writel_relaxed(uVar12,*(arg1 + -0x28) + iVar3);
code_r0x08005338:
    uVar12 = *(arg1 + 0xd8);
    uVar1 = *(arg1 + 0xf0);
    if (0xfe < uVar12) {
        uVar12 = 0xff;
    }
    uVar4 = *(arg1 + 200) * uVar9;
    uVar6 = 0x14 - uVar1;
    uVar11 = uVar1 - 0x14;
    uVar9 = *(arg1 + 0xd0) * uVar9;
    uVar10 = uVar9 >> (uVar11 & 0x3f);
    uVar2 = uVar4 >> (uVar11 & 0x3f);
    if (uVar1 < 0x14 || uVar11 == 0) {
        uVar10 = uVar9 << (uVar6 & 0x3f);
        uVar2 = uVar4 << (uVar6 & 0x3f);
    }
    uVar9 = (uVar2 + 999) / 1000;
    uVar10 = (uVar10 + 999) / 1000;
    uVar11 = uVar9;
    uVar8 = uVar10;
    if ((*(arg1 + 0xf4) < uVar11) || (uVar11 < uVar8)) {
        _printk(0x800098b,uVar9 & 0xffffffff,uVar10 & 0xffffffff,0);
        if (*(arg1 + 0xf4) <= uVar11) {
            uVar11 = *(arg1 + 0xf4);
        }
        uVar9 = uVar11;
        if (uVar11 - 1 <= uVar8) {
            uVar8 = uVar11 - 1;
        }
        uVar10 = uVar8;
    }
    if (arg3 == 1) {
        iVar13 = 0x2a0;
        iVar14 = 700;
        iVar15 = 0x2b4;
        iVar16 = 0x2b0;
        iVar3 = 0x2ac;
    }
    else {
        if (arg3 != 2) {
            return;
        }
        iVar13 = 0x10;
        iVar14 = 0x34;
        iVar15 = 0x2c;
        iVar16 = 0x28;
        iVar3 = 0x24;
    }
    sym.writel_relaxed(uVar9 & 0xffffffff,*(arg1 + -0x28) + iVar3);
    sym.writel_relaxed(uVar10 & 0xffffffff,*(arg1 + -0x28) + iVar16);
    sym.writel_relaxed(0,*(arg1 + -0x28) + iVar15);
    sym.writel_relaxed(uVar12 << 8 | 0x1ff00ff,*(arg1 + -0x28) + iVar14);
    sym.writel_relaxed(*(arg1 + 0xe4) | 1,*(arg1 + -0x28) + iVar13);
    return;
}


// ===== sym.attr_show @ 0x08005544 (size 148) =====

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
        if (0x16 < (pcVar2 + -0x8002488 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80006f0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x080055d8 (size 148) =====

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
        if (0x15 < (pcVar2 + -0x80023d8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x8000710);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.show_min_freq @ 0x0800566c (size 68) =====

int64_t sym.show_min_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0x118));
    return iVar1;
}


// ===== sym.store_min_freq @ 0x080056b0 (size 172) =====

int64_t sym.store_min_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c <= *(arg1 + -0x120)) {
            uVar1 = *(arg1 + -0x120);
        }
        if (*(arg1 + -0x114) <= uVar1) {
            uVar1 = *(arg1 + -0x114);
        }
        *(arg1 + -0x118) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_max_freq;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0x114));
    return iVar2;
}


// ===== sym.show_max_freq @ 0x0800575c (size 68) =====

int64_t sym.show_max_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0x114));
    return iVar1;
}


// ===== sym.store_max_freq @ 0x080057a0 (size 172) =====

int64_t sym.store_max_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c <= *(arg1 + -0x118)) {
            uVar1 = *(arg1 + -0x118);
        }
        if (*(arg1 + -0x11c) <= uVar1) {
            uVar1 = *(arg1 + -0x11c);
        }
        *(arg1 + -0x114) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_cur_freq;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0x110));
    return iVar2;
}


// ===== sym.show_cur_freq @ 0x0800584c (size 68) =====

int64_t sym.show_cur_freq(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0x110));
    return iVar1;
}


// ===== sym.show_window_ms @ 0x08005890 (size 64) =====

int64_t sym.show_window_ms(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xf8));
    return iVar1;
}


// ===== sym.store_window_ms @ 0x080058d0 (size 164) =====

int64_t sym.store_window_ms(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 9) {
            uVar1 = 8;
        }
        if (999 < uVar1) {
            uVar1 = 1000;
        }
        *(arg1 + -0xf8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_guard_band_mbps;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xf4));
    return iVar2;
}


// ===== sym.show_guard_band_mbps @ 0x08005974 (size 64) =====

int64_t sym.show_guard_band_mbps(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xf4));
    return iVar1;
}


// ===== sym.store_guard_band_mbps @ 0x080059b4 (size 152) =====

int64_t sym.store_guard_band_mbps(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (1999 < uStack_2c) {
            uVar1 = 2000;
        }
        *(arg1 + -0xf4) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_decay_rate;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xf0));
    return iVar2;
}


// ===== sym.show_decay_rate @ 0x08005a4c (size 64) =====

int64_t sym.show_decay_rate(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xf0));
    return iVar1;
}


// ===== sym.store_decay_rate @ 0x08005a8c (size 152) =====

int64_t sym.store_decay_rate(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (99 < uStack_2c) {
            uVar1 = 100;
        }
        *(arg1 + -0xf0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_io_percent;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xec));
    return iVar2;
}


// ===== sym.show_io_percent @ 0x08005b24 (size 64) =====

int64_t sym.show_io_percent(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xec));
    return iVar1;
}


// ===== sym.store_io_percent @ 0x08005b64 (size 160) =====

int64_t sym.store_io_percent(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 2) {
            uVar1 = 1;
        }
        if (399 < uVar1) {
            uVar1 = 400;
        }
        *(arg1 + -0xec) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_bw_step;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xe8));
    return iVar2;
}


// ===== sym.show_bw_step @ 0x08005c04 (size 64) =====

int64_t sym.show_bw_step(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xe8));
    return iVar1;
}


// ===== sym.store_bw_step @ 0x08005c44 (size 164) =====

int64_t sym.store_bw_step(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 0x33) {
            uVar1 = 0x32;
        }
        if (999 < uVar1) {
            uVar1 = 1000;
        }
        *(arg1 + -0xe8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_sample_ms;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xe4));
    return iVar2;
}


// ===== sym.show_sample_ms @ 0x08005ce8 (size 64) =====

int64_t sym.show_sample_ms(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xe4));
    return iVar1;
}


// ===== sym.store_sample_ms @ 0x08005d28 (size 180) =====

int64_t sym.store_sample_ms(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtoint(arg2,10,puVar4);
    if (iVar2 == 0) {
        uVar1 = uStack_2c;
        if (uStack_2c < 2) {
            uVar1 = 1;
        }
        if (0x31 < uVar1) {
            uVar1 = 0x32;
        }
        if (*(arg1 + -0xf8) < uVar1) {
            arg3 = -0x16;
        }
        else {
            *(arg1 + -0xe4) = uVar1;
        }
    }
    else {
        arg3 = iVar2;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_up_scale;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xe0));
    return iVar2;
}


// ===== sym.show_up_scale @ 0x08005ddc (size 64) =====

int64_t sym.show_up_scale(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xe0));
    return iVar1;
}


// ===== sym.store_up_scale @ 0x08005e1c (size 152) =====

int64_t sym.store_up_scale(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (499 < uStack_2c) {
            uVar1 = 500;
        }
        *(arg1 + -0xe0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_up_thres;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xdc));
    return iVar2;
}


// ===== sym.show_up_thres @ 0x08005eb4 (size 64) =====

int64_t sym.show_up_thres(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xdc));
    return iVar1;
}


// ===== sym.store_up_thres @ 0x08005ef4 (size 160) =====

int64_t sym.store_up_thres(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (uStack_2c < 2) {
            uVar1 = 1;
        }
        if (99 < uVar1) {
            uVar1 = 100;
        }
        *(arg1 + -0xdc) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_down_thres;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xd8));
    return iVar2;
}


// ===== sym.show_down_thres @ 0x08005f94 (size 64) =====

int64_t sym.show_down_thres(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xd8));
    return iVar1;
}


// ===== sym.store_down_thres @ 0x08005fd4 (size 152) =====

int64_t sym.store_down_thres(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(arg1 + -0xd8) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_down_count;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xd4));
    return iVar2;
}


// ===== sym.show_down_count @ 0x0800606c (size 64) =====

int64_t sym.show_down_count(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xd4));
    return iVar1;
}


// ===== sym.store_down_count @ 0x080060ac (size 152) =====

int64_t sym.store_down_count(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(arg1 + -0xd4) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_hist_memory;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xd0));
    return iVar2;
}


// ===== sym.show_hist_memory @ 0x08006144 (size 64) =====

int64_t sym.show_hist_memory(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xd0));
    return iVar1;
}


// ===== sym.store_hist_memory @ 0x08006184 (size 152) =====

int64_t sym.store_hist_memory(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(arg1 + -0xd0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_hyst_trigger_count;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xcc));
    return iVar2;
}


// ===== sym.show_hyst_trigger_count @ 0x0800621c (size 64) =====

int64_t sym.show_hyst_trigger_count(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xcc));
    return iVar1;
}


// ===== sym.store_hyst_trigger_count @ 0x0800625c (size 152) =====

int64_t sym.store_hyst_trigger_count(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(arg1 + -0xcc) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_hyst_length;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -200));
    return iVar2;
}


// ===== sym.show_hyst_length @ 0x080062f4 (size 64) =====

int64_t sym.show_hyst_length(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -200));
    return iVar1;
}


// ===== sym.store_hyst_length @ 0x08006334 (size 152) =====

int64_t sym.store_hyst_length(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(arg1 + -200) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_idle_length;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xc4));
    return iVar2;
}


// ===== sym.show_idle_length @ 0x080063cc (size 64) =====

int64_t sym.show_idle_length(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xc4));
    return iVar1;
}


// ===== sym.store_idle_length @ 0x0800640c (size 152) =====

int64_t sym.store_idle_length(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (0x59 < uStack_2c) {
            uVar1 = 0x5a;
        }
        *(arg1 + -0xc4) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_idle_mbps;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xc0));
    return iVar2;
}


// ===== sym.show_idle_mbps @ 0x080064a4 (size 64) =====

int64_t sym.show_idle_mbps(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xc0));
    return iVar1;
}


// ===== sym.store_idle_mbps @ 0x080064e4 (size 152) =====

int64_t sym.store_idle_mbps(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puVar4 = &uStack_2c;
    uStack_2c = 0;
    iVar2 = kstrtouint(arg2,10,puVar4);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar1 = uStack_2c;
        if (1999 < uStack_2c) {
            uVar1 = 2000;
        }
        *(arg1 + -0xc0) = uVar1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.show_ab_scale;
    iVar2 = scnprintf(puVar4,0x1000,0x8000909,*(iVar3 + -0xbc));
    return iVar2;
}


// ===== sym.show_ab_scale @ 0x0800657c (size 64) =====

int64_t sym.show_ab_scale(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(arg1 + -0xbc));
    return iVar1;
}


// ===== sym.store_ab_scale @ 0x080065bc (size 152) =====

uint64_t sym.store_ab_scale(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    puVar5 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtouint(arg2,10,puVar5);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        uVar2 = uStack_2c;
        if (99 < uStack_2c) {
            uVar2 = 100;
        }
        *(arg1 + -0xbc) = uVar2;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.show_mbps_zones;
    if (*(iVar4 + -0xb8) == 0) {
        uVar6 = 0;
    }
    else {
        uVar2 = scnprintf(puVar5,0x1000,0x800080d);
        uVar6 = uVar2;
        if (*(iVar4 + -0xb4) != 0) {
            iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
            uVar6 = iVar1 + uVar2;
            if (*(iVar4 + -0xb0) != 0) {
                iVar3 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                uVar2 = iVar3 + iVar1 + uVar2;
                uVar6 = uVar2;
                if (*(iVar4 + -0xac) != 0) {
                    iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                    uVar2 = iVar1 + uVar2;
                    uVar6 = uVar2;
                    if (*(iVar4 + -0xa8) != 0) {
                        iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                        uVar2 = iVar1 + uVar2;
                        uVar6 = uVar2;
                        if (*(iVar4 + -0xa4) != 0) {
                            iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                            uVar2 = iVar1 + uVar2;
                            uVar6 = uVar2;
                            if (*(iVar4 + -0xa0) != 0) {
                                iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                uVar2 = iVar1 + uVar2;
                                uVar6 = uVar2;
                                if (*(iVar4 + -0x9c) != 0) {
                                    iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                    uVar2 = iVar1 + uVar2;
                                    uVar6 = uVar2;
                                    if (*(iVar4 + -0x98) != 0) {
                                        iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                        uVar2 = iVar1 + uVar2;
                                        uVar6 = uVar2;
                                        if (*(iVar4 + -0x94) != 0) {
                                            iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x800080d);
                                            uVar6 = iVar1 + uVar2;
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
    iVar1 = scnprintf(puVar5 + uVar6,0x1000 - uVar6,0x8000b72);
    return iVar1 + uVar6;
}


// ===== sym.show_mbps_zones @ 0x08006654 (size 460) =====

int sym.show_mbps_zones(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
    uchar extraout_q0_02 [16];
    uchar extraout_q0_03 [16];
    uchar extraout_q0_04 [16];
    uchar extraout_q0_05 [16];
    uchar extraout_q0_06 [16];
    uchar extraout_q0_07 [16];
    uchar extraout_q0_08 [16];
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0xb8) == 0) {
        uVar4 = 0;
    }
    else {
        uVar1 = scnprintf(arg2,0x1000,0x800080d);
        uVar4 = uVar1;
        noname_1 = extraout_q0;
        if (*(arg1 + -0xb4) != 0) {
            iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
            uVar4 = iVar2 + uVar1;
            noname_1 = extraout_q0_00;
            if (*(arg1 + -0xb0) != 0) {
                iVar3 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                uVar1 = iVar3 + iVar2 + uVar1;
                uVar4 = uVar1;
                noname_1 = extraout_q0_01;
                if (*(arg1 + -0xac) != 0) {
                    iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                    uVar1 = iVar2 + uVar1;
                    uVar4 = uVar1;
                    noname_1 = extraout_q0_02;
                    if (*(arg1 + -0xa8) != 0) {
                        iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                        uVar1 = iVar2 + uVar1;
                        uVar4 = uVar1;
                        noname_1 = extraout_q0_03;
                        if (*(arg1 + -0xa4) != 0) {
                            iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                            uVar1 = iVar2 + uVar1;
                            uVar4 = uVar1;
                            noname_1 = extraout_q0_04;
                            if (*(arg1 + -0xa0) != 0) {
                                iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                                uVar1 = iVar2 + uVar1;
                                uVar4 = uVar1;
                                noname_1 = extraout_q0_05;
                                if (*(arg1 + -0x9c) != 0) {
                                    iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                                    uVar1 = iVar2 + uVar1;
                                    uVar4 = uVar1;
                                    noname_1 = extraout_q0_06;
                                    if (*(arg1 + -0x98) != 0) {
                                        iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                                        uVar1 = iVar2 + uVar1;
                                        uVar4 = uVar1;
                                        noname_1 = extraout_q0_07;
                                        if (*(arg1 + -0x94) != 0) {
                                            iVar2 = scnprintf(arg2 + uVar4,0x1000 - uVar4,0x800080d);
                                            uVar4 = iVar2 + uVar1;
                                            noname_1 = extraout_q0_08;
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
    iVar2 = scnprintf(noname_1,arg2 + uVar4,0x1000 - uVar4,0x8000b72);
    return iVar2 + uVar4;
}


// ===== sym.store_mbps_zones @ 0x08006820 (size 780) =====

void sym.store_mbps_zones(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *unaff_x19;
    int64_t iVar5;
    uint *unaff_x23;
    ulong unaff_x30;
    uint uStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    uStack_4c = 0;
    puVar3 = argv_split(0xcc0,arg2,&uStack_4c);
    if (puVar3 == NULL) {
        iVar4 = -0xc;
    }
    else {
        unaff_x23 = arg1 + -0xb8;
        if (8 < uStack_4c) {
            uStack_4c = 9;
        }
        unaff_x19 = puVar3;
        if (uStack_4c == 0) {
            iVar5 = 0;
code_r0x08006ab0:
            iVar2 = arg3;
        }
        else {
            iVar2 = kstrtouint(*puVar3,10,&uStack_50);
            if (iVar2 < 0) {
                iVar5 = 0;
            }
            else {
                *unaff_x23 = uStack_50;
                if (uStack_4c < 2) {
                    iVar5 = 1;
                    goto code_r0x08006ab0;
                }
                iVar2 = kstrtouint(puVar3[1],10,&uStack_50);
                if (iVar2 < 0) {
                    iVar5 = 1;
                }
                else {
                    *(arg1 + -0xb4) = uStack_50;
                    if (uStack_4c < 3) {
                        iVar5 = 2;
                        goto code_r0x08006ab0;
                    }
                    iVar2 = kstrtouint(puVar3[2],10,&uStack_50);
                    if (iVar2 < 0) {
                        iVar5 = 2;
                    }
                    else {
                        *(arg1 + -0xb0) = uStack_50;
                        if (uStack_4c < 4) {
                            iVar5 = 3;
                            goto code_r0x08006ab0;
                        }
                        iVar2 = kstrtouint(puVar3[3],10,&uStack_50);
                        if (iVar2 < 0) {
                            iVar5 = 3;
                        }
                        else {
                            *(arg1 + -0xac) = uStack_50;
                            if (uStack_4c < 5) {
                                iVar5 = 4;
                                goto code_r0x08006ab0;
                            }
                            iVar2 = kstrtouint(puVar3[4],10,&uStack_50);
                            if (iVar2 < 0) {
                                iVar5 = 4;
                            }
                            else {
                                *(arg1 + -0xa8) = uStack_50;
                                if (uStack_4c < 6) {
                                    iVar5 = 5;
                                    goto code_r0x08006ab0;
                                }
                                iVar2 = kstrtouint(puVar3[5],10,&uStack_50);
                                if (iVar2 < 0) {
                                    iVar5 = 5;
                                }
                                else {
                                    *(arg1 + -0xa4) = uStack_50;
                                    if (uStack_4c < 7) {
                                        iVar5 = 6;
                                        goto code_r0x08006ab0;
                                    }
                                    iVar2 = kstrtouint(puVar3[6],10,&uStack_50);
                                    if (iVar2 < 0) {
                                        iVar5 = 6;
                                    }
                                    else {
                                        *(arg1 + -0xa0) = uStack_50;
                                        if (uStack_4c < 8) {
                                            iVar5 = 7;
                                            goto code_r0x08006ab0;
                                        }
                                        iVar2 = kstrtouint(puVar3[7],10,&uStack_50);
                                        if (iVar2 < 0) {
                                            iVar5 = 7;
                                        }
                                        else {
                                            *(arg1 + -0x9c) = uStack_50;
                                            if (uStack_4c < 9) {
                                                iVar5 = 8;
                                                goto code_r0x08006ab0;
                                            }
                                            iVar2 = kstrtouint(puVar3[8],10,&uStack_50);
                                            if (iVar2 < 0) {
                                                iVar5 = 8;
                                            }
                                            else {
                                                *(arg1 + -0x98) = uStack_50;
                                                if (uStack_4c < 10) {
                                                    iVar5 = 9;
                                                    goto code_r0x08006ab0;
                                                }
                                                iVar2 = kstrtouint(puVar3[9],10,&uStack_50);
                                                if (-1 < iVar2) goto code_r0x08006afc;
                                                iVar5 = 9;
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
        argv_free(puVar3);
        iVar4 = iVar2;
        unaff_x23[iVar5] = 0;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(iVar4);
code_r0x08006afc:
    unaff_x23[9] = uStack_50;
    if ((uStack_4c < 0xb) || (iVar2 = kstrtouint(unaff_x19[10],10,&uStack_50), iVar2 < 0)) {
        argv_free(unaff_x19);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8006b2c);
    (*pcVar1)();
}


// ===== sym.show_throttle_adj @ 0x08006b2c (size 176) =====

int64_t sym.show_throttle_adj(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + -8);
    pcVar4 = *(iVar3 + 0x30);
    if (pcVar4 == NULL) {
        uVar1 = 0;
    }
    else {
        if (pcVar4 != sym.__typeid__ZTSFjP8bw_hwmonE_global_addr) {
            noname_1 = __cfi_slowpath_diag(0x1e8fcbdd1fb7098a,pcVar4,0x8000730);
            iVar3 = *(arg1 + -8);
        }
        uVar1 = (*pcVar4)(noname_1,iVar3);
    }
    iVar2 = scnprintf(arg2,0x1000,0x8000909,uVar1);
    return iVar2;
}


// ===== sym.store_throttle_adj @ 0x08006bdc (size 236) =====

void sym.store_throttle_adj(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    code *pcVar4;
    code *extraout_x8;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    if (*(*(arg1 + -8) + 0x28) == 0) {
        iVar3 = -1;
    }
    else {
        iVar2 = kstrtouint(arg2,10,&uStack_2c);
        unaff_x19 = arg3;
        unaff_x20 = arg1;
        if (-1 < iVar2) {
            iVar3 = *(arg1 + -8);
            pcVar4 = *(iVar3 + 0x28);
            if (pcVar4 != sym.__typeid__ZTSFiP8bw_hwmonjE_global_addr) goto code_r0x08006c98;
            goto code_r0x08006c44;
        }
        iVar3 = iVar2;
        noname_1 = extraout_q0;
    }
    while (iVar1 = sp_el0, *(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail(noname_1,iVar3);
        pcVar4 = extraout_x8;
code_r0x08006c98:
        __cfi_slowpath_diag(0x844a8e6b11594c0a,pcVar4,0x8000750);
        iVar3 = *(unaff_x20 + -8);
code_r0x08006c44:
        iVar2 = (*pcVar4)(iVar3,uStack_2c);
        iVar3 = unaff_x19;
        noname_1 = extraout_q0_00;
        if (iVar2 != 0) {
            iVar3 = iVar2;
        }
    }
    return;
}


// ===== sym.show_second_vote_limit @ 0x08006cc8 (size 68) =====

int64_t sym.show_second_vote_limit(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000909,*(*(arg1 + -8) + 0x58));
    return iVar1;
}


// ===== sym.store_second_vote_limit @ 0x08006d0c (size 284) =====

uchar * sym.store_second_vote_limit(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar6 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + -8);
    uStack_3c = 0;
    if (*(iVar5 + 0x54) == '\0') {
        arg3 = -0x13;
    }
    else {
        iVar2 = kstrtouint(arg2,10,&uStack_3c);
        noname_1 = extraout_q0;
        if (iVar2 < 0) {
            arg3 = iVar2;
        }
        else if (uStack_3c != *(iVar5 + 0x58)) {
            mutex_lock(arg1 + 0x90);
            if (uStack_3c < *(arg1 + -0x104)) {
                *(arg1 + -0x104) = uStack_3c;
                iVar3 = (*(iVar5 + 0x38))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(iVar5 + 0x38);
                }
                iVar2 = qcom_dcvs_update_votes(iVar3,arg1 + -0x110,3,*(iVar5 + 0x44));
                if (iVar2 < 0) {
                    _dev_err(*(iVar5 + 0x38),"second vote update failed: %d\n",iVar2);
                }
            }
            *(iVar5 + 0x58) = uStack_3c;
            noname_1 = mutex_unlock(arg1 + 0x90);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_38) {
        auVar6 = __stack_chk_fail(noname_1);
        puVar4 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar4 != NULL) {
            switch(*puVar4) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar4,auVar6._8_8_,0);
                break;
            default:
                return puVar4;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8006e80);
        (*pcVar1)();
    }
    return arg3;
}


// ===== sym.__cfi_check_fail @ 0x08006e28 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006e6c

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
    //switch table (4 cases) at 0x8000790
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8006e80);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08006e84 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_bwmon_driver_probe.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,obj.__this_module)
    ;
    return;
}

