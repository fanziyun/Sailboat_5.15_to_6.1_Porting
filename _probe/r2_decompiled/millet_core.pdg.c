// decompiled from millet_core by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 524) =====

//WARNING: Switch with 1 destination removed at 0x080022f8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 != -0x6c744aeca9835159) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8001238 >> 3 | pcVar1 << 0x3d) < 3)) {
                    return;
                }
                goto code_r0x080022b8;
            }
            pcVar2 = sym.__typeid__ZTSFiP11task_structP11millet_dataP11millet_sockE_global_addr;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.seq_read.cfi_jt;
        }
        else {
            if (arg1 != 0x9e03f509d34fc65) goto code_r0x080022b8;
            pcVar2 = sym.millet_sendmsg.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.millet_stat_write.90caf69253f5a0cac807ab597a64d851.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) {
                if (arg1 != 0x47ce015a85343a42) goto code_r0x080022b8;
                pcVar2 = sym.init_millet_subsystem.cfi_jt;
                goto code_r0x080011d4;
            }
            pcVar2 = sym.seq_lseek.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x5233d5bc7887ae44) {
            pcVar2 = sym.millet_version_show.90caf69253f5a0cac807ab597a64d851.cfi_jt;
code_r0x080011d4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080022b8;
        }
        if (arg1 == 0x68131453fce1715e) {
            pcVar2 = sym.recv_handler.90caf69253f5a0cac807ab597a64d851.cfi_jt;
        }
        else {
            if (arg1 != 0x78301def9d421f35) goto code_r0x080022b8;
            pcVar2 = sym.register_millet_hook.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080022b8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800230c);
    (*pcVar1)();
}


// ===== sym.millet_stat_write.90caf69253f5a0cac807ab597a64d851.cfi_jt @ 0x08001218 (size 8) =====

ulong sym.millet_stat_write.90caf69253f5a0cac807ab597a64d851.cfi_jt(ulong param_1,uchar *param_2,ulong param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong *extraout_x8;
    ulong *puVar7;
    uchar *extraout_x9;
    uchar *puVar8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar7 = sp_el0;
    uVar3 = (param_2 << 8) >> 8;
    if (((*(puVar7 + 0x3e) >> 5 & 1) != 0) || (puVar8 = param_2, (*puVar7 >> 0x1a & 1) != 0)) {
        puVar8 = param_2 & uVar3;
    }
    auStack_3c[0] = 0;
    bVar4 = 0xfffffffffffffffe < puVar8;
    puVar8 = puVar8 + 1;
    uVar1 = 0;
    if (!bVar4 || puVar8 == NULL) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        puVar8 = 0xffffffffffffffff;
    }
    if ((CARRY8(puVar8,~uVar1) || CARRY8(puVar8 + ~uVar1,bVar4)) && puVar8 != uVar1 + !bVar4) goto code_r0x08001dd4;
    if ((param_2 & uVar3 & 0xffffff8000000000) != 0) {
        param_2 = NULL;
    }
    while( true ) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar7[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar7[1];
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
        auStack_3c[0] = *param_2;
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr0_el1 = (uVar1 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
code_r0x08001dd4:
        iVar5 = simple_strtol(auStack_3c,0,10);
        _printk(0x80004f9,iVar5);
        if (iVar5 == 1) {
            uVar6 = _raw_spin_lock_irqsave(0x8000260);
            *0x8000268 = 0;
            *0x8000270 = 0;
            *0x8000278 = 0;
            _raw_spin_unlock_irqrestore(0x8000260,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x80002d8);
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[1] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[2] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[3] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[4] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[5] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[6] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[7] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[8] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[9] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xb] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xc] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xd] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xe] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xf] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x11] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x12] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x13] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x14] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x15] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x16] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x17] = '\0';
            _raw_spin_unlock_irqrestore(0x80002d8,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x8000350);
            *0x8000358 = 0;
            *0x8000360 = 0;
            *0x8000368 = 0;
            _raw_spin_unlock_irqrestore(0x8000350,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x80003c8);
            *0x80003d0 = 0;
            *0x80003d8 = 0;
            str.name:__s_mod_id__d:_n[0] = '\0';
            str.name:__s_mod_id__d:_n[1] = '\0';
            str.name:__s_mod_id__d:_n[2] = '\0';
            str.name:__s_mod_id__d:_n[3] = '\0';
            str.name:__s_mod_id__d:_n[4] = '\0';
            str.name:__s_mod_id__d:_n[5] = '\0';
            str.name:__s_mod_id__d:_n[6] = '\0';
            str.name:__s_mod_id__d:_n[7] = '\0';
            _raw_spin_unlock_irqrestore(0x80003c8,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x8000440);
            *0x8000448 = 0;
            *0x8000450 = 0;
            *0x8000458 = 0;
            _raw_spin_unlock_irqrestore(0x8000440,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x80004b8);
            *0x80004c0 = 0;
            *0x80004c8 = 0;
            *0x80004d0 = 0;
            _raw_spin_unlock_irqrestore(0x80004b8,uVar6);
        }
        _printk(0x8000ac2);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        puVar7 = extraout_x8;
        param_2 = extraout_x9;
    }
    return param_3;
}


// ===== sym.seq_lseek.cfi_jt @ 0x08001220 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t extraout_x8;
    uchar *extraout_x9;
    ulong *in_x18;
    ulong unaff_x19;
    ulong unaff_x30;
    uchar auStack_5c [4];
    int64_t aiStack_58 [6];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    memcpy(aiStack_58,0x8000e48,0x30);
    _printk(0x8000a14);
    _segment.ehdr = __netlink_kernel_create(init_net,0x1f,obj.__this_module,aiStack_58);
    if (_segment.ehdr == 0) {
        _printk(0x80009e4,"millet_init");
        uVar5 = 0xffffffff;
        goto code_r0x0800246c;
    }
    _segment.ehdr = proc_mkdir("",0);
    unaff_x19 = 0x8000000;
    if (_segment.ehdr == 0) {
        uVar5 = 0x80003ae;
code_r0x080024d8:
        _printk(uVar5);
    }
    else {
        iVar4 = proc_create("millet_stat",0x1a4,_segment.ehdr,obj.millet_proc_fops);
        if (iVar4 == 0) {
            _printk(0x8000adb);
        }
        iVar4 = proc_create("version",0x1a4,_segment.ehdr,obj.millet_version_fops);
        if (iVar4 == 0) {
            uVar5 = 0x8000959;
            goto code_r0x080024d8;
        }
    }
    uVar5 = 0;
code_r0x0800246c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
    auStack_5c[0] = 0;
    while( true ) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar1 = daif;
            if ((uVar1 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar1;
        }
        iVar3 = simple_strtol(auStack_5c,0,10);
        _printk(0x80004f9,iVar3);
        if (iVar3 == 1) {
            uVar5 = _raw_spin_lock_irqsave(0x8000260);
            *0x8000268 = 0;
            *0x8000270 = 0;
            *0x8000278 = 0;
            _raw_spin_unlock_irqrestore(0x8000260,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x80002d8);
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[1] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[2] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[3] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[4] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[5] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[6] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[7] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[8] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[9] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xb] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xc] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xd] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xe] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xf] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x11] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x12] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x13] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x14] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x15] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x16] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x17] = '\0';
            _raw_spin_unlock_irqrestore(0x80002d8,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x8000350);
            *0x8000358 = 0;
            *0x8000360 = 0;
            *0x8000368 = 0;
            _raw_spin_unlock_irqrestore(0x8000350,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x80003c8);
            *0x80003d0 = 0;
            *0x80003d8 = 0;
            str.name:__s_mod_id__d:_n[0] = '\0';
            str.name:__s_mod_id__d:_n[1] = '\0';
            str.name:__s_mod_id__d:_n[2] = '\0';
            str.name:__s_mod_id__d:_n[3] = '\0';
            str.name:__s_mod_id__d:_n[4] = '\0';
            str.name:__s_mod_id__d:_n[5] = '\0';
            str.name:__s_mod_id__d:_n[6] = '\0';
            str.name:__s_mod_id__d:_n[7] = '\0';
            _raw_spin_unlock_irqrestore(0x80003c8,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x8000440);
            *0x8000448 = 0;
            *0x8000450 = 0;
            *0x8000458 = 0;
            _raw_spin_unlock_irqrestore(0x8000440,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x80004b8);
            *0x80004c0 = 0;
            *0x80004c8 = 0;
            *0x80004d0 = 0;
            _raw_spin_unlock_irqrestore(0x80004b8,uVar5);
        }
        _printk(0x8000ac2);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == aiStack_58[0]) break;
        __stack_chk_fail();
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar1 = daif;
            if ((uVar1 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = *(extraout_x8 + 8) & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = *(extraout_x8 + 8);
            InstructionSynchronizationBarrier();
            daif = uVar1;
        }
        auStack_5c[0] = *extraout_x9;
    }
    return unaff_x19;
}


// ===== sym.register_millet_hook.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.register_millet_hook.cfi_jt(uint32_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = param_1;
    if (param_1 - 1 < 6) {
        piVar3 = uVar2 * 0x78 + 0x80001e0;
        if (*piVar3 == 0) {
            *piVar3 = param_4;
            piVar3 = uVar2 * 0x78 + 0x80001d0;
            if (*piVar3 == 0) {
                *piVar3 = param_2;
                piVar3 = uVar2 * 0x78 + 0x80001d8;
                if (*piVar3 == 0) {
                    *piVar3 = param_3;
                    if (_segment.ehdr != 0) {
                        _printk("type %d register hook\n",uVar2);
                        dump_stack();
                    }
                    return 0;
                }
                uVar1 = 0x80005c5;
            }
            else {
                uVar1 = 0x8000873;
            }
        }
        else {
            uVar1 = 0x8000b4a;
        }
    }
    else {
        uVar1 = 0x800035c;
    }
    _printk(uVar1,"",uVar2);
    return 0xffffffff;
}


// ===== sym.single_release.cfi_jt @ 0x08001238 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.millet_version_open.90caf69253f5a0cac807ab597a64d851.cfi_jt @ 0x08001240 (size 8) =====

void sym.millet_version_open.90caf69253f5a0cac807ab597a64d851.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.millet_version_show.90caf69253f5a0cac807ab597a64d851.cfi_jt,0);
    return;
}


// ===== sym.millet_stat_open.90caf69253f5a0cac807ab597a64d851.cfi_jt @ 0x08001248 (size 8) =====

void sym.millet_stat_open.90caf69253f5a0cac807ab597a64d851.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.millet_sock_show.90caf69253f5a0cac807ab597a64d851.cfi_jt,0);
    return;
}


// ===== sym.recv_handler.90caf69253f5a0cac807ab597a64d851.cfi_jt @ 0x08001250 (size 8) =====

void sym.recv_handler.90caf69253f5a0cac807ab597a64d851.cfi_jt(int64_t param_1)

{
    uint32_t *arg1;
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t auStack_c8 [19];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    auStack_c8[0x12] = *(iVar2 + 0x5e0);
    if (param_1 == 0) {
        _printk(0x80002df,"recv_handler");
    }
    else {
        uVar5 = *(param_1 + 0x2c);
        if (1000 < *(param_1 + 0x2c)) {
            uVar4 = 0x80007c9;
            goto code_r0x08001bc8;
        }
        if (_segment.ehdr != 0) {
            _printk(0x8000314);
        }
        if (*(param_1 + 0x70) < 0x10) {
            _printk(0x80002b5);
        }
        else {
            puVar6 = *(param_1 + 0xd8);
            if (*puVar6 < 0x60) {
                _printk(0x80007fb,*puVar6,0x60);
            }
            else {
                arg1 = puVar6 + 4;
                if (*(puVar6 + 6) == 0xabcddcba) {
                    if (*(puVar6 + 8) == 0x12341234) {
                        uVar5 = *arg1;
                        if (*arg1 - 1 < 6) {
                            uVar1 = puVar6[5];
                            if (uVar1 == 3) {
                                pcVar3 = *(uVar5 * 0x78 + 0x80001d0);
                                if (pcVar3 != NULL) {
                                    __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar3,0x8000210);
                                    (*pcVar3)(arg1,0x50);
                                }
                                if (_segment.ehdr != 0) goto code_r0x08001b1c;
                            }
                            else {
                                if (uVar1 != 1) {
                                    uVar5 = uVar1;
                                    uVar4 = 0x8000599;
                                    goto code_r0x08001bc8;
                                }
                                auStack_c8[0x10] = 0;
                                auStack_c8[0x11] = 0;
                                auStack_c8[0xe] = 0;
                                auStack_c8[0xf] = 0;
                                auStack_c8[0xc] = 0;
                                auStack_c8[0xd] = 0;
                                auStack_c8[10] = 0;
                                auStack_c8[0xb] = 0;
                                auStack_c8[8] = 0;
                                auStack_c8[9] = 0;
                                auStack_c8[6] = 0;
                                auStack_c8[7] = 0;
                                auStack_c8[4] = 0;
                                auStack_c8[5] = 0;
                                auStack_c8[2] = 0;
                                auStack_c8[3] = 0;
                                auStack_c8[1] = 1;
                                auStack_c8[0] = *arg1;
                                if (6 < *arg1) goto code_r0x08001be4;
                                *(*arg1 * 0x78 + 0x80001c8) = puVar6[3];
                                if (6 < *arg1) goto code_r0x08001be4;
                                *(*arg1 * 0x78 + 0x80001cc) = 1;
                                sym.dump_recv_msg(arg1);
                                sym.millet_sendto_user(noname_0,auStack_c8,0x80001b8);
                            }
                        }
                        else {
                            uVar4 = 0x80006db;
code_r0x08001bc8:
                            _printk(uVar4,uVar5);
                        }
                    }
                    else {
                        _printk(0x80008bb);
                    }
                }
                else {
                    if (_segment.ehdr != 0) {
                        _printk(0x800061d);
                        _printk(0x800098d);
                        iVar2 = sp_el0;
                        _printk(0x80006af,*(iVar2 + 0x5d8));
                    }
code_r0x08001b1c:
                    sym.dump_recv_msg(arg1);
                }
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == auStack_c8[0x12]) {
        return;
    }
    __stack_chk_fail();
code_r0x08001be4:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001be8);
    (*pcVar3)();
}


// ===== sym.millet_version_show.90caf69253f5a0cac807ab597a64d851.cfi_jt @ 0x08001258 (size 8) =====

ulong sym.millet_version_show.90caf69253f5a0cac807ab597a64d851.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x8000784,_segment.ehdr);
    return 0;
}


// ===== sym.millet_sock_show.90caf69253f5a0cac807ab597a64d851.cfi_jt @ 0x08001260 (size 8) =====

ulong sym.millet_sock_show.90caf69253f5a0cac807ab597a64d851.cfi_jt(ulong param_1)

{
    ulong uVar1;
    ulong extraout_x1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    int64_t iStack_120;
    int64_t iStack_110;
    char acStack_108 [8];
    ulong uStack_100;
    char acStack_f8 [8];
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    int64_t aiStack_d0 [4];
    ulong uStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    int64_t aiStack_98 [4];
    ulong uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_70 = *(iVar4 + 0x5e0);
    uStack_a8 = 0;
    uStack_e0 = 0;
    uVar1 = _raw_spin_lock_irqsave(0x8000260);
    iVar2 = *0x8000270;
    iVar3 = *0x8000268;
    iStack_a0 = *0x8000268;
    iStack_d8 = *0x8000270;
    iStack_110 = *0x8000278;
    _raw_spin_unlock_irqrestore(0x8000260,uVar1);
    uVar1 = _raw_spin_lock_irqsave(0x80002d8);
    aiStack_98[0]._0_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0];
    aiStack_98[0]._1_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[1];
    aiStack_98[0]._2_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[2];
    aiStack_98[0]._3_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[3];
    aiStack_98[0]._4_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[4];
    aiStack_98[0]._5_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[5];
    aiStack_98[0]._6_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[6];
    aiStack_98[0]._7_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[7];
    aiStack_d0[0]._0_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[8];
    aiStack_d0[0]._1_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[9];
    aiStack_d0[0]._2_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[10];
    aiStack_d0[0]._3_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xb];
    aiStack_d0[0]._4_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xc];
    aiStack_d0[0]._5_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xd];
    aiStack_d0[0]._6_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xe];
    aiStack_d0[0]._7_1_ = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xf];
    acStack_108[0] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x10];
    acStack_108[1] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x11];
    acStack_108[2] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x12];
    acStack_108[3] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x13];
    acStack_108[4] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x14];
    acStack_108[5] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x15];
    acStack_108[6] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x16];
    acStack_108[7] = str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x17];
    _raw_spin_unlock_irqrestore(0x80002d8,uVar1);
    uVar1 = _raw_spin_lock_irqsave(0x8000350);
    aiStack_98[1] = *0x8000358;
    aiStack_d0[1] = *0x8000360;
    uStack_100 = *0x8000368;
    _raw_spin_unlock_irqrestore(0x8000350,uVar1);
    uVar1 = _raw_spin_lock_irqsave(0x80003c8);
    aiStack_98[2] = *0x80003d0;
    aiStack_d0[2] = *0x80003d8;
    acStack_f8[0] = str.name:__s_mod_id__d:_n[0];
    acStack_f8[1] = str.name:__s_mod_id__d:_n[1];
    acStack_f8[2] = str.name:__s_mod_id__d:_n[2];
    acStack_f8[3] = str.name:__s_mod_id__d:_n[3];
    acStack_f8[4] = str.name:__s_mod_id__d:_n[4];
    acStack_f8[5] = str.name:__s_mod_id__d:_n[5];
    acStack_f8[6] = str.name:__s_mod_id__d:_n[6];
    acStack_f8[7] = str.name:__s_mod_id__d:_n[7];
    _raw_spin_unlock_irqrestore(0x80003c8,uVar1);
    uVar1 = _raw_spin_lock_irqsave("");
    aiStack_98[3] = str._________total_info_____________________n._30_8_;
    aiStack_d0[3] = *0x8000450;
    uStack_f0 = *0x8000458;
    _raw_spin_unlock_irqrestore("",uVar1);
    uVar1 = _raw_spin_lock_irqsave(0x80004b8);
    uStack_78 = *0x80004c0;
    uStack_b0 = *0x80004c8;
    uStack_e8 = *0x80004d0;
    _raw_spin_unlock_irqrestore(0x80004b8,uVar1);
    seq_printf(param_1,"-----------------------------\n\n");
    iVar8 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar4 = 0x8000280;
    iStack_120 = 0;
    iVar7 = iVar8;
    if (iVar3 == 0 && iVar2 == 0) goto code_r0x08002190;
    do {
        iVar7 = (&iStack_110)[iVar8];
        iVar6 = iVar6 + iVar3;
        iVar5 = iVar2 + iVar5;
        iStack_120 = iVar7 + iStack_120;
        seq_printf(param_1,"",iVar4,iVar8 + 1);
        seq_printf(param_1,"send suc: %llu\n",iVar3);
        seq_printf(param_1,0x8000862,iVar2);
        seq_printf(param_1,"",iVar7);
        iVar7 = iVar8;
code_r0x08002190:
        do {
            if (iVar7 == 5) {
                seq_printf(param_1,"");
                seq_printf(param_1,0x8000664,iVar6);
                seq_printf(param_1,"send_fail: %llu\n",iVar5);
                seq_printf(param_1,"runtime: %llu us\n",iStack_120);
                iVar4 = sp_el0;
                if (*(iVar4 + 0x5e0) != iStack_70) {
                    __stack_chk_fail();
                    *extraout_x18 = sym.millet_version_open;
                    uVar1 = single_open(extraout_x1,sym.millet_version_show.90caf69253f5a0cac807ab597a64d851.cfi_jt,0)
                    ;
                    return uVar1;
                }
                return 0;
            }
            iVar8 = iVar7 + 1;
            iVar4 = iVar4 + 0x78;
            iVar3 = aiStack_98[iVar7];
            iVar2 = aiStack_d0[iVar7];
            iVar7 = iVar8;
        } while (iVar3 == 0 && iVar2 == 0);
    } while( true );
}


// ===== sym.seq_read.cfi_jt @ 0x08001268 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.millet_sendmsg.cfi_jt @ 0x08001270 (size 8) =====

int sym.millet_sendmsg.cfi_jt(uint32_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = param_1;
    if (5 < param_1 - 1) {
        uVar4 = 0x8000741;
code_r0x080016fc:
        _printk(uVar4);
        return -1;
    }
    piVar8 = uVar6 * 0x78 + 0x80001d8;
    if (*piVar8 == 0) {
        uVar4 = 0x8000921;
        goto code_r0x080016fc;
    }
    iVar3 = ktime_get();
    pcVar7 = *piVar8;
    if (pcVar7 != sym.__typeid__ZTSFiP11task_structP11millet_dataP11millet_sockE_global_addr) {
        __cfi_slowpath_diag(0x938bb513567caea7,pcVar7,0x80001d0);
    }
    iVar2 = (*pcVar7)(param_2,param_3,obj.millet_sk);
    if (*(uVar6 * 0x78 + 0x8000230) == 0) {
        return iVar2;
    }
    iVar1 = uVar6 * 0x78 + 0x80001e8;
    iVar3 = SUB168(SEXT816(iVar3) * SEXT816(-0x20c49ba5e353f7cf),8);
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (iVar2 < 0) {
        piVar8 = uVar6 * 0x78 + 0x80001f8;
    }
    else {
        if (iVar2 == 0) goto code_r0x08001684;
        piVar8 = uVar6 * 0x78 + 0x80001f0;
    }
    *piVar8 = *piVar8 + 1;
code_r0x08001684:
    iVar5 = ktime_get();
    *(uVar6 * 0x78 + 0x8000200) = iVar5 / 1000 + ((iVar3 >> 7) - (iVar3 >> 0x3f)) + *(uVar6 * 0x78 + 0x8000200);
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    return iVar2;
}


// ===== sym.init_millet_subsystem.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.init_millet_subsystem.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = param_1;
    if (param_1 - 1 < 6) {
        iVar1 = uVar3 * 0x78;
        *(iVar1 + 0x80001c8) = 0;
        *(iVar1 + 0x80001cc) = 0;
        pcVar4 = *(iVar1 + 0x80001e0);
        *(iVar1 + 0x80001e8) = 0;
        if (pcVar4 != NULL) {
            __cfi_slowpath_diag(0xea87feee4d79dd1f,pcVar4,0x80001f0);
            (*pcVar4)(obj.millet_sk);
        }
        strlcpy(uVar3 * 0x78 + 0x8000208,*(obj.NAME_ARRAY + uVar3 * 8),0x20);
        uVar2 = 0;
    }
    else {
        _printk(0x800035c,"init_millet_subsystem");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


// ===== sym.unregister_millet_hook.cfi_jt @ 0x08001280 (size 8) =====

ulong sym.unregister_millet_hook.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 - 1 < 6) {
        uVar2 = 0;
        iVar1 = param_1 * 0x78;
        *(iVar1 + 0x80001d8) = 0;
        *(iVar1 + 0x80001e0) = 0;
        *(iVar1 + 0x80001d0) = 0;
    }
    else {
        _printk(0x800035c,"unregister_millet_hook");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFiP11task_structP11millet_dataP11millet_sockE_global_addr @ 0x08001288 (size 8) =====

void sym.__typeid__ZTSFiP11task_structP11millet_dataP11millet_sockE_global_addr
               (ulong param_1,uint32_t *param_2,ulong *param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint32_t *puVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uVar3 = *0x8;
    if ((param_2 == NULL) || (uVar3 = param_2[2], 2 < param_2[2] - 1)) {
        uVar5 = 0x8000707;
code_r0x080014ac:
        _printk(uVar5,"",uVar3);
code_r0x08001324:
        uVar5 = 0xffffffff;
    }
    else {
        iVar4 = __alloc_skb(0xa0,0xa20,0,0xffffffff);
        if (iVar4 == 0) {
            uVar3 = *param_2;
            uVar5 = 0x8000b8e;
            goto code_r0x080014ac;
        }
        if (((*(iVar4 + 0x74) != 0) || (*(iVar4 + 0xcc) - *(iVar4 + 200) < 0xa0)) ||
           (iVar6 = __nlmsg_put(iVar4,0,0,0,0x90,0), iVar6 == 0)) goto code_r0x0800131c;
        puVar7 = iVar6 + 0x10;
        puVar7[0] = 0;
        puVar7[1] = 0;
        *(iVar6 + 0x90) = 0;
        *(iVar6 + 0x98) = 0;
        *(iVar6 + 0x80) = 0;
        *(iVar6 + 0x88) = 0;
        *(iVar6 + 0x70) = 0;
        *(iVar6 + 0x78) = 0;
        *(iVar6 + 0x60) = 0;
        *(iVar6 + 0x68) = 0;
        *(iVar6 + 0x50) = 0;
        *(iVar6 + 0x58) = 0;
        *(iVar6 + 0x40) = 0;
        *(iVar6 + 0x48) = 0;
        *(iVar6 + 0x30) = 0;
        *(iVar6 + 0x38) = 0;
        *(iVar6 + 0x20) = 0;
        *(iVar6 + 0x28) = 0;
        *(iVar6 + 0x18) = 0;
        memcpy(puVar7,param_2,0x90);
        uVar3 = *puVar7;
        *(iVar6 + 0x20) = 0x12341234;
        *(iVar6 + 0x28) = 0xabcddcba;
        if (6 < uVar3) goto code_r0x0800157c;
        uVar1 = *(param_3 + uVar3 * 0x78 + 0xc);
        if (5 < uVar1 - 1) {
            uVar1 = uVar3;
        }
        uVar8 = uVar1;
        if (param_3[uVar8 * 0xf + 0xf] == 0) {
code_r0x0800131c:
            kfree_skb(iVar4);
            goto code_r0x08001324;
        }
        if (*(param_3 + uVar8 * 0x78 + 0x14) == 0) {
            if (_segment.ehdr != 0) {
                _printk(0x8000788,uVar8);
            }
            goto code_r0x0800131c;
        }
        *(iVar6 + 0x14) = uVar1;
        ktime_get_ts64(&uStack_58);
        *(iVar6 + 0x38) = uStack_58;
        *(iVar6 + 0x40) = uStack_50;
        uVar8 = param_3[uVar8 * 0xf + 2];
        if (_segment.ehdr != 0) {
            _printk(0x8000829);
            if (puVar7 == NULL) {
                _printk(0x8000408);
            }
            else {
                _printk(0x80004ce,*(iVar6 + 0x18));
                _printk(0x800038b,*(iVar6 + 0x10));
                _printk(0x8000686,*(iVar6 + 0x20));
                _printk(0x8000bd4,*(iVar6 + 0x28));
                _printk(0x8000293,*(iVar6 + 0x30));
            }
        }
        uVar3 = netlink_unicast(*param_3,iVar4,uVar8 & 0xffffffff,0x40);
        if (uVar3 < 0) {
            if (_segment.ehdr != 0) {
                uVar3 = uVar3 & uVar3 >> 0x1f;
                uVar5 = 0x8000495;
                goto code_r0x080014ac;
            }
            goto code_r0x08001324;
        }
        if (_segment.ehdr != 0) {
            _printk(0x8000453,uVar8 & 0xffffffff);
        }
        uVar5 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x0800157c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001580);
    (*pcVar2)();
}


// ===== sym.judge_millet_freeze_switch @ 0x08001290 (size 28) =====

bool sym.judge_millet_freeze_switch(void)

{
    return _segment.ehdr == 1;
}


// ===== sym.millet_sendto_user @ 0x080012ac (size 724) =====

void sym.millet_sendto_user(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint32_t *puVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uVar3 = *0x8;
    if ((arg1 == 0) || (uVar3 = *(arg1 + 8), 2 < *(arg1 + 8) - 1)) {
        uVar5 = 0x8000707;
code_r0x080014ac:
        _printk(uVar5,"",uVar3);
code_r0x08001324:
        uVar5 = 0xffffffff;
    }
    else {
        iVar4 = __alloc_skb(0xa0,0xa20,0,0xffffffff);
        if (iVar4 == 0) {
            uVar3 = *arg1;
            uVar5 = 0x8000b8e;
            goto code_r0x080014ac;
        }
        if (((*(iVar4 + 0x74) != 0) || (*(iVar4 + 0xcc) - *(iVar4 + 200) < 0xa0)) ||
           (iVar6 = __nlmsg_put(iVar4,0,0,0,0x90,0), iVar6 == 0)) goto code_r0x0800131c;
        puVar7 = iVar6 + 0x10;
        puVar7[0] = 0;
        puVar7[1] = 0;
        *(iVar6 + 0x90) = 0;
        *(iVar6 + 0x98) = 0;
        *(iVar6 + 0x80) = 0;
        *(iVar6 + 0x88) = 0;
        *(iVar6 + 0x70) = 0;
        *(iVar6 + 0x78) = 0;
        *(iVar6 + 0x60) = 0;
        *(iVar6 + 0x68) = 0;
        *(iVar6 + 0x50) = 0;
        *(iVar6 + 0x58) = 0;
        *(iVar6 + 0x40) = 0;
        *(iVar6 + 0x48) = 0;
        *(iVar6 + 0x30) = 0;
        *(iVar6 + 0x38) = 0;
        *(iVar6 + 0x20) = 0;
        *(iVar6 + 0x28) = 0;
        *(iVar6 + 0x18) = 0;
        memcpy(puVar7,arg1,0x90);
        uVar3 = *puVar7;
        *(iVar6 + 0x20) = 0x12341234;
        *(iVar6 + 0x28) = 0xabcddcba;
        if (6 < uVar3) goto code_r0x0800157c;
        uVar1 = *(arg2 + 8 + uVar3 * 0x78 + 4);
        if (5 < uVar1 - 1) {
            uVar1 = uVar3;
        }
        uVar8 = uVar1;
        if (*(arg2 + 8 + uVar8 * 0x78 + 0x70) == 0) {
code_r0x0800131c:
            kfree_skb(iVar4);
            goto code_r0x08001324;
        }
        if (*(arg2 + uVar8 * 0x78 + 0x14) == 0) {
            if (_segment.ehdr != 0) {
                _printk(0x8000788,uVar8);
            }
            goto code_r0x0800131c;
        }
        *(iVar6 + 0x14) = uVar1;
        ktime_get_ts64(&uStack_58);
        *(iVar6 + 0x38) = uStack_58;
        *(iVar6 + 0x40) = uStack_50;
        uVar8 = *(arg2 + uVar8 * 0x78 + 0x10);
        if (_segment.ehdr != 0) {
            _printk(0x8000829);
            if (puVar7 == NULL) {
                _printk(0x8000408);
            }
            else {
                _printk(0x80004ce,*(iVar6 + 0x18));
                _printk(0x800038b,*(iVar6 + 0x10));
                _printk(0x8000686,*(iVar6 + 0x20));
                _printk(0x8000bd4,*(iVar6 + 0x28));
                _printk(0x8000293,*(iVar6 + 0x30));
            }
        }
        uVar3 = netlink_unicast(*arg2,iVar4,uVar8 & 0xffffffff,0x40);
        if (uVar3 < 0) {
            if (_segment.ehdr != 0) {
                uVar3 = uVar3 & uVar3 >> 0x1f;
                uVar5 = 0x8000495;
                goto code_r0x080014ac;
            }
            goto code_r0x08001324;
        }
        if (_segment.ehdr != 0) {
            _printk(0x8000453,uVar8 & 0xffffffff);
        }
        uVar5 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return;
    }
    __stack_chk_fail(uVar5);
code_r0x0800157c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8001580);
    (*pcVar2)();
}


// ===== sym.millet_sendmsg @ 0x0800158c (size 424) =====

int sym.millet_sendmsg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    ulong *in_x18;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg1 & 0xffffffff;
    if (5 < arg1 - 1U) {
        uVar4 = 0x8000741;
code_r0x080016fc:
        _printk(uVar4);
        return -1;
    }
    piVar8 = uVar6 * 0x78 + 0x80001d8;
    if (*piVar8 == 0) {
        uVar4 = 0x8000921;
        goto code_r0x080016fc;
    }
    iVar3 = ktime_get();
    pcVar7 = *piVar8;
    if (pcVar7 != sym.__typeid__ZTSFiP11task_structP11millet_dataP11millet_sockE_global_addr) {
        __cfi_slowpath_diag(0x938bb513567caea7,pcVar7,0x80001d0);
    }
    iVar2 = (*pcVar7)(arg2,arg3,obj.millet_sk);
    if (*(uVar6 * 0x78 + 0x8000230) == 0) {
        return iVar2;
    }
    iVar1 = uVar6 * 0x78 + 0x80001e8;
    iVar3 = SUB168(SEXT816(iVar3) * SEXT816(-0x20c49ba5e353f7cf),8);
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    if (iVar2 < 0) {
        piVar8 = uVar6 * 0x78 + 0x80001f8;
    }
    else {
        if (iVar2 == 0) goto code_r0x08001684;
        piVar8 = uVar6 * 0x78 + 0x80001f0;
    }
    *piVar8 = *piVar8 + 1;
code_r0x08001684:
    iVar5 = ktime_get();
    *(uVar6 * 0x78 + 0x8000200) = iVar5 / 1000 + ((iVar3 >> 7) - (iVar3 >> 0x3f)) + *(uVar6 * 0x78 + 0x8000200);
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    return iVar2;
}


// ===== sym.register_millet_hook @ 0x08001738 (size 228) =====

ulong sym.register_millet_hook(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = arg1 & 0xffffffff;
    if (arg1 - 1U < 6) {
        piVar3 = uVar2 * 0x78 + 0x80001e0;
        if (*piVar3 == 0) {
            *piVar3 = arg4;
            piVar3 = uVar2 * 0x78 + 0x80001d0;
            if (*piVar3 == 0) {
                *piVar3 = arg2;
                piVar3 = uVar2 * 0x78 + 0x80001d8;
                if (*piVar3 == 0) {
                    *piVar3 = arg3;
                    if (_segment.ehdr != 0) {
                        _printk("type %d register hook\n",uVar2);
                        dump_stack();
                    }
                    return 0;
                }
                uVar1 = 0x80005c5;
            }
            else {
                uVar1 = 0x8000873;
            }
        }
        else {
            uVar1 = 0x8000b4a;
        }
    }
    else {
        uVar1 = 0x800035c;
    }
    _printk(uVar1,"",uVar2);
    return 0xffffffff;
}


// ===== sym.unregister_millet_hook @ 0x0800181c (size 104) =====

ulong sym.unregister_millet_hook(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 - 1U < 6) {
        uVar2 = 0;
        iVar1 = (arg1 & 0xffffffffU) * 0x78;
        *(iVar1 + 0x80001d8) = 0;
        *(iVar1 + 0x80001e0) = 0;
        *(iVar1 + 0x80001d0) = 0;
    }
    else {
        _printk(0x800035c,"unregister_millet_hook");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


// ===== sym.init_millet_subsystem @ 0x08001884 (size 212) =====

ulong sym.init_millet_subsystem(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = arg1 & 0xffffffff;
    if (arg1 - 1U < 6) {
        iVar1 = uVar3 * 0x78;
        *(iVar1 + 0x80001c8) = 0;
        *(iVar1 + 0x80001cc) = 0;
        pcVar4 = *(iVar1 + 0x80001e0);
        *(iVar1 + 0x80001e8) = 0;
        if (pcVar4 != NULL) {
            __cfi_slowpath_diag(0xea87feee4d79dd1f,pcVar4,0x80001f0);
            (*pcVar4)(obj.millet_sk);
        }
        strlcpy(uVar3 * 0x78 + 0x8000208,*(obj.NAME_ARRAY + uVar3 * 8),0x20);
        uVar2 = 0;
    }
    else {
        _printk(0x800035c,"init_millet_subsystem");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


// ===== sym.recv_handler @ 0x08001958 (size 656) =====

void sym.recv_handler(int64_t arg1)

{
    uint32_t *arg1_00;
    uint32_t uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong uVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    ulong noname_0;
    ulong *in_x18;
    ulong unaff_x30;
    uint64_t auStack_c8 [19];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    auStack_c8[0x12] = *(iVar2 + 0x5e0);
    if (arg1 == 0) {
        _printk(0x80002df,"recv_handler");
    }
    else {
        uVar5 = *(arg1 + 0x2c);
        if (1000 < *(arg1 + 0x2c)) {
            uVar4 = 0x80007c9;
            goto code_r0x08001bc8;
        }
        if (_segment.ehdr != 0) {
            _printk(0x8000314);
        }
        if (*(arg1 + 0x70) < 0x10) {
            _printk(0x80002b5);
        }
        else {
            puVar6 = *(arg1 + 0xd8);
            if (*puVar6 < 0x60) {
                _printk(0x80007fb,*puVar6,0x60);
            }
            else {
                arg1_00 = puVar6 + 4;
                if (*(puVar6 + 6) == 0xabcddcba) {
                    if (*(puVar6 + 8) == 0x12341234) {
                        uVar5 = *arg1_00;
                        if (*arg1_00 - 1 < 6) {
                            uVar1 = puVar6[5];
                            if (uVar1 == 3) {
                                pcVar3 = *(uVar5 * 0x78 + 0x80001d0);
                                if (pcVar3 != NULL) {
                                    __cfi_slowpath_diag(0xddcd4a035804a8bc,pcVar3,0x8000210);
                                    (*pcVar3)(arg1_00,0x50);
                                }
                                if (_segment.ehdr != 0) goto code_r0x08001b1c;
                            }
                            else {
                                if (uVar1 != 1) {
                                    uVar5 = uVar1;
                                    uVar4 = 0x8000599;
                                    goto code_r0x08001bc8;
                                }
                                auStack_c8[0x10] = 0;
                                auStack_c8[0x11] = 0;
                                auStack_c8[0xe] = 0;
                                auStack_c8[0xf] = 0;
                                auStack_c8[0xc] = 0;
                                auStack_c8[0xd] = 0;
                                auStack_c8[10] = 0;
                                auStack_c8[0xb] = 0;
                                auStack_c8[8] = 0;
                                auStack_c8[9] = 0;
                                auStack_c8[6] = 0;
                                auStack_c8[7] = 0;
                                auStack_c8[4] = 0;
                                auStack_c8[5] = 0;
                                auStack_c8[2] = 0;
                                auStack_c8[3] = 0;
                                auStack_c8[1] = 1;
                                auStack_c8[0] = *arg1_00;
                                if (6 < *arg1_00) goto code_r0x08001be4;
                                *(*arg1_00 * 0x78 + 0x80001c8) = puVar6[3];
                                if (6 < *arg1_00) goto code_r0x08001be4;
                                *(*arg1_00 * 0x78 + 0x80001cc) = 1;
                                sym.dump_recv_msg(arg1_00);
                                sym.millet_sendto_user(noname_0,auStack_c8,0x80001b8);
                            }
                        }
                        else {
                            uVar4 = 0x80006db;
code_r0x08001bc8:
                            _printk(uVar4,uVar5);
                        }
                    }
                    else {
                        _printk(0x80008bb);
                    }
                }
                else {
                    if (_segment.ehdr != 0) {
                        _printk(0x800061d);
                        _printk(0x800098d);
                        iVar2 = sp_el0;
                        _printk(0x80006af,*(iVar2 + 0x5d8));
                    }
code_r0x08001b1c:
                    sym.dump_recv_msg(arg1_00);
                }
            }
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == auStack_c8[0x12]) {
        return;
    }
    __stack_chk_fail();
code_r0x08001be4:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8001be8);
    (*pcVar3)();
}


// ===== sym.dump_recv_msg @ 0x08001be8 (size 156) =====

void sym.dump_recv_msg(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        _printk(0x80008ed);
        if (arg1 == 0) {
            _printk(0x8000408);
        }
        else {
            _printk(0x80009c1,*(arg1 + 4));
            _printk(0x8000a43,*arg1);
            _printk(0x8000a63,*(arg1 + 8));
            _printk(0x8000b0c,*(arg1 + 0x10));
        }
    }
    return;
}


// ===== sym.millet_stat_open @ 0x08001c84 (size 52) =====

void sym.millet_stat_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.millet_sock_show.90caf69253f5a0cac807ab597a64d851.cfi_jt,0);
    return;
}


// ===== sym.millet_stat_write @ 0x08001cb8 (size 640) =====

int64_t sym.millet_stat_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    ulong *extraout_x8;
    ulong *puVar7;
    uchar *extraout_x9;
    uint64_t uVar8;
    ulong *in_x18;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    puVar7 = sp_el0;
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar7 + 0x3e) >> 5 & 1) != 0) || (uVar8 = arg2, (*puVar7 >> 0x1a & 1) != 0)) {
        uVar8 = arg2 & uVar3;
    }
    auStack_3c[0] = 0;
    bVar4 = 0xfffffffffffffffe < uVar8;
    uVar8 = uVar8 + 1;
    uVar1 = 0;
    if (!bVar4 || uVar8 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar8 = 0xffffffffffffffff;
    }
    if ((CARRY8(uVar8,~uVar1) || CARRY8(uVar8 + ~uVar1,bVar4)) && uVar8 != uVar1 + !bVar4) goto code_r0x08001dd4;
    if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
        arg2 = 0;
    }
    while( true ) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr1_el1 = puVar7[1] & 0xffff000000000000 | uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar7[1];
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
        auStack_3c[0] = *arg2;
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar8 = daif;
                daif = uVar8 | 0xc0;
            }
            uVar8 = ttbr1_el1;
            ttbr0_el1 = (uVar8 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar8 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
code_r0x08001dd4:
        iVar5 = simple_strtol(auStack_3c,0,10);
        _printk(0x80004f9,iVar5);
        if (iVar5 == 1) {
            uVar6 = _raw_spin_lock_irqsave(0x8000260);
            *0x8000268 = 0;
            *0x8000270 = 0;
            *0x8000278 = 0;
            _raw_spin_unlock_irqrestore(0x8000260,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x80002d8);
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[1] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[2] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[3] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[4] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[5] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[6] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[7] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[8] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[9] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xb] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xc] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xd] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xe] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xf] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x11] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x12] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x13] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x14] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x15] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x16] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x17] = '\0';
            _raw_spin_unlock_irqrestore(0x80002d8,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x8000350);
            *0x8000358 = 0;
            *0x8000360 = 0;
            *0x8000368 = 0;
            _raw_spin_unlock_irqrestore(0x8000350,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x80003c8);
            *0x80003d0 = 0;
            *0x80003d8 = 0;
            str.name:__s_mod_id__d:_n[0] = '\0';
            str.name:__s_mod_id__d:_n[1] = '\0';
            str.name:__s_mod_id__d:_n[2] = '\0';
            str.name:__s_mod_id__d:_n[3] = '\0';
            str.name:__s_mod_id__d:_n[4] = '\0';
            str.name:__s_mod_id__d:_n[5] = '\0';
            str.name:__s_mod_id__d:_n[6] = '\0';
            str.name:__s_mod_id__d:_n[7] = '\0';
            _raw_spin_unlock_irqrestore(0x80003c8,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x8000440);
            *0x8000448 = 0;
            *0x8000450 = 0;
            *0x8000458 = 0;
            _raw_spin_unlock_irqrestore(0x8000440,uVar6);
            uVar6 = _raw_spin_lock_irqsave(0x80004b8);
            *0x80004c0 = 0;
            *0x80004c8 = 0;
            *0x80004d0 = 0;
            _raw_spin_unlock_irqrestore(0x80004b8,uVar6);
        }
        _printk(0x8000ac2);
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        puVar7 = extraout_x8;
        arg2 = extraout_x9;
    }
    return arg3;
}


// ===== sym.millet_sock_show @ 0x08001f74 (size 724) =====

void sym.millet_sock_show(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sp_el0;
    uVar1 = _raw_spin_lock_irqsave(0x8000260);
    _raw_spin_unlock_irqrestore(0x8000260,uVar1);
    _raw_spin_lock_irqsave(0x80002d8);
    return;
}


// ===== sym.millet_version_open @ 0x08002248 (size 52) =====

void sym.millet_version_open(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg1,sym.millet_version_show.90caf69253f5a0cac807ab597a64d851.cfi_jt,0);
    return;
}


// ===== sym.millet_version_show @ 0x0800227c (size 56) =====

ulong sym.millet_version_show(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_printf(param_1,0x8000784,_segment.ehdr);
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x080022b4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080022f8

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
    //switch table (4 cases) at 0x8000230
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800230c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080023a0 (size 336) =====

ulong sym.init_module(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t extraout_x8;
    uchar *extraout_x9;
    ulong *in_x18;
    ulong unaff_x19;
    ulong unaff_x30;
    uchar auStack_5c [4];
    int64_t aiStack_58 [6];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    memcpy(aiStack_58,0x8000e48,0x30);
    _printk(0x8000a14);
    _segment.ehdr = __netlink_kernel_create(init_net,0x1f,obj.__this_module,aiStack_58);
    if (_segment.ehdr == 0) {
        _printk(0x80009e4,"millet_init");
        uVar5 = 0xffffffff;
        goto code_r0x0800246c;
    }
    _segment.ehdr = proc_mkdir("",0);
    unaff_x19 = 0x8000000;
    if (_segment.ehdr == 0) {
        uVar5 = 0x80003ae;
code_r0x080024d8:
        _printk(uVar5);
    }
    else {
        iVar4 = proc_create("millet_stat",0x1a4,_segment.ehdr,obj.millet_proc_fops);
        if (iVar4 == 0) {
            _printk(0x8000adb);
        }
        iVar4 = proc_create("version",0x1a4,_segment.ehdr,obj.millet_version_fops);
        if (iVar4 == 0) {
            uVar5 = 0x8000959;
            goto code_r0x080024d8;
        }
    }
    uVar5 = 0;
code_r0x0800246c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar5;
    }
    __stack_chk_fail(uVar5);
    //[22] -r-x section size 12 named .fixup
    auStack_5c[0] = 0;
    while( true ) {
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar1 = daif;
            if ((uVar1 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr0_el1 = (uVar2 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar1;
        }
        iVar3 = simple_strtol(auStack_5c,0,10);
        _printk(0x80004f9,iVar3);
        if (iVar3 == 1) {
            uVar5 = _raw_spin_lock_irqsave(0x8000260);
            *0x8000268 = 0;
            *0x8000270 = 0;
            *0x8000278 = 0;
            _raw_spin_unlock_irqrestore(0x8000260,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x80002d8);
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[1] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[2] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[3] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[4] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[5] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[6] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[7] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[8] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[9] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xb] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xc] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xd] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xe] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0xf] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x10] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x11] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x12] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x13] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x14] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x15] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x16] = '\0';
            str.3millet_millet_core:_recv_handler__s:_skb_is_tNULL__n[0x17] = '\0';
            _raw_spin_unlock_irqrestore(0x80002d8,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x8000350);
            *0x8000358 = 0;
            *0x8000360 = 0;
            *0x8000368 = 0;
            _raw_spin_unlock_irqrestore(0x8000350,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x80003c8);
            *0x80003d0 = 0;
            *0x80003d8 = 0;
            str.name:__s_mod_id__d:_n[0] = '\0';
            str.name:__s_mod_id__d:_n[1] = '\0';
            str.name:__s_mod_id__d:_n[2] = '\0';
            str.name:__s_mod_id__d:_n[3] = '\0';
            str.name:__s_mod_id__d:_n[4] = '\0';
            str.name:__s_mod_id__d:_n[5] = '\0';
            str.name:__s_mod_id__d:_n[6] = '\0';
            str.name:__s_mod_id__d:_n[7] = '\0';
            _raw_spin_unlock_irqrestore(0x80003c8,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x8000440);
            *0x8000448 = 0;
            *0x8000450 = 0;
            *0x8000458 = 0;
            _raw_spin_unlock_irqrestore(0x8000440,uVar5);
            uVar5 = _raw_spin_lock_irqsave(0x80004b8);
            *0x80004c0 = 0;
            *0x80004c8 = 0;
            *0x80004d0 = 0;
            _raw_spin_unlock_irqrestore(0x80004b8,uVar5);
        }
        _printk(0x8000ac2);
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == aiStack_58[0]) break;
        __stack_chk_fail();
        if ((_seq_lseek >> 0x18 & 1) == 0) {
            uVar1 = daif;
            if ((uVar1 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = *(extraout_x8 + 8) & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = *(extraout_x8 + 8);
            InstructionSynchronizationBarrier();
            daif = uVar1;
        }
        auStack_5c[0] = *extraout_x9;
    }
    return unaff_x19;
}

