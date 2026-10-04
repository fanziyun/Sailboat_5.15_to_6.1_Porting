// decompiled from millet_sig by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x08001324

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x6c744aeca9835159) {
            uVar2 = 0x80010d0;
        }
        else {
            if (arg1 != -0x15780111b28622e1) goto code_r0x080012e4;
            uVar2 = 0x80010e8;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x80010d8;
    }
    else {
        if (arg1 != 0x47c44a9b9725826a) goto code_r0x080012e4;
        uVar2 = 0x80010e0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080012e4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001338);
    (*pcVar1)();
}


// ===== sym.signals_sendmsg.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt @ 0x080010d0 (size 8) =====

ulong sym.signals_sendmsg.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt(int64_t param_1,uint *param_2,int64_t param_3)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == NULL)) || (param_3 == 0)) {
        _printk(0x8000079,"signals_sendmsg");
        return 0xffffffff;
    }
    param_2[0x1e] = *(param_1 + 0x5dc);
    __rcu_read_lock();
    uVar1 = *(*(param_1 + 0x790) + 4);
    __rcu_read_unlock();
    param_2[8] = uVar1;
    param_2[2] = 2;
    *param_2 = 1;
    if (((_system_freezing_cnt == 0) || (uVar2 = freezing_slow_path(param_1), (uVar2 & 1) == 0)) &&
       ((*(param_1 + 0x3c) >> 0x10 & 1) == 0)) {
        if ((*(param_1 + 0x3c) >> 0x15 & 1) == 0) {
            __rcu_read_lock();
            uVar3 = *(*(*(param_1 + 0x978) + 0x48) + 0xe8);
            __rcu_read_unlock();
            if ((uVar3 >> 2 & 1) != 0) goto code_r0x08001234;
        }
        if ((*(param_1 + 0x590) >> 6 & 1) == 0) {
            return 0;
        }
    }
code_r0x08001234:
    if (param_2[0x1e] == **(param_3 + 0xe8)) {
        return 0;
    }
    **(param_3 + 0xe8) = param_2[0x1e];
    uVar3 = millet_sendto_user(param_1,param_2,param_3);
    return uVar3;
}


// ===== sym.init_module.cfi_jt @ 0x080010d8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000b0);
    register_millet_hook
              (1,0,sym.signals_sendmsg.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt,
               sym.signas_init_millet.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt);
    init_millet_subsystem(1);
    tracepoint_probe_register(__tracepoint_android_vh_do_send_sig_info,sym.millet_sig.cfi_jt,0);
    return 0;
}


// ===== sym.millet_sig.cfi_jt @ 0x080010e0 (size 8) =====

ulong sym.millet_sig.cfi_jt(ulong param_1,uint32_t param_2,ulong *param_3,ulong param_4)

{
    uint uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
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
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
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
    if ((param_2 < 0x10) && ((1 << (param_2 & 0x1f) & 0x8248U) != 0)) {
        param_3 = &uStack_a8;
        uStack_40 = sp_el0;
        uStack_38 = param_4;
        param_1 = millet_sendmsg(1,param_4);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return param_1;
    }
    auVar6 = __stack_chk_fail();
    puVar4 = auVar6._8_8_;
    iVar2 = auVar6._0_8_;
    *extraout_x18 = sym.signals_sendmsg;
    if (((iVar2 == 0) || (puVar4 == NULL)) || (param_3 == NULL)) {
        _printk(0x8000079,"signals_sendmsg");
        return 0xffffffff;
    }
    puVar4[0x1e] = *(iVar2 + 0x5dc);
    __rcu_read_lock();
    uVar1 = *(*(iVar2 + 0x790) + 4);
    __rcu_read_unlock();
    puVar4[8] = uVar1;
    puVar4[2] = 2;
    *puVar4 = 1;
    if (((_system_freezing_cnt == 0) || (uVar3 = freezing_slow_path(iVar2), (uVar3 & 1) == 0)) &&
       ((*(iVar2 + 0x3c) >> 0x10 & 1) == 0)) {
        if ((*(iVar2 + 0x3c) >> 0x15 & 1) == 0) {
            __rcu_read_lock();
            uVar5 = *(*(*(iVar2 + 0x978) + 0x48) + 0xe8);
            __rcu_read_unlock();
            if ((uVar5 >> 2 & 1) != 0) goto code_r0x08001234;
        }
        if ((*(iVar2 + 0x590) >> 6 & 1) == 0) {
            return 0;
        }
    }
code_r0x08001234:
    if (puVar4[0x1e] == *param_3[0x1d]) {
        return 0;
    }
    *param_3[0x1d] = puVar4[0x1e];
    uVar5 = millet_sendto_user(iVar2,puVar4,param_3);
    return uVar5;
}


// ===== sym.signas_init_millet.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt @ 0x080010e8 (size 8) =====

void sym.signas_init_millet.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt(int64_t param_1)

{
    if (param_1 != 0) {
        *(param_1 + 0x84) = 1;
        *(param_1 + 0xe8) = obj.last_report_task;
        *(param_1 + 0xf0) = 1;
    }
    return;
}


// ===== sym.millet_sig @ 0x080010f0 (size 164) =====

ulong sym.millet_sig(ulong noname_0,uint32_t arg1,uchar noname_2 [16],int64_t arg2)

{
    uint uVar1;
    ulong in_x0;
    int64_t iVar2;
    uint64_t uVar3;
    uint *puVar4;
    ulong *in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
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
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_18 = *(iVar2 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
    iStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
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
    if ((arg1 < 0x10) && ((1 << (arg1 & 0x1f) & 0x8248U) != 0)) {
        in_x2 = &uStack_a8;
        uStack_40 = sp_el0;
        iStack_38 = arg2;
        in_x0 = millet_sendmsg(1,arg2);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_18) {
        return in_x0;
    }
    auVar6 = __stack_chk_fail();
    puVar4 = auVar6._8_8_;
    iVar2 = auVar6._0_8_;
    *extraout_x18 = sym.signals_sendmsg;
    if (((iVar2 == 0) || (puVar4 == NULL)) || (in_x2 == NULL)) {
        _printk(0x8000079,"signals_sendmsg");
        return 0xffffffff;
    }
    puVar4[0x1e] = *(iVar2 + 0x5dc);
    __rcu_read_lock();
    uVar1 = *(*(iVar2 + 0x790) + 4);
    __rcu_read_unlock();
    puVar4[8] = uVar1;
    puVar4[2] = 2;
    *puVar4 = 1;
    if (((_system_freezing_cnt == 0) || (uVar3 = freezing_slow_path(iVar2), (uVar3 & 1) == 0)) &&
       ((*(iVar2 + 0x3c) >> 0x10 & 1) == 0)) {
        if ((*(iVar2 + 0x3c) >> 0x15 & 1) == 0) {
            __rcu_read_lock();
            uVar5 = *(*(*(iVar2 + 0x978) + 0x48) + 0xe8);
            __rcu_read_unlock();
            if ((uVar5 >> 2 & 1) != 0) goto code_r0x08001234;
        }
        if ((*(iVar2 + 0x590) >> 6 & 1) == 0) {
            return 0;
        }
    }
code_r0x08001234:
    if (puVar4[0x1e] == *in_x2[0x1d]) {
        return 0;
    }
    *in_x2[0x1d] = puVar4[0x1e];
    uVar5 = millet_sendto_user(iVar2,puVar4,in_x2);
    return uVar5;
}


// ===== sym.signals_sendmsg @ 0x08001194 (size 276) =====

ulong sym.signals_sendmsg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        _printk(0x8000079,"signals_sendmsg");
        return 0xffffffff;
    }
    *(arg2 + 0x78) = *(arg1 + 0x5dc);
    __rcu_read_lock();
    uVar1 = *(*(arg1 + 0x790) + 4);
    __rcu_read_unlock();
    *(arg2 + 0x20) = uVar1;
    *(arg2 + 8) = 2;
    *arg2 = 1;
    if (((_system_freezing_cnt == 0) || (uVar2 = freezing_slow_path(arg1), (uVar2 & 1) == 0)) &&
       ((*(arg1 + 0x3c) >> 0x10 & 1) == 0)) {
        if ((*(arg1 + 0x3c) >> 0x15 & 1) == 0) {
            __rcu_read_lock();
            uVar3 = *(*(*(arg1 + 0x978) + 0x48) + 0xe8);
            __rcu_read_unlock();
            if ((uVar3 >> 2 & 1) != 0) goto code_r0x08001234;
        }
        if ((*(arg1 + 0x590) >> 6 & 1) == 0) {
            return 0;
        }
    }
code_r0x08001234:
    if (*(arg2 + 0x78) == **(arg3 + 0xe8)) {
        return 0;
    }
    **(arg3 + 0xe8) = *(arg2 + 0x78);
    uVar3 = millet_sendto_user(arg1,arg2,arg3);
    return uVar3;
}


// ===== sym.signas_init_millet @ 0x080012b4 (size 44) =====

void sym.signas_init_millet(int64_t arg1)

{
    if (arg1 != 0) {
        *(arg1 + 0x84) = 1;
        *(arg1 + 0xe8) = obj.last_report_task;
        *(arg1 + 0xf0) = 1;
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x080012e0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001324

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
    //switch table (4 cases) at 0x8000074
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001338);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001350 (size 108) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000b0);
    register_millet_hook
              (1,0,sym.signals_sendmsg.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt,
               sym.signas_init_millet.cd1a1c9c6c8232e446d1fde873d24f75.cfi_jt);
    init_millet_subsystem(1);
    tracepoint_probe_register(__tracepoint_android_vh_do_send_sig_info,sym.millet_sig.cfi_jt,0);
    return 0;
}

