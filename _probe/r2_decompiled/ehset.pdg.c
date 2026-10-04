// decompiled from ehset by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x0800135c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x4a690bc21156b42e) {
        if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x80010d8;
        }
        else {
            if (arg1 != 0xce068475bcecefc) goto code_r0x0800131c;
            uVar2 = 0x80010e0;
        }
    }
    else if (arg1 == 0x4a690bc21156b42e) {
        uVar2 = 0x80010e8;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800131c;
        uVar2 = 0x80010d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x0800131c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001370);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_deregister(obj.ehset_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_register_driver(obj.ehset_driver,obj.__this_module,"ehset");
    return;
}


// ===== sym.ehset_disconnect.4eb279cdce25ce8cc33340e6851d2faf.cfi_jt @ 0x080010e0 (size 8) =====

void sym.ehset_disconnect.4eb279cdce25ce8cc33340e6851d2faf.cfi_jt(void)

{
    return;
}


// ===== sym.ehset_probe.4eb279cdce25ce8cc33340e6851d2faf.cfi_jt @ 0x080010e8 (size 8) =====

void sym.ehset_probe.4eb279cdce25ce8cc33340e6851d2faf.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    uint uVar7;
    ulong uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x90);
    iVar5 = *(iVar4 + -0x60);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (7 < *(iVar4 + 0x39a) - 0x101) {
code_r0x080012d4:
        _dev_err(param_1 + 0x30,"%s: unsupported PID: 0x%x\n","ehset_probe");
code_r0x08001300:
        uVar2 = 0xffffffea;
        goto code_r0x080011b0;
    }
    uVar1 = *(iVar4 + 0x4ca);
    uVar6 = uVar1;
    switch(*(iVar4 + 0x39a)) {
    case 0x101:
        uVar6 = uVar1 | 0x300;
        break;
    case 0x102:
        uVar6 = uVar1 | 0x100;
        break;
    case 0x103:
        uVar6 = uVar1 | 0x200;
        break;
    case 0x104:
        uVar6 = uVar1 | 0x400;
        break;
    case 0x105:
        goto code_r0x080012d4;
    case 0x106:
        msleep(15000);
        uVar2 = usb_control_msg_send(iVar5,0,3,0x23,2,uVar6,0,0,1000,0xcc0);
        if (uVar2 < 0) goto code_r0x080011b0;
        msleep(15000);
        uVar2 = 1;
        uVar3 = 2;
        uVar7 = 1000;
        goto code_r0x080011ac;
    case 0x107:
        msleep(15000);
        uVar2 = usb_control_msg_recv(iVar4 + -0xa8,0,6,0x80,0x100,0,&uStack_50,0x12,5000,0xcc0);
        goto code_r0x080011b0;
    case 0x108:
        if (iVar5 != *(*(iVar4 + -0x58) + 0x70)) {
            _dev_err(param_1 + 0x30,"SINGLE_STEP_SET_FEATURE test only supported on root hub\n");
            goto code_r0x08001300;
        }
        uVar6 = uVar1 | 0x600;
        uVar7 = 60000;
        goto code_r0x08001194;
    }
    uVar7 = 1000;
code_r0x08001194:
    uVar2 = 3;
    uVar3 = 0x15;
code_r0x080011ac:
    uVar2 = usb_control_msg_send(iVar5,0,uVar2,0x23,uVar3,uVar6,0,0,uVar7,0xcc0);
code_r0x080011b0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar2);
    return;
}


// ===== sym.ehset_probe @ 0x080010f0 (size 540) =====

void sym.ehset_probe(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    uint uVar8;
    ulong uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x90);
    iVar6 = *(iVar5 + -0x60);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uVar2 = *(iVar5 + 0x39a) - 0x101;
    if (7 < uVar2) {
code_r0x080012d4:
        _dev_err(arg1 + 0x30,"%s: unsupported PID: 0x%x\n","ehset_probe");
code_r0x08001300:
        uVar3 = 0xffffffea;
        goto code_r0x080011b0;
    }
    uVar1 = *(iVar5 + 0x4ca);
    uVar7 = uVar1;
    //switch table (8 cases) at 0x8000190
    switch(*(uVar2 + 0x8000190) * 4 + 0x8001154) {
    case 0x8001158:
        uVar7 = uVar1 | 0x300;
        break;
    case 0x8001164:
        uVar7 = uVar1 | 0x100;
        break;
    case 0x8001170:
        uVar7 = uVar1 | 0x200;
        break;
    case 0x800117c:
        uVar7 = uVar1 | 0x400;
        break;
    case 0x80011e4:
        msleep(15000);
        uVar3 = usb_control_msg_send(iVar6,0,3,0x23,2,uVar7,0,0,1000,0xcc0);
        if (uVar3 < 0) goto code_r0x080011b0;
        msleep(15000);
        uVar3 = 1;
        uVar4 = 2;
        uVar8 = 1000;
        goto code_r0x080011ac;
    case 0x800125c:
        msleep(15000);
        uVar3 = usb_control_msg_recv(iVar5 + -0xa8,0,6,0x80,0x100,0,&stack0xffffffffffffffb0,0x12,5000,0xcc0);
        goto code_r0x080011b0;
    case 0x80012a4:
        if (iVar6 != *(*(iVar5 + -0x58) + 0x70)) {
            _dev_err(arg1 + 0x30,"SINGLE_STEP_SET_FEATURE test only supported on root hub\n");
            goto code_r0x08001300;
        }
        uVar7 = uVar1 | 0x600;
        uVar8 = 60000;
        goto code_r0x08001194;
    case 0x80012d4:
        goto code_r0x080012d4;
    }
    uVar8 = 1000;
code_r0x08001194:
    uVar3 = 3;
    uVar4 = 0x15;
code_r0x080011ac:
    uVar3 = usb_control_msg_send(iVar6,0,uVar3,0x23,uVar4,uVar7,0,0,uVar8,0xcc0);
code_r0x080011b0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(uVar3);
    return;
}


// ===== sym.ehset_disconnect @ 0x0800130c (size 12) =====

void sym.ehset_disconnect(void)

{
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001318 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800135c

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
    //switch table (4 cases) at 0x8000198
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001370);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001374 (size 60) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_register_driver(obj.ehset_driver,obj.__this_module,"ehset");
    return;
}


// ===== sym.cleanup_module @ 0x080013b0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    usb_deregister(obj.ehset_driver);
    return;
}

