// decompiled from mi_log by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 344) =====

//WARNING: Switch with 1 destination removed at 0x08001df8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 == -0x5b0e31012fd00289) {
            pcVar2 = sym.binder_proc_transaction_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) {
                if ((arg1 == 0x7ff5a213d37b1a6) && ((pcVar1 + -0x8001188 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001db8;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x57ab066eaa17349d) {
        if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.binder_delay_write.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x08001db8;
            pcVar2 = sym.default_llseek.cfi_jt;
        }
    }
    else if (arg1 == 0x57ab066eaa17349d) {
        pcVar2 = sym.binder_reply_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001db8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001db8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e0c);
    (*pcVar1)();
}


// ===== sym.binder_delay_write.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt @ 0x08001160 (size 8) =====

uint64_t sym.binder_delay_write.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_150;
    ulong uStack_148;
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
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    if (param_3 < 0x100) {
        __check_object_size(&uStack_148,param_3,0);
        uVar9 = param_3;
        iVar5 = sym._copy_from_user(&uStack_148,param_2,param_3);
        if (iVar5 == 0) {
            uVar9 = &uStack_150 + 4;
            *(&uStack_148 + param_3) = 0;
            iVar4 = sscanf(&uStack_148,"%d %d",uVar9,&uStack_150);
            if (iVar4 == 2) {
                uVar6 = _raw_spin_lock_irqsave(obj.binder_log_lock);
                if (_segment.ehdr != 0) {
                    iVar5 = _segment.ehdr;
                    do {
                        if (uStack_150._4_4_ < *(iVar5 + -0x48)) {
                            piVar10 = iVar5 + 8;
                        }
                        else {
                            if (uStack_150._4_4_ <= *(iVar5 + -0x48)) {
                                if (iVar5 + -0x50 != 0) {
                                    rb_erase(iVar5,obj.task_tree);
                                    *iVar5 = iVar5;
                                    kmem_cache_free(_segment.ehdr,iVar5 + -0x50);
                                }
                                break;
                            }
                            piVar10 = iVar5 + 0x10;
                        }
                        iVar5 = *piVar10;
                    } while (iVar5 != 0);
                }
                _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
                uVar12 = param_3;
                goto code_r0x08001a50;
            }
            uVar6 = 0x800027a;
        }
        else {
            uVar6 = 0x800024a;
        }
        _printk(uVar6);
        uVar12 = 0xfffffffffffffff2;
    }
    else {
        _printk(0x800021f,param_3);
        uVar12 = 0xfffffffffffffff2;
        uVar9 = param_3;
    }
code_r0x08001a50:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar12;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar12 = (uVar8 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar8, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar11 = uVar8 & uVar12;
    }
    bVar3 = CARRY8(uVar11,uVar9);
    uVar11 = uVar11 + uVar9;
    uVar1 = 0;
    if (!bVar3 || uVar11 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar11 = 0xffffffffffffffff;
    }
    uVar7 = uVar9;
    if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar3) || uVar11 == uVar1 + !bVar3) {
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
        if ((uVar8 & uVar12 & 0xffffff8000000000) != 0) {
            uVar8 = 0;
        }
        uVar7 = __arch_copy_from_user(auVar13._0_8_,uVar8,uVar9);
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
    }
    if (uVar7 != 0) {
        memset(auVar13._0_8_ + (uVar9 - uVar7),0,uVar7);
    }
    return uVar7;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001168 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (_segment.ehdr != 0) {
            proc_remove();
        }
        if (_segment.ehdr != 0) {
            proc_remove();
        }
        tracepoint_probe_unregister
                  (__tracepoint_android_vh_binder_proc_transaction,
                   sym.binder_proc_transaction_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
        tracepoint_probe_unregister
                  (__tracepoint_android_vh_binder_reply,
                   sym.binder_reply_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
        proc_remove(_segment.ehdr);
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

uint sym.init_module.cfi_jt(void)

{
    ulong uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = proc_mkdir("mi_log",0);
    if (_segment.ehdr == 0) {
        uVar2 = 0xffffffff;
        uVar1 = 0x80002b3;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = proc_create("",0x124,_segment.ehdr,obj.proc_delay_file_operations);
        _segment.ehdr = kmem_cache_create("",0xd0,0,0,0);
        if (_segment.ehdr != 0) {
            _segment.ehdr = proc_create("binder_delay",0x1b6,_segment.ehdr,obj.proc_binder_start_file_operations);
            tracepoint_probe_register
                      (__tracepoint_android_vh_binder_proc_transaction,
                       sym.binder_proc_transaction_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
            tracepoint_probe_register
                      (__tracepoint_android_vh_binder_reply,
                       sym.binder_reply_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
        }
        uVar2 = 0;
        uVar1 = 0x80001f5;
    }
    _printk(uVar1);
    return uVar2;
}


// ===== sym.default_llseek.cfi_jt @ 0x08001178 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.binder_proc_transaction_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt @ 0x08001180 (size 8) =====

void sym.binder_proc_transaction_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint uVar4;
    int64_t iVar5;
    code *pcVar7;
    ulong *in_x18;
    ulong *arg2;
    ulong unaff_x30;
    int64_t *piVar6;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x5d8) == *(param_2 + 0x5dc)) {
        uVar2 = _raw_spin_lock_irqsave(obj.binder_log_lock);
        if (_segment.ehdr != 0) {
            iVar5 = _segment.ehdr;
            do {
                arg2 = iVar5 + -0x50;
                if (*(param_2 + 0x5d8) < *(iVar5 + -0x48)) {
                    piVar6 = iVar5 + 8;
                }
                else {
                    if (*(param_2 + 0x5d8) <= *(iVar5 + -0x48)) {
                        if (arg2 != NULL) goto code_r0x080012a8;
                        break;
                    }
                    piVar6 = iVar5 + 0x10;
                }
                iVar5 = *piVar6;
            } while (iVar5 != 0);
        }
        arg2 = kmem_cache_alloc(_segment.ehdr,0xb20);
        iVar5 = _obj.task_tree;
        if (arg2 != NULL) {
            pcVar7 = obj.task_tree;
            iVar1 = *(param_2 + 0x5d8);
            *(arg2 + 1) = iVar1;
            if (iVar5 == 0) {
                iVar3 = 0;
            }
            else {
                do {
                    while (iVar3 = iVar5, *(iVar3 + -0x48) <= iVar1) {
                        if (iVar1 <= *(iVar3 + -0x48)) goto code_r0x080012a8;
                        pcVar7 = iVar3 + 0x10;
                        iVar5 = *pcVar7;
                        if (*pcVar7 == 0) goto code_r0x0800128c;
                    }
                    pcVar7 = iVar3 + 8;
                    iVar5 = *pcVar7;
                } while (*pcVar7 != 0);
            }
code_r0x0800128c:
            arg2[0xb] = 0;
            arg2[0xc] = 0;
            piVar6 = arg2 + 10;
            *piVar6 = iVar3;
            *pcVar7 = piVar6;
            rb_insert_color(piVar6,obj.task_tree);
code_r0x080012a8:
            *(arg2 + 9) = 0;
            __get_task_comm(arg2 + 0xf,0x10,param_3);
            arg2[0xd] = 1;
            *arg2 = 1;
            *(arg2 + 0xe) = *(param_2 + 0x5d8);
            *(arg2 + 0x74) = *(param_3 + 0x5dc);
            if (param_4 == 0) {
                uVar4 = 1;
            }
            else {
                sym.fill_delay_info_by_task(param_4,arg2);
                uVar4 = 2;
            }
            *(arg2 + 9) = uVar4;
            arg2[0x19] = param_4 == 0;
        }
        _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar2);
    }
    return;
}


// ===== sym.binder_delay_read.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt @ 0x08001188 (size 8) =====

ulong * sym.binder_delay_read.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt(ulong param_1,ulong param_2,ulong *param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong *puVar7;
    ulong *puVar8;
    int64_t arg2;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar auStack_200 [8];
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_a8;
    ulong uStack_a0;
    uint uStack_98;
    uint uStack_94;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar2 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_a8 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar10 = param_3;
    if (iVar2 != 0) {
        uVar6 = _raw_spin_lock_irqsave(obj.binder_log_lock);
        if (_segment.ehdr != 0) {
            iVar11 = _segment.ehdr;
            do {
                while (*(iVar11 + -0x48) <= *(iVar2 + 0x5d8)) {
                    if (*(iVar2 + 0x5d8) <= *(iVar11 + -0x48)) {
                        if ((iVar11 != 0x50) && ((*(iVar11 + -8) | 2) != 2)) {
                            uStack_a0 = *(iVar11 + 0x18);
                            uStack_98 = *(iVar11 + 0x20);
                            strcpy(&uStack_90,iVar11 + 0x28);
                            uStack_94 = *(iVar11 + 0x24);
                            uStack_40 = *(iVar11 + 0x78);
                            if (*(iVar11 + -8) == 1) {
                                uStack_80 = uStack_80._4_4_ << 0x20;
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_68 = 0;
                                uStack_60 = 0;
                                uStack_58 = 0;
                                uStack_50 = 0;
                                uStack_48 = 0;
                            }
                            else if (*(iVar11 + -8) == 3) {
                                uStack_80 = CONCAT44(uStack_80._4_4_,*(iVar11 + 0x38));
                                uStack_78 = *(iVar11 + 0x40);
                                uStack_70 = *(iVar11 + 0x48);
                                uStack_68 = *(iVar11 + 0x50);
                                uStack_60 = *(iVar11 + 0x58);
                                uStack_58 = *(iVar11 + 0x60);
                                uStack_50 = *(iVar11 + 0x68);
                                uStack_48 = *(iVar11 + 0x70);
                            }
                            _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
                            puVar10 = &uStack_a8;
                            puVar7 = simple_read_from_buffer(param_2,param_3,puVar10,&uStack_a0,0x68);
                            goto code_r0x08001800;
                        }
                        goto code_r0x080017ec;
                    }
                    iVar11 = *(iVar11 + 0x10);
                    if (iVar11 == 0) goto code_r0x080017ec;
                }
                iVar11 = *(iVar11 + 8);
            } while (iVar11 != 0);
        }
code_r0x080017ec:
        _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
    }
    puVar7 = 0xfffffffffffffffd;
code_r0x08001800:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return puVar7;
    }
    __stack_chk_fail(puVar7);
    *extraout_x18 = sym.binder_delay_write;
    pcStack_e8 = sym.binder_delay_write;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    auStack_200 = 0x0;
    puStack_f0 = &stack0xffffffffffffffd0;
    if (puVar10 < 0x100) {
        __check_object_size(&uStack_1f8,puVar10,0);
        puVar7 = puVar10;
        iVar11 = sym._copy_from_user(&uStack_1f8,arg2,puVar10);
        if (iVar11 == 0) {
            puVar7 = auStack_200 + 4;
            *(&uStack_1f8 + puVar10) = 0;
            iVar5 = sscanf(&uStack_1f8,"%d %d",puVar7,auStack_200);
            if (iVar5 == 2) {
                uVar6 = _raw_spin_lock_irqsave(obj.binder_log_lock);
                if (_segment.ehdr != 0) {
                    iVar11 = _segment.ehdr;
                    do {
                        if (auStack_200._4_4_ < *(iVar11 + -0x48)) {
                            piVar12 = iVar11 + 8;
                        }
                        else {
                            if (auStack_200._4_4_ <= *(iVar11 + -0x48)) {
                                if (iVar11 + -0x50 != 0) {
                                    rb_erase(iVar11,obj.task_tree);
                                    *iVar11 = iVar11;
                                    kmem_cache_free(_segment.ehdr,iVar11 + -0x50);
                                }
                                break;
                            }
                            piVar12 = iVar11 + 0x10;
                        }
                        iVar11 = *piVar12;
                    } while (iVar11 != 0);
                }
                _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
                puVar8 = puVar10;
                goto code_r0x08001a50;
            }
            uVar6 = 0x800027a;
        }
        else {
            uVar6 = 0x800024a;
        }
        _printk(uVar6);
        puVar8 = 0xfffffffffffffff2;
    }
    else {
        _printk(0x800021f,puVar10);
        puVar8 = 0xfffffffffffffff2;
        puVar7 = puVar10;
    }
code_r0x08001a50:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_f8) {
        auVar14 = __stack_chk_fail();
        uVar9 = auVar14._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar10 = sp_el0;
        uVar3 = (uVar9 << 8) >> 8;
        if (((*(puVar10 + 0x3e) >> 5 & 1) != 0) || (uVar13 = uVar9, (*puVar10 >> 0x1a & 1) != 0)) {
            uVar13 = uVar9 & uVar3;
        }
        bVar4 = CARRY8(uVar13,puVar7);
        uVar13 = uVar13 + puVar7;
        uVar1 = 0;
        if (!bVar4 || uVar13 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar13 = 0xffffffffffffffff;
        }
        puVar8 = puVar7;
        if (!CARRY8(uVar13,~uVar1) && !CARRY8(uVar13 + ~uVar1,bVar4) || uVar13 == uVar1 + !bVar4) {
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar13 = daif;
                if ((uVar13 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar10[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar10[1];
                InstructionSynchronizationBarrier();
                daif = uVar13;
            }
            if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            puVar8 = __arch_copy_from_user(auVar14._0_8_,uVar9,puVar7);
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
        }
        if (puVar8 != NULL) {
            memset(puVar7 + (auVar14._0_8_ - puVar8),0,puVar8);
        }
        return puVar8;
    }
    return puVar8;
}


// ===== sym.delay_read.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt @ 0x08001190 (size 8) =====

void sym.delay_read.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x19;
    ulong unaff_x20;
    uint32_t *unaff_x22;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar5 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_80 = 0;
    if (iVar5 == 0) {
        uVar6 = 0xfffffffffffffffd;
        param_3 = unaff_x19;
        param_2 = unaff_x20;
        goto code_r0x080016c0;
    }
    unaff_x22 = iVar5 + 0x38;
    do {
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            uVar1 = *unaff_x22;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar3) {
                *unaff_x22 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 0) {
            uVar6 = 2;
code_r0x08001680:
            refcount_warn_saturate(unaff_x22,uVar6);
        }
        else if ((uVar1 + 1 | uVar1) < 0) {
            uVar6 = 1;
            goto code_r0x08001680;
        }
        uStack_58 = *(iVar5 + 0x108);
        uStack_50 = *(iVar5 + 0x4b8);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_40 = *(iVar5 + 0x6d0);
        uStack_78 = 3;
        uStack_70 = 0;
        uStack_48 = *(iVar5 + 0x6c8);
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            uVar1 = *unaff_x22;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar3) {
                *unaff_x22 = uVar1 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(iVar5);
        }
        else if (uVar1 < 1) {
            refcount_warn_saturate(unaff_x22,3);
        }
        uVar6 = simple_read_from_buffer(param_2,param_3,&uStack_80,&uStack_78,0x40);
code_r0x080016c0:
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail(uVar6);
    } while( true );
}


// ===== sym.binder_reply_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt @ 0x08001198 (size 8) =====

void sym.binder_reply_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt
               (ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    uint32_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t *piVar11;
    
    *in_x18 = unaff_x30;
    if (((*(param_2 + 0x48) != 0) && (*(param_4 + 0x198) != 0)) && (*(param_3 + 0x48) != 0)) {
        uVar7 = _raw_spin_lock_irqsave(obj.binder_log_lock);
        if (_segment.ehdr != 0) {
            iVar10 = _segment.ehdr;
            do {
                if (*(iVar10 + -0x48) <= *(param_2 + 0x40)) {
                    if (*(iVar10 + -0x48) < *(param_2 + 0x40)) {
                        piVar11 = iVar10 + 0x10;
                        goto code_r0x0800138c;
                    }
                    if ((iVar10 != 0x50) && (*(iVar10 + -8) != 1)) {
                        puVar1 = *(param_4 + 0x198) + 0x38;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar3 = *puVar1;
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar6) {
                                *puVar1 = uVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if (uVar3 == 0) {
                            uVar8 = 2;
code_r0x080014d8:
                            refcount_warn_saturate(puVar1,uVar8);
                        }
                        else if ((uVar3 + 1 | uVar3) < 0) {
                            uVar8 = 1;
                            goto code_r0x080014d8;
                        }
                        if (*(iVar10 + 0x38) == *(*(param_4 + 0x198) + 0x5d8)) {
                            *(iVar10 + 0x40) = -*(iVar10 + -0x40);
                            *(iVar10 + 0x48) = -*(iVar10 + -0x38);
                            *(iVar10 + 0x50) = -*(iVar10 + -0x30);
                            *(iVar10 + 0x58) = *(*(param_4 + 0x198) + 0x108) - *(iVar10 + -0x28);
                            *(iVar10 + 0x60) = *(*(param_4 + 0x198) + 0x4b8) - *(iVar10 + -0x20);
                            *(iVar10 + 0x68) = *(*(param_4 + 0x198) + 0x6c8) - *(iVar10 + -0x18);
                            *(iVar10 + 0x70) = *(*(param_4 + 0x198) + 0x6d0) - *(iVar10 + -0x10);
                            iVar9 = *(param_4 + 0x198);
                            piVar2 = iVar9 + 0x38;
                            Hint_Prefetch(piVar2,2,0,1);
                            do {
                                iVar4 = *piVar2;
                                cVar5 = '\x01';
                                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                                if (bVar6) {
                                    *piVar2 = iVar4 + -1;
                                    cVar5 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar5 != '\0');
                            if (iVar4 == 1) {
                                DataMemoryBarrier(2,1);
                                __put_task_struct(iVar9);
                            }
                            else if (iVar4 < 1) {
                                refcount_warn_saturate(piVar2,3);
                            }
                            *(iVar10 + -8) = 3;
                        }
                        else {
                            piVar2 = *(param_4 + 0x198) + 0x38;
                            Hint_Prefetch(piVar2,2,0,1);
                            do {
                                iVar4 = *piVar2;
                                cVar5 = '\x01';
                                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                                if (bVar6) {
                                    *piVar2 = iVar4 + -1;
                                    cVar5 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar5 != '\0');
                            if (iVar4 == 1) {
                                DataMemoryBarrier(2,1);
                                __put_task_struct();
                            }
                            else if (iVar4 < 1) {
                                refcount_warn_saturate(piVar2,3);
                            }
                        }
                    }
                    break;
                }
                piVar11 = iVar10 + 8;
code_r0x0800138c:
                iVar10 = *piVar11;
            } while (iVar10 != 0);
        }
        _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar7);
    }
    return;
}


// ===== sym.binder_proc_transaction_handler @ 0x080011a0 (size 396) =====

void sym.binder_proc_transaction_handler(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint uVar4;
    int64_t iVar5;
    code *pcVar7;
    ulong *in_x18;
    ulong *arg2_00;
    ulong unaff_x30;
    int64_t *piVar6;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x5d8) == *(arg1 + 0x5dc)) {
        uVar2 = _raw_spin_lock_irqsave(obj.binder_log_lock);
        if (_segment.ehdr != 0) {
            iVar5 = _segment.ehdr;
            do {
                arg2_00 = iVar5 + -0x50;
                if (*(arg1 + 0x5d8) < *(iVar5 + -0x48)) {
                    piVar6 = iVar5 + 8;
                }
                else {
                    if (*(arg1 + 0x5d8) <= *(iVar5 + -0x48)) {
                        if (arg2_00 != NULL) goto code_r0x080012a8;
                        break;
                    }
                    piVar6 = iVar5 + 0x10;
                }
                iVar5 = *piVar6;
            } while (iVar5 != 0);
        }
        arg2_00 = kmem_cache_alloc(_segment.ehdr,0xb20);
        iVar5 = _obj.task_tree;
        if (arg2_00 != NULL) {
            pcVar7 = obj.task_tree;
            iVar1 = *(arg1 + 0x5d8);
            *(arg2_00 + 1) = iVar1;
            if (iVar5 == 0) {
                iVar3 = 0;
            }
            else {
                do {
                    while (iVar3 = iVar5, *(iVar3 + -0x48) <= iVar1) {
                        if (iVar1 <= *(iVar3 + -0x48)) goto code_r0x080012a8;
                        pcVar7 = iVar3 + 0x10;
                        iVar5 = *pcVar7;
                        if (*pcVar7 == 0) goto code_r0x0800128c;
                    }
                    pcVar7 = iVar3 + 8;
                    iVar5 = *pcVar7;
                } while (*pcVar7 != 0);
            }
code_r0x0800128c:
            arg2_00[0xb] = 0;
            arg2_00[0xc] = 0;
            piVar6 = arg2_00 + 10;
            *piVar6 = iVar3;
            *pcVar7 = piVar6;
            rb_insert_color(piVar6,obj.task_tree);
code_r0x080012a8:
            *(arg2_00 + 9) = 0;
            __get_task_comm(arg2_00 + 0xf,0x10,arg2);
            arg2_00[0xd] = 1;
            *arg2_00 = 1;
            *(arg2_00 + 0xe) = *(arg1 + 0x5d8);
            *(arg2_00 + 0x74) = *(arg2 + 0x5dc);
            if (arg3 == 0) {
                uVar4 = 1;
            }
            else {
                sym.fill_delay_info_by_task(arg3,arg2_00);
                uVar4 = 2;
            }
            *(arg2_00 + 9) = uVar4;
            arg2_00[0x19] = arg3 == 0;
        }
        _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar2);
    }
    return;
}


// ===== sym.binder_reply_handler @ 0x0800132c (size 644) =====

void sym.binder_reply_handler(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    int *piVar2;
    uint32_t uVar3;
    int iVar4;
    char cVar5;
    bool bVar6;
    ulong uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t *piVar11;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x48) != 0) && (*(arg3 + 0x198) != 0)) && (*(arg2 + 0x48) != 0)) {
        uVar7 = _raw_spin_lock_irqsave(obj.binder_log_lock);
        if (_segment.ehdr != 0) {
            iVar10 = _segment.ehdr;
            do {
                if (*(iVar10 + -0x48) <= *(arg1 + 0x40)) {
                    if (*(iVar10 + -0x48) < *(arg1 + 0x40)) {
                        piVar11 = iVar10 + 0x10;
                        goto code_r0x0800138c;
                    }
                    if ((iVar10 != 0x50) && (*(iVar10 + -8) != 1)) {
                        puVar1 = *(arg3 + 0x198) + 0x38;
                        Hint_Prefetch(puVar1,2,0,1);
                        do {
                            uVar3 = *puVar1;
                            cVar5 = '\x01';
                            bVar6 = ExclusiveMonitorPass(puVar1,0x10);
                            if (bVar6) {
                                *puVar1 = uVar3 + 1;
                                cVar5 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar5 != '\0');
                        if (uVar3 == 0) {
                            uVar8 = 2;
code_r0x080014d8:
                            refcount_warn_saturate(puVar1,uVar8);
                        }
                        else if ((uVar3 + 1 | uVar3) < 0) {
                            uVar8 = 1;
                            goto code_r0x080014d8;
                        }
                        if (*(iVar10 + 0x38) == *(*(arg3 + 0x198) + 0x5d8)) {
                            *(iVar10 + 0x40) = -*(iVar10 + -0x40);
                            *(iVar10 + 0x48) = -*(iVar10 + -0x38);
                            *(iVar10 + 0x50) = -*(iVar10 + -0x30);
                            *(iVar10 + 0x58) = *(*(arg3 + 0x198) + 0x108) - *(iVar10 + -0x28);
                            *(iVar10 + 0x60) = *(*(arg3 + 0x198) + 0x4b8) - *(iVar10 + -0x20);
                            *(iVar10 + 0x68) = *(*(arg3 + 0x198) + 0x6c8) - *(iVar10 + -0x18);
                            *(iVar10 + 0x70) = *(*(arg3 + 0x198) + 0x6d0) - *(iVar10 + -0x10);
                            iVar9 = *(arg3 + 0x198);
                            piVar2 = iVar9 + 0x38;
                            Hint_Prefetch(piVar2,2,0,1);
                            do {
                                iVar4 = *piVar2;
                                cVar5 = '\x01';
                                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                                if (bVar6) {
                                    *piVar2 = iVar4 + -1;
                                    cVar5 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar5 != '\0');
                            if (iVar4 == 1) {
                                DataMemoryBarrier(2,1);
                                __put_task_struct(iVar9);
                            }
                            else if (iVar4 < 1) {
                                refcount_warn_saturate(piVar2,3);
                            }
                            *(iVar10 + -8) = 3;
                        }
                        else {
                            piVar2 = *(arg3 + 0x198) + 0x38;
                            Hint_Prefetch(piVar2,2,0,1);
                            do {
                                iVar4 = *piVar2;
                                cVar5 = '\x01';
                                bVar6 = ExclusiveMonitorPass(piVar2,0x10);
                                if (bVar6) {
                                    *piVar2 = iVar4 + -1;
                                    cVar5 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar5 != '\0');
                            if (iVar4 == 1) {
                                DataMemoryBarrier(2,1);
                                __put_task_struct();
                            }
                            else if (iVar4 < 1) {
                                refcount_warn_saturate(piVar2,3);
                            }
                        }
                    }
                    break;
                }
                piVar11 = iVar10 + 8;
code_r0x0800138c:
                iVar10 = *piVar11;
            } while (iVar10 != 0);
        }
        _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar7);
    }
    return;
}


// ===== sym.delay_read @ 0x080015b0 (size 388) =====

void sym.delay_read(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    uint32_t *unaff_x22;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar5 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_80 = 0;
    if (iVar5 == 0) {
        uVar6 = 0xfffffffffffffffd;
        arg2 = unaff_x19;
        arg1 = unaff_x20;
        goto code_r0x080016c0;
    }
    unaff_x22 = iVar5 + 0x38;
    do {
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            uVar1 = *unaff_x22;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar3) {
                *unaff_x22 = uVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 0) {
            uVar6 = 2;
code_r0x08001680:
            refcount_warn_saturate(unaff_x22,uVar6);
        }
        else if ((uVar1 + 1 | uVar1) < 0) {
            uVar6 = 1;
            goto code_r0x08001680;
        }
        uStack_58 = *(iVar5 + 0x108);
        uStack_50 = *(iVar5 + 0x4b8);
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_40 = *(iVar5 + 0x6d0);
        uStack_78 = 3;
        uStack_70 = 0;
        uStack_48 = *(iVar5 + 0x6c8);
        Hint_Prefetch(unaff_x22,2,0,1);
        do {
            uVar1 = *unaff_x22;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(unaff_x22,0x10);
            if (bVar3) {
                *unaff_x22 = uVar1 - 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (uVar1 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(iVar5);
        }
        else if (uVar1 < 1) {
            refcount_warn_saturate(unaff_x22,3);
        }
        uVar6 = simple_read_from_buffer(arg1,arg2,&uStack_80,&uStack_78,0x40);
code_r0x080016c0:
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_38) {
            return;
        }
        __stack_chk_fail(uVar6);
    } while( true );
}


// ===== sym.binder_delay_read @ 0x08001734 (size 456) =====

ulong * sym.binder_delay_read(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong *puVar7;
    ulong *puVar8;
    int64_t arg2_00;
    uint64_t uVar9;
    ulong *puVar10;
    int64_t iVar11;
    int64_t *piVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auVar14 [16];
    uchar auStack_200 [8];
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    ulong uStack_a8;
    ulong uStack_a0;
    uint uStack_98;
    uint uStack_94;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iVar2 = sp_el0;
    iStack_38 = *(iVar11 + 0x5e0);
    uStack_a8 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    puVar10 = arg2;
    if (iVar2 != 0) {
        uVar6 = _raw_spin_lock_irqsave(obj.binder_log_lock);
        if (_segment.ehdr != 0) {
            iVar11 = _segment.ehdr;
            do {
                while (*(iVar11 + -0x48) <= *(iVar2 + 0x5d8)) {
                    if (*(iVar2 + 0x5d8) <= *(iVar11 + -0x48)) {
                        if ((iVar11 != 0x50) && ((*(iVar11 + -8) | 2) != 2)) {
                            uStack_a0 = *(iVar11 + 0x18);
                            uStack_98 = *(iVar11 + 0x20);
                            strcpy(&uStack_90,iVar11 + 0x28);
                            uStack_94 = *(iVar11 + 0x24);
                            uStack_40 = *(iVar11 + 0x78);
                            if (*(iVar11 + -8) == 1) {
                                uStack_80 = uStack_80._4_4_ << 0x20;
                                uStack_78 = 0;
                                uStack_70 = 0;
                                uStack_68 = 0;
                                uStack_60 = 0;
                                uStack_58 = 0;
                                uStack_50 = 0;
                                uStack_48 = 0;
                            }
                            else if (*(iVar11 + -8) == 3) {
                                uStack_80 = CONCAT44(uStack_80._4_4_,*(iVar11 + 0x38));
                                uStack_78 = *(iVar11 + 0x40);
                                uStack_70 = *(iVar11 + 0x48);
                                uStack_68 = *(iVar11 + 0x50);
                                uStack_60 = *(iVar11 + 0x58);
                                uStack_58 = *(iVar11 + 0x60);
                                uStack_50 = *(iVar11 + 0x68);
                                uStack_48 = *(iVar11 + 0x70);
                            }
                            _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
                            puVar10 = &uStack_a8;
                            puVar7 = simple_read_from_buffer(arg1,arg2,puVar10,&uStack_a0,0x68);
                            goto code_r0x08001800;
                        }
                        goto code_r0x080017ec;
                    }
                    iVar11 = *(iVar11 + 0x10);
                    if (iVar11 == 0) goto code_r0x080017ec;
                }
                iVar11 = *(iVar11 + 8);
            } while (iVar11 != 0);
        }
code_r0x080017ec:
        _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
    }
    puVar7 = 0xfffffffffffffffd;
code_r0x08001800:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_38) {
        return puVar7;
    }
    __stack_chk_fail(puVar7);
    *extraout_x18 = sym.binder_delay_write;
    pcStack_e8 = sym.binder_delay_write;
    iVar11 = sp_el0;
    iStack_f8 = *(iVar11 + 0x5e0);
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    auStack_200 = 0x0;
    puStack_f0 = &stack0xffffffffffffffd0;
    if (puVar10 < 0x100) {
        __check_object_size(&uStack_1f8,puVar10,0);
        puVar7 = puVar10;
        iVar11 = sym._copy_from_user(&uStack_1f8,arg2_00,puVar10);
        if (iVar11 == 0) {
            puVar7 = auStack_200 + 4;
            *(&uStack_1f8 + puVar10) = 0;
            iVar5 = sscanf(&uStack_1f8,"%d %d",puVar7,auStack_200);
            if (iVar5 == 2) {
                uVar6 = _raw_spin_lock_irqsave(obj.binder_log_lock);
                if (_segment.ehdr != 0) {
                    iVar11 = _segment.ehdr;
                    do {
                        if (auStack_200._4_4_ < *(iVar11 + -0x48)) {
                            piVar12 = iVar11 + 8;
                        }
                        else {
                            if (auStack_200._4_4_ <= *(iVar11 + -0x48)) {
                                if (iVar11 + -0x50 != 0) {
                                    rb_erase(iVar11,obj.task_tree);
                                    *iVar11 = iVar11;
                                    kmem_cache_free(_segment.ehdr,iVar11 + -0x50);
                                }
                                break;
                            }
                            piVar12 = iVar11 + 0x10;
                        }
                        iVar11 = *piVar12;
                    } while (iVar11 != 0);
                }
                _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
                puVar8 = puVar10;
                goto code_r0x08001a50;
            }
            uVar6 = 0x800027a;
        }
        else {
            uVar6 = 0x800024a;
        }
        _printk(uVar6);
        puVar8 = 0xfffffffffffffff2;
    }
    else {
        _printk(0x800021f,puVar10);
        puVar8 = 0xfffffffffffffff2;
        puVar7 = puVar10;
    }
code_r0x08001a50:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_f8) {
        auVar14 = __stack_chk_fail();
        uVar9 = auVar14._8_8_;
        *extraout_x18_00 = sym._copy_from_user;
        puVar10 = sp_el0;
        uVar3 = (uVar9 << 8) >> 8;
        if (((*(puVar10 + 0x3e) >> 5 & 1) != 0) || (uVar13 = uVar9, (*puVar10 >> 0x1a & 1) != 0)) {
            uVar13 = uVar9 & uVar3;
        }
        bVar4 = CARRY8(uVar13,puVar7);
        uVar13 = uVar13 + puVar7;
        uVar1 = 0;
        if (!bVar4 || uVar13 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar13 = 0xffffffffffffffff;
        }
        puVar8 = puVar7;
        if (!CARRY8(uVar13,~uVar1) && !CARRY8(uVar13 + ~uVar1,bVar4) || uVar13 == uVar1 + !bVar4) {
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar13 = daif;
                if ((uVar13 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar10[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar10[1];
                InstructionSynchronizationBarrier();
                daif = uVar13;
            }
            if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            puVar8 = __arch_copy_from_user(auVar14._0_8_,uVar9,puVar7);
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
        }
        if (puVar8 != NULL) {
            memset(puVar7 + (auVar14._0_8_ - puVar8),0,puVar8);
        }
        return puVar8;
    }
    return puVar8;
}


// ===== sym.binder_delay_write @ 0x080018fc (size 456) =====

uint64_t sym.binder_delay_write(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_150;
    ulong uStack_148;
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
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    uVar8 = arg2;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
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
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_150 = 0;
    if (uVar8 < 0x100) {
        __check_object_size(&uStack_148,uVar8,0);
        uVar9 = uVar8;
        iVar5 = sym._copy_from_user(&uStack_148,arg1,uVar8);
        if (iVar5 == 0) {
            uVar9 = &uStack_150 + 4;
            *(&uStack_148 + uVar8) = 0;
            iVar4 = sscanf(&uStack_148,"%d %d",uVar9,&uStack_150);
            if (iVar4 == 2) {
                uVar6 = _raw_spin_lock_irqsave(obj.binder_log_lock);
                if (_segment.ehdr != 0) {
                    iVar5 = _segment.ehdr;
                    do {
                        if (uStack_150._4_4_ < *(iVar5 + -0x48)) {
                            piVar10 = iVar5 + 8;
                        }
                        else {
                            if (uStack_150._4_4_ <= *(iVar5 + -0x48)) {
                                if (iVar5 + -0x50 != 0) {
                                    rb_erase(iVar5,obj.task_tree);
                                    *iVar5 = iVar5;
                                    kmem_cache_free(_segment.ehdr,iVar5 + -0x50);
                                }
                                break;
                            }
                            piVar10 = iVar5 + 0x10;
                        }
                        iVar5 = *piVar10;
                    } while (iVar5 != 0);
                }
                _raw_spin_unlock_irqrestore(obj.binder_log_lock,uVar6);
                uVar12 = uVar8;
                goto code_r0x08001a50;
            }
            uVar6 = 0x800027a;
        }
        else {
            uVar6 = 0x800024a;
        }
        _printk(uVar6);
        uVar12 = 0xfffffffffffffff2;
    }
    else {
        _printk(0x800021f,uVar8);
        uVar12 = 0xfffffffffffffff2;
        uVar9 = uVar8;
    }
code_r0x08001a50:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar12;
    }
    auVar13 = __stack_chk_fail();
    uVar12 = auVar13._8_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar2 = sp_el0;
    uVar8 = (uVar12 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar11 = uVar12, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar11 = uVar12 & uVar8;
    }
    bVar3 = CARRY8(uVar11,uVar9);
    uVar11 = uVar11 + uVar9;
    uVar1 = 0;
    if (!bVar3 || uVar11 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar11 = 0xffffffffffffffff;
    }
    uVar7 = uVar9;
    if (!CARRY8(uVar11,~uVar1) && !CARRY8(uVar11 + ~uVar1,bVar3) || uVar11 == uVar1 + !bVar3) {
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar11 = daif;
            if ((uVar11 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar11;
        }
        if ((uVar12 & uVar8 & 0xffffff8000000000) != 0) {
            uVar12 = 0;
        }
        uVar7 = __arch_copy_from_user(auVar13._0_8_,uVar12,uVar9);
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar12 = daif;
                daif = uVar12 | 0xc0;
            }
            uVar12 = ttbr1_el1;
            ttbr0_el1 = (uVar12 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar12 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
    }
    if (uVar7 != 0) {
        memset(auVar13._0_8_ + (uVar9 - uVar7),0,uVar7);
    }
    return uVar7;
}


// ===== sym._copy_from_user @ 0x08001ac4 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
        if ((_default_llseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.fill_delay_info_by_task @ 0x08001c78 (size 316) =====

void sym.fill_delay_info_by_task(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        return;
    }
    puVar1 = arg1 + 0x38;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 == 0) {
        uVar6 = 2;
    }
    else {
        if (-1 < (uVar3 + 1 | uVar3)) goto code_r0x08001cc0;
        uVar6 = 1;
    }
    refcount_warn_saturate(puVar1,uVar6);
code_r0x08001cc0:
    uVar2 = *(arg1 + 0x5d8);
    *(arg2 + 0x10) = 0;
    *(arg2 + 0x18) = 0;
    *(arg2 + 0x20) = 0;
    *(arg2 + 0x88) = uVar2;
    *(arg2 + 0x28) = *(arg1 + 0x108);
    *(arg2 + 0x30) = *(arg1 + 0x4b8);
    *(arg2 + 0x38) = *(arg1 + 0x6c8);
    *(arg2 + 0x40) = *(arg1 + 0x6d0);
    Hint_Prefetch(puVar1,2,0,1);
    do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
            *puVar1 = uVar3 - 1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (uVar3 == 1) {
        DataMemoryBarrier(2,1);
        __put_task_struct(arg1);
    }
    else if (uVar3 < 1) {
        refcount_warn_saturate(puVar1,3);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001db4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001df8

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
    //switch table (4 cases) at 0x80001f0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001e0c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001e14 (size 264) =====

uint sym.init_module(void)

{
    ulong uVar1;
    ulong *in_x18;
    uint uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = proc_mkdir("mi_log",0);
    if (_segment.ehdr == 0) {
        uVar2 = 0xffffffff;
        uVar1 = 0x80002b3;
        _segment.ehdr = 0;
    }
    else {
        _segment.ehdr = proc_create("",0x124,_segment.ehdr,obj.proc_delay_file_operations);
        _segment.ehdr = kmem_cache_create("",0xd0,0,0,0);
        if (_segment.ehdr != 0) {
            _segment.ehdr = proc_create("binder_delay",0x1b6,_segment.ehdr,obj.proc_binder_start_file_operations);
            tracepoint_probe_register
                      (__tracepoint_android_vh_binder_proc_transaction,
                       sym.binder_proc_transaction_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
            tracepoint_probe_register
                      (__tracepoint_android_vh_binder_reply,
                       sym.binder_reply_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
        }
        uVar2 = 0;
        uVar1 = 0x80001f5;
    }
    _printk(uVar1);
    return uVar2;
}


// ===== sym.cleanup_module @ 0x08001f1c (size 140) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        if (_segment.ehdr != 0) {
            proc_remove();
        }
        if (_segment.ehdr != 0) {
            proc_remove();
        }
        tracepoint_probe_unregister
                  (__tracepoint_android_vh_binder_proc_transaction,
                   sym.binder_proc_transaction_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
        tracepoint_probe_unregister
                  (__tracepoint_android_vh_binder_reply,
                   sym.binder_reply_handler.affd7ca49de7d83f6fe6e09e88cdb475.cfi_jt,0);
        proc_remove(_segment.ehdr);
    }
    return;
}

