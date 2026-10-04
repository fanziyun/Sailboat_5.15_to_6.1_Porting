// decompiled from adsp_sleepmon by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 852) =====

//WARNING: Switch with 1 destination removed at 0x08005650

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x19ad56ffbc919b67) {
            if (arg1 < -0x3557318fb8d07b71) {
                if (arg1 == -0x76e7814a8afd6df4) {
                    pcVar2 = sym.debugfs_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                    goto code_r0x080032e0;
                }
                if (arg1 != -0x61278529fef85643) goto code_r0x08005610;
                pcVar2 = sym.sleepmon_rpmsg_callback.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
            }
            else if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
            }
            else {
                if (arg1 != -0x2ee0710dce68437c) goto code_r0x08005610;
                pcVar2 = sym.adspsleepmon_timer_cb.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
            }
        }
        else if (arg1 < -0x890743871a4a53) {
            if (arg1 != -0x19ad56ffbc919b67) {
                if ((arg1 == -0x8dc801903aca538) && ((pcVar1 + -0x8003408 >> 3 | pcVar1 << 0x3d) < 9)) {
                    return;
                }
                goto code_r0x08005610;
            }
            pcVar2 = sym.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
        }
        else if (arg1 == -0x890743871a4a53) {
            pcVar2 = sym.adspsleepmon_device_ioctl.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08005610;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x5233d5bc7887ae44) {
        if (arg1 < 0x2ce63a3287021e91) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.debugfs_attr_read.cfi_jt;
code_r0x080032e0:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08005610;
            }
            if (arg1 != 0x1d7ed092cb04d3f1) goto code_r0x08005610;
            pcVar2 = sym.debugfs_attr_write.cfi_jt;
        }
        else {
            if (arg1 != 0x2ce63a3287021e91) {
                if (arg1 != 0x321969b888d4949e) goto code_r0x08005610;
                pcVar2 = sym.seq_lseek.cfi_jt;
                goto code_r0x080032e0;
            }
            pcVar2 = sym.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
        }
    }
    else if (arg1 < 0x6b141b54612cf75f) {
        if (arg1 == 0x5233d5bc7887ae44) {
            if ((pcVar1 + -0x80033d0 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08005610;
        }
        if (arg1 != 0x641d19c7be126e92) goto code_r0x08005610;
        pcVar2 = sym.adspsleepmon_worker.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
    }
    else {
        if (arg1 == 0x6b141b54612cf75f) {
            pcVar2 = sym.debugfs_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
            goto code_r0x080032e0;
        }
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08005610;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005610:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005664);
    (*pcVar1)();
}


// ===== sym.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003360 (size 8) =====

void sym.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(void)

{
    *0x8000168 = 0;
    *0x8000160 = 0;
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003368 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(*0x8000228,*0x8000220);
    class_destroy(*0x8000228);
    cdev_del(0x80001a0);
    unregister_chrdev_region(*0x8000230,1);
    platform_driver_unregister(reloc.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt);
    debugfs_remove(*0x8000be8);
    unregister_pm_notifier(reloc.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt);
    if (*0x800011d != '\0') {
        unregister_rpmsg_driver(obj.sleepmon_rpmsg_client);
        *0x8000168 = 0;
        *0x8000160 = 0;
    }
    _printk(0x80011cb);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08003370 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(0x8000170,"&g_adspsleepmon.lock",obj.adspsleepmon_init.__key);
    *0x8000120 = 0xf00000005;
    *0x8000128 = 0x50000003c;
    *0x8000118 = 0;
    uVar2 = kthread_create_on_node
                      (sym.adspsleepmon_worker.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0,0xffffffff,
                       "adspsleepmon-worker");
    if (uVar2 < 0xfffffffffffff001) {
        wake_up_process(uVar2);
    }
    _segment.ehdr = uVar2;
    if (uVar2 == 0) {
        _printk(0x8000891);
        iVar1 = -0xc;
    }
    else {
        *0x8000250 = 0;
        iVar1 = alloc_chrdev_region(0x8000230,0,1,"msm_adsp_sleepmon");
        if (iVar1 == 0) {
            cdev_init(0x80001a0,obj.fops);
            _obj.sleepmon_rpmsg_client = obj.__this_module;
            iVar1 = cdev_add(0x80001a0,*0x8000230 & 0xfff00000,1);
            if (iVar1 == 0) {
                _segment.ehdr = __class_create(obj.__this_module,"",obj.adspsleepmon_init.__key);
                if (_segment.ehdr < 0xfffffffffffff001) {
                    *0x8000238 = device_create(_segment.ehdr,0,*0x8000230 & 0xfff00000,0,"msm_adsp_sleepmon");
                    if ((*0x8000238 == 0) || (0xfffffffffffff000 < *0x8000238)) {
                        _printk(0x8000b09);
                        iVar1 = 0;
                    }
                    else {
                        _segment.ehdr = debugfs_create_dir("",0);
                        if (_segment.ehdr == 0) {
                            _printk(0x8000680);
                            iVar1 = 0;
                        }
                        else {
                            iVar1 = __platform_driver_register
                                              (reloc.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                                               obj.__this_module);
                            if (iVar1 == 0) {
                                *0x8000bf8 = debugfs_create_file("",0x124,*0x8000be8,0,obj.master_stats_fops);
                                if (*0x8000bf8 == 0) {
                                    _printk(0x8000ffe);
                                }
                                *0x8000c08 = debugfs_create_file("",0x1a4,*0x8000be8,0,obj.adsp_panic_state_fops);
                                if (*0x8000c08 == 0) {
                                    _printk(0x8000ecb);
                                }
                                *0x8000c10 = debugfs_create_file("",0x124,*0x8000be8,0,
                                                                 obj.read_adsp_panic_state_fops);
                                if (*0x8000c10 == 0) {
                                    _printk(0x8001390);
                                }
                                iVar1 = __register_rpmsg_driver(obj.sleepmon_rpmsg_client,obj.__this_module);
                                if (iVar1 == 0) {
                                    *0x8000140 = 0;
                                    *0x800011d = 1;
                                    __init_swait_queue_head(0x8000148,"&x->wait",obj.adspsleepmon_init.__key);
                                    return 0;
                                }
                                _printk(0x8000ba0,iVar1);
                                return iVar1;
                            }
                            _printk(0x8000e0a,iVar1);
                        }
                        device_destroy(*0x8000228,*0x8000220);
                    }
                    class_destroy(_segment.ehdr);
                }
                else {
                    _printk(0x800173a);
                    iVar1 = 0;
                }
                cdev_del(0x80001a0);
            }
            else {
                _printk(0x8000934);
            }
            unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
        }
        else {
            _printk(0x80011ec);
        }
        platform_driver_unregister(reloc.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt);
    }
    return iVar1;
}


// ===== sym.debugfs_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003378 (size 8) =====

ulong sym.debugfs_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,uint64_t param_2)

{
    *0x8000116 = 0;
    if ((param_2 & 1) != 0) {
        *0x8000116 = *0x8000118;
    }
    *0x8000117 = 0;
    if ((param_2 & 2) != 0) {
        *0x8000117 = *0x8000119;
    }
    return 0;
}


// ===== sym.debugfs_adsp_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003380 (size 8) =====

ulong sym.debugfs_adsp_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,uint32_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x8000168 == 0) || (*0x8000160 < 2)) {
        _printk(0x8000a6d);
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = 0;
        *0x800011a = param_2 & 1;
        *0x800011b = (param_2 & 0xff) >> 1 & 1;
        *0x800011c = (param_2 & 0xff) >> 2 & 1;
    }
    return uVar1;
}


// ===== sym.adspsleepmon_worker.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003388 (size 8) =====

bool sym.adspsleepmon_worker.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(void)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint uVar5;
    uint uVar6;
    uint *puVar7;
    bool bVar8;
    uint32_t uVar9;
    int iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    uint64_t arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    
    *in_x18 = unaff_x30;
    uVar11 = kthread_should_stop();
    do {
        if ((uVar11 & 1) == 0) goto code_r0x080034cc;
        do {
            while( true ) {
                do_exit(0);
code_r0x080034cc:
                uVar11 = kthread_should_stop();
                if ((((uVar11 & 1) != 0) || (*0x8000111 != '\0')) || (*0x8000113 != '\0')) break;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                init_wait_entry(&uStack_a8,0);
                while( true ) {
                    iVar12 = prepare_to_wait_event(obj.adspsleepmon_wq,&uStack_a8,1);
                    uVar11 = kthread_should_stop();
                    if ((((uVar11 & 1) != 0) || (*0x8000111 != '\0')) || (*0x8000113 != '\0')) break;
                    if (iVar12 != 0) goto code_r0x08003544;
                    schedule();
                }
                finish_wait(obj.adspsleepmon_wq,&uStack_a8);
                iVar12 = 0;
code_r0x08003544:
                uVar11 = kthread_should_stop();
                if ((uVar11 & 1) == 0) {
                    if (iVar12 != 0) goto code_r0x080034c4;
                    goto code_r0x0800355c;
                }
            }
            uVar11 = kthread_should_stop();
        } while ((uVar11 & 1) != 0);
code_r0x0800355c:
        _printk(0x8000c82,*0x8000111,*0x8000113);
        mutex_lock(0x8000170);
        if (*0x8000248 == 0) {
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            uVar11 = -*0x8000278;
            if (uVar14 < *0x8000278) {
                uVar11 = ~*0x8000278;
            }
            uVar11 = uVar11 + uVar14;
            if (((*0x8000111 != '\0') || (*0x8000113 == '\0')) || (_segment.ehdr * 19200000 <= uVar11)) {
                puVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar3 = *(puVar7 + 2);
                uVar4 = *(puVar7 + 4);
                uVar1 = *puVar7;
                iVar2 = puVar7[1];
                iVar12 = *(puVar7 + 6);
                if (((iVar2 != 0) && (uVar4 <= uVar3)) && ((uVar3 < uVar14 || (uVar3 <= uVar4)))) goto code_r0x08003794;
                uStack_90 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[3];
                uStack_88 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[4];
                uStack_80 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                uStack_78 = *(_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + 6);
                uStack_a8 = *_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                uStack_a0 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[1];
                uStack_98 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[2];
                if (iVar12 == *0x8000270) {
                    uVar5 = _reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                    uVar6 = *_reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                    _printk(0x800103f);
                    _printk(0x8000cb8,uVar6,uVar5);
                    uVar14 = (iVar12 - *0x8000270) / 0x4b00;
                    auVar15 = _printk(0x8001348,uVar11 / 0x4b00);
                    uVar9 = sym.sleepmon_is_audio_active(&uStack_a8,auVar15,uVar14);
                    sym.sleepmon_get_dsppm_clients();
                    if ((*0x8000116 == '\0' && *0x800011a == '\0') || ((uVar9 & 1) == 0)) {
                        *0x8000138 = *0x8000138 + uVar11;
                        if (*0x8000113 != '\0') {
                            _segment.ehdr = _segment.ehdr + 1;
                        }
                        if ((_segment.ehdr * 19200000 <= *0x8000138) && (*0x800012c <= *0x8000130)) {
                            if (*0x800011c != '\0') {
                                _printk(0x800056b,*0x8000138 / 0x4b00);
                                if (*0x8000168 == 0) {
                                    uVar13 = 0x8000a6d;
                                }
                                else {
                                    uVar13 = 0x8000a6d;
                                    if (1 < *0x8000160) {
                                        uStack_68 = 0x100000004;
                                        uStack_70 = 0x200000010;
                                        iVar10 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_70,0x10);
                                        if (iVar10 == 0) goto code_r0x08003784;
                                        uVar13 = 0x80012f6;
                                    }
                                }
                                _printk(uVar13);
                            }
                            goto code_r0x08003784;
                        }
                    }
                    else if (*0x800011a == '\0') {
                        if (*0x8000116 != '\0') {
                            iVar12 = panic("ADSP sleep issue detected");
                            *extraout_x18 = sym.sleepmon_is_audio_active;
                            uVar9 = *(iVar12 + 0xc);
                            if ((uVar9 == 0) || (*(iVar12 + 0x10) == 0)) {
                                bVar8 = false;
                                uVar9 = *(iVar12 + 0x14);
                            }
                            else {
                                bVar8 = (uVar9 & 0x7f) == 2;
                                _printk(0x8001224,uVar9,bVar8);
                                uVar9 = *(iVar12 + 0x14);
                            }
                            if ((uVar9 != 0) && (*(iVar12 + 0x18) != 0)) {
                                bVar8 = (uVar9 & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                            }
                            if ((*(iVar12 + 0x1c) == 0) || (*(iVar12 + 0x20) == 0)) {
                                uVar9 = *(iVar12 + 0x24);
                            }
                            else {
                                bVar8 = (*(iVar12 + 0x1c) & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                                uVar9 = *(iVar12 + 0x24);
                            }
                            if ((uVar9 != 0) && (*(iVar12 + 0x28) != 0)) {
                                bVar8 = (uVar9 & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                            }
                            if ((*(iVar12 + 0x2c) != 0) && (*(iVar12 + 0x30) != 0)) {
                                bVar8 = (*(iVar12 + 0x2c) & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                            }
                            return bVar8;
                        }
                    }
                    else {
                        _printk(0x8000cec);
                        if (*0x8000168 == 0) {
                            _printk(0x8000a6d);
                        }
                        else {
                            uVar13 = 0x8000a6d;
                            if (1 < *0x8000160) {
                                uStack_68 = 0x100000004;
                                uStack_70 = 0x200000010;
                                iVar10 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_70,0x10);
                                if (iVar10 == 0) goto code_r0x08003794;
                                uVar13 = 0x80012f6;
                            }
                            _printk(uVar13);
                        }
                    }
                }
                else {
code_r0x08003784:
                    *0x8000138 = 0;
                    *0x8000130 = 0;
                }
code_r0x08003794:
                InstructionSynchronizationBarrier();
                *0x8000278 = cntvct_el0;
                *0x8000258 = uVar1;
                *0x800025c = iVar2;
                *0x8000260 = uVar3;
                *0x8000268 = uVar4;
                *0x8000270 = iVar12;
                goto code_r0x080037b8;
            }
code_r0x080036ec:
            mutex_unlock(0x8000170);
            *0x8000113 = '\0';
        }
        else {
            if (*0x8000248 == _segment.ehdr) {
                InstructionSynchronizationBarrier();
                uVar14 = cntvct_el0;
                uVar11 = -*0x80002a0;
                if (uVar14 < *0x80002a0) {
                    uVar11 = ~*0x80002a0;
                }
                if (((*0x8000111 == '\0') && (*0x8000113 != '\0')) && (uVar11 + uVar14 < _segment.ehdr * 19200000))
                goto code_r0x080036ec;
                puVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar3 = *(puVar7 + 2);
                uVar4 = *(puVar7 + 4);
                uVar1 = *puVar7;
                iVar2 = puVar7[1];
                iVar12 = *(puVar7 + 6);
                if (((iVar2 == 0) || (uVar3 < uVar4)) || ((uVar14 <= uVar3 && (uVar4 < uVar3)))) {
                    uStack_90 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[3];
                    uStack_88 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[4];
                    uStack_80 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                    uStack_78 = *(_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + 6);
                    uStack_a8 = *_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                    uStack_a0 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[1];
                    uStack_98 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[2];
                    if (iVar12 == *0x8000298) {
                        uVar5 = _reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                        uVar6 = *_reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                        _printk(0x800114d);
                        _printk(0x8000cb8,uVar6,uVar5);
                        arg2 = (iVar12 - *0x8000298) / 0x4b00;
                        auVar15 = _printk(0x80016b5,(uVar11 + uVar14) / 0x4b00);
                        sym.sleepmon_is_audio_active(&uStack_a8,auVar15,arg2);
                        sym.sleepmon_get_dsppm_clients();
                        uStack_68 = uStack_68 & 0xffffffff;
                        if (*0x8000168 == 0) {
                            uVar13 = 0x800109d;
                        }
                        else {
                            uVar13 = 0x800109d;
                            if (1 < *0x8000160) {
                                uStack_70 = 0x200000010;
                                uStack_68 = CONCAT15(*0x8000117 != '\0' || *0x800011b != '\0',0x100000003);
                                iVar10 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_70,0x10);
                                if (iVar10 == 0) goto code_r0x0800366c;
                                uVar13 = 0x8001544;
                            }
                        }
                        _printk(uVar13);
                    }
                }
code_r0x0800366c:
                InstructionSynchronizationBarrier();
                *0x80002a0 = cntvct_el0;
                *0x8000280 = uVar1;
                *0x8000284 = iVar2;
                *0x8000288 = uVar3;
                *0x8000290 = uVar4;
                *0x8000298 = iVar12;
            }
code_r0x080037b8:
            if (*0x8000111 != '\0') {
                *0x8000111 = 0;
            }
            *0x8000113 = '\0';
            mutex_unlock(0x8000170);
        }
code_r0x080034c4:
        uVar11 = kthread_should_stop();
    } while( true );
}


// ===== sym.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003390 (size 8) =====

ulong sym.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_property(*(param_1 + 0x300),"qcom,enable_panic_lpm",0);
    *0x8000118 = iVar1 != 0;
    iVar1 = of_find_property(*(param_1 + 0x300),"",0);
    *0x8000119 = iVar1 != 0;
    iVar1 = of_find_property(*(param_1 + 0x300),"qcom,enable_adsp_panic_lpm",0);
    *0x800011a = iVar1 != 0;
    iVar1 = of_find_property(*(param_1 + 0x300),"qcom,enable_adsp_panic_lpi",0);
    *0x800011b = iVar1 != 0;
    iVar1 = of_find_property(*(param_1 + 0x300),"qcom,enable_adsp_panic_lpm_overall",0);
    *0x800011c = iVar1 != 0;
    of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,wait_time_lpm",0x8000120,1,0);
    of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,wait_time_lpi",0x8000124,1,0);
    of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,wait_time_lpm_overall",0x8000128,1,0);
    of_property_read_variable_u32_array(*(param_1 + 0x300),"qcom,min_required_resumes",0x800012c,1,0);
    *0x8000116 = 0;
    if (*0x8000118 != '\0' || *0x8000119 != '\0') {
        *0x8000bf0 = debugfs_create_file("panic-state",0x1a4,*0x8000be8,0,obj.panic_state_fops);
        if (*0x8000bf0 == 0) {
            _dev_err(param_1 + 0x10,"Unable to create file in debugfs\n");
        }
    }
    *0x8000c00 = debugfs_create_file("read_panic_state",0x124,*0x8000be8,0,obj.read_panic_state_fops);
    if (*0x8000c00 == 0) {
        _dev_err(param_1 + 0x10,"Unable to create read panic state file in debugfs\n");
    }
    return 0;
}


// ===== sym.adspsleepmon_device_ioctl.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003398 (size 8) =====

//WARNING: Switch with 1 destination removed at 0x08003f48
//WARNING: Switch with 1 destination removed at 0x08004198

int64_t sym.adspsleepmon_device_ioctl.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt
                  (int64_t param_1,int param_2,int64_t param_3)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint32_t uVar5;
    int64_t extraout_x1;
    ulong uVar6;
    int iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar9;
    int64_t *piVar10;
    int iVar11;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (param_2 == -0x3ff7adfe) {
        uStack_50 = 0;
        iVar3 = sym._copy_from_user(&uStack_50,param_3,8);
        if (iVar3 != 0) {
code_r0x08004024:
            iVar3 = -0x1900000000;
            _printk(0x80013d2);
            goto code_r0x08004088;
        }
        if (uStack_50 == 0) {
            iVar3 = -0x1900000000;
            uVar6 = 0x8001765;
            uVar5 = 0;
        }
        else {
            if (uStack_50._4_4_ < 7) {
                if (uStack_50._4_4_ - 1 < 6) {
                    do {
    //WARNING: Do nothing block with infinite loop
                    } while( true );
                }
                iVar3 = 0;
                goto code_r0x08004088;
            }
            iVar3 = -0x1600000000;
            uVar6 = 0x8000f23;
            uVar5 = uStack_50._4_4_;
        }
        uVar1 = 0xc0085202;
    }
    else {
        if (param_2 != -0x3febadff) {
            iVar3 = -0x1900000000;
            _printk(0x800080b);
            goto code_r0x08004088;
        }
        piVar10 = *(param_1 + 0xd8);
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        iVar3 = sym._copy_from_user(&uStack_50,param_3,0x14);
        if (iVar3 != 0) goto code_r0x08004024;
        if (piVar10 == NULL) {
            _printk(0x8000e56);
            iVar3 = -0xc00000000;
            goto code_r0x08004088;
        }
        if (1 < *(piVar10 + 0x14)) {
            _printk(0x8001400,0xc0145201);
            iVar3 = -0x2a00000000;
            goto code_r0x08004088;
        }
        if (uStack_50 == 0) {
            iVar3 = -0x1900000000;
            uVar6 = 0x8001765;
            uVar5 = 0;
        }
        else {
            if (uStack_50._4_4_ < 6) {
                mutex_lock(0x8000170);
                piVar8 = _segment.ehdr;
                if (*(piVar10 + 0x14) == 0) {
                    *piVar10 = _segment.ehdr;
                    if (piVar8 != NULL) {
                        piVar8[1] = piVar10;
                    }
                    *0x8000250 = piVar10;
                    piVar10[1] = 0x8000250;
                    *(piVar10 + 0x14) = 1;
                }
                if (uStack_50._4_4_ - 1 < 5) {
                    do {
    //WARNING: Do nothing block with infinite loop
                    } while( true );
                }
                _raw_spin_lock(piVar10 + 2);
                if (_segment.ehdr == NULL) {
                    iVar9 = 0;
                    iVar11 = 0;
                }
                else {
                    iVar11 = 0;
                    iVar9 = 0;
                    piVar8 = _segment.ehdr;
                    do {
                        if (*(piVar8 + 0x14) != 0) {
                            iVar11 = piVar8[3] + iVar11;
                            iVar9 = *(piVar8 + 0x1c) + iVar9;
                        }
                        piVar8 = *piVar8;
                    } while (piVar8 != NULL);
                }
                _raw_spin_unlock(piVar10 + 2);
                if ((iVar11 == 0) || (iVar11 == iVar9)) {
                    if (iVar11 == 0) {
                        *0x8000268 = (*0x80002a8)[2];
                        *0x8000270 = (*0x80002a8)[3];
                        *0x8000258 = **0x80002a8;
                        *0x8000260 = (*0x80002a8)[1];
                        InstructionSynchronizationBarrier();
                        *0x8000278 = cntvct_el0;
                        iVar7 = *0x8000120;
                    }
                    else {
                        *0x8000280 = **0x80002b0;
                        *0x8000288 = (*0x80002b0)[1];
                        *0x8000290 = (*0x80002b0)[2];
                        *0x8000298 = (*0x80002b0)[3];
                        InstructionSynchronizationBarrier();
                        *0x80002a0 = cntvct_el0;
                        *0x8000138 = 0;
                        *0x8000130 = 0;
                        iVar7 = *0x8000124;
                    }
                    mod_timer(obj.adspsleep_timer,_debugfs_attr_read + iVar7 * 0xfa);
                    uVar6 = 1;
                    *0x8000112 = '\x01';
                }
                else if (*0x8000112 == '\0') {
                    uVar6 = 0;
                }
                else {
                    del_timer(obj.adspsleep_timer);
                    uVar6 = 0;
                    *0x8000112 = '\0';
                    *0x8000138 = 0;
                    *0x8000130 = 0;
                }
                *0x8000248 = iVar11;
                *0x800024c = iVar9;
                _printk(0x8000c26,iVar11,iVar9,uVar6);
                mutex_unlock(0x8000170);
                iVar3 = 0;
                goto code_r0x08004088;
            }
            iVar3 = -0x1600000000;
            uVar6 = 0x8000f23;
            uVar5 = uStack_50._4_4_;
        }
        uVar1 = 0xc0145201;
    }
    _printk(uVar6,uVar5,uVar1);
code_r0x08004088:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = sym.adspsleepmon_device_open;
        if ((*0x8000114 == '\0') && (sym.adspsleepmon_smem_init(), *0x8000114 == '\0')) {
            iVar3 = 0xffffffed;
        }
        else {
            iVar3 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar3 = 0x30;
            }
            puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x20);
            iVar3 = 0xfffffff4;
            if ((puVar4 != NULL) && (puVar4 < 0xfffffffffffff001)) {
                iVar3 = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                *(extraout_x1 + 0xd8) = puVar4;
            }
        }
        return iVar3;
    }
    return iVar3 >> 0x20;
}


// ===== sym.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033a0 (size 8) =====

void sym.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    of_platform_populate(*(param_1 + 0x2f0),0,0,param_1);
    _segment.ehdr = param_1;
    sym.adspsleepmon_smem_init();
    return;
}


// ===== sym.debugfs_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033a8 (size 8) =====

ulong sym.debugfs_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = *0x8000116 | *0x8000117 << 1;
    return 0;
}


// ===== sym.debugfs_adsp_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033b0 (size 8) =====

ulong sym.debugfs_adsp_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,uint64_t *param_2)

{
    *param_2 = *0x800011a | *0x800011b << 1 | *0x800011c << 2;
    return 0;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x080033b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.seq_read.cfi_jt @ 0x080033c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.sleepmon_rpmsg_callback.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033c8 (size 8) =====

void sym.sleepmon_rpmsg_callback.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if ((param_2 == 0) || (param_3 < 0x930)) {
        _dev_err(param_1,"Invalid message in rpmsg callback, length: %d, expected: %lu\n",param_3,0x930);
        uVar4 = 0xffffffea;
    }
    else {
        iVar3 = *(param_2 + 8);
        if (iVar3 == 1) {
            *0x8000160 = *(param_2 + 4);
            _printk(0x80005dd);
            if (*0x8000114 != '\0') {
                *0x8000248 = 0;
                del_timer(obj.adspsleep_timer);
                *0x8000112 = 0;
                *0x8000138 = 0;
                *0x8000130 = 0;
                *0x8000258 = **0x80002a8;
                *0x8000260 = (*0x80002a8)[1];
                *0x8000268 = (*0x80002a8)[2];
                *0x8000270 = (*0x80002a8)[3];
                InstructionSynchronizationBarrier();
                *0x8000278 = cntvct_el0;
                iVar3 = *(param_2 + 8);
                goto joined_r0x080055c0;
            }
        }
        else {
joined_r0x080055c0:
            if (iVar3 == 2) {
                *0x8000bb8 = 0;
                memcpy(reloc.sleepmon_rpmsg_callback.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,param_2 + 0x10,0x920);
                complete(0x8000140);
                iVar3 = *(param_2 + 8);
            }
            if (iVar3 == 5) {
                if (*0x8000117 != '\0') goto code_r0x080055f4;
                if (*0x800011b == '\0') goto code_r0x080054d8;
                uVar4 = 0x8000a6d;
                if ((*0x8000168 == 0) || (*0x8000160 < 2)) {
code_r0x080055e8:
                    _printk(uVar4);
                }
                else {
                    uStack_38 = 0x200000010;
                    uStack_30 = 0x100000004;
                    iVar3 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_38,0x10);
                    if (iVar3 != 0) {
                        uVar4 = 0x80012f6;
                        goto code_r0x080055e8;
                    }
                }
                iVar3 = *(param_2 + 8);
            }
            if (iVar3 == 6) {
                _printk(0x8001629,param_2 + 0x10,*(param_2 + 0x54));
            }
        }
code_r0x080054d8:
        uVar4 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x080055f4:
    _printk(0x80008f8);
    auVar6 = panic("ADSP_SLEEPMON: ADSP LPI issue detected");
    puVar5 = auVar6._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar5 != NULL) {
        switch(*puVar5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x8005664);
    (*pcVar2)();
}


// ===== sym.read_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033d0 (size 8) =====

ulong sym.read_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_puts(param_1,*((((*0x8000116 | *0x8000117 << 1) ^ 2) & 0xff) * 8 + 0x8002090));
    return 0;
}


// ===== sym.master_stats_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033d8 (size 8) =====

ulong sym.master_stats_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if ((_segment.ehdr != 0) && (CONCAT44(*0x8000004,_segment.ehdr) != 0)) {
        uStack_48 = 0x200000010;
        uStack_40 = 0x100000002;
        iVar2 = rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_48,0x10);
        if (iVar2 == 0) {
            wait_for_completion(0x8000140);
            sym.print_complete_dsppm_info();
        }
        else {
            _printk(0x80008c2,iVar2);
        }
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        seq_puts(param_1,"");
        seq_printf(param_1,"Core clock: %d\n",*CONCAT44(*0x8000004,_segment.ehdr));
        seq_printf(param_1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(param_1,"Ib vote: %llu\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0xc));
        iVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
        if (iVar2 == 0) {
            iVar2 = -1;
        }
        seq_printf(param_1,"Sleep latency: %u\n",iVar2);
        seq_printf(param_1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x18));
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        seq_puts(param_1,"\nDSPPM stats:\n\n");
        seq_printf(param_1,"Version: %u\n",*CONCAT44(*0x8000004,_segment.ehdr));
        seq_printf(param_1,"Sleep latency: %u\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(param_1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0xc),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x14),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18));
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x1c),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x20));
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x24),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
        seq_printf(param_1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x30));
    }
    pcVar1 = _single_release;
    iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar3 != 0) {
        iVar5 = *(iVar3 + 0x18);
        if (*(iVar3 + 0x10) < *(iVar3 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x8000340);
            iVar3 = (*pcVar1)();
            iVar5 = (iVar3 + iVar5) - *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
        }
        seq_puts(param_1,"\nLPM stats:\n\n");
        seq_printf(param_1,"Count = %u\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(param_1,"Last Entered At = %llu\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        seq_printf(param_1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar5);
    }
    pcVar1 = _single_release;
    iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar3 != 0) {
        iVar5 = *(iVar3 + 0x18);
        if (*(iVar3 + 0x10) < *(iVar3 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x8000360);
            iVar3 = (*pcVar1)();
            iVar5 = (iVar3 + iVar5) - *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
        }
        seq_puts(param_1,"\nLPI stats:\n\n");
        seq_printf(param_1,"Count = %u\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(param_1,"Last Entered At = %llu\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        seq_printf(param_1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        seq_printf(param_1,"Accumulated Duration = %llu\n",iVar5);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.adsp_panic_state_fops_open;
    uVar4 = simple_attr_open(auVar6._0_8_,auVar6._8_8_,
                             sym.debugfs_adsp_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                             sym.debugfs_adsp_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0x8000a2d);
    return uVar4;
}


// ===== sym.read_adsp_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033e0 (size 8) =====

ulong sym.read_adsp_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = "";
    if ((*0x8000168 != 0) && (1 < *0x8000160)) {
        uVar2 = *0x800011a | *0x800011b << 1;
        uVar1 = *0x800011c << 2;
        pcVar3 = "";
        if ((*0x800011a & 1) != 0) {
            pcVar3 = "\nADSP panic on LPM violation enabled\n";
        }
        seq_puts(param_1,pcVar3);
        pcVar3 = "\nADSP panic on LPI violation is disabled\n";
        if ((uVar2 & 2) != 0) {
            pcVar3 = "";
        }
        seq_puts(param_1,pcVar3);
        pcVar3 = "\nADSP panic for LPM overall violation is disabled\n";
        if (((uVar2 | uVar1) & 4) != 0) {
            pcVar3 = "";
        }
    }
    seq_puts(param_1,pcVar3);
    return 0;
}


// ===== sym.adspsleepmon_timer_cb.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033e8 (size 8) =====

void sym.adspsleepmon_timer_cb.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000111 = 1;
    __wake_up(obj.adspsleepmon_wq,1,1,0);
    return;
}


// ===== sym.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x080033f0 (size 8) =====

ulong sym.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 4) {
        _printk(0x8000aa2);
        if ((*0x8000248 == 0) || (*0x8000248 == *0x800024c)) {
            *0x8000113 = 1;
            __wake_up(obj.adspsleepmon_wq,1,1,0);
        }
    }
    return 0;
}


// ===== sym.seq_lseek.cfi_jt @ 0x080033f8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.seq_lseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.no_llseek.cfi_jt @ 0x08003400 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.adspsleepmon_device_release.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003408 (size 8) =====

ulong sym.adspsleepmon_device_release.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int iVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(param_2 + 0xd8);
    if (piVar6 == NULL) {
        uVar3 = 0xffffffc3;
    }
    else {
        mutex_lock(0x8000170);
        _raw_spin_lock(piVar6 + 2);
        piVar4 = piVar6[1];
        if (piVar4 != NULL) {
            iVar5 = *piVar6;
            *piVar4 = iVar5;
            if (iVar5 != 0) {
                *(iVar5 + 8) = piVar4;
            }
            *piVar6 = 0;
            piVar6[1] = 0;
        }
        piVar4 = CONCAT44(*0x8000004,_segment.ehdr);
        if (piVar4 == NULL) {
            iVar7 = 0;
            iVar8 = 0;
        }
        else {
            iVar8 = 0;
            iVar7 = 0;
            do {
                if (*(piVar4 + 0x14) != 0) {
                    iVar8 = piVar4[3] + iVar8;
                    iVar7 = *(piVar4 + 0x1c) + iVar7;
                }
                piVar4 = *piVar4;
            } while (piVar4 != NULL);
        }
        _raw_spin_unlock(piVar6 + 2);
        kfree(piVar6);
        iVar1 = *0x8000248;
        iVar2 = *0x800024c;
        if (iVar8 != _segment.ehdr) {
            iVar1 = iVar8;
            iVar2 = iVar7;
            if ((iVar8 == 0) || (iVar8 == iVar7)) {
                if (iVar8 == 0) {
                    *0x8000268 = (*0x80002a8)[2];
                    *0x8000270 = (*0x80002a8)[3];
                    *0x8000258 = **0x80002a8;
                    *0x8000260 = (*0x80002a8)[1];
                    InstructionSynchronizationBarrier();
                    *0x8000278 = cntvct_el0;
                    iVar8 = *0x8000120;
                }
                else {
                    *0x8000280 = **0x80002b0;
                    *0x8000288 = (*0x80002b0)[1];
                    *0x8000290 = (*0x80002b0)[2];
                    *0x8000298 = (*0x80002b0)[3];
                    InstructionSynchronizationBarrier();
                    *0x80002a0 = cntvct_el0;
                    *0x8000138 = 0;
                    *0x8000130 = 0;
                    iVar8 = *0x8000124;
                }
                mod_timer(obj.adspsleep_timer,_debugfs_attr_read + iVar8 * 0xfa);
                *0x8000112 = '\x01';
            }
            else if (*0x8000112 != '\0') {
                del_timer(obj.adspsleep_timer);
                *0x8000112 = '\0';
                *0x8000138 = 0;
                *0x8000130 = 0;
            }
        }
        *0x800024c = iVar2;
        *0x8000248 = iVar1;
        mutex_unlock(0x8000170);
        _printk(0x80015c1,*0x8000248,*0x800024c,*0x8000112);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.panic_state_fops_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003410 (size 8) =====

void sym.panic_state_fops_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debugfs_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                     sym.debugfs_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0x8000a2d);
    return;
}


// ===== sym.read_adsp_panic_state_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003418 (size 8) =====

void sym.read_adsp_panic_state_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.read_adsp_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.single_release.cfi_jt @ 0x08003420 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.single_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.simple_attr_release.cfi_jt @ 0x08003428 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.adspsleepmon_device_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003430 (size 8) =====

ulong sym.adspsleepmon_device_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x8000114 == '\0') && (sym.adspsleepmon_smem_init(), *0x8000114 == '\0')) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x20);
        uVar3 = 0xfffffff4;
        if ((puVar2 != NULL) && (puVar2 < 0xfffffffffffff001)) {
            uVar3 = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            *(param_2 + 0xd8) = puVar2;
        }
    }
    return uVar3;
}


// ===== sym.read_panic_state_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003438 (size 8) =====

void sym.read_panic_state_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.read_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.adsp_panic_state_fops_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003440 (size 8) =====

void sym.adsp_panic_state_fops_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debugfs_adsp_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                     sym.debugfs_adsp_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0x8000a2d);
    return;
}


// ===== sym.master_stats_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt @ 0x08003448 (size 8) =====

void sym.master_stats_open.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt(int64_t param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(param_2,sym.master_stats_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,*(param_1 + 0x2d8));
    return;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08003450 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.adspsleepmon_worker @ 0x08003458 (size 1720) =====

bool sym.adspsleepmon_worker(void)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint uVar5;
    uint uVar6;
    uint *puVar7;
    bool bVar8;
    uint32_t uVar9;
    int iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    uint64_t arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    uint uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    
    *in_x18 = unaff_x30;
    uVar11 = kthread_should_stop();
    do {
        if ((uVar11 & 1) == 0) goto code_r0x080034cc;
        do {
            while( true ) {
                do_exit(0);
code_r0x080034cc:
                uVar11 = kthread_should_stop();
                if ((((uVar11 & 1) != 0) || (*0x8000111 != '\0')) || (*0x8000113 != '\0')) break;
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                init_wait_entry(&uStack_a8,0);
                while( true ) {
                    iVar12 = prepare_to_wait_event(obj.adspsleepmon_wq,&uStack_a8,1);
                    uVar11 = kthread_should_stop();
                    if ((((uVar11 & 1) != 0) || (*0x8000111 != '\0')) || (*0x8000113 != '\0')) break;
                    if (iVar12 != 0) goto code_r0x08003544;
                    schedule();
                }
                finish_wait(obj.adspsleepmon_wq,&uStack_a8);
                iVar12 = 0;
code_r0x08003544:
                uVar11 = kthread_should_stop();
                if ((uVar11 & 1) == 0) {
                    if (iVar12 != 0) goto code_r0x080034c4;
                    goto code_r0x0800355c;
                }
            }
            uVar11 = kthread_should_stop();
        } while ((uVar11 & 1) != 0);
code_r0x0800355c:
        _printk(0x8000c82,*0x8000111,*0x8000113);
        mutex_lock(0x8000170);
        if (*0x8000248 == 0) {
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            uVar11 = -*0x8000278;
            if (uVar14 < *0x8000278) {
                uVar11 = ~*0x8000278;
            }
            uVar11 = uVar11 + uVar14;
            if (((*0x8000111 != '\0') || (*0x8000113 == '\0')) || (_segment.ehdr * 19200000 <= uVar11)) {
                puVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar3 = *(puVar7 + 2);
                uVar4 = *(puVar7 + 4);
                uVar1 = *puVar7;
                iVar2 = puVar7[1];
                iVar12 = *(puVar7 + 6);
                if (((iVar2 != 0) && (uVar4 <= uVar3)) && ((uVar3 < uVar14 || (uVar3 <= uVar4)))) goto code_r0x08003794;
                uStack_90 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[3];
                uStack_88 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[4];
                uStack_80 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                uStack_78 = *(_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + 6);
                uStack_a8 = *_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                uStack_a0 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[1];
                uStack_98 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[2];
                if (iVar12 == *0x8000270) {
                    uVar5 = _reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                    uVar6 = *_reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                    _printk(0x800103f);
                    _printk(0x8000cb8,uVar6,uVar5);
                    uVar14 = (iVar12 - *0x8000270) / 0x4b00;
                    auVar15 = _printk(0x8001348,uVar11 / 0x4b00);
                    uVar9 = sym.sleepmon_is_audio_active(&uStack_a8,auVar15,uVar14);
                    sym.sleepmon_get_dsppm_clients();
                    if ((*0x8000116 == '\0' && *0x800011a == '\0') || ((uVar9 & 1) == 0)) {
                        *0x8000138 = *0x8000138 + uVar11;
                        if (*0x8000113 != '\0') {
                            _segment.ehdr = _segment.ehdr + 1;
                        }
                        if ((_segment.ehdr * 19200000 <= *0x8000138) && (*0x800012c <= *0x8000130)) {
                            if (*0x800011c != '\0') {
                                _printk(0x800056b,*0x8000138 / 0x4b00);
                                if (*0x8000168 == 0) {
                                    uVar13 = 0x8000a6d;
                                }
                                else {
                                    uVar13 = 0x8000a6d;
                                    if (1 < *0x8000160) {
                                        uStack_68 = 0x100000004;
                                        uStack_70 = 0x200000010;
                                        iVar10 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_70,0x10);
                                        if (iVar10 == 0) goto code_r0x08003784;
                                        uVar13 = 0x80012f6;
                                    }
                                }
                                _printk(uVar13);
                            }
                            goto code_r0x08003784;
                        }
                    }
                    else if (*0x800011a == '\0') {
                        if (*0x8000116 != '\0') {
                            iVar12 = panic("ADSP sleep issue detected");
                            *extraout_x18 = sym.sleepmon_is_audio_active;
                            uVar9 = *(iVar12 + 0xc);
                            if ((uVar9 == 0) || (*(iVar12 + 0x10) == 0)) {
                                bVar8 = false;
                                uVar9 = *(iVar12 + 0x14);
                            }
                            else {
                                bVar8 = (uVar9 & 0x7f) == 2;
                                _printk(0x8001224,uVar9,bVar8);
                                uVar9 = *(iVar12 + 0x14);
                            }
                            if ((uVar9 != 0) && (*(iVar12 + 0x18) != 0)) {
                                bVar8 = (uVar9 & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                            }
                            if ((*(iVar12 + 0x1c) == 0) || (*(iVar12 + 0x20) == 0)) {
                                uVar9 = *(iVar12 + 0x24);
                            }
                            else {
                                bVar8 = (*(iVar12 + 0x1c) & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                                uVar9 = *(iVar12 + 0x24);
                            }
                            if ((uVar9 != 0) && (*(iVar12 + 0x28) != 0)) {
                                bVar8 = (uVar9 & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                            }
                            if ((*(iVar12 + 0x2c) != 0) && (*(iVar12 + 0x30) != 0)) {
                                bVar8 = (*(iVar12 + 0x2c) & 0x7f) == 2 | bVar8;
                                _printk(0x8001224);
                            }
                            return bVar8;
                        }
                    }
                    else {
                        _printk(0x8000cec);
                        if (*0x8000168 == 0) {
                            _printk(0x8000a6d);
                        }
                        else {
                            uVar13 = 0x8000a6d;
                            if (1 < *0x8000160) {
                                uStack_68 = 0x100000004;
                                uStack_70 = 0x200000010;
                                iVar10 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_70,0x10);
                                if (iVar10 == 0) goto code_r0x08003794;
                                uVar13 = 0x80012f6;
                            }
                            _printk(uVar13);
                        }
                    }
                }
                else {
code_r0x08003784:
                    *0x8000138 = 0;
                    *0x8000130 = 0;
                }
code_r0x08003794:
                InstructionSynchronizationBarrier();
                *0x8000278 = cntvct_el0;
                *0x8000258 = uVar1;
                *0x800025c = iVar2;
                *0x8000260 = uVar3;
                *0x8000268 = uVar4;
                *0x8000270 = iVar12;
                goto code_r0x080037b8;
            }
code_r0x080036ec:
            mutex_unlock(0x8000170);
            *0x8000113 = '\0';
        }
        else {
            if (*0x8000248 == _segment.ehdr) {
                InstructionSynchronizationBarrier();
                uVar14 = cntvct_el0;
                uVar11 = -*0x80002a0;
                if (uVar14 < *0x80002a0) {
                    uVar11 = ~*0x80002a0;
                }
                if (((*0x8000111 == '\0') && (*0x8000113 != '\0')) && (uVar11 + uVar14 < _segment.ehdr * 19200000))
                goto code_r0x080036ec;
                puVar7 = CONCAT44(*0x8000004,_segment.ehdr);
                uVar3 = *(puVar7 + 2);
                uVar4 = *(puVar7 + 4);
                uVar1 = *puVar7;
                iVar2 = puVar7[1];
                iVar12 = *(puVar7 + 6);
                if (((iVar2 == 0) || (uVar3 < uVar4)) || ((uVar14 <= uVar3 && (uVar4 < uVar3)))) {
                    uStack_90 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[3];
                    uStack_88 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[4];
                    uStack_80 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                    uStack_78 = *(_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + 6);
                    uStack_a8 = *_reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                    uStack_a0 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[1];
                    uStack_98 = _reloc.sleepmon_rpmsg_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[2];
                    if (iVar12 == *0x8000298) {
                        uVar5 = _reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt[5];
                        uVar6 = *_reloc.sleepmon_rpmsg_remove.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt;
                        _printk(0x800114d);
                        _printk(0x8000cb8,uVar6,uVar5);
                        arg2 = (iVar12 - *0x8000298) / 0x4b00;
                        auVar15 = _printk(0x80016b5,(uVar11 + uVar14) / 0x4b00);
                        sym.sleepmon_is_audio_active(&uStack_a8,auVar15,arg2);
                        sym.sleepmon_get_dsppm_clients();
                        uStack_68 = uStack_68 & 0xffffffff;
                        if (*0x8000168 == 0) {
                            uVar13 = 0x800109d;
                        }
                        else {
                            uVar13 = 0x800109d;
                            if (1 < *0x8000160) {
                                uStack_70 = 0x200000010;
                                uStack_68 = CONCAT15(*0x8000117 != '\0' || *0x800011b != '\0',0x100000003);
                                iVar10 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_70,0x10);
                                if (iVar10 == 0) goto code_r0x0800366c;
                                uVar13 = 0x8001544;
                            }
                        }
                        _printk(uVar13);
                    }
                }
code_r0x0800366c:
                InstructionSynchronizationBarrier();
                *0x80002a0 = cntvct_el0;
                *0x8000280 = uVar1;
                *0x8000284 = iVar2;
                *0x8000288 = uVar3;
                *0x8000290 = uVar4;
                *0x8000298 = iVar12;
            }
code_r0x080037b8:
            if (*0x8000111 != '\0') {
                *0x8000111 = 0;
            }
            *0x8000113 = '\0';
            mutex_unlock(0x8000170);
        }
code_r0x080034c4:
        uVar11 = kthread_should_stop();
    } while( true );
}


// ===== sym.sleepmon_is_audio_active @ 0x08003b10 (size 308) =====

bool sym.sleepmon_is_audio_active(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    bool bVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0xc);
    if ((uVar1 == 0) || (*(arg1 + 0x10) == 0)) {
        bVar2 = false;
        uVar1 = *(arg1 + 0x14);
    }
    else {
        bVar2 = (uVar1 & 0x7f) == 2;
        noname_1 = _printk(0x8001224,uVar1,bVar2);
        uVar1 = *(arg1 + 0x14);
    }
    if ((uVar1 != 0) && (*(arg1 + 0x18) != 0)) {
        bVar2 = (uVar1 & 0x7f) == 2 | bVar2;
        noname_1 = _printk(noname_1,0x8001224);
    }
    if ((*(arg1 + 0x1c) == 0) || (*(arg1 + 0x20) == 0)) {
        uVar1 = *(arg1 + 0x24);
    }
    else {
        bVar2 = (*(arg1 + 0x1c) & 0x7f) == 2 | bVar2;
        noname_1 = _printk(noname_1,0x8001224);
        uVar1 = *(arg1 + 0x24);
    }
    if ((uVar1 != 0) && (*(arg1 + 0x28) != 0)) {
        bVar2 = (uVar1 & 0x7f) == 2 | bVar2;
        noname_1 = _printk(noname_1,0x8001224);
    }
    if ((*(arg1 + 0x2c) != 0) && (*(arg1 + 0x30) != 0)) {
        bVar2 = (*(arg1 + 0x2c) & 0x7f) == 2 | bVar2;
        _printk(noname_1,0x8001224);
    }
    return bVar2;
}


// ===== sym.sleepmon_get_dsppm_clients @ 0x08003c44 (size 236) =====

void sym.sleepmon_get_dsppm_clients(void)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    ulong in_stack_ffffffffffffff78;
    uint uVar4;
    uint uVar5;
    uchar *puVar6;
    code *pcVar7;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    uVar4 = in_stack_ffffffffffffff78 >> 0x20;
    *in_x18 = unaff_x30;
    puVar6 = &stack0xffffffffffffffe0;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    if (_segment.ehdr != 0) {
        if (CONCAT44(*0x8000004,_segment.ehdr) == 0) {
            iVar1 = -0x16;
        }
        else {
            uStack_38 = 0x200000010;
            uStack_30 = 0x100000002;
            iVar1 = rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_38,0x10);
            if (iVar1 == 0) {
                iVar2 = wait_for_completion_timeout(0x8000140,0x19);
                if (iVar2 == 0) {
                    _printk(0x800106c);
                }
                sym.print_complete_dsppm_info();
                goto code_r0x08003cc0;
            }
            _printk(0x80008c2,iVar1);
        }
        _printk(0x80009e4,iVar1);
    }
code_r0x08003cc0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.print_complete_dsppm_info;
    pcVar7 = sym.print_complete_dsppm_info;
    if (*0x8000bb8 == '\x03') {
        _printk(0x800157d);
    }
    else if (*0x8000bb8 == '\x02') {
        _printk(0x8001665);
    }
    else if (*0x8000bb8 == '\x01') {
        uVar5 = *0x8000b98;
        _printk(0x8000959,*0x80002d0,*0x8000bbc,*0x8000b58,*0x8000b5c,*0x8000b60,*0x8000b64,*0x8000b68,
                *0x8000b70,*0x8000b78,*0x8000b80,*0x8000b88,*0x8000b8c,CONCAT44(uVar4,*0x8000b90),*0x8000b94,
                *0x8000b98,puVar6,sym.print_complete_dsppm_info);
        if (*0x8000bbc != 0) {
            iVar2 = 0;
            uVar3 = 0;
            do {
                if (iVar2 == 0x880) {
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x5512,0x8003ec4);
                    (*pcVar7)();
                }
                _printk(0x800060a,uVar3 & 0xffffffff,obj.adspsleepmon_wq + iVar2,*(obj.adspsleep_timer + iVar2),
                        *(iVar2 + 0x80002f8),
                        *(reloc.adspsleepmon_timer_cb.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + iVar2),
                        *(iVar2 + 0x800030c),*(iVar2 + 0x8000310),*(iVar2 + 0x8000314),*(iVar2 + 0x8000318),
                        *(iVar2 + 0x8000320),
                        *(reloc.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + iVar2),
                        *(iVar2 + 0x8000304),iVar2 + 0x800032c,*(iVar2 + 0x8000340),uVar5,puVar6,pcVar7);
                uVar3 = uVar3 + 1;
                iVar2 = iVar2 + 0x88;
            } while (uVar3 < *0x8000bbc);
        }
    }
    else {
        _printk(0x80012bb);
    }
    return;
}


// ===== sym.print_complete_dsppm_info @ 0x08003d30 (size 404) =====

void sym.print_complete_dsppm_info(void)

{
    code *pcVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    ulong unaff_x30;
    uint uVar4;
    
    *in_x18 = unaff_x30;
    if (*0x8000bb8 == '\x03') {
        _printk(0x800157d);
    }
    else if (*0x8000bb8 == '\x02') {
        _printk(0x8001665);
    }
    else if (*0x8000bb8 == '\x01') {
        uVar4 = *0x8000b98;
        _printk(0x8000959,*0x80002d0,*0x8000bbc,*0x8000b58,*0x8000b5c,*0x8000b60,*0x8000b64,*0x8000b68,
                *0x8000b70,*0x8000b78,*0x8000b80,*0x8000b88,*0x8000b8c,*0x8000b90,*0x8000b94,*0x8000b98);
        if (*0x8000bbc != 0) {
            iVar3 = 0;
            uVar2 = 0;
            do {
                if (iVar3 == 0x880) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8003ec4);
                    (*pcVar1)();
                }
                _printk(0x800060a,uVar2 & 0xffffffff,obj.adspsleepmon_wq + iVar3,*(obj.adspsleep_timer + iVar3),
                        *(iVar3 + 0x80002f8),
                        *(reloc.adspsleepmon_timer_cb.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + iVar3),
                        *(iVar3 + 0x800030c),*(iVar3 + 0x8000310),*(iVar3 + 0x8000314),*(iVar3 + 0x8000318),
                        *(iVar3 + 0x8000320),
                        *(reloc.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt + iVar3),
                        *(iVar3 + 0x8000304),iVar3 + 0x800032c,*(iVar3 + 0x8000340),uVar4);
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0x88;
            } while (uVar2 < *0x8000bbc);
        }
    }
    else {
        _printk(0x80012bb);
    }
    return;
}


// ===== sym.adspsleepmon_device_ioctl @ 0x08003ec4 (size 1244) =====

//WARNING: Switch with 1 destination removed at 0x08003f48
//WARNING: Switch with 1 destination removed at 0x08004198

int64_t sym.adspsleepmon_device_ioctl(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint32_t uVar5;
    int64_t extraout_x1;
    ulong uVar6;
    int iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar9;
    int64_t *piVar10;
    int iVar11;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (arg2 == 0xc0085202) {
        uStack_50 = 0;
        iVar3 = sym._copy_from_user(&uStack_50,arg3,8);
        if (iVar3 != 0) {
code_r0x08004024:
            iVar3 = -0x1900000000;
            _printk(0x80013d2);
            goto code_r0x08004088;
        }
        if (uStack_50 == 0) {
            iVar3 = -0x1900000000;
            uVar6 = 0x8001765;
            uVar5 = 0;
        }
        else {
            if (uStack_50._4_4_ < 7) {
                if (uStack_50._4_4_ - 1 < 6) {
                    do {
    //WARNING: Do nothing block with infinite loop
    //switch table (5 cases) at 0x8000394
                    } while( true );
                }
                iVar3 = 0;
                goto code_r0x08004088;
            }
            iVar3 = -0x1600000000;
            uVar6 = 0x8000f23;
            uVar5 = uStack_50._4_4_;
        }
        uVar1 = 0xc0085202;
    }
    else {
        if (arg2 != 0xc0145201) {
            iVar3 = -0x1900000000;
            _printk(0x800080b);
            goto code_r0x08004088;
        }
        piVar10 = *(arg1 + 0xd8);
        uStack_40 = 0;
        uStack_50 = 0;
        uStack_48 = 0;
        iVar3 = sym._copy_from_user(&uStack_50,arg3,0x14);
        if (iVar3 != 0) goto code_r0x08004024;
        if (piVar10 == NULL) {
            _printk(0x8000e56);
            iVar3 = -0xc00000000;
            goto code_r0x08004088;
        }
        if (1 < *(piVar10 + 0x14)) {
            _printk(0x8001400,0xc0145201);
            iVar3 = -0x2a00000000;
            goto code_r0x08004088;
        }
        if (uStack_50 == 0) {
            iVar3 = -0x1900000000;
            uVar6 = 0x8001765;
            uVar5 = 0;
        }
        else {
            if (uStack_50._4_4_ < 6) {
                mutex_lock(0x8000170);
                piVar8 = _segment.ehdr;
                if (*(piVar10 + 0x14) == 0) {
                    *piVar10 = _segment.ehdr;
                    if (piVar8 != NULL) {
                        piVar8[1] = piVar10;
                    }
                    *0x8000250 = piVar10;
                    piVar10[1] = 0x8000250;
                    *(piVar10 + 0x14) = 1;
                }
                if (uStack_50._4_4_ - 1 < 5) {
                    do {
    //WARNING: Do nothing block with infinite loop
    //switch table (5 cases) at 0x8000380
                    } while( true );
                }
                _raw_spin_lock(piVar10 + 2);
                if (_segment.ehdr == NULL) {
                    iVar9 = 0;
                    iVar11 = 0;
                }
                else {
                    iVar11 = 0;
                    iVar9 = 0;
                    piVar8 = _segment.ehdr;
                    do {
                        if (*(piVar8 + 0x14) != 0) {
                            iVar11 = piVar8[3] + iVar11;
                            iVar9 = *(piVar8 + 0x1c) + iVar9;
                        }
                        piVar8 = *piVar8;
                    } while (piVar8 != NULL);
                }
                _raw_spin_unlock(piVar10 + 2);
                if ((iVar11 == 0) || (iVar11 == iVar9)) {
                    if (iVar11 == 0) {
                        *0x8000268 = (*0x80002a8)[2];
                        *0x8000270 = (*0x80002a8)[3];
                        *0x8000258 = **0x80002a8;
                        *0x8000260 = (*0x80002a8)[1];
                        InstructionSynchronizationBarrier();
                        *0x8000278 = cntvct_el0;
                        iVar7 = *0x8000120;
                    }
                    else {
                        *0x8000280 = **0x80002b0;
                        *0x8000288 = (*0x80002b0)[1];
                        *0x8000290 = (*0x80002b0)[2];
                        *0x8000298 = (*0x80002b0)[3];
                        InstructionSynchronizationBarrier();
                        *0x80002a0 = cntvct_el0;
                        *0x8000138 = 0;
                        *0x8000130 = 0;
                        iVar7 = *0x8000124;
                    }
                    mod_timer(obj.adspsleep_timer,_debugfs_attr_read + iVar7 * 0xfa);
                    uVar6 = 1;
                    *0x8000112 = '\x01';
                }
                else if (*0x8000112 == '\0') {
                    uVar6 = 0;
                }
                else {
                    del_timer(obj.adspsleep_timer);
                    uVar6 = 0;
                    *0x8000112 = '\0';
                    *0x8000138 = 0;
                    *0x8000130 = 0;
                }
                *0x8000248 = iVar11;
                *0x800024c = iVar9;
                _printk(0x8000c26,iVar11,iVar9,uVar6);
                mutex_unlock(0x8000170);
                iVar3 = 0;
                goto code_r0x08004088;
            }
            iVar3 = -0x1600000000;
            uVar6 = 0x8000f23;
            uVar5 = uStack_50._4_4_;
        }
        uVar1 = 0xc0145201;
    }
    _printk(uVar6,uVar5,uVar1);
code_r0x08004088:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = sym.adspsleepmon_device_open;
        if ((*0x8000114 == '\0') && (sym.adspsleepmon_smem_init(), *0x8000114 == '\0')) {
            iVar3 = 0xffffffed;
        }
        else {
            iVar3 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar3 = 0x30;
            }
            puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x20);
            iVar3 = 0xfffffff4;
            if ((puVar4 != NULL) && (puVar4 < 0xfffffffffffff001)) {
                iVar3 = 0;
                puVar4[2] = 0;
                puVar4[3] = 0;
                *puVar4 = 0;
                puVar4[1] = 0;
                *(extraout_x1 + 0xd8) = puVar4;
            }
        }
        return iVar3;
    }
    return iVar3 >> 0x20;
}


// ===== sym.adspsleepmon_device_open @ 0x080043a0 (size 160) =====

ulong sym.adspsleepmon_device_open(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x8000114 == '\0') && (sym.adspsleepmon_smem_init(), *0x8000114 == '\0')) {
        uVar3 = 0xffffffed;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x20);
        uVar3 = 0xfffffff4;
        if ((puVar2 != NULL) && (puVar2 < 0xfffffffffffff001)) {
            uVar3 = 0;
            puVar2[2] = 0;
            puVar2[3] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            *(arg1 + 0xd8) = puVar2;
        }
    }
    return uVar3;
}


// ===== sym.adspsleepmon_device_release @ 0x08004440 (size 532) =====

ulong sym.adspsleepmon_device_release(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int iVar7;
    int iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(arg1 + 0xd8);
    if (piVar6 == NULL) {
        uVar3 = 0xffffffc3;
    }
    else {
        mutex_lock(0x8000170);
        _raw_spin_lock(piVar6 + 2);
        piVar4 = piVar6[1];
        if (piVar4 != NULL) {
            iVar5 = *piVar6;
            *piVar4 = iVar5;
            if (iVar5 != 0) {
                *(iVar5 + 8) = piVar4;
            }
            *piVar6 = 0;
            piVar6[1] = 0;
        }
        piVar4 = CONCAT44(*0x8000004,_segment.ehdr);
        if (piVar4 == NULL) {
            iVar7 = 0;
            iVar8 = 0;
        }
        else {
            iVar8 = 0;
            iVar7 = 0;
            do {
                if (*(piVar4 + 0x14) != 0) {
                    iVar8 = piVar4[3] + iVar8;
                    iVar7 = *(piVar4 + 0x1c) + iVar7;
                }
                piVar4 = *piVar4;
            } while (piVar4 != NULL);
        }
        _raw_spin_unlock(piVar6 + 2);
        kfree(piVar6);
        iVar1 = *0x8000248;
        iVar2 = *0x800024c;
        if (iVar8 != _segment.ehdr) {
            iVar1 = iVar8;
            iVar2 = iVar7;
            if ((iVar8 == 0) || (iVar8 == iVar7)) {
                if (iVar8 == 0) {
                    *0x8000268 = (*0x80002a8)[2];
                    *0x8000270 = (*0x80002a8)[3];
                    *0x8000258 = **0x80002a8;
                    *0x8000260 = (*0x80002a8)[1];
                    InstructionSynchronizationBarrier();
                    *0x8000278 = cntvct_el0;
                    iVar8 = *0x8000120;
                }
                else {
                    *0x8000280 = **0x80002b0;
                    *0x8000288 = (*0x80002b0)[1];
                    *0x8000290 = (*0x80002b0)[2];
                    *0x8000298 = (*0x80002b0)[3];
                    InstructionSynchronizationBarrier();
                    *0x80002a0 = cntvct_el0;
                    *0x8000138 = 0;
                    *0x8000130 = 0;
                    iVar8 = *0x8000124;
                }
                mod_timer(obj.adspsleep_timer,_debugfs_attr_read + iVar8 * 0xfa);
                *0x8000112 = '\x01';
            }
            else if (*0x8000112 != '\0') {
                del_timer(obj.adspsleep_timer);
                *0x8000112 = '\0';
                *0x8000138 = 0;
                *0x8000130 = 0;
            }
        }
        *0x800024c = iVar2;
        *0x8000248 = iVar1;
        mutex_unlock(0x8000170);
        _printk(0x80015c1,*0x8000248,*0x800024c,*0x8000112);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym._copy_from_user @ 0x08004654 (size 376) =====

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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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
        if ((_seq_lseek >> 0x18 & 1) == 0) {
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


// ===== sym.adspsleepmon_timer_cb @ 0x08004808 (size 68) =====

void sym.adspsleepmon_timer_cb(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000111 = 1;
    __wake_up(obj.adspsleepmon_wq,1,1,0);
    return;
}


// ===== sym.adspsleepmon_smem_init @ 0x0800484c (size 488) =====

ulong sym.adspsleepmon_smem_init(void)

{
    int64_t iVar1;
    uint32_t *puVar2;
    ulong uVar3;
    int64_t extraout_x1;
    uint64_t uVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    _segment.ehdr = qcom_smem_get(2,0x25e,0);
    if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
        uVar3 = 0x800143e;
    }
    else {
        _segment.ehdr = qcom_smem_get(2,0x265,0);
        if ((_segment.ehdr == NULL) || (0xfffffffffffff000 < _segment.ehdr)) {
            uVar3 = 0x8001178;
        }
        else {
            _segment.ehdr = qcom_smem_get(2,0x270,0);
            if ((_segment.ehdr != NULL) && (_segment.ehdr < 0xfffffffffffff001)) {
                puVar2 = qcom_smem_get(2,0x27a,&uStack_30);
                if (((puVar2 == NULL) || (0xfffffffffffff000 < puVar2)) || (uStack_30 == 0)) {
                    _printk(0x8000834);
                    uVar3 = 0xfffffff4;
                }
                else {
                    _segment.ehdr = NULL;
                    uVar7 = *puVar2 >> 0x10 & 0xfff;
                    if (uVar7 <= uStack_30) {
                        puVar5 = NULL;
                        uVar6 = *puVar2 >> 0x1c;
                        uVar4 = uStack_30;
                        do {
                            if (uVar6 == 2) {
                                puVar5 = puVar2 + 1;
                                uVar4 = 0;
                                _segment.ehdr = puVar5;
                            }
                            else {
                                puVar2 = puVar2 + uVar7;
                                uVar4 = uVar4 - uVar7;
                                uVar7 = *puVar2 >> 0x10 & 0xfff;
                                uVar6 = *puVar2 >> 0x1c;
                            }
                        } while (uVar7 <= uVar4);
                        if ((puVar5 != NULL) && (puVar5 < 0xfffffffffffff001)) {
                            if (*0x8000115 == '\0') {
                                register_pm_notifier
                                          (reloc.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt);
                                *0x8000115 = '\x01';
                            }
                            uVar3 = 0;
                            *0x8000114 = 1;
                            goto code_r0x080049b0;
                        }
                    }
                    _printk(0x8000d2e);
                    uVar3 = 0xfffffff4;
                }
                goto code_r0x080049b0;
            }
            uVar3 = 0x80006d7;
        }
    }
    _printk(uVar3);
    uVar3 = 0xfffffff4;
code_r0x080049b0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail(uVar3);
    *extraout_x18 = sym.adspsleepmon_suspend_notify;
    if (extraout_x1 == 4) {
        _printk(0x8000aa2);
        if ((*0x8000248 == 0) || (*0x8000248 == *0x800024c)) {
            *0x8000113 = 1;
            __wake_up(obj.adspsleepmon_wq,1,1,0);
        }
    }
    return 0;
}


// ===== sym.adspsleepmon_suspend_notify @ 0x08004a34 (size 124) =====

ulong sym.adspsleepmon_suspend_notify(ulong noname_0,uint32_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 4) {
        _printk(0x8000aa2);
        if ((*0x8000248 == 0) || (*0x8000248 == *0x800024c)) {
            *0x8000113 = 1;
            __wake_up(obj.adspsleepmon_wq,1,1,0);
        }
    }
    return 0;
}


// ===== sym.adspsleepmon_driver_probe @ 0x08004ab0 (size 476) =====

ulong sym.adspsleepmon_driver_probe(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_property(*(arg1 + 0x300),"qcom,enable_panic_lpm",0);
    *0x8000118 = iVar1 != 0;
    iVar1 = of_find_property(*(arg1 + 0x300),"",0);
    *0x8000119 = iVar1 != 0;
    iVar1 = of_find_property(*(arg1 + 0x300),"qcom,enable_adsp_panic_lpm",0);
    *0x800011a = iVar1 != 0;
    iVar1 = of_find_property(*(arg1 + 0x300),"qcom,enable_adsp_panic_lpi",0);
    *0x800011b = iVar1 != 0;
    iVar1 = of_find_property(*(arg1 + 0x300),"qcom,enable_adsp_panic_lpm_overall",0);
    *0x800011c = iVar1 != 0;
    of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,wait_time_lpm",0x8000120,1,0);
    of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,wait_time_lpi",0x8000124,1,0);
    of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,wait_time_lpm_overall",0x8000128,1,0);
    of_property_read_variable_u32_array(*(arg1 + 0x300),"qcom,min_required_resumes",0x800012c,1,0);
    *0x8000116 = 0;
    if (*0x8000118 != '\0' || *0x8000119 != '\0') {
        *0x8000bf0 = debugfs_create_file("panic-state",0x1a4,*0x8000be8,0,obj.panic_state_fops);
        if (*0x8000bf0 == 0) {
            _dev_err(arg1 + 0x10,"Unable to create file in debugfs\n");
        }
    }
    *0x8000c00 = debugfs_create_file("read_panic_state",0x124,*0x8000be8,0,obj.read_panic_state_fops);
    if (*0x8000c00 == 0) {
        _dev_err(arg1 + 0x10,"Unable to create read panic state file in debugfs\n");
    }
    return 0;
}


// ===== sym.panic_state_fops_open @ 0x08004c8c (size 60) =====

void sym.panic_state_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debugfs_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                     sym.debugfs_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0x8000a2d);
    return;
}


// ===== sym.debugfs_panic_state_read @ 0x08004cc8 (size 40) =====

ulong sym.debugfs_panic_state_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *0x8000116 | *0x8000117 << 1;
    return 0;
}


// ===== sym.debugfs_panic_state_write @ 0x08004cf0 (size 56) =====

ulong sym.debugfs_panic_state_write(int64_t arg1,uint32_t arg2)

{
    *0x8000116 = 0;
    if ((arg2 & 1) != 0) {
        *0x8000116 = *0x8000118;
    }
    *0x8000117 = 0;
    if ((arg2 & 2) != 0) {
        *0x8000117 = *0x8000119;
    }
    return 0;
}


// ===== sym.read_panic_state_open @ 0x08004d28 (size 56) =====

void sym.read_panic_state_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.read_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.read_panic_state_show @ 0x08004d60 (size 80) =====

ulong sym.read_panic_state_show(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    seq_puts(param_1,*((((*0x8000116 | *0x8000117 << 1) ^ 2) & 0xff) * 8 + 0x8002090));
    return 0;
}


// ===== sym.master_stats_open @ 0x08004db0 (size 56) =====

void sym.master_stats_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.master_stats_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.master_stats_show @ 0x08004de8 (size 956) =====

ulong sym.master_stats_show(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if ((_segment.ehdr != 0) && (CONCAT44(*0x8000004,_segment.ehdr) != 0)) {
        uStack_48 = 0x200000010;
        uStack_40 = 0x100000002;
        iVar2 = rpmsg_send(*(CONCAT44(*0x8000004,_segment.ehdr) + 0x3c8),&uStack_48,0x10);
        if (iVar2 == 0) {
            wait_for_completion(0x8000140);
            sym.print_complete_dsppm_info();
        }
        else {
            _printk(0x80008c2,iVar2);
        }
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        seq_puts(arg1,"");
        seq_printf(arg1,"Core clock: %d\n",*CONCAT44(*0x8000004,_segment.ehdr));
        seq_printf(arg1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(arg1,"Ib vote: %llu\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0xc));
        iVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + 0x14);
        if (iVar2 == 0) {
            iVar2 = -1;
        }
        seq_printf(arg1,"Sleep latency: %u\n",iVar2);
        seq_printf(arg1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x18));
    }
    if (CONCAT44(*0x8000004,_segment.ehdr) != 0) {
        seq_puts(arg1,"\nDSPPM stats:\n\n");
        seq_printf(arg1,"Version: %u\n",*CONCAT44(*0x8000004,_segment.ehdr));
        seq_printf(arg1,"Sleep latency: %u\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(arg1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0xc),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x14),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x18));
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x1c),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x20));
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x24),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x28));
        seq_printf(arg1,"Pid: %d, Num active clients: %d\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x2c),
                   *(CONCAT44(*0x8000004,_segment.ehdr) + 0x30));
    }
    pcVar1 = _single_release;
    iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar3 != 0) {
        iVar5 = *(iVar3 + 0x18);
        if (*(iVar3 + 0x10) < *(iVar3 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x8000340);
            iVar3 = (*pcVar1)();
            iVar5 = (iVar3 + iVar5) - *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
        }
        seq_puts(arg1,"\nLPM stats:\n\n");
        seq_printf(arg1,"Count = %u\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(arg1,"Last Entered At = %llu\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        seq_printf(arg1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar5);
    }
    pcVar1 = _single_release;
    iVar3 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar3 != 0) {
        iVar5 = *(iVar3 + 0x18);
        if (*(iVar3 + 0x10) < *(iVar3 + 8)) {
            __cfi_slowpath_diag(0x19e9081ee75ef79b,_single_release,0x8000360);
            iVar3 = (*pcVar1)();
            iVar5 = (iVar3 + iVar5) - *(CONCAT44(*0x8000004,_segment.ehdr) + 8);
        }
        seq_puts(arg1,"\nLPI stats:\n\n");
        seq_printf(arg1,"Count = %u\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 4));
        seq_printf(arg1,"Last Entered At = %llu\n",*(CONCAT44(*0x8000004,_segment.ehdr) + 8));
        seq_printf(arg1,"",*(CONCAT44(*0x8000004,_segment.ehdr) + 0x10));
        seq_printf(arg1,"Accumulated Duration = %llu\n",iVar5);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    auVar6 = __stack_chk_fail();
    *extraout_x18 = sym.adsp_panic_state_fops_open;
    uVar4 = simple_attr_open(auVar6._0_8_,auVar6._8_8_,
                             sym.debugfs_adsp_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                             sym.debugfs_adsp_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0x8000a2d);
    return uVar4;
}


// ===== sym.adsp_panic_state_fops_open @ 0x080051a4 (size 60) =====

void sym.adsp_panic_state_fops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.debugfs_adsp_panic_state_read.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                     sym.debugfs_adsp_panic_state_write.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0x8000a2d);
    return;
}


// ===== sym.debugfs_adsp_panic_state_read @ 0x080051e0 (size 48) =====

ulong sym.debugfs_adsp_panic_state_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *0x800011a | *0x800011b << 1 | *0x800011c << 2;
    return 0;
}


// ===== sym.debugfs_adsp_panic_state_write @ 0x08005210 (size 120) =====

ulong sym.debugfs_adsp_panic_state_write(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*0x8000168 == 0) || (*0x8000160 < 2)) {
        _printk(0x8000a6d);
        uVar2 = 0xffffffea;
    }
    else {
        uVar1 = arg2 & 0xff;
        uVar2 = 0;
        *0x800011a = arg2 & 1;
        *0x800011b = uVar1 >> 1 & 1;
        *0x800011c = uVar1 >> 2 & 1;
    }
    return uVar2;
}


// ===== sym.read_adsp_panic_state_open @ 0x08005288 (size 56) =====

void sym.read_adsp_panic_state_open(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    single_open(arg2,sym.read_adsp_panic_state_show.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,*(arg1 + 0x2d8));
    return;
}


// ===== sym.read_adsp_panic_state_show @ 0x080052c0 (size 200) =====

ulong sym.read_adsp_panic_state_show(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = "";
    if ((*0x8000168 != 0) && (1 < *0x8000160)) {
        uVar2 = *0x800011a | *0x800011b << 1;
        uVar1 = *0x800011c << 2;
        pcVar3 = "";
        if ((*0x800011a & 1) != 0) {
            pcVar3 = "\nADSP panic on LPM violation enabled\n";
        }
        seq_puts(arg1,pcVar3);
        pcVar3 = "\nADSP panic on LPI violation is disabled\n";
        if ((uVar2 & 2) != 0) {
            pcVar3 = "";
        }
        seq_puts(arg1,pcVar3);
        pcVar3 = "\nADSP panic for LPM overall violation is disabled\n";
        if (((uVar2 | uVar1) & 4) != 0) {
            pcVar3 = "";
        }
    }
    seq_puts(arg1,pcVar3);
    return 0;
}


// ===== sym.sleepmon_rpmsg_probe @ 0x08005388 (size 76) =====

void sym.sleepmon_rpmsg_probe(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    of_platform_populate(*(arg1 + 0x2f0),0,0,arg1);
    _segment.ehdr = arg1;
    sym.adspsleepmon_smem_init();
    return;
}


// ===== sym.sleepmon_rpmsg_remove @ 0x080053d4 (size 28) =====

void sym.sleepmon_rpmsg_remove(int64_t arg1)

{
    *0x8000168 = 0;
    *0x8000160 = 0;
    return;
}


// ===== sym.sleepmon_rpmsg_callback @ 0x080053f0 (size 540) =====

void sym.sleepmon_rpmsg_callback(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    ulong in_x0;
    ulong uVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if ((arg1 == 0) || (arg2 < 0x930)) {
        _dev_err(in_x0,"Invalid message in rpmsg callback, length: %d, expected: %lu\n",arg2,0x930);
        uVar4 = 0xffffffea;
    }
    else {
        iVar3 = *(arg1 + 8);
        if (iVar3 == 1) {
            *0x8000160 = *(arg1 + 4);
            _printk(0x80005dd);
            if (*0x8000114 != '\0') {
                *0x8000248 = 0;
                del_timer(obj.adspsleep_timer);
                *0x8000112 = 0;
                *0x8000138 = 0;
                *0x8000130 = 0;
                *0x8000258 = **0x80002a8;
                *0x8000260 = (*0x80002a8)[1];
                *0x8000268 = (*0x80002a8)[2];
                *0x8000270 = (*0x80002a8)[3];
                InstructionSynchronizationBarrier();
                *0x8000278 = cntvct_el0;
                iVar3 = *(arg1 + 8);
                goto joined_r0x080055c0;
            }
        }
        else {
joined_r0x080055c0:
            if (iVar3 == 2) {
                *0x8000bb8 = 0;
                memcpy(reloc.sleepmon_rpmsg_callback.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,arg1 + 0x10,0x920);
                complete(0x8000140);
                iVar3 = *(arg1 + 8);
            }
            if (iVar3 == 5) {
                if (*0x8000117 != '\0') goto code_r0x080055f4;
                if (*0x800011b == '\0') goto code_r0x080054d8;
                uVar4 = 0x8000a6d;
                if ((*0x8000168 == 0) || (*0x8000160 < 2)) {
code_r0x080055e8:
                    _printk(uVar4);
                }
                else {
                    uStack_38 = 0x200000010;
                    uStack_30 = 0x100000004;
                    iVar3 = rpmsg_send(*(*0x8000168 + 0x3c8),&uStack_38,0x10);
                    if (iVar3 != 0) {
                        uVar4 = 0x80012f6;
                        goto code_r0x080055e8;
                    }
                }
                iVar3 = *(arg1 + 8);
            }
            if (iVar3 == 6) {
                _printk(0x8001629,arg1 + 0x10,*(arg1 + 0x54));
            }
        }
code_r0x080054d8:
        uVar4 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar4);
code_r0x080055f4:
    _printk(0x80008f8);
    auVar6 = panic("ADSP_SLEEPMON: ADSP LPI issue detected");
    puVar5 = auVar6._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar5 != NULL) {
        switch(*puVar5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar5,auVar6._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x8005664);
    (*pcVar2)();
}


// ===== sym.__cfi_check_fail @ 0x0800560c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08005650

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
    //switch table (4 cases) at 0x80003ac
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8005664);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08005674 (size 888) =====

int sym.init_module(void)

{
    int iVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __mutex_init(0x8000170,"&g_adspsleepmon.lock",obj.adspsleepmon_init.__key);
    *0x8000120 = 0xf00000005;
    *0x8000128 = 0x50000003c;
    *0x8000118 = 0;
    uVar2 = kthread_create_on_node
                      (sym.adspsleepmon_worker.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,0,0xffffffff,
                       "adspsleepmon-worker");
    if (uVar2 < 0xfffffffffffff001) {
        wake_up_process(uVar2);
    }
    _segment.ehdr = uVar2;
    if (uVar2 == 0) {
        _printk(0x8000891);
        iVar1 = -0xc;
    }
    else {
        *0x8000250 = 0;
        iVar1 = alloc_chrdev_region(0x8000230,0,1,"msm_adsp_sleepmon");
        if (iVar1 == 0) {
            cdev_init(0x80001a0,obj.fops);
            _obj.sleepmon_rpmsg_client = obj.__this_module;
            iVar1 = cdev_add(0x80001a0,*0x8000230 & 0xfff00000,1);
            if (iVar1 == 0) {
                _segment.ehdr = __class_create(obj.__this_module,"",obj.adspsleepmon_init.__key);
                if (_segment.ehdr < 0xfffffffffffff001) {
                    *0x8000238 = device_create(_segment.ehdr,0,*0x8000230 & 0xfff00000,0,"msm_adsp_sleepmon");
                    if ((*0x8000238 == 0) || (0xfffffffffffff000 < *0x8000238)) {
                        _printk(0x8000b09);
                        iVar1 = 0;
                    }
                    else {
                        _segment.ehdr = debugfs_create_dir("",0);
                        if (_segment.ehdr == 0) {
                            _printk(0x8000680);
                            iVar1 = 0;
                        }
                        else {
                            iVar1 = __platform_driver_register
                                              (reloc.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt,
                                               obj.__this_module);
                            if (iVar1 == 0) {
                                *0x8000bf8 = debugfs_create_file("",0x124,*0x8000be8,0,obj.master_stats_fops);
                                if (*0x8000bf8 == 0) {
                                    _printk(0x8000ffe);
                                }
                                *0x8000c08 = debugfs_create_file("",0x1a4,*0x8000be8,0,obj.adsp_panic_state_fops);
                                if (*0x8000c08 == 0) {
                                    _printk(0x8000ecb);
                                }
                                *0x8000c10 = debugfs_create_file("",0x124,*0x8000be8,0,
                                                                 obj.read_adsp_panic_state_fops);
                                if (*0x8000c10 == 0) {
                                    _printk(0x8001390);
                                }
                                iVar1 = __register_rpmsg_driver(obj.sleepmon_rpmsg_client,obj.__this_module);
                                if (iVar1 == 0) {
                                    *0x8000140 = 0;
                                    *0x800011d = 1;
                                    __init_swait_queue_head(0x8000148,"&x->wait",obj.adspsleepmon_init.__key);
                                    return 0;
                                }
                                _printk(0x8000ba0,iVar1);
                                return iVar1;
                            }
                            _printk(0x8000e0a,iVar1);
                        }
                        device_destroy(*0x8000228,*0x8000220);
                    }
                    class_destroy(_segment.ehdr);
                }
                else {
                    _printk(0x800173a);
                    iVar1 = 0;
                }
                cdev_del(0x80001a0);
            }
            else {
                _printk(0x8000934);
            }
            unregister_chrdev_region(_segment.ehdr & 0xffffffff,1);
        }
        else {
            _printk(0x80011ec);
        }
        platform_driver_unregister(reloc.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt);
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x080059ec (size 196) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_destroy(*0x8000228,*0x8000220);
    class_destroy(*0x8000228);
    cdev_del(0x80001a0);
    unregister_chrdev_region(*0x8000230,1);
    platform_driver_unregister(reloc.adspsleepmon_driver_probe.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt);
    debugfs_remove(*0x8000be8);
    unregister_pm_notifier(reloc.adspsleepmon_suspend_notify.57b8b6a850c60bdb9ddba72a58377f11.cfi_jt);
    if (*0x800011d != '\0') {
        unregister_rpmsg_driver(obj.sleepmon_rpmsg_client);
        *0x8000168 = 0;
        *0x8000160 = 0;
    }
    _printk(0x80011cb);
    return;
}

