// decompiled from cnss_nl by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 328) =====

//WARNING: Switch with 1 destination removed at 0x080013b4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < -0x156acdc0cfd5f5ac) {
        if (arg1 == -0x734b09deb920018a) {
            uVar2 = 0x8001180;
        }
        else if (arg1 == -0x4d7e2f04b135d45c) {
            uVar2 = 0x8001168;
        }
        else {
            if (arg1 != -0x44de2cc0c0be9f02) goto code_r0x08001374;
            uVar2 = 0x8001178;
        }
    }
    else if (arg1 < 0x77e51a1538399715) {
        if (arg1 == -0x156acdc0cfd5f5ac) {
            uVar2 = 0x8001160;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001374;
            uVar2 = 0x8001158;
        }
    }
    else if (arg1 == 0x77e51a1538399715) {
        uVar2 = 0x8001170;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001374;
        uVar2 = 0x8001150;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001374:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013c8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001150 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.cld80211_fam);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001158 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_node_with_property(0,"");
    while( true ) {
        if (iVar2 == 0) {
            return -0x13;
        }
        uVar3 = of_device_is_available(iVar2);
        if ((uVar3 & 1) != 0) break;
        iVar2 = of_find_node_with_property(iVar2,"");
    }
    memset(obj.nl_ops,0,0x8c0);
    _printk(0x80001b3);
    iVar2 = 1;
    puVar4 = 0x800031e;
    do {
        puVar4[-2] = iVar2;
        iVar2 = iVar2 + 1;
        *(puVar4 + -0x2e) = sym.cld80211_doit.d822486b90b438a58b54640046b95877.cfi_jt;
        *puVar4 = 1;
        puVar4 = puVar4 + 0x38;
    } while (iVar2 != 0x29);
    iVar1 = genl_register_family(obj.cld80211_fam);
    if (iVar1 == 0) {
        return 0;
    }
    _printk(0x80000e6,iVar1);
    return iVar1;
}


// ===== sym.cld80211_pre_doit.d822486b90b438a58b54640046b95877.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.cld80211_pre_doit.d822486b90b438a58b54640046b95877.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x2c) - 0x29 < 0xffffffd8) {
        _printk(0x80000bf);
        uVar3 = 0xffffffa1;
    }
    else {
        uVar1 = *(param_1 + 0x2c) - 1;
        uVar4 = uVar1;
        if ((0x27 < uVar1) || (*(param_3 + 0x30) = *(obj.nl_data + uVar4 * 0x10), 0x280 < (uVar4 << 4 | 8))) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x80012bc);
            (*pcVar2)();
        }
        uVar3 = 0;
        *(param_3 + 0x38) = *(uVar4 * 0x10 + 0x8000078);
    }
    return uVar3;
}


// ===== sym.cld80211_doit.d822486b90b438a58b54640046b95877.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.cld80211_doit.d822486b90b438a58b54640046b95877.cfi_jt(ulong param_1,int64_t param_2)

{
    uint16_t *puVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x30);
    if (pcVar2 == NULL) {
        _printk(0x80001cd);
        uVar3 = 0xffffffa1;
    }
    else if (*(*(param_2 + 0x20) + 8) == 0) {
        _printk(0x8000095);
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *(param_2 + 0x38);
        __cfi_slowpath_diag(0xd66b6787b14644d0,pcVar2,obj.nl_data);
        puVar1 = *(*(param_2 + 0x20) + 8);
        (*pcVar2)(puVar1 + 2,*puVar1 - 4,uVar3,*(param_2 + 4));
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.register_cld_cmd_cb.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.register_cld_cmd_cb.cfi_jt(uint32_t param_1,ulong param_2,ulong param_3)

{
    code *pcVar1;
    int64_t iVar2;
    
    if ((param_1 & 0xff) - 0x29 < 0xffffffd8) {
        return 0xffffffea;
    }
    iVar2 = (param_1 & 0xff) - 1;
    *(obj.nl_data + iVar2 * 0x10) = param_2;
    if ((iVar2 * 0x10 | 8U) < 0x281) {
        *(iVar2 * 0x10 + 0x8000078) = param_3;
        return 0;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(1,0x80011e4);
    (*pcVar1)();
}


// ===== sym.cld80211_get_genl_family.cfi_jt @ 0x08001178 (size 8) =====

code * sym.cld80211_get_genl_family.cfi_jt(void)

{
    return obj.cld80211_fam;
}


// ===== sym.deregister_cld_cmd_cb.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.deregister_cld_cmd_cb.cfi_jt(uint32_t param_1)

{
    int64_t iVar1;
    
    if ((param_1 & 0xff) - 0x29 < 0xffffffd8) {
        return 0xffffffea;
    }
    iVar1 = (param_1 & 0xff) * 0x10;
    *(iVar1 + 0x8000060) = 0;
    *(iVar1 + 0x8000068) = 0;
    return 0;
}


// ===== sym.register_cld_cmd_cb @ 0x08001188 (size 92) =====

ulong sym.register_cld_cmd_cb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    
    uVar1 = arg1 & 0xff;
    if (uVar1 - 0x29 < 0xffffffd8) {
        return 0xffffffea;
    }
    iVar3 = uVar1 - 1;
    *(obj.nl_data + iVar3 * 0x10) = arg2;
    if ((iVar3 * 0x10 | 8U) < 0x281) {
        *(iVar3 * 0x10 + 0x8000078) = arg3;
        return 0;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(1,0x80011e4);
    (*pcVar2)();
}


// ===== sym.deregister_cld_cmd_cb @ 0x080011e4 (size 60) =====

ulong sym.deregister_cld_cmd_cb(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    
    uVar2 = arg1 & 0xff;
    if (uVar2 - 0x29 < 0xffffffd8) {
        return 0xffffffea;
    }
    iVar1 = uVar2 * 0x10;
    *(iVar1 + 0x8000060) = 0;
    *(iVar1 + 0x8000068) = 0;
    return 0;
}


// ===== sym.cld80211_get_genl_family @ 0x08001220 (size 20) =====

code * sym.cld80211_get_genl_family(void)

{
    return obj.cld80211_fam;
}


// ===== sym.cld80211_pre_doit @ 0x08001234 (size 136) =====

ulong sym.cld80211_pre_doit(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) - 0x29 < 0xffffffd8) {
        _printk(0x80000bf);
        uVar3 = 0xffffffa1;
    }
    else {
        uVar1 = *(arg1 + 0x2c) - 1;
        uVar4 = uVar1;
        if ((0x27 < uVar1) || (*(arg2 + 0x30) = *(obj.nl_data + uVar4 * 0x10), 0x280 < (uVar4 << 4 | 8))) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x80012bc);
            (*pcVar2)();
        }
        uVar3 = 0;
        *(arg2 + 0x38) = *(uVar4 * 0x10 + 0x8000078);
    }
    return uVar3;
}


// ===== sym.cld80211_doit @ 0x080012bc (size 180) =====

ulong sym.cld80211_doit(ulong noname_0,int64_t arg1)

{
    uint16_t *puVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg1 + 0x30);
    if (pcVar2 == NULL) {
        _printk(0x80001cd);
        uVar3 = 0xffffffa1;
    }
    else if (*(*(arg1 + 0x20) + 8) == 0) {
        _printk(0x8000095);
        uVar3 = 0xffffffea;
    }
    else {
        uVar3 = *(arg1 + 0x38);
        __cfi_slowpath_diag(0xd66b6787b14644d0,pcVar2,obj.nl_data);
        puVar1 = *(*(arg1 + 0x20) + 8);
        (*pcVar2)(puVar1 + 2,*puVar1 - 4,uVar3,*(arg1 + 4));
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.__cfi_check_fail @ 0x08001370 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080013b4

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
    //switch table (4 cases) at 0x8000090
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013c8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001418 (size 232) =====

int sym.init_module(void)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_find_node_with_property(0,"");
    while( true ) {
        if (iVar2 == 0) {
            return -0x13;
        }
        uVar3 = of_device_is_available(iVar2);
        if ((uVar3 & 1) != 0) break;
        iVar2 = of_find_node_with_property(iVar2,"");
    }
    memset(obj.nl_ops,0,0x8c0);
    _printk(0x80001b3);
    iVar2 = 1;
    puVar4 = 0x800031e;
    do {
        puVar4[-2] = iVar2;
        iVar2 = iVar2 + 1;
        *(puVar4 + -0x2e) = sym.cld80211_doit.d822486b90b438a58b54640046b95877.cfi_jt;
        *puVar4 = 1;
        puVar4 = puVar4 + 0x38;
    } while (iVar2 != 0x29);
    iVar1 = genl_register_family(obj.cld80211_fam);
    if (iVar1 == 0) {
        return 0;
    }
    _printk(0x80000e6,iVar1);
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08001500 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    genl_unregister_family(obj.cld80211_fam);
    return;
}

