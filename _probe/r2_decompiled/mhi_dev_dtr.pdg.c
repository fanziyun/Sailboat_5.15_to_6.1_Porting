// decompiled from mhi_dev_dtr by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x0800180c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x67f3a51ad5c16f72) {
        if (arg1 == -0x2648401b1c1d210c) {
            pcVar2 = sym.mhi_dtr_probe.90792509ddb502df4b0933820cd9d7b8.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1a1a0d18bf02f5ff) goto code_r0x080017cc;
            pcVar2 = sym.mhi_device_ioctl.cfi_jt;
        }
    }
    else if (arg1 < 0x791a5468d96d0f95) {
        if (arg1 == 0x67f3a51ad5c16f72) {
            pcVar2 = sym.mhi_dtr_status_cb.90792509ddb502df4b0933820cd9d7b8.cfi_jt;
        }
        else {
            if (arg1 != 0x6e9fb1c868c44dc4) goto code_r0x080017cc;
            pcVar2 = sym.mhi_dtr_remove.90792509ddb502df4b0933820cd9d7b8.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x791a5468d96d0f95) {
            if ((pcVar1 + -0x8001188 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080017cc;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080017cc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080017cc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001820);
    (*pcVar1)();
}


// ===== sym.mhi_dtr_status_cb.90792509ddb502df4b0933820cd9d7b8.cfi_jt @ 0x08001160 (size 8) =====

void sym.mhi_dtr_status_cb.90792509ddb502df4b0933820cd9d7b8.cfi_jt(ulong param_1,int param_2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0xb) {
        iVar1 = mhi_prepare_for_transfer(param_1,0);
        iVar2 = _segment.ehdr;
        if (iVar1 == 0) {
            *(_segment.ehdr + 0x20) = param_1;
            iVar2 = *(iVar2 + 0x28);
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
        }
        if (iVar2 != 0) {
            ipc_log_string(iVar2,"[I][%s] DTR channels start attempt returns: %d\n","mhi_dtr_status_cb",iVar1);
        }
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mhi_driver_unregister(obj.dtr_info);
    kfree(_segment.ehdr);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    uint *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
    if (_segment.ehdr == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        puVar2 = _segment.ehdr + 2;
        *_segment.ehdr = 0;
        __init_swait_queue_head(puVar2,"&x->wait",reloc.mhi_dtr_probe.90792509ddb502df4b0933820cd9d7b8.cfi_jt);
        uVar3 = __mhi_driver_register(obj.dtr_info,obj.__this_module);
    }
    return uVar3;
}


// ===== sym.mhi_dtr_probe.90792509ddb502df4b0933820cd9d7b8.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.mhi_dtr_probe.90792509ddb502df4b0933820cd9d7b8.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x98);
    if (iVar1 == 0) {
        iVar1 = *(param_1 + 0x28);
    }
    iVar1 = ipc_log_context_create(5,iVar1,0);
    *(_segment.ehdr + 0x28) = iVar1;
    if (iVar1 != 0) {
        ipc_log_string(iVar1,"[I][%s] Probe complete\n","mhi_dtr_probe");
    }
    return 0;
}


// ===== sym.mhi_dtr_remove.90792509ddb502df4b0933820cd9d7b8.cfi_jt @ 0x08001180 (size 8) =====

void sym.mhi_dtr_remove.90792509ddb502df4b0933820cd9d7b8.cfi_jt(void)

{
    *(_segment.ehdr + 0x20) = 0;
    return;
}


// ===== sym.mhi_dtr_ul_xfer_cb.90792509ddb502df4b0933820cd9d7b8.cfi_jt @ 0x08001188 (size 8) =====

void sym.mhi_dtr_ul_xfer_cb.90792509ddb502df4b0933820cd9d7b8.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x28) != 0) {
        ipc_log_string(*(_segment.ehdr + 0x28),"[I][%s] Received with status: %d\n","mhi_dtr_ul_xfer_cb",
                       *(param_2 + 0x14));
    }
    if (*(param_2 + 0x14) == 0) {
        complete(_segment.ehdr);
    }
    return;
}


// ===== sym.mhi_dtr_dl_xfer_cb.90792509ddb502df4b0933820cd9d7b8.cfi_jt @ 0x08001190 (size 8) =====

void sym.mhi_dtr_dl_xfer_cb.90792509ddb502df4b0933820cd9d7b8.cfi_jt(int64_t param_1,ulong *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2[1] == 0x14) {
        uVar4 = *(param_1 + 0x10);
        puVar5 = *param_2;
        if (*(_segment.ehdr + 0x28) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x28),"[I][%s] preamble: 0x%x msg_id: %u dest_id: %u msg: 0x%x\n",
                           "mhi_dtr_dl_xfer_cb",*puVar5,puVar5[1],puVar5[2],puVar5[4]);
        }
        iVar3 = mhi_get_device_for_channel(uVar4,*(puVar5 + 2));
        if (iVar3 != 0) {
            _raw_spin_lock_irq(iVar3 + 0x330);
            uVar1 = *(iVar3 + 0x3d0) & 0xfffffe3f;
            *(iVar3 + 0x3d0) = uVar1;
            uVar2 = puVar5[4];
            if ((uVar2 & 1) != 0) {
                uVar1 = uVar1 | 0x40;
                *(iVar3 + 0x3d0) = uVar1;
                uVar2 = puVar5[4];
            }
            if ((uVar2 >> 1 & 1) != 0) {
                uVar1 = uVar1 | 0x100;
                *(iVar3 + 0x3d0) = uVar1;
                uVar2 = puVar5[4];
            }
            if ((uVar2 >> 3 & 1) != 0) {
                *(iVar3 + 0x3d0) = uVar1 | 0x80;
            }
            _raw_spin_unlock_irq(iVar3 + 0x330);
            mhi_notify(iVar3,10);
        }
    }
    else {
        _dev_err(param_1 + 0x28,"[E][%s] Unexpected length %zu received\n","mhi_dtr_dl_xfer_cb");
        if (*(_segment.ehdr + 0x28) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x28),"[E][%s] Unexpected length %zu received\n","mhi_dtr_dl_xfer_cb",
                           param_2[1]);
        }
    }
    return;
}


// ===== sym.mhi_device_ioctl.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.mhi_device_ioctl.cfi_jt(int64_t param_1,int param_2,uint32_t *param_3)

{
    ulong *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint *puVar5;
    bool bVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *puVar9;
    ulong uVar10;
    uint32_t *puVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 8) == 0) {
        _dev_err(param_1 + 0x28,"[E][%s] %s request denied. DTR channels not running\n","mhi_device_ioctl",
                 *(param_1 + 8));
        if (*(_segment.ehdr + 10) == 0) {
            uVar8 = 0xfffffffffffffffb;
        }
        else {
            ipc_log_string(*(_segment.ehdr + 10),"[E][%s] %s request denied. DTR channels not running\n",
                           "mhi_device_ioctl",*(param_1 + 8));
            uVar8 = 0xfffffffffffffffb;
        }
    }
    else if (param_2 == 0x5418) {
        puVar9 = sp_el0;
        iVar12 = *(param_1 + 0x10);
        uVar8 = (param_3 << 8) >> 8;
        if (((*(puVar9 + 0x3e) >> 5 & 1) != 0) || (puVar11 = param_3, (*puVar9 >> 0x1a & 1) != 0)) {
            puVar11 = param_3 & uVar8;
        }
        bVar6 = 0xfffffffffffffffb < puVar11;
        puVar11 = puVar11 + 1;
        uVar2 = 0;
        if (!bVar6 || puVar11 == NULL) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar6) {
            puVar11 = 0xffffffffffffffff;
        }
        if ((CARRY8(puVar11,~uVar2) || CARRY8(puVar11 + ~uVar2,bVar6)) && puVar11 != uVar2 + !bVar6) {
            iVar7 = -0xe;
        }
        else {
            if ((param_3 & uVar8 & 0xffffff8000000000) != 0) {
                param_3 = NULL;
            }
            if ((__dev_err >> 0x18 & 1) == 0) {
                uVar8 = daif;
                if ((uVar8 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar9[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar9[1];
                InstructionSynchronizationBarrier();
                daif = uVar8;
            }
            uVar4 = *param_3;
            if ((__dev_err >> 0x18 & 1) == 0) {
                uVar8 = daif;
                if ((uVar8 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar8;
            }
            if ((*(param_1 + 0x3d0) & 0xfffffe3f) == (uVar4 & 6)) {
                iVar7 = 0;
            }
            else {
                iVar3 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar3 = 0x30;
                }
                puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x14);
                if (puVar9 == NULL) {
                    iVar7 = -0xc;
                }
                else {
                    *(puVar9 + 1) = *(param_1 + 0x3bc);
                    *(puVar9 + 0xc) = 4;
                    *puVar9 = 0x104c525443;
                    if ((uVar4 >> 1 & 1) != 0) {
                        *(puVar9 + 2) = *(puVar9 + 2) | 1;
                    }
                    if ((uVar4 >> 2 & 1) != 0) {
                        *(puVar9 + 2) = *(puVar9 + 2) | 2;
                    }
                    puVar1 = _segment.ehdr + 8;
                    *_segment.ehdr = 0;
                    iVar7 = mhi_queue_buf(*puVar1,1,puVar9,0x14,2);
                    puVar5 = _segment.ehdr;
                    if (iVar7 == 0) {
                        uVar10 = __msecs_to_jiffies(*(iVar12 + 0x178));
                        iVar7 = wait_for_completion_timeout(puVar5,uVar10);
                        if (iVar7 == 0) {
                            _dev_err(param_1 + 0x28,"[E][%s] Failed to receive transfer callback\n","mhi_dtr_tiocmset"
                                    );
                            if (*(_segment.ehdr + 10) != 0) {
                                ipc_log_string(*(_segment.ehdr + 10),"[E][%s] Failed to receive transfer callback\n",
                                               "mhi_dtr_tiocmset");
                            }
                            iVar7 = -5;
                        }
                        else {
                            if (*(_segment.ehdr + 10) != 0) {
                                ipc_log_string(*(_segment.ehdr + 10),"[I][%s] DTR TIOCMSET update done for %s\n",
                                               "mhi_dtr_tiocmset",*(param_1 + 8));
                            }
                            _raw_spin_lock_irq(param_1 + 0x330);
                            *(param_1 + 0x3d0) = *(param_1 + 0x3d0) & 0xfffffff9 | uVar4 & 6;
                            _raw_spin_unlock_irq(param_1 + 0x330);
                            iVar7 = 0;
                        }
                    }
                }
                kfree(puVar9);
            }
        }
        uVar8 = iVar7;
    }
    else if (param_2 == 0x5415) {
        uVar8 = *(param_1 + 0x3d0);
    }
    else {
        uVar8 = 0xfffffffffffffdfd;
    }
    return uVar8;
}


// ===== sym.mhi_device_ioctl @ 0x080011a0 (size 864) =====

uint64_t sym.mhi_device_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint *puVar5;
    bool bVar6;
    int iVar7;
    uint64_t uVar8;
    ulong *puVar9;
    ulong uVar10;
    uint64_t uVar11;
    ulong *in_x18;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 8) == 0) {
        _dev_err(arg1 + 0x28,"[E][%s] %s request denied. DTR channels not running\n","mhi_device_ioctl",*(arg1 + 8));
        if (*(_segment.ehdr + 10) == 0) {
            uVar8 = 0xfffffffffffffffb;
        }
        else {
            ipc_log_string(*(_segment.ehdr + 10),"[E][%s] %s request denied. DTR channels not running\n",
                           "mhi_device_ioctl",*(arg1 + 8));
            uVar8 = 0xfffffffffffffffb;
        }
    }
    else if (arg2 == 0x5418) {
        puVar9 = sp_el0;
        iVar12 = *(arg1 + 0x10);
        uVar8 = (arg3 << 8) >> 8;
        if (((*(puVar9 + 0x3e) >> 5 & 1) != 0) || (uVar11 = arg3, (*puVar9 >> 0x1a & 1) != 0)) {
            uVar11 = arg3 & uVar8;
        }
        bVar6 = 0xfffffffffffffffb < uVar11;
        uVar11 = uVar11 + 4;
        uVar2 = 0;
        if (!bVar6 || uVar11 == 0) {
            uVar2 = 0x7fffffffff;
        }
        if (bVar6) {
            uVar11 = 0xffffffffffffffff;
        }
        if ((CARRY8(uVar11,~uVar2) || CARRY8(uVar11 + ~uVar2,bVar6)) && uVar11 != uVar2 + !bVar6) {
            iVar7 = -0xe;
        }
        else {
            if ((arg3 & uVar8 & 0xffffff8000000000) != 0) {
                arg3 = 0;
            }
            if ((__dev_err >> 0x18 & 1) == 0) {
                uVar8 = daif;
                if ((uVar8 & 0x80) == 0) {
                    uVar11 = daif;
                    daif = uVar11 | 0xc0;
                }
                uVar11 = ttbr1_el1;
                ttbr1_el1 = puVar9[1] & 0xffff000000000000 | uVar11 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar9[1];
                InstructionSynchronizationBarrier();
                daif = uVar8;
            }
            uVar4 = *arg3;
            if ((__dev_err >> 0x18 & 1) == 0) {
                uVar8 = daif;
                if ((uVar8 & 0x80) == 0) {
                    uVar11 = daif;
                    daif = uVar11 | 0xc0;
                }
                uVar11 = ttbr1_el1;
                ttbr0_el1 = (uVar11 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar11 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar8;
            }
            if ((*(arg1 + 0x3d0) & 0xfffffe3f) == (uVar4 & 6)) {
                iVar7 = 0;
            }
            else {
                iVar3 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar3 = 0x30;
                }
                puVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x14);
                if (puVar9 == NULL) {
                    iVar7 = -0xc;
                }
                else {
                    *(puVar9 + 1) = *(arg1 + 0x3bc);
                    *(puVar9 + 0xc) = 4;
                    *puVar9 = 0x104c525443;
                    if ((uVar4 >> 1 & 1) != 0) {
                        *(puVar9 + 2) = *(puVar9 + 2) | 1;
                    }
                    if ((uVar4 >> 2 & 1) != 0) {
                        *(puVar9 + 2) = *(puVar9 + 2) | 2;
                    }
                    puVar1 = _segment.ehdr + 8;
                    *_segment.ehdr = 0;
                    iVar7 = mhi_queue_buf(*puVar1,1,puVar9,0x14,2);
                    puVar5 = _segment.ehdr;
                    if (iVar7 == 0) {
                        uVar10 = __msecs_to_jiffies(*(iVar12 + 0x178));
                        iVar7 = wait_for_completion_timeout(puVar5,uVar10);
                        if (iVar7 == 0) {
                            _dev_err(arg1 + 0x28,"[E][%s] Failed to receive transfer callback\n","mhi_dtr_tiocmset");
                            if (*(_segment.ehdr + 10) != 0) {
                                ipc_log_string(*(_segment.ehdr + 10),"[E][%s] Failed to receive transfer callback\n",
                                               "mhi_dtr_tiocmset");
                            }
                            iVar7 = -5;
                        }
                        else {
                            if (*(_segment.ehdr + 10) != 0) {
                                ipc_log_string(*(_segment.ehdr + 10),"[I][%s] DTR TIOCMSET update done for %s\n",
                                               "mhi_dtr_tiocmset",*(arg1 + 8));
                            }
                            _raw_spin_lock_irq(arg1 + 0x330);
                            *(arg1 + 0x3d0) = *(arg1 + 0x3d0) & 0xfffffff9 | uVar4 & 6;
                            _raw_spin_unlock_irq(arg1 + 0x330);
                            iVar7 = 0;
                        }
                    }
                }
                kfree(puVar9);
            }
        }
        uVar8 = iVar7;
    }
    else if (arg2 == 0x5415) {
        uVar8 = *(arg1 + 0x3d0);
    }
    else {
        uVar8 = 0xfffffffffffffdfd;
    }
    return uVar8;
}


// ===== sym.mhi_dtr_probe @ 0x0800153c (size 96) =====

ulong sym.mhi_dtr_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x98);
    if (iVar1 == 0) {
        iVar1 = *(arg1 + 0x28);
    }
    iVar1 = ipc_log_context_create(5,iVar1,0);
    *(_segment.ehdr + 0x28) = iVar1;
    if (iVar1 != 0) {
        ipc_log_string(iVar1,"[I][%s] Probe complete\n","mhi_dtr_probe");
    }
    return 0;
}


// ===== sym.mhi_dtr_remove @ 0x0800159c (size 24) =====

void sym.mhi_dtr_remove(void)

{
    *(_segment.ehdr + 0x20) = 0;
    return;
}


// ===== sym.mhi_dtr_ul_xfer_cb @ 0x080015b4 (size 100) =====

void sym.mhi_dtr_ul_xfer_cb(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(_segment.ehdr + 0x28) != 0) {
        ipc_log_string(*(_segment.ehdr + 0x28),"[I][%s] Received with status: %d\n","mhi_dtr_ul_xfer_cb",
                       *(arg1 + 0x14));
    }
    if (*(arg1 + 0x14) == 0) {
        complete(_segment.ehdr);
    }
    return;
}


// ===== sym.mhi_dtr_dl_xfer_cb @ 0x08001618 (size 312) =====

void sym.mhi_dtr_dl_xfer_cb(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong uVar4;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 8) == 0x14) {
        uVar4 = *(arg1 + 0x10);
        puVar5 = *arg2;
        if (*(_segment.ehdr + 0x28) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x28),"[I][%s] preamble: 0x%x msg_id: %u dest_id: %u msg: 0x%x\n",
                           "mhi_dtr_dl_xfer_cb",*puVar5,puVar5[1],puVar5[2],puVar5[4]);
        }
        iVar3 = mhi_get_device_for_channel(uVar4,*(puVar5 + 2));
        if (iVar3 != 0) {
            _raw_spin_lock_irq(iVar3 + 0x330);
            uVar1 = *(iVar3 + 0x3d0) & 0xfffffe3f;
            *(iVar3 + 0x3d0) = uVar1;
            uVar2 = puVar5[4];
            if ((uVar2 & 1) != 0) {
                uVar1 = uVar1 | 0x40;
                *(iVar3 + 0x3d0) = uVar1;
                uVar2 = puVar5[4];
            }
            if ((uVar2 >> 1 & 1) != 0) {
                uVar1 = uVar1 | 0x100;
                *(iVar3 + 0x3d0) = uVar1;
                uVar2 = puVar5[4];
            }
            if ((uVar2 >> 3 & 1) != 0) {
                *(iVar3 + 0x3d0) = uVar1 | 0x80;
            }
            _raw_spin_unlock_irq(iVar3 + 0x330);
            mhi_notify(iVar3,10);
        }
    }
    else {
        _dev_err(arg1 + 0x28,"[E][%s] Unexpected length %zu received\n","mhi_dtr_dl_xfer_cb");
        if (*(_segment.ehdr + 0x28) != 0) {
            ipc_log_string(*(_segment.ehdr + 0x28),"[E][%s] Unexpected length %zu received\n","mhi_dtr_dl_xfer_cb",
                           *(arg2 + 8));
        }
    }
    return;
}


// ===== sym.mhi_dtr_status_cb @ 0x08001750 (size 120) =====

void sym.mhi_dtr_status_cb(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0xb) {
        iVar1 = mhi_prepare_for_transfer(arg1,0);
        iVar2 = _segment.ehdr;
        if (iVar1 == 0) {
            *(_segment.ehdr + 0x20) = arg1;
            iVar2 = *(iVar2 + 0x28);
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
        }
        if (iVar2 != 0) {
            ipc_log_string(iVar2,"[I][%s] DTR channels start attempt returns: %d\n","mhi_dtr_status_cb",iVar1);
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080017c8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800180c

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
    //switch table (4 cases) at 0x8000200
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001820);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001850 (size 144) =====

ulong sym.init_module(void)

{
    int64_t iVar1;
    uint *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x30);
    if (_segment.ehdr == NULL) {
        uVar3 = 0xfffffff4;
    }
    else {
        puVar2 = _segment.ehdr + 2;
        *_segment.ehdr = 0;
        __init_swait_queue_head(puVar2,"&x->wait",reloc.mhi_dtr_probe.90792509ddb502df4b0933820cd9d7b8.cfi_jt);
        uVar3 = __mhi_driver_register(obj.dtr_info,obj.__this_module);
    }
    return uVar3;
}


// ===== sym.cleanup_module @ 0x080018e0 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mhi_driver_unregister(obj.dtr_info);
    kfree(_segment.ehdr);
    return;
}

