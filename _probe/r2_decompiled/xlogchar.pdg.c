// decompiled from xlogchar by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 344) =====

//WARNING: Switch with 1 destination removed at 0x08001ccc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x7bcbda558eb245e5) {
            pcVar2 = sym.xlogchar_poll.8db7ae3a863921811391f7368f178dca.cfi_jt;
        }
        else {
            if (arg1 != -0x5706340706d41d65) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8001180 >> 3 | pcVar1 << 0x3d) < 2)) {
                    return;
                }
                goto code_r0x08001c8c;
            }
            pcVar2 = sym.xlogchar_kwrite.cfi_jt;
        }
    }
    else if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x08001c8c;
            pcVar2 = sym.xlogchar_read.8db7ae3a863921811391f7368f178dca.cfi_jt;
        }
    }
    else if (arg1 == 0x1d7ed092cb04d3f1) {
        pcVar2 = sym.xlogchar_write.8db7ae3a863921811391f7368f178dca.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001c8c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001c8c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001ce0);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001160 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != NULL) {
        kfree(*(_segment.ehdr + 0x24));
        if (*(_segment.ehdr + 4) != 0) {
            device_destroy(*(_segment.ehdr + 0xe),_segment.ehdr[1] | *_segment.ehdr << 0x14);
            cdev_del(*(_segment.ehdr + 4));
        }
        if (*(_segment.ehdr + 0xe) < 0xfffffffffffff001) {
            class_destroy(*(_segment.ehdr + 0xe));
        }
        kfree(_segment.ehdr);
    }
    _printk(0x800032a);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001168 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    uint32_t *puVar1;
    bool bVar2;
    code *pcVar3;
    uint32_t *puVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uchar extraout_w8;
    uchar *extraout_x11;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_2c = 0;
    _printk(0x80003b8);
    _segment.ehdr = vmalloc(0x9d);
    if (_segment.ehdr != NULL) {
        iVar6 = vmalloc(0x100000);
        puVar1 = _segment.ehdr;
        *(_segment.ehdr + 0x24) = iVar6;
        if (iVar6 != 0) {
            __mutex_init(puVar1 + 0x12,"&xlogdriver->xlog_mutex",obj.xlogchar_init.__key);
            __init_waitqueue_head(_segment.ehdr + 0x1e,"&xlogdriver->wait_q",obj.xlogchar_init.__key);
            puVar4 = _segment.ehdr;
            puVar1 = _segment.ehdr + 0x26;
            _segment.ehdr[2] = 1;
            puVar4[0xc] = 0x100000;
            puVar4[0xd] = 0;
            *(puVar4 + 6) = puVar1;
            strlcpy(puVar1,"",4);
            iVar5 = alloc_chrdev_region(&uStack_2c,_segment.ehdr[1],_segment.ehdr[2],*(_segment.ehdr + 6));
            puVar1 = _segment.ehdr;
            if (iVar5 == 0) {
                *_segment.ehdr = uStack_2c >> 0x14;
                puVar1[1] = uStack_2c & 0xfffff;
                uVar7 = cdev_alloc();
                *(_segment.ehdr + 4) = uVar7;
                iVar5 = sym.xlogchar_setup_cdev(uStack_2c);
                if (iVar5 != 0) {
                    _printk(0x80002f8);
                }
                uVar7 = 0x8000252;
            }
            else {
                uVar7 = 0x80003dd;
            }
            _printk(uVar7);
            goto code_r0x08001d54;
        }
    }
    iVar5 = -0xc;
code_r0x08001d54:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    __stack_chk_fail();
    bVar2 = ExclusiveMonitorPass(extraout_x11,0x10);
    if (bVar2) {
        *extraout_x11 = extraout_w8;
        ExclusiveMonitorsStatus();
    }
    //WARNING: Does not return
    pcVar3 = UndefinedInstructionException(0,0x8001e6c);
    (*pcVar3)();
}


// ===== sym.xlogchar_read.8db7ae3a863921811391f7368f178dca.cfi_jt @ 0x08001170 (size 8) =====

uint64_t sym.xlogchar_read.8db7ae3a863921811391f7368f178dca.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    code *pcVar1;
    int64_t arg2;
    uint64_t arg3;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    if ((param_3 < 0x100001) && ((param_3 & 0x1ff) == 0)) {
        if (param_2 == 0) {
            _printk(0x800037e);
            uVar3 = 0xfffffffffffffff2;
            arg3 = param_3;
        }
        else {
            mutex_lock(_segment.ehdr + 0x48);
            iVar2 = *(_segment.ehdr + 0x30);
            while (0x100000U - iVar2 < param_3) {
                mutex_unlock(_segment.ehdr + 0x48);
                _printk(0x8000401,"xlogchar_read");
                if (0x100000U - *(_segment.ehdr + 0x30) < param_3) {
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_80 = 0;
                    init_wait_entry(&uStack_80,0);
                    while( true ) {
                        arg3 = 1;
                        iVar2 = prepare_to_wait_event(_segment.ehdr + 0x78,&uStack_80);
                        if (param_3 <= 0x100000U - *(_segment.ehdr + 0x30)) break;
                        if (iVar2 != 0) {
                            if (iVar2 != -0x200) goto code_r0x080015bc;
                            uVar3 = 0xfffffffffffffe00;
                            goto code_r0x080016dc;
                        }
                        schedule();
                    }
                    finish_wait(_segment.ehdr + 0x78,&uStack_80);
                }
code_r0x080015bc:
                _printk(0x80002e9,"xlogchar_read");
                mutex_lock(_segment.ehdr + 0x48);
                iVar2 = *(_segment.ehdr + 0x30);
            }
            iVar2 = *(_segment.ehdr + 0x20);
            if (iVar2 + param_3 < 0x100001) {
                auVar5 = __check_object_size(*(_segment.ehdr + 0x90) + iVar2,param_3,1);
                arg3 = param_3;
                sym._copy_to_user(param_2,auVar5,param_3);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x20) = *(_segment.ehdr + 0x20) + param_3;
            }
            else {
                uVar3 = 0x100000 - iVar2;
                if (uVar3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001748);
                    (*pcVar1)();
                }
                auVar5 = __check_object_size(*(_segment.ehdr + 0x90) + iVar2,uVar3,1);
                sym._copy_to_user(param_2,auVar5,uVar3);
                uVar4 = param_3 - uVar3;
                if (uVar4 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001750);
                    (*pcVar1)();
                }
                auVar5 = __check_object_size(*(_segment.ehdr + 0x90),uVar4,1);
                arg3 = uVar4;
                sym._copy_to_user(param_2 + uVar3,auVar5,uVar4);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x20) = uVar4;
            }
            *(iVar2 + 0x30) = *(iVar2 + 0x30) + param_3;
            mutex_unlock(iVar2 + 0x48);
            uVar3 = param_3;
        }
    }
    else {
        _printk(0x80002b1,param_3);
        uVar3 = 0xffffffffffffffb6;
        arg3 = param_3;
    }
code_r0x080016dc:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.xlogchar_write;
    _printk(0x8000316,"xlogchar_write");
    if ((arg3 < 0x100001) && ((arg3 & 0x1ff) == 0)) {
        mutex_lock(_segment.ehdr + 0x48);
        if (*(_segment.ehdr + 0x30) < arg3) {
            _printk(0x800021d,*(_segment.ehdr + 0x30),arg3);
            mutex_unlock(_segment.ehdr + 0x48);
            arg3 = 0xfffffffffffffffb;
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
            if (iVar2 + arg3 < 0x100001) {
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,arg3,0);
                sym._copy_from_user(iVar2,arg2,arg3);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = *(_segment.ehdr + 0x28) + arg3;
            }
            else {
                uVar3 = 0x100000 - iVar2;
                if (uVar3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001924);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,uVar3,0);
                sym._copy_from_user(iVar2,arg2,uVar3);
                uVar4 = arg3 - uVar3;
                if (uVar4 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800192c);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90);
                __check_object_size(iVar2,uVar4,0);
                sym._copy_from_user(iVar2,arg2 + uVar3,uVar4);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = uVar4;
            }
            *(iVar2 + 0x30) = *(iVar2 + 0x30) - arg3;
            mutex_unlock(iVar2 + 0x48);
            _printk(0x80003a2,"xlogchar_write");
            __wake_up(_segment.ehdr + 0x78,1,1,0);
        }
    }
    else {
        _printk(0x80002b1,arg3);
        arg3 = 0xffffffffffffffb6;
    }
    return arg3;
}


// ===== sym.xlogchar_write.8db7ae3a863921811391f7368f178dca.cfi_jt @ 0x08001178 (size 8) =====

uint64_t sym.xlogchar_write.8db7ae3a863921811391f7368f178dca.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t arg3;
    uint64_t arg3_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000316,"xlogchar_write");
    if ((param_3 < 0x100001) && ((param_3 & 0x1ff) == 0)) {
        mutex_lock(_segment.ehdr + 0x48);
        if (*(_segment.ehdr + 0x30) < param_3) {
            _printk(0x800021d,*(_segment.ehdr + 0x30),param_3);
            mutex_unlock(_segment.ehdr + 0x48);
            param_3 = 0xfffffffffffffffb;
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
            if (iVar2 + param_3 < 0x100001) {
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,param_3,0);
                sym._copy_from_user(iVar2,param_2,param_3);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = *(_segment.ehdr + 0x28) + param_3;
            }
            else {
                arg3 = 0x100000 - iVar2;
                if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001924);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,arg3,0);
                sym._copy_from_user(iVar2,param_2,arg3);
                arg3_00 = param_3 - arg3;
                if (arg3_00 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800192c);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90);
                __check_object_size(iVar2,arg3_00,0);
                sym._copy_from_user(iVar2,param_2 + arg3,arg3_00);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = arg3_00;
            }
            *(iVar2 + 0x30) = *(iVar2 + 0x30) - param_3;
            mutex_unlock(iVar2 + 0x48);
            _printk(0x80003a2,"xlogchar_write");
            __wake_up(_segment.ehdr + 0x78,1,1,0);
        }
    }
    else {
        _printk(0x80002b1,param_3);
        param_3 = 0xffffffffffffffb6;
    }
    return param_3;
}


// ===== sym.xlogchar_open.8db7ae3a863921811391f7368f178dca.cfi_jt @ 0x08001180 (size 8) =====

ulong sym.xlogchar_open.8db7ae3a863921811391f7368f178dca.cfi_jt(void)

{
    return 0;
}


// ===== sym.xlogchar_close.8db7ae3a863921811391f7368f178dca.cfi_jt @ 0x08001188 (size 8) =====

ulong sym.xlogchar_close.8db7ae3a863921811391f7368f178dca.cfi_jt(void)

{
    return 0;
}


// ===== sym.xlogchar_poll.8db7ae3a863921811391f7368f178dca.cfi_jt @ 0x08001190 (size 8) =====

ulong sym.xlogchar_poll.8db7ae3a863921811391f7368f178dca.cfi_jt(void)

{
    return 0;
}


// ===== sym.xlogchar_kwrite.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.xlogchar_kwrite.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000350,"xlogchar_kwrite");
    _printk(0x8000316,"xlogchar_kwrite",param_2);
    if ((param_2 < 0x100001) && ((param_2 & 0x1ff) == 0)) {
        mutex_lock(_segment.ehdr + 0x48);
        iVar1 = _segment.ehdr;
        if (*(_segment.ehdr + 0x30) < param_2) {
            _printk(0x800021d,*(_segment.ehdr + 0x30),param_2);
            mutex_unlock(_segment.ehdr + 0x48);
            param_2 = 0xfffffffffffffffb;
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
            if (iVar2 + param_2 < 0x100001) {
                memcpy(*(_segment.ehdr + 0x90) + iVar2,param_1,param_2);
                iVar2 = *(iVar1 + 0x28) + param_2;
            }
            else {
                iVar3 = 0x100000 - iVar2;
                memcpy(*(_segment.ehdr + 0x90) + iVar2,param_1,iVar3);
                iVar2 = param_2 - iVar3;
                memcpy(*(iVar1 + 0x90),param_1 + iVar3,iVar2);
            }
            *(iVar1 + 0x28) = iVar2;
            *(iVar1 + 0x30) = *(iVar1 + 0x30) - param_2;
            mutex_unlock(iVar1 + 0x48);
            _printk(0x80003a2,"xlogchar_kwrite");
            __wake_up(_segment.ehdr + 0x78,1,1,0);
        }
    }
    else {
        _printk(0x80002b1,param_2);
        param_2 = 0xffffffffffffffb6;
    }
    return param_2;
}


// ===== sym.xlogchar_kwrite @ 0x080011a0 (size 380) =====

int64_t sym.xlogchar_kwrite(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000350,"xlogchar_kwrite");
    _printk(0x8000316,"xlogchar_kwrite",arg2);
    if ((arg2 < 0x100001) && ((arg2 & 0x1ffU) == 0)) {
        mutex_lock(_segment.ehdr + 0x48);
        iVar1 = _segment.ehdr;
        if (*(_segment.ehdr + 0x30) < arg2) {
            _printk(0x800021d,*(_segment.ehdr + 0x30),arg2);
            mutex_unlock(_segment.ehdr + 0x48);
            arg2 = -5;
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
            if (iVar2 + arg2 < 0x100001) {
                memcpy(*(_segment.ehdr + 0x90) + iVar2,arg1,arg2);
                iVar2 = *(iVar1 + 0x28) + arg2;
            }
            else {
                iVar3 = 0x100000 - iVar2;
                memcpy(*(_segment.ehdr + 0x90) + iVar2,arg1,iVar3);
                iVar2 = arg2 - iVar3;
                memcpy(*(iVar1 + 0x90),arg1 + iVar3,iVar2);
            }
            *(iVar1 + 0x28) = iVar2;
            *(iVar1 + 0x30) = *(iVar1 + 0x30) - arg2;
            mutex_unlock(iVar1 + 0x48);
            _printk(0x80003a2,"xlogchar_kwrite");
            __wake_up(_segment.ehdr + 0x78,1,1,0);
        }
    }
    else {
        _printk(0x80002b1,arg2);
        arg2 = -0x4a;
    }
    return arg2;
}


// ===== sym.cleanup_module @ 0x0800131c (size 144) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != NULL) {
        kfree(*(_segment.ehdr + 0x24));
        if (*(_segment.ehdr + 4) != 0) {
            device_destroy(*(_segment.ehdr + 0xe),_segment.ehdr[1] | *_segment.ehdr << 0x14);
            cdev_del(*(_segment.ehdr + 4));
        }
        if (*(_segment.ehdr + 0xe) < 0xfffffffffffff001) {
            class_destroy(*(_segment.ehdr + 0xe));
        }
        kfree(_segment.ehdr);
    }
    _printk(0x800032a);
    return;
}


// ===== sym.xlogchar_setup_cdev @ 0x080013ac (size 260) =====

int sym.xlogchar_setup_cdev(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cdev_init(*(_segment.ehdr + 0x10),obj.xlogcharfops);
    iVar3 = _segment.ehdr;
    *(*(_segment.ehdr + 0x10) + 0x60) = obj.__this_module;
    *(*(iVar3 + 0x10) + 0x68) = obj.xlogcharfops;
    iVar1 = cdev_add(*(iVar3 + 0x10),arg1 & 0xffffffffU,1);
    if (iVar1 == 0) {
        uVar2 = __class_create(obj.__this_module,"",obj.xlogchar_init.__key);
        iVar3 = _segment.ehdr;
        *(_segment.ehdr + 0x38) = uVar2;
        if (uVar2 < 0xfffffffffffff001) {
            iVar3 = device_create(uVar2,0,arg1 & 0xffffffffU,iVar3,"");
            iVar1 = -5;
            if (iVar3 != 0) {
                iVar1 = 0;
            }
            *(_segment.ehdr + 0x40) = iVar3;
        }
        else {
            _printk(0x800035c);
            iVar1 = *(_segment.ehdr + 0x38);
        }
    }
    else {
        _printk(0x800028e);
    }
    return iVar1;
}


// ===== sym.xlogchar_read @ 0x080014b0 (size 680) =====

uint64_t sym.xlogchar_read(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    int64_t arg2_00;
    uint64_t arg3;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t arg2_01;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    uVar4 = arg2;
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    if ((uVar4 < 0x100001) && ((arg2 & 0x1ff) == 0)) {
        if (arg1 == 0) {
            _printk(0x800037e);
            uVar3 = 0xfffffffffffffff2;
            arg3 = uVar4;
        }
        else {
            mutex_lock(_segment.ehdr + 0x48);
            iVar2 = *(_segment.ehdr + 0x30);
            while (0x100000U - iVar2 < uVar4) {
                mutex_unlock(_segment.ehdr + 0x48);
                _printk(0x8000401,"xlogchar_read");
                if (0x100000U - *(_segment.ehdr + 0x30) < uVar4) {
                    uStack_68 = 0;
                    uStack_60 = 0;
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_80 = 0;
                    init_wait_entry(&uStack_80,0);
                    while( true ) {
                        arg3 = 1;
                        iVar2 = prepare_to_wait_event(_segment.ehdr + 0x78,&uStack_80);
                        if (uVar4 <= 0x100000U - *(_segment.ehdr + 0x30)) break;
                        if (iVar2 != 0) {
                            if (iVar2 != -0x200) goto code_r0x080015bc;
                            uVar3 = 0xfffffffffffffe00;
                            goto code_r0x080016dc;
                        }
                        schedule();
                    }
                    finish_wait(_segment.ehdr + 0x78,&uStack_80);
                }
code_r0x080015bc:
                _printk(0x80002e9,"xlogchar_read");
                mutex_lock(_segment.ehdr + 0x48);
                iVar2 = *(_segment.ehdr + 0x30);
            }
            iVar2 = *(_segment.ehdr + 0x20);
            if (iVar2 + uVar4 < 0x100001) {
                auVar5 = __check_object_size(*(_segment.ehdr + 0x90) + iVar2,uVar4,1);
                arg3 = uVar4;
                sym._copy_to_user(arg1,auVar5,uVar4);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x20) = *(_segment.ehdr + 0x20) + uVar4;
            }
            else {
                uVar3 = 0x100000 - iVar2;
                if (uVar3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001748);
                    (*pcVar1)();
                }
                auVar5 = __check_object_size(*(_segment.ehdr + 0x90) + iVar2,uVar3,1);
                sym._copy_to_user(arg1,auVar5,uVar3);
                arg2_01 = uVar4 - uVar3;
                if (arg2_01 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001750);
                    (*pcVar1)();
                }
                auVar5 = __check_object_size(*(_segment.ehdr + 0x90),arg2_01,1);
                arg3 = arg2_01;
                sym._copy_to_user(arg1 + uVar3,auVar5,arg2_01);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x20) = arg2_01;
            }
            *(iVar2 + 0x30) = *(iVar2 + 0x30) + uVar4;
            mutex_unlock(iVar2 + 0x48);
            uVar3 = uVar4;
        }
    }
    else {
        _printk(0x80002b1,uVar4);
        uVar3 = 0xffffffffffffffb6;
        arg3 = uVar4;
    }
code_r0x080016dc:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.xlogchar_write;
    _printk(0x8000316,"xlogchar_write");
    if ((arg3 < 0x100001) && ((arg3 & 0x1ff) == 0)) {
        mutex_lock(_segment.ehdr + 0x48);
        if (*(_segment.ehdr + 0x30) < arg3) {
            _printk(0x800021d,*(_segment.ehdr + 0x30),arg3);
            mutex_unlock(_segment.ehdr + 0x48);
            arg3 = 0xfffffffffffffffb;
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
            if (iVar2 + arg3 < 0x100001) {
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,arg3,0);
                sym._copy_from_user(iVar2,arg2_00,arg3);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = *(_segment.ehdr + 0x28) + arg3;
            }
            else {
                uVar4 = 0x100000 - iVar2;
                if (uVar4 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001924);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,uVar4,0);
                sym._copy_from_user(iVar2,arg2_00,uVar4);
                uVar3 = arg3 - uVar4;
                if (uVar3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800192c);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90);
                __check_object_size(iVar2,uVar3,0);
                sym._copy_from_user(iVar2,arg2_00 + uVar4,uVar3);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = uVar3;
            }
            *(iVar2 + 0x30) = *(iVar2 + 0x30) - arg3;
            mutex_unlock(iVar2 + 0x48);
            _printk(0x80003a2,"xlogchar_write");
            __wake_up(_segment.ehdr + 0x78,1,1,0);
        }
    }
    else {
        _printk(0x80002b1,arg3);
        arg3 = 0xffffffffffffffb6;
    }
    return arg3;
}


// ===== sym.xlogchar_write @ 0x08001758 (size 468) =====

int64_t sym.xlogchar_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t arg3;
    uint64_t arg3_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000316,"xlogchar_write");
    if ((arg2 < 0x100001) && ((arg2 & 0x1ffU) == 0)) {
        mutex_lock(_segment.ehdr + 0x48);
        if (*(_segment.ehdr + 0x30) < arg2) {
            _printk(0x800021d,*(_segment.ehdr + 0x30),arg2);
            mutex_unlock(_segment.ehdr + 0x48);
            arg2 = -5;
        }
        else {
            iVar2 = *(_segment.ehdr + 0x28);
            if (iVar2 + arg2 < 0x100001) {
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,arg2,0);
                sym._copy_from_user(iVar2,arg1,arg2);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = *(_segment.ehdr + 0x28) + arg2;
            }
            else {
                arg3 = 0x100000 - iVar2;
                if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x8001924);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90) + iVar2;
                __check_object_size(iVar2,arg3,0);
                sym._copy_from_user(iVar2,arg1,arg3);
                arg3_00 = arg2 - arg3;
                if (arg3_00 >> 0x1f != 0) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x800,0x800192c);
                    (*pcVar1)();
                }
                iVar2 = *(_segment.ehdr + 0x90);
                __check_object_size(iVar2,arg3_00,0);
                sym._copy_from_user(iVar2,arg1 + arg3,arg3_00);
                iVar2 = _segment.ehdr;
                *(_segment.ehdr + 0x28) = arg3_00;
            }
            *(iVar2 + 0x30) = *(iVar2 + 0x30) - arg2;
            mutex_unlock(iVar2 + 0x48);
            _printk(0x80003a2,"xlogchar_write");
            __wake_up(_segment.ehdr + 0x78,1,1,0);
        }
    }
    else {
        _printk(0x80002b1,arg2);
        arg2 = -0x4a;
    }
    return arg2;
}


// ===== sym.xlogchar_poll @ 0x08001930 (size 16) =====

ulong sym.xlogchar_poll(int64_t arg1)

{
    return 0;
}


// ===== sym.xlogchar_open @ 0x08001940 (size 16) =====

ulong sym.xlogchar_open(int64_t arg1)

{
    return 0;
}


// ===== sym.xlogchar_close @ 0x08001950 (size 16) =====

ulong sym.xlogchar_close(int64_t arg1)

{
    return 0;
}


// ===== sym._copy_to_user @ 0x08001960 (size 312) =====

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
        arg2 = __arch_copy_to_user(arg1);
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


// ===== sym._copy_from_user @ 0x08001ad4 (size 376) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2,int64_t arg3)

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
    uVar3 = (arg2 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg2, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg2 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg3);
    uVar6 = uVar6 + arg3;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg3;
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
        if ((arg2 & uVar3 & 0xffffff8000000000) != 0) {
            arg2 = 0;
        }
        iVar5 = __arch_copy_from_user(arg1,arg2,arg3);
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
        memset(arg1 + (arg3 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.__cfi_check_fail @ 0x08001c88 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001ccc

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
    //switch table (4 cases) at 0x8000426
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001ce0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001cf4 (size 380) =====

int sym.init_module(void)

{
    uint32_t *puVar1;
    bool bVar2;
    code *pcVar3;
    uint32_t *puVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uchar extraout_w8;
    uchar *extraout_x11;
    ulong *in_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_2c = 0;
    _printk(0x80003b8);
    _segment.ehdr = vmalloc(0x9d);
    if (_segment.ehdr != NULL) {
        iVar6 = vmalloc(0x100000);
        puVar1 = _segment.ehdr;
        *(_segment.ehdr + 0x24) = iVar6;
        if (iVar6 != 0) {
            __mutex_init(puVar1 + 0x12,"&xlogdriver->xlog_mutex",obj.xlogchar_init.__key);
            __init_waitqueue_head(_segment.ehdr + 0x1e,"&xlogdriver->wait_q",obj.xlogchar_init.__key);
            puVar4 = _segment.ehdr;
            puVar1 = _segment.ehdr + 0x26;
            _segment.ehdr[2] = 1;
            puVar4[0xc] = 0x100000;
            puVar4[0xd] = 0;
            *(puVar4 + 6) = puVar1;
            strlcpy(puVar1,"",4);
            iVar5 = alloc_chrdev_region(&uStack_2c,_segment.ehdr[1],_segment.ehdr[2],*(_segment.ehdr + 6));
            puVar1 = _segment.ehdr;
            if (iVar5 == 0) {
                *_segment.ehdr = uStack_2c >> 0x14;
                puVar1[1] = uStack_2c & 0xfffff;
                uVar7 = cdev_alloc();
                *(_segment.ehdr + 4) = uVar7;
                iVar5 = sym.xlogchar_setup_cdev(uStack_2c);
                if (iVar5 != 0) {
                    _printk(0x80002f8);
                }
                uVar7 = 0x8000252;
            }
            else {
                uVar7 = 0x80003dd;
            }
            _printk(uVar7);
            goto code_r0x08001d54;
        }
    }
    iVar5 = -0xc;
code_r0x08001d54:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    __stack_chk_fail();
    //[23] -rw- section size 8 named .init.data
    bVar2 = ExclusiveMonitorPass(extraout_x11,0x10);
    if (bVar2) {
        *extraout_x11 = extraout_w8;
        ExclusiveMonitorsStatus();
    }
    //WARNING: Does not return
    pcVar3 = UndefinedInstructionException(0,0x8001e6c);
    (*pcVar3)();
}

