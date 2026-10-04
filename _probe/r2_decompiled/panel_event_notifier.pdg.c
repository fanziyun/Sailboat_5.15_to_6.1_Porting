// decompiled from panel_event_notifier by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x080013e4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x3910a821d8f2bfc7) {
        if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x80010f8;
        }
        else {
            if (arg1 != 0x92f22877ee5d01d) goto code_r0x080013a4;
            uVar2 = 0x80010f0;
        }
    }
    else if (arg1 == 0x3910a821d8f2bfc7) {
        uVar2 = 0x8001108;
    }
    else if (arg1 == 0x4c550309df1cf4c1) {
        uVar2 = 0x8001110;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080013a4;
        uVar2 = 0x8001100;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080013a4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013f8);
    (*pcVar1)();
}


// ===== sym.panel_event_notification_trigger.cfi_jt @ 0x080010f0 (size 8) =====

void sym.panel_event_notification_trigger.cfi_jt(int param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 - 1U < 2) {
        iVar3 = 0;
        do {
            mutex_lock(obj.panel_event_notifier_entries_lock);
            if (*(param_2 + 0x10) == *(iVar3 + 0x8000080)) {
                if (*(iVar3 + 0x8000088) != param_1) {
                    _printk(0x800019d,*(iVar3 + 0x8000088),param_1);
                    goto code_r0x080012f0;
                }
                pcVar1 = *(obj.panel_event_notifier_entries_lock + iVar3);
                uVar2 = *(iVar3 + 0x8000078);
                mutex_unlock(obj.panel_event_notifier_entries_lock);
                if (pcVar1 != NULL) {
                    __cfi_slowpath_diag(0x51c87a31c6197e,pcVar1,0x80000a0);
                    (*pcVar1)(param_1,param_2,uVar2);
                }
            }
            else {
code_r0x080012f0:
                mutex_unlock(obj.panel_event_notifier_entries_lock);
            }
            iVar3 = iVar3 + 0x20;
        } while (iVar3 != 0x120);
    }
    else {
        _printk(0x80001c2);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001100 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    return;
}


// ===== sym.panel_event_notifier_register.cfi_jt @ 0x08001108 (size 8) =====

code * sym.panel_event_notifier_register.cfi_jt
                 (int param_1,uint32_t param_2,ulong param_3,int64_t param_4,ulong param_5)

{
    code *pcVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 - 1U < 2) && (param_4 != 0)) {
        if (param_2 < 9) {
            mutex_lock(obj.panel_event_notifier_entries_lock);
            uVar3 = param_2;
            pcVar1 = obj.panel_event_notifier_entries_lock + uVar3 * 0x20;
            if (*pcVar1 != 0) {
                mutex_unlock(obj.panel_event_notifier_entries_lock);
                return 0xffffffffffffffef;
            }
            if ((uVar3 << 5 | 0x10) < 0x121) {
                *pcVar1 = param_4;
                *(uVar3 * 0x20 + 0x8000080) = param_3;
                if (((uVar3 << 5 | 8) < 0x121) && (*(uVar3 * 0x20 + 0x8000078) = param_5, (uVar3 << 5 | 0x18) < 0x121))
                {
                    *(uVar3 * 0x20 + 0x8000088) = param_1;
                    mutex_unlock(obj.panel_event_notifier_entries_lock);
                    return pcVar1;
                }
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x800122c);
            (*pcVar1)();
        }
        uVar2 = 0x80000c5;
    }
    else {
        uVar2 = 0x80000f3;
    }
    _printk(uVar2);
    return 0xffffffffffffffea;
}


// ===== sym.panel_event_notifier_unregister.cfi_jt @ 0x08001110 (size 8) =====

void sym.panel_event_notifier_unregister.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != NULL) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.panel_event_notifier_entries_lock);
        *(param_1 + 3) = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        mutex_unlock(obj.panel_event_notifier_entries_lock);
    }
    return;
}


// ===== sym.panel_event_notifier_register @ 0x08001118 (size 276) =====

code * sym.panel_event_notifier_register(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar3 = arg2;
    *in_x18 = unaff_x30;
    if ((arg1 - 1U < 2) && (arg4 != 0)) {
        if (arg2 < 9) {
            mutex_lock(obj.panel_event_notifier_entries_lock);
            pcVar1 = obj.panel_event_notifier_entries_lock + uVar3 * 0x20;
            if (*pcVar1 != 0) {
                mutex_unlock(obj.panel_event_notifier_entries_lock);
                return 0xffffffffffffffef;
            }
            if ((uVar3 << 5 | 0x10) < 0x121) {
                *pcVar1 = arg4;
                *(uVar3 * 0x20 + 0x8000080) = arg3;
                if (((uVar3 << 5 | 8) < 0x121) && (*(uVar3 * 0x20 + 0x8000078) = in_x4, (uVar3 << 5 | 0x18) < 0x121)) {
                    *(uVar3 * 0x20 + 0x8000088) = arg1;
                    mutex_unlock(obj.panel_event_notifier_entries_lock);
                    return pcVar1;
                }
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x800122c);
            (*pcVar1)();
        }
        uVar2 = 0x80000c5;
    }
    else {
        uVar2 = 0x80000f3;
    }
    _printk(uVar2);
    return 0xffffffffffffffea;
}


// ===== sym.panel_event_notifier_unregister @ 0x0800122c (size 88) =====

void sym.panel_event_notifier_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        mutex_lock(obj.panel_event_notifier_entries_lock);
        *(arg1 + 0x18) = 0;
        *(arg1 + 8) = 0;
        *(arg1 + 0x10) = 0;
        *arg1 = 0;
        mutex_unlock(obj.panel_event_notifier_entries_lock);
    }
    return;
}


// ===== sym.panel_event_notification_trigger @ 0x08001284 (size 284) =====

void sym.panel_event_notification_trigger(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 - 1U < 2) {
        iVar3 = 0;
        do {
            mutex_lock(obj.panel_event_notifier_entries_lock);
            if (*(arg2 + 0x10) == *(iVar3 + 0x8000080)) {
                if (*(iVar3 + 0x8000088) != arg1) {
                    _printk(0x800019d,*(iVar3 + 0x8000088),arg1 & 0xffffffff);
                    goto code_r0x080012f0;
                }
                pcVar1 = *(obj.panel_event_notifier_entries_lock + iVar3);
                uVar2 = *(iVar3 + 0x8000078);
                mutex_unlock(obj.panel_event_notifier_entries_lock);
                if (pcVar1 != NULL) {
                    __cfi_slowpath_diag(0x51c87a31c6197e,pcVar1,0x80000a0);
                    (*pcVar1)(arg1 & 0xffffffff,arg2,uVar2);
                }
            }
            else {
code_r0x080012f0:
                mutex_unlock(obj.panel_event_notifier_entries_lock);
            }
            iVar3 = iVar3 + 0x20;
        } while (iVar3 != 0x120);
    }
    else {
        _printk(0x80001c2);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080013a0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080013e4

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
    //switch table (4 cases) at 0x80000c0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013f8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001464 (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}


// ===== sym.cleanup_module @ 0x08001474 (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

