// decompiled from miev by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 604) =====

//WARNING: Switch with 1 destination removed at 0x08001f90

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x7bcbda558eb245e5) {
                pcVar2 = sym.miev_poll.f115832af8ad5745b85f1e178cf65304.cfi_jt;
            }
            else if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.do_miev_work.f115832af8ad5745b85f1e178cf65304.cfi_jt;
            }
            else {
                if (arg1 != -0xd03d9842fce7c68) goto code_r0x08001f50;
                pcVar2 = sym.cdev_tevent_add_str.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x80012c0 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001f50;
            }
            if (arg1 == -0x890743871a4a53) {
                pcVar2 = sym.miev_ioctl.f115832af8ad5745b85f1e178cf65304.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x08001f50;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x3b210a7017ffb127) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt;
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt;
        }
        else {
            if (arg1 != 0x3186852b8165d8b6) goto code_r0x08001f50;
            pcVar2 = sym.cdev_tevent_alloc.cfi_jt;
        }
    }
    else if (arg1 < 0x5be157dc302b0090) {
        if (arg1 == 0x3b210a7017ffb127) {
            pcVar2 = sym.cdev_tevent_write.cfi_jt;
        }
        else {
            if (arg1 != 0x4e753ae7a76a2e81) goto code_r0x08001f50;
            pcVar2 = sym.cdev_tevent_destroy.cfi_jt;
        }
    }
    else if (arg1 == 0x5be157dc302b0090) {
        pcVar2 = sym.cdev_tevent_add_int.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001f50;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001f50:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fa4);
    (*pcVar1)();
}


// ===== sym.do_miev_work.f115832af8ad5745b85f1e178cf65304.cfi_jt @ 0x08001268 (size 8) =====

void sym.do_miev_work.f115832af8ad5745b85f1e178cf65304.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.write_buf_inner(*(param_1 + -8) + *(param_1 + -0x10),*(param_1 + -0x14));
    *(param_1 + -0x17) = 0;
    return;
}


// ===== sym.cdev_tevent_alloc.cfi_jt @ 0x08001270 (size 8) =====

uint * sym.cdev_tevent_alloc.cfi_jt(uint param_1)

{
    int iVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = sym.miev_get_work_msg();
    if ((piVar2 == NULL) || (puVar4 = *piVar2, puVar4 == NULL)) {
        uVar3 = 0x80006e6;
    }
    else {
        *(puVar4 + 6) = piVar2;
        *puVar4 = param_1;
        uVar3 = ktime_get_real_seconds();
        puVar4[1] = 0;
        *(puVar4 + 4) = uVar3;
        iVar1 = snprintf(*piVar2 + 0x20,0xfe0,"EventId %d -t %lld -paraList {",*puVar4,uVar3);
        if (0 < iVar1) {
            puVar4[2] = iVar1 + 0x20;
            return puVar4;
        }
        uVar3 = 0x8000517;
    }
    _printk(uVar3);
    return NULL;
}


// ===== sym.cdev_tevent_add_str.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.cdev_tevent_add_str.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    char *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 != 0) {
        uVar3 = *(param_1 + 8);
        if (uVar3 < 0xfff) {
            iVar4 = *(param_1 + 4);
            iVar1 = 5;
            if (iVar4 != 0) {
                iVar1 = 6;
            }
            iVar5 = strlen(param_2);
            iVar6 = strlen(param_3);
            if (iVar6 + iVar5 + iVar1 < 0xfff - uVar3) {
                pcVar2 = "\"%s\":\"%s\"";
                if (iVar4 != 0) {
                    pcVar2 = ",\"%s\":\"%s\"";
                }
                iVar4 = snprintf(param_1 + uVar3,0x1000 - uVar3,pcVar2,param_2,param_3);
                if (0 < iVar4) {
                    *(param_1 + 4) = *(param_1 + 4) + 1;
                    *(param_1 + 8) = *(param_1 + 8) + iVar4;
                    return 0;
                }
                uVar7 = 0x800074a;
            }
            else {
                uVar7 = 0x80002c5;
            }
            goto code_r0x080022cc;
        }
    }
    uVar7 = 0x8000894;
code_r0x080022cc:
    _printk(uVar7,param_1,param_2);
    return 0xffffffff;
}


// ===== sym.cdev_tevent_destroy.cfi_jt @ 0x08001280 (size 8) =====

void sym.cdev_tevent_destroy.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (param_1 != 0) {
        *in_x18 = unaff_x30;
        sym.miev_release_work_msg(*(param_1 + 0x18));
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001288 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt = 0x0;
    device_destroy(*(_segment.ehdr + 2),*_segment.ehdr);
    class_destroy(*(_segment.ehdr + 2));
    __kfifo_free(_segment.ehdr + 0x26);
    cdev_del(_segment.ehdr + 4);
    unregister_chrdev_region(*_segment.ehdr,1);
    kfree(_segment.ehdr);
    iVar1 = 0;
    do {
        piVar2 = iVar1 * 0x48 + 0x80001a8;
        if (*piVar2 != 0) {
            uVar3 = 0xb;
            do {
                if ((reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt[iVar1 * 0x48] == 0x0) &&
                   (reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt[iVar1 * 0x48 + 1] == 0x0)) break;
                msleep(100);
                uVar3 = uVar3 - 1;
            } while (1 < uVar3);
            kfree(*piVar2);
        }
        iVar1 = iVar1 + 1;
        if (iVar1 == 10) {
            flush_workqueue(_segment.ehdr);
            destroy_workqueue(_segment.ehdr);
            _segment.ehdr = NULL;
            return;
        }
    } while( true );
}


// ===== sym.init_module.cfi_jt @ 0x08001290 (size 8) =====

uint64_t sym.init_module.cfi_jt(void)

{
    uint *puVar1;
    uint uVar2;
    ulong uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt == 0x1) {
        _printk(0x80004b8);
        uVar8 = 0;
    }
    else {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        _segment.ehdr = kmem_cache_alloc_trace(___kfifo_out,0xcc0,0x10f8);
        if (_segment.ehdr == NULL) {
            _printk(0x8000820);
            uVar8 = 0xfffffff4;
        }
        else {
            *_segment.ehdr = 0x20800000;
            iVar4 = register_chrdev_region(0x20800000,1,"miev");
            if ((iVar4 < 0) && (iVar4 = alloc_chrdev_region(_segment.ehdr,0,1,"miev"), iVar4 < 0)) {
                _printk(0x80004d7);
                uVar8 = 0xffffffed;
            }
            else {
                cdev_init(_segment.ehdr + 4,obj.miev_fops);
                puVar1 = _segment.ehdr + 4;
                uVar2 = *_segment.ehdr;
                *(_segment.ehdr + 0x1c) = obj.__this_module;
                uVar5 = cdev_add(puVar1,uVar2,1);
                uVar8 = uVar5;
                if (uVar5 < 0) {
                    _printk(0x80005a0);
                }
                else {
                    iVar4 = __kfifo_alloc(_segment.ehdr + 0x26,0x10000,1,0xcc0);
                    if (iVar4 == 0) {
                        uVar6 = __class_create(obj.__this_module,"miev",obj.miev_init_module.__key);
                        puVar1 = _segment.ehdr;
                        *(_segment.ehdr + 2) = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            uVar6 = device_create(uVar6,0,*puVar1,0,"miev");
                            if (uVar6 < 0xfffffffffffff001) {
                                __mutex_init(_segment.ehdr + 0x2c,"&miev_dev->lock",obj.miev_init_module.__key);
                                __init_waitqueue_head
                                          (_segment.ehdr + 0x38,"&miev_dev->wait_queue",obj.miev_init_module.__key);
                                _segment.ehdr = alloc_workqueue(0x80003f1,0xe000a,1,"miev_workqueue");
                                if (_segment.ehdr == NULL) {
                                    _printk(0x80008db);
                                    uVar8 = 0xffffffea;
                                }
                                else {
                                    iVar9 = 0;
                                    while( true ) {
                                        uVar3 = ___kfifo_out;
                                        *(reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt + iVar9) = 0;
                                        *(iVar9 + 0x800019c) = 0;
                                        iVar7 = kmem_cache_alloc_trace(uVar3,0xcc0,0x1000);
                                        *(iVar9 + 0x80001a8) = iVar7;
                                        if (iVar7 == 0) break;
                                        iVar7 = iVar9 + 0x48;
                                        *(iVar9 + 0x80001b0) = 0xfffffffe0;
                                        *(iVar9 + 0x80001b8) = iVar9 + 0x80001b8;
                                        *(iVar9 + 0x80001c0) = iVar9 + 0x80001b8;
                                        *(reloc.miev_poll.f115832af8ad5745b85f1e178cf65304.cfi_jt + iVar9) =
                                             sym.do_miev_work.f115832af8ad5745b85f1e178cf65304.cfi_jt;
                                        iVar9 = iVar7;
                                        if (iVar7 == 0x2d0) {
                                            reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt = 0x1;
                                            return 0;
                                        }
                                    }
                                    iVar9 = 0x10;
                                    do {
                                        if (*(reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt + iVar9) != 0) {
                                            kfree();
                                        }
                                        iVar9 = iVar9 + 0x48;
                                    } while (iVar9 != 0x2e0);
                                    destroy_workqueue(_segment.ehdr);
                                    _segment.ehdr = NULL;
                                }
                                device_destroy(*(_segment.ehdr + 2),*_segment.ehdr);
                            }
                            else {
                                _printk(0x800036e);
                                uVar8 = uVar6 & 0xffffffff;
                            }
                            class_destroy(*(_segment.ehdr + 2));
                        }
                        else {
                            _printk(0x8000432);
                            uVar8 = _segment.ehdr[2];
                        }
                        __kfifo_free(_segment.ehdr + 0x26);
                    }
                    else {
                        _printk(0x8000872);
                        uVar8 = 0xfffffff4;
                    }
                    cdev_del(_segment.ehdr + 4);
                }
                unregister_chrdev_region(*_segment.ehdr,1);
            }
            kfree(_segment.ehdr);
        }
    }
    return uVar8;
}


// ===== sym.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt @ 0x08001298 (size 8) =====

uint64_t sym.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt(ulong param_1,ulong param_2,uint64_t param_3)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t arg2;
    ulong *puVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_94;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_30 = 0;
    mutex_lock(_segment.ehdr + 0xb0);
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        param_3 = 4;
        iVar2 = __kfifo_out(_segment.ehdr + 0x98,&uStack_30);
        if (iVar2 != 0) {
            param_3 = uStack_30 & 0xffffffff;
            if ((uStack_30 - 0x1001U < 0xfffff000) ||
               (iVar2 = __kfifo_to_user(_segment.ehdr + 0x98,param_2,param_3,&uStack_30 + 4), iVar2 != 0)) {
                iVar5 = _segment.ehdr + 0xb0;
                *(_segment.ehdr + 0x98) = 0;
                mutex_unlock(iVar5);
                _printk(0x80008fb);
                uVar4 = 0xfffffffffffffff2;
                goto code_r0x08001980;
            }
        }
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    uVar4 = uStack_30._4_4_;
code_r0x08001980:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.miev_write;
    pcStack_78 = sym.miev_write;
    iVar5 = sp_el0;
    iStack_88 = *(iVar5 + 0x5e0);
    iStack_94 = 0;
    puStack_80 = &stack0xffffffffffffffe0;
    mutex_lock(_segment.ehdr + 0xb0);
    if (0xfff < param_3) {
        param_3 = 0x1000;
    }
    iVar2 = -0x801;
    uStack_90 = param_3;
    do {
        if (param_3 + 4U <= (*(_segment.ehdr + 0xa0) - *(_segment.ehdr + 0x98)) + *(_segment.ehdr + 0x9c) + 1U) {
            iVar5 = _segment.ehdr + 0xf8;
            __check_object_size(iVar5,param_3,0);
            iVar5 = sym._copy_from_user(iVar5,arg2,param_3);
            if (iVar5 != 0) {
                uVar6 = 0x800044f;
                goto code_r0x08001b88;
            }
            iVar2 = __kfifo_in(_segment.ehdr + 0x98,&uStack_90,4);
            if ((iVar2 != 0) &&
               (iVar2 = __kfifo_in(_segment.ehdr + 0x98,_segment.ehdr + 0xf8,uStack_90 & 0xffffffff), iVar2 == 0)) {
                _printk(0x8000617);
                *(_segment.ehdr + 0x98) = 0;
            }
            mutex_unlock(_segment.ehdr + 0xb0);
            __wake_up(_segment.ehdr + 0xe0,1,1,0);
            uVar4 = uStack_90;
            goto code_r0x08001b3c;
        }
        iVar3 = __kfifo_out(_segment.ehdr + 0x98,&iStack_94,4);
        if ((iVar3 != 0) &&
           ((iStack_94 - 0x1001U < 0xfffff000 ||
            (iVar3 = __kfifo_out(_segment.ehdr + 0x98,_segment.ehdr + 0xf8), iVar3 == 0)))) {
            _printk(0x80004fe);
            *(_segment.ehdr + 0x98) = 0;
        }
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + 1;
    } while (bVar1);
    uVar6 = 0x800053f;
code_r0x08001b88:
    _printk(uVar6);
    mutex_unlock(_segment.ehdr + 0xb0);
    uVar4 = 0xfffffffffffffff2;
code_r0x08001b3c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    puVar7 = auVar10._8_8_;
    *extraout_x18_00 = sym.miev_poll;
    if (puVar7 != NULL) {
        pcVar9 = *puVar7;
        iVar5 = _segment.ehdr + 0xe0;
        if (iVar5 != 0 && pcVar9 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar9,0x80002a0);
            (*pcVar9)(auVar10._0_8_,iVar5,puVar7);
        }
    }
    mutex_lock(_segment.ehdr + 0xb0);
    uVar8 = 0;
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        uVar8 = 0x41;
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    return uVar8;
}


// ===== sym.cdev_tevent_add_int.cfi_jt @ 0x080012a0 (size 8) =====

ulong sym.cdev_tevent_add_int.cfi_jt(int64_t param_1,ulong param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t uVar9;
    ulong *in_x18;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar10 = param_3 >> 0x3f;
    uVar9 = param_3;
    do {
        uVar1 = uVar10 + 1;
        uVar10 = uVar1;
        uVar2 = uVar9 + 9;
        uVar9 = uVar9 / 10;
    } while (0x12 < uVar2);
    if (param_1 != 0) {
        uVar5 = *(param_1 + 8);
        if (uVar5 < 0xfff) {
            iVar6 = *(param_1 + 4);
            iVar3 = 3;
            if (iVar6 != 0) {
                iVar3 = 4;
            }
            iVar7 = strlen(param_2);
            if (iVar7 + uVar1 + iVar3 < 0xfff - uVar5) {
                pcVar4 = "\"%s\":%ld";
                if (iVar6 != 0) {
                    pcVar4 = ",\"%s\":%ld";
                }
                iVar6 = snprintf(param_1 + uVar5,0x1000 - uVar5,pcVar4,param_2,param_3);
                if (0 < iVar6) {
                    *(param_1 + 4) = *(param_1 + 4) + 1;
                    *(param_1 + 8) = *(param_1 + 8) + iVar6;
                    return 0;
                }
                _printk(0x8000479,param_1,param_2);
                return 0xffffffff;
            }
            uVar8 = 0x800056a;
            goto code_r0x080021b0;
        }
    }
    uVar8 = 0x80007ee;
code_r0x080021b0:
    _printk(uVar8,param_1,param_2);
    return 0xffffffff;
}


// ===== sym.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt @ 0x080012a8 (size 8) =====

uint64_t sym.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt(ulong param_1,int64_t param_2,uint64_t param_3)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *puVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_64;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iStack_64 = 0;
    mutex_lock(_segment.ehdr + 0xb0);
    if (0xfff < param_3) {
        param_3 = 0x1000;
    }
    iVar3 = -0x801;
    uStack_60 = param_3;
    do {
        if (param_3 + 4U <= (*(_segment.ehdr + 0xa0) - *(_segment.ehdr + 0x98)) + *(_segment.ehdr + 0x9c) + 1U) {
            iVar4 = _segment.ehdr + 0xf8;
            __check_object_size(iVar4,param_3,0);
            iVar4 = sym._copy_from_user(iVar4,param_2,param_3);
            if (iVar4 != 0) {
                uVar6 = 0x800044f;
                goto code_r0x08001b88;
            }
            iVar3 = __kfifo_in(_segment.ehdr + 0x98,&uStack_60,4);
            if ((iVar3 != 0) &&
               (iVar3 = __kfifo_in(_segment.ehdr + 0x98,_segment.ehdr + 0xf8,uStack_60 & 0xffffffff), iVar3 == 0)) {
                _printk(0x8000617);
                *(_segment.ehdr + 0x98) = 0;
            }
            mutex_unlock(_segment.ehdr + 0xb0);
            __wake_up(_segment.ehdr + 0xe0,1,1,0);
            uVar5 = uStack_60;
            goto code_r0x08001b3c;
        }
        iVar2 = __kfifo_out(_segment.ehdr + 0x98,&iStack_64,4);
        if ((iVar2 != 0) &&
           ((iStack_64 - 0x1001U < 0xfffff000 ||
            (iVar2 = __kfifo_out(_segment.ehdr + 0x98,_segment.ehdr + 0xf8), iVar2 == 0)))) {
            _printk(0x80004fe);
            *(_segment.ehdr + 0x98) = 0;
        }
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + 1;
    } while (bVar1);
    uVar6 = 0x800053f;
code_r0x08001b88:
    _printk(uVar6);
    mutex_unlock(_segment.ehdr + 0xb0);
    uVar5 = 0xfffffffffffffff2;
code_r0x08001b3c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar10 = __stack_chk_fail(uVar5);
    puVar7 = auVar10._8_8_;
    *extraout_x18 = sym.miev_poll;
    if (puVar7 != NULL) {
        pcVar9 = *puVar7;
        iVar4 = _segment.ehdr + 0xe0;
        if (iVar4 != 0 && pcVar9 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar9,0x80002a0);
            (*pcVar9)(auVar10._0_8_,iVar4,puVar7);
        }
    }
    mutex_lock(_segment.ehdr + 0xb0);
    uVar8 = 0;
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        uVar8 = 0x41;
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    return uVar8;
}


// ===== sym.cdev_tevent_write.cfi_jt @ 0x080012b0 (size 8) =====

ulong sym.cdev_tevent_write.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        iVar2 = sp_el0;
        _printk(0x800063b,*(iVar2 + 0x5d8));
        uVar4 = 0xffffffff;
    }
    else {
        uVar1 = *(param_1 + 8);
        if ((*(param_1 + 4) == 0) || (0xffe < uVar1)) {
            _printk(0x8000660,param_1);
            uVar4 = 0xffffffff;
        }
        else {
            iVar3 = snprintf(param_1 + uVar1,0x1000 - uVar1,0x80005d3);
            if (iVar3 < 1) {
                _printk(0x8000843,param_1);
                uVar4 = 0xffffffff;
            }
            else {
                iVar3 = *(param_1 + 8) + iVar3;
                *(param_1 + 8) = iVar3;
                sym.write_kbuf(*(param_1 + 0x18),0x20,iVar3 - 0x20);
                uVar4 = 0;
            }
        }
    }
    return uVar4;
}


// ===== sym.miev_ioctl.f115832af8ad5745b85f1e178cf65304.cfi_jt @ 0x080012b8 (size 8) =====

ulong sym.miev_ioctl.f115832af8ad5745b85f1e178cf65304.cfi_jt(ulong param_1,uint32_t param_2,uint64_t param_3)

{
    ulong *puVar1;
    bool bVar2;
    uint64_t uVar3;
    
    if ((param_2 & 0xfffc) != 0x6b00) {
        return 0xffffffffffffffea;
    }
    puVar1 = sp_el0;
    uVar3 = param_2 >> 0x10 & 0x3fff;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || ((*puVar1 >> 0x1a & 1) != 0)) {
        param_3 = param_3 & (param_3 << 8) >> 8;
    }
    bVar2 = CARRY8(param_3,uVar3);
    param_3 = param_3 + uVar3;
    uVar3 = 0;
    if (!bVar2 || param_3 == 0) {
        uVar3 = 0x7fffffffff;
    }
    if (bVar2) {
        param_3 = 0xffffffffffffffff;
    }
    if (!CARRY8(param_3,~uVar3) && !CARRY8(param_3 + ~uVar3,bVar2) || param_3 == uVar3 + !bVar2) {
        if (((param_2 != 0x80046b02) && (param_2 != 0x40046b03)) && (param_2 != 0x6b01)) {
            return 0xffffffffffffffe7;
        }
        return 0;
    }
    return 0xfffffffffffffff2;
}


// ===== sym.miev_release.f115832af8ad5745b85f1e178cf65304.cfi_jt @ 0x080012c0 (size 8) =====

ulong sym.miev_release.f115832af8ad5745b85f1e178cf65304.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    module_put(obj.__this_module);
    __wake_up(_segment.ehdr + 0xe0,1,1,0);
    return 0;
}


// ===== sym.miev_open.f115832af8ad5745b85f1e178cf65304.cfi_jt @ 0x080012c8 (size 8) =====

ulong sym.miev_open.f115832af8ad5745b85f1e178cf65304.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    try_module_get(obj.__this_module);
    return 0;
}


// ===== sym.miev_poll.f115832af8ad5745b85f1e178cf65304.cfi_jt @ 0x080012d0 (size 8) =====

uint sym.miev_poll.f115832af8ad5745b85f1e178cf65304.cfi_jt(ulong param_1,ulong *param_2)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 != NULL) {
        pcVar3 = *param_2;
        iVar1 = _segment.ehdr + 0xe0;
        if (iVar1 != 0 && pcVar3 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80002a0);
            (*pcVar3)(param_1,iVar1,param_2);
        }
    }
    mutex_lock(_segment.ehdr + 0xb0);
    uVar2 = 0;
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        uVar2 = 0x41;
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    return uVar2;
}


// ===== sym.write_buf_inner @ 0x080012d8 (size 432) =====

code * sym.write_buf_inner(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    code *pcVar8;
    uint64_t uVar9;
    int iVar10;
    ulong unaff_x30;
    int iStack_50;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar3 = arg2;
    iStack_50 = 0;
    mutex_lock(CONCAT44(*0x8000004,_segment.ehdr) + 0xb0);
    if (0xfff < iVar3) {
        iVar3 = 0x1000;
    }
    iVar10 = -0x801;
    iStack_4c = iVar3;
    do {
        iVar6 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar3 + 4 <= (*(iVar6 + 0xa0) - *(iVar6 + 0x98)) + *(iVar6 + 0x9c) + 1) {
            iVar3 = __kfifo_in(iVar6 + 0x98,&iStack_4c,4);
            if (iVar3 == 0) {
                pcVar7 = NULL;
            }
            else {
                uVar4 = __kfifo_in(CONCAT44(*0x8000004,_segment.ehdr) + 0x98,arg1,iStack_4c);
                pcVar7 = uVar4;
                if (uVar4 == 0) {
                    _printk(0x80002fb);
                    *(CONCAT44(*0x8000004,_segment.ehdr) + 0x98) = 0;
                }
            }
            mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0xb0);
            __wake_up(CONCAT44(*0x8000004,_segment.ehdr) + 0xe0,1,1,0);
            goto code_r0x0800142c;
        }
        iVar2 = __kfifo_out(iVar6 + 0x98,&iStack_50,4);
        if ((iVar2 != 0) &&
           ((iStack_50 - 0x1001U < 0xfffff000 ||
            (iVar2 = __kfifo_out(CONCAT44(*0x8000004,_segment.ehdr) + 0x98,CONCAT44(*0x8000004,_segment.ehdr) + 0xf8)
            , iVar2 == 0)))) {
            _printk(0x800033c);
            *(CONCAT44(*0x8000004,_segment.ehdr) + 0x98) = 0;
        }
        bVar1 = iVar10 != -1;
        iVar10 = iVar10 + 1;
    } while (bVar1);
    _printk(0x80005df);
    mutex_unlock(CONCAT44(*0x8000004,_segment.ehdr) + 0xb0);
    pcVar7 = NULL;
code_r0x0800142c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return pcVar7;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.miev_get_work_msg;
    if ((reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt & 1) == 0) {
        _printk(0x800070e);
        return NULL;
    }
    uVar5 = _raw_spin_lock_irqsave(obj.miev_spinlock);
    if (_segment.ehdr == 10) goto code_r0x080016f0;
    uVar9 = _segment.ehdr * 0x48;
    pcVar7 = reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt;
    pcVar8 = reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt + uVar9;
    if (*pcVar8 == 0x0) {
        if (0x2d0 < (uVar9 | 1)) goto code_r0x080016f0;
        if (reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt[_segment.ehdr * 0x48 + 1] != 0x0)
        goto code_r0x08001500;
        uVar4 = 0;
        if (_segment.ehdr < 9) {
            uVar4 = _segment.ehdr + 1;
        }
        *pcVar8 = 0x1;
        _segment.ehdr = uVar4;
        _raw_spin_unlock_irqrestore(obj.miev_spinlock,uVar5);
        if (pcVar8 == NULL) goto code_r0x080016d4;
    }
    else {
code_r0x08001500:
        if (reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt == 0x0 &&
            reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt == '\0') {
            uVar9 = 0;
        }
        else {
            pcVar7 = 0x80001e0;
            if (*0x80001e0 == '\0' && *0x80001e1 == '\0') {
                uVar9 = 0x48;
            }
            else {
                pcVar7 = 0x8000228;
                if (*0x8000228 == '\0' && *0x8000229 == '\0') {
                    uVar9 = 0x90;
                }
                else {
                    pcVar7 = 0x8000270;
                    if (*0x8000270 == '\0' && *0x8000271 == '\0') {
                        uVar9 = 0xd8;
                    }
                    else {
                        pcVar7 = 0x80002b8;
                        if (*0x80002b8 == '\0' && *0x80002b9 == '\0') {
                            uVar9 = 0x120;
                        }
                        else {
                            pcVar7 = 0x8000300;
                            if (*0x8000300 == '\0' && *0x8000301 == '\0') {
                                uVar9 = 0x168;
                            }
                            else {
                                pcVar7 = 0x8000348;
                                if (*0x8000348 == '\0' && *0x8000349 == '\0') {
                                    uVar9 = 0x1b0;
                                }
                                else {
                                    pcVar7 = 0x8000390;
                                    if (*0x8000390 == '\0' && *0x8000391 == '\0') {
                                        uVar9 = 0x1f8;
                                    }
                                    else {
                                        pcVar7 = 0x80003d8;
                                        if (*0x80003d8 == '\0' && *0x80003d9 == '\0') {
                                            uVar9 = 0x240;
                                        }
                                        else {
                                            pcVar7 = 0x8000420;
                                            if (*0x8000420 != '\0' || *0x8000421 != '\0') {
                                                _raw_spin_unlock_irqrestore(obj.miev_spinlock,uVar5);
                                                pcVar8 = NULL;
                                                goto code_r0x080016d4;
                                            }
                                            uVar9 = 0x288;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        *pcVar7 = 0x1;
        _raw_spin_unlock_irqrestore(obj.miev_spinlock,uVar5);
        pcVar8 = pcVar7;
    }
    if (uVar9 - 0x2b9 < 0xfffffffffffffd37) {
code_r0x080016f0:
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(1,0x80016f4);
        (*pcVar7)();
    }
    iVar6 = *(pcVar8 + 0x10);
    if (iVar6 != 0) {
        memset(iVar6,0,0x1000);
        return pcVar8 + 0x10;
    }
code_r0x080016d4:
    _printk(0x800068c,pcVar8,0);
    return NULL;
}


// ===== sym.miev_get_work_msg @ 0x08001488 (size 620) =====

code * sym.miev_get_work_msg(void)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt & 1) == 0) {
        _printk(0x800070e);
        return NULL;
    }
    uVar3 = _raw_spin_lock_irqsave(obj.miev_spinlock);
    if (_segment.ehdr == 10) goto code_r0x080016f0;
    uVar6 = _segment.ehdr * 0x48;
    pcVar2 = reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt;
    pcVar5 = reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt + uVar6;
    if (*pcVar5 == 0x0) {
        if (0x2d0 < (uVar6 | 1)) goto code_r0x080016f0;
        if (reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt[_segment.ehdr * 0x48 + 1] != 0x0)
        goto code_r0x08001500;
        uVar1 = 0;
        if (_segment.ehdr < 9) {
            uVar1 = _segment.ehdr + 1;
        }
        *pcVar5 = 0x1;
        _segment.ehdr = uVar1;
        _raw_spin_unlock_irqrestore(obj.miev_spinlock,uVar3);
        if (pcVar5 == NULL) goto code_r0x080016d4;
    }
    else {
code_r0x08001500:
        if (reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt == 0x0 &&
            reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt == '\0') {
            uVar6 = 0;
        }
        else {
            pcVar2 = 0x80001e0;
            if (*0x80001e0 == '\0' && *0x80001e1 == '\0') {
                uVar6 = 0x48;
            }
            else {
                pcVar2 = 0x8000228;
                if (*0x8000228 == '\0' && *0x8000229 == '\0') {
                    uVar6 = 0x90;
                }
                else {
                    pcVar2 = 0x8000270;
                    if (*0x8000270 == '\0' && *0x8000271 == '\0') {
                        uVar6 = 0xd8;
                    }
                    else {
                        pcVar2 = 0x80002b8;
                        if (*0x80002b8 == '\0' && *0x80002b9 == '\0') {
                            uVar6 = 0x120;
                        }
                        else {
                            pcVar2 = 0x8000300;
                            if (*0x8000300 == '\0' && *0x8000301 == '\0') {
                                uVar6 = 0x168;
                            }
                            else {
                                pcVar2 = 0x8000348;
                                if (*0x8000348 == '\0' && *0x8000349 == '\0') {
                                    uVar6 = 0x1b0;
                                }
                                else {
                                    pcVar2 = 0x8000390;
                                    if (*0x8000390 == '\0' && *0x8000391 == '\0') {
                                        uVar6 = 0x1f8;
                                    }
                                    else {
                                        pcVar2 = 0x80003d8;
                                        if (*0x80003d8 == '\0' && *0x80003d9 == '\0') {
                                            uVar6 = 0x240;
                                        }
                                        else {
                                            pcVar2 = 0x8000420;
                                            if (*0x8000420 != '\0' || *0x8000421 != '\0') {
                                                _raw_spin_unlock_irqrestore(obj.miev_spinlock,uVar3);
                                                pcVar5 = NULL;
                                                goto code_r0x080016d4;
                                            }
                                            uVar6 = 0x288;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        *pcVar2 = 0x1;
        _raw_spin_unlock_irqrestore(obj.miev_spinlock,uVar3);
        pcVar5 = pcVar2;
    }
    if (uVar6 - 0x2b9 < 0xfffffffffffffd37) {
code_r0x080016f0:
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(1,0x80016f4);
        (*pcVar2)();
    }
    iVar4 = *(pcVar5 + 0x10);
    if (iVar4 != 0) {
        memset(iVar4,0,0x1000);
        return pcVar5 + 0x10;
    }
code_r0x080016d4:
    _printk(0x800068c,pcVar5,0);
    return NULL;
}


// ===== sym.check_work @ 0x080016f4 (size 44) =====

bool sym.check_work(uint32_t arg1)

{
    return 0x8000197 < arg1 && arg1 < 0x8000468;
}


// ===== sym.miev_release_work_msg @ 0x08001720 (size 124) =====

void sym.miev_release_work_msg(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*arg1 == 0)) {
        _printk(0x80006c3);
    }
    else {
        pcVar1 = arg1 + -0x10;
        if ((pcVar1 < reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt) || (0x8000467 < pcVar1)) {
            _printk(0x80003f4);
        }
        else {
            *pcVar1 = 0x0;
        }
    }
    return;
}


// ===== sym.write_kbuf @ 0x0800179c (size 252) =====

ulong sym.write_kbuf(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    int64_t iVar2;
    ulong uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 < 0x1001) {
        if ((arg1 != 0) && (*arg1 != 0)) {
            pcVar4 = arg1 + -0x10;
            if ((0x8000197 < pcVar4) && (pcVar4 < obj.nwork_index)) {
                iVar2 = sp_el0;
                *(arg1 + -0xc) = arg3;
                *(arg1 + -8) = arg2;
                puVar1 = iVar2 + 0x10;
                if (((*puVar1 & 0xf0000) == 0 && (*puVar1 & 0xf00000) == 0) && (*puVar1 & 0xff00) == 0) {
                    uVar3 = sym.write_buf_inner(*arg1 + arg2,arg3 & 0xffffffff);
                    return uVar3;
                }
                *(arg1 + -0xf) = 1;
                queue_work_on(0x20,_segment.ehdr,arg1 + 8);
                return 0;
            }
            _printk(0x8000790,pcVar4,*arg1,arg1,reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt,
                    obj.nwork_index);
            return 0xffffffff;
        }
        uVar3 = 0x800076b;
    }
    else {
        uVar3 = 0x80004a2;
    }
    _printk(uVar3);
    return 0xffffffff;
}


// ===== sym.do_miev_work @ 0x080018a4 (size 68) =====

void sym.do_miev_work(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.write_buf_inner(*(arg1 + -8) + *(arg1 + -0x10),*(arg1 + -0x14));
    *(arg1 + -0x17) = 0;
    return;
}


// ===== sym.miev_read @ 0x080018e8 (size 236) =====

uint64_t sym.miev_read(ulong noname_0,int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t arg2;
    ulong *puVar7;
    uint64_t in_x2;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_94;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_30 = 0;
    mutex_lock(_segment.ehdr + 0xb0);
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        in_x2 = 4;
        iVar2 = __kfifo_out(_segment.ehdr + 0x98,&uStack_30);
        if (iVar2 != 0) {
            in_x2 = uStack_30 & 0xffffffff;
            if ((uStack_30 - 0x1001U < 0xfffff000) ||
               (iVar2 = __kfifo_to_user(_segment.ehdr + 0x98,arg1,in_x2,&uStack_30 + 4), iVar2 != 0)) {
                iVar5 = _segment.ehdr + 0xb0;
                *(_segment.ehdr + 0x98) = 0;
                mutex_unlock(iVar5);
                _printk(0x80008fb);
                uVar4 = 0xfffffffffffffff2;
                goto code_r0x08001980;
            }
        }
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    uVar4 = uStack_30._4_4_;
code_r0x08001980:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18 = sym.miev_write;
    pcStack_78 = sym.miev_write;
    iVar5 = sp_el0;
    iStack_88 = *(iVar5 + 0x5e0);
    iStack_94 = 0;
    puStack_80 = &stack0xffffffffffffffe0;
    mutex_lock(_segment.ehdr + 0xb0);
    if (0xfff < in_x2) {
        in_x2 = 0x1000;
    }
    iVar2 = -0x801;
    uStack_90 = in_x2;
    do {
        if (in_x2 + 4U <= (*(_segment.ehdr + 0xa0) - *(_segment.ehdr + 0x98)) + *(_segment.ehdr + 0x9c) + 1U) {
            iVar5 = _segment.ehdr + 0xf8;
            __check_object_size(iVar5,in_x2,0);
            iVar5 = sym._copy_from_user(iVar5,arg2,in_x2);
            if (iVar5 != 0) {
                uVar6 = 0x800044f;
                goto code_r0x08001b88;
            }
            iVar2 = __kfifo_in(_segment.ehdr + 0x98,&uStack_90,4);
            if ((iVar2 != 0) &&
               (iVar2 = __kfifo_in(_segment.ehdr + 0x98,_segment.ehdr + 0xf8,uStack_90 & 0xffffffff), iVar2 == 0)) {
                _printk(0x8000617);
                *(_segment.ehdr + 0x98) = 0;
            }
            mutex_unlock(_segment.ehdr + 0xb0);
            __wake_up(_segment.ehdr + 0xe0,1,1,0);
            uVar4 = uStack_90;
            goto code_r0x08001b3c;
        }
        iVar3 = __kfifo_out(_segment.ehdr + 0x98,&iStack_94,4);
        if ((iVar3 != 0) &&
           ((iStack_94 - 0x1001U < 0xfffff000 ||
            (iVar3 = __kfifo_out(_segment.ehdr + 0x98,_segment.ehdr + 0xf8), iVar3 == 0)))) {
            _printk(0x80004fe);
            *(_segment.ehdr + 0x98) = 0;
        }
        bVar1 = iVar2 != -1;
        iVar2 = iVar2 + 1;
    } while (bVar1);
    uVar6 = 0x800053f;
code_r0x08001b88:
    _printk(uVar6);
    mutex_unlock(_segment.ehdr + 0xb0);
    uVar4 = 0xfffffffffffffff2;
code_r0x08001b3c:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return uVar4;
    }
    auVar10 = __stack_chk_fail(uVar4);
    puVar7 = auVar10._8_8_;
    *extraout_x18_00 = sym.miev_poll;
    if (puVar7 != NULL) {
        pcVar9 = *puVar7;
        iVar5 = _segment.ehdr + 0xe0;
        if (iVar5 != 0 && pcVar9 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar9,0x80002a0);
            (*pcVar9)(auVar10._0_8_,iVar5,puVar7);
        }
    }
    mutex_lock(_segment.ehdr + 0xb0);
    uVar8 = 0;
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        uVar8 = 0x41;
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    return uVar8;
}


// ===== sym.miev_write @ 0x080019d4 (size 488) =====

uint64_t sym.miev_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *puVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int iStack_64;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    iStack_64 = 0;
    mutex_lock(_segment.ehdr + 0xb0);
    if (0xfff < arg3) {
        arg3 = 0x1000;
    }
    iVar3 = -0x801;
    uStack_60 = arg3;
    do {
        if (arg3 + 4U <= (*(_segment.ehdr + 0xa0) - *(_segment.ehdr + 0x98)) + *(_segment.ehdr + 0x9c) + 1U) {
            iVar4 = _segment.ehdr + 0xf8;
            __check_object_size(iVar4,arg3,0);
            iVar4 = sym._copy_from_user(iVar4,arg2,arg3);
            if (iVar4 != 0) {
                uVar6 = 0x800044f;
                goto code_r0x08001b88;
            }
            iVar3 = __kfifo_in(_segment.ehdr + 0x98,&uStack_60,4);
            if ((iVar3 != 0) &&
               (iVar3 = __kfifo_in(_segment.ehdr + 0x98,_segment.ehdr + 0xf8,uStack_60 & 0xffffffff), iVar3 == 0)) {
                _printk(0x8000617);
                *(_segment.ehdr + 0x98) = 0;
            }
            mutex_unlock(_segment.ehdr + 0xb0);
            __wake_up(_segment.ehdr + 0xe0,1,1,0);
            uVar5 = uStack_60;
            goto code_r0x08001b3c;
        }
        iVar2 = __kfifo_out(_segment.ehdr + 0x98,&iStack_64,4);
        if ((iVar2 != 0) &&
           ((iStack_64 - 0x1001U < 0xfffff000 ||
            (iVar2 = __kfifo_out(_segment.ehdr + 0x98,_segment.ehdr + 0xf8), iVar2 == 0)))) {
            _printk(0x80004fe);
            *(_segment.ehdr + 0x98) = 0;
        }
        bVar1 = iVar3 != -1;
        iVar3 = iVar3 + 1;
    } while (bVar1);
    uVar6 = 0x800053f;
code_r0x08001b88:
    _printk(uVar6);
    mutex_unlock(_segment.ehdr + 0xb0);
    uVar5 = 0xfffffffffffffff2;
code_r0x08001b3c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar10 = __stack_chk_fail(uVar5);
    puVar7 = auVar10._8_8_;
    *extraout_x18 = sym.miev_poll;
    if (puVar7 != NULL) {
        pcVar9 = *puVar7;
        iVar4 = _segment.ehdr + 0xe0;
        if (iVar4 != 0 && pcVar9 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar9,0x80002a0);
            (*pcVar9)(auVar10._0_8_,iVar4,puVar7);
        }
    }
    mutex_lock(_segment.ehdr + 0xb0);
    uVar8 = 0;
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        uVar8 = 0x41;
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    return uVar8;
}


// ===== sym.miev_poll @ 0x08001bbc (size 188) =====

uint sym.miev_poll(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 != 0) {
        pcVar3 = *arg2;
        iVar1 = _segment.ehdr + 0xe0;
        if (iVar1 != 0 && pcVar3 != NULL) {
            __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar3,0x80002a0);
            (*pcVar3)(arg1,iVar1,arg2);
        }
    }
    mutex_lock(_segment.ehdr + 0xb0);
    uVar2 = 0;
    if (*(_segment.ehdr + 0x98) != *(_segment.ehdr + 0x9c)) {
        uVar2 = 0x41;
    }
    mutex_unlock(_segment.ehdr + 0xb0);
    return uVar2;
}


// ===== sym.miev_ioctl @ 0x08001c78 (size 164) =====

ulong sym.miev_ioctl(ulong noname_0,uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    bool bVar3;
    uint64_t uVar4;
    
    if ((arg1 & 0xfffc) != 0x6b00) {
        return 0xffffffffffffffea;
    }
    puVar2 = sp_el0;
    uVar4 = arg1 >> 0x10 & 0x3fff;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || ((*puVar2 >> 0x1a & 1) != 0)) {
        arg2 = arg2 & (arg2 << 8) >> 8;
    }
    bVar3 = CARRY8(arg2,uVar4);
    uVar4 = arg2 + uVar4;
    uVar1 = 0;
    if (!bVar3 || uVar4 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar3) {
        uVar4 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar4,~uVar1) && !CARRY8(uVar4 + ~uVar1,bVar3) || uVar4 == uVar1 + !bVar3) {
        if (((arg1 != 0x80046b02) && (arg1 != 0x40046b03)) && (arg1 != 0x6b01)) {
            return 0xffffffffffffffe7;
        }
        return 0;
    }
    return 0xfffffffffffffff2;
}


// ===== sym.miev_open @ 0x08001d1c (size 48) =====

ulong sym.miev_open(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    try_module_get(obj.__this_module);
    return 0;
}


// ===== sym.miev_release @ 0x08001d4c (size 76) =====

ulong sym.miev_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    module_put(obj.__this_module);
    __wake_up(_segment.ehdr + 0xe0,1,1,0);
    return 0;
}


// ===== sym._copy_from_user @ 0x08001d98 (size 376) =====

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
        if ((_mutex_lock >> 0x18 & 1) == 0) {
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
        if ((_mutex_lock >> 0x18 & 1) == 0) {
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


// ===== sym.__cfi_check_fail @ 0x08001f4c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f90

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
    //switch table (4 cases) at 0x80002c0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001fa4);
    (*pcVar1)();
}


// ===== sym.cdev_tevent_alloc @ 0x08001fa4 (size 176) =====

uint * sym.cdev_tevent_alloc(int64_t arg1)

{
    int iVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = sym.miev_get_work_msg();
    if ((piVar2 == NULL) || (puVar4 = *piVar2, puVar4 == NULL)) {
        uVar3 = 0x80006e6;
    }
    else {
        *(puVar4 + 6) = piVar2;
        *puVar4 = arg1;
        uVar3 = ktime_get_real_seconds();
        puVar4[1] = 0;
        *(puVar4 + 4) = uVar3;
        iVar1 = snprintf(*piVar2 + 0x20,0xfe0,"EventId %d -t %lld -paraList {",*puVar4,uVar3);
        if (0 < iVar1) {
            puVar4[2] = iVar1 + 0x20;
            return puVar4;
        }
        uVar3 = 0x8000517;
    }
    _printk(uVar3);
    return NULL;
}


// ===== sym.get_integer_size @ 0x08002054 (size 60) =====

uint64_t sym.get_integer_size(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    
    uVar2 = arg1 >> 0x3f;
    do {
        uVar2 = uVar2 + 1;
        uVar1 = arg1 + 9;
        arg1 = arg1 / 10;
    } while (0x12 < uVar1);
    return uVar2;
}


// ===== sym.cdev_tevent_add_int @ 0x08002090 (size 336) =====

ulong sym.cdev_tevent_add_int(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    char *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint64_t uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar9 = arg3 >> 0x3f;
    iVar8 = arg3;
    do {
        uVar1 = uVar9 + 1;
        uVar9 = uVar1;
        uVar2 = iVar8 + 9;
        iVar8 = iVar8 / 10;
    } while (0x12 < uVar2);
    if (arg1 != 0) {
        uVar4 = *(arg1 + 8);
        if (uVar4 < 0xfff) {
            iVar5 = *(arg1 + 4);
            iVar8 = 3;
            if (iVar5 != 0) {
                iVar8 = 4;
            }
            iVar6 = strlen(arg2);
            if (iVar6 + uVar1 + iVar8 < 0xfff - uVar4) {
                pcVar3 = "\"%s\":%ld";
                if (iVar5 != 0) {
                    pcVar3 = ",\"%s\":%ld";
                }
                iVar5 = snprintf(arg1 + uVar4,0x1000 - uVar4,pcVar3,arg2,arg3);
                if (0 < iVar5) {
                    *(arg1 + 4) = *(arg1 + 4) + 1;
                    *(arg1 + 8) = *(arg1 + 8) + iVar5;
                    return 0;
                }
                _printk(0x8000479,arg1,arg2);
                return 0xffffffff;
            }
            uVar7 = 0x800056a;
            goto code_r0x080021b0;
        }
    }
    uVar7 = 0x80007ee;
code_r0x080021b0:
    _printk(uVar7,arg1,arg2);
    return 0xffffffff;
}


// ===== sym.cdev_tevent_add_str @ 0x080021e0 (size 284) =====

ulong sym.cdev_tevent_add_str(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 != 0) {
        uVar3 = *(arg1 + 8);
        if (uVar3 < 0xfff) {
            iVar4 = *(arg1 + 4);
            iVar1 = 5;
            if (iVar4 != 0) {
                iVar1 = 6;
            }
            iVar5 = strlen(arg2);
            iVar6 = strlen(arg3);
            if (iVar6 + iVar5 + iVar1 < 0xfff - uVar3) {
                pcVar2 = "\"%s\":\"%s\"";
                if (iVar4 != 0) {
                    pcVar2 = ",\"%s\":\"%s\"";
                }
                iVar4 = snprintf(arg1 + uVar3,0x1000 - uVar3,pcVar2,arg2,arg3);
                if (0 < iVar4) {
                    *(arg1 + 4) = *(arg1 + 4) + 1;
                    *(arg1 + 8) = *(arg1 + 8) + iVar4;
                    return 0;
                }
                uVar7 = 0x800074a;
            }
            else {
                uVar7 = 0x80002c5;
            }
            goto code_r0x080022cc;
        }
    }
    uVar7 = 0x8000894;
code_r0x080022cc:
    _printk(uVar7,arg1,arg2);
    return 0xffffffff;
}


// ===== sym.cdev_tevent_write @ 0x080022fc (size 204) =====

ulong sym.cdev_tevent_write(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    ulong in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        iVar2 = sp_el0;
        _printk(0x800063b,*(iVar2 + 0x5d8),in_x2,arg2);
        uVar4 = 0xffffffff;
    }
    else {
        uVar1 = *(arg1 + 8);
        if ((*(arg1 + 4) == 0) || (0xffe < uVar1)) {
            _printk(0x8000660,arg1);
            uVar4 = 0xffffffff;
        }
        else {
            iVar3 = snprintf(arg1 + uVar1,0x1000 - uVar1,0x80005d3);
            if (iVar3 < 1) {
                _printk(0x8000843,arg1);
                uVar4 = 0xffffffff;
            }
            else {
                iVar3 = *(arg1 + 8) + iVar3;
                *(arg1 + 8) = iVar3;
                sym.write_kbuf(*(arg1 + 0x18),0x20,iVar3 - 0x20);
                uVar4 = 0;
            }
        }
    }
    return uVar4;
}


// ===== sym.cdev_tevent_destroy @ 0x080023c8 (size 48) =====

void sym.cdev_tevent_destroy(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 != 0) {
        *in_x18 = unaff_x30;
        sym.miev_release_work_msg(*(arg1 + 0x18));
    }
    return;
}


// ===== sym.init_module @ 0x08002404 (size 848) =====

uint64_t sym.init_module(void)

{
    uint *puVar1;
    uint uVar2;
    ulong uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint64_t uVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt == 0x1) {
        _printk(0x80004b8);
        uVar8 = 0;
    }
    else {
        _segment.ehdr = _segment.ehdr & 0xffffffff00000000;
        _segment.ehdr = kmem_cache_alloc_trace(___kfifo_out,0xcc0,0x10f8);
        if (_segment.ehdr == NULL) {
            _printk(0x8000820);
            uVar8 = 0xfffffff4;
        }
        else {
            *_segment.ehdr = 0x20800000;
            iVar4 = register_chrdev_region(0x20800000,1,"miev");
            if ((iVar4 < 0) && (iVar4 = alloc_chrdev_region(_segment.ehdr,0,1,"miev"), iVar4 < 0)) {
                _printk(0x80004d7);
                uVar8 = 0xffffffed;
            }
            else {
                cdev_init(_segment.ehdr + 4,obj.miev_fops);
                puVar1 = _segment.ehdr + 4;
                uVar2 = *_segment.ehdr;
                *(_segment.ehdr + 0x1c) = obj.__this_module;
                uVar5 = cdev_add(puVar1,uVar2,1);
                uVar8 = uVar5;
                if (uVar5 < 0) {
                    _printk(0x80005a0);
                }
                else {
                    iVar4 = __kfifo_alloc(_segment.ehdr + 0x26,0x10000,1,0xcc0);
                    if (iVar4 == 0) {
                        uVar6 = __class_create(obj.__this_module,"miev",obj.miev_init_module.__key);
                        puVar1 = _segment.ehdr;
                        *(_segment.ehdr + 2) = uVar6;
                        if (uVar6 < 0xfffffffffffff001) {
                            uVar6 = device_create(uVar6,0,*puVar1,0,"miev");
                            if (uVar6 < 0xfffffffffffff001) {
                                __mutex_init(_segment.ehdr + 0x2c,"&miev_dev->lock",obj.miev_init_module.__key);
                                __init_waitqueue_head
                                          (_segment.ehdr + 0x38,"&miev_dev->wait_queue",obj.miev_init_module.__key);
                                _segment.ehdr = alloc_workqueue(0x80003f1,0xe000a,1,"miev_workqueue");
                                if (_segment.ehdr == NULL) {
                                    _printk(0x80008db);
                                    uVar8 = 0xffffffea;
                                }
                                else {
                                    iVar9 = 0;
                                    while( true ) {
                                        uVar3 = ___kfifo_out;
                                        *(reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt + iVar9) = 0;
                                        *(iVar9 + 0x800019c) = 0;
                                        iVar7 = kmem_cache_alloc_trace(uVar3,0xcc0,0x1000);
                                        *(iVar9 + 0x80001a8) = iVar7;
                                        if (iVar7 == 0) break;
                                        iVar7 = iVar9 + 0x48;
                                        *(iVar9 + 0x80001b0) = 0xfffffffe0;
                                        *(iVar9 + 0x80001b8) = iVar9 + 0x80001b8;
                                        *(iVar9 + 0x80001c0) = iVar9 + 0x80001b8;
                                        *(reloc.miev_poll.f115832af8ad5745b85f1e178cf65304.cfi_jt + iVar9) =
                                             sym.do_miev_work.f115832af8ad5745b85f1e178cf65304.cfi_jt;
                                        iVar9 = iVar7;
                                        if (iVar7 == 0x2d0) {
                                            reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt = 0x1;
                                            return 0;
                                        }
                                    }
                                    iVar9 = 0x10;
                                    do {
                                        if (*(reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt + iVar9) != 0) {
                                            kfree();
                                        }
                                        iVar9 = iVar9 + 0x48;
                                    } while (iVar9 != 0x2e0);
                                    destroy_workqueue(_segment.ehdr);
                                    _segment.ehdr = NULL;
                                }
                                device_destroy(*(_segment.ehdr + 2),*_segment.ehdr);
                            }
                            else {
                                _printk(0x800036e);
                                uVar8 = uVar6 & 0xffffffff;
                            }
                            class_destroy(*(_segment.ehdr + 2));
                        }
                        else {
                            _printk(0x8000432);
                            uVar8 = _segment.ehdr[2];
                        }
                        __kfifo_free(_segment.ehdr + 0x26);
                    }
                    else {
                        _printk(0x8000872);
                        uVar8 = 0xfffffff4;
                    }
                    cdev_del(_segment.ehdr + 4);
                }
                unregister_chrdev_region(*_segment.ehdr,1);
            }
            kfree(_segment.ehdr);
        }
    }
    return uVar8;
}


// ===== sym.cleanup_module @ 0x08002754 (size 272) =====

void sym.cleanup_module(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    reloc.miev_read.f115832af8ad5745b85f1e178cf65304.cfi_jt = 0x0;
    device_destroy(*(_segment.ehdr + 2),*_segment.ehdr);
    class_destroy(*(_segment.ehdr + 2));
    __kfifo_free(_segment.ehdr + 0x26);
    cdev_del(_segment.ehdr + 4);
    unregister_chrdev_region(*_segment.ehdr,1);
    kfree(_segment.ehdr);
    iVar1 = 0;
    do {
        piVar2 = iVar1 * 0x48 + 0x80001a8;
        if (*piVar2 != 0) {
            uVar3 = 0xb;
            do {
                if ((reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt[iVar1 * 0x48] == 0x0) &&
                   (reloc.miev_write.f115832af8ad5745b85f1e178cf65304.cfi_jt[iVar1 * 0x48 + 1] == 0x0)) break;
                msleep(100);
                uVar3 = uVar3 - 1;
            } while (1 < uVar3);
            kfree(*piVar2);
        }
        iVar1 = iVar1 + 1;
        if (iVar1 == 10) {
            flush_workqueue(_segment.ehdr);
            destroy_workqueue(_segment.ehdr);
            _segment.ehdr = NULL;
            return;
        }
    } while( true );
}

