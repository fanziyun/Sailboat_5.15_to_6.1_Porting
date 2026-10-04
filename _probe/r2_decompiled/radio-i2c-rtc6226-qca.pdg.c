// decompiled from radio-i2c-rtc6226-qca by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 1016) =====

//WARNING: Switch with 1 destination removed at 0x080050a0

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x2ee0710dce68437c) {
            if (arg1 < -0x550b9e52359ac614) {
                if (arg1 != -0x7bcbda558eb245e5) {
                    if (arg1 != -0x57be845bca9148ef) goto code_r0x08005060;
                    pcVar2 = sym.rtc6226_i2c_suspend.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt;
                    goto code_r0x080033a8;
                }
                pcVar2 = sym.rtc6226_fops_poll.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
            }
            else {
                if (arg1 == -0x550b9e52359ac614) {
                    if ((pcVar1 + -0x80034b0 >> 3 | pcVar1 << 0x3d) < 3) {
                        return;
                    }
                    goto code_r0x08005060;
                }
                if (arg1 == -0x3987c0e26ee29729) {
                    pcVar2 = sym.rtc6226_isr.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt;
                }
                else {
                    if (arg1 != -0x32bb2c77616f1805) goto code_r0x08005060;
                    pcVar2 = sym.rtc6226_vidioc_g_frequency.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
                }
            }
        }
        else {
            if (-0x20dea9f942af77f2 < arg1) {
                if (arg1 == -0x20dea9f942af77f1) {
                    pcVar2 = sym.rtc6226_fops_release.cfi_jt;
                }
                else {
                    if (arg1 != -0x890743871a4a53) {
                        if (arg1 != 0x2b3a43e29242445) goto code_r0x08005060;
                        pcVar2 = sym.init_module.cfi_jt;
                        goto code_r0x080033e8;
                    }
                    pcVar2 = sym.v4l2_compat_ioctl32.cfi_jt;
                }
code_r0x080033a8:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08005060;
            }
            if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else if (arg1 == -0x2e7c8002807bf8d5) {
                pcVar2 = sym.rtc6226_vidioc_g_tuner.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
            }
            else {
                if (arg1 != -0x2638f19fb3841e2c) goto code_r0x08005060;
                pcVar2 = sym.rtc6226_vidioc_querycap.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x5626938fa815f324) {
        if (arg1 < 0x225074b7549a4453) {
            if (arg1 == 0x7ff5a213d37b1a6) {
                pcVar2 = sym.rtc6226_fops_read.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
            }
            else {
                if (arg1 != 0x18aafba39062885f) goto code_r0x08005060;
                pcVar2 = sym.rtc6226_i2c_probe.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt;
            }
        }
        else {
            if (arg1 == 0x225074b7549a4453) {
                pcVar2 = sym.rtc6226_vidioc_g_ctrl.cfi_jt;
                goto code_r0x080033a8;
            }
            if (arg1 == 0x2b08a8a40d041b0f) {
                pcVar2 = sym.rtc6226_vidioc_dqbuf.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
            }
            else {
                if (arg1 != 0x524dd6ea9581a791) goto code_r0x08005060;
                pcVar2 = sym.rtc6226_vidioc_s_hw_freq_seek.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x7b8a7e6f6a00e56a) {
        if (arg1 == 0x5626938fa815f324) {
            pcVar2 = sym.rtc6226_vidioc_g_audio.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
        }
        else if (arg1 == 0x63323cae2182e865) {
            pcVar2 = sym.rtc6226_vidioc_s_tuner.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
        }
        else {
            if (arg1 != 0x6bcc276ec11a3903) goto code_r0x08005060;
            pcVar2 = sym.rtc6226_vidioc_s_frequency.33fb64d10f45f9799562c849ae62e6f8.cfi_jt;
        }
    }
    else if (arg1 == 0x7b8a7e6f6a00e56a) {
        pcVar2 = sym.video_device_release_empty.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x08005060;
        pcVar2 = sym.rtc6226_i2c_remove.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt;
    }
code_r0x080033e8:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08005060:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80050b4);
    (*pcVar1)();
}


// ===== sym.rtc6226_vidioc_s_frequency.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003400 (size 8) =====

int sym.rtc6226_vidioc_s_frequency.33fb64d10f45f9799562c849ae62e6f8.cfi_jt
              (ulong param_1,ulong param_2,int64_t param_3)

{
    uint32_t arg2;
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = video_devdata();
    if (param_3 == 0) {
        _printk(0x8000acf,"rtc6226_vidioc_s_frequency");
    }
    else if (*(param_3 + 4) == 1) {
        iVar2 = *(iVar2 + 0x250);
        arg2 = *(param_3 + 8) >> 4;
        *(iVar2 + 0x7c0) = 1;
        iVar1 = sym.rtc6226_set_freq(iVar2,arg2);
        if (-1 < iVar1) {
            *(iVar2 + 0x824) = arg2;
            return iVar1;
        }
        _printk(0x8001aba,"rtc6226_vidioc_s_frequency",iVar1);
        return iVar1;
    }
    return -0x16;
}


// ===== sym.rtc6226_vidioc_dqbuf.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003408 (size 8) =====

uint32_t sym.rtc6226_vidioc_dqbuf.33fb64d10f45f9799562c849ae62e6f8.cfi_jt
                   (ulong param_1,ulong param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    int *piVar7;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    arg2 = param_3;
    iVar4 = video_devdata();
    iVar4 = *(iVar4 + 0x250);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    if ((param_3 == NULL) || (iVar4 == 0)) {
        _printk(0x80011d3,"rtc6226_vidioc_dqbuf");
        uVar3 = 0xfffffffa;
    }
    else {
        uVar3 = *param_3;
        if (uVar3 < 0xd) {
            arg1 = *(param_3 + 0x10);
            piVar7 = iVar4 + 0xd70 + uVar3 * 0x18;
            uVar1 = param_3[0x12];
            if (uVar3 == 1) {
                if (*piVar7 == *(iVar4 + 0xd8c)) {
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_190 = 0;
                    init_wait_entry(&uStack_190,0);
                    while( true ) {
                        arg2 = 0x1;
                        iVar5 = prepare_to_wait_event(iVar4 + 0xb08,&uStack_190);
                        if (*piVar7 != *(iVar4 + 0xd8c)) break;
                        if (iVar5 != 0) {
                            if (-1 < iVar5) goto code_r0x08007d7c;
                            uVar3 = 0xfffffffc;
                            goto code_r0x08007df0;
                        }
                        schedule();
                    }
                    finish_wait(iVar4 + 0xb08,&uStack_190);
                }
            }
code_r0x08007d7c:
            if (uVar1 < 0x101) {
                iVar4 = iVar4 + uVar3 * 4 + 0x894;
                uVar6 = _raw_spin_lock_irqsave(iVar4);
                uVar3 = __kfifo_out(piVar7,&uStack_168,uVar1);
                arg2 = uVar3;
                _raw_spin_unlock_irqrestore(iVar4,uVar6);
                param_3[2] = uVar3;
                if (uVar3 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8007e84);
                    (*pcVar2)();
                }
                noname_1 = __check_object_size(&uStack_168,arg2,1);
                uVar3 = sym._copy_to_user(arg1,noname_1,arg2);
                if (0 < uVar3) {
                    arg2 = uVar3;
                    _printk(0x800198e,"rtc6226_vidioc_dqbuf");
                    uVar3 = 0xfffffff5;
                }
                goto code_r0x08007df0;
            }
            uVar6 = 0x8000ef2;
        }
        else {
            uVar6 = 0x800196b;
        }
        _printk(uVar6,"rtc6226_vidioc_dqbuf");
        uVar3 = 0xffffffea;
    }
code_r0x08007df0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_vidioc_g_audio;
    *arg2 = 0;
    strlcpy(arg2 + 1,"Radio",0x20);
    arg2[9] = 1;
    arg2[10] = 0;
    return 0;
}


// ===== sym.rtc6226_i2c_remove.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt @ 0x08003410 (size 8) =====

ulong sym.rtc6226_i2c_remove.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xb8);
    free_irq(*(param_1 + 0x3b4),iVar1);
    kfree(*(iVar1 + 0x860));
    v4l2_ctrl_handler_free(iVar1 + 0x6c0);
    if ((*(iVar1 + 0x638) & 1) != 0) {
        video_unregister_device(iVar1 + 0x90);
    }
    video_device_release_empty(iVar1 + 0x90);
    v4l2_device_unregister(iVar1 + 0x18);
    kfree(iVar1);
    return 0;
}


// ===== sym.rtc6226_fops_poll.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003418 (size 8) =====

uint sym.rtc6226_fops_poll.33fb64d10f45f9799562c849ae62e6f8.cfi_jt(ulong param_1,ulong *param_2)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = video_devdata();
    iVar2 = *(iVar2 + 0x250);
    mutex_lock(iVar2 + 0x830);
    if ((*(iVar2 + 0x7ca) >> 0xc & 1) == 0) {
        *(iVar2 + 0x7ca) = *(iVar2 + 0x7ca) | 0x1000;
        iVar1 = sym.rtc6226_set_register(iVar2,4);
        if (iVar1 < 0) {
            *(iVar2 + 0x7ca) = *(iVar2 + 0x7ca) & 0xefff;
        }
    }
    mutex_unlock(iVar2 + 0x830);
    if (((param_2 != NULL) && (iVar2 + 0x808 != 0)) && (pcVar4 = *param_2, pcVar4 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000900);
        (*pcVar4)(param_1,iVar2 + 0x808,param_2);
    }
    uVar3 = 0;
    if (*(iVar2 + 0xd64) != *(iVar2 + 0xd68)) {
        uVar3 = 0x41;
    }
    return uVar3;
}


// ===== sym.rtc6226_vidioc_g_frequency.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003420 (size 8) =====

uint64_t sym.rtc6226_vidioc_g_frequency.33fb64d10f45f9799562c849ae62e6f8.cfi_jt
                   (ulong param_1,ulong param_2,uint64_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar4 = param_3;
    iVar3 = video_devdata();
    iVar3 = *(iVar3 + 0x250);
    iStack_3c = 0;
    *(param_3 + 4) = 1;
    uVar1 = sym.rtc6226_get_freq(iVar3,&iStack_3c);
    *(param_3 + 8) = iStack_3c << 4;
    *(iVar3 + 0x824) = iStack_3c * 10;
    if (uVar1 < 0) {
        uVar4 = uVar1;
        _printk(0x8001012,"rtc6226_vidioc_g_frequency");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = sym.rtc6226_vidioc_s_frequency;
        iVar3 = video_devdata();
        if (uVar4 == 0) {
            _printk(0x8000acf,"rtc6226_vidioc_s_frequency");
        }
        else if (*(uVar4 + 4) == 1) {
            iVar3 = *(iVar3 + 0x250);
            uVar1 = *(uVar4 + 8) >> 4;
            *(iVar3 + 0x7c0) = 1;
            uVar2 = sym.rtc6226_set_freq(iVar3,uVar1);
            uVar4 = uVar2;
            if (-1 < uVar2) {
                *(iVar3 + 0x824) = uVar1;
                return uVar4;
            }
            _printk(0x8001aba,"rtc6226_vidioc_s_frequency",uVar4);
            return uVar4;
        }
        return 0xffffffea;
    }
    return uVar1;
}


// ===== sym.rtc6226_vidioc_s_tuner.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003428 (size 8) =====

int sym.rtc6226_vidioc_s_tuner.33fb64d10f45f9799562c849ae62e6f8.cfi_jt(ulong param_1,ulong param_2,int *param_3)

{
    uint32_t uVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;
    int64_t iVar5;
    uint16_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = video_devdata();
    if (*param_3 != 0) {
        return 0;
    }
    iVar5 = *(iVar5 + 0x250);
    if (param_3[0xe] == 1) {
        uVar6 = *(iVar5 + 0x7c6) & 0xdfff;
    }
    else {
        if (param_3[0xe] != 0) goto code_r0x080080e4;
        uVar6 = *(iVar5 + 0x7c6) | 0x2000;
    }
    *(iVar5 + 0x7c6) = uVar6;
code_r0x080080e4:
    sym.rtc6226_set_register(iVar5,2);
    uVar1 = param_3[0xb];
    uVar2 = param_3[0xc] / 0xa0;
    *(iVar5 + 0x7ea) = uVar2;
    uVar3 = uVar1 / 0xa0;
    *(iVar5 + 0x7ec) = uVar3;
    iVar4 = sym.rtc6226_set_register(iVar5,0x14);
    if (iVar4 < 0) {
        _printk(0x80017ae,"rtc6226_vidioc_s_tuner",iVar4);
    }
    else {
        *(iVar5 + 0x8ce) = uVar2;
    }
    iVar4 = sym.rtc6226_set_register(iVar5,0x15);
    if (iVar4 < 0) {
        _printk(0x8001221,"rtc6226_vidioc_s_tuner",iVar4);
    }
    else {
        *(iVar5 + 0x8cc) = uVar3;
    }
    return iVar4;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x08003430 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.video_device_release_empty.cfi_jt @ 0x08003438 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.video_device_release_empty.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.rtc6226_vidioc_querycap.cfi_jt @ 0x08003440 (size 8) =====

ulong sym.rtc6226_vidioc_querycap.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    strlcpy(param_3,"rtc6226-fmtuner",0x10);
    strlcpy(param_3 + 0x10,"Richwave rtc6226 FM Tuner",0x20);
    *(param_3 + 0x54) = 0x105050081050500;
    return 0;
}


// ===== sym.init_module.cfi_jt @ 0x08003448 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.rtc6226_i2c_driver);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08003450 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.rtc6226_i2c_driver);
    return;
}


// ===== sym.rtc6226_fops_read.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003458 (size 8) =====

uint64_t sym.rtc6226_fops_read.33fb64d10f45f9799562c849ae62e6f8.cfi_jt(ulong param_1,int64_t param_2,uint32_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar8;
    code *pcVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    iVar3 = video_devdata();
    iVar3 = *(iVar3 + 0x250);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    if ((param_2 == 0) || (iVar3 == 0)) {
        _printk(0x80011d3,"rtc6226_fops_read");
        uVar6 = 0xfffffffffffffffa;
    }
    else if (param_3 < 0xd) {
        piVar8 = iVar3 + 0xd70 + param_3 * 0x18;
        if (param_3 == 1) {
            if (*piVar8 == *(iVar3 + 0xd8c)) {
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_180 = 0;
                init_wait_entry(&uStack_180,0);
                while( true ) {
                    iVar4 = prepare_to_wait_event(iVar3 + 0xb08,&uStack_180,1);
                    if (*piVar8 != *(iVar3 + 0xd8c)) break;
                    if (iVar4 != 0) {
                        if (-1 < iVar4) goto code_r0x080086e0;
                        uVar6 = 0xfffffffffffffffc;
                        goto code_r0x0800874c;
                    }
                    schedule();
                }
                finish_wait(iVar3 + 0xb08,&uStack_180);
            }
        }
code_r0x080086e0:
        iVar3 = iVar3 + param_3 * 4 + 0x894;
        uVar5 = _raw_spin_lock_irqsave(iVar3);
        uVar1 = __kfifo_out(piVar8,&uStack_158,0x100);
        _raw_spin_unlock_irqrestore(iVar3,uVar5);
        if (uVar1 < 0) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x80087d0);
            (*pcVar9)();
        }
        auVar10 = __check_object_size(&uStack_158,uVar1,1);
        iVar2 = sym._copy_to_user(param_2,auVar10,uVar1);
        if (iVar2 < 1) {
            uVar6 = uVar1;
        }
        else {
            _printk(0x800198e,"rtc6226_fops_read");
            uVar6 = 0xfffffffffffffff5;
        }
    }
    else {
        _printk(0x800196b,"rtc6226_fops_read");
        uVar6 = 0xffffffffffffffea;
    }
code_r0x0800874c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    auVar10 = __stack_chk_fail(uVar6);
    puVar7 = auVar10._8_8_;
    *extraout_x18 = sym.rtc6226_fops_poll;
    iVar3 = video_devdata();
    iVar3 = *(iVar3 + 0x250);
    mutex_lock(iVar3 + 0x830);
    if ((*(iVar3 + 0x7ca) >> 0xc & 1) == 0) {
        *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) | 0x1000;
        iVar2 = sym.rtc6226_set_register(iVar3,4);
        if (iVar2 < 0) {
            *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) & 0xefff;
        }
    }
    mutex_unlock(iVar3 + 0x830);
    if (((puVar7 != NULL) && (iVar3 + 0x808 != 0)) && (pcVar9 = *puVar7, pcVar9 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar9,0x8000900);
        (*pcVar9)(auVar10._0_8_,iVar3 + 0x808,puVar7);
    }
    uVar1 = 0;
    if (*(iVar3 + 0xd64) != *(iVar3 + 0xd68)) {
        uVar1 = 0x41;
    }
    return uVar1;
}


// ===== sym.rtc6226_i2c_probe.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt @ 0x08003460 (size 8) =====

uint64_t sym.rtc6226_i2c_probe.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t arg2;
    uint64_t *puVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t iVar10;
    code *pcVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(param_1 + 0x18);
    pcVar11 = *(*(iVar10 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar11,0x80008e0);
    uVar5 = (*pcVar11)(iVar10);
    if ((uVar5 & 1) == 0) {
        return 0xffffffed;
    }
    iVar10 = param_1 + 0x20;
    uVar5 = regulator_get(iVar10,0x8000fc9);
    if (0xfffffffffffff000 < uVar5) {
        _printk(0x800128b,"rtc6226_i2c_probe",uVar5 & 0xffffffff);
        return uVar5 & 0xffffffff;
    }
    uVar6 = regulator_get(iVar10,0x8000f30);
    if (0xfffffffffffff000 < uVar6) {
        _printk(0x8001608,"rtc6226_i2c_probe",uVar6 & 0xffffffff);
        regulator_put(uVar5);
        return uVar6 & 0xffffffff;
    }
    arg2 = kmem_cache_alloc_trace(_v4l2_compat_ioctl32,0xdc0,0xee8);
    if (arg2 == 0) {
        regulator_put(uVar5);
        regulator_put(uVar6);
        return 0xfffffff4;
    }
    iVar1 = arg2 + 0x18;
    uVar3 = v4l2_device_register(iVar10,iVar1);
    if (uVar3 < 0) {
        uVar12 = uVar3;
        _printk(0x8000af3,"rtc6226_i2c_probe");
        goto code_r0x08004a5c;
    }
    *(arg2 + 0x7b8) = 0;
    *(arg2 + 0xed0) = param_1;
    __mutex_init(arg2 + 0x830,"&radio->lock",obj.rtc6226_i2c_probe.__key);
    *(arg2 + 0xea8) = 0;
    __init_swait_queue_head(arg2 + 0xeb0,"&x->wait",obj.rtc6226_i2c_probe.__key);
    uVar3 = sym.rtc6226_parse_dt(iVar10,arg2);
    if (uVar3 == 0) {
        puVar7 = devm_kmalloc(iVar10,0x20,0xdc0);
        *(arg2 + 0x7a0) = puVar7;
        if (puVar7 == NULL) {
            uVar9 = 0x80016b4;
code_r0x08004600:
            _printk(uVar9,"rtc6226_i2c_probe");
            uVar12 = 0xfffffff4;
        }
        else {
            uVar9 = *(param_1 + 0x310);
            *puVar7 = uVar6;
            puVar7[1] = 0x8000f30;
            *(puVar7 + 0x1c) = 0;
            of_property_read_variable_u32_array(uVar9,"rtc6226,vdd-load",puVar7 + 3,1,0);
            _printk(0x800156c,"rtc6226_i2c_probe",*(*(arg2 + 0x7a0) + 0x18));
            uVar3 = sym.rtc6226_dt_parse_vreg_info(iVar10,*(arg2 + 0x7a0),0x8000978);
            if (uVar3 < 0) {
                uVar9 = 0x8001823;
code_r0x08004a00:
                uVar12 = uVar3;
                _printk(uVar9,"rtc6226_i2c_probe");
            }
            else {
                puVar7 = devm_kmalloc(iVar10,0x20,0xdc0);
                *(arg2 + 0x7a8) = puVar7;
                if (puVar7 == NULL) {
                    uVar9 = 0x800163d;
                    goto code_r0x08004600;
                }
                *puVar7 = uVar5;
                puVar7[1] = 0x8000fc9;
                *(puVar7 + 0x1c) = 0;
                uVar3 = sym.rtc6226_dt_parse_vreg_info(iVar10,puVar7,0x80019e3);
                if (uVar3 < 0) {
                    uVar9 = 0x80011f7;
                    goto code_r0x08004a00;
                }
                iVar4 = sym.rtc6226_pinctrl_init(arg2);
                if (iVar4 != 0) {
                    _printk(0x8000fcd,"rtc6226_i2c_probe",iVar4);
                }
                iVar2 = arg2 + 0x90;
                memcpy(iVar2,obj.rtc6226_viddev_template,0x618);
                uVar9 = _v4l2_compat_ioctl32;
                *(arg2 + 0x670) = reloc.rtc6226_vidioc_querycap.cfi_jt;
                *(arg2 + 0x5e0) = iVar1;
                *(arg2 + 0x240) = 0x1050500;
                *(arg2 + 0x2e0) = arg2;
                *(arg2 + 0xd60) = 300;
                iVar8 = kmem_cache_alloc_trace(uVar9,0xcc0,300);
                *(arg2 + 0x860) = iVar8;
                if (iVar8 == 0) {
                    uVar12 = 0xfffffffb;
                }
                else {
                    *(arg2 + 0x894) = 0;
                    iVar4 = __kfifo_alloc(arg2 + 0xd70,0x100,1,0xcc0);
                    if (iVar4 == 0) {
                        *(arg2 + 0x898) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xd88,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x89c) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xda0,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8a0) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xdb8,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8a4) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xdd0,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8a8) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xde8,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8ac) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe00,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8b0) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe18,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8b4) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe30,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8b8) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe48,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8bc) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe60,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8c0) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe78,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8c4) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe90,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8e0) = 0;
                        *(arg2 + 0x8d8) = 0;
                        *(arg2 + 0x8d0) = 0;
                        *(arg2 + 0x7b0) = 0xffffffff;
                        *(arg2 + 0xd64) = 0;
                        __init_waitqueue_head(arg2 + 0xb08,"&radio->event_queue",obj.rtc6226_i2c_probe.__key);
                        __init_waitqueue_head(arg2 + 0x808,"&radio->read_queue",obj.rtc6226_i2c_probe.__key);
                        __init_waitqueue_head(obj.rtc6226_i2c_probe.__key,"&rtc6226_wq",obj.rtc6226_i2c_probe.__key);
                        iVar8 = alloc_workqueue(0x8000cc5,0xe000a,1,"fmradio");
                        *(arg2 + 0x8d0) = iVar8;
                        if (iVar8 == 0) goto code_r0x080049c8;
                        iVar8 = alloc_workqueue(0x8000cc5,0xe000a,1,"fmradioscan");
                        *(arg2 + 0x8d8) = iVar8;
                        if (iVar8 == 0) {
                            uVar12 = 0xfffffff4;
                        }
                        else {
                            iVar8 = alloc_workqueue(0x8000cc5,0xe000a,1,"fmradiords");
                            *(arg2 + 0x8e0) = iVar8;
                            if (iVar8 == 0) {
                                uVar12 = 0xfffffff4;
                            }
                            else {
                                uVar3 = __video_register_device(iVar2,2,0xffffffff,1,**(arg2 + 0x238));
                                uVar12 = uVar3;
                                if (uVar3 == 0) {
                                    *(param_1 + 0xb8) = arg2;
                                    return 0;
                                }
                                _dev_info(iVar10,"Could not register video device\n");
                                destroy_workqueue(*(arg2 + 0x8e0));
                            }
                            destroy_workqueue(*(arg2 + 0x8d8));
                        }
                        destroy_workqueue(*(arg2 + 0x8d0));
                    }
                    else {
code_r0x080049b0:
                        _printk(0x80009ef,"rtc6226_i2c_probe",iVar4);
code_r0x080049c8:
                        uVar12 = 0xfffffff4;
                    }
                    kfree(*(arg2 + 0x860));
                }
                video_device_release_empty(iVar2);
            }
        }
    }
    else {
        uVar12 = uVar3;
        _printk(0x8000b20,"rtc6226_i2c_probe",uVar12);
    }
    v4l2_device_unregister(iVar1);
code_r0x08004a5c:
    if ((*(arg2 + 0x7a8) == NULL) || (**(arg2 + 0x7a8) == 0)) {
        regulator_put(uVar5);
    }
    else {
        regulator_put();
        devm_kfree(iVar10,*(arg2 + 0x7a8));
    }
    if ((*(arg2 + 0x7a0) == NULL) || (**(arg2 + 0x7a0) == 0)) {
        regulator_put(uVar6);
    }
    else {
        regulator_put();
        devm_kfree(iVar10,*(arg2 + 0x7a0));
    }
    kfree(arg2);
    return uVar12;
}


// ===== sym.rtc6226_isr.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt @ 0x08003468 (size 8) =====

ulong sym.rtc6226_isr.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_delayed_work_on(0x20,*(param_2 + 0x8d0),param_2 + 0x9f8,3);
    return 1;
}


// ===== sym.rtc6226_fops_release.cfi_jt @ 0x08003470 (size 8) =====

int sym.rtc6226_fops_release.cfi_jt(void)

{
    int *piVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = video_devdata();
    iVar6 = *(iVar6 + 0x250);
    if (*(iVar6 + 0x7bc) != 0) {
        sym.rtc6226_power_down(iVar6);
        *(iVar6 + 0x7bc) = 0;
    }
    uVar2 = *(iVar6 + 0x820);
    irq_set_irq_wake(uVar2,0);
    free_irq(uVar2,iVar6);
    cancel_delayed_work_sync(iVar6 + 0x9f8);
    flush_workqueue(*(iVar6 + 0x8d0));
    cancel_work_sync(iVar6 + 0x8e8);
    flush_workqueue(*(iVar6 + 0x8e0));
    cancel_delayed_work_sync(iVar6 + 0xa80);
    flush_workqueue(*(iVar6 + 0x8d8));
    piVar1 = iVar6 + 0x7b8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = *piVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    iVar5 = sym.rtc6226_fm_vdd_reg_cfg(iVar6);
    if (iVar5 < 0) {
        _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar5);
    }
    iVar5 = sym.rtc6226_fm_vio_reg_cfg(iVar6);
    if (iVar5 < 0) {
        _printk(0x80019ba,"rtc6226_fm_power_cfg",iVar5);
        _printk(0x8000c9d,"rtc6226_fops_release");
    }
    return iVar5;
}


// ===== sym.rtc6226_fops_open.cfi_jt @ 0x08003478 (size 8) =====

int sym.rtc6226_fops_open.cfi_jt(void)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = video_devdata();
    iVar6 = *(iVar6 + 0x250);
    piVar1 = iVar6 + 0x7b8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = iVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar4 + 1 != 1) {
        _printk(0x8001144);
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        return -0x10;
    }
    *(iVar6 + 0x9f8) = 0xfffffffe0;
    *(iVar6 + 0xa00) = iVar6 + 0xa00;
    *(iVar6 + 0xa08) = iVar6 + 0xa00;
    *(iVar6 + 0xa10) = sym.rtc6226_handler.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt;
    init_timer_key(iVar6 + 0xa28,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(iVar6 + 0xa80) = 0xfffffffe0;
    *(iVar6 + 0xa88) = iVar6 + 0xa88;
    *(iVar6 + 0xa90) = iVar6 + 0xa88;
    *(iVar6 + 0xa98) = sym.rtc6226_scan.cfi_jt;
    init_timer_key(iVar6 + 0xab0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(iVar6 + 0x8e8) = 0xfffffffe0;
    *(iVar6 + 0x8f0) = iVar6 + 0x8f0;
    *(iVar6 + 0x8f8) = iVar6 + 0x8f0;
    *(iVar6 + 0x900) = sym.rtc6226_rds_handler.cfi_jt;
    iVar4 = sym.rtc6226_fm_vdd_reg_cfg(iVar6);
    if (iVar4 < 0) {
        _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar4);
    }
    else {
        iVar4 = sym.rtc6226_fm_vio_reg_cfg(iVar6);
        if (iVar4 < 0) {
            _printk(0x80019ba,"rtc6226_fm_power_cfg",iVar4);
            sym.rtc6226_fm_vdd_reg_cfg(iVar6);
        }
        else if (iVar4 == 0) {
            iVar4 = sym.rtc6226_enable_irq(iVar6);
            msleep(100);
            if (iVar4 == 0) {
                return 0;
            }
            _printk(0x8001693,"rtc6226_fops_open");
            iVar5 = sym.rtc6226_fm_vdd_reg_cfg(iVar6);
            if (iVar5 < 0) {
                _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar5);
            }
            iVar5 = sym.rtc6226_fm_vio_reg_cfg(iVar6);
            if (iVar5 < 0) {
                _printk(0x80019ba,"rtc6226_fm_power_cfg",iVar5);
            }
            goto code_r0x08003d28;
        }
    }
    _printk(0x8001702,"rtc6226_fops_open");
code_r0x08003d28:
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    return iVar4;
}


// ===== sym.rtc6226_vidioc_g_audio.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003480 (size 8) =====

ulong sym.rtc6226_vidioc_g_audio.33fb64d10f45f9799562c849ae62e6f8.cfi_jt(ulong param_1,ulong param_2,uint *param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *param_3 = 0;
    strlcpy(param_3 + 1,"Radio",0x20);
    *(param_3 + 9) = 1;
    return 0;
}


// ===== sym.rtc6226_vidioc_g_ctrl.cfi_jt @ 0x08003488 (size 8) =====

uint sym.rtc6226_vidioc_g_ctrl.cfi_jt(ulong param_1,ulong param_2,int *param_3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = video_devdata();
    iVar2 = *(iVar2 + 0x250);
    mutex_lock(iVar2 + 0x830);
    iVar1 = *param_3;
    uVar4 = 0;
    if (iVar1 < 0x8000008) {
        switch(iVar1) {
        case 0x98f901:
        case 0x98f902:
            goto code_r0x08007498;
        case 0x98f903:
            uVar3 = *(iVar2 + 0x7c2);
            break;
        case 0x98f904:
            uVar3 = ~*(iVar2 + 0x7c6) >> 0xf & 1;
            break;
        case 0x98f906:
        case 0x98f907:
        case 0x98f90a:
        case 0x98f90b:
        case 0x98f90c:
        case 0x98f90d:
        case 0x98f90f:
        case 0x98f910:
code_r0x080074c0:
            uVar4 = 0xffffffea;
            goto code_r0x08007498;
        case 0x98f908:
code_r0x08007440:
            uVar3 = *(iVar2 + 0x7c6) & 0xf;
            break;
        case 0x98f909:
            uVar3 = *(iVar2 + 0x7b0);
            break;
        case 0x98f90e:
            uVar3 = *(iVar2 + 0x7cc) & 0xf00;
            break;
        case 0x98f911:
            sym.rtc6226_get_all_registers(iVar2);
            uVar3 = *(iVar2 + 0x7d8);
            break;
        default:
            if (iVar1 == 0x980905) goto code_r0x08007440;
            if (iVar1 != 0x980909) goto code_r0x080074c0;
        case 0x98f905:
            uVar3 = (*(iVar2 + 0x7c6) >> 0xe ^ 0xffffffff) & 1;
        }
    }
    else {
        if (iVar1 != 0x8000008) {
            if (iVar1 == 0x8000010) goto code_r0x08007498;
            if (iVar1 != 0x800003e) goto code_r0x080074c0;
        }
        uVar3 = *(iVar2 + 0x7c1);
    }
    uVar4 = 0;
    param_3[1] = uVar3;
code_r0x08007498:
    mutex_unlock(iVar2 + 0x830);
    return uVar4;
}


// ===== sym.rtc6226_vidioc_s_ctrl.cfi_jt @ 0x08003490 (size 8) =====

int sym.rtc6226_vidioc_s_ctrl.cfi_jt(ulong param_1,ulong param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t arg2;
    uint16_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = video_devdata();
    iVar1 = *param_3;
    iVar2 = 0;
    iVar3 = *(iVar3 + 0x250);
    if (0x8000000 < iVar1) {
        switch(iVar1) {
        case 0x8000001:
            if (param_3[1] < 3) {
                *(iVar3 + 0x869) = param_3[1];
                return 0;
            }
            uVar4 = 0x8000a4c;
            break;
        case 0x8000002:
            if (param_3[1] < 0x10) {
                *(iVar3 + 0x828) = param_3[1];
                return 0;
            }
            uVar4 = 0x800105d;
            break;
        case 0x8000003:
            goto code_r0x08007664;
        case 0x8000004:
            if (param_3[1] == 0) {
                *(iVar3 + 0x7bc) = 4;
                iVar1 = sym.rtc6226_disable(iVar3);
                if (iVar1 < 0) {
                    _printk(0x8000ea4,iVar1);
                    *(iVar3 + 0x7bc) = 1;
                    return iVar1;
                }
                return iVar1;
            }
            if (param_3[1] != 1) {
                return 0;
            }
            if (*(iVar3 + 0x7bc) < 2) {
                *(iVar3 + 0x7bc) = 5;
                iVar1 = sym.rtc6226_enable(iVar3);
                if (iVar1 < 0) {
                    _printk(0x800174e,"rtc6226_vidioc_s_ctrl",iVar1);
                    *(iVar3 + 0x7bc) = 0;
                    return iVar1;
                }
                return iVar1;
            }
            uVar4 = 0x8001942;
            break;
        default:
            goto code_r0x08007964;
        case 0x8000006:
        case 0x8000010:
        case 0x8000013:
            if ((*(iVar3 + 0x7ca) >> 0xc & 1) == 0) {
                *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) | 0x1000;
                iVar1 = sym.rtc6226_set_register(iVar3,4);
                if (iVar1 < 0) {
                    *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) & 0xefff;
                    return 0;
                }
            }
            return 0;
        case 0x8000007:
        case 0x800000b:
        case 0x8000012:
        case 0x8000014:
        case 0x800001b:
        case 0x8000029:
        case 0x800002b:
        case 0x800002f:
        case 0x8000032:
        case 0x800003d:
            return 0;
        case 0x8000008:
            uVar6 = param_3[1];
            *(iVar3 + 0x7cc) = (uVar6 & 0x3fc) << 6 | *(iVar3 + 0x7cc) & 0xf0ff;
            iVar1 = sym.rtc6226_set_register(iVar3,5);
            *(iVar3 + 0x7c1) = uVar6 & 0xfc;
            if (iVar1 < 0) {
                _printk(0x8000d97,"rtc6226_vidioc_s_ctrl");
            }
            sym.rtc6226_get_register(iVar3,5);
            return iVar1;
        case 0x800000c:
            goto code_r0x080075f0;
        case 0x800000d:
            uVar5 = *(iVar3 + 0x7ca) | 0xc000;
            goto code_r0x0800794c;
        case 0x800000e:
            goto code_r0x08007610;
        case 0x800000f:
            mutex_lock(iVar3 + 0x830);
            *(iVar3 + 0xb26) = 0;
            *(iVar3 + 0xd64) = 0;
            *(iVar3 + 0xb32) = 0;
            *(iVar3 + 0xb3a) = 0;
            *(iVar3 + 0xb42) = 0;
            *(iVar3 + 0xb4a) = 0;
            *(iVar3 + 0xb52) = 0;
            *(iVar3 + 0xb5a) = 0;
            *(iVar3 + 0xb62) = 0;
            *(iVar3 + 0xb6a) = 0;
            *(iVar3 + 0xb72) = 0;
            *(iVar3 + 0xb7a) = 0;
            *(iVar3 + 0xb82) = 0;
            *(iVar3 + 0xb8a) = 0;
            *(iVar3 + 0xb92) = 0;
            *(iVar3 + 0xb9a) = 0;
            *(iVar3 + 0xba2) = 0;
            *(iVar3 + 0xbaa) = 0;
            *(iVar3 + 0xbb2) = 0;
            *(iVar3 + 0xbba) = 0;
            *(iVar3 + 0xbc2) = 0;
            *(iVar3 + 0xbca) = 0;
            *(iVar3 + 0xbd2) = 0;
            *(iVar3 + 0xbda) = 0;
            *(iVar3 + 0xbe2) = 0;
            *(iVar3 + 0xbea) = 0;
            *(iVar3 + 0xbf2) = 0;
            *(iVar3 + 0xbfa) = 0;
            *(iVar3 + 0xc02) = 0;
            *(iVar3 + 0xc0a) = 0;
            *(iVar3 + 0xc12) = 0;
            *(iVar3 + 0xc1a) = 0;
            *(iVar3 + 0xc22) = 0;
            *(iVar3 + 0xc2a) = 0;
            *(iVar3 + 0xc44) = 0;
            *(iVar3 + 0xc4c) = 0;
            *(iVar3 + 0xc34) = 0;
            *(iVar3 + 0xc3c) = 0;
            memset(*(iVar3 + 0x860),0,*(iVar3 + 0xd60));
            mutex_unlock(iVar3 + 0x830);
            uVar5 = *(iVar3 + 0x7ca) & 0x6fff;
            *(iVar3 + 0x7ca) = uVar5;
            uVar5 = uVar5 | param_3[1] << 0xf;
            *(iVar3 + 0x7ca) = uVar5;
            uVar5 = uVar5 | param_3[1] << 0xc;
            goto code_r0x0800794c;
        case 0x8000011:
            if (param_3[1] == 0) {
                uVar5 = *(iVar3 + 0x7ca) | 0x8000;
            }
            else {
                uVar5 = *(iVar3 + 0x7ca) & 0x7fff;
            }
code_r0x0800794c:
            *(iVar3 + 0x7ca) = uVar5;
            arg2 = 4;
            goto code_r0x08007958;
        case 0x800001e:
            *(iVar3 + 0x7c6) = *(iVar3 + 0x7c6) & 0x7fff | (param_3[1] != 1) << 0xf;
            goto code_r0x080076b0;
        }
        _printk(uVar4,"rtc6226_vidioc_s_ctrl");
code_r0x08007964:
        return -0x16;
    }
    switch(iVar1) {
    case 0x98f901:
        iVar1 = sym.rtc6226_power_up(iVar3);
        goto code_r0x080076c8;
    case 0x98f902:
        iVar1 = sym.rtc6226_power_down(iVar3);
code_r0x080076c8:
        param_3[1] = 0;
        return iVar1;
    case 0x98f903:
    case 0x98f907:
    case 0x98f90b:
        goto code_r0x08007964;
    case 0x98f904:
    case 0x98f90c:
        goto code_r0x08007964;
    case 0x98f905:
        goto code_r0x080075d0;
    case 0x98f906:
code_r0x080075f0:
        uVar5 = *(iVar3 + 0x7c6) & 0xefff | (param_3[1] == 1) << 0xc;
        goto code_r0x080076ac;
    case 0x98f908:
code_r0x0800768c:
        uVar5 = *(iVar3 + 0x7c6) & 0xfff0;
        *(iVar3 + 0x7c6) = uVar5;
        iVar1 = 8;
        if (param_3[1] < 0x10) {
            iVar1 = param_3[1];
        }
        uVar5 = iVar1 | uVar5;
        goto code_r0x080076ac;
    case 0x98f909:
        uVar6 = param_3[1];
        if (uVar6 < 4) {
            *(iVar3 + 0x7ea) = 0x1db0238c2a302a30 >> (uVar6 << 4 & 0x3f);
            *(iVar3 + 0x7ec) = 0x19001db01db0222e >> (uVar6 << 4 & 0x3f);
            uVar6 = param_3[1];
        }
        *(iVar3 + 0x7b0) = uVar6;
        sym.rtc6226_set_register(iVar3,0x14);
        arg2 = 0x15;
        break;
    case 0x98f90a:
code_r0x08007610:
        uVar5 = *(iVar3 + 0x7e8) & 0xe0ff;
        *(iVar3 + 0x7b4) = param_3[1];
        *(iVar3 + 0x7e8) = uVar5;
        uVar6 = param_3[1];
        if (uVar6 < 3) {
            *(iVar3 + 0x7e8) = uVar5 | 0x5000a001400 >> ((uVar6 & 3) << 4);
            uVar6 = param_3[1];
        }
        *(iVar3 + 0x7b4) = uVar6;
        arg2 = 0x13;
        break;
    case 0x98f90d:
code_r0x08007664:
        if (param_3[1] == 0) {
            sym.rtc6226_cancel_seek(iVar3);
            return 0;
        }
        queue_delayed_work_on(0x20,*(iVar3 + 0x8d8),iVar3 + 0xa80,3);
        return 0;
    case 0x98f90e:
        arg2 = 5;
        uVar5 = *(iVar3 + 0x7cc) & 0xf0ff;
        *(iVar3 + 0x7cc) = uVar5;
        *(iVar3 + 0x7cc) = uVar5 | *(param_3 + 1);
        break;
    default:
        if (iVar1 == 0x980905) goto code_r0x0800768c;
        if (iVar1 != 0x980909) {
            return -0x16;
        }
        goto code_r0x080075d0;
    }
code_r0x08007958:
    iVar2 = sym.rtc6226_set_register(iVar3,arg2);
code_r0x08007964:
    return iVar2;
code_r0x080075d0:
    uVar5 = *(iVar3 + 0x7c6) & 0xbfff | (param_3[1] != 1) << 0xe;
code_r0x080076ac:
    *(iVar3 + 0x7c6) = uVar5;
code_r0x080076b0:
    arg2 = 2;
    goto code_r0x08007958;
}


// ===== sym.rtc6226_vidioc_s_hw_freq_seek.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x08003498 (size 8) =====

int sym.rtc6226_vidioc_s_hw_freq_seek.33fb64d10f45f9799562c849ae62e6f8.cfi_jt
              (int64_t param_1,ulong param_2,int64_t param_3)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = video_devdata();
    if ((*(param_1 + 0x41) >> 3 & 1) == 0) {
        iVar4 = *(iVar4 + 0x250);
        *(iVar4 + 0x868) = 0;
        *(iVar4 + 0x7ca) = *(iVar4 + 0x7ca) & 0xefff;
        iVar3 = sym.rtc6226_set_register(iVar4,4);
        if (iVar3 < 0) {
            _printk(0x8001256,"rtc6226_vidioc_s_hw_freq_seek");
        }
        else {
            cVar1 = *(iVar4 + 0x869);
            if (cVar1 == '\x02') {
                *(iVar4 + 0x892) = 0;
                *(iVar4 + 0x882) = 0;
                *(iVar4 + 0x88a) = 0;
                *(iVar4 + 0x872) = 0;
                *(iVar4 + 0x87a) = 0;
                *(iVar4 + 0x86a) = 0;
            }
            else if (cVar1 != '\x01') {
                if (cVar1 != '\0') {
                    _printk(0x8001383,"rtc6226_vidioc_s_hw_freq_seek");
                    return -0x16;
                }
                *(iVar4 + 0x7c0) = 2;
                uVar2 = *(iVar4 + 0x7cc);
                *(iVar4 + 0x7cc) = uVar2 & 0x1fff | (*(param_3 + 8) != 0) << 0xe;
                iVar3 = sym.rtc6226_set_register(iVar4,5);
                if (-1 < iVar3) {
                    *(iVar4 + 0x7cc) = *(iVar4 + 0x7cc) | 0x8000;
                    iVar3 = sym.rtc6226_set_register(iVar4,5);
                    if (-1 < iVar3) {
                        return iVar3;
                    }
                    *(iVar4 + 0x7cc) = uVar2;
                    return iVar3;
                }
                *(iVar4 + 0x7cc) = uVar2;
                return iVar3;
            }
            queue_delayed_work_on(0x20,*(iVar4 + 0x8d8),iVar4 + 0xa80,3);
        }
    }
    else {
        iVar3 = -0xb;
    }
    return iVar3;
}


// ===== sym.rtc6226_i2c_suspend.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt @ 0x080034a0 (size 8) =====

ulong sym.rtc6226_i2c_suspend.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt(void)

{
    return 0;
}


// ===== sym.rtc6226_i2c_resume.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt @ 0x080034a8 (size 8) =====

ulong sym.rtc6226_i2c_resume.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt(void)

{
    return 0;
}


// ===== sym.rtc6226_handler.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt @ 0x080034b0 (size 8) =====

uint64_t sym.rtc6226_handler.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt(int64_t param_1)

{
    int *piVar1;
    uint uVar2;
    uint16_t uVar3;
    char cVar4;
    bool bVar5;
    uint16_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ushort uStack_70;
    uchar uStack_6e;
    uchar auStack_6c [4];
    ulong uStack_68;
    uchar *puStack_60;
    ulong uStack_58;
    uchar *puStack_50;
    int64_t iStack_48;
    
    puStack_50 = &uStack_70;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    puStack_60 = auStack_6c;
    iVar11 = *(param_1 + 0x4d8);
    uStack_70 = 0;
    uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
    uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
    auStack_6c[0] = 10;
    iVar7 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
    if (iVar7 == 2) {
        iVar11 = param_1 + -0x9f8;
        *(param_1 + -0x222) = CONCAT11(uStack_70,uStack_70._1_1_);
        if ((uStack_70 >> 6 & 1) == 0) {
            iVar11 = *(param_1 + 0x4d8);
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_70 = 0;
            uStack_58._0_6_ = CONCAT42(0x20001,*(iVar11 + 2));
            uStack_58 = uStack_58;
            auStack_6c[0] = 0xb;
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(param_1 + 0x4d8);
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            auStack_6c[0] = 0xc;
            *(param_1 + -0x220) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(param_1 + 0x4d8);
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            *(param_1 + -0x21e) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            auStack_6c[0] = 0xd;
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(param_1 + 0x4d8);
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            auStack_6c[0] = 0xe;
            *(param_1 + -0x21c) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(param_1 + 0x4d8);
            puStack_60 = auStack_6c;
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            *(param_1 + -0x21a) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            auStack_6c[0] = 0xf;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            *(param_1 + -0x218) = uStack_70 >> 8 | uStack_70 << 8;
            if (*(param_1 + -0x222) < 0) {
                if ((*(param_1 + -0x22e) >> 0xc & 1) != 0) {
                    uVar9 = queue_work_on(0x20,_delayed_work_timer_fn,param_1 + -0x110);
                }
                goto code_r0x08004290;
            }
            uVar10 = 0x8000f6a;
        }
        else {
            iVar12 = *(param_1 + 0x4d8);
            puStack_60 = auStack_6c;
            uStack_68 = CONCAT62(0x10000,*(iVar12 + 2));
            uStack_58._0_6_ = CONCAT42(0x20001,*(iVar12 + 2));
            uStack_58 = uStack_58;
            uStack_70 = 0;
            auStack_6c[0] = 0xb;
            puStack_50 = &uStack_70;
            iVar7 = i2c_transfer(*(iVar12 + 0x18),&uStack_68,2);
            if (iVar7 == 2) {
                uVar3 = *(param_1 + -0x22c);
                *(param_1 + -0x22c) = uVar3 & 0x7fff;
                *(param_1 + -0x220) = uStack_70 >> 8 | uStack_70 << 8;
                uStack_70 = CONCAT11(uVar3 >> 8 & 0x7f,5);
                uStack_68 = CONCAT62(0x30000,*(*(param_1 + 0x4d8) + 2));
                uStack_6e = uVar3;
                puStack_60 = &uStack_70;
                i2c_transfer(*(*(param_1 + 0x4d8) + 0x18),&uStack_68,1);
                uVar3 = *(param_1 + -0x230);
                *(param_1 + -0x230) = uVar3 & 0x7fff;
                uStack_70 = CONCAT11(uVar3 >> 8,3) & 0x7fff;
                uStack_6e = uVar3;
                uStack_68 = CONCAT62(0x30000,*(*(param_1 + 0x4d8) + 2));
                puStack_60 = &uStack_70;
                iVar7 = i2c_transfer(*(*(param_1 + 0x4d8) + 0x18),&uStack_68,1);
                if (iVar7 != 1) {
                    *(param_1 + -0x230) = uVar3 & 0x7fff;
                }
                uVar9 = sym.rtc6226_reset_rds_data(iVar11);
                cVar4 = *(param_1 + -0x238);
                if (cVar4 != '\x01') {
                    if (cVar4 == '\x03') {
                        uVar9 = complete(param_1 + 0x4b0);
                        goto code_r0x08004290;
                    }
                    if (cVar4 != '\x02') goto code_r0x08004290;
                    sym.rtc6226_rds_on(iVar11);
                    sym.rtc6226_q_event(iVar11,2);
                }
                uVar9 = sym.rtc6226_q_event(iVar11,1);
                *(param_1 + -0x238) = 0;
                goto code_r0x08004290;
            }
            uVar10 = 0x80018a8;
        }
    }
    else {
        uVar10 = 0x800108a;
    }
    uVar9 = _printk(uVar10,"rtc6226_i2c_interrupt_handler");
code_r0x08004290:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return uVar9;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_fops_release;
    iVar11 = video_devdata();
    iVar11 = *(iVar11 + 0x250);
    if (*(iVar11 + 0x7bc) != 0) {
        sym.rtc6226_power_down(iVar11);
        *(iVar11 + 0x7bc) = 0;
    }
    uVar2 = *(iVar11 + 0x820);
    irq_set_irq_wake(uVar2,0);
    free_irq(uVar2,iVar11);
    cancel_delayed_work_sync(iVar11 + 0x9f8);
    flush_workqueue(*(iVar11 + 0x8d0));
    cancel_work_sync(iVar11 + 0x8e8);
    flush_workqueue(*(iVar11 + 0x8e0));
    cancel_delayed_work_sync(iVar11 + 0xa80);
    flush_workqueue(*(iVar11 + 0x8d8));
    piVar1 = iVar11 + 0x7b8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = *piVar1 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    iVar7 = sym.rtc6226_fm_vdd_reg_cfg(iVar11);
    if (iVar7 < 0) {
        _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar7);
    }
    uVar8 = sym.rtc6226_fm_vio_reg_cfg(iVar11);
    if (uVar8 < 0) {
        _printk(0x80019ba,"rtc6226_fm_power_cfg",uVar8);
        _printk(0x8000c9d,"rtc6226_fops_release");
    }
    return uVar8;
}


// ===== sym.rtc6226_rds_handler.cfi_jt @ 0x080034b8 (size 8) =====

void sym.rtc6226_rds_handler.cfi_jt(int64_t param_1)

{
    char *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    uint32_t uVar6;
    char cVar7;
    uchar uVar8;
    uchar uVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    bool bVar16;
    uint uVar17;
    code *pcVar18;
    bool bVar19;
    int iVar20;
    char *pcVar21;
    ulong uVar22;
    uchar *puVar23;
    uint8_t uVar24;
    char cVar25;
    uint8_t uVar26;
    uint64_t uVar27;
    uint8_t uVar28;
    ulong *in_x18;
    uint64_t uVar29;
    ulong *puVar30;
    uint32_t uVar31;
    ulong unaff_x30;
    uint auStack_f0 [2];
    uint uStack_e8;
    uchar auStack_e4 [4];
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    unkbyte7 Stack_80;
    uint uStack_79;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_70 = *(iVar13 + 0x5e0);
    iVar13 = param_1 + -0x8e8;
    if (iVar13 == 0) {
        uVar22 = 0x8000e07;
        pcVar21 = "rtc6226_rds_handler";
    }
    else {
        mutex_lock(param_1 + -0xb8);
        iVar20 = sym.rtc6226_get_all_registers(iVar13);
        if (iVar20 < 0) {
            _printk(0x80015d2,"rtc6226_get_rds",iVar20);
        }
        else {
            uVar24 = *(param_1 + -0x110) >> 8;
            *(param_1 + 0x242) = *(param_1 + -0x10e);
            *(param_1 + 0x246) = *(param_1 + -0x10a);
            *(param_1 + 0x36c) = uVar24 >> 6;
            *(param_1 + 0x36d) = uVar24 >> 4 & 3;
            *(param_1 + 0x36e) = uVar24 >> 2 & 3;
            *(param_1 + 0x36f) = uVar24 & 3;
        }
        mutex_unlock(param_1 + -0xb8);
        if ((*(param_1 + 0x36c) < 2) && (*(param_1 + 0x23e) != *(param_1 + 0x242))) {
            *(param_1 + 0x23e) = *(param_1 + 0x242);
        }
        if (*(param_1 + 0x36d) != '\0') goto code_r0x08006878;
        uVar10 = *(param_1 + 0x244);
        uVar31 = uVar10;
        uVar11 = uVar10 >> 0xb;
        if (((uVar11 & 1) != 0) && (*(param_1 + 0x23e) != *(param_1 + 0x246))) {
            *(param_1 + 0x23e) = *(param_1 + 0x246);
        }
        uVar12 = uVar10 >> 5 & 0x1f;
        if (*(param_1 + 0x240) != uVar12) {
            *(param_1 + 0x240) = uVar12;
        }
        if (uVar11 < 7) {
            switch(uVar11) {
            case 0:
                if (*(param_1 + 0x36e) < 3) {
                    auStack_f0[0] = *(param_1 + -0x40);
                    uVar24 = *(param_1 + 0x247);
                    uStack_e8 = 0;
                    uStack_88 = 0;
                    Stack_80 = 0;
                    uStack_79 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_e0 = 0;
                    sym.rtc6226_get_freq(iVar13,&uStack_e8);
                    uVar17 = uStack_e8;
                    puVar30 = &uStack_e0 | 4;
                    bVar19 = true;
                    do {
                        bVar16 = bVar19;
                        uVar31 = uVar24;
                        if (uVar31 - 0xe1 < 0x19) {
                            *(param_1 + 0xa0) = 0;
                            *(param_1 + 0xa8) = uVar17;
                            *(param_1 + 0xa1) = uVar24 + 0x20;
                            *(param_1 + 0xa4) = *(param_1 + 0x23e);
                        }
                        else if ((uVar31 - 1 < 0xcc) && (iVar20 = *(param_1 + 0xa8), iVar20 != 0)) {
                            uVar24 = *(param_1 + 0xa2);
                            uVar29 = uVar24;
                            if (uVar29 < 0x19) {
                                if (*(param_1 + -0x134) < 3) {
                                    uVar31 = uVar31 * 100 + 0x155cc;
                                    uVar14 = uVar31 + *(param_1 + -0x1c) * -10;
                                    if ((*(param_1 + -0x1c) * 10 <= uVar31) && (uVar31 <= *(param_1 + -0x1a) * 10)) {
                                        uVar6 = *(*(param_1 + -0x134) * 4 + 0x8002284);
                                        uVar15 = 0;
                                        if (uVar6 != 0) {
                                            uVar15 = uVar14 / uVar6;
                                        }
                                        if (uVar14 == uVar15 * uVar6) {
                                            if (uVar24 == 0) {
                                                uVar29 = 0;
                                            }
                                            else {
                                                uVar27 = 0;
                                                bVar19 = true;
                                                do {
                                                    if (uVar27 == 0x19) goto code_r0x08006944;
                                                    if (*(param_1 + 0xac + uVar27 * 4) == uVar31) break;
                                                    uVar27 = uVar27 + 1;
                                                    bVar19 = uVar27 < uVar29;
                                                } while (uVar29 != uVar27);
                                                if (bVar19) goto code_r0x08006144;
                                            }
                                            uVar28 = *(param_1 + 0xa0);
                                            uVar26 = *(param_1 + 0xa1);
                                            uVar14 = uVar24 + 1;
                                            uVar8 = uVar14;
                                            *(param_1 + 0xa2) = uVar8;
                                            *(iVar13 + uVar29 * 4 + 0x994) = uVar31;
                                            if (uVar28 + (uVar14 & 0xff) == uVar26) {
                                                if (*(param_1 + 0x38) == iVar20) {
                                                    if (*(param_1 + 0x32) != 0) {
                                                        uVar29 = 0;
                                                        do {
                                                            if (uVar29 == 0x19) goto code_r0x08006944;
                                                            uVar27 = 0;
                                                            while( true ) {
                                                                if (uVar27 == 0x19) goto code_r0x08006944;
                                                                if (*(iVar13 + uVar29 * 4 + 0x924) ==
                                                                    *(param_1 + 0xac + uVar27 * 4)) break;
                                                                uVar27 = uVar27 + 1;
                                                                if ((uVar14 & 0xff) == uVar27) goto code_r0x08006254;
                                                            }
                                                            if ((uVar14 & 0xff) == (uVar27 & 0xff))
                                                            goto code_r0x08006254;
                                                            uVar29 = uVar29 + 1;
                                                        } while (uVar29 != *(param_1 + 0x32));
                                                    }
                                                }
                                                else {
code_r0x08006254:
                                                    *(param_1 + 0x31) = uVar26;
                                                    *(param_1 + 0x34) = *(param_1 + 0xa4);
                                                    *(param_1 + 0x32) = uVar8;
                                                    *(param_1 + 0x38) = iVar20;
                                                    *(param_1 + 0x8c) = *(param_1 + 0xfc);
                                                    *(param_1 + 0x94) = *(param_1 + 0x104);
                                                    uVar22 = *(param_1 + 0xdc);
                                                    uVar4 = *(param_1 + 0xe4);
                                                    *(param_1 + 0x9c) = *(param_1 + 0x10c);
                                                    uVar3 = *(param_1 + 0xec);
                                                    uVar5 = *(param_1 + 0xf4);
                                                    *(puVar30 + 0x5f) = 0;
                                                    puVar30[10] = 0;
                                                    puVar30[0xb] = 0;
                                                    *(param_1 + 0x6c) = uVar22;
                                                    *(param_1 + 0x74) = uVar4;
                                                    uVar22 = *(param_1 + 0xbc);
                                                    uVar4 = *(param_1 + 0xc4);
                                                    *(param_1 + 0x7c) = uVar3;
                                                    *(param_1 + 0x84) = uVar5;
                                                    uVar3 = *(param_1 + 0xcc);
                                                    uVar5 = *(param_1 + 0xd4);
                                                    puVar30[8] = 0;
                                                    puVar30[9] = 0;
                                                    puVar30[6] = 0;
                                                    puVar30[7] = 0;
                                                    *(param_1 + 0x4c) = uVar22;
                                                    *(param_1 + 0x54) = uVar4;
                                                    uVar22 = *(param_1 + 0xac);
                                                    uVar4 = *(param_1 + 0xb4);
                                                    *(param_1 + 0x5c) = uVar3;
                                                    *(param_1 + 100) = uVar5;
                                                    puVar30[4] = 0;
                                                    puVar30[5] = 0;
                                                    puVar30[2] = 0;
                                                    puVar30[3] = 0;
                                                    *puVar30 = 0;
                                                    puVar30[1] = 0;
                                                    *(param_1 + 0x3c) = uVar22;
                                                    *(param_1 + 0x44) = uVar4;
                                                    uStack_e0 = CONCAT26(CONCAT11(uStack_e0._7_1_,uVar8),
                                                                         CONCAT24(*(param_1 + 0x23e),iVar20));
                                                    memcpy(&uStack_e0 | 7,param_1 + 0x3c,(uVar14 & 0xff) << 2);
                                                    uVar22 = _raw_spin_lock_irqsave(auStack_f0);
                                                    __kfifo_in(param_1 + 0x500,&uStack_e0,uStack_e0._6_1_ * 4 + 7);
                                                    _raw_spin_unlock_irqrestore(auStack_f0,uVar22);
                                                    auStack_e4[0] = 0xf;
                                                    uVar22 = _raw_spin_lock_irqsave(param_1 + -0x50);
                                                    iVar20 = __kfifo_in(param_1 + 0x4a0,auStack_e4,1);
                                                    _raw_spin_unlock_irqrestore(param_1 + -0x50,uVar22);
                                                    if (iVar20 != 0) {
                                                        __wake_up(param_1 + 0x220,1,1,0);
                                                    }
                                                }
                                            }
                                            goto code_r0x080060bc;
                                        }
                                    }
                                }
code_r0x08006144:
                                *(param_1 + 0xa0) = *(param_1 + 0xa0) + '\x01';
                            }
                        }
code_r0x080060bc:
                        uVar24 = *(param_1 + 0x246);
                        bVar19 = false;
                    } while (bVar16);
                    uVar31 = *(param_1 + 0x244);
                }
            case 1:
                if (*(param_1 + 0x36f) < 3) {
                    uVar31 = (uVar31 & 3) << 1;
                    sym.rtc6226_update_ps(iVar13,uVar31,*(param_1 + 0x249));
                    sym.rtc6226_update_ps(iVar13,uVar31 | 1,*(param_1 + 0x248));
                }
                break;
            default:
                goto code_r0x08006924;
            case 4:
                sym.rt_handler(iVar13,uVar10 >> 4 & 1,4,(uVar10 & 0xf) << 2);
                break;
            case 5:
                *(param_1 + 0x2aa) = 0xd;
                *(param_1 + 0x2ea) = 0xd;
                *(param_1 + 0x32a) = 2;
                sym.rt_handler(iVar13,uVar10 >> 4 & 1,2,(uVar10 & 0xf) << 1);
                break;
            case 6:
                uVar10 = uVar10 & 0x1f;
                if (*(param_1 + 0x248) == 0x4bd7) {
                    *(param_1 + 0x475) = *(param_1 + 0x246) >> 0xd & 1;
                    if (uVar10 != *(param_1 + 0x370)) {
                        uStack_e0 = CONCAT71(uStack_e0._1_7_,0x13);
                        uVar22 = _raw_spin_lock_irqsave(param_1 + -0x50);
                        iVar20 = __kfifo_in(param_1 + 0x4a0,&uStack_e0,1);
                        _raw_spin_unlock_irqrestore(param_1 + -0x50,uVar22);
                        if (iVar20 != 0) {
                            __wake_up(param_1 + 0x220,1,1,0);
                        }
                        *(param_1 + 0x370) = uVar10;
                    }
                }
                else if (*(param_1 + 0x248) == 0x6552) {
                    *(param_1 + 0x474) = *(param_1 + 0x246) & 1;
                    *(param_1 + 0x476) = *(param_1 + 0x246) >> 1 & 1;
                    if (uVar10 != *(param_1 + 0x371)) {
                        uStack_e0 = CONCAT71(uStack_e0._1_7_,0x13);
                        uVar22 = _raw_spin_lock_irqsave(param_1 + -0x50);
                        iVar20 = __kfifo_in(param_1 + 0x4a0,&uStack_e0,1);
                        _raw_spin_unlock_irqrestore(param_1 + -0x50,uVar22);
                        if (iVar20 != 0) {
                            __wake_up(param_1 + 0x220,1,1,0);
                        }
                        *(param_1 + 0x371) = uVar10;
                    }
                }
            }
        }
        else {
code_r0x08006924:
            _printk(0x8001317,"rtc6226_rds_handler",uVar11);
        }
        if ((*(param_1 + 0x370) == 0) || (uVar11 != *(param_1 + 0x370))) {
            if ((*(param_1 + 0x371) == 0) || (uVar11 != *(param_1 + 0x371))) goto code_r0x08006878;
            uVar10 = *(param_1 + 0x244);
            if ((uVar10 & 0x1f) == 0) {
                uVar24 = 0;
                *(param_1 + 0x472) = 0;
                if ((uVar10 & 0x1f) != 0) goto code_r0x080067b0;
code_r0x08006674:
                if (*(param_1 + 0x472) == 0xff) goto code_r0x08006878;
                uVar11 = *(param_1 + 0x246);
                iVar2 = iVar13 + *(param_1 + 0x472);
                cVar25 = *(param_1 + 0x474);
                *(iVar2 + 0xc5b) = uVar11;
                uVar26 = *(param_1 + 0x472);
                *(iVar2 + 0xc5a) = uVar11 >> 8;
                uVar28 = uVar26 + 2;
                *(param_1 + 0x472) = uVar28;
                if ((cVar25 == '\0') && (uVar11 == 0xd)) {
code_r0x080066b0:
                    *(param_1 + 0x472) = uVar26;
                    uVar28 = uVar26;
code_r0x080066b8:
                    if ((uVar28 != 0) && (puVar23 = __kmalloc(uVar28 + 3,0xa20), puVar23 != NULL)) {
                        uVar8 = *(param_1 + 0x474);
                        uVar9 = *(param_1 + 0x476);
                        *puVar23 = *(param_1 + 0x472);
                        puVar23[1] = uVar8;
                        puVar23[2] = uVar9;
                        memcpy(puVar23 + 3,param_1 + 0x372);
                        uVar22 = _raw_spin_lock_irqsave(param_1 + -0x24);
                        __kfifo_in(param_1 + 0x5a8,puVar23,*(param_1 + 0x472) + 3);
                        _raw_spin_unlock_irqrestore(param_1 + -0x24,uVar22);
                        uStack_e0 = CONCAT71(uStack_e0._1_7_,0x15);
                        uVar22 = _raw_spin_lock_irqsave(param_1 + -0x50);
                        iVar20 = __kfifo_in(param_1 + 0x4a0,&uStack_e0,1);
                        _raw_spin_unlock_irqrestore(param_1 + -0x50,uVar22);
                        if (iVar20 != 0) {
                            __wake_up(param_1 + 0x220,1,1,0);
                        }
                        kfree(puVar23);
                    }
                    uVar24 = 0;
                    *(param_1 + 0x472) = 0;
                }
                else {
                    if (cVar25 == '\x01') {
                        if ((uVar11 & 0xff00) != 0xd00) {
                            if ((uVar11 & 0xff) != 0xd) goto code_r0x080068b4;
code_r0x08006850:
                            uVar26 = uVar26 + 1;
                        }
                        goto code_r0x080066b0;
                    }
code_r0x080068b4:
                    if (uVar28 == 0xff) goto code_r0x08006878;
                    uVar11 = *(param_1 + 0x248);
                    *(iVar13 + uVar28 + 0xc5b) = uVar11;
                    uVar26 = *(param_1 + 0x472);
                    *(iVar13 + uVar28 + 0xc5a) = uVar11 >> 8;
                    uVar28 = uVar26 + 2;
                    *(param_1 + 0x472) = uVar28;
                    if ((cVar25 == '\0') && (uVar11 == 0xd)) goto code_r0x080066b0;
                    if (cVar25 == '\x01') {
                        if ((uVar11 & 0xff00) == 0xd00) goto code_r0x080066b0;
                        if ((uVar11 & 0xff) == 0xd) goto code_r0x08006850;
                    }
                    if (((uVar10 & 0x1f) == 0x1f) || (uVar11 == 0xd)) goto code_r0x080066b8;
                }
                cVar25 = uVar24 + 1;
            }
            else {
                uVar24 = *(param_1 + 0x473);
                if ((uVar10 & 0x1f) == uVar24) goto code_r0x08006674;
code_r0x080067b0:
                cVar25 = '\0';
                *(param_1 + 0x472) = 0;
            }
            *(param_1 + 0x473) = cVar25;
            goto code_r0x08006878;
        }
        uVar11 = *(param_1 + 0x246);
        uVar10 = uVar11 >> 0xd | (*(param_1 + 0x244) & 7) << 3;
        uVar11 = uVar11 >> 0xb | (uVar11 & 1) << 5;
        cVar25 = '\0';
        if (uVar10 != 0) {
            cVar25 = '\x03';
        }
        if (uVar11 == 0 && uVar10 == 0) {
            uVar22 = 0x8000e24;
        }
        else {
            if (uVar11 != 0) {
                cVar25 = cVar25 + '\x03';
            }
            pcVar21 = __kmalloc(cVar25 + '\x02',0xa20);
            if (pcVar21 != NULL) {
                cVar7 = *(param_1 + 0x475);
                *pcVar21 = cVar25 + '\x02';
                pcVar21[1] = cVar7;
                if (uVar10 == 0) {
                    uVar29 = 2;
                }
                else {
                    uVar12 = *(param_1 + 0x246);
                    uVar29 = 5;
                    pcVar21[2] = uVar10;
                    pcVar21[3] = uVar12 >> 7 & 0x3f;
                    pcVar21[4] = uVar12 >> 1 & 0x3f;
                }
                if (uVar11 != 0) {
                    uVar10 = *(param_1 + 0x248);
                    pcVar1 = pcVar21 + uVar29;
                    uVar29 = uVar29 + 3;
                    *pcVar1 = uVar11;
                    pcVar1[1] = uVar10 >> 5 & 0x3f;
                    pcVar1[2] = uVar10 & 0x1f;
                }
                uVar22 = _raw_spin_lock_irqsave(param_1 + -0x28);
                __kfifo_in(param_1 + 0x590,pcVar21,uVar29);
                _raw_spin_unlock_irqrestore(param_1 + -0x28,uVar22);
                uStack_e0 = CONCAT71(uStack_e0._1_7_,0x14);
                uVar22 = _raw_spin_lock_irqsave(param_1 + -0x50);
                iVar20 = __kfifo_in(param_1 + 0x4a0,&uStack_e0,1);
                _raw_spin_unlock_irqrestore(param_1 + -0x50,uVar22);
                if (iVar20 != 0) {
                    __wake_up(param_1 + 0x220,1,1,0);
                }
                kfree(pcVar21);
                goto code_r0x08006878;
            }
            uVar22 = 0x8000eca;
        }
        pcVar21 = "rtc6226_rt_plus";
    }
    _printk(uVar22,pcVar21);
code_r0x08006878:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail();
code_r0x08006944:
    //WARNING: Does not return
    pcVar18 = SoftwareBreakpoint(0x5512,0x8006948);
    (*pcVar18)();
}


// ===== sym.rtc6226_scan.cfi_jt @ 0x080034c0 (size 8) =====

void sym.rtc6226_scan.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t arg1;
    int64_t iVar10;
    ulong unaff_x30;
    ulong uStack_74;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    arg1 = param_1 + -0xa80;
    iStack_68 = *(iVar10 + 0x5e0);
    uStack_74 = 0;
    iVar5 = sym.rtc6226_get_freq(arg1,&uStack_74 + 4);
    if (iVar5 < 0) {
code_r0x08005304:
        uVar7 = 0x8001177;
code_r0x0800530c:
        _printk(uVar7,"rtc6226_scan");
    }
    else {
        *(param_1 + -0x2c0) = 3;
        iVar5 = sym.rtc6226_set_freq(arg1,*(param_1 + -0x1b4) * 10);
        if (-1 < iVar5) {
            iVar10 = param_1 + 0x428;
            iVar8 = wait_for_completion_timeout(iVar10,0x2ee);
            if (iVar8 == 0) {
                _printk(0x80015a3,"rtc6226_scan");
                auStack_6c[0] = 7;
                uVar7 = _raw_spin_lock_irqsave(param_1 + -0x1e8);
                iVar5 = __kfifo_in(param_1 + 0x308,auStack_6c,1);
                _raw_spin_unlock_irqrestore(param_1 + -0x1e8,uVar7);
                if (iVar5 != 0) {
                    __wake_up(param_1 + 0x88,1,1,0);
                }
                goto code_r0x080055a4;
            }
            iVar8 = param_1 + -0x1e8;
            do {
                if (*(param_1 + -0x218) != '\0') {
code_r0x080058e0:
                    _printk(0x80010fd,"rtc6226_scan");
                    if (*(param_1 + -0x217) != '\x02') goto code_r0x080053e0;
                    goto code_r0x08005344;
                }
                if (*(param_1 + -0x2c4) != 1) {
code_r0x08005904:
                    _printk(0x80012c7,"rtc6226_scan");
                    goto code_r0x08005938;
                }
                uVar2 = *(param_1 + -0x2b4);
                *(param_1 + -0x2b4) = uVar2 & 0x1fff | 0x6000;
                iVar5 = sym.rtc6226_set_register(arg1,5);
                if (iVar5 < 0) {
code_r0x080058c0:
                    *(param_1 + -0x2b4) = uVar2;
                    goto code_r0x080058c8;
                }
                *(param_1 + -0x2b4) = *(param_1 + -0x2b4) | 0x8000;
                iVar5 = sym.rtc6226_set_register(arg1,5);
                if (iVar5 < 0) goto code_r0x080058c0;
                iVar9 = wait_for_completion_timeout(iVar10,0xea6);
                if (iVar9 == 0) {
                    _printk(0x8000b59,"rtc6226_scan");
                    sym.rtc6226_get_all_registers(arg1);
                    goto code_r0x08005938;
                }
                _printk(0x80012f1,"rtc6226_scan");
                iVar5 = sym.rtc6226_get_freq(arg1,&uStack_74);
                if (iVar5 < 0) goto code_r0x08005304;
                iVar5 = sym.rtc6226_get_register(arg1,0xb);
                if (iVar5 < 0) goto code_r0x080059a8;
                uVar1 = *(param_1 + -0x2a8);
                if ((*(param_1 + -0x217) == '\x01') && (*(param_1 + -0x2bf) <= uVar1)) {
                    auStack_6c[0] = 1;
                    uVar7 = _raw_spin_lock_irqsave(iVar8);
                    iVar5 = __kfifo_in(param_1 + 0x308,auStack_6c,1);
                    _raw_spin_unlock_irqrestore(iVar8,uVar7);
                    if (iVar5 != 0) {
                        __wake_up(param_1 + 0x88,1,1,0);
                    }
                }
                if (*(param_1 + -0x218) != '\0') goto code_r0x080058e0;
                if (*(param_1 + -0x2c4) != 1) goto code_r0x08005904;
                if (*(param_1 + -0x217) == '\x02') {
                    if (*(param_1 + -0x2bf) <= uVar1) {
                        uVar1 = *(param_1 + -0x216);
                        if (0x13 < uVar1) goto code_r0x08005a1c;
                        uVar3 = (uStack_74 + *(param_1 + -0x1b4) * -10) / 0x32;
                        *(param_1 + uVar1 * 2 + -0x215) = uVar3 >> 8 & 0xff | (uVar3 & 0xff00ff) << 8;
                        *(param_1 + -0x216) = uVar1 + 1;
                    }
                }
                else if ((*(param_1 + -0x217) == '\x01') && (*(param_1 + -0x2bf) <= uVar1)) {
                    msleep(*(param_1 + -600) * 1000);
                    auStack_6c[0] = 3;
                    uVar7 = _raw_spin_lock_irqsave(iVar8);
                    iVar5 = __kfifo_in(param_1 + 0x308,auStack_6c,1);
                    _raw_spin_unlock_irqrestore(iVar8,uVar7);
                    if (iVar5 != 0) {
                        __wake_up(param_1 + 0x88,1,1,0);
                    }
                }
            } while (((*(param_1 + -0x2aa) >> 0xd & 1) == 0) && (*(param_1 + -0x1b2) * 10 != uStack_74));
            _printk(0x80014ec,"rtc6226_scan");
            uVar2 = *(param_1 + -0x2b4);
            *(param_1 + -0x2b4) = uVar2 & 0x1fff | 0x4000;
            iVar5 = sym.rtc6226_set_register(arg1,5);
            if (-1 < iVar5) {
                *(param_1 + -0x2b4) = *(param_1 + -0x2b4) | 0x8000;
                iVar5 = sym.rtc6226_set_register(arg1,5);
                if (-1 < iVar5) {
                    iVar10 = wait_for_completion_timeout(iVar10,0xea6,iVar5);
                    if (iVar10 == 0) {
                        _printk(0x8000a1c);
code_r0x08005938:
                        sym.rtc6226_q_event(arg1,7);
                        goto code_r0x080055a4;
                    }
                    _printk(0x80012f1,"rtc6226_scan");
                    iVar5 = sym.rtc6226_get_freq(arg1,&uStack_74);
                    if (iVar5 < 0) {
                        uVar7 = 0x8000d15;
                    }
                    else {
                        iVar5 = sym.rtc6226_get_register(arg1,0xb);
                        if (-1 < iVar5) {
                            if ((*(param_1 + -0x1b4) * 10 == uStack_74) && (*(param_1 + -0x2bf) <= *(param_1 + -0x2a8)))
                            {
                                _printk(0x8000beb);
                                sym.rtc6226_q_event(arg1,1);
                                msleep(*(param_1 + -600) * 1000);
                                sym.rtc6226_q_event(arg1,3);
                            }
                            goto code_r0x08005344;
                        }
code_r0x080059a8:
                        uVar7 = 0x80018a8;
                    }
                    goto code_r0x0800530c;
                }
            }
            *(param_1 + -0x2b4) = uVar2;
code_r0x080058c8:
            _printk(0x8000e88,"rtc6226_scan",iVar5);
        }
    }
code_r0x08005344:
    if (*(param_1 + -0x217) == '\x02') {
        uVar1 = *(param_1 + -0x216);
        uVar7 = _raw_spin_lock_irqsave(param_1 + -0x1ec);
        __kfifo_in(param_1 + 0x2f0,param_1 + -0x216,uVar1 << 1 | 1);
        _raw_spin_unlock_irqrestore(param_1 + -0x1ec,uVar7);
        auStack_6c[0] = 0xe;
        uVar7 = _raw_spin_lock_irqsave(param_1 + -0x1e8);
        iVar5 = __kfifo_in(param_1 + 0x308,auStack_6c,1);
        _raw_spin_unlock_irqrestore(param_1 + -0x1e8,uVar7);
        if (iVar5 != 0) {
            __wake_up(param_1 + 0x88,1,1,0);
        }
    }
code_r0x080053e0:
    iVar5 = sym.rtc6226_set_freq(arg1,uStack_74._4_4_);
    if (iVar5 < 0) {
        _printk(0x800099e,"rtc6226_scan",iVar5);
    }
    else {
        iVar10 = wait_for_completion_timeout(param_1 + 0x428,0x2ee);
        if (iVar10 == 0) {
            uVar7 = 0x800190b;
        }
        else {
            uVar7 = 0x8000aa9;
        }
        _printk(uVar7,"rtc6226_scan");
    }
    *(param_1 + -0x2b6) = *(param_1 + -0x2b6) | 0x1000;
    iVar6 = sym.rtc6226_set_register(arg1,4);
    if (iVar6 < 0) {
        *(param_1 + -0x2b6) = *(param_1 + -0x2b6) & 0xefff;
    }
    iVar10 = param_1 + -0x1e8;
    auStack_6c[0] = 2;
    uVar7 = _raw_spin_lock_irqsave(iVar10);
    iVar6 = __kfifo_in(param_1 + 0x308,auStack_6c,1);
    _raw_spin_unlock_irqrestore(iVar10,uVar7);
    if (iVar6 != 0) {
        __wake_up(param_1 + 0x88,1,1,0);
    }
    auStack_6c[0] = 1;
    uVar7 = _raw_spin_lock_irqsave(iVar10);
    iVar6 = __kfifo_in(param_1 + 0x308,auStack_6c,1);
    _raw_spin_unlock_irqrestore(iVar10,uVar7);
    if (iVar6 != 0) {
        __wake_up(param_1 + 0x88,1,1,0);
    }
    *(param_1 + -0x2c0) = 0;
    _printk(0x8000f8c,"rtc6226_scan",iVar5);
code_r0x080055a4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08005a1c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8005a20);
    (*pcVar4)();
}


// ===== sym.v4l2_compat_ioctl32.cfi_jt @ 0x080034c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.v4l2_compat_ioctl32.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.video_ioctl2.cfi_jt @ 0x080034d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.video_ioctl2.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.rtc6226_vidioc_g_tuner.33fb64d10f45f9799562c849ae62e6f8.cfi_jt @ 0x080034d8 (size 8) =====

int sym.rtc6226_vidioc_g_tuner.33fb64d10f45f9799562c849ae62e6f8.cfi_jt(ulong param_1,ulong param_2,int *param_3)

{
    uint32_t uVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uchar *puVar8;
    int *piVar9;
    uint16_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_50 [4];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    puVar8 = auStack_50;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar9 = param_3;
    iVar6 = video_devdata();
    if (*param_3 == 0) {
        iVar6 = *(iVar6 + 0x250);
        iVar5 = sym.rtc6226_get_register(iVar6,0xb);
        if (-1 < iVar5) {
            strlcpy(param_3 + 1,0x80016ff,0x20);
            param_3[9] = 1;
            param_3[10] = 0x191;
            param_3[0xc] = (*(iVar6 + 0x7ea) & 0x7fff) * 0xa0;
            param_3[0xb] = (*(iVar6 + 0x7ec) & 0x7fff) * 0xa0;
            iVar4 = 0x11;
            if ((*(iVar6 + 0x7d6) & 0x400) != 0) {
                iVar4 = 0x13;
            }
            param_3[0xd] = iVar4;
            if ((*(iVar6 + 0x7c7) >> 5 & 1) == 0) {
                param_3[0xe] = 1;
                auStack_50[0] = 10;
                uVar7 = _raw_spin_lock_irqsave(iVar6 + 0x898);
            }
            else {
                param_3[0xe] = 0;
                auStack_4c[0] = 0xb;
                uVar7 = _raw_spin_lock_irqsave(iVar6 + 0x898);
                puVar8 = auStack_4c;
            }
            piVar9 = 0x1;
            iVar4 = __kfifo_in(iVar6 + 0xd88,puVar8);
            _raw_spin_unlock_irqrestore(iVar6 + 0x898,uVar7);
            if (iVar4 != 0) {
                piVar9 = 0x1;
                __wake_up(iVar6 + 0xb08,1,1,0);
            }
            param_3[0xf] = *(iVar6 + 0x7d8);
        }
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return iVar5;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_vidioc_s_tuner;
    iVar6 = video_devdata();
    if (*piVar9 != 0) {
        return 0;
    }
    iVar6 = *(iVar6 + 0x250);
    if (piVar9[0xe] == 1) {
        uVar10 = *(iVar6 + 0x7c6) & 0xdfff;
    }
    else {
        if (piVar9[0xe] != 0) goto code_r0x080080e4;
        uVar10 = *(iVar6 + 0x7c6) | 0x2000;
    }
    *(iVar6 + 0x7c6) = uVar10;
code_r0x080080e4:
    sym.rtc6226_set_register(iVar6,2);
    uVar1 = piVar9[0xb];
    uVar2 = piVar9[0xc] / 0xa0;
    *(iVar6 + 0x7ea) = uVar2;
    uVar3 = uVar1 / 0xa0;
    *(iVar6 + 0x7ec) = uVar3;
    iVar5 = sym.rtc6226_set_register(iVar6,0x14);
    if (iVar5 < 0) {
        _printk(0x80017ae,"rtc6226_vidioc_s_tuner",iVar5);
    }
    else {
        *(iVar6 + 0x8ce) = uVar2;
    }
    iVar5 = sym.rtc6226_set_register(iVar6,0x15);
    if (iVar5 < 0) {
        _printk(0x8001221,"rtc6226_vidioc_s_tuner",iVar5);
    }
    else {
        *(iVar6 + 0x8cc) = uVar3;
    }
    return iVar5;
}


// ===== sym.rtc6226_get_register @ 0x080034e0 (size 232) =====

void sym.rtc6226_get_register(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    uint16_t auStack_50 [2];
    uchar auStack_4c [4];
    ulong uStack_48;
    uchar *puStack_40;
    ulong uStack_38;
    uchar *puStack_30;
    int64_t iStack_28;
    
    puStack_30 = auStack_50;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    puStack_40 = auStack_4c;
    iVar4 = *(arg1 + 0xed0);
    auStack_4c[0] = arg2;
    uStack_48 = CONCAT62(0x10000,*(iVar4 + 2));
    auStack_50[0] = 0;
    uStack_38 = CONCAT62(0x20001,*(iVar4 + 2));
    iVar2 = i2c_transfer(*(iVar4 + 0x18),&uStack_48,2);
    if (iVar2 == 2) {
        if (0x1f < arg2) goto code_r0x080035c4;
        uVar3 = 0;
        *(arg1 + (arg2 & 0xffffffffU) * 2 + 0x7c2) = auStack_50[0] >> 8 | auStack_50[0] << 8;
    }
    else {
        uVar3 = 0xfffffffb;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return;
    }
    __stack_chk_fail(uVar3);
code_r0x080035c4:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80035c8);
    (*pcVar1)();
}


// ===== sym.rtc6226_set_register @ 0x080035c8 (size 180) =====

uint sym.rtc6226_set_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint16_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong unaff_x30;
    uchar auVar9 [16];
    uchar auStack_cc [4];
    ushort uStack_c8;
    unkbyte6 Stack_c6;
    ulong *puStack_c0;
    ushort uStack_b8;
    unkbyte6 Stack_b6;
    uchar *puStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar **ppuStack_80;
    code *pcStack_78;
    uchar uStack_5c;
    uint16_t uStack_5b;
    ushort uStack_58;
    unkbyte6 Stack_56;
    uchar *puStack_50;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    uchar auStack_2c [4];
    ushort uStack_28;
    unkbyte6 Stack_26;
    uchar *puStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_18 = *(iVar6 + 0x5e0);
    puStack_20 = auStack_2c;
    auStack_2c._1_2_ = 0;
    auStack_2c[0] = arg2;
    _uStack_28 = CONCAT62(0x30000,*(*(arg1 + 0xed0) + 2));
    uVar1 = arg2 & 0xff;
    if (0x1f < uVar1) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8003678);
        (*pcVar3)();
    }
    uStack_5c = 1;
    uVar2 = *(arg1 + uVar1 * 2 + 0x7c2);
    auStack_2c._1_2_ = uVar2 >> 8 | uVar2 << 8;
    iVar4 = i2c_transfer(*(*(arg1 + 0xed0) + 0x18),&uStack_28);
    iVar6 = sp_el0;
    uVar7 = 0;
    if (iVar4 != 1) {
        uVar7 = 0xfffffffb;
    }
    if (*(iVar6 + 0x5e0) == iStack_18) {
        return uVar7;
    }
    auVar9 = __stack_chk_fail(uVar7);
    *extraout_x18 = sym.rtc6226_set_serial_registers;
    pcStack_38 = sym.rtc6226_set_serial_registers;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    puStack_50 = &uStack_5c;
    iVar6 = *(auVar9._0_8_ + 0xed0);
    uStack_5b = *auVar9._8_8_ >> 8 | *auVar9._8_8_ << 8;
    _uStack_58 = CONCAT62(0x30000,*(iVar6 + 2));
    puStack_40 = &stack0xfffffffffffffff0;
    iVar4 = i2c_transfer(*(iVar6 + 0x18),&uStack_58,1);
    iVar6 = sp_el0;
    uVar7 = 0;
    if (iVar4 != 1) {
        uVar7 = 0xfffffffb;
    }
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    iVar5 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.rtc6226_get_all_registers;
    pcStack_78 = sym.rtc6226_get_all_registers;
    iVar6 = sp_el0;
    iStack_88 = *(iVar6 + 0x5e0);
    puStack_b0 = auStack_cc;
    iVar6 = 1;
    iVar8 = *(iVar5 + 0xed0);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    auStack_cc[0] = 0;
    _uStack_b8 = CONCAT62(0x10000,*(iVar8 + 2));
    puStack_c0 = &uStack_a8;
    _uStack_c8 = CONCAT62(0x200001,*(iVar8 + 2));
    ppuStack_80 = &puStack_40;
    iVar4 = i2c_transfer(*(iVar8 + 0x18),&uStack_b8);
    if (iVar4 == 1) {
        iVar6 = 1;
        iVar4 = i2c_transfer(*(*(iVar5 + 0xed0) + 0x18),&uStack_c8);
        if (-1 < iVar4) {
            uVar7 = 0;
            *(iVar5 + 0x7c2) = uStack_a8 >> 8 | uStack_a8 << 8;
            *(iVar5 + 0x7c4) = uStack_a8._2_2_ >> 8 | uStack_a8._2_2_ << 8;
            *(iVar5 + 0x7c6) = uStack_a8._4_2_ >> 8 | uStack_a8._4_2_ << 8;
            *(iVar5 + 0x7c8) = uStack_a8._6_2_ >> 8 | uStack_a8._6_2_ << 8;
            *(iVar5 + 0x7ca) = uStack_a0 >> 8 | uStack_a0 << 8;
            *(iVar5 + 0x7cc) = uStack_a0._2_2_ >> 8 | uStack_a0._2_2_ << 8;
            *(iVar5 + 0x7ce) = uStack_a0._4_2_ >> 8 | uStack_a0._4_2_ << 8;
            *(iVar5 + 2000) = uStack_a0._6_2_ >> 8 | uStack_a0._6_2_ << 8;
            *(iVar5 + 0x7d2) = uStack_98 >> 8 | uStack_98 << 8;
            *(iVar5 + 0x7d4) = uStack_98._2_2_ >> 8 | uStack_98._2_2_ << 8;
            *(iVar5 + 0x7d6) = uStack_98._4_2_ >> 8 | uStack_98._4_2_ << 8;
            *(iVar5 + 0x7d8) = uStack_98._6_2_ >> 8 | uStack_98._6_2_ << 8;
            *(iVar5 + 0x7da) = uStack_90 >> 8 | uStack_90 << 8;
            *(iVar5 + 0x7dc) = uStack_90._2_2_ >> 8 | uStack_90._2_2_ << 8;
            *(iVar5 + 0x7de) = uStack_90._4_2_ >> 8 | uStack_90._4_2_ << 8;
            *(iVar5 + 0x7e0) = uStack_90._6_2_ >> 8 | uStack_90._6_2_ << 8;
            goto code_r0x080038bc;
        }
    }
    uVar7 = 0xfffffffb;
code_r0x080038bc:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_88) {
        return uVar7;
    }
    __stack_chk_fail(uVar7);
    *extraout_x18_01 = sym.rtc6226_vidioc_querycap;
    strlcpy(iVar6,"rtc6226-fmtuner",0x10);
    strlcpy(iVar6 + 0x10,"Richwave rtc6226 FM Tuner",0x20);
    *(iVar6 + 0x54) = 0x105050081050500;
    return 0;
}


// ===== sym.rtc6226_set_serial_registers @ 0x0800367c (size 152) =====

uint sym.rtc6226_set_serial_registers(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong unaff_x30;
    uchar auStack_9c [4];
    ushort uStack_98;
    unkbyte6 Stack_96;
    ulong *puStack_90;
    ushort uStack_88;
    unkbyte6 Stack_86;
    uchar *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    uchar uStack_2c;
    uint16_t uStack_2b;
    ushort uStack_28;
    unkbyte6 Stack_26;
    uchar *puStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_18 = *(iVar3 + 0x5e0);
    puStack_20 = &uStack_2c;
    uStack_2c = arg3;
    uStack_2b = *arg2 >> 8 | *arg2 << 8;
    _uStack_28 = CONCAT62(0x30000,*(*(arg1 + 0xed0) + 2));
    iVar1 = i2c_transfer(*(*(arg1 + 0xed0) + 0x18),&uStack_28,1);
    iVar3 = sp_el0;
    uVar4 = 0;
    if (iVar1 != 1) {
        uVar4 = 0xfffffffb;
    }
    if (*(iVar3 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    iVar2 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.rtc6226_get_all_registers;
    pcStack_48 = sym.rtc6226_get_all_registers;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    puStack_80 = auStack_9c;
    iVar3 = 1;
    iVar5 = *(iVar2 + 0xed0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    auStack_9c[0] = 0;
    _uStack_88 = CONCAT62(0x10000,*(iVar5 + 2));
    puStack_90 = &uStack_78;
    _uStack_98 = CONCAT62(0x200001,*(iVar5 + 2));
    puStack_50 = &stack0xfffffffffffffff0;
    iVar1 = i2c_transfer(*(iVar5 + 0x18),&uStack_88);
    if (iVar1 == 1) {
        iVar3 = 1;
        iVar1 = i2c_transfer(*(*(iVar2 + 0xed0) + 0x18),&uStack_98);
        if (-1 < iVar1) {
            uVar4 = 0;
            *(iVar2 + 0x7c2) = uStack_78 >> 8 | uStack_78 << 8;
            *(iVar2 + 0x7c4) = uStack_78._2_2_ >> 8 | uStack_78._2_2_ << 8;
            *(iVar2 + 0x7c6) = uStack_78._4_2_ >> 8 | uStack_78._4_2_ << 8;
            *(iVar2 + 0x7c8) = uStack_78._6_2_ >> 8 | uStack_78._6_2_ << 8;
            *(iVar2 + 0x7ca) = uStack_70 >> 8 | uStack_70 << 8;
            *(iVar2 + 0x7cc) = uStack_70._2_2_ >> 8 | uStack_70._2_2_ << 8;
            *(iVar2 + 0x7ce) = uStack_70._4_2_ >> 8 | uStack_70._4_2_ << 8;
            *(iVar2 + 2000) = uStack_70._6_2_ >> 8 | uStack_70._6_2_ << 8;
            *(iVar2 + 0x7d2) = uStack_68 >> 8 | uStack_68 << 8;
            *(iVar2 + 0x7d4) = uStack_68._2_2_ >> 8 | uStack_68._2_2_ << 8;
            *(iVar2 + 0x7d6) = uStack_68._4_2_ >> 8 | uStack_68._4_2_ << 8;
            *(iVar2 + 0x7d8) = uStack_68._6_2_ >> 8 | uStack_68._6_2_ << 8;
            *(iVar2 + 0x7da) = uStack_60 >> 8 | uStack_60 << 8;
            *(iVar2 + 0x7dc) = uStack_60._2_2_ >> 8 | uStack_60._2_2_ << 8;
            *(iVar2 + 0x7de) = uStack_60._4_2_ >> 8 | uStack_60._4_2_ << 8;
            *(iVar2 + 0x7e0) = uStack_60._6_2_ >> 8 | uStack_60._6_2_ << 8;
            goto code_r0x080038bc;
        }
    }
    uVar4 = 0xfffffffb;
code_r0x080038bc:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_58) {
        return uVar4;
    }
    __stack_chk_fail(uVar4);
    *extraout_x18_00 = sym.rtc6226_vidioc_querycap;
    strlcpy(iVar3,"rtc6226-fmtuner",0x10);
    strlcpy(iVar3 + 0x10,"Richwave rtc6226 FM Tuner",0x20);
    *(iVar3 + 0x54) = 0x105050081050500;
    return 0;
}


// ===== sym.rtc6226_get_all_registers @ 0x08003714 (size 472) =====

ulong sym.rtc6226_get_all_registers(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_6c [4];
    ushort uStack_68;
    unkbyte6 Stack_66;
    ulong *puStack_60;
    ushort uStack_58;
    unkbyte6 Stack_56;
    uchar *puStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    puStack_50 = auStack_6c;
    iVar3 = 1;
    iVar4 = *(arg1 + 0xed0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    auStack_6c[0] = 0;
    _uStack_58 = CONCAT62(0x10000,*(iVar4 + 2));
    puStack_60 = &uStack_48;
    _uStack_68 = CONCAT62(0x200001,*(iVar4 + 2));
    iVar1 = i2c_transfer(*(iVar4 + 0x18),&uStack_58);
    if (iVar1 == 1) {
        iVar3 = 1;
        iVar1 = i2c_transfer(*(*(arg1 + 0xed0) + 0x18),&uStack_68);
        if (-1 < iVar1) {
            uVar2 = 0;
            *(arg1 + 0x7c2) = uStack_48 >> 8 | uStack_48 << 8;
            *(arg1 + 0x7c4) = uStack_48._2_2_ >> 8 | uStack_48._2_2_ << 8;
            *(arg1 + 0x7c6) = uStack_48._4_2_ >> 8 | uStack_48._4_2_ << 8;
            *(arg1 + 0x7c8) = uStack_48._6_2_ >> 8 | uStack_48._6_2_ << 8;
            *(arg1 + 0x7ca) = uStack_40 >> 8 | uStack_40 << 8;
            *(arg1 + 0x7cc) = uStack_40._2_2_ >> 8 | uStack_40._2_2_ << 8;
            *(arg1 + 0x7ce) = uStack_40._4_2_ >> 8 | uStack_40._4_2_ << 8;
            *(arg1 + 2000) = uStack_40._6_2_ >> 8 | uStack_40._6_2_ << 8;
            *(arg1 + 0x7d2) = uStack_38 >> 8 | uStack_38 << 8;
            *(arg1 + 0x7d4) = uStack_38._2_2_ >> 8 | uStack_38._2_2_ << 8;
            *(arg1 + 0x7d6) = uStack_38._4_2_ >> 8 | uStack_38._4_2_ << 8;
            *(arg1 + 0x7d8) = uStack_38._6_2_ >> 8 | uStack_38._6_2_ << 8;
            *(arg1 + 0x7da) = uStack_30 >> 8 | uStack_30 << 8;
            *(arg1 + 0x7dc) = uStack_30._2_2_ >> 8 | uStack_30._2_2_ << 8;
            *(arg1 + 0x7de) = uStack_30._4_2_ >> 8 | uStack_30._4_2_ << 8;
            *(arg1 + 0x7e0) = uStack_30._6_2_ >> 8 | uStack_30._6_2_ << 8;
            goto code_r0x080038bc;
        }
    }
    uVar2 = 0xfffffffb;
code_r0x080038bc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    __stack_chk_fail(uVar2);
    *extraout_x18 = sym.rtc6226_vidioc_querycap;
    strlcpy(iVar3,"rtc6226-fmtuner",0x10);
    strlcpy(iVar3 + 0x10,"Richwave rtc6226 FM Tuner",0x20);
    *(iVar3 + 0x54) = 0x105050081050500;
    return 0;
}


// ===== sym.rtc6226_vidioc_querycap @ 0x080038ec (size 108) =====

ulong sym.rtc6226_vidioc_querycap(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    strlcpy(arg1,"rtc6226-fmtuner",0x10);
    strlcpy(arg1 + 0x10,"Richwave rtc6226 FM Tuner",0x20);
    *(arg1 + 0x54) = 0x105050081050500;
    return 0;
}


// ===== sym.rtc6226_disable_irq @ 0x08003958 (size 120) =====

void sym.rtc6226_disable_irq(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x820);
    irq_set_irq_wake(uVar1,0);
    free_irq(uVar1,arg1);
    cancel_delayed_work_sync(arg1 + 0x9f8);
    flush_workqueue(*(arg1 + 0x8d0));
    cancel_work_sync(arg1 + 0x8e8);
    flush_workqueue(*(arg1 + 0x8e0));
    cancel_delayed_work_sync(arg1 + 0xa80);
    flush_workqueue(*(arg1 + 0x8d8));
    return;
}


// ===== sym.rtc6226_enable_irq @ 0x080039d0 (size 360) =====

int sym.rtc6226_enable_irq(int64_t arg1)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    gpio_to_desc(*arg1);
    iVar2 = gpiod_direction_input();
    if (iVar2 == 0) {
        gpio_to_desc(*arg1);
        iVar3 = gpiod_to_irq();
        *(arg1 + 0x820) = iVar3;
        if (iVar3 < 0) {
            _printk(0x8000a81,"rtc6226_enable_irq",iVar3);
            iVar2 = 0;
        }
        else {
            iVar2 = request_any_context_irq
                              (iVar3,sym.rtc6226_isr.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt,2,"rtc6226-fmtuner",
                               arg1);
            if (-1 < iVar2) {
                iVar2 = irq_set_irq_wake(iVar3,1);
                if (-1 < iVar2) {
                    return iVar2;
                }
                _printk(0x800111c);
                free_irq(iVar3,arg1);
                return iVar2;
            }
            _printk(0x80013f7,"rtc6226_enable_irq",*(arg1 + 0x820),iVar2);
        }
        uVar1 = *(arg1 + 0x820);
        irq_set_irq_wake(uVar1,0);
        free_irq(uVar1,arg1);
        cancel_delayed_work_sync(arg1 + 0x9f8);
        flush_workqueue(*(arg1 + 0x8d0));
        cancel_work_sync(arg1 + 0x8e8);
        flush_workqueue(*(arg1 + 0x8e0));
        cancel_delayed_work_sync(arg1 + 0xa80);
        flush_workqueue(*(arg1 + 0x8d8));
    }
    else {
        _printk(0x80014a2,"rtc6226_enable_irq",*arg1,iVar2);
    }
    return iVar2;
}


// ===== sym.rtc6226_isr @ 0x08003b38 (size 56) =====

ulong sym.rtc6226_isr(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    queue_delayed_work_on(0x20,*(arg1 + 0x8d0),arg1 + 0x9f8,3);
    return 1;
}


// ===== sym.rtc6226_fops_open @ 0x08003b70 (size 684) =====

int sym.rtc6226_fops_open(void)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = video_devdata();
    iVar6 = *(iVar6 + 0x250);
    piVar1 = iVar6 + 0x7b8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = iVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    DataMemoryBarrier(2,3);
    if (iVar4 + 1 != 1) {
        _printk(0x8001144);
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        return -0x10;
    }
    *(iVar6 + 0x9f8) = 0xfffffffe0;
    *(iVar6 + 0xa00) = iVar6 + 0xa00;
    *(iVar6 + 0xa08) = iVar6 + 0xa00;
    *(iVar6 + 0xa10) = sym.rtc6226_handler.6291b1bedfbf8fdb1b257bf92c55b9d0.cfi_jt;
    init_timer_key(iVar6 + 0xa28,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(iVar6 + 0xa80) = 0xfffffffe0;
    *(iVar6 + 0xa88) = iVar6 + 0xa88;
    *(iVar6 + 0xa90) = iVar6 + 0xa88;
    *(iVar6 + 0xa98) = sym.rtc6226_scan.cfi_jt;
    init_timer_key(iVar6 + 0xab0,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    *(iVar6 + 0x8e8) = 0xfffffffe0;
    *(iVar6 + 0x8f0) = iVar6 + 0x8f0;
    *(iVar6 + 0x8f8) = iVar6 + 0x8f0;
    *(iVar6 + 0x900) = sym.rtc6226_rds_handler.cfi_jt;
    iVar4 = sym.rtc6226_fm_vdd_reg_cfg(iVar6);
    if (iVar4 < 0) {
        _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar4);
    }
    else {
        iVar4 = sym.rtc6226_fm_vio_reg_cfg(iVar6);
        if (iVar4 < 0) {
            _printk(0x80019ba,"rtc6226_fm_power_cfg",iVar4);
            sym.rtc6226_fm_vdd_reg_cfg(iVar6);
        }
        else if (iVar4 == 0) {
            iVar4 = sym.rtc6226_enable_irq(iVar6);
            msleep(100);
            if (iVar4 == 0) {
                return 0;
            }
            _printk(0x8001693,"rtc6226_fops_open");
            iVar5 = sym.rtc6226_fm_vdd_reg_cfg(iVar6);
            if (iVar5 < 0) {
                _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar5);
            }
            iVar5 = sym.rtc6226_fm_vio_reg_cfg(iVar6);
            if (iVar5 < 0) {
                _printk(0x80019ba,"rtc6226_fm_power_cfg",iVar5);
            }
            goto code_r0x08003d28;
        }
    }
    _printk(0x8001702,"rtc6226_fops_open");
code_r0x08003d28:
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    return iVar4;
}


// ===== sym.rtc6226_handler @ 0x08003e1c (size 1208) =====

uint64_t sym.rtc6226_handler(int64_t arg1)

{
    int *piVar1;
    uint uVar2;
    uint16_t uVar3;
    char cVar4;
    bool bVar5;
    uint16_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ushort uStack_70;
    uchar uStack_6e;
    uchar auStack_6c [4];
    ulong uStack_68;
    uchar *puStack_60;
    ulong uStack_58;
    uchar *puStack_50;
    int64_t iStack_48;
    
    puStack_50 = &uStack_70;
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    puStack_60 = auStack_6c;
    iVar11 = *(arg1 + 0x4d8);
    uStack_70 = 0;
    uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
    uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
    auStack_6c[0] = 10;
    iVar7 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
    if (iVar7 == 2) {
        iVar11 = arg1 + -0x9f8;
        *(arg1 + -0x222) = CONCAT11(uStack_70,uStack_70._1_1_);
        if ((uStack_70 >> 6 & 1) == 0) {
            iVar11 = *(arg1 + 0x4d8);
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_70 = 0;
            uStack_58._0_6_ = CONCAT42(0x20001,*(iVar11 + 2));
            uStack_58 = uStack_58;
            auStack_6c[0] = 0xb;
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(arg1 + 0x4d8);
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            auStack_6c[0] = 0xc;
            *(arg1 + -0x220) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(arg1 + 0x4d8);
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            *(arg1 + -0x21e) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            auStack_6c[0] = 0xd;
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(arg1 + 0x4d8);
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            auStack_6c[0] = 0xe;
            *(arg1 + -0x21c) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            puStack_60 = auStack_6c;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            iVar11 = *(arg1 + 0x4d8);
            puStack_60 = auStack_6c;
            uVar6 = uStack_70 >> 8;
            uVar3 = uStack_70 << 8;
            uStack_70 = 0;
            *(arg1 + -0x21a) = uVar6 | uVar3;
            uStack_68 = CONCAT62(0x10000,*(iVar11 + 2));
            uStack_58 = CONCAT62(0x20001,*(iVar11 + 2));
            auStack_6c[0] = 0xf;
            puStack_50 = &uStack_70;
            uVar9 = i2c_transfer(*(iVar11 + 0x18),&uStack_68,2);
            if (uVar9 != 2) goto code_r0x08004290;
            *(arg1 + -0x218) = uStack_70 >> 8 | uStack_70 << 8;
            if (*(arg1 + -0x222) < 0) {
                if ((*(arg1 + -0x22e) >> 0xc & 1) != 0) {
                    uVar9 = queue_work_on(0x20,_delayed_work_timer_fn,arg1 + -0x110);
                }
                goto code_r0x08004290;
            }
            uVar10 = 0x8000f6a;
        }
        else {
            iVar12 = *(arg1 + 0x4d8);
            puStack_60 = auStack_6c;
            uStack_68 = CONCAT62(0x10000,*(iVar12 + 2));
            uStack_58._0_6_ = CONCAT42(0x20001,*(iVar12 + 2));
            uStack_58 = uStack_58;
            uStack_70 = 0;
            auStack_6c[0] = 0xb;
            puStack_50 = &uStack_70;
            iVar7 = i2c_transfer(*(iVar12 + 0x18),&uStack_68,2);
            if (iVar7 == 2) {
                uVar3 = *(arg1 + -0x22c);
                *(arg1 + -0x22c) = uVar3 & 0x7fff;
                *(arg1 + -0x220) = uStack_70 >> 8 | uStack_70 << 8;
                uStack_70 = CONCAT11(uVar3 >> 8 & 0x7f,5);
                uStack_68 = CONCAT62(0x30000,*(*(arg1 + 0x4d8) + 2));
                uStack_6e = uVar3;
                puStack_60 = &uStack_70;
                i2c_transfer(*(*(arg1 + 0x4d8) + 0x18),&uStack_68,1);
                uVar3 = *(arg1 + -0x230);
                *(arg1 + -0x230) = uVar3 & 0x7fff;
                uStack_70 = CONCAT11(uVar3 >> 8,3) & 0x7fff;
                uStack_6e = uVar3;
                uStack_68 = CONCAT62(0x30000,*(*(arg1 + 0x4d8) + 2));
                puStack_60 = &uStack_70;
                iVar7 = i2c_transfer(*(*(arg1 + 0x4d8) + 0x18),&uStack_68,1);
                if (iVar7 != 1) {
                    *(arg1 + -0x230) = uVar3 & 0x7fff;
                }
                uVar9 = sym.rtc6226_reset_rds_data(iVar11);
                cVar4 = *(arg1 + -0x238);
                if (cVar4 != '\x01') {
                    if (cVar4 == '\x03') {
                        uVar9 = complete(arg1 + 0x4b0);
                        goto code_r0x08004290;
                    }
                    if (cVar4 != '\x02') goto code_r0x08004290;
                    sym.rtc6226_rds_on(iVar11);
                    sym.rtc6226_q_event(iVar11,2);
                }
                uVar9 = sym.rtc6226_q_event(iVar11,1);
                *(arg1 + -0x238) = 0;
                goto code_r0x08004290;
            }
            uVar10 = 0x80018a8;
        }
    }
    else {
        uVar10 = 0x800108a;
    }
    uVar9 = _printk(uVar10,"rtc6226_i2c_interrupt_handler");
code_r0x08004290:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return uVar9;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_fops_release;
    iVar11 = video_devdata();
    iVar11 = *(iVar11 + 0x250);
    if (*(iVar11 + 0x7bc) != 0) {
        sym.rtc6226_power_down(iVar11);
        *(iVar11 + 0x7bc) = 0;
    }
    uVar2 = *(iVar11 + 0x820);
    irq_set_irq_wake(uVar2,0);
    free_irq(uVar2,iVar11);
    cancel_delayed_work_sync(iVar11 + 0x9f8);
    flush_workqueue(*(iVar11 + 0x8d0));
    cancel_work_sync(iVar11 + 0x8e8);
    flush_workqueue(*(iVar11 + 0x8e0));
    cancel_delayed_work_sync(iVar11 + 0xa80);
    flush_workqueue(*(iVar11 + 0x8d8));
    piVar1 = iVar11 + 0x7b8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar4 = '\x01';
        bVar5 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
            *piVar1 = *piVar1 + -1;
            cVar4 = ExclusiveMonitorsStatus();
        }
    } while (cVar4 != '\0');
    iVar7 = sym.rtc6226_fm_vdd_reg_cfg(iVar11);
    if (iVar7 < 0) {
        _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar7);
    }
    uVar8 = sym.rtc6226_fm_vio_reg_cfg(iVar11);
    if (uVar8 < 0) {
        _printk(0x80019ba,"rtc6226_fm_power_cfg",uVar8);
        _printk(0x8000c9d,"rtc6226_fops_release");
    }
    return uVar8;
}


// ===== sym.rtc6226_fops_release @ 0x080042d4 (size 324) =====

int sym.rtc6226_fops_release(void)

{
    int *piVar1;
    uint uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = video_devdata();
    iVar6 = *(iVar6 + 0x250);
    if (*(iVar6 + 0x7bc) != 0) {
        sym.rtc6226_power_down(iVar6);
        *(iVar6 + 0x7bc) = 0;
    }
    uVar2 = *(iVar6 + 0x820);
    irq_set_irq_wake(uVar2,0);
    free_irq(uVar2,iVar6);
    cancel_delayed_work_sync(iVar6 + 0x9f8);
    flush_workqueue(*(iVar6 + 0x8d0));
    cancel_work_sync(iVar6 + 0x8e8);
    flush_workqueue(*(iVar6 + 0x8e0));
    cancel_delayed_work_sync(iVar6 + 0xa80);
    flush_workqueue(*(iVar6 + 0x8d8));
    piVar1 = iVar6 + 0x7b8;
    Hint_Prefetch(piVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
            *piVar1 = *piVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    iVar5 = sym.rtc6226_fm_vdd_reg_cfg(iVar6);
    if (iVar5 < 0) {
        _printk(0x80010ad,"rtc6226_fm_power_cfg",iVar5);
    }
    iVar5 = sym.rtc6226_fm_vio_reg_cfg(iVar6);
    if (iVar5 < 0) {
        _printk(0x80019ba,"rtc6226_fm_power_cfg",iVar5);
        _printk(0x8000c9d,"rtc6226_fops_release");
    }
    return iVar5;
}


// ===== sym.rtc6226_i2c_probe @ 0x08004418 (size 1732) =====

uint64_t sym.rtc6226_i2c_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t arg2;
    uint64_t *puVar7;
    int64_t iVar8;
    ulong uVar9;
    ulong *in_x18;
    int64_t iVar10;
    code *pcVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar10 = *(arg1 + 0x18);
    pcVar11 = *(*(iVar10 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar11,0x80008e0);
    uVar5 = (*pcVar11)(iVar10);
    if ((uVar5 & 1) == 0) {
        return 0xffffffed;
    }
    iVar10 = arg1 + 0x20;
    uVar5 = regulator_get(iVar10,0x8000fc9);
    if (0xfffffffffffff000 < uVar5) {
        _printk(0x800128b,"rtc6226_i2c_probe",uVar5 & 0xffffffff);
        return uVar5 & 0xffffffff;
    }
    uVar6 = regulator_get(iVar10,0x8000f30);
    if (0xfffffffffffff000 < uVar6) {
        _printk(0x8001608,"rtc6226_i2c_probe",uVar6 & 0xffffffff);
        regulator_put(uVar5);
        return uVar6 & 0xffffffff;
    }
    arg2 = kmem_cache_alloc_trace(_v4l2_compat_ioctl32,0xdc0,0xee8);
    if (arg2 == 0) {
        regulator_put(uVar5);
        regulator_put(uVar6);
        return 0xfffffff4;
    }
    iVar1 = arg2 + 0x18;
    uVar3 = v4l2_device_register(iVar10,iVar1);
    if (uVar3 < 0) {
        uVar12 = uVar3;
        _printk(0x8000af3,"rtc6226_i2c_probe");
        goto code_r0x08004a5c;
    }
    *(arg2 + 0x7b8) = 0;
    *(arg2 + 0xed0) = arg1;
    __mutex_init(arg2 + 0x830,"&radio->lock",obj.rtc6226_i2c_probe.__key);
    *(arg2 + 0xea8) = 0;
    __init_swait_queue_head(arg2 + 0xeb0,"&x->wait",obj.rtc6226_i2c_probe.__key);
    uVar3 = sym.rtc6226_parse_dt(iVar10,arg2);
    if (uVar3 == 0) {
        puVar7 = devm_kmalloc(iVar10,0x20,0xdc0);
        *(arg2 + 0x7a0) = puVar7;
        if (puVar7 == NULL) {
            uVar9 = 0x80016b4;
code_r0x08004600:
            _printk(uVar9,"rtc6226_i2c_probe");
            uVar12 = 0xfffffff4;
        }
        else {
            uVar9 = *(arg1 + 0x310);
            *puVar7 = uVar6;
            puVar7[1] = 0x8000f30;
            *(puVar7 + 0x1c) = 0;
            of_property_read_variable_u32_array(uVar9,"rtc6226,vdd-load",puVar7 + 3,1,0);
            _printk(0x800156c,"rtc6226_i2c_probe",*(*(arg2 + 0x7a0) + 0x18));
            uVar3 = sym.rtc6226_dt_parse_vreg_info(iVar10,*(arg2 + 0x7a0),0x8000978);
            if (uVar3 < 0) {
                uVar9 = 0x8001823;
code_r0x08004a00:
                uVar12 = uVar3;
                _printk(uVar9,"rtc6226_i2c_probe");
            }
            else {
                puVar7 = devm_kmalloc(iVar10,0x20,0xdc0);
                *(arg2 + 0x7a8) = puVar7;
                if (puVar7 == NULL) {
                    uVar9 = 0x800163d;
                    goto code_r0x08004600;
                }
                *puVar7 = uVar5;
                puVar7[1] = 0x8000fc9;
                *(puVar7 + 0x1c) = 0;
                uVar3 = sym.rtc6226_dt_parse_vreg_info(iVar10,puVar7,0x80019e3);
                if (uVar3 < 0) {
                    uVar9 = 0x80011f7;
                    goto code_r0x08004a00;
                }
                iVar4 = sym.rtc6226_pinctrl_init(arg2);
                if (iVar4 != 0) {
                    _printk(0x8000fcd,"rtc6226_i2c_probe",iVar4);
                }
                iVar2 = arg2 + 0x90;
                memcpy(iVar2,obj.rtc6226_viddev_template,0x618);
                uVar9 = _v4l2_compat_ioctl32;
                *(arg2 + 0x670) = reloc.rtc6226_vidioc_querycap.cfi_jt;
                *(arg2 + 0x5e0) = iVar1;
                *(arg2 + 0x240) = 0x1050500;
                *(arg2 + 0x2e0) = arg2;
                *(arg2 + 0xd60) = 300;
                iVar8 = kmem_cache_alloc_trace(uVar9,0xcc0,300);
                *(arg2 + 0x860) = iVar8;
                if (iVar8 == 0) {
                    uVar12 = 0xfffffffb;
                }
                else {
                    *(arg2 + 0x894) = 0;
                    iVar4 = __kfifo_alloc(arg2 + 0xd70,0x100,1,0xcc0);
                    if (iVar4 == 0) {
                        *(arg2 + 0x898) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xd88,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x89c) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xda0,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8a0) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xdb8,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8a4) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xdd0,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8a8) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xde8,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8ac) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe00,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8b0) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe18,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8b4) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe30,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8b8) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe48,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8bc) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe60,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8c0) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe78,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8c4) = 0;
                        iVar4 = __kfifo_alloc(arg2 + 0xe90,0x100,1,0xcc0);
                        if (iVar4 != 0) goto code_r0x080049b0;
                        *(arg2 + 0x8e0) = 0;
                        *(arg2 + 0x8d8) = 0;
                        *(arg2 + 0x8d0) = 0;
                        *(arg2 + 0x7b0) = 0xffffffff;
                        *(arg2 + 0xd64) = 0;
                        __init_waitqueue_head(arg2 + 0xb08,"&radio->event_queue",obj.rtc6226_i2c_probe.__key);
                        __init_waitqueue_head(arg2 + 0x808,"&radio->read_queue",obj.rtc6226_i2c_probe.__key);
                        __init_waitqueue_head(obj.rtc6226_i2c_probe.__key,"&rtc6226_wq",obj.rtc6226_i2c_probe.__key);
                        iVar8 = alloc_workqueue(0x8000cc5,0xe000a,1,"fmradio");
                        *(arg2 + 0x8d0) = iVar8;
                        if (iVar8 == 0) goto code_r0x080049c8;
                        iVar8 = alloc_workqueue(0x8000cc5,0xe000a,1,"fmradioscan");
                        *(arg2 + 0x8d8) = iVar8;
                        if (iVar8 == 0) {
                            uVar12 = 0xfffffff4;
                        }
                        else {
                            iVar8 = alloc_workqueue(0x8000cc5,0xe000a,1,"fmradiords");
                            *(arg2 + 0x8e0) = iVar8;
                            if (iVar8 == 0) {
                                uVar12 = 0xfffffff4;
                            }
                            else {
                                uVar3 = __video_register_device(iVar2,2,0xffffffff,1,**(arg2 + 0x238));
                                uVar12 = uVar3;
                                if (uVar3 == 0) {
                                    *(arg1 + 0xb8) = arg2;
                                    return 0;
                                }
                                _dev_info(iVar10,"Could not register video device\n");
                                destroy_workqueue(*(arg2 + 0x8e0));
                            }
                            destroy_workqueue(*(arg2 + 0x8d8));
                        }
                        destroy_workqueue(*(arg2 + 0x8d0));
                    }
                    else {
code_r0x080049b0:
                        _printk(0x80009ef,"rtc6226_i2c_probe",iVar4);
code_r0x080049c8:
                        uVar12 = 0xfffffff4;
                    }
                    kfree(*(arg2 + 0x860));
                }
                video_device_release_empty(iVar2);
            }
        }
    }
    else {
        uVar12 = uVar3;
        _printk(0x8000b20,"rtc6226_i2c_probe",uVar12);
    }
    v4l2_device_unregister(iVar1);
code_r0x08004a5c:
    if ((*(arg2 + 0x7a8) == NULL) || (**(arg2 + 0x7a8) == 0)) {
        regulator_put(uVar5);
    }
    else {
        regulator_put();
        devm_kfree(iVar10,*(arg2 + 0x7a8));
    }
    if ((*(arg2 + 0x7a0) == NULL) || (**(arg2 + 0x7a0) == 0)) {
        regulator_put(uVar6);
    }
    else {
        regulator_put();
        devm_kfree(iVar10,*(arg2 + 0x7a0));
    }
    kfree(arg2);
    return uVar12;
}


// ===== sym.rtc6226_i2c_remove @ 0x08004adc (size 120) =====

ulong sym.rtc6226_i2c_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xb8);
    free_irq(*(arg1 + 0x3b4),iVar1);
    kfree(*(iVar1 + 0x860));
    v4l2_ctrl_handler_free(iVar1 + 0x6c0);
    if ((*(iVar1 + 0x638) & 1) != 0) {
        video_unregister_device(iVar1 + 0x90);
    }
    video_device_release_empty(iVar1 + 0x90);
    v4l2_device_unregister(iVar1 + 0x18);
    kfree(iVar1);
    return 0;
}


// ===== sym.rtc6226_i2c_init @ 0x08004b54 (size 52) =====

void sym.rtc6226_i2c_init(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.rtc6226_i2c_driver);
    return;
}


// ===== sym.rtc6226_fm_vdd_reg_cfg @ 0x08004b88 (size 352) =====

int sym.rtc6226_fm_vdd_reg_cfg(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uint64_t in_x1;
    char *pcVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(arg1 + 0x7a0);
    if (puVar4 == NULL) {
        _printk(0x8001549,"rtc6226_fm_vdd_reg_cfg");
        return 0;
    }
    if ((in_x1 & 1) == 0) {
        iVar1 = regulator_disable(*puVar4);
        if (iVar1 < 0) {
            pcVar3 = puVar4[1];
            uVar2 = 0x80017fb;
            goto code_r0x08004c7c;
        }
        *(puVar4 + 0x1c) = 0;
        iVar1 = regulator_set_voltage(*puVar4,0,*(puVar4 + 0x14));
        if (-1 < iVar1) {
            if (*(puVar4 + 3) == 0) {
                return iVar1;
            }
            iVar1 = regulator_set_load(*puVar4,0);
            if (-1 < iVar1) {
                return iVar1;
            }
            uVar2 = 0x800144b;
            pcVar3 = "rtc6226_fm_vdd_reg_cfg";
            goto code_r0x08004c7c;
        }
    }
    else {
        iVar1 = regulator_set_voltage(*puVar4,*(puVar4 + 2),*(puVar4 + 0x14));
        if (-1 < iVar1) {
            if ((*(puVar4 + 3) != 0) && (iVar1 = regulator_set_load(*puVar4), iVar1 < 0)) {
                _printk(0x8001a4e,"rtc6226_fm_vdd_reg_cfg",*(puVar4 + 3),iVar1);
                return iVar1;
            }
            iVar1 = regulator_enable(*puVar4);
            if (iVar1 < 0) {
                _printk(0x800135b,puVar4[1],iVar1);
                regulator_set_voltage(*puVar4,0,*(puVar4 + 0x14));
                return iVar1;
            }
            *(puVar4 + 0x1c) = 1;
            return iVar1;
        }
    }
    pcVar3 = puVar4[1];
    uVar2 = 0x8001a2e;
code_r0x08004c7c:
    _printk(uVar2,pcVar3,iVar1);
    return iVar1;
}


// ===== sym.rtc6226_fm_vio_reg_cfg @ 0x08004ce8 (size 252) =====

int sym.rtc6226_fm_vio_reg_cfg(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    uint64_t in_x1;
    ulong uVar3;
    ulong *in_x18;
    ulong *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(arg1 + 0x7a8);
    if (puVar4 == NULL) {
        _printk(0x800172b,"rtc6226_fm_vio_reg_cfg");
        return 0;
    }
    if ((in_x1 & 1) == 0) {
        iVar1 = regulator_disable(*puVar4);
        if (iVar1 < 0) {
            uVar3 = puVar4[1];
            uVar2 = 0x80010d6;
            goto code_r0x08004dd8;
        }
        *(puVar4 + 0x1c) = 0;
        iVar1 = regulator_set_voltage(*puVar4,0,*(puVar4 + 0x14));
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    else {
        iVar1 = regulator_set_voltage(*puVar4,*(puVar4 + 2),*(puVar4 + 0x14));
        if (-1 < iVar1) {
            iVar1 = regulator_enable(*puVar4);
            if (iVar1 < 0) {
                _printk(0x800135b,puVar4[1],iVar1);
                regulator_set_voltage(*puVar4,0,*(puVar4 + 0x14));
                return iVar1;
            }
            *(puVar4 + 0x1c) = 1;
            return iVar1;
        }
    }
    uVar3 = puVar4[1];
    uVar2 = 0x8001a2e;
code_r0x08004dd8:
    _printk(uVar2,uVar3,iVar1);
    return iVar1;
}


// ===== sym.rtc6226_parse_dt @ 0x08004de4 (size 216) =====

int sym.rtc6226_parse_dt(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = of_get_named_gpio_flags(*(arg1 + 0x2f0),"fmint-gpio",0,0);
    *arg2 = uVar2;
    if (uVar2 < 0) {
        _printk(0x8000e54,"rtc6226_parse_dt");
        iVar1 = *arg2;
    }
    else {
        iVar1 = gpio_request(uVar2,"fm_int");
        uVar3 = *arg2;
        if (iVar1 == 0) {
            uVar2 = gpio_to_desc(uVar3);
            iVar1 = gpiod_direction_output_raw(uVar2,0);
            if (iVar1 == 0) {
                msleep(100);
                return 0;
            }
            uVar3 = *arg2;
            uVar2 = 0x80014a2;
        }
        else {
            uVar2 = 0x8001197;
        }
        _printk(uVar2,"rtc6226_parse_dt",uVar3,iVar1);
    }
    gpio_free(*arg2);
    return iVar1;
}


// ===== sym.rtc6226_dt_parse_vreg_info @ 0x08004ebc (size 156) =====

uint64_t sym.rtc6226_dt_parse_vreg_info(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_30 = 0;
    iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),arg3,&uStack_30,2,0);
    if (iVar1 < 0) {
        _printk(0x8001856);
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
        *(arg2 + 0x10) = uStack_30;
        *(arg2 + 0x14) = uStack_30._4_4_;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        iVar3 = __stack_chk_fail(uVar2);
        *extraout_x18 = sym.rtc6226_pinctrl_init;
        uVar2 = devm_pinctrl_get(*(iVar3 + 0xed0) + 0x20);
        *(iVar3 + 0x6a8) = uVar2;
        if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
            _printk(0x8000ce9,"rtc6226_pinctrl_init");
            uVar2 = *(iVar3 + 0x6a8);
        }
        else {
            uVar2 = pinctrl_lookup_state(uVar2,"pmx_fm_active");
            *(iVar3 + 0x6b0) = uVar2;
            if ((uVar2 == 0) || (0xfffffffffffff000 < uVar2)) {
                _printk(0x80018e0,"rtc6226_pinctrl_init");
                uVar2 = *(iVar3 + 0x6b0);
            }
            else {
                uVar2 = pinctrl_lookup_state(*(iVar3 + 0x6a8),"pmx_fm_suspend");
                *(iVar3 + 0x6b8) = uVar2;
                if ((uVar2 != 0) && (uVar2 < 0xfffffffffffff001)) {
                    return 0;
                }
                _printk(0x8000bbf,"rtc6226_pinctrl_init");
                uVar2 = *(iVar3 + 0x6b8);
                *(iVar3 + 0x6b8) = 0;
            }
            *(iVar3 + 0x6b0) = 0;
        }
        return uVar2;
    }
    return uVar2;
}


// ===== sym.rtc6226_pinctrl_init @ 0x08004f58 (size 228) =====

uint64_t sym.rtc6226_pinctrl_init(int64_t arg1)

{
    uint64_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = devm_pinctrl_get(*(arg1 + 0xed0) + 0x20);
    *(arg1 + 0x6a8) = uVar1;
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
        _printk(0x8000ce9,"rtc6226_pinctrl_init");
        uVar1 = *(arg1 + 0x6a8);
    }
    else {
        uVar1 = pinctrl_lookup_state(uVar1,"pmx_fm_active");
        *(arg1 + 0x6b0) = uVar1;
        if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
            _printk(0x80018e0,"rtc6226_pinctrl_init");
            uVar1 = *(arg1 + 0x6b0);
        }
        else {
            uVar1 = pinctrl_lookup_state(*(arg1 + 0x6a8),"pmx_fm_suspend");
            *(arg1 + 0x6b8) = uVar1;
            if ((uVar1 != 0) && (uVar1 < 0xfffffffffffff001)) {
                return 0;
            }
            _printk(0x8000bbf,"rtc6226_pinctrl_init");
            uVar1 = *(arg1 + 0x6b8);
            *(arg1 + 0x6b8) = 0;
        }
        *(arg1 + 0x6b0) = 0;
    }
    return uVar1;
}


// ===== sym.rtc6226_i2c_suspend @ 0x0800503c (size 16) =====

ulong sym.rtc6226_i2c_suspend(int64_t arg1)

{
    return 0;
}


// ===== sym.rtc6226_i2c_resume @ 0x0800504c (size 16) =====

ulong sym.rtc6226_i2c_resume(int64_t arg1)

{
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x0800505c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080050a0

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
    //switch table (4 cases) at 0x8000920
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80050b4);
    (*pcVar1)();
}


// ===== sym.rtc6226_q_event @ 0x080050b4 (size 172) =====

void sym.rtc6226_q_event(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [12];
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    auStack_3c[0] = arg2;
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0x898);
    iVar3 = __kfifo_in(arg1 + 0xd88,auStack_3c,1);
    _raw_spin_unlock_irqrestore(arg1 + 0x898,uVar4);
    if (iVar3 != 0) {
        __wake_up(arg1 + 0xb08,1,1,0);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return;
    }
    auVar6 = __stack_chk_fail();
    iVar5 = auVar6._0_8_;
    *extraout_x18 = sym.rtc6226_set_freq;
    uVar1 = *(iVar5 + 0x7c8);
    uVar2 = (*(iVar5 + 0x7ec) & 0x7fff) * 10;
    if (uVar2 <= auVar6._8_4_) {
        uVar2 = auVar6._8_4_;
    }
    *(iVar5 + 0x7c8) = uVar2 / 10 | 0x8000;
    iVar3 = sym.rtc6226_set_register(iVar5,3);
    if (iVar3 < 0) {
        *(iVar5 + 0x7c8) = uVar1 & 0x7fff;
    }
    else {
        iVar3 = sym.rtc6226_get_register(iVar5,0x12);
        if (((((-1 < iVar3) && (iVar3 = sym.rtc6226_get_register(iVar5,0x13), -1 < iVar3)) &&
             (iVar3 = sym.rtc6226_get_register(iVar5,0x14), -1 < iVar3)) &&
            (((iVar3 = sym.rtc6226_get_register(iVar5,0x15), -1 < iVar3 &&
              (iVar3 = sym.rtc6226_get_register(iVar5,0x16), -1 < iVar3)) &&
             ((iVar3 = sym.rtc6226_get_register(iVar5,0x17), -1 < iVar3 &&
              ((iVar3 = sym.rtc6226_get_register(iVar5,0x18), -1 < iVar3 &&
               (iVar3 = sym.rtc6226_get_register(iVar5,0x19), -1 < iVar3)))))))) &&
           ((iVar3 = sym.rtc6226_get_register(iVar5,0x1a), -1 < iVar3 &&
            ((((iVar3 = sym.rtc6226_get_register(iVar5,0x1b), -1 < iVar3 &&
               (iVar3 = sym.rtc6226_get_register(iVar5,0x1c), -1 < iVar3)) &&
              (iVar3 = sym.rtc6226_get_register(iVar5,0x1d), -1 < iVar3)) &&
             (iVar3 = sym.rtc6226_get_register(iVar5,0x1e), -1 < iVar3)))))) {
            sym.rtc6226_get_register(iVar5,0x1f);
        }
    }
    return;
}


// ===== sym.rtc6226_set_freq @ 0x08005160 (size 340) =====

void sym.rtc6226_set_freq(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x7c8);
    uVar2 = (*(arg1 + 0x7ec) & 0x7fff) * 10;
    if (uVar2 <= arg2) {
        uVar2 = arg2;
    }
    *(arg1 + 0x7c8) = uVar2 / 10 | 0x8000;
    iVar3 = sym.rtc6226_set_register(arg1,3);
    if (iVar3 < 0) {
        *(arg1 + 0x7c8) = uVar1 & 0x7fff;
    }
    else {
        iVar3 = sym.rtc6226_get_register(arg1,0x12);
        if ((((((-1 < iVar3) && (iVar3 = sym.rtc6226_get_register(arg1,0x13), -1 < iVar3)) &&
              (iVar3 = sym.rtc6226_get_register(arg1,0x14), -1 < iVar3)) &&
             ((iVar3 = sym.rtc6226_get_register(arg1,0x15), -1 < iVar3 &&
              (iVar3 = sym.rtc6226_get_register(arg1,0x16), -1 < iVar3)))) &&
            ((iVar3 = sym.rtc6226_get_register(arg1,0x17), -1 < iVar3 &&
             ((iVar3 = sym.rtc6226_get_register(arg1,0x18), -1 < iVar3 &&
              (iVar3 = sym.rtc6226_get_register(arg1,0x19), -1 < iVar3)))))) &&
           ((iVar3 = sym.rtc6226_get_register(arg1,0x1a), -1 < iVar3 &&
            ((iVar3 = sym.rtc6226_get_register(arg1,0x1b), -1 < iVar3 &&
             (iVar3 = sym.rtc6226_get_register(arg1,0x1c), -1 < iVar3)))))) {
            sym.rtc6226_get_register(arg1,0x1d);
            return;
        }
    }
    return;
}


// ===== sym.rtc6226_scan @ 0x080052b4 (size 1900) =====

void sym.rtc6226_scan(int64_t arg1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    code *pcVar4;
    int iVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t arg1_00;
    int64_t iVar10;
    ulong unaff_x30;
    ulong uStack_74;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    arg1_00 = arg1 + -0xa80;
    iStack_68 = *(iVar10 + 0x5e0);
    uStack_74 = 0;
    iVar5 = sym.rtc6226_get_freq(arg1_00,&uStack_74 + 4);
    if (iVar5 < 0) {
code_r0x08005304:
        uVar7 = 0x8001177;
code_r0x0800530c:
        _printk(uVar7,"rtc6226_scan");
    }
    else {
        *(arg1 + -0x2c0) = 3;
        iVar5 = sym.rtc6226_set_freq(arg1_00,*(arg1 + -0x1b4) * 10);
        if (-1 < iVar5) {
            iVar10 = arg1 + 0x428;
            iVar8 = wait_for_completion_timeout(iVar10,0x2ee);
            if (iVar8 == 0) {
                _printk(0x80015a3,"rtc6226_scan");
                auStack_6c[0] = 7;
                uVar7 = _raw_spin_lock_irqsave(arg1 + -0x1e8);
                iVar5 = __kfifo_in(arg1 + 0x308,auStack_6c,1);
                _raw_spin_unlock_irqrestore(arg1 + -0x1e8,uVar7);
                if (iVar5 != 0) {
                    __wake_up(arg1 + 0x88,1,1,0);
                }
                goto code_r0x080055a4;
            }
            iVar8 = arg1 + -0x1e8;
            do {
                if (*(arg1 + -0x218) != '\0') {
code_r0x080058e0:
                    _printk(0x80010fd,"rtc6226_scan");
                    if (*(arg1 + -0x217) != '\x02') goto code_r0x080053e0;
                    goto code_r0x08005344;
                }
                if (*(arg1 + -0x2c4) != 1) {
code_r0x08005904:
                    _printk(0x80012c7,"rtc6226_scan");
                    goto code_r0x08005938;
                }
                uVar2 = *(arg1 + -0x2b4);
                *(arg1 + -0x2b4) = uVar2 & 0x1fff | 0x6000;
                iVar5 = sym.rtc6226_set_register(arg1_00,5);
                if (iVar5 < 0) {
code_r0x080058c0:
                    *(arg1 + -0x2b4) = uVar2;
                    goto code_r0x080058c8;
                }
                *(arg1 + -0x2b4) = *(arg1 + -0x2b4) | 0x8000;
                iVar5 = sym.rtc6226_set_register(arg1_00,5);
                if (iVar5 < 0) goto code_r0x080058c0;
                iVar9 = wait_for_completion_timeout(iVar10,0xea6);
                if (iVar9 == 0) {
                    _printk(0x8000b59,"rtc6226_scan");
                    sym.rtc6226_get_all_registers(arg1_00);
                    goto code_r0x08005938;
                }
                _printk(0x80012f1,"rtc6226_scan");
                iVar5 = sym.rtc6226_get_freq(arg1_00,&uStack_74);
                if (iVar5 < 0) goto code_r0x08005304;
                iVar5 = sym.rtc6226_get_register(arg1_00,0xb);
                if (iVar5 < 0) goto code_r0x080059a8;
                uVar1 = *(arg1 + -0x2a8);
                if ((*(arg1 + -0x217) == '\x01') && (*(arg1 + -0x2bf) <= uVar1)) {
                    auStack_6c[0] = 1;
                    uVar7 = _raw_spin_lock_irqsave(iVar8);
                    iVar5 = __kfifo_in(arg1 + 0x308,auStack_6c,1);
                    _raw_spin_unlock_irqrestore(iVar8,uVar7);
                    if (iVar5 != 0) {
                        __wake_up(arg1 + 0x88,1,1,0);
                    }
                }
                if (*(arg1 + -0x218) != '\0') goto code_r0x080058e0;
                if (*(arg1 + -0x2c4) != 1) goto code_r0x08005904;
                if (*(arg1 + -0x217) == '\x02') {
                    if (*(arg1 + -0x2bf) <= uVar1) {
                        uVar1 = *(arg1 + -0x216);
                        if (0x13 < uVar1) goto code_r0x08005a1c;
                        uVar3 = (uStack_74 + *(arg1 + -0x1b4) * -10) / 0x32;
                        *(arg1 + uVar1 * 2 + -0x215) = uVar3 >> 8 & 0xff | (uVar3 & 0xff00ff) << 8;
                        *(arg1 + -0x216) = uVar1 + 1;
                    }
                }
                else if ((*(arg1 + -0x217) == '\x01') && (*(arg1 + -0x2bf) <= uVar1)) {
                    msleep(*(arg1 + -600) * 1000);
                    auStack_6c[0] = 3;
                    uVar7 = _raw_spin_lock_irqsave(iVar8);
                    iVar5 = __kfifo_in(arg1 + 0x308,auStack_6c,1);
                    _raw_spin_unlock_irqrestore(iVar8,uVar7);
                    if (iVar5 != 0) {
                        __wake_up(arg1 + 0x88,1,1,0);
                    }
                }
            } while (((*(arg1 + -0x2aa) >> 0xd & 1) == 0) && (*(arg1 + -0x1b2) * 10 != uStack_74));
            _printk(0x80014ec,"rtc6226_scan");
            uVar2 = *(arg1 + -0x2b4);
            *(arg1 + -0x2b4) = uVar2 & 0x1fff | 0x4000;
            iVar5 = sym.rtc6226_set_register(arg1_00,5);
            if (-1 < iVar5) {
                *(arg1 + -0x2b4) = *(arg1 + -0x2b4) | 0x8000;
                iVar5 = sym.rtc6226_set_register(arg1_00,5);
                if (-1 < iVar5) {
                    iVar10 = wait_for_completion_timeout(iVar10,0xea6,iVar5);
                    if (iVar10 == 0) {
                        _printk(0x8000a1c);
code_r0x08005938:
                        sym.rtc6226_q_event(arg1_00,7);
                        goto code_r0x080055a4;
                    }
                    _printk(0x80012f1,"rtc6226_scan");
                    iVar5 = sym.rtc6226_get_freq(arg1_00,&uStack_74);
                    if (iVar5 < 0) {
                        uVar7 = 0x8000d15;
                    }
                    else {
                        iVar5 = sym.rtc6226_get_register(arg1_00,0xb);
                        if (-1 < iVar5) {
                            if ((*(arg1 + -0x1b4) * 10 == uStack_74) && (*(arg1 + -0x2bf) <= *(arg1 + -0x2a8))) {
                                _printk(0x8000beb);
                                sym.rtc6226_q_event(arg1_00,1);
                                msleep(*(arg1 + -600) * 1000);
                                sym.rtc6226_q_event(arg1_00,3);
                            }
                            goto code_r0x08005344;
                        }
code_r0x080059a8:
                        uVar7 = 0x80018a8;
                    }
                    goto code_r0x0800530c;
                }
            }
            *(arg1 + -0x2b4) = uVar2;
code_r0x080058c8:
            _printk(0x8000e88,"rtc6226_scan",iVar5);
        }
    }
code_r0x08005344:
    if (*(arg1 + -0x217) == '\x02') {
        uVar1 = *(arg1 + -0x216);
        uVar7 = _raw_spin_lock_irqsave(arg1 + -0x1ec);
        __kfifo_in(arg1 + 0x2f0,arg1 + -0x216,uVar1 << 1 | 1);
        _raw_spin_unlock_irqrestore(arg1 + -0x1ec,uVar7);
        auStack_6c[0] = 0xe;
        uVar7 = _raw_spin_lock_irqsave(arg1 + -0x1e8);
        iVar5 = __kfifo_in(arg1 + 0x308,auStack_6c,1);
        _raw_spin_unlock_irqrestore(arg1 + -0x1e8,uVar7);
        if (iVar5 != 0) {
            __wake_up(arg1 + 0x88,1,1,0);
        }
    }
code_r0x080053e0:
    iVar5 = sym.rtc6226_set_freq(arg1_00,uStack_74._4_4_);
    if (iVar5 < 0) {
        _printk(0x800099e,"rtc6226_scan",iVar5);
    }
    else {
        iVar10 = wait_for_completion_timeout(arg1 + 0x428,0x2ee);
        if (iVar10 == 0) {
            uVar7 = 0x800190b;
        }
        else {
            uVar7 = 0x8000aa9;
        }
        _printk(uVar7,"rtc6226_scan");
    }
    *(arg1 + -0x2b6) = *(arg1 + -0x2b6) | 0x1000;
    iVar6 = sym.rtc6226_set_register(arg1_00,4);
    if (iVar6 < 0) {
        *(arg1 + -0x2b6) = *(arg1 + -0x2b6) & 0xefff;
    }
    iVar10 = arg1 + -0x1e8;
    auStack_6c[0] = 2;
    uVar7 = _raw_spin_lock_irqsave(iVar10);
    iVar6 = __kfifo_in(arg1 + 0x308,auStack_6c,1);
    _raw_spin_unlock_irqrestore(iVar10,uVar7);
    if (iVar6 != 0) {
        __wake_up(arg1 + 0x88,1,1,0);
    }
    auStack_6c[0] = 1;
    uVar7 = _raw_spin_lock_irqsave(iVar10);
    iVar6 = __kfifo_in(arg1 + 0x308,auStack_6c,1);
    _raw_spin_unlock_irqrestore(iVar10,uVar7);
    if (iVar6 != 0) {
        __wake_up(arg1 + 0x88,1,1,0);
    }
    *(arg1 + -0x2c0) = 0;
    _printk(0x8000f8c,"rtc6226_scan",iVar5);
code_r0x080055a4:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return;
    }
    __stack_chk_fail();
code_r0x08005a1c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8005a20);
    (*pcVar4)();
}


// ===== sym.rtc6226_get_freq @ 0x08005a20 (size 300) =====

uint64_t sym.rtc6226_get_freq(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_50 [4];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    puVar8 = auStack_50;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    uVar3 = sym.rtc6226_get_register(arg1,0x1e);
    if (uVar3 < 0) {
        uVar5 = uVar3;
    }
    else {
        uVar2 = *(arg1 + 0x7fe);
        uVar5 = sym.rtc6226_get_register(arg1,0xb);
        uVar1 = *(arg1 + 0x7d8);
        uVar5 = uVar5 & 0xffffffff;
        *arg2 = (uVar2 & 0x7fff) * 10;
        if (uVar1 < *(arg1 + 0x7c1)) {
            auStack_50[0] = 8;
            uVar6 = _raw_spin_lock_irqsave(arg1 + 0x898);
        }
        else {
            auStack_4c[0] = 9;
            uVar6 = _raw_spin_lock_irqsave(arg1 + 0x898);
            puVar8 = auStack_4c;
        }
        iVar4 = __kfifo_in(arg1 + 0xd88,puVar8,1);
        _raw_spin_unlock_irqrestore(arg1 + 0x898,uVar6);
        if (iVar4 != 0) {
            __wake_up(arg1 + 0xb08,1,1,0);
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_rds_on;
    *(iVar7 + 0x7ca) = *(iVar7 + 0x7ca) | 0x1000;
    uVar5 = sym.rtc6226_set_register(iVar7,4);
    if (uVar5 < 0) {
        *(iVar7 + 0x7ca) = *(iVar7 + 0x7ca) & 0xefff;
    }
    return uVar5;
}


// ===== sym.rtc6226_rds_on @ 0x08005b4c (size 80) =====

void sym.rtc6226_rds_on(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x7ca) = *(arg1 + 0x7ca) | 0x1000;
    iVar1 = sym.rtc6226_set_register(arg1,4);
    if (iVar1 < 0) {
        *(arg1 + 0x7ca) = *(arg1 + 0x7ca) & 0xefff;
    }
    return;
}


// ===== sym.rtc6226_cancel_seek @ 0x08005b9c (size 260) =====

uint64_t sym.rtc6226_cancel_seek(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    mutex_lock(arg1 + 0x830);
    *(arg1 + 0x7cc) = *(arg1 + 0x7cc) & 0x7fff;
    uVar2 = sym.rtc6226_set_register(arg1,5);
    complete(arg1 + 0xea8);
    mutex_unlock(arg1 + 0x830);
    *(arg1 + 0x868) = 1;
    if (*(arg1 + 0x869) == '\0') {
        auStack_4c[0] = 2;
        uVar3 = _raw_spin_lock_irqsave(arg1 + 0x898);
        iVar1 = __kfifo_in(arg1 + 0xd88,auStack_4c,1);
        _raw_spin_unlock_irqrestore(arg1 + 0x898,uVar3);
        if (iVar1 != 0) {
            __wake_up(arg1 + 0xb08,1,1,0);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar2 & 0xffffffff;
    }
    auVar5 = __stack_chk_fail();
    iVar4 = auVar5._0_8_;
    *extraout_x18 = sym.rtc6226_search;
    if ((auVar5._8_8_ & 1) == 0) {
        uVar2 = sym.rtc6226_cancel_seek(iVar4);
    }
    else {
        uVar2 = queue_delayed_work_on(0x20,*(iVar4 + 0x8d8),iVar4 + 0xa80,3);
    }
    return uVar2;
}


// ===== sym.rtc6226_search @ 0x08005ca0 (size 64) =====

void sym.rtc6226_search(int64_t arg1)

{
    uint64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        sym.rtc6226_cancel_seek(arg1);
    }
    else {
        queue_delayed_work_on(0x20,*(arg1 + 0x8d8),arg1 + 0xa80,3);
    }
    return;
}


// ===== sym.rtc6226_start @ 0x08005ce0 (size 380) =====

void sym.rtc6226_start(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    ushort auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    auStack_2c[0] = 0;
    *(arg1 + 0x7d2) = 0;
    *(arg1 + 0x7c2) = 0x16aa;
    iVar2 = sym.rtc6226_set_register(arg1,0);
    if (iVar2 < 0) {
        uVar4 = 0;
        do {
            iVar2 = sym.rtc6226_set_register(arg1,0);
            if (-1 < iVar2) break;
            bVar1 = uVar4 < 9;
            uVar4 = uVar4 + 1;
        } while (bVar1);
        if (iVar2 < 0) {
            _printk(0x800147b,"rtc6226_start");
        }
    }
    msleep(0x1e);
    *(arg1 + 0x7c2) = 0x96aa;
    iVar2 = sym.rtc6226_set_register(arg1,0);
    if (iVar2 < 0) {
        uVar4 = 0;
        do {
            iVar2 = sym.rtc6226_set_register(arg1,0);
            if (-1 < iVar2) break;
            bVar1 = uVar4 < 9;
            uVar4 = uVar4 + 1;
        } while (bVar1);
        if (iVar2 < 0) {
            _printk(0x80013d2,"rtc6226_start");
        }
    }
    msleep(0x1e);
    sym.rtc6226_get_register(arg1,0);
    sym.rtc6226_get_register(arg1,1);
    iVar2 = sym.rtc6226_get_all_registers(arg1);
    if (-1 < iVar2) {
        auStack_2c[0] = 0x38;
        iVar2 = sym.rtc6226_set_serial_registers(arg1,auStack_2c,0x40);
        if (-1 < iVar2) {
            auStack_2c[0] = 0xc100;
            sym.rtc6226_set_serial_registers(arg1,auStack_2c,0x8e);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_stop;
    *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) & 0x2fff;
    iVar2 = sym.rtc6226_set_register(iVar3,4);
    if (-1 < iVar2) {
        *(iVar3 + 0x7c6) = *(iVar3 + 0x7c6) & 0xbfff;
        sym.rtc6226_set_register(iVar3,2);
        *(iVar3 + 0x7ce) = *(iVar3 + 0x7ce) & 0x3fff | 0x4000;
        sym.rtc6226_set_register(iVar3,6);
        *(iVar3 + 0x7c2) = 0x16aa;
        sym.rtc6226_set_register(iVar3,0);
    }
    return;
}


// ===== sym.rtc6226_stop @ 0x08005e5c (size 144) =====

void sym.rtc6226_stop(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x7ca) = *(arg1 + 0x7ca) & 0x2fff;
    iVar1 = sym.rtc6226_set_register(arg1,4);
    if (-1 < iVar1) {
        *(arg1 + 0x7c6) = *(arg1 + 0x7c6) & 0xbfff;
        sym.rtc6226_set_register(arg1,2);
        *(arg1 + 0x7ce) = *(arg1 + 0x7ce) & 0x3fff | 0x4000;
        sym.rtc6226_set_register(arg1,6);
        *(arg1 + 0x7c2) = 0x16aa;
        sym.rtc6226_set_register(arg1,0);
    }
    return;
}


// ===== sym.rtc6226_rds_handler @ 0x08005eec (size 2652) =====

void sym.rtc6226_rds_handler(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    uint32_t uVar6;
    char cVar7;
    uchar uVar8;
    uchar uVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    bool bVar16;
    uint uVar17;
    code *pcVar18;
    bool bVar19;
    int iVar20;
    char *pcVar21;
    ulong uVar22;
    uchar *puVar23;
    uint8_t uVar24;
    char cVar25;
    uint8_t uVar26;
    uint64_t uVar27;
    uint8_t uVar28;
    ulong *in_x18;
    uint64_t uVar29;
    ulong *puVar30;
    uint32_t uVar31;
    ulong unaff_x30;
    uint auStack_f0 [2];
    uint uStack_e8;
    uchar auStack_e4 [4];
    int iStack_e0;
    ushort uStack_dc;
    ushort uStack_da;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    unkbyte7 Stack_80;
    uint uStack_79;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_70 = *(iVar13 + 0x5e0);
    iVar13 = arg1 + -0x8e8;
    if (iVar13 == 0) {
        uVar22 = 0x8000e07;
        pcVar21 = "rtc6226_rds_handler";
    }
    else {
        mutex_lock(arg1 + -0xb8);
        iVar20 = sym.rtc6226_get_all_registers(iVar13);
        if (iVar20 < 0) {
            _printk(0x80015d2,"rtc6226_get_rds",iVar20);
        }
        else {
            uVar24 = *(arg1 + -0x110) >> 8;
            *(arg1 + 0x242) = *(arg1 + -0x10e);
            *(arg1 + 0x246) = *(arg1 + -0x10a);
            *(arg1 + 0x36c) = uVar24 >> 6;
            *(arg1 + 0x36d) = uVar24 >> 4 & 3;
            *(arg1 + 0x36e) = uVar24 >> 2 & 3;
            *(arg1 + 0x36f) = uVar24 & 3;
        }
        mutex_unlock(arg1 + -0xb8);
        if ((*(arg1 + 0x36c) < 2) && (*(arg1 + 0x23e) != *(arg1 + 0x242))) {
            *(arg1 + 0x23e) = *(arg1 + 0x242);
        }
        if (*(arg1 + 0x36d) != '\0') goto code_r0x08006878;
        uVar10 = *(arg1 + 0x244);
        uVar31 = uVar10;
        uVar11 = uVar10 >> 0xb;
        if (((uVar11 & 1) != 0) && (*(arg1 + 0x23e) != *(arg1 + 0x246))) {
            *(arg1 + 0x23e) = *(arg1 + 0x246);
        }
        uVar12 = uVar10 >> 5 & 0x1f;
        if (*(arg1 + 0x240) != uVar12) {
            *(arg1 + 0x240) = uVar12;
        }
        if (uVar11 < 7) {
    //switch table (7 cases) at 0x8001d38
            switch(*(uVar11 * 2 + 0x8001d38) * 4 + 0x8006010) {
            case 0x8006014:
                if (*(arg1 + 0x36e) < 3) {
                    auStack_f0[0] = *(arg1 + -0x40);
                    uVar24 = *(arg1 + 0x247);
                    uStack_e8 = 0;
                    uStack_88 = 0;
                    Stack_80 = 0;
                    uStack_79 = 0;
                    uStack_98 = 0;
                    uStack_90 = 0;
                    uStack_a8 = 0;
                    uStack_a0 = 0;
                    uStack_b8 = 0;
                    uStack_b0 = 0;
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    _iStack_e0 = 0;
                    sym.rtc6226_get_freq(iVar13,&stack0xffffffffffffff18);
                    uVar17 = uStack_e8;
                    puVar30 = &stack0xffffffffffffff20 | 4;
                    bVar19 = true;
                    do {
                        bVar16 = bVar19;
                        uVar31 = uVar24;
                        if (uVar31 - 0xe1 < 0x19) {
                            *(arg1 + 0xa0) = 0;
                            *(arg1 + 0xa8) = uVar17;
                            *(arg1 + 0xa1) = uVar24 + 0x20;
                            *(arg1 + 0xa4) = *(arg1 + 0x23e);
                        }
                        else if ((uVar31 - 1 < 0xcc) && (iVar20 = *(arg1 + 0xa8), iVar20 != 0)) {
                            uVar24 = *(arg1 + 0xa2);
                            uVar29 = uVar24;
                            if (uVar29 < 0x19) {
                                if (*(arg1 + -0x134) < 3) {
                                    uVar31 = uVar31 * 100 + 0x155cc;
                                    uVar14 = uVar31 + *(arg1 + -0x1c) * -10;
                                    if ((*(arg1 + -0x1c) * 10 <= uVar31) && (uVar31 <= *(arg1 + -0x1a) * 10)) {
                                        uVar6 = *(*(arg1 + -0x134) * 4 + 0x8002284);
                                        uVar15 = 0;
                                        if (uVar6 != 0) {
                                            uVar15 = uVar14 / uVar6;
                                        }
                                        if (uVar14 == uVar15 * uVar6) {
                                            if (uVar24 == 0) {
                                                uVar29 = 0;
                                            }
                                            else {
                                                uVar27 = 0;
                                                bVar19 = true;
                                                do {
                                                    if (uVar27 == 0x19) goto code_r0x08006944;
                                                    if (*(arg1 + 0xac + uVar27 * 4) == uVar31) break;
                                                    uVar27 = uVar27 + 1;
                                                    bVar19 = uVar27 < uVar29;
                                                } while (uVar29 != uVar27);
                                                if (bVar19) goto code_r0x08006144;
                                            }
                                            uVar28 = *(arg1 + 0xa0);
                                            uVar26 = *(arg1 + 0xa1);
                                            uVar14 = uVar24 + 1;
                                            uVar8 = uVar14;
                                            *(arg1 + 0xa2) = uVar8;
                                            *(iVar13 + uVar29 * 4 + 0x994) = uVar31;
                                            if (uVar28 + (uVar14 & 0xff) == uVar26) {
                                                if (*(arg1 + 0x38) == iVar20) {
                                                    if (*(arg1 + 0x32) != 0) {
                                                        uVar29 = 0;
                                                        do {
                                                            if (uVar29 == 0x19) goto code_r0x08006944;
                                                            uVar27 = 0;
                                                            while( true ) {
                                                                if (uVar27 == 0x19) goto code_r0x08006944;
                                                                if (*(iVar13 + uVar29 * 4 + 0x924) ==
                                                                    *(arg1 + 0xac + uVar27 * 4)) break;
                                                                uVar27 = uVar27 + 1;
                                                                if ((uVar14 & 0xff) == uVar27) goto code_r0x08006254;
                                                            }
                                                            if ((uVar14 & 0xff) == (uVar27 & 0xff))
                                                            goto code_r0x08006254;
                                                            uVar29 = uVar29 + 1;
                                                        } while (uVar29 != *(arg1 + 0x32));
                                                    }
                                                }
                                                else {
code_r0x08006254:
                                                    *(arg1 + 0x31) = uVar26;
                                                    *(arg1 + 0x34) = *(arg1 + 0xa4);
                                                    *(arg1 + 0x32) = uVar8;
                                                    *(arg1 + 0x38) = iVar20;
                                                    *(arg1 + 0x8c) = *(arg1 + 0xfc);
                                                    *(arg1 + 0x94) = *(arg1 + 0x104);
                                                    uVar22 = *(arg1 + 0xdc);
                                                    uVar4 = *(arg1 + 0xe4);
                                                    *(arg1 + 0x9c) = *(arg1 + 0x10c);
                                                    uVar3 = *(arg1 + 0xec);
                                                    uVar5 = *(arg1 + 0xf4);
                                                    *(puVar30 + 0x5f) = 0;
                                                    puVar30[10] = 0;
                                                    puVar30[0xb] = 0;
                                                    *(arg1 + 0x6c) = uVar22;
                                                    *(arg1 + 0x74) = uVar4;
                                                    uVar22 = *(arg1 + 0xbc);
                                                    uVar4 = *(arg1 + 0xc4);
                                                    *(arg1 + 0x7c) = uVar3;
                                                    *(arg1 + 0x84) = uVar5;
                                                    uVar3 = *(arg1 + 0xcc);
                                                    uVar5 = *(arg1 + 0xd4);
                                                    puVar30[8] = 0;
                                                    puVar30[9] = 0;
                                                    puVar30[6] = 0;
                                                    puVar30[7] = 0;
                                                    *(arg1 + 0x4c) = uVar22;
                                                    *(arg1 + 0x54) = uVar4;
                                                    uVar22 = *(arg1 + 0xac);
                                                    uVar4 = *(arg1 + 0xb4);
                                                    *(arg1 + 0x5c) = uVar3;
                                                    *(arg1 + 100) = uVar5;
                                                    puVar30[4] = 0;
                                                    puVar30[5] = 0;
                                                    puVar30[2] = 0;
                                                    puVar30[3] = 0;
                                                    *puVar30 = 0;
                                                    puVar30[1] = 0;
                                                    *(arg1 + 0x3c) = uVar22;
                                                    *(arg1 + 0x44) = uVar4;
                                                    _iStack_e0 = CONCAT26(CONCAT11(uStack_da._1_1_,uVar8),
                                                                          CONCAT24(*(arg1 + 0x23e),iVar20));
                                                    memcpy(&stack0xffffffffffffff20 | 7,arg1 + 0x3c,
                                                           (uVar14 & 0xff) << 2);
                                                    uVar22 = _raw_spin_lock_irqsave(&stack0xffffffffffffff10);
                                                    __kfifo_in(arg1 + 0x500,&stack0xffffffffffffff20,uStack_da * 4 + 7
                                                              );
                                                    _raw_spin_unlock_irqrestore(&stack0xffffffffffffff10,uVar22);
                                                    auStack_e4[0] = 0xf;
                                                    uVar22 = _raw_spin_lock_irqsave(arg1 + -0x50);
                                                    iVar20 = __kfifo_in(arg1 + 0x4a0,&stack0xffffffffffffff1c,1);
                                                    _raw_spin_unlock_irqrestore(arg1 + -0x50,uVar22);
                                                    if (iVar20 != 0) {
                                                        __wake_up(arg1 + 0x220,1,1,0);
                                                    }
                                                }
                                            }
                                            goto code_r0x080060bc;
                                        }
                                    }
                                }
code_r0x08006144:
                                *(arg1 + 0xa0) = *(arg1 + 0xa0) + '\x01';
                            }
                        }
code_r0x080060bc:
                        uVar24 = *(arg1 + 0x246);
                        bVar19 = false;
                    } while (bVar16);
                    uVar31 = *(arg1 + 0x244);
                }
            case 0x80064e0:
                if (*(arg1 + 0x36f) < 3) {
                    uVar31 = (uVar31 & 3) << 1;
                    sym.rtc6226_update_ps(iVar13,uVar31,*(arg1 + 0x249));
                    sym.rtc6226_update_ps(iVar13,uVar31 | 1,*(arg1 + 0x248));
                }
                break;
            case 0x8006388:
                sym.rt_handler(iVar13,uVar10 >> 4 & 1,4,(uVar10 & 0xf) << 2);
                break;
            case 0x80063c8:
                *(arg1 + 0x2aa) = 0xd;
                *(arg1 + 0x2ea) = 0xd;
                *(arg1 + 0x32a) = 2;
                sym.rt_handler(iVar13,uVar10 >> 4 & 1,2,(uVar10 & 0xf) << 1);
                break;
            case 0x8006410:
                uVar10 = uVar10 & 0x1f;
                if (*(arg1 + 0x248) == 0x4bd7) {
                    *(arg1 + 0x475) = *(arg1 + 0x246) >> 0xd & 1;
                    if (uVar10 != *(arg1 + 0x370)) {
                        _iStack_e0 = CONCAT71(stack0xffffffffffffff21,0x13);
                        uVar22 = _raw_spin_lock_irqsave(arg1 + -0x50);
                        iVar20 = __kfifo_in(arg1 + 0x4a0,&stack0xffffffffffffff20,1);
                        _raw_spin_unlock_irqrestore(arg1 + -0x50,uVar22);
                        if (iVar20 != 0) {
                            __wake_up(arg1 + 0x220,1,1,0);
                        }
                        *(arg1 + 0x370) = uVar10;
                    }
                }
                else if (*(arg1 + 0x248) == 0x6552) {
                    *(arg1 + 0x474) = *(arg1 + 0x246) & 1;
                    *(arg1 + 0x476) = *(arg1 + 0x246) >> 1 & 1;
                    if (uVar10 != *(arg1 + 0x371)) {
                        _iStack_e0 = CONCAT71(stack0xffffffffffffff21,0x13);
                        uVar22 = _raw_spin_lock_irqsave(arg1 + -0x50);
                        iVar20 = __kfifo_in(arg1 + 0x4a0,&stack0xffffffffffffff20,1);
                        _raw_spin_unlock_irqrestore(arg1 + -0x50,uVar22);
                        if (iVar20 != 0) {
                            __wake_up(arg1 + 0x220,1,1,0);
                        }
                        *(arg1 + 0x371) = uVar10;
                    }
                }
                break;
            case 0x8006924:
                goto code_r0x08006924;
            }
        }
        else {
code_r0x08006924:
            _printk(0x8001317,"rtc6226_rds_handler",uVar11);
        }
        if ((*(arg1 + 0x370) == 0) || (uVar11 != *(arg1 + 0x370))) {
            if ((*(arg1 + 0x371) == 0) || (uVar11 != *(arg1 + 0x371))) goto code_r0x08006878;
            uVar10 = *(arg1 + 0x244);
            if ((uVar10 & 0x1f) == 0) {
                uVar24 = 0;
                *(arg1 + 0x472) = 0;
                if ((uVar10 & 0x1f) != 0) goto code_r0x080067b0;
code_r0x08006674:
                if (*(arg1 + 0x472) == 0xff) goto code_r0x08006878;
                uVar11 = *(arg1 + 0x246);
                iVar2 = iVar13 + *(arg1 + 0x472);
                cVar25 = *(arg1 + 0x474);
                *(iVar2 + 0xc5b) = uVar11;
                uVar26 = *(arg1 + 0x472);
                *(iVar2 + 0xc5a) = uVar11 >> 8;
                uVar28 = uVar26 + 2;
                *(arg1 + 0x472) = uVar28;
                if ((cVar25 == '\0') && (uVar11 == 0xd)) {
code_r0x080066b0:
                    *(arg1 + 0x472) = uVar26;
                    uVar28 = uVar26;
code_r0x080066b8:
                    if ((uVar28 != 0) && (puVar23 = __kmalloc(uVar28 + 3,0xa20), puVar23 != NULL)) {
                        uVar8 = *(arg1 + 0x474);
                        uVar9 = *(arg1 + 0x476);
                        *puVar23 = *(arg1 + 0x472);
                        puVar23[1] = uVar8;
                        puVar23[2] = uVar9;
                        memcpy(puVar23 + 3,arg1 + 0x372);
                        uVar22 = _raw_spin_lock_irqsave(arg1 + -0x24);
                        __kfifo_in(arg1 + 0x5a8,puVar23,*(arg1 + 0x472) + 3);
                        _raw_spin_unlock_irqrestore(arg1 + -0x24,uVar22);
                        _iStack_e0 = CONCAT71(stack0xffffffffffffff21,0x15);
                        uVar22 = _raw_spin_lock_irqsave(arg1 + -0x50);
                        iVar20 = __kfifo_in(arg1 + 0x4a0,&stack0xffffffffffffff20,1);
                        _raw_spin_unlock_irqrestore(arg1 + -0x50,uVar22);
                        if (iVar20 != 0) {
                            __wake_up(arg1 + 0x220,1,1,0);
                        }
                        kfree(puVar23);
                    }
                    uVar24 = 0;
                    *(arg1 + 0x472) = 0;
                }
                else {
                    if (cVar25 == '\x01') {
                        if ((uVar11 & 0xff00) != 0xd00) {
                            if ((uVar11 & 0xff) != 0xd) goto code_r0x080068b4;
code_r0x08006850:
                            uVar26 = uVar26 + 1;
                        }
                        goto code_r0x080066b0;
                    }
code_r0x080068b4:
                    if (uVar28 == 0xff) goto code_r0x08006878;
                    uVar11 = *(arg1 + 0x248);
                    *(iVar13 + uVar28 + 0xc5b) = uVar11;
                    uVar26 = *(arg1 + 0x472);
                    *(iVar13 + uVar28 + 0xc5a) = uVar11 >> 8;
                    uVar28 = uVar26 + 2;
                    *(arg1 + 0x472) = uVar28;
                    if ((cVar25 == '\0') && (uVar11 == 0xd)) goto code_r0x080066b0;
                    if (cVar25 == '\x01') {
                        if ((uVar11 & 0xff00) == 0xd00) goto code_r0x080066b0;
                        if ((uVar11 & 0xff) == 0xd) goto code_r0x08006850;
                    }
                    if (((uVar10 & 0x1f) == 0x1f) || (uVar11 == 0xd)) goto code_r0x080066b8;
                }
                cVar25 = uVar24 + 1;
            }
            else {
                uVar24 = *(arg1 + 0x473);
                if ((uVar10 & 0x1f) == uVar24) goto code_r0x08006674;
code_r0x080067b0:
                cVar25 = '\0';
                *(arg1 + 0x472) = 0;
            }
            *(arg1 + 0x473) = cVar25;
            goto code_r0x08006878;
        }
        uVar11 = *(arg1 + 0x246);
        uVar10 = uVar11 >> 0xd | (*(arg1 + 0x244) & 7) << 3;
        uVar11 = uVar11 >> 0xb | (uVar11 & 1) << 5;
        cVar25 = '\0';
        if (uVar10 != 0) {
            cVar25 = '\x03';
        }
        if (uVar11 == 0 && uVar10 == 0) {
            uVar22 = 0x8000e24;
        }
        else {
            if (uVar11 != 0) {
                cVar25 = cVar25 + '\x03';
            }
            pcVar21 = __kmalloc(cVar25 + '\x02',0xa20);
            if (pcVar21 != NULL) {
                cVar7 = *(arg1 + 0x475);
                *pcVar21 = cVar25 + '\x02';
                pcVar21[1] = cVar7;
                if (uVar10 == 0) {
                    uVar29 = 2;
                }
                else {
                    uVar12 = *(arg1 + 0x246);
                    uVar29 = 5;
                    pcVar21[2] = uVar10;
                    pcVar21[3] = uVar12 >> 7 & 0x3f;
                    pcVar21[4] = uVar12 >> 1 & 0x3f;
                }
                if (uVar11 != 0) {
                    uVar10 = *(arg1 + 0x248);
                    pcVar1 = pcVar21 + uVar29;
                    uVar29 = uVar29 + 3;
                    *pcVar1 = uVar11;
                    pcVar1[1] = uVar10 >> 5 & 0x3f;
                    pcVar1[2] = uVar10 & 0x1f;
                }
                uVar22 = _raw_spin_lock_irqsave(arg1 + -0x28);
                __kfifo_in(arg1 + 0x590,pcVar21,uVar29);
                _raw_spin_unlock_irqrestore(arg1 + -0x28,uVar22);
                _iStack_e0 = CONCAT71(stack0xffffffffffffff21,0x14);
                uVar22 = _raw_spin_lock_irqsave(arg1 + -0x50);
                iVar20 = __kfifo_in(arg1 + 0x4a0,&stack0xffffffffffffff20,1);
                _raw_spin_unlock_irqrestore(arg1 + -0x50,uVar22);
                if (iVar20 != 0) {
                    __wake_up(arg1 + 0x220,1,1,0);
                }
                kfree(pcVar21);
                goto code_r0x08006878;
            }
            uVar22 = 0x8000eca;
        }
        pcVar21 = "rtc6226_rt_plus";
    }
    _printk(uVar22,pcVar21);
code_r0x08006878:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail();
code_r0x08006944:
    //WARNING: Does not return
    pcVar18 = SoftwareBreakpoint(0x5512,0x8006948);
    (*pcVar18)();
}


// ===== sym.rtc6226_update_ps @ 0x08006948 (size 912) =====

int64_t sym.rtc6226_update_ps(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    ushort uVar4;
    uint16_t uVar5;
    bool bVar6;
    int iVar7;
    uchar *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint8_t in_w3;
    int64_t in_x4;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    uchar uVar14;
    char cVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar16;
    uint32_t uVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    uchar auStack_9c [4];
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    iVar11 = arg1 + (arg2 & 0xffU);
    uVar17 = arg3 & 0xff;
    uVar3 = arg3;
    if (*(iVar11 + 0xc3c) == uVar17) {
        if (*(iVar11 + 0xc4c) < 2) {
            *(iVar11 + 0xc4c) = *(iVar11 + 0xc4c) + 1;
        }
        else {
            *(iVar11 + 0xc4c) = '\x02';
            *(arg1 + (arg2 & 0xffU) + 0xc44) = uVar3;
        }
    }
    else {
        uVar2 = *(iVar11 + 0xc4c);
        if (*(iVar11 + 0xc44) == uVar17) {
            uVar14 = 2;
            if (1 < uVar2) {
                uVar14 = 3;
            }
            *(iVar11 + 0xc44) = *(iVar11 + 0xc3c);
            *(iVar11 + 0xc3c) = uVar3;
            *(iVar11 + 0xc4c) = uVar14;
            if (1 < uVar2) {
                iVar7 = *(arg1 + 0xc4c) - 1;
                if (*(arg1 + 0xc4c) != 0 && iVar7 != 0) {
                    *(arg1 + 0xc4c) = iVar7;
                }
                if (1 < *(arg1 + 0xc4d)) {
                    *(arg1 + 0xc4d) = *(arg1 + 0xc4d) - 1;
                }
                if (1 < *(arg1 + 0xc4e)) {
                    *(arg1 + 0xc4e) = *(arg1 + 0xc4e) - 1;
                }
                if (1 < *(arg1 + 0xc4f)) {
                    *(arg1 + 0xc4f) = *(arg1 + 0xc4f) - 1;
                }
                if (1 < *(arg1 + 0xc50)) {
                    *(arg1 + 0xc50) = *(arg1 + 0xc50) - 1;
                }
                if (1 < *(arg1 + 0xc51)) {
                    *(arg1 + 0xc51) = *(arg1 + 0xc51) - 1;
                }
                if (1 < *(arg1 + 0xc52)) {
                    *(arg1 + 0xc52) = *(arg1 + 0xc52) - 1;
                }
                if (1 < *(arg1 + 0xc53)) {
                    *(arg1 + 0xc53) = *(arg1 + 0xc53) - 1;
                }
            }
        }
        else if (uVar2 == 0) {
            *(iVar11 + 0xc3c) = uVar3;
            *(iVar11 + 0xc4c) = 1;
        }
        else {
            *(iVar11 + 0xc44) = uVar3;
        }
    }
    if ((((((1 < *(arg1 + 0xc4c)) && (1 < *(arg1 + 0xc4d))) && (1 < *(arg1 + 0xc4e))) &&
         ((1 < *(arg1 + 0xc4f) && (1 < *(arg1 + 0xc50))))) &&
        ((1 < *(arg1 + 0xc51) && ((1 < *(arg1 + 0xc52) && (1 < *(arg1 + 0xc53))))))) &&
       ((*(arg1 + 0xc34) != *(arg1 + 0xc3c) ||
        ((((*(arg1 + 0xc35) != *(arg1 + 0xc3d) || (*(arg1 + 0xc36) != *(arg1 + 0xc3e))) ||
          (*(arg1 + 0xc37) != *(arg1 + 0xc3f))) ||
         (((*(arg1 + 0xc38) != *(arg1 + 0xc40) || (*(arg1 + 0xc39) != *(arg1 + 0xc41))) ||
          ((*(arg1 + 0xc3a) != *(arg1 + 0xc42) || (*(arg1 + 0xc3b) != *(arg1 + 0xc43))))))))))) {
        arg3 = 0xd;
        *(arg1 + 0xc34) = *(arg1 + 0xc3c);
        iVar11 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar11 = 0x30;
        }
        puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xa20);
        if (puVar8 == NULL) {
            arg1 = _printk(0x8001878,"rtc6226_update_ps");
        }
        else {
            uVar4 = *(arg1 + 0xb26);
            uVar14 = *(arg1 + 0xb28);
            uVar13 = *(arg1 + 0xc3c);
            *puVar8 = 1;
            puVar8[4] = 0;
            puVar8[1] = uVar14;
            puVar8[3] = uVar4;
            puVar8[2] = uVar4 >> 8;
            *(puVar8 + 5) = uVar13;
            uVar13 = _raw_spin_lock_irqsave(arg1 + 0x8a0);
            __kfifo_in(arg1 + 0xdb8,puVar8,0xd);
            _raw_spin_unlock_irqrestore(arg1 + 0x8a0,uVar13);
            auStack_4c[0] = 6;
            uVar13 = _raw_spin_lock_irqsave(arg1 + 0x898);
            arg3 = 1;
            iVar7 = __kfifo_in(arg1 + 0xd88,auStack_4c);
            _raw_spin_unlock_irqrestore(arg1 + 0x898,uVar13);
            if (iVar7 != 0) {
                arg3 = 1;
                in_w3 = 0;
                __wake_up(arg1 + 0xb08,1);
            }
            arg1 = kfree(puVar8);
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_48) {
        return arg1;
    }
    auVar18 = __stack_chk_fail();
    uVar9 = auVar18._0_8_;
    *extraout_x18 = sym.rt_handler;
    pcStack_88 = sym.rt_handler;
    iVar11 = sp_el0;
    iStack_98 = *(iVar11 + 0x5e0);
    if ((*(uVar9 + 0xc32) != (auVar18._8_4_ & 0xff)) && (*(uVar9 + 0xc33) != '\0')) {
        iVar11 = 0;
        do {
            iVar1 = uVar9 + iVar11;
            if (*(iVar1 + 0xb72) == '\0') {
                *(iVar1 + 0xb72) = 0x20;
                *(iVar1 + 0xbf2) = *(iVar1 + 0xbf2) + '\x01';
            }
            iVar11 = iVar11 + 1;
        } while (iVar11 != 0x40);
        *(uVar9 + 0xc22) = 0;
        *(uVar9 + 0xc2a) = 0;
        *(uVar9 + 0xc12) = 0;
        *(uVar9 + 0xc1a) = 0;
        *(uVar9 + 0xc02) = 0;
        *(uVar9 + 0xc0a) = 0;
        *(uVar9 + 0xbf2) = 0;
        *(uVar9 + 0xbfa) = 0;
        *(uVar9 + 0xbe2) = 0;
        *(uVar9 + 0xbea) = 0;
        *(uVar9 + 0xbd2) = 0;
        *(uVar9 + 0xbda) = 0;
        *(uVar9 + 0xbc2) = 0;
        *(uVar9 + 0xbca) = 0;
        *(uVar9 + 0xbb2) = 0;
        *(uVar9 + 0xbba) = 0;
        *(uVar9 + 0xba2) = 0;
        *(uVar9 + 0xbaa) = 0;
        *(uVar9 + 0xb92) = 0;
        *(uVar9 + 0xb9a) = 0;
        *(uVar9 + 0xb82) = 0;
        *(uVar9 + 0xb8a) = 0;
        *(uVar9 + 0xb72) = 0;
        *(uVar9 + 0xb7a) = 0;
    }
    uVar12 = 0;
    bVar6 = false;
    iVar11 = uVar9 + in_w3 + 0xb72;
    *(uVar9 + 0xc32) = auVar18[8];
    *(uVar9 + 0xc33) = 1;
    uVar10 = uVar9;
    do {
        iVar1 = 0xc56;
        if (1 < uVar12 || (arg3 & 0xff) < 3) {
            iVar1 = 0xc57;
        }
        if (*(uVar9 + iVar1) < 3) {
            cVar15 = *(in_x4 + uVar12);
            if (cVar15 == '\0') {
                cVar15 = ' ';
                *(in_x4 + uVar12) = 0x20;
            }
            if (*(iVar11 + uVar12) == cVar15) {
                iVar1 = iVar11 + uVar12;
                if (*(iVar1 + 0x80) < 2) {
                    *(iVar1 + 0x80) = *(iVar1 + 0x80) + 1;
                }
                else {
                    *(iVar1 + 0x80) = 2;
                    *(iVar1 + 0x40) = *(in_x4 + uVar12);
                }
            }
            else {
                iVar1 = iVar11 + uVar12;
                uVar3 = *(iVar1 + 0x80);
                uVar10 = uVar3;
                if (*(iVar1 + 0x40) == cVar15) {
                    *(iVar1 + 0x40) = *(iVar11 + uVar12);
                    uVar14 = 2;
                    if (1 < uVar3) {
                        uVar14 = 3;
                    }
                    *(iVar1 + 0x80) = uVar14;
                    bVar6 = 1 < uVar3 | bVar6;
                    *(iVar11 + uVar12) = *(in_x4 + uVar12);
                }
                else if (uVar3 == 0) {
                    *(iVar11 + uVar12) = cVar15;
                    *(iVar1 + 0x80) = 1;
                }
                else {
                    *(iVar1 + 0x40) = cVar15;
                }
            }
        }
        uVar12 = uVar12 + 1;
    } while ((arg3 & 0xffU) != uVar12);
    if (bVar6) {
        iVar11 = 0;
        do {
            uVar3 = *(uVar9 + 0xbf2 + iVar11);
            if (1 < uVar3) {
                *(uVar9 + 0xbf2 + iVar11) = uVar3 - 1;
            }
            iVar11 = iVar11 + 1;
        } while (iVar11 != 0x40);
    }
    iVar11 = 0;
    do {
        puStack_90 = &stack0xffffffffffffffc0;
        if (*(uVar9 + iVar11 + 0xbf2) < 2) goto code_r0x08007018;
    } while ((*(uVar9 + iVar11 + 0xb72) != '\r') && (bVar6 = iVar11 != 0x3f, iVar11 = iVar11 + 1, bVar6));
    uVar12 = 0;
    do {
        if (*(uVar9 + 0xb72 + uVar12) == '\r') {
            uVar17 = uVar12 & 0xff;
            if ((uVar12 & 0xff) != 0) goto code_r0x08006f04;
            goto code_r0x08007018;
        }
        uVar12 = uVar12 + 1;
    } while (uVar12 != 0x40);
    uVar17 = 0x40;
code_r0x08006f04:
    uVar12 = 0;
    uVar16 = uVar17;
    do {
        if (*(uVar9 + uVar12 + 0xb32) != *(uVar9 + uVar12 + 0xb72)) {
            if (uVar17 != (uVar12 & 0xff)) {
                memmove(uVar9 + 0xb32,uVar9 + 0xb72,uVar16);
                puVar8 = __kmalloc(uVar17 + 5 & 0xff,0xa20);
                if (puVar8 == NULL) {
                    uVar10 = _printk(0x8001878,"display_rt");
                }
                else {
                    uVar5 = *(uVar9 + 0xb26);
                    uVar14 = *(uVar9 + 0xc32);
                    puVar8[1] = *(uVar9 + 0xb28);
                    *puVar8 = uVar17;
                    puVar8[4] = uVar14;
                    *(puVar8 + 2) = uVar5 >> 8 | uVar5 << 8;
                    memcpy(puVar8 + 5,uVar9 + 0xb32,uVar16);
                    uVar13 = _raw_spin_lock_irqsave(uVar9 + 0x89c);
                    __kfifo_in(uVar9 + 0xda0,puVar8,uVar17 + 5);
                    _raw_spin_unlock_irqrestore(uVar9 + 0x89c,uVar13);
                    auStack_9c[0] = 5;
                    uVar13 = _raw_spin_lock_irqsave(uVar9 + 0x898);
                    iVar7 = __kfifo_in(uVar9 + 0xd88,auStack_9c,1);
                    _raw_spin_unlock_irqrestore(uVar9 + 0x898,uVar13);
                    if (iVar7 != 0) {
                        __wake_up(uVar9 + 0xb08,1,1,0);
                    }
                    uVar10 = kfree(puVar8);
                }
            }
            break;
        }
        uVar12 = uVar12 + 1;
    } while (uVar16 != uVar12);
code_r0x08007018:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_98) {
        return uVar10;
    }
    iVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.rtc6226_reset_rds_data;
    mutex_lock(iVar11 + 0x830);
    *(iVar11 + 0xb26) = 0;
    *(iVar11 + 0xd64) = 0;
    *(iVar11 + 0xb32) = 0;
    *(iVar11 + 0xb3a) = 0;
    *(iVar11 + 0xb42) = 0;
    *(iVar11 + 0xb4a) = 0;
    *(iVar11 + 0xb52) = 0;
    *(iVar11 + 0xb5a) = 0;
    *(iVar11 + 0xb62) = 0;
    *(iVar11 + 0xb6a) = 0;
    *(iVar11 + 0xb72) = 0;
    *(iVar11 + 0xb7a) = 0;
    *(iVar11 + 0xb82) = 0;
    *(iVar11 + 0xb8a) = 0;
    *(iVar11 + 0xb92) = 0;
    *(iVar11 + 0xb9a) = 0;
    *(iVar11 + 0xba2) = 0;
    *(iVar11 + 0xbaa) = 0;
    *(iVar11 + 0xbb2) = 0;
    *(iVar11 + 0xbba) = 0;
    *(iVar11 + 0xbc2) = 0;
    *(iVar11 + 0xbca) = 0;
    *(iVar11 + 0xbd2) = 0;
    *(iVar11 + 0xbda) = 0;
    *(iVar11 + 0xbe2) = 0;
    *(iVar11 + 0xbea) = 0;
    *(iVar11 + 0xbf2) = 0;
    *(iVar11 + 0xbfa) = 0;
    *(iVar11 + 0xc02) = 0;
    *(iVar11 + 0xc0a) = 0;
    *(iVar11 + 0xc12) = 0;
    *(iVar11 + 0xc1a) = 0;
    *(iVar11 + 0xc22) = 0;
    *(iVar11 + 0xc2a) = 0;
    *(iVar11 + 0xc44) = 0;
    *(iVar11 + 0xc4c) = 0;
    *(iVar11 + 0xc34) = 0;
    *(iVar11 + 0xc3c) = 0;
    memset(*(iVar11 + 0x860),0,*(iVar11 + 0xd60));
    mutex_unlock(iVar11 + 0x830);
    return 0;
}


// ===== sym.rt_handler @ 0x08006cd8 (size 912) =====

uint64_t sym.rt_handler(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    bool bVar4;
    int iVar5;
    uchar *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    int64_t in_x4;
    int64_t iVar9;
    uint64_t uVar10;
    uchar uVar11;
    char cVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    if ((*(arg1 + 0xc32) != (arg2 & 0xff)) && (*(arg1 + 0xc33) != '\0')) {
        iVar9 = 0;
        do {
            iVar1 = arg1 + iVar9;
            if (*(iVar1 + 0xb72) == '\0') {
                *(iVar1 + 0xb72) = 0x20;
                *(iVar1 + 0xbf2) = *(iVar1 + 0xbf2) + '\x01';
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 != 0x40);
        *(arg1 + 0xc22) = 0;
        *(arg1 + 0xc2a) = 0;
        *(arg1 + 0xc12) = 0;
        *(arg1 + 0xc1a) = 0;
        *(arg1 + 0xc02) = 0;
        *(arg1 + 0xc0a) = 0;
        *(arg1 + 0xbf2) = 0;
        *(arg1 + 0xbfa) = 0;
        *(arg1 + 0xbe2) = 0;
        *(arg1 + 0xbea) = 0;
        *(arg1 + 0xbd2) = 0;
        *(arg1 + 0xbda) = 0;
        *(arg1 + 0xbc2) = 0;
        *(arg1 + 0xbca) = 0;
        *(arg1 + 0xbb2) = 0;
        *(arg1 + 0xbba) = 0;
        *(arg1 + 0xba2) = 0;
        *(arg1 + 0xbaa) = 0;
        *(arg1 + 0xb92) = 0;
        *(arg1 + 0xb9a) = 0;
        *(arg1 + 0xb82) = 0;
        *(arg1 + 0xb8a) = 0;
        *(arg1 + 0xb72) = 0;
        *(arg1 + 0xb7a) = 0;
    }
    uVar10 = 0;
    bVar4 = false;
    iVar9 = arg1 + (arg4 & 0xffU) + 0xb72;
    *(arg1 + 0xc32) = arg2;
    *(arg1 + 0xc33) = 1;
    uVar8 = arg1;
    do {
        iVar1 = 0xc56;
        if (1 < uVar10 || (arg3 & 0xff) < 3) {
            iVar1 = 0xc57;
        }
        if (*(arg1 + iVar1) < 3) {
            cVar12 = *(in_x4 + uVar10);
            if (cVar12 == '\0') {
                cVar12 = ' ';
                *(in_x4 + uVar10) = 0x20;
            }
            if (*(iVar9 + uVar10) == cVar12) {
                iVar1 = iVar9 + uVar10;
                if (*(iVar1 + 0x80) < 2) {
                    *(iVar1 + 0x80) = *(iVar1 + 0x80) + 1;
                }
                else {
                    *(iVar1 + 0x80) = 2;
                    *(iVar1 + 0x40) = *(in_x4 + uVar10);
                }
            }
            else {
                iVar1 = iVar9 + uVar10;
                uVar2 = *(iVar1 + 0x80);
                uVar8 = uVar2;
                if (*(iVar1 + 0x40) == cVar12) {
                    *(iVar1 + 0x40) = *(iVar9 + uVar10);
                    uVar11 = 2;
                    if (1 < uVar2) {
                        uVar11 = 3;
                    }
                    *(iVar1 + 0x80) = uVar11;
                    bVar4 = 1 < uVar2 | bVar4;
                    *(iVar9 + uVar10) = *(in_x4 + uVar10);
                }
                else if (uVar2 == 0) {
                    *(iVar9 + uVar10) = cVar12;
                    *(iVar1 + 0x80) = 1;
                }
                else {
                    *(iVar1 + 0x40) = cVar12;
                }
            }
        }
        uVar10 = uVar10 + 1;
    } while ((arg3 & 0xffU) != uVar10);
    if (bVar4) {
        iVar9 = 0;
        do {
            uVar2 = *(arg1 + 0xbf2 + iVar9);
            if (1 < uVar2) {
                *(arg1 + 0xbf2 + iVar9) = uVar2 - 1;
            }
            iVar9 = iVar9 + 1;
        } while (iVar9 != 0x40);
    }
    iVar9 = 0;
    do {
        if (*(arg1 + iVar9 + 0xbf2) < 2) goto code_r0x08007018;
    } while ((*(arg1 + iVar9 + 0xb72) != '\r') && (bVar4 = iVar9 != 0x3f, iVar9 = iVar9 + 1, bVar4));
    uVar10 = 0;
    do {
        if (*(arg1 + 0xb72 + uVar10) == '\r') {
            uVar14 = uVar10 & 0xff;
            if ((uVar10 & 0xff) != 0) goto code_r0x08006f04;
            goto code_r0x08007018;
        }
        uVar10 = uVar10 + 1;
    } while (uVar10 != 0x40);
    uVar14 = 0x40;
code_r0x08006f04:
    uVar10 = 0;
    uVar13 = uVar14;
    do {
        if (*(arg1 + uVar10 + 0xb32) != *(arg1 + uVar10 + 0xb72)) {
            if (uVar14 != (uVar10 & 0xff)) {
                memmove(arg1 + 0xb32,arg1 + 0xb72,uVar13);
                puVar6 = __kmalloc(uVar14 + 5 & 0xff,0xa20);
                if (puVar6 == NULL) {
                    uVar8 = _printk(0x8001878,"display_rt");
                }
                else {
                    uVar3 = *(arg1 + 0xb26);
                    uVar11 = *(arg1 + 0xc32);
                    puVar6[1] = *(arg1 + 0xb28);
                    *puVar6 = uVar14;
                    puVar6[4] = uVar11;
                    *(puVar6 + 2) = uVar3 >> 8 | uVar3 << 8;
                    memcpy(puVar6 + 5,arg1 + 0xb32,uVar13);
                    uVar7 = _raw_spin_lock_irqsave(arg1 + 0x89c);
                    __kfifo_in(arg1 + 0xda0,puVar6,uVar14 + 5);
                    _raw_spin_unlock_irqrestore(arg1 + 0x89c,uVar7);
                    auStack_4c[0] = 5;
                    uVar7 = _raw_spin_lock_irqsave(arg1 + 0x898);
                    iVar5 = __kfifo_in(arg1 + 0xd88,auStack_4c,1);
                    _raw_spin_unlock_irqrestore(arg1 + 0x898,uVar7);
                    if (iVar5 != 0) {
                        __wake_up(arg1 + 0xb08,1,1,0);
                    }
                    uVar8 = kfree(puVar6);
                }
            }
            break;
        }
        uVar10 = uVar10 + 1;
    } while (uVar13 != uVar10);
code_r0x08007018:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_reset_rds_data;
    mutex_lock(iVar9 + 0x830);
    *(iVar9 + 0xb26) = 0;
    *(iVar9 + 0xd64) = 0;
    *(iVar9 + 0xb32) = 0;
    *(iVar9 + 0xb3a) = 0;
    *(iVar9 + 0xb42) = 0;
    *(iVar9 + 0xb4a) = 0;
    *(iVar9 + 0xb52) = 0;
    *(iVar9 + 0xb5a) = 0;
    *(iVar9 + 0xb62) = 0;
    *(iVar9 + 0xb6a) = 0;
    *(iVar9 + 0xb72) = 0;
    *(iVar9 + 0xb7a) = 0;
    *(iVar9 + 0xb82) = 0;
    *(iVar9 + 0xb8a) = 0;
    *(iVar9 + 0xb92) = 0;
    *(iVar9 + 0xb9a) = 0;
    *(iVar9 + 0xba2) = 0;
    *(iVar9 + 0xbaa) = 0;
    *(iVar9 + 0xbb2) = 0;
    *(iVar9 + 0xbba) = 0;
    *(iVar9 + 0xbc2) = 0;
    *(iVar9 + 0xbca) = 0;
    *(iVar9 + 0xbd2) = 0;
    *(iVar9 + 0xbda) = 0;
    *(iVar9 + 0xbe2) = 0;
    *(iVar9 + 0xbea) = 0;
    *(iVar9 + 0xbf2) = 0;
    *(iVar9 + 0xbfa) = 0;
    *(iVar9 + 0xc02) = 0;
    *(iVar9 + 0xc0a) = 0;
    *(iVar9 + 0xc12) = 0;
    *(iVar9 + 0xc1a) = 0;
    *(iVar9 + 0xc22) = 0;
    *(iVar9 + 0xc2a) = 0;
    *(iVar9 + 0xc44) = 0;
    *(iVar9 + 0xc4c) = 0;
    *(iVar9 + 0xc34) = 0;
    *(iVar9 + 0xc3c) = 0;
    memset(*(iVar9 + 0x860),0,*(iVar9 + 0xd60));
    mutex_unlock(iVar9 + 0x830);
    return 0;
}


// ===== sym.rtc6226_reset_rds_data @ 0x08007068 (size 176) =====

ulong sym.rtc6226_reset_rds_data(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x830);
    *(arg1 + 0xb26) = 0;
    *(arg1 + 0xd64) = 0;
    *(arg1 + 0xb32) = 0;
    *(arg1 + 0xb3a) = 0;
    *(arg1 + 0xb42) = 0;
    *(arg1 + 0xb4a) = 0;
    *(arg1 + 0xb52) = 0;
    *(arg1 + 0xb5a) = 0;
    *(arg1 + 0xb62) = 0;
    *(arg1 + 0xb6a) = 0;
    *(arg1 + 0xb72) = 0;
    *(arg1 + 0xb7a) = 0;
    *(arg1 + 0xb82) = 0;
    *(arg1 + 0xb8a) = 0;
    *(arg1 + 0xb92) = 0;
    *(arg1 + 0xb9a) = 0;
    *(arg1 + 0xba2) = 0;
    *(arg1 + 0xbaa) = 0;
    *(arg1 + 0xbb2) = 0;
    *(arg1 + 0xbba) = 0;
    *(arg1 + 0xbc2) = 0;
    *(arg1 + 0xbca) = 0;
    *(arg1 + 0xbd2) = 0;
    *(arg1 + 0xbda) = 0;
    *(arg1 + 0xbe2) = 0;
    *(arg1 + 0xbea) = 0;
    *(arg1 + 0xbf2) = 0;
    *(arg1 + 0xbfa) = 0;
    *(arg1 + 0xc02) = 0;
    *(arg1 + 0xc0a) = 0;
    *(arg1 + 0xc12) = 0;
    *(arg1 + 0xc1a) = 0;
    *(arg1 + 0xc22) = 0;
    *(arg1 + 0xc2a) = 0;
    *(arg1 + 0xc44) = 0;
    *(arg1 + 0xc4c) = 0;
    *(arg1 + 0xc34) = 0;
    *(arg1 + 0xc3c) = 0;
    memset(*(arg1 + 0x860),0,*(arg1 + 0xd60));
    mutex_unlock(arg1 + 0x830);
    return 0;
}


// ===== sym.rtc6226_set_rssi_threshold @ 0x08007118 (size 88) =====

void sym.rtc6226_set_rssi_threshold(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x7cc) = *(arg1 + 0x7cc) & 0xf0ff | (arg2 & 0x3fc) << 6;
    sym.rtc6226_set_register(arg1,5);
    *(arg1 + 0x7c1) = arg2 & 0xfc;
    return;
}


// ===== sym.rtc6226_power_down @ 0x08007170 (size 184) =====

int sym.rtc6226_power_down(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x830);
    *(arg1 + 0x7ca) = *(arg1 + 0x7ca) & 0x2fff;
    iVar1 = sym.rtc6226_set_register(arg1,4);
    if (-1 < iVar1) {
        *(arg1 + 0x7c6) = *(arg1 + 0x7c6) & 0xbfff;
        sym.rtc6226_set_register(arg1,2);
        *(arg1 + 0x7ce) = *(arg1 + 0x7ce) & 0x3fff | 0x4000;
        sym.rtc6226_set_register(arg1,6);
        *(arg1 + 0x7c2) = 0x16aa;
        iVar1 = sym.rtc6226_set_register(arg1,0);
    }
    mutex_unlock(arg1 + 0x830);
    return iVar1;
}


// ===== sym.rtc6226_power_up @ 0x08007228 (size 300) =====

int sym.rtc6226_power_up(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x830);
    iVar1 = sym.rtc6226_start(arg1);
    if (-1 < iVar1) {
        *(arg1 + 0x7c6) = 0x400c;
        iVar1 = sym.rtc6226_set_register(arg1,2);
        if (-1 < iVar1) {
            *(arg1 + 0x7ca) = *(arg1 + 0x7ca) | 0xc000;
            iVar1 = sym.rtc6226_set_register(arg1,4);
            if (-1 < iVar1) {
                *(arg1 + 2000) = *(arg1 + 2000) | 4;
                iVar1 = sym.rtc6226_set_register(arg1,7);
                if (-1 < iVar1) {
                    *(arg1 + 0x7fa) = 0x2480;
                    iVar1 = sym.rtc6226_set_register(arg1,0x1c);
                    if (-1 < iVar1) {
                        *(arg1 + 0x7cc) = *(arg1 + 0x7cc) & 0xf0ff | 0x200;
                        iVar1 = sym.rtc6226_set_register(arg1,5);
                        *(arg1 + 0x7c1) = 8;
                        if (iVar1 < 0) {
                            _printk(0x8000d97,"rtc6226_power_up");
                        }
                        *(arg1 + 0x7ce) = 0x8000;
                        iVar1 = sym.rtc6226_set_register(arg1,6);
                        if (-1 < iVar1) {
                            msleep(0x1e);
                            iVar1 = sym.rtc6226_get_all_registers(arg1);
                        }
                    }
                }
            }
        }
    }
    mutex_unlock(arg1 + 0x830);
    return iVar1;
}


// ===== sym.rtc6226_vidioc_g_ctrl @ 0x08007354 (size 372) =====

uint sym.rtc6226_vidioc_g_ctrl(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    ulong *in_x18;
    uint uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = video_devdata();
    iVar2 = *(iVar2 + 0x250);
    mutex_lock(iVar2 + 0x830);
    iVar1 = *arg1;
    uVar4 = 0;
    if (0x8000007 < iVar1) {
        if (iVar1 != 0x8000008) {
            if (iVar1 == 0x8000010) goto code_r0x08007498;
            if (iVar1 != 0x800003e) goto code_r0x080074c0;
        }
        uVar3 = *(iVar2 + 0x7c1);
        goto code_r0x0800748c;
    }
    if (iVar1 - 0x98f901U < 0x11) {
    //switch table (17 cases) at 0x8001d46
        switch(*((iVar1 - 0x98f901U) + 0x8001d46) * 4 + 0x80073c4) {
        case 0x80073c8:
            uVar3 = *(iVar2 + 0x7c2);
            break;
        case 0x800742c:
            goto code_r0x0800742c;
        case 0x8007440:
code_r0x08007440:
            uVar3 = *(iVar2 + 0x7c6) & 0xf;
            break;
        case 0x8007450:
            uVar3 = ~*(iVar2 + 0x7c6) >> 0xf & 1;
            break;
        case 0x8007464:
            uVar3 = *(iVar2 + 0x7b0);
            break;
        case 0x8007470:
            uVar3 = *(iVar2 + 0x7cc) & 0xf00;
            break;
        case 0x8007480:
            sym.rtc6226_get_all_registers(iVar2);
            uVar3 = *(iVar2 + 0x7d8);
            break;
        case 0x8007498:
            goto code_r0x08007498;
        default:
code_r0x080074c0:
            uVar4 = 0xffffffea;
            goto code_r0x08007498;
        }
    }
    else {
        if (iVar1 == 0x980905) goto code_r0x08007440;
        if (iVar1 != 0x980909) goto code_r0x080074c0;
code_r0x0800742c:
        uVar3 = (*(iVar2 + 0x7c6) >> 0xe ^ 0xffffffff) & 1;
    }
code_r0x0800748c:
    uVar4 = 0;
    *(arg1 + 4) = uVar3;
code_r0x08007498:
    mutex_unlock(iVar2 + 0x830);
    return uVar4;
}


// ===== sym.rtc6226_is_valid_srch_mode @ 0x080074c8 (size 20) =====

bool sym.rtc6226_is_valid_srch_mode(uint32_t arg1)

{
    return arg1 < 3;
}


// ===== sym.rtc6226_vidioc_s_ctrl @ 0x080074dc (size 1320) =====

int sym.rtc6226_vidioc_s_ctrl(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t arg2;
    uint16_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = video_devdata();
    iVar1 = *arg1;
    iVar2 = 0;
    iVar3 = *(iVar3 + 0x250);
    if (iVar1 < 0x8000001) {
        if (0xd < iVar1 - 0x98f901U) {
            if (iVar1 == 0x980905) goto code_r0x0800768c;
            if (iVar1 == 0x980909) goto code_r0x080075d0;
            goto code_r0x080079fc;
        }
    //switch table (14 cases) at 0x8001d58
        switch(*((iVar1 - 0x98f901U) * 2 + 0x8001d58) * 4 + 0x800759c) {
        case 0x80075a0:
            iVar1 = sym.rtc6226_power_up(iVar3);
            goto code_r0x080076c8;
        case 0x80075d0:
code_r0x080075d0:
            uVar5 = *(iVar3 + 0x7c6) & 0xbfff | (*(arg1 + 4) != 1) << 0xe;
            goto code_r0x080076ac;
        case 0x80075f0:
            goto code_r0x080075f0;
        case 0x8007610:
            goto code_r0x08007610;
        case 0x8007664:
            goto code_r0x08007664;
        case 0x800768c:
code_r0x0800768c:
            uVar5 = *(iVar3 + 0x7c6) & 0xfff0;
            *(iVar3 + 0x7c6) = uVar5;
            iVar1 = 8;
            if (*(arg1 + 4) < 0x10) {
                iVar1 = *(arg1 + 4);
            }
            uVar5 = iVar1 | uVar5;
            goto code_r0x080076ac;
        case 0x80076c0:
            iVar1 = sym.rtc6226_power_down(iVar3);
code_r0x080076c8:
            *(arg1 + 4) = 0;
            return iVar1;
        case 0x80076d8:
            uVar6 = *(arg1 + 4);
            if (uVar6 < 4) {
                *(iVar3 + 0x7ea) = 0x1db0238c2a302a30 >> (uVar6 << 4 & 0x3f);
                *(iVar3 + 0x7ec) = 0x19001db01db0222e >> (uVar6 << 4 & 0x3f);
                uVar6 = *(arg1 + 4);
            }
            *(iVar3 + 0x7b0) = uVar6;
            sym.rtc6226_set_register(iVar3,0x14);
            arg2 = 0x15;
            break;
        case 0x800773c:
            arg2 = 5;
            uVar5 = *(iVar3 + 0x7cc) & 0xf0ff;
            *(iVar3 + 0x7cc) = uVar5;
            *(iVar3 + 0x7cc) = uVar5 | *(arg1 + 4);
            break;
        case 0x8007964:
            goto code_r0x08007964;
        case 0x80079fc:
            goto code_r0x080079fc;
        }
        goto code_r0x08007958;
    }
    if (0x3c < iVar1 + 0xf7ffffffU) goto code_r0x080079fc;
    //switch table (60 cases) at 0x8001d74
    switch(*((iVar1 + 0xf7ffffffU) * 2 + 0x8001d74) * 4 + 0x800753c) {
    case 0x8007540:
        if ((*(iVar3 + 0x7ca) >> 0xc & 1) == 0) {
            *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) | 0x1000;
            iVar1 = sym.rtc6226_set_register(iVar3,4);
            if (iVar1 < 0) {
                *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) & 0xefff;
                return 0;
            }
        }
code_r0x080077f0:
        iVar2 = 0;
        break;
    case 0x80075f0:
code_r0x080075f0:
        uVar5 = *(iVar3 + 0x7c6) & 0xefff | (*(arg1 + 4) == 1) << 0xc;
code_r0x080076ac:
        *(iVar3 + 0x7c6) = uVar5;
        goto code_r0x080076b0;
    case 0x8007610:
code_r0x08007610:
        uVar5 = *(iVar3 + 0x7e8) & 0xe0ff;
        *(iVar3 + 0x7b4) = *(arg1 + 4);
        *(iVar3 + 0x7e8) = uVar5;
        uVar6 = *(arg1 + 4);
        if (uVar6 < 3) {
            *(iVar3 + 0x7e8) = uVar5 | 0x5000a001400 >> ((uVar6 & 3) << 4);
            uVar6 = *(arg1 + 4);
        }
        *(iVar3 + 0x7b4) = uVar6;
        arg2 = 0x13;
        goto code_r0x08007958;
    case 0x8007664:
code_r0x08007664:
        if (*(arg1 + 4) == 0) {
            sym.rtc6226_cancel_seek(iVar3);
            iVar2 = 0;
        }
        else {
            queue_delayed_work_on(0x20,*(iVar3 + 0x8d8),iVar3 + 0xa80,3);
            iVar2 = 0;
        }
        break;
    case 0x8007764:
        if (*(arg1 + 4) < 3) {
            *(iVar3 + 0x869) = *(arg1 + 4);
            return 0;
        }
        uVar4 = 0x8000a4c;
        goto code_r0x080079ec;
    case 0x8007780:
        if (*(arg1 + 4) < 0x10) {
            *(iVar3 + 0x828) = *(arg1 + 4);
            return 0;
        }
        uVar4 = 0x800105d;
        goto code_r0x080079ec;
    case 0x800779c:
        if (*(arg1 + 4) == 0) {
            *(iVar3 + 0x7bc) = 4;
            iVar1 = sym.rtc6226_disable(iVar3);
            if (-1 < iVar1) {
                return iVar1;
            }
            _printk(0x8000ea4,iVar1);
            *(iVar3 + 0x7bc) = 1;
            return iVar1;
        }
        if (*(arg1 + 4) != 1) goto code_r0x080077f0;
        if (*(iVar3 + 0x7bc) < 2) {
            *(iVar3 + 0x7bc) = 5;
            iVar1 = sym.rtc6226_enable(iVar3);
            if (-1 < iVar1) {
                return iVar1;
            }
            _printk(0x800174e,"rtc6226_vidioc_s_ctrl",iVar1);
            *(iVar3 + 0x7bc) = 0;
            return iVar1;
        }
        uVar4 = 0x8001942;
code_r0x080079ec:
        _printk(uVar4,"rtc6226_vidioc_s_ctrl");
code_r0x080079fc:
        iVar2 = -0x16;
        break;
    case 0x80077fc:
        uVar6 = *(arg1 + 4);
        *(iVar3 + 0x7cc) = (uVar6 & 0x3fc) << 6 | *(iVar3 + 0x7cc) & 0xf0ff;
        iVar2 = sym.rtc6226_set_register(iVar3,5);
        *(iVar3 + 0x7c1) = uVar6 & 0xfc;
        if (iVar2 < 0) {
            _printk(0x8000d97,"rtc6226_vidioc_s_ctrl");
        }
        sym.rtc6226_get_register(iVar3,5);
        break;
    case 0x8007848:
        uVar5 = *(iVar3 + 0x7ca) | 0xc000;
        goto code_r0x0800794c;
    case 0x8007858:
        mutex_lock(iVar3 + 0x830);
        *(iVar3 + 0xb26) = 0;
        *(iVar3 + 0xd64) = 0;
        *(iVar3 + 0xb32) = 0;
        *(iVar3 + 0xb3a) = 0;
        *(iVar3 + 0xb42) = 0;
        *(iVar3 + 0xb4a) = 0;
        *(iVar3 + 0xb52) = 0;
        *(iVar3 + 0xb5a) = 0;
        *(iVar3 + 0xb62) = 0;
        *(iVar3 + 0xb6a) = 0;
        *(iVar3 + 0xb72) = 0;
        *(iVar3 + 0xb7a) = 0;
        *(iVar3 + 0xb82) = 0;
        *(iVar3 + 0xb8a) = 0;
        *(iVar3 + 0xb92) = 0;
        *(iVar3 + 0xb9a) = 0;
        *(iVar3 + 0xba2) = 0;
        *(iVar3 + 0xbaa) = 0;
        *(iVar3 + 0xbb2) = 0;
        *(iVar3 + 0xbba) = 0;
        *(iVar3 + 0xbc2) = 0;
        *(iVar3 + 0xbca) = 0;
        *(iVar3 + 0xbd2) = 0;
        *(iVar3 + 0xbda) = 0;
        *(iVar3 + 0xbe2) = 0;
        *(iVar3 + 0xbea) = 0;
        *(iVar3 + 0xbf2) = 0;
        *(iVar3 + 0xbfa) = 0;
        *(iVar3 + 0xc02) = 0;
        *(iVar3 + 0xc0a) = 0;
        *(iVar3 + 0xc12) = 0;
        *(iVar3 + 0xc1a) = 0;
        *(iVar3 + 0xc22) = 0;
        *(iVar3 + 0xc2a) = 0;
        *(iVar3 + 0xc44) = 0;
        *(iVar3 + 0xc4c) = 0;
        *(iVar3 + 0xc34) = 0;
        *(iVar3 + 0xc3c) = 0;
        memset(*(iVar3 + 0x860),0,*(iVar3 + 0xd60));
        mutex_unlock(iVar3 + 0x830);
        uVar5 = *(iVar3 + 0x7ca) & 0x6fff;
        *(iVar3 + 0x7ca) = uVar5;
        uVar5 = uVar5 | *(arg1 + 4) << 0xf;
        *(iVar3 + 0x7ca) = uVar5;
        uVar5 = uVar5 | *(arg1 + 4) << 0xc;
        goto code_r0x0800794c;
    case 0x8007904:
        if (*(arg1 + 4) == 0) {
            uVar5 = *(iVar3 + 0x7ca) | 0x8000;
        }
        else {
            uVar5 = *(iVar3 + 0x7ca) & 0x7fff;
        }
code_r0x0800794c:
        *(iVar3 + 0x7ca) = uVar5;
        arg2 = 4;
code_r0x08007958:
        iVar2 = sym.rtc6226_set_register(iVar3,arg2);
        break;
    case 0x800791c:
        *(iVar3 + 0x7c6) = *(iVar3 + 0x7c6) & 0x7fff | (*(arg1 + 4) != 1) << 0xf;
code_r0x080076b0:
        arg2 = 2;
        goto code_r0x08007958;
    case 0x80079fc:
        goto code_r0x080079fc;
    }
code_r0x08007964:
    return iVar2;
}


// ===== sym.rtc6226_enable @ 0x08007a04 (size 308) =====

uint64_t sym.rtc6226_enable(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar *puVar10;
    uint32_t *in_x2;
    uint32_t *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar11;
    int64_t unaff_x21;
    int *piVar12;
    ulong unaff_x22;
    uint64_t unaff_x23;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    ulong uStack_1e8;
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uchar auStack_9c [4];
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_80;
    ulong uStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    uchar auStack_50 [4];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    puVar10 = auStack_50;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    sym.rtc6226_get_register(arg1,6);
    uVar3 = sym.rtc6226_power_up(arg1);
    uVar11 = uVar3;
    if (-1 < uVar3) {
        if ((*(arg1 + 0x7ca) >> 0xe & 1) == 0) {
            *(arg1 + 0x7ca) = *(arg1 + 0x7ca) | 0xc000;
            uVar3 = sym.rtc6226_set_register(arg1,4);
            uVar11 = uVar3;
            if (uVar3 < 0) {
                _printk(0x8000b8c,"rtc6226_enable");
                goto code_r0x08007ae4;
            }
            auStack_50[0] = 0;
            unaff_x22 = _raw_spin_lock_irqsave(arg1 + 0x898);
        }
        else {
            auStack_4c[0] = 0;
            unaff_x22 = _raw_spin_lock_irqsave(arg1 + 0x898);
            puVar10 = auStack_4c;
        }
        unaff_x21 = arg1 + 0x898;
        in_x2 = 0x1;
        uVar3 = __kfifo_in(arg1 + 0xd88,puVar10);
        unaff_x23 = uVar3;
        _raw_spin_unlock_irqrestore(unaff_x21,unaff_x22);
        if (uVar3 != 0) {
            in_x2 = 0x1;
            __wake_up(arg1 + 0xb08,1,1,0);
        }
        *(arg1 + 0x7bc) = 1;
    }
code_r0x08007ae4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return uVar11;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_disable;
    pcStack_88 = sym.rtc6226_disable;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    *(iVar5 + 0x7ca) = *(iVar5 + 0x7ca) & 0x2fff;
    puStack_90 = &stack0xffffffffffffffc0;
    uStack_80 = unaff_x23;
    uStack_70 = unaff_x22;
    iStack_68 = unaff_x21;
    iStack_60 = arg1;
    uStack_58 = uVar11;
    uVar3 = sym.rtc6226_set_register(iVar5,4);
    if (uVar3 < 0) {
        uVar11 = uVar3;
        uVar7 = 0x800177d;
code_r0x08007c4c:
        _printk(uVar7,"rtc6226_disable");
    }
    else {
        uVar6 = sym.rtc6226_power_down(iVar5);
        uVar11 = uVar6 & 0xffffffff;
        if (uVar6 < 0) {
            uVar7 = 0x8000c10;
            goto code_r0x08007c4c;
        }
        if ((*(iVar5 + 0x7bc) == 4) || (*(iVar5 + 0x7bc) == 1)) {
            auStack_9c[0] = 0x12;
            uVar7 = _raw_spin_lock_irqsave(iVar5 + 0x898);
            in_x2 = 0x1;
            iVar4 = __kfifo_in(iVar5 + 0xd88,auStack_9c);
            _raw_spin_unlock_irqrestore(iVar5 + 0x898,uVar7);
            if (iVar4 != 0) {
                in_x2 = 0x1;
                __wake_up(iVar5 + 0xb08,1,1,0);
            }
            *(iVar5 + 0x7bc) = 0;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.rtc6226_vidioc_dqbuf;
    pcStack_f8 = sym.rtc6226_vidioc_dqbuf;
    iVar8 = sp_el0;
    iStack_108 = *(iVar8 + 0x5e0);
    arg2 = in_x2;
    ppuStack_100 = &puStack_90;
    iVar8 = video_devdata();
    iVar8 = *(iVar8 + 0x250);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    if ((in_x2 == NULL) || (iVar8 == 0)) {
        _printk(0x80011d3,"rtc6226_vidioc_dqbuf");
        uVar11 = 0xfffffffa;
    }
    else {
        uVar3 = *in_x2;
        if (uVar3 < 0xd) {
            iVar5 = *(in_x2 + 0x10);
            piVar12 = iVar8 + 0xd70 + uVar3 * 0x18;
            uVar1 = in_x2[0x12];
            if (uVar3 == 1) {
                if (*piVar12 == *(iVar8 + 0xd8c)) {
                    uStack_218 = 0;
                    uStack_210 = 0;
                    uStack_228 = 0;
                    uStack_220 = 0;
                    uStack_230 = 0;
                    init_wait_entry(&uStack_230,0);
                    while( true ) {
                        arg2 = 0x1;
                        iVar9 = prepare_to_wait_event(iVar8 + 0xb08,&uStack_230);
                        if (*piVar12 != *(iVar8 + 0xd8c)) break;
                        if (iVar9 != 0) {
                            if (-1 < iVar9) goto code_r0x08007d7c;
                            uVar11 = 0xfffffffc;
                            goto code_r0x08007df0;
                        }
                        schedule();
                    }
                    finish_wait(iVar8 + 0xb08,&uStack_230);
                }
            }
code_r0x08007d7c:
            if (uVar1 < 0x101) {
                iVar8 = iVar8 + uVar3 * 4 + 0x894;
                uVar7 = _raw_spin_lock_irqsave(iVar8);
                uVar3 = __kfifo_out(piVar12,&uStack_208,uVar1);
                arg2 = uVar3;
                _raw_spin_unlock_irqrestore(iVar8,uVar7);
                in_x2[2] = uVar3;
                if (uVar3 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8007e84);
                    (*pcVar2)();
                }
                noname_1 = __check_object_size(&uStack_208,arg2,1);
                uVar11 = sym._copy_to_user(iVar5,noname_1,arg2);
                if (0 < uVar11) {
                    arg2 = uVar11 & 0xffffffff;
                    _printk(0x800198e,"rtc6226_vidioc_dqbuf");
                    uVar11 = 0xfffffff5;
                }
                goto code_r0x08007df0;
            }
            uVar7 = 0x8000ef2;
        }
        else {
            uVar7 = 0x800196b;
        }
        _printk(uVar7,"rtc6226_vidioc_dqbuf");
        uVar11 = 0xffffffea;
    }
code_r0x08007df0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_108) {
        return uVar11 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.rtc6226_vidioc_g_audio;
    *arg2 = 0;
    strlcpy(arg2 + 1,"Radio",0x20);
    arg2[9] = 1;
    arg2[10] = 0;
    return 0;
}


// ===== sym.rtc6226_disable @ 0x08007b38 (size 296) =====

uint32_t sym.rtc6226_disable(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *in_x2;
    uint32_t *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t arg1_00;
    int *piVar8;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1c0;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    *(arg1 + 0x7ca) = *(arg1 + 0x7ca) & 0x2fff;
    uVar3 = sym.rtc6226_set_register(arg1,4);
    if (uVar3 < 0) {
        uVar5 = 0x800177d;
code_r0x08007c4c:
        _printk(uVar5,"rtc6226_disable");
    }
    else {
        uVar3 = sym.rtc6226_power_down(arg1);
        if (uVar3 < 0) {
            uVar5 = 0x8000c10;
            goto code_r0x08007c4c;
        }
        if ((*(arg1 + 0x7bc) == 4) || (*(arg1 + 0x7bc) == 1)) {
            auStack_4c[0] = 0x12;
            uVar5 = _raw_spin_lock_irqsave(arg1 + 0x898);
            in_x2 = 0x1;
            iVar4 = __kfifo_in(arg1 + 0xd88,auStack_4c);
            _raw_spin_unlock_irqrestore(arg1 + 0x898,uVar5);
            if (iVar4 != 0) {
                in_x2 = 0x1;
                __wake_up(arg1 + 0xb08,1,1,0);
            }
            *(arg1 + 0x7bc) = 0;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_vidioc_dqbuf;
    pcStack_a8 = sym.rtc6226_vidioc_dqbuf;
    iVar6 = sp_el0;
    iStack_b8 = *(iVar6 + 0x5e0);
    arg2 = in_x2;
    puStack_b0 = &stack0xffffffffffffffc0;
    iVar6 = video_devdata();
    iVar6 = *(iVar6 + 0x250);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    if ((in_x2 == NULL) || (iVar6 == 0)) {
        _printk(0x80011d3,"rtc6226_vidioc_dqbuf");
        uVar3 = 0xfffffffa;
    }
    else {
        uVar3 = *in_x2;
        if (uVar3 < 0xd) {
            arg1_00 = *(in_x2 + 0x10);
            piVar8 = iVar6 + 0xd70 + uVar3 * 0x18;
            uVar1 = in_x2[0x12];
            if (uVar3 == 1) {
                if (*piVar8 == *(iVar6 + 0xd8c)) {
                    uStack_1c8 = 0;
                    uStack_1c0 = 0;
                    uStack_1d8 = 0;
                    uStack_1d0 = 0;
                    uStack_1e0 = 0;
                    init_wait_entry(&uStack_1e0,0);
                    while( true ) {
                        arg2 = 0x1;
                        iVar7 = prepare_to_wait_event(iVar6 + 0xb08,&uStack_1e0);
                        if (*piVar8 != *(iVar6 + 0xd8c)) break;
                        if (iVar7 != 0) {
                            if (-1 < iVar7) goto code_r0x08007d7c;
                            uVar3 = 0xfffffffc;
                            goto code_r0x08007df0;
                        }
                        schedule();
                    }
                    finish_wait(iVar6 + 0xb08,&uStack_1e0);
                }
            }
code_r0x08007d7c:
            if (uVar1 < 0x101) {
                iVar6 = iVar6 + uVar3 * 4 + 0x894;
                uVar5 = _raw_spin_lock_irqsave(iVar6);
                uVar3 = __kfifo_out(piVar8,&uStack_1b8,uVar1);
                arg2 = uVar3;
                _raw_spin_unlock_irqrestore(iVar6,uVar5);
                in_x2[2] = uVar3;
                if (uVar3 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8007e84);
                    (*pcVar2)();
                }
                noname_1 = __check_object_size(&uStack_1b8,arg2,1);
                uVar3 = sym._copy_to_user(arg1_00,noname_1,arg2);
                if (0 < uVar3) {
                    arg2 = uVar3;
                    _printk(0x800198e,"rtc6226_vidioc_dqbuf");
                    uVar3 = 0xfffffff5;
                }
                goto code_r0x08007df0;
            }
            uVar5 = 0x8000ef2;
        }
        else {
            uVar5 = 0x800196b;
        }
        _printk(uVar5,"rtc6226_vidioc_dqbuf");
        uVar3 = 0xffffffea;
    }
code_r0x08007df0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.rtc6226_vidioc_g_audio;
    *arg2 = 0;
    strlcpy(arg2 + 1,"Radio",0x20);
    arg2[9] = 1;
    arg2[10] = 0;
    return 0;
}


// ===== sym.rtc6226_vidioc_dqbuf @ 0x08007c60 (size 592) =====

uint32_t sym.rtc6226_vidioc_dqbuf(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    int *piVar7;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    arg2 = arg1;
    iVar4 = video_devdata();
    iVar4 = *(iVar4 + 0x250);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    if ((arg1 == 0) || (iVar4 == 0)) {
        _printk(0x80011d3,"rtc6226_vidioc_dqbuf");
        uVar3 = 0xfffffffa;
    }
    else {
        uVar3 = *arg1;
        if (uVar3 < 0xd) {
            arg1_00 = *(arg1 + 0x40);
            piVar7 = iVar4 + 0xd70 + uVar3 * 0x18;
            iVar1 = *(arg1 + 0x48);
            if (uVar3 == 1) {
                if (*piVar7 == *(iVar4 + 0xd8c)) {
                    uStack_178 = 0;
                    uStack_170 = 0;
                    uStack_188 = 0;
                    uStack_180 = 0;
                    uStack_190 = 0;
                    init_wait_entry(&uStack_190,0);
                    while( true ) {
                        arg2 = 0x1;
                        iVar5 = prepare_to_wait_event(iVar4 + 0xb08,&uStack_190);
                        if (*piVar7 != *(iVar4 + 0xd8c)) break;
                        if (iVar5 != 0) {
                            if (-1 < iVar5) goto code_r0x08007d7c;
                            uVar3 = 0xfffffffc;
                            goto code_r0x08007df0;
                        }
                        schedule();
                    }
                    finish_wait(iVar4 + 0xb08,&uStack_190);
                }
            }
code_r0x08007d7c:
            if (iVar1 < 0x101) {
                iVar4 = iVar4 + uVar3 * 4 + 0x894;
                uVar6 = _raw_spin_lock_irqsave(iVar4);
                uVar3 = __kfifo_out(piVar7,&uStack_168,iVar1);
                arg2 = uVar3;
                _raw_spin_unlock_irqrestore(iVar4,uVar6);
                *(arg1 + 8) = uVar3;
                if (uVar3 < 0) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x800,0x8007e84);
                    (*pcVar2)();
                }
                noname_1_00 = __check_object_size(&uStack_168,arg2,1);
                uVar3 = sym._copy_to_user(arg1_00,noname_1_00,arg2);
                if (0 < uVar3) {
                    arg2 = uVar3;
                    _printk(0x800198e,"rtc6226_vidioc_dqbuf");
                    uVar3 = 0xfffffff5;
                }
                goto code_r0x08007df0;
            }
            uVar6 = 0x8000ef2;
        }
        else {
            uVar6 = 0x800196b;
        }
        _printk(uVar6,"rtc6226_vidioc_dqbuf");
        uVar3 = 0xffffffea;
    }
code_r0x08007df0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_vidioc_g_audio;
    *arg2 = 0;
    strlcpy(arg2 + 1,"Radio",0x20);
    *(arg2 + 9) = 1;
    return 0;
}


// ===== sym.rtc6226_vidioc_g_audio @ 0x08007eb0 (size 80) =====

ulong sym.rtc6226_vidioc_g_audio(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *arg1 = 0;
    strlcpy(arg1 + 4,"Radio",0x20);
    *(arg1 + 0x24) = 1;
    return 0;
}


// ===== sym.rtc6226_vidioc_g_tuner @ 0x08007f00 (size 392) =====

int sym.rtc6226_vidioc_g_tuner(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint32_t uVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    uchar *puVar8;
    int *piVar9;
    uint16_t uVar10;
    uint uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_50 [4];
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    puVar8 = auStack_50;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar9 = arg1;
    iVar6 = video_devdata();
    if (*arg1 == 0) {
        iVar6 = *(iVar6 + 0x250);
        iVar5 = sym.rtc6226_get_register(iVar6,0xb);
        if (-1 < iVar5) {
            strlcpy(arg1 + 4,0x80016ff,0x20);
            *(arg1 + 0x24) = 0x19100000001;
            *(arg1 + 0x30) = (*(iVar6 + 0x7ea) & 0x7fff) * 0xa0;
            *(arg1 + 0x2c) = (*(iVar6 + 0x7ec) & 0x7fff) * 0xa0;
            uVar11 = 0x11;
            if ((*(iVar6 + 0x7d6) & 0x400) != 0) {
                uVar11 = 0x13;
            }
            *(arg1 + 0x34) = uVar11;
            if ((*(iVar6 + 0x7c7) >> 5 & 1) == 0) {
                *(arg1 + 0x38) = 1;
                auStack_50[0] = 10;
                uVar7 = _raw_spin_lock_irqsave(iVar6 + 0x898);
            }
            else {
                *(arg1 + 0x38) = 0;
                auStack_4c[0] = 0xb;
                uVar7 = _raw_spin_lock_irqsave(iVar6 + 0x898);
                puVar8 = auStack_4c;
            }
            piVar9 = 0x1;
            iVar4 = __kfifo_in(iVar6 + 0xd88,puVar8);
            _raw_spin_unlock_irqrestore(iVar6 + 0x898,uVar7);
            if (iVar4 != 0) {
                piVar9 = 0x1;
                __wake_up(iVar6 + 0xb08,1,1,0);
            }
            *(arg1 + 0x3c) = *(iVar6 + 0x7d8);
        }
    }
    else {
        iVar5 = -0x16;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return iVar5;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.rtc6226_vidioc_s_tuner;
    iVar6 = video_devdata();
    if (*piVar9 != 0) {
        return 0;
    }
    iVar6 = *(iVar6 + 0x250);
    if (piVar9[0xe] == 1) {
        uVar10 = *(iVar6 + 0x7c6) & 0xdfff;
    }
    else {
        if (piVar9[0xe] != 0) goto code_r0x080080e4;
        uVar10 = *(iVar6 + 0x7c6) | 0x2000;
    }
    *(iVar6 + 0x7c6) = uVar10;
code_r0x080080e4:
    sym.rtc6226_set_register(iVar6,2);
    uVar1 = piVar9[0xb];
    uVar2 = piVar9[0xc] / 0xa0;
    *(iVar6 + 0x7ea) = uVar2;
    uVar3 = uVar1 / 0xa0;
    *(iVar6 + 0x7ec) = uVar3;
    iVar5 = sym.rtc6226_set_register(iVar6,0x14);
    if (iVar5 < 0) {
        _printk(0x80017ae,"rtc6226_vidioc_s_tuner",iVar5);
    }
    else {
        *(iVar6 + 0x8ce) = uVar2;
    }
    iVar5 = sym.rtc6226_set_register(iVar6,0x15);
    if (iVar5 < 0) {
        _printk(0x8001221,"rtc6226_vidioc_s_tuner",iVar5);
    }
    else {
        *(iVar6 + 0x8cc) = uVar3;
    }
    return iVar5;
}


// ===== sym.rtc6226_vidioc_s_tuner @ 0x08008088 (size 268) =====

int sym.rtc6226_vidioc_s_tuner(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint32_t uVar1;
    ushort uVar2;
    ushort uVar3;
    int iVar4;
    int64_t iVar5;
    uint16_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = video_devdata();
    if (*arg1 != 0) {
        return 0;
    }
    iVar5 = *(iVar5 + 0x250);
    if (*(arg1 + 0x38) == 1) {
        uVar6 = *(iVar5 + 0x7c6) & 0xdfff;
    }
    else {
        if (*(arg1 + 0x38) != 0) goto code_r0x080080e4;
        uVar6 = *(iVar5 + 0x7c6) | 0x2000;
    }
    *(iVar5 + 0x7c6) = uVar6;
code_r0x080080e4:
    sym.rtc6226_set_register(iVar5,2);
    uVar1 = *(arg1 + 0x2c);
    uVar2 = *(arg1 + 0x30) / 0xa0;
    *(iVar5 + 0x7ea) = uVar2;
    uVar3 = uVar1 / 0xa0;
    *(iVar5 + 0x7ec) = uVar3;
    iVar4 = sym.rtc6226_set_register(iVar5,0x14);
    if (iVar4 < 0) {
        _printk(0x80017ae,"rtc6226_vidioc_s_tuner",iVar4);
    }
    else {
        *(iVar5 + 0x8ce) = uVar2;
    }
    iVar4 = sym.rtc6226_set_register(iVar5,0x15);
    if (iVar4 < 0) {
        _printk(0x8001221,"rtc6226_vidioc_s_tuner",iVar4);
    }
    else {
        *(iVar5 + 0x8cc) = uVar3;
    }
    return iVar4;
}


// ===== sym.rtc6226_vidioc_g_frequency @ 0x08008194 (size 192) =====

uint64_t sym.rtc6226_vidioc_g_frequency(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uVar4 = arg1;
    iVar3 = video_devdata();
    iVar3 = *(iVar3 + 0x250);
    iStack_3c = 0;
    *(arg1 + 4) = 1;
    uVar1 = sym.rtc6226_get_freq(iVar3,&iStack_3c);
    *(arg1 + 8) = iStack_3c << 4;
    *(iVar3 + 0x824) = iStack_3c * 10;
    if (uVar1 < 0) {
        uVar4 = uVar1;
        _printk(0x8001012,"rtc6226_vidioc_g_frequency");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        __stack_chk_fail();
        *extraout_x18 = sym.rtc6226_vidioc_s_frequency;
        iVar3 = video_devdata();
        if (uVar4 == 0) {
            _printk(0x8000acf,"rtc6226_vidioc_s_frequency");
        }
        else if (*(uVar4 + 4) == 1) {
            iVar3 = *(iVar3 + 0x250);
            uVar1 = *(uVar4 + 8) >> 4;
            *(iVar3 + 0x7c0) = 1;
            uVar2 = sym.rtc6226_set_freq(iVar3,uVar1);
            uVar4 = uVar2;
            if (-1 < uVar2) {
                *(iVar3 + 0x824) = uVar1;
                return uVar4;
            }
            _printk(0x8001aba,"rtc6226_vidioc_s_frequency",uVar4);
            return uVar4;
        }
        return 0xffffffea;
    }
    return uVar1;
}


// ===== sym.rtc6226_vidioc_s_frequency @ 0x08008254 (size 176) =====

int sym.rtc6226_vidioc_s_frequency(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    uint32_t arg2;
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = video_devdata();
    if (arg1 == 0) {
        _printk(0x8000acf,"rtc6226_vidioc_s_frequency");
    }
    else if (*(arg1 + 4) == 1) {
        iVar2 = *(iVar2 + 0x250);
        arg2 = *(arg1 + 8) >> 4;
        *(iVar2 + 0x7c0) = 1;
        iVar1 = sym.rtc6226_set_freq(iVar2,arg2);
        if (-1 < iVar1) {
            *(iVar2 + 0x824) = arg2;
            return iVar1;
        }
        _printk(0x8001aba,"rtc6226_vidioc_s_frequency",iVar1);
        return iVar1;
    }
    return -0x16;
}


// ===== sym.rtc6226_vidioc_s_hw_freq_seek @ 0x08008304 (size 340) =====

int sym.rtc6226_vidioc_s_hw_freq_seek(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = video_devdata();
    if ((*(arg1 + 0x41) >> 3 & 1) == 0) {
        iVar4 = *(iVar4 + 0x250);
        *(iVar4 + 0x868) = 0;
        *(iVar4 + 0x7ca) = *(iVar4 + 0x7ca) & 0xefff;
        iVar3 = sym.rtc6226_set_register(iVar4,4);
        if (iVar3 < 0) {
            _printk(0x8001256,"rtc6226_vidioc_s_hw_freq_seek");
        }
        else {
            cVar1 = *(iVar4 + 0x869);
            if (cVar1 == '\x02') {
                *(iVar4 + 0x892) = 0;
                *(iVar4 + 0x882) = 0;
                *(iVar4 + 0x88a) = 0;
                *(iVar4 + 0x872) = 0;
                *(iVar4 + 0x87a) = 0;
                *(iVar4 + 0x86a) = 0;
            }
            else if (cVar1 != '\x01') {
                if (cVar1 != '\0') {
                    _printk(0x8001383,"rtc6226_vidioc_s_hw_freq_seek");
                    return -0x16;
                }
                *(iVar4 + 0x7c0) = 2;
                uVar2 = *(iVar4 + 0x7cc);
                *(iVar4 + 0x7cc) = uVar2 & 0x1fff | (*(arg2 + 8) != 0) << 0xe;
                iVar3 = sym.rtc6226_set_register(iVar4,5);
                if (-1 < iVar3) {
                    *(iVar4 + 0x7cc) = *(iVar4 + 0x7cc) | 0x8000;
                    iVar3 = sym.rtc6226_set_register(iVar4,5);
                    if (-1 < iVar3) {
                        return iVar3;
                    }
                    *(iVar4 + 0x7cc) = uVar2;
                    return iVar3;
                }
                *(iVar4 + 0x7cc) = uVar2;
                return iVar3;
            }
            queue_delayed_work_on(0x20,*(iVar4 + 0x8d8),iVar4 + 0xa80,3);
        }
    }
    else {
        iVar3 = -0xb;
    }
    return iVar3;
}


// ===== sym._copy_to_user @ 0x08008458 (size 312) =====

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
        if ((_i2c_transfer >> 0x18 & 1) == 0) {
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
        if ((_i2c_transfer >> 0x18 & 1) == 0) {
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


// ===== sym.rtc6226_fops_read @ 0x080085cc (size 556) =====

uint64_t sym.rtc6226_fops_read(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar7;
    uint64_t uVar8;
    code *pcVar9;
    int *piVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    ulong uStack_108;
    ulong uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    iVar3 = video_devdata();
    iVar3 = *(iVar3 + 0x250);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    if ((arg1 == 0) || (iVar3 == 0)) {
        _printk(0x80011d3,"rtc6226_fops_read");
        uVar8 = 0xfffffffffffffffa;
    }
    else if (arg2 < 0xd) {
        uVar8 = arg2 & 0xffffffff;
        piVar7 = iVar3 + 0xd70 + uVar8 * 0x18;
        if (arg2 == 1) {
            piVar10 = iVar3 + 0xd70 + uVar8 * 0x18 + 4;
            if (*piVar7 == *piVar10) {
                uStack_168 = 0;
                uStack_160 = 0;
                uStack_178 = 0;
                uStack_170 = 0;
                uStack_180 = 0;
                init_wait_entry(&uStack_180,0);
                while( true ) {
                    iVar4 = prepare_to_wait_event(iVar3 + 0xb08,&uStack_180,1);
                    if (*piVar7 != *piVar10) break;
                    if (iVar4 != 0) {
                        if (-1 < iVar4) goto code_r0x080086e0;
                        uVar8 = 0xfffffffffffffffc;
                        goto code_r0x0800874c;
                    }
                    schedule();
                }
                finish_wait(iVar3 + 0xb08,&uStack_180);
            }
        }
code_r0x080086e0:
        iVar3 = iVar3 + uVar8 * 4 + 0x894;
        uVar5 = _raw_spin_lock_irqsave(iVar3);
        uVar1 = __kfifo_out(piVar7,&uStack_158,0x100);
        _raw_spin_unlock_irqrestore(iVar3,uVar5);
        if (uVar1 < 0) {
    //WARNING: Does not return
            pcVar9 = SoftwareBreakpoint(0x800,0x80087d0);
            (*pcVar9)();
        }
        auVar11 = __check_object_size(&uStack_158,uVar1,1);
        iVar2 = sym._copy_to_user(arg1,auVar11,uVar1);
        if (iVar2 < 1) {
            uVar8 = uVar1;
        }
        else {
            _printk(0x800198e,"rtc6226_fops_read");
            uVar8 = 0xfffffffffffffff5;
        }
    }
    else {
        _printk(0x800196b,"rtc6226_fops_read");
        uVar8 = 0xffffffffffffffea;
    }
code_r0x0800874c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return uVar8;
    }
    auVar11 = __stack_chk_fail(uVar8);
    puVar6 = auVar11._8_8_;
    *extraout_x18 = sym.rtc6226_fops_poll;
    iVar3 = video_devdata();
    iVar3 = *(iVar3 + 0x250);
    mutex_lock(iVar3 + 0x830);
    if ((*(iVar3 + 0x7ca) >> 0xc & 1) == 0) {
        *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) | 0x1000;
        iVar2 = sym.rtc6226_set_register(iVar3,4);
        if (iVar2 < 0) {
            *(iVar3 + 0x7ca) = *(iVar3 + 0x7ca) & 0xefff;
        }
    }
    mutex_unlock(iVar3 + 0x830);
    if (((puVar6 != NULL) && (iVar3 + 0x808 != 0)) && (pcVar9 = *puVar6, pcVar9 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar9,0x8000900);
        (*pcVar9)(auVar11._0_8_,iVar3 + 0x808,puVar6);
    }
    uVar1 = 0;
    if (*(iVar3 + 0xd64) != *(iVar3 + 0xd68)) {
        uVar1 = 0x41;
    }
    return uVar1;
}


// ===== sym.rtc6226_fops_poll @ 0x080087f8 (size 224) =====

uint sym.rtc6226_fops_poll(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    code *pcVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = video_devdata();
    iVar2 = *(iVar2 + 0x250);
    mutex_lock(iVar2 + 0x830);
    if ((*(iVar2 + 0x7ca) >> 0xc & 1) == 0) {
        *(iVar2 + 0x7ca) = *(iVar2 + 0x7ca) | 0x1000;
        iVar1 = sym.rtc6226_set_register(iVar2,4);
        if (iVar1 < 0) {
            *(iVar2 + 0x7ca) = *(iVar2 + 0x7ca) & 0xefff;
        }
    }
    mutex_unlock(iVar2 + 0x830);
    if (((arg2 != 0) && (iVar2 + 0x808 != 0)) && (pcVar4 = *arg2, pcVar4 != NULL)) {
        __cfi_slowpath_diag(0x8990d6be6cd7b51f,pcVar4,0x8000900);
        (*pcVar4)(arg1,iVar2 + 0x808,arg2);
    }
    uVar3 = 0;
    if (*(iVar2 + 0xd64) != *(iVar2 + 0xd68)) {
        uVar3 = 0x41;
    }
    return uVar3;
}


// ===== sym.init_module @ 0x08008a20 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_register_driver(obj.__this_module,obj.rtc6226_i2c_driver);
    return;
}


// ===== sym.cleanup_module @ 0x08008a54 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.rtc6226_i2c_driver);
    return;
}

