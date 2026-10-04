// decompiled from miicmpfilter by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 212) =====

//WARNING: Switch with 1 destination removed at 0x080013ec

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 != -0x73fe26196dddb6ca) {
            if ((arg1 == -0x4d7e2f04b135d45c) && ((pcVar1 + -0x80010f8 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x080013ac;
        }
        pcVar2 = sym.hook_func.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080013ac;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080013ac:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001400);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.unregister_genl_family();
    if (obj.net_registered == 0x1) {
        nf_unregister_net_hooks(init_net,reloc.hook_func.cfi_jt,1);
    }
    obj.net_registered = 0x0;
    _printk(0x80002b5);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.register_genl_family();
    if ((uVar1 & 1) == 0) {
        uVar2 = 0xffffffff;
    }
    else {
        obj.net_registered = 0x0;
        _printk(0x80002a0);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.hook_func.cfi_jt @ 0x080010f0 (size 8) =====

ulong sym.hook_func.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    char *pcVar2;
    uint16_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != 0) && (arg3 = *(param_2 + 0x10), arg3 != 0)) {
        uVar5 = strlen(arg3);
        iVar4 = strncmp(arg3,"wlan0",uVar5);
        if ((iVar4 == 0) || (iVar4 = strncmp(arg3,"wlan1",uVar5), iVar4 == 0)) {
            iVar1 = *(param_2 + 0xd0) + *(param_2 + 0xb4);
            if ((((iVar1 != 0) && (*(iVar1 + 9) == '\x01')) &&
                (pcVar2 = *(param_2 + 0xd0) + *(param_2 + 0xb2), pcVar2 != NULL)) &&
               ((*pcVar2 == '\x03' && (pcVar2 != 0xffffffffffffffe4)))) {
                uVar3 = *(pcVar2 + 0x1e);
                _obj.unreached_ip = 0;
                *0x8000054 = 0;
                snprintf(obj.unreached_ip,0x10,"%pI4",iVar1 + 0xc);
                sym.send_nl_msg(uVar3 >> 8 | (uVar3 & 0xff00ff) << 8,0x800004c,arg3);
            }
        }
    }
    return 1;
}


// ===== sym.icmp_unreach_genl_open.68f81012e5dfa0c0fb3afe4d2a91fa02.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.icmp_unreach_genl_open.68f81012e5dfa0c0fb3afe4d2a91fa02.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.register_net_hook();
    return 0;
}


// ===== sym.icmp_unreach_genl_close.68f81012e5dfa0c0fb3afe4d2a91fa02.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.icmp_unreach_genl_close.68f81012e5dfa0c0fb3afe4d2a91fa02.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.unregister_net_hook();
    return 0;
}


// ===== sym.hook_func @ 0x08001108 (size 252) =====

ulong sym.hook_func(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    char *pcVar2;
    uint16_t uVar3;
    int iVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t arg3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (arg3 = *(arg1 + 0x10), arg3 != 0)) {
        uVar5 = strlen(arg3);
        iVar4 = strncmp(arg3,"wlan0",uVar5);
        if ((iVar4 == 0) || (iVar4 = strncmp(arg3,"wlan1",uVar5), iVar4 == 0)) {
            iVar1 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
            if ((((iVar1 != 0) && (*(iVar1 + 9) == '\x01')) &&
                (pcVar2 = *(arg1 + 0xd0) + *(arg1 + 0xb2), pcVar2 != NULL)) &&
               ((*pcVar2 == '\x03' && (pcVar2 != 0xffffffffffffffe4)))) {
                uVar3 = *(pcVar2 + 0x1e);
                _obj.unreached_ip = 0;
                *0x8000054 = 0;
                snprintf(obj.unreached_ip,0x10,"%pI4",iVar1 + 0xc);
                sym.send_nl_msg(uVar3 >> 8 | (uVar3 & 0xff00ff) << 8,0x800004c,arg3);
            }
        }
    }
    return 1;
}


// ===== sym.register_net_hook @ 0x08001204 (size 136) =====

uint sym.register_net_hook(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    uint uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((obj.net_registered & 1) == 0) {
        uVar3 = 1;
        iVar1 = nf_register_net_hooks(init_net,reloc.hook_func.cfi_jt,1);
        if (iVar1 == 0) {
            obj.net_registered = 0x1;
            uVar2 = 0x8000210;
        }
        else {
            uVar3 = 0;
            uVar2 = 0x800014a;
        }
    }
    else {
        uVar3 = 1;
        uVar2 = 0x8000174;
    }
    _printk(uVar2);
    return uVar3;
}


// ===== sym.unregister_net_hook @ 0x0800128c (size 112) =====

ulong sym.unregister_net_hook(void)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (obj.net_registered == 0x1) {
        nf_unregister_net_hooks(init_net,reloc.hook_func.cfi_jt,1);
        obj.net_registered = 0x0;
        uVar1 = 0x8000264;
    }
    else {
        uVar1 = 0x80001df;
    }
    _printk(uVar1);
    return 1;
}


// ===== sym.init_module @ 0x080012fc (size 72) =====

ulong sym.init_module(void)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.register_genl_family();
    if ((uVar1 & 1) == 0) {
        uVar2 = 0xffffffff;
    }
    else {
        obj.net_registered = 0x0;
        _printk(0x80002a0);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x08001344 (size 100) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.unregister_genl_family();
    if (obj.net_registered == 0x1) {
        nf_unregister_net_hooks(init_net,reloc.hook_func.cfi_jt,1);
    }
    obj.net_registered = 0x0;
    _printk(0x80002b5);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080013a8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080013ec

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
    //switch table (4 cases) at 0x8000139
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001400);
    (*pcVar1)();
}


// ===== sym.send_nl_msg @ 0x08001400 (size 396) =====

uint64_t sym.send_nl_msg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ushort auStack_4c [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    iVar2 = __alloc_skb(0xe80,0xa20,0,0xffffffff);
    if (iVar2 != 0) {
        iVar3 = genlmsg_put(iVar2,0,0,obj.imcp_unreach_genl_family,0,3);
        if (iVar3 != 0) {
            auStack_4c[0] = arg1;
            iVar1 = nla_put(iVar2,1,2,auStack_4c);
            if (-1 < iVar1) {
                uVar4 = strlen(arg2);
                iVar1 = nla_put(iVar2,2,uVar4,arg2);
                if (-1 < iVar1) {
                    uVar5 = strlen(arg3);
                    return uVar5;
                }
            }
        }
        kfree_skb(iVar2);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_48) {
        return 0;
    }
    __stack_chk_fail(0);
    *extraout_x18 = sym.register_genl_family;
    iVar1 = genl_register_family(obj.imcp_unreach_genl_family);
    if (iVar1 != 0) {
        _printk(0x80001a3,iVar1);
    }
    return iVar1 == 0;
}


// ===== sym.register_genl_family @ 0x0800158c (size 88) =====

ulong sym.register_genl_family(void)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = genl_register_family(obj.imcp_unreach_genl_family);
    if (iVar1 == 0) {
        return 1;
    }
    uVar2 = _printk(0x80001a3,iVar1);
    return uVar2;
}


// ===== sym.unregister_genl_family @ 0x080015e4 (size 44) =====

void sym.unregister_genl_family(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.imcp_unreach_genl_family);
    return;
}


// ===== sym.icmp_unreach_genl_open @ 0x08001610 (size 40) =====

ulong sym.icmp_unreach_genl_open(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.register_net_hook();
    return 0;
}


// ===== sym.icmp_unreach_genl_close @ 0x08001638 (size 40) =====

ulong sym.icmp_unreach_genl_close(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.unregister_net_hook();
    return 0;
}

