// decompiled from millet_binder by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 296) =====

//WARNING: Switch with 1 destination removed at 0x0800205c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x1072ca111c4fcebf) {
        if (arg1 == -0x6c744aeca9835159) {
            pcVar2 = sym.binder_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        }
        else {
            if (arg1 == -0x2232b5fca7fb5744) {
                pcVar2 = sym.binder_recv_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
                goto code_r0x08001118;
            }
            if (arg1 != -0x15780111b28622e1) goto code_r0x0800201c;
            pcVar2 = sym.binder_st_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        }
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 == -0x1072ca111c4fcebf) {
            if ((pcVar1 + -0x8001158 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x0800201c;
        }
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x29d8b9b080e6376b) goto code_r0x0800201c;
            pcVar2 = sym.mi_query_binder_st_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
        }
code_r0x08001118:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x0800201c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002070);
    (*pcVar1)();
}


// ===== sym.mi_query_binder_st_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001130 (size 8) =====

void sym.mi_query_binder_st_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
               (uint32_t param_1,ulong param_2,uint param_3,uint param_4,uint32_t param_5)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uchar auVar5 [16];
    ulong uVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x19;
    ulong uVar8;
    uint32_t *unaff_x20;
    ulong unaff_x21;
    int64_t iVar9;
    uint32_t unaff_w22;
    uint64_t unaff_x23;
    uint unaff_w24;
    ulong unaff_x30;
    uchar auVar10 [16];
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
    int64_t iStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uint64_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    uint uStack_38;
    uint uStack_34;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    auVar5._8_8_ = unaff_x21;
    auVar5._0_8_ = unaff_x19;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_18 = *(iVar9 + 0x5e0);
    uStack_80 = 0;
    uStack_88 = param_1;
    _uStack_38 = CONCAT44(param_3,param_4);
    puVar7 = &uStack_a8;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_30 = param_5;
    uStack_40 = param_2;
    millet_sendmsg(3);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_18) {
        return;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.mi_binder_overflow_hook;
    pcStack_f8 = sym.mi_binder_overflow_hook;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    puStack_100 = &stack0xfffffffffffffff0;
    if (auVar10._0_8_ == 0) goto code_r0x08001f6c;
    unaff_x23 = puVar7 & 0xffffffff;
    unaff_x20 = auVar10._0_8_ + 0x38;
    do {
        iVar9 = auVar10._8_8_;
        uVar8 = auVar10._0_8_;
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar6 = 2;
code_r0x08001ed0:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001ed0;
        }
        puVar1 = iVar9 + 0x38;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        iStack_130 = 0;
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
code_r0x08001eec:
            refcount_warn_saturate(puVar1,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001eec;
        }
        uStack_118 = CONCAT44(uStack_118._4_4_,unaff_x23);
        uStack_110 = CONCAT44(param_5,CONCAT71(uStack_110._1_7_,param_4)) & 0xffffffffffffff01;
        iStack_130 = iVar9;
        uStack_128 = uVar8;
        millet_sendmsg(2,uVar8,&uStack_198);
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
            __put_task_struct(iVar9);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(puVar1,3);
        }
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        unaff_w22 = param_5;
        unaff_w24 = param_4;
        auVar5 = auVar10;
        if (uVar2 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(uVar8);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
code_r0x08001f6c:
        auVar10 = auVar5;
        param_4 = unaff_w24;
        param_5 = unaff_w22;
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_108) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.init_module.cfi_jt @ 0x08001138 (size 8) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    code *pcStack_40;
    code *pcStack_38;
    code *pcStack_30;
    code *pcStack_28;
    code *pcStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    _printk(0x8000348);
    uStack_50 = 3;
    uStack_48 = 0x20000;
    pcStack_30 = sym.mi_binder_trans_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_28 = sym.mi_binder_wait4_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_20 = sym.mi_query_binder_st_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_40 = sym.mi_binder_overflow_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_38 = sym.mi_binder_reply_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    oem_register_binder_hook(&uStack_50);
    register_millet_hook
              (2,0,sym.binder_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
               sym.binder_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt);
    init_millet_subsystem(2);
    register_millet_hook
              (3,sym.binder_recv_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
               sym.binder_st_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
               sym.binder_st_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt);
    init_millet_subsystem(3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return 0;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.binder_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001140 (size 8) =====

ulong sym.binder_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,uint *param_2,int64_t param_3)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == NULL)) || (param_3 == 0)) {
        _printk(0x80002fd,"binder_sendmsg");
        return 0xffffffff;
    }
    iVar3 = *(param_2 + 0x1a);
    param_2[2] = 2;
    *param_2 = 2;
    param_2[0x1f] = *(iVar3 + 0x5d8);
    __rcu_read_lock();
    uVar1 = *(*(iVar3 + 0x790) + 4);
    __rcu_read_unlock();
    iVar3 = *(param_2 + 0x1c);
    param_2[0x1e] = uVar1;
    param_2[0x21] = *(iVar3 + 0x5d8);
    __rcu_read_lock();
    uVar1 = *(*(iVar3 + 0x790) + 4);
    __rcu_read_unlock();
    param_2[8] = uVar1;
    if (((_system_freezing_cnt == 0) || (uVar2 = freezing_slow_path(param_1), (uVar2 & 1) == 0)) &&
       ((*(param_1 + 0x3c) >> 0x10 & 1) == 0)) {
        if ((*(param_1 + 0x3c) >> 0x15 & 1) == 0) {
            __rcu_read_lock();
            uVar4 = *(*(*(param_1 + 0x978) + 0x48) + 0xe8);
            __rcu_read_unlock();
            if ((uVar4 >> 2 & 1) != 0) goto code_r0x08001280;
        }
        if ((*(param_1 + 0x590) >> 6 & 1) == 0) {
            return 0;
        }
    }
code_r0x08001280:
    uVar4 = millet_sendto_user(param_1,param_2,param_3);
    return uVar4;
}


// ===== sym.binder_st_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001148 (size 8) =====

ulong sym.binder_st_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1,uint *param_2,int64_t param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == NULL)) || (param_3 == 0)) {
        _printk(0x80002fd,"binder_st_sendmsg");
        uVar1 = 0xffffffff;
    }
    else {
        param_2[2] = 2;
        *param_2 = 3;
        uVar1 = millet_sendto_user();
    }
    return uVar1;
}


// ===== sym.binder_recv_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001150 (size 8) =====

void sym.binder_recv_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    query_binder_app_stat(*(param_1 + 0x48));
    return;
}


// ===== sym.mi_binder_overflow_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001158 (size 8) =====

void sym.mi_binder_overflow_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
               (int64_t param_1,int64_t param_2,uint param_3,uchar param_4,uint param_5)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint unaff_w23;
    uchar unaff_w24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (param_1 == 0) goto code_r0x08001f6c;
    unaff_x20 = param_1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar6 = 2;
code_r0x08001ed0:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001ed0;
        }
        puVar1 = param_2 + 0x38;
        uStack_68 = 0;
        uStack_60 = 0;
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
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
code_r0x08001eec:
            refcount_warn_saturate(puVar1,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001eec;
        }
        uStack_68 = CONCAT44(uStack_68._4_4_,param_3);
        uStack_60 = CONCAT44(param_5,CONCAT71(uStack_60._1_7_,param_4)) & 0xffffffffffffff01;
        iStack_80 = param_2;
        iStack_78 = param_1;
        millet_sendmsg(2,param_1,&uStack_e8);
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
            __put_task_struct(param_2);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(puVar1,3);
        }
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        unaff_x19 = param_1;
        unaff_x21 = param_2;
        unaff_w22 = param_5;
        unaff_w23 = param_3;
        unaff_w24 = param_4;
        if (uVar2 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(param_1);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
code_r0x08001f6c:
        param_4 = unaff_w24;
        param_3 = unaff_w23;
        param_5 = unaff_w22;
        param_2 = unaff_x21;
        param_1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.mi_binder_reply_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001160 (size 8) =====

void sym.mi_binder_reply_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
               (int64_t param_1,int64_t param_2,uint param_3,uchar param_4,uint param_5,ulong param_6,
               ulong *param_7)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint unaff_w23;
    uchar unaff_w24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (param_1 == 0) goto code_r0x080015e8;
    unaff_x20 = param_1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar7 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 0) {
            uVar6 = 2;
code_r0x08001534:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar7 + 1 | uVar7) < 0) {
            uVar6 = 1;
            goto code_r0x08001534;
        }
        __rcu_read_lock();
        iVar2 = *(*(param_1 + 0x790) + 4);
        __rcu_read_unlock();
        *param_7 = __rcu_read_lock;
        unaff_x19 = param_1;
        unaff_x21 = param_2;
        unaff_w22 = param_5;
        unaff_w23 = param_3;
        unaff_w24 = param_4;
        if (((iVar2 < 0x801b000) || (iVar2 = iVar2 % 100000, iVar2 < 0x801b000)) || (0x10035fff < iVar2)) {
            puVar1 = param_2 + 0x38;
            uStack_68 = 0;
            uStack_60 = 0;
            iStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            iStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_b0 = 1;
            uStack_e8 = 0;
            uStack_e0 = 0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 0) {
                uVar6 = 2;
code_r0x08001550:
                refcount_warn_saturate(puVar1,uVar6);
            }
            else if ((uVar7 + 1 | uVar7) < 0) {
                uVar6 = 1;
                goto code_r0x08001550;
            }
            uStack_68 = CONCAT44(uStack_68._4_4_,param_3);
            uStack_60 = CONCAT44(param_5,CONCAT71(uStack_60._1_7_,param_4)) & 0xffffffffffffff01;
            iStack_80 = param_2;
            iStack_78 = param_1;
            millet_sendmsg(2,param_1,&uStack_e8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(param_2);
            }
            else if (uVar7 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                goto code_r0x08001598;
            }
code_r0x080015e0:
            if (uVar7 < 1) {
                refcount_warn_saturate(unaff_x20,3);
            }
        }
        else {
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 != 1) goto code_r0x080015e0;
            DataMemoryBarrier(2,1);
code_r0x08001598:
            __put_task_struct(param_1);
        }
code_r0x080015e8:
        param_4 = unaff_w24;
        param_3 = unaff_w23;
        param_5 = unaff_w22;
        param_2 = unaff_x21;
        param_1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.mi_binder_wait4_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001168 (size 8) =====

void sym.mi_binder_wait4_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
               (int64_t param_1,int64_t param_2,uint param_3,uchar param_4,uint param_5,ulong param_6,
               ulong *param_7)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint unaff_w23;
    uchar unaff_w24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (param_1 == 0) goto code_r0x08001c58;
    unaff_x20 = param_1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar7 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 0) {
            uVar6 = 2;
code_r0x08001ba4:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar7 + 1 | uVar7) < 0) {
            uVar6 = 1;
            goto code_r0x08001ba4;
        }
        __rcu_read_lock();
        iVar2 = *(*(param_1 + 0x790) + 4);
        __rcu_read_unlock();
        *param_7 = __rcu_read_lock;
        unaff_x19 = param_1;
        unaff_x21 = param_2;
        unaff_w22 = param_5;
        unaff_w23 = param_3;
        unaff_w24 = param_4;
        if ((((iVar2 < 0x801b000) || (iVar2 = iVar2 % 100000, iVar2 < 0x801b000)) || (0x10035fff < iVar2)) &&
           (*(param_1 + 0x5d8) != *(param_2 + 0x5d8))) {
            puVar1 = param_2 + 0x38;
            uStack_68 = 0;
            uStack_60 = 0;
            iStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            iStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_b0 = 3;
            uStack_e8 = 0;
            uStack_e0 = 0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 0) {
                uVar6 = 2;
code_r0x08001bd8:
                refcount_warn_saturate(puVar1,uVar6);
            }
            else if ((uVar7 + 1 | uVar7) < 0) {
                uVar6 = 1;
                goto code_r0x08001bd8;
            }
            uStack_68 = CONCAT44(uStack_68._4_4_,param_3);
            uStack_60 = CONCAT44(param_5,CONCAT71(uStack_60._1_7_,param_4)) & 0xffffffffffffff01;
            iStack_80 = param_2;
            iStack_78 = param_1;
            millet_sendmsg(2,param_1,&uStack_e8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(param_2);
            }
            else if (uVar7 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                goto code_r0x08001c20;
            }
code_r0x08001c50:
            if (uVar7 < 1) {
                refcount_warn_saturate(unaff_x20,3);
            }
        }
        else {
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 != 1) goto code_r0x08001c50;
            DataMemoryBarrier(2,1);
code_r0x08001c20:
            __put_task_struct(param_1);
        }
code_r0x08001c58:
        param_4 = unaff_w24;
        param_3 = unaff_w23;
        param_5 = unaff_w22;
        param_2 = unaff_x21;
        param_1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.mi_binder_trans_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001170 (size 8) =====

void sym.mi_binder_trans_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt
               (int64_t param_1,int64_t param_2,uint param_3,uchar param_4,uint param_5,ulong param_6,
               ulong *param_7)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint unaff_w23;
    uchar unaff_w24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (param_1 == 0) goto code_r0x08001920;
    unaff_x20 = param_1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar7 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 0) {
            uVar6 = 2;
code_r0x08001874:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar7 + 1 | uVar7) < 0) {
            uVar6 = 1;
            goto code_r0x08001874;
        }
        __rcu_read_lock();
        iVar2 = *(*(param_1 + 0x790) + 4);
        __rcu_read_unlock();
        *param_7 = __rcu_read_lock;
        unaff_x19 = param_1;
        unaff_x21 = param_2;
        unaff_w22 = param_5;
        unaff_w23 = param_3;
        unaff_w24 = param_4;
        if ((((iVar2 < 0x801b000) || (iVar2 = iVar2 % 100000, iVar2 < 0x801b000)) || (0x10035fff < iVar2)) ||
           (*(param_1 + 0x5d8) == *(param_2 + 0x5d8))) {
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                goto code_r0x08001760;
            }
code_r0x08001918:
            if (uVar7 < 1) {
                refcount_warn_saturate(unaff_x20,3);
            }
        }
        else {
            puVar1 = param_2 + 0x38;
            uStack_68 = 0;
            uStack_60 = 0;
            iStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            iStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_b0 = 2;
            uStack_e8 = 0;
            uStack_e0 = 0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 0) {
                uVar6 = 2;
code_r0x080018a8:
                refcount_warn_saturate(puVar1,uVar6);
            }
            else if ((uVar7 + 1 | uVar7) < 0) {
                uVar6 = 1;
                goto code_r0x080018a8;
            }
            uStack_68 = CONCAT44(uStack_68._4_4_,param_3);
            uStack_60 = CONCAT44(param_5,CONCAT71(uStack_60._1_7_,param_4)) & 0xffffffffffffff01;
            iStack_80 = param_2;
            iStack_78 = param_1;
            millet_sendmsg(2,param_1,&uStack_e8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(param_2);
            }
            else if (uVar7 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 != 1) goto code_r0x08001918;
            DataMemoryBarrier(2,1);
code_r0x08001760:
            __put_task_struct(param_1);
        }
code_r0x08001920:
        param_4 = unaff_w24;
        param_3 = unaff_w23;
        param_5 = unaff_w22;
        param_2 = unaff_x21;
        param_1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.binder_st_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001178 (size 8) =====

void sym.binder_st_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    if (param_1 != 0) {
        *(param_1 + 0x174) = 2;
        *(param_1 + 0x1e0) = 1;
    }
    return;
}


// ===== sym.binder_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt @ 0x08001180 (size 8) =====

void sym.binder_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt(int64_t param_1)

{
    if (param_1 != 0) {
        *(param_1 + 0xfc) = 2;
        *(param_1 + 0x168) = 1;
    }
    return;
}


// ===== sym.binder_sendmsg @ 0x08001188 (size 292) =====

ulong sym.binder_sendmsg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        _printk(0x80002fd,"binder_sendmsg");
        return 0xffffffff;
    }
    iVar3 = *(arg2 + 0x68);
    *(arg2 + 8) = 2;
    *arg2 = 2;
    *(arg2 + 0x7c) = *(iVar3 + 0x5d8);
    __rcu_read_lock();
    uVar1 = *(*(iVar3 + 0x790) + 4);
    __rcu_read_unlock();
    iVar3 = *(arg2 + 0x70);
    *(arg2 + 0x78) = uVar1;
    *(arg2 + 0x84) = *(iVar3 + 0x5d8);
    __rcu_read_lock();
    uVar1 = *(*(iVar3 + 0x790) + 4);
    __rcu_read_unlock();
    *(arg2 + 0x20) = uVar1;
    if (((_system_freezing_cnt == 0) || (uVar2 = freezing_slow_path(arg1), (uVar2 & 1) == 0)) &&
       ((*(arg1 + 0x3c) >> 0x10 & 1) == 0)) {
        if ((*(arg1 + 0x3c) >> 0x15 & 1) == 0) {
            __rcu_read_lock();
            uVar4 = *(*(*(arg1 + 0x978) + 0x48) + 0xe8);
            __rcu_read_unlock();
            if ((uVar4 >> 2 & 1) != 0) goto code_r0x08001280;
        }
        if ((*(arg1 + 0x590) >> 6 & 1) == 0) {
            return 0;
        }
    }
code_r0x08001280:
    uVar4 = millet_sendto_user(arg1,arg2,arg3);
    return uVar4;
}


// ===== sym.binder_init_millet @ 0x080012bc (size 36) =====

void sym.binder_init_millet(int64_t arg1)

{
    if (arg1 != 0) {
        *(arg1 + 0xfc) = 2;
        *(arg1 + 0x168) = 1;
    }
    return;
}


// ===== sym.binder_recv_hook @ 0x080012e0 (size 40) =====

void sym.binder_recv_hook(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    query_binder_app_stat(*(arg1 + 0x48));
    return;
}


// ===== sym.binder_st_sendmsg @ 0x08001308 (size 92) =====

ulong sym.binder_st_sendmsg(ulong noname_0,int64_t arg1)

{
    int64_t in_x0;
    ulong uVar1;
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((in_x0 == 0) || (arg1 == 0)) || (in_x2 == 0)) {
        _printk(0x80002fd,"binder_st_sendmsg");
        uVar1 = 0xffffffff;
    }
    else {
        *(arg1 + 8) = 2;
        *arg1 = 3;
        uVar1 = millet_sendto_user();
    }
    return uVar1;
}


// ===== sym.binder_st_init_millet @ 0x08001364 (size 36) =====

void sym.binder_st_init_millet(int64_t arg1)

{
    if (arg1 != 0) {
        *(arg1 + 0x174) = 2;
        *(arg1 + 0x1e0) = 1;
    }
    return;
}


// ===== sym.mi_binder_reply_hook @ 0x08001388 (size 808) =====

void sym.mi_binder_reply_hook(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint in_w4;
    ulong *in_x6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (arg1 == 0) goto code_r0x080015e8;
    unaff_x24 = arg4 & 0xffffffff;
    unaff_x23 = arg3 & 0xffffffff;
    unaff_x20 = arg1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar7 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 0) {
            uVar6 = 2;
code_r0x08001534:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar7 + 1 | uVar7) < 0) {
            uVar6 = 1;
            goto code_r0x08001534;
        }
        __rcu_read_lock();
        iVar2 = *(*(arg1 + 0x790) + 4);
        __rcu_read_unlock();
        *in_x6 = __rcu_read_lock;
        unaff_x19 = arg1;
        unaff_x21 = arg2;
        unaff_w22 = in_w4;
        if (((iVar2 < 0x801b000) || (iVar2 = iVar2 % 100000, iVar2 < 0x801b000)) || (0x10035fff < iVar2)) {
            puVar1 = arg2 + 0x38;
            uStack_68 = 0;
            uStack_60 = 0;
            iStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            iStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_b0 = 1;
            uStack_e8 = 0;
            uStack_e0 = 0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 0) {
                uVar6 = 2;
code_r0x08001550:
                refcount_warn_saturate(puVar1,uVar6);
            }
            else if ((uVar7 + 1 | uVar7) < 0) {
                uVar6 = 1;
                goto code_r0x08001550;
            }
            uStack_68 = CONCAT44(uStack_68._4_4_,unaff_x23);
            uStack_60 = CONCAT44(in_w4,CONCAT71(uStack_60._1_7_,unaff_x24)) & 0xffffffffffffff01;
            iStack_80 = arg2;
            iStack_78 = arg1;
            millet_sendmsg(2,arg1,&uStack_e8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(arg2);
            }
            else if (uVar7 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                goto code_r0x08001598;
            }
code_r0x080015e0:
            if (uVar7 < 1) {
                refcount_warn_saturate(unaff_x20,3);
            }
        }
        else {
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 != 1) goto code_r0x080015e0;
            DataMemoryBarrier(2,1);
code_r0x08001598:
            __put_task_struct(arg1);
        }
code_r0x080015e8:
        in_w4 = unaff_w22;
        arg2 = unaff_x21;
        arg1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.mi_binder_trans_hook @ 0x080016b0 (size 824) =====

void sym.mi_binder_trans_hook(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint in_w4;
    ulong *in_x6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (arg1 == 0) goto code_r0x08001920;
    unaff_x24 = arg4 & 0xffffffff;
    unaff_x23 = arg3 & 0xffffffff;
    unaff_x20 = arg1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar7 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 0) {
            uVar6 = 2;
code_r0x08001874:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar7 + 1 | uVar7) < 0) {
            uVar6 = 1;
            goto code_r0x08001874;
        }
        __rcu_read_lock();
        iVar2 = *(*(arg1 + 0x790) + 4);
        __rcu_read_unlock();
        *in_x6 = __rcu_read_lock;
        unaff_x19 = arg1;
        unaff_x21 = arg2;
        unaff_w22 = in_w4;
        if ((((iVar2 < 0x801b000) || (iVar2 = iVar2 % 100000, iVar2 < 0x801b000)) || (0x10035fff < iVar2)) ||
           (*(arg1 + 0x5d8) == *(arg2 + 0x5d8))) {
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                goto code_r0x08001760;
            }
code_r0x08001918:
            if (uVar7 < 1) {
                refcount_warn_saturate(unaff_x20,3);
            }
        }
        else {
            puVar1 = arg2 + 0x38;
            uStack_68 = 0;
            uStack_60 = 0;
            iStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            iStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_b0 = 2;
            uStack_e8 = 0;
            uStack_e0 = 0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 0) {
                uVar6 = 2;
code_r0x080018a8:
                refcount_warn_saturate(puVar1,uVar6);
            }
            else if ((uVar7 + 1 | uVar7) < 0) {
                uVar6 = 1;
                goto code_r0x080018a8;
            }
            uStack_68 = CONCAT44(uStack_68._4_4_,unaff_x23);
            uStack_60 = CONCAT44(in_w4,CONCAT71(uStack_60._1_7_,unaff_x24)) & 0xffffffffffffff01;
            iStack_80 = arg2;
            iStack_78 = arg1;
            millet_sendmsg(2,arg1,&uStack_e8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(arg2);
            }
            else if (uVar7 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 != 1) goto code_r0x08001918;
            DataMemoryBarrier(2,1);
code_r0x08001760:
            __put_task_struct(arg1);
        }
code_r0x08001920:
        in_w4 = unaff_w22;
        arg2 = unaff_x21;
        arg1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.mi_binder_wait4_hook @ 0x080019e8 (size 824) =====

void sym.mi_binder_wait4_hook(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint in_w4;
    ulong *in_x6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (arg1 == 0) goto code_r0x08001c58;
    unaff_x24 = arg4 & 0xffffffff;
    unaff_x23 = arg3 & 0xffffffff;
    unaff_x20 = arg1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar7 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar7 == 0) {
            uVar6 = 2;
code_r0x08001ba4:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar7 + 1 | uVar7) < 0) {
            uVar6 = 1;
            goto code_r0x08001ba4;
        }
        __rcu_read_lock();
        iVar2 = *(*(arg1 + 0x790) + 4);
        __rcu_read_unlock();
        *in_x6 = __rcu_read_lock;
        unaff_x19 = arg1;
        unaff_x21 = arg2;
        unaff_w22 = in_w4;
        if ((((iVar2 < 0x801b000) || (iVar2 = iVar2 % 100000, iVar2 < 0x801b000)) || (0x10035fff < iVar2)) &&
           (*(arg1 + 0x5d8) != *(arg2 + 0x5d8))) {
            puVar1 = arg2 + 0x38;
            uStack_68 = 0;
            uStack_60 = 0;
            iStack_78 = 0;
            uStack_70 = 0;
            uStack_88 = 0;
            iStack_80 = 0;
            uStack_98 = 0;
            uStack_90 = 0;
            uStack_a8 = 0;
            uStack_a0 = 0;
            uStack_b8 = 0;
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_b0 = 3;
            uStack_e8 = 0;
            uStack_e0 = 0;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 0) {
                uVar6 = 2;
code_r0x08001bd8:
                refcount_warn_saturate(puVar1,uVar6);
            }
            else if ((uVar7 + 1 | uVar7) < 0) {
                uVar6 = 1;
                goto code_r0x08001bd8;
            }
            uStack_68 = CONCAT44(uStack_68._4_4_,unaff_x23);
            uStack_60 = CONCAT44(in_w4,CONCAT71(uStack_60._1_7_,unaff_x24)) & 0xffffffffffffff01;
            iStack_80 = arg2;
            iStack_78 = arg1;
            millet_sendmsg(2,arg1,&uStack_e8);
            Hint_Prefetch(puVar1,2,0,1);
            do {
                uVar7 = *puVar1;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                __put_task_struct(arg2);
            }
            else if (uVar7 < 1) {
                refcount_warn_saturate(puVar1,3);
            }
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 == 1) {
                DataMemoryBarrier(2,1);
                goto code_r0x08001c20;
            }
code_r0x08001c50:
            if (uVar7 < 1) {
                refcount_warn_saturate(unaff_x20,3);
            }
        }
        else {
            Hint_Prefetch(unaff_x20,2,0,1);
            do {
                uVar7 = *unaff_x20;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
                if (bVar4) {
                    *unaff_x20 = uVar7 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (uVar7 != 1) goto code_r0x08001c50;
            DataMemoryBarrier(2,1);
code_r0x08001c20:
            __put_task_struct(arg1);
        }
code_r0x08001c58:
        in_w4 = unaff_w22;
        arg2 = unaff_x21;
        arg1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.mi_query_binder_st_hook @ 0x08001d20 (size 140) =====

void sym.mi_query_binder_st_hook(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    uchar auVar5 [16];
    ulong uVar6;
    ulong *puVar7;
    uint uVar8;
    uint32_t in_w4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x19;
    ulong uVar9;
    uint32_t *unaff_x20;
    ulong unaff_x21;
    int64_t iVar10;
    uint32_t unaff_w22;
    uint64_t unaff_x23;
    uint unaff_w24;
    ulong unaff_x30;
    uchar auVar11 [16];
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
    int64_t iStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uint64_t uStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    uint64_t uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    uint64_t uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    auVar5._8_8_ = unaff_x21;
    auVar5._0_8_ = unaff_x19;
    uVar8 = arg4;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_18 = *(iVar10 + 0x5e0);
    uStack_80 = 0;
    uStack_88 = arg1 & 0xffffffff;
    uStack_38 = CONCAT44(arg3,uVar8);
    puVar7 = &uStack_a8;
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_30 = in_w4;
    iStack_40 = arg2;
    millet_sendmsg(3);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_18) {
        return;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.mi_binder_overflow_hook;
    pcStack_f8 = sym.mi_binder_overflow_hook;
    iVar10 = sp_el0;
    iStack_108 = *(iVar10 + 0x5e0);
    puStack_100 = &stack0xfffffffffffffff0;
    if (auVar11._0_8_ == 0) goto code_r0x08001f6c;
    unaff_x23 = puVar7 & 0xffffffff;
    unaff_x20 = auVar11._0_8_ + 0x38;
    do {
        iVar10 = auVar11._8_8_;
        uVar9 = auVar11._0_8_;
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar6 = 2;
code_r0x08001ed0:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001ed0;
        }
        puVar1 = iVar10 + 0x38;
        uStack_118 = 0;
        uStack_110 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        iStack_130 = 0;
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
code_r0x08001eec:
            refcount_warn_saturate(puVar1,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001eec;
        }
        uStack_118 = CONCAT44(uStack_118._4_4_,unaff_x23);
        uStack_110 = CONCAT44(in_w4,CONCAT71(uStack_110._1_7_,uVar8)) & 0xffffffffffffff01;
        iStack_130 = iVar10;
        uStack_128 = uVar9;
        millet_sendmsg(2,uVar9,&uStack_198);
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
            __put_task_struct(iVar10);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(puVar1,3);
        }
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        unaff_w22 = in_w4;
        unaff_w24 = uVar8;
        auVar5 = auVar11;
        if (uVar2 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(uVar9);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
code_r0x08001f6c:
        auVar11 = auVar5;
        uVar8 = unaff_w24;
        in_w4 = unaff_w22;
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_108) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.mi_binder_overflow_hook @ 0x08001dac (size 620) =====

void sym.mi_binder_overflow_hook(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    ulong uVar6;
    uint in_w4;
    ulong *in_x18;
    int64_t unaff_x19;
    uint32_t *unaff_x20;
    int64_t unaff_x21;
    uint unaff_w22;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    ulong unaff_x30;
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
    int64_t iStack_80;
    int64_t iStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    if (arg1 == 0) goto code_r0x08001f6c;
    unaff_x24 = arg4 & 0xffffffff;
    unaff_x23 = arg3 & 0xffffffff;
    unaff_x20 = arg1 + 0x38;
    do {
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (uVar2 == 0) {
            uVar6 = 2;
code_r0x08001ed0:
            refcount_warn_saturate(unaff_x20,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001ed0;
        }
        puVar1 = arg2 + 0x38;
        uStack_68 = 0;
        uStack_60 = 0;
        iStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        iStack_80 = 0;
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
code_r0x08001eec:
            refcount_warn_saturate(puVar1,uVar6);
        }
        else if ((uVar2 + 1 | uVar2) < 0) {
            uVar6 = 1;
            goto code_r0x08001eec;
        }
        uStack_68 = CONCAT44(uStack_68._4_4_,unaff_x23);
        uStack_60 = CONCAT44(in_w4,CONCAT71(uStack_60._1_7_,unaff_x24)) & 0xffffffffffffff01;
        iStack_80 = arg2;
        iStack_78 = arg1;
        millet_sendmsg(2,arg1,&uStack_e8);
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
            __put_task_struct(arg2);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(puVar1,3);
        }
        Hint_Prefetch(unaff_x20,2,0,1);
        do {
            uVar2 = *unaff_x20;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(unaff_x20,0x10);
            if (bVar4) {
                *unaff_x20 = uVar2 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        unaff_x19 = arg1;
        unaff_x21 = arg2;
        unaff_w22 = in_w4;
        if (uVar2 == 1) {
            DataMemoryBarrier(2,1);
            __put_task_struct(arg1);
        }
        else if (uVar2 < 1) {
            refcount_warn_saturate(unaff_x20,3);
        }
code_r0x08001f6c:
        in_w4 = unaff_w22;
        arg2 = unaff_x21;
        arg1 = unaff_x19;
        iVar5 = sp_el0;
        if (*(iVar5 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
    } while( true );
}


// ===== sym.__cfi_check_fail @ 0x08002018 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800205c

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
    //switch table (4 cases) at 0x80002f8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8002070);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002074 (size 240) =====

//WARNING: Control flow encountered bad instruction data

ulong sym.init_module(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    code *pcStack_40;
    code *pcStack_38;
    code *pcStack_30;
    code *pcStack_28;
    code *pcStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    _printk(0x8000348);
    uStack_50 = 3;
    uStack_48 = 0x20000;
    pcStack_30 = sym.mi_binder_trans_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_28 = sym.mi_binder_wait4_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_20 = sym.mi_query_binder_st_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_40 = sym.mi_binder_overflow_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    pcStack_38 = sym.mi_binder_reply_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt;
    oem_register_binder_hook(&uStack_50);
    register_millet_hook
              (2,0,sym.binder_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
               sym.binder_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt);
    init_millet_subsystem(2);
    register_millet_hook
              (3,sym.binder_recv_hook.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
               sym.binder_st_sendmsg.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt,
               sym.binder_st_init_millet.835a4498e5ea78c0e09ecbebc9fc5a14.cfi_jt);
    init_millet_subsystem(3);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return 0;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}

