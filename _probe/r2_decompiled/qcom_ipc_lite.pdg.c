// decompiled from qcom_ipc_lite by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 328) =====

//WARNING: Switch with 1 destination removed at 0x08001394

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x61278529fef85643) {
            uVar2 = 0x8001178;
        }
        else if (arg1 == -0x213536cc9e9f8cd8) {
            uVar2 = 0x8001160;
        }
        else {
            if (arg1 != -0x19ad56ffbc919b67) goto code_r0x08001354;
            uVar2 = 0x8001170;
        }
    }
    else if (arg1 < 0x2ce63a3287021e91) {
        if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x8001158;
        }
        else {
            if (arg1 != 0x1194bd794accbf3b) goto code_r0x08001354;
            uVar2 = 0x8001180;
        }
    }
    else if (arg1 == 0x2ce63a3287021e91) {
        uVar2 = 0x8001168;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001354;
        uVar2 = 0x8001150;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001354:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013a8);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001150 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.ipc_client.0);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001158 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.ipc_client.0,obj.__this_module);
    return;
}


// ===== sym.ipc_lite_register_client.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.ipc_lite_register_client.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 == 0) {
        return 0xffffffea;
    }
    *in_x18 = unaff_x30;
    _segment.ehdr = param_2;
    _printk(0x800021b);
    return 0;
}


// ===== sym.ipc_lite_rpmsg_remove.dc588689a24a69f6ba08030ab3bd5abb.cfi_jt @ 0x08001168 (size 8) =====

void sym.ipc_lite_rpmsg_remove.dc588689a24a69f6ba08030ab3bd5abb.cfi_jt(uint64_t param_1)

{
    if ((param_1 != 0) && (param_1 < 0xfffffffffffff001)) {
        _segment.ehdr = 0;
    }
    return;
}


// ===== sym.ipc_lite_rpmsg_probe.dc588689a24a69f6ba08030ab3bd5abb.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.ipc_lite_rpmsg_probe.dc588689a24a69f6ba08030ab3bd5abb.cfi_jt(uint64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if ((param_1 != 0) && (param_1 < 0xfffffffffffff001)) {
        *in_x18 = unaff_x30;
        _segment.ehdr = param_1;
        _dev_info(param_1,"rpmsg_probe for ipc_lite done\n");
        return 0;
    }
    return 0xffffffed;
}


// ===== sym.ipc_lite_rpmsg_callback.dc588689a24a69f6ba08030ab3bd5abb.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.ipc_lite_rpmsg_callback.dc588689a24a69f6ba08030ab3bd5abb.cfi_jt(ulong param_1,ulong *param_2)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar2 = 0;
    }
    else {
        __cfi_slowpath_diag(0xb88e550959076ba5,_segment.ehdr,0x8000140);
        uVar2 = (*pcVar1)(6,*param_2,_segment.ehdr);
    }
    return uVar2;
}


// ===== sym.ipc_lite_msg_send.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.ipc_lite_msg_send.cfi_jt(ulong param_1,ulong param_2,int param_3)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uVar2 = 0xffffffed;
    uStack_20 = param_2;
    if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
        if (param_3 == 0) {
            uVar2 = rpmsg_trysend(*(_segment.ehdr + 0x3c8),&uStack_20,8);
        }
        else {
            uVar2 = rpmsg_send(*(_segment.ehdr + 0x3c8),&uStack_20,8);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar2;
    }
    uVar3 = __stack_chk_fail(uVar2);
    if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        *extraout_x18 = sym.ipc_lite_rpmsg_probe;
        _segment.ehdr = uVar3;
        _dev_info(uVar3,"rpmsg_probe for ipc_lite done\n");
        return 0;
    }
    return 0xffffffed;
}


// ===== sym.ipc_lite_register_client @ 0x08001188 (size 80) =====

ulong sym.ipc_lite_register_client(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 == 0) {
        return 0xffffffea;
    }
    *in_x18 = unaff_x30;
    _segment.ehdr = arg2;
    _printk(0x800021b);
    return 0;
}


// ===== sym.ipc_lite_msg_send @ 0x080011d8 (size 136) =====

ulong sym.ipc_lite_msg_send(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int in_w2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int64_t iStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uVar2 = 0xffffffed;
    iStack_20 = arg1;
    if ((_segment.ehdr != 0) && (_segment.ehdr < 0xfffffffffffff001)) {
        if (in_w2 == 0) {
            uVar2 = rpmsg_trysend(*(_segment.ehdr + 0x3c8),&iStack_20,8);
        }
        else {
            uVar2 = rpmsg_send(*(_segment.ehdr + 0x3c8),&iStack_20,8);
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return uVar2;
    }
    uVar3 = __stack_chk_fail(uVar2);
    if ((uVar3 != 0) && (uVar3 < 0xfffffffffffff001)) {
        *extraout_x18 = sym.ipc_lite_rpmsg_probe;
        _segment.ehdr = uVar3;
        _dev_info(uVar3,"rpmsg_probe for ipc_lite done\n");
        return 0;
    }
    return 0xffffffed;
}


// ===== sym.ipc_lite_rpmsg_probe @ 0x08001260 (size 88) =====

ulong sym.ipc_lite_rpmsg_probe(uint32_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1;
    if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
        *in_x18 = unaff_x30;
        _segment.ehdr = uVar1;
        _dev_info(uVar1,"rpmsg_probe for ipc_lite done\n");
        return 0;
    }
    return 0xffffffed;
}


// ===== sym.ipc_lite_rpmsg_remove @ 0x080012b8 (size 36) =====

void sym.ipc_lite_rpmsg_remove(uint32_t arg1)

{
    if ((arg1 != 0) && (arg1 < 0xfffffffffffff001)) {
        _segment.ehdr = 0;
    }
    return;
}


// ===== sym.ipc_lite_rpmsg_callback @ 0x080012dc (size 116) =====

ulong sym.ipc_lite_rpmsg_callback(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr == NULL) {
        uVar2 = 0;
    }
    else {
        __cfi_slowpath_diag(0xb88e550959076ba5,_segment.ehdr,0x8000140);
        uVar2 = (*pcVar1)(6,*arg2,_segment.ehdr);
    }
    return uVar2;
}


// ===== sym.__cfi_check_fail @ 0x08001350 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001394

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
    //switch table (4 cases) at 0x8000160
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80013a8);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080013e0 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.ipc_client.0,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001414 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.ipc_client.0);
    return;
}

