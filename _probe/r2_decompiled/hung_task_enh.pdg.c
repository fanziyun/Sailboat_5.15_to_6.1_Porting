// decompiled from hung_task_enh by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001520

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x568cedffc8308328) {
            pcVar2 = sym.qcom_before_check_tasks.cfi_jt;
        }
        else {
            if (arg1 != -0xef4825473ba2583) goto code_r0x080014e0;
            pcVar2 = sym.qcom_check_tasks_done.cfi_jt;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x3d66494c8ff65011) {
            if ((pcVar1 + -0x8001118 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080014e0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080014e0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080014e0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001534);
    (*pcVar1)();
}


// ===== sym.qcom_before_check_tasks.cfi_jt @ 0x08001100 (size 8) =====

void sym.qcom_before_check_tasks.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3,uchar *param_4)

{
    int iVar1;
    
    if (_segment.ehdr == 1) {
        if (*(param_2 + 0xcc0) != '\x02') goto code_r0x08001170;
    }
    else if ((_segment.ehdr != 0) || (*(param_2 + 0xcc0) == '\x01')) {
code_r0x08001170:
        *param_4 = 1;
        if ((*(param_2 + 0x590) >> 2 & 1) == 0) {
            return;
        }
        iVar1 = *(param_2 + 0x28);
        if (((iVar1 != 2) && (iVar1 != 0x108)) && (iVar1 != 0x104)) {
            return;
        }
        if (*(param_2 + 0x7c8) == 0) {
            return;
        }
        if (-1 < (*(param_2 + 0x7c8) + param_3 * 0xfa) - _proc_dointvec_minmax) {
            return;
        }
        if (*(param_2 + 0x520) == 0) {
            return;
        }
        if (*(param_2 + 0x618) != param_2) {
            return;
        }
        _segment.ehdr = _segment.ehdr + 1;
        return;
    }
    *param_4 = 0;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001108 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_sysctl_table(_segment.ehdr);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_check_uninterruptible_tasks_dn,sym.qcom_check_tasks_done.cfi_jt,0);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001110 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = CONCAT44(*0x8000004,5);
    iVar1 = tracepoint_probe_register
                      (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
    if (iVar1 == 0) {
        iVar1 = tracepoint_probe_register
                          (__tracepoint_android_vh_check_uninterruptible_tasks_dn,sym.qcom_check_tasks_done.cfi_jt,0);
        if (iVar1 == 0) {
            _segment.ehdr = register_sysctl_table(obj.hung_task_base_table);
            if (_segment.ehdr == 0) {
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_check_uninterruptible_tasks_dn,sym.qcom_check_tasks_done.cfi_jt,0);
                iVar1 = -0xc;
            }
            else {
                iVar1 = 0;
            }
        }
        else {
            tracepoint_probe_unregister
                      (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
        }
    }
    return iVar1;
}


// ===== sym.read_pid_handler.6b3ea19755a1813542abbf2d89fbfff5.cfi_jt @ 0x08001118 (size 8) =====

uint sym.read_pid_handler.6b3ea19755a1813542abbf2d89fbfff5.cfi_jt
               (ulong param_1,uint param_2,ulong param_3,ulong param_4,ulong param_5)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.readpid_mutex);
    uVar1 = proc_dointvec_minmax(param_1,param_2,param_3,param_4,param_5);
    mutex_unlock(obj.readpid_mutex);
    return uVar1;
}


// ===== sym.proc_dointvec_minmax.cfi_jt @ 0x08001120 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.proc_dointvec_minmax.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.hung_task_handler.6b3ea19755a1813542abbf2d89fbfff5.cfi_jt @ 0x08001128 (size 8) =====

int sym.hung_task_handler.6b3ea19755a1813542abbf2d89fbfff5.cfi_jt
              (int64_t param_1,uint32_t param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int *piVar8;
    uchar uVar9;
    ulong extraout_x9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar10 = param_2;
    puStack_88 = &uStack_50;
    uStack_50 = 0xffffffffffffffff;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_90 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    uStack_80 = CONCAT24(*(param_1 + 0x14),8);
    mutex_lock(obj.readpid_mutex);
    uVar7 = uVar10;
    if (param_2 == 0) {
        uVar6 = find_vpid(_segment.ehdr);
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) goto code_r0x080013ac;
        uStack_50 = CONCAT14(*(uVar7 + 0xcc0),_segment.ehdr);
        iVar5 = proc_dointvec(&uStack_90,0,param_3,param_4,param_5);
    }
    else {
        iVar5 = proc_dointvec(&uStack_90,param_2,param_3,param_4,param_5);
        if (iVar5 != 0) goto code_r0x080013ec;
        iVar5 = -2;
        if (uStack_50 < 1) goto code_r0x080013ec;
        if (uStack_50 < 0) goto code_r0x080013ec;
        if (1 < uStack_50._4_4_) goto code_r0x080013ec;
        uVar6 = find_vpid();
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) {
code_r0x080013ac:
            iVar5 = -2;
            uVar7 = uVar10;
            goto code_r0x080013ec;
        }
        if (uStack_50._4_4_ == 1) {
            if (_segment.ehdr == 0) {
                uVar9 = 1;
            }
            else {
                uVar9 = 2;
            }
            iVar5 = 0;
            *(uVar7 + 0xcc0) = uVar9;
        }
        else {
            iVar5 = 0;
            *(uVar7 + 0xcc0) = 0;
        }
    }
    piVar8 = uVar7 + 0x38;
    uVar6 = 1;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            iVar1 = *piVar8;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = iVar1 - uVar6;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(uVar7);
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(piVar8,3);
        }
code_r0x080013ec:
        mutex_unlock(obj.readpid_mutex);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) break;
        piVar8 = __stack_chk_fail();
        uVar6 = extraout_x9;
    }
    return iVar5;
}


// ===== sym.qcom_check_tasks_done.cfi_jt @ 0x08001130 (size 8) =====

uint64_t sym.qcom_check_tasks_done.cfi_jt(uint64_t param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    int *piVar8;
    uchar uVar9;
    ulong extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_a0;
    ulong *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = 0;
    if (*0x800006c <= *0x8000068) {
        iVar1 = *0x8000070 + 1;
    }
    *0x8000070 = iVar1;
    if ((*0x8000074 == 0) || (iVar1 < *0x8000074)) {
        _segment.ehdr = 0;
        return param_1;
    }
    auVar12 = panic("Detect IO wait too long time for multiple tasks!\n");
    *extraout_x18 = sym.hung_task_handler;
    pcStack_48 = sym.hung_task_handler;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uVar11 = auVar12._8_8_ & 0xffffffff;
    puStack_98 = &uStack_60;
    uStack_60 = 0xffffffffffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    uStack_90 = CONCAT24(*(auVar12._0_8_ + 0x14),8);
    puStack_50 = &stack0xfffffffffffffff0;
    mutex_lock(obj.readpid_mutex);
    uVar7 = uVar11;
    if (auVar12._8_4_ == 0) {
        uVar6 = find_vpid(_segment.ehdr);
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) goto code_r0x080013ac;
        uStack_60 = CONCAT14(*(uVar7 + 0xcc0),_segment.ehdr);
        uVar10 = proc_dointvec(&uStack_a0,0,param_3,param_4,param_5);
        uVar10 = uVar10 & 0xffffffff;
    }
    else {
        uVar5 = proc_dointvec(&uStack_a0,auVar12._8_8_ & 0xffffffff,param_3,param_4,param_5);
        uVar10 = uVar5;
        if (uVar5 != 0) goto code_r0x080013ec;
        uVar10 = 0xfffffffe;
        if (uStack_60 < 1) goto code_r0x080013ec;
        if (uStack_60 < 0) goto code_r0x080013ec;
        if (1 < uStack_60._4_4_) goto code_r0x080013ec;
        uVar6 = find_vpid();
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) {
code_r0x080013ac:
            uVar10 = 0xfffffffe;
            uVar7 = uVar11;
            goto code_r0x080013ec;
        }
        if (uStack_60._4_4_ == 1) {
            if (_segment.ehdr == 0) {
                uVar9 = 1;
            }
            else {
                uVar9 = 2;
            }
            uVar10 = 0;
            *(uVar7 + 0xcc0) = uVar9;
        }
        else {
            uVar10 = 0;
            *(uVar7 + 0xcc0) = 0;
        }
    }
    piVar8 = uVar7 + 0x38;
    uVar6 = 1;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            iVar1 = *piVar8;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = iVar1 - uVar6;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(uVar7);
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(piVar8,3);
        }
code_r0x080013ec:
        mutex_unlock(obj.readpid_mutex);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_58) break;
        piVar8 = __stack_chk_fail();
        uVar6 = extraout_x9;
    }
    return uVar10;
}


// ===== sym.qcom_before_check_tasks @ 0x08001138 (size 184) =====

void sym.qcom_before_check_tasks(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    
    if (_segment.ehdr == 1) {
        if (*(arg2 + 0xcc0) != '\x02') goto code_r0x08001170;
    }
    else if ((_segment.ehdr != 0) || (*(arg2 + 0xcc0) == '\x01')) {
code_r0x08001170:
        *arg4 = 1;
        if ((*(arg2 + 0x590) >> 2 & 1) == 0) {
            return;
        }
        iVar1 = *(arg2 + 0x28);
        if (((iVar1 != 2) && (iVar1 != 0x108)) && (iVar1 != 0x104)) {
            return;
        }
        if (*(arg2 + 0x7c8) == 0) {
            return;
        }
        if (-1 < (*(arg2 + 0x7c8) + arg3 * 0xfa) - _proc_dointvec_minmax) {
            return;
        }
        if (*(arg2 + 0x520) == 0) {
            return;
        }
        if (*(arg2 + 0x618) != arg2) {
            return;
        }
        _segment.ehdr = _segment.ehdr + 1;
        return;
    }
    *arg4 = 0;
    return;
}


// ===== sym.qcom_check_tasks_done @ 0x080011f0 (size 92) =====

int64_t sym.qcom_check_tasks_done(int64_t arg1)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    int *piVar8;
    ulong in_x2;
    ulong in_x3;
    ulong in_x4;
    uchar uVar9;
    ulong extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_a0;
    ulong *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = 0;
    if (*0x800006c <= *0x8000068) {
        iVar1 = *0x8000070 + 1;
    }
    *0x8000070 = iVar1;
    if ((*0x8000074 == 0) || (iVar1 < *0x8000074)) {
        _segment.ehdr = 0;
        return arg1;
    }
    auVar12 = panic("Detect IO wait too long time for multiple tasks!\n");
    *extraout_x18 = sym.hung_task_handler;
    pcStack_48 = sym.hung_task_handler;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    uVar11 = auVar12._8_8_ & 0xffffffff;
    puStack_98 = &uStack_60;
    uStack_60 = 0xffffffffffffffff;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    uStack_90 = CONCAT24(*(auVar12._0_8_ + 0x14),8);
    puStack_50 = &stack0xfffffffffffffff0;
    mutex_lock(obj.readpid_mutex);
    uVar7 = uVar11;
    if (auVar12._8_4_ == 0) {
        uVar6 = find_vpid(_segment.ehdr);
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) goto code_r0x080013ac;
        uStack_60 = CONCAT14(*(uVar7 + 0xcc0),_segment.ehdr);
        uVar10 = proc_dointvec(&uStack_a0,0,in_x2,in_x3,in_x4);
        uVar10 = uVar10 & 0xffffffff;
    }
    else {
        uVar5 = proc_dointvec(&uStack_a0,auVar12._8_8_ & 0xffffffff,in_x2,in_x3,in_x4);
        uVar10 = uVar5;
        if (uVar5 != 0) goto code_r0x080013ec;
        uVar10 = 0xfffffffe;
        if (uStack_60 < 1) goto code_r0x080013ec;
        if (uStack_60 < 0) goto code_r0x080013ec;
        if (1 < uStack_60._4_4_) goto code_r0x080013ec;
        uVar6 = find_vpid();
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) {
code_r0x080013ac:
            uVar10 = 0xfffffffe;
            uVar7 = uVar11;
            goto code_r0x080013ec;
        }
        if (uStack_60._4_4_ == 1) {
            if (_segment.ehdr == 0) {
                uVar9 = 1;
            }
            else {
                uVar9 = 2;
            }
            uVar10 = 0;
            *(uVar7 + 0xcc0) = uVar9;
        }
        else {
            uVar10 = 0;
            *(uVar7 + 0xcc0) = 0;
        }
    }
    piVar8 = uVar7 + 0x38;
    uVar6 = 1;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            iVar1 = *piVar8;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = iVar1 - uVar6;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(uVar7);
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(piVar8,3);
        }
code_r0x080013ec:
        mutex_unlock(obj.readpid_mutex);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_58) break;
        piVar8 = __stack_chk_fail();
        uVar6 = extraout_x9;
    }
    return uVar10;
}


// ===== sym.hung_task_handler @ 0x0800124c (size 524) =====

int sym.hung_task_handler(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    int *piVar8;
    uchar uVar9;
    ulong extraout_x9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    ulong uStack_90;
    ulong *puStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uVar10 = arg2 & 0xffffffff;
    puStack_88 = &uStack_50;
    uStack_50 = 0xffffffffffffffff;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_90 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    uStack_80 = CONCAT24(*(arg1 + 0x14),8);
    mutex_lock(obj.readpid_mutex);
    uVar7 = uVar10;
    if (arg2 == 0) {
        uVar6 = find_vpid(_segment.ehdr);
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) goto code_r0x080013ac;
        uStack_50 = CONCAT14(*(uVar7 + 0xcc0),_segment.ehdr);
        iVar5 = proc_dointvec(&uStack_90,0,arg3,arg4);
    }
    else {
        iVar5 = proc_dointvec(&uStack_90,arg2 & 0xffffffff,arg3,arg4);
        if (iVar5 != 0) goto code_r0x080013ec;
        iVar5 = -2;
        if (uStack_50 < 1) goto code_r0x080013ec;
        if (uStack_50 < 0) goto code_r0x080013ec;
        if (1 < uStack_50._4_4_) goto code_r0x080013ec;
        uVar6 = find_vpid();
        uVar7 = get_pid_task(uVar6,0);
        if (uVar7 == 0) {
code_r0x080013ac:
            iVar5 = -2;
            uVar7 = uVar10;
            goto code_r0x080013ec;
        }
        if (uStack_50._4_4_ == 1) {
            if (_segment.ehdr == 0) {
                uVar9 = 1;
            }
            else {
                uVar9 = 2;
            }
            iVar5 = 0;
            *(uVar7 + 0xcc0) = uVar9;
        }
        else {
            iVar5 = 0;
            *(uVar7 + 0xcc0) = 0;
        }
    }
    piVar8 = uVar7 + 0x38;
    uVar6 = 1;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            iVar1 = *piVar8;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = iVar1 - uVar6;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(uVar7);
        }
        else if (iVar1 < 1) {
            refcount_warn_saturate(piVar8,3);
        }
code_r0x080013ec:
        mutex_unlock(obj.readpid_mutex);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) break;
        piVar8 = __stack_chk_fail();
        uVar6 = extraout_x9;
    }
    return iVar5;
}


// ===== sym.read_pid_handler @ 0x08001458 (size 132) =====

uint sym.read_pid_handler(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.readpid_mutex);
    uVar1 = proc_dointvec_minmax(arg1,arg2 & 0xffffffff,arg3,arg4);
    mutex_unlock(obj.readpid_mutex);
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x080014dc (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001520

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
    //switch table (4 cases) at 0x8000290
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001534);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001544 (size 232) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = CONCAT44(*0x8000004,5);
    iVar1 = tracepoint_probe_register
                      (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
    if (iVar1 == 0) {
        iVar1 = tracepoint_probe_register
                          (__tracepoint_android_vh_check_uninterruptible_tasks_dn,sym.qcom_check_tasks_done.cfi_jt,0);
        if (iVar1 == 0) {
            _segment.ehdr = register_sysctl_table(obj.hung_task_base_table);
            if (_segment.ehdr == 0) {
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
                tracepoint_probe_unregister
                          (__tracepoint_android_vh_check_uninterruptible_tasks_dn,sym.qcom_check_tasks_done.cfi_jt,0);
                iVar1 = -0xc;
            }
            else {
                iVar1 = 0;
            }
        }
        else {
            tracepoint_probe_unregister
                      (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
        }
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x0800162c (size 92) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_sysctl_table(_segment.ehdr);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_check_uninterruptible_tasks,sym.qcom_before_check_tasks.cfi_jt,0);
    tracepoint_probe_unregister
              (__tracepoint_android_vh_check_uninterruptible_tasks_dn,sym.qcom_check_tasks_done.cfi_jt,0);
    return;
}

