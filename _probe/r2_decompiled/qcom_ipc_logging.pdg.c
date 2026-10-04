// decompiled from qcom_ipc_logging by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 980) =====

//WARNING: Switch with 1 destination removed at 0x08003378

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x273499a095aac74d) {
        if (arg1 < -0x2ac316d8df914f8) {
            if (arg1 < -0x5cfd6557edd5b142) {
                if (arg1 != -0x71cce5bdbf12a7fc) {
                    if (arg1 != -0x6fbbb0586a4644af) goto code_r0x08003338;
                    pcVar2 = sym.tsv_qtimer_write.cfi_jt;
code_r0x08001388:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x08003338;
                }
                pcVar2 = sym.ipc_log_write.cfi_jt;
            }
            else if (arg1 == -0x5cfd6557edd5b142) {
                pcVar2 = sym.ipc_log_extract.cfi_jt;
            }
            else if (arg1 == -0x212517d39859bebe) {
                pcVar2 = sym.add_deserialization_func.cfi_jt;
            }
            else {
                if (arg1 != -0x8dc801903aca538) goto code_r0x08003338;
                pcVar2 = sym.simple_open.cfi_jt;
            }
        }
        else if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 == -0x2ac316d8df914f8) {
                pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08003338;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.debug_read.9ce10bdf909048cf8a7eb9426c2064e0.cfi_jt;
                goto code_r0x08001388;
            }
            if (arg1 != 0x8cdd24c970da729) {
                if ((arg1 == 0x18161ff276d45f88) && ((pcVar1 + -0x8001490 >> 3 | pcVar1 << 0x3d) < 4)) {
                    return;
                }
                goto code_r0x08003338;
            }
            pcVar2 = sym.ipc_log_context_create.cfi_jt;
        }
    }
    else if (arg1 < 0x555896349ff09714) {
        if (arg1 < 0x3dd3aae8729ef37e) {
            if (arg1 == 0x273499a095aac74d) {
                pcVar2 = sym.tsv_byte_array_write.cfi_jt;
            }
            else {
                if (arg1 != 0x3b4bb71f56d25d23) goto code_r0x08003338;
                pcVar2 = sym.ipc_log_string.cfi_jt;
            }
        }
        else if (arg1 == 0x3dd3aae8729ef37e) {
            pcVar2 = sym.__typeid__ZTSFvP14encode_contextP14decode_contextE_global_addr;
        }
        else if (arg1 == 0x3fd9f486a1ddba16) {
            pcVar2 = sym.tsv_pointer_write.cfi_jt;
        }
        else {
            if (arg1 != 0x4b290dd163802510) goto code_r0x08003338;
            pcVar2 = sym.msg_encode_end.cfi_jt;
        }
    }
    else if (arg1 < 0x70a5297d32a3f2ca) {
        if (arg1 == 0x555896349ff09714) {
            pcVar2 = sym.tsv_int32_write.cfi_jt;
        }
        else if (arg1 == 0x627198cbf0d0ada1) {
            pcVar2 = sym.create_ctx_debugfs.cfi_jt;
        }
        else {
            if (arg1 != 0x641d19c7be126e92) goto code_r0x08003338;
            pcVar2 = sym.ipc_log_context_destroy.cfi_jt;
        }
    }
    else if (arg1 == 0x70a5297d32a3f2ca) {
        pcVar2 = sym.tsv_int32_read.cfi_jt;
    }
    else {
        if (arg1 == 0x7e04a0fb7ad8bcd5) {
            pcVar2 = sym.cleanup_module.cfi_jt;
            goto code_r0x08001388;
        }
        if (arg1 != 0x7f1b87afe4d9521a) goto code_r0x08003338;
        pcVar2 = sym.msg_encode_start.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08003338:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800338c);
    (*pcVar1)();
}


// ===== sym.ipc_log_string.cfi_jt @ 0x080013e0 (size 8) =====

void sym.ipc_log_string.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    ushort uStack_140;
    ushort uStack_13e;
    ushort uStack_13c;
    ulong uStack_13a;
    ushort uStack_132;
    ulong uStack_130;
    uchar auStack_126 [234];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    memset(&uStack_140,0,0x104);
    if (param_1 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uStack_140 = 2;
        uStack_13a = sched_clock();
        uStack_13c = 0x801;
        InstructionSynchronizationBarrier();
        uStack_130 = cntvct_el0;
        uStack_132 = 0x805;
        uStack_3c = 0x16;
        iVar3 = vscnprintf(auStack_126,0xe7,param_2,&stack0xfffffffffffffe80);
        uVar5 = uStack_3c;
        if (uStack_3c - 0xfe < 0xffffff00) {
            _printk(0x8000630,"tsv_write_data");
        }
        else {
            if (0xff < uStack_3c) goto code_r0x08001cbc;
            *(&uStack_13e + uVar5) = 4;
            *(&uStack_13e + uVar5 + 1) = iVar3;
            uStack_3c = uStack_3c + 2;
        }
        uStack_3c = uStack_3c + iVar3;
        uStack_140 = CONCAT11(uStack_3c + -2,uStack_140);
        uStack_13e = uStack_140;
        sym.ipc_log_write(param_1,&uStack_140);
        uVar4 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x08001cbc:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001cc0);
    (*pcVar2)();
}


// ===== sym.add_deserialization_func.cfi_jt @ 0x080013e8 (size 8) =====

ulong sym.add_deserialization_func.cfi_jt(int64_t param_1,uint param_2,int64_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((param_1 != 0) && (param_3 != 0)) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x20);
        if (piVar3 == NULL) {
            uVar2 = 0xffffffe4;
        }
        else {
            uVar2 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
            _raw_spin_lock(param_1 + 0xa0);
            puVar5 = *(param_1 + 0x98);
            *(piVar3 + 2) = param_2;
            piVar3[3] = param_3;
            uVar4 = __list_add_valid(piVar3,puVar5,param_1 + 0x90);
            if ((uVar4 & 1) != 0) {
                *(param_1 + 0x98) = piVar3;
                *piVar3 = param_1 + 0x90;
                piVar3[1] = puVar5;
                *puVar5 = piVar3;
            }
            _raw_spin_unlock(param_1 + 0xa0);
            _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar2);
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.ipc_log_context_create.cfi_jt @ 0x080013f0 (size 8) =====

int64_t * sym.ipc_log_context_create.cfi_jt(uint32_t param_1,int64_t param_2,uint32_t param_3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong *puVar13;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    uVar4 = _raw_write_lock_irqsave(obj.context_list_lock_lha1);
    if (_segment.ehdr == NULL) {
        iVar8 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar8 = 0x30;
        }
        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xb20,0x10);
        _segment.ehdr = piVar5;
        if (piVar5 == NULL) {
            _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar4);
            _printk(0x800055c);
code_r0x08002e3c:
            piVar5 = NULL;
            goto code_r0x08002e40;
        }
        *piVar5 = piVar5;
        piVar5[1] = piVar5;
        piVar6 = _segment.ehdr;
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        piStack_80 = NULL;
        uStack_98 = 0;
        uStack_90 = 0;
        if (_segment.ehdr < 0x10) {
            scnprintf(&uStack_98,0xd,"%d_%s",_segment.ehdr & 0xffffffff,"ipc_log_ctxt_list");
            iVar8 = (piVar5 << 8) >> 8;
            uVar7 = iVar8 + 0x8000000000;
            iStack_78 = _simple_open + uVar7;
            if (uVar7 >> 0x26 != 0) {
                iStack_78 = iVar8 - __raw_spin_lock;
            }
            uStack_70 = 0x10;
            piStack_80 = piVar5;
            iVar3 = msm_minidump_add_region(&uStack_98);
            if (iVar3 < 0) {
                _printk(0x80005e8,"ipc_log_ctxt_list",piVar6 & 0xffffffff,iVar3);
            }
            else {
                _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
            }
        }
    }
    _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar4);
    _raw_read_lock_irq(obj.context_list_lock_lha1);
    piVar6 = _segment.ehdr;
    for (piVar5 = *_segment.ehdr; piVar6 != piVar5; piVar5 = *piVar5) {
        iVar3 = strcmp(piVar5 + -4,param_2);
        if (iVar3 == 0) {
            piVar5 = piVar5 + -7;
            _raw_read_unlock_irq(obj.context_list_lock_lha1);
            if (piVar5 != NULL) goto code_r0x08002e40;
            goto code_r0x08002a54;
        }
    }
    _raw_read_unlock_irq(obj.context_list_lock_lha1);
code_r0x08002a54:
    piVar5 = kmem_cache_alloc_trace(_sched_clock,0xdc0,0xd0);
    if (piVar5 == NULL) goto code_r0x08002e40;
    *(piVar5 + 0x15) = 0;
    __init_swait_queue_head(piVar5 + 0x16,"&x->wait",obj.init_completion.__key);
    piVar10 = piVar5 + 0x14;
    *piVar10 = 0;
    piVar12 = piVar5 + 9;
    piVar5[9] = piVar12;
    piVar5[10] = piVar12;
    piVar5[0x12] = piVar5 + 0x12;
    piVar5[0x13] = piVar5 + 0x12;
    uVar4 = _raw_spin_lock_irqsave(piVar10);
    piVar6 = _segment.ehdr;
    if ((param_3 >> 0x10 & 1) != 0) {
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        piStack_80 = NULL;
        uStack_98 = 0;
        uStack_90 = 0;
        if (_segment.ehdr < 0x10) {
            scnprintf(&uStack_98,0xd,"%d_%s",_segment.ehdr & 0xffffffff,"ipc_ctxt");
            iVar8 = (piVar5 << 8) >> 8;
            uVar7 = iVar8 + 0x8000000000;
            iStack_78 = _simple_open + uVar7;
            if (uVar7 >> 0x26 != 0) {
                iStack_78 = iVar8 - __raw_spin_lock;
            }
            uStack_70 = 0xd0;
            piStack_80 = piVar5;
            iVar3 = msm_minidump_add_region(&uStack_98);
            if (iVar3 < 0) {
                _printk(0x80005e8,"ipc_ctxt",piVar6 & 0xffffffff,iVar3);
            }
            else {
                _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
            }
        }
    }
    _raw_spin_unlock_irqrestore(piVar10,uVar4);
    if (param_1 < 1) {
        piVar6 = NULL;
    }
    else {
        uVar9 = 0;
        do {
            piVar6 = kmem_cache_alloc_trace(_sched_clock,0xdc0,0x1000);
            if (piVar6 == NULL) {
                if (uVar9 != 0) {
                    iVar3 = uVar9 + 1;
                    do {
                        piVar6 = *piVar12;
                        uVar7 = __list_del_entry_valid(piVar6);
                        if ((uVar7 & 1) != 0) {
                            iVar8 = *piVar6;
                            piVar10 = piVar6[1];
                            *(iVar8 + 8) = piVar10;
                            *piVar10 = iVar8;
                        }
                        *piVar6 = -0x2152ffffffffff00;
                        piVar6[1] = -0x2152fffffffffede;
                        kfree(piVar6 + -6);
                        iVar3 = iVar3 + -1;
                    } while (1 < iVar3);
                }
                kfree(piVar5);
                goto code_r0x08002e3c;
            }
            piVar6[2] = piVar5;
            *(piVar6 + 1) = uVar9 | 0x80000000;
            piVar6[5] = piVar5 - piVar6;
            *piVar6 = -0x52784425ad87bbdb;
            uVar4 = _raw_spin_lock_irqsave(piVar10);
            puVar13 = piVar5[10];
            piVar1 = piVar6 + 6;
            uVar7 = __list_add_valid(piVar1,puVar13,piVar12);
            if ((uVar7 & 1) != 0) {
                piVar5[10] = piVar1;
                piVar6[6] = piVar12;
                piVar6[7] = puVar13;
                *puVar13 = piVar1;
            }
            piVar1 = _segment.ehdr;
            if ((param_3 >> 0x10 & 1) != 0) {
                iStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                piStack_80 = NULL;
                uStack_98 = 0;
                uStack_90 = 0;
                if (_segment.ehdr < 0x10) {
                    scnprintf(&uStack_98,0xd,"%d_%s",_segment.ehdr & 0xffffffff,param_2);
                    iVar8 = (piVar6 << 8) >> 8;
                    uVar7 = iVar8 + 0x8000000000;
                    iStack_78 = _simple_open + uVar7;
                    if (uVar7 >> 0x26 != 0) {
                        iStack_78 = iVar8 - __raw_spin_lock;
                    }
                    uStack_70 = 0x1000;
                    piStack_80 = piVar6;
                    iVar3 = msm_minidump_add_region(&uStack_98);
                    if (iVar3 < 0) {
                        _printk(0x80005e8,param_2,piVar1 & 0xffffffff,iVar3);
                    }
                    else {
                        _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
                    }
                }
            }
            _raw_spin_unlock_irqrestore(piVar10,uVar4);
            uVar9 = uVar9 + 1;
        } while (param_1 != uVar9);
    }
    piVar5[2] = piVar5;
    *(piVar5 + 1) = 3;
    strscpy(piVar5 + 3,param_2,0x20);
    iVar8 = piVar5[9] + -0x30;
    piVar5[0xb] = iVar8;
    piVar5[0xc] = piVar6;
    piVar5[0xd] = iVar8;
    piVar5[0xe] = iVar8;
    piVar5[0xf] = iVar8;
    *(piVar5 + 0xc) = param_3;
    *(piVar5 + 0x10) = param_1 * 0xfb8;
    *(piVar5 + 0xe) = 0x48;
    *(piVar5 + 0x19) = 1;
    *(piVar5 + 0xcc) = 0;
    sym.create_ctx_debugfs(piVar5,param_2);
    *piVar5 = -0x25874452da78bbae;
    uVar4 = _raw_write_lock_irqsave(obj.context_list_lock_lha1);
    piVar12 = _segment.ehdr;
    piVar6 = piVar5 + 7;
    if (((param_3 >> 0x10 & 1) == 0) || (0xf < _segment.ehdr)) {
        piVar10 = _segment.ehdr[1];
        uVar7 = __list_add_valid(piVar6,piVar10,_segment.ehdr);
        if ((uVar7 & 1) != 0) {
            piVar12[1] = piVar6;
            piVar5[7] = piVar12;
            piVar5[8] = piVar10;
            goto code_r0x08002dc8;
        }
    }
    else {
        iVar8 = *_segment.ehdr;
        uVar7 = __list_add_valid(piVar6,_segment.ehdr,iVar8);
        if ((uVar7 & 1) != 0) {
            *(iVar8 + 8) = piVar6;
            piVar5[7] = iVar8;
            piVar5[8] = piVar12;
            piVar10 = piVar12;
code_r0x08002dc8:
            *piVar10 = piVar6;
        }
    }
    _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar4);
code_r0x08002e40:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar8 = __stack_chk_fail();
        *extraout_x18 = sym.ipc_log_context_free;
        piVar6 = iVar8 + -0x80;
        piVar5 = *piVar6;
        while (piVar5 != piVar6) {
            if (iVar8 + -200 == 0) {
                iVar11 = 0;
            }
            else {
                iVar11 = *piVar6 + -0x30;
            }
            uVar7 = __list_del_entry_valid(iVar11 + 0x30);
            if ((uVar7 & 1) != 0) {
                iVar2 = *(iVar11 + 0x30);
                piVar5 = *(iVar11 + 0x38);
                *(iVar2 + 8) = piVar5;
                *piVar5 = iVar2;
            }
            *(iVar11 + 0x30) = 0xdead000000000100;
            *(iVar11 + 0x38) = 0xdead000000000122;
            kfree(iVar11);
            piVar5 = *piVar6;
        }
        piVar5 = kfree(iVar8 + -200);
        return piVar5;
    }
    return piVar5;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x080013f8 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = param_1 + -0x80;
    piVar3 = *piVar5;
    while (piVar3 != piVar5) {
        if (param_1 + -200 == 0) {
            iVar4 = 0;
        }
        else {
            iVar4 = *piVar5 + -0x30;
        }
        uVar2 = __list_del_entry_valid(iVar4 + 0x30);
        if ((uVar2 & 1) != 0) {
            iVar1 = *(iVar4 + 0x30);
            piVar3 = *(iVar4 + 0x38);
            *(iVar1 + 8) = piVar3;
            *piVar3 = iVar1;
        }
        *(iVar4 + 0x30) = 0xdead000000000100;
        *(iVar4 + 0x38) = 0xdead000000000122;
        kfree(iVar4);
        piVar3 = *piVar5;
    }
    kfree(param_1 + -200);
    return;
}


// ===== sym.debug_read.9ce10bdf909048cf8a7eb9426c2064e0.cfi_jt @ 0x08001400 (size 8) =====

void sym.debug_read.9ce10bdf909048cf8a7eb9426c2064e0.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.debug_read_helper(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.debug_read_cont.9ce10bdf909048cf8a7eb9426c2064e0.cfi_jt @ 0x08001408 (size 8) =====

void sym.debug_read_cont.9ce10bdf909048cf8a7eb9426c2064e0.cfi_jt
               (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.debug_read_helper(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.tsv_int32_write.cfi_jt @ 0x08001410 (size 8) =====

uint sym.tsv_int32_write.cfi_jt(int64_t param_1,uint param_2)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(param_1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001a64:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001a68);
                (*pcVar3)();
            }
            *(param_1 + uVar1 + 2) = 0x403;
            iVar2 = *(param_1 + 0x104);
            uVar1 = iVar2 + 2;
            *(param_1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xfaU) {
                if (uVar1 < 0x100) {
                    *(param_1 + uVar1 + 2) = param_2;
                    *(param_1 + 0x104) = *(param_1 + 0x104) + 4;
                    return 0;
                }
                goto code_r0x08001a64;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.init_module.cfi_jt @ 0x08001418 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.check_and_create_debugfs();
    return 0;
}


// ===== sym.ipc_log_extract.cfi_jt @ 0x08001420 (size 8) =====

uint64_t sym.ipc_log_extract.cfi_jt(int64_t param_1,ulong param_2,uint32_t param_3)

{
    uint32_t uVar1;
    char cVar2;
    code *pcVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    char *pcVar8;
    char *pcVar9;
    ulong uVar10;
    int16_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint16_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *puVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [12];
    uint8_t uStack_34b;
    ulong uStack_198;
    ulong uStack_190;
    uint64_t uStack_188;
    uint8_t auStack_17c [4];
    uint8_t uStack_178;
    uint8_t uStack_177;
    uint uStack_74;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_70 = *(iVar13 + 0x5e0);
    uVar7 = 0x108;
    memset(&uStack_178,0);
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    if (param_3 < 0x3fc) {
        uVar16 = 0xffffffea;
        goto code_r0x08002024;
    }
    uStack_188 = param_3;
    uStack_190 = param_2;
    uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
    iVar13 = param_1 + 0xa0;
    _raw_spin_lock(iVar13);
    if (*(param_1 + 0xcc) == '\0') {
        if ((param_1 != 0) && (0x3fb < uStack_188)) {
            do {
                iVar18 = *(param_1 + 0x78);
                uVar14 = *(iVar18 + 0x40);
                if ((iVar18 == *(param_1 + 0x68)) && (uVar14 == *(iVar18 + 0xe))) break;
                uVar7 = 0xfb8 - uVar14;
                auStack_17c[0] = 0;
                auStack_17c[1] = 0;
                if (1 < uVar7) {
                    uVar7 = 2;
                }
                if (0xfb8 < uVar14) {
code_r0x08002078:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x800207c);
                    (*pcVar3)();
                }
                memcpy(auStack_17c,iVar18 + uVar14 + 0x48,uVar7);
                if (uVar7 == 2) {
                    iVar11 = 2;
                }
                else {
                    *(iVar18 + 0x40) = 0;
                    iVar18 = *(param_1 + 0x78);
                    if (iVar18 == 0) {
                        *(param_1 + 0x78) = 0;
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001f88);
                        (*pcVar3)();
                    }
                    if (*(param_1 + 0x60) == iVar18) {
                        iVar18 = *(param_1 + 0x58);
                        *(param_1 + 0x78) = iVar18;
                    }
                    else {
                        iVar18 = *(iVar18 + 0x30) + -0x30;
                        *(param_1 + 0x78) = iVar18;
                    }
                    if (iVar18 == 0) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001fa8);
                        (*pcVar3)();
                    }
                    uVar14 = *(iVar18 + 0x40);
                    if (0xfb8 < uVar14) goto code_r0x08002078;
                    iVar4 = 2 - uVar7;
                    memcpy(auStack_17c + uVar7,iVar18 + uVar14 + 0x48,iVar4);
                    iVar11 = iVar4;
                }
                *(iVar18 + 0x40) = iVar11 + uVar14;
                iVar18 = *(param_1 + 0x78);
                uVar17 = auStack_17c[1];
                uStack_74 = 2;
                uVar12 = *(iVar18 + 0x40);
                uVar15 = auStack_17c[1];
                uStack_177 = auStack_17c[1];
                uStack_178 = auStack_17c[0];
                uVar16 = 0xfb8 - uVar12;
                if (uVar17 <= 0xfb8 - uVar12) {
                    uVar16 = uVar17;
                }
                if (0xfb8 < uVar12) goto code_r0x08002078;
                uVar7 = uVar16;
                memcpy(&uStack_178 | 4,iVar18 + uVar12 + 0x48);
                uVar15 = uVar15 - uVar16;
                if (uVar15 != 0) {
                    *(iVar18 + 0x40) = 0;
                    iVar18 = *(param_1 + 0x78);
                    if (iVar18 == 0) {
                        *(param_1 + 0x78) = 0;
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001f94);
                        (*pcVar3)();
                    }
                    if (*(param_1 + 0x60) == iVar18) {
                        iVar18 = *(param_1 + 0x58);
                        *(param_1 + 0x78) = iVar18;
                    }
                    else {
                        iVar18 = *(iVar18 + 0x30) + -0x30;
                        *(param_1 + 0x78) = iVar18;
                    }
                    if (iVar18 == 0) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001fbc);
                        (*pcVar3)();
                    }
                    if (0xfb8 < *(iVar18 + 0x40)) goto code_r0x08002078;
                    uVar7 = uVar15;
                    memcpy((&uStack_178 | 4) + uVar16,iVar18 + *(iVar18 + 0x40) + 0x48);
                    uVar17 = uVar15;
                }
                *(iVar18 + 0x40) = *(iVar18 + 0x40) + uVar17;
                for (piVar5 = *(param_1 + 0x90); piVar5 != param_1 + 0x90; piVar5 = *piVar5) {
                    if (*(piVar5 + 2) == uStack_178) {
                        pcVar3 = piVar5[3];
                        goto code_r0x08001f28;
                    }
                }
                pcVar3 = NULL;
code_r0x08001f28:
                _raw_spin_unlock(iVar13);
                _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
                if (pcVar3 == NULL) {
                    uVar7 = uStack_178;
                    _printk(0x8000540,"ipc_log_extract");
                }
                else {
                    if (pcVar3 != sym.__typeid__ZTSFvP14encode_contextP14decode_contextE_global_addr) {
                        uVar7 = 0x8000450;
                        __cfi_slowpath_diag(0x3dd3aae8729ef37e,pcVar3);
                    }
                    (*pcVar3)(&uStack_178,&uStack_198);
                }
                uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                _raw_spin_lock(iVar13);
            } while (0x3fb < uStack_188);
        }
        uVar16 = param_3 - uStack_188;
        if (param_3 - uStack_188 == 0) {
            if (*(param_1 + 0xcc) != '\0') goto code_r0x08001d54;
            uVar16 = 0;
            *(param_1 + 0xa8) = 0;
        }
    }
    else {
code_r0x08001d54:
        uVar16 = 0xfffffffb;
    }
    _raw_spin_unlock(iVar13);
    _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
code_r0x08002024:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return uVar16;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._8_8_;
    iVar18 = auVar20._0_8_;
    *extraout_x18 = sym.tsv_timestamp_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar18 + 0x104);
    if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80021a0);
        (*pcVar3)();
    }
    if (0xff < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8002218);
        (*pcVar3)();
    }
    cVar2 = *(iVar18 + uVar15 + 2);
    *(iVar18 + 0x104) = uVar15 + 2;
    if (cVar2 != '\x01') {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002210);
        (*pcVar3)();
    }
    if (0xf5 < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80021dc);
        (*pcVar3)();
    }
    uVar16 = *(iVar18 + uVar15 + 2 + 2);
    *(iVar18 + 0x104) = uVar15 + 10;
    pcVar8 = "[%6u.%09lu%s/";
    uVar7 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),"[%6u.%09lu%s/",uVar16 / 1000000000,uVar16 % 1000000000,uVar7);
    *(iVar6 + 8) = *(iVar6 + 8) + uVar7;
    *(iVar6 + 0x10) = *(iVar6 + 0x10) - uVar7;
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iVar13) {
        return uVar7;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._8_8_;
    iVar18 = auVar20._0_8_;
    *extraout_x18_00 = sym.tsv_qtimer_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar18 + 0x104);
    if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002314);
        (*pcVar3)();
    }
    if (0xff < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800238c);
        (*pcVar3)();
    }
    cVar2 = *(iVar18 + uVar15 + 2);
    *(iVar18 + 0x104) = uVar15 + 2;
    if (cVar2 != '\x05') {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002384);
        (*pcVar3)();
    }
    if (0xf5 < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002350);
        (*pcVar3)();
    }
    uVar10 = *(iVar18 + uVar15 + 2 + 2);
    *(iVar18 + 0x104) = uVar15 + 10;
    pcVar9 = "%#18llx]%s";
    uVar7 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),"%#18llx]%s",uVar10,pcVar8);
    *(iVar6 + 8) = *(iVar6 + 8) + uVar7;
    *(iVar6 + 0x10) = *(iVar6 + 0x10) - uVar7;
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iVar13) {
        return uVar7;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._8_8_;
    iVar18 = auVar20._0_8_;
    *extraout_x18_01 = sym.tsv_pointer_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar18 + 0x104);
    if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar3)();
    }
    if (0xff < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar3)();
    }
    cVar2 = *(iVar18 + uVar15 + 2);
    *(iVar18 + 0x104) = uVar15 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar3)();
    }
    if (0xf5 < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar3)();
    }
    uVar10 = *(iVar18 + uVar15 + 2 + 2);
    *(iVar18 + 0x104) = uVar15 + 10;
    uVar7 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),pcVar9,uVar10);
    *(iVar6 + 8) = *(iVar6 + 8) + uVar7;
    *(iVar6 + 0x10) = *(iVar6 + 0x10) - uVar7;
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iVar13) {
        auVar20 = __stack_chk_fail();
        iVar6 = auVar20._8_8_;
        iVar18 = auVar20._0_8_;
        *extraout_x18_02 = sym.tsv_int32_read;
        iVar13 = sp_el0;
        iVar13 = *(iVar13 + 0x5e0);
        uVar15 = *(iVar18 + 0x104);
        if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80025f4);
            (*pcVar3)();
        }
        if (0xff < uVar15) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8002670);
            (*pcVar3)();
        }
        cVar2 = *(iVar18 + uVar15 + 2);
        *(iVar18 + 0x104) = uVar15 + 2;
        if (cVar2 != '\x03') {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002668);
            (*pcVar3)();
        }
        if (0xf9 < uVar15) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002630);
            (*pcVar3)();
        }
        uVar7 = *(iVar18 + uVar15 + 2 + 2);
        *(iVar18 + 0x104) = uVar15 + 6;
        iVar4 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),pcVar9,uVar7);
        *(iVar6 + 8) = *(iVar6 + 8) + iVar4;
        *(iVar6 + 0x10) = *(iVar6 + 0x10) - iVar4;
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iVar13) {
            return uVar7;
        }
        auVar20 = __stack_chk_fail();
        iVar6 = auVar20._8_8_;
        iVar18 = auVar20._0_8_;
        *extraout_x18_03 = sym.tsv_byte_array_read;
        iVar13 = sp_el0;
        iVar13 = *(iVar13 + 0x5e0);
        uVar15 = *(iVar18 + 0x104);
        if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar3)();
        }
        if (uVar15 < 0x100) {
            uVar1 = uVar15 + 2;
            uVar14 = *(iVar18 + uVar15 + 2);
            *(iVar18 + 0x104) = uVar1;
            if ((uVar14 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar3)();
            }
            uStack_34b = uVar14 >> 8;
            if (0xff < uVar1 + uStack_34b) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar3)();
            }
            if (uVar1 < 0x100) {
                uVar7 = uStack_34b;
                uVar16 = memcpy(*(iVar6 + 8),iVar18 + uVar1 + 2);
                *(iVar18 + 0x104) = *(iVar18 + 0x104) + uStack_34b;
                *(iVar6 + 8) = *(iVar6 + 8) + uStack_34b;
                *(iVar6 + 0x10) = *(iVar6 + 0x10) - uStack_34b;
                iVar18 = sp_el0;
                if (*(iVar18 + 0x5e0) != iVar13) {
                    auVar21 = __stack_chk_fail();
                    iVar13 = auVar21._0_8_;
                    *extraout_x18_04 = sym.add_deserialization_func;
                    uVar16 = 0xffffffea;
                    if ((iVar13 != 0) && (uVar7 != 0)) {
                        iVar18 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar18 = 0x30;
                        }
                        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xcc0,0x20);
                        if (piVar5 == NULL) {
                            uVar16 = 0xffffffe4;
                        }
                        else {
                            uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                            _raw_spin_lock(iVar13 + 0xa0);
                            puVar19 = *(iVar13 + 0x98);
                            *(piVar5 + 2) = auVar21._8_4_;
                            piVar5[3] = uVar7;
                            uVar7 = __list_add_valid(piVar5,puVar19,iVar13 + 0x90);
                            if ((uVar7 & 1) != 0) {
                                *(iVar13 + 0x98) = piVar5;
                                *piVar5 = iVar13 + 0x90;
                                piVar5[1] = puVar19;
                                *puVar19 = piVar5;
                            }
                            _raw_spin_unlock(iVar13 + 0xa0);
                            _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
                            uVar16 = 0;
                        }
                    }
                    return uVar16;
                }
                return uVar16;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar3)();
    }
    return uVar7;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001428 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(_segment.ehdr);
    return;
}


// ===== sym.check_and_create_debugfs.cfi_jt @ 0x08001430 (size 8) =====

void sym.check_and_create_debugfs.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.ipc_log_context_list);
    if (_segment.ehdr == 0) {
        _segment.ehdr = debugfs_create_dir("ipc_logging",0);
        if (0xfffffffffffff000 < _segment.ehdr) {
            _printk(0x8000488,"check_and_create_debugfs",_segment.ehdr);
            _segment.ehdr = 0;
        }
    }
    mutex_unlock(obj.ipc_log_context_list);
    return;
}


// ===== sym.__typeid__ZTSFvP14encode_contextP14decode_contextE_global_addr @ 0x08001438 (size 8) =====

void sym.__typeid__ZTSFvP14encode_contextP14decode_contextE_global_addr(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.tsv_timestamp_read(param_1,param_2,0x80006d1);
    sym.tsv_qtimer_read(param_1,param_2,0x8000592);
    sym.tsv_byte_array_read(param_1,param_2);
    iVar1 = *(param_2 + 8);
    if (*(iVar1 + -1) != '\n') {
        if (*(param_2 + 0x10) != 0) {
            iVar1 = iVar1 + 1;
            *(param_2 + 8) = iVar1;
            *(param_2 + 0x10) = *(param_2 + 0x10) + -1;
        }
        *(iVar1 + -1) = 10;
    }
    return;
}


// ===== sym.ipc_log_context_destroy.cfi_jt @ 0x08001440 (size 8) =====

ulong sym.ipc_log_context_destroy.cfi_jt(int64_t param_1)

{
    int *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        debugfs_remove(*(param_1 + 0x88));
        _raw_spin_lock(param_1 + 0xa0);
        *(param_1 + 0xcc) = 1;
        complete_all(param_1 + 0xa8);
        piVar11 = *(param_1 + 0x90);
        while (piVar11 != param_1 + 0x90) {
            piVar12 = *piVar11;
            uVar9 = __list_del_entry_valid(piVar11);
            if ((uVar9 & 1) != 0) {
                iVar3 = *piVar11;
                piVar4 = piVar11[1];
                *(iVar3 + 8) = piVar4;
                *piVar4 = iVar3;
            }
            *piVar11 = -0x2152ffffffffff00;
            piVar11[1] = -0x2152fffffffffede;
            kfree(piVar11);
            piVar11 = piVar12;
        }
        _raw_spin_unlock(param_1 + 0xa0);
        uVar8 = _raw_write_lock_irqsave(obj.context_list_lock_lha1);
        uVar9 = __list_del_entry_valid(param_1 + 0x38);
        if ((uVar9 & 1) != 0) {
            iVar3 = *(param_1 + 0x38);
            piVar11 = *(param_1 + 0x40);
            *(iVar3 + 8) = piVar11;
            *piVar11 = iVar3;
        }
        *(param_1 + 0x38) = 0xdead000000000100;
        *(param_1 + 0x40) = 0xdead000000000122;
        _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar8);
        piVar1 = param_1 + 200;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar5 = *piVar1;
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
                *piVar1 = iVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        if (iVar5 == 1) {
            DataMemoryBarrier(2,1);
            puVar2 = param_1 + 0x48;
            puVar10 = *puVar2;
            while (puVar10 != puVar2) {
                piVar11 = *puVar2;
                uVar9 = __list_del_entry_valid(piVar11);
                if ((uVar9 & 1) != 0) {
                    iVar3 = *piVar11;
                    piVar12 = piVar11[1];
                    *(iVar3 + 8) = piVar12;
                    *piVar12 = iVar3;
                }
                *piVar11 = -0x2152ffffffffff00;
                piVar11[1] = -0x2152fffffffffede;
                kfree(piVar11 + -6);
                puVar10 = *puVar2;
            }
            kfree(param_1);
        }
        else if (iVar5 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return 0;
}


// ===== sym.tsv_qtimer_write.cfi_jt @ 0x08001448 (size 8) =====

uint sym.tsv_qtimer_write.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    InstructionSynchronizationBarrier();
    uVar4 = cntvct_el0;
    if (param_1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(param_1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001904:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001908);
                (*pcVar3)();
            }
            *(param_1 + uVar1 + 2) = 0x805;
            iVar2 = *(param_1 + 0x104);
            uVar1 = iVar2 + 2;
            *(param_1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xf6U) {
                if (uVar1 < 0x100) {
                    *(param_1 + uVar1 + 2) = uVar4;
                    *(param_1 + 0x104) = *(param_1 + 0x104) + 8;
                    return 0;
                }
                goto code_r0x08001904;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.tsv_timestamp_write.cfi_jt @ 0x08001450 (size 8) =====

ulong sym.tsv_timestamp_write.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sched_clock();
    if (param_1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(param_1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001840:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001844);
                (*pcVar3)();
            }
            *(param_1 + uVar1 + 2) = 0x801;
            iVar2 = *(param_1 + 0x104);
            uVar1 = iVar2 + 2;
            *(param_1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xf6U) {
                if (uVar1 < 0x100) {
                    *(param_1 + uVar1 + 2) = uVar4;
                    *(param_1 + 0x104) = *(param_1 + 0x104) + 8;
                    return 0;
                }
                goto code_r0x08001840;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.msg_encode_start.cfi_jt @ 0x08001458 (size 8) =====

void sym.msg_encode_start.cfi_jt(uchar *param_1,uchar param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x800068f,"msg_encode_start");
    }
    else {
        *param_1 = param_2;
        param_1[1] = 0;
        *(param_1 + 0x104) = 2;
    }
    return;
}


// ===== sym.tsv_byte_array_write.cfi_jt @ 0x08001460 (size 8) =====

ulong sym.tsv_byte_array_write.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar3 = 0x800068f;
    }
    else {
        uVar1 = *(param_1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001b2c:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8001b30);
                (*pcVar2)();
            }
            *(param_1 + uVar1 + 2) = 4;
            *(param_1 + uVar1 + 3) = param_3;
            uVar1 = *(param_1 + 0x104) + 2;
            *(param_1 + 0x104) = uVar1;
            if (uVar1 + param_3 < 0x100) {
                if (uVar1 < 0x100) {
                    memcpy(param_1 + uVar1 + 2,param_2,param_3);
                    *(param_1 + 0x104) = *(param_1 + 0x104) + param_3;
                    return 0;
                }
                goto code_r0x08001b2c;
            }
        }
        uVar3 = 0x8000630;
    }
    _printk(uVar3,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.create_ctx_debugfs.cfi_jt @ 0x08001468 (size 8) =====

void sym.create_ctx_debugfs.cfi_jt(int64_t param_1,ulong param_2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        mutex_lock(obj.ipc_log_context_list);
        if (_segment.ehdr == 0) {
            _segment.ehdr = debugfs_create_dir("ipc_logging",0);
            if (0xfffffffffffff000 < _segment.ehdr) {
                _printk(0x8000488,"check_and_create_debugfs",_segment.ehdr);
                _segment.ehdr = 0;
            }
        }
        mutex_unlock(obj.ipc_log_context_list);
        if (_segment.ehdr == 0) goto code_r0x080034d8;
    }
    uVar1 = debugfs_create_dir(param_2);
    *(param_1 + 0x88) = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        debugfs_create_file_unsafe(0x80005e4,0x124,uVar1,param_1,obj.debug_ops);
        debugfs_create_file_unsafe("log_cont",0x124,*(param_1 + 0x88),param_1,obj.debug_ops_cont);
    }
code_r0x080034d8:
    sym.add_deserialization_func(param_1,2,0x8001438);
    return;
}


// ===== sym.simple_open.cfi_jt @ 0x08001470 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.ipc_log_write.cfi_jt @ 0x08001478 (size 8) =====

void sym.ipc_log_write.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong uVar4;
    uchar *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    unkbyte9 Var10;
    ushort uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    if ((param_1 != 0) && (param_2 != 0)) {
        uVar3 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
        _raw_spin_lock(param_1 + 0xa0);
        do {
            uVar1 = *(param_2 + 0x104);
            do {
                if (uVar1 < *(param_1 + 0x80)) {
                    uVar7 = *(*(param_1 + 0x68) + 0xe);
                    uVar9 = 0xfb8 - uVar7;
                    if (uVar1 <= 0xfb8 - uVar7) {
                        uVar9 = uVar1;
                    }
                    if (0xfb8 < uVar7) {
code_r0x080016e4:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80016e8);
                        (*pcVar2)();
                    }
                    memcpy(*(param_1 + 0x68) + uVar7 + 0x48,param_2 + 2,uVar9);
                    iVar8 = uVar9;
                    if (*(param_2 + 0x104) != iVar8) {
                        uVar4 = sched_clock();
                        *(*(param_1 + 0x68) + 0xe) = *(*(param_1 + 0x68) + 0xe) + uVar9;
                        *(*(param_1 + 0x68) + 0x20) = uVar4;
                        iVar6 = *(param_1 + 0x68);
                        if (iVar6 == 0) {
                            *(param_1 + 0x68) = 0;
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x80016b4);
                            (*pcVar2)();
                        }
                        if (*(param_1 + 0x60) == iVar6) {
                            iVar6 = *(param_1 + 0x58);
                            *(param_1 + 0x68) = iVar6;
                        }
                        else {
                            iVar6 = *(iVar6 + 0x30) + -0x30;
                            *(param_1 + 0x68) = iVar6;
                        }
                        if (iVar6 == 0) {
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x80016c8);
                            (*pcVar2)();
                        }
                        *(iVar6 + 0xe) = 0;
                        *(*(param_1 + 0x68) + 0x18) = uVar4;
                        uVar7 = *(*(param_1 + 0x68) + 0xe);
                        if ((0xfb8 < uVar7) || (0xff < uVar9)) goto code_r0x080016e4;
                        memcpy(*(param_1 + 0x68) + uVar7 + 0x48,param_2 + uVar9 + 2,*(param_2 + 0x104) - iVar8);
                        uVar9 = *(param_2 + 0x104) - iVar8;
                    }
                    *(*(param_1 + 0x68) + 0xe) = *(*(param_1 + 0x68) + 0xe) + uVar9;
                    *(param_1 + 0x80) = *(param_1 + 0x80) - *(param_2 + 0x104);
                    complete(param_1 + 0xa8);
                    _raw_spin_unlock(param_1 + 0xa0);
                    _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar3);
                    goto code_r0x08001678;
                }
                iVar6 = *(param_1 + 0x70);
                uStack_4c = 0;
            } while ((iVar6 == *(param_1 + 0x68)) && (*(iVar6 + 0xc) == *(iVar6 + 0xe)));
            sym.ipc_log_drop(param_1,&uStack_4c,2);
            sym.ipc_log_drop(param_1,0,uStack_4c._1_1_);
        } while( true );
    }
    _printk(0x8000517,"ipc_log_write");
code_r0x08001678:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        Var10 = __stack_chk_fail();
        puVar5 = Var10;
        *extraout_x18 = sym.msg_encode_start;
        if (puVar5 == NULL) {
            _printk(0x800068f,"msg_encode_start");
        }
        else {
            *puVar5 = Var10 >> 0x40;
            puVar5[1] = 0;
            *(puVar5 + 0x104) = 2;
        }
        return;
    }
    return;
}


// ===== sym.tsv_pointer_write.cfi_jt @ 0x08001480 (size 8) =====

uint sym.tsv_pointer_write.cfi_jt(int64_t param_1,ulong param_2)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(param_1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x080019b4:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80019b8);
                (*pcVar3)();
            }
            *(param_1 + uVar1 + 2) = 0x802;
            iVar2 = *(param_1 + 0x104);
            uVar1 = iVar2 + 2;
            *(param_1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xf6U) {
                if (uVar1 < 0x100) {
                    *(param_1 + uVar1 + 2) = param_2;
                    *(param_1 + 0x104) = *(param_1 + 0x104) + 8;
                    return 0;
                }
                goto code_r0x080019b4;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.tsv_int32_read.cfi_jt @ 0x08001488 (size 8) =====

uint64_t sym.tsv_int32_read.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uchar auVar16 [12];
    uint8_t uStack_8b;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar12 = *(iVar12 + 0x5e0);
    uVar4 = *(param_1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
        (*pcVar5)();
    }
    cVar2 = *(param_1 + uVar4 + 2);
    *(param_1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x03') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
        (*pcVar5)();
    }
    if (uVar4 < 0xfa) {
        uVar13 = *(param_1 + uVar4 + 2 + 2);
        *(param_1 + 0x104) = uVar4 + 6;
        iVar6 = scnprintf(*(param_2 + 8),*(param_2 + 0x10),param_3,uVar13);
        *(param_2 + 8) = *(param_2 + 8) + iVar6;
        *(param_2 + 0x10) = *(param_2 + 0x10) - iVar6;
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iVar12) {
            return uVar13;
        }
        auVar15 = __stack_chk_fail();
        iVar11 = auVar15._8_8_;
        iVar7 = auVar15._0_8_;
        *extraout_x18 = sym.tsv_byte_array_read;
        iVar12 = sp_el0;
        iVar12 = *(iVar12 + 0x5e0);
        uVar4 = *(iVar7 + 0x104);
        if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar5)();
        }
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar7 + uVar4 + 2);
            *(iVar7 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_8b = uVar3 >> 8;
            if (0xff < uVar1 + uStack_8b) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar13 = uStack_8b;
                uVar8 = memcpy(*(iVar11 + 8),iVar7 + uVar1 + 2);
                *(iVar7 + 0x104) = *(iVar7 + 0x104) + uStack_8b;
                *(iVar11 + 8) = *(iVar11 + 8) + uStack_8b;
                *(iVar11 + 0x10) = *(iVar11 + 0x10) - uStack_8b;
                iVar7 = sp_el0;
                if (*(iVar7 + 0x5e0) == iVar12) {
                    return uVar8;
                }
                auVar16 = __stack_chk_fail();
                iVar12 = auVar16._0_8_;
                *extraout_x18_00 = sym.add_deserialization_func;
                uVar8 = 0xffffffea;
                if ((iVar12 != 0) && (uVar13 != 0)) {
                    iVar7 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar7 = 0x30;
                    }
                    piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,0x20);
                    if (piVar9 == NULL) {
                        uVar8 = 0xffffffe4;
                    }
                    else {
                        uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar12 + 0xa0);
                        puVar14 = *(iVar12 + 0x98);
                        *(piVar9 + 2) = auVar16._8_4_;
                        piVar9[3] = uVar13;
                        uVar13 = __list_add_valid(piVar9,puVar14,iVar12 + 0x90);
                        if ((uVar13 & 1) != 0) {
                            *(iVar12 + 0x98) = piVar9;
                            *piVar9 = iVar12 + 0x90;
                            piVar9[1] = puVar14;
                            *puVar14 = piVar9;
                        }
                        _raw_spin_unlock(iVar12 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
                        uVar8 = 0;
                    }
                }
                return uVar8;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
    (*pcVar5)();
}


// ===== sym.tsv_timestamp_read.cfi_jt @ 0x08001490 (size 8) =====

uint64_t sym.tsv_timestamp_read.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    char *pcVar11;
    char *pcVar12;
    ulong uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *puVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [12];
    uint8_t uStack_1ab;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(param_1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80021a0);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002218);
        (*pcVar5)();
    }
    cVar2 = *(param_1 + uVar4 + 2);
    *(param_1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x01') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002210);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80021dc);
        (*pcVar5)();
    }
    uVar15 = *(param_1 + uVar4 + 2 + 2);
    *(param_1 + 0x104) = uVar4 + 10;
    pcVar11 = "[%6u.%09lu%s/";
    uVar15 = scnprintf(*(param_2 + 8),*(param_2 + 0x10),"[%6u.%09lu%s/",uVar15 / 1000000000,uVar15 % 1000000000,
                       param_3);
    *(param_2 + 8) = *(param_2 + 8) + uVar15;
    *(param_2 + 0x10) = *(param_2 + 0x10) - uVar15;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar14) {
        return uVar15;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18 = sym.tsv_qtimer_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar7 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002314);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x800238c);
        (*pcVar5)();
    }
    cVar2 = *(iVar7 + uVar4 + 2);
    *(iVar7 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x05') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002384);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002350);
        (*pcVar5)();
    }
    uVar13 = *(iVar7 + uVar4 + 2 + 2);
    *(iVar7 + 0x104) = uVar4 + 10;
    pcVar12 = "%#18llx]%s";
    uVar15 = scnprintf(*(iVar10 + 8),*(iVar10 + 0x10),"%#18llx]%s",uVar13,pcVar11);
    *(iVar10 + 8) = *(iVar10 + 8) + uVar15;
    *(iVar10 + 0x10) = *(iVar10 + 0x10) - uVar15;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar14) {
        return uVar15;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18_00 = sym.tsv_pointer_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar7 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar5)();
    }
    cVar2 = *(iVar7 + uVar4 + 2);
    *(iVar7 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar5)();
    }
    uVar13 = *(iVar7 + uVar4 + 2 + 2);
    *(iVar7 + 0x104) = uVar4 + 10;
    uVar15 = scnprintf(*(iVar10 + 8),*(iVar10 + 0x10),pcVar12,uVar13);
    *(iVar10 + 8) = *(iVar10 + 8) + uVar15;
    *(iVar10 + 0x10) = *(iVar10 + 0x10) - uVar15;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar14) {
        return uVar15;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18_01 = sym.tsv_int32_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar7 + 0x104);
    if (0xfffffffffffffeff < uVar4 - 0xfeU) {
        if (0xff < uVar4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
            (*pcVar5)();
        }
        cVar2 = *(iVar7 + uVar4 + 2);
        *(iVar7 + 0x104) = uVar4 + 2;
        if (cVar2 != '\x03') {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
            (*pcVar5)();
        }
        if (0xf9 < uVar4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
            (*pcVar5)();
        }
        uVar15 = *(iVar7 + uVar4 + 2 + 2);
        *(iVar7 + 0x104) = uVar4 + 6;
        iVar6 = scnprintf(*(iVar10 + 8),*(iVar10 + 0x10),pcVar12,uVar15);
        *(iVar10 + 8) = *(iVar10 + 8) + iVar6;
        *(iVar10 + 0x10) = *(iVar10 + 0x10) - iVar6;
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iVar14) {
            return uVar15;
        }
        auVar17 = __stack_chk_fail();
        iVar10 = auVar17._8_8_;
        iVar7 = auVar17._0_8_;
        *extraout_x18_02 = sym.tsv_byte_array_read;
        iVar14 = sp_el0;
        iVar14 = *(iVar14 + 0x5e0);
        uVar4 = *(iVar7 + 0x104);
        if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar5)();
        }
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar7 + uVar4 + 2);
            *(iVar7 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_1ab = uVar3 >> 8;
            if (0xff < uVar1 + uStack_1ab) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar15 = uStack_1ab;
                uVar8 = memcpy(*(iVar10 + 8),iVar7 + uVar1 + 2);
                *(iVar7 + 0x104) = *(iVar7 + 0x104) + uStack_1ab;
                *(iVar10 + 8) = *(iVar10 + 8) + uStack_1ab;
                *(iVar10 + 0x10) = *(iVar10 + 0x10) - uStack_1ab;
                iVar7 = sp_el0;
                if (*(iVar7 + 0x5e0) == iVar14) {
                    return uVar8;
                }
                auVar18 = __stack_chk_fail();
                iVar14 = auVar18._0_8_;
                *extraout_x18_03 = sym.add_deserialization_func;
                uVar8 = 0xffffffea;
                if ((iVar14 != 0) && (uVar15 != 0)) {
                    iVar7 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar7 = 0x30;
                    }
                    piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,0x20);
                    if (piVar9 == NULL) {
                        uVar8 = 0xffffffe4;
                    }
                    else {
                        uVar13 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar14 + 0xa0);
                        puVar16 = *(iVar14 + 0x98);
                        *(piVar9 + 2) = auVar18._8_4_;
                        piVar9[3] = uVar15;
                        uVar15 = __list_add_valid(piVar9,puVar16,iVar14 + 0x90);
                        if ((uVar15 & 1) != 0) {
                            *(iVar14 + 0x98) = piVar9;
                            *piVar9 = iVar14 + 0x90;
                            piVar9[1] = puVar16;
                            *puVar16 = piVar9;
                        }
                        _raw_spin_unlock(iVar14 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar13);
                        uVar8 = 0;
                    }
                }
                return uVar8;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
    (*pcVar5)();
}


// ===== sym.tsv_qtimer_read.cfi_jt @ 0x08001498 (size 8) =====

uint64_t sym.tsv_qtimer_read.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uchar auVar17 [12];
    uint8_t uStack_14b;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(param_1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002314);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x800238c);
        (*pcVar5)();
    }
    cVar2 = *(param_1 + uVar4 + 2);
    *(param_1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x05') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002384);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002350);
        (*pcVar5)();
    }
    uVar13 = *(param_1 + uVar4 + 2 + 2);
    *(param_1 + 0x104) = uVar4 + 10;
    pcVar12 = "%#18llx]%s";
    uVar7 = scnprintf(*(param_2 + 8),*(param_2 + 0x10),"%#18llx]%s",uVar13,param_3);
    *(param_2 + 8) = *(param_2 + 8) + uVar7;
    *(param_2 + 0x10) = *(param_2 + 0x10) - uVar7;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar14) {
        return uVar7;
    }
    auVar16 = __stack_chk_fail();
    iVar11 = auVar16._8_8_;
    iVar8 = auVar16._0_8_;
    *extraout_x18 = sym.tsv_pointer_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar5)();
    }
    cVar2 = *(iVar8 + uVar4 + 2);
    *(iVar8 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar5)();
    }
    uVar13 = *(iVar8 + uVar4 + 2 + 2);
    *(iVar8 + 0x104) = uVar4 + 10;
    uVar7 = scnprintf(*(iVar11 + 8),*(iVar11 + 0x10),pcVar12,uVar13);
    *(iVar11 + 8) = *(iVar11 + 8) + uVar7;
    *(iVar11 + 0x10) = *(iVar11 + 0x10) - uVar7;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar14) {
        return uVar7;
    }
    auVar16 = __stack_chk_fail();
    iVar11 = auVar16._8_8_;
    iVar8 = auVar16._0_8_;
    *extraout_x18_00 = sym.tsv_int32_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
        (*pcVar5)();
    }
    cVar2 = *(iVar8 + uVar4 + 2);
    *(iVar8 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x03') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
        (*pcVar5)();
    }
    if (0xf9 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
        (*pcVar5)();
    }
    uVar7 = *(iVar8 + uVar4 + 2 + 2);
    *(iVar8 + 0x104) = uVar4 + 6;
    iVar6 = scnprintf(*(iVar11 + 8),*(iVar11 + 0x10),pcVar12,uVar7);
    *(iVar11 + 8) = *(iVar11 + 8) + iVar6;
    *(iVar11 + 0x10) = *(iVar11 + 0x10) - iVar6;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar14) {
        return uVar7;
    }
    auVar16 = __stack_chk_fail();
    iVar11 = auVar16._8_8_;
    iVar8 = auVar16._0_8_;
    *extraout_x18_01 = sym.tsv_byte_array_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (0xfffffffffffffeff < uVar4 - 0xfeU) {
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar8 + uVar4 + 2);
            *(iVar8 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_14b = uVar3 >> 8;
            if (0xff < uVar1 + uStack_14b) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar7 = uStack_14b;
                uVar9 = memcpy(*(iVar11 + 8),iVar8 + uVar1 + 2);
                *(iVar8 + 0x104) = *(iVar8 + 0x104) + uStack_14b;
                *(iVar11 + 8) = *(iVar11 + 8) + uStack_14b;
                *(iVar11 + 0x10) = *(iVar11 + 0x10) - uStack_14b;
                iVar8 = sp_el0;
                if (*(iVar8 + 0x5e0) == iVar14) {
                    return uVar9;
                }
                auVar17 = __stack_chk_fail();
                iVar14 = auVar17._0_8_;
                *extraout_x18_02 = sym.add_deserialization_func;
                uVar9 = 0xffffffea;
                if ((iVar14 != 0) && (uVar7 != 0)) {
                    iVar8 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar8 = 0x30;
                    }
                    piVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xcc0,0x20);
                    if (piVar10 == NULL) {
                        uVar9 = 0xffffffe4;
                    }
                    else {
                        uVar13 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar14 + 0xa0);
                        puVar15 = *(iVar14 + 0x98);
                        *(piVar10 + 2) = auVar17._8_4_;
                        piVar10[3] = uVar7;
                        uVar7 = __list_add_valid(piVar10,puVar15,iVar14 + 0x90);
                        if ((uVar7 & 1) != 0) {
                            *(iVar14 + 0x98) = piVar10;
                            *piVar10 = iVar14 + 0x90;
                            piVar10[1] = puVar15;
                            *puVar15 = piVar10;
                        }
                        _raw_spin_unlock(iVar14 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar13);
                        uVar9 = 0;
                    }
                }
                return uVar9;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
    (*pcVar5)();
}


// ===== sym.tsv_byte_array_read.cfi_jt @ 0x080014a0 (size 8) =====

ulong sym.tsv_byte_array_read.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uint8_t uStack_3b;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar9 = *(iVar9 + 0x5e0);
    uVar4 = *(param_1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
        (*pcVar5)();
    }
    if (uVar4 < 0x100) {
        uVar1 = uVar4 + 2;
        uVar3 = *(param_1 + uVar4 + 2);
        *(param_1 + 0x104) = uVar1;
        if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
            (*pcVar5)();
        }
        uStack_3b = uVar3 >> 8;
        if (0xff < uVar1 + uStack_3b) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
            (*pcVar5)();
        }
        if (uVar1 < 0x100) {
            uVar8 = uStack_3b;
            uVar6 = memcpy(*(param_2 + 8),param_1 + uVar1 + 2);
            *(param_1 + 0x104) = *(param_1 + 0x104) + uStack_3b;
            *(param_2 + 8) = *(param_2 + 8) + uStack_3b;
            *(param_2 + 0x10) = *(param_2 + 0x10) - uStack_3b;
            iVar2 = sp_el0;
            if (*(iVar2 + 0x5e0) == iVar9) {
                return uVar6;
            }
            auVar11 = __stack_chk_fail();
            iVar9 = auVar11._0_8_;
            *extraout_x18 = sym.add_deserialization_func;
            uVar6 = 0xffffffea;
            if ((iVar9 != 0) && (uVar8 != 0)) {
                iVar2 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar2 = 0x30;
                }
                piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xcc0,0x20);
                if (piVar7 == NULL) {
                    uVar6 = 0xffffffe4;
                }
                else {
                    uVar6 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                    _raw_spin_lock(iVar9 + 0xa0);
                    puVar10 = *(iVar9 + 0x98);
                    *(piVar7 + 2) = auVar11._8_4_;
                    piVar7[3] = uVar8;
                    uVar8 = __list_add_valid(piVar7,puVar10,iVar9 + 0x90);
                    if ((uVar8 & 1) != 0) {
                        *(iVar9 + 0x98) = piVar7;
                        *piVar7 = iVar9 + 0x90;
                        piVar7[1] = puVar10;
                        *puVar10 = piVar7;
                    }
                    _raw_spin_unlock(iVar9 + 0xa0);
                    _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar6);
                    uVar6 = 0;
                }
            }
            return uVar6;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
    (*pcVar5)();
}


// ===== sym.tsv_pointer_read.cfi_jt @ 0x080014a8 (size 8) =====

uint64_t sym.tsv_pointer_read.cfi_jt(int64_t param_1,int64_t param_2,ulong param_3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uchar auVar16 [12];
    uint8_t uStack_eb;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar4 = *(param_1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar5)();
    }
    cVar2 = *(param_1 + uVar4 + 2);
    *(param_1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar5)();
    }
    uVar12 = *(param_1 + uVar4 + 2 + 2);
    *(param_1 + 0x104) = uVar4 + 10;
    uVar7 = scnprintf(*(param_2 + 8),*(param_2 + 0x10),param_3,uVar12);
    *(param_2 + 8) = *(param_2 + 8) + uVar7;
    *(param_2 + 0x10) = *(param_2 + 0x10) - uVar7;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar13) {
        return uVar7;
    }
    auVar15 = __stack_chk_fail();
    iVar11 = auVar15._8_8_;
    iVar8 = auVar15._0_8_;
    *extraout_x18 = sym.tsv_int32_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
        (*pcVar5)();
    }
    cVar2 = *(iVar8 + uVar4 + 2);
    *(iVar8 + 0x104) = uVar4 + 2;
    if (cVar2 == '\x03') {
        if (0xf9 < uVar4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
            (*pcVar5)();
        }
        uVar7 = *(iVar8 + uVar4 + 2 + 2);
        *(iVar8 + 0x104) = uVar4 + 6;
        iVar6 = scnprintf(*(iVar11 + 8),*(iVar11 + 0x10),param_3,uVar7);
        *(iVar11 + 8) = *(iVar11 + 8) + iVar6;
        *(iVar11 + 0x10) = *(iVar11 + 0x10) - iVar6;
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iVar13) {
            return uVar7;
        }
        auVar15 = __stack_chk_fail();
        iVar11 = auVar15._8_8_;
        iVar8 = auVar15._0_8_;
        *extraout_x18_00 = sym.tsv_byte_array_read;
        iVar13 = sp_el0;
        iVar13 = *(iVar13 + 0x5e0);
        uVar4 = *(iVar8 + 0x104);
        if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar5)();
        }
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar8 + uVar4 + 2);
            *(iVar8 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_eb = uVar3 >> 8;
            if (0xff < uVar1 + uStack_eb) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar7 = uStack_eb;
                uVar9 = memcpy(*(iVar11 + 8),iVar8 + uVar1 + 2);
                *(iVar8 + 0x104) = *(iVar8 + 0x104) + uStack_eb;
                *(iVar11 + 8) = *(iVar11 + 8) + uStack_eb;
                *(iVar11 + 0x10) = *(iVar11 + 0x10) - uStack_eb;
                iVar8 = sp_el0;
                if (*(iVar8 + 0x5e0) == iVar13) {
                    return uVar9;
                }
                auVar16 = __stack_chk_fail();
                iVar13 = auVar16._0_8_;
                *extraout_x18_01 = sym.add_deserialization_func;
                uVar9 = 0xffffffea;
                if ((iVar13 != 0) && (uVar7 != 0)) {
                    iVar8 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar8 = 0x30;
                    }
                    piVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xcc0,0x20);
                    if (piVar10 == NULL) {
                        uVar9 = 0xffffffe4;
                    }
                    else {
                        uVar12 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar13 + 0xa0);
                        puVar14 = *(iVar13 + 0x98);
                        *(piVar10 + 2) = auVar16._8_4_;
                        piVar10[3] = uVar7;
                        uVar7 = __list_add_valid(piVar10,puVar14,iVar13 + 0x90);
                        if ((uVar7 & 1) != 0) {
                            *(iVar13 + 0x98) = piVar10;
                            *piVar10 = iVar13 + 0x90;
                            piVar10[1] = puVar14;
                            *puVar14 = piVar10;
                        }
                        _raw_spin_unlock(iVar13 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar12);
                        uVar9 = 0;
                    }
                }
                return uVar9;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
    (*pcVar5)();
}


// ===== sym.msg_encode_end.cfi_jt @ 0x080014b0 (size 8) =====

void sym.msg_encode_end.cfi_jt(ushort *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x800068f,"msg_encode_end");
    }
    else {
        *(param_1 + 1) = *(param_1 + 0x82) + -2;
        param_1[1] = *param_1;
    }
    return;
}


// ===== sym.ipc_log_write @ 0x080014b8 (size 564) =====

void sym.ipc_log_write(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong uVar4;
    uchar *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    unkbyte9 Var10;
    ushort uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    if ((arg1 != 0) && (arg2 != 0)) {
        uVar3 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
        _raw_spin_lock(arg1 + 0xa0);
        do {
            uVar1 = *(arg2 + 0x104);
            do {
                if (uVar1 < *(arg1 + 0x80)) {
                    uVar7 = *(*(arg1 + 0x68) + 0xe);
                    uVar9 = 0xfb8 - uVar7;
                    if (uVar1 <= 0xfb8 - uVar7) {
                        uVar9 = uVar1;
                    }
                    if (0xfb8 < uVar7) {
code_r0x080016e4:
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x80016e8);
                        (*pcVar2)();
                    }
                    memcpy(*(arg1 + 0x68) + uVar7 + 0x48,arg2 + 2,uVar9);
                    iVar8 = uVar9;
                    if (*(arg2 + 0x104) != iVar8) {
                        uVar4 = sched_clock();
                        *(*(arg1 + 0x68) + 0xe) = *(*(arg1 + 0x68) + 0xe) + uVar9;
                        *(*(arg1 + 0x68) + 0x20) = uVar4;
                        iVar6 = *(arg1 + 0x68);
                        if (iVar6 == 0) {
                            *(arg1 + 0x68) = 0;
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x80016b4);
                            (*pcVar2)();
                        }
                        if (*(arg1 + 0x60) == iVar6) {
                            iVar6 = *(arg1 + 0x58);
                            *(arg1 + 0x68) = iVar6;
                        }
                        else {
                            iVar6 = *(iVar6 + 0x30) + -0x30;
                            *(arg1 + 0x68) = iVar6;
                        }
                        if (iVar6 == 0) {
    //WARNING: Does not return
                            pcVar2 = SoftwareBreakpoint(0x800,0x80016c8);
                            (*pcVar2)();
                        }
                        *(iVar6 + 0xe) = 0;
                        *(*(arg1 + 0x68) + 0x18) = uVar4;
                        uVar7 = *(*(arg1 + 0x68) + 0xe);
                        if ((0xfb8 < uVar7) || (0xff < uVar9)) goto code_r0x080016e4;
                        memcpy(*(arg1 + 0x68) + uVar7 + 0x48,arg2 + uVar9 + 2,*(arg2 + 0x104) - iVar8);
                        uVar9 = *(arg2 + 0x104) - iVar8;
                    }
                    *(*(arg1 + 0x68) + 0xe) = *(*(arg1 + 0x68) + 0xe) + uVar9;
                    *(arg1 + 0x80) = *(arg1 + 0x80) - *(arg2 + 0x104);
                    complete(arg1 + 0xa8);
                    _raw_spin_unlock(arg1 + 0xa0);
                    _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar3);
                    goto code_r0x08001678;
                }
                iVar6 = *(arg1 + 0x70);
                uStack_4c = 0;
            } while ((iVar6 == *(arg1 + 0x68)) && (*(iVar6 + 0xc) == *(iVar6 + 0xe)));
            sym.ipc_log_drop(arg1,&uStack_4c,2);
            sym.ipc_log_drop(arg1,0,uStack_4c._1_1_);
        } while( true );
    }
    _printk(0x8000517,"ipc_log_write");
code_r0x08001678:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_48) {
        Var10 = __stack_chk_fail();
        puVar5 = Var10;
        *extraout_x18 = sym.msg_encode_start;
        if (puVar5 == NULL) {
            _printk(0x800068f,"msg_encode_start");
        }
        else {
            *puVar5 = Var10 >> 0x40;
            puVar5[1] = 0;
            *(puVar5 + 0x104) = 2;
        }
        return;
    }
    return;
}


// ===== sym.msg_encode_start @ 0x080016ec (size 76) =====

void sym.msg_encode_start(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800068f,"msg_encode_start");
    }
    else {
        *arg1 = arg2;
        *(arg1 + 1) = 0;
        *(arg1 + 0x104) = 2;
    }
    return;
}


// ===== sym.msg_encode_end @ 0x08001738 (size 80) =====

void sym.msg_encode_end(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800068f,"msg_encode_end");
    }
    else {
        *(arg1 + 1) = *(arg1 + 0x104) + -2;
        *(arg1 + 2) = *arg1;
    }
    return;
}


// ===== sym.tsv_timestamp_write @ 0x08001788 (size 188) =====

ulong sym.tsv_timestamp_write(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = sched_clock();
    if (arg1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(arg1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001840:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001844);
                (*pcVar3)();
            }
            *(arg1 + uVar1 + 2) = 0x801;
            iVar2 = *(arg1 + 0x104);
            uVar1 = iVar2 + 2;
            *(arg1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xf6U) {
                if (uVar1 < 0x100) {
                    *(arg1 + uVar1 + 2) = uVar4;
                    *(arg1 + 0x104) = *(arg1 + 0x104) + 8;
                    return 0;
                }
                goto code_r0x08001840;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.tsv_qtimer_write @ 0x08001844 (size 196) =====

uint sym.tsv_qtimer_write(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    InstructionSynchronizationBarrier();
    uVar4 = cntvct_el0;
    if (arg1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(arg1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001904:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001908);
                (*pcVar3)();
            }
            *(arg1 + uVar1 + 2) = 0x805;
            iVar2 = *(arg1 + 0x104);
            uVar1 = iVar2 + 2;
            *(arg1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xf6U) {
                if (uVar1 < 0x100) {
                    *(arg1 + uVar1 + 2) = uVar4;
                    *(arg1 + 0x104) = *(arg1 + 0x104) + 8;
                    return 0;
                }
                goto code_r0x08001904;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.tsv_pointer_write @ 0x08001908 (size 176) =====

uint sym.tsv_pointer_write(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(arg1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x080019b4:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x80019b8);
                (*pcVar3)();
            }
            *(arg1 + uVar1 + 2) = 0x802;
            iVar2 = *(arg1 + 0x104);
            uVar1 = iVar2 + 2;
            *(arg1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xf6U) {
                if (uVar1 < 0x100) {
                    *(arg1 + uVar1 + 2) = arg2;
                    *(arg1 + 0x104) = *(arg1 + 0x104) + 8;
                    return 0;
                }
                goto code_r0x080019b4;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.tsv_int32_write @ 0x080019b8 (size 176) =====

uint sym.tsv_int32_write(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar4 = 0x800068f;
    }
    else {
        uVar1 = *(arg1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001a64:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8001a68);
                (*pcVar3)();
            }
            *(arg1 + uVar1 + 2) = 0x403;
            iVar2 = *(arg1 + 0x104);
            uVar1 = iVar2 + 2;
            *(arg1 + 0x104) = uVar1;
            if (0xfffffeff < iVar2 - 0xfaU) {
                if (uVar1 < 0x100) {
                    *(arg1 + uVar1 + 2) = arg2;
                    *(arg1 + 0x104) = *(arg1 + 0x104) + 4;
                    return 0;
                }
                goto code_r0x08001a64;
            }
        }
        uVar4 = 0x8000630;
    }
    _printk(uVar4,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.tsv_byte_array_write @ 0x08001a68 (size 200) =====

ulong sym.tsv_byte_array_write(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        uVar3 = 0x800068f;
    }
    else {
        uVar1 = *(arg1 + 0x104);
        if (0xfffffeff < uVar1 - 0xfe) {
            if (0xff < uVar1) {
code_r0x08001b2c:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8001b30);
                (*pcVar2)();
            }
            *(arg1 + uVar1 + 2) = 4;
            *(arg1 + uVar1 + 3) = arg2;
            uVar1 = *(arg1 + 0x104) + 2;
            *(arg1 + 0x104) = uVar1;
            if (uVar1 + arg2 < 0x100) {
                if (uVar1 < 0x100) {
                    memcpy(arg1 + uVar1 + 2,in_x1,arg2 & 0xffffffff);
                    *(arg1 + 0x104) = *(arg1 + 0x104) + arg2;
                    return 0;
                }
                goto code_r0x08001b2c;
            }
        }
        uVar3 = 0x8000630;
    }
    _printk(uVar3,"tsv_write_data");
    return 0xffffffea;
}


// ===== sym.ipc_log_string @ 0x08001b30 (size 400) =====

void sym.ipc_log_string(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    ushort uStack_140;
    ushort uStack_13e;
    ushort uStack_13c;
    ulong uStack_13a;
    ushort uStack_132;
    ulong uStack_130;
    uchar auStack_126 [234];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    memset(&uStack_140,0,0x104);
    if (arg1 == 0) {
        uVar4 = 0xffffffea;
    }
    else {
        uStack_140 = 2;
        uStack_13a = sched_clock();
        uStack_13c = 0x801;
        InstructionSynchronizationBarrier();
        uStack_130 = cntvct_el0;
        uStack_132 = 0x805;
        uStack_3c = 0x16;
        iVar3 = vscnprintf(auStack_126,0xe7,arg2,&stack0xfffffffffffffe80);
        uVar5 = uStack_3c;
        if (uStack_3c - 0xfe < 0xffffff00) {
            _printk(0x8000630,"tsv_write_data");
        }
        else {
            if (0xff < uStack_3c) goto code_r0x08001cbc;
            *(&uStack_13e + uVar5) = 4;
            *(&uStack_13e + uVar5 + 1) = iVar3;
            uStack_3c = uStack_3c + 2;
        }
        uStack_3c = uStack_3c + iVar3;
        uStack_140 = CONCAT11(uStack_3c + -2,uStack_140);
        uStack_13e = uStack_140;
        sym.ipc_log_write(arg1,&uStack_140);
        uVar4 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x08001cbc:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001cc0);
    (*pcVar2)();
}


// ===== sym.ipc_log_extract @ 0x08001cc0 (size 960) =====

uint64_t sym.ipc_log_extract(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    code *pcVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    char *pcVar8;
    char *pcVar9;
    ulong uVar10;
    int16_t iVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint16_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    int64_t iVar18;
    ulong *puVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uchar auVar21 [12];
    uint8_t uStack_34b;
    ulong uStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    uint8_t auStack_17c [4];
    uint8_t uStack_178;
    uint8_t uStack_177;
    uint uStack_74;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_70 = *(iVar13 + 0x5e0);
    uVar7 = 0x108;
    memset(&uStack_178,0);
    iStack_190 = 0;
    uStack_188 = 0;
    uStack_198 = 0;
    if (arg3 < 0x3fc) {
        uVar16 = 0xffffffea;
        goto code_r0x08002024;
    }
    uStack_188 = arg3 & 0xffffffff;
    iStack_190 = arg2;
    uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
    iVar13 = arg1 + 0xa0;
    _raw_spin_lock(iVar13);
    if (*(arg1 + 0xcc) == '\0') {
        if ((arg1 != 0) && (0x3fb < uStack_188)) {
            do {
                iVar18 = *(arg1 + 0x78);
                uVar14 = *(iVar18 + 0x40);
                if ((iVar18 == *(arg1 + 0x68)) && (uVar14 == *(iVar18 + 0xe))) break;
                uVar7 = 0xfb8 - uVar14;
                auStack_17c[0] = 0;
                auStack_17c[1] = 0;
                if (1 < uVar7) {
                    uVar7 = 2;
                }
                if (0xfb8 < uVar14) {
code_r0x08002078:
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x800207c);
                    (*pcVar3)();
                }
                memcpy(auStack_17c,iVar18 + uVar14 + 0x48,uVar7);
                if (uVar7 == 2) {
                    iVar11 = 2;
                }
                else {
                    *(iVar18 + 0x40) = 0;
                    iVar18 = *(arg1 + 0x78);
                    if (iVar18 == 0) {
                        *(arg1 + 0x78) = 0;
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001f88);
                        (*pcVar3)();
                    }
                    if (*(arg1 + 0x60) == iVar18) {
                        iVar18 = *(arg1 + 0x58);
                        *(arg1 + 0x78) = iVar18;
                    }
                    else {
                        iVar18 = *(iVar18 + 0x30) + -0x30;
                        *(arg1 + 0x78) = iVar18;
                    }
                    if (iVar18 == 0) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001fa8);
                        (*pcVar3)();
                    }
                    uVar14 = *(iVar18 + 0x40);
                    if (0xfb8 < uVar14) goto code_r0x08002078;
                    iVar4 = 2 - uVar7;
                    memcpy(auStack_17c + uVar7,iVar18 + uVar14 + 0x48,iVar4);
                    iVar11 = iVar4;
                }
                *(iVar18 + 0x40) = iVar11 + uVar14;
                iVar18 = *(arg1 + 0x78);
                uVar17 = auStack_17c[1];
                uStack_74 = 2;
                uVar12 = *(iVar18 + 0x40);
                uVar15 = auStack_17c[1];
                uStack_177 = auStack_17c[1];
                uStack_178 = auStack_17c[0];
                uVar16 = 0xfb8 - uVar12;
                if (uVar17 <= 0xfb8 - uVar12) {
                    uVar16 = uVar17;
                }
                if (0xfb8 < uVar12) goto code_r0x08002078;
                uVar7 = uVar16;
                memcpy(&uStack_178 | 4,iVar18 + uVar12 + 0x48);
                uVar15 = uVar15 - uVar16;
                if (uVar15 != 0) {
                    *(iVar18 + 0x40) = 0;
                    iVar18 = *(arg1 + 0x78);
                    if (iVar18 == 0) {
                        *(arg1 + 0x78) = 0;
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001f94);
                        (*pcVar3)();
                    }
                    if (*(arg1 + 0x60) == iVar18) {
                        iVar18 = *(arg1 + 0x58);
                        *(arg1 + 0x78) = iVar18;
                    }
                    else {
                        iVar18 = *(iVar18 + 0x30) + -0x30;
                        *(arg1 + 0x78) = iVar18;
                    }
                    if (iVar18 == 0) {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x8001fbc);
                        (*pcVar3)();
                    }
                    if (0xfb8 < *(iVar18 + 0x40)) goto code_r0x08002078;
                    uVar7 = uVar15;
                    memcpy((&uStack_178 | 4) + uVar16,iVar18 + *(iVar18 + 0x40) + 0x48);
                    uVar17 = uVar15;
                }
                *(iVar18 + 0x40) = *(iVar18 + 0x40) + uVar17;
                for (piVar5 = *(arg1 + 0x90); piVar5 != arg1 + 0x90; piVar5 = *piVar5) {
                    if (*(piVar5 + 2) == uStack_178) {
                        pcVar3 = piVar5[3];
                        goto code_r0x08001f28;
                    }
                }
                pcVar3 = NULL;
code_r0x08001f28:
                _raw_spin_unlock(iVar13);
                _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
                if (pcVar3 == NULL) {
                    uVar7 = uStack_178;
                    _printk(0x8000540,"ipc_log_extract");
                }
                else {
                    if (pcVar3 != sym.__typeid__ZTSFvP14encode_contextP14decode_contextE_global_addr) {
                        uVar7 = 0x8000450;
                        __cfi_slowpath_diag(0x3dd3aae8729ef37e,pcVar3);
                    }
                    (*pcVar3)(&uStack_178,&uStack_198);
                }
                uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                _raw_spin_lock(iVar13);
            } while (0x3fb < uStack_188);
        }
        uVar15 = arg3 - uStack_188;
        uVar16 = uVar15;
        if (uVar15 == 0) {
            if (*(arg1 + 0xcc) != '\0') goto code_r0x08001d54;
            uVar16 = 0;
            *(arg1 + 0xa8) = 0;
        }
    }
    else {
code_r0x08001d54:
        uVar16 = 0xfffffffb;
    }
    _raw_spin_unlock(iVar13);
    _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
code_r0x08002024:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return uVar16;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._8_8_;
    iVar18 = auVar20._0_8_;
    *extraout_x18 = sym.tsv_timestamp_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar18 + 0x104);
    if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80021a0);
        (*pcVar3)();
    }
    if (0xff < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8002218);
        (*pcVar3)();
    }
    cVar2 = *(iVar18 + uVar15 + 2);
    *(iVar18 + 0x104) = uVar15 + 2;
    if (cVar2 != '\x01') {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002210);
        (*pcVar3)();
    }
    if (0xf5 < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80021dc);
        (*pcVar3)();
    }
    uVar16 = *(iVar18 + uVar15 + 2 + 2);
    *(iVar18 + 0x104) = uVar15 + 10;
    pcVar8 = "[%6u.%09lu%s/";
    uVar7 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),"[%6u.%09lu%s/",uVar16 / 1000000000,uVar16 % 1000000000,uVar7);
    *(iVar6 + 8) = *(iVar6 + 8) + uVar7;
    *(iVar6 + 0x10) = *(iVar6 + 0x10) - uVar7;
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iVar13) {
        return uVar7;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._8_8_;
    iVar18 = auVar20._0_8_;
    *extraout_x18_00 = sym.tsv_qtimer_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar18 + 0x104);
    if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002314);
        (*pcVar3)();
    }
    if (0xff < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x800238c);
        (*pcVar3)();
    }
    cVar2 = *(iVar18 + uVar15 + 2);
    *(iVar18 + 0x104) = uVar15 + 2;
    if (cVar2 != '\x05') {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002384);
        (*pcVar3)();
    }
    if (0xf5 < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002350);
        (*pcVar3)();
    }
    uVar10 = *(iVar18 + uVar15 + 2 + 2);
    *(iVar18 + 0x104) = uVar15 + 10;
    pcVar9 = "%#18llx]%s";
    uVar7 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),"%#18llx]%s",uVar10,pcVar8);
    *(iVar6 + 8) = *(iVar6 + 8) + uVar7;
    *(iVar6 + 0x10) = *(iVar6 + 0x10) - uVar7;
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iVar13) {
        return uVar7;
    }
    auVar20 = __stack_chk_fail();
    iVar6 = auVar20._8_8_;
    iVar18 = auVar20._0_8_;
    *extraout_x18_01 = sym.tsv_pointer_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar15 = *(iVar18 + 0x104);
    if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar3)();
    }
    if (0xff < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar3)();
    }
    cVar2 = *(iVar18 + uVar15 + 2);
    *(iVar18 + 0x104) = uVar15 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar3)();
    }
    if (0xf5 < uVar15) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar3)();
    }
    uVar10 = *(iVar18 + uVar15 + 2 + 2);
    *(iVar18 + 0x104) = uVar15 + 10;
    uVar7 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),pcVar9,uVar10);
    *(iVar6 + 8) = *(iVar6 + 8) + uVar7;
    *(iVar6 + 0x10) = *(iVar6 + 0x10) - uVar7;
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) != iVar13) {
        auVar20 = __stack_chk_fail();
        iVar6 = auVar20._8_8_;
        iVar18 = auVar20._0_8_;
        *extraout_x18_02 = sym.tsv_int32_read;
        iVar13 = sp_el0;
        iVar13 = *(iVar13 + 0x5e0);
        uVar15 = *(iVar18 + 0x104);
        if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80025f4);
            (*pcVar3)();
        }
        if (0xff < uVar15) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x5512,0x8002670);
            (*pcVar3)();
        }
        cVar2 = *(iVar18 + uVar15 + 2);
        *(iVar18 + 0x104) = uVar15 + 2;
        if (cVar2 != '\x03') {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002668);
            (*pcVar3)();
        }
        if (0xf9 < uVar15) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002630);
            (*pcVar3)();
        }
        uVar7 = *(iVar18 + uVar15 + 2 + 2);
        *(iVar18 + 0x104) = uVar15 + 6;
        iVar4 = scnprintf(*(iVar6 + 8),*(iVar6 + 0x10),pcVar9,uVar7);
        *(iVar6 + 8) = *(iVar6 + 8) + iVar4;
        *(iVar6 + 0x10) = *(iVar6 + 0x10) - iVar4;
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iVar13) {
            return uVar7;
        }
        auVar20 = __stack_chk_fail();
        iVar6 = auVar20._8_8_;
        iVar18 = auVar20._0_8_;
        *extraout_x18_03 = sym.tsv_byte_array_read;
        iVar13 = sp_el0;
        iVar13 = *(iVar13 + 0x5e0);
        uVar15 = *(iVar18 + 0x104);
        if (uVar15 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar3)();
        }
        if (uVar15 < 0x100) {
            uVar1 = uVar15 + 2;
            uVar14 = *(iVar18 + uVar15 + 2);
            *(iVar18 + 0x104) = uVar1;
            if ((uVar14 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar3)();
            }
            uStack_34b = uVar14 >> 8;
            if (0xff < uVar1 + uStack_34b) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar3)();
            }
            if (uVar1 < 0x100) {
                uVar7 = uStack_34b;
                uVar16 = memcpy(*(iVar6 + 8),iVar18 + uVar1 + 2);
                *(iVar18 + 0x104) = *(iVar18 + 0x104) + uStack_34b;
                *(iVar6 + 8) = *(iVar6 + 8) + uStack_34b;
                *(iVar6 + 0x10) = *(iVar6 + 0x10) - uStack_34b;
                iVar18 = sp_el0;
                if (*(iVar18 + 0x5e0) != iVar13) {
                    auVar21 = __stack_chk_fail();
                    iVar13 = auVar21._0_8_;
                    *extraout_x18_04 = sym.add_deserialization_func;
                    uVar16 = 0xffffffea;
                    if ((iVar13 != 0) && (uVar7 != 0)) {
                        iVar18 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar18 = 0x30;
                        }
                        piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar18),0xcc0,0x20);
                        if (piVar5 == NULL) {
                            uVar16 = 0xffffffe4;
                        }
                        else {
                            uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                            _raw_spin_lock(iVar13 + 0xa0);
                            puVar19 = *(iVar13 + 0x98);
                            *(piVar5 + 2) = auVar21._8_4_;
                            piVar5[3] = uVar7;
                            uVar7 = __list_add_valid(piVar5,puVar19,iVar13 + 0x90);
                            if ((uVar7 & 1) != 0) {
                                *(iVar13 + 0x98) = piVar5;
                                *piVar5 = iVar13 + 0x90;
                                piVar5[1] = puVar19;
                                *puVar19 = piVar5;
                            }
                            _raw_spin_unlock(iVar13 + 0xa0);
                            _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
                            uVar16 = 0;
                        }
                    }
                    return uVar16;
                }
                return uVar16;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar3)();
    }
    return uVar7;
}


// ===== sym.tsv_timestamp_read @ 0x08002080 (size 412) =====

uint64_t sym.tsv_timestamp_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    int64_t iVar10;
    char *pcVar11;
    char *pcVar12;
    ulong uVar13;
    int64_t iVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *puVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [12];
    uint8_t uStack_1ab;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(arg1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80021a0);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002218);
        (*pcVar5)();
    }
    cVar2 = *(arg1 + uVar4 + 2);
    *(arg1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x01') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002210);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80021dc);
        (*pcVar5)();
    }
    uVar15 = *(arg1 + uVar4 + 2 + 2);
    *(arg1 + 0x104) = uVar4 + 10;
    pcVar11 = "[%6u.%09lu%s/";
    uVar15 = scnprintf(*(arg2 + 8),*(arg2 + 0x10),"[%6u.%09lu%s/",uVar15 / 1000000000,uVar15 % 1000000000,arg3);
    *(arg2 + 8) = *(arg2 + 8) + uVar15;
    *(arg2 + 0x10) = *(arg2 + 0x10) - uVar15;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar14) {
        return uVar15;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18 = sym.tsv_qtimer_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar7 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002314);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x800238c);
        (*pcVar5)();
    }
    cVar2 = *(iVar7 + uVar4 + 2);
    *(iVar7 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x05') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002384);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002350);
        (*pcVar5)();
    }
    uVar13 = *(iVar7 + uVar4 + 2 + 2);
    *(iVar7 + 0x104) = uVar4 + 10;
    pcVar12 = "%#18llx]%s";
    uVar15 = scnprintf(*(iVar10 + 8),*(iVar10 + 0x10),"%#18llx]%s",uVar13,pcVar11);
    *(iVar10 + 8) = *(iVar10 + 8) + uVar15;
    *(iVar10 + 0x10) = *(iVar10 + 0x10) - uVar15;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar14) {
        return uVar15;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18_00 = sym.tsv_pointer_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar7 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar5)();
    }
    cVar2 = *(iVar7 + uVar4 + 2);
    *(iVar7 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar5)();
    }
    uVar13 = *(iVar7 + uVar4 + 2 + 2);
    *(iVar7 + 0x104) = uVar4 + 10;
    uVar15 = scnprintf(*(iVar10 + 8),*(iVar10 + 0x10),pcVar12,uVar13);
    *(iVar10 + 8) = *(iVar10 + 8) + uVar15;
    *(iVar10 + 0x10) = *(iVar10 + 0x10) - uVar15;
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar14) {
        return uVar15;
    }
    auVar17 = __stack_chk_fail();
    iVar10 = auVar17._8_8_;
    iVar7 = auVar17._0_8_;
    *extraout_x18_01 = sym.tsv_int32_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar7 + 0x104);
    if (0xfffffffffffffeff < uVar4 - 0xfeU) {
        if (0xff < uVar4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
            (*pcVar5)();
        }
        cVar2 = *(iVar7 + uVar4 + 2);
        *(iVar7 + 0x104) = uVar4 + 2;
        if (cVar2 != '\x03') {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
            (*pcVar5)();
        }
        if (0xf9 < uVar4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
            (*pcVar5)();
        }
        uVar15 = *(iVar7 + uVar4 + 2 + 2);
        *(iVar7 + 0x104) = uVar4 + 6;
        iVar6 = scnprintf(*(iVar10 + 8),*(iVar10 + 0x10),pcVar12,uVar15);
        *(iVar10 + 8) = *(iVar10 + 8) + iVar6;
        *(iVar10 + 0x10) = *(iVar10 + 0x10) - iVar6;
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iVar14) {
            return uVar15;
        }
        auVar17 = __stack_chk_fail();
        iVar10 = auVar17._8_8_;
        iVar7 = auVar17._0_8_;
        *extraout_x18_02 = sym.tsv_byte_array_read;
        iVar14 = sp_el0;
        iVar14 = *(iVar14 + 0x5e0);
        uVar4 = *(iVar7 + 0x104);
        if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar5)();
        }
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar7 + uVar4 + 2);
            *(iVar7 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_1ab = uVar3 >> 8;
            if (0xff < uVar1 + uStack_1ab) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar15 = uStack_1ab;
                uVar8 = memcpy(*(iVar10 + 8),iVar7 + uVar1 + 2);
                *(iVar7 + 0x104) = *(iVar7 + 0x104) + uStack_1ab;
                *(iVar10 + 8) = *(iVar10 + 8) + uStack_1ab;
                *(iVar10 + 0x10) = *(iVar10 + 0x10) - uStack_1ab;
                iVar7 = sp_el0;
                if (*(iVar7 + 0x5e0) == iVar14) {
                    return uVar8;
                }
                auVar18 = __stack_chk_fail();
                iVar14 = auVar18._0_8_;
                *extraout_x18_03 = sym.add_deserialization_func;
                uVar8 = 0xffffffea;
                if ((iVar14 != 0) && (uVar15 != 0)) {
                    iVar7 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar7 = 0x30;
                    }
                    piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,0x20);
                    if (piVar9 == NULL) {
                        uVar8 = 0xffffffe4;
                    }
                    else {
                        uVar13 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar14 + 0xa0);
                        puVar16 = *(iVar14 + 0x98);
                        *(piVar9 + 2) = auVar18._8_4_;
                        piVar9[3] = uVar15;
                        uVar15 = __list_add_valid(piVar9,puVar16,iVar14 + 0x90);
                        if ((uVar15 & 1) != 0) {
                            *(iVar14 + 0x98) = piVar9;
                            *piVar9 = iVar14 + 0x90;
                            piVar9[1] = puVar16;
                            *puVar16 = piVar9;
                        }
                        _raw_spin_unlock(iVar14 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar13);
                        uVar8 = 0;
                    }
                }
                return uVar8;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
    (*pcVar5)();
}


// ===== sym.tsv_qtimer_read @ 0x0800221c (size 372) =====

uint64_t sym.tsv_qtimer_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    char *pcVar12;
    ulong uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *puVar15;
    ulong unaff_x30;
    uchar auVar16 [16];
    uchar auVar17 [12];
    uint8_t uStack_14b;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(arg1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002314);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x800238c);
        (*pcVar5)();
    }
    cVar2 = *(arg1 + uVar4 + 2);
    *(arg1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x05') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002384);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002350);
        (*pcVar5)();
    }
    uVar13 = *(arg1 + uVar4 + 2 + 2);
    *(arg1 + 0x104) = uVar4 + 10;
    pcVar12 = "%#18llx]%s";
    uVar7 = scnprintf(*(arg2 + 8),*(arg2 + 0x10),"%#18llx]%s",uVar13,arg3);
    *(arg2 + 8) = *(arg2 + 8) + uVar7;
    *(arg2 + 0x10) = *(arg2 + 0x10) - uVar7;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar14) {
        return uVar7;
    }
    auVar16 = __stack_chk_fail();
    iVar11 = auVar16._8_8_;
    iVar8 = auVar16._0_8_;
    *extraout_x18 = sym.tsv_pointer_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar5)();
    }
    cVar2 = *(iVar8 + uVar4 + 2);
    *(iVar8 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar5)();
    }
    uVar13 = *(iVar8 + uVar4 + 2 + 2);
    *(iVar8 + 0x104) = uVar4 + 10;
    uVar7 = scnprintf(*(iVar11 + 8),*(iVar11 + 0x10),pcVar12,uVar13);
    *(iVar11 + 8) = *(iVar11 + 8) + uVar7;
    *(iVar11 + 0x10) = *(iVar11 + 0x10) - uVar7;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar14) {
        return uVar7;
    }
    auVar16 = __stack_chk_fail();
    iVar11 = auVar16._8_8_;
    iVar8 = auVar16._0_8_;
    *extraout_x18_00 = sym.tsv_int32_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
        (*pcVar5)();
    }
    cVar2 = *(iVar8 + uVar4 + 2);
    *(iVar8 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x03') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
        (*pcVar5)();
    }
    if (0xf9 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
        (*pcVar5)();
    }
    uVar7 = *(iVar8 + uVar4 + 2 + 2);
    *(iVar8 + 0x104) = uVar4 + 6;
    iVar6 = scnprintf(*(iVar11 + 8),*(iVar11 + 0x10),pcVar12,uVar7);
    *(iVar11 + 8) = *(iVar11 + 8) + iVar6;
    *(iVar11 + 0x10) = *(iVar11 + 0x10) - iVar6;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar14) {
        return uVar7;
    }
    auVar16 = __stack_chk_fail();
    iVar11 = auVar16._8_8_;
    iVar8 = auVar16._0_8_;
    *extraout_x18_01 = sym.tsv_byte_array_read;
    iVar14 = sp_el0;
    iVar14 = *(iVar14 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (0xfffffffffffffeff < uVar4 - 0xfeU) {
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar8 + uVar4 + 2);
            *(iVar8 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_14b = uVar3 >> 8;
            if (0xff < uVar1 + uStack_14b) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar7 = uStack_14b;
                uVar9 = memcpy(*(iVar11 + 8),iVar8 + uVar1 + 2);
                *(iVar8 + 0x104) = *(iVar8 + 0x104) + uStack_14b;
                *(iVar11 + 8) = *(iVar11 + 8) + uStack_14b;
                *(iVar11 + 0x10) = *(iVar11 + 0x10) - uStack_14b;
                iVar8 = sp_el0;
                if (*(iVar8 + 0x5e0) == iVar14) {
                    return uVar9;
                }
                auVar17 = __stack_chk_fail();
                iVar14 = auVar17._0_8_;
                *extraout_x18_02 = sym.add_deserialization_func;
                uVar9 = 0xffffffea;
                if ((iVar14 != 0) && (uVar7 != 0)) {
                    iVar8 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar8 = 0x30;
                    }
                    piVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xcc0,0x20);
                    if (piVar10 == NULL) {
                        uVar9 = 0xffffffe4;
                    }
                    else {
                        uVar13 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar14 + 0xa0);
                        puVar15 = *(iVar14 + 0x98);
                        *(piVar10 + 2) = auVar17._8_4_;
                        piVar10[3] = uVar7;
                        uVar7 = __list_add_valid(piVar10,puVar15,iVar14 + 0x90);
                        if ((uVar7 & 1) != 0) {
                            *(iVar14 + 0x98) = piVar10;
                            *piVar10 = iVar14 + 0x90;
                            piVar10[1] = puVar15;
                            *puVar15 = piVar10;
                        }
                        _raw_spin_unlock(iVar14 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar13);
                        uVar9 = 0;
                    }
                }
                return uVar9;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
    (*pcVar5)();
}


// ===== sym.tsv_pointer_read @ 0x08002390 (size 364) =====

uint64_t sym.tsv_pointer_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t iVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *puVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uchar auVar16 [12];
    uint8_t uStack_eb;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar4 = *(arg1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002480);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80024f8);
        (*pcVar5)();
    }
    cVar2 = *(arg1 + uVar4 + 2);
    *(arg1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x02') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024f0);
        (*pcVar5)();
    }
    if (0xf5 < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80024bc);
        (*pcVar5)();
    }
    uVar12 = *(arg1 + uVar4 + 2 + 2);
    *(arg1 + 0x104) = uVar4 + 10;
    uVar7 = scnprintf(*(arg2 + 8),*(arg2 + 0x10),arg3,uVar12);
    *(arg2 + 8) = *(arg2 + 8) + uVar7;
    *(arg2 + 0x10) = *(arg2 + 0x10) - uVar7;
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iVar13) {
        return uVar7;
    }
    auVar15 = __stack_chk_fail();
    iVar11 = auVar15._8_8_;
    iVar8 = auVar15._0_8_;
    *extraout_x18 = sym.tsv_int32_read;
    iVar13 = sp_el0;
    iVar13 = *(iVar13 + 0x5e0);
    uVar4 = *(iVar8 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
        (*pcVar5)();
    }
    cVar2 = *(iVar8 + uVar4 + 2);
    *(iVar8 + 0x104) = uVar4 + 2;
    if (cVar2 == '\x03') {
        if (0xf9 < uVar4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
            (*pcVar5)();
        }
        uVar7 = *(iVar8 + uVar4 + 2 + 2);
        *(iVar8 + 0x104) = uVar4 + 6;
        iVar6 = scnprintf(*(iVar11 + 8),*(iVar11 + 0x10),arg3,uVar7);
        *(iVar11 + 8) = *(iVar11 + 8) + iVar6;
        *(iVar11 + 0x10) = *(iVar11 + 0x10) - iVar6;
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iVar13) {
            return uVar7;
        }
        auVar15 = __stack_chk_fail();
        iVar11 = auVar15._8_8_;
        iVar8 = auVar15._0_8_;
        *extraout_x18_00 = sym.tsv_byte_array_read;
        iVar13 = sp_el0;
        iVar13 = *(iVar13 + 0x5e0);
        uVar4 = *(iVar8 + 0x104);
        if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar5)();
        }
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar8 + uVar4 + 2);
            *(iVar8 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_eb = uVar3 >> 8;
            if (0xff < uVar1 + uStack_eb) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar7 = uStack_eb;
                uVar9 = memcpy(*(iVar11 + 8),iVar8 + uVar1 + 2);
                *(iVar8 + 0x104) = *(iVar8 + 0x104) + uStack_eb;
                *(iVar11 + 8) = *(iVar11 + 8) + uStack_eb;
                *(iVar11 + 0x10) = *(iVar11 + 0x10) - uStack_eb;
                iVar8 = sp_el0;
                if (*(iVar8 + 0x5e0) == iVar13) {
                    return uVar9;
                }
                auVar16 = __stack_chk_fail();
                iVar13 = auVar16._0_8_;
                *extraout_x18_01 = sym.add_deserialization_func;
                uVar9 = 0xffffffea;
                if ((iVar13 != 0) && (uVar7 != 0)) {
                    iVar8 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar8 = 0x30;
                    }
                    piVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xcc0,0x20);
                    if (piVar10 == NULL) {
                        uVar9 = 0xffffffe4;
                    }
                    else {
                        uVar12 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar13 + 0xa0);
                        puVar14 = *(iVar13 + 0x98);
                        *(piVar10 + 2) = auVar16._8_4_;
                        piVar10[3] = uVar7;
                        uVar7 = __list_add_valid(piVar10,puVar14,iVar13 + 0x90);
                        if ((uVar7 & 1) != 0) {
                            *(iVar13 + 0x98) = piVar10;
                            *piVar10 = iVar13 + 0x90;
                            piVar10[1] = puVar14;
                            *puVar14 = piVar10;
                        }
                        _raw_spin_unlock(iVar13 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar12);
                        uVar9 = 0;
                    }
                }
                return uVar9;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
    (*pcVar5)();
}


// ===== sym.tsv_int32_read @ 0x080024fc (size 376) =====

uint64_t sym.tsv_int32_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar13;
    ulong *puVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uchar auVar16 [12];
    uint8_t uStack_8b;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iVar12 = *(iVar12 + 0x5e0);
    uVar4 = *(arg1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x80025f4);
        (*pcVar5)();
    }
    if (0xff < uVar4) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8002670);
        (*pcVar5)();
    }
    cVar2 = *(arg1 + uVar4 + 2);
    *(arg1 + 0x104) = uVar4 + 2;
    if (cVar2 != '\x03') {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002668);
        (*pcVar5)();
    }
    if (uVar4 < 0xfa) {
        uVar13 = *(arg1 + uVar4 + 2 + 2);
        *(arg1 + 0x104) = uVar4 + 6;
        iVar6 = scnprintf(*(arg2 + 8),*(arg2 + 0x10),arg3,uVar13);
        *(arg2 + 8) = *(arg2 + 8) + iVar6;
        *(arg2 + 0x10) = *(arg2 + 0x10) - iVar6;
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iVar12) {
            return uVar13;
        }
        auVar15 = __stack_chk_fail();
        iVar11 = auVar15._8_8_;
        iVar7 = auVar15._0_8_;
        *extraout_x18 = sym.tsv_byte_array_read;
        iVar12 = sp_el0;
        iVar12 = *(iVar12 + 0x5e0);
        uVar4 = *(iVar7 + 0x104);
        if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
            (*pcVar5)();
        }
        if (uVar4 < 0x100) {
            uVar1 = uVar4 + 2;
            uVar3 = *(iVar7 + uVar4 + 2);
            *(iVar7 + 0x104) = uVar1;
            if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
                (*pcVar5)();
            }
            uStack_8b = uVar3 >> 8;
            if (0xff < uVar1 + uStack_8b) {
    //WARNING: Does not return
                pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
                (*pcVar5)();
            }
            if (uVar1 < 0x100) {
                uVar13 = uStack_8b;
                uVar8 = memcpy(*(iVar11 + 8),iVar7 + uVar1 + 2);
                *(iVar7 + 0x104) = *(iVar7 + 0x104) + uStack_8b;
                *(iVar11 + 8) = *(iVar11 + 8) + uStack_8b;
                *(iVar11 + 0x10) = *(iVar11 + 0x10) - uStack_8b;
                iVar7 = sp_el0;
                if (*(iVar7 + 0x5e0) == iVar12) {
                    return uVar8;
                }
                auVar16 = __stack_chk_fail();
                iVar12 = auVar16._0_8_;
                *extraout_x18_00 = sym.add_deserialization_func;
                uVar8 = 0xffffffea;
                if ((iVar12 != 0) && (uVar13 != 0)) {
                    iVar7 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar7 = 0x30;
                    }
                    piVar9 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar7),0xcc0,0x20);
                    if (piVar9 == NULL) {
                        uVar8 = 0xffffffe4;
                    }
                    else {
                        uVar10 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                        _raw_spin_lock(iVar12 + 0xa0);
                        puVar14 = *(iVar12 + 0x98);
                        *(piVar9 + 2) = auVar16._8_4_;
                        piVar9[3] = uVar13;
                        uVar13 = __list_add_valid(piVar9,puVar14,iVar12 + 0x90);
                        if ((uVar13 & 1) != 0) {
                            *(iVar12 + 0x98) = piVar9;
                            *piVar9 = iVar12 + 0x90;
                            piVar9[1] = puVar14;
                            *puVar14 = piVar9;
                        }
                        _raw_spin_unlock(iVar12 + 0xa0);
                        _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar10);
                        uVar8 = 0;
                    }
                }
                return uVar8;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
        (*pcVar5)();
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8002630);
    (*pcVar5)();
}


// ===== sym.tsv_byte_array_read @ 0x08002674 (size 348) =====

ulong sym.tsv_byte_array_read(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [12];
    uint8_t uStack_3b;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iVar9 = *(iVar9 + 0x5e0);
    uVar4 = *(arg1 + 0x104);
    if (uVar4 - 0xfeU < 0xffffffffffffff00) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x800,0x8002764);
        (*pcVar5)();
    }
    if (uVar4 < 0x100) {
        uVar1 = uVar4 + 2;
        uVar3 = *(arg1 + uVar4 + 2);
        *(arg1 + 0x104) = uVar1;
        if ((uVar3 & 0xff) != 4) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x8002798);
            (*pcVar5)();
        }
        uStack_3b = uVar3 >> 8;
        if (0xff < uVar1 + uStack_3b) {
    //WARNING: Does not return
            pcVar5 = SoftwareBreakpoint(0x800,0x80027a0);
            (*pcVar5)();
        }
        if (uVar1 < 0x100) {
            uVar8 = uStack_3b;
            uVar6 = memcpy(*(arg2 + 8),arg1 + uVar1 + 2);
            *(arg1 + 0x104) = *(arg1 + 0x104) + uStack_3b;
            *(arg2 + 8) = *(arg2 + 8) + uStack_3b;
            *(arg2 + 0x10) = *(arg2 + 0x10) - uStack_3b;
            iVar2 = sp_el0;
            if (*(iVar2 + 0x5e0) == iVar9) {
                return uVar6;
            }
            auVar11 = __stack_chk_fail();
            iVar9 = auVar11._0_8_;
            *extraout_x18 = sym.add_deserialization_func;
            uVar6 = 0xffffffea;
            if ((iVar9 != 0) && (uVar8 != 0)) {
                iVar2 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar2 = 0x30;
                }
                piVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xcc0,0x20);
                if (piVar7 == NULL) {
                    uVar6 = 0xffffffe4;
                }
                else {
                    uVar6 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
                    _raw_spin_lock(iVar9 + 0xa0);
                    puVar10 = *(iVar9 + 0x98);
                    *(piVar7 + 2) = auVar11._8_4_;
                    piVar7[3] = uVar8;
                    uVar8 = __list_add_valid(piVar7,puVar10,iVar9 + 0x90);
                    if ((uVar8 & 1) != 0) {
                        *(iVar9 + 0x98) = piVar7;
                        *piVar7 = iVar9 + 0x90;
                        piVar7[1] = puVar10;
                        *puVar10 = piVar7;
                    }
                    _raw_spin_unlock(iVar9 + 0xa0);
                    _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar6);
                    uVar6 = 0;
                }
            }
            return uVar6;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x80027cc);
    (*pcVar5)();
}


// ===== sym.add_deserialization_func @ 0x080027d0 (size 256) =====

ulong sym.add_deserialization_func(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = 0xffffffea;
    if ((arg1 != 0) && (arg3 != 0)) {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xcc0,0x20);
        if (piVar3 == NULL) {
            uVar2 = 0xffffffe4;
        }
        else {
            uVar2 = _raw_read_lock_irqsave(obj.context_list_lock_lha1);
            _raw_spin_lock(arg1 + 0xa0);
            puVar5 = *(arg1 + 0x98);
            *(piVar3 + 2) = arg2;
            piVar3[3] = arg3;
            uVar4 = __list_add_valid(piVar3,puVar5,arg1 + 0x90);
            if ((uVar4 & 1) != 0) {
                *(arg1 + 0x98) = piVar3;
                *piVar3 = arg1 + 0x90;
                piVar3[1] = puVar5;
                *puVar5 = piVar3;
            }
            _raw_spin_unlock(arg1 + 0xa0);
            _raw_read_unlock_irqrestore(obj.context_list_lock_lha1,uVar2);
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.ipc_log_context_create @ 0x080028d0 (size 1556) =====

int64_t * sym.ipc_log_context_create(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    int64_t *piVar14;
    ulong *puVar15;
    ulong unaff_x30;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    int64_t *piStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    uVar9 = arg3;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    uVar3 = arg1;
    uVar5 = _raw_write_lock_irqsave(obj.context_list_lock_lha1);
    if (_segment.ehdr == NULL) {
        iVar10 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar10 = 0x30;
        }
        piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xb20,0x10);
        _segment.ehdr = piVar6;
        if (piVar6 == NULL) {
            _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar5);
            _printk(0x800055c);
code_r0x08002e3c:
            piVar6 = NULL;
            goto code_r0x08002e40;
        }
        *piVar6 = piVar6;
        piVar6[1] = piVar6;
        piVar7 = _segment.ehdr;
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        piStack_80 = NULL;
        uStack_98 = 0;
        uStack_90 = 0;
        if (_segment.ehdr < 0x10) {
            scnprintf(&uStack_98,0xd,"%d_%s",_segment.ehdr & 0xffffffff,"ipc_log_ctxt_list");
            iVar10 = (piVar6 << 8) >> 8;
            uVar8 = iVar10 + 0x8000000000;
            iStack_78 = _simple_open + uVar8;
            if (uVar8 >> 0x26 != 0) {
                iStack_78 = iVar10 - __raw_spin_lock;
            }
            uStack_70 = 0x10;
            piStack_80 = piVar6;
            iVar4 = msm_minidump_add_region(&uStack_98);
            if (iVar4 < 0) {
                _printk(0x80005e8,"ipc_log_ctxt_list",piVar7 & 0xffffffff,iVar4);
            }
            else {
                _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
            }
        }
    }
    _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar5);
    _raw_read_lock_irq(obj.context_list_lock_lha1);
    piVar7 = _segment.ehdr;
    for (piVar6 = *_segment.ehdr; piVar7 != piVar6; piVar6 = *piVar6) {
        iVar4 = strcmp(piVar6 + -4,arg2);
        if (iVar4 == 0) {
            piVar6 = piVar6 + -7;
            _raw_read_unlock_irq(obj.context_list_lock_lha1);
            if (piVar6 != NULL) goto code_r0x08002e40;
            goto code_r0x08002a54;
        }
    }
    _raw_read_unlock_irq(obj.context_list_lock_lha1);
code_r0x08002a54:
    piVar6 = kmem_cache_alloc_trace(_sched_clock,0xdc0,0xd0);
    if (piVar6 == NULL) goto code_r0x08002e40;
    *(piVar6 + 0x15) = 0;
    __init_swait_queue_head(piVar6 + 0x16,"&x->wait",obj.init_completion.__key);
    piVar12 = piVar6 + 0x14;
    *piVar12 = 0;
    piVar14 = piVar6 + 9;
    piVar6[9] = piVar14;
    piVar6[10] = piVar14;
    piVar6[0x12] = piVar6 + 0x12;
    piVar6[0x13] = piVar6 + 0x12;
    uVar5 = _raw_spin_lock_irqsave(piVar12);
    piVar7 = _segment.ehdr;
    if ((uVar9 >> 0x10 & 1) != 0) {
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        piStack_80 = NULL;
        uStack_98 = 0;
        uStack_90 = 0;
        if (_segment.ehdr < 0x10) {
            scnprintf(&uStack_98,0xd,"%d_%s",_segment.ehdr & 0xffffffff,"ipc_ctxt");
            iVar10 = (piVar6 << 8) >> 8;
            uVar8 = iVar10 + 0x8000000000;
            iStack_78 = _simple_open + uVar8;
            if (uVar8 >> 0x26 != 0) {
                iStack_78 = iVar10 - __raw_spin_lock;
            }
            uStack_70 = 0xd0;
            piStack_80 = piVar6;
            iVar4 = msm_minidump_add_region(&uStack_98);
            if (iVar4 < 0) {
                _printk(0x80005e8,"ipc_ctxt",piVar7 & 0xffffffff,iVar4);
            }
            else {
                _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
            }
        }
    }
    _raw_spin_unlock_irqrestore(piVar12,uVar5);
    if (uVar3 < 1) {
        piVar7 = NULL;
    }
    else {
        uVar11 = 0;
        do {
            piVar7 = kmem_cache_alloc_trace(_sched_clock,0xdc0,0x1000);
            if (piVar7 == NULL) {
                if (uVar11 != 0) {
                    iVar4 = uVar11 + 1;
                    do {
                        piVar7 = *piVar14;
                        uVar8 = __list_del_entry_valid(piVar7);
                        if ((uVar8 & 1) != 0) {
                            iVar10 = *piVar7;
                            piVar12 = piVar7[1];
                            *(iVar10 + 8) = piVar12;
                            *piVar12 = iVar10;
                        }
                        *piVar7 = -0x2152ffffffffff00;
                        piVar7[1] = -0x2152fffffffffede;
                        kfree(piVar7 + -6);
                        iVar4 = iVar4 + -1;
                    } while (1 < iVar4);
                }
                kfree(piVar6);
                goto code_r0x08002e3c;
            }
            piVar7[2] = piVar6;
            *(piVar7 + 1) = uVar11 | 0x80000000;
            piVar7[5] = piVar6 - piVar7;
            *piVar7 = -0x52784425ad87bbdb;
            uVar5 = _raw_spin_lock_irqsave(piVar12);
            puVar15 = piVar6[10];
            piVar1 = piVar7 + 6;
            uVar8 = __list_add_valid(piVar1,puVar15,piVar14);
            if ((uVar8 & 1) != 0) {
                piVar6[10] = piVar1;
                piVar7[6] = piVar14;
                piVar7[7] = puVar15;
                *puVar15 = piVar1;
            }
            piVar1 = _segment.ehdr;
            if ((uVar9 >> 0x10 & 1) != 0) {
                iStack_78 = 0;
                uStack_70 = 0;
                uStack_88 = 0;
                piStack_80 = NULL;
                uStack_98 = 0;
                uStack_90 = 0;
                if (_segment.ehdr < 0x10) {
                    scnprintf(&uStack_98,0xd,"%d_%s",_segment.ehdr & 0xffffffff,arg2);
                    iVar10 = (piVar7 << 8) >> 8;
                    uVar8 = iVar10 + 0x8000000000;
                    iStack_78 = _simple_open + uVar8;
                    if (uVar8 >> 0x26 != 0) {
                        iStack_78 = iVar10 - __raw_spin_lock;
                    }
                    uStack_70 = 0x1000;
                    piStack_80 = piVar7;
                    iVar4 = msm_minidump_add_region(&uStack_98);
                    if (iVar4 < 0) {
                        _printk(0x80005e8,arg2,piVar1 & 0xffffffff,iVar4);
                    }
                    else {
                        _segment.ehdr = CONCAT44(*0x8000004,_segment.ehdr + 1);
                    }
                }
            }
            _raw_spin_unlock_irqrestore(piVar12,uVar5);
            uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
    }
    piVar6[2] = piVar6;
    *(piVar6 + 1) = 3;
    strscpy(piVar6 + 3,arg2,0x20);
    iVar10 = piVar6[9] + -0x30;
    piVar6[0xb] = iVar10;
    piVar6[0xc] = piVar7;
    piVar6[0xd] = iVar10;
    piVar6[0xe] = iVar10;
    piVar6[0xf] = iVar10;
    *(piVar6 + 0xc) = arg3;
    *(piVar6 + 0x10) = uVar3 * 0xfb8;
    *(piVar6 + 0xe) = 0x48;
    *(piVar6 + 0x19) = 1;
    *(piVar6 + 0xcc) = 0;
    sym.create_ctx_debugfs(piVar6,arg2);
    *piVar6 = -0x25874452da78bbae;
    uVar5 = _raw_write_lock_irqsave(obj.context_list_lock_lha1);
    piVar14 = _segment.ehdr;
    piVar7 = piVar6 + 7;
    if (((uVar9 >> 0x10 & 1) == 0) || (0xf < _segment.ehdr)) {
        piVar12 = _segment.ehdr[1];
        uVar8 = __list_add_valid(piVar7,piVar12,_segment.ehdr);
        if ((uVar8 & 1) != 0) {
            piVar14[1] = piVar7;
            piVar6[7] = piVar14;
            piVar6[8] = piVar12;
            goto code_r0x08002dc8;
        }
    }
    else {
        iVar10 = *_segment.ehdr;
        uVar8 = __list_add_valid(piVar7,_segment.ehdr,iVar10);
        if ((uVar8 & 1) != 0) {
            *(iVar10 + 8) = piVar7;
            piVar6[7] = iVar10;
            piVar6[8] = piVar14;
            piVar12 = piVar14;
code_r0x08002dc8:
            *piVar12 = piVar7;
        }
    }
    _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar5);
code_r0x08002e40:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_68) {
        iVar10 = __stack_chk_fail();
        *extraout_x18 = sym.ipc_log_context_free;
        piVar7 = iVar10 + -0x80;
        piVar6 = *piVar7;
        while (piVar6 != piVar7) {
            if (iVar10 + -200 == 0) {
                iVar13 = 0;
            }
            else {
                iVar13 = *piVar7 + -0x30;
            }
            uVar8 = __list_del_entry_valid(iVar13 + 0x30);
            if ((uVar8 & 1) != 0) {
                iVar2 = *(iVar13 + 0x30);
                piVar6 = *(iVar13 + 0x38);
                *(iVar2 + 8) = piVar6;
                *piVar6 = iVar2;
            }
            *(iVar13 + 0x30) = 0xdead000000000100;
            *(iVar13 + 0x38) = 0xdead000000000122;
            kfree(iVar13);
            piVar6 = *piVar7;
        }
        piVar6 = kfree(iVar10 + -200);
        return piVar6;
    }
    return piVar6;
}


// ===== sym.ipc_log_context_free @ 0x08002ee4 (size 164) =====

void sym.ipc_log_context_free(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar5 = arg1 + -0x80;
    piVar3 = *piVar5;
    while (piVar3 != piVar5) {
        if (arg1 + -200 == 0) {
            iVar4 = 0;
        }
        else {
            iVar4 = *piVar5 + -0x30;
        }
        uVar2 = __list_del_entry_valid(iVar4 + 0x30);
        if ((uVar2 & 1) != 0) {
            iVar1 = *(iVar4 + 0x30);
            piVar3 = *(iVar4 + 0x38);
            *(iVar1 + 8) = piVar3;
            *piVar3 = iVar1;
        }
        *(iVar4 + 0x30) = 0xdead000000000100;
        *(iVar4 + 0x38) = 0xdead000000000122;
        kfree(iVar4);
        piVar3 = *piVar5;
    }
    kfree(arg1 + -200);
    return;
}


// ===== sym.ipc_log_context_destroy @ 0x08002f90 (size 456) =====

ulong sym.ipc_log_context_destroy(int64_t arg1)

{
    int *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *puVar10;
    ulong *in_x18;
    int64_t *piVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        debugfs_remove(*(arg1 + 0x88));
        _raw_spin_lock(arg1 + 0xa0);
        *(arg1 + 0xcc) = 1;
        complete_all(arg1 + 0xa8);
        piVar11 = *(arg1 + 0x90);
        while (piVar11 != arg1 + 0x90) {
            piVar12 = *piVar11;
            uVar9 = __list_del_entry_valid(piVar11);
            if ((uVar9 & 1) != 0) {
                iVar3 = *piVar11;
                piVar4 = piVar11[1];
                *(iVar3 + 8) = piVar4;
                *piVar4 = iVar3;
            }
            *piVar11 = -0x2152ffffffffff00;
            piVar11[1] = -0x2152fffffffffede;
            kfree(piVar11);
            piVar11 = piVar12;
        }
        _raw_spin_unlock(arg1 + 0xa0);
        uVar8 = _raw_write_lock_irqsave(obj.context_list_lock_lha1);
        uVar9 = __list_del_entry_valid(arg1 + 0x38);
        if ((uVar9 & 1) != 0) {
            iVar3 = *(arg1 + 0x38);
            piVar11 = *(arg1 + 0x40);
            *(iVar3 + 8) = piVar11;
            *piVar11 = iVar3;
        }
        *(arg1 + 0x38) = 0xdead000000000100;
        *(arg1 + 0x40) = 0xdead000000000122;
        _raw_write_unlock_irqrestore(obj.context_list_lock_lha1,uVar8);
        piVar1 = arg1 + 200;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar5 = *piVar1;
            cVar6 = '\x01';
            bVar7 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
                *piVar1 = iVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        if (iVar5 == 1) {
            DataMemoryBarrier(2,1);
            puVar2 = arg1 + 0x48;
            puVar10 = *puVar2;
            while (puVar10 != puVar2) {
                piVar11 = *puVar2;
                uVar9 = __list_del_entry_valid(piVar11);
                if ((uVar9 & 1) != 0) {
                    iVar3 = *piVar11;
                    piVar12 = piVar11[1];
                    *(iVar3 + 8) = piVar12;
                    *piVar12 = iVar3;
                }
                *piVar11 = -0x2152ffffffffff00;
                piVar11[1] = -0x2152fffffffffede;
                kfree(piVar11 + -6);
                puVar10 = *puVar2;
            }
            kfree(arg1);
        }
        else if (iVar5 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return 0;
}


// ===== sym.ipc_log_drop @ 0x08003158 (size 476) =====

void sym.ipc_log_drop(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint16_t uVar2;
    int16_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    int iVar7;
    int iVar8;
    int iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = arg3;
    uVar2 = *(*(arg1 + 0x70) + 0xc);
    uVar6 = 0xfb8 - uVar2;
    if ((arg3 & 0xffffffffU) <= uVar6) {
        uVar6 = arg3 & 0xffffffffU;
    }
    if (arg2 != 0) {
        if (0xfb8 < uVar2) goto code_r0x08003330;
        memcpy(arg2,*(arg1 + 0x70) + uVar2 + 0x48,uVar6);
    }
    iVar8 = uVar6;
    iVar9 = iVar7;
    if (iVar8 != iVar7) {
        iVar5 = *(arg1 + 0x78);
        if ((iVar5 == *(arg1 + 0x70)) && (*(iVar5 + 0xc) == *(iVar5 + 0x40))) {
            *(iVar5 + 0xc) = 0;
            *(*(arg1 + 0x70) + 0x40) = 0;
            if ((arg1 == 0) || (iVar5 = *(arg1 + 0x70), iVar5 == 0)) {
                *(arg1 + 0x70) = 0;
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8003294);
                (*pcVar4)();
            }
            if (*(arg1 + 0x60) == iVar5) {
                iVar5 = *(arg1 + 0x58);
            }
            else {
                iVar5 = *(iVar5 + 0x30) + -0x30;
            }
            *(arg1 + 0x70) = iVar5;
            if (iVar5 == 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x800332c);
                (*pcVar4)();
            }
            *(arg1 + 0x78) = iVar5;
        }
        else {
            *(*(arg1 + 0x70) + 0xc) = 0;
            if ((arg1 == 0) || (iVar5 = *(arg1 + 0x70), iVar5 == 0)) {
                *(arg1 + 0x70) = 0;
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8003274);
                (*pcVar4)();
            }
            if (*(arg1 + 0x60) == iVar5) {
                iVar5 = *(arg1 + 0x58);
                *(arg1 + 0x70) = iVar5;
            }
            else {
                iVar5 = *(iVar5 + 0x30) + -0x30;
                *(arg1 + 0x70) = iVar5;
            }
            if (iVar5 == 0) {
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8003288);
                (*pcVar4)();
            }
        }
        if (arg2 == 0) {
            iVar9 = iVar7 - iVar8;
        }
        else {
            if (0xfb8 < *(iVar5 + 0xc)) {
code_r0x08003330:
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x5512,0x8003334);
                (*pcVar4)();
            }
            iVar9 = iVar7 - iVar8;
            memcpy(arg2 + iVar8,iVar5 + *(iVar5 + 0xc) + 0x48,iVar9);
        }
    }
    iVar5 = *(arg1 + 0x70);
    iVar1 = *(arg1 + 0x78);
    iVar3 = iVar9;
    if ((iVar1 == iVar5) && (*(iVar1 + 0xc) == *(iVar1 + 0x40))) {
        *(iVar1 + 0xc) = *(iVar1 + 0xc) + iVar3;
        *(arg1 + 0x80) = *(arg1 + 0x80) + iVar7;
        *(*(arg1 + 0x78) + 0x40) = *(*(arg1 + 0x78) + 0x40) + iVar3;
    }
    else {
        *(iVar5 + 0xc) = *(iVar5 + 0xc) + iVar3;
        *(arg1 + 0x80) = *(arg1 + 0x80) + iVar7;
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003334 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08003378

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
    //switch table (4 cases) at 0x80006f9
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800338c);
    (*pcVar1)();
}


// ===== sym.check_and_create_debugfs @ 0x0800338c (size 136) =====

void sym.check_and_create_debugfs(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.ipc_log_context_list);
    if (_segment.ehdr == 0) {
        _segment.ehdr = debugfs_create_dir("ipc_logging",0);
        if (0xfffffffffffff000 < _segment.ehdr) {
            _printk(0x8000488,"check_and_create_debugfs",_segment.ehdr);
            _segment.ehdr = 0;
        }
    }
    mutex_unlock(obj.ipc_log_context_list);
    return;
}


// ===== sym.create_ctx_debugfs @ 0x08003414 (size 272) =====

void sym.create_ctx_debugfs(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        mutex_lock(obj.ipc_log_context_list);
        if (_segment.ehdr == 0) {
            _segment.ehdr = debugfs_create_dir("ipc_logging",0);
            if (0xfffffffffffff000 < _segment.ehdr) {
                _printk(0x8000488,"check_and_create_debugfs",_segment.ehdr);
                _segment.ehdr = 0;
            }
        }
        mutex_unlock(obj.ipc_log_context_list);
        if (_segment.ehdr == 0) goto code_r0x080034d8;
    }
    uVar1 = debugfs_create_dir(arg2);
    *(arg1 + 0x88) = uVar1;
    if (uVar1 < 0xfffffffffffff001) {
        debugfs_create_file_unsafe(0x80005e4,0x124,uVar1,arg1,obj.debug_ops);
        debugfs_create_file_unsafe("log_cont",0x124,*(arg1 + 0x88),arg1,obj.debug_ops_cont);
    }
code_r0x080034d8:
    sym.add_deserialization_func(arg1,2,0x8001438);
    return;
}


// ===== sym.dfunc_string @ 0x08003524 (size 156) =====

void sym.dfunc_string(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.tsv_timestamp_read(arg1,arg2,0x80006d1);
    sym.tsv_qtimer_read(arg1,arg2,0x8000592);
    sym.tsv_byte_array_read(arg1,arg2);
    iVar1 = *(arg2 + 8);
    if (*(iVar1 + -1) != '\n') {
        if (*(arg2 + 0x10) != 0) {
            iVar1 = iVar1 + 1;
            *(arg2 + 8) = iVar1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + -1;
        }
        *(iVar1 + -1) = 10;
    }
    return;
}


// ===== sym.debug_read @ 0x080035c0 (size 40) =====

void sym.debug_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.debug_read_helper(arg1,arg2,arg3,arg4);
    return;
}


// ===== sym.debug_read_helper @ 0x080035e8 (size 628) =====

int64_t sym.debug_read_helper(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *arg1_00;
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t arg2_00;
    int in_w4;
    uint64_t uVar6;
    ulong *in_x18;
    ulong uVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    uVar7 = *(arg1 + 0x18);
    iVar4 = debugfs_file_get(uVar7);
    if (iVar4 == 0) {
        iVar8 = *(arg1 + 0xd8);
        arg1_00 = iVar8 + 200;
        uVar6 = *arg1_00;
        if (uVar6 == 0) {
            uVar5 = 0;
        }
        else {
            do {
                uVar5 = uVar6;
                Hint_Prefetch(arg1_00,2,0,1);
                do {
                    uVar1 = *arg1_00;
                    uVar6 = uVar1;
                    if (uVar1 != uVar5) break;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
                    if (bVar3) {
                        *arg1_00 = uVar5 + 1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
            } while ((uVar5 != uVar1) && (uVar5 = 0, uVar1 != 0));
        }
        if ((uVar5 + 1 | uVar5) < 0) {
            refcount_warn_saturate(arg1_00,0);
        }
        if (uVar5 == 0) {
            debugfs_file_put(uVar7);
            iVar8 = -5;
        }
        else {
            arg2_00 = __kmalloc(arg3,0xcc0);
            if (arg2_00 == 0) {
                iVar8 = -0xc;
            }
            else {
                if (arg3 < 0x3fc) {
                    _printk(0x80005bf,"debug_log",arg3 & 0xffffffff,0x3fc);
                    uVar5 = 0xfffffff4;
                }
                else {
                    do {
                        uVar5 = sym.ipc_log_extract(iVar8,arg2_00,arg3 - 1);
                        uVar6 = uVar5;
                        if ((in_w4 == 0) || (uVar5 != 0)) {
                            if (0 < uVar5) {
                                noname_1 = __check_object_size(arg2_00,uVar6,1);
                                iVar8 = sym._copy_to_user(arg2,noname_1,uVar6);
                                if (iVar8 != 0) {
                                    kfree(arg2_00);
                                    iVar8 = -0xe;
                                    goto code_r0x0800377c;
                                }
                                *arg4 = *arg4 + uVar6;
                            }
                            break;
                        }
                        uVar5 = wait_for_completion_interruptible(iVar8 + 0xa8);
                    } while (-1 < uVar5);
                }
                kfree(arg2_00);
                iVar8 = uVar5;
            }
code_r0x0800377c:
            Hint_Prefetch(arg1_00,2,0,1);
            do {
                uVar5 = *arg1_00;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
                if (bVar3) {
                    *arg1_00 = uVar5 - 1;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (uVar5 == 1) {
                DataMemoryBarrier(2,1);
                sym.ipc_log_context_free(arg1_00);
            }
            else if (uVar5 < 1) {
                refcount_warn_saturate(arg1_00,3);
            }
            debugfs_file_put(uVar7);
        }
    }
    else {
        iVar8 = iVar4;
    }
    return iVar8;
}


// ===== sym._copy_to_user @ 0x0800385c (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((__raw_spin_unlock >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((__raw_spin_unlock >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.debug_read_cont @ 0x080039d0 (size 40) =====

void sym.debug_read_cont(int64_t arg1,int64_t arg4,int64_t arg3,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.debug_read_helper(arg1,arg4,arg3,arg2);
    return;
}


// ===== sym.init_module @ 0x08003b78 (size 40) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.check_and_create_debugfs();
    return 0;
}


// ===== sym.cleanup_module @ 0x08003ba0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree(_segment.ehdr);
    return;
}

