// decompiled from binder_gki by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001a9c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x1fb763c43723309b) {
        if (arg1 == -0x7946ee14de9d94fb) {
            pcVar2 = sym.query_binder_app_stat.cfi_jt;
        }
        else if (arg1 == -0x49c0705e4446d9aa) {
            pcVar2 = sym.mi_binder_alloc_new_buf_locked.cfi_jt;
        }
        else {
            if (arg1 != -0x4970a5144f2db5fc) goto code_r0x08001a5c;
            pcVar2 = sym.mi_get_hhead_and_lock.cfi_jt;
        }
    }
    else if (arg1 < 0x11539ef4e9acd3f3) {
        if (arg1 == -0x1fb763c43723309b) {
            pcVar2 = sym.oem_register_binder_hook.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001a5c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 != 0x11539ef4e9acd3f3) {
            if ((arg1 == 0x57ab066eaa17349d) && ((pcVar1 + -0x8001178 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x08001a5c;
        }
        pcVar2 = sym.mi_binder_wait_for_work.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001a5c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001ab0);
    (*pcVar1)();
}


// ===== sym.mi_binder_wait_for_work.cfi_jt @ 0x08001160 (size 8) =====

void sym.mi_binder_wait_for_work.cfi_jt(ulong param_1,ulong param_2,int64_t param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_3 + 0x40) == 0) {
        return;
    }
    _raw_spin_lock(*(param_3 + 0x40) + 0x90);
    if ((((_segment.ehdr == NULL) || (*(param_3 + 400) != '\0')) || (*(param_3 + 0x40) == 0)) ||
       ((iVar7 = *(*(param_3 + 0x40) + 0x30), iVar7 == 0 || (iVar7 = *(iVar7 + 0x48), iVar7 == 0)))) {
        _raw_spin_unlock(*(param_3 + 0x40) + 0x90);
        return;
    }
    puVar1 = iVar7 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x080018ec;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x080018ec:
    _raw_spin_unlock(*(param_3 + 0x40) + 0x90);
    pcVar5 = _segment.ehdr;
    __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,0x8000180);
    (*pcVar5)(iVar7,*(param_4 + 0x48),*(param_3 + 0x30),*(*(param_3 + 0x40) + 0x5c) & 1,*(*(param_3 + 0x40) + 0x58))
    ;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(iVar7);
    }
    else if (uVar2 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.mi_get_hhead_and_lock.cfi_jt @ 0x08001168 (size 8) =====

void sym.mi_get_hhead_and_lock.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    if ((obj.bgot & 1) == 0) {
        if (param_2 != 0) {
            _segment.ehdr = param_2;
        }
        if (param_3 != 0) {
            _segment.ehdr = param_3;
        }
        obj.bgot = 0x1;
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000346);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_alloc_new_buf_locked,sym.mi_binder_alloc_new_buf_locked.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_reply,sym.mi_binder_replay.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_trans,sym.mi_binder_transaction.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_wait_for_work,sym.mi_binder_wait_for_work.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_preset,sym.mi_get_hhead_and_lock.cfi_jt,0);
    return 0;
}


// ===== sym.mi_binder_replay.cfi_jt @ 0x08001178 (size 8) =====

void sym.mi_binder_replay.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if ((_segment.ehdr != NULL) && (*(param_2 + 0x48) != 0)) {
        __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,obj.bgot);
        (*pcVar1)(*(param_2 + 0x48),*(param_3 + 0x48),*(param_4 + 0x30),*(param_5 + 0x14) & 1,*(param_5 + 0x10));
    }
    return;
}


// ===== sym.mi_binder_transaction.cfi_jt @ 0x08001180 (size 8) =====

void sym.mi_binder_transaction.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4,int64_t param_5)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (((param_2 != 0) && (_segment.ehdr != NULL)) && (*(param_2 + 0x48) != 0)) {
        __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,0x8000160);
        (*pcVar1)(*(param_2 + 0x48),*(param_3 + 0x48),*(param_4 + 0x30),*(param_5 + 0x14) & 1,*(param_5 + 0x10));
    }
    return;
}


// ===== sym.mi_binder_alloc_new_buf_locked.cfi_jt @ 0x08001188 (size 8) =====

void sym.mi_binder_alloc_new_buf_locked.cfi_jt(ulong param_1,int64_t param_2,uint64_t *param_3,int param_4)

{
    int64_t iVar1;
    code *pcVar2;
    ulong *in_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if ((param_4 != 0) && (_segment.ehdr != NULL)) {
        if ((param_3 != NULL) && (*param_3 < _obj.oem_binder_hook_set * (param_2 + 0x68) || *param_3 < *0x8000100)) {
            uVar3 = param_3[-0x39];
            if (uVar3 != 0) {
                __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,0x8000120);
                iVar1 = sp_el0;
                (*pcVar2)(uVar3,iVar1,*(iVar1 + 0x5d8),0,0);
            }
        }
    }
    return;
}


// ===== sym.query_binder_app_stat.cfi_jt @ 0x08001190 (size 8) =====

void sym.query_binder_app_stat.cfi_jt(int param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint8_t uVar4;
    code *pcVar5;
    uint uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int iVar10;
    uint8_t uVar11;
    uint uVar12;
    int64_t *piVar13;
    uint uVar14;
    int64_t *piVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != NULL) {
        mutex_lock(_segment.ehdr);
        piVar15 = *_segment.ehdr;
        if (piVar15 == NULL) {
            uVar11 = 1;
        }
        else {
            uVar11 = 1;
            do {
                if (piVar15[9] != 0) {
                    __rcu_read_lock();
                    iVar10 = *(*(piVar15[9] + 0x790) + 4);
                    __rcu_read_unlock();
                    if (iVar10 == param_1) {
                        if ((_segment.ehdr == NULL) || (piVar15[9] == 0)) {
                            iVar10 = 0;
                        }
                        else {
                            __rcu_read_lock();
                            __rcu_read_unlock(*(piVar15[9] + 0x790));
                            _raw_spin_lock(piVar15 + 0x49);
                            if ((piVar15[9] == 0) || (piVar1 = piVar15 + 0x12, piVar1 == *piVar1)) {
                                uVar16 = 0xffffffff;
                            }
                            else {
                                __rcu_read_lock();
                                __rcu_read_unlock(*(piVar15[9] + 0x790));
                                uVar16 = 0xffffffff;
                                for (piVar13 = piVar15[0x12]; piVar13 != piVar1; piVar13 = *piVar13) {
                                    if ((piVar13 != NULL) && (piVar13[2] == 1)) {
                                        piVar17 = piVar13 + 0x11;
                                        _raw_spin_lock(piVar17);
                                        if ((piVar13 == 0x8) || (piVar13[6] != 0)) {
                                            _raw_spin_unlock(piVar17);
                                        }
                                        else {
                                            if (((piVar13[3] == NULL) || (iVar7 = *piVar13[3], iVar7 == 0)) ||
                                               (iVar7 = *(iVar7 + 0x48), iVar7 == 0)) {
                                                uVar6 = 0xffffffff;
                                            }
                                            else {
                                                uVar6 = *(iVar7 + 0x5dc);
                                            }
                                            uVar3 = *(piVar13 + 0x6c);
                                            uVar16 = *(piVar13 + 8) & 1;
                                            _raw_spin_unlock(piVar17);
                                            _printk(0x8000271,uVar3,uVar6,0xffffffff,0xffffffff,uVar16);
                                        }
                                        if (uVar16 == 1) {
                                            iVar10 = 3;
                                            goto code_r0x08001580;
                                        }
                                    }
                                }
                            }
                            for (iVar7 = rb_first(piVar15 + 2); iVar7 != 0; iVar7 = rb_next(iVar7)) {
                                if (*(iVar7 + 400) != 0) {
                                    piVar13 = iVar7 + -8;
                                    piVar1 = iVar7 + 0x40;
                                    if (*piVar1 != piVar1) {
                                        for (piVar17 = *piVar1; piVar17 != piVar1; piVar17 = *piVar17) {
                                            if ((piVar17 != NULL) && (piVar17[2] == 1)) {
                                                piVar2 = piVar17 + 0x11;
                                                _raw_spin_lock(piVar2);
                                                if ((piVar17 == 0x8) || (piVar17[6] != piVar13)) {
                                                    _raw_spin_unlock(piVar2);
                                                }
                                                else {
                                                    if (((piVar17[3] == NULL) || (iVar8 = *piVar17[3], iVar8 == 0)) ||
                                                       (iVar8 = *(iVar8 + 0x48), iVar8 == 0)) {
                                                        uVar6 = 0xffffffff;
                                                    }
                                                    else {
                                                        uVar6 = *(iVar8 + 0x5dc);
                                                    }
                                                    uVar4 = *(piVar17 + 8);
                                                    uVar3 = *(piVar17 + 0x6c);
                                                    if (piVar13 == NULL) {
                                                        uVar14 = 0xffffffff;
                                                        uVar12 = 0xffffffff;
                                                    }
                                                    else {
                                                        uVar14 = *(*piVar13 + 0x40);
                                                        __rcu_read_lock();
                                                        uVar12 = *(*(*(piVar17[6] + 0x198) + 0x790) + 4);
                                                        __rcu_read_unlock();
                                                    }
                                                    uVar16 = uVar4 & 1;
                                                    _raw_spin_unlock(piVar2);
                                                    _printk(0x80001a5,uVar3,uVar6,uVar12,uVar14,uVar16);
                                                }
                                                if (uVar16 == 1) {
                                                    iVar10 = 2;
                                                    goto code_r0x08001580;
                                                }
                                            }
                                        }
                                    }
                                    iVar8 = *(iVar7 + 0x38);
                                    if (iVar8 != 0) {
                                        _raw_spin_lock(iVar8 + 0x90);
                                        iVar9 = *(iVar7 + 0x38);
                                        if (*(iVar9 + 0x38) == piVar13) {
                                            if (((*(iVar8 + 0x20) == NULL) || (iVar9 = **(iVar8 + 0x20), iVar9 == 0))
                                               || (iVar9 = *(iVar9 + 0x48), iVar9 == 0)) {
                                                uVar6 = 0xffffffff;
                                            }
                                            else {
                                                uVar6 = *(iVar9 + 0x5dc);
                                            }
                                            uVar4 = *(iVar8 + 0x48);
                                            uVar3 = *(iVar8 + 0x74);
                                            if (*(iVar8 + 0x38) == NULL) {
                                                uVar14 = 0xffffffff;
                                                uVar12 = 0xffffffff;
                                            }
                                            else {
                                                uVar14 = *(**(iVar8 + 0x38) + 0x40);
                                                __rcu_read_lock();
                                                uVar12 = *(*(*(*(iVar8 + 0x38) + 0x198) + 0x790) + 4);
                                                __rcu_read_unlock();
                                            }
                                            _printk(0x800020c,uVar3,uVar6,uVar12,uVar14,uVar4 & 1);
                                            if ((uVar4 & 1) != 0) {
                                                _raw_spin_unlock(*(iVar7 + 0x38) + 0x90);
                                                iVar10 = 4;
                                                goto code_r0x08001580;
                                            }
                                            uVar16 = 0;
                                            iVar9 = *(iVar7 + 0x38);
                                        }
                                        _raw_spin_unlock(iVar9 + 0x90);
                                    }
                                }
                            }
                            iVar10 = 0;
code_r0x08001580:
                            _raw_spin_unlock(piVar15 + 0x49);
                        }
                        uVar11 = iVar10 == 0 & uVar11;
                    }
                }
                piVar15 = *piVar15;
            } while (piVar15 != NULL);
        }
        pcVar5 = _segment.ehdr;
        __cfi_slowpath_diag(0x29d8b9b080e6376b,_segment.ehdr,0x8000100);
        iVar7 = sp_el0;
        (*pcVar5)(param_1,iVar7,0,*(iVar7 + 0x5d8),~uVar11 & 1);
        mutex_unlock(_segment.ehdr);
    }
    return;
}


// ===== sym.oem_register_binder_hook.cfi_jt @ 0x08001198 (size 8) =====

void sym.oem_register_binder_hook.cfi_jt(ulong *param_1)

{
    if (param_1 != NULL) {
        *0x8000110 = param_1[3];
        *0x8000118 = param_1[4];
        *0x8000120 = param_1[5];
        *0x8000128 = param_1[6];
        _obj.oem_binder_hook_set = *param_1;
        *0x8000100 = param_1[1];
        *0x8000108 = param_1[2];
    }
    return;
}


// ===== sym.query_binder_app_stat @ 0x080011a0 (size 1164) =====

void sym.query_binder_app_stat(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    uint8_t uVar4;
    code *pcVar5;
    uint uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int iVar10;
    uint8_t uVar11;
    uint uVar12;
    int64_t *piVar13;
    uint uVar14;
    int64_t *piVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != NULL) {
        mutex_lock(_segment.ehdr);
        piVar15 = *_segment.ehdr;
        if (piVar15 == NULL) {
            uVar11 = 1;
        }
        else {
            uVar11 = 1;
            do {
                if (piVar15[9] != 0) {
                    __rcu_read_lock();
                    iVar10 = *(*(piVar15[9] + 0x790) + 4);
                    __rcu_read_unlock();
                    if (iVar10 == arg1) {
                        if ((_segment.ehdr == NULL) || (piVar15[9] == 0)) {
                            iVar10 = 0;
                        }
                        else {
                            __rcu_read_lock();
                            __rcu_read_unlock(*(piVar15[9] + 0x790));
                            _raw_spin_lock(piVar15 + 0x49);
                            if ((piVar15[9] == 0) || (piVar1 = piVar15 + 0x12, piVar1 == *piVar1)) {
                                uVar16 = 0xffffffff;
                            }
                            else {
                                __rcu_read_lock();
                                __rcu_read_unlock(*(piVar15[9] + 0x790));
                                uVar16 = 0xffffffff;
                                for (piVar13 = piVar15[0x12]; piVar13 != piVar1; piVar13 = *piVar13) {
                                    if ((piVar13 != NULL) && (piVar13[2] == 1)) {
                                        piVar17 = piVar13 + 0x11;
                                        _raw_spin_lock(piVar17);
                                        if ((piVar13 == 0x8) || (piVar13[6] != 0)) {
                                            _raw_spin_unlock(piVar17);
                                        }
                                        else {
                                            if (((piVar13[3] == NULL) || (iVar7 = *piVar13[3], iVar7 == 0)) ||
                                               (iVar7 = *(iVar7 + 0x48), iVar7 == 0)) {
                                                uVar6 = 0xffffffff;
                                            }
                                            else {
                                                uVar6 = *(iVar7 + 0x5dc);
                                            }
                                            uVar3 = *(piVar13 + 0x6c);
                                            uVar16 = *(piVar13 + 8) & 1;
                                            _raw_spin_unlock(piVar17);
                                            _printk(0x8000271,uVar3,uVar6,0xffffffff,0xffffffff,uVar16);
                                        }
                                        if (uVar16 == 1) {
                                            iVar10 = 3;
                                            goto code_r0x08001580;
                                        }
                                    }
                                }
                            }
                            for (iVar7 = rb_first(piVar15 + 2); iVar7 != 0; iVar7 = rb_next(iVar7)) {
                                if (*(iVar7 + 400) != 0) {
                                    piVar13 = iVar7 + -8;
                                    piVar1 = iVar7 + 0x40;
                                    if (*piVar1 != piVar1) {
                                        for (piVar17 = *piVar1; piVar17 != piVar1; piVar17 = *piVar17) {
                                            if ((piVar17 != NULL) && (piVar17[2] == 1)) {
                                                piVar2 = piVar17 + 0x11;
                                                _raw_spin_lock(piVar2);
                                                if ((piVar17 == 0x8) || (piVar17[6] != piVar13)) {
                                                    _raw_spin_unlock(piVar2);
                                                }
                                                else {
                                                    if (((piVar17[3] == NULL) || (iVar8 = *piVar17[3], iVar8 == 0)) ||
                                                       (iVar8 = *(iVar8 + 0x48), iVar8 == 0)) {
                                                        uVar6 = 0xffffffff;
                                                    }
                                                    else {
                                                        uVar6 = *(iVar8 + 0x5dc);
                                                    }
                                                    uVar4 = *(piVar17 + 8);
                                                    uVar3 = *(piVar17 + 0x6c);
                                                    if (piVar13 == NULL) {
                                                        uVar14 = 0xffffffff;
                                                        uVar12 = 0xffffffff;
                                                    }
                                                    else {
                                                        uVar14 = *(*piVar13 + 0x40);
                                                        __rcu_read_lock();
                                                        uVar12 = *(*(*(piVar17[6] + 0x198) + 0x790) + 4);
                                                        __rcu_read_unlock();
                                                    }
                                                    uVar16 = uVar4 & 1;
                                                    _raw_spin_unlock(piVar2);
                                                    _printk(0x80001a5,uVar3,uVar6,uVar12,uVar14,uVar16);
                                                }
                                                if (uVar16 == 1) {
                                                    iVar10 = 2;
                                                    goto code_r0x08001580;
                                                }
                                            }
                                        }
                                    }
                                    iVar8 = *(iVar7 + 0x38);
                                    if (iVar8 != 0) {
                                        _raw_spin_lock(iVar8 + 0x90);
                                        iVar9 = *(iVar7 + 0x38);
                                        if (*(iVar9 + 0x38) == piVar13) {
                                            if (((*(iVar8 + 0x20) == NULL) || (iVar9 = **(iVar8 + 0x20), iVar9 == 0))
                                               || (iVar9 = *(iVar9 + 0x48), iVar9 == 0)) {
                                                uVar6 = 0xffffffff;
                                            }
                                            else {
                                                uVar6 = *(iVar9 + 0x5dc);
                                            }
                                            uVar4 = *(iVar8 + 0x48);
                                            uVar3 = *(iVar8 + 0x74);
                                            if (*(iVar8 + 0x38) == NULL) {
                                                uVar14 = 0xffffffff;
                                                uVar12 = 0xffffffff;
                                            }
                                            else {
                                                uVar14 = *(**(iVar8 + 0x38) + 0x40);
                                                __rcu_read_lock();
                                                uVar12 = *(*(*(*(iVar8 + 0x38) + 0x198) + 0x790) + 4);
                                                __rcu_read_unlock();
                                            }
                                            _printk(0x800020c,uVar3,uVar6,uVar12,uVar14,uVar4 & 1);
                                            if ((uVar4 & 1) != 0) {
                                                _raw_spin_unlock(*(iVar7 + 0x38) + 0x90);
                                                iVar10 = 4;
                                                goto code_r0x08001580;
                                            }
                                            uVar16 = 0;
                                            iVar9 = *(iVar7 + 0x38);
                                        }
                                        _raw_spin_unlock(iVar9 + 0x90);
                                    }
                                }
                            }
                            iVar10 = 0;
code_r0x08001580:
                            _raw_spin_unlock(piVar15 + 0x49);
                        }
                        uVar11 = iVar10 == 0 & uVar11;
                    }
                }
                piVar15 = *piVar15;
            } while (piVar15 != NULL);
        }
        pcVar5 = _segment.ehdr;
        __cfi_slowpath_diag(0x29d8b9b080e6376b,_segment.ehdr,0x8000100);
        iVar7 = sp_el0;
        (*pcVar5)(arg1 & 0xffffffff,iVar7,0,*(iVar7 + 0x5d8),~uVar11 & 1);
        mutex_unlock(_segment.ehdr);
    }
    return;
}


// ===== sym.binder_buff_owner @ 0x08001648 (size 28) =====

ulong sym.binder_buff_owner(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (arg1 != 0) {
        uVar1 = *(arg1 + -0x1c8);
    }
    return uVar1;
}


// ===== sym.mi_binder_alloc_new_buf_locked @ 0x08001664 (size 176) =====

void sym.mi_binder_alloc_new_buf_locked(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int in_w3;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if ((in_w3 != 0) && (_segment.ehdr != NULL)) {
        if ((arg2 != 0) && (*arg2 < _obj.oem_binder_hook_set * (arg1 + 0x68) || *arg2 < *0x8000100)) {
            iVar3 = *(arg2 + -0x1c8);
            if (iVar3 != 0) {
                __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,0x8000120);
                iVar1 = sp_el0;
                (*pcVar2)(iVar3,iVar1,*(iVar1 + 0x5d8),0,0);
            }
        }
    }
    return;
}


// ===== sym.mi_binder_replay @ 0x08001714 (size 148) =====

void sym.mi_binder_replay(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if ((_segment.ehdr != NULL) && (*(arg1 + 0x48) != 0)) {
        __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,obj.bgot);
        (*pcVar1)(*(arg1 + 0x48),*(arg2 + 0x48),*(arg3 + 0x30),*(in_x4 + 0x14) & 1,*(in_x4 + 0x10));
    }
    return;
}


// ===== sym.mi_binder_transaction @ 0x080017a8 (size 152) =====

void sym.mi_binder_transaction(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (((arg1 != 0) && (_segment.ehdr != NULL)) && (*(arg1 + 0x48) != 0)) {
        __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,0x8000160);
        (*pcVar1)(*(arg1 + 0x48),*(arg2 + 0x48),*(arg3 + 0x30),*(in_x4 + 0x14) & 1,*(in_x4 + 0x10));
    }
    return;
}


// ===== sym.mi_binder_wait_for_work @ 0x08001840 (size 420) =====

uchar  [16] sym.mi_binder_wait_for_work(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x40) == 0) {
        return noname_1;
    }
    _raw_spin_lock(*(arg1 + 0x40) + 0x90);
    if ((((_segment.ehdr == NULL) || (*(arg1 + 400) != '\0')) || (*(arg1 + 0x40) == 0)) ||
       ((iVar7 = *(*(arg1 + 0x40) + 0x30), iVar7 == 0 || (iVar7 = *(iVar7 + 0x48), iVar7 == 0)))) {
        auVar8 = _raw_spin_unlock(*(arg1 + 0x40) + 0x90);
        return auVar8;
    }
    puVar1 = iVar7 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar2 + 1 | uVar2)) goto code_r0x080018ec;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x080018ec:
    _raw_spin_unlock(*(arg1 + 0x40) + 0x90);
    pcVar5 = _segment.ehdr;
    __cfi_slowpath_diag(0xef8d35eee3b03141,_segment.ehdr,0x8000180);
    auVar8 = (*pcVar5)(iVar7,*(arg2 + 0x48),*(arg1 + 0x30),*(*(arg1 + 0x40) + 0x5c) & 1,*(*(arg1 + 0x40) + 0x58));
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar2 = *puVar1;
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = uVar2 - 1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (uVar2 == 1) {
        DataMemoryBarrier(2,1);
        auVar8 = __put_task_struct(iVar7);
    }
    else if (uVar2 < 1) {
        auVar8 = refcount_warn_saturate(puVar1,3);
    }
    return auVar8;
}


// ===== sym.mi_get_hhead_and_lock @ 0x080019e4 (size 56) =====

void sym.mi_get_hhead_and_lock(ulong noname_0,int64_t arg1,int64_t arg2)

{
    if ((obj.bgot & 1) == 0) {
        if (arg1 != 0) {
            _segment.ehdr = arg1;
        }
        if (arg2 != 0) {
            _segment.ehdr = arg2;
        }
        obj.bgot = 0x1;
    }
    return;
}


// ===== sym.oem_register_binder_hook @ 0x08001a1c (size 60) =====

void sym.oem_register_binder_hook(int64_t arg1)

{
    if (arg1 != 0) {
        *0x8000110 = *(arg1 + 0x18);
        *0x8000118 = *(arg1 + 0x20);
        *0x8000120 = *(arg1 + 0x28);
        *0x8000128 = *(arg1 + 0x30);
        _obj.oem_binder_hook_set = *arg1;
        *0x8000100 = *(arg1 + 8);
        *0x8000108 = *(arg1 + 0x10);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001a58 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001a9c

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
    //switch table (4 cases) at 0x80001a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001ab0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001ae4 (size 168) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000346);
    tracepoint_probe_register
              (__tracepoint_android_vh_binder_alloc_new_buf_locked,sym.mi_binder_alloc_new_buf_locked.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_reply,sym.mi_binder_replay.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_trans,sym.mi_binder_transaction.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_wait_for_work,sym.mi_binder_wait_for_work.cfi_jt,0);
    tracepoint_probe_register(__tracepoint_android_vh_binder_preset,sym.mi_get_hhead_and_lock.cfi_jt,0);
    return 0;
}

