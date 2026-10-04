// decompiled from cameralog by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x08001844

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x7bcbda558eb245e5) {
            pcVar2 = sym.cameralog_poll.f9b085a4543669099d7a57e38de29815.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.cameralog_open.f9b085a4543669099d7a57e38de29815.cfi_jt;
                goto code_r0x08001138;
            }
            if (arg1 != -0x890743871a4a53) goto code_r0x08001804;
            pcVar2 = sym.cameralog_ioctl.f9b085a4543669099d7a57e38de29815.cfi_jt;
        }
    }
    else if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08001804;
            pcVar2 = sym.cameralog_read.f9b085a4543669099d7a57e38de29815.cfi_jt;
        }
    }
    else {
        if (arg1 != 0x1d7ed092cb04d3f1) {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001804;
            pcVar2 = sym.cleanup_module.cfi_jt;
code_r0x08001138:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001804;
        }
        pcVar2 = sym.cameralog_write.f9b085a4543669099d7a57e38de29815.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001804:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001858);
    (*pcVar1)();
}


// ===== sym.cameralog_write.f9b085a4543669099d7a57e38de29815.cfi_jt @ 0x08001160 (size 8) =====

ulong sym.cameralog_write.f9b085a4543669099d7a57e38de29815.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(0x8000608);
    if (param_3 >> 0x1f == 0) {
        __check_object_size(0x8000204,param_3,0);
        iVar2 = sym._copy_from_user(param_2,param_3);
        if (iVar2 == 0) {
            uVar3 = strlen(0x8000204);
        }
        else {
            uVar3 = 0;
        }
        mutex_unlock(0x8000608);
        __wake_up(0x8000638,1,1,0);
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001348);
    (*pcVar1)();
}


// ===== sym.cameralog_ioctl.f9b085a4543669099d7a57e38de29815.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.cameralog_ioctl.f9b085a4543669099d7a57e38de29815.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000338);
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08001170 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __register_chrdev(0,0,0x100,"",obj.cameralog_fops);
    _segment.ehdr = CONCAT44(*0x8000004,uVar1);
    uVar2 = __class_create(obj.__this_module,"",obj.cameralog_init.__key);
    uVar3 = _segment.ehdr & 0xffffffff;
    if (uVar2 < 0xfffffffffffff001) {
        _segment.ehdr = _segment.ehdr << 0x14;
        *0x8000004 = uVar2 >> 0x20;
        uVar2 = device_create(uVar2,0,_segment.ehdr,0,"");
        if (uVar2 < 0xfffffffffffff001) {
            __mutex_init(0x8000608,"",obj.cameralog_init.__key.4);
            __init_waitqueue_head(0x8000638,"",obj.cameralog_init.__key.4);
            uVar2 = 0;
        }
        else {
            _printk(0x8000399,"");
            uVar2 = 0xffffffea;
        }
    }
    else {
        _segment.ehdr = uVar2;
        __unregister_chrdev(uVar3,0,0x100,"");
        _printk(0x8000220);
        uVar2 = _segment.ehdr & 0xffffffff;
    }
    return uVar2;
}


// ===== sym.cameralog_read.f9b085a4543669099d7a57e38de29815.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.cameralog_read.f9b085a4543669099d7a57e38de29815.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t arg2;
    ulong uVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = strlen(0x8000204);
    if (iVar3 == 0) {
        _segment.ehdr = 10;
    }
    else {
        sprintf(0x8000204,0x80003c7,0x8000204);
    }
    mutex_lock(0x8000608);
    arg2 = strlen(0x8000204);
    if (arg2 >> 0x1f == 0) {
        __check_object_size(0x8000204,arg2,1);
        iVar2 = sym._copy_to_user(param_2,arg2);
        mutex_unlock(0x8000608);
        uVar5 = 0;
        if ((iVar2 == 0) && (iVar3 != 0)) {
            uVar5 = strlen(0x8000204);
        }
        uVar4 = strlen(0x8000204);
        memset(0x8000204,0,uVar4);
        return uVar5;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80012d8);
    (*pcVar1)();
}


// ===== sym.cameralog_open.f9b085a4543669099d7a57e38de29815.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.cameralog_open.f9b085a4543669099d7a57e38de29815.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000358);
    return 0;
}


// ===== sym.cameralog_release.f9b085a4543669099d7a57e38de29815.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.cameralog_release.f9b085a4543669099d7a57e38de29815.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000377);
    __wake_up(0x8000638,1,1,0);
    return 0;
}


// ===== sym.cameralog_poll.f9b085a4543669099d7a57e38de29815.cfi_jt @ 0x08001190 (size 8) =====

uint sym.cameralog_poll.f9b085a4543669099d7a57e38de29815.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 != NULL) && (pcVar3 = *param_2, pcVar3 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,obj.camlogdev);
        (*pcVar3)(param_1,0x8000638,param_2);
    }
    iVar1 = strlen(0x8000204);
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = 0x41;
    }
    return uVar2;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001198 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(CONCAT44(*0x8000004,_segment.ehdr),_segment.ehdr);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    __unregister_chrdev(_segment.ehdr,0,0x100,"");
    return;
}


// ===== sym.camlog_send_message.cfi_jt @ 0x080011a0 (size 8) =====

void sym.camlog_send_message.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80002cc);
    return;
}


// ===== sym.camlog_send_message @ 0x080011a8 (size 44) =====

void sym.camlog_send_message(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80002cc);
    return;
}


// ===== sym.cameralog_read @ 0x080011d4 (size 260) =====

ulong sym.cameralog_read(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t arg2;
    ulong uVar4;
    ulong *in_x18;
    ulong uVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = strlen(0x8000204);
    if (iVar3 == 0) {
        _segment.ehdr = 10;
    }
    else {
        sprintf(0x8000204,0x80003c7,0x8000204);
    }
    mutex_lock(0x8000608);
    arg2 = strlen(0x8000204);
    if (arg2 >> 0x1f == 0) {
        __check_object_size(0x8000204,arg2,1);
        iVar2 = sym._copy_to_user(arg1,arg2);
        mutex_unlock(0x8000608);
        uVar5 = 0;
        if ((iVar2 == 0) && (iVar3 != 0)) {
            uVar5 = strlen(0x8000204);
        }
        uVar4 = strlen(0x8000204);
        memset(0x8000204,0,uVar4);
        return uVar5;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x80012d8);
    (*pcVar1)();
}


// ===== sym.cameralog_write @ 0x080012dc (size 184) =====

ulong sym.cameralog_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(0x8000608);
    if (arg2 >> 0x1f == 0) {
        __check_object_size(0x8000204,arg2,0);
        iVar2 = sym._copy_from_user(arg1,arg2);
        if (iVar2 == 0) {
            uVar3 = strlen(0x8000204);
        }
        else {
            uVar3 = 0;
        }
        mutex_unlock(0x8000608);
        __wake_up(0x8000638,1,1,0);
        return uVar3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001348);
    (*pcVar1)();
}


// ===== sym.cameralog_poll @ 0x08001394 (size 144) =====

uint sym.cameralog_poll(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 != 0) && (pcVar3 = *arg2, pcVar3 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,obj.camlogdev);
        (*pcVar3)(arg1,0x8000638,arg2);
    }
    iVar1 = strlen(0x8000204);
    uVar2 = 0;
    if (iVar1 != 0) {
        uVar2 = 0x41;
    }
    return uVar2;
}


// ===== sym.cameralog_ioctl @ 0x08001424 (size 48) =====

ulong sym.cameralog_ioctl(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000338);
    return 0;
}


// ===== sym.cameralog_open @ 0x08001454 (size 48) =====

ulong sym.cameralog_open(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000358);
    return 0;
}


// ===== sym.cameralog_release @ 0x08001484 (size 72) =====

ulong sym.cameralog_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000377);
    __wake_up(0x8000638,1,1,0);
    return 0;
}


// ===== sym._copy_to_user @ 0x080014cc (size 324) =====

int64_t sym._copy_to_user(int64_t arg1,int64_t arg2)

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
        if ((__printk >> 0x18 & 1) == 0) {
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
        arg2 = __arch_copy_to_user(arg1,0x8000204);
        if ((__printk >> 0x18 & 1) == 0) {
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


// ===== sym._copy_from_user @ 0x0800164c (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg2);
    uVar6 = uVar6 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg2;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((__printk >> 0x18 & 1) == 0) {
            uVar6 = daif;
            if ((uVar6 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar6;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        iVar5 = __arch_copy_from_user(0x8000204,arg1,arg2);
        if ((__printk >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar6 = daif;
                daif = uVar6 | 0xc0;
            }
            uVar6 = ttbr1_el1;
            ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar6 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    if (iVar5 != 0) {
        memset((arg2 - iVar5) + 0x8000204,0,iVar5);
    }
    return iVar5;
}


// ===== sym.__cfi_check_fail @ 0x08001800 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001844

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
    //switch table (4 cases) at 0x80003cb
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001858);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001878 (size 300) =====

uint64_t sym.init_module(int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = __register_chrdev(0,0,0x100,"",obj.cameralog_fops);
    _segment.ehdr = CONCAT44(*0x8000004,uVar1);
    uVar2 = __class_create(obj.__this_module,"",obj.cameralog_init.__key);
    uVar3 = _segment.ehdr & 0xffffffff;
    if (uVar2 < 0xfffffffffffff001) {
        _segment.ehdr = _segment.ehdr << 0x14;
        *0x8000004 = uVar2 >> 0x20;
        uVar2 = device_create(uVar2,0,_segment.ehdr,0,"");
        if (uVar2 < 0xfffffffffffff001) {
            __mutex_init(0x8000608,"",obj.cameralog_init.__key.4);
            __init_waitqueue_head(0x8000638,"",obj.cameralog_init.__key.4);
            uVar2 = 0;
        }
        else {
            _printk(0x8000399,"");
            uVar2 = 0xffffffea;
        }
    }
    else {
        _segment.ehdr = uVar2;
        __unregister_chrdev(uVar3,0,0x100,"");
        _printk(0x8000220);
        uVar2 = _segment.ehdr & 0xffffffff;
    }
    return uVar2;
}


// ===== sym.cleanup_module @ 0x080019a4 (size 96) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(CONCAT44(*0x8000004,_segment.ehdr),_segment.ehdr);
    class_destroy(CONCAT44(*0x8000004,_segment.ehdr));
    __unregister_chrdev(_segment.ehdr,0,0x100,"");
    return;
}

