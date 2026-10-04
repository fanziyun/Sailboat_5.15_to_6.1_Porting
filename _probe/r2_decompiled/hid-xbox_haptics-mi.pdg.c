// decompiled from hid-xbox_haptics-mi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 268) =====

//WARNING: Switch with 1 destination removed at 0x08001478

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x1a4e0d2ab8a2a3ed) {
        if (arg1 == -0x650d2ecc59aa8dc5) {
            uVar2 = 0x8001140;
        }
        else if (arg1 == -0x550b9e52359ac614) {
            uVar2 = 0x8001130;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001438;
            uVar2 = 0x8001128;
        }
    }
    else if (arg1 == 0x1a4e0d2ab8a2a3ed) {
        uVar2 = 0x8001138;
    }
    else if (arg1 == 0x325036565b919fef) {
        uVar2 = 0x8001118;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001438;
        uVar2 = 0x8001120;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001438:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800148c);
    (*pcVar1)();
}


// ===== sym.ms_remove.b4879c726d97fd71d951c8d4f1423be4.cfi_jt @ 0x08001118 (size 8) =====

void sym.ms_remove.b4879c726d97fd71d951c8d4f1423be4.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    hid_hw_stop();
    if (**(param_1 + 0x1978) < '\0') {
        cancel_work_sync(*(param_1 + 0x1978) + 0x10);
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    hid_unregister_driver(obj.ms_driver);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __hid_register_driver(obj.ms_driver,obj.__this_module,"hid_xbox_haptics_mi");
    return;
}


// ===== sym.ms_ff_worker.b4879c726d97fd71d951c8d4f1423be4.cfi_jt @ 0x08001130 (size 8) =====

void sym.ms_ff_worker.b4879c726d97fd71d951c8d4f1423be4.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ushort *puVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x38);
    iVar2 = *(param_1 + -8);
    puVar3[3] = 0;
    *(puVar3 + 1) = 0;
    *puVar3 = 0x303;
    *(puVar3 + 3) = 0xff;
    *(puVar3 + 4) = 0xff;
    *(puVar3 + 2) = *(param_1 + 0x30);
    *(puVar3 + 5) = *(param_1 + 0x31);
    if ((puVar3 != NULL) && (pcVar4 = *(*(iVar2 + 0x1c78) + 0x48), pcVar4 != NULL)) {
        __cfi_slowpath_diag(0x935736342c081c13,pcVar4,0x80001b0);
        iVar1 = (*pcVar4)(iVar2,puVar3,9);
        if (-1 < iVar1) {
            return;
        }
    }
    _dev_warn(iVar2 + 0x18e0,"failed to send FF report\n");
    return;
}


// ===== sym.ms_play_effect.b4879c726d97fd71d951c8d4f1423be4.cfi_jt @ 0x08001138 (size 8) =====

ulong sym.ms_play_effect.b4879c726d97fd71d951c8d4f1423be4.cfi_jt(int64_t param_1,ulong param_2,int16_t *param_3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*param_3 == 0x50) {
        iVar2 = *(*(param_1 + 0x2d8) + 0x1978);
        *(iVar2 + 0x40) = (param_3[8] * 100) / 0xffff;
        uVar1 = _devm_kmalloc;
        *(iVar2 + 0x41) = (param_3[9] * 100) / 0xffff;
        queue_work_on(0x20,uVar1,iVar2 + 0x10);
    }
    return 0;
}


// ===== sym.ms_probe.b4879c726d97fd71d951c8d4f1423be4.cfi_jt @ 0x08001140 (size 8) =====

int sym.ms_probe.b4879c726d97fd71d951c8d4f1423be4.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    char *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x18e0;
    uVar6 = *(param_2 + 0x10);
    puVar4 = devm_kmalloc(iVar1,0x50,0xdc0);
    if (puVar4 == NULL) {
        return -0xc;
    }
    *puVar4 = uVar6;
    *(param_1 + 0x1978) = puVar4;
    iVar3 = hid_open_report(param_1);
    if (iVar3 == 0) {
        iVar3 = hid_hw_start(param_1,(uVar6 & 1) << 1 | 0x2d);
        if (iVar3 == 0) {
            pcVar7 = *(param_1 + 0x1978);
            piVar2 = param_1 + 0x1d00;
            if (piVar2 == *piVar2) {
                _dev_err(iVar1,"no inputs found\n");
            }
            else {
                if (-1 < *pcVar7) {
                    return 0;
                }
                uVar6 = *(*piVar2 + 0x18);
                *(pcVar7 + 8) = param_1;
                pcVar7[0x10] = -0x20;
                pcVar7[0x11] = -1;
                pcVar7[0x12] = -1;
                pcVar7[0x13] = -1;
                pcVar7[0x14] = '\x0f';
                pcVar7[0x15] = '\0';
                pcVar7[0x16] = '\0';
                pcVar7[0x17] = '\0';
                *(pcVar7 + 0x18) = pcVar7 + 0x18;
                *(pcVar7 + 0x20) = pcVar7 + 0x18;
                *(pcVar7 + 0x28) = sym.ms_ff_worker.b4879c726d97fd71d951c8d4f1423be4.cfi_jt;
                iVar5 = devm_kmalloc(iVar1,9,0xdc0);
                *(pcVar7 + 0x48) = iVar5;
                if (iVar5 != 0) {
                    input_set_capability(uVar6,0x15,0x50);
                    iVar3 = input_ff_create_memless
                                      (uVar6,0,sym.ms_play_effect.b4879c726d97fd71d951c8d4f1423be4.cfi_jt);
                    if (iVar3 == 0) {
                        return 0;
                    }
                }
            }
            iVar3 = 0;
            pcVar7 = "could not initialize ff, continuing anyway";
        }
        else {
            pcVar7 = "hw start failed\n";
        }
    }
    else {
        pcVar7 = "parse failed\n";
    }
    _dev_err(iVar1,pcVar7);
    return iVar3;
}


// ===== sym.ms_probe @ 0x08001148 (size 356) =====

int sym.ms_probe(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int iVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong uVar6;
    char *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x18e0;
    uVar6 = *(arg2 + 0x10);
    puVar4 = devm_kmalloc(iVar1,0x50,0xdc0);
    if (puVar4 == NULL) {
        return -0xc;
    }
    *puVar4 = uVar6;
    *(arg1 + 0x1978) = puVar4;
    iVar3 = hid_open_report(arg1);
    if (iVar3 == 0) {
        iVar3 = hid_hw_start(arg1,(uVar6 & 1) << 1 | 0x2d);
        if (iVar3 == 0) {
            pcVar7 = *(arg1 + 0x1978);
            piVar2 = arg1 + 0x1d00;
            if (piVar2 == *piVar2) {
                _dev_err(iVar1,"no inputs found\n");
            }
            else {
                if (-1 < *pcVar7) {
                    return 0;
                }
                uVar6 = *(*piVar2 + 0x18);
                *(pcVar7 + 8) = arg1;
                pcVar7[0x10] = -0x20;
                pcVar7[0x11] = -1;
                pcVar7[0x12] = -1;
                pcVar7[0x13] = -1;
                pcVar7[0x14] = '\x0f';
                pcVar7[0x15] = '\0';
                pcVar7[0x16] = '\0';
                pcVar7[0x17] = '\0';
                *(pcVar7 + 0x18) = pcVar7 + 0x18;
                *(pcVar7 + 0x20) = pcVar7 + 0x18;
                *(pcVar7 + 0x28) = sym.ms_ff_worker.b4879c726d97fd71d951c8d4f1423be4.cfi_jt;
                iVar5 = devm_kmalloc(iVar1,9,0xdc0);
                *(pcVar7 + 0x48) = iVar5;
                if (iVar5 != 0) {
                    input_set_capability(uVar6,0x15,0x50);
                    iVar3 = input_ff_create_memless
                                      (uVar6,0,sym.ms_play_effect.b4879c726d97fd71d951c8d4f1423be4.cfi_jt);
                    if (iVar3 == 0) {
                        return 0;
                    }
                }
            }
            iVar3 = 0;
            pcVar7 = "could not initialize ff, continuing anyway";
        }
        else {
            pcVar7 = "hw start failed\n";
        }
    }
    else {
        pcVar7 = "parse failed\n";
    }
    _dev_err(iVar1,pcVar7);
    return iVar3;
}


// ===== sym.ms_remove @ 0x080012b0 (size 68) =====

void sym.ms_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    hid_hw_stop();
    if (**(arg1 + 0x1978) < '\0') {
        cancel_work_sync(*(arg1 + 0x1978) + 0x10);
    }
    return;
}


// ===== sym.ms_ff_worker @ 0x080012f4 (size 192) =====

void sym.ms_ff_worker(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ushort *puVar3;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x38);
    iVar2 = *(arg1 + -8);
    puVar3[3] = 0;
    *(puVar3 + 1) = 0;
    *puVar3 = 0x303;
    *(puVar3 + 3) = 0xff;
    *(puVar3 + 4) = 0xff;
    *(puVar3 + 2) = *(arg1 + 0x30);
    *(puVar3 + 5) = *(arg1 + 0x31);
    if ((puVar3 != NULL) && (pcVar4 = *(*(iVar2 + 0x1c78) + 0x48), pcVar4 != NULL)) {
        __cfi_slowpath_diag(0x935736342c081c13,pcVar4,0x80001b0);
        iVar1 = (*pcVar4)(iVar2,puVar3,9);
        if (-1 < iVar1) {
            return;
        }
    }
    _dev_warn(iVar2 + 0x18e0,"failed to send FF report\n");
    return;
}


// ===== sym.ms_play_effect @ 0x080013b4 (size 128) =====

ulong sym.ms_play_effect(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg2 == 0x50) {
        iVar2 = *(*(arg1 + 0x2d8) + 0x1978);
        *(iVar2 + 0x40) = (*(arg2 + 0x10) * 100) / 0xffff;
        uVar1 = _devm_kmalloc;
        *(iVar2 + 0x41) = (*(arg2 + 0x12) * 100) / 0xffff;
        queue_work_on(0x20,uVar1,iVar2 + 0x10);
    }
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08001434 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001478

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
    //switch table (4 cases) at 0x80001d0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800148c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001494 (size 60) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __hid_register_driver(obj.ms_driver,obj.__this_module,"hid_xbox_haptics_mi");
    return;
}


// ===== sym.cleanup_module @ 0x080014d0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    hid_unregister_driver(obj.ms_driver);
    return;
}

