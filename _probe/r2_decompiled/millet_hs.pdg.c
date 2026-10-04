// decompiled from millet_hs by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 232) =====

//WARNING: Switch with 1 destination removed at 0x08001254

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < -0x15780111b28622e1) {
        if (arg1 == -0x6c744aeca9835159) {
            uVar2 = 0x8001108;
        }
        else {
            if (arg1 != -0x2232b5fca7fb5744) goto code_r0x08001214;
            uVar2 = 0x80010f0;
        }
    }
    else if (arg1 == -0x15780111b28622e1) {
        uVar2 = 0x8001110;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001100;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001214;
        uVar2 = 0x80010f8;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001214:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001268);
    (*pcVar1)();
}


// ===== sym.hs_recv_hook.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f0 (size 8) =====

ulong sym.hs_recv_hook.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    int64_t iVar1;
    ulong uVar2;
    uint *extraout_x1;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
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
    iVar1 = sp_el0;
    puVar3 = &uStack_a8;
    iStack_18 = *(iVar1 + 0x5e0);
    uVar2 = sp_el0;
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
    uVar2 = millet_sendmsg(6,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.hs_sendmsg;
    if ((extraout_x1 == NULL) || (puVar3 == NULL)) {
        _printk(0x8000045,"hs_sendmsg");
        uVar2 = 0xffffffff;
    }
    else {
        extraout_x1[2] = 2;
        *extraout_x1 = 6;
        uVar2 = millet_sendto_user();
    }
    return uVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_millet_hook(6);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800006b);
    register_millet_hook
              (6,sym.hs_recv_hook.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
               sym.hs_sendmsg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
               sym.hs_init_millet.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    init_millet_subsystem(6);
    return 0;
}


// ===== sym.hs_sendmsg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

ulong sym.hs_sendmsg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,uint *param_2,int64_t param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == NULL) || (param_3 == 0)) {
        _printk(0x8000045,"hs_sendmsg");
        uVar1 = 0xffffffff;
    }
    else {
        param_2[2] = 2;
        *param_2 = 6;
        uVar1 = millet_sendto_user();
    }
    return uVar1;
}


// ===== sym.hs_init_millet.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001110 (size 8) =====

void sym.hs_init_millet.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    if (param_1 != 0) {
        *(param_1 + 0x2dc) = 1;
        *(param_1 + 0x348) = 1;
    }
    return;
}


// ===== sym.hs_recv_hook @ 0x08001118 (size 128) =====

ulong sym.hs_recv_hook(void)

{
    int64_t iVar1;
    ulong uVar2;
    uint *extraout_x1;
    ulong *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
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
    iVar1 = sp_el0;
    puVar3 = &uStack_a8;
    iStack_18 = *(iVar1 + 0x5e0);
    uVar2 = sp_el0;
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
    uVar2 = millet_sendmsg(6,uVar2);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.hs_sendmsg;
    if ((extraout_x1 == NULL) || (puVar3 == NULL)) {
        _printk(0x8000045,"hs_sendmsg");
        uVar2 = 0xffffffff;
    }
    else {
        extraout_x1[2] = 2;
        *extraout_x1 = 6;
        uVar2 = millet_sendto_user();
    }
    return uVar2;
}


// ===== sym.hs_sendmsg @ 0x08001198 (size 88) =====

ulong sym.hs_sendmsg(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (in_x2 == 0)) {
        _printk(0x8000045,"hs_sendmsg");
        uVar1 = 0xffffffff;
    }
    else {
        *(arg1 + 8) = 2;
        *arg1 = 6;
        uVar1 = millet_sendto_user();
    }
    return uVar1;
}


// ===== sym.hs_init_millet @ 0x080011f0 (size 32) =====

void sym.hs_init_millet(int64_t arg1)

{
    if (arg1 != 0) {
        *(arg1 + 0x2dc) = 1;
        *(arg1 + 0x348) = 1;
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001210 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001254

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
    //switch table (4 cases) at 0x8000040
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001268);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001274 (size 88) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800006b);
    register_millet_hook
              (6,sym.hs_recv_hook.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
               sym.hs_sendmsg.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,
               sym.hs_init_millet.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    init_millet_subsystem(6);
    return 0;
}


// ===== sym.cleanup_module @ 0x080012cc (size 40) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_millet_hook(6);
    return;
}

