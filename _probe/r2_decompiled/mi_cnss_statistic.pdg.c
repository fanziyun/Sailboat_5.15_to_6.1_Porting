// decompiled from mi_cnss_statistic by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x080013b8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x4d7e2f04b135d45c) {
            if ((pcVar1 + -0x80010f0 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001378;
        }
        if (arg1 != -0x4e03f4ba74edea3) goto code_r0x08001378;
        pcVar2 = sym.cnss_statistic_wow_wakeup.cfi_jt;
    }
    else if (arg1 == 0x2b3a43e29242445) {
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001378;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001378:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013cc);
    (*pcVar1)();
}


// ===== sym.cnss_statistic_wow_wakeup.cfi_jt @ 0x080010d8 (size 8) =====

uint64_t sym.cnss_statistic_wow_wakeup.cfi_jt(ushort param_1,ushort param_2,ushort param_3)

{
    uint uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ushort auStack_54 [2];
    ushort auStack_50 [2];
    ushort auStack_4c [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    if (obj.wow_suspend_type == 0x0 && obj.wow_statistic_enable != 0x0) {
        iVar6 = __alloc_skb(0xe80,0xa20,0,0xffffffff);
        if (iVar6 == 0) {
            uVar4 = 0xfffffff4;
        }
        else {
            iVar7 = genlmsg_put(iVar6,0,0,obj.wow_statistic_enable,0,1);
            if (iVar7 == 0) {
                uVar4 = 0;
            }
            else {
                auStack_54[0] = param_1;
                uVar4 = nla_put(iVar6,1,2,auStack_54);
                if (((-1 < uVar4) && (auStack_50[0] = param_2, uVar4 = nla_put(iVar6,2,2,auStack_50), -1 < uVar4))
                   && (auStack_4c[0] = param_3, uVar4 = nla_put(iVar6,3,2,auStack_4c), -1 < uVar4)) {
                    *(iVar7 + -0x14) = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - (iVar7 + -0x14);
                    uVar2 = ___alloc_skb;
                    uVar1 = _segment.ehdr;
                    if (*0x8000097 == '\0') {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x80012bc);
                        (*pcVar3)();
                    }
                    *(iVar6 + 0x38) = _segment.ehdr;
                    uVar5 = netlink_broadcast(uVar2,iVar6,0,uVar1,0xa20);
                    uVar4 = 0;
                    if (uVar5 < 0) {
                        _printk(0x80001ee,uVar5);
                        uVar4 = uVar5;
                    }
                    goto code_r0x0800127c;
                }
            }
            kfree_skb(iVar6);
        }
    }
    else {
        uVar4 = 0;
    }
code_r0x0800127c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    uVar8 = genl_unregister_family(obj.wow_statistic_enable);
    return uVar8;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.wow_statistic_enable);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e8 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800021d);
    iVar1 = genl_register_family(obj.wow_statistic_enable);
    if (iVar1 != 0) {
        _printk(0x800025c,iVar1);
    }
    return iVar1;
}


// ===== sym.cnss_statistic_genl_enable.480097cdafa2b65b7ee6216d2b1ee0c8.cfi_jt @ 0x080010f0 (size 8) =====

ulong sym.cnss_statistic_genl_enable.480097cdafa2b65b7ee6216d2b1ee0c8.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000240);
    obj.wow_statistic_enable = 0x1;
    return 0;
}


// ===== sym.cnss_statistic_genl_debug.480097cdafa2b65b7ee6216d2b1ee0c8.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.cnss_statistic_genl_debug.480097cdafa2b65b7ee6216d2b1ee0c8.cfi_jt(void)

{
    return 0;
}


// ===== sym.cnss_statistic_genl_disable.480097cdafa2b65b7ee6216d2b1ee0c8.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.cnss_statistic_genl_disable.480097cdafa2b65b7ee6216d2b1ee0c8.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001d1);
    obj.wow_statistic_enable = 0x0;
    return 0;
}


// ===== sym.cnss_statistic_wow_wakeup @ 0x08001108 (size 444) =====

uint64_t sym.cnss_statistic_wow_wakeup(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ushort auStack_54 [2];
    ushort auStack_50 [2];
    ushort auStack_4c [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    if (obj.wow_suspend_type == 0x0 && obj.wow_statistic_enable != 0x0) {
        iVar6 = __alloc_skb(0xe80,0xa20,0,0xffffffff);
        if (iVar6 == 0) {
            uVar4 = 0xfffffff4;
        }
        else {
            iVar7 = genlmsg_put(iVar6,0,0,obj.wow_statistic_enable,0,1);
            if (iVar7 == 0) {
                uVar4 = 0;
            }
            else {
                auStack_54[0] = arg1;
                uVar4 = nla_put(iVar6,1,2,auStack_54);
                if (((-1 < uVar4) && (auStack_50[0] = arg2, uVar4 = nla_put(iVar6,2,2,auStack_50), -1 < uVar4)) &&
                   (auStack_4c[0] = arg3, uVar4 = nla_put(iVar6,3,2,auStack_4c), -1 < uVar4)) {
                    *(iVar7 + -0x14) = (*(iVar6 + 0xd0) + *(iVar6 + 200)) - (iVar7 + -0x14);
                    uVar2 = ___alloc_skb;
                    uVar1 = _segment.ehdr;
                    if (*0x8000097 == '\0') {
    //WARNING: Does not return
                        pcVar3 = SoftwareBreakpoint(0x800,0x80012bc);
                        (*pcVar3)();
                    }
                    *(iVar6 + 0x38) = _segment.ehdr;
                    uVar5 = netlink_broadcast(uVar2,iVar6,0,uVar1,0xa20);
                    uVar4 = 0;
                    if (uVar5 < 0) {
                        _printk(0x80001ee,uVar5);
                        uVar4 = uVar5;
                    }
                    goto code_r0x0800127c;
                }
            }
            kfree_skb(iVar6);
        }
    }
    else {
        uVar4 = 0;
    }
code_r0x0800127c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.cleanup_module;
    uVar8 = genl_unregister_family(obj.wow_statistic_enable);
    return uVar8;
}


// ===== sym.cleanup_module @ 0x080012c4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.wow_statistic_enable);
    return;
}


// ===== sym.cnss_statistic_genl_debug @ 0x080012f0 (size 16) =====

ulong sym.cnss_statistic_genl_debug(int64_t arg1)

{
    return 0;
}


// ===== sym.cnss_statistic_genl_enable @ 0x08001300 (size 60) =====

ulong sym.cnss_statistic_genl_enable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000240);
    obj.wow_statistic_enable = 0x1;
    return 0;
}


// ===== sym.cnss_statistic_genl_disable @ 0x0800133c (size 56) =====

ulong sym.cnss_statistic_genl_disable(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001d1);
    obj.wow_statistic_enable = 0x0;
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001374 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080013b8

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
    //switch table (4 cases) at 0x80002b7
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013cc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001400 (size 96) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800021d);
    iVar1 = genl_register_family(obj.wow_statistic_enable);
    if (iVar1 != 0) {
        _printk(0x800025c,iVar1);
    }
    return iVar1;
}

