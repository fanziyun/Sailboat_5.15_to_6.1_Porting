// decompiled from mi_exception_log by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 268) =====

//WARNING: Switch with 1 destination removed at 0x08001784

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x7bcbda558eb245e5) {
            uVar2 = 0x8001120;
        }
        else if (arg1 == -0x66e4fb628a748d3a) {
            uVar2 = 0x8001140;
        }
        else {
            if (arg1 != -0x8dc801903aca538) goto code_r0x08001744;
            uVar2 = 0x8001138;
        }
    }
    else if (arg1 == 0x2b3a43e29242445) {
        uVar2 = 0x8001130;
    }
    else if (arg1 == 0x7ff5a213d37b1a6) {
        uVar2 = 0x8001118;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001744;
        uVar2 = 0x8001128;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08001744:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001798);
    (*pcVar1)();
}


// ===== sym.exception_log_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001118 (size 8) =====

uint64_t sym.exception_log_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    char cVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t extraout_x1;
    ulong *puVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auStack_898 [1024];
    int64_t iStack_498;
    uchar *puStack_490;
    code *pcStack_488;
    uchar auStack_458 [1024];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    memset(auStack_458,0,0x400);
    uVar3 = _raw_spin_lock_irqsave(obj.mi_exception_log_init.__key.4);
    uVar7 = *0x8019124;
    uVar4 = *0x8019124;
    if (*0x8019128 == *0x8019124) {
        if (100 < *0x8019124) {
code_r0x08001364:
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x5512,0x8001368);
            (*pcVar10)();
        }
        *(uVar4 * 0x400 + 0x8000127) = 0xa7974;
        *(uVar4 * 0x400 + 0x8000124) = 0x74706d65;
    }
    else {
        if (100 < *0x8019124) goto code_r0x08001364;
        uVar5 = strlen(uVar4 * 0x400 + 0x8000124);
        if (uVar5 + 1 < 0x400) {
            if (0x400 < uVar5) goto code_r0x08001364;
            uVar8 = uVar4 << 10 | 4;
            if (0x19027 < uVar8 + uVar5) goto code_r0x08001368;
            uVar1 = (uVar5 << 0x20) + 0x100000000;
            *(uVar4 * 0x400 + uVar5 + 0x8000124) = 10;
            if (0x400 < uVar1 >> 0x20) goto code_r0x08001364;
            iVar9 = uVar1 >> 0x20;
        }
        else {
            if (99 < uVar7) goto code_r0x08001368;
            iVar9 = 0x3fd;
            uVar8 = uVar4 << 10 | 4;
            *(uVar4 * 0x400 + 0x8000522) = 10;
        }
        if (0x19027 < uVar8 + iVar9) {
code_r0x08001368:
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(1,0x800136c);
            (*pcVar10)();
        }
        *(uVar4 * 0x400 + iVar9 + 0x8000124) = 0;
        *0x8019124 = (*0x8019124 + 1) % 100;
    }
    iVar9 = uVar4 * 0x400 + 0x8000124;
    uVar4 = strlen(iVar9);
    if (param_3 <= uVar4) {
        uVar4 = param_3;
    }
    strncpy(auStack_458,iVar9,uVar4);
    _raw_spin_unlock_irqrestore(obj.mi_exception_log_init.__key.4,uVar3);
    if (uVar4 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x8001360);
        (*pcVar10)();
    }
    auVar11 = __check_object_size(auStack_458,uVar4,1);
    sym._copy_to_user(param_2,auVar11,uVar4);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.exception_log_write_iter;
    pcStack_488 = sym.exception_log_write_iter;
    iVar9 = sp_el0;
    iStack_498 = *(iVar9 + 0x5e0);
    uVar4 = *(extraout_x1 + 0x10);
    puStack_490 = &stack0xffffffffffffffb0;
    memset(auStack_898,0,0x400);
    if (0x3fd < uVar4) {
        uVar4 = 0x3fe;
    }
    __check_object_size(auStack_898,uVar4,0);
    uVar5 = _copy_from_iter(auStack_898,uVar4,extraout_x1);
    if (uVar5 == uVar4) {
        uVar3 = _raw_spin_lock_irqsave(obj.mi_exception_log_init.__key.4);
        *0x8019000 = (*0x8019128 + 1) % 100;
        if (*0x8019000 == *0x8019124) {
            cVar2 = *0x8019000 + '\x01';
            uVar7 = cVar2 * 0x29;
            *0x8019000 = cVar2 + ((uVar7 >> 0xf & 1) + (uVar7 >> 0xc)) * -100;
        }
        if (100 < *0x8019128) {
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x5512,0x80014f8);
            (*pcVar10)();
        }
        strncpy(*0x8019128 * 0x400 + 0x8000124,auStack_898,uVar4);
        _raw_spin_unlock_irqrestore(obj.mi_exception_log_init.__key.4,uVar3);
        __wake_up(0x8019130,1,1,0);
    }
    else {
        iov_iter_revert(extraout_x1,uVar5);
        uVar4 = 0xfffffffffffffff2;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_498) {
        auVar11 = __stack_chk_fail();
        puVar6 = auVar11._8_8_;
        *extraout_x18_00 = sym.exception_log_poll;
        if ((puVar6 != NULL) && (pcVar10 = *puVar6, pcVar10 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar10,obj.mi_exception_log_dev);
            (*pcVar10)(auVar11._0_8_,0x8019130,puVar6);
        }
        uVar7 = 0x145;
        if (*0x8019128 != *0x8019124) {
            uVar7 = 0x147;
        }
        return uVar7;
    }
    return uVar4;
}


// ===== sym.exception_log_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001120 (size 8) =====

uint sym.exception_log_poll.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,ulong *param_2)

{
    uint uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != NULL) && (pcVar2 = *param_2, pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,obj.mi_exception_log_dev);
        (*pcVar2)(param_1,0x8019130,param_2);
    }
    uVar1 = 0x145;
    if (*0x8019128 != *0x8019124) {
        uVar1 = 0x147;
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(CONCAT44(*0x8019004,*0x8019000),_segment.ehdr);
    class_destroy(CONCAT44(*0x8019004,*0x8019000));
    __unregister_chrdev(*0x8019000,0,0x100,"mi_exception_log");
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001130 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __register_chrdev(0,0,0x100,"mi_exception_log",obj.exception_log_fops);
    *0x8019000 = CONCAT44(*0x8019004,uVar1);
    uVar2 = __class_create(obj.__this_module,"mi_exception_log",obj.mi_exception_log_init.__key);
    uVar3 = *0x8019000 & 0xffffffff;
    *0x8019000 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        _segment.ehdr = *0x8019000 << 0x14;
        uVar2 = device_create(uVar2,0,_segment.ehdr,0,"mi_exception_log");
        if (uVar2 < 0xfffffffffffff001) {
            __init_waitqueue_head
                      (0x8019130,"&tmp_exception_log_dev->exception_log_is_not_empty",
                       obj.mi_exception_log_init.__key.4);
            _printk(0x80001fb);
            uVar2 = 0;
        }
        else {
            class_destroy(*0x8019000);
            __unregister_chrdev(*0x8019000 & 0xffffffff,0,0x100,"mi_exception_log");
            _printk(0x8000266,"mi_exception_log");
            uVar2 = 0xffffffea;
        }
    }
    else {
        __unregister_chrdev(uVar3,0,0x100,"mi_exception_log");
        _printk(0x8000239);
        uVar2 = *0x8019000 & 0xffffffff;
    }
    return uVar2;
}


// ===== sym.exception_log_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001138 (size 8) =====

ulong sym.exception_log_release.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __wake_up(0x8019130,1,1,0);
    return 0;
}


// ===== sym.exception_log_write_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001140 (size 8) =====

uint64_t sym.exception_log_write_iter.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(ulong param_1,int64_t param_2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auStack_438 [1024];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar7 = *(param_2 + 0x10);
    memset(auStack_438,0,0x400);
    if (0x3fd < uVar7) {
        uVar7 = 0x3fe;
    }
    __check_object_size(auStack_438,uVar7,0);
    uVar3 = _copy_from_iter(auStack_438,uVar7,param_2);
    if (uVar3 == uVar7) {
        uVar4 = _raw_spin_lock_irqsave(obj.mi_exception_log_init.__key.4);
        *0x8019000 = (*0x8019128 + 1) % 100;
        if (*0x8019000 == *0x8019124) {
            cVar1 = *0x8019000 + '\x01';
            uVar6 = cVar1 * 0x29;
            *0x8019000 = cVar1 + ((uVar6 >> 0xf & 1) + (uVar6 >> 0xc)) * -100;
        }
        if (100 < *0x8019128) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5512,0x80014f8);
            (*pcVar8)();
        }
        strncpy(*0x8019128 * 0x400 + 0x8000124,auStack_438,uVar7);
        _raw_spin_unlock_irqrestore(obj.mi_exception_log_init.__key.4,uVar4);
        __wake_up(0x8019130,1,1,0);
    }
    else {
        iov_iter_revert(param_2,uVar3);
        uVar7 = 0xfffffffffffffff2;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        auVar9 = __stack_chk_fail();
        puVar5 = auVar9._8_8_;
        *extraout_x18 = sym.exception_log_poll;
        if ((puVar5 != NULL) && (pcVar8 = *puVar5, pcVar8 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar8,obj.mi_exception_log_dev);
            (*pcVar8)(auVar9._0_8_,0x8019130,puVar5);
        }
        uVar6 = 0x145;
        if (*0x8019128 != *0x8019124) {
            uVar6 = 0x147;
        }
        return uVar6;
    }
    return uVar7;
}


// ===== sym.exception_log_read @ 0x08001148 (size 552) =====

uint64_t sym.exception_log_read(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    char cVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t extraout_x1;
    ulong *puVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auStack_898 [1024];
    int64_t iStack_498;
    uchar *puStack_490;
    code *pcStack_488;
    uchar auStack_458 [1024];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    memset(auStack_458,0,0x400);
    uVar3 = _raw_spin_lock_irqsave(obj.mi_exception_log_init.__key.4);
    uVar7 = *0x8019124;
    uVar4 = *0x8019124;
    if (*0x8019128 == *0x8019124) {
        if (100 < *0x8019124) {
code_r0x08001364:
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x5512,0x8001368);
            (*pcVar10)();
        }
        *(uVar4 * 0x400 + 0x8000127) = 0xa7974;
        *(uVar4 * 0x400 + 0x8000124) = 0x74706d65;
    }
    else {
        if (100 < *0x8019124) goto code_r0x08001364;
        uVar5 = strlen(uVar4 * 0x400 + 0x8000124);
        if (uVar5 + 1 < 0x400) {
            if (0x400 < uVar5) goto code_r0x08001364;
            uVar8 = uVar4 << 10 | 4;
            if (0x19027 < uVar8 + uVar5) goto code_r0x08001368;
            uVar1 = (uVar5 << 0x20) + 0x100000000;
            *(uVar4 * 0x400 + uVar5 + 0x8000124) = 10;
            if (0x400 < uVar1 >> 0x20) goto code_r0x08001364;
            iVar9 = uVar1 >> 0x20;
        }
        else {
            if (99 < uVar7) goto code_r0x08001368;
            iVar9 = 0x3fd;
            uVar8 = uVar4 << 10 | 4;
            *(uVar4 * 0x400 + 0x8000522) = 10;
        }
        if (0x19027 < uVar8 + iVar9) {
code_r0x08001368:
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(1,0x800136c);
            (*pcVar10)();
        }
        *(uVar4 * 0x400 + iVar9 + 0x8000124) = 0;
        *0x8019124 = (*0x8019124 + 1) % 100;
    }
    iVar9 = uVar4 * 0x400 + 0x8000124;
    uVar4 = strlen(iVar9);
    if (arg2 <= uVar4) {
        uVar4 = arg2;
    }
    strncpy(auStack_458,iVar9,uVar4);
    _raw_spin_unlock_irqrestore(obj.mi_exception_log_init.__key.4,uVar3);
    if (uVar4 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar10 = SoftwareBreakpoint(0x800,0x8001360);
        (*pcVar10)();
    }
    auVar11 = __check_object_size(auStack_458,uVar4,1);
    sym._copy_to_user(arg1,auVar11,uVar4);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.exception_log_write_iter;
    pcStack_488 = sym.exception_log_write_iter;
    iVar9 = sp_el0;
    iStack_498 = *(iVar9 + 0x5e0);
    uVar4 = *(extraout_x1 + 0x10);
    puStack_490 = &stack0xffffffffffffffb0;
    memset(auStack_898,0,0x400);
    if (0x3fd < uVar4) {
        uVar4 = 0x3fe;
    }
    __check_object_size(auStack_898,uVar4,0);
    uVar5 = _copy_from_iter(auStack_898,uVar4,extraout_x1);
    if (uVar5 == uVar4) {
        uVar3 = _raw_spin_lock_irqsave(obj.mi_exception_log_init.__key.4);
        *0x8019000 = (*0x8019128 + 1) % 100;
        if (*0x8019000 == *0x8019124) {
            cVar2 = *0x8019000 + '\x01';
            uVar7 = cVar2 * 0x29;
            *0x8019000 = cVar2 + ((uVar7 >> 0xf & 1) + (uVar7 >> 0xc)) * -100;
        }
        if (100 < *0x8019128) {
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x5512,0x80014f8);
            (*pcVar10)();
        }
        strncpy(*0x8019128 * 0x400 + 0x8000124,auStack_898,uVar4);
        _raw_spin_unlock_irqrestore(obj.mi_exception_log_init.__key.4,uVar3);
        __wake_up(0x8019130,1,1,0);
    }
    else {
        iov_iter_revert(extraout_x1,uVar5);
        uVar4 = 0xfffffffffffffff2;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_498) {
        auVar11 = __stack_chk_fail();
        puVar6 = auVar11._8_8_;
        *extraout_x18_00 = sym.exception_log_poll;
        if ((puVar6 != NULL) && (pcVar10 = *puVar6, pcVar10 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar10,obj.mi_exception_log_dev);
            (*pcVar10)(auVar11._0_8_,0x8019130,puVar6);
        }
        uVar7 = 0x145;
        if (*0x8019128 != *0x8019124) {
            uVar7 = 0x147;
        }
        return uVar7;
    }
    return uVar4;
}


// ===== sym.exception_log_write_iter @ 0x08001370 (size 396) =====

uint64_t sym.exception_log_write_iter(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *puVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    code *pcVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auStack_438 [1024];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar7 = *(arg1 + 0x10);
    memset(auStack_438,0,0x400);
    if (0x3fd < uVar7) {
        uVar7 = 0x3fe;
    }
    __check_object_size(auStack_438,uVar7,0);
    uVar3 = _copy_from_iter(auStack_438,uVar7,arg1);
    if (uVar3 == uVar7) {
        uVar4 = _raw_spin_lock_irqsave(obj.mi_exception_log_init.__key.4);
        *0x8019000 = (*0x8019128 + 1) % 100;
        if (*0x8019000 == *0x8019124) {
            cVar1 = *0x8019000 + '\x01';
            uVar6 = cVar1 * 0x29;
            *0x8019000 = cVar1 + ((uVar6 >> 0xf & 1) + (uVar6 >> 0xc)) * -100;
        }
        if (100 < *0x8019128) {
    //WARNING: Does not return
            pcVar8 = SoftwareBreakpoint(0x5512,0x80014f8);
            (*pcVar8)();
        }
        strncpy(*0x8019128 * 0x400 + 0x8000124,auStack_438,uVar7);
        _raw_spin_unlock_irqrestore(obj.mi_exception_log_init.__key.4,uVar4);
        __wake_up(0x8019130,1,1,0);
    }
    else {
        iov_iter_revert(arg1,uVar3);
        uVar7 = 0xfffffffffffffff2;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        auVar9 = __stack_chk_fail();
        puVar5 = auVar9._8_8_;
        *extraout_x18 = sym.exception_log_poll;
        if ((puVar5 != NULL) && (pcVar8 = *puVar5, pcVar8 != NULL)) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar8,obj.mi_exception_log_dev);
            (*pcVar8)(auVar9._0_8_,0x8019130,puVar5);
        }
        uVar6 = 0x145;
        if (*0x8019128 != *0x8019124) {
            uVar6 = 0x147;
        }
        return uVar6;
    }
    return uVar7;
}


// ===== sym.exception_log_poll @ 0x080014fc (size 148) =====

uint sym.exception_log_poll(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (pcVar2 = *arg2, pcVar2 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar2,obj.mi_exception_log_dev);
        (*pcVar2)(arg1,0x8019130,arg2);
    }
    uVar1 = 0x145;
    if (*0x8019128 != *0x8019124) {
        uVar1 = 0x147;
    }
    return uVar1;
}


// ===== sym.exception_log_release @ 0x08001590 (size 60) =====

ulong sym.exception_log_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __wake_up(0x8019130,1,1,0);
    return 0;
}


// ===== sym._copy_to_user @ 0x080015cc (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_memset >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_memset >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.__cfi_check_fail @ 0x08001740 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001784

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
    //switch table (4 cases) at 0x800029b
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001798);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080017a4 (size 316) =====

uint64_t sym.init_module(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __register_chrdev(0,0,0x100,"mi_exception_log",obj.exception_log_fops);
    *0x8019000 = CONCAT44(*0x8019004,uVar1);
    uVar2 = __class_create(obj.__this_module,"mi_exception_log",obj.mi_exception_log_init.__key);
    uVar3 = *0x8019000 & 0xffffffff;
    *0x8019000 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        _segment.ehdr = *0x8019000 << 0x14;
        uVar2 = device_create(uVar2,0,_segment.ehdr,0,"mi_exception_log");
        if (uVar2 < 0xfffffffffffff001) {
            __init_waitqueue_head
                      (0x8019130,"&tmp_exception_log_dev->exception_log_is_not_empty",
                       obj.mi_exception_log_init.__key.4);
            _printk(0x80001fb);
            uVar2 = 0;
        }
        else {
            class_destroy(*0x8019000);
            __unregister_chrdev(*0x8019000 & 0xffffffff,0,0x100,"mi_exception_log");
            _printk(0x8000266,"mi_exception_log");
            uVar2 = 0xffffffea;
        }
    }
    else {
        __unregister_chrdev(uVar3,0,0x100,"mi_exception_log");
        _printk(0x8000239);
        uVar2 = *0x8019000 & 0xffffffff;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x080018e0 (size 96) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(CONCAT44(*0x8019004,*0x8019000),_segment.ehdr);
    class_destroy(CONCAT44(*0x8019004,*0x8019000));
    __unregister_chrdev(*0x8019000,0,0x100,"mi_exception_log");
    return;
}

