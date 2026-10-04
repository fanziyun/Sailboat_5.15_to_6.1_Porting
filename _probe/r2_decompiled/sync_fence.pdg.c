// decompiled from sync_fence by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x0800249c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x890743871a4a53) {
        if (arg1 == -0x7ace62f252cdb27b) {
            pcVar2 = sym.spec_sync_wait_bind_array.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                if ((pcVar1 + -0x8001188 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800245c;
            }
            if (arg1 != -0x2ac316d8df914f8) goto code_r0x0800245c;
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
    }
    else if (arg1 < 0x7a9f9f5cae0a3b66) {
        if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.spec_sync_ioctl.9045b9c6aebfe6e4def04f974976a17c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x0800245c;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 == 0x7a9f9f5cae0a3b66) {
        pcVar2 = sym.spec_fence_get_name_dummy.9045b9c6aebfe6e4def04f974976a17c.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800245c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800245c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024b0);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001160 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cdev_del(*0x8000418);
    device_destroy(_obj.sync_dev,*0x8000408);
    unregister_chrdev_region(*0x8000408,1);
    class_destroy(_obj.sync_dev);
    if (*0x8000450 != 0) {
        piVar1 = *0x8000450 + 0x38;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = __class_create(obj.__this_module,"sync",obj.spec_sync_register_device.__key);
    if (_segment.ehdr == 0) {
        _printk(0x8000597,"spec_sync_register_device","spec_sync_register_device");
    }
    else {
        iVar2 = alloc_chrdev_region(0x8000408,0,1,"");
        if (iVar2 == 0) {
            *0x8000410 = device_create(_obj.sync_dev,0,*0x8000408,obj.sync_dev,"");
            if (*0x8000410 < 0xfffffffffffff001) {
                _segment.ehdr = cdev_alloc();
                if (_segment.ehdr == 0) {
                    _printk(0x800043e,"spec_sync_register_device","spec_sync_register_device");
                }
                else {
                    cdev_init(_segment.ehdr,obj.spec_sync_fops);
                    iVar3 = *0x8000418;
                    uVar1 = *0x8000408;
                    *(*0x8000418 + 0x60) = obj.__this_module;
                    iVar2 = cdev_add(iVar3,uVar1,1);
                    if (iVar2 == 0) {
                        *0x800047c = 1;
                        __mutex_init(0x8000420,"&sync_dev.lock",obj.spec_sync_register_device.__key);
                        __mutex_init(0x8000480,"&sync_dev.l_lock",obj.spec_sync_register_device.__key);
                        *0x80004b0 = 0x80004b0;
                        *0x80004b8 = 0x80004b0;
                        __init_waitqueue_head(0x80004c0,"&sync_dev.wait_queue",obj.spec_sync_register_device.__key);
                        iVar3 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x48);
                        if (iVar3 != 0) {
                            *(iVar3 + 0x40) = 0;
                            dma_fence_init(iVar3,obj.dummy_spec_fence_ops,iVar3 + 0x40,0xfafadadafafadada,
                                           0xefa9ce00efa9ce00);
                            _segment.ehdr = iVar3;
                            return 0;
                        }
                    }
                    else {
                        _printk(obj.spec_sync_register_device.__key,"spec_sync_register_device",
                                "spec_sync_register_device");
                    }
                    cdev_del(_segment.ehdr);
                }
                device_destroy(_obj.sync_dev,*0x8000408);
            }
            else {
                _printk(0x8000507,"spec_sync_register_device","spec_sync_register_device");
            }
            unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
        }
        else {
            _printk(0x800078a,"spec_sync_register_device","spec_sync_register_device");
        }
        class_destroy(_segment.ehdr);
    }
    _printk(0x8000726,"spec_sync_init","spec_sync_init");
    return 0xffffffed;
}


// ===== sym.spec_sync_wait_bind_array.cfi_jt @ 0x08001170 (size 8) =====

uint64_t sym.spec_sync_wait_bind_array.cfi_jt(int64_t param_1,uint32_t param_2,uint64_t param_3)

{
    char cVar1;
    bool bVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int extraout_w1;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar9 [16];
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    ulong uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if ((param_1 == 0) || (unaff_x20 = param_1, (*(param_1 + 0x30) >> 0x10 & 1) == 0)) {
        _printk(0x80006d3,"spec_sync_wait_bind_array");
        uVar7 = 0xffffffea;
    }
    else {
        if ((*(param_1 + 0x30) >> 0x11 & 1) == 0) {
            unaff_x19 = param_2;
            iVar5 = __msecs_to_jiffies(param_2);
            if (iVar5 == 0 && (*(param_1 + 0x30) & 0x20000) != 0) {
                iVar5 = 1;
            }
            if (((*(param_1 + 0x30) >> 0x11 & 1) == 0) && (iVar5 != 0)) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_60 = 0;
                iVar6 = __msecs_to_jiffies(unaff_x19);
                init_wait_entry(&uStack_60,0);
                param_3 = 2;
                prepare_to_wait_event(0x80004c0,&uStack_60);
                if (iVar6 == 0 && (*(param_1 + 0x30) & 0x20000) != 0) {
                    iVar6 = 1;
                }
                uVar8 = *(param_1 + 0x30);
                while ((iVar5 = iVar6, (uVar8 >> 0x11 & 1) == 0 && (iVar5 = 0, iVar6 != 0))) {
                    iVar6 = schedule_timeout(iVar6);
                    param_3 = 2;
                    prepare_to_wait_event(0x80004c0,&uStack_60);
                    if (iVar6 == 0 && (*(param_1 + 0x30) & 0x20000) != 0) {
                        iVar6 = 1;
                    }
                    uVar8 = *(param_1 + 0x30);
                }
                finish_wait(0x80004c0,&uStack_60);
            }
            if (iVar5 == 0) {
                param_3 = unaff_x19;
                _printk(0x80006e9,"spec_sync_wait_bind_array");
                uVar7 = 0xffffff92;
                goto code_r0x080012b4;
            }
        }
        uVar7 = 0;
    }
code_r0x080012b4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar6 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.spec_sync_ioctl;
    pcStack_78 = sym.spec_sync_ioctl;
    iVar5 = sp_el0;
    iStack_88 = *(iVar5 + 0x5e0);
    puStack_80 = &stack0xffffffffffffffd0;
    uStack_70 = unaff_x19;
    if (extraout_w1 == -0x3ff7c1fb) {
        iVar5 = 4;
        uStack_98 = CONCAT44(uStack_98._4_4_,*(*(iVar6 + 0xd8) + 0x7c));
        auVar9 = extraout_q0;
code_r0x080013d0:
        iVar5 = sym._copy_to_user(param_3,auVar9,iVar5);
        iVar4 = 0;
        if (iVar5 != 0) {
            iVar4 = -0xe;
        }
    }
    else {
        if (extraout_w1 == -0x3fefc1fd) {
            uStack_98 = 0;
            uStack_90 = 0;
            iVar5 = sym._copy_from_user(&uStack_98,param_3,0x10);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_bind_array(&uStack_98);
                goto code_r0x08001414;
            }
        }
        else {
            if (extraout_w1 != -0x3ff3c1fc) {
                iVar4 = -0x19;
                goto code_r0x08001414;
            }
            uStack_90 = uStack_90 & 0xffffffff00000000;
            uStack_98 = 0;
            iVar5 = sym._copy_from_user(&uStack_98,param_3,0xc);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_create_array(&uStack_98);
                if (iVar4 < 0) goto code_r0x08001414;
                uStack_90 = CONCAT44(uStack_90._4_4_,iVar4);
                iVar5 = 0xc;
                auVar9 = extraout_q0_00;
                goto code_r0x080013d0;
            }
        }
        iVar4 = -0xe;
    }
code_r0x08001414:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return iVar4;
    }
    auVar9 = __stack_chk_fail();
    uVar7 = auVar9._8_8_;
    *extraout_x18_00 = sym.spec_sync_open;
    pcStack_b8 = sym.spec_sync_open;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    ppuStack_c0 = &puStack_80;
    iStack_b0 = unaff_x20;
    uStack_a8 = param_3;
    if (((auVar9._0_8_ != 0) && (param_3 = uVar7, uVar7 != 0)) && (*(auVar9._0_8_ + 0x2b0) != 0)) {
        mutex_lock(0x8000420);
        uVar3 = sp_el0;
        __get_task_comm(&uStack_d8,0x10,uVar3);
        if (*0x8000458 < 2) {
            if (*0x8000458 != 0) goto code_r0x080015a0;
            *0x800046c = 0;
            *0x8000474 = 0;
            *0x800045c = 0;
            *0x8000460 = 0;
            *0x8000464 = 0;
            strscpy(0x800045c,&uStack_d8,0x20);
            goto code_r0x080015a0;
        }
        _printk(0x8000834,"spec_fence_init_locked",2);
        _printk(0x80007af,"spec_sync_open",0x800045c,&uStack_d8);
        uVar8 = 0xffffffef;
        goto code_r0x08001500;
    }
    _printk(0x8000758,"spec_sync_open");
    uVar8 = 0xffffffea;
    uVar7 = param_3;
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
code_r0x080015a0:
        Hint_Prefetch(0x8000458,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x8000458,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                *0x8000458 = *0x8000458 + 1;
            }
        } while (cVar1 != '\0');
        uVar8 = 0;
        *(uVar7 + 0xd8) = obj.sync_dev;
code_r0x08001500:
        mutex_unlock(0x8000420);
    }
    return uVar8;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x08001178 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFvP4krefE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.spec_fence_get_name_dummy.9045b9c6aebfe6e4def04f974976a17c.cfi_jt @ 0x08001180 (size 8) =====

char * sym.spec_fence_get_name_dummy.9045b9c6aebfe6e4def04f974976a17c.cfi_jt(void)

{
    return "dummy_fence";
}


// ===== sym.spec_sync_release.9045b9c6aebfe6e4def04f974976a17c.cfi_jt @ 0x08001188 (size 8) =====

uint sym.spec_sync_release.9045b9c6aebfe6e4def04f974976a17c.cfi_jt(ulong param_1,int64_t param_2)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_2 + 0xd8);
    mutex_lock(0x8000420);
    piVar1 = iVar5 + 0x58;
    if (*piVar1 == 0) {
        _printk(0x8000420,"");
        uVar4 = 0xffffffed;
    }
    else {
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*piVar1 == 0) {
            sym.clear_fence_array_tracker(1);
        }
        uVar4 = 0;
    }
    mutex_unlock(0x8000420);
    return uVar4;
}


// ===== sym.spec_sync_open.9045b9c6aebfe6e4def04f974976a17c.cfi_jt @ 0x08001190 (size 8) =====

uint sym.spec_sync_open.9045b9c6aebfe6e4def04f974976a17c.cfi_jt(int64_t param_1,int64_t param_2)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t unaff_x19;
    uint uVar5;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    if (((param_1 != 0) && (unaff_x19 = param_2, param_2 != 0)) && (*(param_1 + 0x2b0) != 0)) {
        mutex_lock(0x8000420);
        uVar4 = sp_el0;
        __get_task_comm(&uStack_38,0x10,uVar4);
        if (1 < *0x8000458) {
            _printk(0x8000834,"spec_fence_init_locked",2);
            _printk(0x80007af,"spec_sync_open",0x800045c,&uStack_38);
            uVar5 = 0xffffffef;
            goto code_r0x08001500;
        }
        if (*0x8000458 != 0) goto code_r0x080015a0;
        *0x800046c = 0;
        *0x8000474 = 0;
        *0x800045c = 0;
        *0x8000460 = 0;
        *0x8000464 = 0;
        strscpy(0x800045c,&uStack_38,0x20);
        goto code_r0x080015a0;
    }
    _printk(0x8000758,"spec_sync_open");
    uVar5 = 0xffffffea;
    param_2 = unaff_x19;
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
code_r0x080015a0:
        Hint_Prefetch(0x8000458,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x8000458,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                *0x8000458 = *0x8000458 + 1;
            }
        } while (cVar1 != '\0');
        uVar5 = 0;
        *(param_2 + 0xd8) = obj.sync_dev;
code_r0x08001500:
        mutex_unlock(0x8000420);
    }
    return uVar5;
}


// ===== sym.spec_sync_ioctl.9045b9c6aebfe6e4def04f974976a17c.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.spec_sync_ioctl.9045b9c6aebfe6e4def04f974976a17c.cfi_jt
                   (uchar param_1 [16],int64_t param_2,int param_3,int64_t param_4)

{
    char cVar1;
    bool bVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar8 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_38;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    if (param_3 == -0x3ff7c1fb) {
        iVar5 = 4;
        uStack_38 = CONCAT44(uStack_38._4_4_,*(*(param_2 + 0xd8) + 0x7c));
code_r0x080013d0:
        iVar5 = sym._copy_to_user(param_4,param_1,iVar5);
        iVar4 = 0;
        if (iVar5 != 0) {
            iVar4 = -0xe;
        }
    }
    else {
        if (param_3 == -0x3fefc1fd) {
            uStack_38 = 0;
            uStack_30 = 0;
            iVar5 = sym._copy_from_user(&uStack_38,param_4,0x10);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_bind_array(&uStack_38);
                goto code_r0x08001414;
            }
        }
        else {
            if (param_3 != -0x3ff3c1fc) {
                iVar4 = -0x19;
                goto code_r0x08001414;
            }
            uStack_30 = uStack_30 & 0xffffffff00000000;
            uStack_38 = 0;
            iVar5 = sym._copy_from_user(&uStack_38,param_4,0xc);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_create_array(&uStack_38);
                if (iVar4 < 0) goto code_r0x08001414;
                uStack_30 = CONCAT44(uStack_30._4_4_,iVar4);
                iVar5 = 0xc;
                param_1 = extraout_q0;
                goto code_r0x080013d0;
            }
        }
        iVar4 = -0xe;
    }
code_r0x08001414:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    auVar8 = __stack_chk_fail();
    iVar6 = auVar8._8_8_;
    *extraout_x18 = sym.spec_sync_open;
    pcStack_58 = sym.spec_sync_open;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    if (((auVar8._0_8_ != 0) && (param_4 = iVar6, iVar6 != 0)) && (*(auVar8._0_8_ + 0x2b0) != 0)) {
        mutex_lock(0x8000420);
        uVar3 = sp_el0;
        __get_task_comm(&uStack_78,0x10,uVar3);
        if (1 < *0x8000458) {
            _printk(0x8000834,"spec_fence_init_locked",2);
            _printk(0x80007af,"spec_sync_open",0x800045c,&uStack_78);
            uVar7 = 0xffffffef;
            goto code_r0x08001500;
        }
        if (*0x8000458 != 0) goto code_r0x080015a0;
        *0x800046c = 0;
        *0x8000474 = 0;
        *0x800045c = 0;
        *0x8000460 = 0;
        *0x8000464 = 0;
        strscpy(0x800045c,&uStack_78,0x20);
        goto code_r0x080015a0;
    }
    _printk(0x8000758,"spec_sync_open");
    uVar7 = 0xffffffea;
    iVar6 = param_4;
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x080015a0:
        Hint_Prefetch(0x8000458,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x8000458,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                *0x8000458 = *0x8000458 + 1;
            }
        } while (cVar1 != '\0');
        uVar7 = 0;
        *(iVar6 + 0xd8) = obj.sync_dev;
code_r0x08001500:
        mutex_unlock(0x8000420);
    }
    return uVar7;
}


// ===== sym.spec_sync_wait_bind_array @ 0x080011a0 (size 388) =====

uint64_t sym.spec_sync_wait_bind_array(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int extraout_w1;
    uint64_t in_x2;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t unaff_x19;
    int64_t unaff_x20;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar auVar9 [16];
    ulong uStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    ulong uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    if ((arg1 == 0) || (unaff_x20 = arg1, (*(arg1 + 0x30) >> 0x10 & 1) == 0)) {
        _printk(0x80006d3,"spec_sync_wait_bind_array");
        uVar7 = 0xffffffea;
    }
    else {
        if ((*(arg1 + 0x30) >> 0x11 & 1) == 0) {
            unaff_x19 = arg2 & 0xffffffff;
            iVar5 = __msecs_to_jiffies(arg2 & 0xffffffff);
            if (iVar5 == 0 && (*(arg1 + 0x30) & 0x20000) != 0) {
                iVar5 = 1;
            }
            if (((*(arg1 + 0x30) >> 0x11 & 1) == 0) && (iVar5 != 0)) {
                uStack_48 = 0;
                uStack_40 = 0;
                uStack_58 = 0;
                uStack_50 = 0;
                uStack_60 = 0;
                iVar6 = __msecs_to_jiffies(unaff_x19);
                init_wait_entry(&uStack_60,0);
                in_x2 = 2;
                prepare_to_wait_event(0x80004c0,&uStack_60);
                if (iVar6 == 0 && (*(arg1 + 0x30) & 0x20000) != 0) {
                    iVar6 = 1;
                }
                uVar8 = *(arg1 + 0x30);
                while ((iVar5 = iVar6, (uVar8 >> 0x11 & 1) == 0 && (iVar5 = 0, iVar6 != 0))) {
                    iVar6 = schedule_timeout(iVar6);
                    in_x2 = 2;
                    prepare_to_wait_event(0x80004c0,&uStack_60);
                    if (iVar6 == 0 && (*(arg1 + 0x30) & 0x20000) != 0) {
                        iVar6 = 1;
                    }
                    uVar8 = *(arg1 + 0x30);
                }
                finish_wait(0x80004c0,&uStack_60);
            }
            if (iVar5 == 0) {
                in_x2 = unaff_x19;
                _printk(0x80006e9,"spec_sync_wait_bind_array");
                uVar7 = 0xffffff92;
                goto code_r0x080012b4;
            }
        }
        uVar7 = 0;
    }
code_r0x080012b4:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar6 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.spec_sync_ioctl;
    pcStack_78 = sym.spec_sync_ioctl;
    iVar5 = sp_el0;
    iStack_88 = *(iVar5 + 0x5e0);
    puStack_80 = &stack0xffffffffffffffd0;
    uStack_70 = unaff_x19;
    if (extraout_w1 == -0x3ff7c1fb) {
        iVar5 = 4;
        uStack_98 = CONCAT44(uStack_98._4_4_,*(*(iVar6 + 0xd8) + 0x7c));
        auVar9 = extraout_q0;
code_r0x080013d0:
        iVar5 = sym._copy_to_user(in_x2,auVar9,iVar5);
        iVar4 = 0;
        if (iVar5 != 0) {
            iVar4 = -0xe;
        }
    }
    else {
        if (extraout_w1 == -0x3fefc1fd) {
            uStack_98 = 0;
            uStack_90 = 0;
            iVar5 = sym._copy_from_user(&uStack_98,in_x2,0x10);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_bind_array(&uStack_98);
                goto code_r0x08001414;
            }
        }
        else {
            if (extraout_w1 != -0x3ff3c1fc) {
                iVar4 = -0x19;
                goto code_r0x08001414;
            }
            uStack_90 = uStack_90 & 0xffffffff00000000;
            uStack_98 = 0;
            iVar5 = sym._copy_from_user(&uStack_98,in_x2,0xc);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_create_array(&uStack_98);
                if (iVar4 < 0) goto code_r0x08001414;
                uStack_90 = CONCAT44(uStack_90._4_4_,iVar4);
                iVar5 = 0xc;
                auVar9 = extraout_q0_00;
                goto code_r0x080013d0;
            }
        }
        iVar4 = -0xe;
    }
code_r0x08001414:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return iVar4;
    }
    auVar9 = __stack_chk_fail();
    uVar7 = auVar9._8_8_;
    *extraout_x18_00 = sym.spec_sync_open;
    pcStack_b8 = sym.spec_sync_open;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    uStack_d8 = 0;
    uStack_d0 = 0;
    ppuStack_c0 = &puStack_80;
    iStack_b0 = unaff_x20;
    uStack_a8 = in_x2;
    if (((auVar9._0_8_ != 0) && (in_x2 = uVar7, uVar7 != 0)) && (*(auVar9._0_8_ + 0x2b0) != 0)) {
        mutex_lock(0x8000420);
        uVar3 = sp_el0;
        __get_task_comm(&uStack_d8,0x10,uVar3);
        if (*0x8000458 < 2) {
            if (*0x8000458 != 0) goto code_r0x080015a0;
            *0x800046c = 0;
            *0x8000474 = 0;
            *0x800045c = 0;
            *0x8000460 = 0;
            *0x8000464 = 0;
            strscpy(0x800045c,&uStack_d8,0x20);
            goto code_r0x080015a0;
        }
        _printk(0x8000834,"spec_fence_init_locked",2);
        _printk(0x80007af,"spec_sync_open",0x800045c,&uStack_d8);
        uVar8 = 0xffffffef;
        goto code_r0x08001500;
    }
    _printk(0x8000758,"spec_sync_open");
    uVar8 = 0xffffffea;
    uVar7 = in_x2;
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_c8) {
        __stack_chk_fail();
code_r0x080015a0:
        Hint_Prefetch(0x8000458,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x8000458,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                *0x8000458 = *0x8000458 + 1;
            }
        } while (cVar1 != '\0');
        uVar8 = 0;
        *(uVar7 + 0xd8) = obj.sync_dev;
code_r0x08001500:
        mutex_unlock(0x8000420);
    }
    return uVar8;
}


// ===== sym.spec_sync_ioctl @ 0x08001324 (size 292) =====

uint64_t sym.spec_sync_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar6;
    uint32_t uVar7;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar extraout_q0 [16];
    uchar auVar8 [16];
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_38;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    if (arg2 == 0xc0083e05) {
        iVar5 = 4;
        uStack_38 = CONCAT44(uStack_38._4_4_,*(*(arg1 + 0xd8) + 0x7c));
code_r0x080013d0:
        iVar5 = sym._copy_to_user(arg3,in_q0,iVar5);
        iVar4 = 0;
        if (iVar5 != 0) {
            iVar4 = -0xe;
        }
    }
    else {
        if (arg2 == 0xc0103e03) {
            uStack_38 = 0;
            uStack_30 = 0;
            iVar5 = sym._copy_from_user(&uStack_38,arg3,0x10);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_bind_array(&uStack_38);
                goto code_r0x08001414;
            }
        }
        else {
            if (arg2 != 0xc00c3e04) {
                iVar4 = -0x19;
                goto code_r0x08001414;
            }
            uStack_30 = uStack_30 & 0xffffffff00000000;
            uStack_38 = 0;
            iVar5 = sym._copy_from_user(&uStack_38,arg3,0xc);
            if (iVar5 == 0) {
                iVar4 = sym.spec_sync_create_array(&uStack_38);
                if (iVar4 < 0) goto code_r0x08001414;
                uStack_30 = CONCAT44(uStack_30._4_4_,iVar4);
                iVar5 = 0xc;
                in_q0 = extraout_q0;
                goto code_r0x080013d0;
            }
        }
        iVar4 = -0xe;
    }
code_r0x08001414:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    auVar8 = __stack_chk_fail();
    iVar6 = auVar8._8_8_;
    *extraout_x18 = sym.spec_sync_open;
    pcStack_58 = sym.spec_sync_open;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    if (((auVar8._0_8_ != 0) && (arg3 = iVar6, iVar6 != 0)) && (*(auVar8._0_8_ + 0x2b0) != 0)) {
        mutex_lock(0x8000420);
        uVar3 = sp_el0;
        __get_task_comm(&uStack_78,0x10,uVar3);
        if (1 < *0x8000458) {
            _printk(0x8000834,"spec_fence_init_locked",2);
            _printk(0x80007af,"spec_sync_open",0x800045c,&uStack_78);
            uVar7 = 0xffffffef;
            goto code_r0x08001500;
        }
        if (*0x8000458 != 0) goto code_r0x080015a0;
        *0x800046c = 0;
        *0x8000474 = 0;
        *0x800045c = 0;
        *0x8000460 = 0;
        *0x8000464 = 0;
        strscpy(0x800045c,&uStack_78,0x20);
        goto code_r0x080015a0;
    }
    _printk(0x8000758,"spec_sync_open");
    uVar7 = 0xffffffea;
    iVar6 = arg3;
    while (iVar5 = sp_el0, *(iVar5 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x080015a0:
        Hint_Prefetch(0x8000458,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x8000458,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                *0x8000458 = *0x8000458 + 1;
            }
        } while (cVar1 != '\0');
        uVar7 = 0;
        *(iVar6 + 0xd8) = obj.sync_dev;
code_r0x08001500:
        mutex_unlock(0x8000420);
    }
    return uVar7;
}


// ===== sym.spec_sync_open @ 0x08001448 (size 392) =====

uint sym.spec_sync_open(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    int64_t unaff_x19;
    uint uVar5;
    ulong unaff_x30;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    if (((arg1 != 0) && (unaff_x19 = arg2, arg2 != 0)) && (*(arg1 + 0x2b0) != 0)) {
        mutex_lock(0x8000420);
        uVar4 = sp_el0;
        __get_task_comm(&uStack_38,0x10,uVar4);
        if (1 < *0x8000458) {
            _printk(0x8000834,"spec_fence_init_locked",2);
            _printk(0x80007af,"spec_sync_open",0x800045c,&uStack_38);
            uVar5 = 0xffffffef;
            goto code_r0x08001500;
        }
        if (*0x8000458 != 0) goto code_r0x080015a0;
        *0x800046c = 0;
        *0x8000474 = 0;
        *0x800045c = 0;
        *0x8000460 = 0;
        *0x8000464 = 0;
        strscpy(0x800045c,&uStack_38,0x20);
        goto code_r0x080015a0;
    }
    _printk(0x8000758,"spec_sync_open");
    uVar5 = 0xffffffea;
    arg2 = unaff_x19;
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
code_r0x080015a0:
        Hint_Prefetch(0x8000458,2,0,1);
        do {
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(0x8000458,0x10);
            if (bVar2) {
                cVar1 = ExclusiveMonitorsStatus();
                *0x8000458 = *0x8000458 + 1;
            }
        } while (cVar1 != '\0');
        uVar5 = 0;
        *(arg2 + 0xd8) = obj.sync_dev;
code_r0x08001500:
        mutex_unlock(0x8000420);
    }
    return uVar5;
}


// ===== sym.spec_sync_release @ 0x080015d0 (size 208) =====

uint sym.spec_sync_release(ulong noname_0,int64_t arg1)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    uint uVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0xd8);
    mutex_lock(0x8000420);
    piVar1 = iVar5 + 0x58;
    if (*piVar1 == 0) {
        _printk(0x8000420,"");
        uVar4 = 0xffffffed;
    }
    else {
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*piVar1 == 0) {
            sym.clear_fence_array_tracker(1);
        }
        uVar4 = 0;
    }
    mutex_unlock(0x8000420);
    return uVar4;
}


// ===== sym.spec_sync_create_array @ 0x080016a4 (size 984) =====

int sym.spec_sync_create_array(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t *puVar2;
    int *piVar3;
    int64_t iVar4;
    int iVar5;
    char cVar6;
    bool bVar7;
    int64_t *piVar8;
    int iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *puVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong uVar15;
    ulong *in_x18;
    int iVar16;
    int64_t *piVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = get_unused_fd_flags(0x80000);
    iVar4 = _segment.ehdr;
    if (iVar9 < 0) {
        _printk(0x80004a9,"spec_sync_create_array");
    }
    else {
        if (*arg1 - 0x21 < 0xffffffe0) {
            _printk(0x80007f8,"spec_sync_create_array");
            iVar16 = -0x22;
        }
        else {
            iVar10 = __kmalloc(*arg1 << 3,0xdc0);
            if (iVar10 == 0) {
                iVar16 = -0xc;
            }
            else {
                puVar1 = iVar4 + 0x38;
                if (*arg1 == 0) {
                    uVar18 = 0;
                }
                else {
                    uVar19 = 0;
                    do {
                        *(iVar10 + uVar19 * 8) = iVar4;
                        if (iVar4 != 0) {
                            Hint_Prefetch(puVar1,2,0,1);
                            do {
                                uVar18 = *puVar1;
                                cVar6 = '\x01';
                                bVar7 = ExclusiveMonitorPass(puVar1,0x10);
                                if (bVar7) {
                                    *puVar1 = uVar18 + 1;
                                    cVar6 = ExclusiveMonitorsStatus();
                                }
                            } while (cVar6 != '\0');
                            if (uVar18 == 0) {
                                uVar15 = 2;
                            }
                            else {
                                if (-1 < (uVar18 + 1 | uVar18)) goto code_r0x08001944;
                                uVar15 = 1;
                            }
                            refcount_warn_saturate(puVar1,uVar15);
                        }
code_r0x08001944:
                        uVar18 = *arg1;
                        uVar19 = uVar19 + 1;
                    } while (uVar19 < uVar18);
                }
                uVar19 = *(arg1 + 4);
                uVar15 = dma_fence_context_alloc(1);
                iVar11 = dma_fence_array_create(uVar18,iVar10,uVar15,0,(uVar19 & 2) == 0);
                if (iVar11 == 0) {
                    if (*arg1 != 0) {
                        uVar18 = 0;
                        do {
                            if (iVar4 != 0) {
                                Hint_Prefetch(puVar1,2,0,1);
                                do {
                                    uVar19 = *puVar1;
                                    cVar6 = '\x01';
                                    bVar7 = ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar7) {
                                        *puVar1 = uVar19 - 1;
                                        cVar6 = ExclusiveMonitorsStatus();
                                    }
                                } while (cVar6 != '\0');
                                if (uVar19 == 1) {
                                    DataMemoryBarrier(2,1);
                                    dma_fence_release(puVar1);
                                }
                                else if (uVar19 < 1) {
                                    refcount_warn_saturate(puVar1,3);
                                }
                            }
                            uVar18 = uVar18 + 1;
                        } while (uVar18 < *arg1);
                    }
                    kfree(iVar10);
                    iVar16 = -0x16;
                }
                else {
                    puVar2 = iVar11 + 0x30;
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        cVar6 = '\x01';
                        bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar7) {
                            *puVar2 = *puVar2 | 4;
                            cVar6 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar6 != '\0');
                    Hint_Prefetch(puVar2,2,0,1);
                    do {
                        cVar6 = '\x01';
                        bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                        if (bVar7) {
                            *puVar2 = *puVar2 | 0x10000;
                            cVar6 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar6 != '\0');
                    puVar12 = sync_file_create(iVar11);
                    if (puVar12 == NULL) {
                        _printk(0x800067a,"spec_sync_create_array");
                        iVar16 = -0x16;
                    }
                    else {
                        iVar4 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar4 = 0x30;
                        }
                        piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x18);
                        if (piVar13 != NULL) {
                            fd_install(iVar9);
                            piVar17 = piVar13 + 1;
                            *piVar13 = iVar11;
                            mutex_lock(0x8000480);
                            piVar8 = *0x80004b8;
                            uVar14 = __list_add_valid(piVar17,*0x80004b8,0x80004b0);
                            if ((uVar14 & 1) != 0) {
                                *0x80004b8 = piVar17;
                                piVar13[1] = 0x80004b0;
                                piVar13[2] = piVar8;
                                *piVar8 = piVar17;
                            }
                            mutex_unlock(0x8000480);
                            return iVar9;
                        }
                        fput(*puVar12);
                        iVar16 = -0xc;
                    }
                    piVar3 = iVar11 + 0x38;
                    Hint_Prefetch(piVar3,2,0,1);
                    do {
                        iVar5 = *piVar3;
                        cVar6 = '\x01';
                        bVar7 = ExclusiveMonitorPass(piVar3,0x10);
                        if (bVar7) {
                            *piVar3 = iVar5 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar6 != '\0');
                    if (iVar5 == 1) {
                        DataMemoryBarrier(2,1);
                        dma_fence_release();
                    }
                    else if (iVar5 < 1) {
                        refcount_warn_saturate(piVar3,3);
                    }
                }
            }
        }
        put_unused_fd(iVar9);
        iVar9 = iVar16;
    }
    return iVar9;
}


// ===== sym._copy_from_user @ 0x08001a7c (size 376) =====

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
        if ((_dma_fence_release >> 0x18 & 1) == 0) {
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
        if ((_dma_fence_release >> 0x18 & 1) == 0) {
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


// ===== sym._copy_to_user @ 0x08001c30 (size 312) =====

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
        if ((_dma_fence_release >> 0x18 & 1) == 0) {
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
        if ((_dma_fence_release >> 0x18 & 1) == 0) {
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


// ===== sym.spec_sync_bind_array @ 0x08001da4 (size 1152) =====

uint64_t sym.spec_sync_bind_array(int64_t arg1)

{
    int *piVar1;
    uint uVar2;
    int iVar3;
    char cVar4;
    bool bVar5;
    bool bVar6;
    uint uVar7;
    ulong *puVar8;
    uint64_t uVar9;
    uint *arg1_00;
    ulong uVar10;
    uint32_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong *in_x18;
    code *pcVar14;
    uint32_t uVar15;
    int64_t iVar16;
    uint64_t *puVar17;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar8 = sync_file_get_fence(*arg1);
    if (puVar8 == NULL) {
        _printk(0x8000648,"spec_sync_bind_array",*arg1);
        uVar15 = 0xffffffea;
        goto code_r0x08002174;
    }
    puVar17 = puVar8 + 6;
    if ((*puVar17 & 1) == 0) {
        pcVar14 = *(puVar8[1] + 0x20);
        if (pcVar14 != NULL) {
            __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar14,obj.sync_dev);
            uVar9 = (*pcVar14)(puVar8);
            if ((uVar9 & 1) != 0) {
                dma_fence_signal(puVar8);
                goto code_r0x080020c8;
            }
        }
        mutex_lock(0x8000480);
        for (piVar12 = *0x80004b0; piVar12 != 0x80004b0; piVar12 = *piVar12) {
            if (piVar12[-1] == puVar8) {
                mutex_unlock(0x8000480);
                uVar15 = *(puVar8 + 0x44);
                if (uVar15 == 0) goto code_r0x08001edc;
                uVar11 = 0;
                goto code_r0x08001eb4;
            }
        }
        mutex_unlock(0x8000480);
        uVar2 = *arg1;
        uVar10 = 0x800046c;
    }
    else {
code_r0x080020c8:
        uVar2 = *arg1;
        uVar10 = 0x80008a8;
    }
    _printk(uVar10,"spec_sync_bind_array",uVar2);
code_r0x080020e0:
    uVar15 = 0xffffffea;
    goto code_r0x080020e4;
    while (uVar11 = uVar11 + 1, uVar15 != uVar11) {
code_r0x08001eb4:
        iVar13 = *(puVar8[10] + uVar11 * 8);
        if ((*(iVar13 + 0x20) != -0x505252505052526) || (*(iVar13 + 0x28) != -0x105631ff10563200)) {
            uVar2 = *arg1;
            uVar7 = dma_fence_get_status(puVar8);
            _printk(0x8000542,"spec_sync_bind_array",uVar2,uVar7,puVar8[6]);
            goto code_r0x080020e0;
        }
    }
code_r0x08001edc:
    iVar13 = uVar15 << 2;
    arg1_00 = __kmalloc(iVar13,0xdc0);
    if (arg1_00 == NULL) {
        uVar15 = 0xfffffff4;
    }
    else {
        if (uVar15 >> 0x1d != 0) {
    //WARNING: Does not return
            pcVar14 = SoftwareBreakpoint(0x800,0x800214c);
            (*pcVar14)();
        }
        iVar16 = *(arg1 + 8);
        __check_object_size(arg1_00,iVar13,0);
        iVar13 = sym._copy_from_user(arg1_00,iVar16,iVar13);
        if (iVar13 == 0) {
            _raw_spin_lock(*puVar8);
            if (uVar15 == 0) {
code_r0x08001fd8:
                Hint_Prefetch(puVar17,2,0,1);
                do {
                    cVar4 = '\x01';
                    bVar6 = ExclusiveMonitorPass(puVar17,0x10);
                    if (bVar6) {
                        *puVar17 = *puVar17 & 0xfffffffffffffffb;
                        cVar4 = ExclusiveMonitorsStatus();
                    }
                } while (cVar4 != '\0');
                _raw_spin_unlock(*puVar8);
                dma_fence_enable_sw_signaling(puVar8);
                uVar9 = sym.clear_fence_array_tracker(0);
                return uVar9;
            }
            iVar13 = sync_file_get_fence(*arg1_00);
            iVar16 = 0;
            if (iVar13 == 0) {
                bVar6 = true;
            }
            else {
                do {
                    *(puVar8[10] + iVar16 * 8) = iVar13;
                    if (_segment.ehdr != 0) {
                        piVar1 = _segment.ehdr + 0x38;
                        Hint_Prefetch(piVar1,2,0,1);
                        do {
                            iVar3 = *piVar1;
                            cVar4 = '\x01';
                            bVar6 = ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar6) {
                                *piVar1 = iVar3 + -1;
                                cVar4 = ExclusiveMonitorsStatus();
                            }
                        } while (cVar4 != '\0');
                        if (iVar3 == 1) {
                            DataMemoryBarrier(2,1);
                            dma_fence_release();
                        }
                        else if (iVar3 < 1) {
                            refcount_warn_saturate(piVar1,3);
                        }
                    }
                    uVar11 = iVar16 + 1;
                    if (uVar11 == uVar15) goto code_r0x08001fd8;
                    iVar16 = uVar11;
                    iVar13 = sync_file_get_fence(arg1_00[uVar11]);
                } while (iVar13 != 0);
                bVar6 = uVar11 < uVar15;
            }
            _printk(0x8000697,"spec_sync_bind_array",arg1_00[iVar16],*arg1);
            Hint_Prefetch(puVar17,2,0,1);
            do {
                cVar4 = '\x01';
                bVar5 = ExclusiveMonitorPass(puVar17,0x10);
                if (bVar5) {
                    *puVar17 = *puVar17 | 0x20000;
                    cVar4 = ExclusiveMonitorsStatus();
                }
            } while (cVar4 != '\0');
            __wake_up(0x80004c0,3,0,0);
            uVar15 = 0;
            if (bVar6) {
                if ((*puVar17 & 1) != 0) {
    //WARNING: Does not return
                    pcVar14 = SoftwareBreakpoint(0x800,0x8002154);
                    (*pcVar14)();
                }
                *(puVar8 + 0x3c) = 0xffffffea;
                _raw_spin_unlock(*puVar8);
                dma_fence_signal(puVar8);
                sym.clear_fence_array_tracker(0);
                uVar15 = 0xffffffea;
            }
        }
        else {
            uVar15 = 0xfffffff2;
        }
        kfree(arg1_00);
    }
code_r0x080020e4:
    piVar1 = puVar8 + 7;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar6 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
            *piVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    if (iVar3 == 1) {
        DataMemoryBarrier(2,1);
        dma_fence_release();
    }
    else if (iVar3 < 1) {
        refcount_warn_saturate(piVar1,3);
    }
code_r0x08002174:
    return uVar15;
}


// ===== sym.clear_fence_array_tracker @ 0x08002224 (size 544) =====

void sym.clear_fence_array_tracker(int64_t arg1)

{
    int *piVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    int iVar4;
    char cVar5;
    uint64_t uVar6;
    bool bVar7;
    ulong *in_x18;
    int64_t *piVar8;
    int64_t iVar9;
    code *pcVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(0x8000480);
    if (*0x80004b0 != 0x80004b0) {
        uVar2 = arg1 ^ 1;
        piVar8 = *0x80004b0;
        do {
            piVar11 = *piVar8;
            iVar9 = piVar8[-1];
            if ((*(iVar9 + 0x30) & 1) == 0) {
                pcVar10 = *(*(iVar9 + 8) + 0x20);
                if (pcVar10 != NULL) {
                    __cfi_slowpath_diag(0x15332306f8fba7a5,pcVar10,obj.sync_dev);
                    uVar6 = (*pcVar10)(iVar9);
                    if ((uVar6 & 1) != 0) {
                        dma_fence_signal(iVar9);
                        goto code_r0x080022f4;
                    }
                }
                bVar7 = false;
                if ((arg1 & 1U) != 0) goto code_r0x080022fc;
code_r0x08002318:
                if (bVar7) goto joined_r0x0800234c;
            }
            else {
code_r0x080022f4:
                bVar7 = true;
                if ((arg1 & 1U) == 0) goto code_r0x08002318;
code_r0x080022fc:
                if (*(iVar9 + 0x50) == 0) {
                    *(iVar9 + 0x44) = 0;
                    if (!bVar7 && (uVar2 & 1) == 0) goto code_r0x0800232c;
                }
                else if (!bVar7 && (uVar2 & 1) == 0) {
code_r0x0800232c:
                    piVar1 = iVar9 + 0x48;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar4 = *piVar1;
                        cVar5 = '\x01';
                        bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar7) {
                            *piVar1 = iVar4 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    DataMemoryBarrier(2,3);
                    if (iVar4 + -1 == 0) {
                        dma_fence_signal(iVar9);
                    }
                }
joined_r0x0800234c:
                if (iVar9 != 0) {
                    piVar1 = iVar9 + 0x38;
                    Hint_Prefetch(piVar1,2,0,1);
                    do {
                        iVar4 = *piVar1;
                        cVar5 = '\x01';
                        bVar7 = ExclusiveMonitorPass(piVar1,0x10);
                        if (bVar7) {
                            *piVar1 = iVar4 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                        }
                    } while (cVar5 != '\0');
                    if (iVar4 == 1) {
                        DataMemoryBarrier(2,1);
                        dma_fence_release();
                    }
                    else if (iVar4 < 1) {
                        refcount_warn_saturate(piVar1,3);
                    }
                }
                uVar6 = __list_del_entry_valid(piVar8);
                if ((uVar6 & 1) != 0) {
                    iVar9 = *piVar8;
                    piVar3 = piVar8[1];
                    *(iVar9 + 8) = piVar3;
                    *piVar3 = iVar9;
                }
                *piVar8 = -0x2152ffffffffff00;
                piVar8[1] = -0x2152fffffffffede;
                kfree(piVar8 + -1);
            }
            piVar8 = piVar11;
        } while (piVar11 != 0x80004b0);
    }
    mutex_unlock(0x8000480);
    return;
}


// ===== sym.spec_fence_get_name_dummy @ 0x08002444 (size 20) =====

char * sym.spec_fence_get_name_dummy(void)

{
    return "dummy_fence";
}


// ===== sym.__cfi_check_fail @ 0x08002458 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800249c

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
    //switch table (4 cases) at 0x80008ea
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80024b0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080024d0 (size 640) =====

ulong sym.init_module(void)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _segment.ehdr = __class_create(obj.__this_module,"sync",obj.spec_sync_register_device.__key);
    if (_segment.ehdr == 0) {
        _printk(0x8000597,"spec_sync_register_device","spec_sync_register_device");
    }
    else {
        iVar2 = alloc_chrdev_region(0x8000408,0,1,"");
        if (iVar2 == 0) {
            *0x8000410 = device_create(_obj.sync_dev,0,*0x8000408,obj.sync_dev,"");
            if (*0x8000410 < 0xfffffffffffff001) {
                _segment.ehdr = cdev_alloc();
                if (_segment.ehdr == 0) {
                    _printk(0x800043e,"spec_sync_register_device","spec_sync_register_device");
                }
                else {
                    cdev_init(_segment.ehdr,obj.spec_sync_fops);
                    iVar3 = *0x8000418;
                    uVar1 = *0x8000408;
                    *(*0x8000418 + 0x60) = obj.__this_module;
                    iVar2 = cdev_add(iVar3,uVar1,1);
                    if (iVar2 == 0) {
                        *0x800047c = 1;
                        __mutex_init(0x8000420,"&sync_dev.lock",obj.spec_sync_register_device.__key);
                        __mutex_init(0x8000480,"&sync_dev.l_lock",obj.spec_sync_register_device.__key);
                        *0x80004b0 = 0x80004b0;
                        *0x80004b8 = 0x80004b0;
                        __init_waitqueue_head(0x80004c0,"&sync_dev.wait_queue",obj.spec_sync_register_device.__key);
                        iVar3 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x48);
                        if (iVar3 != 0) {
                            *(iVar3 + 0x40) = 0;
                            dma_fence_init(iVar3,obj.dummy_spec_fence_ops,iVar3 + 0x40,0xfafadadafafadada,
                                           0xefa9ce00efa9ce00);
                            _segment.ehdr = iVar3;
                            return 0;
                        }
                    }
                    else {
                        _printk(obj.spec_sync_register_device.__key,"spec_sync_register_device",
                                "spec_sync_register_device");
                    }
                    cdev_del(_segment.ehdr);
                }
                device_destroy(_obj.sync_dev,*0x8000408);
            }
            else {
                _printk(0x8000507,"spec_sync_register_device","spec_sync_register_device");
            }
            unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
        }
        else {
            _printk(0x800078a,"spec_sync_register_device","spec_sync_register_device");
        }
        class_destroy(_segment.ehdr);
    }
    _printk(0x8000726,"spec_sync_init","spec_sync_init");
    return 0xffffffed;
}


// ===== sym.cleanup_module @ 0x08002750 (size 200) =====

void sym.cleanup_module(void)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    cdev_del(*0x8000418);
    device_destroy(_obj.sync_dev,*0x8000408);
    unregister_chrdev_region(*0x8000408,1);
    class_destroy(_obj.sync_dev);
    if (*0x8000450 != 0) {
        piVar1 = *0x8000450 + 0x38;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        if (iVar2 == 1) {
            DataMemoryBarrier(2,1);
            dma_fence_release();
        }
        else if (iVar2 < 1) {
            refcount_warn_saturate(piVar1,3);
        }
    }
    return;
}

