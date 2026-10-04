// decompiled from millet_pkg by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 280) =====

//WARNING: Switch with 1 destination removed at 0x08001794

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x15780111b28622e1) {
        if (arg1 == -0x73fe26196dddb6ca) {
            if ((pcVar1 + -0x8001148 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08001754;
        }
        if (arg1 == -0x6c744aeca9835159) {
            pcVar2 = sym.pkg_sendmsg.e882499f38153bb7f7ffd97040514600.cfi_jt;
        }
        else {
            if (arg1 != -0x2232b5fca7fb5744) goto code_r0x08001754;
            pcVar2 = sym.pkg_recv_hook.e882499f38153bb7f7ffd97040514600.cfi_jt;
        }
    }
    else if (arg1 == -0x15780111b28622e1) {
        pcVar2 = sym.pkg_init_millet.e882499f38153bb7f7ffd97040514600.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001754;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001754:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017a8);
    (*pcVar1)();
}


// ===== sym.pkg_sendmsg.e882499f38153bb7f7ffd97040514600.cfi_jt @ 0x08001120 (size 8) =====

ulong sym.pkg_sendmsg.e882499f38153bb7f7ffd97040514600.cfi_jt(int64_t param_1,uint *param_2,int64_t param_3)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == 0) || (param_2 == NULL)) || (param_3 == 0)) {
        _printk(0x80002af,"");
        uVar1 = 0xffffffff;
    }
    else {
        param_2[2] = 2;
        *param_2 = 5;
        param_2[8] = param_2[0x1a];
        uVar1 = millet_sendto_user();
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_millet_hook(5);
    nf_unregister_net_hooks(init_net,reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt,4);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001130 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000228);
    iVar3 = 0;
    do {
        *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) = 0;
        iVar3 = iVar3 + 4;
    } while (iVar3 != 0x200);
    iVar1 = nf_register_net_hooks(init_net,reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt,4);
    if (iVar1 < 0) {
        _printk(0x8000273);
        uVar2 = 0xffffffff;
    }
    else {
        _printk(0x800016d);
        register_millet_hook
                  (5,sym.pkg_recv_hook.e882499f38153bb7f7ffd97040514600.cfi_jt,
                   sym.pkg_sendmsg.e882499f38153bb7f7ffd97040514600.cfi_jt,
                   sym.pkg_init_millet.e882499f38153bb7f7ffd97040514600.cfi_jt);
        init_millet_subsystem(5);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.pkg_init_millet.e882499f38153bb7f7ffd97040514600.cfi_jt @ 0x08001138 (size 8) =====

void sym.pkg_init_millet.e882499f38153bb7f7ffd97040514600.cfi_jt(int64_t param_1)

{
    if (param_1 != 0) {
        *(param_1 + 0x264) = 5;
        *(param_1 + 0x2d0) = 1;
    }
    return;
}


// ===== sym.pkg_recv_hook.e882499f38153bb7f7ffd97040514600.cfi_jt @ 0x08001140 (size 8) =====

void sym.pkg_recv_hook.e882499f38153bb7f7ffd97040514600.cfi_jt(int64_t param_1)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x48);
    if (iVar1 == 1) {
        iVar3 = 0;
        pcVar2 = reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt;
        uVar4 = 0x80;
        do {
            if ((*pcVar2 == 0) && (uVar4 == 0x80)) {
                uVar4 = iVar3;
            }
            else if (*pcVar2 == *(param_1 + 0x4c)) {
                return;
            }
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 4;
        } while (iVar3 != 0x80);
        if (uVar4 < 0x80) {
            if (0x80 < uVar4) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800130c);
                (*pcVar2)();
            }
            *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + uVar4 * 4) = *(param_1 + 0x4c);
        }
        else {
            _printk(0x80001ab,"");
        }
    }
    else if (iVar1 == 2) {
        iVar3 = 0;
        do {
            if (*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) == *(param_1 + 0x4c)) {
                *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) = 0;
                return;
            }
            iVar3 = iVar3 + 4;
        } while (iVar3 != 0x200);
    }
    else if (iVar1 == 3) {
        iVar3 = 0;
        do {
            *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) = 0;
            iVar3 = iVar3 + 4;
        } while (iVar3 != 0x200);
    }
    return;
}


// ===== sym.pkg_ip4_out.e882499f38153bb7f7ffd97040514600.cfi_jt @ 0x08001148 (size 8) =====

ulong sym.pkg_ip4_out.e882499f38153bb7f7ffd97040514600.cfi_jt(void)

{
    return 1;
}


// ===== sym.pkg_ip6_in.e882499f38153bb7f7ffd97040514600.cfi_jt @ 0x08001150 (size 8) =====

ulong sym.pkg_ip6_in.e882499f38153bb7f7ffd97040514600.cfi_jt(ulong param_1,uint64_t param_2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t extraout_x8;
    code *extraout_x9;
    code *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    ushort auStack_c0 [2];
    uint uStack_bc;
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
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_bc = 0;
    auStack_c0[0] = 0;
    iVar5 = ipv6_find_hdr(param_2,&uStack_bc,0xffffffff,auStack_c0,0);
    if ((((iVar5 == 6) && (param_2 = *(param_2 + 0x18), param_2 != 0)) &&
        ((*(param_2 + 0x12) != '\f' || (param_2 = *(param_2 + 0x60), param_2 != 0)))) &&
       ((1 << (*(param_2 + 0x12) & 0x1f) & 0xffffefbfU) != 0)) {
        iVar6 = param_2 + 0x240;
        _raw_read_lock_bh(iVar6);
        if (*(param_2 + 0x2a0) == 0) {
            _raw_read_unlock_bh(iVar6);
        }
        else {
            uVar1 = *(*(param_2 + 0x2a0) + 0x84);
            param_2 = uVar1;
            _raw_read_unlock_bh(iVar6);
            if (0x270 < uVar1 >> 4) {
                iVar6 = 0;
                pcVar7 = reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt;
                do {
                    if (*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar6) == uVar1)
                    goto code_r0x080016f4;
                    iVar6 = iVar6 + 4;
                } while (iVar6 != 0x200);
            }
        }
    }
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_28) {
            return 1;
        }
        __stack_chk_fail();
        iVar6 = extraout_x8;
        pcVar7 = extraout_x9;
code_r0x080016f4:
        pcVar7 = pcVar7 + iVar6;
        Hint_Prefetch(pcVar7,2,0,1);
        do {
            iVar5 = *pcVar7;
            if (iVar5 != param_2) goto code_r0x08001700;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar7,0x10);
            if (bVar3) {
                *pcVar7 = 0;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08001700:
        if (iVar5 == param_2) {
            uStack_50 = param_2 & 0xffffffff;
            uVar4 = sp_el0;
            iVar5 = millet_sendmsg(5,uVar4,&uStack_b8);
            if (iVar5 < 0) {
                _printk(0x80001e0,"");
            }
        }
    } while( true );
}


// ===== sym.pkg_ip6_out.e882499f38153bb7f7ffd97040514600.cfi_jt @ 0x08001158 (size 8) =====

ulong sym.pkg_ip6_out.e882499f38153bb7f7ffd97040514600.cfi_jt(void)

{
    return 1;
}


// ===== sym.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t extraout_x8;
    code *extraout_x9;
    code *pcVar7;
    ulong *in_x18;
    uint64_t unaff_x19;
    ulong unaff_x30;
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
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    if ((((*(*(param_2 + 0xd0) + *(param_2 + 0xb4) + 9) == '\x06') && (unaff_x19 = *(param_2 + 0x18), unaff_x19 != 0))
        && ((*(unaff_x19 + 0x12) != '\f' || (unaff_x19 = *(unaff_x19 + 0x60), unaff_x19 != 0)))) &&
       ((1 << (*(unaff_x19 + 0x12) & 0x1f) & 0xffffefbfU) != 0)) {
        iVar6 = unaff_x19 + 0x240;
        _raw_read_lock_bh(iVar6);
        if (*(unaff_x19 + 0x2a0) == 0) {
            _raw_read_unlock_bh(iVar6);
        }
        else {
            uVar1 = *(*(unaff_x19 + 0x2a0) + 0x84);
            unaff_x19 = uVar1;
            _raw_read_unlock_bh(iVar6);
            if (0x270 < uVar1 >> 4) {
                iVar6 = 0;
                pcVar7 = reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt;
                do {
                    if (*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar6) == uVar1)
                    goto code_r0x08001520;
                    iVar6 = iVar6 + 4;
                } while (iVar6 != 0x200);
            }
        }
    }
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_28) {
            return 1;
        }
        __stack_chk_fail();
        iVar6 = extraout_x8;
        pcVar7 = extraout_x9;
code_r0x08001520:
        pcVar7 = pcVar7 + iVar6;
        Hint_Prefetch(pcVar7,2,0,1);
        do {
            iVar5 = *pcVar7;
            if (iVar5 != unaff_x19) goto code_r0x0800152c;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar7,0x10);
            if (bVar3) {
                *pcVar7 = 0;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800152c:
        if (iVar5 == unaff_x19) {
            uStack_50 = unaff_x19 & 0xffffffff;
            uVar4 = sp_el0;
            iVar5 = millet_sendmsg(5,uVar4,&uStack_b8);
            if (iVar5 < 0) {
                _printk(0x80001e0,"");
            }
        }
    } while( true );
}


// ===== sym.pkg_stat_show @ 0x08001168 (size 140) =====

ulong sym.pkg_stat_show(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0;
    do {
        if (*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar1) != 0) {
            seq_printf(arg1,0x8000218,*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar1));
        }
        iVar1 = iVar1 + 4;
    } while (iVar1 != 0x200);
    seq_printf(arg1,0x800025a);
    return 0;
}


// ===== sym.pkg_recv_hook @ 0x080011fc (size 272) =====

void sym.pkg_recv_hook(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    uint32_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x48);
    if (iVar1 == 1) {
        iVar3 = 0;
        pcVar2 = reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt;
        uVar4 = 0x80;
        do {
            if ((*pcVar2 == 0) && (uVar4 == 0x80)) {
                uVar4 = iVar3;
            }
            else if (*pcVar2 == *(arg1 + 0x4c)) {
                return;
            }
            iVar3 = iVar3 + 1;
            pcVar2 = pcVar2 + 4;
        } while (iVar3 != 0x80);
        if (uVar4 < 0x80) {
            if (0x80 < uVar4) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800130c);
                (*pcVar2)();
            }
            *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + uVar4 * 4) = *(arg1 + 0x4c);
        }
        else {
            _printk(0x80001ab,"");
        }
    }
    else if (iVar1 == 2) {
        iVar3 = 0;
        do {
            if (*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) == *(arg1 + 0x4c)) {
                *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) = 0;
                return;
            }
            iVar3 = iVar3 + 4;
        } while (iVar3 != 0x200);
    }
    else if (iVar1 == 3) {
        iVar3 = 0;
        do {
            *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) = 0;
            iVar3 = iVar3 + 4;
        } while (iVar3 != 0x200);
    }
    return;
}


// ===== sym.pkg_sendmsg @ 0x08001314 (size 100) =====

ulong sym.pkg_sendmsg(ulong noname_0,int64_t arg1)

{
    int64_t in_x0;
    ulong uVar1;
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((in_x0 == 0) || (arg1 == 0)) || (in_x2 == 0)) {
        _printk(0x80002af,"");
        uVar1 = 0xffffffff;
    }
    else {
        *(arg1 + 8) = 2;
        *arg1 = 5;
        *(arg1 + 0x20) = *(arg1 + 0x68);
        uVar1 = millet_sendto_user();
    }
    return uVar1;
}


// ===== sym.pkg_init_millet @ 0x08001378 (size 36) =====

void sym.pkg_init_millet(int64_t arg1)

{
    if (arg1 != 0) {
        *(arg1 + 0x264) = 5;
        *(arg1 + 0x2d0) = 1;
    }
    return;
}


// ===== sym.pkg_ip4_in @ 0x0800139c (size 448) =====

ulong sym.pkg_ip4_in(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t extraout_x8;
    code *extraout_x9;
    code *pcVar7;
    ulong *in_x18;
    uint64_t unaff_x19;
    ulong unaff_x30;
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
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    if ((((*(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 9) == '\x06') && (unaff_x19 = *(arg1 + 0x18), unaff_x19 != 0)) &&
        ((*(unaff_x19 + 0x12) != '\f' || (unaff_x19 = *(unaff_x19 + 0x60), unaff_x19 != 0)))) &&
       ((1 << (*(unaff_x19 + 0x12) & 0x1f) & 0xffffefbfU) != 0)) {
        iVar6 = unaff_x19 + 0x240;
        _raw_read_lock_bh(iVar6);
        if (*(unaff_x19 + 0x2a0) == 0) {
            _raw_read_unlock_bh(iVar6);
        }
        else {
            uVar1 = *(*(unaff_x19 + 0x2a0) + 0x84);
            unaff_x19 = uVar1;
            _raw_read_unlock_bh(iVar6);
            if (0x270 < uVar1 >> 4) {
                iVar6 = 0;
                pcVar7 = reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt;
                do {
                    if (*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar6) == uVar1)
                    goto code_r0x08001520;
                    iVar6 = iVar6 + 4;
                } while (iVar6 != 0x200);
            }
        }
    }
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_28) {
            return 1;
        }
        __stack_chk_fail();
        iVar6 = extraout_x8;
        pcVar7 = extraout_x9;
code_r0x08001520:
        pcVar7 = pcVar7 + iVar6;
        Hint_Prefetch(pcVar7,2,0,1);
        do {
            iVar5 = *pcVar7;
            if (iVar5 != unaff_x19) goto code_r0x0800152c;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar7,0x10);
            if (bVar3) {
                *pcVar7 = 0;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x0800152c:
        if (iVar5 == unaff_x19) {
            uStack_50 = unaff_x19 & 0xffffffff;
            uVar4 = sp_el0;
            iVar5 = millet_sendmsg(5,uVar4,&uStack_b8);
            if (iVar5 < 0) {
                _printk(0x80001e0,"");
            }
        }
    } while( true );
}


// ===== sym.pkg_ip6_in @ 0x0800155c (size 468) =====

ulong sym.pkg_ip6_in(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    int64_t extraout_x8;
    code *extraout_x9;
    code *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    ushort auStack_c0 [2];
    uint uStack_bc;
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
    uint64_t uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
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
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_bc = 0;
    auStack_c0[0] = 0;
    iVar5 = ipv6_find_hdr(arg1,&uStack_bc,0xffffffff,auStack_c0,0);
    if ((((iVar5 == 6) && (arg1 = *(arg1 + 0x18), arg1 != 0)) &&
        ((*(arg1 + 0x12) != '\f' || (arg1 = *(arg1 + 0x60), arg1 != 0)))) &&
       ((1 << (*(arg1 + 0x12) & 0x1f) & 0xffffefbfU) != 0)) {
        iVar6 = arg1 + 0x240;
        _raw_read_lock_bh(iVar6);
        if (*(arg1 + 0x2a0) == 0) {
            _raw_read_unlock_bh(iVar6);
        }
        else {
            uVar1 = *(*(arg1 + 0x2a0) + 0x84);
            arg1 = uVar1;
            _raw_read_unlock_bh(iVar6);
            if (0x270 < uVar1 >> 4) {
                iVar6 = 0;
                pcVar7 = reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt;
                do {
                    if (*(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar6) == uVar1)
                    goto code_r0x080016f4;
                    iVar6 = iVar6 + 4;
                } while (iVar6 != 0x200);
            }
        }
    }
    do {
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_28) {
            return 1;
        }
        __stack_chk_fail();
        iVar6 = extraout_x8;
        pcVar7 = extraout_x9;
code_r0x080016f4:
        pcVar7 = pcVar7 + iVar6;
        Hint_Prefetch(pcVar7,2,0,1);
        do {
            iVar5 = *pcVar7;
            if (iVar5 != arg1) goto code_r0x08001700;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(pcVar7,0x10);
            if (bVar3) {
                *pcVar7 = 0;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08001700:
        if (iVar5 == arg1) {
            uStack_50 = arg1 & 0xffffffff;
            uVar4 = sp_el0;
            iVar5 = millet_sendmsg(5,uVar4,&uStack_b8);
            if (iVar5 < 0) {
                _printk(0x80001e0,"");
            }
        }
    } while( true );
}


// ===== sym.pkg_ip4_out @ 0x08001730 (size 16) =====

ulong sym.pkg_ip4_out(void)

{
    return 1;
}


// ===== sym.pkg_ip6_out @ 0x08001740 (size 16) =====

ulong sym.pkg_ip6_out(void)

{
    return 1;
}


// ===== sym.__cfi_check_fail @ 0x08001750 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001794

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
    //switch table (4 cases) at 0x8000168
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80017a8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080017b4 (size 176) =====

ulong sym.init_module(void)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000228);
    iVar3 = 0;
    do {
        *(reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt + iVar3) = 0;
        iVar3 = iVar3 + 4;
    } while (iVar3 != 0x200);
    iVar1 = nf_register_net_hooks(init_net,reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt,4);
    if (iVar1 < 0) {
        _printk(0x8000273);
        uVar2 = 0xffffffff;
    }
    else {
        _printk(0x800016d);
        register_millet_hook
                  (5,sym.pkg_recv_hook.e882499f38153bb7f7ffd97040514600.cfi_jt,
                   sym.pkg_sendmsg.e882499f38153bb7f7ffd97040514600.cfi_jt,
                   sym.pkg_init_millet.e882499f38153bb7f7ffd97040514600.cfi_jt);
        init_millet_subsystem(5);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x08001864 (size 64) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_millet_hook(5);
    nf_unregister_net_hooks(init_net,reloc.pkg_ip4_in.e882499f38153bb7f7ffd97040514600.cfi_jt,4);
    return;
}

