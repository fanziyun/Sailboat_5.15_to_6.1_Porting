// decompiled from aw882xx_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x0800b000 (size 2056) =====

//WARNING: Switch with 1 destination removed at 0x080111cc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x457ac4930f0f603a) {
            if (arg1 < -0x5f02c8c08fe8432b) {
                if (arg1 < -0x66d421a09845f9f8) {
                    if (arg1 != -0x749213c658cf941a) {
                        if (arg1 != -0x6b41102982dd3c8c) goto code_r0x0801118c;
                        pcVar2 = sym.aw_pid_2013_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                        goto code_r0x0800b6d4;
                    }
                    pcVar2 = sym.snd_soc_info_enum_double.cfi_jt;
code_r0x0800b794:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                    goto code_r0x0801118c;
                }
                if (arg1 == -0x66d421a09845f9f8) {
                    if ((pcVar1 + -0x800bbe0 >> 3 | pcVar1 << 0x3d) < 0x11) {
                        return;
                    }
                    goto code_r0x0801118c;
                }
                if (arg1 == -0x62d266395c155465) {
                    pcVar2 = sym.aw882xx_set_fmt.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                }
                else {
                    if (arg1 != -0x6036fdea8c30b3a8) goto code_r0x0801118c;
                    pcVar2 = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
                }
            }
            else {
                if (-0x550b9e52359ac615 < arg1) {
                    if (arg1 != -0x550b9e52359ac614) {
                        if (arg1 == -0x5324bef43a497a1c) {
                            if ((pcVar1 + -0x800ba38 >> 3 | pcVar1 << 0x3d) < 3) {
                                return;
                            }
                        }
                        else if ((arg1 == -0x46a98eece9fde15d) && ((pcVar1 + -0x800bac0 >> 3 | pcVar1 << 0x3d) < 0xe)) {
                            return;
                        }
                        goto code_r0x0801118c;
                    }
                    pcVar2 = sym.aw882xx_interrupt_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                    goto code_r0x0800b794;
                }
                if (arg1 == -0x5f02c8c08fe8432b) {
                    pcVar2 = sym.__typeid__ZTSFiP6devicePK24snd_soc_component_driverP18snd_soc_dai_driveriE_global_addr;
                }
                else {
                    if (arg1 != -0x5b5ecdd9ad39b134) goto code_r0x0801118c;
                    pcVar2 = sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr;
                }
            }
        }
        else if (arg1 < -0xca46161a16b9bbd) {
            if (arg1 < -0x349755d8cb95b052) {
                if (arg1 == -0x457ac4930f0f603a) {
                    pcVar2 = sym.aw882xx_mute.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                }
                else {
                    if (arg1 != -0x3987c0e26ee29729) goto code_r0x0801118c;
                    pcVar2 = sym.aw882xx_irq.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x349755d8cb95b052) {
                    pcVar2 = sym.__typeid__ZTSFiP9aw_devicePjE_global_addr;
code_r0x0800b6d4:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 7) {
                        return;
                    }
                    goto code_r0x0801118c;
                }
                if (arg1 == -0x2ee0710dce68437c) {
                    pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
                }
                else {
                    if (arg1 != -0xf2d15659b6de7a9) goto code_r0x0801118c;
                    pcVar2 = sym.aw882xx_codec_probe.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                }
            }
        }
        else if (arg1 < -0x890743871a4a53) {
            if (arg1 == -0xca46161a16b9bbd) {
                pcVar2 = sym.__typeid__ZTSFiP9aw_deviceE_global_addr;
            }
            else {
                if (arg1 == -0x8dc801903aca538) {
                    pcVar2 = sym.aw_cali_misc_release.288a340436054ec7e6b38d7b2cf50090.cfi_jt;
                    goto code_r0x0800b754;
                }
                if (arg1 != -0x1410433e4ed4949) goto code_r0x0801118c;
                pcVar2 = sym.aw882xx_startup.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x890743871a4a53) {
                pcVar2 = sym.aw_cali_misc_unlocked_ioctl.288a340436054ec7e6b38d7b2cf50090.cfi_jt;
code_r0x0800b754:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0801118c;
            }
            if (arg1 != 0x1cb70fb2e83a758) {
                if ((arg1 == 0x2b3a43e29242445) && ((pcVar1 + -0x800b8c0 >> 3 | pcVar1 << 0x3d) < 9)) {
                    return;
                }
                goto code_r0x0801118c;
            }
            pcVar2 = sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr;
        }
    }
    else if (arg1 < 0x553f5320ac775fa3) {
        if (arg1 < 0x2882621ee1337d31) {
            if (arg1 < 0x1d7ed092cb04d3f1) {
                if (arg1 == 0x7ff5a213d37b1a6) {
                    pcVar2 = sym.aw_cali_misc_read.288a340436054ec7e6b38d7b2cf50090.cfi_jt;
                }
                else {
                    if (arg1 != 0x18aafba39062885f) goto code_r0x0801118c;
                    pcVar2 = sym.aw882xx_i2c_probe.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                }
            }
            else {
                if (arg1 != 0x1d7ed092cb04d3f1) {
                    if (arg1 == 0x1e3d0ffe3d0499e9) {
                        if ((pcVar1 + -0x800bc68 >> 3 | pcVar1 << 0x3d) < 0xd) {
                            return;
                        }
                        goto code_r0x0801118c;
                    }
                    if (arg1 != 0x2060516a6466f902) goto code_r0x0801118c;
                    pcVar2 = sym.__typeid__ZTSFiP9aw_devicejE_global_addr;
                    goto code_r0x0800b6d4;
                }
                pcVar2 = sym.aw_cali_misc_write.288a340436054ec7e6b38d7b2cf50090.cfi_jt;
            }
        }
        else if (arg1 < 0x3ebbfb930cff995c) {
            if (arg1 == 0x2882621ee1337d31) {
                if ((pcVar1 + -0x800bb30 >> 3 | pcVar1 << 0x3d) < 0x14) {
                    return;
                }
                goto code_r0x0801118c;
            }
            if (arg1 != 0x369ba1b7d1376e4f) goto code_r0x0801118c;
            pcVar2 = sym.aw882xx_i2c_shutdown.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        }
        else if (arg1 == 0x3ebbfb930cff995c) {
            pcVar2 = sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr;
        }
        else {
            if (arg1 != 0x4a1432c113b07351) {
                if ((arg1 == 0x4a47875dcd644744) && ((pcVar1 + -0x800ba50 >> 3 | pcVar1 << 0x3d) < 6)) {
                    return;
                }
                goto code_r0x0801118c;
            }
            pcVar2 = sym.aw882xx_set_dai_sysclk.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        }
    }
    else if (arg1 < 0x74f0ccf11b57c4f0) {
        if (arg1 < 0x5b83a3fd302a5421) {
            if (arg1 == 0x553f5320ac775fa3) {
                pcVar2 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
            }
            else {
                if (arg1 != 0x5a4b3c1fa7130354) goto code_r0x0801118c;
                pcVar2 = sym.aw882xx_shutdown.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            }
        }
        else if (arg1 == 0x5b83a3fd302a5421) {
            pcVar2 = sym.__typeid__ZTSFvP6deviceE_global_addr;
        }
        else if (arg1 == 0x71abd6d60b240f2d) {
            pcVar2 = sym.__typeid__ZTSFiPciE_global_addr;
        }
        else {
            if (arg1 != 0x72f794085f5af073) goto code_r0x0801118c;
            pcVar2 = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
        }
    }
    else if (arg1 < 0x7e04a0fb7ad8bcd5) {
        if (arg1 != 0x74f0ccf11b57c4f0) {
            if (arg1 == 0x77294c460dde6a2b) {
                pcVar2 = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
                goto code_r0x0800b754;
            }
            if (arg1 != 0x77c30cb837e57aa5) goto code_r0x0801118c;
            pcVar2 = sym.__typeid__ZTSFjjE_global_addr;
            goto code_r0x0800b6d4;
        }
        pcVar2 = sym.aw882xx_hw_params.fc2486704268e85b1991da4eb2e27198.cfi_jt;
    }
    else if (arg1 == 0x7e04a0fb7ad8bcd5) {
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    else if (arg1 == 0x7e6c99e1529760f9) {
        pcVar2 = sym.aw882xx_codec_remove.fc2486704268e85b1991da4eb2e27198.cfi_jt;
    }
    else {
        if (arg1 != 0x7ea68a074636b5b8) goto code_r0x0801118c;
        pcVar2 = sym.aw882xx_i2c_remove.fc2486704268e85b1991da4eb2e27198.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0801118c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80111e0);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr @ 0x0800b810 (size 8) =====

void sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),param_2,param_3);
    return;
}


// ===== sym.aw882xx_mute.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b818 (size 8) =====

int sym.aw882xx_mute.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t arg1;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar3 = *(param_1 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8000fe0);
    }
    arg1 = (*pcVar1)(uVar3);
    iVar4 = (*(arg1 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + 0x48);
    }
    _printk(0x80043be,iVar4,"aw882xx_mute",param_2);
    if (param_3 == 0) {
        if (param_2 != 0) {
            *(arg1 + 8) = 0;
            cancel_delayed_work_sync(arg1 + 0x188);
            cancel_delayed_work_sync(arg1 + 0x78);
            mutex_lock(arg1 + 0x298);
            sym.aw882xx_device_stop(*(arg1 + 0x68));
            mutex_unlock(arg1 + 0x298);
            return 0;
        }
        if (*(arg1 + 0x28) != '\0') {
            *(arg1 + 8) = 1;
            mutex_lock(arg1 + 0x298);
            sym.aw882xx_start_pa(arg1);
            if (*(arg1 + 0x10) == '\0') {
                iVar2 = sym.aw882xx_spin_set_record_val(*(arg1 + 0x68));
                if (iVar2 != 0) {
                    iVar4 = (*(arg1 + 0x48))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1 + 0x48);
                    }
                    _printk(0x80061c1,iVar4,"aw882xx_mute",iVar2);
                }
            }
            else {
                iVar2 = 0;
            }
            mutex_unlock(arg1 + 0x298);
            return iVar2;
        }
        iVar4 = (*(arg1 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x48);
        }
        uVar3 = 0x80055b6;
    }
    else {
        iVar4 = (*(arg1 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x48);
        }
        uVar3 = 0x80040ab;
    }
    _printk(uVar3,iVar4,"aw882xx_mute");
    return 0;
}


// ===== sym.__typeid__ZTSFvP6deviceE_global_addr @ 0x0800b820 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFvP6deviceE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.aw_cali_misc_release.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800b828 (size 8) =====

ulong sym.aw_cali_misc_release.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_2 + 0xd8) = 0;
    _printk(0x8005797);
    return 0;
}


// ===== sym.aw_cali_misc_open.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800b830 (size 8) =====

ulong sym.aw_cali_misc_open.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t *piStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    piStack_30 = NULL;
    iVar1 = sym.aw882xx_dev_get_list_head(&piStack_30);
    if (iVar1 == 0) {
        piVar4 = *piStack_30;
        piVar5 = piVar4;
        if (piVar4 != piStack_30) {
            do {
                piVar6 = piVar5 + -0x7c;
                if (*(piVar5 + -0x3b4) == _segment.ehdr) {
                    if (piVar6 != NULL) goto code_r0x080185a8;
                    goto code_r0x08018588;
                }
                piVar5 = *piVar5;
            } while (piVar5 != piStack_30);
            if (piVar6 != NULL) {
                piVar6 = piVar4 + -0x7c;
                iVar3 = piVar4[-0x74][0xe];
                if (iVar3 == 0) {
                    iVar3 = *piVar4[-0x74];
                }
                _printk(0x80086cf,iVar3,"aw_cali_misc_open");
code_r0x080185a8:
                *(param_2 + 0xd8) = piVar6;
                iVar3 = piVar6[8][0xe];
                if (iVar3 == 0) {
                    iVar3 = *piVar6[8];
                }
                _printk(0x80033a7,iVar3,"aw_cali_misc_open");
                uVar2 = 0;
                goto code_r0x080185d4;
            }
        }
code_r0x08018588:
        _printk(0x8006cd1,"aw_cali_misc_open",_segment.ehdr);
        uVar2 = 0xffffffea;
    }
    else {
        _printk(0x8004ff8,"aw_cali_misc_open");
        uVar2 = 0xffffffea;
        *(param_2 + 0xd8) = 0;
    }
code_r0x080185d4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar2);
        *extraout_x18 = sym.aw_cali_misc_release;
        *(extraout_x1 + 0xd8) = 0;
        _printk(0x8005797);
        return 0;
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFiP9aw_devicehjE_global_addr @ 0x0800b838 (size 8) =====

void sym.__typeid__ZTSFiP9aw_devicehjE_global_addr(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_i2c_write(*(param_1 + 0x88),param_2,param_3);
    return;
}


// ===== sym.__typeid__ZTSFiP6devicePK24snd_soc_component_driverP18snd_soc_dai_driveriE_global_addr @ 0x0800b840 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFiP6devicePK24snd_soc_component_driverP18snd_soc_dai_driveriE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x0800b848 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.aw882xx_i2c_driver);
    return;
}


// ===== sym.aw882xx_set_fmt.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b850 (size 8) =====

ulong sym.aw882xx_set_fmt.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x58);
    iVar1 = (*(iVar2 + 0x18))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(iVar2 + 0x18);
    }
    _printk(0x80093ff,iVar1,"aw882xx_set_fmt",param_2);
    if ((param_2 & 0xf) == 1) {
        if ((param_2 & 0xf000) == 0x4000) {
            return 0;
        }
        iVar1 = (*(iVar2 + 0x18))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(iVar2 + 0x18);
        }
        _printk(0x8006ad9,iVar1,"aw882xx_set_fmt");
    }
    else {
        iVar1 = (*(iVar2 + 0x18))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(iVar2 + 0x18);
        }
        _printk(0x800588b,iVar1,"aw882xx_set_fmt");
    }
    return 0xffffffea;
}


// ===== sym.snd_soc_info_enum_double.cfi_jt @ 0x0800b858 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_enum_double.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.aw882xx_monitor_info.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b860 (size 8) =====

ulong sym.aw882xx_monitor_info.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_2 + 0x54);
    *(param_2 + 0x40) = 3;
    *(param_2 + 0x48) = 1;
    *(param_2 + 0x50) = 2;
    if (1 < uVar2) {
        uVar2 = 1;
        *(param_2 + 0x54) = 1;
    }
    uVar3 = *(obj.aw882xx_switch + uVar2 * 8);
    iVar1 = strlen(uVar3);
    strlcpy(param_2 + 0x58,uVar3,iVar1 + 1);
    return 0;
}


// ===== sym.aw882xx_switch_info.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b868 (size 8) =====

ulong sym.aw882xx_switch_info.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(param_2 + 0x54);
    *(param_2 + 0x40) = 3;
    *(param_2 + 0x48) = 1;
    *(param_2 + 0x50) = 2;
    if (1 < uVar2) {
        uVar2 = 1;
        *(param_2 + 0x54) = 1;
    }
    uVar3 = *(obj.aw882xx_switch + uVar2 * 8);
    iVar1 = strlen(uVar3);
    strlcpy(param_2 + 0x58,uVar3,iVar1 + 1);
    return 0;
}


// ===== sym.aw882xx_profile_info.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b870 (size 8) =====

ulong sym.aw882xx_profile_info.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80010a0);
    }
    uVar5 = (*pcVar2)(param_1);
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x80010c0);
    }
    iVar6 = (*pcVar2)(uVar5);
    *(param_2 + 0x40) = 3;
    *(param_2 + 0x48) = 1;
    uVar3 = sym.aw882xx_dev_get_profile_count(*(iVar6 + 0x68));
    if (uVar3 < 1) {
        *(param_2 + 0x50) = 0;
        iVar7 = (*(iVar6 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(iVar6 + 0x48);
        }
        _printk(0x800350f,iVar7,"aw882xx_profile_info");
    }
    else {
        uVar1 = *(param_2 + 0x54);
        *(param_2 + 0x50) = uVar3;
        if (uVar3 <= uVar1) {
            uVar1 = uVar3 - 1;
            *(param_2 + 0x54) = uVar1;
        }
        iVar4 = sym.aw88xx_dev_get_profile_name(*(iVar6 + 0x68),param_2 + 0x58,uVar1);
        if (iVar4 != 0) {
            strlcpy(param_2 + 0x58,"null",5);
        }
    }
    return 0;
}


// ===== sym.snd_soc_info_volsw.cfi_jt @ 0x0800b878 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.snd_soc_info_volsw.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr @ 0x0800b880 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.aw882xx_codec_remove.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b888 (size 8) =====

void sym.aw882xx_codec_remove.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x80014a0);
    }
    iVar2 = (*pcVar1)(param_1);
    iVar3 = (*(iVar2 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(iVar2 + 0x48);
    }
    _printk(0x8004092,iVar3,"aw882xx_codec_remove");
    sym.aw882xx_dev_deinit(*(iVar2 + 0x68));
    destroy_workqueue(*(iVar2 + 0x70));
    *(iVar2 + 0x70) = 0;
    return;
}


// ===== sym.aw_cali_misc_read.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800b890 (size 8) =====

code * sym.aw_cali_misc_read.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                 (int64_t param_1,int64_t param_2,ulong param_3,int64_t *param_4)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t arg1;
    code *pcVar10;
    code *unaff_x24;
    ulong unaff_x30;
    uchar noname_1 [16];
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
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    arg1 = *(param_1 + 0xd8);
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
    iVar7 = (*(arg1 + 0x40))[0xe];
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
    if (iVar7 == 0) {
        iVar7 = **(arg1 + 0x40);
    }
    _printk(0x8004092,iVar7,"aw_cali_misc_read");
    if (*param_4 == 0) {
        unaff_x24 = segment.ehdr;
        switch(_segment.ehdr) {
        case 0:
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x8005ee0;
            goto code_r0x08018100;
        default:
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            _printk(0x8004280,iVar7,"aw_cali_misc_read");
            pcVar10 = 0xffffffffffffffea;
            goto code_r0x08018140;
        case 5:
            iVar3 = sym.aw_cali_svc_get_devs_cali_re(arg1,&uStack_f8,4);
            if (0 < iVar3) {
code_r0x080178dc:
                uVar2 = snprintf(&uStack_d8,0x80,"%s:%d mOhms ","pri_l",uStack_f8 & 0xffffffff);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d mOhms ","pri_r",uStack_f8._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d mOhms ","sec_l",
                                         uStack_f0 & 0xffffffff);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar9 = uVar2;
                            iVar7 = &uStack_d8 + iVar9;
                            pcVar8 = "%s:%d mOhms ";
                            goto code_r0x08017b30;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x8005a0f;
            break;
        case 6:
            iVar3 = sym.aw_cali_svc_get_devs_r0(arg1,&uStack_f8,4);
            if (0 < iVar3) goto code_r0x080178dc;
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x8007761;
            break;
        case 7:
            iVar3 = sym.aw_cali_svc_get_devs_cali_f0(arg1,&uStack_f8,4);
            if (0 < iVar3) {
code_r0x08017a54:
                uVar2 = snprintf(&uStack_d8,0x80,"%s:%d ","pri_l",uStack_f8 & 0xffffffff);
                if (iVar3 == 1) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d ","pri_r",uStack_f8._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 2) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d ","sec_l",uStack_f0 & 0xffffffff);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 3) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar9 = uVar2;
                iVar7 = &uStack_d8 + iVar9;
                pcVar8 = "%s:%d ";
code_r0x08017b30:
                iVar5 = snprintf(iVar7,0x80 - iVar9,pcVar8,"sec_r",uStack_f0._4_4_);
joined_r0x08017fbc:
                if (iVar3 != 4) goto code_r0x08017fc0;
                uVar2 = iVar5 + uVar2;
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x800491a;
            break;
        case 8:
            iVar3 = sym.aw_cali_svc_get_devs_f0(arg1,&uStack_f8,4);
            if (0 < iVar3) goto code_r0x08017a54;
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x8008a6a;
            break;
        case 9:
            iVar3 = sym.aw_cali_svc_get_devs_te(arg1,&uStack_f8,4);
            if (0 < iVar3) goto code_r0x08017a54;
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x8005a35;
            break;
        case 10:
            iVar3 = sym.aw_cali_svc_get_devs_st(arg1,&uStack_f8,4);
            if (0 < iVar3) {
                uVar2 = snprintf(&uStack_d8,0x80,"%s:R0 %d mOhms Te %d ","pri_l",uStack_f8 & 0xffffffff,
                                 uStack_f8._4_4_);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:R0 %d mOhms Te %d ","pri_r",
                                     uStack_f0 & 0xffffffff,uStack_f0._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:R0 %d mOhms Te %d ","sec_l",
                                         uStack_e8 & 0xffffffff,uStack_e8._4_4_);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar9 = uVar2;
                            iVar7 = &uStack_d8 + iVar9;
                            pcVar8 = "%s:R0 %d mOhms Te %d ";
                            uVar4 = uStack_e0;
                            uVar1 = uStack_e0._4_4_;
code_r0x08017df4:
                            iVar5 = snprintf(iVar7,0x80 - iVar9,pcVar8,"sec_r",uVar4,uVar1);
                            goto joined_r0x08017fbc;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x80053b3;
            break;
        case 0xc:
            pcVar10 = *(arg1 + 0x3b0);
            if (pcVar10 == NULL) {
                iVar7 = (*(arg1 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1 + 0x40);
                }
                uVar6 = 0x8006750;
                goto code_r0x08018100;
            }
            if (pcVar10 != sym.__typeid__ZTSFiPciE_global_addr) goto code_r0x0801814c;
            goto code_r0x08017c5c;
        case 0xd:
            pcVar10 = *(arg1 + 0x3b8);
            if (pcVar10 == NULL) {
                iVar7 = (*(arg1 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1 + 0x40);
                }
                uVar6 = 0x8008e5a;
                goto code_r0x08018100;
            }
            if (8 < (pcVar10 + -0x800b8c0 >> 3 | pcVar10 << 0x3d)) {
                __cfi_slowpath_diag(0x2b3a43e29242445,pcVar10,0x8001640);
            }
            uVar4 = (*pcVar10)();
            iVar3 = snprintf(&uStack_d8,0x80,"dev_num:%d\n",uVar4);
            goto code_r0x08017f08;
        case 0xf:
            iVar3 = sym.aw_cali_svc_get_devs_cali_f0_q(arg1,&uStack_f8,&uStack_118,4);
            if (0 < iVar3) {
                uVar2 = snprintf(&uStack_d8,0x80,"%s:f0:%d q:%d","pri_l",uStack_f8 & 0xffffffff,
                                 uStack_118 & 0xffffffff);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:f0:%d q:%d","pri_r",uStack_f8._4_4_,
                                     uStack_118._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:f0:%d q:%d","sec_l",
                                         uStack_f0 & 0xffffffff,uStack_110 & 0xffffffff);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar9 = uVar2;
                            iVar7 = &uStack_d8 + iVar9;
                            pcVar8 = "%s:f0:%d q:%d";
                            uVar4 = uStack_f0._4_4_;
                            uVar1 = uStack_110._4_4_;
                            goto code_r0x08017df4;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x8008690;
            break;
        case 0x10:
            iVar3 = sym.aw_cali_svc_get_devs_re_range(arg1,&uStack_138);
            if (iVar3 < 1) {
                iVar7 = (*(arg1 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1 + 0x40);
                }
                uVar6 = 0x8008a43;
                goto code_r0x08018100;
            }
            uVar2 = snprintf(&uStack_d8,0x80,"%s:re_min:%d re_max:%d ","pri_l",uStack_138 & 0xffffffff,
                             uStack_138._4_4_);
            if (iVar3 != 1) {
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","pri_r",
                                 uStack_130 & 0xffffffff,uStack_130._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 2) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","sec_l",
                                 uStack_128 & 0xffffffff,uStack_128._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 3) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","sec_r",
                                 uStack_120 & 0xffffffff,uStack_120._4_4_);
                goto joined_r0x08017fbc;
            }
code_r0x08017edc:
            if (uVar2 < 0x81) {
                iVar3 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,0x8007347);
                iVar3 = iVar3 + uVar2;
                goto code_r0x08017f08;
            }
            goto code_r0x08017fc0;
        }
        _printk(uVar6,iVar7,"aw_cali_misc_read");
        pcVar10 = iVar3;
    }
    else {
        pcVar10 = NULL;
        *param_4 = 0;
    }
    while( true ) {
        while( true ) {
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_58) {
                return pcVar10;
            }
            __stack_chk_fail();
code_r0x0801814c:
            __cfi_slowpath_diag(0x71abd6d60b240f2d,pcVar10,0x8001620);
code_r0x08017c5c:
            uVar2 = (*pcVar10)(&uStack_d8,0x80);
            if (-1 < uVar2) break;
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            uVar6 = 0x8005a56;
code_r0x08018100:
            _printk(uVar6,iVar7,"aw_cali_misc_read");
            pcVar10 = 0xffffffffffffffea;
        }
        if (0x80 < uVar2) break;
        iVar3 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,0x8007347);
        iVar3 = iVar3 + uVar2;
code_r0x08017f08:
        if (iVar3 < 0) {
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x800,0x8018118);
            (*pcVar10)();
        }
        pcVar10 = iVar3;
        noname_1 = __check_object_size(&uStack_d8,pcVar10,1);
        iVar7 = sym._copy_to_user(param_2,noname_1,pcVar10);
        if (iVar7 == 0) {
            iVar7 = *param_4;
            *unaff_x24 = 0;
            *param_4 = pcVar10 + iVar7;
        }
        else {
            iVar7 = (*(arg1 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x40);
            }
            _printk(0x8006346,iVar7,"aw_cali_misc_read");
            pcVar10 = 0xfffffffffffffff2;
code_r0x08018140:
            *unaff_x24 = 0;
        }
    }
code_r0x08017fc0:
    //WARNING: Does not return
    pcVar10 = SoftwareBreakpoint(0x5512,0x8017fc4);
    (*pcVar10)();
}


// ===== sym.aw882xx_i2c_remove.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b898 (size 8) =====

ulong sym.aw882xx_i2c_remove.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(param_1 + 0xb8);
    iVar3 = (*(iVar4 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(iVar4 + 0x48);
    }
    _printk(0x8004092,iVar3,"aw882xx_i2c_remove");
    gpio_to_desc(*(iVar4 + 0x1c));
    iVar1 = gpiod_to_irq();
    if (iVar1 != 0) {
        gpio_to_desc(*(iVar4 + 0x1c));
        uVar2 = gpiod_to_irq();
        devm_free_irq(param_1 + 0x20,uVar2,iVar4);
    }
    if (*(iVar4 + 0x1c) < 0x200) {
        devm_gpio_free(param_1 + 0x20);
    }
    if (*(iVar4 + 0x18) < 0x200) {
        devm_gpio_free(param_1 + 0x20);
    }
    if (*(iVar4 + 0x20) < 0x200) {
        devm_gpio_free(param_1 + 0x20);
    }
    sysfs_remove_group(param_1 + 0x20,obj.aw882xx_attribute_group);
    iVar3 = *(iVar4 + 0x68);
    sym.aw882xx_monitor_deinit(iVar3 + 0x200);
    sym.aw882xx_cali_deinit(iVar3 + 0x1e8);
    pcVar5 = *(*(iVar4 + 0x38) + 0x18);
    if (pcVar5 != sym.__typeid__ZTSFvP6deviceE_global_addr) {
        __cfi_slowpath_diag(0x5b83a3fd302a5421,pcVar5,0x80015a0);
    }
    (*pcVar5)(param_1 + 0x20);
    mutex_lock(obj.g_aw882xx_lock);
    iVar1 = _segment.ehdr + -1;
    _segment.ehdr = CONCAT44(*0x8000004,iVar1);
    if ((iVar1 == 0) && (_segment.ehdr != 0)) {
        vfree();
        _segment.ehdr = 0;
    }
    mutex_unlock(obj.g_aw882xx_lock);
    return 0;
}


// ===== sym.aw882xx_shutdown.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b8a0 (size 8) =====

void sym.aw882xx_shutdown.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar2 = *(param_2 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001020);
    }
    iVar3 = (*pcVar1)(uVar2);
    if (*(param_1 + 0x3c) == 0) {
        *(iVar3 + 4) = 0;
        iVar4 = (*(iVar3 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x48);
        }
        uVar2 = 0x8008810;
    }
    else {
        iVar4 = (*(iVar3 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x48);
        }
        uVar2 = 0x8005c9f;
    }
    _printk(uVar2,iVar4,"aw882xx_shutdown");
    return;
}


// ===== sym.aw882xx_startup.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b8a8 (size 8) =====

ulong sym.aw882xx_startup.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar2 = *(param_2 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001000);
    }
    iVar3 = (*pcVar1)(uVar2);
    piVar5 = *(iVar3 + 0x48);
    iVar4 = piVar5[0xe];
    if (*(param_1 + 0x3c) == 0) {
        if (iVar4 == 0) {
            iVar4 = *piVar5;
        }
        _printk(0x80030cf,iVar4,"aw882xx_startup");
        sym.aw882xx_dev_init_cali_re(*(iVar3 + 0x68));
    }
    else {
        if (iVar4 == 0) {
            iVar4 = *piVar5;
        }
        _printk(0x8003c9d,iVar4,"aw882xx_startup");
    }
    return 0;
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x0800b8b0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.aw882xx_irq.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b8b8 (size 8) =====

ulong sym.aw882xx_irq.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        _printk(0x8004796,"aw882xx_irq");
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = (*(param_2 + 0x48))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(param_2 + 0x48);
        }
        _printk(0x8004092,iVar2,"aw882xx_irq");
        sym.aw882xx_dev_set_intmask(*(param_2 + 0x68));
        if (*(param_2 + 0x70) != 0) {
            queue_delayed_work_on(0x20,*(param_2 + 0x70),param_2 + 0x100,0);
        }
        uVar1 = 1;
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFivE_global_addr @ 0x0800b8c0 (size 8) =====

ulong sym.__typeid__ZTSFivE_global_addr(void)

{
    return 0x7d;
}


// ===== sym.aw_pid_2013_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b8c8 (size 8) =====

ulong sym.aw_pid_2013_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(void)

{
    return 0x7d;
}


// ===== sym.aw_pid_2113_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b8d0 (size 8) =====

ulong sym.aw_pid_2113_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(void)

{
    return 0x80;
}


// ===== sym.aw_pid_2055a_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b8d8 (size 8) =====

ulong sym.aw_pid_2055a_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(void)

{
    return 0x7d;
}


// ===== sym.aw_pid_2071_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b8e0 (size 8) =====

ulong sym.aw_pid_2071_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(void)

{
    return 0x7e;
}


// ===== sym.aw_pid_2032_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b8e8 (size 8) =====

ulong sym.aw_pid_2032_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(void)

{
    return 0x7e;
}


// ===== sym.aw882xx_get_dev_num.cfi_jt @ 0x0800b8f0 (size 8) =====

uint sym.aw882xx_get_dev_num.cfi_jt(void)

{
    return _segment.ehdr;
}


// ===== sym.aw_pid_2055_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b8f8 (size 8) =====

ulong sym.aw_pid_2055_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(void)

{
    return 0x7d;
}


// ===== sym.init_module.cfi_jt @ 0x0800b900 (size 8) =====

int sym.init_module.cfi_jt(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800287f,"aw882xx_i2c_init","v1.11.0");
    iVar1 = i2c_register_driver(obj.__this_module,obj.aw882xx_i2c_driver);
    if (iVar1 != 0) {
        _printk(0x80051fe,"aw882xx_i2c_init");
    }
    return iVar1;
}


// ===== sym.aw_cali_misc_write.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800b908 (size 8) =====

uint64_t sym.aw_cali_misc_write.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xd8);
    iVar7 = (*(arg1 + 0x40))[0xe];
    if (iVar7 == 0) {
        iVar7 = **(arg1 + 0x40);
    }
    _printk(0x80068ef,iVar7,"aw_cali_misc_write",param_3 & 0xffffffff);
    iVar7 = __kmalloc(param_3 + 1,0xdc0);
    if (iVar7 == 0) {
        iVar7 = (*(arg1 + 0x40))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(arg1 + 0x40);
        }
        _printk(0x800372b,iVar7,"aw_cali_misc_write");
        return 0xfffffffffffffff4;
    }
    if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80183f8);
        (*pcVar1)();
    }
    __check_object_size(iVar7,param_3,0);
    iVar4 = sym._copy_from_user(iVar7,param_2,param_3);
    if (iVar4 != 0) {
        iVar3 = -0xe;
        goto code_r0x080182d4;
    }
    iVar2 = sym.aw_cali_svc_get_cmd_form_str(arg1,iVar7);
    if (iVar2 < 0) {
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        uVar5 = 0x800501d;
code_r0x08018280:
        _printk(uVar5,iVar4,"aw_cali_misc_write",iVar7);
        iVar3 = -0x16;
    }
    else {
        switch(iVar2) {
        case 1:
            iVar3 = sym.aw_cali_svc_cali_cmd(arg1,2,0,3);
            break;
        case 2:
            iVar3 = sym.aw_cali_svc_cali_re(arg1,noname_1,1);
            break;
        case 3:
            iVar3 = sym.aw_cali_svc_cali_f0(arg1,noname_1,3);
            break;
        case 4:
            iVar3 = sym.aw_cali_svc_set_devs_re_str(arg1,iVar7 + 9);
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0xf:
        case 0x10:
            iVar3 = 0;
            _segment.ehdr = iVar2;
            break;
        case 0xb:
            iVar3 = sym.aw_cali_misc_switch_dev(param_1,arg1,iVar7);
            break;
        case 0xe:
            iVar3 = sym.aw_cali_svc_cali_f0_q(arg1,noname_1,3);
            break;
        default:
            iVar4 = (*(arg1 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(arg1 + 0x40);
            }
            uVar5 = 0x800701e;
            goto code_r0x08018280;
        }
    }
code_r0x080182d4:
    iVar4 = (*(arg1 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + 0x40);
    }
    _printk(0x8003b17,iVar4,"aw_cali_misc_write",iVar7);
    kfree(iVar7);
    uVar6 = 0xffffffffffffffea;
    if (-1 < iVar3) {
        uVar6 = param_3;
    }
    return uVar6;
}


// ===== sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr @ 0x0800b910 (size 8) =====

ulong sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr(int64_t param_1)

{
    return *(param_1 + 0x80);
}


// ===== sym.aw882xx_i2c_probe.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b918 (size 8) =====

char * sym.aw882xx_i2c_probe.fc2486704268e85b1991da4eb2e27198.cfi_jt
                 (code *param_1,ulong param_2,ulong param_3,char *param_4)

{
    code *arg3;
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *arg1;
    int64_t iVar4;
    ulong uVar5;
    char *arg2;
    code cVar6;
    uint uVar7;
    int64_t *piVar8;
    uint *puVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    char *pcVar12;
    code *pcVar13;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    arg3 = param_1 + 0x20;
    iVar11 = *(param_1 + 0x310);
    _printk(0x8006b6e,"aw882xx_i2c_probe",*(param_1 + 2));
    pcVar10 = *(param_1 + 0x18);
    pcVar13 = *(*(pcVar10 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar13,0x80014e0);
    uVar3 = (*pcVar13)(pcVar10);
    if ((uVar3 & 1) == 0) {
        iVar11 = *(param_1 + 0x90);
        if (iVar11 == 0) {
            iVar11 = *arg3;
        }
        _printk(0x8005d0a,iVar11,"aw882xx_i2c_probe");
        pcVar12 = 0xfffffffb;
        arg1 = pcVar10;
        goto code_r0x0800f4ac;
    }
    arg1 = devm_kmalloc(arg3,0x2c8,0xdc0);
    if (arg1 != NULL) {
        iVar4 = devm_kmalloc(arg3,0x3f0,0xdc0);
        *(arg1 + 0x68) = iVar4;
        pcVar10 = arg1;
        if (iVar4 != 0) {
            *(arg1 + 0x30) = 0;
            pcVar13 = arg1 + 0x48;
            *pcVar13 = arg3;
            *(arg1 + 0x38) = reloc.snd_soc_kcontrol_component.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            *(arg1 + 0x40) = param_1;
            *(arg1 + 0x28) = 0;
            *(arg1 + 0x13) = 0x101;
            *(arg1 + 0x70) = 0;
            __mutex_init(arg1 + 0x298,"&aw882xx->lock",obj.soc_codec_dev_aw882xx);
            *(param_1 + 0xb8) = arg1;
            uStack_50 = 0;
            if (iVar11 == 0) {
                iVar11 = *(param_1 + 0x90);
                *(arg1 + 0x18) = 0xffffffffffffffff;
                *(arg1 + 0x20) = 0xffffffff;
                if (iVar11 == 0) {
                    iVar11 = *arg3;
                }
                _printk(0x8008cb7,iVar11,"aw882xx_i2c_probe");
                pcVar12 = 0xffffffea;
                goto code_r0x0800f4ac;
            }
            iVar1 = of_get_named_gpio_flags(iVar11,"reset-gpio",0,0);
            piVar8 = *(arg1 + 0x48);
            *(arg1 + 0x18) = iVar1;
            iVar4 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x80079ca;
            }
            else {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x8005d6e;
            }
            _printk(uVar5,iVar4,"aw882xx_parse_gpio_dt");
            iVar1 = of_get_named_gpio_flags(iVar11,"irq-gpio",0,0);
            piVar8 = *(arg1 + 0x48);
            *(arg1 + 0x1c) = iVar1;
            iVar4 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x800565b;
            }
            else {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x8008168;
            }
            _printk(uVar5,iVar4,"aw882xx_parse_gpio_dt");
            iVar1 = of_get_named_gpio_flags(iVar11,"spksw-gpio",0,0);
            piVar8 = *(arg1 + 0x48);
            *(arg1 + 0x20) = iVar1;
            iVar4 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x800476b;
            }
            else {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x8001f55;
            }
            _printk(uVar5,iVar4,"aw882xx_parse_gpio_dt");
            iVar1 = of_property_read_variable_u32_array(iVar11,"dc-flag",&uStack_50 + 4,1,0);
            if (iVar1 < 0) {
                uStack_50 = uStack_50 & 0xffffffff;
                iVar4 = (*pcVar13)[0xe];
                if (iVar4 == 0) {
                    iVar4 = **pcVar13;
                }
                _printk(0x8005636,iVar4,"aw882xx_parse_dt");
            }
            else {
                iVar4 = (*pcVar13)[0xe];
                if (iVar4 == 0) {
                    iVar4 = **pcVar13;
                }
                _printk(0x8005d4e,iVar4,"aw882xx_parse_dt",uStack_50._4_4_);
            }
            arg1[0x12] = SUB81(uStack_50 >> 0x20,0);
            iVar1 = of_property_read_variable_u32_array(iVar11,"sync-flag",&uStack_50,1,0);
            piVar8 = *(arg1 + 0x48);
            iVar11 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar11 == 0) {
                    iVar11 = *piVar8;
                }
                _printk(0x800399e,iVar11,"aw882xx_parse_dt");
                cVar6 = 0x0;
            }
            else {
                if (iVar11 == 0) {
                    iVar11 = *piVar8;
                }
                _printk(0x800441d,iVar11,"aw882xx_parse_dt",uStack_50 & 0xffffffff);
                cVar6 = SUB81(uStack_50,0);
            }
            arg1[0x11] = cVar6;
            if (0x1ff < *(arg1 + 0x18)) {
code_r0x0800f784:
                if (*(arg1 + 0x1c) < 0x200) {
                    param_4 = "aw882xx_int";
                    uVar2 = devm_gpio_request_one(*pcVar13,*(arg1 + 0x1c),1);
                    if (uVar2 != 0) {
                        pcVar12 = uVar2;
                        iVar11 = (*pcVar13)[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **pcVar13;
                        }
                        uVar5 = 0x8004de3;
                        goto code_r0x0800f914;
                    }
                }
                if (*(arg1 + 0x20) < 0x200) {
                    param_4 = "aw882xx_spksw";
                    uVar2 = devm_gpio_request_one(*pcVar13,*(arg1 + 0x20),0);
                    if (uVar2 != 0) {
                        pcVar12 = uVar2;
                        iVar11 = (*pcVar13)[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **pcVar13;
                        }
                        uVar5 = 0x800946a;
                        goto code_r0x0800f914;
                    }
                }
                sym.aw882xx_hw_reset(arg1);
                uStack_50 = uStack_50 & 0xffffffff;
                iVar1 = sym.aw882xx_i2c_read(arg1,0,&uStack_50 + 4);
                if (-1 < iVar1) {
                    param_4 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1,0,&uStack_50 + 4);
                    if (iVar1 < 0) goto code_r0x0800f7f0;
                    param_4 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1,0,&uStack_50 + 4);
                    if (iVar1 < 0) goto code_r0x0800f7f0;
                    param_4 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1,0,&uStack_50 + 4);
                    if (iVar1 < 0) goto code_r0x0800f7f0;
                    param_4 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1,0,&uStack_50 + 4);
                    if (-1 < iVar1) {
                        param_4 = uStack_50._4_4_;
                        if (0x2054 < uStack_50._4_4_) goto code_r0x0800fc2c;
                        if (uStack_50._4_4_ != 0x1852) {
                            if (uStack_50._4_4_ != 0x2013) {
                                if (uStack_50._4_4_ != 0x2032) goto code_r0x0800fc50;
code_r0x0800f8ac:
                                iVar11 = (*pcVar13)[0xe];
                                if (iVar11 == 0) {
                                    iVar11 = **pcVar13;
                                }
                                _printk(0x8004a90,iVar11,"aw882xx_read_chipid");
                                uVar7 = 0x2032;
                                goto code_r0x0800fce0;
                            }
code_r0x0800fbfc:
                            iVar11 = (*pcVar13)[0xe];
                            if (iVar11 == 0) {
                                iVar11 = **pcVar13;
                            }
                            _printk(0x8005dc1,iVar11,"aw882xx_read_chipid");
                            uVar7 = 0x2013;
                            goto code_r0x0800fce0;
                        }
code_r0x0800fbd0:
                        iVar11 = (*pcVar13)[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **pcVar13;
                        }
                        _printk(0x8005d98,iVar11,"aw882xx_read_chipid");
                        uVar7 = 0x1852;
                        goto code_r0x0800fce0;
                    }
                }
code_r0x0800f7f0:
                iVar11 = (*pcVar13)[0xe];
                if (iVar11 == 0) {
                    iVar11 = **pcVar13;
                }
                _printk(0x8008cfc,iVar11,"aw882xx_read_chipid",iVar1);
                pcVar12 = 0xfffffffb;
                iVar11 = *(param_1 + 0x90);
                if (iVar11 != 0) goto code_r0x0800f824;
                goto code_r0x0800f820;
            }
            param_4 = "aw882xx_rst";
            uVar2 = devm_gpio_request_one(*pcVar13,*(arg1 + 0x18),0);
            if (uVar2 == 0) goto code_r0x0800f784;
            pcVar12 = uVar2;
            iVar11 = (*pcVar13)[0xe];
            if (iVar11 == 0) {
                iVar11 = **pcVar13;
            }
            uVar5 = 0x8005684;
code_r0x0800f914:
            _printk(uVar5,iVar11,"aw882xx_gpio_request");
            goto code_r0x0800f4ac;
        }
    }
    arg1 = pcVar10;
    _dev_err(param_1 + 0x20,"devm_kzalloc failed.");
    iVar11 = *(param_1 + 0x90);
    if (iVar11 == 0) {
        iVar11 = *arg3;
    }
    _printk(0x8003ce8,iVar11,"aw882xx_i2c_probe");
    pcVar12 = 0xfffffff4;
code_r0x0800f4ac:
    do {
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_48) {
            return pcVar12;
        }
        __stack_chk_fail();
code_r0x0800fc2c:
        iVar1 = param_4;
        if (iVar1 != 0x2055) {
            if (iVar1 == 0x2071) {
code_r0x0800fcb8:
                iVar11 = (*pcVar13)[0xe];
                if (iVar11 == 0) {
                    iVar11 = **pcVar13;
                }
                _printk(0x8004e09,iVar11,"aw882xx_read_chipid");
                uVar7 = 0x2071;
                goto code_r0x0800fce0;
            }
            if (iVar1 == 0x2113) {
code_r0x0800f948:
                iVar11 = (*pcVar13)[0xe];
                if (iVar11 == 0) {
                    iVar11 = **pcVar13;
                }
                _printk(0x8002429,iVar11,"aw882xx_read_chipid");
                uVar7 = 0x2113;
                goto code_r0x0800fce0;
            }
code_r0x0800fc50:
            iVar11 = (*pcVar13)[0xe];
            if (iVar11 == 0) {
                iVar11 = **pcVar13;
            }
            _printk(0x8002452,iVar11,"aw882xx_read_chipid");
            msleep(5);
            pcVar12 = 0xffffffea;
            iVar11 = *(param_1 + 0x90);
            if (iVar11 == 0) {
code_r0x0800f820:
                iVar11 = *arg3;
            }
code_r0x0800f824:
            param_4 = pcVar12;
            _printk(0x80023f4,iVar11,"aw882xx_i2c_probe");
            arg2 = "PA internal exception";
            iVar11 = 0x36007bc7;
            goto code_r0x0800f84c;
        }
code_r0x0800fc8c:
        iVar11 = (*pcVar13)[0xe];
        if (iVar11 == 0) {
            iVar11 = **pcVar13;
        }
        _printk(0x800358d,iVar11,"aw882xx_read_chipid");
        uVar7 = 0x2055;
code_r0x0800fce0:
        uVar3 = _segment.ehdr;
        *(*(arg1 + 0x68) + 8) = uVar7;
        uVar3 = sym.aw882xx_init(arg1,uVar3);
        pcVar12 = uVar3 & 0xffffffff;
    } while (uVar3 != 0);
    sym.aw882xx_interrupt_init(arg1);
    uVar2 = sym.aw_componet_codec_register(arg1);
    if (uVar2 == 0) {
        uVar3 = sysfs_create_group(arg3,obj.aw882xx_attribute_group);
        pcVar12 = uVar3 & 0xffffffff;
        if (-1 < uVar3) {
            puVar9 = *(arg1 + 0x68);
            *(param_1 + 0xb8) = arg1;
            arg1[0x50] = 0x0;
            *(arg1 + 0x54) = 0xff00000000;
            *(arg1 + 0x60) = 0;
            arg1[0x10] = SUB41(*puVar9,0);
            arg1 = obj.g_aw882xx_lock;
            mutex_lock(obj.g_aw882xx_lock);
            _segment.ehdr = _segment.ehdr + 1;
            mutex_unlock(obj.g_aw882xx_lock);
            iVar11 = *(param_1 + 0x90);
            if (iVar11 == 0) {
                iVar11 = *arg3;
            }
            param_4 = _segment.ehdr;
            _printk(0x8008512,iVar11,"aw882xx_i2c_probe");
            goto code_r0x0800f4ac;
        }
        iVar11 = (*pcVar13)[0xe];
        if (iVar11 == 0) {
            iVar11 = **pcVar13;
        }
        _printk(0x8003907,iVar11,"aw882xx_i2c_probe");
        param_1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (param_1 != sym.__typeid__ZTSFvP6deviceE_global_addr) {
            __cfi_slowpath_diag(0x5b83a3fd302a5421,param_1,0x80014c0);
        }
        (*param_1)(arg3);
        arg2 = "PA i2c exception";
        iVar11 = 0x36007bc9;
    }
    else {
        pcVar12 = uVar2;
        iVar11 = *(param_1 + 0x90);
        if (iVar11 == 0) {
            iVar11 = *arg3;
        }
        _printk(0x800942c,iVar11,"aw882xx_i2c_probe");
        arg2 = "PA detection exception";
        iVar11 = 0x36007bc8;
    }
code_r0x0800f84c:
    sym.mievent_report(iVar11,arg2,arg3);
    goto code_r0x0800f4ac;
}


// ===== sym.__typeid__ZTSFjjE_global_addr @ 0x0800b920 (size 8) =====

int sym.__typeid__ZTSFjjE_global_addr(uint64_t param_1)

{
    return (param_1 & 0x3f) + (param_1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055a_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b928 (size 8) =====

int sym.aw_pid_2055a_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint64_t param_1)

{
    return (param_1 & 0x3f) + (param_1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b930 (size 8) =====

int sym.aw_pid_2055_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint64_t param_1)

{
    return (param_1 & 0x3f) + (param_1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2013_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b938 (size 8) =====

int sym.aw_pid_2013_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint64_t param_1)

{
    return (param_1 & 0x3f) + (param_1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2113_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b940 (size 8) =====

int sym.aw_pid_2113_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint64_t param_1)

{
    return (param_1 & 0x3f) + (param_1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2071_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b948 (size 8) =====

int sym.aw_pid_2071_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint64_t param_1)

{
    return (param_1 & 0x3f) + (param_1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_1852_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b950 (size 8) =====

int sym.aw_pid_1852_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint64_t param_1)

{
    return (param_1 & 0xf) + (param_1 >> 4 & 0xfffffff) * 0xc;
}


// ===== sym.aw882xx_interrupt_work.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b958 (size 8) =====

void sym.aw882xx_interrupt_work.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar3 = *(param_1 + -0x98);
    uStack_3c = 0;
    sym.aw882xx_i2c_read(param_1 + -0x100,*(iVar3 + 0x158),&uStack_3c);
    iVar2 = (*(param_1 + -0xb8))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(param_1 + -0xb8);
    }
    _printk(0x80065d8,iVar2,"aw882xx_interrupt_work",uStack_3c);
    sym.aw882xx_i2c_read(param_1 + -0x100,*(iVar3 + 0x94),&uStack_3c);
    iVar2 = (*(param_1 + -0xb8))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(param_1 + -0xb8);
    }
    _printk(0x8009000,iVar2,"aw882xx_interrupt_work",uStack_3c);
    sym.aw882xx_dev_set_intmask(*(param_1 + -0x98));
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dc_prot_work;
    if (*(iVar2 + -0x176) != '\0' && *(*(iVar2 + -0x120) + 4) != 0) {
        iVar1 = sym.aw882xx_dsp_get_dc_status(*(iVar2 + -0x120));
        if (iVar1 < 1) {
            queue_delayed_work_on(0x20,*(iVar2 + -0x118),iVar2,0xfa);
        }
        else {
            cancel_delayed_work_sync(iVar2 + -0x110);
            mutex_lock(iVar2 + 0x110);
            sym.aw882xx_device_stop(*(iVar2 + -0x120));
            mutex_unlock(iVar2 + 0x110);
        }
    }
    return;
}


// ===== sym.aw882xx_dc_prot_work.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b960 (size 8) =====

void sym.aw882xx_dc_prot_work.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x176) != '\0' && *(*(param_1 + -0x120) + 4) != 0) {
        iVar1 = sym.aw882xx_dsp_get_dc_status(*(param_1 + -0x120));
        if (iVar1 < 1) {
            queue_delayed_work_on(0x20,*(param_1 + -0x118),param_1,0xfa);
        }
        else {
            cancel_delayed_work_sync(param_1 + -0x110);
            mutex_lock(param_1 + 0x110);
            sym.aw882xx_device_stop(*(param_1 + -0x120));
            mutex_unlock(param_1 + 0x110);
        }
    }
    return;
}


// ===== sym.aw882xx_startup_work.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b968 (size 8) =====

void sym.aw882xx_startup_work.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*(param_1 + -0x30))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(param_1 + -0x30);
    }
    _printk(0x8004092,iVar1,"aw882xx_startup_work");
    mutex_lock(param_1 + 0x220);
    sym.aw882xx_start_pa(param_1 + -0x78);
    mutex_unlock(param_1 + 0x220);
    return;
}


// ===== sym.aw_monitor_work_func.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt @ 0x0800b970 (size 8) =====

void sym.aw_monitor_work_func.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt(int64_t param_1)

{
    uint8_t uVar1;
    uint uVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t extraout_w8;
    int64_t *piVar9;
    ulong *in_x18;
    int64_t arg1;
    ulong uVar10;
    uint16_t uVar11;
    int64_t iVar12;
    uint32_t uVar13;
    code *unaff_x23;
    code *pcVar14;
    int64_t unaff_x24;
    code *unaff_x25;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    arg1 = param_1 + -0x200;
    iVar8 = (*(param_1 + -0x1c0))[0xe];
    if (iVar8 == 0) {
        iVar8 = **(param_1 + -0x1c0);
    }
    iVar12 = *(param_1 + -0x178);
    _printk(0x8002766,iVar8,"aw_monitor_work_func",*(param_1 + -500),*(param_1 + 0x88),*(param_1 + 0x8c));
    if (((*(param_1 + 0x88) == '\x01') && (*(param_1 + -500) != 0)) && (*(param_1 + 0x8c) != 0)) {
        uStack_60 = uStack_60 & 0xffffffff;
        iVar8 = (*(param_1 + -0x1c0))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(param_1 + -0x1c0);
        }
        _printk(0x8005ab4,iVar8,"aw_get_hmute");
        pcVar14 = *(param_1 + 0x170);
        unaff_x25 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
        if (pcVar14 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar14,0x8001e20);
        }
        iVar4 = (*pcVar14)(arg1,*(param_1 + -0x130),&uStack_60 + 4);
        if ((-1 < iVar4) && ((uStack_60._4_4_ & (*(param_1 + -300) ^ 0xffffffff)) == 0)) {
            if (obj.soc_codec_dev_aw882xx == 0x1) {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                _printk(0x80054b7,iVar8,"aw_monitor_work");
                pcVar14 = unaff_x25;
                goto code_r0x08021d40;
            }
            uStack_60 = 0;
            iVar4 = sym.aw_monitor_get_data_form_system(arg1,&uStack_60 + 4,0xc);
            pcVar14 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
            if (iVar4 == 0) {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                uStack_60 = CONCAT44(uStack_60._4_4_ / 1000,uStack_60);
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                _printk(0x8002bef,iVar8,"aw_monitor_get_voltage");
            }
            else {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                _printk(0x8006d36,iVar8,"aw_monitor_get_voltage");
                if (iVar4 < 0) goto code_r0x08021d40;
            }
            iVar4 = sym.aw_monitor_get_data_form_system(arg1,&uStack_60,0x33);
            if (iVar4 == 0) {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                iVar4 = uStack_60 / 10;
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                _printk(0x800936d,iVar8,"aw_monitor_get_temperature",iVar4);
                uVar1 = *(param_1 + 0xd9) + 1;
                *(param_1 + 0xf8) = *(param_1 + 0xf8) + uStack_60._4_4_;
                *(param_1 + 0xe4) = *(param_1 + 0xe4) + iVar4;
                *(param_1 + 0xd9) = uVar1;
                if ((uVar1 < *(param_1 + 0x94)) && (pcVar14 = unaff_x25, *(param_1 + 0xd8) == '\x01'))
                goto code_r0x08021d40;
                if (*(param_1 + 0xa4) == 0) {
                    *(param_1 + 0x100) = 0xffffffff00ff00ff;
                }
                else {
                    iVar4 = sym.aw_monitor_get_data_from_table
                                      (arg1,*(param_1 + 200),*(param_1 + 0xd0),param_1 + 0xf4);
                    pcVar14 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                    if (iVar4 < 0) goto code_r0x08021d40;
                }
                if (*(param_1 + 0x9c) == 0) {
                    *(param_1 + 0xec) = 0xffffffff00ff00ff;
                }
                else {
                    iVar4 = sym.aw_monitor_get_data_from_table
                                      (arg1,*(param_1 + 0xb8),*(param_1 + 0xc0),param_1 + 0xe0);
                    unaff_x24 = iVar12;
                    pcVar14 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                    if (iVar4 < 0) goto code_r0x08021d40;
                }
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                _printk(0x8004694,iVar8,"aw_monitor_get_data",*(param_1 + 0xf8),*(param_1 + 0x100),
                        *(param_1 + 0x102),*(param_1 + 0x104));
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                _printk(0x8006078,iVar8,"aw_monitor_get_data",*(param_1 + 0xe4),*(param_1 + 0xec),*(param_1 + 0xee)
                        ,*(param_1 + 0xf0));
                uVar3 = *(param_1 + 0xec);
                uVar5 = uVar3;
                unaff_x23 = *(param_1 + 0x100);
                uVar13 = *(param_1 + 0x100);
                if (uVar3 != 0xff) {
                    if (uVar13 != 0xff) {
                        if (*(param_1 + 0x98) != 0) goto code_r0x08021e5c;
                        uVar5 = uVar3;
                        if (uVar13 <= uVar3) {
                            uVar5 = uVar13;
                        }
                        unaff_x23 = uVar5;
                        uVar11 = *(param_1 + 0x102);
                        if (*(param_1 + 0x102) <= *(param_1 + 0xee)) {
                            uVar11 = *(param_1 + 0xee);
                        }
                        unaff_x25 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                        uVar13 = *(param_1 + 0x104);
                        if (*(param_1 + 0xf0) < *(param_1 + 0x104)) goto code_r0x08021e84;
                        uVar13 = *(param_1 + 0xf0);
                        goto code_r0x08021e84;
                    }
                    uVar11 = *(param_1 + 0xee);
                    unaff_x23 = uVar3;
                    unaff_x25 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                    uVar13 = *(param_1 + 0xf0);
                    goto code_r0x08021e84;
                }
                if (uVar13 != 0xff) {
                    uVar11 = *(param_1 + 0x102);
                    uVar13 = *(param_1 + 0x104);
                    goto code_r0x08021e84;
                }
                uVar11 = *(param_1 + 0xee);
                uVar13 = *(param_1 + 0xf0);
                goto code_r0x08021e84;
            }
            iVar8 = (*(param_1 + -0x1c0))[0xe];
            if (iVar8 == 0) {
                iVar8 = **(param_1 + -0x1c0);
            }
            _printk(0x8005c14,iVar8,"aw_monitor_get_temperature");
            goto code_r0x08021d40;
        }
    }
    do {
        iVar12 = unaff_x24;
        uVar13 = unaff_x23;
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
        uVar5 = extraout_w8;
code_r0x08021e5c:
        if (uVar13 <= uVar5) {
            uVar13 = uVar5;
        }
        unaff_x23 = uVar13;
        uVar11 = *(param_1 + 0xee);
        if (*(param_1 + 0x102) <= *(param_1 + 0xee)) {
            uVar11 = *(param_1 + 0x102);
        }
        uVar13 = *(param_1 + 0xf0);
        if (*(param_1 + 0x104) <= *(param_1 + 0xf0)) {
            uVar13 = *(param_1 + 0x104);
        }
code_r0x08021e84:
        iVar8 = (*(param_1 + -0x1c0))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(param_1 + -0x1c0);
        }
        _printk(0x800651b,iVar8,"aw_monitor_work",unaff_x23,uVar11,uVar13);
        uVar5 = unaff_x23;
        uStack_60 = uStack_60 & 0xffffffff;
        if ((uVar5 != 0xff) && (*(param_1 + 0xac) != 0)) {
            pcVar14 = *(param_1 + 0x170);
            if (pcVar14 != unaff_x25) {
                __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar14,0x8001e40);
            }
            iVar4 = (*pcVar14)(arg1,*(param_1 + -0x4c),&uStack_60 + 4);
            if (iVar4 < 0) {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                uVar7 = 0x800791a;
code_r0x08021f84:
                _printk(uVar7,iVar8,"aw_monitor_set_ipeak");
            }
            else if ((uStack_60._4_4_ & (*(param_1 + -0x48) ^ 0xffffffff)) == uVar5) {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                _printk(0x8007c2c,iVar8,"aw_monitor_set_ipeak",unaff_x23);
            }
            else {
                unaff_x25 = *(param_1 + 0x168);
                uVar5 = *(param_1 + -0x48) & uStack_60._4_4_ | uVar5;
                uStack_60 = CONCAT44(uVar5,uStack_60);
                if (unaff_x25 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                    __cfi_slowpath_diag(0x72f794085f5af073,unaff_x25,0x8001e60);
                    uVar5 = uStack_60._4_4_;
                }
                iVar4 = (*unaff_x25)(arg1,*(param_1 + -0x4c),uVar5);
                piVar9 = *(param_1 + -0x1c0);
                iVar8 = piVar9[0xe];
                if (iVar4 < 0) {
                    if (iVar8 == 0) {
                        iVar8 = *piVar9;
                    }
                    uVar7 = 0x80027b0;
                    goto code_r0x08021f84;
                }
                if (iVar8 == 0) {
                    iVar8 = *piVar9;
                }
                _printk(0x80096b8,iVar8,"aw_monitor_set_ipeak",uStack_60._4_4_,unaff_x23);
            }
        }
        uStack_60 = uStack_60 & 0xffffffff;
        if ((uVar11 != 0xff) && (*(param_1 + 0xb0) != 0)) {
            unaff_x23 = *(param_1 + 0x188);
            if (6 < (unaff_x23 + -0x800b9c0 >> 3 | unaff_x23 << 0x3d)) {
                __cfi_slowpath_diag(0xcb68aa27346a4fae,unaff_x23,0x8001e80);
            }
            iVar4 = (*unaff_x23)(arg1,&uStack_60 + 4);
            if (iVar4 < 0) {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                uVar7 = 0x8004d2e;
code_r0x08021fd8:
                _printk(uVar7,iVar8,"aw_monitor_set_gain");
            }
            else {
                pcVar14 = *(param_1 + 400);
                if (6 < (pcVar14 + -0x800b920 >> 3 | pcVar14 << 0x3d)) {
                    __cfi_slowpath_diag(0x77c30cb837e57aa5,pcVar14,0x8001ea0);
                }
                uVar5 = (*pcVar14)(uVar11);
                uVar5 = uVar5 & 0xffff;
                unaff_x23 = uVar5;
                iVar4 = uVar5 + *(param_1 + -0x38);
                if (uStack_60._4_4_ == iVar4) {
                    iVar8 = (*(param_1 + -0x1c0))[0xe];
                    if (iVar8 == 0) {
                        iVar8 = **(param_1 + -0x1c0);
                    }
                    _printk(0x800743c,iVar8,"aw_monitor_set_gain",iVar4);
                }
                else {
                    unaff_x25 = *(param_1 + 0x180);
                    if (6 < (unaff_x25 + -0x800ba00 >> 3 | unaff_x25 << 0x3d)) {
                        __cfi_slowpath_diag(0x2060516a6466f902,unaff_x25,0x8001ec0);
                    }
                    iVar6 = (*unaff_x25)(arg1,iVar4);
                    piVar9 = *(param_1 + -0x1c0);
                    iVar8 = piVar9[0xe];
                    if (iVar6 < 0) {
                        if (iVar8 == 0) {
                            iVar8 = *piVar9;
                        }
                        uVar7 = 0x8006561;
                        goto code_r0x08021fd8;
                    }
                    if (iVar8 == 0) {
                        iVar8 = *piVar9;
                    }
                    _printk(0x8005c4b,iVar8,"aw_monitor_set_gain",iVar4,uVar5);
                }
            }
        }
        uStack_60 = CONCAT44(uVar13,uStack_60);
        if ((uVar13 != 0xffffffff) && (*(param_1 + 0xb4) != 0)) {
            if ((*(param_1 + 0xdc) == uVar13) && (*(param_1 + 0xd8) != '\0')) {
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                uVar7 = 0x8004d54;
            }
            else {
                iVar4 = sym.aw882xx_dsp_write_vmax(arg1,&uStack_60 + 4,4);
                if (iVar4 != 0) goto code_r0x08021f18;
                *(param_1 + 0xdc) = uStack_60._4_4_;
                iVar8 = (*(param_1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(param_1 + -0x1c0);
                }
                uVar7 = 0x8007466;
                uVar13 = uStack_60._4_4_;
            }
            _printk(uVar7,iVar8,"aw_monitor_set_vmax",uVar13);
        }
code_r0x08021f18:
        uVar2 = *(param_1 + 0xe4);
        *(param_1 + 0xd9) = 0;
        *(param_1 + 0xe4) = 0;
        *(param_1 + 0xe0) = uVar2;
        *(param_1 + 0xf4) = *(param_1 + 0xf8);
        *(param_1 + 0xf8) = 0;
        unaff_x24 = iVar12;
        pcVar14 = unaff_x25;
        if (*(param_1 + 0xd8) == '\0') {
            *(param_1 + 0xd8) = 1;
        }
code_r0x08021d40:
        uVar10 = *(iVar12 + 0x70);
        uVar7 = __msecs_to_jiffies(*(param_1 + 0x90));
        queue_delayed_work_on(0x20,uVar10,param_1,uVar7);
        unaff_x25 = pcVar14;
    } while( true );
}


// ===== sym.aw882xx_request_firmware.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b978 (size 8) =====

void sym.aw882xx_request_firmware.fc2486704268e85b1991da4eb2e27198.cfi_jt(code *param_1)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    code *pcVar4;
    code *unaff_x20;
    code *unaff_x21;
    code *pcVar5;
    code *unaff_x25;
    code *pcVar6;
    ulong unaff_x30;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    pcVar5 = param_1 + -0x1c8;
    iStack_58 = *(iVar2 + 0x5e0);
    piStack_60 = NULL;
    param_1[-0x1e8] = 0x0;
    iVar1 = request_firmware(&piStack_60,"aw882xx_acf.bin",*pcVar5);
    piVar3 = *pcVar5;
    iVar2 = piVar3[0xe];
    pcVar4 = param_1;
    if ((iVar1 != 0) || (piStack_60 == NULL)) {
        if (iVar2 == 0) {
            iVar2 = *piVar3;
        }
        _printk(0x8002ce1,iVar2,"aw882xx_request_firmware","aw882xx_acf.bin");
        if (param_1[-0x1e7] != 0x5) {
            param_1[-0x1e7] = param_1[-0x1e7] + '\x01';
            msleep(1000);
            iVar2 = (*pcVar5)[0xe];
            if (iVar2 == 0) {
                iVar2 = **pcVar5;
            }
            _printk(0x80080cc,iVar2,"aw882xx_request_firmware","aw882xx_acf.bin",param_1[-0x1e7]);
            sym.aw882xx_request_firmware(param_1);
            goto code_r0x0800da74;
        }
        param_1[-0x1e7] = 0x0;
        goto code_r0x0800da74;
    }
    if (iVar2 == 0) {
        iVar2 = *piVar3;
    }
    _printk(0x8002395,iVar2,"aw882xx_request_firmware","aw882xx_acf.bin",*piStack_60);
    mutex_lock(obj.g_aw882xx_lock);
    unaff_x21 = _segment.ehdr;
    if (_segment.ehdr != NULL) {
        release_firmware();
        iVar2 = (*pcVar5)[0xe];
        if (iVar2 == 0) {
            iVar2 = **pcVar5;
        }
        _printk(0x8009024,iVar2,"aw882xx_request_firmware","aw882xx_acf.bin");
        pcVar6 = _segment.ehdr;
code_r0x0800d768:
        _segment.ehdr = pcVar6;
        mutex_unlock(obj.g_aw882xx_lock);
        unaff_x20 = param_1 + 0x88;
        mutex_lock(unaff_x20);
        iVar1 = sym.aw882xx_device_init(*(param_1 + -0x1a8),unaff_x21);
        if (iVar1 < 0) {
            iVar2 = (*pcVar5)[0xe];
            if (iVar2 == 0) {
                iVar2 = **pcVar5;
            }
            _printk(0x80043df,iVar2,"aw882xx_request_firmware");
            pcVar5 = unaff_x20;
            goto code_r0x0800da70;
        }
        unaff_x25 = param_1 + -0x1e0;
        unaff_x21 = devm_kmalloc(*(*unaff_x25 + 0x18),0xf0,0xdc0);
        piVar3 = *(*unaff_x25 + 0x18);
        if (unaff_x21 == NULL) {
            iVar2 = piVar3[0xe];
            if (iVar2 == 0) {
                iVar2 = *piVar3;
            }
            _printk(0x80080f3,iVar2,"aw882xx_dynamic_create_controls");
        }
        else {
            iVar2 = devm_kmalloc(piVar3,0x32,0xdc0);
            if (iVar2 != 0) {
                pcVar6 = param_1 + -0x200;
                snprintf(iVar2,0x32,"aw_dev_%d_prof",*pcVar6);
                *(unaff_x21 + 0x10) = iVar2;
                *(unaff_x21 + 0x28) = sym.aw882xx_profile_info.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                *(unaff_x21 + 0x30) = sym.aw882xx_profile_get.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                iVar2 = *unaff_x25;
                *unaff_x21 = 2;
                *(unaff_x21 + 0x38) = sym.aw882xx_profile_set.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                pcVar5 = devm_kmalloc(*(iVar2 + 0x18),0x32,0xdc0);
                if (pcVar5 != NULL) {
                    snprintf(pcVar5,0x32,"aw_dev_%d_switch",*pcVar6);
                    *(unaff_x21 + 0x60) = pcVar5;
                    *(unaff_x21 + 0x50) = 2;
                    *(unaff_x21 + 0x78) = sym.aw882xx_switch_info.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                    *(unaff_x21 + 0x80) = sym.aw882xx_switch_get.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                    iVar2 = *unaff_x25;
                    *(unaff_x21 + 0x88) = sym.aw882xx_switch_set.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                    iVar2 = devm_kmalloc(*(iVar2 + 0x18),0x32,0xdc0);
                    pcVar4 = pcVar5;
                    if (iVar2 != 0) {
                        snprintf(iVar2,0x32,"aw_dev_%d_monitor",*pcVar6);
                        *(unaff_x21 + 0xb0) = iVar2;
                        pcVar4 = _segment.ehdr;
                        *(unaff_x21 + 0xa0) = 2;
                        *(unaff_x21 + 200) = sym.aw882xx_monitor_info.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                        *(unaff_x21 + 0xd0) = sym.aw882xx_monitor_get.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                        *(unaff_x21 + 0xd8) = sym.aw882xx_monitor_set.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                        if (pcVar4 != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr)
                        goto code_r0x0800dab0;
                        goto code_r0x0800d8e0;
                    }
                }
            }
        }
        while( true ) {
            param_1[-0x1e7] = 0x0;
            param_1[-0x1e8] = 0x1;
            pcVar5 = unaff_x20;
code_r0x0800da70:
            mutex_unlock(unaff_x20);
            unaff_x20 = pcVar5;
code_r0x0800da74:
            iVar2 = sp_el0;
            if (*(iVar2 + 0x5e0) == iStack_58) break;
            __stack_chk_fail();
code_r0x0800dab0:
            __cfi_slowpath_diag(0xa4a1322652c64ecc,pcVar4,0x8001080);
code_r0x0800d8e0:
            (*pcVar4)(*unaff_x25,unaff_x21,3);
        }
        return;
    }
    unaff_x21 = vzalloc(*piStack_60 + 4);
    if (unaff_x21 == NULL) {
        release_firmware();
        iVar2 = (*pcVar5)[0xe];
        if (iVar2 == 0) {
            iVar2 = **pcVar5;
        }
        _printk(0x8001f34,iVar2,"aw882xx_request_firmware");
    }
    else {
        *unaff_x21 = *piStack_60;
        memcpy(unaff_x21 + 4,piStack_60[1],*piStack_60);
        release_firmware(piStack_60);
        iVar1 = sym.aw882xx_dev_parse_check_acf(unaff_x21);
        pcVar6 = unaff_x21;
        if (iVar1 == 0) goto code_r0x0800d768;
        iVar2 = (*pcVar5)[0xe];
        if (iVar2 == 0) {
            iVar2 = **pcVar5;
        }
        _printk(0x80040c6,iVar2,"aw882xx_request_firmware","aw882xx_acf.bin");
        vfree(unaff_x21);
    }
    unaff_x20 = obj.g_aw882xx_lock;
    pcVar5 = segment.ehdr;
    goto code_r0x0800da70;
}


// ===== sym.aw882xx_i2c_shutdown.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b980 (size 8) =====

void sym.aw882xx_i2c_shutdown.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xb8);
    iVar1 = (*(iVar2 + 0x48))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(iVar2 + 0x48);
    }
    _printk(0x8004092,iVar1,"aw882xx_i2c_shutdown");
    mutex_lock(iVar2 + 0x298);
    sym.aw882xx_device_stop(*(iVar2 + 0x68));
    mutex_unlock(iVar2 + 0x298);
    return;
}


// ===== sym.__typeid__ZTSFiPciE_global_addr @ 0x0800b988 (size 8) =====

ulong sym.__typeid__ZTSFiPciE_global_addr(uint *param_1,uint32_t param_2)

{
    if (7 < param_2) {
        *(param_1 + 3) = 0x302e3131;
        *param_1 = 0x312e3176;
        return 7;
    }
    return 0xfffffff4;
}


// ===== sym.aw882xx_set_dai_sysclk.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b990 (size 8) =====

ulong sym.aw882xx_set_dai_sysclk.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,ulong param_2,uint param_3)

{
    code *pcVar1;
    ulong uVar2;
    uint *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar2 = *(param_1 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8000fc0);
    }
    puVar3 = (*pcVar1)(uVar2);
    iVar4 = (*(puVar3 + 0x12))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(puVar3 + 0x12);
    }
    _printk(0x8008fbc,iVar4,"aw882xx_set_dai_sysclk",param_3);
    *puVar3 = param_3;
    return 0;
}


// ===== sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr @ 0x0800b998 (size 8) =====

ulong sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr(int64_t param_1)

{
    return *(*(param_1 + 0x18) + 0x98);
}


// ===== sym.aw882xx_hw_params.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b9a0 (size 8) =====

ulong sym.aw882xx_hw_params.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    int iVar1;
    uint uVar2;
    code *pcVar3;
    uint uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = _segment.ehdr;
    uVar9 = *(param_3 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001040);
    }
    iVar5 = (*pcVar3)(uVar9);
    iVar1 = *(param_1 + 0x3c);
    if (iVar1 == 1) {
        iVar8 = (*(iVar5 + 0x48))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(iVar5 + 0x48);
        }
        uVar6 = *(param_2 + 0x24);
        uVar2 = *(param_2 + 0x128);
        if (uVar6 == 0) {
            uVar6 = *(param_2 + 0x28);
            if (uVar6 != 0) {
                uVar7 = 0x20;
                goto code_r0x0800cda4;
            }
            uVar7 = 0;
        }
        else {
            uVar7 = 0;
code_r0x0800cda4:
            uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
            uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) | uVar7;
        }
        uVar4 = snd_pcm_format_width(uVar7);
        _printk(0x80074b7,iVar8,"aw882xx_hw_params",uVar2,uVar4);
        iVar1 = *(param_1 + 0x3c);
    }
    if (iVar1 != 0) {
        return 0;
    }
    iVar8 = (*(iVar5 + 0x48))[0xe];
    if (iVar8 == 0) {
        iVar8 = **(iVar5 + 0x48);
    }
    uVar6 = *(param_2 + 0x24);
    uVar2 = *(param_2 + 0x128);
    if (uVar6 == 0) {
        uVar6 = *(param_2 + 0x28);
        if (uVar6 == 0) {
            uVar7 = 0;
            goto code_r0x0800ce20;
        }
        uVar7 = 0x20;
    }
    else {
        uVar7 = 0;
    }
    uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) | uVar7;
code_r0x0800ce20:
    uVar4 = snd_pcm_format_width(uVar7);
    _printk(0x8006b27,iVar8,"aw882xx_hw_params",uVar2,uVar4);
    return 0;
}


// ===== sym.__typeid__ZTSFvP9aw_deviceE_global_addr @ 0x0800b9a8 (size 8) =====

void sym.__typeid__ZTSFvP9aw_deviceE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_kcontorl_set(*(param_1 + 0x88));
    return;
}


// ===== sym.aw_pid_2113_reg_force_set.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b9b0 (size 8) =====

void sym.aw_pid_2113_reg_force_set.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = (*(param_1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(param_1 + 0x40);
    }
    _printk(0x8005ab4,iVar2,"aw_pid_2113_reg_force_set");
    if (*(param_1 + 0x14) == 1) {
        pcVar3 = *(param_1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d00);
        }
        (*pcVar3)(param_1,0x62,0xffffefff,0x1000);
        pcVar3 = *(param_1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d20);
        }
        (*pcVar3)(param_1,100,0xfffffff8,4);
        pcVar3 = *(param_1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d40);
        }
        (*pcVar3)(param_1,0x65,0xfffffffc,2);
        pcVar3 = *(param_1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d60);
        }
        (*pcVar3)(param_1,0x66,0xffff3fff,0x8000);
        pcVar3 = *(param_1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d80);
        }
        (*pcVar3)(param_1,0x67,0xfffffff7,0);
        pcVar3 = *(param_1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001da0);
        }
        (*pcVar3)(param_1,0x68,0xfffffc7f,0x100);
        iVar2 = (*(param_1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(param_1 + 0x40);
        }
        uVar1 = 0x8007415;
    }
    else {
        iVar2 = (*(param_1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(param_1 + 0x40);
        }
        uVar1 = 0x8006016;
    }
    _printk(uVar1,iVar2,"aw_pid_2113_reg_force_set");
    return;
}


// ===== sym.aw882xx_codec_probe.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800b9b8 (size 8) =====

ulong sym.aw882xx_codec_probe.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001060);
    }
    iVar2 = (*pcVar1)(param_1);
    iVar4 = (*(iVar2 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar2 + 0x48);
    }
    _printk(0x8004092,iVar4,"aw882xx_codec_probe");
    iVar4 = alloc_workqueue(0x80034bd,0xe000a,1,"aw882xx");
    *(iVar2 + 0x70) = iVar4;
    if (iVar4 == 0) {
        iVar4 = (*(iVar2 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar2 + 0x48);
        }
        _printk(0x8006871,iVar4,"aw882xx_codec_probe");
        uVar3 = 0xffffffea;
    }
    else {
        *(iVar2 + 0x78) = 0xfffffffe0;
        *(iVar2 + 0x80) = iVar2 + 0x80;
        *(iVar2 + 0x88) = iVar2 + 0x80;
        *(iVar2 + 0x90) = sym.aw882xx_startup_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0xa8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x100) = 0xfffffffe0;
        *(iVar2 + 0x108) = iVar2 + 0x108;
        *(iVar2 + 0x110) = iVar2 + 0x108;
        *(iVar2 + 0x118) = sym.aw882xx_interrupt_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0x130,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x188) = 0xfffffffe0;
        *(iVar2 + 400) = iVar2 + 400;
        *(iVar2 + 0x198) = iVar2 + 400;
        *(iVar2 + 0x1a0) = sym.aw882xx_dc_prot_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0x1b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x210) = 0xfffffffe0;
        *(iVar2 + 0x218) = iVar2 + 0x218;
        *(iVar2 + 0x220) = iVar2 + 0x218;
        *(iVar2 + 0x228) = sym.aw882xx_request_firmware.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0x240,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x30) = param_1;
        *(iVar2 + 0x24) = 0;
        if (*(iVar2 + 0x10) == '\0') {
            iVar4 = (*(iVar2 + 0x48))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar2 + 0x48);
            }
            _printk(0x8004092,iVar4,"aw882xx_add_codec_controls");
            pcVar1 = _segment.ehdr;
            if (_segment.ehdr != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr) {
                __cfi_slowpath_diag(0xa4a1322652c64ecc,_segment.ehdr,0x8001260);
            }
            (*pcVar1)(*(iVar2 + 0x30),obj.aw882xx_controls,6);
            pcVar1 = _segment.ehdr;
            if (*(*(iVar2 + 0x68) + 0x310) == 1) {
                if (_segment.ehdr != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr) {
                    __cfi_slowpath_diag(0xa4a1322652c64ecc,_segment.ehdr,0x8001280);
                }
                (*pcVar1)(*(iVar2 + 0x30),obj.aw882xx_spin_control,1);
            }
        }
        sym.aw882xx_request_firmware(iVar2 + 0x210);
        sym.aw882xx_dev_init_cali_re(*(iVar2 + 0x68));
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.__typeid__ZTSFiP9aw_devicePjE_global_addr @ 0x0800b9c0 (size 8) =====

int sym.__typeid__ZTSFiP9aw_devicePjE_global_addr(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),5,&uStack_2c);
    *param_2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2113_set_volume;
    pcStack_58 = sym.aw_pid_2113_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1,5,&uStack_6c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2113_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2032_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b9c8 (size 8) =====

int sym.aw_pid_2032_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),5,&uStack_2c);
    *param_2 = (uStack_2c >> 6 & 0x3f) + (uStack_2c >> 0xc) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2032_set_volume;
    pcStack_58 = sym.aw_pid_2032_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1,5,&uStack_6c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2032_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_6c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055a_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b9d0 (size 8) =====

int sym.aw_pid_2055a_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),5,&uStack_2c);
    *param_2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2055a_set_volume;
    pcStack_58 = sym.aw_pid_2055a_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1,5,&uStack_6c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055a_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b9d8 (size 8) =====

int sym.aw_pid_2055_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),5,&uStack_2c);
    *param_2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2055_set_volume;
    pcStack_58 = sym.aw_pid_2055_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1,5,&uStack_6c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2071_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b9e0 (size 8) =====

int sym.aw_pid_2071_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),5,&uStack_2c);
    *param_2 = (uStack_2c >> 6 & 0x3f) + (uStack_2c >> 0xc) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2071_set_volume;
    pcStack_58 = sym.aw_pid_2071_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1,5,&uStack_6c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2071_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_6c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2013_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b9e8 (size 8) =====

int sym.aw_pid_2013_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),5,&uStack_2c);
    *param_2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2013_set_volume;
    pcStack_58 = sym.aw_pid_2013_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1,5,&uStack_6c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2013_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_1852_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800b9f0 (size 8) =====

int sym.aw_pid_1852_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,int *param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(param_1 + 0x88),0xc,&uStack_2c);
    *param_2 = (uStack_2c >> 8 & 0xf) + (uStack_2c >> 0xc) * 0xc;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_1852_set_volume;
    pcStack_58 = sym.aw_pid_1852_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0xc;
    uVar1 = auVar5._8_4_ + iVar4 * -0xc | iVar4 << 4;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1,0xc,&uStack_6c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_1852_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1,0xc,uStack_6c & 0xff | uVar1 << 8);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0xf) + (uVar2 >> 4 & 0xfffffff) * 0xc;
}


// ===== sym.__typeid__ZTSFiP9aw_deviceE_global_addr @ 0x0800b9f8 (size 8) =====

ulong sym.__typeid__ZTSFiP9aw_deviceE_global_addr(int64_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    code *pcVar7;
    code *pcVar8;
    code *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    pcVar7 = *(param_1 + 0x370);
    uStack_3c = 0;
    if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar7,0x8001dc0);
    }
    (*pcVar7)(param_1,0x79,&uStack_3c);
    uVar3 = uStack_3c;
    pcVar8 = *(param_1 + 0x370);
    uVar9 = uStack_3c;
    pcVar7 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
    if (pcVar8 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar8,0x8001de0);
        pcVar7 = pcVar8;
    }
    (*pcVar8)(param_1,0x7d,&uStack_3c);
    uVar2 = uStack_3c & 0xffff | uVar3;
    if (*(param_1 + 0x1c) != 1) {
        uVar2 = uStack_3c & 0xffff & uVar3;
    }
    *(param_1 + 0x14) = (uVar2 & 0x7c00) == 0;
    iVar6 = (*(param_1 + 0x40))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(param_1 + 0x40);
    }
    _printk(0x8007861,iVar6,"aw_pid_2113_frcset_check");
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_monitor_start;
    pcStack_68 = sym.aw882xx_monitor_start;
    iVar6 = sp_el0;
    iStack_78 = *(iVar6 + 0x5e0);
    iVar6 = (*(iVar4 + -0x1c0))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar4 + -0x1c0);
    }
    iVar10 = *(iVar4 + -0x178);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = pcVar7;
    uStack_50 = uVar9;
    iStack_48 = param_1;
    _printk(0x8004092,iVar6,"aw882xx_monitor_start");
    *(iVar4 + 0xd8) = 0;
    *(iVar4 + 0xf8) = 0;
    *(iVar4 + 0xe4) = 0;
    iVar6 = (*(iVar4 + -0x1c0))[0xe];
    uStack_7c = 0;
    if (iVar6 == 0) {
        iVar6 = **(iVar4 + -0x1c0);
    }
    _printk(0x8005ab4,iVar6,"aw_check_bop_status");
    iVar1 = *(iVar4 + 0x144);
    if (iVar1 == 0xff) {
        while( true ) {
            if (*(iVar4 + -0x1e8) == 1) {
                iVar6 = (*(iVar4 + -0x1c0))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(iVar4 + -0x1c0);
                }
                uVar5 = _printk(0x80064ae,iVar6,"aw882xx_monitor_start");
            }
            else {
                uVar5 = queue_delayed_work_on(0x20,*(iVar10 + 0x70),iVar4,0);
            }
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_78) break;
            __stack_chk_fail();
            pcVar7 = extraout_x8;
code_r0x08021088:
            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar7,0x8001e00);
            iVar1 = *(iVar4 + 0x144);
code_r0x08021004:
            (*pcVar7)(iVar4 + -0x200,iVar1,&uStack_7c);
            uStack_7c = uStack_7c & 0xffff & (*(iVar4 + 0x148) ^ 0xffff);
            *(iVar4 + -0x1e8) = uStack_7c == *(iVar4 + 0x14c);
            iVar6 = (*(iVar4 + -0x1c0))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + -0x1c0);
            }
            _printk(0x800403a,iVar6,"aw_check_bop_status");
        }
        return uVar5;
    }
    pcVar7 = *(iVar4 + 0x170);
    if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) goto code_r0x08021088;
    goto code_r0x08021004;
}


// ===== sym.__typeid__ZTSFiP9aw_devicejE_global_addr @ 0x0800ba00 (size 8) =====

int sym.__typeid__ZTSFiP9aw_devicejE_global_addr(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x88);
    uStack_3c = 0;
    uVar1 = param_2 % 0x30 | param_2 / 0x30 << 6;
    sym.aw882xx_i2c_read(arg1,5,&uStack_3c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2013_set_volume",param_2,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2071_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba08 (size 8) =====

int sym.aw_pid_2071_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x88);
    uStack_3c = 0;
    uVar1 = param_2 % 0x30 | param_2 / 0x30 << 6;
    sym.aw882xx_i2c_read(arg1,5,&uStack_3c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2071_set_volume",param_2,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_3c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_1852_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba10 (size 8) =====

int sym.aw_pid_1852_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x88);
    uStack_3c = 0;
    uVar1 = param_2 % 0xc | param_2 / 0xc << 4;
    sym.aw882xx_i2c_read(arg1,0xc,&uStack_3c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_1852_set_volume",param_2,uVar1);
    sym.aw882xx_i2c_write(arg1,0xc,uStack_3c & 0xff | uVar1 << 8);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0xf) + (uVar2 >> 4 & 0xfffffff) * 0xc;
}


// ===== sym.aw_pid_2032_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba18 (size 8) =====

int sym.aw_pid_2032_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x88);
    uStack_3c = 0;
    uVar1 = param_2 % 0x30 | param_2 / 0x30 << 6;
    sym.aw882xx_i2c_read(arg1,5,&uStack_3c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2032_set_volume",param_2,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_3c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba20 (size 8) =====

int sym.aw_pid_2055_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x88);
    uStack_3c = 0;
    uVar1 = param_2 % 0x30 | param_2 / 0x30 << 6;
    sym.aw882xx_i2c_read(arg1,5,&uStack_3c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055_set_volume",param_2,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055a_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba28 (size 8) =====

int sym.aw_pid_2055a_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x88);
    uStack_3c = 0;
    uVar1 = param_2 % 0x30 | param_2 / 0x30 << 6;
    sym.aw882xx_i2c_read(arg1,5,&uStack_3c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055a_set_volume",param_2,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2113_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba30 (size 8) =====

int sym.aw_pid_2113_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1 = *(param_1 + 0x88);
    uStack_3c = 0;
    uVar1 = param_2 % 0x30 | param_2 / 0x30 << 6;
    sym.aw882xx_i2c_read(arg1,5,&uStack_3c);
    iVar3 = (*(arg1 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2113_set_volume",param_2,uVar1);
    sym.aw882xx_i2c_write(arg1,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_cali_class_cali_re_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba38 (size 8) =====

int64_t sym.aw_cali_class_cali_re_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                  (ulong param_1,ulong param_2,char *param_3,int64_t param_4)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    char *pcVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    int64_t *piStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_50;
    char *pcStack_48;
    uint64_t *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puStack_40 = NULL;
    pcVar7 = param_3;
    uVar4 = sym.aw882xx_dev_get_list_head(&puStack_40);
    if (uVar4 == 0) {
        uVar10 = *puStack_40;
        iVar5 = sym.aw_cali_svc_set_devs_re_str(uVar10 - 0x3e0,param_3);
        if (iVar5 < 1) {
            iVar9 = (*(uVar10 - 0x3a0))[0xe];
            if (iVar9 == 0) {
                iVar9 = **(uVar10 - 0x3a0);
            }
            pcVar7 = "aw_cali_class_cali_re_store";
            _printk(0x8007e6b,iVar9,"aw_cali_class_cali_re_store",param_3);
            param_4 = -1;
        }
    }
    else {
        uVar10 = uVar4;
        _printk(0x8004ff8,"aw_cali_class_cali_re_store");
        param_4 = uVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_class_cali_f0_show;
    pcStack_68 = sym.aw_cali_class_cali_f0_show;
    iVar9 = sp_el0;
    iStack_78 = *(iVar9 + 0x5e0);
    piStack_90 = NULL;
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar10;
    iStack_50 = param_4;
    pcStack_48 = param_3;
    iVar5 = sym.aw882xx_dev_get_list_head(&piStack_90);
    if (iVar5 == 0) {
        iVar11 = *piStack_90;
        iVar9 = iVar11 + -0x3e0;
        iVar5 = sym.aw_cali_svc_cali_f0(iVar9,noname_1,2);
        uVar2 = str.cali_f0_cmd_failed_n._8_8_;
        uVar1 = str.cali_f0_cmd_failed_n._0_8_;
        if (iVar5 < 0) {
            iVar9 = 0x13;
            pcVar7[0x10] = 'e';
            pcVar7[0x11] = 'd';
            pcVar7[0x12] = '\n';
            pcVar7[0x13] = '\0';
            *pcVar7 = uVar1;
            *(pcVar7 + 8) = uVar2;
        }
        else {
            iVar5 = sym.aw_cali_svc_get_devs_cali_f0(iVar9,&uStack_88,4);
            if (iVar5 < 1) {
                piVar8 = *(iVar11 + -0x3a0);
                iVar9 = piVar8[0xe];
                if (iVar9 == 0) {
                    iVar9 = *piVar8;
                }
                _printk(0x80062f5,iVar9,"aw_cali_class_cali_f0_show");
                uVar1 = str.get_f0_failed__n._8_8_;
                iVar9 = 0xf;
                *pcVar7 = str.get_f0_failed__n._0_8_;
                *(pcVar7 + 8) = uVar1;
            }
            else {
                iVar6 = snprintf(pcVar7,0x1000,"%s:%d ","pri_l",uStack_88 & 0xffffffff);
                iVar9 = iVar6;
                if (iVar5 != 1) {
                    iVar6 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,"%s:%d ","pri_r",uStack_88._4_4_);
                    iVar9 = iVar9 + iVar6;
                    if (iVar5 != 2) {
                        iVar6 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,"%s:%d ","sec_l",uStack_80 & 0xffffffff);
                        iVar9 = iVar9 + iVar6;
                        if (iVar5 != 3) {
                            iVar6 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,"%s:%d ","sec_r",uStack_80._4_4_);
                            if (iVar5 != 4) goto code_r0x08016f40;
                            iVar9 = iVar9 + iVar6;
                        }
                    }
                }
                iVar5 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,0x80020f4);
                iVar9 = iVar9 + iVar5;
            }
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_f0_show");
        iVar9 = iVar5;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return iVar9;
    }
    __stack_chk_fail(iVar9);
code_r0x08016f40:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016f44);
    (*pcVar3)();
}


// ===== sym.aw_cali_class_cali_f0_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba40 (size 8) =====

int64_t sym.aw_cali_class_cali_f0_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                  (ulong param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    int64_t *piStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    piStack_30 = NULL;
    iVar2 = sym.aw882xx_dev_get_list_head(&piStack_30);
    if (iVar2 == 0) {
        param_3 = 2;
        sym.aw_cali_svc_cali_f0(*piStack_30 + -0x3e0,noname_1,2);
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_f0_store");
        param_4 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_class_time_show;
    iVar2 = snprintf(param_3,0x1000,"time: %d \n",_segment.ehdr);
    return iVar2;
}


// ===== sym.aw_cali_class_time_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba48 (size 8) =====

int64_t sym.aw_cali_class_time_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                  (ulong param_1,ulong param_2,uint64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x21;
    int64_t iVar8;
    ulong unaff_x30;
    int64_t *piStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_3c = 0;
    uVar3 = kstrtoint(param_3,0,&uStack_3c);
    if (uVar3 < 0) {
        unaff_x21 = uVar3;
        uVar6 = param_3;
        _printk(0x800773e,"aw_cali_class_time_store",param_3);
        param_4 = uVar3;
    }
    else {
        uVar6 = uStack_3c;
        if (uStack_3c < 400) {
            _printk(0x8007ea7,"aw_cali_class_time_store");
            param_4 = -0x16;
        }
        else {
            _segment.ehdr = uStack_3c;
            _printk(0x8006742,"aw_cali_class_time_store");
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_class_re_show;
    pcStack_68 = sym.aw_cali_class_re_show;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    piStack_90 = NULL;
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    uStack_50 = param_3;
    iStack_48 = param_4;
    iVar4 = sym.aw882xx_dev_get_list_head(&piStack_90);
    if (iVar4 == 0) {
        iVar8 = *piStack_90;
        iVar4 = sym.aw_cali_svc_get_devs_cali_re(iVar8 + -0x3e0,&uStack_88,4);
        if (iVar4 < 1) {
            piVar7 = *(iVar8 + -0x3a0);
            iVar8 = piVar7[0xe];
            if (iVar8 == 0) {
                iVar8 = *piVar7;
            }
            _printk(0x80062d3,iVar8,"aw_cali_class_re_show");
            iVar8 = 0;
        }
        else {
            iVar5 = snprintf(uVar6,0x1000,"%s:%d mOhms ","pri_l",uStack_88 & 0xffffffff);
            iVar8 = iVar5;
            if (iVar4 != 1) {
                iVar5 = snprintf(uVar6 + iVar8,0x1000 - iVar8,"%s:%d mOhms ","pri_r",uStack_88._4_4_);
                iVar8 = iVar8 + iVar5;
                if (iVar4 != 2) {
                    iVar5 = snprintf(uVar6 + iVar8,0x1000 - iVar8,"%s:%d mOhms ","sec_l",uStack_80 & 0xffffffff);
                    iVar8 = iVar8 + iVar5;
                    if (iVar4 != 3) {
                        iVar5 = snprintf(uVar6 + iVar8,0x1000 - iVar8,"%s:%d mOhms ","sec_r",uStack_80._4_4_);
                        if (iVar4 != 4) goto code_r0x080172d0;
                        iVar8 = iVar8 + iVar5;
                    }
                }
            }
            iVar4 = snprintf(uVar6 + iVar8,0x1000 - iVar8,0x80020f4);
            iVar8 = iVar8 + iVar4;
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_re_show");
        iVar8 = iVar4;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return iVar8;
    }
    __stack_chk_fail(iVar8);
code_r0x080172d0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80172d4);
    (*pcVar2)();
}


// ===== sym.aw_cali_class_re_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba50 (size 8) =====

void sym.aw_cali_class_re_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar3 == 0) {
        iVar6 = *piStack_50;
        iVar3 = sym.aw_cali_svc_get_devs_cali_re(iVar6 + -0x3e0,&uStack_48,4);
        if (iVar3 < 1) {
            piVar5 = *(iVar6 + -0x3a0);
            iVar6 = piVar5[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar5;
            }
            _printk(0x80062d3,iVar6,"aw_cali_class_re_show");
            iVar6 = 0;
        }
        else {
            iVar4 = snprintf(param_3,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
            iVar6 = iVar4;
            if (iVar3 != 1) {
                iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 2) {
                    iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_l",uStack_40 & 0xffffffff);
                    iVar6 = iVar6 + iVar4;
                    if (iVar3 != 3) {
                        iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                        if (iVar3 != 4) goto code_r0x080172d0;
                        iVar6 = iVar6 + iVar4;
                    }
                }
            }
            iVar3 = snprintf(param_3 + iVar6,0x1000 - iVar6,0x80020f4);
            iVar6 = iVar6 + iVar3;
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_re_show");
        iVar6 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x080172d0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80172d4);
    (*pcVar2)();
}


// ===== sym.aw_cali_class_cali_f0_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba58 (size 8) =====

void sym.aw_cali_class_cali_f0_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar noname_1 [16];
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar4 == 0) {
        iVar8 = *piStack_50;
        iVar7 = iVar8 + -0x3e0;
        iVar4 = sym.aw_cali_svc_cali_f0(iVar7,noname_1,2);
        uVar2 = str.cali_f0_cmd_failed_n._8_8_;
        uVar1 = str.cali_f0_cmd_failed_n._0_8_;
        if (iVar4 < 0) {
            iVar7 = 0x13;
            param_3[0x10] = 'e';
            param_3[0x11] = 'd';
            param_3[0x12] = '\n';
            param_3[0x13] = '\0';
            *param_3 = uVar1;
            *(param_3 + 8) = uVar2;
        }
        else {
            iVar4 = sym.aw_cali_svc_get_devs_cali_f0(iVar7,&uStack_48,4);
            if (iVar4 < 1) {
                piVar6 = *(iVar8 + -0x3a0);
                iVar7 = piVar6[0xe];
                if (iVar7 == 0) {
                    iVar7 = *piVar6;
                }
                _printk(0x80062f5,iVar7,"aw_cali_class_cali_f0_show");
                uVar1 = str.get_f0_failed__n._8_8_;
                iVar7 = 0xf;
                *param_3 = str.get_f0_failed__n._0_8_;
                *(param_3 + 8) = uVar1;
            }
            else {
                iVar5 = snprintf(param_3,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
                iVar7 = iVar5;
                if (iVar4 != 1) {
                    iVar5 = snprintf(param_3 + iVar7,0x1000 - iVar7,"%s:%d ","pri_r",uStack_48._4_4_);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 2) {
                        iVar5 = snprintf(param_3 + iVar7,0x1000 - iVar7,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                        iVar7 = iVar7 + iVar5;
                        if (iVar4 != 3) {
                            iVar5 = snprintf(param_3 + iVar7,0x1000 - iVar7,"%s:%d ","sec_r",uStack_40._4_4_);
                            if (iVar4 != 4) goto code_r0x08016f40;
                            iVar7 = iVar7 + iVar5;
                        }
                    }
                }
                iVar4 = snprintf(param_3 + iVar7,0x1000 - iVar7,0x80020f4);
                iVar7 = iVar7 + iVar4;
            }
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_f0_show");
        iVar7 = iVar4;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x08016f40:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016f44);
    (*pcVar3)();
}


// ===== sym.aw_class_re_range_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba60 (size 8) =====

void sym.aw_class_re_range_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    int64_t *piStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    piStack_60 = NULL;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    _printk(0x8002ad6,"aw_class_re_range_show");
    iVar3 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (iVar3 < 0) {
        _printk(0x8006fef,"aw_class_re_range_show");
        iVar6 = iVar3;
    }
    else {
        iVar6 = *piStack_60;
        iVar3 = sym.aw_cali_svc_get_devs_re_range(iVar6 + -0x3e0,&uStack_58);
        if (iVar3 < 1) {
            piVar5 = *(iVar6 + -0x3a0);
            iVar6 = piVar5[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar5;
            }
            _printk(0x8008a43,iVar6,"aw_class_re_range_show");
            iVar6 = -0x16;
        }
        else {
            iVar4 = snprintf(param_3,0x1000,"%s:re_min:%d mOhms re_max:%d mOhms ","pri_l",uStack_58 & 0xffffffff,
                             uStack_58._4_4_);
            iVar6 = iVar4;
            if (iVar3 != 1) {
                iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:re_min:%d mOhms re_max:%d mOhms ","pri_r",
                                 uStack_50 & 0xffffffff,uStack_50._4_4_);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 2) {
                    iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:re_min:%d mOhms re_max:%d mOhms ","sec_l",
                                     uStack_48 & 0xffffffff,uStack_48._4_4_);
                    iVar6 = iVar6 + iVar4;
                    if (iVar3 != 3) {
                        iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:re_min:%d mOhms re_max:%d mOhms ","sec_r"
                                         ,uStack_40 & 0xffffffff,uStack_40._4_4_);
                        if (iVar3 != 4) goto code_r0x0801766c;
                        iVar6 = iVar6 + iVar4;
                    }
                }
            }
            iVar3 = snprintf(param_3 + iVar6,0x1000 - iVar6,0x80020f4);
            iVar6 = iVar6 + iVar3;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x0801766c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8017670);
    (*pcVar2)();
}


// ===== sym.aw_cali_class_f0_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba68 (size 8) =====

void sym.aw_cali_class_f0_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar3 == 0) {
        iVar6 = *piStack_50;
        iVar3 = sym.aw_cali_svc_get_devs_cali_f0(iVar6 + -0x3e0,&uStack_48,4);
        if (iVar3 < 1) {
            piVar5 = *(iVar6 + -0x3a0);
            iVar6 = piVar5[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar5;
            }
            _printk(0x80062d3,iVar6,"aw_cali_class_f0_show");
            iVar6 = 0;
        }
        else {
            iVar4 = snprintf(param_3,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
            iVar6 = iVar4;
            if (iVar3 != 1) {
                iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d ","pri_r",uStack_48._4_4_);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 2) {
                    iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                    iVar6 = iVar6 + iVar4;
                    if (iVar3 != 3) {
                        iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d ","sec_r",uStack_40._4_4_);
                        if (iVar3 != 4) goto code_r0x08017494;
                        iVar6 = iVar6 + iVar4;
                    }
                }
            }
            iVar3 = snprintf(param_3 + iVar6,0x1000 - iVar6,0x80020f4);
            iVar6 = iVar6 + iVar3;
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_f0_show");
        iVar6 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x08017494:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8017498);
    (*pcVar2)();
}


// ===== sym.aw_cali_class_time_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba70 (size 8) =====

int64_t sym.aw_cali_class_time_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"time: %d \n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw_cali_class_cali_re_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800ba78 (size 8) =====

void sym.aw_cali_class_cali_re_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,ulong param_2,char *param_3)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar noname_1 [16];
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar4 == 0) {
        iVar8 = *piStack_50;
        iVar7 = iVar8 + -0x3e0;
        iVar4 = sym.aw_cali_svc_cali_re(iVar7,noname_1,1);
        uVar2 = str.cali_Re_cmd_failed_n._8_8_;
        uVar1 = str.cali_Re_cmd_failed_n._0_8_;
        if (iVar4 < 0) {
            iVar7 = 0x13;
            param_3[0x10] = 'e';
            param_3[0x11] = 'd';
            param_3[0x12] = '\n';
            param_3[0x13] = '\0';
            *param_3 = uVar1;
            *(param_3 + 8) = uVar2;
        }
        else {
            iVar4 = sym.aw_cali_svc_get_devs_cali_re(iVar7,&uStack_48,4);
            if (iVar4 < 1) {
                piVar6 = *(iVar8 + -0x3a0);
                iVar7 = piVar6[0xe];
                if (iVar7 == 0) {
                    iVar7 = *piVar6;
                }
                _printk(0x80062d3,iVar7,"aw_cali_class_cali_re_show");
                uVar1 = str.get_re_failed__n._8_8_;
                iVar7 = 0xf;
                *param_3 = str.get_re_failed__n._0_8_;
                *(param_3 + 8) = uVar1;
            }
            else {
                iVar5 = snprintf(param_3,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
                iVar7 = iVar5;
                if (iVar4 != 1) {
                    iVar5 = snprintf(param_3 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 2) {
                        iVar5 = snprintf(param_3 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_l",
                                         uStack_40 & 0xffffffff);
                        iVar7 = iVar7 + iVar5;
                        if (iVar4 != 3) {
                            iVar5 = snprintf(param_3 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                            if (iVar4 != 4) goto code_r0x08016c48;
                            iVar7 = iVar7 + iVar5;
                        }
                    }
                }
                iVar4 = snprintf(param_3 + iVar7,0x1000 - iVar7,0x80020f4);
                iVar7 = iVar7 + iVar4;
            }
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_re_show");
        iVar7 = iVar4;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x08016c48:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016c4c);
    (*pcVar3)();
}


// ===== sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr @ 0x0800ba80 (size 8) =====

void sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_i2c_write_bits(*(param_1 + 0x88),param_2,param_3,param_4);
    return;
}


// ===== sym.aw_pid_2013_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba88 (size 8) =====

uint32_t sym.aw_pid_2013_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 >> 0xe & 1) == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8009261,iVar1,"aw_pid_2013_get_irq_type");
        uVar2 = 1;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x800344c,iVar1,"aw_pid_2013_get_irq_type");
        uVar2 = uVar2 | 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8002b4a,iVar1,"aw_pid_2013_get_irq_type");
        uVar2 = uVar2 | 4;
    }
    if ((param_2 >> 1 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8006a0e,iVar1,"aw_pid_2013_get_irq_type");
        uVar2 = uVar2 | 8;
    }
    return uVar2;
}


// ===== sym.aw_pid_2113_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba90 (size 8) =====

uint32_t sym.aw_pid_2113_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 >> 0xe & 1) == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8009261,iVar1,"aw_pid_2113_get_irq_type");
        uVar2 = 1;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x800344c,iVar1,"aw_pid_2113_get_irq_type");
        uVar2 = uVar2 | 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8002b4a,iVar1,"aw_pid_2113_get_irq_type");
        uVar2 = uVar2 | 4;
    }
    if ((param_2 >> 1 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8006a0e,iVar1,"aw_pid_2113_get_irq_type");
        uVar2 = uVar2 | 8;
    }
    return uVar2;
}


// ===== sym.aw_pid_2032_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800ba98 (size 8) =====

uint32_t sym.aw_pid_2032_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 >> 0xe & 1) == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8009261,iVar1,"aw_pid_2032_get_irq_type");
        uVar2 = 1;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x800344c,iVar1,"aw_pid_2032_get_irq_type");
        uVar2 = uVar2 | 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8002b4a,iVar1,"aw_pid_2032_get_irq_type");
        uVar2 = uVar2 | 4;
    }
    if ((param_2 >> 1 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8006a0e,iVar1,"aw_pid_2032_get_irq_type");
        uVar2 = uVar2 | 8;
    }
    return uVar2;
}


// ===== sym.aw_pid_1852_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800baa0 (size 8) =====

uint32_t sym.aw_pid_1852_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 >> 0xe & 1) == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8009261,iVar1,"aw_pid_1852_get_irq_type");
        uVar2 = 1;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x800344c,iVar1,"aw_pid_1852_get_irq_type");
        uVar2 = uVar2 | 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8002b4a,iVar1,"aw_pid_1852_get_irq_type");
        uVar2 = uVar2 | 4;
    }
    if ((param_2 >> 1 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8006a0e,iVar1,"aw_pid_1852_get_irq_type");
        uVar2 = uVar2 | 8;
    }
    return uVar2;
}


// ===== sym.aw_pid_2071_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800baa8 (size 8) =====

uint32_t sym.aw_pid_2071_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 >> 0xe & 1) == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8009261,iVar1,"aw_pid_2071_get_irq_type");
        uVar2 = 1;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x800344c,iVar1,"aw_pid_2071_get_irq_type");
        uVar2 = uVar2 | 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8002b4a,iVar1,"aw_pid_2071_get_irq_type");
        uVar2 = uVar2 | 4;
    }
    if ((param_2 >> 1 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8006a0e,iVar1,"aw_pid_2071_get_irq_type");
        uVar2 = uVar2 | 8;
    }
    return uVar2;
}


// ===== sym.aw_pid_2055_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bab0 (size 8) =====

uint32_t sym.aw_pid_2055_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 >> 0xe & 1) == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8009261,iVar1,"aw_pid_2055_get_irq_type");
        uVar2 = 1;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x800344c,iVar1,"aw_pid_2055_get_irq_type");
        uVar2 = uVar2 | 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8002b4a,iVar1,"aw_pid_2055_get_irq_type");
        uVar2 = uVar2 | 4;
    }
    if ((param_2 >> 1 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8006a0e,iVar1,"aw_pid_2055_get_irq_type");
        uVar2 = uVar2 | 8;
    }
    return uVar2;
}


// ===== sym.aw_pid_2055a_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bab8 (size 8) =====

uint32_t sym.aw_pid_2055a_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(int64_t param_1,uint32_t param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    uint32_t uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 >> 0xe & 1) == 0) {
        uVar2 = 0;
    }
    else {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8009261,iVar1,"aw_pid_2055a_get_irq_type");
        uVar2 = 1;
    }
    if ((param_2 >> 0xb & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x800344c,iVar1,"aw_pid_2055a_get_irq_type");
        uVar2 = uVar2 | 2;
    }
    if ((param_2 >> 3 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8002b4a,iVar1,"aw_pid_2055a_get_irq_type");
        uVar2 = uVar2 | 4;
    }
    if ((param_2 >> 1 & 1) != 0) {
        iVar1 = (*(param_1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(param_1 + 0x40);
        }
        _printk(0x8006a0e,iVar1,"aw_pid_2055a_get_irq_type");
        uVar2 = uVar2 | 8;
    }
    return uVar2;
}


// ===== sym.__typeid__ZTSFbiE_global_addr @ 0x0800bac0 (size 8) =====

uint8_t sym.__typeid__ZTSFbiE_global_addr(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7d < param_1) {
        return 0;
    }
    if (param_1 < 0x7e) {
        return obj.aw_pid_2071_reg_access[param_1] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80206e4);
    (*pcVar1)();
}


// ===== sym.aw_pid_2013_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bac8 (size 8) =====

uint8_t sym.aw_pid_2013_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_2013_reg_access[param_1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801fb08);
    (*pcVar1)();
}


// ===== sym.aw_pid_2032_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bad0 (size 8) =====

uint8_t sym.aw_pid_2032_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7d < param_1) {
        return 0;
    }
    if (param_1 < 0x7e) {
        return obj.aw_pid_2032_reg_access[param_1] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801fdd0);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055a_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bad8 (size 8) =====

uint8_t sym.aw_pid_2055a_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_2055a_reg_access[param_1] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80200d8);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bae0 (size 8) =====

uint8_t sym.aw_pid_2055_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_2055_reg_access[param_1] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80203e0);
    (*pcVar1)();
}


// ===== sym.aw_pid_2032_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bae8 (size 8) =====

uint8_t sym.aw_pid_2032_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7d < param_1) {
        return 0;
    }
    if (param_1 < 0x7e) {
        return obj.aw_pid_2032_reg_access[param_1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801fe0c);
    (*pcVar1)();
}


// ===== sym.aw_pid_2071_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800baf0 (size 8) =====

uint8_t sym.aw_pid_2071_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7d < param_1) {
        return 0;
    }
    if (param_1 < 0x7e) {
        return obj.aw_pid_2071_reg_access[param_1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8020720);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800baf8 (size 8) =====

uint8_t sym.aw_pid_2055_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_2055_reg_access[param_1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x802041c);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055a_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bb00 (size 8) =====

uint8_t sym.aw_pid_2055a_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_2055a_reg_access[param_1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8020114);
    (*pcVar1)();
}


// ===== sym.aw_pid_1852_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bb08 (size 8) =====

uint8_t sym.aw_pid_1852_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_1852_reg_access[param_1] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801f7c4);
    (*pcVar1)();
}


// ===== sym.aw_pid_1852_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bb10 (size 8) =====

uint8_t sym.aw_pid_1852_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_1852_reg_access[param_1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801f800);
    (*pcVar1)();
}


// ===== sym.aw_pid_2113_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bb18 (size 8) =====

uint8_t sym.aw_pid_2113_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7f < param_1) {
        return 0;
    }
    if (param_1 < 0x80) {
        return obj.aw_pid_2113_reg_access[param_1] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8020a28);
    (*pcVar1)();
}


// ===== sym.aw_pid_2013_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bb20 (size 8) =====

uint8_t sym.aw_pid_2013_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7c < param_1) {
        return 0;
    }
    if (param_1 < 0x7d) {
        return obj.aw_pid_2013_reg_access[param_1] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801facc);
    (*pcVar1)();
}


// ===== sym.aw_pid_2113_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt @ 0x0800bb28 (size 8) =====

uint8_t sym.aw_pid_2113_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt(uint32_t param_1)

{
    code *pcVar1;
    
    if (0x7f < param_1) {
        return 0;
    }
    if (param_1 < 0x80) {
        return obj.aw_pid_2113_reg_access[param_1] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80209ec);
    (*pcVar1)();
}


// ===== sym.aw882xx_set_copp_en.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb30 (size 8) =====

ulong sym.aw882xx_set_copp_en.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar4 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar4,0x80013e0);
    }
    uVar2 = (*pcVar4)(param_1);
    pcVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar4 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar4,0x8001400);
    }
    iVar3 = (*pcVar4)(uVar2);
    iVar5 = (*(iVar3 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar3 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_copp_en",*(param_2 + 0x48));
    iVar1 = *(param_2 + 0x48);
    if (*(iVar3 + 8) == 0) {
        pcVar6 = (*(iVar3 + 0x48))[0xe];
        if (pcVar6 == NULL) {
            pcVar6 = **(iVar3 + 0x48);
        }
        pcVar4 = 0x8007cfd;
        pcVar7 = "aw882xx_set_copp_en";
    }
    else {
        pcVar7 = "disable";
        if (iVar1 != 0) {
            pcVar7 = "enable";
        }
        pcVar4 = obj..str.43.llvm.7716720658683118668;
        pcVar6 = "aw882xx_dsp_set_copp_module_en";
    }
    _printk(pcVar4,pcVar6,pcVar7);
    iVar5 = (*(iVar3 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar3 + 0x48);
    }
    _segment.ehdr = iVar1;
    _printk(0x8008c57,iVar5,"aw882xx_set_copp_en",iVar1);
    return 0;
}


// ===== sym.aw882xx_get_spin.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb38 (size 8) =====

int sym.aw882xx_get_spin.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001420);
    }
    uVar3 = (*pcVar1)(param_1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001440);
    }
    iVar4 = (*pcVar1)(uVar3);
    uStack_2c = 0;
    iVar2 = sym.aw882xx_spin_value_get(*(iVar4 + 0x68),&uStack_2c);
    if (iVar2 != 0) {
        iVar5 = (*(iVar4 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x48);
        }
        _printk(0x800813a,iVar5,"aw882xx_get_spin",iVar2);
        uStack_2c = 0;
    }
    *(param_2 + 0x48) = uStack_2c;
    iVar5 = (*(iVar4 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar4 + 0x48);
    }
    if (3 < uStack_2c) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800f1b4);
        (*pcVar1)();
    }
    _printk(0x80084ee,iVar5,"aw882xx_get_spin",*(obj.aw882xx_spin + uStack_2c * 8));
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar8 = __stack_chk_fail();
        *extraout_x18 = sym.aw882xx_set_spin;
        pcVar1 = _segment.ehdr;
        if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
            __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001460);
        }
        uVar3 = (*pcVar1)(auVar8._0_8_);
        pcVar1 = _segment.ehdr;
        if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001480);
        }
        iVar4 = (*pcVar1)(uVar3);
        iVar5 = (*(iVar4 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x48);
        }
        _printk(0x800885a,iVar5,"aw882xx_set_spin",*(auVar8._8_8_ + 0x48));
        uVar6 = *(auVar8._8_8_ + 0x48);
        if ((uVar6 & 0xfffffffc) == 0) {
            iVar2 = sym.aw882xx_spin_value_set(*(iVar4 + 0x68),uVar6 & 0xffffffff,*(iVar4 + 8) != 0);
            if (iVar2 != 0) {
                iVar5 = (*(iVar4 + 0x48))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar4 + 0x48);
                }
                _printk(0x8008c8b,iVar5,"aw882xx_set_spin",iVar2);
            }
        }
        else {
            piVar7 = *(*(iVar4 + 0x68) + 0x40);
            iVar4 = piVar7[0xe];
            if (iVar4 == 0) {
                iVar4 = *piVar7;
            }
            _printk(0x800798c,iVar4,"aw882xx_set_spin");
            iVar2 = -0x16;
        }
        return iVar2;
    }
    return 0;
}


// ===== sym.aw882xx_get_fade_in_time.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb40 (size 8) =====

ulong sym.aw882xx_get_fade_in_time.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_2 + 0x48) = _segment.ehdr;
    _printk(0x8004dc6,"aw882xx_get_fade_in_time");
    return 0;
}


// ===== sym.aw882xx_set_tx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb48 (size 8) =====

ulong sym.aw882xx_set_tx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x8001360);
    }
    uVar4 = (*pcVar2)(param_1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001380);
    }
    iVar5 = (*pcVar2)(uVar4);
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x800885a,iVar6,"aw882xx_set_tx_en",*(param_2 + 0x48));
    uVar1 = *(param_2 + 0x48);
    if (*(iVar5 + 8) == 0) {
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x8007cfd,iVar6,"aw882xx_set_tx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(1);
        if (iVar3 != 0) {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_set_tx_en",iVar3);
        }
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar6,"aw882xx_set_tx_en",uVar1);
    return 0;
}


// ===== sym.aw882xx_monitor_get.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb50 (size 8) =====

ulong sym.aw882xx_monitor_get.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80011e0);
    }
    uVar2 = (*pcVar1)(param_1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001200);
    }
    iVar3 = (*pcVar1)(uVar2);
    *(param_2 + 0x48) = *(*(iVar3 + 0x68) + 0x28c);
    iVar4 = (*(iVar3 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + 0x48);
    }
    _printk(0x8004a60,iVar4,"aw882xx_monitor_get");
    return 0;
}


// ===== sym.aw882xx_switch_get.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb58 (size 8) =====

ulong sym.aw882xx_switch_get.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001160);
    }
    uVar2 = (*pcVar1)(param_1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001180);
    }
    iVar3 = (*pcVar1)(uVar2);
    *(param_2 + 0x48) = *(iVar3 + 0x14);
    return 0;
}


// ===== sym.aw882xx_get_fade_out_time.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb60 (size 8) =====

ulong sym.aw882xx_get_fade_out_time.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_2 + 0x48) = _segment.ehdr;
    _printk(0x8004dc6,"aw882xx_get_fade_out_time");
    return 0;
}


// ===== sym.aw882xx_switch_set.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb68 (size 8) =====

ulong sym.aw882xx_switch_set.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t arg1;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80011a0);
    }
    uVar2 = (*pcVar1)(param_1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x80011c0);
    }
    arg1 = (*pcVar1)(uVar2);
    if (*(arg1 + 8) == 0) {
        mutex_lock(arg1 + 0x298);
        *(arg1 + 0x14) = *(param_2 + 0x48) != 0;
    }
    else {
        if (*(param_2 + 0x48) == 0) {
            cancel_delayed_work_sync(arg1 + 0x188);
            cancel_delayed_work_sync(arg1 + 0x78);
            mutex_lock(arg1 + 0x298);
            sym.aw882xx_device_stop(*(arg1 + 0x68));
            *(arg1 + 0x14) = 0;
            mutex_unlock(arg1 + 0x298);
            iVar3 = (*(arg1 + 0x48))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x48);
            }
            _printk(0x80065fb,iVar3,"aw882xx_switch_set");
            return 0;
        }
        cancel_delayed_work_sync(arg1 + 0x78);
        mutex_lock(arg1 + 0x298);
        *(arg1 + 0x14) = 1;
        if (*(arg1 + 0x28) == '\x01') {
            sym.aw882xx_start_pa(arg1);
        }
        else {
            iVar3 = (*(arg1 + 0x48))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x48);
            }
            _printk(0x80055b6,iVar3,"aw882xx_switch_set");
        }
    }
    mutex_unlock(arg1 + 0x298);
    return 0;
}


// ===== sym.aw882xx_set_spin.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb70 (size 8) =====

int sym.aw882xx_set_spin.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001460);
    }
    uVar3 = (*pcVar1)(param_1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001480);
    }
    iVar4 = (*pcVar1)(uVar3);
    iVar5 = (*(iVar4 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar4 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_spin",*(param_2 + 0x48));
    if ((*(param_2 + 0x48) & 0xfffffffc) == 0) {
        iVar2 = sym.aw882xx_spin_value_set(*(iVar4 + 0x68),*(param_2 + 0x48) & 0xffffffff,*(iVar4 + 8) != 0);
        if (iVar2 != 0) {
            iVar5 = (*(iVar4 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x48);
            }
            _printk(0x8008c8b,iVar5,"aw882xx_set_spin",iVar2);
        }
    }
    else {
        piVar6 = *(*(iVar4 + 0x68) + 0x40);
        iVar4 = piVar6[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar6;
        }
        _printk(0x800798c,iVar4,"aw882xx_set_spin");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.aw882xx_get_copp_en.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb78 (size 8) =====

ulong sym.aw882xx_get_copp_en.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar1 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar1,0x80013a0);
    }
    uVar2 = (*pcVar1)(param_1);
    pcVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar1 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar1,0x80013c0);
    }
    iVar3 = (*pcVar1)(uVar2);
    *(param_2 + 0x48) = _segment.ehdr;
    iVar4 = (*(iVar3 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + 0x48);
    }
    _printk(0x800796c,iVar4,"aw882xx_get_copp_en");
    return 0;
}


// ===== sym.aw882xx_set_rx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb80 (size 8) =====

ulong sym.aw882xx_set_rx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x80012e0);
    }
    uVar4 = (*pcVar2)(param_1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001300);
    }
    iVar5 = (*pcVar2)(uVar4);
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x800885a,iVar6,"aw882xx_set_rx_en",*(param_2 + 0x48));
    uVar1 = *(param_2 + 0x48);
    if (*(iVar5 + 8) == 0) {
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x8007cfd,iVar6,"aw882xx_set_rx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(0);
        if (iVar3 != 0) {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_set_rx_en",iVar3);
        }
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar6,"aw882xx_set_rx_en",uVar1);
    return 0;
}


// ===== sym.aw882xx_set_fade_out_time.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb88 (size 8) =====

ulong sym.aw882xx_set_fade_out_time.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x78) + 4) < *(param_2 + 0x48)) {
        _printk(0x80055ea,"aw882xx_set_fade_out_time");
    }
    else {
        _segment.ehdr = *(param_2 + 0x48);
        _printk(0x8004dc6,"aw882xx_set_fade_out_time");
    }
    return 0;
}


// ===== sym.aw882xx_set_fade_in_time.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb90 (size 8) =====

ulong sym.aw882xx_set_fade_in_time.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x78) + 4) < *(param_2 + 0x48)) {
        _printk(0x80055ea,"aw882xx_set_fade_in_time");
    }
    else {
        _segment.ehdr = *(param_2 + 0x48);
        _printk(0x8004dc6,"aw882xx_set_fade_in_time");
    }
    return 0;
}


// ===== sym.aw882xx_get_tx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bb98 (size 8) =====

ulong sym.aw882xx_get_tx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x8001320);
    }
    uVar4 = (*pcVar2)(param_1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001340);
    }
    iVar5 = (*pcVar2)(uVar4);
    if (*(iVar5 + 8) == 0) {
        *(param_2 + 0x48) = _segment.ehdr;
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x80023c5,iVar6,"aw882xx_get_tx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_get_afe_module_en(1);
        if (iVar3 == 0) {
            *(param_2 + 0x48) = 0;
        }
        else {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_get_tx_en",iVar3);
            *(param_2 + 0x48) = 0;
        }
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x8004731,iVar6,"aw882xx_get_tx_en",*(param_2 + 0x48));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_set_tx_en;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x8001360);
    }
    uVar4 = (*pcVar2)(auVar8._0_8_);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001380);
    }
    iVar7 = (*pcVar2)(uVar4);
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_tx_en",*(auVar8._8_8_ + 0x48));
    uVar1 = *(auVar8._8_8_ + 0x48);
    if (*(iVar7 + 8) == 0) {
        iVar5 = (*(iVar7 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar7 + 0x48);
        }
        _printk(0x8007cfd,iVar5,"aw882xx_set_tx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(1);
        if (iVar3 != 0) {
            iVar5 = (*(iVar7 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar7 + 0x48);
            }
            _printk(0x80040ff,iVar5,"aw882xx_set_tx_en",iVar3);
        }
    }
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar5,"aw882xx_set_tx_en",uVar1);
    return 0;
}


// ===== sym.aw882xx_spksw_gpio_get.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bba0 (size 8) =====

ulong sym.aw882xx_spksw_gpio_get.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    gpio_to_desc(*(iVar2 + 0x20));
    iVar1 = gpiod_get_raw_value_cansleep();
    _dev_info(*(iVar2 + 0x48),"spksw level cached = %d, actual = %d\n",*(iVar2 + 0x24),iVar1);
    if (iVar1 < 0) {
        *(param_2 + 0x48) = *(iVar2 + 0x24);
    }
    else {
        *(param_2 + 0x48) = iVar1;
        *(iVar2 + 0x24) = iVar1;
    }
    return 0;
}


// ===== sym.aw882xx_spksw_gpio_put.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bba8 (size 8) =====

ulong sym.aw882xx_spksw_gpio_put.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_2 + 0x48);
    iVar3 = *(*(*(param_1 + 0x80) + 0x18) + 0x98);
    _dev_info(*(iVar3 + 0x48),"spksw = %d\n",iVar1);
    uVar2 = gpio_to_desc(*(iVar3 + 0x20));
    gpiod_set_raw_value_cansleep(uVar2,iVar1 != 0);
    return 0;
}


// ===== sym.aw882xx_profile_get.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bbb0 (size 8) =====

ulong sym.aw882xx_profile_get.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80010e0);
    }
    iVar2 = (*pcVar1)(param_1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001100);
    }
    iVar3 = (*pcVar1)(iVar2);
    *(param_2 + 0x48) = *(*(iVar3 + 0x68) + 0x29);
    iVar4 = (*(iVar2 + 0x18))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar2 + 0x18);
    }
    _printk(0x8002845,iVar4,"aw882xx_profile_get",*(*(iVar3 + 0x68) + 0x29));
    return 0;
}


// ===== sym.aw882xx_monitor_set.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bbb8 (size 8) =====

ulong sym.aw882xx_monitor_set.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001220);
    }
    uVar3 = (*pcVar2)(param_1);
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001240);
    }
    iVar4 = (*pcVar2)(uVar3);
    iVar5 = *(iVar4 + 0x68);
    iVar1 = *(param_2 + 0x48);
    iVar4 = (*(iVar5 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar5 + 0x40);
    }
    _printk(0x800354b,iVar4,"aw882xx_monitor_set",iVar1);
    if ((*(iVar5 + 0x28c) != iVar1) && (*(iVar5 + 0x28c) = iVar1, iVar1 != 0)) {
        sym.aw882xx_monitor_start(iVar5 + 0x200);
    }
    return 0;
}


// ===== sym.aw882xx_profile_set.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bbc0 (size 8) =====

ulong sym.aw882xx_profile_set.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001120);
    }
    iVar4 = (*pcVar2)(param_1);
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001140);
    }
    iVar5 = (*pcVar2)(iVar4);
    if (*(iVar5 + 0x13) == '\0') {
        iVar5 = (*(iVar4 + 0x18))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x18);
        }
        uVar6 = 0x8004a3e;
code_r0x0800de18:
        _printk(uVar6,iVar5,"aw882xx_profile_set");
    }
    else {
        iVar3 = sym.aw882xx_dev_check_profile_index(*(iVar5 + 0x68),*(param_2 + 0x48));
        if (iVar3 == 0) {
            if (*(param_2 + 0x48) == *(*(iVar5 + 0x68) + 0x29)) {
                iVar5 = (*(iVar4 + 0x18))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar4 + 0x18);
                }
                uVar6 = 0x8005cc1;
                goto code_r0x0800de18;
            }
            mutex_lock(iVar5 + 0x298);
            sym.aw882xx_dev_set_profile_index(*(iVar5 + 0x68),*(param_2 + 0x48));
            if ((*(iVar5 + 8) != 0) && (*(iVar5 + 0x14) != '\0')) {
                sym.aw882xx_dev_prof_update(*(iVar5 + 0x68),*(iVar5 + 0x11) != '\0');
            }
            mutex_unlock(iVar5 + 0x298);
            iVar5 = (*(iVar4 + 0x18))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x18);
            }
            uVar1 = *(param_2 + 0x48);
            uVar6 = 0x8008c27;
        }
        else {
            iVar5 = (*(iVar4 + 0x18))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x18);
            }
            uVar1 = *(param_2 + 0x48);
            uVar6 = 0x8007cd5;
        }
        _printk(uVar6,iVar5,"aw882xx_profile_set",uVar1);
    }
    return 0;
}


// ===== sym.aw882xx_get_rx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bbc8 (size 8) =====

ulong sym.aw882xx_get_rx_en.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,int64_t param_2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x80012a0);
    }
    uVar4 = (*pcVar2)(param_1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x80012c0);
    }
    iVar5 = (*pcVar2)(uVar4);
    if (*(iVar5 + 8) == 0) {
        *(param_2 + 0x48) = _segment.ehdr;
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x80023c5,iVar6,"aw882xx_get_rx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_get_afe_module_en(0);
        if (iVar3 != 0) {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_get_rx_en",iVar3);
        }
        *(param_2 + 0x48) = 0;
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x8006dd8,iVar6,"aw882xx_get_rx_en",*(param_2 + 0x48));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_set_rx_en;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x80012e0);
    }
    uVar4 = (*pcVar2)(auVar8._0_8_);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001300);
    }
    iVar7 = (*pcVar2)(uVar4);
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_rx_en",*(auVar8._8_8_ + 0x48));
    uVar1 = *(auVar8._8_8_ + 0x48);
    if (*(iVar7 + 8) == 0) {
        iVar5 = (*(iVar7 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar7 + 0x48);
        }
        _printk(0x8007cfd,iVar5,"aw882xx_set_rx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(0);
        if (iVar3 != 0) {
            iVar5 = (*(iVar7 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar7 + 0x48);
            }
            _printk(0x80040ff,iVar5,"aw882xx_set_rx_en",iVar3);
        }
    }
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar5,"aw882xx_set_rx_en",uVar1);
    return 0;
}


// ===== sym.aw_cali_misc_unlocked_ioctl.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bbd0 (size 8) =====

ulong sym.aw_cali_misc_unlocked_ioctl.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                (int64_t param_1,uint32_t param_2,int64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 0xff00) == 0x6100) {
        iVar1 = sym.aw_cali_misc_ops(*(param_1 + 0xd8),param_2,param_3);
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = 0xffffffffffffffea;
        }
    }
    else {
        _printk(0x8007782,"aw_cali_misc_unlocked_ioctl");
        uVar2 = 0xffffffffffffffea;
    }
    return uVar2;
}


// ===== sym.aw_cali_misc_compat_ioctl.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bbd8 (size 8) =====

ulong sym.aw_cali_misc_compat_ioctl.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                (int64_t param_1,uint32_t param_2,int64_t param_3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 & 0xff00) == 0x6100) {
        iVar1 = sym.aw_cali_misc_ops(*(param_1 + 0xd8),param_2,param_3);
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = 0xffffffffffffffea;
        }
    }
    else {
        _printk(0x8007782,"aw_cali_misc_compat_ioctl");
        uVar2 = 0xffffffffffffffea;
    }
    return uVar2;
}


// ===== sym.aw882xx_algo_ver_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bbe0 (size 8) =====

void sym.aw882xx_algo_ver_show.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    iVar6 = sym.aw882xx_get_algo_version(*(*(param_1 + 0x98) + 0x68),&uStack_78);
    uVar4 = str.read_algo_version_failed__n._16_8_;
    uVar3 = str.read_algo_version_failed__n._8_8_;
    if (iVar6 < 0) {
        iVar7 = 0x1a;
        param_3[0x17] = 'd';
        uVar2 = str.read_algo_version_failed__n._0_8_;
        param_3[0x18] = '!';
        param_3[0x19] = '\n';
        param_3[0x1a] = '\0';
        *(param_3 + 8) = uVar3;
        *(param_3 + 0x10) = uVar4;
        *param_3 = uVar2;
    }
    else {
        iVar6 = snprintf(param_3,0x1000,0x80090b2,&uStack_78);
        iVar7 = iVar6;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar9 = __stack_chk_fail(iVar7);
        puVar8 = auVar9._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar9._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x80111e0);
        (*pcVar5)();
    }
    return;
}


// ===== sym.aw_cali_attr_show_re.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bbe8 (size 8) =====

int64_t sym.aw_cali_attr_show_re.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                  (int64_t param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar6 = *(*(param_1 + 0x98) + 0x68);
    iVar3 = sym.aw_cali_svc_get_devs_cali_re(iVar6,&uStack_48,4);
    if (iVar3 < 1) {
        piVar5 = *(iVar6 + 0x40);
        iVar6 = piVar5[0xe];
        if (iVar6 == 0) {
            iVar6 = *piVar5;
        }
        _printk(0x80062d3,iVar6,"aw_cali_attr_show_re");
        iVar6 = 0;
    }
    else {
        iVar4 = snprintf(param_3,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
        iVar6 = iVar4;
        if (iVar3 != 1) {
            iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
            iVar6 = iVar6 + iVar4;
            if (iVar3 != 2) {
                iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_l",uStack_40 & 0xffffffff);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 3) {
                    iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                    if (iVar3 != 4) goto code_r0x08016830;
                    iVar6 = iVar6 + iVar4;
                }
            }
        }
    }
    iVar3 = snprintf(param_3 + iVar6,0x1000 - iVar6,0x80020f4);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar6 + iVar3;
    }
    __stack_chk_fail();
code_r0x08016830:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8016834);
    (*pcVar2)();
}


// ===== sym.aw882xx_reg_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bbf0 (size 8) =====

uint64_t sym.aw882xx_reg_show.fc2486704268e85b1991da4eb2e27198.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    uint64_t uVar10;
    char *pcVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    code *pcStack_100;
    int64_t iStack_f8;
    code *pcStack_e8;
    uint uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    char *pcStack_90;
    int64_t iStack_88;
    code *pcStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x98);
    uStack_6c = 0;
    pcVar9 = *(*(iVar7 + 0x68) + 0x3a8);
    pcVar11 = param_3;
    if (8 < (pcVar9 + -0x800b8c0 >> 3 | pcVar9 << 0x3d)) {
        pcVar11 = 0x8001500;
        __cfi_slowpath_diag(0x2b3a43e29242445,pcVar9,0x8001500);
    }
    iVar1 = (*pcVar9)();
    if (iVar1 < 1) {
        uVar10 = 0;
    }
    else {
        uVar12 = 0;
        uVar10 = 0;
        do {
            pcVar9 = *(*(iVar7 + 0x68) + 0x3a0);
            if (0xd < (pcVar9 + -0x800bac0 >> 3 | pcVar9 << 0x3d)) {
                pcVar11 = 0x8001520;
                pcStack_78 = pcVar9;
                __cfi_slowpath_diag(0xb956711316021ea3,pcVar9,0x8001520);
                pcVar9 = pcStack_78;
            }
            uVar3 = (*pcVar9)(uVar12);
            if ((uVar3 & 1) != 0) {
                sym.aw882xx_i2c_read(iVar7,uVar12,&uStack_6c);
                param_4 = uVar12;
                pcVar11 = "reg:0x%02x=0x%04x\n";
                iVar2 = snprintf(param_3 + uVar10,0x1000 - uVar10,"reg:0x%02x=0x%04x\n",param_4,uStack_6c);
                uVar10 = uVar10 + iVar2;
            }
            uVar12 = uVar12 + 1 & 0xff;
        } while (uVar12 < iVar1);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar4 = __stack_chk_fail();
        pcVar9 = &uStack_b0;
        *extraout_x18 = sym.aw882xx_reg_store;
        pcStack_98 = sym.aw882xx_reg_store;
        iVar8 = sp_el0;
        iStack_a8 = *(iVar8 + 0x5e0);
        iVar8 = *(iVar4 + 0x98);
        uVar3 = &uStack_b0 | 4;
        uStack_b0 = 0;
        puStack_a0 = &stack0xffffffffffffffa0;
        pcStack_90 = param_3;
        iStack_88 = iVar7;
        iVar1 = sscanf(pcVar11,"%x %x",&uStack_b0,uVar3);
        if (iVar1 == 2) {
            pcVar9 = uStack_b0 >> 0x20;
            sym.aw882xx_i2c_write(iVar8,uStack_b0 & 0xffffffff,pcVar9);
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_a8) {
            iVar4 = __stack_chk_fail();
            *extraout_x18_00 = sym.aw882xx_rw_show;
            pcStack_c8 = sym.aw882xx_rw_show;
            iVar7 = sp_el0;
            iStack_d8 = *(iVar7 + 0x5e0);
            iVar7 = *(iVar4 + 0x98);
            uStack_dc = 0;
            pcVar6 = *(*(iVar7 + 0x68) + 0x3a0);
            pcVar11 = pcVar9;
            ppuStack_d0 = &puStack_a0;
            iStack_c0 = iVar8;
            uStack_b8 = param_4;
            if (0xd < (pcVar6 + -0x800bac0 >> 3 | pcVar6 << 0x3d)) {
                pcVar11 = 0x8001540;
                pcStack_e8 = pcVar6;
                __cfi_slowpath_diag(0xb956711316021ea3,pcVar6);
                pcVar6 = pcStack_e8;
            }
            uVar5 = (*pcVar6)(*(iVar7 + 0x2a));
            if ((uVar5 & 1) == 0) {
                uVar5 = 0;
            }
            else {
                sym.aw882xx_i2c_read(iVar7,*(iVar7 + 0x2a),&uStack_dc);
                uVar3 = *(iVar7 + 0x2a);
                pcVar11 = "reg:0x%02x=0x%04x\n";
                iVar1 = snprintf(pcVar9,0x1000,"reg:0x%02x=0x%04x\n",uVar3,uStack_dc);
                uVar5 = iVar1;
            }
            iVar8 = sp_el0;
            if (*(iVar8 + 0x5e0) == iStack_d8) {
                return uVar5;
            }
            iVar4 = __stack_chk_fail(uVar5);
            *extraout_x18_01 = sym.aw882xx_rw_store;
            pcStack_118 = sym.aw882xx_rw_store;
            iVar8 = sp_el0;
            iStack_128 = *(iVar8 + 0x5e0);
            iVar8 = *(iVar4 + 0x98);
            uStack_130 = 0;
            pppuStack_120 = &ppuStack_d0;
            uStack_110 = uVar10;
            pcStack_100 = pcVar9;
            iStack_f8 = iVar7;
            iVar1 = sscanf(pcVar11,"%x %x",&uStack_130,&uStack_130 | 4);
            if (iVar1 == 2) {
                *(iVar8 + 0x2a) = uStack_130;
                pcVar11 = *(*(iVar8 + 0x68) + 0x3a0);
                if (0xd < (pcVar11 + -0x800bac0 >> 3 | pcVar11 << 0x3d)) goto code_r0x080105c0;
                uVar10 = (*pcVar11)();
                while( true ) {
                    if ((uVar10 & 1) != 0) {
                        sym.aw882xx_i2c_write(iVar8,uStack_130 & 0xffffffff,uStack_130 >> 0x20);
                    }
code_r0x08010588:
                    iVar7 = sp_el0;
                    if (*(iVar7 + 0x5e0) == iStack_128) break;
                    __stack_chk_fail();
code_r0x080105c0:
                    __cfi_slowpath_diag(0xb956711316021ea3,pcVar11,0x8001560);
                    uVar10 = (*pcVar11)(uStack_130 & 0xffffffff);
                }
                return uVar3;
            }
            iVar1 = sscanf(pcVar11,0x80074fd,&uStack_130);
            if (iVar1 != 1) goto code_r0x08010588;
            *(iVar8 + 0x2a) = uStack_130;
            goto code_r0x08010588;
        }
        return param_4;
    }
    return uVar10;
}


// ===== sym.aw882xx_awrw_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bbf8 (size 8) =====

int64_t sym.aw882xx_awrw_show.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uchar *arg3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1;
    uint64_t arg4;
    uchar *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x98);
    if (*(arg1 + 0x50) == '\x01') {
        uVar1 = *(arg1 + 0x54) * 2;
        arg4 = uVar1;
        arg3 = __kmalloc(uVar1,0xcc0);
        if (arg3 == NULL) {
            iVar4 = (*(arg1 + 0x48))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(arg1 + 0x48);
            }
            _printk(0x8002488,iVar4,"aw882xx_awrw_show");
            iVar2 = -0x16;
        }
        else {
            iVar2 = sym.aw882xx_i2c_reads(arg1,*(arg1 + 0x58),arg3,arg4);
            if (iVar2 < 0) {
                iVar2 = -0xe;
            }
            else {
                iVar4 = (*(arg1 + 0x48))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1 + 0x48);
                }
                _printk(0x8004452,iVar4,"aw882xx_awrw_show",*(arg1 + 0x58),*(arg1 + 0x54));
                if (uVar1 < 1) {
                    iVar2 = 0;
                }
                else {
                    iVar2 = 0;
                    puVar5 = arg3;
                    do {
                        iVar3 = snprintf(param_3 + iVar2,0x1000 - iVar2,"0x%02x,",*puVar5);
                        iVar4 = (*(arg1 + 0x48))[0xe];
                        if (iVar4 == 0) {
                            iVar4 = **(arg1 + 0x48);
                        }
                        iVar2 = iVar3 + iVar2;
                        _printk(0x8008545,iVar4,"aw882xx_awrw_show",*puVar5);
                        arg4 = arg4 - 1;
                        puVar5 = puVar5 + 1;
                    } while (arg4 != 0);
                }
            }
            kfree(arg3);
        }
        iVar4 = iVar2;
        *(arg1 + 0x50) = 0;
    }
    else {
        iVar4 = (*(arg1 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x48);
        }
        _printk(0x80058e0,iVar4,"aw882xx_awrw_show");
        iVar4 = -0x16;
    }
    return iVar4;
}


// ===== sym.aw_cali_attr_f0_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bc00 (size 8) =====

void sym.aw_cali_attr_f0_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt
               (uchar param_1 [16],int64_t param_2,ulong param_3,char *param_4)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar7 = *(*(param_2 + 0x98) + 0x68);
    iVar4 = sym.aw_cali_svc_cali_f0(iVar7,param_1,2);
    uVar2 = str.cali_f0_cmd_failed_n._8_8_;
    uVar1 = str.cali_f0_cmd_failed_n._0_8_;
    if (iVar4 < 0) {
        iVar7 = 0x13;
        param_4[0x10] = 'e';
        param_4[0x11] = 'd';
        param_4[0x12] = '\n';
        param_4[0x13] = '\0';
        *param_4 = uVar1;
        *(param_4 + 8) = uVar2;
    }
    else {
        iVar4 = sym.aw_cali_svc_get_devs_cali_f0(iVar7,&uStack_48,4);
        if (iVar4 < 1) {
            iVar6 = (*(iVar7 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar7 + 0x40);
            }
            _printk(0x80062f5,iVar6,"aw_cali_attr_f0_show");
            uVar1 = str.get_f0_failed__n._8_8_;
            iVar7 = 0xf;
            *param_4 = str.get_f0_failed__n._0_8_;
            *(param_4 + 8) = uVar1;
        }
        else {
            iVar5 = snprintf(param_4,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
            iVar7 = iVar5;
            if (iVar4 != 1) {
                iVar5 = snprintf(param_4 + iVar7,0x1000 - iVar7,"%s:%d ","pri_r",uStack_48._4_4_);
                iVar7 = iVar7 + iVar5;
                if (iVar4 != 2) {
                    iVar5 = snprintf(param_4 + iVar7,0x1000 - iVar7,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 3) {
                        iVar5 = snprintf(param_4 + iVar7,0x1000 - iVar7,"%s:%d ","sec_r",uStack_40._4_4_);
                        if (iVar4 != 4) goto code_r0x0801665c;
                        iVar7 = iVar7 + iVar5;
                    }
                }
            }
            iVar4 = snprintf(param_4 + iVar7,0x1000 - iVar7,0x80020f4);
            iVar7 = iVar7 + iVar4;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x0801665c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016660);
    (*pcVar3)();
}


// ===== sym.aw882xx_dbg_prof_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc08 (size 8) =====

int64_t sym.aw882xx_dbg_prof_show.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000," %d \n",*(*(param_1 + 0x98) + 0x13));
    return iVar1;
}


// ===== sym.aw882xx_print_dbg_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc10 (size 8) =====

int64_t sym.aw882xx_print_dbg_show.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"g_print_dbg : %d\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw882xx_rw_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc18 (size 8) =====

uint64_t sym.aw882xx_rw_show.fc2486704268e85b1991da4eb2e27198.cfi_jt
                   (int64_t param_1,ulong param_2,code *param_3,uint64_t param_4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    char *pcVar6;
    ulong unaff_x30;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    uStack_2c = 0;
    pcVar4 = *(*(iVar5 + 0x68) + 0x3a0);
    pcVar6 = param_3;
    if (0xd < (pcVar4 + -0x800bac0 >> 3 | pcVar4 << 0x3d)) {
        pcVar6 = 0x8001540;
        __cfi_slowpath_diag(0xb956711316021ea3,pcVar4);
    }
    uVar2 = (*pcVar4)(*(iVar5 + 0x2a));
    if ((uVar2 & 1) == 0) {
        uVar2 = 0;
    }
    else {
        sym.aw882xx_i2c_read(iVar5,*(iVar5 + 0x2a),&uStack_2c);
        param_4 = *(iVar5 + 0x2a);
        pcVar6 = "reg:0x%02x=0x%04x\n";
        iVar1 = snprintf(param_3,0x1000,"reg:0x%02x=0x%04x\n",param_4,uStack_2c);
        uVar2 = iVar1;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.aw882xx_rw_store;
    pcStack_68 = sym.aw882xx_rw_store;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar3 + 0x98);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iVar1 = sscanf(pcVar6,"%x %x",&uStack_80,&uStack_80 | 4);
    if (iVar1 == 2) {
        *(iVar5 + 0x2a) = uStack_80;
        pcVar6 = *(*(iVar5 + 0x68) + 0x3a0);
        if (0xd < (pcVar6 + -0x800bac0 >> 3 | pcVar6 << 0x3d)) goto code_r0x080105c0;
        uVar2 = (*pcVar6)();
        while( true ) {
            if ((uVar2 & 1) != 0) {
                sym.aw882xx_i2c_write(iVar5,uStack_80 & 0xffffffff,uStack_80 >> 0x20);
            }
code_r0x08010588:
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_78) break;
            __stack_chk_fail();
code_r0x080105c0:
            __cfi_slowpath_diag(0xb956711316021ea3,pcVar6,0x8001560);
            uVar2 = (*pcVar6)(uStack_80 & 0xffffffff);
        }
        return param_4;
    }
    iVar1 = sscanf(pcVar6,0x80074fd,&uStack_80);
    if (iVar1 != 1) goto code_r0x08010588;
    *(iVar5 + 0x2a) = uStack_80;
    goto code_r0x08010588;
}


// ===== sym.aw882xx_drv_ver_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc20 (size 8) =====

int64_t sym.aw882xx_drv_ver_show.fc2486704268e85b1991da4eb2e27198.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"driver_ver: %s \n","v1.11.0");
    return iVar1;
}


// ===== sym.aw_cali_attr_re_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bc28 (size 8) =====

void sym.aw_cali_attr_re_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt
               (uchar param_1 [16],int64_t param_2,ulong param_3,char *param_4)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar7 = *(*(param_2 + 0x98) + 0x68);
    iVar4 = sym.aw_cali_svc_cali_re(iVar7,param_1,1);
    uVar2 = str.cali_Re_cmd_failed_n._8_8_;
    uVar1 = str.cali_Re_cmd_failed_n._0_8_;
    if (iVar4 < 0) {
        iVar7 = 0x13;
        param_4[0x10] = 'e';
        param_4[0x11] = 'd';
        param_4[0x12] = '\n';
        param_4[0x13] = '\0';
        *param_4 = uVar1;
        *(param_4 + 8) = uVar2;
    }
    else {
        iVar4 = sym.aw_cali_svc_get_devs_cali_re(iVar7,&uStack_48,4);
        if (iVar4 < 1) {
            iVar6 = (*(iVar7 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar7 + 0x40);
            }
            _printk(0x80062d3,iVar6,"aw_cali_attr_re_show");
            iVar7 = 0xe;
            uVar1 = CONCAT71(str.get_re_failed_n._8_7_,str.get_re_failed_n[7]);
            *param_4 = CONCAT17(str.get_re_failed_n[7],str.get_re_failed_n._0_7_);
            *(param_4 + 7) = uVar1;
        }
        else {
            iVar5 = snprintf(param_4,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
            iVar7 = iVar5;
            if (iVar4 != 1) {
                iVar5 = snprintf(param_4 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
                iVar7 = iVar7 + iVar5;
                if (iVar4 != 2) {
                    iVar5 = snprintf(param_4 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_l",uStack_40 & 0xffffffff);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 3) {
                        iVar5 = snprintf(param_4 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                        if (iVar4 != 4) goto code_r0x08016280;
                        iVar7 = iVar7 + iVar5;
                    }
                }
            }
            iVar4 = snprintf(param_4 + iVar7,0x1000 - iVar7,0x80020f4);
            iVar7 = iVar7 + iVar4;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x08016280:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016284);
    (*pcVar3)();
}


// ===== sym.aw882xx_fade_step_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc30 (size 8) =====

int64_t sym.aw882xx_fade_step_show.fc2486704268e85b1991da4eb2e27198.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"step: %d \n",*(*(*(param_1 + 0x98) + 0x68) + 0x30));
    return iVar1;
}


// ===== sym.aw_cali_attr_show_f0.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bc38 (size 8) =====

void sym.aw_cali_attr_show_f0.288a340436054ec7e6b38d7b2cf50090.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar6 = *(*(param_1 + 0x98) + 0x68);
    iVar3 = sym.aw_cali_svc_get_devs_cali_f0(iVar6,&uStack_48,4);
    if (iVar3 < 1) {
        piVar5 = *(iVar6 + 0x40);
        iVar6 = piVar5[0xe];
        if (iVar6 == 0) {
            iVar6 = *piVar5;
        }
        _printk(0x80062f5,iVar6,"aw_cali_attr_show_f0");
        iVar6 = 0;
    }
    else {
        iVar4 = snprintf(param_3,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
        iVar6 = iVar4;
        if (iVar3 != 1) {
            iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d ","pri_r",uStack_48._4_4_);
            iVar6 = iVar6 + iVar4;
            if (iVar3 != 2) {
                iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 3) {
                    iVar4 = snprintf(param_3 + iVar6,0x1000 - iVar6,"%s:%d ","sec_r",uStack_40._4_4_);
                    if (iVar3 != 4) goto code_r0x080169c0;
                    iVar6 = iVar6 + iVar4;
                }
            }
        }
        iVar3 = snprintf(param_3 + iVar6,0x1000 - iVar6,0x80020f4);
        iVar6 = iVar6 + iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x080169c0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80169c4);
    (*pcVar2)();
}


// ===== sym.aw_monitor_show.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt @ 0x0800bc40 (size 8) =====

int64_t sym.aw_monitor_show.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"monitor enable: %d\n",*(*(*(param_1 + 0x98) + 0x68) + 0x28c));
    return iVar1;
}


// ===== sym.aw882xx_dsp_re_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc48 (size 8) =====

int64_t sym.aw882xx_dsp_re_show.fc2486704268e85b1991da4eb2e27198.cfi_jt(int64_t param_1,ulong param_2,char *param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_2c = 0;
    pcVar6 = param_3;
    iVar4 = sym.aw882xx_dsp_read_cali_re(*(*(param_1 + 0x98) + 0x68),&uStack_2c);
    uVar3 = str.read_dsp_re_failed__n._0_8_;
    if (iVar4 == 0) {
        pcVar6 = "%d \n";
        iVar4 = snprintf(param_3,0x1000,"%d \n",uStack_2c);
        iVar5 = iVar4;
    }
    else {
        iVar5 = 0x14;
        uVar2 = CONCAT35(str.read_dsp_re_failed__n._13_3_,str.read_dsp_re_failed__n._8_5_);
        *(param_3 + 0xd) = CONCAT53(str.read_dsp_re_failed__n._16_5_,str.read_dsp_re_failed__n._13_3_);
        *param_3 = uVar3;
        *(param_3 + 8) = uVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar5 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.aw882xx_sync_flag_show;
    iVar4 = snprintf(pcVar6,0x1000,"sync flag : %d\n",*(*(iVar5 + 0x98) + 0x11));
    return iVar4;
}


// ===== sym.aw_cali_attr_time_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bc50 (size 8) =====

int64_t sym.aw_cali_attr_time_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(ulong param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"time: %d \n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw_re_range_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bc58 (size 8) =====

int64_t sym.aw_re_range_show.288a340436054ec7e6b38d7b2cf50090.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x98) + 0x68);
    uVar1 = *(iVar3 + 0x34);
    iVar2 = snprintf(param_3,0x1000,"re_min value: [%d] mOhms\n",*(iVar3 + 0x38));
    iVar3 = iVar2;
    iVar2 = snprintf(param_3 + iVar3,0x1000 - iVar3,"re_max value: [%d] mOhms\n",uVar1);
    return iVar3 + iVar2;
}


// ===== sym.aw882xx_sync_flag_show.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc60 (size 8) =====

int64_t sym.aw882xx_sync_flag_show.fc2486704268e85b1991da4eb2e27198.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(param_3,0x1000,"sync flag : %d\n",*(*(param_1 + 0x98) + 0x11));
    return iVar1;
}


// ===== sym.aw_cali_attr_f0_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bc68 (size 8) =====

ulong sym.aw_cali_attr_f0_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                (uchar param_1 [16],int64_t param_2,ulong param_3,ulong param_4,ulong param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw_cali_svc_cali_f0(*(*(param_2 + 0x98) + 0x68),param_1,2);
    return param_5;
}


// ===== sym.aw882xx_awrw_store.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc70 (size 8) =====

uint64_t sym.aw882xx_awrw_store.fc2486704268e85b1991da4eb2e27198.cfi_jt
                   (code *param_1,ulong param_2,uchar *param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uchar *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    code *pcVar9;
    uint64_t uVar10;
    int64_t unaff_x26;
    ulong unaff_x30;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    int aiStack_70 [2];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if (0x17 < param_4) {
        unaff_x26 = *(param_1 + 0x98);
        aiStack_70[0] = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        iVar3 = sscanf(param_3,"0x%02x 0x%02x 0x%02x 0x%02x 0x%02x",&uStack_80,&uStack_80 | 4,&uStack_78,
                       &uStack_78 + 4,aiStack_70);
        if (iVar3 == 5) {
            param_1 = *(*(unaff_x26 + 0x68) + 0x3a8);
            if (8 < (param_1 + -0x800b8c0 >> 3 | param_1 << 0x3d)) goto code_r0x08010bb4;
            goto code_r0x08010880;
        }
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        uVar4 = 0x8007500;
        pcVar8 = "aw882xx_awrw_parse_buf";
        goto code_r0x0801094c;
    }
    iVar6 = *(param_1 + 0x70);
    if (iVar6 == 0) {
        iVar6 = *param_1;
    }
    _printk(0x8004128,iVar6,"aw882xx_awrw_store");
    iVar6 = *(param_1 + 0x70);
    if (iVar6 == 0) {
        iVar6 = *param_1;
    }
    _printk(0x8007211,iVar6,"aw882xx_awrw_store",param_3);
code_r0x08010a00:
    do {
        param_4 = 0xffffffffffffffea;
code_r0x08010a04:
        while( true ) {
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_68) {
                return param_4;
            }
            __stack_chk_fail();
code_r0x08010bb4:
            __cfi_slowpath_diag(0x2b3a43e29242445,param_1,0x8001580);
code_r0x08010880:
            iVar3 = (*param_1)();
            if ((uStack_80._4_4_ != 1) || (uStack_78 != 2)) {
                iVar6 = (*(unaff_x26 + 0x48))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(unaff_x26 + 0x48);
                }
                _printk(0x8002d1c,iVar6,"aw882xx_awrw_data_check");
                goto code_r0x08010a00;
            }
            if (iVar3 <= aiStack_70[0]) {
                iVar6 = (*(unaff_x26 + 0x48))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(unaff_x26 + 0x48);
                }
                _printk(0x800590f,iVar6,"aw882xx_awrw_data_check",aiStack_70[0],iVar3);
                goto code_r0x08010a00;
            }
            *(unaff_x26 + 0x54) = uStack_78._4_4_;
            *(unaff_x26 + 0x58) = aiStack_70[0];
            if (uStack_80 != 1) break;
            *(unaff_x26 + 0x50) = 1;
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x80056af,iVar6,"aw882xx_awrw_parse_buf");
        }
        if (uStack_80 != 0) {
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x80028d4,iVar6,"aw882xx_awrw_parse_buf",uStack_80 & 0xffffffff);
            goto code_r0x08010a00;
        }
        uStack_84 = 0;
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        _printk(0x8006e0a,iVar6,"aw882xx_awrw_write");
        if (param_4 + -0x19 < *(unaff_x26 + 0x54) * 10 + -1) {
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x8002912,iVar6,"aw882xx_awrw_write");
            goto code_r0x08010a00;
        }
        uVar2 = *(unaff_x26 + 0x54) * 2;
        pcVar9 = uVar2 | 1;
        puVar5 = __kmalloc(uVar2 | 1,0xcc0);
        param_1 = pcVar9;
        if (puVar5 == NULL) {
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            uVar4 = 0x80035b6;
            pcVar8 = "aw882xx_awrw_write";
code_r0x0801094c:
            _printk(uVar4,iVar6,pcVar8);
            goto code_r0x08010a00;
        }
        uVar1 = *(unaff_x26 + 0x58);
        *puVar5 = uVar1;
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        _printk(0x8008199,iVar6,"aw882xx_awrw_write",uVar1 & 0xff);
        if (0 < uVar2) {
            param_1 = param_3 + 0x19;
            iVar6 = 0;
            uVar10 = 0;
            do {
                sscanf(param_1 + (iVar6 >> 0x20),"0x%02x",&uStack_84);
                puVar5[uVar10 + 1] = uStack_84;
                iVar7 = (*(unaff_x26 + 0x48))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(unaff_x26 + 0x48);
                }
                _printk(0x80035dd,iVar7,"aw882xx_awrw_write",uVar10 & 0xffffffff,uStack_84 & 0xff);
                uVar10 = uVar10 + 1;
                iVar6 = iVar6 + 0x500000000;
            } while (uVar2 != uVar10);
        }
        iVar3 = i2c_transfer_buffer_flags(*(unaff_x26 + 0x40),puVar5,pcVar9,0);
        param_3 = puVar5;
        if (-1 < iVar3) {
            kfree(puVar5);
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x800318d,iVar6,"aw882xx_awrw_write");
            goto code_r0x08010a04;
        }
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        _printk(0x8004e55,iVar6,"aw882xx_awrw_write");
        kfree(puVar5);
    } while( true );
}


// ===== sym.aw882xx_print_dbg_store.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc78 (size 8) =====

int64_t sym.aw882xx_print_dbg_store.fc2486704268e85b1991da4eb2e27198.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    iVar1 = kstrtouint(param_3,0,obj.g_print_dbg);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        piVar2 = *(iVar3 + 0x48);
        iVar3 = piVar2[0xe];
        _segment.ehdr = _segment.ehdr != 0;
        if (iVar3 == 0) {
            iVar3 = *piVar2;
        }
        _printk(0x8007d4e,iVar3,"aw882xx_print_dbg_store");
    }
    return param_4;
}


// ===== sym.aw882xx_dbg_prof_store.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc80 (size 8) =====

int64_t sym.aw882xx_dbg_prof_store.fc2486704268e85b1991da4eb2e27198.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    ulong uVar1;
    ulong uVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x98);
    uStack_30 = 0;
    iVar3 = sscanf(param_3,0x8001f80,&uStack_30);
    if (iVar3 == 1) {
        *(iVar8 + 0x13) = uStack_30 != 0;
    }
    piVar7 = *(iVar8 + 0x48);
    iVar8 = piVar7[0xe];
    if (iVar8 == 0) {
        iVar8 = *piVar7;
    }
    pcVar5 = "aw882xx_dbg_prof_store";
    _printk(0x80024c6,iVar8,"aw882xx_dbg_prof_store",uStack_30 & 0xffffffff);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dsp_re_show;
    pcStack_48 = sym.aw882xx_dsp_re_show;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_5c = 0;
    pcVar6 = pcVar5;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = param_4;
    iVar3 = sym.aw882xx_dsp_read_cali_re(*(*(iVar4 + 0x98) + 0x68),&uStack_5c);
    uVar2 = str.read_dsp_re_failed__n._0_8_;
    if (iVar3 == 0) {
        pcVar6 = "%d \n";
        iVar3 = snprintf(pcVar5,0x1000,"%d \n",uStack_5c);
        iVar8 = iVar3;
    }
    else {
        iVar8 = 0x14;
        uVar1 = CONCAT35(str.read_dsp_re_failed__n._13_3_,str.read_dsp_re_failed__n._8_5_);
        *(pcVar5 + 0xd) = CONCAT53(str.read_dsp_re_failed__n._16_5_,str.read_dsp_re_failed__n._13_3_);
        *pcVar5 = uVar2;
        *(pcVar5 + 8) = uVar1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar8 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.aw882xx_sync_flag_show;
    iVar3 = snprintf(pcVar6,0x1000,"sync flag : %d\n",*(*(iVar8 + 0x98) + 0x11));
    return iVar3;
}


// ===== sym.aw_monitor_store.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt @ 0x0800bc88 (size 8) =====

uint64_t sym.aw_monitor_store.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt
                   (int64_t param_1,ulong param_2,uint32_t *param_3,uint64_t param_4)

{
    uint64_t *arg1;
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong uVar6;
    char *pcVar7;
    char *pcVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint32_t uStack_94;
    uint32_t *puStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    uStack_2c = 0;
    iVar11 = *(*(param_1 + 0x98) + 0x68);
    pcVar7 = param_3;
    uVar10 = param_4;
    if (param_4 != 0) {
        pcVar7 = &uStack_2c;
        iVar2 = kstrtouint(param_3,0);
        if (iVar2 < 0) {
            param_4 = iVar2;
        }
        else {
            iVar4 = (*(iVar11 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar11 + 0x40);
            }
            uVar10 = uStack_2c;
            pcVar7 = "aw_monitor_store";
            _printk(0x8003873,iVar4);
            if ((*(iVar11 + 0x28c) != uStack_2c) && (*(iVar11 + 0x28c) = uStack_2c, uStack_2c != 0)) {
                sym.aw882xx_monitor_start(iVar11 + 0x200);
            }
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.aw_monitor_update_store;
    pcStack_78 = sym.aw_monitor_update_store;
    iVar11 = sp_el0;
    iStack_88 = *(iVar11 + 0x5e0);
    uStack_94 = 0;
    iVar11 = *(*(iVar4 + 0x98) + 0x68);
    pcVar8 = pcVar7;
    puStack_80 = &stack0xffffffffffffffe0;
    if (uVar10 != 0) {
        pcVar8 = &uStack_94;
        iVar2 = kstrtouint(pcVar7,0);
        if (iVar2 < 0) {
            uVar10 = iVar2;
        }
        else {
            iVar4 = (*(iVar11 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar11 + 0x40);
            }
            pcVar8 = "aw_monitor_update_store";
            _printk(0x80096fb,iVar4,"aw_monitor_update_store",uStack_94);
            if (uStack_94 != 0) {
                arg1 = iVar11 + 0x200;
                iVar4 = (*(iVar11 + 0x40))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(iVar11 + 0x40);
                }
                _printk(0x8004092,iVar4,"aw882xx_monitor_stop");
                if ((*arg1 & 1) != 0) {
                    cancel_delayed_work_sync(arg1);
                }
                *(iVar11 + 0x288) = 0;
                if (*(iVar11 + 0x2c0) != 0) {
                    devm_kfree(*(iVar11 + 0x40));
                    *(iVar11 + 0x2c0) = 0;
                }
                if (*(iVar11 + 0x2d0) != 0) {
                    devm_kfree(*(iVar11 + 0x40));
                }
                *(iVar11 + 0x2c8) = 0;
                *(iVar11 + 0x2d0) = 0;
                *(iVar11 + 0x2b8) = 0;
                *(iVar11 + 0x2c0) = 0;
                *(iVar11 + 0x2a8) = 0;
                *(iVar11 + 0x2b0) = 0;
                *(iVar11 + 0x298) = 0;
                *(iVar11 + 0x2a0) = 0;
                *(iVar11 + 0x288) = 0;
                *(iVar11 + 0x290) = 0;
                puStack_90 = NULL;
                iVar2 = request_firmware(&puStack_90,iVar11 + 0x50,*(iVar11 + 0x40));
                piVar9 = *(iVar11 + 0x40);
                if (iVar2 < 0) {
                    iVar4 = piVar9[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar9;
                    }
                    pcVar8 = "aw_monitor_real_time_update_monitor";
                    _printk(0x80027d6,iVar4,"aw_monitor_real_time_update_monitor",iVar11 + 0x50);
                    release_firmware(puStack_90);
                    uVar10 = iVar2;
                }
                else {
                    puVar5 = devm_kmalloc(piVar9,*puStack_90 + 4,0xdc0);
                    puVar1 = puStack_90;
                    if (puVar5 == NULL) {
                        iVar4 = (*(iVar11 + 0x40))[0xe];
                        if (iVar4 == 0) {
                            iVar4 = **(iVar11 + 0x40);
                        }
                        pcVar8 = "aw_monitor_real_time_update_monitor";
                        _printk(0x80027fb,iVar4);
                        release_firmware(puStack_90);
                    }
                    else {
                        uVar3 = *puStack_90;
                        *puVar5 = uVar3;
                        memcpy(puVar5 + 1,*(puStack_90 + 2),*puStack_90);
                        release_firmware(puVar1);
                        pcVar8 = uVar3;
                        iVar2 = sym.aw882xx_monitor_parse_fw(arg1,puVar5 + 1,uVar3);
                        piVar9 = *(iVar11 + 0x40);
                        if (iVar2 < 0) {
                            iVar4 = piVar9[0xe];
                            if (iVar4 == 0) {
                                iVar4 = *piVar9;
                            }
                            pcVar8 = "aw_monitor_real_time_update_monitor";
                            _printk(0x8006a68,iVar4);
                            devm_kfree(*(iVar11 + 0x40),puVar5);
                            uVar10 = iVar2;
                            goto code_r0x080228c8;
                        }
                        devm_kfree(piVar9,puVar5);
                    }
                    sym.aw882xx_monitor_start(arg1);
                }
            }
        }
    }
code_r0x080228c8:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_88) {
        return uVar10;
    }
    auVar13 = __stack_chk_fail();
    iVar4 = auVar13._8_8_;
    iVar11 = auVar13._0_8_;
    *extraout_x18_00 = sym.aw_dev_set_channal_mode;
    pcVar12 = *(iVar11 + 0x378);
    if (pcVar12 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar12,0x8001ee0);
    }
    if (pcVar8 < 4) {
        uVar3 = (*pcVar12)(iVar11,*(iVar4 + 0x14),*(iVar4 + 0x18),*(iVar4 + (pcVar8 & 0xffffffff) * 4 + 4));
        if (uVar3 < 0) {
            iVar4 = (*(iVar11 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar11 + 0x40);
            }
            uVar6 = 0x8005c7e;
        }
        else {
            pcVar12 = *(iVar11 + 0x378);
            if (pcVar12 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar12,0x8001f00);
            }
            uVar3 = (*pcVar12)(iVar11,*(iVar4 + 0x24),*(iVar4 + 0x28),*(iVar4 + (pcVar8 & 0xffffffff) * 4 + 6));
            piVar9 = *(iVar11 + 0x40);
            iVar4 = piVar9[0xe];
            if (-1 < uVar3) {
                if (iVar4 == 0) {
                    iVar4 = *piVar9;
                }
                _printk(0x800301a,iVar4,"aw_dev_set_channal_mode");
                return 0;
            }
            if (iVar4 == 0) {
                iVar4 = *piVar9;
            }
            uVar6 = 0x8009722;
        }
        _printk(uVar6,iVar4,"aw_dev_set_channal_mode");
        return uVar3;
    }
    //WARNING: Does not return
    pcVar12 = SoftwareBreakpoint(0x5512,0x8022c18);
    (*pcVar12)();
}


// ===== sym.aw882xx_sync_flag_store.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc90 (size 8) =====

int64_t sym.aw882xx_sync_flag_store.fc2486704268e85b1991da4eb2e27198.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    pcVar3 = &uStack_2c;
    iVar5 = *(param_1 + 0x98);
    uStack_2c = 0;
    iVar1 = kstrtouint(param_3,0,pcVar3);
    if (iVar1 < 0) {
        param_4 = iVar1;
    }
    else {
        piVar4 = *(iVar5 + 0x48);
        iVar2 = piVar4[0xe];
        uStack_2c = uStack_2c != 0;
        if (iVar2 == 0) {
            iVar2 = *piVar4;
        }
        pcVar3 = "aw882xx_sync_flag_store";
        _printk(0x8006e58,iVar2,"aw882xx_sync_flag_store");
        *(iVar5 + 0x11) = uStack_2c;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return param_4;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_print_dbg_show;
    iVar1 = snprintf(pcVar3,0x1000,"g_print_dbg : %d\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw882xx_fade_step_store.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bc98 (size 8) =====

int64_t sym.aw882xx_fade_step_store.fc2486704268e85b1991da4eb2e27198.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    uStack_30 = 0;
    iVar1 = sscanf(param_3,0x8001f80,&uStack_30);
    if (iVar1 == 1) {
        if (*(*(iVar5 + 0x68) + 0x1cc) < uStack_30) {
            iVar3 = (*(iVar5 + 0x48))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(iVar5 + 0x48);
            }
            uVar2 = 0x8008d3b;
            goto code_r0x08010d00;
        }
        *(*(iVar5 + 0x68) + 0x30) = uStack_30;
    }
    iVar3 = (*(iVar5 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(iVar5 + 0x48);
    }
    uVar2 = 0x80081bd;
code_r0x08010d00:
    pcVar4 = "aw882xx_fade_step_store";
    _printk(uVar2,iVar3,"aw882xx_fade_step_store",uStack_30);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dbg_prof_show;
    iVar1 = snprintf(pcVar4,0x1000," %d \n",*(*(iVar5 + 0x98) + 0x13));
    return iVar1;
}


// ===== sym.aw_cali_attr_time_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bca0 (size 8) =====

uint64_t sym.aw_cali_attr_time_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                   (int64_t param_1,ulong param_2,uint64_t param_3,uint64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    char *arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(*(param_1 + 0x98) + 0x68);
    iVar1 = kstrtoint(param_3,0,&uStack_3c);
    if (iVar1 < 0) {
        iVar2 = (*(iVar3 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(iVar3 + 0x40);
        }
        arg2 = "aw_cali_attr_time_store";
        _printk(0x8002657,iVar2,"aw_cali_attr_time_store",param_3);
        param_4 = iVar1;
    }
    else {
        param_3 = uStack_3c;
        if (uStack_3c < 400) {
            iVar2 = (*(iVar3 + 0x40))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(iVar3 + 0x40);
            }
            arg2 = "aw_cali_attr_time_store";
            _printk(0x800267e,iVar2);
            param_4 = 0xffffffffffffffea;
        }
        else {
            iVar2 = (*(iVar3 + 0x40))[0xe];
            _segment.ehdr = uStack_3c;
            if (iVar2 == 0) {
                iVar2 = **(iVar3 + 0x40);
            }
            arg2 = "aw_cali_attr_time_store";
            _printk(0x8004508,iVar2);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_attr_store;
    iVar3 = *(*(iVar3 + 0x98) + 0x68);
    iVar1 = sym.aw_cali_svc_get_cmd_form_str(iVar3,arg2);
    if (-1 < iVar1) {
        if (iVar1 == 3) {
            sym.aw_cali_svc_cali_f0(iVar3,noname_1,2);
            return param_3;
        }
        if (iVar1 == 2) {
            sym.aw_cali_svc_cali_re(iVar3,noname_1,1);
            return param_3;
        }
        if (iVar1 == 1) {
            iVar1 = sym.aw_cali_svc_cali_re(iVar3,noname_1,3);
            if (iVar1 != 0) {
                return param_3;
            }
            sym.aw_cali_svc_cali_f0(iVar3,noname_1_00,3);
            return param_3;
        }
    }
    iVar2 = (*(iVar3 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(iVar3 + 0x40);
    }
    _printk(0x80048f3,iVar2,"aw_cali_attr_store",arg2);
    return 0xffffffffffffffff;
}


// ===== sym.aw882xx_rw_store.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bca8 (size 8) =====

ulong sym.aw882xx_rw_store.fc2486704268e85b1991da4eb2e27198.cfi_jt
                (int64_t param_1,ulong param_2,code *param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(param_1 + 0x98);
    uStack_40 = 0;
    iVar2 = sscanf(param_3,"%x %x",&uStack_40,&uStack_40 | 4);
    if (iVar2 == 2) {
        *(iVar4 + 0x2a) = uStack_40;
        param_3 = *(*(iVar4 + 0x68) + 0x3a0);
        if (0xd < (param_3 + -0x800bac0 >> 3 | param_3 << 0x3d)) goto code_r0x080105c0;
        uVar3 = (*param_3)();
        while( true ) {
            if ((uVar3 & 1) != 0) {
                sym.aw882xx_i2c_write(iVar4,uStack_40 & 0xffffffff,uStack_40 >> 0x20);
            }
code_r0x08010588:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x080105c0:
            __cfi_slowpath_diag(0xb956711316021ea3,param_3,0x8001560);
            uVar3 = (*param_3)(uStack_40 & 0xffffffff);
        }
        return param_4;
    }
    iVar2 = sscanf(param_3,0x80074fd,&uStack_40);
    if (iVar2 != 1) goto code_r0x08010588;
    *(iVar4 + 0x2a) = uStack_40;
    goto code_r0x08010588;
}


// ===== sym.aw_cali_attr_re_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bcb0 (size 8) =====

ulong sym.aw_cali_attr_re_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                (int64_t param_1,ulong param_2,int64_t param_3,ulong param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(param_1 + 0x98) + 0x68);
    iVar1 = sym.aw_cali_svc_set_devs_re_str(iVar3,param_3);
    if (iVar1 < 1) {
        piVar2 = *(iVar3 + 0x40);
        iVar3 = piVar2[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar2;
        }
        _printk(0x8007e6b,iVar3,"aw_cali_attr_re_store",param_3);
        param_4 = 0xffffffffffffffff;
    }
    return param_4;
}


// ===== sym.aw882xx_reg_store.fc2486704268e85b1991da4eb2e27198.cfi_jt @ 0x0800bcb8 (size 8) =====

uint64_t sym.aw882xx_reg_store.fc2486704268e85b1991da4eb2e27198.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    code *arg3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong unaff_x30;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    uint64_t uStack_38;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    arg3 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x98);
    uVar4 = &uStack_30 | 4;
    uStack_30 = 0;
    iVar1 = sscanf(param_3,"%x %x",&uStack_30,uVar4);
    if (iVar1 == 2) {
        arg3 = uStack_30 >> 0x20;
        sym.aw882xx_i2c_write(iVar7,uStack_30 & 0xffffffff,arg3);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_rw_show;
    pcStack_48 = sym.aw882xx_rw_show;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar2 + 0x98);
    uStack_5c = 0;
    pcVar5 = *(*(iVar6 + 0x68) + 0x3a0);
    pcVar8 = arg3;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = iVar7;
    uStack_38 = param_4;
    if (0xd < (pcVar5 + -0x800bac0 >> 3 | pcVar5 << 0x3d)) {
        pcVar8 = 0x8001540;
        __cfi_slowpath_diag(0xb956711316021ea3,pcVar5);
    }
    uVar3 = (*pcVar5)(*(iVar6 + 0x2a));
    if ((uVar3 & 1) == 0) {
        uVar3 = 0;
    }
    else {
        sym.aw882xx_i2c_read(iVar6,*(iVar6 + 0x2a),&uStack_5c);
        uVar4 = *(iVar6 + 0x2a);
        pcVar8 = "reg:0x%02x=0x%04x\n";
        iVar1 = snprintf(arg3,0x1000,"reg:0x%02x=0x%04x\n",uVar4,uStack_5c);
        uVar3 = iVar1;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    iVar6 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.aw882xx_rw_store;
    pcStack_98 = sym.aw882xx_rw_store;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar6 + 0x98);
    uStack_b0 = 0;
    ppuStack_a0 = &puStack_50;
    iVar1 = sscanf(pcVar8,"%x %x",&uStack_b0,&uStack_b0 | 4);
    if (iVar1 == 2) {
        *(iVar7 + 0x2a) = uStack_b0;
        pcVar8 = *(*(iVar7 + 0x68) + 0x3a0);
        if (0xd < (pcVar8 + -0x800bac0 >> 3 | pcVar8 << 0x3d)) goto code_r0x080105c0;
        uVar3 = (*pcVar8)();
        while( true ) {
            if ((uVar3 & 1) != 0) {
                sym.aw882xx_i2c_write(iVar7,uStack_b0 & 0xffffffff,uStack_b0 >> 0x20);
            }
code_r0x08010588:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_a8) break;
            __stack_chk_fail();
code_r0x080105c0:
            __cfi_slowpath_diag(0xb956711316021ea3,pcVar8,0x8001560);
            uVar3 = (*pcVar8)(uStack_b0 & 0xffffffff);
        }
        return uVar4;
    }
    iVar1 = sscanf(pcVar8,0x80074fd,&uStack_b0);
    if (iVar1 != 1) goto code_r0x08010588;
    *(iVar7 + 0x2a) = uStack_b0;
    goto code_r0x08010588;
}


// ===== sym.aw_cali_attr_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt @ 0x0800bcc0 (size 8) =====

ulong sym.aw_cali_attr_store.288a340436054ec7e6b38d7b2cf50090.cfi_jt
                (int64_t param_1,ulong param_2,int64_t param_3,ulong param_4)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar noname_1_00 [16];
    
    *in_x18 = unaff_x30;
    arg1 = *(*(param_1 + 0x98) + 0x68);
    iVar1 = sym.aw_cali_svc_get_cmd_form_str(arg1,param_3);
    if (-1 < iVar1) {
        if (iVar1 == 3) {
            sym.aw_cali_svc_cali_f0(arg1,noname_1,2);
            return param_4;
        }
        if (iVar1 == 2) {
            sym.aw_cali_svc_cali_re(arg1,noname_1,1);
            return param_4;
        }
        if (iVar1 == 1) {
            iVar1 = sym.aw_cali_svc_cali_re(arg1,noname_1,3);
            if (iVar1 != 0) {
                return param_4;
            }
            sym.aw_cali_svc_cali_f0(arg1,noname_1_00,3);
            return param_4;
        }
    }
    iVar2 = (*(arg1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x40);
    }
    _printk(0x80048f3,iVar2,"aw_cali_attr_store",param_3);
    return 0xffffffffffffffff;
}


// ===== sym.aw_monitor_update_store.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt @ 0x0800bcc8 (size 8) =====

uint64_t sym.aw_monitor_update_store.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt
                   (int64_t param_1,ulong param_2,int *param_3,uint64_t param_4)

{
    uint64_t *arg1;
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    int iStack_64;
    uint32_t *puStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iStack_64 = 0;
    iVar10 = *(*(param_1 + 0x98) + 0x68);
    pcVar7 = param_3;
    if (param_4 != 0) {
        pcVar7 = &iStack_64;
        iVar2 = kstrtouint(param_3,0);
        if (iVar2 < 0) {
            param_4 = iVar2;
        }
        else {
            iVar6 = (*(iVar10 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar10 + 0x40);
            }
            pcVar7 = "aw_monitor_update_store";
            _printk(0x80096fb,iVar6,"aw_monitor_update_store",iStack_64);
            if (iStack_64 != 0) {
                arg1 = iVar10 + 0x200;
                iVar6 = (*(iVar10 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(iVar10 + 0x40);
                }
                _printk(0x8004092,iVar6,"aw882xx_monitor_stop");
                if ((*arg1 & 1) != 0) {
                    cancel_delayed_work_sync(arg1);
                }
                *(iVar10 + 0x288) = 0;
                if (*(iVar10 + 0x2c0) != 0) {
                    devm_kfree(*(iVar10 + 0x40));
                    *(iVar10 + 0x2c0) = 0;
                }
                if (*(iVar10 + 0x2d0) != 0) {
                    devm_kfree(*(iVar10 + 0x40));
                }
                *(iVar10 + 0x2c8) = 0;
                *(iVar10 + 0x2d0) = 0;
                *(iVar10 + 0x2b8) = 0;
                *(iVar10 + 0x2c0) = 0;
                *(iVar10 + 0x2a8) = 0;
                *(iVar10 + 0x2b0) = 0;
                *(iVar10 + 0x298) = 0;
                *(iVar10 + 0x2a0) = 0;
                *(iVar10 + 0x288) = 0;
                *(iVar10 + 0x290) = 0;
                puStack_60 = NULL;
                iVar2 = request_firmware(&puStack_60,iVar10 + 0x50,*(iVar10 + 0x40));
                piVar8 = *(iVar10 + 0x40);
                if (iVar2 < 0) {
                    iVar6 = piVar8[0xe];
                    if (iVar6 == 0) {
                        iVar6 = *piVar8;
                    }
                    pcVar7 = "aw_monitor_real_time_update_monitor";
                    _printk(0x80027d6,iVar6,"aw_monitor_real_time_update_monitor",iVar10 + 0x50);
                    release_firmware(puStack_60);
                    param_4 = iVar2;
                }
                else {
                    puVar4 = devm_kmalloc(piVar8,*puStack_60 + 4,0xdc0);
                    puVar1 = puStack_60;
                    if (puVar4 == NULL) {
                        iVar6 = (*(iVar10 + 0x40))[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **(iVar10 + 0x40);
                        }
                        pcVar7 = "aw_monitor_real_time_update_monitor";
                        _printk(0x80027fb,iVar6);
                        release_firmware(puStack_60);
                    }
                    else {
                        uVar3 = *puStack_60;
                        *puVar4 = uVar3;
                        memcpy(puVar4 + 1,*(puStack_60 + 2),*puStack_60);
                        release_firmware(puVar1);
                        pcVar7 = uVar3;
                        iVar2 = sym.aw882xx_monitor_parse_fw(arg1,puVar4 + 1,uVar3);
                        piVar8 = *(iVar10 + 0x40);
                        if (iVar2 < 0) {
                            iVar6 = piVar8[0xe];
                            if (iVar6 == 0) {
                                iVar6 = *piVar8;
                            }
                            pcVar7 = "aw_monitor_real_time_update_monitor";
                            _printk(0x8006a68,iVar6);
                            devm_kfree(*(iVar10 + 0x40),puVar4);
                            param_4 = iVar2;
                            goto code_r0x080228c8;
                        }
                        devm_kfree(piVar8,puVar4);
                    }
                    sym.aw882xx_monitor_start(arg1);
                }
            }
        }
    }
code_r0x080228c8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return param_4;
    }
    auVar11 = __stack_chk_fail();
    iVar6 = auVar11._8_8_;
    iVar10 = auVar11._0_8_;
    *extraout_x18 = sym.aw_dev_set_channal_mode;
    pcVar9 = *(iVar10 + 0x378);
    if (pcVar9 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar9,0x8001ee0);
    }
    if (pcVar7 < 4) {
        uVar3 = (*pcVar9)(iVar10,*(iVar6 + 0x14),*(iVar6 + 0x18),*(iVar6 + (pcVar7 & 0xffffffff) * 4 + 4));
        if (uVar3 < 0) {
            iVar6 = (*(iVar10 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar10 + 0x40);
            }
            uVar5 = 0x8005c7e;
        }
        else {
            pcVar9 = *(iVar10 + 0x378);
            if (pcVar9 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar9,0x8001f00);
            }
            uVar3 = (*pcVar9)(iVar10,*(iVar6 + 0x24),*(iVar6 + 0x28),*(iVar6 + (pcVar7 & 0xffffffff) * 4 + 6));
            piVar8 = *(iVar10 + 0x40);
            iVar6 = piVar8[0xe];
            if (-1 < uVar3) {
                if (iVar6 == 0) {
                    iVar6 = *piVar8;
                }
                _printk(0x800301a,iVar6,"aw_dev_set_channal_mode");
                return 0;
            }
            if (iVar6 == 0) {
                iVar6 = *piVar8;
            }
            uVar5 = 0x8009722;
        }
        _printk(uVar5,iVar6,"aw_dev_set_channal_mode");
        return uVar3;
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8022c18);
    (*pcVar9)();
}


// ===== sym.aw882xx_get_version @ 0x0800bcd0 (size 64) =====

ulong sym.aw882xx_get_version(int64_t arg1,uint32_t arg2)

{
    if (7 < arg2) {
        *(arg1 + 3) = 0x302e3131;
        *arg1 = 0x312e3176;
        return 7;
    }
    return 0xfffffff4;
}


// ===== sym.aw882xx_get_dev_num @ 0x0800bd10 (size 20) =====

uint sym.aw882xx_get_dev_num(void)

{
    return _segment.ehdr;
}


// ===== sym.aw882xx_i2c_write @ 0x0800bd24 (size 424) =====

uint64_t sym.aw882xx_i2c_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uchar *puVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = 0;
    while( true ) {
        iVar5 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar5 = 0x30;
        }
        puVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xcc0,3);
        if (puVar2 != NULL) break;
        iVar5 = (*(arg1 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x48);
        }
        _printk(0x800558b,iVar5,"aw882xx_i2c_writes");
        iVar5 = (*(arg1 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x48);
        }
        _printk(0x8008bea,iVar5,"aw882xx_i2c_write",iVar6,0xfffffff4);
        iVar6 = iVar6 + 1;
        if (iVar6 == 5) {
            return 0xfffffff4;
        }
    }
    uVar3 = *(arg1 + 0x40);
    *puVar2 = arg2;
    *(puVar2 + 1) = arg3 >> 8 & 0xff | (arg3 & 0xff00ff) << 8;
    uVar1 = i2c_transfer_buffer_flags(uVar3,puVar2,3,0);
    if (uVar1 < 0) {
        iVar5 = (*(arg1 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x48);
        }
        _printk(0x80046e2,iVar5,"aw882xx_i2c_writes");
        uVar4 = kfree(puVar2);
        return uVar4;
    }
    kfree(puVar2);
    if (_segment.ehdr == 0) {
        return uVar1;
    }
    iVar5 = (*(arg1 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(arg1 + 0x48);
    }
    _printk(0x8002c3a,iVar5,"aw882xx_i2c_write",arg2 & 0xff,arg3 & 0xffff);
    return uVar1;
}


// ===== sym.aw882xx_i2c_read @ 0x0800becc (size 532) =====

uint64_t sym.aw882xx_i2c_read(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    char *pcVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar8;
    ulong unaff_x30;
    unkbyte9 Var9;
    uchar auVar10 [16];
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uchar auStack_8c [4];
    ulong uStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uint16_t *puStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uint64_t uStack_48;
    uint16_t auStack_3c [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    pcVar5 = auStack_3c;
    uVar6 = 2;
    uVar8 = arg2 & 0xffffffff;
    auStack_3c[0] = 0;
    iVar1 = sym.aw882xx_i2c_reads(arg1,arg2,pcVar5,2);
    if (iVar1 < 0) {
        iVar7 = (*(arg1 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(arg1 + 0x48);
        }
        _printk(0x8007ca9,iVar7,"aw882xx_i2c_read",0,iVar1);
        pcVar5 = auStack_3c;
        uVar6 = 2;
        iVar1 = sym.aw882xx_i2c_reads(arg1,uVar8,pcVar5,2);
        if (iVar1 < 0) {
            iVar7 = (*(arg1 + 0x48))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1 + 0x48);
            }
            _printk(0x8007ca9,iVar7,"aw882xx_i2c_read",1,iVar1);
            pcVar5 = auStack_3c;
            uVar6 = 2;
            iVar1 = sym.aw882xx_i2c_reads(arg1,uVar8,pcVar5,2);
            if (iVar1 < 0) {
                iVar7 = (*(arg1 + 0x48))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1 + 0x48);
                }
                _printk(0x8007ca9,iVar7,"aw882xx_i2c_read",2,iVar1);
                pcVar5 = auStack_3c;
                uVar6 = 2;
                iVar1 = sym.aw882xx_i2c_reads(arg1,uVar8,pcVar5,2);
                if (iVar1 < 0) {
                    iVar7 = (*(arg1 + 0x48))[0xe];
                    if (iVar7 == 0) {
                        iVar7 = **(arg1 + 0x48);
                    }
                    _printk(0x8007ca9,iVar7,"aw882xx_i2c_read",3,iVar1);
                    pcVar5 = auStack_3c;
                    uVar6 = 2;
                    uVar2 = sym.aw882xx_i2c_reads(arg1,uVar8,pcVar5,2);
                    if (uVar2 < 0) {
                        uVar8 = uVar2;
                        iVar7 = (*(arg1 + 0x48))[0xe];
                        if (iVar7 == 0) {
                            iVar7 = **(arg1 + 0x48);
                        }
                        pcVar5 = "aw882xx_i2c_read";
                        uVar6 = 4;
                        _printk(0x8007ca9,iVar7,"aw882xx_i2c_read",4,uVar8);
                        goto code_r0x0800bf34;
                    }
                }
            }
        }
    }
    *arg3 = (((auStack_3c[0] & 0xff00) << 0x10) >> 8 | auStack_3c[0] << 0x18) >> 0x10;
    if (_segment.ehdr != 0) {
        iVar7 = (*(arg1 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(arg1 + 0x48);
        }
        uVar6 = arg2 & 0xff;
        pcVar5 = "aw882xx_i2c_read";
        _printk(0x8002c3a,iVar7);
    }
    uVar8 = 0;
code_r0x0800bf34:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    Var9 = __stack_chk_fail();
    auStack_8c[0] = Var9 >> 0x40;
    iVar4 = Var9;
    *extraout_x18 = sym.aw882xx_i2c_reads;
    pcStack_58 = sym.aw882xx_i2c_reads;
    iVar7 = sp_el0;
    puStack_80 = auStack_8c;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar4 + 0x40);
    uVar2 = 2;
    uStack_88 = CONCAT62(0x10000,*(iVar7 + 2));
    uStack_78 = CONCAT24(uVar6,CONCAT22(1,*(iVar7 + 2)));
    puStack_70 = pcVar5;
    puStack_60 = &stack0xffffffffffffffd0;
    iStack_50 = arg1;
    uStack_48 = uVar8;
    uVar3 = i2c_transfer(*(iVar7 + 0x18),&uStack_88);
    uVar8 = uVar3;
    if (uVar3 < 0) {
        iVar7 = (*(iVar4 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(iVar4 + 0x48);
        }
        uVar2 = 0x80061af;
        _printk(0x8008491,iVar7);
    }
    else if (uVar3 == 2) {
        uVar8 = 0;
    }
    else {
        iVar7 = (*(iVar4 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(iVar4 + 0x48);
        }
        uVar2 = 0x80061af;
        _printk(0x80065a8,iVar7);
        uVar8 = 0xfffffffa;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return uVar8;
    }
    auVar10 = __stack_chk_fail();
    iVar4 = auVar10._0_8_;
    *extraout_x18_00 = sym.aw882xx_i2c_write_bits;
    pcStack_c8 = sym.aw882xx_i2c_write_bits;
    iVar7 = sp_el0;
    iStack_d8 = *(iVar7 + 0x5e0);
    uStack_dc = 0;
    ppuStack_d0 = &puStack_60;
    uVar3 = sym.aw882xx_i2c_read(iVar4,auVar10._8_8_,&uStack_dc);
    if ((uVar3 < 0) ||
       (uVar3 = sym.aw882xx_i2c_write
                          (iVar4,auVar10._8_8_ & 0xffffffff,uStack_dc & uVar2 | uVar6 & (uVar2 ^ 0xffffffff)),
       uVar3 < 0)) {
        uVar8 = uVar3;
        iVar7 = (*(iVar4 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(iVar4 + 0x48);
        }
        _printk(0x8005861,iVar7,"aw882xx_i2c_write_bits",uVar8);
    }
    else {
        uVar8 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_d8) {
        return uVar8;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw882xx_kcontorl_set;
    iVar1 = sym.aw882xx_dsp_set_afe_module_en(0);
    if (iVar1 != 0) {
        iVar4 = (*(iVar7 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar7 + 0x48);
        }
        _printk(0x8003c68,iVar4,"aw882xx_kcontorl_set",iVar1);
    }
    pcVar5 = "disable";
    if (_segment.ehdr != 0) {
        pcVar5 = "enable";
    }
    uVar8 = _printk(obj..str.43.llvm.7716720658683118668,"aw882xx_dsp_set_copp_module_en",pcVar5);
    return uVar8;
}


// ===== sym.aw882xx_i2c_reads @ 0x0800c0e0 (size 272) =====

uint64_t sym.aw882xx_i2c_reads(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uchar auStack_4c [4];
    ulong uStack_48;
    uchar *puStack_40;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    
    uVar6 = arg4;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    puStack_40 = auStack_4c;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x40);
    auStack_4c[0] = arg2;
    uVar5 = 2;
    uStack_48 = CONCAT62(0x10000,*(iVar7 + 2));
    uStack_38 = CONCAT24(arg4,CONCAT22(1,*(iVar7 + 2)));
    iStack_30 = arg3;
    uVar2 = i2c_transfer(*(iVar7 + 0x18),&uStack_48);
    uVar8 = uVar2;
    if (uVar2 < 0) {
        iVar7 = (*(arg1 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(arg1 + 0x48);
        }
        uVar5 = 0x80061af;
        _printk(0x8008491,iVar7);
    }
    else if (uVar2 == 2) {
        uVar8 = 0;
    }
    else {
        iVar7 = (*(arg1 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(arg1 + 0x48);
        }
        uVar5 = 0x80061af;
        _printk(0x80065a8,iVar7);
        uVar8 = 0xfffffffa;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_28) {
        return uVar8;
    }
    auVar9 = __stack_chk_fail();
    iVar4 = auVar9._0_8_;
    *extraout_x18 = sym.aw882xx_i2c_write_bits;
    pcStack_88 = sym.aw882xx_i2c_write_bits;
    iVar7 = sp_el0;
    iStack_98 = *(iVar7 + 0x5e0);
    uStack_9c = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    uVar2 = sym.aw882xx_i2c_read(iVar4,auVar9._8_8_,&uStack_9c);
    if ((uVar2 < 0) ||
       (uVar2 = sym.aw882xx_i2c_write
                          (iVar4,auVar9._8_8_ & 0xffffffff,uStack_9c & uVar5 | uVar6 & (uVar5 ^ 0xffffffff)),
       uVar2 < 0)) {
        uVar8 = uVar2;
        iVar7 = (*(iVar4 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(iVar4 + 0x48);
        }
        _printk(0x8005861,iVar7,"aw882xx_i2c_write_bits",uVar8);
    }
    else {
        uVar8 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_98) {
        return uVar8;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw882xx_kcontorl_set;
    iVar3 = sym.aw882xx_dsp_set_afe_module_en(0);
    if (iVar3 != 0) {
        iVar4 = (*(iVar7 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar7 + 0x48);
        }
        _printk(0x8003c68,iVar4,"aw882xx_kcontorl_set",iVar3);
    }
    pcVar1 = "disable";
    if (_segment.ehdr != 0) {
        pcVar1 = "enable";
    }
    uVar8 = _printk(obj..str.43.llvm.7716720658683118668,"aw882xx_dsp_set_copp_module_en",pcVar1);
    return uVar8;
}


// ===== sym.aw882xx_i2c_write_bits @ 0x0800c1f0 (size 220) =====

uint64_t sym.aw882xx_i2c_write_bits(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    uStack_4c = 0;
    uVar2 = sym.aw882xx_i2c_read(arg1,arg2,&uStack_4c);
    if ((uVar2 < 0) ||
       (uVar2 = sym.aw882xx_i2c_write(arg1,arg2 & 0xffffffff,uStack_4c & arg3 | arg4 & (arg3 ^ 0xffffffff)),
       uVar2 < 0)) {
        uVar6 = uVar2;
        iVar4 = (*(arg1 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x48);
        }
        _printk(0x8005861,iVar4,"aw882xx_i2c_write_bits",uVar6);
    }
    else {
        uVar6 = 0;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_kcontorl_set;
    iVar3 = sym.aw882xx_dsp_set_afe_module_en(0);
    if (iVar3 != 0) {
        iVar5 = (*(iVar4 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x48);
        }
        _printk(0x8003c68,iVar5,"aw882xx_kcontorl_set",iVar3);
    }
    pcVar1 = "disable";
    if (_segment.ehdr != 0) {
        pcVar1 = "enable";
    }
    uVar6 = _printk(obj..str.43.llvm.7716720658683118668,"aw882xx_dsp_set_copp_module_en",pcVar1);
    return uVar6;
}


// ===== sym.aw882xx_kcontorl_set @ 0x0800c2cc (size 156) =====

void sym.aw882xx_kcontorl_set(int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = sym.aw882xx_dsp_set_afe_module_en(0);
    if (iVar2 != 0) {
        iVar3 = (*(arg1 + 0x48))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x48);
        }
        _printk(0x8003c68,iVar3,"aw882xx_kcontorl_set",iVar2);
    }
    pcVar1 = "disable";
    if (_segment.ehdr != 0) {
        pcVar1 = "enable";
    }
    _printk(obj..str.43.llvm.7716720658683118668,"aw882xx_dsp_set_copp_module_en",pcVar1);
    return;
}


// ===== sym.aw_componet_codec_register @ 0x0800c368 (size 776) =====

void sym.aw_componet_codec_register(int64_t arg1)

{
    uint uVar1;
    ushort uVar2;
    int iVar3;
    int64_t *piVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    ulong *in_x18;
    int64_t *unaff_x20;
    code *unaff_x21;
    ulong unaff_x30;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ushort uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_58 = *(iVar9 + 0x5e0);
    piVar4 = devm_kmalloc(*(arg1 + 0x48),0xf0,0xdc0);
    if (piVar4 == NULL) {
        iVar9 = (*(arg1 + 0x48))[0xe];
        if (iVar9 == 0) {
            iVar9 = **(arg1 + 0x48);
        }
        _printk(0x8002c70,iVar9,"aw_componet_codec_register");
        uVar5 = 0xfffffff4;
        piVar4 = unaff_x20;
        while( true ) {
            iVar9 = sp_el0;
            if (*(iVar9 + 0x5e0) == iStack_58) break;
            __stack_chk_fail(uVar5);
code_r0x0800c64c:
            __cfi_slowpath_diag(0xa0fd373f7017bcd5,unaff_x21,0x8000fa0);
code_r0x0800c5c0:
            iVar3 = (*unaff_x21)(*(arg1 + 0x48),obj.soc_codec_dev_aw882xx,piVar4,1);
            if (iVar3 < 0) {
                iVar9 = (*(arg1 + 0x48))[0xe];
                if (iVar9 == 0) {
                    iVar9 = **(arg1 + 0x48);
                }
                _printk(0x80093b6,iVar9,"aw_componet_codec_register",iVar3);
                uVar5 = 0xffffffea;
            }
            else {
                uVar5 = 0;
            }
        }
        return;
    }
    memcpy(piVar4,obj.aw882xx_dai,0xf0);
    uVar2 = *(*(arg1 + 0x40) + 2);
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uVar1 = *(*(*(arg1 + 0x40) + 0x18) + 0x408);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    snprintf(&uStack_90,0x32,"%s-%x-%x","aw882xx-aif",uVar1,uVar2);
    uVar5 = *(arg1 + 0x48);
    iVar9 = strlen(&uStack_90);
    iVar6 = devm_kmalloc(uVar5,iVar9 + 1,0xdc0);
    if (iVar6 != 0) {
        memcpy(iVar6,&uStack_90,iVar9);
    }
    *piVar4 = iVar6;
    snprintf(&uStack_90,0x32,"%s-%x-%x","Speaker_Playback",uVar1,uVar2);
    uVar5 = *(arg1 + 0x48);
    iVar9 = strlen(&uStack_90);
    iVar7 = devm_kmalloc(uVar5,iVar9 + 1,0xdc0);
    if (iVar7 != 0) {
        memcpy(iVar7,&uStack_90,iVar9);
    }
    piVar4[0x16] = iVar7;
    snprintf(&uStack_90,0x32,"%s-%x-%x","Speaker_Capture",uVar1,uVar2);
    uVar5 = *(arg1 + 0x48);
    iVar9 = strlen(&uStack_90);
    iVar8 = devm_kmalloc(uVar5,iVar9 + 1,0xdc0);
    if (iVar8 != 0) {
        memcpy(iVar8,&uStack_90,iVar9);
    }
    piVar10 = *(arg1 + 0x48);
    piVar4[0x10] = iVar8;
    iVar9 = piVar10[0xe];
    if (iVar9 == 0) {
        iVar9 = *piVar10;
    }
    _printk(0x8006848,iVar9,"aw882xx_dai_drv_append_suffix",iVar6);
    iVar9 = (*(arg1 + 0x48))[0xe];
    if (iVar9 == 0) {
        iVar9 = **(arg1 + 0x48);
    }
    _printk(0x8003cbe,iVar9,"aw882xx_dai_drv_append_suffix",iVar7);
    iVar9 = (*(arg1 + 0x48))[0xe];
    if (iVar9 == 0) {
        iVar9 = **(arg1 + 0x48);
    }
    _printk(0x80034d1,iVar9,"aw882xx_dai_drv_append_suffix",iVar8);
    unaff_x21 = *(*(arg1 + 0x38) + 0x20);
    if (unaff_x21 != sym.__typeid__ZTSFiP6devicePK24snd_soc_component_driverP18snd_soc_dai_driveriE_global_addr)
    goto code_r0x0800c64c;
    goto code_r0x0800c5c0;
}


// ===== sym.aw882xx_hw_reset @ 0x0800c670 (size 188) =====

ulong sym.aw882xx_hw_reset(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = (*(arg1 + 0x48))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x48);
    }
    _printk(0x8004092,iVar2,"aw882xx_hw_reset");
    if (*(arg1 + 0x18) < 0x200) {
        uVar1 = gpio_to_desc();
        gpiod_set_raw_value_cansleep(uVar1,0);
        __const_udelay(0x418958);
        uVar1 = gpio_to_desc(*(arg1 + 0x18));
        gpiod_set_raw_value_cansleep(uVar1,1);
        __const_udelay(0x8312b0);
    }
    else {
        iVar2 = (*(arg1 + 0x48))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x48);
        }
        _printk(0x80038b4,iVar2,"aw882xx_hw_reset");
    }
    return 0;
}


// ===== sym.mievent_report @ 0x0800c72c (size 224) =====

ulong sym.mievent_report(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    strcpy(&uStack_50,*arg3);
    _dev_info(arg3,"%s: reg = %s, KeyWord = %s DFS report\n","mievent_report",&uStack_50,arg2);
    uVar2 = cdev_tevent_alloc(arg1 & 0xffffffff);
    cdev_tevent_add_str(uVar2,"I2cAddress",&uStack_50);
    cdev_tevent_add_str(uVar2,"Keyword");
    cdev_tevent_write(uVar2);
    cdev_tevent_destroy(uVar2);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_set_dai_sysclk;
    pcVar1 = _segment.ehdr;
    uVar2 = *(iVar3 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8000fc0);
    }
    puVar4 = (*pcVar1)(uVar2);
    iVar3 = (*(puVar4 + 0x12))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(puVar4 + 0x12);
    }
    _printk(0x8008fbc,iVar3,"aw882xx_set_dai_sysclk",arg2 & 0xffffffff);
    *puVar4 = arg2;
    return 0;
}


// ===== sym.aw882xx_set_dai_sysclk @ 0x0800c80c (size 180) =====

ulong sym.aw882xx_set_dai_sysclk(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    uint *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar2 = *(arg1 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        noname_1 = __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8000fc0);
    }
    puVar3 = (*pcVar1)(noname_1,uVar2);
    iVar4 = (*(puVar3 + 0x12))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(puVar3 + 0x12);
    }
    _printk(0x8008fbc,iVar4,"aw882xx_set_dai_sysclk",arg2 & 0xffffffff);
    *puVar3 = arg2;
    return 0;
}


// ===== sym.aw882xx_set_fmt @ 0x0800c8c0 (size 204) =====

ulong sym.aw882xx_set_fmt(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x58);
    iVar1 = (*(iVar2 + 0x18))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(iVar2 + 0x18);
    }
    _printk(0x80093ff,iVar1,"aw882xx_set_fmt",arg2 & 0xffffffff);
    if ((arg2 & 0xf) == 1) {
        if ((arg2 & 0xf000) == 0x4000) {
            return 0;
        }
        iVar1 = (*(iVar2 + 0x18))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(iVar2 + 0x18);
        }
        _printk(0x8006ad9,iVar1,"aw882xx_set_fmt");
    }
    else {
        iVar1 = (*(iVar2 + 0x18))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(iVar2 + 0x18);
        }
        _printk(0x800588b,iVar1,"aw882xx_set_fmt");
    }
    return 0xffffffea;
}


// ===== sym.aw882xx_mute @ 0x0800c98c (size 436) =====

int sym.aw882xx_mute(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t arg1_00;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar3 = *(arg1 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8000fe0);
    }
    arg1_00 = (*pcVar1)(uVar3);
    iVar4 = (*(arg1_00 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1_00 + 0x48);
    }
    _printk(0x80043be,iVar4,"aw882xx_mute",arg2 & 0xffffffff);
    if (arg3 == 0) {
        if (arg2 != 0) {
            *(arg1_00 + 8) = 0;
            cancel_delayed_work_sync(arg1_00 + 0x188);
            cancel_delayed_work_sync(arg1_00 + 0x78);
            mutex_lock(arg1_00 + 0x298);
            sym.aw882xx_device_stop(*(arg1_00 + 0x68));
            mutex_unlock(arg1_00 + 0x298);
            return 0;
        }
        if (*(arg1_00 + 0x28) != '\0') {
            *(arg1_00 + 8) = 1;
            mutex_lock(arg1_00 + 0x298);
            sym.aw882xx_start_pa(arg1_00);
            if (*(arg1_00 + 0x10) == '\0') {
                iVar2 = sym.aw882xx_spin_set_record_val(*(arg1_00 + 0x68));
                if (iVar2 != 0) {
                    iVar4 = (*(arg1_00 + 0x48))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1_00 + 0x48);
                    }
                    _printk(0x80061c1,iVar4,"aw882xx_mute",iVar2);
                }
            }
            else {
                iVar2 = 0;
            }
            mutex_unlock(arg1_00 + 0x298);
            return iVar2;
        }
        iVar4 = (*(arg1_00 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1_00 + 0x48);
        }
        uVar3 = 0x80055b6;
    }
    else {
        iVar4 = (*(arg1_00 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1_00 + 0x48);
        }
        uVar3 = 0x80040ab;
    }
    _printk(uVar3,iVar4,"aw882xx_mute");
    return 0;
}


// ===== sym.aw882xx_startup @ 0x0800cb40 (size 220) =====

ulong sym.aw882xx_startup(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar2 = *(arg2 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001000);
    }
    iVar3 = (*pcVar1)(uVar2);
    piVar5 = *(iVar3 + 0x48);
    iVar4 = piVar5[0xe];
    if (*(arg1 + 0x3c) == 0) {
        if (iVar4 == 0) {
            iVar4 = *piVar5;
        }
        _printk(0x80030cf,iVar4,"aw882xx_startup");
        sym.aw882xx_dev_init_cali_re(*(iVar3 + 0x68));
    }
    else {
        if (iVar4 == 0) {
            iVar4 = *piVar5;
        }
        _printk(0x8003c9d,iVar4,"aw882xx_startup");
    }
    return 0;
}


// ===== sym.aw882xx_shutdown @ 0x0800cc1c (size 212) =====

void sym.aw882xx_shutdown(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    uVar2 = *(arg2 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001020);
    }
    iVar3 = (*pcVar1)(uVar2);
    if (*(arg1 + 0x3c) == 0) {
        *(iVar3 + 4) = 0;
        iVar4 = (*(iVar3 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x48);
        }
        uVar2 = 0x8008810;
    }
    else {
        iVar4 = (*(iVar3 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x48);
        }
        uVar2 = 0x8005c9f;
    }
    _printk(uVar2,iVar4,"aw882xx_shutdown");
    return;
}


// ===== sym.aw882xx_hw_params @ 0x0800ccf0 (size 380) =====

ulong sym.aw882xx_hw_params(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint uVar2;
    code *pcVar3;
    uint uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = _segment.ehdr;
    uVar9 = *(arg3 + 0x58);
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001040);
    }
    iVar5 = (*pcVar3)(uVar9);
    iVar1 = *(arg1 + 0x3c);
    if (iVar1 == 1) {
        iVar8 = (*(iVar5 + 0x48))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(iVar5 + 0x48);
        }
        uVar6 = *(arg2 + 0x24);
        uVar2 = *(arg2 + 0x128);
        if (uVar6 == 0) {
            uVar6 = *(arg2 + 0x28);
            if (uVar6 != 0) {
                uVar7 = 0x20;
                goto code_r0x0800cda4;
            }
            uVar7 = 0;
        }
        else {
            uVar7 = 0;
code_r0x0800cda4:
            uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
            uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            uVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) | uVar7;
        }
        uVar4 = snd_pcm_format_width(uVar7);
        _printk(0x80074b7,iVar8,"aw882xx_hw_params",uVar2,uVar4);
        iVar1 = *(arg1 + 0x3c);
    }
    if (iVar1 != 0) {
        return 0;
    }
    iVar8 = (*(iVar5 + 0x48))[0xe];
    if (iVar8 == 0) {
        iVar8 = **(iVar5 + 0x48);
    }
    uVar6 = *(arg2 + 0x24);
    uVar2 = *(arg2 + 0x128);
    if (uVar6 == 0) {
        uVar6 = *(arg2 + 0x28);
        if (uVar6 == 0) {
            uVar7 = 0;
            goto code_r0x0800ce20;
        }
        uVar7 = 0x20;
    }
    else {
        uVar7 = 0;
    }
    uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10) | uVar7;
code_r0x0800ce20:
    uVar4 = snd_pcm_format_width(uVar7);
    _printk(0x8006b27,iVar8,"aw882xx_hw_params",uVar2,uVar4);
    return 0;
}


// ===== sym.snd_soc_kcontrol_component @ 0x0800ce6c (size 16) =====

ulong sym.snd_soc_kcontrol_component(int64_t arg1)

{
    return *(arg1 + 0x80);
}


// ===== sym.snd_soc_component_get_drvdata @ 0x0800ce7c (size 20) =====

ulong sym.snd_soc_component_get_drvdata(int64_t arg1)

{
    return *(*(arg1 + 0x18) + 0x98);
}


// ===== sym.aw882xx_start_pa @ 0x0800ce90 (size 624) =====

ulong sym.aw882xx_start_pa(int64_t arg1)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar6;
    ulong *puVar7;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    iVar4 = (*(arg1 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + 0x48);
    }
    _printk(0x8004092,iVar4,"aw882xx_start_pa");
    if (*(arg1 + 0x28) == '\x01') {
        if (*(arg1 + 0x14) != '\0') {
            iVar6 = 0;
            do {
                if (*(*(arg1 + 0x68) + 4) != 0) {
                    iVar4 = (*(arg1 + 0x48))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1 + 0x48);
                    }
                    uVar3 = 0x8006b06;
                    goto code_r0x0800d0b4;
                }
                iVar2 = sym.aw882xx_dev_reg_update(*(arg1 + 0x68));
                if (iVar2 == 0) {
                    iVar2 = sym.aw882xx_device_start(*(arg1 + 0x68));
                    if (iVar2 == 0) {
                        if (*(arg1 + 0x12) != '\0') {
                            queue_delayed_work_on(0x20,*(arg1 + 0x70),arg1 + 0x188,0xfa);
                        }
                        iVar4 = (*(arg1 + 0x48))[0xe];
                        if (iVar4 == 0) {
                            iVar4 = **(arg1 + 0x48);
                        }
                        uVar3 = 0x80038e6;
                        goto code_r0x0800d0b4;
                    }
                    iVar4 = (*(arg1 + 0x48))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1 + 0x48);
                    }
                    _printk(0x80030a7,iVar4,"aw882xx_start_pa",iVar6);
                    puVar7 = *(arg1 + 0x48);
                    uStack_70 = 0;
                    uStack_80 = 0;
                    uStack_78 = 0;
                    strcpy(&uStack_80,*puVar7);
                    _dev_info(puVar7,"%s: reg = %s, KeyWord = %s DFS report\n","mievent_report",&uStack_80,
                              "PA data exception");
                    uVar3 = cdev_tevent_alloc(0x36007bca);
                    cdev_tevent_add_str(uVar3,"I2cAddress",&uStack_80);
                    cdev_tevent_add_str(uVar3,"Keyword","PA data exception");
                    cdev_tevent_write(uVar3);
                    uVar3 = cdev_tevent_destroy(uVar3);
                }
                else {
                    iVar4 = (*(arg1 + 0x48))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1 + 0x48);
                    }
                    uVar3 = _printk(0x80051af,iVar4,"aw882xx_start_pa",iVar6);
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 != 5);
            goto code_r0x0800d0c0;
        }
        iVar4 = (*(arg1 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x48);
        }
        uVar3 = 0x8006dac;
    }
    else {
        iVar4 = (*(arg1 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x48);
        }
        uVar3 = 0x8002c9c;
    }
code_r0x0800d0b4:
    uVar3 = _printk(uVar3,iVar4,"aw882xx_start_pa");
code_r0x0800d0c0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_68) {
        uVar3 = __stack_chk_fail();
        *extraout_x18 = sym.aw882xx_codec_probe;
        pcVar1 = _segment.ehdr;
        if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001060);
        }
        iVar4 = (*pcVar1)(uVar3);
        iVar5 = (*(iVar4 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x48);
        }
        _printk(0x8004092,iVar5,"aw882xx_codec_probe");
        iVar5 = alloc_workqueue(0x80034bd,0xe000a,1,"aw882xx");
        *(iVar4 + 0x70) = iVar5;
        if (iVar5 == 0) {
            iVar5 = (*(iVar4 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x48);
            }
            _printk(0x8006871,iVar5,"aw882xx_codec_probe");
            uVar3 = 0xffffffea;
        }
        else {
            *(iVar4 + 0x78) = 0xfffffffe0;
            *(iVar4 + 0x80) = iVar4 + 0x80;
            *(iVar4 + 0x88) = iVar4 + 0x80;
            *(iVar4 + 0x90) = sym.aw882xx_startup_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            init_timer_key(iVar4 + 0xa8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
            *(iVar4 + 0x100) = 0xfffffffe0;
            *(iVar4 + 0x108) = iVar4 + 0x108;
            *(iVar4 + 0x110) = iVar4 + 0x108;
            *(iVar4 + 0x118) = sym.aw882xx_interrupt_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            init_timer_key(iVar4 + 0x130,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
            *(iVar4 + 0x188) = 0xfffffffe0;
            *(iVar4 + 400) = iVar4 + 400;
            *(iVar4 + 0x198) = iVar4 + 400;
            *(iVar4 + 0x1a0) = sym.aw882xx_dc_prot_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            init_timer_key(iVar4 + 0x1b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
            *(iVar4 + 0x210) = 0xfffffffe0;
            *(iVar4 + 0x218) = iVar4 + 0x218;
            *(iVar4 + 0x220) = iVar4 + 0x218;
            *(iVar4 + 0x228) = sym.aw882xx_request_firmware.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            init_timer_key(iVar4 + 0x240,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
            *(iVar4 + 0x30) = uVar3;
            *(iVar4 + 0x24) = 0;
            if (*(iVar4 + 0x10) == '\0') {
                iVar5 = (*(iVar4 + 0x48))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar4 + 0x48);
                }
                _printk(0x8004092,iVar5,"aw882xx_add_codec_controls");
                pcVar1 = _segment.ehdr;
                if (_segment.ehdr != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr) {
                    __cfi_slowpath_diag(0xa4a1322652c64ecc,_segment.ehdr,0x8001260);
                }
                (*pcVar1)(*(iVar4 + 0x30),obj.aw882xx_controls,6);
                pcVar1 = _segment.ehdr;
                if (*(*(iVar4 + 0x68) + 0x310) == 1) {
                    if (_segment.ehdr != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr) {
                        __cfi_slowpath_diag(0xa4a1322652c64ecc,_segment.ehdr,0x8001280);
                    }
                    (*pcVar1)(*(iVar4 + 0x30),obj.aw882xx_spin_control,1);
                }
            }
            sym.aw882xx_request_firmware(iVar4 + 0x210);
            sym.aw882xx_dev_init_cali_re(*(iVar4 + 0x68));
            uVar3 = 0;
        }
        return uVar3;
    }
    return uVar3;
}


// ===== sym.aw882xx_codec_probe @ 0x0800d100 (size 716) =====

ulong sym.aw882xx_codec_probe(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001060);
    }
    iVar2 = (*pcVar1)(arg1);
    iVar4 = (*(iVar2 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar2 + 0x48);
    }
    _printk(0x8004092,iVar4,"aw882xx_codec_probe");
    iVar4 = alloc_workqueue(0x80034bd,0xe000a,1,"aw882xx");
    *(iVar2 + 0x70) = iVar4;
    if (iVar4 == 0) {
        iVar4 = (*(iVar2 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar2 + 0x48);
        }
        _printk(0x8006871,iVar4,"aw882xx_codec_probe");
        uVar3 = 0xffffffea;
    }
    else {
        *(iVar2 + 0x78) = 0xfffffffe0;
        *(iVar2 + 0x80) = iVar2 + 0x80;
        *(iVar2 + 0x88) = iVar2 + 0x80;
        *(iVar2 + 0x90) = sym.aw882xx_startup_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0xa8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x100) = 0xfffffffe0;
        *(iVar2 + 0x108) = iVar2 + 0x108;
        *(iVar2 + 0x110) = iVar2 + 0x108;
        *(iVar2 + 0x118) = sym.aw882xx_interrupt_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0x130,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x188) = 0xfffffffe0;
        *(iVar2 + 400) = iVar2 + 400;
        *(iVar2 + 0x198) = iVar2 + 400;
        *(iVar2 + 0x1a0) = sym.aw882xx_dc_prot_work.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0x1b8,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x210) = 0xfffffffe0;
        *(iVar2 + 0x218) = iVar2 + 0x218;
        *(iVar2 + 0x220) = iVar2 + 0x218;
        *(iVar2 + 0x228) = sym.aw882xx_request_firmware.fc2486704268e85b1991da4eb2e27198.cfi_jt;
        init_timer_key(iVar2 + 0x240,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
        *(iVar2 + 0x30) = arg1;
        *(iVar2 + 0x24) = 0;
        if (*(iVar2 + 0x10) == '\0') {
            iVar4 = (*(iVar2 + 0x48))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar2 + 0x48);
            }
            _printk(0x8004092,iVar4,"aw882xx_add_codec_controls");
            pcVar1 = _segment.ehdr;
            if (_segment.ehdr != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr) {
                __cfi_slowpath_diag(0xa4a1322652c64ecc,_segment.ehdr,0x8001260);
            }
            (*pcVar1)(*(iVar2 + 0x30),obj.aw882xx_controls,6);
            pcVar1 = _segment.ehdr;
            if (*(*(iVar2 + 0x68) + 0x310) == 1) {
                if (_segment.ehdr != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr) {
                    __cfi_slowpath_diag(0xa4a1322652c64ecc,_segment.ehdr,0x8001280);
                }
                (*pcVar1)(*(iVar2 + 0x30),obj.aw882xx_spin_control,1);
            }
        }
        sym.aw882xx_request_firmware(iVar2 + 0x210);
        sym.aw882xx_dev_init_cali_re(*(iVar2 + 0x68));
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.aw882xx_codec_remove @ 0x0800d3cc (size 180) =====

void sym.aw882xx_codec_remove(int64_t arg1)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x80014a0);
    }
    iVar2 = (*pcVar1)(arg1);
    iVar3 = (*(iVar2 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(iVar2 + 0x48);
    }
    _printk(0x8004092,iVar3,"aw882xx_codec_remove");
    sym.aw882xx_dev_deinit(*(iVar2 + 0x68));
    destroy_workqueue(*(iVar2 + 0x70));
    *(iVar2 + 0x70) = 0;
    return;
}


// ===== sym.aw882xx_startup_work @ 0x0800d480 (size 108) =====

void sym.aw882xx_startup_work(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*(arg1 + -0x30))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(arg1 + -0x30);
    }
    _printk(0x8004092,iVar1,"aw882xx_startup_work");
    mutex_lock(arg1 + 0x220);
    sym.aw882xx_start_pa(arg1 + -0x78);
    mutex_unlock(arg1 + 0x220);
    return;
}


// ===== sym.aw882xx_interrupt_work @ 0x0800d4ec (size 232) =====

void sym.aw882xx_interrupt_work(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar3 = *(arg1 + -0x98);
    uStack_3c = 0;
    sym.aw882xx_i2c_read(arg1 + -0x100,*(iVar3 + 0x158),&uStack_3c);
    iVar2 = (*(arg1 + -0xb8))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + -0xb8);
    }
    _printk(0x80065d8,iVar2,"aw882xx_interrupt_work",uStack_3c);
    sym.aw882xx_i2c_read(arg1 + -0x100,*(iVar3 + 0x94),&uStack_3c);
    iVar2 = (*(arg1 + -0xb8))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + -0xb8);
    }
    _printk(0x8009000,iVar2,"aw882xx_interrupt_work",uStack_3c);
    sym.aw882xx_dev_set_intmask(*(arg1 + -0x98));
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dc_prot_work;
    if (*(iVar2 + -0x176) != '\0' && *(*(iVar2 + -0x120) + 4) != 0) {
        iVar1 = sym.aw882xx_dsp_get_dc_status(*(iVar2 + -0x120));
        if (iVar1 < 1) {
            queue_delayed_work_on(0x20,*(iVar2 + -0x118),iVar2,0xfa);
        }
        else {
            cancel_delayed_work_sync(iVar2 + -0x110);
            mutex_lock(iVar2 + 0x110);
            sym.aw882xx_device_stop(*(iVar2 + -0x120));
            mutex_unlock(iVar2 + 0x110);
        }
    }
    return;
}


// ===== sym.aw882xx_dc_prot_work @ 0x0800d5d4 (size 152) =====

void sym.aw882xx_dc_prot_work(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x176) != '\0' && *(*(arg1 + -0x120) + 4) != 0) {
        iVar1 = sym.aw882xx_dsp_get_dc_status(*(arg1 + -0x120));
        if (iVar1 < 1) {
            queue_delayed_work_on(0x20,*(arg1 + -0x118),arg1,0xfa);
        }
        else {
            cancel_delayed_work_sync(arg1 + -0x110);
            mutex_lock(arg1 + 0x110);
            sym.aw882xx_device_stop(*(arg1 + -0x120));
            mutex_unlock(arg1 + 0x110);
        }
    }
    return;
}


// ===== sym.aw882xx_request_firmware @ 0x0800d66c (size 1128) =====

void sym.aw882xx_request_firmware(int64_t arg1)

{
    int iVar1;
    code *pcVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    code *pcVar5;
    code *unaff_x20;
    code *unaff_x21;
    ulong *puVar6;
    int64_t *unaff_x25;
    uchar *puVar7;
    ulong unaff_x30;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    puVar6 = arg1 + -0x1c8;
    iStack_58 = *(iVar3 + 0x5e0);
    piStack_60 = NULL;
    *(arg1 + -0x1e8) = 0;
    iVar1 = request_firmware(&piStack_60,"aw882xx_acf.bin",*puVar6);
    piVar4 = *puVar6;
    iVar3 = piVar4[0xe];
    pcVar5 = arg1;
    if ((iVar1 != 0) || (piStack_60 == NULL)) {
        if (iVar3 == 0) {
            iVar3 = *piVar4;
        }
        _printk(0x8002ce1,iVar3,"aw882xx_request_firmware","aw882xx_acf.bin");
        if (*(arg1 + -0x1e7) != '\x05') {
            *(arg1 + -0x1e7) = *(arg1 + -0x1e7) + '\x01';
            msleep(1000);
            iVar3 = (*puVar6)[0xe];
            if (iVar3 == 0) {
                iVar3 = **puVar6;
            }
            _printk(0x80080cc,iVar3,"aw882xx_request_firmware","aw882xx_acf.bin",*(arg1 + -0x1e7));
            sym.aw882xx_request_firmware(arg1);
            goto code_r0x0800da74;
        }
        *(arg1 + -0x1e7) = 0;
        goto code_r0x0800da74;
    }
    if (iVar3 == 0) {
        iVar3 = *piVar4;
    }
    _printk(0x8002395,iVar3,"aw882xx_request_firmware","aw882xx_acf.bin",*piStack_60);
    mutex_lock(obj.g_aw882xx_lock);
    unaff_x21 = _segment.ehdr;
    if (_segment.ehdr != NULL) {
        release_firmware();
        iVar3 = (*puVar6)[0xe];
        if (iVar3 == 0) {
            iVar3 = **puVar6;
        }
        _printk(0x8009024,iVar3,"aw882xx_request_firmware","aw882xx_acf.bin");
        pcVar2 = _segment.ehdr;
code_r0x0800d768:
        _segment.ehdr = pcVar2;
        mutex_unlock(obj.g_aw882xx_lock);
        unaff_x20 = arg1 + 0x88;
        mutex_lock(unaff_x20);
        iVar1 = sym.aw882xx_device_init(*(arg1 + -0x1a8),unaff_x21);
        if (iVar1 < 0) {
            iVar3 = (*puVar6)[0xe];
            if (iVar3 == 0) {
                iVar3 = **puVar6;
            }
            _printk(0x80043df,iVar3,"aw882xx_request_firmware");
            pcVar2 = unaff_x20;
            goto code_r0x0800da70;
        }
        unaff_x25 = arg1 + -0x1e0;
        unaff_x21 = devm_kmalloc(*(*unaff_x25 + 0x18),0xf0,0xdc0);
        piVar4 = *(*unaff_x25 + 0x18);
        if (unaff_x21 == NULL) {
            iVar3 = piVar4[0xe];
            if (iVar3 == 0) {
                iVar3 = *piVar4;
            }
            _printk(0x80080f3,iVar3,"aw882xx_dynamic_create_controls");
        }
        else {
            iVar3 = devm_kmalloc(piVar4,0x32,0xdc0);
            if (iVar3 != 0) {
                puVar7 = arg1 + -0x200;
                snprintf(iVar3,0x32,"aw_dev_%d_prof",*puVar7);
                *(unaff_x21 + 0x10) = iVar3;
                *(unaff_x21 + 0x28) = sym.aw882xx_profile_info.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                *(unaff_x21 + 0x30) = sym.aw882xx_profile_get.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                iVar3 = *unaff_x25;
                *unaff_x21 = 2;
                *(unaff_x21 + 0x38) = sym.aw882xx_profile_set.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                pcVar2 = devm_kmalloc(*(iVar3 + 0x18),0x32,0xdc0);
                if (pcVar2 != NULL) {
                    snprintf(pcVar2,0x32,"aw_dev_%d_switch",*puVar7);
                    *(unaff_x21 + 0x60) = pcVar2;
                    *(unaff_x21 + 0x50) = 2;
                    *(unaff_x21 + 0x78) = sym.aw882xx_switch_info.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                    *(unaff_x21 + 0x80) = sym.aw882xx_switch_get.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                    iVar3 = *unaff_x25;
                    *(unaff_x21 + 0x88) = sym.aw882xx_switch_set.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                    iVar3 = devm_kmalloc(*(iVar3 + 0x18),0x32,0xdc0);
                    pcVar5 = pcVar2;
                    if (iVar3 != 0) {
                        snprintf(iVar3,0x32,"aw_dev_%d_monitor",*puVar7);
                        *(unaff_x21 + 0xb0) = iVar3;
                        pcVar5 = _segment.ehdr;
                        *(unaff_x21 + 0xa0) = 2;
                        *(unaff_x21 + 200) = sym.aw882xx_monitor_info.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                        *(unaff_x21 + 0xd0) = sym.aw882xx_monitor_get.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                        *(unaff_x21 + 0xd8) = sym.aw882xx_monitor_set.fc2486704268e85b1991da4eb2e27198.cfi_jt;
                        if (pcVar5 != sym.__typeid__ZTSFiP17snd_soc_componentPK16snd_kcontrol_newjE_global_addr)
                        goto code_r0x0800dab0;
                        goto code_r0x0800d8e0;
                    }
                }
            }
        }
        while( true ) {
            *(arg1 + -0x1e7) = 0;
            *(arg1 + -0x1e8) = 1;
            pcVar2 = unaff_x20;
code_r0x0800da70:
            mutex_unlock(unaff_x20);
            unaff_x20 = pcVar2;
code_r0x0800da74:
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_58) break;
            __stack_chk_fail();
code_r0x0800dab0:
            __cfi_slowpath_diag(0xa4a1322652c64ecc,pcVar5,0x8001080);
code_r0x0800d8e0:
            (*pcVar5)(*unaff_x25,unaff_x21,3);
        }
        return;
    }
    unaff_x21 = vzalloc(*piStack_60 + 4);
    if (unaff_x21 == NULL) {
        release_firmware();
        iVar3 = (*puVar6)[0xe];
        if (iVar3 == 0) {
            iVar3 = **puVar6;
        }
        _printk(0x8001f34,iVar3,"aw882xx_request_firmware");
    }
    else {
        *unaff_x21 = *piStack_60;
        memcpy(unaff_x21 + 4,piStack_60[1],*piStack_60);
        release_firmware(piStack_60);
        iVar1 = sym.aw882xx_dev_parse_check_acf(unaff_x21);
        pcVar2 = unaff_x21;
        if (iVar1 == 0) goto code_r0x0800d768;
        iVar3 = (*puVar6)[0xe];
        if (iVar3 == 0) {
            iVar3 = **puVar6;
        }
        _printk(0x80040c6,iVar3,"aw882xx_request_firmware","aw882xx_acf.bin");
        vfree(unaff_x21);
    }
    unaff_x20 = obj.g_aw882xx_lock;
    pcVar2 = 0x8000000;
    goto code_r0x0800da70;
}


// ===== sym.aw882xx_profile_info @ 0x0800dad4 (size 364) =====

ulong sym.aw882xx_profile_info(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80010a0);
    }
    uVar5 = (*pcVar2)(arg1);
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x80010c0);
    }
    iVar6 = (*pcVar2)(uVar5);
    *(arg2 + 0x40) = 3;
    *(arg2 + 0x48) = 1;
    uVar3 = sym.aw882xx_dev_get_profile_count(*(iVar6 + 0x68));
    if (uVar3 < 1) {
        *(arg2 + 0x50) = 0;
        iVar7 = (*(iVar6 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(iVar6 + 0x48);
        }
        _printk(0x800350f,iVar7,"aw882xx_profile_info");
    }
    else {
        uVar1 = *(arg2 + 0x54);
        *(arg2 + 0x50) = uVar3;
        if (uVar3 <= uVar1) {
            uVar1 = uVar3 - 1;
            *(arg2 + 0x54) = uVar1;
        }
        iVar4 = sym.aw88xx_dev_get_profile_name(*(iVar6 + 0x68),arg2 + 0x58,uVar1);
        if (iVar4 != 0) {
            strlcpy(arg2 + 0x58,"null",5);
        }
    }
    return 0;
}


// ===== sym.aw882xx_profile_get @ 0x0800dc40 (size 272) =====

ulong sym.aw882xx_profile_get(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80010e0);
    }
    iVar2 = (*pcVar1)(arg1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001100);
    }
    iVar3 = (*pcVar1)(iVar2);
    *(arg2 + 0x48) = *(*(iVar3 + 0x68) + 0x29);
    iVar4 = (*(iVar2 + 0x18))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar2 + 0x18);
    }
    _printk(0x8002845,iVar4,"aw882xx_profile_get",*(*(iVar3 + 0x68) + 0x29));
    return 0;
}


// ===== sym.aw882xx_profile_set @ 0x0800dd50 (size 456) =====

ulong sym.aw882xx_profile_set(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001120);
    }
    iVar4 = (*pcVar2)(arg1);
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001140);
    }
    iVar5 = (*pcVar2)(iVar4);
    if (*(iVar5 + 0x13) == '\0') {
        iVar5 = (*(iVar4 + 0x18))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x18);
        }
        uVar6 = 0x8004a3e;
code_r0x0800de18:
        _printk(uVar6,iVar5,"aw882xx_profile_set");
    }
    else {
        iVar3 = sym.aw882xx_dev_check_profile_index(*(iVar5 + 0x68),*(arg2 + 0x48));
        if (iVar3 == 0) {
            if (*(arg2 + 0x48) == *(*(iVar5 + 0x68) + 0x29)) {
                iVar5 = (*(iVar4 + 0x18))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar4 + 0x18);
                }
                uVar6 = 0x8005cc1;
                goto code_r0x0800de18;
            }
            mutex_lock(iVar5 + 0x298);
            sym.aw882xx_dev_set_profile_index(*(iVar5 + 0x68),*(arg2 + 0x48));
            if ((*(iVar5 + 8) != 0) && (*(iVar5 + 0x14) != '\0')) {
                sym.aw882xx_dev_prof_update(*(iVar5 + 0x68),*(iVar5 + 0x11) != '\0');
            }
            mutex_unlock(iVar5 + 0x298);
            iVar5 = (*(iVar4 + 0x18))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x18);
            }
            uVar1 = *(arg2 + 0x48);
            uVar6 = 0x8008c27;
        }
        else {
            iVar5 = (*(iVar4 + 0x18))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x18);
            }
            uVar1 = *(arg2 + 0x48);
            uVar6 = 0x8007cd5;
        }
        _printk(uVar6,iVar5,"aw882xx_profile_set",uVar1);
    }
    return 0;
}


// ===== sym.aw882xx_switch_info @ 0x0800df18 (size 128) =====

ulong sym.aw882xx_switch_info(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x54);
    *(arg1 + 0x40) = 3;
    *(arg1 + 0x48) = 1;
    *(arg1 + 0x50) = 2;
    if (1 < uVar2) {
        uVar2 = 1;
        *(arg1 + 0x54) = 1;
    }
    uVar3 = *(obj.aw882xx_switch + uVar2 * 8);
    iVar1 = strlen(uVar3);
    strlcpy(arg1 + 0x58,uVar3,iVar1 + 1);
    return 0;
}


// ===== sym.aw882xx_switch_get @ 0x0800df98 (size 228) =====

ulong sym.aw882xx_switch_get(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001160);
    }
    uVar2 = (*pcVar1)(arg1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001180);
    }
    iVar3 = (*pcVar1)(uVar2);
    *(arg2 + 0x48) = *(iVar3 + 0x14);
    return 0;
}


// ===== sym.aw882xx_switch_set @ 0x0800e07c (size 460) =====

ulong sym.aw882xx_switch_set(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t arg1_00;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80011a0);
    }
    uVar2 = (*pcVar1)(arg1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x80011c0);
    }
    arg1_00 = (*pcVar1)(uVar2);
    if (*(arg1_00 + 8) == 0) {
        mutex_lock(arg1_00 + 0x298);
        *(arg1_00 + 0x14) = *(arg2 + 0x48) != 0;
    }
    else {
        if (*(arg2 + 0x48) == 0) {
            cancel_delayed_work_sync(arg1_00 + 0x188);
            cancel_delayed_work_sync(arg1_00 + 0x78);
            mutex_lock(arg1_00 + 0x298);
            sym.aw882xx_device_stop(*(arg1_00 + 0x68));
            *(arg1_00 + 0x14) = 0;
            mutex_unlock(arg1_00 + 0x298);
            iVar3 = (*(arg1_00 + 0x48))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1_00 + 0x48);
            }
            _printk(0x80065fb,iVar3,"aw882xx_switch_set");
            return 0;
        }
        cancel_delayed_work_sync(arg1_00 + 0x78);
        mutex_lock(arg1_00 + 0x298);
        *(arg1_00 + 0x14) = 1;
        if (*(arg1_00 + 0x28) == '\x01') {
            sym.aw882xx_start_pa(arg1_00);
        }
        else {
            iVar3 = (*(arg1_00 + 0x48))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1_00 + 0x48);
            }
            _printk(0x80055b6,iVar3,"aw882xx_switch_set");
        }
    }
    mutex_unlock(arg1_00 + 0x298);
    return 0;
}


// ===== sym.aw882xx_monitor_info @ 0x0800e248 (size 128) =====

ulong sym.aw882xx_monitor_info(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x54);
    *(arg1 + 0x40) = 3;
    *(arg1 + 0x48) = 1;
    *(arg1 + 0x50) = 2;
    if (1 < uVar2) {
        uVar2 = 1;
        *(arg1 + 0x54) = 1;
    }
    uVar3 = *(obj.aw882xx_switch + uVar2 * 8);
    iVar1 = strlen(uVar3);
    strlcpy(arg1 + 0x58,uVar3,iVar1 + 1);
    return 0;
}


// ===== sym.aw882xx_monitor_get @ 0x0800e2c8 (size 264) =====

ulong sym.aw882xx_monitor_get(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x80011e0);
    }
    uVar2 = (*pcVar1)(arg1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001200);
    }
    iVar3 = (*pcVar1)(uVar2);
    *(arg2 + 0x48) = *(*(iVar3 + 0x68) + 0x28c);
    iVar4 = (*(iVar3 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + 0x48);
    }
    _printk(0x8004a60,iVar4,"aw882xx_monitor_get");
    return 0;
}


// ===== sym.aw882xx_monitor_set @ 0x0800e3d0 (size 292) =====

ulong sym.aw882xx_monitor_set(int64_t arg1,int64_t arg2)

{
    int iVar1;
    code *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001220);
    }
    uVar3 = (*pcVar2)(arg1);
    pcVar2 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001240);
    }
    iVar4 = (*pcVar2)(uVar3);
    iVar5 = *(iVar4 + 0x68);
    iVar1 = *(arg2 + 0x48);
    iVar4 = (*(iVar5 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar5 + 0x40);
    }
    _printk(0x800354b,iVar4,"aw882xx_monitor_set",iVar1);
    if ((*(iVar5 + 0x28c) != iVar1) && (*(iVar5 + 0x28c) = iVar1, iVar1 != 0)) {
        sym.aw882xx_monitor_start(iVar5 + 0x200);
    }
    return 0;
}


// ===== sym.aw882xx_get_rx_en @ 0x0800e4f4 (size 424) =====

ulong sym.aw882xx_get_rx_en(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x80012a0);
    }
    uVar4 = (*pcVar2)(arg1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x80012c0);
    }
    iVar5 = (*pcVar2)(uVar4);
    if (*(iVar5 + 8) == 0) {
        *(arg2 + 0x48) = _segment.ehdr;
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x80023c5,iVar6,"aw882xx_get_rx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_get_afe_module_en(0);
        if (iVar3 != 0) {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_get_rx_en",iVar3);
        }
        *(arg2 + 0x48) = 0;
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x8006dd8,iVar6,"aw882xx_get_rx_en",*(arg2 + 0x48));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_set_rx_en;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x80012e0);
    }
    uVar4 = (*pcVar2)(auVar8._0_8_);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001300);
    }
    iVar7 = (*pcVar2)(uVar4);
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_rx_en",*(auVar8._8_8_ + 0x48));
    uVar1 = *(auVar8._8_8_ + 0x48);
    if (*(iVar7 + 8) == 0) {
        iVar5 = (*(iVar7 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar7 + 0x48);
        }
        _printk(0x8007cfd,iVar5,"aw882xx_set_rx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(0);
        if (iVar3 != 0) {
            iVar5 = (*(iVar7 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar7 + 0x48);
            }
            _printk(0x80040ff,iVar5,"aw882xx_set_rx_en",iVar3);
        }
    }
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar5,"aw882xx_set_rx_en",uVar1);
    return 0;
}


// ===== sym.aw882xx_set_rx_en @ 0x0800e69c (size 416) =====

ulong sym.aw882xx_set_rx_en(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x80012e0);
    }
    uVar4 = (*pcVar2)(arg1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001300);
    }
    iVar5 = (*pcVar2)(uVar4);
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x800885a,iVar6,"aw882xx_set_rx_en",*(arg2 + 0x48));
    uVar1 = *(arg2 + 0x48);
    if (*(iVar5 + 8) == 0) {
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x8007cfd,iVar6,"aw882xx_set_rx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(0);
        if (iVar3 != 0) {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_set_rx_en",iVar3);
        }
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar6,"aw882xx_set_rx_en",uVar1);
    return 0;
}


// ===== sym.aw882xx_get_tx_en @ 0x0800e83c (size 436) =====

ulong sym.aw882xx_get_tx_en(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar7 = *(iVar7 + 0x5e0);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x8001320);
    }
    uVar4 = (*pcVar2)(arg1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001340);
    }
    iVar5 = (*pcVar2)(uVar4);
    if (*(iVar5 + 8) == 0) {
        *(arg2 + 0x48) = _segment.ehdr;
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x80023c5,iVar6,"aw882xx_get_tx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_get_afe_module_en(1);
        if (iVar3 == 0) {
            *(arg2 + 0x48) = 0;
        }
        else {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_get_tx_en",iVar3);
            *(arg2 + 0x48) = 0;
        }
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x8004731,iVar6,"aw882xx_get_tx_en",*(arg2 + 0x48));
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar7) {
        return 0;
    }
    auVar8 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_set_tx_en;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x8001360);
    }
    uVar4 = (*pcVar2)(auVar8._0_8_);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001380);
    }
    iVar7 = (*pcVar2)(uVar4);
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_tx_en",*(auVar8._8_8_ + 0x48));
    uVar1 = *(auVar8._8_8_ + 0x48);
    if (*(iVar7 + 8) == 0) {
        iVar5 = (*(iVar7 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar7 + 0x48);
        }
        _printk(0x8007cfd,iVar5,"aw882xx_set_tx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(1);
        if (iVar3 != 0) {
            iVar5 = (*(iVar7 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar7 + 0x48);
            }
            _printk(0x80040ff,iVar5,"aw882xx_set_tx_en",iVar3);
        }
    }
    iVar5 = (*(iVar7 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar7 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar5,"aw882xx_set_tx_en",uVar1);
    return 0;
}


// ===== sym.aw882xx_set_tx_en @ 0x0800e9f0 (size 416) =====

ulong sym.aw882xx_set_tx_en(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    code *pcVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar2,0x8001360);
    }
    uVar4 = (*pcVar2)(arg1);
    pcVar2 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar2 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar2,0x8001380);
    }
    iVar5 = (*pcVar2)(uVar4);
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _printk(0x800885a,iVar6,"aw882xx_set_tx_en",*(arg2 + 0x48));
    uVar1 = *(arg2 + 0x48);
    if (*(iVar5 + 8) == 0) {
        iVar6 = (*(iVar5 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar5 + 0x48);
        }
        _printk(0x8007cfd,iVar6,"aw882xx_set_tx_en");
    }
    else {
        iVar3 = sym.aw882xx_dsp_set_afe_module_en(1);
        if (iVar3 != 0) {
            iVar6 = (*(iVar5 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x48);
            }
            _printk(0x80040ff,iVar6,"aw882xx_set_tx_en",iVar3);
        }
    }
    iVar6 = (*(iVar5 + 0x48))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar5 + 0x48);
    }
    _segment.ehdr = uVar1;
    _printk(0x8008c57,iVar6,"aw882xx_set_tx_en",uVar1);
    return 0;
}


// ===== sym.aw882xx_get_copp_en @ 0x0800eb90 (size 264) =====

ulong sym.aw882xx_get_copp_en(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar1 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar1,0x80013a0);
    }
    uVar2 = (*pcVar1)(arg1);
    pcVar1 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar1 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar1,0x80013c0);
    }
    iVar3 = (*pcVar1)(uVar2);
    *(arg2 + 0x48) = _segment.ehdr;
    iVar4 = (*(iVar3 + 0x48))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + 0x48);
    }
    _printk(0x800796c,iVar4,"aw882xx_get_copp_en");
    return 0;
}


// ===== sym.aw882xx_set_copp_en @ 0x0800ec98 (size 400) =====

ulong sym.aw882xx_set_copp_en(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar4 != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,pcVar4,0x80013e0);
    }
    uVar2 = (*pcVar4)(arg1);
    pcVar4 = CONCAT44(*0x8000004,_segment.ehdr);
    if (pcVar4 != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,pcVar4,0x8001400);
    }
    iVar3 = (*pcVar4)(uVar2);
    iVar5 = (*(iVar3 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar3 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_copp_en",*(arg2 + 0x48));
    iVar1 = *(arg2 + 0x48);
    if (*(iVar3 + 8) == 0) {
        pcVar6 = (*(iVar3 + 0x48))[0xe];
        if (pcVar6 == NULL) {
            pcVar6 = **(iVar3 + 0x48);
        }
        pcVar4 = 0x8007cfd;
        pcVar7 = "aw882xx_set_copp_en";
    }
    else {
        pcVar7 = "disable";
        if (iVar1 != 0) {
            pcVar7 = "enable";
        }
        pcVar4 = obj..str.43.llvm.7716720658683118668;
        pcVar6 = "aw882xx_dsp_set_copp_module_en";
    }
    _printk(pcVar4,pcVar6,pcVar7);
    iVar5 = (*(iVar3 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar3 + 0x48);
    }
    _segment.ehdr = iVar1;
    _printk(0x8008c57,iVar5,"aw882xx_set_copp_en",iVar1);
    return 0;
}


// ===== sym.aw882xx_get_fade_in_time @ 0x0800ee28 (size 68) =====

ulong sym.aw882xx_get_fade_in_time(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x48) = _segment.ehdr;
    _printk(0x8004dc6,"aw882xx_get_fade_in_time");
    return 0;
}


// ===== sym.aw882xx_set_fade_in_time @ 0x0800ee6c (size 108) =====

ulong sym.aw882xx_set_fade_in_time(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x78) + 4) < *(arg2 + 0x48)) {
        _printk(0x80055ea,"aw882xx_set_fade_in_time");
    }
    else {
        _segment.ehdr = *(arg2 + 0x48);
        _printk(0x8004dc6,"aw882xx_set_fade_in_time");
    }
    return 0;
}


// ===== sym.aw882xx_get_fade_out_time @ 0x0800eed8 (size 68) =====

ulong sym.aw882xx_get_fade_out_time(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x48) = _segment.ehdr;
    _printk(0x8004dc6,"aw882xx_get_fade_out_time");
    return 0;
}


// ===== sym.aw882xx_set_fade_out_time @ 0x0800ef1c (size 108) =====

ulong sym.aw882xx_set_fade_out_time(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x78) + 4) < *(arg2 + 0x48)) {
        _printk(0x80055ea,"aw882xx_set_fade_out_time");
    }
    else {
        _segment.ehdr = *(arg2 + 0x48);
        _printk(0x8004dc6,"aw882xx_set_fade_out_time");
    }
    return 0;
}


// ===== sym.aw882xx_spksw_gpio_get @ 0x0800ef88 (size 132) =====

ulong sym.aw882xx_spksw_gpio_get(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    gpio_to_desc(*(iVar2 + 0x20));
    iVar1 = gpiod_get_raw_value_cansleep();
    _dev_info(*(iVar2 + 0x48),"spksw level cached = %d, actual = %d\n",*(iVar2 + 0x24),iVar1);
    if (iVar1 < 0) {
        *(arg2 + 0x48) = *(iVar2 + 0x24);
    }
    else {
        *(arg2 + 0x48) = iVar1;
        *(iVar2 + 0x24) = iVar1;
    }
    return 0;
}


// ===== sym.aw882xx_spksw_gpio_put @ 0x0800f00c (size 104) =====

ulong sym.aw882xx_spksw_gpio_put(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg2 + 0x48);
    iVar3 = *(*(*(arg1 + 0x80) + 0x18) + 0x98);
    _dev_info(*(iVar3 + 0x48),"spksw = %d\n",iVar1);
    uVar2 = gpio_to_desc(*(iVar3 + 0x20));
    gpiod_set_raw_value_cansleep(uVar2,iVar1 != 0);
    return 0;
}


// ===== sym.aw882xx_get_spin @ 0x0800f074 (size 412) =====

int sym.aw882xx_get_spin(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001420);
    }
    uVar3 = (*pcVar1)(arg1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001440);
    }
    iVar4 = (*pcVar1)(uVar3);
    uStack_2c = 0;
    iVar2 = sym.aw882xx_spin_value_get(*(iVar4 + 0x68),&uStack_2c);
    if (iVar2 != 0) {
        iVar5 = (*(iVar4 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x48);
        }
        _printk(0x800813a,iVar5,"aw882xx_get_spin",iVar2);
        uStack_2c = 0;
    }
    *(arg2 + 0x48) = uStack_2c;
    iVar5 = (*(iVar4 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar4 + 0x48);
    }
    if (3 < uStack_2c) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5512,0x800f1b4);
        (*pcVar1)();
    }
    _printk(0x80084ee,iVar5,"aw882xx_get_spin",*(obj.aw882xx_spin + uStack_2c * 8));
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar8 = __stack_chk_fail();
        *extraout_x18 = sym.aw882xx_set_spin;
        pcVar1 = _segment.ehdr;
        if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
            __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001460);
        }
        uVar3 = (*pcVar1)(auVar8._0_8_);
        pcVar1 = _segment.ehdr;
        if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
            __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001480);
        }
        iVar4 = (*pcVar1)(uVar3);
        iVar5 = (*(iVar4 + 0x48))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x48);
        }
        _printk(0x800885a,iVar5,"aw882xx_set_spin",*(auVar8._8_8_ + 0x48));
        uVar6 = *(auVar8._8_8_ + 0x48);
        if ((uVar6 & 0xfffffffc) == 0) {
            iVar2 = sym.aw882xx_spin_value_set(*(iVar4 + 0x68),uVar6 & 0xffffffff,*(iVar4 + 8) != 0);
            if (iVar2 != 0) {
                iVar5 = (*(iVar4 + 0x48))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar4 + 0x48);
                }
                _printk(0x8008c8b,iVar5,"aw882xx_set_spin",iVar2);
            }
        }
        else {
            piVar7 = *(*(iVar4 + 0x68) + 0x40);
            iVar4 = piVar7[0xe];
            if (iVar4 == 0) {
                iVar4 = *piVar7;
            }
            _printk(0x800798c,iVar4,"aw882xx_set_spin");
            iVar2 = -0x16;
        }
        return iVar2;
    }
    return 0;
}


// ===== sym.aw882xx_set_spin @ 0x0800f210 (size 392) =====

int sym.aw882xx_set_spin(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFP17snd_soc_componentP12snd_kcontrolE_global_addr) {
        __cfi_slowpath_diag(0x3ebbfb930cff995c,_segment.ehdr,0x8001460);
    }
    uVar3 = (*pcVar1)(arg1);
    pcVar1 = _segment.ehdr;
    if (_segment.ehdr != sym.__typeid__ZTSFPvP17snd_soc_componentE_global_addr) {
        __cfi_slowpath_diag(0x1cb70fb2e83a758,_segment.ehdr,0x8001480);
    }
    iVar4 = (*pcVar1)(uVar3);
    iVar5 = (*(iVar4 + 0x48))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(iVar4 + 0x48);
    }
    _printk(0x800885a,iVar5,"aw882xx_set_spin",*(arg2 + 0x48));
    if ((*(arg2 + 0x48) & 0xfffffffc) == 0) {
        iVar2 = sym.aw882xx_spin_value_set(*(iVar4 + 0x68),*(arg2 + 0x48) & 0xffffffff,*(iVar4 + 8) != 0);
        if (iVar2 != 0) {
            iVar5 = (*(iVar4 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x48);
            }
            _printk(0x8008c8b,iVar5,"aw882xx_set_spin",iVar2);
        }
    }
    else {
        piVar6 = *(*(iVar4 + 0x68) + 0x40);
        iVar4 = piVar6[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar6;
        }
        _printk(0x800798c,iVar4,"aw882xx_set_spin");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.aw882xx_i2c_probe @ 0x0800f398 (size 2748) =====

char * sym.aw882xx_i2c_probe(int64_t arg1)

{
    int64_t *arg3;
    int iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    code *arg1_00;
    int64_t iVar4;
    ulong uVar5;
    char *arg2;
    char *in_x3;
    code cVar6;
    uint uVar7;
    int64_t *piVar8;
    uint *puVar9;
    ulong *in_x18;
    code *pcVar10;
    int64_t iVar11;
    char *pcVar12;
    code *pcVar13;
    ulong unaff_x30;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    arg3 = arg1 + 0x20;
    iVar11 = *(arg1 + 0x310);
    _printk(0x8006b6e,"aw882xx_i2c_probe",*(arg1 + 2));
    pcVar10 = *(arg1 + 0x18);
    pcVar13 = *(*(pcVar10 + 0x10) + 0x20);
    __cfi_slowpath_diag(0x6871e466cec98751,pcVar13,0x80014e0);
    uVar3 = (*pcVar13)(pcVar10);
    if ((uVar3 & 1) == 0) {
        iVar11 = *(arg1 + 0x90);
        if (iVar11 == 0) {
            iVar11 = *arg3;
        }
        _printk(0x8005d0a,iVar11,"aw882xx_i2c_probe");
        pcVar12 = 0xfffffffb;
        arg1_00 = pcVar10;
        goto code_r0x0800f4ac;
    }
    arg1_00 = devm_kmalloc(arg3,0x2c8,0xdc0);
    if (arg1_00 != NULL) {
        iVar4 = devm_kmalloc(arg3,0x3f0,0xdc0);
        *(arg1_00 + 0x68) = iVar4;
        pcVar10 = arg1_00;
        if (iVar4 != 0) {
            *(arg1_00 + 0x30) = 0;
            pcVar13 = arg1_00 + 0x48;
            *pcVar13 = arg3;
            *(arg1_00 + 0x38) = reloc.snd_soc_kcontrol_component.fc2486704268e85b1991da4eb2e27198.cfi_jt;
            *(arg1_00 + 0x40) = arg1;
            *(arg1_00 + 0x28) = 0;
            *(arg1_00 + 0x13) = 0x101;
            *(arg1_00 + 0x70) = 0;
            __mutex_init(arg1_00 + 0x298,"&aw882xx->lock",obj.soc_codec_dev_aw882xx);
            *(arg1 + 0xb8) = arg1_00;
            uStack_50 = 0;
            if (iVar11 == 0) {
                iVar11 = *(arg1 + 0x90);
                *(arg1_00 + 0x18) = 0xffffffffffffffff;
                *(arg1_00 + 0x20) = 0xffffffff;
                if (iVar11 == 0) {
                    iVar11 = *arg3;
                }
                _printk(0x8008cb7,iVar11,"aw882xx_i2c_probe");
                pcVar12 = 0xffffffea;
                goto code_r0x0800f4ac;
            }
            iVar1 = of_get_named_gpio_flags(iVar11,"reset-gpio",0,0);
            piVar8 = *(arg1_00 + 0x48);
            *(arg1_00 + 0x18) = iVar1;
            iVar4 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x80079ca;
            }
            else {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x8005d6e;
            }
            _printk(uVar5,iVar4,"aw882xx_parse_gpio_dt");
            iVar1 = of_get_named_gpio_flags(iVar11,"irq-gpio",0,0);
            piVar8 = *(arg1_00 + 0x48);
            *(arg1_00 + 0x1c) = iVar1;
            iVar4 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x800565b;
            }
            else {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x8008168;
            }
            _printk(uVar5,iVar4,"aw882xx_parse_gpio_dt");
            iVar1 = of_get_named_gpio_flags(iVar11,"spksw-gpio",0,0);
            piVar8 = *(arg1_00 + 0x48);
            *(arg1_00 + 0x20) = iVar1;
            iVar4 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x800476b;
            }
            else {
                if (iVar4 == 0) {
                    iVar4 = *piVar8;
                }
                uVar5 = 0x8001f55;
            }
            _printk(uVar5,iVar4,"aw882xx_parse_gpio_dt");
            iVar1 = of_property_read_variable_u32_array(iVar11,"dc-flag",&uStack_50 + 4,1,0);
            if (iVar1 < 0) {
                uStack_50 = uStack_50 & 0xffffffff;
                iVar4 = (*pcVar13)[0xe];
                if (iVar4 == 0) {
                    iVar4 = **pcVar13;
                }
                _printk(0x8005636,iVar4,"aw882xx_parse_dt");
            }
            else {
                iVar4 = (*pcVar13)[0xe];
                if (iVar4 == 0) {
                    iVar4 = **pcVar13;
                }
                _printk(0x8005d4e,iVar4,"aw882xx_parse_dt",uStack_50._4_4_);
            }
            arg1_00[0x12] = SUB81(uStack_50 >> 0x20,0);
            iVar1 = of_property_read_variable_u32_array(iVar11,"sync-flag",&uStack_50,1,0);
            piVar8 = *(arg1_00 + 0x48);
            iVar11 = piVar8[0xe];
            if (iVar1 < 0) {
                if (iVar11 == 0) {
                    iVar11 = *piVar8;
                }
                _printk(0x800399e,iVar11,"aw882xx_parse_dt");
                cVar6 = 0x0;
            }
            else {
                if (iVar11 == 0) {
                    iVar11 = *piVar8;
                }
                _printk(0x800441d,iVar11,"aw882xx_parse_dt",uStack_50 & 0xffffffff);
                cVar6 = SUB81(uStack_50,0);
            }
            arg1_00[0x11] = cVar6;
            if (0x1ff < *(arg1_00 + 0x18)) {
code_r0x0800f784:
                if (*(arg1_00 + 0x1c) < 0x200) {
                    in_x3 = "aw882xx_int";
                    uVar2 = devm_gpio_request_one(*pcVar13,*(arg1_00 + 0x1c),1);
                    if (uVar2 != 0) {
                        pcVar12 = uVar2;
                        iVar11 = (*pcVar13)[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **pcVar13;
                        }
                        uVar5 = 0x8004de3;
                        goto code_r0x0800f914;
                    }
                }
                if (*(arg1_00 + 0x20) < 0x200) {
                    in_x3 = "aw882xx_spksw";
                    uVar2 = devm_gpio_request_one(*pcVar13,*(arg1_00 + 0x20),0);
                    if (uVar2 != 0) {
                        pcVar12 = uVar2;
                        iVar11 = (*pcVar13)[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **pcVar13;
                        }
                        uVar5 = 0x800946a;
                        goto code_r0x0800f914;
                    }
                }
                sym.aw882xx_hw_reset(arg1_00);
                uStack_50 = uStack_50 & 0xffffffff;
                iVar1 = sym.aw882xx_i2c_read(arg1_00,0,&uStack_50 + 4);
                if (-1 < iVar1) {
                    in_x3 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1_00,0,&uStack_50 + 4);
                    if (iVar1 < 0) goto code_r0x0800f7f0;
                    in_x3 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1_00,0,&uStack_50 + 4);
                    if (iVar1 < 0) goto code_r0x0800f7f0;
                    in_x3 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1_00,0,&uStack_50 + 4);
                    if (iVar1 < 0) goto code_r0x0800f7f0;
                    in_x3 = uStack_50._4_4_;
                    if (uStack_50._4_4_ < 0x2055) {
                        if (uStack_50._4_4_ == 0x1852) goto code_r0x0800fbd0;
                        if (uStack_50._4_4_ == 0x2013) goto code_r0x0800fbfc;
                        if (uStack_50._4_4_ == 0x2032) goto code_r0x0800f8ac;
                    }
                    else {
                        if (uStack_50._4_4_ == 0x2055) goto code_r0x0800fc8c;
                        if (uStack_50._4_4_ == 0x2071) goto code_r0x0800fcb8;
                        if (uStack_50._4_4_ == 0x2113) goto code_r0x0800f948;
                    }
                    iVar11 = (*pcVar13)[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **pcVar13;
                    }
                    _printk(0x8002452,iVar11,"aw882xx_read_chipid");
                    msleep(5);
                    iVar1 = sym.aw882xx_i2c_read(arg1_00,0,&uStack_50 + 4);
                    if (-1 < iVar1) {
                        in_x3 = uStack_50._4_4_;
                        if (0x2054 < uStack_50._4_4_) goto code_r0x0800fc2c;
                        if (uStack_50._4_4_ != 0x1852) {
                            if (uStack_50._4_4_ != 0x2013) {
                                if (uStack_50._4_4_ != 0x2032) goto code_r0x0800fc50;
code_r0x0800f8ac:
                                iVar11 = (*pcVar13)[0xe];
                                if (iVar11 == 0) {
                                    iVar11 = **pcVar13;
                                }
                                _printk(0x8004a90,iVar11,"aw882xx_read_chipid");
                                uVar7 = 0x2032;
                                goto code_r0x0800fce0;
                            }
code_r0x0800fbfc:
                            iVar11 = (*pcVar13)[0xe];
                            if (iVar11 == 0) {
                                iVar11 = **pcVar13;
                            }
                            _printk(0x8005dc1,iVar11,"aw882xx_read_chipid");
                            uVar7 = 0x2013;
                            goto code_r0x0800fce0;
                        }
code_r0x0800fbd0:
                        iVar11 = (*pcVar13)[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **pcVar13;
                        }
                        _printk(0x8005d98,iVar11,"aw882xx_read_chipid");
                        uVar7 = 0x1852;
                        goto code_r0x0800fce0;
                    }
                }
code_r0x0800f7f0:
                iVar11 = (*pcVar13)[0xe];
                if (iVar11 == 0) {
                    iVar11 = **pcVar13;
                }
                _printk(0x8008cfc,iVar11,"aw882xx_read_chipid",iVar1);
                pcVar12 = 0xfffffffb;
                iVar11 = *(arg1 + 0x90);
                if (iVar11 != 0) goto code_r0x0800f824;
                goto code_r0x0800f820;
            }
            in_x3 = "aw882xx_rst";
            uVar2 = devm_gpio_request_one(*pcVar13,*(arg1_00 + 0x18),0);
            if (uVar2 == 0) goto code_r0x0800f784;
            pcVar12 = uVar2;
            iVar11 = (*pcVar13)[0xe];
            if (iVar11 == 0) {
                iVar11 = **pcVar13;
            }
            uVar5 = 0x8005684;
code_r0x0800f914:
            _printk(uVar5,iVar11,"aw882xx_gpio_request");
            goto code_r0x0800f4ac;
        }
    }
    arg1_00 = pcVar10;
    _dev_err(arg1 + 0x20,"devm_kzalloc failed.");
    iVar11 = *(arg1 + 0x90);
    if (iVar11 == 0) {
        iVar11 = *arg3;
    }
    _printk(0x8003ce8,iVar11,"aw882xx_i2c_probe");
    pcVar12 = 0xfffffff4;
code_r0x0800f4ac:
    do {
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_48) {
            return pcVar12;
        }
        __stack_chk_fail();
code_r0x0800fc2c:
        iVar1 = in_x3;
        if (iVar1 != 0x2055) {
            if (iVar1 == 0x2071) {
code_r0x0800fcb8:
                iVar11 = (*pcVar13)[0xe];
                if (iVar11 == 0) {
                    iVar11 = **pcVar13;
                }
                _printk(0x8004e09,iVar11,"aw882xx_read_chipid");
                uVar7 = 0x2071;
                goto code_r0x0800fce0;
            }
            if (iVar1 == 0x2113) {
code_r0x0800f948:
                iVar11 = (*pcVar13)[0xe];
                if (iVar11 == 0) {
                    iVar11 = **pcVar13;
                }
                _printk(0x8002429,iVar11,"aw882xx_read_chipid");
                uVar7 = 0x2113;
                goto code_r0x0800fce0;
            }
code_r0x0800fc50:
            iVar11 = (*pcVar13)[0xe];
            if (iVar11 == 0) {
                iVar11 = **pcVar13;
            }
            _printk(0x8002452,iVar11,"aw882xx_read_chipid");
            msleep(5);
            pcVar12 = 0xffffffea;
            iVar11 = *(arg1 + 0x90);
            if (iVar11 == 0) {
code_r0x0800f820:
                iVar11 = *arg3;
            }
code_r0x0800f824:
            in_x3 = pcVar12;
            _printk(0x80023f4,iVar11,"aw882xx_i2c_probe");
            arg2 = "PA internal exception";
            iVar11 = 0x36007bc7;
            goto code_r0x0800f84c;
        }
code_r0x0800fc8c:
        iVar11 = (*pcVar13)[0xe];
        if (iVar11 == 0) {
            iVar11 = **pcVar13;
        }
        _printk(0x800358d,iVar11,"aw882xx_read_chipid");
        uVar7 = 0x2055;
code_r0x0800fce0:
        uVar3 = _segment.ehdr;
        *(*(arg1_00 + 0x68) + 8) = uVar7;
        uVar3 = sym.aw882xx_init(arg1_00,uVar3);
        pcVar12 = uVar3 & 0xffffffff;
    } while (uVar3 != 0);
    sym.aw882xx_interrupt_init(arg1_00);
    uVar2 = sym.aw_componet_codec_register(arg1_00);
    if (uVar2 == 0) {
        uVar3 = sysfs_create_group(arg3,obj.aw882xx_attribute_group);
        pcVar12 = uVar3 & 0xffffffff;
        if (-1 < uVar3) {
            puVar9 = *(arg1_00 + 0x68);
            *(arg1 + 0xb8) = arg1_00;
            arg1_00[0x50] = 0x0;
            *(arg1_00 + 0x54) = 0xff00000000;
            *(arg1_00 + 0x60) = 0;
            arg1_00[0x10] = SUB41(*puVar9,0);
            arg1_00 = obj.g_aw882xx_lock;
            mutex_lock(obj.g_aw882xx_lock);
            _segment.ehdr = _segment.ehdr + 1;
            mutex_unlock(obj.g_aw882xx_lock);
            iVar11 = *(arg1 + 0x90);
            if (iVar11 == 0) {
                iVar11 = *arg3;
            }
            in_x3 = _segment.ehdr;
            _printk(0x8008512,iVar11,"aw882xx_i2c_probe");
            goto code_r0x0800f4ac;
        }
        iVar11 = (*pcVar13)[0xe];
        if (iVar11 == 0) {
            iVar11 = **pcVar13;
        }
        _printk(0x8003907,iVar11,"aw882xx_i2c_probe");
        arg1 = CONCAT44(*0x8000004,_segment.ehdr);
        if (arg1 != sym.__typeid__ZTSFvP6deviceE_global_addr) {
            __cfi_slowpath_diag(0x5b83a3fd302a5421,arg1,0x80014c0);
        }
        (*arg1)(arg3);
        arg2 = "PA i2c exception";
        iVar11 = 0x36007bc9;
    }
    else {
        pcVar12 = uVar2;
        iVar11 = *(arg1 + 0x90);
        if (iVar11 == 0) {
            iVar11 = *arg3;
        }
        _printk(0x800942c,iVar11,"aw882xx_i2c_probe");
        arg2 = "PA detection exception";
        iVar11 = 0x36007bc8;
    }
code_r0x0800f84c:
    sym.mievent_report(iVar11,arg2,arg3);
    goto code_r0x0800f4ac;
}


// ===== sym.aw882xx_i2c_remove @ 0x0800fe54 (size 376) =====

ulong sym.aw882xx_i2c_remove(int64_t arg1)

{
    int iVar1;
    uint uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0xb8);
    iVar3 = (*(iVar4 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(iVar4 + 0x48);
    }
    _printk(0x8004092,iVar3,"aw882xx_i2c_remove");
    gpio_to_desc(*(iVar4 + 0x1c));
    iVar1 = gpiod_to_irq();
    if (iVar1 != 0) {
        gpio_to_desc(*(iVar4 + 0x1c));
        uVar2 = gpiod_to_irq();
        devm_free_irq(arg1 + 0x20,uVar2,iVar4);
    }
    if (*(iVar4 + 0x1c) < 0x200) {
        devm_gpio_free(arg1 + 0x20);
    }
    if (*(iVar4 + 0x18) < 0x200) {
        devm_gpio_free(arg1 + 0x20);
    }
    if (*(iVar4 + 0x20) < 0x200) {
        devm_gpio_free(arg1 + 0x20);
    }
    sysfs_remove_group(arg1 + 0x20,obj.aw882xx_attribute_group);
    iVar3 = *(iVar4 + 0x68);
    sym.aw882xx_monitor_deinit(iVar3 + 0x200);
    sym.aw882xx_cali_deinit(iVar3 + 0x1e8);
    pcVar5 = *(*(iVar4 + 0x38) + 0x18);
    if (pcVar5 != sym.__typeid__ZTSFvP6deviceE_global_addr) {
        __cfi_slowpath_diag(0x5b83a3fd302a5421,pcVar5,0x80015a0);
    }
    (*pcVar5)(arg1 + 0x20);
    mutex_lock(obj.g_aw882xx_lock);
    iVar1 = _segment.ehdr + -1;
    _segment.ehdr = CONCAT44(*0x8000004,iVar1);
    if ((iVar1 == 0) && (_segment.ehdr != 0)) {
        vfree();
        _segment.ehdr = 0;
    }
    mutex_unlock(obj.g_aw882xx_lock);
    return 0;
}


// ===== sym.aw882xx_i2c_shutdown @ 0x0800ffcc (size 108) =====

void sym.aw882xx_i2c_shutdown(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xb8);
    iVar1 = (*(iVar2 + 0x48))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(iVar2 + 0x48);
    }
    _printk(0x8004092,iVar1,"aw882xx_i2c_shutdown");
    mutex_lock(iVar2 + 0x298);
    sym.aw882xx_device_stop(*(iVar2 + 0x68));
    mutex_unlock(iVar2 + 0x298);
    return;
}


// ===== sym.aw882xx_interrupt_init @ 0x08010038 (size 224) =====

void sym.aw882xx_interrupt_init(uint32_t arg1)

{
    uint uVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    piVar4 = *(uVar3 + 0x48);
    if (*(uVar3 + 0x1c) < 0x200) {
        gpio_to_desc();
        uVar1 = gpiod_to_irq();
        iVar2 = devm_request_threaded_irq
                          (piVar4,uVar1,0,sym.aw882xx_irq.fc2486704268e85b1991da4eb2e27198.cfi_jt,0x2002,"aw882xx"
                           ,uVar3);
        if (iVar2 != 0) {
            iVar5 = (*(uVar3 + 0x48))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(uVar3 + 0x48);
            }
            gpio_to_desc(*(uVar3 + 0x1c));
            uVar1 = gpiod_to_irq();
            _printk(0x800315d,iVar5,"aw882xx_interrupt_init",uVar1,iVar2);
        }
    }
    else {
        iVar5 = piVar4[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar4;
        }
        _printk(0x80039de,iVar5,"aw882xx_interrupt_init");
    }
    return;
}


// ===== sym.aw882xx_irq @ 0x08010118 (size 152) =====

ulong sym.aw882xx_irq(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8004796,"aw882xx_irq");
        uVar1 = 0xffffffea;
    }
    else {
        iVar2 = (*(arg1 + 0x48))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x48);
        }
        _printk(0x8004092,iVar2,"aw882xx_irq");
        sym.aw882xx_dev_set_intmask(*(arg1 + 0x68));
        if (*(arg1 + 0x70) != 0) {
            queue_delayed_work_on(0x20,*(arg1 + 0x70),arg1 + 0x100,0);
        }
        uVar1 = 1;
    }
    return uVar1;
}


// ===== sym.aw882xx_reg_show @ 0x080101b0 (size 400) =====

uint64_t sym.aw882xx_reg_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t in_x3;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar7;
    int64_t iVar8;
    code *pcVar9;
    uint64_t uVar10;
    char *pcVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uint64_t uStack_130;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    code *pcStack_100;
    int64_t iStack_f8;
    code *pcStack_e8;
    uint uStack_dc;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    code *pcStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x98);
    uStack_6c = 0;
    pcVar9 = *(*(iVar7 + 0x68) + 0x3a8);
    pcVar11 = arg2;
    if (8 < (pcVar9 + -0x800b8c0 >> 3 | pcVar9 << 0x3d)) {
        pcVar11 = 0x8001500;
        noname_1 = __cfi_slowpath_diag(0x2b3a43e29242445,pcVar9,0x8001500);
    }
    iVar1 = (*pcVar9)(noname_1);
    if (iVar1 < 1) {
        uVar10 = 0;
    }
    else {
        uVar12 = 0;
        uVar10 = 0;
        do {
            pcVar9 = *(*(iVar7 + 0x68) + 0x3a0);
            if (0xd < (pcVar9 + -0x800bac0 >> 3 | pcVar9 << 0x3d)) {
                pcVar11 = 0x8001520;
                pcStack_78 = pcVar9;
                __cfi_slowpath_diag(0xb956711316021ea3,pcVar9,0x8001520);
                pcVar9 = pcStack_78;
            }
            uVar3 = (*pcVar9)(uVar12);
            if ((uVar3 & 1) != 0) {
                sym.aw882xx_i2c_read(iVar7,uVar12,&uStack_6c);
                in_x3 = uVar12;
                pcVar11 = "reg:0x%02x=0x%04x\n";
                iVar2 = snprintf(arg2 + uVar10,0x1000 - uVar10,"reg:0x%02x=0x%04x\n",in_x3,uStack_6c);
                uVar10 = uVar10 + iVar2;
            }
            uVar12 = uVar12 + 1 & 0xff;
        } while (uVar12 < iVar1);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_68) {
        iVar4 = __stack_chk_fail();
        pcVar9 = &uStack_b0;
        *extraout_x18 = sym.aw882xx_reg_store;
        pcStack_98 = sym.aw882xx_reg_store;
        iVar8 = sp_el0;
        iStack_a8 = *(iVar8 + 0x5e0);
        iVar8 = *(iVar4 + 0x98);
        uVar3 = &uStack_b0 | 4;
        uStack_b0 = 0;
        puStack_a0 = &stack0xffffffffffffffa0;
        iStack_90 = arg2;
        iStack_88 = iVar7;
        iVar1 = sscanf(pcVar11,"%x %x",&uStack_b0,uVar3);
        if (iVar1 == 2) {
            pcVar9 = uStack_b0 >> 0x20;
            sym.aw882xx_i2c_write(iVar8,uStack_b0 & 0xffffffff,pcVar9);
        }
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) != iStack_a8) {
            iVar4 = __stack_chk_fail();
            *extraout_x18_00 = sym.aw882xx_rw_show;
            pcStack_c8 = sym.aw882xx_rw_show;
            iVar7 = sp_el0;
            iStack_d8 = *(iVar7 + 0x5e0);
            iVar7 = *(iVar4 + 0x98);
            uStack_dc = 0;
            pcVar6 = *(*(iVar7 + 0x68) + 0x3a0);
            pcVar11 = pcVar9;
            ppuStack_d0 = &puStack_a0;
            iStack_c0 = iVar8;
            uStack_b8 = in_x3;
            if (0xd < (pcVar6 + -0x800bac0 >> 3 | pcVar6 << 0x3d)) {
                pcVar11 = 0x8001540;
                pcStack_e8 = pcVar6;
                __cfi_slowpath_diag(0xb956711316021ea3,pcVar6);
                pcVar6 = pcStack_e8;
            }
            uVar5 = (*pcVar6)(*(iVar7 + 0x2a));
            if ((uVar5 & 1) == 0) {
                uVar5 = 0;
            }
            else {
                sym.aw882xx_i2c_read(iVar7,*(iVar7 + 0x2a),&uStack_dc);
                uVar3 = *(iVar7 + 0x2a);
                pcVar11 = "reg:0x%02x=0x%04x\n";
                iVar1 = snprintf(pcVar9,0x1000,"reg:0x%02x=0x%04x\n",uVar3,uStack_dc);
                uVar5 = iVar1;
            }
            iVar8 = sp_el0;
            if (*(iVar8 + 0x5e0) == iStack_d8) {
                return uVar5;
            }
            iVar4 = __stack_chk_fail(uVar5);
            *extraout_x18_01 = sym.aw882xx_rw_store;
            pcStack_118 = sym.aw882xx_rw_store;
            iVar8 = sp_el0;
            iStack_128 = *(iVar8 + 0x5e0);
            iVar8 = *(iVar4 + 0x98);
            uStack_130 = 0;
            pppuStack_120 = &ppuStack_d0;
            uStack_110 = uVar10;
            pcStack_100 = pcVar9;
            iStack_f8 = iVar7;
            iVar1 = sscanf(pcVar11,"%x %x",&uStack_130,&uStack_130 | 4);
            if (iVar1 == 2) {
                *(iVar8 + 0x2a) = uStack_130;
                pcVar11 = *(*(iVar8 + 0x68) + 0x3a0);
                if (0xd < (pcVar11 + -0x800bac0 >> 3 | pcVar11 << 0x3d)) goto code_r0x080105c0;
                uVar10 = (*pcVar11)();
                while( true ) {
                    if ((uVar10 & 1) != 0) {
                        sym.aw882xx_i2c_write(iVar8,uStack_130 & 0xffffffff,uStack_130 >> 0x20);
                    }
code_r0x08010588:
                    iVar7 = sp_el0;
                    if (*(iVar7 + 0x5e0) == iStack_128) break;
                    __stack_chk_fail();
code_r0x080105c0:
                    __cfi_slowpath_diag(0xb956711316021ea3,pcVar11,0x8001560);
                    uVar10 = (*pcVar11)(uStack_130 & 0xffffffff);
                }
                return uVar3;
            }
            iVar1 = sscanf(pcVar11,0x80074fd,&uStack_130);
            if (iVar1 != 1) goto code_r0x08010588;
            *(iVar8 + 0x2a) = uStack_130;
            goto code_r0x08010588;
        }
        return in_x3;
    }
    return uVar10;
}


// ===== sym.aw882xx_reg_store @ 0x08010340 (size 152) =====

uint64_t sym.aw882xx_reg_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    code *arg3_00;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong unaff_x30;
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uchar **ppuStack_a0;
    code *pcStack_98;
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    arg3_00 = &uStack_30;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x98);
    uVar4 = &uStack_30 | 4;
    uStack_30 = 0;
    iVar1 = sscanf(arg2,"%x %x",&uStack_30,uVar4);
    if (iVar1 == 2) {
        arg3_00 = uStack_30 >> 0x20;
        sym.aw882xx_i2c_write(iVar7,uStack_30 & 0xffffffff,arg3_00);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_rw_show;
    pcStack_48 = sym.aw882xx_rw_show;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar2 + 0x98);
    uStack_5c = 0;
    pcVar5 = *(*(iVar6 + 0x68) + 0x3a0);
    pcVar8 = arg3_00;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = iVar7;
    iStack_38 = arg3;
    if (0xd < (pcVar5 + -0x800bac0 >> 3 | pcVar5 << 0x3d)) {
        pcVar8 = 0x8001540;
        __cfi_slowpath_diag(0xb956711316021ea3,pcVar5);
    }
    uVar3 = (*pcVar5)(*(iVar6 + 0x2a));
    if ((uVar3 & 1) == 0) {
        uVar3 = 0;
    }
    else {
        sym.aw882xx_i2c_read(iVar6,*(iVar6 + 0x2a),&uStack_5c);
        uVar4 = *(iVar6 + 0x2a);
        pcVar8 = "reg:0x%02x=0x%04x\n";
        iVar1 = snprintf(arg3_00,0x1000,"reg:0x%02x=0x%04x\n",uVar4,uStack_5c);
        uVar3 = iVar1;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    iVar6 = __stack_chk_fail(uVar3);
    *extraout_x18_00 = sym.aw882xx_rw_store;
    pcStack_98 = sym.aw882xx_rw_store;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    iVar7 = *(iVar6 + 0x98);
    uStack_b0 = 0;
    ppuStack_a0 = &puStack_50;
    iVar1 = sscanf(pcVar8,"%x %x",&uStack_b0,&uStack_b0 | 4);
    if (iVar1 == 2) {
        *(iVar7 + 0x2a) = uStack_b0;
        pcVar8 = *(*(iVar7 + 0x68) + 0x3a0);
        if (0xd < (pcVar8 + -0x800bac0 >> 3 | pcVar8 << 0x3d)) goto code_r0x080105c0;
        uVar3 = (*pcVar8)();
        while( true ) {
            if ((uVar3 & 1) != 0) {
                sym.aw882xx_i2c_write(iVar7,uStack_b0 & 0xffffffff,uStack_b0 >> 0x20);
            }
code_r0x08010588:
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_a8) break;
            __stack_chk_fail();
code_r0x080105c0:
            __cfi_slowpath_diag(0xb956711316021ea3,pcVar8,0x8001560);
            uVar3 = (*pcVar8)(uStack_b0 & 0xffffffff);
        }
        return uVar4;
    }
    iVar1 = sscanf(pcVar8,0x80074fd,&uStack_b0);
    if (iVar1 != 1) goto code_r0x08010588;
    *(iVar7 + 0x2a) = uStack_b0;
    goto code_r0x08010588;
}


// ===== sym.aw882xx_rw_show @ 0x080103d8 (size 240) =====

uint64_t sym.aw882xx_rw_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t in_x3;
    code *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    char *pcVar6;
    ulong unaff_x30;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    uStack_2c = 0;
    pcVar4 = *(*(iVar5 + 0x68) + 0x3a0);
    pcVar6 = arg2;
    if (0xd < (pcVar4 + -0x800bac0 >> 3 | pcVar4 << 0x3d)) {
        pcVar6 = 0x8001540;
        noname_1 = __cfi_slowpath_diag(0xb956711316021ea3,pcVar4);
    }
    uVar2 = (*pcVar4)(noname_1,*(iVar5 + 0x2a));
    if ((uVar2 & 1) == 0) {
        uVar2 = 0;
    }
    else {
        sym.aw882xx_i2c_read(iVar5,*(iVar5 + 0x2a),&uStack_2c);
        in_x3 = *(iVar5 + 0x2a);
        pcVar6 = "reg:0x%02x=0x%04x\n";
        iVar1 = snprintf(arg2,0x1000,"reg:0x%02x=0x%04x\n",in_x3,uStack_2c);
        uVar2 = iVar1;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return uVar2;
    }
    iVar3 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.aw882xx_rw_store;
    pcStack_68 = sym.aw882xx_rw_store;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar3 + 0x98);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iVar1 = sscanf(pcVar6,"%x %x",&uStack_80,&uStack_80 | 4);
    if (iVar1 == 2) {
        *(iVar5 + 0x2a) = uStack_80;
        pcVar6 = *(*(iVar5 + 0x68) + 0x3a0);
        if (0xd < (pcVar6 + -0x800bac0 >> 3 | pcVar6 << 0x3d)) goto code_r0x080105c0;
        uVar2 = (*pcVar6)();
        while( true ) {
            if ((uVar2 & 1) != 0) {
                sym.aw882xx_i2c_write(iVar5,uStack_80 & 0xffffffff,uStack_80 >> 0x20);
            }
code_r0x08010588:
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_78) break;
            __stack_chk_fail();
code_r0x080105c0:
            __cfi_slowpath_diag(0xb956711316021ea3,pcVar6,0x8001560);
            uVar2 = (*pcVar6)(uStack_80 & 0xffffffff);
        }
        return in_x3;
    }
    iVar1 = sscanf(pcVar6,0x80074fd,&uStack_80);
    if (iVar1 != 1) goto code_r0x08010588;
    *(iVar5 + 0x2a) = uStack_80;
    goto code_r0x08010588;
}


// ===== sym.aw882xx_rw_store @ 0x080104c8 (size 296) =====

int64_t sym.aw882xx_rw_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x98);
    uStack_40 = 0;
    iVar2 = sscanf(arg2,"%x %x",&uStack_40,&uStack_40 | 4);
    if (iVar2 == 2) {
        *(iVar4 + 0x2a) = uStack_40;
        arg2 = *(*(iVar4 + 0x68) + 0x3a0);
        if (0xd < (arg2 + -0x800bac0 >> 3 | arg2 << 0x3d)) goto code_r0x080105c0;
        uVar3 = (*arg2)();
        while( true ) {
            if ((uVar3 & 1) != 0) {
                sym.aw882xx_i2c_write(iVar4,uStack_40 & 0xffffffff,uStack_40 >> 0x20);
            }
code_r0x08010588:
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
code_r0x080105c0:
            __cfi_slowpath_diag(0xb956711316021ea3,arg2,0x8001560);
            uVar3 = (*arg2)(uStack_40 & 0xffffffff);
        }
        return arg3;
    }
    iVar2 = sscanf(arg2,0x80074fd,&uStack_40);
    if (iVar2 != 1) goto code_r0x08010588;
    *(iVar4 + 0x2a) = uStack_40;
    goto code_r0x08010588;
}


// ===== sym.aw882xx_awrw_show @ 0x080105f0 (size 420) =====

int64_t sym.aw882xx_awrw_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uchar *arg3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t arg4;
    uchar *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x98);
    if (*(arg1_00 + 0x50) == '\x01') {
        uVar1 = *(arg1_00 + 0x54) * 2;
        arg4 = uVar1;
        arg3 = __kmalloc(uVar1,0xcc0);
        if (arg3 == NULL) {
            iVar4 = (*(arg1_00 + 0x48))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(arg1_00 + 0x48);
            }
            _printk(0x8002488,iVar4,"aw882xx_awrw_show");
            iVar2 = -0x16;
        }
        else {
            iVar2 = sym.aw882xx_i2c_reads(arg1_00,*(arg1_00 + 0x58),arg3,arg4);
            if (iVar2 < 0) {
                iVar2 = -0xe;
            }
            else {
                iVar4 = (*(arg1_00 + 0x48))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1_00 + 0x48);
                }
                _printk(0x8004452,iVar4,"aw882xx_awrw_show",*(arg1_00 + 0x58),*(arg1_00 + 0x54));
                if (uVar1 < 1) {
                    iVar2 = 0;
                }
                else {
                    iVar2 = 0;
                    puVar5 = arg3;
                    do {
                        iVar3 = snprintf(arg2 + iVar2,0x1000 - iVar2,"0x%02x,",*puVar5);
                        iVar4 = (*(arg1_00 + 0x48))[0xe];
                        if (iVar4 == 0) {
                            iVar4 = **(arg1_00 + 0x48);
                        }
                        iVar2 = iVar3 + iVar2;
                        _printk(0x8008545,iVar4,"aw882xx_awrw_show",*puVar5);
                        arg4 = arg4 - 1;
                        puVar5 = puVar5 + 1;
                    } while (arg4 != 0);
                }
            }
            kfree(arg3);
        }
        iVar4 = iVar2;
        *(arg1_00 + 0x50) = 0;
    }
    else {
        iVar4 = (*(arg1_00 + 0x48))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1_00 + 0x48);
        }
        _printk(0x80058e0,iVar4,"aw882xx_awrw_show");
        iVar4 = -0x16;
    }
    return iVar4;
}


// ===== sym.aw882xx_awrw_store @ 0x08010794 (size 1092) =====

uint64_t sym.aw882xx_awrw_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    uchar *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    uint64_t uVar9;
    code *pcVar10;
    uint64_t uVar11;
    int64_t unaff_x26;
    ulong unaff_x30;
    uint32_t uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    int aiStack_70 [2];
    int64_t iStack_68;
    
    uVar9 = arg3;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if (0x17 < uVar9) {
        unaff_x26 = *(arg1 + 0x98);
        aiStack_70[0] = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        iVar3 = sscanf(arg2,"0x%02x 0x%02x 0x%02x 0x%02x 0x%02x",&uStack_80,&uStack_80 | 4,&uStack_78,
                       &uStack_78 + 4,aiStack_70);
        if (iVar3 == 5) {
            arg1 = *(*(unaff_x26 + 0x68) + 0x3a8);
            if (8 < (arg1 + -0x800b8c0 >> 3 | arg1 << 0x3d)) goto code_r0x08010bb4;
            goto code_r0x08010880;
        }
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        uVar4 = 0x8007500;
        pcVar8 = "aw882xx_awrw_parse_buf";
        goto code_r0x0801094c;
    }
    iVar6 = *(arg1 + 0x70);
    if (iVar6 == 0) {
        iVar6 = *arg1;
    }
    _printk(0x8004128,iVar6,"aw882xx_awrw_store");
    iVar6 = *(arg1 + 0x70);
    if (iVar6 == 0) {
        iVar6 = *arg1;
    }
    _printk(0x8007211,iVar6,"aw882xx_awrw_store",arg2);
code_r0x08010a00:
    do {
        uVar9 = 0xffffffffffffffea;
code_r0x08010a04:
        while( true ) {
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_68) {
                return uVar9;
            }
            __stack_chk_fail();
code_r0x08010bb4:
            __cfi_slowpath_diag(0x2b3a43e29242445,arg1,0x8001580);
code_r0x08010880:
            iVar3 = (*arg1)();
            if ((uStack_80._4_4_ != 1) || (uStack_78 != 2)) {
                iVar6 = (*(unaff_x26 + 0x48))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(unaff_x26 + 0x48);
                }
                _printk(0x8002d1c,iVar6,"aw882xx_awrw_data_check");
                goto code_r0x08010a00;
            }
            if (iVar3 <= aiStack_70[0]) {
                iVar6 = (*(unaff_x26 + 0x48))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(unaff_x26 + 0x48);
                }
                _printk(0x800590f,iVar6,"aw882xx_awrw_data_check",aiStack_70[0],iVar3);
                goto code_r0x08010a00;
            }
            *(unaff_x26 + 0x54) = uStack_78._4_4_;
            *(unaff_x26 + 0x58) = aiStack_70[0];
            if (uStack_80 != 1) break;
            *(unaff_x26 + 0x50) = 1;
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x80056af,iVar6,"aw882xx_awrw_parse_buf");
        }
        if (uStack_80 != 0) {
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x80028d4,iVar6,"aw882xx_awrw_parse_buf",uStack_80 & 0xffffffff);
            goto code_r0x08010a00;
        }
        uStack_84 = 0;
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        _printk(0x8006e0a,iVar6,"aw882xx_awrw_write");
        if (uVar9 + -0x19 < *(unaff_x26 + 0x54) * 10 + -1) {
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x8002912,iVar6,"aw882xx_awrw_write");
            goto code_r0x08010a00;
        }
        uVar2 = *(unaff_x26 + 0x54) * 2;
        pcVar10 = uVar2 | 1;
        puVar5 = __kmalloc(uVar2 | 1,0xcc0);
        arg1 = pcVar10;
        if (puVar5 == NULL) {
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            uVar4 = 0x80035b6;
            pcVar8 = "aw882xx_awrw_write";
code_r0x0801094c:
            _printk(uVar4,iVar6,pcVar8);
            goto code_r0x08010a00;
        }
        uVar1 = *(unaff_x26 + 0x58);
        *puVar5 = uVar1;
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        _printk(0x8008199,iVar6,"aw882xx_awrw_write",uVar1 & 0xff);
        if (0 < uVar2) {
            arg1 = arg2 + 0x19;
            iVar6 = 0;
            uVar11 = 0;
            do {
                sscanf(arg1 + (iVar6 >> 0x20),"0x%02x",&uStack_84);
                puVar5[uVar11 + 1] = uStack_84;
                iVar7 = (*(unaff_x26 + 0x48))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(unaff_x26 + 0x48);
                }
                _printk(0x80035dd,iVar7,"aw882xx_awrw_write",uVar11 & 0xffffffff,uStack_84 & 0xff);
                uVar11 = uVar11 + 1;
                iVar6 = iVar6 + 0x500000000;
            } while (uVar2 != uVar11);
        }
        iVar3 = i2c_transfer_buffer_flags(*(unaff_x26 + 0x40),puVar5,pcVar10,0);
        arg2 = puVar5;
        if (-1 < iVar3) {
            kfree(puVar5);
            iVar6 = (*(unaff_x26 + 0x48))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(unaff_x26 + 0x48);
            }
            _printk(0x800318d,iVar6,"aw882xx_awrw_write");
            goto code_r0x08010a04;
        }
        iVar6 = (*(unaff_x26 + 0x48))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(unaff_x26 + 0x48);
        }
        _printk(0x8004e55,iVar6,"aw882xx_awrw_write");
        kfree(puVar5);
    } while( true );
}


// ===== sym.aw882xx_drv_ver_show @ 0x08010bd8 (size 64) =====

int64_t sym.aw882xx_drv_ver_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"driver_ver: %s \n","v1.11.0");
    return iVar1;
}


// ===== sym.aw882xx_fade_step_show @ 0x08010c18 (size 72) =====

int64_t sym.aw882xx_fade_step_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg2,0x1000,"step: %d \n",*(*(*(arg1 + 0x98) + 0x68) + 0x30));
    return iVar1;
}


// ===== sym.aw882xx_fade_step_store @ 0x08010c60 (size 224) =====

int64_t sym.aw882xx_fade_step_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    uStack_30 = 0;
    iVar1 = sscanf(arg2,0x8001f80,&uStack_30);
    if (iVar1 == 1) {
        if (*(*(iVar5 + 0x68) + 0x1cc) < uStack_30) {
            iVar3 = (*(iVar5 + 0x48))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(iVar5 + 0x48);
            }
            uVar2 = 0x8008d3b;
            goto code_r0x08010d00;
        }
        *(*(iVar5 + 0x68) + 0x30) = uStack_30;
    }
    iVar3 = (*(iVar5 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(iVar5 + 0x48);
    }
    uVar2 = 0x80081bd;
code_r0x08010d00:
    pcVar4 = "aw882xx_fade_step_store";
    _printk(uVar2,iVar3,"aw882xx_fade_step_store",uStack_30);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dbg_prof_show;
    iVar1 = snprintf(pcVar4,0x1000," %d \n",*(*(iVar5 + 0x98) + 0x13));
    return iVar1;
}


// ===== sym.aw882xx_dbg_prof_show @ 0x08010d40 (size 68) =====

int64_t sym.aw882xx_dbg_prof_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg2,0x1000," %d \n",*(*(arg1 + 0x98) + 0x13));
    return iVar1;
}


// ===== sym.aw882xx_dbg_prof_store @ 0x08010d84 (size 188) =====

int64_t sym.aw882xx_dbg_prof_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    int iVar3;
    int64_t iVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    ulong unaff_x30;
    uint uStack_5c;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    int64_t iStack_40;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x98);
    uStack_30 = 0;
    iVar3 = sscanf(arg2,0x8001f80,&uStack_30);
    if (iVar3 == 1) {
        *(iVar8 + 0x13) = uStack_30 != 0;
    }
    piVar7 = *(iVar8 + 0x48);
    iVar8 = piVar7[0xe];
    if (iVar8 == 0) {
        iVar8 = *piVar7;
    }
    pcVar5 = "aw882xx_dbg_prof_store";
    _printk(0x80024c6,iVar8,"aw882xx_dbg_prof_store",uStack_30 & 0xffffffff);
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dsp_re_show;
    pcStack_48 = sym.aw882xx_dsp_re_show;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_5c = 0;
    pcVar6 = pcVar5;
    puStack_50 = &stack0xffffffffffffffe0;
    iStack_40 = arg3;
    iVar3 = sym.aw882xx_dsp_read_cali_re(*(*(iVar4 + 0x98) + 0x68),&uStack_5c);
    uVar2 = str.read_dsp_re_failed__n._0_8_;
    if (iVar3 == 0) {
        pcVar6 = "%d \n";
        iVar3 = snprintf(pcVar5,0x1000,"%d \n",uStack_5c);
        iVar8 = iVar3;
    }
    else {
        iVar8 = 0x14;
        uVar1 = CONCAT35(str.read_dsp_re_failed__n._13_3_,str.read_dsp_re_failed__n._8_5_);
        *(pcVar5 + 0xd) = CONCAT53(str.read_dsp_re_failed__n._16_5_,str.read_dsp_re_failed__n._13_3_);
        *pcVar5 = uVar2;
        *(pcVar5 + 8) = uVar1;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    iVar8 = __stack_chk_fail(iVar8);
    *extraout_x18_00 = sym.aw882xx_sync_flag_show;
    iVar3 = snprintf(pcVar6,0x1000,"sync flag : %d\n",*(*(iVar8 + 0x98) + 0x11));
    return iVar3;
}


// ===== sym.aw882xx_dsp_re_show @ 0x08010e40 (size 172) =====

int64_t sym.aw882xx_dsp_re_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    uStack_2c = 0;
    pcVar6 = arg2;
    iVar4 = sym.aw882xx_dsp_read_cali_re(*(*(arg1 + 0x98) + 0x68),&uStack_2c);
    uVar3 = str.read_dsp_re_failed__n._0_8_;
    if (iVar4 == 0) {
        pcVar6 = "%d \n";
        iVar4 = snprintf(arg2,0x1000,"%d \n",uStack_2c);
        iVar5 = iVar4;
    }
    else {
        iVar5 = 0x14;
        uVar2 = CONCAT35(str.read_dsp_re_failed__n._13_3_,str.read_dsp_re_failed__n._8_5_);
        *(arg2 + 0xd) = CONCAT53(str.read_dsp_re_failed__n._16_5_,str.read_dsp_re_failed__n._13_3_);
        *arg2 = uVar3;
        *(arg2 + 8) = uVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar5 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.aw882xx_sync_flag_show;
    iVar4 = snprintf(pcVar6,0x1000,"sync flag : %d\n",*(*(iVar5 + 0x98) + 0x11));
    return iVar4;
}


// ===== sym.aw882xx_sync_flag_show @ 0x08010eec (size 68) =====

int64_t sym.aw882xx_sync_flag_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg2,0x1000,"sync flag : %d\n",*(*(arg1 + 0x98) + 0x11));
    return iVar1;
}


// ===== sym.aw882xx_sync_flag_store @ 0x08010f30 (size 192) =====

int64_t sym.aw882xx_sync_flag_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    pcVar3 = &uStack_2c;
    iVar5 = *(arg1 + 0x98);
    uStack_2c = 0;
    iVar1 = kstrtouint(arg2,0,pcVar3);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        piVar4 = *(iVar5 + 0x48);
        iVar2 = piVar4[0xe];
        uStack_2c = uStack_2c != 0;
        if (iVar2 == 0) {
            iVar2 = *piVar4;
        }
        pcVar3 = "aw882xx_sync_flag_store";
        _printk(0x8006e58,iVar2,"aw882xx_sync_flag_store");
        *(iVar5 + 0x11) = uStack_2c;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return arg3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_print_dbg_show;
    iVar1 = snprintf(pcVar3,0x1000,"g_print_dbg : %d\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw882xx_print_dbg_show @ 0x08010ff0 (size 64) =====

int64_t sym.aw882xx_print_dbg_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"g_print_dbg : %d\n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw882xx_print_dbg_store @ 0x08011030 (size 144) =====

int64_t sym.aw882xx_print_dbg_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    iVar1 = kstrtouint(arg2,0,obj.g_print_dbg);
    if (iVar1 < 0) {
        arg3 = iVar1;
    }
    else {
        piVar2 = *(iVar3 + 0x48);
        iVar3 = piVar2[0xe];
        _segment.ehdr = _segment.ehdr != 0;
        if (iVar3 == 0) {
            iVar3 = *piVar2;
        }
        _printk(0x8007d4e,iVar3,"aw882xx_print_dbg_store");
    }
    return arg3;
}


// ===== sym.aw882xx_algo_ver_show @ 0x080110c0 (size 200) =====

void sym.aw882xx_algo_ver_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uchar *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_28 = *(iVar7 + 0x5e0);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    iVar6 = sym.aw882xx_get_algo_version(*(*(arg1 + 0x98) + 0x68),&uStack_78);
    uVar4 = str.read_algo_version_failed__n._16_8_;
    uVar3 = str.read_algo_version_failed__n._8_8_;
    if (iVar6 < 0) {
        iVar7 = 0x1a;
        *(arg2 + 0x17) = 0xa2164;
        uVar2 = str.read_algo_version_failed__n._0_8_;
        *(arg2 + 8) = uVar3;
        *(arg2 + 0x10) = uVar4;
        *arg2 = uVar2;
    }
    else {
        iVar6 = snprintf(arg2,0x1000,0x80090b2,&uStack_78);
        iVar7 = iVar6;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar9 = __stack_chk_fail(iVar7);
        puVar8 = auVar9._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar9._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x80111e0);
        (*pcVar5)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08011188 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080111cc

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
    //switch table (4 cases) at 0x8001f20
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80111e0);
    (*pcVar1)();
}


// ===== sym.aw_check_sum @ 0x080111e0 (size 432) =====

ulong sym.aw_check_sum(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    ulong uVar4;
    int64_t iVar5;
    uint8_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    int64_t iVar11;
    int iVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,enter\n","aw_check_sum",0x68);
    if (99 < arg2) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8011390);
        (*pcVar3)();
    }
    iVar11 = arg1 + (arg2 & 0xffffffffU) * 0x48;
    uVar13 = *(iVar11 + 0x48) - *(iVar11 + 0x14);
    _printk("AWINIC_BIN %s,line= %d,aw_bin_parse p_check_sum = %p\n","aw_check_sum",0x6c,arg1 + uVar13 + 0x1c38);
    iVar2 = *(arg1 + uVar13 + 0x1c38);
    uVar1 = *(iVar11 + 0x14) + *(iVar11 + 0x28);
    if (uVar1 < 5) {
        iVar12 = 0;
    }
    else {
        uVar7 = uVar1 - 4;
        if (uVar7 < 2) {
            iVar12 = 0;
            iVar11 = 4;
        }
        else {
            uVar8 = uVar7 & 0xfffffffffffffffe;
            iVar9 = 0;
            iVar12 = 0;
            iVar11 = uVar8 + 4;
            puVar6 = uVar13 + arg1 + 0x1c3d;
            uVar10 = uVar8;
            do {
                uVar10 = uVar10 - 2;
                iVar9 = iVar9 + puVar6[-1];
                iVar12 = iVar12 + *puVar6;
                puVar6 = puVar6 + 2;
            } while (uVar10 != 0);
            iVar12 = iVar12 + iVar9;
            if (uVar7 == uVar8) goto code_r0x080112fc;
        }
        iVar5 = uVar1 - iVar11;
        puVar6 = arg1 + iVar11 + uVar13 + 0x1c38;
        do {
            iVar5 = iVar5 + -1;
            iVar12 = iVar12 + *puVar6;
            puVar6 = puVar6 + 1;
        } while (iVar5 != 0);
    }
code_r0x080112fc:
    _printk("AWINIC_BIN %s,line= %d,aw_bin_parse bin_num=%d, check_sum = 0x%x, sum_data = 0x%x\n","aw_check_sum",0x76
            ,arg2 & 0xffffffff,iVar2,iVar12);
    if (iVar12 == iVar2) {
        uVar4 = 0;
    }
    else {
        _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse check sum or check bin data len error\n","aw_check_sum",0x79)
        ;
        _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse bin_num=%d, check_sum = 0x%x, sum_data = 0x%x\n",
                "aw_check_sum",0x7a,arg2 & 0xffffffff,iVar2,iVar12);
        uVar4 = 0xfffffffd;
    }
    return uVar4;
}


// ===== sym.aw_check_data_version @ 0x08011390 (size 140) =====

ulong sym.aw_check_data_version(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,enter\n","aw_check_data_version",0x85);
    if (arg2 < 100) {
        if (*(arg1 + (arg2 & 0xffffffffU) * 0x48 + 0x24) == 1) {
            uVar2 = 0;
        }
        else {
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse Unrecognized this bin data version\n",
                    "aw_check_data_version",0x8c);
            uVar2 = 0xfffffffc;
        }
        return uVar2;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801141c);
    (*pcVar1)();
}


// ===== sym.aw_check_register_num_v1 @ 0x0801141c (size 340) =====

ulong sym.aw_check_register_num_v1(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    code *pcVar5;
    ulong uVar6;
    ulong *in_x18;
    uint32_t *puVar7;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,enter\n","aw_check_register_num_v1",0x96);
    if (arg2 < 100) {
        iVar8 = arg1 + (arg2 & 0xffffffffU) * 0x48;
        puVar7 = iVar8 + 0x48;
        uVar3 = *puVar7;
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse p_check_sum = %p\n","aw_check_register_num_v1",0x99,
                arg1 + uVar3 + 0x1c38);
        uVar1 = *(arg1 + uVar3 + 0x1c38);
        uVar3 = *(iVar8 + 0x3c) + *(iVar8 + 0x38);
        uVar4 = 0;
        if (uVar3 != 0) {
            uVar4 = (*(iVar8 + 0x28) - 4U) / uVar3;
        }
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse bin_num=%d, parse_register_num = 0x%x, check_register_num = 0x%x\n"
                ,"aw_check_register_num_v1",0xa1,arg2 & 0xffffffff,uVar1,uVar4);
        if (uVar1 == uVar4) {
            iVar2 = *(iVar8 + 0x28);
            uVar6 = 0;
            uVar3 = *puVar7;
            arg1 = arg1 + (arg2 & 0xffffffffU) * 0x48;
            *(arg1 + 0x4c) = uVar1;
            *(arg1 + 0x44) = iVar2 + -4;
            *puVar7 = uVar3 + 4;
        }
        else {
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse register num is error\n","aw_check_register_num_v1",0xa4)
            ;
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse bin_num=%d, parse_register_num = 0x%x, check_register_num = 0x%x\n"
                    ,"aw_check_register_num_v1",0xa5,arg2 & 0xffffffff,uVar1,uVar4);
            uVar6 = 0xfffffffb;
        }
        return uVar6;
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5512,0x8011570);
    (*pcVar5)();
}


// ===== sym.aw_check_dsp_reg_num_v1 @ 0x08011570 (size 352) =====

ulong sym.aw_check_dsp_reg_num_v1(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    code *pcVar6;
    ulong uVar7;
    ulong *in_x18;
    uint32_t *puVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,enter\n","aw_check_dsp_reg_num_v1",0xb7);
    if (arg2 < 100) {
        iVar9 = arg1 + (arg2 & 0xffffffffU) * 0x48;
        puVar8 = iVar9 + 0x48;
        iVar1 = arg1 + *puVar8;
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse p_check_sum = %p\n","aw_check_dsp_reg_num_v1",0xba,
                iVar1 + 0x1c38);
        uVar2 = *(iVar1 + 0x1c40);
        uVar3 = *(iVar1 + 0x1c3c);
        uVar5 = 0;
        if (uVar2 != 0) {
            uVar5 = (*(iVar9 + 0x28) - 0xcU) / uVar2;
        }
        *(iVar9 + 0x50) = uVar2;
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse bin_num=%d, parse_dsp_reg_num = 0x%x, check_dsp_reg_num = 0x%x\n",
                "aw_check_dsp_reg_num_v1",0xc5,arg2 & 0xffffffff,uVar3,uVar5);
        if (uVar3 == uVar5) {
            iVar4 = *(iVar9 + 0x28);
            uVar7 = 0;
            arg1 = arg1 + (arg2 & 0xffffffffU) * 0x48;
            uVar2 = *puVar8;
            *(arg1 + 0x54) = *(iVar1 + 0x1c38);
            *(arg1 + 0x4c) = uVar3;
            *(arg1 + 0x44) = iVar4 + -0xc;
            *puVar8 = uVar2 + 0xc;
        }
        else {
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse dsp reg num is error\n","aw_check_dsp_reg_num_v1",200);
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse bin_num=%d, parse_dsp_reg_num = 0x%x, check_dsp_reg_num = 0x%x\n"
                    ,"aw_check_dsp_reg_num_v1",0xc9,arg2 & 0xffffffff,uVar3,uVar5);
            uVar7 = 0xfffffffa;
        }
        return uVar7;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x80116d0);
    (*pcVar6)();
}


// ===== sym.aw_check_soc_app_num_v1 @ 0x080116d0 (size 348) =====

ulong sym.aw_check_soc_app_num_v1(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    code *pcVar6;
    ulong uVar7;
    ulong *in_x18;
    uint32_t *puVar8;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,enter\n","aw_check_soc_app_num_v1",0xde);
    if (arg2 < 100) {
        iVar9 = arg1 + (arg2 & 0xffffffffU) * 0x48;
        puVar8 = iVar9 + 0x48;
        iVar1 = arg1 + *puVar8;
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse p_check_sum = %p\n","aw_check_soc_app_num_v1",0xe2,
                iVar1 + 0x1c38);
        *(iVar9 + 0x58) = *(iVar1 + 0x1c38);
        iVar2 = *(iVar1 + 0x1c40);
        iVar5 = *(iVar9 + 0x28) + -0xc;
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse bin_num=%d, parse_soc_app_num = 0x%x, check_soc_app_num = 0x%x\n",
                "aw_check_soc_app_num_v1",0xed,arg2 & 0xffffffff,iVar2,iVar5);
        if (iVar2 == iVar5) {
            uVar3 = *puVar8;
            uVar7 = 0;
            arg1 = arg1 + (arg2 & 0xffffffffU) * 0x48;
            iVar5 = *(iVar9 + 0x28);
            *(arg1 + 0x4c) = iVar2;
            uVar4 = *(iVar1 + 0x1c3c);
            *puVar8 = uVar3 + 0xc;
            *(arg1 + 0x44) = iVar5 + -0xc;
            *(arg1 + 0x54) = uVar4;
        }
        else {
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse soc app num is error\n","aw_check_soc_app_num_v1",0xf0);
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse bin_num=%d, parse_soc_app_num = 0x%x, check_soc_app_num = 0x%x\n"
                    ,"aw_check_soc_app_num_v1",0xf1,arg2 & 0xffffffff,iVar2,iVar5);
            uVar7 = 0xfffffff9;
        }
        return uVar7;
    }
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(0x5512,0x801182c);
    (*pcVar6)();
}


// ===== sym.aw_get_single_bin_header_1_0_0 @ 0x0801182c (size 264) =====

void sym.aw_get_single_bin_header_1_0_0(int64_t arg1)

{
    uint32_t uVar1;
    uchar uVar2;
    code *pcVar3;
    int64_t iVar4;
    uint *puVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,enter %s\n","aw_get_single_bin_header_1_0_0",0x108,
            "aw_get_single_bin_header_1_0_0");
    uVar1 = *(arg1 + 8);
    if (uVar1 < 100) {
        puVar5 = *arg1;
        iVar4 = arg1 + uVar1 * 0x48;
        *(iVar4 + 0x14) = 0x3c;
        *(iVar4 + 0x18) = *puVar5;
        *(iVar4 + 0x1c) = puVar5[1];
        *(iVar4 + 0x20) = puVar5[2];
        *(iVar4 + 0x24) = puVar5[3];
        *(iVar4 + 0x28) = puVar5[4];
        *(iVar4 + 0x2c) = puVar5[5];
        *(iVar4 + 0x38) = puVar5[8];
        *(iVar4 + 0x3c) = puVar5[9];
        *(iVar4 + 0x40) = puVar5[10];
        *(iVar4 + 0x30) = *(puVar5 + 6);
        *(iVar4 + 0x31) = *(puVar5 + 0x19);
        *(iVar4 + 0x32) = *(puVar5 + 0x1a);
        *(iVar4 + 0x33) = *(puVar5 + 0x1b);
        *(iVar4 + 0x34) = *(puVar5 + 7);
        *(iVar4 + 0x35) = *(puVar5 + 0x1d);
        *(iVar4 + 0x36) = *(puVar5 + 0x1e);
        uVar2 = *(puVar5 + 0x1f);
        *(arg1 + 8) = uVar1 + 1;
        *(iVar4 + 0x44) = 0;
        *(iVar4 + 0x54) = 0;
        *(iVar4 + 0x4c) = 0;
        *(iVar4 + 0x37) = uVar2;
        return;
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8011934);
    (*pcVar3)();
}


// ===== sym.aw_parse_each_of_multi_bins_1_0_0 @ 0x08011934 (size 244) =====

void sym.aw_parse_each_of_multi_bins_1_0_0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,aw_bin_parse enter multi bin branch -- %s\n","aw_parse_each_of_multi_bins_1_0_0",
            0x137,"aw_parse_each_of_multi_bins_1_0_0");
    if (arg2 == 0) {
        uVar4 = *(arg3 + 8);
        *arg3 = *arg3 + *(*arg3 + 0x40) + 0x3c;
        if (uVar4 - 1 < 99) {
            iVar5 = *(arg3 + (uVar4 - 1) * 0x48 + 0x48) + arg1 * 8 + 0x40;
code_r0x080119f8:
            *(arg3 + uVar4 * 0x48 + 0x48) = iVar5;
            sym.aw_parse_bin_header_1_0_0(arg3);
            return;
        }
    }
    else {
        uVar4 = *(arg3 + 8);
        uVar2 = uVar4 - 1;
        if (uVar2 < 100) {
            uVar1 = *(arg3 + uVar2 * 0x48 + 0x28) + 0x3c;
            *arg3 = *arg3 + uVar1;
            if (uVar4 < 100) {
                iVar5 = *(arg3 + uVar2 * 0x48 + 0x48) + uVar1;
                goto code_r0x080119f8;
            }
        }
    }
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8011a28);
    (*pcVar3)();
}


// ===== sym.aw_parse_bin_header_1_0_0 @ 0x08011a28 (size 388) =====

ulong sym.aw_parse_bin_header_1_0_0(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,enter %s\n","aw_parse_bin_header_1_0_0",0x176,"aw_parse_bin_header_1_0_0");
    uVar1 = *(*arg1 + 8);
    _printk("AWINIC_BIN %s,line= %d,aw_bin_parse bin_data_type 0x%x\n","aw_parse_bin_header_1_0_0",0x17a,uVar1);
    if ((uVar1 < 0x22) && ((1L << (uVar1 & 0x3f) & 0x200010001U) != 0)) {
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse enter single bin branch\n","aw_parse_bin_header_1_0_0",0x182);
        *(arg1 + 0x10) = *(arg1 + 0x10) + 1;
        _printk("AWINIC_BIN %s,line= %d,%s bin->single_bin_parse_num is %d\n","aw_parse_bin_header_1_0_0",0x185,
                "aw_parse_bin_header_1_0_0");
        if (*(arg1 + 0xc) == 0) {
            if (99 < *(arg1 + 8)) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8011bac);
                (*pcVar2)();
            }
            *(arg1 + *(arg1 + 8) * 0x48 + 0x48) = 0x3c;
        }
        sym.aw_get_single_bin_header_1_0_0(arg1);
    }
    else {
        if (uVar1 != 0x2000) {
            _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse Unrecognized this bin data type\n",
                    "aw_parse_bin_header_1_0_0",0x198);
            return 0xfffffffe;
        }
        _printk("AWINIC_BIN %s,line= %d,aw_bin_parse enter multi bin branch\n","aw_parse_bin_header_1_0_0",0x18e);
        *(arg1 + 0xc) = *(arg1 + 0xc) + 1;
        _printk("AWINIC_BIN %s,line= %d,%s bin->multi_bin_parse_num is %d\n","aw_parse_bin_header_1_0_0",0x191,
                "aw_parse_bin_header_1_0_0");
        uVar3 = sym.aw_get_multi_bin_header_1_0_0(arg1);
        if (uVar3 < 0) {
            return uVar3;
        }
    }
    return 0;
}


// ===== sym.aw_get_multi_bin_header_1_0_0 @ 0x08011bac (size 228) =====

ulong sym.aw_get_multi_bin_header_1_0_0(int64_t arg1)

{
    uint32_t uVar1;
    code *pcVar2;
    ulong uVar3;
    ulong *in_x18;
    uint32_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk("AWINIC_BIN %s,line= %d,aw_bin_parse enter multi bin branch -- %s\n","aw_get_multi_bin_header_1_0_0",0x154
            ,"aw_get_multi_bin_header_1_0_0");
    uVar1 = *(*arg1 + 0x3c);
    if (*(arg1 + 0xc) == 1) {
        if (99 < *(arg1 + 8)) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x5512,0x8011c90);
            (*pcVar2)();
        }
        *(arg1 + *(arg1 + 8) * 0x48 + 0x48) = 0x3c;
    }
    sym.aw_get_single_bin_header_1_0_0(arg1);
    if (uVar1 != 0) {
        uVar4 = 0;
        do {
            _printk("AWINIC_BIN %s,line= %d,aw_bin_parse enter multi bin for is %d\n","aw_get_multi_bin_header_1_0_0",
                    0x15e,uVar4);
            uVar3 = sym.aw_parse_each_of_multi_bins_1_0_0(uVar1,uVar4,arg1);
            if (uVar3 < 0) {
                return uVar3;
            }
            uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
    }
    return 0;
}


// ===== sym.aw882xx_dev_parse_check_acf @ 0x08011c90 (size 1084) =====

ulong sym.aw882xx_dev_parse_check_acf(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int iVar10;
    int64_t iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8006b8d,"aw882xx_dev_parse_check_acf");
        return 0xfffffff4;
    }
    uVar9 = *arg1;
    if (uVar9 < 0x50) {
        uVar6 = 0x8005231;
        pcVar7 = "aw882xx_dev_parse_check_acf";
        uVar8 = uVar9;
        uVar9 = 0x50;
        goto code_r0x08011f9c;
    }
    if (*(arg1 + 0x44) == 0x1000000) {
        if (*(arg1 + 4) != 0xa15f908) {
            _printk(0x800823d,"aw_dev_parse_check_acf_by_hdr_v_1_0_0_0");
            return 0xffffffea;
        }
        uVar5 = *(arg1 + 0x40);
        uVar12 = *(arg1 + 0x38) + uVar5;
        uVar8 = uVar12;
        if (uVar12 <= uVar9) {
            uVar4 = *(arg1 + 0x3c);
            if (uVar4 == 0) {
                if (uVar12 != uVar9) goto code_r0x08011eb8;
            }
            else {
                iVar2 = arg1 + uVar5 + 4;
                if ((uVar4 == 1) || (uVar4 - 1 < 0)) {
                    uVar5 = 0;
                    goto code_r0x08011e1c;
                }
                uVar13 = 0;
                iVar10 = 0;
                uVar5 = uVar4 & 0xfffffffe;
                do {
                    iVar1 = uVar13 + 1;
                    iVar11 = uVar13;
                    uVar13 = uVar13 + 2;
                    uVar12 = *(iVar2 + iVar11 * 0x60 + 0x20) + uVar8;
                    uVar8 = uVar12;
                    iVar10 = *(iVar2 + iVar1 * 0x60 + 0x20) + iVar10;
                } while (uVar5 != uVar13);
                uVar12 = iVar10 + uVar12;
                for (; uVar8 = uVar12, uVar4 != uVar5; uVar5 = uVar5 + 1) {
code_r0x08011e1c:
                    uVar12 = *(iVar2 + uVar5 * 0x60 + 0x20) + uVar12;
                }
                if (uVar12 != uVar9) {
code_r0x08011eb8:
                    uVar6 = 0x8004b05;
                    pcVar7 = "aw_dev_parse_check_acf_by_hdr_v_1_0_0_0";
                    goto code_r0x08011f9c;
                }
                uVar12 = 0;
                do {
                    iVar11 = iVar2 + uVar12 * 0x60;
                    uVar8 = uVar12;
                    uVar13 = *(iVar11 + 0x20);
                    uVar3 = *(iVar11 + 0x24);
                    uVar5 = uVar13 + uVar3;
                    if (uVar9 < uVar5) {
                        pcVar7 = "aw_dev_parse_check_acf_by_hdr_v_1_0_0_0";
code_r0x080120a0:
                        _printk(0x8002535,pcVar7,uVar8 & 0xffffffff,uVar5,uVar9);
                        return 0xffffffea;
                    }
                    uVar5 = sym.aw_dev_parse_crc8_check(arg1 + uVar3 + 4,uVar13);
                    if (*(iVar2 + uVar8 * 0x60 + 0x28) != (uVar5 & 0xff)) {
                        pcVar7 = "aw_dev_parse_check_acf_by_hdr_v_1_0_0_0";
code_r0x080120c0:
                        _printk(0x8003216,pcVar7,uVar8 & 0xffffffff);
                        return 0xffffffea;
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar4 != uVar12);
            }
            pcVar7 = "aw_dev_parse_check_acf_by_hdr_v_1_0_0_0";
code_r0x08012024:
            _printk(0x8006f0c,pcVar7,arg1 + 8);
            _printk(0x8002a10,pcVar7,arg1 + 0x20);
            _printk(0x8006bac,pcVar7,*(arg1 + 0x33),*(arg1 + 0x32),*(arg1 + 0x31),*(arg1 + 0x30));
            _printk(0x8006f2d,pcVar7,*(arg1 + 0x34));
            return 0;
        }
        pcVar7 = "aw_dev_parse_check_acf_by_hdr_v_1_0_0_0";
        uVar8 = uVar5;
    }
    else {
        if (*(arg1 + 0x44) != 1) {
            _printk(0x8003a07,"aw882xx_dev_parse_check_acf");
            return 0xffffffea;
        }
        if (*(arg1 + 4) != 0xa15f908) {
            _printk(0x800823d,"aw_dev_parse_check_acf_by_hdr");
            return 0xffffffea;
        }
        uVar5 = *(arg1 + 0x40);
        uVar12 = *(arg1 + 0x38) + uVar5;
        uVar8 = uVar12;
        if (uVar12 <= uVar9) {
            uVar4 = *(arg1 + 0x3c);
            if (uVar4 == 0) {
                if (uVar12 != uVar9) goto code_r0x0801207c;
            }
            else {
                iVar2 = arg1 + uVar5 + 4;
                if ((uVar4 != 1) && (-1 < uVar4 - 1)) {
                    uVar12 = 0;
                    iVar10 = 0;
                    uVar5 = uVar4 & 0xfffffffe;
                    do {
                        iVar1 = uVar12 + 1;
                        iVar11 = uVar12;
                        uVar12 = uVar12 + 2;
                        uVar13 = *(iVar2 + iVar11 * 0x40 + 0x20) + uVar8;
                        uVar8 = uVar13;
                        iVar10 = *(iVar2 + iVar1 * 0x40 + 0x20) + iVar10;
                        if (uVar5 == uVar12) goto code_r0x08011fb8;
                    } while( true );
                }
                uVar5 = 0;
                do {
                    uVar13 = uVar8;
                    iVar11 = uVar5;
                    uVar5 = uVar5 + 1;
                    iVar10 = *(iVar2 + iVar11 * 0x40 + 0x20);
code_r0x08011fb8:
                    uVar8 = iVar10 + uVar13;
                } while (uVar4 != uVar5);
                if (iVar10 + uVar13 != uVar9) {
code_r0x0801207c:
                    uVar6 = 0x8004b05;
                    pcVar7 = "aw_dev_parse_check_acf_by_hdr";
                    goto code_r0x08011f9c;
                }
                uVar12 = 0;
                do {
                    uVar8 = uVar12;
                    iVar11 = iVar2 + uVar8 * 0x40;
                    uVar5 = *(iVar11 + 0x20) + *(iVar11 + 0x24);
                    if (uVar9 < uVar5) {
                        pcVar7 = "aw_dev_parse_check_acf_by_hdr";
                        goto code_r0x080120a0;
                    }
                    uVar5 = sym.aw_dev_parse_crc8_check(arg1 + *(iVar11 + 0x24) + 4,*(iVar11 + 0x20));
                    if (*(iVar11 + 0x28) != (uVar5 & 0xff)) {
                        pcVar7 = "aw_dev_parse_check_acf_by_hdr";
                        goto code_r0x080120c0;
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar4 != uVar12);
            }
            pcVar7 = "aw_dev_parse_check_acf_by_hdr";
            goto code_r0x08012024;
        }
        pcVar7 = "aw_dev_parse_check_acf_by_hdr";
        uVar8 = uVar5;
    }
    uVar6 = 0x8002001;
code_r0x08011f9c:
    _printk(uVar6,pcVar7,uVar8,uVar9);
    return 0xffffffea;
}


// ===== sym.aw882xx_dev_parse_acf @ 0x080120cc (size 3700) =====

int sym.aw882xx_dev_parse_acf(int64_t arg1,int64_t arg2)

{
    uint32_t *puVar1;
    uint uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    bool bVar6;
    code *pcVar7;
    int iVar8;
    int iVar9;
    ulong uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int *piVar15;
    char *pcVar16;
    uint32_t uVar17;
    int64_t iVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    ulong *puVar22;
    ulong *in_x18;
    int64_t iVar23;
    int iVar24;
    ulong *puVar25;
    ulong unaff_x30;
    int aiStack_490 [12];
    int iStack_460;
    int iStack_430;
    int iStack_400;
    int iStack_3d0;
    int iStack_3a0;
    int iStack_370;
    int iStack_340;
    int iStack_310;
    int iStack_2e0;
    int iStack_2b0;
    int aiStack_280 [8];
    uint auStack_260 [2];
    int64_t aiStack_258 [63];
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    aiStack_258[0x3d] = *(iVar18 + 0x5e0);
    puVar25 = arg1 + 0x40;
    iVar18 = (*puVar25)[0xe];
    if (iVar18 == 0) {
        iVar18 = **puVar25;
    }
    _printk(0x8004092,iVar18,"aw882xx_dev_parse_acf");
    if (*(arg2 + 0x44) == 0x1000000) {
        uVar20 = *(arg2 + 0x3c);
        iVar18 = arg2 + 4;
        if (uVar20 == 0) {
            if (*(arg1 + 0x1d0) == 0) goto code_r0x080129f8;
code_r0x080123b8:
            bVar6 = false;
        }
        else {
            uVar17 = 0;
            iVar13 = iVar18 + *(arg2 + 0x40);
            do {
                iVar14 = uVar17;
                if (((((*(iVar13 + uVar17 * 0x60 + 0x1c) | 4) == 4) && (*(iVar13 + iVar14 * 0x60) == 0)) &&
                    (*(*(*(arg1 + 0x48) + 0x18) + 0x408) == *(iVar13 + iVar14 * 0x60 + 0x16))) &&
                   ((*(*(arg1 + 0x48) + 2) == *(iVar13 + iVar14 * 0x60 + 0x18) &&
                    (*(arg1 + 8) == *(iVar13 + iVar14 * 0x60 + 0x4c))))) {
                    *(arg1 + 0x1d0) = *(arg1 + 0x1d0) + 1;
                    uVar20 = *(arg2 + 0x3c);
                }
                uVar17 = uVar17 + 1;
            } while (uVar17 < uVar20);
            if (*(arg1 + 0x1d0) != 0) goto code_r0x080123b8;
            if (uVar20 == 0) {
code_r0x080129f8:
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                _printk(0x80066e0,iVar18,"aw_dev_parse_get_scene_count_v1_0_0_0");
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                _printk(0x80075d8,iVar18,"aw_dev_parse_acf_by_hdr_v_1_0_0_0");
                goto code_r0x08012a40;
            }
            iVar8 = 0;
            bVar6 = false;
            uVar17 = 0;
            do {
                iVar14 = uVar17;
                if ((((*(iVar13 + uVar17 * 0x60 + 0x1c) | 4) == 4) && (*(iVar13 + iVar14 * 0x60) == 2)) &&
                   ((*arg1 == *(iVar13 + iVar14 * 0x60 + 0x14) && (*(arg1 + 8) == *(iVar13 + iVar14 * 0x60 + 0x4c))))) {
                    iVar8 = iVar8 + 1;
                    bVar6 = true;
                    *(arg1 + 0x1d0) = iVar8;
                    uVar20 = *(arg2 + 0x3c);
                }
                uVar17 = uVar17 + 1;
            } while (uVar17 < uVar20);
            if (iVar8 == 0) goto code_r0x080129f8;
        }
        iVar13 = (*puVar25)[0xe];
        if (iVar13 == 0) {
            iVar13 = **puVar25;
        }
        _printk(0x8008dee,iVar13,"aw_dev_parse_get_scene_count_v1_0_0_0");
        iVar13 = devm_kmalloc(*(arg1 + 0x40),*(arg1 + 0x1d0) * 0x30,0xdc0);
        *(arg1 + 0x1e0) = iVar13;
        if (iVar13 == 0) {
            iVar18 = (*puVar25)[0xe];
            if (iVar18 == 0) {
                iVar18 = **puVar25;
            }
            uVar10 = 0x8008975;
            pcVar16 = "aw_dev_parse_acf_by_hdr_v_1_0_0_0";
code_r0x08012938:
            _printk(uVar10,iVar18,pcVar16);
            iVar8 = -0xc;
        }
        else {
            if (bVar6) {
                aiStack_280[0] = 0;
                iVar13 = (*puVar25)[0xe];
                if (iVar13 == 0) {
                    iVar13 = **puVar25;
                }
                uVar20 = *(arg2 + 0x40);
                _printk(0x8004092,iVar13,"aw_dev_parse_dev_default_type_v_1_0_0_0");
                uVar17 = *(arg2 + 0x3c);
                if (uVar17 == 0) {
code_r0x08012b14:
                    iVar18 = (*puVar25)[0xe];
                    if (iVar18 == 0) {
                        iVar18 = **puVar25;
                    }
                    uVar10 = 0x8005e43;
                    pcVar16 = "aw_dev_parse_dev_default_type_v_1_0_0_0";
                    goto code_r0x08012b34;
                }
                uVar21 = 0;
                iVar13 = arg2 + uVar20 + 4;
                do {
                    piVar15 = iVar13 + uVar21 * 0x60;
                    if (((*piVar15 == 2) && (*arg1 == *(iVar13 + uVar21 * 0x60 + 0x14))) &&
                       (*(arg1 + 8) == *(iVar13 + uVar21 * 0x60 + 0x4c))) {
                        iVar8 = sym.aw_dev_parse_drv_type_v_1_0_0_0(arg1,iVar18,piVar15,aiStack_280);
                        if (iVar8 < 0) goto code_r0x08012b40;
                        uVar17 = *(arg2 + 0x3c);
                    }
                    uVar21 = uVar21 + 1;
                } while (uVar21 < uVar17);
                if (aiStack_280[0] == 0) goto code_r0x08012b14;
code_r0x08012b64:
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                uVar20 = *(arg2 + 0x40);
                _printk(0x8004092,iVar18,"aw_dev_parse_skt_type_v_1_0_0_0");
                uVar17 = *(arg2 + 0x3c);
                if (uVar17 != 0) {
                    uVar21 = 0;
                    iVar18 = arg2 + uVar20 + 4;
                    do {
                        iVar13 = uVar21;
                        if (((*(iVar18 + uVar21 * 0x60) == 1) && (*(iVar18 + iVar13 * 0x60 + 0x1c) == 1)) &&
                           ((*arg1 == *(iVar18 + iVar13 * 0x60 + 0x14) &&
                            (*(arg1 + 8) == *(iVar18 + iVar13 * 0x60 + 0x4c))))) {
                            iVar14 = iVar18 + iVar13 * 0x60 + 0x2c;
                            if (iVar14 == 0) {
                                iVar18 = (*puVar25)[0xe];
                                if (iVar18 == 0) {
                                    iVar18 = **puVar25;
                                }
                                uVar10 = 0x8004f4e;
code_r0x08012e70:
                                _printk(uVar10,iVar18,"aw_dev_parse_get_scene_id_v_1_0_0_0");
                            }
                            else {
                                iVar8 = *(arg1 + 0x1d0);
                                if (iVar8 != 0) {
                                    iVar24 = 0;
                                    iVar23 = *(arg1 + 0x1e0);
                                    while( true ) {
                                        iVar12 = *(iVar23 + iVar24 * 0x30 + 8);
                                        if (iVar12 == 0) {
                                            iVar18 = (*puVar25)[0xe];
                                            if (iVar18 == 0) {
                                                iVar18 = **puVar25;
                                            }
                                            uVar10 = 0x8002a39;
                                            goto code_r0x08012e70;
                                        }
                                        iVar9 = strcmp(iVar12,iVar14);
                                        if (iVar9 == 0) break;
                                        iVar24 = iVar24 + 1;
                                        if (iVar8 == iVar24) goto code_r0x08012e24;
                                    }
                                    iVar14 = (*puVar25)[0xe];
                                    if (iVar14 == 0) {
                                        iVar14 = **puVar25;
                                    }
                                    iVar13 = iVar18 + iVar13 * 0x60;
                                    uVar2 = *(iVar13 + 0x20);
                                    uVar20 = *(iVar13 + 0x24);
                                    _printk(0x8008dc5,iVar14,"aw_dev_parse_raw_dsp",uVar2);
                                    iVar23 = iVar23 + iVar24 * 0x30;
                                    *(iVar23 + 0x28) = arg2 + uVar20 + 4;
                                    *(iVar23 + 0x20) = uVar2;
                                    uVar17 = *(arg2 + 0x3c);
                                    goto code_r0x08012d6c;
                                }
code_r0x08012e24:
                                iVar18 = (*puVar25)[0xe];
                                if (iVar18 == 0) {
                                    iVar18 = **puVar25;
                                }
                                _printk(0x800205e,iVar18,"aw_dev_parse_get_scene_id_v_1_0_0_0",iVar14);
                            }
                            iVar18 = (*puVar25)[0xe];
                            if (iVar18 == 0) {
                                iVar18 = **puVar25;
                            }
                            _printk(0x800488a,iVar18,"aw_dev_parse_skt_type_v_1_0_0_0");
                            goto code_r0x08012b3c;
                        }
code_r0x08012d6c:
                        uVar21 = uVar21 + 1;
                    } while (uVar21 < uVar17);
                }
                iVar18 = *(arg1 + 0x1e0);
                piVar11 = *(arg1 + 0x40);
                if (iVar18 == 0) {
                    iVar18 = piVar11[0xe];
                    if (iVar18 == 0) {
                        iVar18 = *piVar11;
                    }
                    _printk(0x800954d,iVar18,"aw_dev_parse_create_prof_name_list_v_1_0_0_0");
                    iVar8 = -0x16;
                }
                else {
                    iVar13 = devm_kmalloc(piVar11,*(arg1 + 0x1d0) << 5,0xdc0);
                    *(arg1 + 0x1d8) = iVar13;
                    if (iVar13 != 0) {
                        if (*(arg1 + 0x1d0) != 0) {
                            uVar20 = 0;
                            do {
                                iVar13 = iVar18 + uVar20 * 0x30;
                                *(iVar13 + 4) = uVar20;
                                *(*(arg1 + 0x1d8) + uVar20 * 8) = *(iVar13 + 8);
                                iVar13 = (*(arg1 + 0x40))[0xe];
                                if (iVar13 == 0) {
                                    iVar13 = **(arg1 + 0x40);
                                }
                                _printk(0x8007dd2,iVar13,"aw_dev_parse_create_prof_name_list_v_1_0_0_0",
                                        *(*(arg1 + 0x1d8) + uVar20 * 8));
                                uVar20 = uVar20 + 1;
                            } while (uVar20 < *(arg1 + 0x1d0));
                        }
                        goto code_r0x08012bd4;
                    }
                    iVar18 = (*puVar25)[0xe];
                    if (iVar18 == 0) {
                        iVar18 = **puVar25;
                    }
                    _printk(0x800762e,iVar18,"aw_dev_parse_create_prof_name_list_v_1_0_0_0");
                    iVar8 = -0xc;
                }
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                uVar10 = 0x80032d4;
            }
            else {
                aiStack_280[0] = 0;
                iVar13 = (*puVar25)[0xe];
                if (iVar13 == 0) {
                    iVar13 = **puVar25;
                }
                uVar20 = *(arg2 + 0x40);
                _printk(0x8004092,iVar13,"aw_dev_parse_dev_type_v_1_0_0_0");
                uVar17 = *(arg2 + 0x3c);
                if (uVar17 != 0) {
                    uVar21 = 0;
                    iVar13 = arg2 + uVar20 + 4;
                    do {
                        piVar15 = iVar13 + uVar21 * 0x60;
                        iVar14 = uVar21;
                        if ((((*piVar15 == 0) &&
                             (*(*(*(arg1 + 0x48) + 0x18) + 0x408) == *(iVar13 + iVar14 * 0x60 + 0x16))) &&
                            (*(*(arg1 + 0x48) + 2) == *(iVar13 + iVar14 * 0x60 + 0x18))) &&
                           (*(arg1 + 8) == *(iVar13 + iVar14 * 0x60 + 0x4c))) {
                            iVar8 = sym.aw_dev_parse_drv_type_v_1_0_0_0(arg1,iVar18,piVar15,aiStack_280);
                            if (iVar8 < 0) goto code_r0x08012b40;
                            uVar17 = *(arg2 + 0x3c);
                        }
                        uVar21 = uVar21 + 1;
                    } while (uVar21 < uVar17);
                    if (aiStack_280[0] != 0) goto code_r0x08012b64;
                }
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                uVar10 = 0x8008611;
                pcVar16 = "aw_dev_parse_dev_type_v_1_0_0_0";
code_r0x08012b34:
                _printk(uVar10,iVar18,pcVar16,0);
code_r0x08012b3c:
                iVar8 = -0x16;
code_r0x08012b40:
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                uVar10 = 0x80089a6;
            }
            pcVar16 = "aw_dev_parse_acf_by_hdr_v_1_0_0_0";
code_r0x08012c68:
            _printk(uVar10,iVar18,pcVar16);
        }
    }
    else {
        if (*(arg2 + 0x44) != 1) {
            _printk(0x8003a07,"aw882xx_dev_parse_acf");
            iVar8 = -0x16;
            goto code_r0x08012c94;
        }
        iVar18 = arg2 + 4;
        memset(aiStack_280,0,0x210);
        iVar13 = (*puVar25)[0xe];
        if (iVar13 == 0) {
            iVar13 = **puVar25;
        }
        uVar20 = *(arg2 + 0x40);
        _printk(0x8004092,iVar13,"aw_dev_parse_dev_type");
        if (*(arg2 + 0x3c) != 0) {
            uVar17 = 0;
            iVar24 = 0;
            iVar13 = iVar18 + uVar20;
            do {
                piVar15 = iVar13 + uVar17 * 0x40;
                if (((*(*(*(arg1 + 0x48) + 0x18) + 0x408) == *(piVar15 + 0x16)) && (*(*(arg1 + 0x48) + 2) == piVar15[6])
                    ) && (*piVar15 == 0)) {
                    iVar14 = iVar13 + uVar17 * 0x40;
                    if (*(iVar14 + 0x1c) == 10) {
                        iVar8 = sym.aw_dev_parse_data_by_sec_type(arg1,iVar18,piVar15,0);
                        if (-1 < iVar8) goto code_r0x080121bc;
                        iVar18 = (*puVar25)[0xe];
                        if (iVar18 == 0) {
                            iVar18 = **puVar25;
                        }
                        uVar10 = 0x800368f;
                    }
                    else {
                        uVar19 = *(iVar14 + 0x1a);
                        if (0xb < uVar19) goto code_r0x08012f34;
                        iVar8 = sym.aw_dev_parse_data_by_sec_type(arg1,iVar18,piVar15,aiStack_280 + uVar19 * 0xc);
                        if (-1 < iVar8) {
code_r0x080121bc:
                            iVar24 = iVar24 + 1;
                            goto code_r0x080121c0;
                        }
                        iVar18 = (*puVar25)[0xe];
                        if (iVar18 == 0) {
                            iVar18 = **puVar25;
                        }
                        uVar10 = 0x8006bec;
                    }
                    pcVar16 = "aw_dev_parse_dev_type";
                    goto code_r0x08012c68;
                }
code_r0x080121c0:
                uVar17 = uVar17 + 1;
            } while (uVar17 < *(arg2 + 0x3c));
            if (iVar24 == 0) goto code_r0x08012428;
code_r0x0801258c:
            iVar18 = (*puVar25)[0xe];
            if (iVar18 == 0) {
                iVar18 = **puVar25;
            }
            uVar20 = *(arg2 + 0x40);
            _printk(0x8004092,iVar18,"aw_dev_parse_skt_type");
            uVar17 = *(arg2 + 0x3c);
            if (uVar17 == 0) {
                iVar8 = 0;
            }
            else {
                uVar21 = 0;
                iVar8 = 0;
                iVar18 = arg2 + uVar20 + 4;
                do {
                    iVar13 = uVar21;
                    if (((*arg1 == *(iVar18 + iVar13 * 0x40 + 0x14)) && (*(iVar18 + iVar13 * 0x40) == 1)) &&
                       (iVar14 = iVar18 + iVar13 * 0x40, *(iVar14 + 0x1c) == 1)) {
                        uVar19 = *(iVar14 + 0x1a);
                        if (0xb < uVar19) {
code_r0x08012f34:
    //WARNING: Does not return
                            pcVar7 = SoftwareBreakpoint(0x5512,0x8012f38);
                            (*pcVar7)();
                        }
                        iVar14 = (*puVar25)[0xe];
                        if (iVar14 == 0) {
                            iVar14 = **puVar25;
                        }
                        iVar13 = iVar18 + iVar13 * 0x40;
                        uVar2 = *(iVar13 + 0x20);
                        uVar20 = *(iVar13 + 0x24);
                        _printk(0x8008dc5,iVar14,"aw_dev_parse_raw_dsp",uVar2);
                        if (0x1e8 < uVar19 * 0x30) goto code_r0x08012f3c;
                        iVar8 = iVar8 + 1;
                        uVar17 = *(arg2 + 0x3c);
                        aiStack_258[uVar19 * 6] = arg2 + uVar20 + 4;
                        auStack_260[uVar19 * 0xc] = uVar2;
                    }
                    uVar21 = uVar21 + 1;
                } while (uVar21 < uVar17);
            }
            iVar18 = (*puVar25)[0xe];
            if (iVar18 == 0) {
                iVar18 = **puVar25;
            }
            _printk(0x8002dd3,iVar18,"aw_dev_parse_skt_type",iVar8);
            memcpy(aiStack_490,aiStack_280,0x210);
            puVar1 = arg1 + 0x1d0;
            if (aiStack_490[0] == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_460 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_430 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_400 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_3d0 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_3a0 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_370 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_340 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_310 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_2e0 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            if (iStack_2b0 == 1) {
                *puVar1 = *puVar1 + 1;
            }
            iVar18 = (*puVar25)[0xe];
            if (iVar18 == 0) {
                iVar18 = **puVar25;
            }
            _printk(0x800910d,iVar18,"aw_dev_parse_get_vaild_prof",*puVar1);
            if (*puVar1 == 0) {
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                _printk(0x80085ee,iVar18,"aw_dev_parse_get_vaild_prof");
                iVar8 = -1;
                goto code_r0x08012c6c;
            }
            iVar18 = __kmalloc(*puVar1 * 0x30,0xdc0);
            *(arg1 + 0x1e0) = iVar18;
            if (iVar18 == 0) {
                iVar18 = (*puVar25)[0xe];
                if (iVar18 == 0) {
                    iVar18 = **puVar25;
                }
                uVar10 = 0x8003a53;
                pcVar16 = "aw_dev_parse_get_vaild_prof";
                goto code_r0x08012938;
            }
            iVar18 = 0;
            uVar20 = 0;
            piVar15 = aiStack_490;
            do {
                if (*piVar15 == 1) {
                    if (*puVar1 <= uVar20) {
                        iVar18 = (*puVar25)[0xe];
                        if (iVar18 == 0) {
                            iVar18 = **puVar25;
                        }
                        _printk(0x800893d,iVar18,"aw_dev_parse_get_vaild_prof");
                        iVar8 = -0xc;
                        goto code_r0x08012c6c;
                    }
                    uVar3 = *(piVar15 + 6);
                    puVar22 = *(arg1 + 0x1e0) + uVar20 * 0x30;
                    uVar10 = *(piVar15 + 8);
                    uVar4 = *(piVar15 + 10);
                    puVar22[2] = *(piVar15 + 4);
                    puVar22[3] = uVar3;
                    uVar3 = *piVar15;
                    uVar5 = *(piVar15 + 2);
                    puVar22[4] = uVar10;
                    puVar22[5] = uVar4;
                    *puVar22 = uVar3;
                    puVar22[1] = uVar5;
                    iVar13 = uVar20;
                    uVar20 = uVar20 + 1;
                    *(*(arg1 + 0x1e0) + iVar13 * 0x30 + 4) = iVar18;
                }
                iVar18 = iVar18 + 1;
                piVar15 = piVar15 + 0xc;
            } while (iVar18 != 0xb);
            *(arg1 + 0x1d8) = obj.profile_name;
code_r0x08012bd4:
            iVar18 = (*puVar25)[0xe];
            if (iVar18 == 0) {
                iVar18 = **puVar25;
            }
            _printk(0x8008d86,iVar18,"aw882xx_dev_parse_acf");
            iVar8 = 0;
            goto code_r0x08012c94;
        }
code_r0x08012428:
        iVar13 = (*puVar25)[0xe];
        if (iVar13 == 0) {
            iVar13 = **puVar25;
        }
        _printk(0x80052a4,iVar13,"aw_dev_parse_dev_type",0);
        iVar13 = (*puVar25)[0xe];
        if (iVar13 == 0) {
            iVar13 = **puVar25;
        }
        _printk(0x8004ecc,iVar13,"aw_dev_parse_acf_by_hdr");
        iVar13 = (*puVar25)[0xe];
        if (iVar13 == 0) {
            iVar13 = **puVar25;
        }
        uVar20 = *(arg2 + 0x40);
        _printk(0x8004092,iVar13,"aw_dev_parse_dev_default_type");
        uVar17 = *(arg2 + 0x3c);
        if (uVar17 != 0) {
            uVar21 = 0;
            iVar24 = 0;
            iVar13 = arg2 + uVar20 + 4;
            do {
                piVar15 = iVar13 + uVar21 * 0x40;
                if ((*arg1 == *(piVar15 + 5)) && (*piVar15 == 2)) {
                    iVar14 = iVar13 + uVar21 * 0x40;
                    if (*(iVar14 + 0x1c) == 10) {
                        iVar8 = sym.aw_dev_parse_data_by_sec_type(arg1,iVar18,piVar15,0);
                        if (-1 < iVar8) goto code_r0x080124d4;
                        iVar18 = (*puVar25)[0xe];
                        if (iVar18 == 0) {
                            iVar18 = **puVar25;
                        }
                        uVar10 = 0x800368f;
                    }
                    else {
                        uVar19 = *(iVar14 + 0x1a);
                        if (0xb < uVar19) goto code_r0x08012f34;
                        iVar8 = sym.aw_dev_parse_data_by_sec_type(arg1,iVar18,piVar15,aiStack_280 + uVar19 * 0xc);
                        if (-1 < iVar8) {
code_r0x080124d4:
                            iVar24 = iVar24 + 1;
                            uVar17 = *(arg2 + 0x3c);
                            goto code_r0x080124dc;
                        }
                        iVar18 = (*puVar25)[0xe];
                        if (iVar18 == 0) {
                            iVar18 = **puVar25;
                        }
                        uVar10 = 0x8006bec;
                    }
                    pcVar16 = "aw_dev_parse_dev_default_type";
                    goto code_r0x08012c68;
                }
code_r0x080124dc:
                uVar21 = uVar21 + 1;
            } while (uVar21 < uVar17);
            if (iVar24 != 0) goto code_r0x0801258c;
        }
        iVar18 = (*puVar25)[0xe];
        if (iVar18 == 0) {
            iVar18 = **puVar25;
        }
        _printk(0x8005e43,iVar18,"aw_dev_parse_dev_default_type",0);
code_r0x08012a40:
        iVar8 = -0x16;
    }
code_r0x08012c6c:
    iVar18 = (*puVar25)[0xe];
    if (iVar18 == 0) {
        iVar18 = **puVar25;
    }
    _printk(0x80094e0,iVar18,"aw882xx_dev_parse_acf",*(arg2 + 0x44));
code_r0x08012c94:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == aiStack_258[0x3d]) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x08012f3c:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(1,0x8012f40);
    (*pcVar7)();
}


// ===== sym.aw882xx_dev_get_prof_name @ 0x08012f40 (size 160) =====

ulong sym.aw882xx_dev_get_prof_name(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8003da1,iVar2,"aw882xx_dev_get_prof_name");
        uVar1 = 0;
    }
    else if (arg2 < *(arg1 + 0x1d0)) {
        uVar1 = *(*(arg1 + 0x1d8) + *(*(arg1 + 0x1e0) + (arg2 & 0xffffffffU) * 0x30 + 4) * 8);
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8001fd1,iVar2,"aw882xx_dev_get_prof_name");
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.aw88xx_dev_get_profile_name @ 0x08012fe0 (size 200) =====

ulong sym.aw88xx_dev_get_profile_name(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong uVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg3 < 0) {
        iVar1 = (*(arg1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(arg1 + 0x40);
        }
        _printk(0x8003da1,iVar1,"aw88xx_dev_get_profile_name");
        uVar2 = 0xffffffea;
    }
    else if (*(arg1 + 0x1d0) < arg3) {
        iVar1 = (*(arg1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(arg1 + 0x40);
        }
        _printk(0x8007a9f,iVar1,"aw88xx_dev_get_profile_name");
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = *(*(arg1 + 0x1d8) + *(*(arg1 + 0x1e0) + (arg3 & 0xffffffffU) * 0x30 + 4) * 8);
        iVar1 = strlen(uVar2);
        strlcpy(arg2,uVar2,iVar1 + 1);
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.aw882xx_dev_get_prof_data @ 0x080130a8 (size 260) =====

uint * sym.aw882xx_dev_get_prof_data(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 < *(arg1 + 0x1d0)) {
        if (arg3 < 2) {
            if (2 < arg3) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80131ac);
                (*pcVar1)();
            }
            iVar2 = (*(arg1 + 0x40))[0xe];
            puVar3 = *(arg1 + 0x1e0) + arg2 * 0x30 + (arg3 & 0xffffffffU) * 0x10 + 0x10;
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x40);
            }
            _printk(0x80066ad,iVar2,"aw882xx_dev_get_prof_data",
                    *(*(arg1 + 0x1d8) + *(*(arg1 + 0x1e0) + arg2 * 0x30 + 4) * 8),*puVar3);
        }
        else {
            iVar2 = (*(arg1 + 0x40))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x40);
            }
            _printk(0x8002d5c,iVar2,"aw882xx_dev_get_prof_data");
            puVar3 = NULL;
        }
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8001fd1,iVar2,"aw882xx_dev_get_prof_data",arg2);
        puVar3 = NULL;
    }
    return puVar3;
}


// ===== sym.aw882xx_dev_set_profile_index @ 0x080131ac (size 172) =====

ulong sym.aw882xx_dev_set_profile_index(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0xffffffea;
    if ((-1 < arg2) && (arg2 < *(arg1 + 0x1d0))) {
        *(arg1 + 0x29) = arg2;
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8003dc4,iVar2,"aw882xx_dev_set_profile_index",
                *(*(arg1 + 0x1d8) + *(*(arg1 + 0x1e0) + arg2 * 0x30 + 4) * 8));
        mutex_lock(obj.g_ext_dsp_prof_wr_lock.llvm.1666369098069863835);
        obj.ext_dsp_prof_write = 0x0;
        mutex_unlock(obj.g_ext_dsp_prof_wr_lock.llvm.1666369098069863835);
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.aw882xx_dev_get_profile_count @ 0x08013258 (size 68) =====

uint sym.aw882xx_dev_get_profile_count(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x800755e,"aw882xx_dev_get_profile_count");
        uVar1 = 0xfffffff4;
    }
    else {
        uVar1 = *(arg1 + 0x1d0);
    }
    return uVar1;
}


// ===== sym.aw882xx_dev_check_profile_index @ 0x0801329c (size 32) =====

uint sym.aw882xx_dev_check_profile_index(int64_t arg1,int arg2)

{
    uint uVar1;
    
    uVar1 = 0xffffffea;
    if (arg2 < *(arg1 + 0x1d0) && -1 < arg2) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.aw882xx_dev_get_profile_index @ 0x080132bc (size 16) =====

uchar sym.aw882xx_dev_get_profile_index(int64_t arg1)

{
    return *(arg1 + 0x29);
}


// ===== sym.aw_dev_parse_crc8_check @ 0x080132cc (size 200) =====

uint32_t sym.aw_dev_parse_crc8_check(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t *puVar4;
    uint32_t uVar5;
    
    uVar5 = arg2;
    uVar1 = 0;
    while (uVar5 != 0) {
        puVar4 = arg1 + 1;
        uVar3 = *arg1;
        uVar5 = arg2 - 1;
        arg2 = uVar5;
        uVar2 = uVar1 >> 1;
        if (((uVar3 ^ uVar1) & 1) != 0) {
            uVar2 = uVar1 >> 1 ^ 0x8c;
        }
        uVar1 = uVar2 >> 1;
        if (((uVar2 ^ uVar3 >> 1) & 1) != 0) {
            uVar1 = uVar2 >> 1 ^ 0x8c;
        }
        uVar2 = uVar1 >> 1;
        if (((uVar1 ^ uVar3 >> 2) & 1) != 0) {
            uVar2 = uVar1 >> 1 ^ 0x8c;
        }
        uVar1 = uVar2 >> 1;
        if (((uVar2 ^ uVar3 >> 3) & 1) != 0) {
            uVar1 = uVar2 >> 1 ^ 0x8c;
        }
        uVar2 = uVar1 >> 1;
        if (((uVar1 ^ uVar3 >> 4) & 1) != 0) {
            uVar2 = uVar1 >> 1 ^ 0x8c;
        }
        uVar1 = uVar2 >> 1;
        if (((uVar2 ^ uVar3 >> 5) & 1) != 0) {
            uVar1 = uVar2 >> 1 ^ 0x8c;
        }
        uVar2 = uVar1 >> 1;
        if (((uVar1 ^ uVar3 >> 6) & 1) != 0) {
            uVar2 = uVar1 >> 1 ^ 0x8c;
        }
        arg1 = puVar4;
        uVar1 = uVar2 >> 1;
        if ((uVar2 & 1) != uVar3 >> 7) {
            uVar1 = uVar2 >> 1 ^ 0x8c;
        }
    }
    return uVar1;
}


// ===== sym.aw_dev_parse_data_by_sec_type @ 0x08013394 (size 268) =====

ulong sym.aw_dev_parse_data_by_sec_type(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg3 + 0x1c);
    if (iVar1 == 4) {
        uVar4 = sym.aw_dev_parse_reg_bin_with_hdr(arg1,arg2 + *(arg3 + 0x24),*(arg3 + 0x20),arg4);
    }
    else if (iVar1 == 10) {
        uVar4 = sym.aw882xx_monitor_parse_fw(arg1 + 0x200,arg2 + *(arg3 + 0x24),*(arg3 + 0x20));
    }
    else if (iVar1 == 0) {
        uVar2 = *(arg3 + 0x20);
        iVar5 = (*(arg1 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        uVar3 = *(arg3 + 0x24);
        _printk(0x8008dc5,iVar5,"aw_dev_parse_raw_reg",uVar2);
        if ((uVar2 & 3) == 0) {
            uVar4 = 0;
            *(arg4 + 0x10) = uVar2;
            *(arg4 + 0x18) = arg2 + uVar3;
            *arg4 = 1;
        }
        else {
            iVar5 = (*(arg1 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(arg1 + 0x40);
            }
            _printk(0x8003de4,iVar5,"aw_dev_parse_raw_reg");
            uVar4 = 0xffffffea;
        }
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.aw_dev_parse_reg_bin_with_hdr @ 0x080134a0 (size 996) =====

int sym.aw_dev_parse_reg_bin_with_hdr(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *arg1_00;
    char *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    uint64_t uVar7;
    int *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = arg3 & 0xffffffff;
    iVar6 = (*(arg1 + 0x40))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(arg1 + 0x40);
    }
    _printk(0x8008dc5,iVar6,"aw_dev_parse_reg_bin_with_hdr",uVar7);
    arg1_00 = __kmalloc(uVar7 + 0x1c38,0xdc0);
    if (arg1_00 == NULL) {
        iVar6 = (*(arg1 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg1 + 0x40);
        }
        _printk(0x8003e0f,iVar6,"aw_dev_parse_reg_bin_with_hdr");
        return -0xc;
    }
    *(arg1_00 + 0x1c34) = arg3;
    memcpy(arg1_00 + 0x387,arg2,uVar7);
    _printk("AWINIC_BIN %s,line= %d,aw_bin_parse code version:%s\n","aw_parsing_bin_file",0x1bb,"V0.0.7-V1.0.4");
    iVar3 = *(arg1_00 + 0x1c3c);
    *arg1_00 = arg1_00 + 0x387;
    arg1_00[1] = 0;
    *(arg1_00 + 2) = 0;
    _printk("AWINIC_BIN %s,line= %d,aw_bin_parse header_version 0x%x\n","aw_check_bin_header_version",0x1a8,iVar3);
    if (iVar3 == 0x1000000) {
        iVar3 = sym.aw_parse_bin_header_1_0_0(arg1_00);
        if (-1 < iVar3) {
            *arg1_00 = 0;
            if (*(arg1_00 + 1) != 0) {
                uVar7 = 0;
                piVar8 = arg1_00 + 0x24;
                do {
                    iVar3 = sym.aw_check_sum(arg1_00,uVar7 & 0xffffffff);
                    if (iVar3 < 0) {
                        pcVar4 = "AWINIC_BIN_ERR %s,line= %d,aw_bin_parse check sum data error\n";
                        uVar5 = 0x1d2;
                        goto code_r0x0801366c;
                    }
                    _printk("AWINIC_BIN %s,line= %d,enter\n","aw_check_data_version",0x85);
                    if (uVar7 == 100) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x5512,0x8013884);
                        (*pcVar2)();
                    }
                    if (*piVar8 != 1) {
                        _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse Unrecognized this bin data version\n",
                                "aw_check_data_version",0x8c);
                        _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse check data version error\n",
                                "aw_parsing_bin_file",0x1d8);
                        iVar3 = -4;
                        goto code_r0x08013670;
                    }
                    iVar3 = piVar8[-1];
                    if (iVar3 == 0x21) {
                        iVar3 = sym.aw_check_soc_app_num_v1(arg1_00,uVar7 & 0xffffffff);
                        if (iVar3 < 0) {
                            pcVar4 = "AWINIC_BIN_ERR %s,line= %d,aw_bin_parse check soc app num error\n";
                            uVar5 = 499;
                            goto code_r0x0801366c;
                        }
                    }
                    else if (iVar3 == 0x10) {
                        iVar3 = sym.aw_check_dsp_reg_num_v1(arg1_00,uVar7 & 0xffffffff);
                        if (iVar3 < 0) {
                            pcVar4 = "AWINIC_BIN_ERR %s,line= %d,aw_bin_parse check dsp reg num error\n";
                            uVar5 = 0x1ea;
                            goto code_r0x0801366c;
                        }
                    }
                    else if (iVar3 == 0) {
                        iVar3 = sym.aw_check_register_num_v1(arg1_00,uVar7 & 0xffffffff);
                        if (iVar3 < 0) {
                            pcVar4 = "AWINIC_BIN_ERR %s,line= %d,aw_bin_parse check register num error\n";
                            uVar5 = 0x1e2;
                            goto code_r0x0801366c;
                        }
                    }
                    else {
                        piVar8[8] = piVar8[1];
                    }
                    uVar7 = uVar7 + 1;
                    piVar8 = piVar8 + 0x12;
                } while (uVar7 < *(arg1_00 + 1));
            }
            _printk("AWINIC_BIN %s,line= %d,aw_bin_parse parsing success\n","aw_parsing_bin_file",0x1fc);
            if ((*(arg1_00 + 1) == 1) && (*(arg1_00 + 4) == 0)) {
                if ((*(arg1_00 + 0x44) & 3) == 0) {
                    uVar1 = *(arg1_00 + 9);
                    *(arg4 + 0x10) = *(arg1_00 + 0x44);
                    *arg4 = 1;
                    *(arg4 + 0x18) = arg2 + uVar1;
                    kfree(arg1_00);
                    return 0;
                }
                iVar6 = (*(arg1 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                _printk(0x8003de4,iVar6,"aw_dev_parse_reg_bin_with_hdr");
                return -0x16;
            }
            iVar6 = (*(arg1 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(arg1 + 0x40);
            }
            _printk(0x8008906,iVar6,"aw_dev_parse_reg_bin_with_hdr");
            iVar3 = 0;
            goto code_r0x08013694;
        }
    }
    else {
        _printk("AWINIC_BIN_ERR %s,line= %d,aw_bin_parse Unrecognized this bin header version \n",
                "aw_check_bin_header_version",0x1b1);
        iVar3 = -1;
    }
    pcVar4 = "AWINIC_BIN_ERR %s,line= %d,aw_bin_parse check bin header version error\n";
    uVar5 = 0x1c8;
code_r0x0801366c:
    _printk(pcVar4,"aw_parsing_bin_file",uVar5);
code_r0x08013670:
    iVar6 = (*(arg1 + 0x40))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(arg1 + 0x40);
    }
    _printk(0x800726e,iVar6,"aw_dev_parse_reg_bin_with_hdr");
code_r0x08013694:
    kfree(arg1_00);
    return iVar3;
}


// ===== sym.aw_dev_parse_drv_type_v_1_0_0_0 @ 0x08013884 (size 536) =====

int sym.aw_dev_parse_drv_type_v_1_0_0_0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint *puVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg3 + 0x1c);
    if (iVar4 == 4) {
        iVar4 = sym.aw_dev_parse_reg_bin_with_hdr
                          (arg1,arg2 + *(arg3 + 0x24),*(arg3 + 0x20),*(arg1 + 0x1e0) + *arg4 * 0x30);
        if (-1 < iVar4) {
            *(*(arg1 + 0x1e0) + *arg4 * 0x30 + 8) = arg3 + 0x2c;
            iVar6 = *(arg1 + 0x1e0) + *arg4 * 0x30;
code_r0x08013948:
            *(iVar6 + 4) = *(arg3 + 0x1a);
            *arg4 = *arg4 + 1;
            return iVar4;
        }
        iVar6 = (*(arg1 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg1 + 0x40);
        }
        uVar5 = 0x8003e4e;
    }
    else {
        if (iVar4 != 10) {
            if (iVar4 == 0) {
                uVar1 = *(arg3 + 0x20);
                iVar6 = (*(arg1 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                uVar2 = *(arg3 + 0x24);
                iVar8 = *(arg1 + 0x1e0);
                iVar3 = *arg4;
                _printk(0x8008dc5,iVar6,"aw_dev_parse_raw_reg",uVar1);
                if ((uVar1 & 3) == 0) {
                    iVar4 = 0;
                    puVar7 = iVar8 + iVar3 * 0x30;
                    *(puVar7 + 6) = arg2 + uVar2;
                    puVar7[4] = uVar1;
                    *puVar7 = 1;
                    *(*(arg1 + 0x1e0) + *arg4 * 0x30 + 8) = arg3 + 0x2c;
                    iVar6 = *(arg1 + 0x1e0) + *arg4 * 0x30;
                    goto code_r0x08013948;
                }
                iVar6 = (*(arg1 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                _printk(0x8003de4,iVar6,"aw_dev_parse_raw_reg");
                iVar6 = (*(arg1 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                uVar5 = 0x8004862;
            }
            else {
                iVar6 = (*(arg1 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                uVar5 = 0x80082a0;
            }
            _printk(uVar5,iVar6,"aw_dev_parse_drv_type_v_1_0_0_0");
            return -0x16;
        }
        iVar4 = sym.aw882xx_monitor_parse_fw(arg1 + 0x200,arg2 + *(arg3 + 0x24),*(arg3 + 0x20));
        if (-1 < iVar4) {
            return iVar4;
        }
        iVar6 = (*(arg1 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg1 + 0x40);
        }
        uVar5 = 0x8007602;
    }
    _printk(uVar5,iVar6,"aw_dev_parse_drv_type_v_1_0_0_0");
    return iVar4;
}


// ===== sym.aw_cali_write_re_to_nvram @ 0x08013a9c (size 16) =====

ulong sym.aw_cali_write_re_to_nvram(int64_t arg1)

{
    return 0;
}


// ===== sym.aw882xx_cali_read_re_from_nvram @ 0x08013aac (size 16) =====

ulong sym.aw882xx_cali_read_re_from_nvram(int64_t arg1)

{
    return 0;
}


// ===== sym.aw_cali_store_cali_re @ 0x08013abc (size 252) =====

ulong sym.aw_cali_store_cali_re(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x38);
    if (((uVar1 <= arg2) && (arg2 <= *(arg1 + 0x34))) || (*(arg1 + 0x1f9) != '\0')) {
        *(arg1 + 0x1ec) = arg2;
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x80052ff,iVar2,"aw_cali_store_cali_re",arg2);
        uVar1 = *(arg1 + 0x38);
    }
    if ((arg2 < uVar1) || (*(arg1 + 0x34) < arg2)) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009572,iVar2,"aw_cali_store_cali_re",arg2,uVar1,*(arg1 + 0x34));
        if (*(arg1 + 0x1f9) != '\0') {
            *(arg1 + 0x1f8) = 0xff;
            sym.aw_cali_svc_run_mute(arg1,0xff);
        }
    }
    else if (*(arg1 + 0x1f9) != '\0') {
        *(arg1 + 0x1f8) = 1;
    }
    return 0;
}


// ===== sym.aw_cali_svc_run_mute @ 0x08013bb8 (size 412) =====

void sym.aw_cali_svc_run_mute(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = (*(arg1 + 0x40))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(arg1 + 0x40);
    }
    _printk(0x80020c2,iVar5,"aw_cali_svc_run_mute",arg2);
    if (*(arg1 + 0x1f9) == '\0') {
        iVar5 = (*(arg1 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        _printk(0x8002e27,iVar5,"aw_cali_svc_run_mute");
    }
    else {
        uVar1 = arg2 & 0xff;
        if (uVar1 == 1) {
            pcVar6 = *(arg1 + 0x380);
            if (6 < (pcVar6 + -0x800ba00 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x2060516a6466f902,pcVar6,0x80015e0);
            }
            (*pcVar6)(arg1,*(arg1 + 0x1c8));
            pcVar6 = *(arg1 + 0x378);
            if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001600);
            }
            uVar2 = *(arg1 + 0xd0);
            uVar3 = *(arg1 + 0xd4);
            uVar4 = *(arg1 + 0xdc);
        }
        else {
            if (uVar1 != 0xff) goto code_r0x08013cb0;
            pcVar6 = *(arg1 + 0x378);
            if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x80015c0);
            }
            uVar2 = *(arg1 + 0xd0);
            uVar3 = *(arg1 + 0xd4);
            uVar4 = *(arg1 + 0xd8);
        }
        (*pcVar6)(arg1,uVar2,uVar3,uVar4);
    }
code_r0x08013cb0:
    iVar5 = (*(arg1 + 0x40))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(arg1 + 0x40);
    }
    _printk(0x8004217,iVar5,"aw_cali_svc_run_mute");
    return;
}


// ===== sym.aw882xx_cali_svc_get_cali_status @ 0x08013d54 (size 20) =====

code sym.aw882xx_cali_svc_get_cali_status(void)

{
    return obj.soc_codec_dev_aw882xx;
}


// ===== sym.aw_cali_svc_cali_cmd @ 0x08013d68 (size 288) =====

ulong sym.aw_cali_svc_cali_cmd(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint64_t arg2_00;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    
    *in_x18 = unaff_x30;
    arg2_00 = arg4 & 0xffffffff;
    if (4 < arg2) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002084,iVar2,"aw_cali_svc_cali_cmd");
        return 0xffffffea;
    }
    //switch table (5 cases) at 0x8009a40
    switch(*(arg2 + 0x8009a40) * 4 + 0x8013db0) {
    case 0x8013db4:
        uVar1 = sym.aw_cali_svc_cali_re(arg1,in_q0,arg2_00);
        return uVar1;
    case 0x8013dcc:
        break;
    case 0x8013ddc:
        uVar1 = sym.aw_cali_svc_cali_re(arg1,in_q0,arg2_00);
        in_q0 = extraout_q0;
        if (uVar1 != 0) {
            return uVar1;
        }
        break;
    case 0x8013e0c:
        goto code_r0x08013e3c;
    case 0x8013e1c:
        uVar1 = sym.aw_cali_svc_cali_re(arg1,in_q0,arg2_00);
        in_q0 = extraout_q0_00;
        if (uVar1 != 0) {
            return uVar1;
        }
code_r0x08013e3c:
        uVar1 = sym.aw_cali_svc_cali_f0_q(arg1,in_q0,arg2_00);
        return uVar1;
    }
    uVar1 = sym.aw_cali_svc_cali_f0(arg1,in_q0,arg2_00);
    return uVar1;
}


// ===== sym.aw_cali_svc_cali_re @ 0x08013e88 (size 856) =====

code * sym.aw_cali_svc_cali_re(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t in_x1;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *in_x3;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    ulong *extraout_x18_08;
    uint64_t uVar12;
    uint64_t uVar13;
    code *pcVar14;
    code *pcVar15;
    char *unaff_x22;
    char *unaff_x23;
    char *unaff_x24;
    code *unaff_x25;
    code *unaff_x26;
    code *unaff_x27;
    code *pcVar16;
    ulong unaff_x28;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    int64_t *piStack_3d0;
    int64_t iStack_3c8;
    ulong ***pppuStack_3c0;
    code *pcStack_3b8;
    code *pcStack_3b0;
    code *pcStack_3a8;
    code *pcStack_3a0;
    char *pcStack_398;
    uchar auStack_390 [16];
    uint64_t uStack_380;
    code *pcStack_378;
    code *pcStack_370;
    int64_t iStack_368;
    ulong ***pppuStack_360;
    code *pcStack_358;
    code *pcStack_350;
    code *pcStack_348;
    code *pcStack_340;
    char *pcStack_338;
    uchar auStack_330 [16];
    uint64_t uStack_320;
    code *pcStack_318;
    code *pcStack_310;
    int64_t iStack_308;
    ulong ***pppuStack_300;
    code *pcStack_2f8;
    code *pcStack_2f0;
    code *pcStack_2e0;
    char *pcStack_2d8;
    uchar auStack_2d0 [16];
    uint64_t uStack_2c0;
    code *pcStack_2b8;
    code *pcStack_2b0;
    int64_t iStack_2a8;
    ulong ***pppuStack_2a0;
    code *pcStack_298;
    code *pcStack_290;
    code *pcStack_288;
    code *pcStack_280;
    char *pcStack_278;
    uchar auStack_270 [16];
    uint64_t uStack_260;
    code *pcStack_258;
    code *pcStack_250;
    int64_t iStack_248;
    ulong ***pppuStack_240;
    code *pcStack_238;
    code *pcStack_230;
    code *pcStack_228;
    code *pcStack_220;
    char *pcStack_218;
    uchar auStack_210 [16];
    uint64_t uStack_200;
    code *pcStack_1f8;
    code *pcStack_1f0;
    int64_t iStack_1e8;
    ulong ***pppuStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    code *pcStack_1c8;
    code *pcStack_1c0;
    char *pcStack_1b8;
    uchar auStack_1b0 [16];
    code *pcStack_1a0;
    uint64_t uStack_198;
    int64_t *piStack_190;
    int64_t iStack_188;
    uchar ***pppuStack_180;
    code *pcStack_178;
    code *pcStack_170;
    code *pcStack_168;
    code *pcStack_160;
    uint64_t uStack_158;
    code *pcStack_150;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    ulong uStack_130;
    code *pcStack_128;
    code *pcStack_120;
    code *pcStack_118;
    code *pcStack_110;
    char *pcStack_108;
    code *pcStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    uint64_t uStack_e8;
    code *pcStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    char *pcStack_98;
    code *pcStack_90;
    code *pcStack_88;
    code *pcStack_80;
    uint64_t uStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    if ((in_x1 & 1) == 0) {
        pcStack_70 = NULL;
        iVar5 = (*(arg1 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        pcVar7 = "aw_cali_svc_devs_cali_re";
        _printk(0x8004092,iVar5);
        uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_70);
        pcVar14 = pcStack_70;
        if (uVar1 == 0) {
            unaff_x25 = segment.ehdr;
            pcVar15 = *pcStack_70;
            if (pcVar15 != pcStack_70) {
                unaff_x28 = 1;
                arg1 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "enable";
                do {
                    unaff_x24 = pcVar15 + -0x3e0;
                    sym.aw_cali_svc_run_mute(unaff_x24,1);
                    obj.soc_codec_dev_aw882xx = 0x1;
                    iVar5 = (*(pcVar15 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar15 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    if ((((arg2 & 1U) != 0) && (uVar1 = sym.aw882xx_dsp_hmute_en(unaff_x24,1), uVar1 < 0)) ||
                       (uVar1 = sym.aw882xx_dsp_cali_en(unaff_x24,1), uVar1 < 0)) {
                        pcVar14 = uVar1;
                        goto code_r0x080140bc;
                    }
                    pcVar15 = *pcVar15;
                } while (pcVar15 != pcVar14);
            }
            msleep(_segment.ehdr);
            unaff_x22 = pcStack_70;
            arg1 = *pcStack_70;
            if (arg1 == pcStack_70) {
                pcVar14 = 0xffffffff;
            }
            else {
                do {
                    uVar1 = sym.aw_cali_svc_dev_get_re(arg1 + -0x3e0);
                    pcVar14 = uVar1;
                    if (uVar1 < 0) {
                        iVar5 = (*(arg1 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(arg1 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_devs_get_cali_cali_data";
                        in_x3 = NULL;
                        _printk(0x8006c6c,iVar5);
                        break;
                    }
                    arg1 = *arg1;
                } while (arg1 != unaff_x22);
            }
code_r0x080140bc:
            unaff_x26 = pcStack_70;
            unaff_x27 = *pcStack_70;
            if (unaff_x27 != pcStack_70) {
                arg1 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "disable";
                do {
                    unaff_x24 = unaff_x27 + -0x3e0;
                    sym.aw882xx_dsp_cali_en(unaff_x24,0);
                    if ((arg2 & 1U) != 0) {
                        sym.aw882xx_dsp_hmute_en(unaff_x24,0);
                    }
                    obj.soc_codec_dev_aw882xx = 0x0;
                    iVar5 = (*(unaff_x27 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(unaff_x27 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    unaff_x27 = *unaff_x27;
                } while (unaff_x27 != unaff_x26);
            }
        }
        else {
            pcVar14 = uVar1;
            iVar5 = (*(arg1 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(arg1 + 0x40);
            }
            pcVar7 = "aw_cali_svc_devs_cali_re";
            _printk(0x8005704,iVar5);
        }
    }
    else {
        sym.aw_cali_svc_run_mute(arg1,1);
        iVar5 = (*(arg1 + 0x40))[0xe];
        obj.soc_codec_dev_aw882xx = 0x1;
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        _printk(0x80082c7,iVar5,"aw_cali_svc_set_cali_status","enable");
        if (((arg2 & 1U) == 0) || (uVar1 = sym.aw882xx_dsp_hmute_en(arg1,1), -1 < uVar1)) {
            uVar1 = sym.aw882xx_dsp_cali_en(arg1,1);
            if (-1 < uVar1) {
                msleep(_segment.ehdr);
                uVar1 = sym.aw_cali_svc_dev_get_re(arg1);
            }
            pcVar14 = uVar1;
            sym.aw882xx_dsp_cali_en(arg1,0);
            if ((arg2 & 1U) != 0) goto code_r0x08014078;
        }
        else {
            pcVar14 = uVar1;
            sym.aw882xx_dsp_cali_en(arg1,0);
code_r0x08014078:
            sym.aw882xx_dsp_hmute_en(arg1,0);
        }
        obj.soc_codec_dev_aw882xx = 0x0;
        iVar5 = (*(arg1 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        pcVar7 = "aw_cali_svc_set_cali_status";
        in_x3 = "disable";
        _printk(0x80082c7,iVar5);
        unaff_x22 = segment.ehdr;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    pcVar15 = auVar17._0_8_;
    *extraout_x18 = sym.aw_cali_svc_cali_f0;
    pcStack_c8 = sym.aw_cali_svc_cali_f0;
    iVar5 = sp_el0;
    uVar12 = pcVar7 & 0xffffffff;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar1 = pcVar7;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x28;
    pcStack_b8 = unaff_x27;
    pcStack_b0 = unaff_x26;
    pcStack_a8 = unaff_x25;
    pcStack_a0 = unaff_x24;
    pcStack_98 = unaff_x23;
    pcStack_90 = unaff_x22;
    pcStack_88 = arg1;
    pcStack_80 = pcVar14;
    uStack_78 = arg2 & 0xffffffff;
    if ((auVar17._8_8_ & 1) == 0) {
        pcStack_e0 = NULL;
        uVar2 = sym.aw882xx_dev_get_list_head(&pcStack_e0);
        pcVar14 = pcStack_e0;
        if (uVar2 == 0) {
            unaff_x25 = segment.ehdr;
            pcVar16 = *pcStack_e0;
            if (pcVar16 != pcStack_e0) {
                unaff_x28 = 1;
                pcVar15 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "enable";
                do {
                    unaff_x24 = pcVar16 + -0x3e0;
                    sym.aw_cali_svc_run_mute(unaff_x24,1);
                    obj.soc_codec_dev_aw882xx = 0x1;
                    iVar5 = (*(pcVar16 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar16 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    if ((((uVar1 >> 1 & 1) != 0) && (uVar2 = sym.aw882xx_dsp_noise_en(unaff_x24,1), uVar2 < 0)) ||
                       (uVar2 = sym.aw882xx_dsp_cali_en(unaff_x24,1), uVar2 < 0)) {
                        pcVar14 = uVar2;
                        goto code_r0x08014304;
                    }
                    pcVar16 = *pcVar16;
                } while (pcVar16 != pcVar14);
            }
            msleep(5000);
            unaff_x22 = pcStack_e0;
            pcVar15 = *pcStack_e0;
            if (pcVar15 == pcStack_e0) {
                pcVar14 = 0xffffffff;
            }
            else {
                do {
                    uVar2 = sym.aw_cali_svc_dev_get_f0(pcVar15 + -0x3e0);
                    pcVar14 = uVar2;
                    if (uVar2 < 0) {
                        iVar5 = (*(pcVar15 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(pcVar15 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_devs_get_cali_cali_data";
                        in_x3 = 0x1;
                        _printk(0x8006c6c,iVar5);
                        break;
                    }
                    pcVar15 = *pcVar15;
                } while (pcVar15 != unaff_x22);
            }
code_r0x08014304:
            unaff_x26 = pcStack_e0;
            unaff_x27 = *pcStack_e0;
            if (unaff_x27 != pcStack_e0) {
                pcVar15 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "disable";
                do {
                    unaff_x24 = unaff_x27 + -0x3e0;
                    sym.aw882xx_dsp_cali_en(unaff_x24,0);
                    if ((uVar1 >> 1 & 1) != 0) {
                        sym.aw882xx_dsp_noise_en(unaff_x24,0);
                    }
                    obj.soc_codec_dev_aw882xx = 0x0;
                    iVar5 = (*(unaff_x27 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(unaff_x27 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    sym.aw_cali_svc_run_mute(unaff_x24,unaff_x27[-0x1e8]);
                    unaff_x27 = *unaff_x27;
                } while (unaff_x27 != unaff_x26);
            }
        }
        else {
            pcVar14 = uVar2;
            iVar5 = (*(pcVar15 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(pcVar15 + 0x40);
            }
            pcVar7 = "aw_cali_svc_devs_cali_f0";
            _printk(0x8005704,iVar5);
        }
    }
    else {
        sym.aw_cali_svc_run_mute(pcVar15,1);
        iVar5 = (*(pcVar15 + 0x40))[0xe];
        obj.soc_codec_dev_aw882xx = 0x1;
        if (iVar5 == 0) {
            iVar5 = **(pcVar15 + 0x40);
        }
        _printk(0x80082c7,iVar5,"aw_cali_svc_set_cali_status","enable");
        if (((uVar1 >> 1 & 1) == 0) || (uVar2 = sym.aw882xx_dsp_noise_en(pcVar15,1), -1 < uVar2)) {
            uVar2 = sym.aw882xx_dsp_cali_en(pcVar15,1);
            if (-1 < uVar2) {
                msleep(5000);
                uVar2 = sym.aw_cali_svc_dev_get_f0(pcVar15);
            }
            pcVar14 = uVar2;
            sym.aw882xx_dsp_cali_en(pcVar15,0);
            if ((uVar1 >> 1 & 1) != 0) goto code_r0x080144a8;
        }
        else {
            pcVar14 = uVar2;
            sym.aw882xx_dsp_cali_en(pcVar15,0);
code_r0x080144a8:
            sym.aw882xx_dsp_noise_en(pcVar15,0);
        }
        obj.soc_codec_dev_aw882xx = 0x0;
        iVar5 = (*(pcVar15 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(pcVar15 + 0x40);
        }
        pcVar7 = "aw_cali_svc_set_cali_status";
        in_x3 = "disable";
        _printk(0x80082c7,iVar5);
        sym.aw_cali_svc_run_mute(pcVar15,pcVar15[0x1f8]);
        unaff_x22 = segment.ehdr;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    pcVar16 = auVar17._0_8_;
    *extraout_x18_00 = sym.aw_cali_svc_cali_f0_q;
    pcStack_138 = sym.aw_cali_svc_cali_f0_q;
    iVar5 = sp_el0;
    uVar13 = pcVar7 & 0xffffffff;
    iStack_148 = *(iVar5 + 0x5e0);
    uVar1 = pcVar7;
    ppuStack_140 = &puStack_d0;
    uStack_130 = unaff_x28;
    pcStack_128 = unaff_x27;
    pcStack_120 = unaff_x26;
    pcStack_118 = unaff_x25;
    pcStack_110 = unaff_x24;
    pcStack_108 = unaff_x23;
    pcStack_100 = unaff_x22;
    pcStack_f8 = pcVar15;
    pcStack_f0 = pcVar14;
    uStack_e8 = uVar12;
    if ((auVar17._8_8_ & 1) == 0) {
        pcStack_150 = NULL;
        uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_150);
        pcVar14 = pcStack_150;
        uVar2 = in_x3;
        if (uVar3 == 0) {
            unaff_x25 = segment.ehdr;
            pcVar15 = *pcStack_150;
            if (pcVar15 != pcStack_150) {
                pcVar16 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "enable";
                do {
                    unaff_x24 = pcVar15 + -0x3e0;
                    sym.aw_cali_svc_run_mute(unaff_x24,1);
                    obj.soc_codec_dev_aw882xx = 0x1;
                    iVar5 = (*(pcVar15 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar15 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    if ((uVar1 >> 1 & 1) != 0) {
                        uVar3 = sym.aw882xx_dsp_noise_en(unaff_x24,1);
                        uVar2 = in_x3;
                        if (-1 < uVar3) goto code_r0x080145f4;
code_r0x08014718:
                        pcVar14 = uVar3;
                        goto code_r0x0801464c;
                    }
code_r0x080145f4:
                    uVar3 = sym.aw882xx_dsp_cali_en(unaff_x24,1);
                    uVar2 = in_x3;
                    if (uVar3 < 0) goto code_r0x08014718;
                    pcVar15 = *pcVar15;
                } while (pcVar15 != pcVar14);
            }
            msleep(5000);
            unaff_x22 = pcStack_150;
            uVar2 = in_x3;
            pcVar16 = *pcStack_150;
            if (pcVar16 == pcStack_150) {
                pcVar14 = 0xffffffff;
            }
            else {
                do {
                    uVar3 = sym.aw_cali_svc_dev_get_f0_q(pcVar16 + -0x3e0);
                    uVar2 = in_x3;
                    pcVar14 = uVar3;
                    if (uVar3 < 0) {
                        iVar5 = (*(pcVar16 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(pcVar16 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_devs_get_cali_cali_data";
                        uVar2 = 2;
                        _printk(0x8006c6c,iVar5);
                        break;
                    }
                    pcVar16 = *pcVar16;
                } while (pcVar16 != unaff_x22);
            }
code_r0x0801464c:
            unaff_x26 = pcStack_150;
            pcVar15 = *pcStack_150;
            if (pcVar15 != pcStack_150) {
                pcVar16 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "disable";
                do {
                    unaff_x24 = pcVar15 + -0x3e0;
                    sym.aw882xx_dsp_cali_en(unaff_x24,0);
                    if ((uVar1 >> 1 & 1) != 0) {
                        sym.aw882xx_dsp_noise_en(unaff_x24,0);
                    }
                    obj.soc_codec_dev_aw882xx = 0x0;
                    iVar5 = (*(pcVar15 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar15 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    pcVar8 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    uVar2 = pcVar8;
                    sym.aw_cali_svc_run_mute(unaff_x24,pcVar15[-0x1e8]);
                    pcVar15 = *pcVar15;
                } while (pcVar15 != unaff_x26);
            }
        }
        else {
            pcVar14 = uVar3;
            iVar5 = (*(pcVar16 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(pcVar16 + 0x40);
            }
            pcVar7 = "aw_cali_svc_devs_cali_f0_q";
            _printk(0x800915c,iVar5);
        }
        goto code_r0x080146d8;
    }
    sym.aw_cali_svc_run_mute(pcVar16,1);
    iVar5 = (*(pcVar16 + 0x40))[0xe];
    obj.soc_codec_dev_aw882xx = 0x1;
    if (iVar5 == 0) {
        iVar5 = **(pcVar16 + 0x40);
    }
    _printk(0x80082c7,iVar5,"aw_cali_svc_set_cali_status","enable");
    if (((uVar1 >> 1 & 1) == 0) || (uVar2 = sym.aw882xx_dsp_noise_en(pcVar16,1), -1 < uVar2)) {
        uVar2 = sym.aw882xx_dsp_cali_en(pcVar16,1);
        if (-1 < uVar2) {
            msleep(5000);
            uVar2 = sym.aw_cali_svc_dev_get_f0_q(pcVar16);
        }
        pcVar14 = uVar2;
        sym.aw882xx_dsp_cali_en(pcVar16,0);
        if ((uVar1 >> 1 & 1) != 0) goto code_r0x080147f0;
    }
    else {
        pcVar14 = uVar2;
        sym.aw882xx_dsp_cali_en(pcVar16,0);
code_r0x080147f0:
        sym.aw882xx_dsp_noise_en(pcVar16,0);
    }
    obj.soc_codec_dev_aw882xx = 0x0;
    iVar5 = (*(pcVar16 + 0x40))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(pcVar16 + 0x40);
    }
    pcVar7 = "aw_cali_svc_set_cali_status";
    uVar2 = 0x80025fd;
    _printk(0x80082c7,iVar5);
    sym.aw_cali_svc_run_mute(pcVar16,pcVar16[0x1f8]);
    unaff_x22 = segment.ehdr;
code_r0x080146d8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_148) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_svc_get_devs_cali_re;
    pcStack_178 = sym.aw_cali_svc_get_devs_cali_re;
    iVar5 = sp_el0;
    iStack_188 = *(iVar5 + 0x5e0);
    piStack_190 = NULL;
    pcVar8 = pcVar7;
    pppuStack_180 = &ppuStack_140;
    pcStack_170 = unaff_x22;
    pcStack_168 = pcVar16;
    pcStack_160 = pcVar14;
    uStack_158 = uVar13;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_190);
    if (uVar1 == 0) {
        piVar11 = *piStack_190;
        if (piVar11 == piStack_190) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            do {
                uVar2 = *(piVar11 + -0x3b4);
                uVar12 = uVar2;
                if (pcVar7 <= uVar2) {
                    piVar11 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar8 = "aw_cali_svc_get_devs_cali_re";
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_re",uVar12,pcVar7 & 0xffffffff);
                    uVar2 = uVar12;
                    pcVar14 = 0xffffffea;
                    break;
                }
                pcVar14 = pcVar14 + 1;
                *(auVar17._8_8_ + uVar12 * 4) = *(piVar11 + -500);
                piVar11 = *piVar11;
            } while (piVar11 != piStack_190);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar1;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_cali_re";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_188) {
        return pcVar14;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_02 = sym.aw_cali_svc_get_devs_r0;
    pcStack_1d8 = sym.aw_cali_svc_get_devs_r0;
    iVar5 = sp_el0;
    iStack_1e8 = *(iVar5 + 0x5e0);
    pcStack_1f0 = NULL;
    pcVar9 = pcVar8;
    pppuStack_1e0 = &pppuStack_180;
    pcStack_1d0 = unaff_x26;
    pcStack_1c8 = unaff_x25;
    pcStack_1c0 = unaff_x24;
    pcStack_1b8 = unaff_x23;
    pcStack_1a0 = pcVar14;
    uStack_198 = pcVar7 & 0xffffffff;
    auStack_1b0 = auVar17;
    uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_1f0);
    if (uVar1 == 0) {
        unaff_x26 = *pcStack_1f0;
        if (unaff_x26 == pcStack_1f0) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x800259a;
            unaff_x24 = "aw_cali_svc_get_devs_r0";
            do {
                uVar12 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar8) {
                    uVar1 = sym.aw882xx_dsp_read_r0(unaff_x26 + -0x3e0,auVar18._8_8_ + uVar12 * 4);
                    uVar2 = uVar12;
                    if (uVar1 != 0) {
                        pcVar14 = uVar1;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar9 = "aw_cali_svc_get_devs_r0";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar18._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar9 = unaff_x24;
                    _printk(0x800259a,iVar5,"aw_cali_svc_get_devs_r0",uVar12,pcVar8 & 0xffffffff);
                    uVar2 = uVar12;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_1f0);
        }
    }
    else {
        piVar11 = *(auVar18._0_8_ + 0x40);
        pcVar14 = uVar1;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar9 = "aw_cali_svc_get_devs_r0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1e8) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_03 = sym.aw_cali_svc_get_devs_te;
    pcStack_238 = sym.aw_cali_svc_get_devs_te;
    iVar5 = sp_el0;
    iStack_248 = *(iVar5 + 0x5e0);
    pcStack_250 = NULL;
    pcVar7 = pcVar9;
    pppuStack_240 = &pppuStack_1e0;
    pcStack_230 = unaff_x26;
    pcStack_228 = unaff_x25;
    pcStack_220 = unaff_x24;
    pcStack_218 = unaff_x23;
    uStack_200 = pcVar8 & 0xffffffff;
    pcStack_1f8 = pcVar14;
    auStack_210 = auVar18;
    uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_250);
    if (uVar1 == 0) {
        unaff_x26 = *pcStack_250;
        if (unaff_x26 == pcStack_250) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_te";
            do {
                uVar12 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar9) {
                    uVar1 = sym.aw882xx_dsp_read_te(unaff_x26 + -0x3e0,auVar17._8_8_ + uVar12 * 4);
                    uVar2 = uVar12;
                    if (uVar1 != 0) {
                        pcVar14 = uVar1;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_get_devs_te";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_te",uVar12,pcVar9 & 0xffffffff);
                    uVar2 = uVar12;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_250);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar1;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_te";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_248) {
        return pcVar14;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_04 = sym.aw_cali_svc_get_devs_st;
    pcStack_298 = sym.aw_cali_svc_get_devs_st;
    iVar5 = sp_el0;
    iStack_2a8 = *(iVar5 + 0x5e0);
    pcStack_2b0 = NULL;
    pcVar8 = pcVar7;
    pppuStack_2a0 = &pppuStack_240;
    pcStack_290 = unaff_x26;
    pcStack_288 = unaff_x25;
    pcStack_280 = unaff_x24;
    pcStack_278 = unaff_x23;
    uStack_260 = pcVar9 & 0xffffffff;
    pcStack_258 = pcVar14;
    auStack_270 = auVar17;
    uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_2b0);
    if (uVar1 == 0) {
        unaff_x26 = *pcStack_2b0;
        if (unaff_x26 == pcStack_2b0) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_st";
            do {
                uVar2 = *(unaff_x26 + -0x3b4);
                if (uVar2 < pcVar7) {
                    pcVar8 = auVar18._8_8_ + (uVar2 << 1 | 1) * 4;
                    uVar1 = sym.aw882xx_dsp_read_st(unaff_x26 + -0x3e0,auVar18._8_8_ + (uVar2 << 1) * 4,pcVar8);
                    if (uVar1 != 0) {
                        pcVar14 = uVar1;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar8 = "aw_cali_svc_get_devs_st";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar18._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar8 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_st",uVar2,pcVar7 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_2b0);
        }
    }
    else {
        piVar11 = *(auVar18._0_8_ + 0x40);
        pcVar14 = uVar1;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_st";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_2a8) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_05 = sym.aw_cali_svc_get_devs_cali_f0;
    pcStack_2f8 = sym.aw_cali_svc_get_devs_cali_f0;
    iVar5 = sp_el0;
    iStack_308 = *(iVar5 + 0x5e0);
    pcStack_310 = NULL;
    pcVar9 = pcVar8;
    pppuStack_300 = &pppuStack_2a0;
    pcStack_2f0 = unaff_x25;
    pcStack_2e0 = unaff_x24;
    pcStack_2d8 = unaff_x23;
    uStack_2c0 = pcVar7 & 0xffffffff;
    pcStack_2b8 = pcVar14;
    auStack_2d0 = auVar18;
    uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_310);
    if (uVar1 == 0) {
        unaff_x25 = *pcStack_310;
        if (unaff_x25 == pcStack_310) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            pcVar15 = pcStack_310;
            do {
                uVar2 = *(unaff_x25 + -0x3b4);
                uVar12 = uVar2;
                if (uVar2 < pcVar8) {
                    pcVar14 = pcVar14 + 1;
                    *(auVar17._8_8_ + uVar12 * 4) = *(unaff_x25 + -0x1f0);
                }
                else {
                    piVar11 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar9 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_f0",uVar12,pcVar8 & 0xffffffff);
                    uVar2 = uVar12;
                    pcVar15 = pcStack_310;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != pcVar15);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar1;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar9 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_308) {
        return pcVar14;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_06 = sym.aw_cali_svc_get_devs_f0;
    pcStack_358 = sym.aw_cali_svc_get_devs_f0;
    iVar5 = sp_el0;
    iStack_368 = *(iVar5 + 0x5e0);
    pcStack_370 = NULL;
    pcVar7 = pcVar9;
    pppuStack_360 = &pppuStack_300;
    pcStack_350 = unaff_x26;
    pcStack_348 = unaff_x25;
    pcStack_340 = unaff_x24;
    pcStack_338 = unaff_x23;
    uStack_320 = pcVar8 & 0xffffffff;
    pcStack_318 = pcVar14;
    auStack_330 = auVar17;
    uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_370);
    if (uVar1 == 0) {
        unaff_x26 = *pcStack_370;
        if (unaff_x26 == pcStack_370) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                uVar2 = *(unaff_x26 + -0x3b4);
                if (uVar2 < pcVar9) {
                    uVar1 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x3e0);
                    if (uVar1 != 0) {
                        pcVar14 = uVar1;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar18._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_f0",uVar2,pcVar9 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_370);
        }
    }
    else {
        piVar11 = *(auVar18._0_8_ + 0x40);
        pcVar14 = uVar1;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_368) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_07 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_3b8 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar5 = sp_el0;
    iStack_3c8 = *(iVar5 + 0x5e0);
    piStack_3d0 = NULL;
    pppuStack_3c0 = &pppuStack_360;
    pcStack_3b0 = unaff_x26;
    pcStack_3a8 = unaff_x25;
    pcStack_3a0 = unaff_x24;
    pcStack_398 = unaff_x23;
    uStack_380 = pcVar9 & 0xffffffff;
    pcStack_378 = pcVar14;
    auStack_390 = auVar18;
    uVar12 = sym.aw882xx_dev_get_list_head(&piStack_3d0);
    if (uVar12 == 0) {
        piVar11 = *piStack_3d0;
        if (piVar11 == piStack_3d0) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            piVar10 = piStack_3d0;
            do {
                uVar1 = *(piVar11 + -0x3b4);
                if (uVar1 < uVar2) {
                    pcVar14 = pcVar14 + 1;
                    *(auVar17._8_8_ + uVar1 * 4) = piVar11[-0x3e];
                    *(pcVar7 + *(piVar11 + -0x3b4) * 4) = *(piVar11 + -0x1ec);
                }
                else {
                    piVar10 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar10[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar10;
                    }
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_f0_q",uVar1,uVar2);
                    piVar10 = piStack_3d0;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar10);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar12 & 0xffffffff;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        _printk(0x8005e7f,iVar5,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_3c8) {
        iVar5 = __stack_chk_fail();
        *extraout_x18_08 = sym.aw_cali_parse_re_dt;
        iVar4 = of_property_read_variable_u32_array(*(*(iVar5 + 0x40) + 0x2f0),"aw-re-min",iVar5 + 0x38,1,0);
        if (iVar4 < 0) {
            *(iVar5 + 0x38) = 1000;
            iVar6 = (*(iVar5 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x40);
            }
            _printk(0x8007e0d,iVar6,"aw_cali_parse_re_dt");
        }
        iVar4 = of_property_read_variable_u32_array(*(*(iVar5 + 0x40) + 0x2f0),"aw-re-max",iVar5 + 0x34,1,0);
        if (iVar4 < 0) {
            *(iVar5 + 0x34) = 50000;
            iVar6 = (*(iVar5 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x40);
            }
            _printk(0x8004b43,iVar6,"aw_cali_parse_re_dt");
        }
        piVar11 = *(iVar5 + 0x40);
        iVar6 = piVar11[0xe];
        if (*(iVar5 + 0x38) < *(iVar5 + 0x34)) {
            if (iVar6 == 0) {
                iVar6 = *piVar11;
            }
            _printk(0x80025d3,iVar6,"aw_cali_parse_re_dt");
            pcVar14 = NULL;
        }
        else {
            if (iVar6 == 0) {
                iVar6 = *piVar11;
            }
            _printk(0x8006f77,iVar6,"aw_cali_parse_re_dt");
            pcVar14 = 0xffffffea;
        }
        return pcVar14;
    }
    return pcVar14;
}


// ===== sym.aw_cali_svc_cali_f0 @ 0x080141e0 (size 840) =====

code * sym.aw_cali_svc_cali_f0(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t in_x1;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *in_x3;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    ulong *extraout_x18_07;
    uint64_t uVar12;
    uint64_t uVar13;
    code *pcVar14;
    char *unaff_x22;
    char *unaff_x23;
    char *unaff_x24;
    code *unaff_x25;
    code *unaff_x26;
    code *unaff_x27;
    code *pcVar15;
    code *pcVar16;
    ulong unaff_x28;
    ulong unaff_x30;
    uchar auVar17 [16];
    uchar auVar18 [16];
    int64_t *piStack_360;
    int64_t iStack_358;
    ulong ***pppuStack_350;
    code *pcStack_348;
    code *pcStack_340;
    code *pcStack_338;
    code *pcStack_330;
    char *pcStack_328;
    uchar auStack_320 [16];
    uint64_t uStack_310;
    code *pcStack_308;
    code *pcStack_300;
    int64_t iStack_2f8;
    ulong ***pppuStack_2f0;
    code *pcStack_2e8;
    code *pcStack_2e0;
    code *pcStack_2d8;
    code *pcStack_2d0;
    char *pcStack_2c8;
    uchar auStack_2c0 [16];
    uint64_t uStack_2b0;
    code *pcStack_2a8;
    code *pcStack_2a0;
    int64_t iStack_298;
    ulong ***pppuStack_290;
    code *pcStack_288;
    code *pcStack_280;
    code *pcStack_270;
    char *pcStack_268;
    uchar auStack_260 [16];
    uint64_t uStack_250;
    code *pcStack_248;
    code *pcStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    code *pcStack_220;
    code *pcStack_218;
    code *pcStack_210;
    char *pcStack_208;
    uchar auStack_200 [16];
    uint64_t uStack_1f0;
    code *pcStack_1e8;
    code *pcStack_1e0;
    int64_t iStack_1d8;
    ulong ***pppuStack_1d0;
    code *pcStack_1c8;
    code *pcStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    char *pcStack_1a8;
    uchar auStack_1a0 [16];
    uint64_t uStack_190;
    code *pcStack_188;
    code *pcStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    code *pcStack_160;
    code *pcStack_158;
    code *pcStack_150;
    char *pcStack_148;
    uchar auStack_140 [16];
    code *pcStack_130;
    uint64_t uStack_128;
    int64_t *piStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    code *pcStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    uint64_t uStack_e8;
    code *pcStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_c0;
    code *pcStack_b8;
    code *pcStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    char *pcStack_98;
    code *pcStack_90;
    code *pcStack_88;
    code *pcStack_80;
    uint64_t uStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    uVar12 = arg2 & 0xffffffff;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar3 = arg2;
    if ((in_x1 & 1) == 0) {
        pcStack_70 = NULL;
        uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_70);
        pcVar14 = pcStack_70;
        if (uVar1 == 0) {
            unaff_x25 = segment.ehdr;
            pcVar15 = *pcStack_70;
            if (pcVar15 != pcStack_70) {
                unaff_x28 = 1;
                arg1 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "enable";
                do {
                    unaff_x24 = pcVar15 + -0x3e0;
                    sym.aw_cali_svc_run_mute(unaff_x24,1);
                    obj.soc_codec_dev_aw882xx = 0x1;
                    iVar5 = (*(pcVar15 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar15 + -0x3a0);
                    }
                    arg2 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    if ((((uVar3 >> 1 & 1) != 0) && (uVar1 = sym.aw882xx_dsp_noise_en(unaff_x24,1), uVar1 < 0)) ||
                       (uVar1 = sym.aw882xx_dsp_cali_en(unaff_x24,1), uVar1 < 0)) {
                        pcVar14 = uVar1;
                        pcVar7 = arg2;
                        goto code_r0x08014304;
                    }
                    pcVar15 = *pcVar15;
                } while (pcVar15 != pcVar14);
            }
            msleep(5000);
            unaff_x22 = pcStack_70;
            arg1 = *pcStack_70;
            pcVar7 = arg2;
            if (arg1 == pcStack_70) {
                pcVar14 = 0xffffffff;
            }
            else {
                do {
                    uVar1 = sym.aw_cali_svc_dev_get_f0(arg1 + -0x3e0);
                    pcVar14 = uVar1;
                    if (uVar1 < 0) {
                        iVar5 = (*(arg1 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(arg1 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_devs_get_cali_cali_data";
                        in_x3 = 0x1;
                        _printk(0x8006c6c,iVar5);
                        break;
                    }
                    arg1 = *arg1;
                } while (arg1 != unaff_x22);
            }
code_r0x08014304:
            unaff_x26 = pcStack_70;
            unaff_x27 = *pcStack_70;
            if (unaff_x27 != pcStack_70) {
                arg1 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "disable";
                do {
                    unaff_x24 = unaff_x27 + -0x3e0;
                    sym.aw882xx_dsp_cali_en(unaff_x24,0);
                    if ((uVar3 >> 1 & 1) != 0) {
                        sym.aw882xx_dsp_noise_en(unaff_x24,0);
                    }
                    obj.soc_codec_dev_aw882xx = 0x0;
                    iVar5 = (*(unaff_x27 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(unaff_x27 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    sym.aw_cali_svc_run_mute(unaff_x24,unaff_x27[-0x1e8]);
                    unaff_x27 = *unaff_x27;
                } while (unaff_x27 != unaff_x26);
            }
        }
        else {
            pcVar14 = uVar1;
            iVar5 = (*(arg1 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(arg1 + 0x40);
            }
            pcVar7 = "aw_cali_svc_devs_cali_f0";
            _printk(0x8005704,iVar5);
        }
    }
    else {
        sym.aw_cali_svc_run_mute(arg1,1);
        iVar5 = (*(arg1 + 0x40))[0xe];
        obj.soc_codec_dev_aw882xx = 0x1;
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        _printk(0x80082c7,iVar5,"aw_cali_svc_set_cali_status","enable");
        if (((uVar3 >> 1 & 1) == 0) || (uVar1 = sym.aw882xx_dsp_noise_en(arg1,1), -1 < uVar1)) {
            uVar1 = sym.aw882xx_dsp_cali_en(arg1,1);
            if (-1 < uVar1) {
                msleep(5000);
                uVar1 = sym.aw_cali_svc_dev_get_f0(arg1);
            }
            pcVar14 = uVar1;
            sym.aw882xx_dsp_cali_en(arg1,0);
            if ((uVar3 >> 1 & 1) != 0) goto code_r0x080144a8;
        }
        else {
            pcVar14 = uVar1;
            sym.aw882xx_dsp_cali_en(arg1,0);
code_r0x080144a8:
            sym.aw882xx_dsp_noise_en(arg1,0);
        }
        obj.soc_codec_dev_aw882xx = 0x0;
        iVar5 = (*(arg1 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        pcVar7 = "aw_cali_svc_set_cali_status";
        in_x3 = "disable";
        _printk(0x80082c7,iVar5);
        sym.aw_cali_svc_run_mute(arg1,*(arg1 + 0x1f8));
        unaff_x22 = segment.ehdr;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    pcVar15 = auVar17._0_8_;
    *extraout_x18 = sym.aw_cali_svc_cali_f0_q;
    pcStack_c8 = sym.aw_cali_svc_cali_f0_q;
    iVar5 = sp_el0;
    uVar13 = pcVar7 & 0xffffffff;
    iStack_d8 = *(iVar5 + 0x5e0);
    uVar3 = pcVar7;
    puStack_d0 = &stack0xffffffffffffffa0;
    uStack_c0 = unaff_x28;
    pcStack_b8 = unaff_x27;
    pcStack_b0 = unaff_x26;
    pcStack_a8 = unaff_x25;
    pcStack_a0 = unaff_x24;
    pcStack_98 = unaff_x23;
    pcStack_90 = unaff_x22;
    pcStack_88 = arg1;
    pcStack_80 = pcVar14;
    uStack_78 = uVar12;
    if ((auVar17._8_8_ & 1) == 0) {
        pcStack_e0 = NULL;
        uVar2 = sym.aw882xx_dev_get_list_head(&pcStack_e0);
        pcVar14 = pcStack_e0;
        uVar1 = in_x3;
        if (uVar2 == 0) {
            unaff_x25 = segment.ehdr;
            pcVar16 = *pcStack_e0;
            if (pcVar16 != pcStack_e0) {
                pcVar15 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "enable";
                do {
                    unaff_x24 = pcVar16 + -0x3e0;
                    sym.aw_cali_svc_run_mute(unaff_x24,1);
                    obj.soc_codec_dev_aw882xx = 0x1;
                    iVar5 = (*(pcVar16 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar16 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    if ((uVar3 >> 1 & 1) != 0) {
                        uVar2 = sym.aw882xx_dsp_noise_en(unaff_x24,1);
                        uVar1 = in_x3;
                        if (-1 < uVar2) goto code_r0x080145f4;
code_r0x08014718:
                        pcVar14 = uVar2;
                        goto code_r0x0801464c;
                    }
code_r0x080145f4:
                    uVar2 = sym.aw882xx_dsp_cali_en(unaff_x24,1);
                    uVar1 = in_x3;
                    if (uVar2 < 0) goto code_r0x08014718;
                    pcVar16 = *pcVar16;
                } while (pcVar16 != pcVar14);
            }
            msleep(5000);
            unaff_x22 = pcStack_e0;
            uVar1 = in_x3;
            pcVar15 = *pcStack_e0;
            if (pcVar15 == pcStack_e0) {
                pcVar14 = 0xffffffff;
            }
            else {
                do {
                    uVar2 = sym.aw_cali_svc_dev_get_f0_q(pcVar15 + -0x3e0);
                    uVar1 = in_x3;
                    pcVar14 = uVar2;
                    if (uVar2 < 0) {
                        iVar5 = (*(pcVar15 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(pcVar15 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_devs_get_cali_cali_data";
                        uVar1 = 2;
                        _printk(0x8006c6c,iVar5);
                        break;
                    }
                    pcVar15 = *pcVar15;
                } while (pcVar15 != unaff_x22);
            }
code_r0x0801464c:
            unaff_x26 = pcStack_e0;
            pcVar16 = *pcStack_e0;
            if (pcVar16 != pcStack_e0) {
                pcVar15 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "disable";
                do {
                    unaff_x24 = pcVar16 + -0x3e0;
                    sym.aw882xx_dsp_cali_en(unaff_x24,0);
                    if ((uVar3 >> 1 & 1) != 0) {
                        sym.aw882xx_dsp_noise_en(unaff_x24,0);
                    }
                    obj.soc_codec_dev_aw882xx = 0x0;
                    iVar5 = (*(pcVar16 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar16 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    pcVar8 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    uVar1 = pcVar8;
                    sym.aw_cali_svc_run_mute(unaff_x24,pcVar16[-0x1e8]);
                    pcVar16 = *pcVar16;
                } while (pcVar16 != unaff_x26);
            }
        }
        else {
            pcVar14 = uVar2;
            iVar5 = (*(pcVar15 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(pcVar15 + 0x40);
            }
            pcVar7 = "aw_cali_svc_devs_cali_f0_q";
            _printk(0x800915c,iVar5);
        }
        goto code_r0x080146d8;
    }
    sym.aw_cali_svc_run_mute(pcVar15,1);
    iVar5 = (*(pcVar15 + 0x40))[0xe];
    obj.soc_codec_dev_aw882xx = 0x1;
    if (iVar5 == 0) {
        iVar5 = **(pcVar15 + 0x40);
    }
    _printk(0x80082c7,iVar5,"aw_cali_svc_set_cali_status","enable");
    if (((uVar3 >> 1 & 1) == 0) || (uVar1 = sym.aw882xx_dsp_noise_en(pcVar15,1), -1 < uVar1)) {
        uVar1 = sym.aw882xx_dsp_cali_en(pcVar15,1);
        if (-1 < uVar1) {
            msleep(5000);
            uVar1 = sym.aw_cali_svc_dev_get_f0_q(pcVar15);
        }
        pcVar14 = uVar1;
        sym.aw882xx_dsp_cali_en(pcVar15,0);
        if ((uVar3 >> 1 & 1) != 0) goto code_r0x080147f0;
    }
    else {
        pcVar14 = uVar1;
        sym.aw882xx_dsp_cali_en(pcVar15,0);
code_r0x080147f0:
        sym.aw882xx_dsp_noise_en(pcVar15,0);
    }
    obj.soc_codec_dev_aw882xx = 0x0;
    iVar5 = (*(pcVar15 + 0x40))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(pcVar15 + 0x40);
    }
    pcVar7 = "aw_cali_svc_set_cali_status";
    uVar1 = 0x80025fd;
    _printk(0x80082c7,iVar5);
    sym.aw_cali_svc_run_mute(pcVar15,pcVar15[0x1f8]);
    unaff_x22 = segment.ehdr;
code_r0x080146d8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_d8) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_get_devs_cali_re;
    pcStack_108 = sym.aw_cali_svc_get_devs_cali_re;
    iVar5 = sp_el0;
    iStack_118 = *(iVar5 + 0x5e0);
    piStack_120 = NULL;
    pcVar8 = pcVar7;
    ppuStack_110 = &puStack_d0;
    pcStack_100 = unaff_x22;
    pcStack_f8 = pcVar15;
    pcStack_f0 = pcVar14;
    uStack_e8 = uVar13;
    uVar3 = sym.aw882xx_dev_get_list_head(&piStack_120);
    if (uVar3 == 0) {
        piVar11 = *piStack_120;
        if (piVar11 == piStack_120) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            do {
                uVar1 = *(piVar11 + -0x3b4);
                uVar12 = uVar1;
                if (pcVar7 <= uVar1) {
                    piVar11 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar8 = "aw_cali_svc_get_devs_cali_re";
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_re",uVar12,pcVar7 & 0xffffffff);
                    uVar1 = uVar12;
                    pcVar14 = 0xffffffea;
                    break;
                }
                pcVar14 = pcVar14 + 1;
                *(auVar17._8_8_ + uVar12 * 4) = *(piVar11 + -500);
                piVar11 = *piVar11;
            } while (piVar11 != piStack_120);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_cali_re";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_118) {
        return pcVar14;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_svc_get_devs_r0;
    pcStack_168 = sym.aw_cali_svc_get_devs_r0;
    iVar5 = sp_el0;
    iStack_178 = *(iVar5 + 0x5e0);
    pcStack_180 = NULL;
    pcVar9 = pcVar8;
    pppuStack_170 = &ppuStack_110;
    pcStack_160 = unaff_x26;
    pcStack_158 = unaff_x25;
    pcStack_150 = unaff_x24;
    pcStack_148 = unaff_x23;
    pcStack_130 = pcVar14;
    uStack_128 = pcVar7 & 0xffffffff;
    auStack_140 = auVar17;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_180);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_180;
        if (unaff_x26 == pcStack_180) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x800259a;
            unaff_x24 = "aw_cali_svc_get_devs_r0";
            do {
                uVar12 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar8) {
                    uVar3 = sym.aw882xx_dsp_read_r0(unaff_x26 + -0x3e0,auVar18._8_8_ + uVar12 * 4);
                    uVar1 = uVar12;
                    if (uVar3 != 0) {
                        pcVar14 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar9 = "aw_cali_svc_get_devs_r0";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar18._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar9 = unaff_x24;
                    _printk(0x800259a,iVar5,"aw_cali_svc_get_devs_r0",uVar12,pcVar8 & 0xffffffff);
                    uVar1 = uVar12;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_180);
        }
    }
    else {
        piVar11 = *(auVar18._0_8_ + 0x40);
        pcVar14 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar9 = "aw_cali_svc_get_devs_r0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_178) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_02 = sym.aw_cali_svc_get_devs_te;
    pcStack_1c8 = sym.aw_cali_svc_get_devs_te;
    iVar5 = sp_el0;
    iStack_1d8 = *(iVar5 + 0x5e0);
    pcStack_1e0 = NULL;
    pcVar7 = pcVar9;
    pppuStack_1d0 = &pppuStack_170;
    pcStack_1c0 = unaff_x26;
    pcStack_1b8 = unaff_x25;
    pcStack_1b0 = unaff_x24;
    pcStack_1a8 = unaff_x23;
    uStack_190 = pcVar8 & 0xffffffff;
    pcStack_188 = pcVar14;
    auStack_1a0 = auVar18;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_1e0);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_1e0;
        if (unaff_x26 == pcStack_1e0) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_te";
            do {
                uVar12 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar9) {
                    uVar3 = sym.aw882xx_dsp_read_te(unaff_x26 + -0x3e0,auVar17._8_8_ + uVar12 * 4);
                    uVar1 = uVar12;
                    if (uVar3 != 0) {
                        pcVar14 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_get_devs_te";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_te",uVar12,pcVar9 & 0xffffffff);
                    uVar1 = uVar12;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_1e0);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_te";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1d8) {
        return pcVar14;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_03 = sym.aw_cali_svc_get_devs_st;
    pcStack_228 = sym.aw_cali_svc_get_devs_st;
    iVar5 = sp_el0;
    iStack_238 = *(iVar5 + 0x5e0);
    pcStack_240 = NULL;
    pcVar8 = pcVar7;
    pppuStack_230 = &pppuStack_1d0;
    pcStack_220 = unaff_x26;
    pcStack_218 = unaff_x25;
    pcStack_210 = unaff_x24;
    pcStack_208 = unaff_x23;
    uStack_1f0 = pcVar9 & 0xffffffff;
    pcStack_1e8 = pcVar14;
    auStack_200 = auVar17;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_240);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_240;
        if (unaff_x26 == pcStack_240) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_st";
            do {
                uVar1 = *(unaff_x26 + -0x3b4);
                if (uVar1 < pcVar7) {
                    pcVar8 = auVar18._8_8_ + (uVar1 << 1 | 1) * 4;
                    uVar3 = sym.aw882xx_dsp_read_st(unaff_x26 + -0x3e0,auVar18._8_8_ + (uVar1 << 1) * 4,pcVar8);
                    if (uVar3 != 0) {
                        pcVar14 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar8 = "aw_cali_svc_get_devs_st";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar18._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar8 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_st",uVar1,pcVar7 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_240);
        }
    }
    else {
        piVar11 = *(auVar18._0_8_ + 0x40);
        pcVar14 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_st";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_238) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_04 = sym.aw_cali_svc_get_devs_cali_f0;
    pcStack_288 = sym.aw_cali_svc_get_devs_cali_f0;
    iVar5 = sp_el0;
    iStack_298 = *(iVar5 + 0x5e0);
    pcStack_2a0 = NULL;
    pcVar9 = pcVar8;
    pppuStack_290 = &pppuStack_230;
    pcStack_280 = unaff_x25;
    pcStack_270 = unaff_x24;
    pcStack_268 = unaff_x23;
    uStack_250 = pcVar7 & 0xffffffff;
    pcStack_248 = pcVar14;
    auStack_260 = auVar18;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_2a0);
    if (uVar3 == 0) {
        unaff_x25 = *pcStack_2a0;
        if (unaff_x25 == pcStack_2a0) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            pcVar15 = pcStack_2a0;
            do {
                uVar1 = *(unaff_x25 + -0x3b4);
                uVar12 = uVar1;
                if (uVar1 < pcVar8) {
                    pcVar14 = pcVar14 + 1;
                    *(auVar17._8_8_ + uVar12 * 4) = *(unaff_x25 + -0x1f0);
                }
                else {
                    piVar11 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar9 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_f0",uVar12,pcVar8 & 0xffffffff);
                    uVar1 = uVar12;
                    pcVar15 = pcStack_2a0;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != pcVar15);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar9 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_298) {
        return pcVar14;
    }
    auVar18 = __stack_chk_fail();
    *extraout_x18_05 = sym.aw_cali_svc_get_devs_f0;
    pcStack_2e8 = sym.aw_cali_svc_get_devs_f0;
    iVar5 = sp_el0;
    iStack_2f8 = *(iVar5 + 0x5e0);
    pcStack_300 = NULL;
    pcVar7 = pcVar9;
    pppuStack_2f0 = &pppuStack_290;
    pcStack_2e0 = unaff_x26;
    pcStack_2d8 = unaff_x25;
    pcStack_2d0 = unaff_x24;
    pcStack_2c8 = unaff_x23;
    uStack_2b0 = pcVar8 & 0xffffffff;
    pcStack_2a8 = pcVar14;
    auStack_2c0 = auVar17;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_300);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_300;
        if (unaff_x26 == pcStack_300) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                uVar1 = *(unaff_x26 + -0x3b4);
                if (uVar1 < pcVar9) {
                    uVar3 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x3e0);
                    if (uVar3 != 0) {
                        pcVar14 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar14;
                        break;
                    }
                    pcVar14 = pcVar14 + 1;
                }
                else {
                    piVar11 = *(auVar18._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_f0",uVar1,pcVar9 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_300);
        }
    }
    else {
        piVar11 = *(auVar18._0_8_ + 0x40);
        pcVar14 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_2f8) {
        return pcVar14;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18_06 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_348 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar5 = sp_el0;
    iStack_358 = *(iVar5 + 0x5e0);
    piStack_360 = NULL;
    pppuStack_350 = &pppuStack_2f0;
    pcStack_340 = unaff_x26;
    pcStack_338 = unaff_x25;
    pcStack_330 = unaff_x24;
    pcStack_328 = unaff_x23;
    uStack_310 = pcVar9 & 0xffffffff;
    pcStack_308 = pcVar14;
    auStack_320 = auVar18;
    uVar12 = sym.aw882xx_dev_get_list_head(&piStack_360);
    if (uVar12 == 0) {
        piVar11 = *piStack_360;
        if (piVar11 == piStack_360) {
            pcVar14 = NULL;
        }
        else {
            pcVar14 = NULL;
            piVar10 = piStack_360;
            do {
                uVar3 = *(piVar11 + -0x3b4);
                if (uVar3 < uVar1) {
                    pcVar14 = pcVar14 + 1;
                    *(auVar17._8_8_ + uVar3 * 4) = piVar11[-0x3e];
                    *(pcVar7 + *(piVar11 + -0x3b4) * 4) = *(piVar11 + -0x1ec);
                }
                else {
                    piVar10 = *(auVar17._0_8_ + 0x40);
                    iVar5 = piVar10[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar10;
                    }
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_f0_q",uVar3,uVar1);
                    piVar10 = piStack_360;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar10);
        }
    }
    else {
        piVar11 = *(auVar17._0_8_ + 0x40);
        pcVar14 = uVar12 & 0xffffffff;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        _printk(0x8005e7f,iVar5,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_358) {
        iVar5 = __stack_chk_fail();
        *extraout_x18_07 = sym.aw_cali_parse_re_dt;
        iVar4 = of_property_read_variable_u32_array(*(*(iVar5 + 0x40) + 0x2f0),"aw-re-min",iVar5 + 0x38,1,0);
        if (iVar4 < 0) {
            *(iVar5 + 0x38) = 1000;
            iVar6 = (*(iVar5 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x40);
            }
            _printk(0x8007e0d,iVar6,"aw_cali_parse_re_dt");
        }
        iVar4 = of_property_read_variable_u32_array(*(*(iVar5 + 0x40) + 0x2f0),"aw-re-max",iVar5 + 0x34,1,0);
        if (iVar4 < 0) {
            *(iVar5 + 0x34) = 50000;
            iVar6 = (*(iVar5 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x40);
            }
            _printk(0x8004b43,iVar6,"aw_cali_parse_re_dt");
        }
        piVar11 = *(iVar5 + 0x40);
        iVar6 = piVar11[0xe];
        if (*(iVar5 + 0x38) < *(iVar5 + 0x34)) {
            if (iVar6 == 0) {
                iVar6 = *piVar11;
            }
            _printk(0x80025d3,iVar6,"aw_cali_parse_re_dt");
            pcVar14 = NULL;
        }
        else {
            if (iVar6 == 0) {
                iVar6 = *piVar11;
            }
            _printk(0x8006f77,iVar6,"aw_cali_parse_re_dt");
            pcVar14 = 0xffffffea;
        }
        return pcVar14;
    }
    return pcVar14;
}


// ===== sym.aw_cali_svc_cali_f0_q @ 0x08014528 (size 840) =====

code * sym.aw_cali_svc_cali_f0_q(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t in_x1;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    char *in_x3;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar12;
    code *pcVar13;
    char *unaff_x22;
    char *unaff_x23;
    char *unaff_x24;
    code *unaff_x25;
    code *unaff_x26;
    code *pcVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uchar auVar16 [16];
    int64_t *piStack_2f0;
    int64_t iStack_2e8;
    ulong ***pppuStack_2e0;
    code *pcStack_2d8;
    code *pcStack_2d0;
    code *pcStack_2c8;
    code *pcStack_2c0;
    char *pcStack_2b8;
    uchar auStack_2b0 [16];
    uint64_t uStack_2a0;
    code *pcStack_298;
    code *pcStack_290;
    int64_t iStack_288;
    ulong ***pppuStack_280;
    code *pcStack_278;
    code *pcStack_270;
    code *pcStack_268;
    code *pcStack_260;
    char *pcStack_258;
    uchar auStack_250 [16];
    uint64_t uStack_240;
    code *pcStack_238;
    code *pcStack_230;
    int64_t iStack_228;
    ulong ***pppuStack_220;
    code *pcStack_218;
    code *pcStack_210;
    code *pcStack_200;
    char *pcStack_1f8;
    uchar auStack_1f0 [16];
    uint64_t uStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    int64_t iStack_1c8;
    ulong ***pppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    char *pcStack_198;
    uchar auStack_190 [16];
    uint64_t uStack_180;
    code *pcStack_178;
    code *pcStack_170;
    int64_t iStack_168;
    uchar ***pppuStack_160;
    code *pcStack_158;
    code *pcStack_150;
    code *pcStack_148;
    code *pcStack_140;
    char *pcStack_138;
    uchar auStack_130 [16];
    uint64_t uStack_120;
    code *pcStack_118;
    code *pcStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
    char *pcStack_d8;
    uchar auStack_d0 [16];
    code *pcStack_c0;
    uint64_t uStack_b8;
    int64_t *piStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    code *pcStack_88;
    code *pcStack_80;
    uint64_t uStack_78;
    code *pcStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    uVar12 = arg2 & 0xffffffff;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar3 = arg2;
    if ((in_x1 & 1) == 0) {
        pcStack_70 = NULL;
        uVar1 = sym.aw882xx_dev_get_list_head(&pcStack_70);
        pcVar13 = pcStack_70;
        uVar2 = in_x3;
        if (uVar1 == 0) {
            unaff_x25 = segment.ehdr;
            pcVar14 = *pcStack_70;
            if (pcVar14 != pcStack_70) {
                arg1 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "enable";
                do {
                    unaff_x24 = pcVar14 + -0x3e0;
                    sym.aw_cali_svc_run_mute(unaff_x24,1);
                    obj.soc_codec_dev_aw882xx = 0x1;
                    iVar5 = (*(pcVar14 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar14 + -0x3a0);
                    }
                    arg2 = unaff_x22;
                    in_x3 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    if ((uVar3 >> 1 & 1) != 0) {
                        uVar1 = sym.aw882xx_dsp_noise_en(unaff_x24,1);
                        uVar2 = in_x3;
                        if (-1 < uVar1) goto code_r0x080145f4;
code_r0x08014718:
                        pcVar13 = uVar1;
                        pcVar7 = arg2;
                        goto code_r0x0801464c;
                    }
code_r0x080145f4:
                    uVar1 = sym.aw882xx_dsp_cali_en(unaff_x24,1);
                    uVar2 = in_x3;
                    if (uVar1 < 0) goto code_r0x08014718;
                    pcVar14 = *pcVar14;
                } while (pcVar14 != pcVar13);
            }
            msleep(5000);
            unaff_x22 = pcStack_70;
            uVar2 = in_x3;
            arg1 = *pcStack_70;
            pcVar7 = arg2;
            if (arg1 == pcStack_70) {
                pcVar13 = 0xffffffff;
            }
            else {
                do {
                    uVar1 = sym.aw_cali_svc_dev_get_f0_q(arg1 + -0x3e0);
                    uVar2 = in_x3;
                    pcVar13 = uVar1;
                    if (uVar1 < 0) {
                        iVar5 = (*(arg1 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(arg1 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_devs_get_cali_cali_data";
                        uVar2 = 2;
                        _printk(0x8006c6c,iVar5);
                        break;
                    }
                    arg1 = *arg1;
                } while (arg1 != unaff_x22);
            }
code_r0x0801464c:
            unaff_x26 = pcStack_70;
            pcVar14 = *pcStack_70;
            if (pcVar14 != pcStack_70) {
                arg1 = 0x80082c7;
                unaff_x22 = "aw_cali_svc_set_cali_status";
                unaff_x23 = "disable";
                do {
                    unaff_x24 = pcVar14 + -0x3e0;
                    sym.aw882xx_dsp_cali_en(unaff_x24,0);
                    if ((uVar3 >> 1 & 1) != 0) {
                        sym.aw882xx_dsp_noise_en(unaff_x24,0);
                    }
                    obj.soc_codec_dev_aw882xx = 0x0;
                    iVar5 = (*(pcVar14 + -0x3a0))[0xe];
                    if (iVar5 == 0) {
                        iVar5 = **(pcVar14 + -0x3a0);
                    }
                    pcVar7 = unaff_x22;
                    pcVar8 = unaff_x23;
                    _printk(0x80082c7,iVar5);
                    uVar2 = pcVar8;
                    sym.aw_cali_svc_run_mute(unaff_x24,pcVar14[-0x1e8]);
                    pcVar14 = *pcVar14;
                } while (pcVar14 != unaff_x26);
            }
        }
        else {
            pcVar13 = uVar1;
            iVar5 = (*(arg1 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(arg1 + 0x40);
            }
            pcVar7 = "aw_cali_svc_devs_cali_f0_q";
            _printk(0x800915c,iVar5);
        }
        goto code_r0x080146d8;
    }
    sym.aw_cali_svc_run_mute(arg1,1);
    iVar5 = (*(arg1 + 0x40))[0xe];
    obj.soc_codec_dev_aw882xx = 0x1;
    if (iVar5 == 0) {
        iVar5 = **(arg1 + 0x40);
    }
    _printk(0x80082c7,iVar5,"aw_cali_svc_set_cali_status","enable");
    if (((uVar3 >> 1 & 1) == 0) || (uVar2 = sym.aw882xx_dsp_noise_en(arg1,1), -1 < uVar2)) {
        uVar2 = sym.aw882xx_dsp_cali_en(arg1,1);
        if (-1 < uVar2) {
            msleep(5000);
            uVar2 = sym.aw_cali_svc_dev_get_f0_q(arg1);
        }
        pcVar13 = uVar2;
        sym.aw882xx_dsp_cali_en(arg1,0);
        if ((uVar3 >> 1 & 1) != 0) goto code_r0x080147f0;
    }
    else {
        pcVar13 = uVar2;
        sym.aw882xx_dsp_cali_en(arg1,0);
code_r0x080147f0:
        sym.aw882xx_dsp_noise_en(arg1,0);
    }
    obj.soc_codec_dev_aw882xx = 0x0;
    iVar5 = (*(arg1 + 0x40))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(arg1 + 0x40);
    }
    pcVar7 = "aw_cali_svc_set_cali_status";
    uVar2 = 0x80025fd;
    _printk(0x80082c7,iVar5);
    sym.aw_cali_svc_run_mute(arg1,*(arg1 + 0x1f8));
    unaff_x22 = segment.ehdr;
code_r0x080146d8:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return pcVar13;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_get_devs_cali_re;
    pcStack_98 = sym.aw_cali_svc_get_devs_cali_re;
    iVar5 = sp_el0;
    iStack_a8 = *(iVar5 + 0x5e0);
    piStack_b0 = NULL;
    pcVar8 = pcVar7;
    puStack_a0 = &stack0xffffffffffffffa0;
    pcStack_90 = unaff_x22;
    pcStack_88 = arg1;
    pcStack_80 = pcVar13;
    uStack_78 = uVar12;
    uVar3 = sym.aw882xx_dev_get_list_head(&piStack_b0);
    if (uVar3 == 0) {
        piVar11 = *piStack_b0;
        if (piVar11 == piStack_b0) {
            pcVar13 = NULL;
        }
        else {
            pcVar13 = NULL;
            do {
                uVar2 = *(piVar11 + -0x3b4);
                uVar12 = uVar2;
                if (pcVar7 <= uVar2) {
                    piVar11 = *(auVar15._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar8 = "aw_cali_svc_get_devs_cali_re";
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_re",uVar12,pcVar7 & 0xffffffff);
                    uVar2 = uVar12;
                    pcVar13 = 0xffffffea;
                    break;
                }
                pcVar13 = pcVar13 + 1;
                *(auVar15._8_8_ + uVar12 * 4) = *(piVar11 + -500);
                piVar11 = *piVar11;
            } while (piVar11 != piStack_b0);
        }
    }
    else {
        piVar11 = *(auVar15._0_8_ + 0x40);
        pcVar13 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_cali_re";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_a8) {
        return pcVar13;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_get_devs_r0;
    pcStack_f8 = sym.aw_cali_svc_get_devs_r0;
    iVar5 = sp_el0;
    iStack_108 = *(iVar5 + 0x5e0);
    pcStack_110 = NULL;
    pcVar9 = pcVar8;
    ppuStack_100 = &puStack_a0;
    pcStack_f0 = unaff_x26;
    pcStack_e8 = unaff_x25;
    pcStack_e0 = unaff_x24;
    pcStack_d8 = unaff_x23;
    pcStack_c0 = pcVar13;
    uStack_b8 = pcVar7 & 0xffffffff;
    auStack_d0 = auVar15;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_110);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_110;
        if (unaff_x26 == pcStack_110) {
            pcVar13 = NULL;
        }
        else {
            pcVar13 = NULL;
            unaff_x23 = 0x800259a;
            unaff_x24 = "aw_cali_svc_get_devs_r0";
            do {
                uVar12 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar8) {
                    uVar3 = sym.aw882xx_dsp_read_r0(unaff_x26 + -0x3e0,auVar16._8_8_ + uVar12 * 4);
                    uVar2 = uVar12;
                    if (uVar3 != 0) {
                        pcVar13 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar9 = "aw_cali_svc_get_devs_r0";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar13;
                        break;
                    }
                    pcVar13 = pcVar13 + 1;
                }
                else {
                    piVar11 = *(auVar16._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar9 = unaff_x24;
                    _printk(0x800259a,iVar5,"aw_cali_svc_get_devs_r0",uVar12,pcVar8 & 0xffffffff);
                    uVar2 = uVar12;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_110);
        }
    }
    else {
        piVar11 = *(auVar16._0_8_ + 0x40);
        pcVar13 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar9 = "aw_cali_svc_get_devs_r0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_108) {
        return pcVar13;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_svc_get_devs_te;
    pcStack_158 = sym.aw_cali_svc_get_devs_te;
    iVar5 = sp_el0;
    iStack_168 = *(iVar5 + 0x5e0);
    pcStack_170 = NULL;
    pcVar7 = pcVar9;
    pppuStack_160 = &ppuStack_100;
    pcStack_150 = unaff_x26;
    pcStack_148 = unaff_x25;
    pcStack_140 = unaff_x24;
    pcStack_138 = unaff_x23;
    uStack_120 = pcVar8 & 0xffffffff;
    pcStack_118 = pcVar13;
    auStack_130 = auVar16;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_170);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_170;
        if (unaff_x26 == pcStack_170) {
            pcVar13 = NULL;
        }
        else {
            pcVar13 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_te";
            do {
                uVar12 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar9) {
                    uVar3 = sym.aw882xx_dsp_read_te(unaff_x26 + -0x3e0,auVar15._8_8_ + uVar12 * 4);
                    uVar2 = uVar12;
                    if (uVar3 != 0) {
                        pcVar13 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_get_devs_te";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar13;
                        break;
                    }
                    pcVar13 = pcVar13 + 1;
                }
                else {
                    piVar11 = *(auVar15._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_te",uVar12,pcVar9 & 0xffffffff);
                    uVar2 = uVar12;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_170);
        }
    }
    else {
        piVar11 = *(auVar15._0_8_ + 0x40);
        pcVar13 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_te";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_168) {
        return pcVar13;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18_02 = sym.aw_cali_svc_get_devs_st;
    pcStack_1b8 = sym.aw_cali_svc_get_devs_st;
    iVar5 = sp_el0;
    iStack_1c8 = *(iVar5 + 0x5e0);
    pcStack_1d0 = NULL;
    pcVar8 = pcVar7;
    pppuStack_1c0 = &pppuStack_160;
    pcStack_1b0 = unaff_x26;
    pcStack_1a8 = unaff_x25;
    pcStack_1a0 = unaff_x24;
    pcStack_198 = unaff_x23;
    uStack_180 = pcVar9 & 0xffffffff;
    pcStack_178 = pcVar13;
    auStack_190 = auVar15;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_1d0);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_1d0;
        if (unaff_x26 == pcStack_1d0) {
            pcVar13 = NULL;
        }
        else {
            pcVar13 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_st";
            do {
                uVar2 = *(unaff_x26 + -0x3b4);
                if (uVar2 < pcVar7) {
                    pcVar8 = auVar16._8_8_ + (uVar2 << 1 | 1) * 4;
                    uVar3 = sym.aw882xx_dsp_read_st(unaff_x26 + -0x3e0,auVar16._8_8_ + (uVar2 << 1) * 4,pcVar8);
                    if (uVar3 != 0) {
                        pcVar13 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar8 = "aw_cali_svc_get_devs_st";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar13;
                        break;
                    }
                    pcVar13 = pcVar13 + 1;
                }
                else {
                    piVar11 = *(auVar16._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar8 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_st",uVar2,pcVar7 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_1d0);
        }
    }
    else {
        piVar11 = *(auVar16._0_8_ + 0x40);
        pcVar13 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_st";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_1c8) {
        return pcVar13;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18_03 = sym.aw_cali_svc_get_devs_cali_f0;
    pcStack_218 = sym.aw_cali_svc_get_devs_cali_f0;
    iVar5 = sp_el0;
    iStack_228 = *(iVar5 + 0x5e0);
    pcStack_230 = NULL;
    pcVar9 = pcVar8;
    pppuStack_220 = &pppuStack_1c0;
    pcStack_210 = unaff_x25;
    pcStack_200 = unaff_x24;
    pcStack_1f8 = unaff_x23;
    uStack_1e0 = pcVar7 & 0xffffffff;
    pcStack_1d8 = pcVar13;
    auStack_1f0 = auVar16;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_230);
    if (uVar3 == 0) {
        unaff_x25 = *pcStack_230;
        if (unaff_x25 == pcStack_230) {
            pcVar13 = NULL;
        }
        else {
            pcVar13 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            pcVar14 = pcStack_230;
            do {
                uVar2 = *(unaff_x25 + -0x3b4);
                uVar12 = uVar2;
                if (uVar2 < pcVar8) {
                    pcVar13 = pcVar13 + 1;
                    *(auVar15._8_8_ + uVar12 * 4) = *(unaff_x25 + -0x1f0);
                }
                else {
                    piVar11 = *(auVar15._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar9 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_f0",uVar12,pcVar8 & 0xffffffff);
                    uVar2 = uVar12;
                    pcVar14 = pcStack_230;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != pcVar14);
        }
    }
    else {
        piVar11 = *(auVar15._0_8_ + 0x40);
        pcVar13 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar9 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_228) {
        return pcVar13;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18_04 = sym.aw_cali_svc_get_devs_f0;
    pcStack_278 = sym.aw_cali_svc_get_devs_f0;
    iVar5 = sp_el0;
    iStack_288 = *(iVar5 + 0x5e0);
    pcStack_290 = NULL;
    pcVar7 = pcVar9;
    pppuStack_280 = &pppuStack_220;
    pcStack_270 = unaff_x26;
    pcStack_268 = unaff_x25;
    pcStack_260 = unaff_x24;
    pcStack_258 = unaff_x23;
    uStack_240 = pcVar8 & 0xffffffff;
    pcStack_238 = pcVar13;
    auStack_250 = auVar15;
    uVar3 = sym.aw882xx_dev_get_list_head(&pcStack_290);
    if (uVar3 == 0) {
        unaff_x26 = *pcStack_290;
        if (unaff_x26 == pcStack_290) {
            pcVar13 = NULL;
        }
        else {
            pcVar13 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                uVar2 = *(unaff_x26 + -0x3b4);
                if (uVar2 < pcVar9) {
                    uVar3 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x3e0);
                    if (uVar3 != 0) {
                        pcVar13 = uVar3;
                        iVar5 = (*(unaff_x26 + -0x3a0))[0xe];
                        if (iVar5 == 0) {
                            iVar5 = **(unaff_x26 + -0x3a0);
                        }
                        pcVar7 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar5);
                        unaff_x25 = pcVar13;
                        break;
                    }
                    pcVar13 = pcVar13 + 1;
                }
                else {
                    piVar11 = *(auVar16._0_8_ + 0x40);
                    iVar5 = piVar11[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_f0",uVar2,pcVar9 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != pcStack_290);
        }
    }
    else {
        piVar11 = *(auVar16._0_8_ + 0x40);
        pcVar13 = uVar3;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar5);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_288) {
        return pcVar13;
    }
    auVar15 = __stack_chk_fail();
    *extraout_x18_05 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_2d8 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar5 = sp_el0;
    iStack_2e8 = *(iVar5 + 0x5e0);
    piStack_2f0 = NULL;
    pppuStack_2e0 = &pppuStack_280;
    pcStack_2d0 = unaff_x26;
    pcStack_2c8 = unaff_x25;
    pcStack_2c0 = unaff_x24;
    pcStack_2b8 = unaff_x23;
    uStack_2a0 = pcVar9 & 0xffffffff;
    pcStack_298 = pcVar13;
    auStack_2b0 = auVar16;
    uVar12 = sym.aw882xx_dev_get_list_head(&piStack_2f0);
    if (uVar12 == 0) {
        piVar11 = *piStack_2f0;
        if (piVar11 == piStack_2f0) {
            pcVar13 = NULL;
        }
        else {
            pcVar13 = NULL;
            piVar10 = piStack_2f0;
            do {
                uVar3 = *(piVar11 + -0x3b4);
                if (uVar3 < uVar2) {
                    pcVar13 = pcVar13 + 1;
                    *(auVar15._8_8_ + uVar3 * 4) = piVar11[-0x3e];
                    *(pcVar7 + *(piVar11 + -0x3b4) * 4) = *(piVar11 + -0x1ec);
                }
                else {
                    piVar10 = *(auVar15._0_8_ + 0x40);
                    iVar5 = piVar10[0xe];
                    if (iVar5 == 0) {
                        iVar5 = *piVar10;
                    }
                    _printk(0x8003a7f,iVar5,"aw_cali_svc_get_devs_cali_f0_q",uVar3,uVar2);
                    piVar10 = piStack_2f0;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar10);
        }
    }
    else {
        piVar11 = *(auVar15._0_8_ + 0x40);
        pcVar13 = uVar12 & 0xffffffff;
        iVar5 = piVar11[0xe];
        if (iVar5 == 0) {
            iVar5 = *piVar11;
        }
        _printk(0x8005e7f,iVar5,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_2e8) {
        iVar5 = __stack_chk_fail();
        *extraout_x18_06 = sym.aw_cali_parse_re_dt;
        iVar4 = of_property_read_variable_u32_array(*(*(iVar5 + 0x40) + 0x2f0),"aw-re-min",iVar5 + 0x38,1,0);
        if (iVar4 < 0) {
            *(iVar5 + 0x38) = 1000;
            iVar6 = (*(iVar5 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x40);
            }
            _printk(0x8007e0d,iVar6,"aw_cali_parse_re_dt");
        }
        iVar4 = of_property_read_variable_u32_array(*(*(iVar5 + 0x40) + 0x2f0),"aw-re-max",iVar5 + 0x34,1,0);
        if (iVar4 < 0) {
            *(iVar5 + 0x34) = 50000;
            iVar6 = (*(iVar5 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar5 + 0x40);
            }
            _printk(0x8004b43,iVar6,"aw_cali_parse_re_dt");
        }
        piVar11 = *(iVar5 + 0x40);
        iVar6 = piVar11[0xe];
        if (*(iVar5 + 0x38) < *(iVar5 + 0x34)) {
            if (iVar6 == 0) {
                iVar6 = *piVar11;
            }
            _printk(0x80025d3,iVar6,"aw_cali_parse_re_dt");
            pcVar13 = NULL;
        }
        else {
            if (iVar6 == 0) {
                iVar6 = *piVar11;
            }
            _printk(0x8006f77,iVar6,"aw_cali_parse_re_dt");
            pcVar13 = 0xffffffea;
        }
        return pcVar13;
    }
    return pcVar13;
}


// ===== sym.aw_cali_svc_get_devs_cali_re @ 0x08014870 (size 288) =====

uint64_t * sym.aw_cali_svc_get_devs_cali_re(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    uint32_t in_w3;
    uint64_t *puVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t *puVar12;
    ulong unaff_x23;
    char *unaff_x24;
    uint64_t *unaff_x25;
    int64_t *unaff_x26;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auVar14 [16];
    int64_t *piStack_280;
    int64_t iStack_278;
    ulong ***pppuStack_270;
    code *pcStack_268;
    int64_t *piStack_260;
    uint64_t *puStack_258;
    char *pcStack_250;
    ulong uStack_248;
    uchar auStack_240 [16];
    uint64_t uStack_230;
    uint64_t *puStack_228;
    int64_t *piStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    int64_t *piStack_200;
    uint64_t *puStack_1f8;
    char *pcStack_1f0;
    ulong uStack_1e8;
    uchar auStack_1e0 [16];
    uint64_t uStack_1d0;
    uint64_t *puStack_1c8;
    uint64_t *puStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    uint64_t *puStack_1a0;
    char *pcStack_190;
    ulong uStack_188;
    uchar auStack_180 [16];
    uint64_t uStack_170;
    uint64_t *puStack_168;
    int64_t *piStack_160;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    int64_t *piStack_140;
    uint64_t *puStack_138;
    char *pcStack_130;
    ulong uStack_128;
    uchar auStack_120 [16];
    uint64_t uStack_110;
    uint64_t *puStack_108;
    int64_t *piStack_100;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    int64_t *piStack_e0;
    uint64_t *puStack_d8;
    char *pcStack_d0;
    ulong uStack_c8;
    uchar auStack_c0 [16];
    uint64_t uStack_b0;
    uint64_t *puStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t *piStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    piStack_40 = NULL;
    pcVar6 = arg3;
    uVar3 = sym.aw882xx_dev_get_list_head(&piStack_40);
    if (uVar3 == 0) {
        piVar11 = *piStack_40;
        if (piVar11 == piStack_40) {
            puVar12 = NULL;
        }
        else {
            puVar12 = NULL;
            do {
                in_w3 = *(piVar11 + -0x3b4);
                uVar3 = in_w3;
                if (arg3 <= in_w3) {
                    iVar4 = (*(arg1 + 0x40))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1 + 0x40);
                    }
                    pcVar6 = "aw_cali_svc_get_devs_cali_re";
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_cali_re",uVar3,arg3 & 0xffffffff);
                    in_w3 = uVar3;
                    puVar12 = 0xffffffea;
                    break;
                }
                puVar12 = puVar12 + 1;
                *(arg2 + uVar3 * 4) = *(piVar11 + -500);
                piVar11 = *piVar11;
            } while (piVar11 != piStack_40);
        }
    }
    else {
        puVar12 = uVar3 & 0xffffffff;
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        pcVar6 = "aw_cali_svc_get_devs_cali_re";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return puVar12;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_get_devs_r0;
    pcStack_88 = sym.aw_cali_svc_get_devs_r0;
    iVar4 = sp_el0;
    iStack_98 = *(iVar4 + 0x5e0);
    piStack_a0 = NULL;
    pcVar7 = pcVar6;
    puStack_90 = &stack0xffffffffffffffd0;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_a0);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_a0;
        if (unaff_x26 == piStack_a0) {
            puVar12 = NULL;
        }
        else {
            puVar12 = NULL;
            unaff_x23 = 0x800259a;
            unaff_x24 = "aw_cali_svc_get_devs_r0";
            do {
                uVar3 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar6) {
                    uVar1 = sym.aw882xx_dsp_read_r0(unaff_x26 + -0x7c,auVar13._8_8_ + uVar3 * 4);
                    in_w3 = uVar3;
                    if (uVar1 != 0) {
                        puVar12 = uVar1;
                        iVar4 = unaff_x26[-0x74][0xe];
                        if (iVar4 == 0) {
                            iVar4 = *unaff_x26[-0x74];
                        }
                        pcVar7 = "aw_cali_svc_get_devs_r0";
                        _printk(0x8005326,iVar4);
                        unaff_x25 = puVar12;
                        break;
                    }
                    puVar12 = puVar12 + 1;
                }
                else {
                    piVar11 = *(auVar13._0_8_ + 0x40);
                    iVar4 = piVar11[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x800259a,iVar4,"aw_cali_svc_get_devs_r0",uVar3,pcVar6 & 0xffffffff);
                    in_w3 = uVar3;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_a0);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar12 = uVar1;
        iVar4 = piVar11[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_r0";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_98) {
        return puVar12;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_get_devs_te;
    pcStack_e8 = sym.aw_cali_svc_get_devs_te;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    piStack_100 = NULL;
    pcVar8 = pcVar7;
    ppuStack_f0 = &puStack_90;
    piStack_e0 = unaff_x26;
    puStack_d8 = unaff_x25;
    pcStack_d0 = unaff_x24;
    uStack_c8 = unaff_x23;
    uStack_b0 = pcVar6 & 0xffffffff;
    puStack_a8 = puVar12;
    auStack_c0 = auVar13;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_100);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_100;
        if (unaff_x26 == piStack_100) {
            puVar12 = NULL;
        }
        else {
            puVar12 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_te";
            do {
                uVar3 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar7) {
                    uVar1 = sym.aw882xx_dsp_read_te(unaff_x26 + -0x7c,auVar14._8_8_ + uVar3 * 4);
                    in_w3 = uVar3;
                    if (uVar1 != 0) {
                        puVar12 = uVar1;
                        iVar4 = unaff_x26[-0x74][0xe];
                        if (iVar4 == 0) {
                            iVar4 = *unaff_x26[-0x74];
                        }
                        pcVar8 = "aw_cali_svc_get_devs_te";
                        _printk(0x8005326,iVar4);
                        unaff_x25 = puVar12;
                        break;
                    }
                    puVar12 = puVar12 + 1;
                }
                else {
                    piVar11 = *(auVar14._0_8_ + 0x40);
                    iVar4 = piVar11[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar11;
                    }
                    pcVar8 = unaff_x24;
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_te",uVar3,pcVar7 & 0xffffffff);
                    in_w3 = uVar3;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_100);
        }
    }
    else {
        piVar11 = *(auVar14._0_8_ + 0x40);
        puVar12 = uVar1;
        iVar4 = piVar11[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_te";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return puVar12;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_svc_get_devs_st;
    pcStack_148 = sym.aw_cali_svc_get_devs_st;
    iVar4 = sp_el0;
    iStack_158 = *(iVar4 + 0x5e0);
    piStack_160 = NULL;
    pcVar6 = pcVar8;
    pppuStack_150 = &ppuStack_f0;
    piStack_140 = unaff_x26;
    puStack_138 = unaff_x25;
    pcStack_130 = unaff_x24;
    uStack_128 = unaff_x23;
    uStack_110 = pcVar7 & 0xffffffff;
    puStack_108 = puVar12;
    auStack_120 = auVar14;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_160);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_160;
        if (unaff_x26 == piStack_160) {
            puVar12 = NULL;
        }
        else {
            puVar12 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_st";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar8) {
                    pcVar6 = auVar13._8_8_ + (in_w3 << 1 | 1) * 4;
                    uVar1 = sym.aw882xx_dsp_read_st(unaff_x26 + -0x7c,auVar13._8_8_ + (in_w3 << 1) * 4,pcVar6);
                    if (uVar1 != 0) {
                        puVar12 = uVar1;
                        iVar4 = unaff_x26[-0x74][0xe];
                        if (iVar4 == 0) {
                            iVar4 = *unaff_x26[-0x74];
                        }
                        pcVar6 = "aw_cali_svc_get_devs_st";
                        _printk(0x8005326,iVar4);
                        unaff_x25 = puVar12;
                        break;
                    }
                    puVar12 = puVar12 + 1;
                }
                else {
                    piVar11 = *(auVar13._0_8_ + 0x40);
                    iVar4 = piVar11[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar11;
                    }
                    pcVar6 = unaff_x24;
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_st",in_w3,pcVar8 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_160);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar12 = uVar1;
        iVar4 = piVar11[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar11;
        }
        pcVar6 = "aw_cali_svc_get_devs_st";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_158) {
        return puVar12;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18_02 = sym.aw_cali_svc_get_devs_cali_f0;
    pcStack_1a8 = sym.aw_cali_svc_get_devs_cali_f0;
    iVar4 = sp_el0;
    iStack_1b8 = *(iVar4 + 0x5e0);
    puStack_1c0 = NULL;
    pcVar7 = pcVar6;
    pppuStack_1b0 = &pppuStack_150;
    puStack_1a0 = unaff_x25;
    pcStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    uStack_170 = pcVar8 & 0xffffffff;
    puStack_168 = puVar12;
    auStack_180 = auVar13;
    uVar1 = sym.aw882xx_dev_get_list_head(&puStack_1c0);
    if (uVar1 == 0) {
        unaff_x25 = *puStack_1c0;
        if (unaff_x25 == puStack_1c0) {
            puVar12 = NULL;
        }
        else {
            puVar12 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            puVar9 = puStack_1c0;
            do {
                in_w3 = *(unaff_x25 - 0x3b4);
                uVar3 = in_w3;
                if (in_w3 < pcVar6) {
                    puVar12 = puVar12 + 1;
                    *(auVar14._8_8_ + uVar3 * 4) = unaff_x25[-0x3e];
                }
                else {
                    piVar11 = *(auVar14._0_8_ + 0x40);
                    iVar4 = piVar11[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar11;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_cali_f0",uVar3,pcVar6 & 0xffffffff);
                    in_w3 = uVar3;
                    puVar9 = puStack_1c0;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != puVar9);
        }
    }
    else {
        piVar11 = *(auVar14._0_8_ + 0x40);
        puVar12 = uVar1;
        iVar4 = piVar11[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar11;
        }
        pcVar7 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_1b8) {
        return puVar12;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_03 = sym.aw_cali_svc_get_devs_f0;
    pcStack_208 = sym.aw_cali_svc_get_devs_f0;
    iVar4 = sp_el0;
    iStack_218 = *(iVar4 + 0x5e0);
    piStack_220 = NULL;
    pcVar8 = pcVar7;
    pppuStack_210 = &pppuStack_1b0;
    piStack_200 = unaff_x26;
    puStack_1f8 = unaff_x25;
    pcStack_1f0 = unaff_x24;
    uStack_1e8 = unaff_x23;
    uStack_1d0 = pcVar6 & 0xffffffff;
    puStack_1c8 = puVar12;
    auStack_1e0 = auVar14;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_220);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_220;
        if (unaff_x26 == piStack_220) {
            puVar12 = NULL;
        }
        else {
            puVar12 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar7) {
                    uVar1 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x7c);
                    if (uVar1 != 0) {
                        puVar12 = uVar1;
                        iVar4 = unaff_x26[-0x74][0xe];
                        if (iVar4 == 0) {
                            iVar4 = *unaff_x26[-0x74];
                        }
                        pcVar8 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar4);
                        unaff_x25 = puVar12;
                        break;
                    }
                    puVar12 = puVar12 + 1;
                }
                else {
                    piVar11 = *(auVar13._0_8_ + 0x40);
                    iVar4 = piVar11[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar11;
                    }
                    pcVar8 = unaff_x24;
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_f0",in_w3,pcVar7 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_220);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar12 = uVar1;
        iVar4 = piVar11[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar11;
        }
        pcVar8 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_218) {
        return puVar12;
    }
    auVar14 = __stack_chk_fail();
    *extraout_x18_04 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_268 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar4 = sp_el0;
    iStack_278 = *(iVar4 + 0x5e0);
    piStack_280 = NULL;
    pppuStack_270 = &pppuStack_210;
    piStack_260 = unaff_x26;
    puStack_258 = unaff_x25;
    pcStack_250 = unaff_x24;
    uStack_248 = unaff_x23;
    uStack_230 = pcVar7 & 0xffffffff;
    puStack_228 = puVar12;
    auStack_240 = auVar13;
    uVar3 = sym.aw882xx_dev_get_list_head(&piStack_280);
    if (uVar3 == 0) {
        piVar11 = *piStack_280;
        if (piVar11 == piStack_280) {
            puVar12 = NULL;
        }
        else {
            puVar12 = NULL;
            piVar10 = piStack_280;
            do {
                uVar1 = *(piVar11 + -0x3b4);
                if (uVar1 < in_w3) {
                    puVar12 = puVar12 + 1;
                    *(auVar14._8_8_ + uVar1 * 4) = piVar11[-0x3e];
                    *(pcVar8 + *(piVar11 + -0x3b4) * 4) = *(piVar11 + -0x1ec);
                }
                else {
                    piVar10 = *(auVar14._0_8_ + 0x40);
                    iVar4 = piVar10[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar10;
                    }
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_cali_f0_q",uVar1,in_w3);
                    piVar10 = piStack_280;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar10);
        }
    }
    else {
        piVar11 = *(auVar14._0_8_ + 0x40);
        puVar12 = uVar3 & 0xffffffff;
        iVar4 = piVar11[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar11;
        }
        _printk(0x8005e7f,iVar4,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_278) {
        iVar4 = __stack_chk_fail();
        *extraout_x18_05 = sym.aw_cali_parse_re_dt;
        iVar2 = of_property_read_variable_u32_array(*(*(iVar4 + 0x40) + 0x2f0),"aw-re-min",iVar4 + 0x38,1,0);
        if (iVar2 < 0) {
            *(iVar4 + 0x38) = 1000;
            iVar5 = (*(iVar4 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x40);
            }
            _printk(0x8007e0d,iVar5,"aw_cali_parse_re_dt");
        }
        iVar2 = of_property_read_variable_u32_array(*(*(iVar4 + 0x40) + 0x2f0),"aw-re-max",iVar4 + 0x34,1,0);
        if (iVar2 < 0) {
            *(iVar4 + 0x34) = 50000;
            iVar5 = (*(iVar4 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x40);
            }
            _printk(0x8004b43,iVar5,"aw_cali_parse_re_dt");
        }
        piVar11 = *(iVar4 + 0x40);
        iVar5 = piVar11[0xe];
        if (*(iVar4 + 0x38) < *(iVar4 + 0x34)) {
            if (iVar5 == 0) {
                iVar5 = *piVar11;
            }
            _printk(0x80025d3,iVar5,"aw_cali_parse_re_dt");
            puVar12 = NULL;
        }
        else {
            if (iVar5 == 0) {
                iVar5 = *piVar11;
            }
            _printk(0x8006f77,iVar5,"aw_cali_parse_re_dt");
            puVar12 = 0xffffffea;
        }
        return puVar12;
    }
    return puVar12;
}


// ===== sym.aw_cali_svc_get_devs_r0 @ 0x08014990 (size 368) =====

uint64_t * sym.aw_cali_svc_get_devs_r0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    char *pcVar6;
    char *arg3_00;
    uint32_t in_w3;
    uint64_t uVar7;
    uint64_t *puVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t *puVar10;
    ulong unaff_x23;
    char *unaff_x24;
    uint64_t *unaff_x25;
    int64_t *unaff_x26;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t *piStack_240;
    int64_t iStack_238;
    ulong ***pppuStack_230;
    code *pcStack_228;
    int64_t *piStack_220;
    uint64_t *puStack_218;
    char *pcStack_210;
    ulong uStack_208;
    uchar auStack_200 [16];
    uint64_t uStack_1f0;
    uint64_t *puStack_1e8;
    int64_t *piStack_1e0;
    int64_t iStack_1d8;
    ulong ***pppuStack_1d0;
    code *pcStack_1c8;
    int64_t *piStack_1c0;
    uint64_t *puStack_1b8;
    char *pcStack_1b0;
    ulong uStack_1a8;
    uchar auStack_1a0 [16];
    uint64_t uStack_190;
    uint64_t *puStack_188;
    uint64_t *puStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    uint64_t *puStack_160;
    char *pcStack_150;
    ulong uStack_148;
    uchar auStack_140 [16];
    uint64_t uStack_130;
    uint64_t *puStack_128;
    int64_t *piStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    int64_t *piStack_100;
    uint64_t *puStack_f8;
    char *pcStack_f0;
    ulong uStack_e8;
    uchar auStack_e0 [16];
    uint64_t uStack_d0;
    uint64_t *puStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    uint64_t *puStack_98;
    char *pcStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    uint64_t *puStack_68;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    piStack_60 = NULL;
    pcVar5 = arg3;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_60;
        if (unaff_x26 == piStack_60) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x800259a;
            unaff_x24 = "aw_cali_svc_get_devs_r0";
            do {
                uVar7 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < arg3) {
                    uVar1 = sym.aw882xx_dsp_read_r0(unaff_x26 + -0x7c,arg2 + uVar7 * 4);
                    in_w3 = uVar7;
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        pcVar5 = "aw_cali_svc_get_devs_r0";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    pcVar5 = unaff_x24;
                    _printk(0x800259a,iVar3,"aw_cali_svc_get_devs_r0",uVar7,arg3 & 0xffffffff);
                    in_w3 = uVar7;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_60);
        }
    }
    else {
        puVar10 = uVar1;
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        pcVar5 = "aw_cali_svc_get_devs_r0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return puVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_get_devs_te;
    pcStack_a8 = sym.aw_cali_svc_get_devs_te;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    piStack_c0 = NULL;
    pcVar6 = pcVar5;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = unaff_x26;
    puStack_98 = unaff_x25;
    pcStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    iStack_80 = arg1;
    iStack_78 = arg2;
    uStack_70 = arg3 & 0xffffffff;
    puStack_68 = puVar10;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_c0);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_c0;
        if (unaff_x26 == piStack_c0) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_te";
            do {
                uVar7 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < pcVar5) {
                    uVar1 = sym.aw882xx_dsp_read_te(unaff_x26 + -0x7c,auVar12._8_8_ + uVar7 * 4);
                    in_w3 = uVar7;
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        pcVar6 = "aw_cali_svc_get_devs_te";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    piVar11 = *(auVar12._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    pcVar6 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_te",uVar7,pcVar5 & 0xffffffff);
                    in_w3 = uVar7;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_c0);
        }
    }
    else {
        piVar11 = *(auVar12._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        pcVar6 = "aw_cali_svc_get_devs_te";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return puVar10;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_get_devs_st;
    pcStack_108 = sym.aw_cali_svc_get_devs_st;
    iVar3 = sp_el0;
    iStack_118 = *(iVar3 + 0x5e0);
    piStack_120 = NULL;
    arg3_00 = pcVar6;
    ppuStack_110 = &puStack_b0;
    piStack_100 = unaff_x26;
    puStack_f8 = unaff_x25;
    pcStack_f0 = unaff_x24;
    uStack_e8 = unaff_x23;
    uStack_d0 = pcVar5 & 0xffffffff;
    puStack_c8 = puVar10;
    auStack_e0 = auVar12;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_120);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_120;
        if (unaff_x26 == piStack_120) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_st";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar6) {
                    arg3_00 = auVar13._8_8_ + (in_w3 << 1 | 1) * 4;
                    uVar1 = sym.aw882xx_dsp_read_st(unaff_x26 + -0x7c,auVar13._8_8_ + (in_w3 << 1) * 4,arg3_00);
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        arg3_00 = "aw_cali_svc_get_devs_st";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    piVar11 = *(auVar13._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    arg3_00 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_st",in_w3,pcVar6 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_120);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        arg3_00 = "aw_cali_svc_get_devs_st";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_118) {
        return puVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_svc_get_devs_cali_f0;
    pcStack_168 = sym.aw_cali_svc_get_devs_cali_f0;
    iVar3 = sp_el0;
    iStack_178 = *(iVar3 + 0x5e0);
    puStack_180 = NULL;
    pcVar5 = arg3_00;
    pppuStack_170 = &ppuStack_110;
    puStack_160 = unaff_x25;
    pcStack_150 = unaff_x24;
    uStack_148 = unaff_x23;
    uStack_130 = pcVar6 & 0xffffffff;
    puStack_128 = puVar10;
    auStack_140 = auVar13;
    uVar1 = sym.aw882xx_dev_get_list_head(&puStack_180);
    if (uVar1 == 0) {
        unaff_x25 = *puStack_180;
        if (unaff_x25 == puStack_180) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            puVar8 = puStack_180;
            do {
                in_w3 = *(unaff_x25 - 0x3b4);
                uVar7 = in_w3;
                if (in_w3 < arg3_00) {
                    puVar10 = puVar10 + 1;
                    *(auVar12._8_8_ + uVar7 * 4) = unaff_x25[-0x3e];
                }
                else {
                    piVar11 = *(auVar12._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    pcVar5 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0",uVar7,arg3_00 & 0xffffffff);
                    in_w3 = uVar7;
                    puVar8 = puStack_180;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != puVar8);
        }
    }
    else {
        piVar11 = *(auVar12._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        pcVar5 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_178) {
        return puVar10;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_02 = sym.aw_cali_svc_get_devs_f0;
    pcStack_1c8 = sym.aw_cali_svc_get_devs_f0;
    iVar3 = sp_el0;
    iStack_1d8 = *(iVar3 + 0x5e0);
    piStack_1e0 = NULL;
    pcVar6 = pcVar5;
    pppuStack_1d0 = &pppuStack_170;
    piStack_1c0 = unaff_x26;
    puStack_1b8 = unaff_x25;
    pcStack_1b0 = unaff_x24;
    uStack_1a8 = unaff_x23;
    uStack_190 = arg3_00 & 0xffffffff;
    puStack_188 = puVar10;
    auStack_1a0 = auVar12;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_1e0);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_1e0;
        if (unaff_x26 == piStack_1e0) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar5) {
                    uVar1 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x7c);
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        pcVar6 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    piVar11 = *(auVar13._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    pcVar6 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_f0",in_w3,pcVar5 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_1e0);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        pcVar6 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_1d8) {
        return puVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_03 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_228 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar3 = sp_el0;
    iStack_238 = *(iVar3 + 0x5e0);
    piStack_240 = NULL;
    pppuStack_230 = &pppuStack_1d0;
    piStack_220 = unaff_x26;
    puStack_218 = unaff_x25;
    pcStack_210 = unaff_x24;
    uStack_208 = unaff_x23;
    uStack_1f0 = pcVar5 & 0xffffffff;
    puStack_1e8 = puVar10;
    auStack_200 = auVar13;
    uVar7 = sym.aw882xx_dev_get_list_head(&piStack_240);
    if (uVar7 == 0) {
        piVar11 = *piStack_240;
        if (piVar11 == piStack_240) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            piVar9 = piStack_240;
            do {
                uVar1 = *(piVar11 + -0x3b4);
                if (uVar1 < in_w3) {
                    puVar10 = puVar10 + 1;
                    *(auVar12._8_8_ + uVar1 * 4) = piVar11[-0x3e];
                    *(pcVar6 + *(piVar11 + -0x3b4) * 4) = *(piVar11 + -0x1ec);
                }
                else {
                    piVar9 = *(auVar12._0_8_ + 0x40);
                    iVar3 = piVar9[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar9;
                    }
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q",uVar1,in_w3);
                    piVar9 = piStack_240;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar9);
        }
    }
    else {
        piVar11 = *(auVar12._0_8_ + 0x40);
        puVar10 = uVar7 & 0xffffffff;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        _printk(0x8005e7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_238) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_04 = sym.aw_cali_parse_re_dt;
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-min",iVar3 + 0x38,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x38) = 1000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8007e0d,iVar4,"aw_cali_parse_re_dt");
        }
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-max",iVar3 + 0x34,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x34) = 50000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8004b43,iVar4,"aw_cali_parse_re_dt");
        }
        piVar11 = *(iVar3 + 0x40);
        iVar4 = piVar11[0xe];
        if (*(iVar3 + 0x38) < *(iVar3 + 0x34)) {
            if (iVar4 == 0) {
                iVar4 = *piVar11;
            }
            _printk(0x80025d3,iVar4,"aw_cali_parse_re_dt");
            puVar10 = NULL;
        }
        else {
            if (iVar4 == 0) {
                iVar4 = *piVar11;
            }
            _printk(0x8006f77,iVar4,"aw_cali_parse_re_dt");
            puVar10 = 0xffffffea;
        }
        return puVar10;
    }
    return puVar10;
}


// ===== sym.aw_cali_svc_get_devs_te @ 0x08014b00 (size 368) =====

uint64_t * sym.aw_cali_svc_get_devs_te(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    char *arg3_00;
    char *pcVar6;
    uint32_t in_w3;
    uint64_t uVar7;
    uint64_t *puVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t *puVar10;
    ulong unaff_x23;
    char *unaff_x24;
    uint64_t *unaff_x25;
    int64_t *unaff_x26;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t *piStack_1e0;
    int64_t iStack_1d8;
    ulong ***pppuStack_1d0;
    code *pcStack_1c8;
    int64_t *piStack_1c0;
    uint64_t *puStack_1b8;
    char *pcStack_1b0;
    ulong uStack_1a8;
    uchar auStack_1a0 [16];
    uint64_t uStack_190;
    uint64_t *puStack_188;
    int64_t *piStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    int64_t *piStack_160;
    uint64_t *puStack_158;
    char *pcStack_150;
    ulong uStack_148;
    uchar auStack_140 [16];
    uint64_t uStack_130;
    uint64_t *puStack_128;
    uint64_t *puStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    uint64_t *puStack_100;
    char *pcStack_f0;
    ulong uStack_e8;
    uchar auStack_e0 [16];
    uint64_t uStack_d0;
    uint64_t *puStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    uint64_t *puStack_98;
    char *pcStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    uint64_t *puStack_68;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    piStack_60 = NULL;
    pcVar5 = arg3;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_60;
        if (unaff_x26 == piStack_60) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_te";
            do {
                uVar7 = *(unaff_x26 + -0x3b4);
                if (*(unaff_x26 + -0x3b4) < arg3) {
                    uVar1 = sym.aw882xx_dsp_read_te(unaff_x26 + -0x7c,arg2 + uVar7 * 4);
                    in_w3 = uVar7;
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        pcVar5 = "aw_cali_svc_get_devs_te";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    pcVar5 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_te",uVar7,arg3 & 0xffffffff);
                    in_w3 = uVar7;
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_60);
        }
    }
    else {
        puVar10 = uVar1;
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        pcVar5 = "aw_cali_svc_get_devs_te";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return puVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_get_devs_st;
    pcStack_a8 = sym.aw_cali_svc_get_devs_st;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    piStack_c0 = NULL;
    arg3_00 = pcVar5;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = unaff_x26;
    puStack_98 = unaff_x25;
    pcStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    iStack_80 = arg1;
    iStack_78 = arg2;
    uStack_70 = arg3 & 0xffffffff;
    puStack_68 = puVar10;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_c0);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_c0;
        if (unaff_x26 == piStack_c0) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_st";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar5) {
                    arg3_00 = auVar12._8_8_ + (in_w3 << 1 | 1) * 4;
                    uVar1 = sym.aw882xx_dsp_read_st(unaff_x26 + -0x7c,auVar12._8_8_ + (in_w3 << 1) * 4,arg3_00);
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        arg3_00 = "aw_cali_svc_get_devs_st";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    piVar11 = *(auVar12._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    arg3_00 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_st",in_w3,pcVar5 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_c0);
        }
    }
    else {
        piVar11 = *(auVar12._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        arg3_00 = "aw_cali_svc_get_devs_st";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return puVar10;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_get_devs_cali_f0;
    pcStack_108 = sym.aw_cali_svc_get_devs_cali_f0;
    iVar3 = sp_el0;
    iStack_118 = *(iVar3 + 0x5e0);
    puStack_120 = NULL;
    pcVar6 = arg3_00;
    ppuStack_110 = &puStack_b0;
    puStack_100 = unaff_x25;
    pcStack_f0 = unaff_x24;
    uStack_e8 = unaff_x23;
    uStack_d0 = pcVar5 & 0xffffffff;
    puStack_c8 = puVar10;
    auStack_e0 = auVar12;
    uVar1 = sym.aw882xx_dev_get_list_head(&puStack_120);
    if (uVar1 == 0) {
        unaff_x25 = *puStack_120;
        if (unaff_x25 == puStack_120) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            puVar8 = puStack_120;
            do {
                in_w3 = *(unaff_x25 - 0x3b4);
                uVar7 = in_w3;
                if (in_w3 < arg3_00) {
                    puVar10 = puVar10 + 1;
                    *(auVar13._8_8_ + uVar7 * 4) = unaff_x25[-0x3e];
                }
                else {
                    piVar11 = *(auVar13._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    pcVar6 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0",uVar7,arg3_00 & 0xffffffff);
                    in_w3 = uVar7;
                    puVar8 = puStack_120;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != puVar8);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        pcVar6 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_118) {
        return puVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_svc_get_devs_f0;
    pcStack_168 = sym.aw_cali_svc_get_devs_f0;
    iVar3 = sp_el0;
    iStack_178 = *(iVar3 + 0x5e0);
    piStack_180 = NULL;
    pcVar5 = pcVar6;
    pppuStack_170 = &ppuStack_110;
    piStack_160 = unaff_x26;
    puStack_158 = unaff_x25;
    pcStack_150 = unaff_x24;
    uStack_148 = unaff_x23;
    uStack_130 = arg3_00 & 0xffffffff;
    puStack_128 = puVar10;
    auStack_140 = auVar13;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_180);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_180;
        if (unaff_x26 == piStack_180) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar6) {
                    uVar1 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x7c);
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        pcVar5 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    piVar11 = *(auVar12._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    pcVar5 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_f0",in_w3,pcVar6 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_180);
        }
    }
    else {
        piVar11 = *(auVar12._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        pcVar5 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_178) {
        return puVar10;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_02 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_1c8 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar3 = sp_el0;
    iStack_1d8 = *(iVar3 + 0x5e0);
    piStack_1e0 = NULL;
    pppuStack_1d0 = &pppuStack_170;
    piStack_1c0 = unaff_x26;
    puStack_1b8 = unaff_x25;
    pcStack_1b0 = unaff_x24;
    uStack_1a8 = unaff_x23;
    uStack_190 = pcVar6 & 0xffffffff;
    puStack_188 = puVar10;
    auStack_1a0 = auVar12;
    uVar7 = sym.aw882xx_dev_get_list_head(&piStack_1e0);
    if (uVar7 == 0) {
        piVar11 = *piStack_1e0;
        if (piVar11 == piStack_1e0) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            piVar9 = piStack_1e0;
            do {
                uVar1 = *(piVar11 + -0x3b4);
                if (uVar1 < in_w3) {
                    puVar10 = puVar10 + 1;
                    *(auVar13._8_8_ + uVar1 * 4) = piVar11[-0x3e];
                    *(pcVar5 + *(piVar11 + -0x3b4) * 4) = *(piVar11 + -0x1ec);
                }
                else {
                    piVar9 = *(auVar13._0_8_ + 0x40);
                    iVar3 = piVar9[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar9;
                    }
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q",uVar1,in_w3);
                    piVar9 = piStack_1e0;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar9);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar10 = uVar7 & 0xffffffff;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        _printk(0x8005e7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_1d8) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_03 = sym.aw_cali_parse_re_dt;
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-min",iVar3 + 0x38,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x38) = 1000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8007e0d,iVar4,"aw_cali_parse_re_dt");
        }
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-max",iVar3 + 0x34,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x34) = 50000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8004b43,iVar4,"aw_cali_parse_re_dt");
        }
        piVar11 = *(iVar3 + 0x40);
        iVar4 = piVar11[0xe];
        if (*(iVar3 + 0x38) < *(iVar3 + 0x34)) {
            if (iVar4 == 0) {
                iVar4 = *piVar11;
            }
            _printk(0x80025d3,iVar4,"aw_cali_parse_re_dt");
            puVar10 = NULL;
        }
        else {
            if (iVar4 == 0) {
                iVar4 = *piVar11;
            }
            _printk(0x8006f77,iVar4,"aw_cali_parse_re_dt");
            puVar10 = 0xffffffea;
        }
        return puVar10;
    }
    return puVar10;
}


// ===== sym.aw_cali_svc_get_devs_st @ 0x08014c70 (size 384) =====

uint64_t * sym.aw_cali_svc_get_devs_st(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *arg3_00;
    char *pcVar5;
    char *pcVar6;
    uint32_t in_w3;
    uint64_t uVar7;
    uint64_t *puVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint64_t *puVar10;
    ulong unaff_x23;
    char *unaff_x24;
    uint64_t *unaff_x25;
    int64_t *unaff_x26;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uchar auVar13 [16];
    int64_t *piStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    int64_t *piStack_160;
    uint64_t *puStack_158;
    char *pcStack_150;
    ulong uStack_148;
    uchar auStack_140 [16];
    uint64_t uStack_130;
    uint64_t *puStack_128;
    int64_t *piStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    int64_t *piStack_100;
    uint64_t *puStack_f8;
    char *pcStack_f0;
    ulong uStack_e8;
    uchar auStack_e0 [16];
    uint64_t uStack_d0;
    uint64_t *puStack_c8;
    uint64_t *puStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t *puStack_a0;
    char *pcStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    uint64_t *puStack_68;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    piStack_60 = NULL;
    arg3_00 = arg3;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_60;
        if (unaff_x26 == piStack_60) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_st";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < arg3) {
                    arg3_00 = arg2 + (in_w3 << 1 | 1) * 4;
                    uVar1 = sym.aw882xx_dsp_read_st(unaff_x26 + -0x7c,arg2 + (in_w3 << 1) * 4,arg3_00);
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        arg3_00 = "aw_cali_svc_get_devs_st";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    arg3_00 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_st",in_w3,arg3 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_60);
        }
    }
    else {
        puVar10 = uVar1;
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        arg3_00 = "aw_cali_svc_get_devs_st";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return puVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_get_devs_cali_f0;
    pcStack_a8 = sym.aw_cali_svc_get_devs_cali_f0;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    puStack_c0 = NULL;
    pcVar5 = arg3_00;
    puStack_b0 = &stack0xffffffffffffffb0;
    puStack_a0 = unaff_x25;
    pcStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    iStack_80 = arg1;
    iStack_78 = arg2;
    uStack_70 = arg3 & 0xffffffff;
    puStack_68 = puVar10;
    uVar1 = sym.aw882xx_dev_get_list_head(&puStack_c0);
    if (uVar1 == 0) {
        unaff_x25 = *puStack_c0;
        if (unaff_x25 == puStack_c0) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            puVar8 = puStack_c0;
            do {
                in_w3 = *(unaff_x25 - 0x3b4);
                uVar7 = in_w3;
                if (in_w3 < arg3_00) {
                    puVar10 = puVar10 + 1;
                    *(auVar12._8_8_ + uVar7 * 4) = unaff_x25[-0x3e];
                }
                else {
                    piVar11 = *(auVar12._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    pcVar5 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0",uVar7,arg3_00 & 0xffffffff);
                    in_w3 = uVar7;
                    puVar8 = puStack_c0;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != puVar8);
        }
    }
    else {
        piVar11 = *(auVar12._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        pcVar5 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_b8) {
        return puVar10;
    }
    auVar13 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_get_devs_f0;
    pcStack_108 = sym.aw_cali_svc_get_devs_f0;
    iVar3 = sp_el0;
    iStack_118 = *(iVar3 + 0x5e0);
    piStack_120 = NULL;
    pcVar6 = pcVar5;
    ppuStack_110 = &puStack_b0;
    piStack_100 = unaff_x26;
    puStack_f8 = unaff_x25;
    pcStack_f0 = unaff_x24;
    uStack_e8 = unaff_x23;
    uStack_d0 = arg3_00 & 0xffffffff;
    puStack_c8 = puVar10;
    auStack_e0 = auVar12;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_120);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_120;
        if (unaff_x26 == piStack_120) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar5) {
                    uVar1 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x7c);
                    if (uVar1 != 0) {
                        puVar10 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        pcVar6 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = puVar10;
                        break;
                    }
                    puVar10 = puVar10 + 1;
                }
                else {
                    piVar11 = *(auVar13._0_8_ + 0x40);
                    iVar3 = piVar11[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar11;
                    }
                    pcVar6 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_f0",in_w3,pcVar5 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_120);
        }
    }
    else {
        piVar11 = *(auVar13._0_8_ + 0x40);
        puVar10 = uVar1;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        pcVar6 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_118) {
        return puVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_168 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar3 = sp_el0;
    iStack_178 = *(iVar3 + 0x5e0);
    piStack_180 = NULL;
    pppuStack_170 = &ppuStack_110;
    piStack_160 = unaff_x26;
    puStack_158 = unaff_x25;
    pcStack_150 = unaff_x24;
    uStack_148 = unaff_x23;
    uStack_130 = pcVar5 & 0xffffffff;
    puStack_128 = puVar10;
    auStack_140 = auVar13;
    uVar7 = sym.aw882xx_dev_get_list_head(&piStack_180);
    if (uVar7 == 0) {
        piVar11 = *piStack_180;
        if (piVar11 == piStack_180) {
            puVar10 = NULL;
        }
        else {
            puVar10 = NULL;
            piVar9 = piStack_180;
            do {
                uVar1 = *(piVar11 + -0x3b4);
                if (uVar1 < in_w3) {
                    puVar10 = puVar10 + 1;
                    *(auVar12._8_8_ + uVar1 * 4) = piVar11[-0x3e];
                    *(pcVar6 + *(piVar11 + -0x3b4) * 4) = *(piVar11 + -0x1ec);
                }
                else {
                    piVar9 = *(auVar12._0_8_ + 0x40);
                    iVar3 = piVar9[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar9;
                    }
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q",uVar1,in_w3);
                    piVar9 = piStack_180;
                }
                piVar11 = *piVar11;
            } while (piVar11 != piVar9);
        }
    }
    else {
        piVar11 = *(auVar12._0_8_ + 0x40);
        puVar10 = uVar7 & 0xffffffff;
        iVar3 = piVar11[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar11;
        }
        _printk(0x8005e7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_178) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_02 = sym.aw_cali_parse_re_dt;
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-min",iVar3 + 0x38,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x38) = 1000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8007e0d,iVar4,"aw_cali_parse_re_dt");
        }
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-max",iVar3 + 0x34,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x34) = 50000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8004b43,iVar4,"aw_cali_parse_re_dt");
        }
        piVar11 = *(iVar3 + 0x40);
        iVar4 = piVar11[0xe];
        if (*(iVar3 + 0x38) < *(iVar3 + 0x34)) {
            if (iVar4 == 0) {
                iVar4 = *piVar11;
            }
            _printk(0x80025d3,iVar4,"aw_cali_parse_re_dt");
            puVar10 = NULL;
        }
        else {
            if (iVar4 == 0) {
                iVar4 = *piVar11;
            }
            _printk(0x8006f77,iVar4,"aw_cali_parse_re_dt");
            puVar10 = 0xffffffea;
        }
        return puVar10;
    }
    return puVar10;
}


// ===== sym.aw_cali_svc_get_devs_cali_f0 @ 0x08014df0 (size 312) =====

int64_t * sym.aw_cali_svc_get_devs_cali_f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    uint32_t in_w3;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x23;
    char *unaff_x24;
    int64_t *unaff_x25;
    int64_t *unaff_x26;
    ulong unaff_x30;
    uchar auVar11 [16];
    uchar auVar12 [16];
    int64_t *piStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    int64_t *piStack_100;
    int64_t *piStack_f8;
    char *pcStack_f0;
    ulong uStack_e8;
    uchar auStack_e0 [16];
    uint64_t uStack_d0;
    int64_t *piStack_c8;
    int64_t *piStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    piStack_60 = NULL;
    pcVar6 = arg3;
    uVar3 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (uVar3 == 0) {
        unaff_x25 = *piStack_60;
        if (unaff_x25 == piStack_60) {
            piVar9 = NULL;
        }
        else {
            piVar9 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_cali_f0";
            piVar10 = piStack_60;
            do {
                in_w3 = *(unaff_x25 + -0x3b4);
                uVar3 = in_w3;
                if (in_w3 < arg3) {
                    piVar9 = piVar9 + 1;
                    *(arg2 + uVar3 * 4) = unaff_x25[-0x3e];
                }
                else {
                    iVar4 = (*(arg1 + 0x40))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1 + 0x40);
                    }
                    pcVar6 = unaff_x24;
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_cali_f0",uVar3,arg3 & 0xffffffff);
                    in_w3 = uVar3;
                    piVar10 = piStack_60;
                }
                unaff_x25 = *unaff_x25;
            } while (unaff_x25 != piVar10);
        }
    }
    else {
        piVar9 = uVar3 & 0xffffffff;
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        pcVar6 = "aw_cali_svc_get_devs_cali_f0";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return piVar9;
    }
    auVar11 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_get_devs_f0;
    pcStack_a8 = sym.aw_cali_svc_get_devs_f0;
    iVar4 = sp_el0;
    iStack_b8 = *(iVar4 + 0x5e0);
    piStack_c0 = NULL;
    pcVar7 = pcVar6;
    puStack_b0 = &stack0xffffffffffffffb0;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_c0);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_c0;
        if (unaff_x26 == piStack_c0) {
            piVar10 = NULL;
        }
        else {
            piVar10 = NULL;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < pcVar6) {
                    uVar1 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x7c);
                    if (uVar1 != 0) {
                        piVar10 = uVar1;
                        iVar4 = unaff_x26[-0x74][0xe];
                        if (iVar4 == 0) {
                            iVar4 = *unaff_x26[-0x74];
                        }
                        pcVar7 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar4);
                        unaff_x25 = piVar10;
                        break;
                    }
                    piVar10 = piVar10 + 1;
                }
                else {
                    piVar9 = *(auVar11._0_8_ + 0x40);
                    iVar4 = piVar9[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar9;
                    }
                    pcVar7 = unaff_x24;
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_f0",in_w3,pcVar6 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_c0);
        }
    }
    else {
        piVar9 = *(auVar11._0_8_ + 0x40);
        piVar10 = uVar1;
        iVar4 = piVar9[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar9;
        }
        pcVar7 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar4);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_b8) {
        return piVar10;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_108 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar4 = sp_el0;
    iStack_118 = *(iVar4 + 0x5e0);
    piStack_120 = NULL;
    ppuStack_110 = &puStack_b0;
    piStack_100 = unaff_x26;
    piStack_f8 = unaff_x25;
    pcStack_f0 = unaff_x24;
    uStack_e8 = unaff_x23;
    uStack_d0 = pcVar6 & 0xffffffff;
    piStack_c8 = piVar10;
    auStack_e0 = auVar11;
    uVar3 = sym.aw882xx_dev_get_list_head(&piStack_120);
    if (uVar3 == 0) {
        piVar9 = *piStack_120;
        if (piVar9 == piStack_120) {
            piVar10 = NULL;
        }
        else {
            piVar10 = NULL;
            piVar8 = piStack_120;
            do {
                uVar1 = *(piVar9 + -0x3b4);
                if (uVar1 < in_w3) {
                    piVar10 = piVar10 + 1;
                    *(auVar12._8_8_ + uVar1 * 4) = piVar9[-0x3e];
                    *(pcVar7 + *(piVar9 + -0x3b4) * 4) = *(piVar9 + -0x1ec);
                }
                else {
                    piVar8 = *(auVar12._0_8_ + 0x40);
                    iVar4 = piVar8[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar8;
                    }
                    _printk(0x8003a7f,iVar4,"aw_cali_svc_get_devs_cali_f0_q",uVar1,in_w3);
                    piVar8 = piStack_120;
                }
                piVar9 = *piVar9;
            } while (piVar9 != piVar8);
        }
    }
    else {
        piVar9 = *(auVar12._0_8_ + 0x40);
        piVar10 = uVar3 & 0xffffffff;
        iVar4 = piVar9[0xe];
        if (iVar4 == 0) {
            iVar4 = *piVar9;
        }
        _printk(0x8005e7f,iVar4,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_118) {
        iVar4 = __stack_chk_fail();
        *extraout_x18_01 = sym.aw_cali_parse_re_dt;
        iVar2 = of_property_read_variable_u32_array(*(*(iVar4 + 0x40) + 0x2f0),"aw-re-min",iVar4 + 0x38,1,0);
        if (iVar2 < 0) {
            *(iVar4 + 0x38) = 1000;
            iVar5 = (*(iVar4 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x40);
            }
            _printk(0x8007e0d,iVar5,"aw_cali_parse_re_dt");
        }
        iVar2 = of_property_read_variable_u32_array(*(*(iVar4 + 0x40) + 0x2f0),"aw-re-max",iVar4 + 0x34,1,0);
        if (iVar2 < 0) {
            *(iVar4 + 0x34) = 50000;
            iVar5 = (*(iVar4 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x40);
            }
            _printk(0x8004b43,iVar5,"aw_cali_parse_re_dt");
        }
        piVar9 = *(iVar4 + 0x40);
        iVar5 = piVar9[0xe];
        if (*(iVar4 + 0x38) < *(iVar4 + 0x34)) {
            if (iVar5 == 0) {
                iVar5 = *piVar9;
            }
            _printk(0x80025d3,iVar5,"aw_cali_parse_re_dt");
            piVar9 = NULL;
        }
        else {
            if (iVar5 == 0) {
                iVar5 = *piVar9;
            }
            _printk(0x8006f77,iVar5,"aw_cali_parse_re_dt");
            piVar9 = 0xffffffea;
        }
        return piVar9;
    }
    return piVar10;
}


// ===== sym.aw_cali_svc_get_devs_f0 @ 0x08014f28 (size 368) =====

uint64_t sym.aw_cali_svc_get_devs_f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char *pcVar5;
    uint32_t in_w3;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar7;
    ulong unaff_x23;
    char *unaff_x24;
    uint64_t unaff_x25;
    int64_t *unaff_x26;
    int64_t *piVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    char *pcStack_90;
    ulong uStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    piStack_60 = NULL;
    pcVar5 = arg3;
    uVar1 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (uVar1 == 0) {
        unaff_x26 = *piStack_60;
        if (unaff_x26 == piStack_60) {
            uVar7 = 0;
        }
        else {
            uVar7 = 0;
            unaff_x23 = 0x8003a7f;
            unaff_x24 = "aw_cali_svc_get_devs_f0";
            do {
                in_w3 = *(unaff_x26 + -0x3b4);
                if (in_w3 < arg3) {
                    uVar1 = sym.aw882xx_dsp_read_f0(unaff_x26 + -0x7c);
                    if (uVar1 != 0) {
                        uVar7 = uVar1;
                        iVar3 = unaff_x26[-0x74][0xe];
                        if (iVar3 == 0) {
                            iVar3 = *unaff_x26[-0x74];
                        }
                        pcVar5 = "aw_cali_svc_get_devs_f0";
                        _printk(0x8005326,iVar3);
                        unaff_x25 = uVar7;
                        break;
                    }
                    uVar7 = uVar7 + 1;
                }
                else {
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    pcVar5 = unaff_x24;
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_f0",in_w3,arg3 & 0xffffffff);
                }
                unaff_x26 = *unaff_x26;
            } while (unaff_x26 != piStack_60);
        }
    }
    else {
        uVar7 = uVar1;
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        pcVar5 = "aw_cali_svc_get_devs_f0";
        _printk(0x8005e7f,iVar3);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_58) {
        return uVar7;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_get_devs_cali_f0_q;
    pcStack_a8 = sym.aw_cali_svc_get_devs_cali_f0_q;
    iVar3 = sp_el0;
    iStack_b8 = *(iVar3 + 0x5e0);
    piStack_c0 = NULL;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = unaff_x26;
    uStack_98 = unaff_x25;
    pcStack_90 = unaff_x24;
    uStack_88 = unaff_x23;
    iStack_80 = arg1;
    iStack_78 = arg2;
    uStack_70 = arg3 & 0xffffffff;
    uStack_68 = uVar7;
    uVar7 = sym.aw882xx_dev_get_list_head(&piStack_c0);
    if (uVar7 == 0) {
        piVar8 = *piStack_c0;
        if (piVar8 == piStack_c0) {
            uVar7 = 0;
        }
        else {
            uVar7 = 0;
            piVar6 = piStack_c0;
            do {
                uVar1 = *(piVar8 + -0x3b4);
                if (uVar1 < in_w3) {
                    uVar7 = uVar7 + 1;
                    *(auVar9._8_8_ + uVar1 * 4) = piVar8[-0x3e];
                    *(pcVar5 + *(piVar8 + -0x3b4) * 4) = *(piVar8 + -0x1ec);
                }
                else {
                    piVar6 = *(auVar9._0_8_ + 0x40);
                    iVar3 = piVar6[0xe];
                    if (iVar3 == 0) {
                        iVar3 = *piVar6;
                    }
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q",uVar1,in_w3);
                    piVar6 = piStack_c0;
                }
                piVar8 = *piVar8;
            } while (piVar8 != piVar6);
        }
    }
    else {
        piVar8 = *(auVar9._0_8_ + 0x40);
        uVar7 = uVar7 & 0xffffffff;
        iVar3 = piVar8[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar8;
        }
        _printk(0x8005e7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_b8) {
        iVar3 = __stack_chk_fail();
        *extraout_x18_00 = sym.aw_cali_parse_re_dt;
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-min",iVar3 + 0x38,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x38) = 1000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8007e0d,iVar4,"aw_cali_parse_re_dt");
        }
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-max",iVar3 + 0x34,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x34) = 50000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8004b43,iVar4,"aw_cali_parse_re_dt");
        }
        piVar8 = *(iVar3 + 0x40);
        iVar4 = piVar8[0xe];
        if (*(iVar3 + 0x38) < *(iVar3 + 0x34)) {
            if (iVar4 == 0) {
                iVar4 = *piVar8;
            }
            _printk(0x80025d3,iVar4,"aw_cali_parse_re_dt");
            uVar7 = 0;
        }
        else {
            if (iVar4 == 0) {
                iVar4 = *piVar8;
            }
            _printk(0x8006f77,iVar4,"aw_cali_parse_re_dt");
            uVar7 = 0xffffffea;
        }
        return uVar7;
    }
    return uVar7;
}


// ===== sym.aw_cali_svc_get_devs_cali_f0_q @ 0x08015098 (size 336) =====

int sym.aw_cali_svc_get_devs_cali_f0_q(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t *piStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    piStack_60 = NULL;
    iVar2 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (iVar2 == 0) {
        piVar6 = *piStack_60;
        if (piVar6 == piStack_60) {
            iVar2 = 0;
        }
        else {
            iVar2 = 0;
            piVar5 = piStack_60;
            do {
                uVar1 = *(piVar6 + -0x3b4);
                if (uVar1 < arg4) {
                    iVar2 = iVar2 + 1;
                    *(arg2 + uVar1 * 4) = piVar6[-0x3e];
                    *(arg3 + *(piVar6 + -0x3b4) * 4) = *(piVar6 + -0x1ec);
                }
                else {
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    _printk(0x8003a7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q",uVar1,arg4 & 0xffffffff);
                    piVar5 = piStack_60;
                }
                piVar6 = *piVar6;
            } while (piVar6 != piVar5);
        }
    }
    else {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8005e7f,iVar3,"aw_cali_svc_get_devs_cali_f0_q");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_58) {
        iVar3 = __stack_chk_fail();
        *extraout_x18 = sym.aw_cali_parse_re_dt;
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-min",iVar3 + 0x38,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x38) = 1000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8007e0d,iVar4,"aw_cali_parse_re_dt");
        }
        iVar2 = of_property_read_variable_u32_array(*(*(iVar3 + 0x40) + 0x2f0),"aw-re-max",iVar3 + 0x34,1,0);
        if (iVar2 < 0) {
            *(iVar3 + 0x34) = 50000;
            iVar4 = (*(iVar3 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar3 + 0x40);
            }
            _printk(0x8004b43,iVar4,"aw_cali_parse_re_dt");
        }
        piVar6 = *(iVar3 + 0x40);
        iVar4 = piVar6[0xe];
        if (*(iVar3 + 0x38) < *(iVar3 + 0x34)) {
            if (iVar4 == 0) {
                iVar4 = *piVar6;
            }
            _printk(0x80025d3,iVar4,"aw_cali_parse_re_dt");
            iVar2 = 0;
        }
        else {
            if (iVar4 == 0) {
                iVar4 = *piVar6;
            }
            _printk(0x8006f77,iVar4,"aw_cali_parse_re_dt");
            iVar2 = -0x16;
        }
        return iVar2;
    }
    return iVar2;
}


// ===== sym.aw_cali_parse_re_dt @ 0x080151e8 (size 292) =====

ulong sym.aw_cali_parse_re_dt(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x40) + 0x2f0),"aw-re-min",arg1 + 0x38,1,0);
    if (iVar1 < 0) {
        *(arg1 + 0x38) = 1000;
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8007e0d,iVar3,"aw_cali_parse_re_dt");
    }
    iVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x40) + 0x2f0),"aw-re-max",arg1 + 0x34,1,0);
    if (iVar1 < 0) {
        *(arg1 + 0x34) = 50000;
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8004b43,iVar3,"aw_cali_parse_re_dt");
    }
    piVar4 = *(arg1 + 0x40);
    iVar3 = piVar4[0xe];
    if (*(arg1 + 0x38) < *(arg1 + 0x34)) {
        if (iVar3 == 0) {
            iVar3 = *piVar4;
        }
        _printk(0x80025d3,iVar3,"aw_cali_parse_re_dt");
        uVar2 = 0;
    }
    else {
        if (iVar3 == 0) {
            iVar3 = *piVar4;
        }
        _printk(0x8006f77,iVar3,"aw_cali_parse_re_dt");
        uVar2 = 0xffffffea;
    }
    return uVar2;
}


// ===== sym.aw882xx_cali_init @ 0x0801530c (size 1216) =====

void sym.aw882xx_cali_init(int64_t arg1)

{
    char *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar6;
    int64_t *piVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uint uStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    piVar7 = arg1 + -0x1a8;
    iStack_38 = *(iVar3 + 0x5e0);
    *(arg1 + 4) = 0;
    *(arg1 + 0xc) = 0;
    *arg1 = 0;
    uVar6 = *(*piVar7 + 0x2f0);
    uStack_40 = 0;
    uStack_44 = 0;
    iVar2 = of_property_read_variable_u32_array(uVar6,"aw-cali-check",&uStack_44,1,0);
    if (iVar2 < 0) {
        iVar3 = (*piVar7)[0xe];
        if (iVar3 == 0) {
            iVar3 = **piVar7;
        }
        _printk(0x800261c,iVar3,"aw_cali_parse_dt");
        uStack_44._0_1_ = '\0';
        uStack_44 = 0;
    }
    else {
    }
    *(arg1 + 0x11) = uStack_44;
    iVar3 = (*piVar7)[0xe];
    if (iVar3 == 0) {
        iVar3 = **piVar7;
    }
    pcVar1 = "disable";
    if (uStack_44 != '\0') {
        pcVar1 = "enable";
    }
    _printk(0x8006c9d,iVar3,"aw_cali_parse_dt",pcVar1);
    iVar2 = of_property_read_string(uVar6,"aw-cali-mode",&uStack_40);
    if (iVar2 < 0) {
        *(arg1 + 1) = 1;
        iVar3 = (*piVar7)[0xe];
        if (iVar3 == 0) {
            iVar3 = **piVar7;
        }
        _printk(0x80062ab,iVar3,"aw_cali_parse_dt");
    }
    else {
        iVar2 = strcmp(uStack_40,"none");
        *(arg1 + 1) = iVar2 != 0;
        iVar3 = (*piVar7)[0xe];
        if (iVar3 == 0) {
            iVar3 = **piVar7;
        }
        _printk(0x8004f73,iVar3,"aw_cali_parse_dt",iVar2 != 0);
    }
    piVar5 = *piVar7;
    iVar3 = piVar5[0xe];
    if (*(arg1 + 1) == '\x01') {
        if (iVar3 == 0) {
            iVar3 = *piVar5;
        }
        _printk(0x8004092,iVar3,"aw_cali_attr_init");
        iVar2 = sysfs_create_group(*piVar7,obj.aw_cali_attr_group);
        if (iVar2 < 0) {
            iVar3 = (*piVar7)[0xe];
            if (iVar3 == 0) {
                iVar3 = **piVar7;
            }
            _printk(0x80072c7,iVar3,"aw_cali_attr_init");
        }
        if (*(arg1 + -0x1bc) == 0) {
            iVar2 = __class_register(obj.aw_cali_class,obj.aw_cali_class_attr_init.__key);
            if (iVar2 < 0) {
                iVar3 = (*piVar7)[0xe];
                if (iVar3 == 0) {
                    iVar3 = **piVar7;
                }
                uVar6 = 0x8008663;
            }
            else {
                iVar2 = class_create_file_ns(obj.aw_cali_class,obj.class_attr_re25_calib,0);
                if (iVar2 != 0) {
                    iVar3 = (*piVar7)[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **piVar7;
                    }
                    _printk(0x8003333,iVar3,"aw_cali_class_attr_init");
                }
                iVar2 = class_create_file_ns(obj.aw_cali_class,obj.class_attr_f0_calib,0);
                if (iVar2 != 0) {
                    iVar3 = (*piVar7)[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **piVar7;
                    }
                    _printk(0x8003333,iVar3,"aw_cali_class_attr_init");
                }
                iVar2 = class_create_file_ns(obj.aw_cali_class,obj.class_attr_cali_time,0);
                if (iVar2 != 0) {
                    iVar3 = (*piVar7)[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **piVar7;
                    }
                    _printk(0x8007aeb,iVar3,"aw_cali_class_attr_init");
                }
                iVar2 = class_create_file_ns(obj.aw_cali_class,obj.class_attr_re_show,0);
                if (iVar2 != 0) {
                    iVar3 = (*piVar7)[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **piVar7;
                    }
                    _printk(0x8005744,iVar3,"aw_cali_class_attr_init");
                }
                iVar2 = class_create_file_ns(obj.aw_cali_class,obj.class_attr_f0_show,0);
                if (iVar2 != 0) {
                    iVar3 = (*piVar7)[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **piVar7;
                    }
                    _printk(0x8007316,iVar3,"aw_cali_class_attr_init");
                }
                iVar2 = class_create_file_ns(obj.aw_cali_class,obj.class_att_re_range,0);
                if (iVar2 == 0) goto code_r0x080156e0;
                iVar3 = (*piVar7)[0xe];
                if (iVar3 == 0) {
                    iVar3 = **piVar7;
                }
                uVar6 = 0x8004fc7;
            }
        }
        else {
            iVar3 = (*piVar7)[0xe];
            if (iVar3 == 0) {
                iVar3 = **piVar7;
            }
            uVar6 = 0x8006317;
        }
        _printk(uVar6,iVar3,"aw_cali_class_attr_init");
    }
    else {
        if (iVar3 == 0) {
            iVar3 = *piVar5;
        }
        _printk(0x8004f73,iVar3,"aw882xx_cali_init");
    }
code_r0x080156e0:
    mutex_lock(obj.g_cali_lock);
    if (_segment.ehdr == NULL) {
        iVar2 = misc_register(obj.misc_cali);
        if (iVar2 != 0) {
            iVar3 = (*piVar7)[0xe];
            if (iVar3 == 0) {
                iVar3 = **piVar7;
            }
            _printk(0x8002b09,iVar3,"aw_cali_misc_init",iVar2);
            goto code_r0x0801577c;
        }
        _segment.ehdr = obj.misc_cali;
        iVar3 = (*piVar7)[0xe];
        if (iVar3 == 0) {
            iVar3 = **piVar7;
        }
        uVar6 = 0x8002113;
    }
    else {
        iVar3 = (*piVar7)[0xe];
        if (iVar3 == 0) {
            iVar3 = **piVar7;
        }
        uVar6 = 0x8003702;
    }
    _printk(uVar6,iVar3,"aw_cali_misc_init");
code_r0x0801577c:
    mutex_unlock(obj.g_cali_lock);
    sym.aw_cali_parse_re_dt(arg1 + -0x1e8);
    *(arg1 + 0x10) = 0;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_cali_deinit;
    if (*(iVar3 + 1) == '\x01') {
        puVar8 = iVar3 + -0x1a8;
        sysfs_remove_group(*puVar8,obj.aw_cali_attr_group);
        iVar4 = (*puVar8)[0xe];
        if (iVar4 == 0) {
            iVar4 = **puVar8;
        }
        _printk(0x8003ed0,iVar4,"aw_cali_attr_deinit");
        class_remove_file_ns(obj.aw_cali_class,obj.class_att_re_range,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_re25_calib,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_f0_calib,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_cali_time,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_re_show,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_f0_show,0);
        class_unregister(obj.aw_cali_class);
        iVar4 = (*puVar8)[0xe];
        if (iVar4 == 0) {
            iVar4 = **puVar8;
        }
        _printk(0x80053dd,iVar4,"aw_cali_class_attr_deinit");
    }
    mutex_lock(obj.g_cali_lock);
    if (_segment.ehdr != NULL) {
        misc_deregister();
        _segment.ehdr = NULL;
    }
    mutex_unlock(obj.g_cali_lock);
    iVar4 = (*(iVar3 + -0x1a8))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + -0x1a8);
    }
    _printk(0x8006cf7,iVar4,"aw_cali_misc_deinit");
    return;
}


// ===== sym.aw882xx_cali_deinit @ 0x080157cc (size 376) =====

void sym.aw882xx_cali_deinit(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 1) == '\x01') {
        puVar2 = arg1 + -0x1a8;
        sysfs_remove_group(*puVar2,obj.aw_cali_attr_group);
        iVar1 = (*puVar2)[0xe];
        if (iVar1 == 0) {
            iVar1 = **puVar2;
        }
        _printk(0x8003ed0,iVar1,"aw_cali_attr_deinit");
        class_remove_file_ns(obj.aw_cali_class,obj.class_att_re_range,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_re25_calib,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_f0_calib,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_cali_time,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_re_show,0);
        class_remove_file_ns(obj.aw_cali_class,obj.class_attr_f0_show,0);
        class_unregister(obj.aw_cali_class);
        iVar1 = (*puVar2)[0xe];
        if (iVar1 == 0) {
            iVar1 = **puVar2;
        }
        _printk(0x80053dd,iVar1,"aw_cali_class_attr_deinit");
    }
    mutex_lock(obj.g_cali_lock);
    if (_segment.ehdr != 0) {
        misc_deregister();
        _segment.ehdr = 0;
    }
    mutex_unlock(obj.g_cali_lock);
    iVar1 = (*(arg1 + -0x1a8))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(arg1 + -0x1a8);
    }
    _printk(0x8006cf7,iVar1,"aw_cali_misc_deinit");
    return;
}


// ===== sym.aw_cali_svc_dev_get_re @ 0x08015944 (size 344) =====

uint64_t sym.aw_cali_svc_dev_get_re(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar11;
    uint64_t unaff_x21;
    ulong *puVar12;
    ulong unaff_x30;
    ulong uStack_108;
    int aiStack_100 [2];
    ulong uStack_f8;
    int aiStack_f0 [2];
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uchar *puStack_80;
    code *pcStack_78;
    ulong *puStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    ulong uStack_48;
    int aiStack_40 [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    puVar12 = &uStack_48;
    aiStack_40[0] = 0;
    uStack_48 = 0;
    uVar5 = sym.aw882xx_dsp_read_r0(arg1,&uStack_48);
    if (uVar5 == 0) {
        iVar6 = uStack_48;
        unaff_x21 = uStack_48 & 0xffffffff;
        usleep_range_state(10000,0x271a,2);
        uVar5 = sym.aw882xx_dsp_read_r0(arg1,puVar12 | 4);
        if (uVar5 != 0) goto code_r0x08015a50;
        uVar4 = uStack_48._4_4_;
        puVar12 = uStack_48._4_4_;
        usleep_range_state(10000,0x271a,2);
        uVar5 = sym.aw882xx_dsp_read_r0(arg1,aiStack_40);
        if (uVar5 != 0) goto code_r0x08015a50;
        iVar6 = uVar4 + iVar6 + aiStack_40[0];
        usleep_range_state(10000,0x271a,2);
        uVar5 = iVar6 / 3;
        uStack_48 = CONCAT44(uStack_48._4_4_,uVar5);
        *(arg1 + 0x1ec) = uVar5;
        sym.aw_cali_store_cali_re(arg1,uVar5);
        uVar11 = 0;
    }
    else {
code_r0x08015a50:
        uVar11 = uVar5;
        iVar10 = (*(arg1 + 0x40))[0xe];
        if (iVar10 == 0) {
            iVar10 = **(arg1 + 0x40);
        }
        _printk(0x8005326,iVar10,"aw_cali_svc_dev_get_re");
        if (*(arg1 + 0x1f9) != '\0') {
            *(arg1 + 0x1f8) = 0xff;
            sym.aw_cali_svc_run_mute(arg1,0xff);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_dev_get_f0;
    pcStack_78 = sym.aw_cali_svc_dev_get_f0;
    iVar10 = sp_el0;
    iVar10 = *(iVar10 + 0x5e0);
    puStack_80 = &stack0xffffffffffffffd0;
    puStack_70 = puVar12;
    uStack_68 = unaff_x21;
    uStack_60 = uVar11;
    iStack_58 = arg1;
    uVar5 = sym.aw882xx_dsp_read_f0(iVar7);
    if (uVar5 == 0) {
        usleep_range_state(10000,0x271a,2);
        uVar5 = sym.aw882xx_dsp_read_f0(iVar7);
        if (uVar5 != 0) goto code_r0x08015b9c;
        usleep_range_state(10000,0x271a,2);
        uVar5 = sym.aw882xx_dsp_read_f0(iVar7);
        if (uVar5 != 0) goto code_r0x08015b9c;
        usleep_range_state(10000,0x271a,2);
        uVar11 = 0;
        *(iVar7 + 0x1f0) = 0;
    }
    else {
code_r0x08015b9c:
        uVar11 = uVar5;
        iVar8 = (*(iVar7 + 0x40))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(iVar7 + 0x40);
        }
        _printk(0x8006720,iVar8,"aw_cali_svc_dev_get_f0");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iVar10) {
        return uVar11;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_svc_dev_get_f0_q;
    pcStack_d8 = sym.aw_cali_svc_dev_get_f0_q;
    iVar10 = sp_el0;
    iStack_e8 = *(iVar10 + 0x5e0);
    aiStack_f0[0] = 0;
    uStack_f8 = 0;
    aiStack_100[0] = 0;
    uStack_108 = 0;
    ppuStack_e0 = &puStack_80;
    uVar5 = sym.aw882xx_dsp_read_f0_q(iVar7,&uStack_f8,&uStack_108);
    uVar11 = uVar5;
    if (uVar5 == 0) {
        iVar1 = uStack_f8;
        iVar6 = uStack_108;
        usleep_range_state(10000,0x271a,2);
        uVar5 = sym.aw882xx_dsp_read_f0_q(iVar7,&uStack_f8 | 4,&uStack_108 | 4);
        uVar11 = uVar5;
        if (uVar5 == 0) {
            iVar3 = uStack_f8._4_4_;
            iVar2 = uStack_108._4_4_;
            usleep_range_state(10000,0x271a,2);
            uVar5 = sym.aw882xx_dsp_read_f0_q(iVar7,aiStack_f0,aiStack_100);
            uVar11 = uVar5;
            if (uVar5 == 0) {
                iVar1 = iVar3 + iVar1 + aiStack_f0[0];
                iVar6 = iVar2 + iVar6 + aiStack_100[0];
                usleep_range_state(10000,0x271a,2);
                iVar1 = iVar1 / 3;
                iVar6 = iVar6 / 3;
                *(iVar7 + 0x1f0) = iVar1;
                *(iVar7 + 500) = iVar6;
                iVar10 = (*(iVar7 + 0x40))[0xe];
                uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar1);
                uStack_108 = CONCAT44(uStack_108._4_4_,iVar6);
                if (iVar10 == 0) {
                    iVar10 = **(iVar7 + 0x40);
                }
                pcVar9 = "aw_cali_svc_dev_get_f0_q";
                _printk(0x80089c1,iVar10,"aw_cali_svc_dev_get_f0_q");
                uVar11 = 0;
                goto code_r0x08015d40;
            }
        }
    }
    iVar10 = (*(iVar7 + 0x40))[0xe];
    if (iVar10 == 0) {
        iVar10 = **(iVar7 + 0x40);
    }
    pcVar9 = "aw_cali_svc_dev_get_f0_q";
    _printk(0x8006720,iVar10,"aw_cali_svc_dev_get_f0_q");
code_r0x08015d40:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar11;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.aw_cali_attr_time_show;
    iVar6 = snprintf(pcVar9,0x1000,"time: %d \n",_segment.ehdr);
    return iVar6;
}


// ===== sym.aw_cali_svc_dev_get_f0 @ 0x08015a9c (size 304) =====

uint64_t sym.aw_cali_svc_dev_get_f0(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar9;
    ulong unaff_x30;
    ulong uStack_b8;
    int aiStack_b0 [2];
    ulong uStack_a8;
    int aiStack_a0 [2];
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    uVar4 = sym.aw882xx_dsp_read_f0(arg1);
    if (uVar4 == 0) {
        usleep_range_state(10000,0x271a,2);
        uVar4 = sym.aw882xx_dsp_read_f0(arg1);
        if (uVar4 != 0) goto code_r0x08015b9c;
        usleep_range_state(10000,0x271a,2);
        uVar4 = sym.aw882xx_dsp_read_f0(arg1);
        if (uVar4 != 0) goto code_r0x08015b9c;
        usleep_range_state(10000,0x271a,2);
        uVar9 = 0;
        *(arg1 + 0x1f0) = 0;
    }
    else {
code_r0x08015b9c:
        uVar9 = uVar4;
        iVar6 = (*(arg1 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg1 + 0x40);
        }
        _printk(0x8006720,iVar6,"aw_cali_svc_dev_get_f0");
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iVar8) {
        return uVar9;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_svc_dev_get_f0_q;
    pcStack_88 = sym.aw_cali_svc_dev_get_f0_q;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    aiStack_a0[0] = 0;
    uStack_a8 = 0;
    aiStack_b0[0] = 0;
    uStack_b8 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    uVar4 = sym.aw882xx_dsp_read_f0_q(iVar6,&uStack_a8,&uStack_b8);
    uVar9 = uVar4;
    if (uVar4 == 0) {
        iVar1 = uStack_a8;
        iVar5 = uStack_b8;
        usleep_range_state(10000,0x271a,2);
        uVar4 = sym.aw882xx_dsp_read_f0_q(iVar6,&uStack_a8 | 4,&uStack_b8 | 4);
        uVar9 = uVar4;
        if (uVar4 == 0) {
            iVar3 = uStack_a8._4_4_;
            iVar2 = uStack_b8._4_4_;
            usleep_range_state(10000,0x271a,2);
            uVar4 = sym.aw882xx_dsp_read_f0_q(iVar6,aiStack_a0,aiStack_b0);
            uVar9 = uVar4;
            if (uVar4 == 0) {
                iVar1 = iVar3 + iVar1 + aiStack_a0[0];
                iVar5 = iVar2 + iVar5 + aiStack_b0[0];
                usleep_range_state(10000,0x271a,2);
                iVar1 = iVar1 / 3;
                iVar5 = iVar5 / 3;
                *(iVar6 + 0x1f0) = iVar1;
                *(iVar6 + 500) = iVar5;
                iVar8 = (*(iVar6 + 0x40))[0xe];
                uStack_a8 = CONCAT44(uStack_a8._4_4_,iVar1);
                uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar5);
                if (iVar8 == 0) {
                    iVar8 = **(iVar6 + 0x40);
                }
                pcVar7 = "aw_cali_svc_dev_get_f0_q";
                _printk(0x80089c1,iVar8,"aw_cali_svc_dev_get_f0_q");
                uVar9 = 0;
                goto code_r0x08015d40;
            }
        }
    }
    iVar8 = (*(iVar6 + 0x40))[0xe];
    if (iVar8 == 0) {
        iVar8 = **(iVar6 + 0x40);
    }
    pcVar7 = "aw_cali_svc_dev_get_f0_q";
    _printk(0x8006720,iVar8,"aw_cali_svc_dev_get_f0_q");
code_r0x08015d40:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return uVar9;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.aw_cali_attr_time_show;
    iVar5 = snprintf(pcVar7,0x1000,"time: %d \n",_segment.ehdr);
    return iVar5;
}


// ===== sym.aw_cali_svc_dev_get_f0_q @ 0x08015bcc (size 432) =====

uint64_t sym.aw_cali_svc_dev_get_f0_q(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar8;
    ulong unaff_x30;
    ulong uStack_68;
    int aiStack_60 [2];
    ulong uStack_58;
    int aiStack_50 [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    aiStack_50[0] = 0;
    uStack_58 = 0;
    aiStack_60[0] = 0;
    uStack_68 = 0;
    uVar4 = sym.aw882xx_dsp_read_f0_q(arg1,&uStack_58,&uStack_68);
    uVar8 = uVar4;
    if (uVar4 == 0) {
        iVar1 = uStack_58;
        iVar5 = uStack_68;
        usleep_range_state(10000,0x271a,2);
        uVar4 = sym.aw882xx_dsp_read_f0_q(arg1,&uStack_58 | 4,&uStack_68 | 4);
        uVar8 = uVar4;
        if (uVar4 == 0) {
            iVar3 = uStack_58._4_4_;
            iVar2 = uStack_68._4_4_;
            usleep_range_state(10000,0x271a,2);
            uVar4 = sym.aw882xx_dsp_read_f0_q(arg1,aiStack_50,aiStack_60);
            uVar8 = uVar4;
            if (uVar4 == 0) {
                iVar1 = iVar3 + iVar1 + aiStack_50[0];
                iVar5 = iVar2 + iVar5 + aiStack_60[0];
                usleep_range_state(10000,0x271a,2);
                iVar1 = iVar1 / 3;
                iVar5 = iVar5 / 3;
                *(arg1 + 0x1f0) = iVar1;
                *(arg1 + 500) = iVar5;
                iVar6 = (*(arg1 + 0x40))[0xe];
                uStack_58 = CONCAT44(uStack_58._4_4_,iVar1);
                uStack_68 = CONCAT44(uStack_68._4_4_,iVar5);
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                pcVar7 = "aw_cali_svc_dev_get_f0_q";
                _printk(0x80089c1,iVar6,"aw_cali_svc_dev_get_f0_q");
                uVar8 = 0;
                goto code_r0x08015d40;
            }
        }
    }
    iVar6 = (*(arg1 + 0x40))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(arg1 + 0x40);
    }
    pcVar7 = "aw_cali_svc_dev_get_f0_q";
    _printk(0x8006720,iVar6,"aw_cali_svc_dev_get_f0_q");
code_r0x08015d40:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_attr_time_show;
    iVar5 = snprintf(pcVar7,0x1000,"time: %d \n",_segment.ehdr);
    return iVar5;
}


// ===== sym.aw_cali_attr_time_show @ 0x08015d7c (size 64) =====

int64_t sym.aw_cali_attr_time_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"time: %d \n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw_cali_attr_time_store @ 0x08015dbc (size 288) =====

uint64_t sym.aw_cali_attr_time_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    char *arg2_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    uchar noname_1_01 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_3c = 0;
    iVar3 = *(*(arg1 + 0x98) + 0x68);
    iVar1 = kstrtoint(arg2,0,&uStack_3c);
    if (iVar1 < 0) {
        iVar2 = (*(iVar3 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(iVar3 + 0x40);
        }
        arg2_00 = "aw_cali_attr_time_store";
        _printk(0x8002657,iVar2,"aw_cali_attr_time_store",arg2);
        arg3 = iVar1;
    }
    else {
        arg2 = uStack_3c;
        if (uStack_3c < 400) {
            iVar2 = (*(iVar3 + 0x40))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(iVar3 + 0x40);
            }
            arg2_00 = "aw_cali_attr_time_store";
            _printk(0x800267e,iVar2);
            arg3 = 0xffffffffffffffea;
        }
        else {
            iVar2 = (*(iVar3 + 0x40))[0xe];
            _segment.ehdr = uStack_3c;
            if (iVar2 == 0) {
                iVar2 = **(iVar3 + 0x40);
            }
            arg2_00 = "aw_cali_attr_time_store";
            _printk(0x8004508,iVar2);
        }
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_attr_store;
    iVar3 = *(*(iVar3 + 0x98) + 0x68);
    iVar1 = sym.aw_cali_svc_get_cmd_form_str(iVar3,arg2_00);
    if (-1 < iVar1) {
        if (iVar1 == 3) {
            sym.aw_cali_svc_cali_f0(iVar3,noname_1_00,2);
            return arg2;
        }
        if (iVar1 == 2) {
            sym.aw_cali_svc_cali_re(iVar3,noname_1_00,1);
            return arg2;
        }
        if (iVar1 == 1) {
            iVar1 = sym.aw_cali_svc_cali_re(iVar3,noname_1_00,3);
            if (iVar1 != 0) {
                return arg2;
            }
            sym.aw_cali_svc_cali_f0(iVar3,noname_1_01,3);
            return arg2;
        }
    }
    iVar2 = (*(iVar3 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(iVar3 + 0x40);
    }
    _printk(0x80048f3,iVar2,"aw_cali_attr_store",arg2_00);
    return 0xffffffffffffffff;
}


// ===== sym.aw_cali_attr_store @ 0x08015edc (size 232) =====

int64_t sym.aw_cali_attr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    uchar noname_1_01 [16];
    
    *in_x18 = unaff_x30;
    arg1_00 = *(*(arg1 + 0x98) + 0x68);
    iVar1 = sym.aw_cali_svc_get_cmd_form_str(arg1_00,arg2);
    if (-1 < iVar1) {
        if (iVar1 == 3) {
            sym.aw_cali_svc_cali_f0(arg1_00,noname_1_00,2);
            return arg3;
        }
        if (iVar1 == 2) {
            sym.aw_cali_svc_cali_re(arg1_00,noname_1_00,1);
            return arg3;
        }
        if (iVar1 == 1) {
            iVar1 = sym.aw_cali_svc_cali_re(arg1_00,noname_1_00,3);
            if (iVar1 != 0) {
                return arg3;
            }
            sym.aw_cali_svc_cali_f0(arg1_00,noname_1_01,3);
            return arg3;
        }
    }
    iVar2 = (*(arg1_00 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1_00 + 0x40);
    }
    _printk(0x80048f3,iVar2,"aw_cali_attr_store",arg2);
    return -1;
}


// ===== sym.aw_cali_svc_get_cmd_form_str @ 0x08015fc4 (size 224) =====

uint64_t sym.aw_cali_svc_get_cmd_form_str(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar5 = 0;
    do {
        uVar6 = *(obj.cali_str + uVar5 * 8);
        uVar3 = strlen(uVar6);
        iVar2 = strncmp(uVar6,arg2,uVar3);
        if (iVar2 == 0) {
            iVar4 = (*(arg1 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(arg1 + 0x40);
            }
            if (0x10 < uVar5) {
    //WARNING: Does not return
                pcVar1 = SoftwareBreakpoint(0x5512,0x80160a4);
                (*pcVar1)();
            }
            _printk(0x8003ad7,iVar4,"aw_cali_svc_get_cmd_form_str",uVar6);
            goto code_r0x08016080;
        }
        uVar5 = uVar5 + 1;
    } while (uVar5 != 0x11);
    iVar4 = (*(arg1 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + 0x40);
    }
    _printk(0x80048f3,iVar4,"aw_cali_svc_get_cmd_form_str",arg2);
    uVar5 = 0xffffffea;
code_r0x08016080:
    return uVar5 & 0xffffffff;
}


// ===== sym.aw_cali_attr_re_show @ 0x080160a4 (size 480) =====

void sym.aw_cali_attr_re_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar7 = *(*(arg1 + 0x98) + 0x68);
    iVar4 = sym.aw_cali_svc_cali_re(iVar7,noname_1,1);
    uVar2 = str.cali_Re_cmd_failed_n._8_8_;
    uVar1 = str.cali_Re_cmd_failed_n._0_8_;
    if (iVar4 < 0) {
        iVar7 = 0x13;
        *(arg2 + 0x10) = 0xa6465;
        *arg2 = uVar1;
        *(arg2 + 8) = uVar2;
    }
    else {
        iVar4 = sym.aw_cali_svc_get_devs_cali_re(iVar7,&uStack_48,4);
        if (iVar4 < 1) {
            iVar6 = (*(iVar7 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar7 + 0x40);
            }
            _printk(0x80062d3,iVar6,"aw_cali_attr_re_show");
            iVar7 = 0xe;
            uVar1 = CONCAT71(str.get_re_failed_n._8_7_,str.get_re_failed_n[7]);
            *arg2 = CONCAT17(str.get_re_failed_n[7],str.get_re_failed_n._0_7_);
            *(arg2 + 7) = uVar1;
        }
        else {
            iVar5 = snprintf(arg2,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
            iVar7 = iVar5;
            if (iVar4 != 1) {
                iVar5 = snprintf(arg2 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
                iVar7 = iVar7 + iVar5;
                if (iVar4 != 2) {
                    iVar5 = snprintf(arg2 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_l",uStack_40 & 0xffffffff);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 3) {
                        iVar5 = snprintf(arg2 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                        if (iVar4 != 4) goto code_r0x08016280;
                        iVar7 = iVar7 + iVar5;
                    }
                }
            }
            iVar4 = snprintf(arg2 + iVar7,0x1000 - iVar7,0x80020f4);
            iVar7 = iVar7 + iVar4;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x08016280:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016284);
    (*pcVar3)();
}


// ===== sym.aw_cali_attr_re_store @ 0x08016284 (size 136) =====

int64_t sym.aw_cali_attr_re_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x98) + 0x68);
    iVar1 = sym.aw_cali_svc_set_devs_re_str(iVar3,arg2);
    if (iVar1 < 1) {
        piVar2 = *(iVar3 + 0x40);
        iVar3 = piVar2[0xe];
        if (iVar3 == 0) {
            iVar3 = *piVar2;
        }
        _printk(0x8007e6b,iVar3,"aw_cali_attr_re_store",arg2);
        arg3 = -1;
    }
    return arg3;
}


// ===== sym.aw_cali_svc_set_devs_re_str @ 0x0801630c (size 380) =====

uint64_t sym.aw_cali_svc_set_devs_re_str(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t *piVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar noname_1 [16];
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    ulong *puStack_70;
    int64_t *piStack_60;
    uint64_t uStack_58;
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    uVar4 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (uVar4 == 0) {
        uVar4 = sscanf(arg2,"pri_l:%d pri_r:%d sec_l:%d sec_r:%d",&uStack_48,&uStack_48 | 4,&uStack_40,
                       &uStack_40 + 4);
        piVar10 = *(arg1 + 0x40);
        iVar8 = piVar10[0xe];
        if (uVar4 < 1) {
            uVar11 = uVar4;
            if (iVar8 == 0) {
                iVar8 = *piVar10;
            }
            pcVar9 = "aw_cali_svc_set_devs_re_str";
            _printk(0x8006fb3,iVar8,"aw_cali_svc_set_devs_re_str",arg2);
        }
        else {
            if (iVar8 == 0) {
                iVar8 = *piVar10;
            }
            pcVar9 = "aw_cali_svc_set_devs_re_str";
            _printk(0x8004523,iVar8,"aw_cali_svc_set_devs_re_str",uStack_48 & 0xffffffff,uStack_48._4_4_,
                    uStack_40 & 0xffffffff,uStack_40._4_4_);
            arg2 = *piStack_50;
            if (arg2 == piStack_50) {
                uVar11 = 0;
            }
            else {
                uVar11 = 0;
                arg1 = &uStack_48;
                piVar10 = piStack_50;
                do {
                    if (*(arg2 + -0x3b4) < 4) {
                        sym.aw_cali_store_cali_re(arg2 + -0x3e0,*(arg1 + *(arg2 + -0x3b4) * 4));
                        uVar11 = uVar11 + 1;
                        piVar10 = piStack_50;
                    }
                    arg2 = *arg2;
                } while (arg2 != piVar10);
            }
        }
    }
    else {
        uVar11 = uVar4;
        iVar8 = (*(arg1 + 0x40))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(arg1 + 0x40);
        }
        pcVar9 = "aw_cali_svc_set_devs_re_str";
        _printk(0x8005e7f,iVar8);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_attr_f0_show;
    pcStack_78 = sym.aw_cali_attr_f0_show;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uStack_98 = 0;
    uStack_90 = 0;
    iVar8 = *(*(iVar7 + 0x98) + 0x68);
    puStack_80 = &stack0xffffffffffffffd0;
    puStack_70 = arg1;
    piStack_60 = arg2;
    uStack_58 = uVar11;
    iVar5 = sym.aw_cali_svc_cali_f0(iVar8,noname_1,2);
    uVar2 = str.cali_f0_cmd_failed_n._8_8_;
    uVar1 = str.cali_f0_cmd_failed_n._0_8_;
    if (iVar5 < 0) {
        uVar11 = 0x13;
        pcVar9[0x10] = 'e';
        pcVar9[0x11] = 'd';
        pcVar9[0x12] = '\n';
        pcVar9[0x13] = '\0';
        *pcVar9 = uVar1;
        *(pcVar9 + 8) = uVar2;
    }
    else {
        iVar5 = sym.aw_cali_svc_get_devs_cali_f0(iVar8,&uStack_98,4);
        if (iVar5 < 1) {
            iVar7 = (*(iVar8 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(iVar8 + 0x40);
            }
            _printk(0x80062f5,iVar7,"aw_cali_attr_f0_show");
            uVar1 = str.get_f0_failed__n._8_8_;
            uVar11 = 0xf;
            *pcVar9 = str.get_f0_failed__n._0_8_;
            *(pcVar9 + 8) = uVar1;
        }
        else {
            iVar6 = snprintf(pcVar9,0x1000,"%s:%d ","pri_l",uStack_98 & 0xffffffff);
            iVar8 = iVar6;
            if (iVar5 != 1) {
                iVar6 = snprintf(pcVar9 + iVar8,0x1000 - iVar8,"%s:%d ","pri_r",uStack_98._4_4_);
                iVar8 = iVar8 + iVar6;
                if (iVar5 != 2) {
                    iVar6 = snprintf(pcVar9 + iVar8,0x1000 - iVar8,"%s:%d ","sec_l",uStack_90 & 0xffffffff);
                    iVar8 = iVar8 + iVar6;
                    if (iVar5 != 3) {
                        iVar6 = snprintf(pcVar9 + iVar8,0x1000 - iVar8,"%s:%d ","sec_r",uStack_90._4_4_);
                        if (iVar5 != 4) goto code_r0x0801665c;
                        iVar8 = iVar8 + iVar6;
                    }
                }
            }
            iVar5 = snprintf(pcVar9 + iVar8,0x1000 - iVar8,0x80020f4);
            uVar11 = iVar8 + iVar5;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return uVar11;
    }
    __stack_chk_fail(uVar11);
code_r0x0801665c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016660);
    (*pcVar3)();
}


// ===== sym.aw_cali_attr_f0_show @ 0x08016488 (size 472) =====

void sym.aw_cali_attr_f0_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar7 = *(*(arg1 + 0x98) + 0x68);
    iVar4 = sym.aw_cali_svc_cali_f0(iVar7,noname_1,2);
    uVar2 = str.cali_f0_cmd_failed_n._8_8_;
    uVar1 = str.cali_f0_cmd_failed_n._0_8_;
    if (iVar4 < 0) {
        iVar7 = 0x13;
        *(arg2 + 0x10) = 0xa6465;
        *arg2 = uVar1;
        *(arg2 + 8) = uVar2;
    }
    else {
        iVar4 = sym.aw_cali_svc_get_devs_cali_f0(iVar7,&uStack_48,4);
        if (iVar4 < 1) {
            iVar6 = (*(iVar7 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar7 + 0x40);
            }
            _printk(0x80062f5,iVar6,"aw_cali_attr_f0_show");
            uVar1 = str.get_f0_failed__n._8_8_;
            iVar7 = 0xf;
            *arg2 = str.get_f0_failed__n._0_8_;
            *(arg2 + 8) = uVar1;
        }
        else {
            iVar5 = snprintf(arg2,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
            iVar7 = iVar5;
            if (iVar4 != 1) {
                iVar5 = snprintf(arg2 + iVar7,0x1000 - iVar7,"%s:%d ","pri_r",uStack_48._4_4_);
                iVar7 = iVar7 + iVar5;
                if (iVar4 != 2) {
                    iVar5 = snprintf(arg2 + iVar7,0x1000 - iVar7,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 3) {
                        iVar5 = snprintf(arg2 + iVar7,0x1000 - iVar7,"%s:%d ","sec_r",uStack_40._4_4_);
                        if (iVar4 != 4) goto code_r0x0801665c;
                        iVar7 = iVar7 + iVar5;
                    }
                }
            }
            iVar4 = snprintf(arg2 + iVar7,0x1000 - iVar7,0x80020f4);
            iVar7 = iVar7 + iVar4;
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x0801665c:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016660);
    (*pcVar3)();
}


// ===== sym.aw_cali_attr_f0_store @ 0x08016660 (size 68) =====

int64_t sym.aw_cali_attr_f0_store(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw_cali_svc_cali_f0(*(*(arg1 + 0x98) + 0x68),noname_1,2);
    return arg2;
}


// ===== sym.aw_cali_attr_show_re @ 0x080166a4 (size 400) =====

int64_t sym.aw_cali_attr_show_re(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar6 = *(*(arg1 + 0x98) + 0x68);
    iVar3 = sym.aw_cali_svc_get_devs_cali_re(iVar6,&uStack_48,4);
    if (iVar3 < 1) {
        piVar5 = *(iVar6 + 0x40);
        iVar6 = piVar5[0xe];
        if (iVar6 == 0) {
            iVar6 = *piVar5;
        }
        _printk(0x80062d3,iVar6,"aw_cali_attr_show_re");
        iVar6 = 0;
    }
    else {
        iVar4 = snprintf(arg2,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
        iVar6 = iVar4;
        if (iVar3 != 1) {
            iVar4 = snprintf(arg2 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
            iVar6 = iVar6 + iVar4;
            if (iVar3 != 2) {
                iVar4 = snprintf(arg2 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_l",uStack_40 & 0xffffffff);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 3) {
                    iVar4 = snprintf(arg2 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                    if (iVar3 != 4) goto code_r0x08016830;
                    iVar6 = iVar6 + iVar4;
                }
            }
        }
    }
    iVar3 = snprintf(arg2 + iVar6,0x1000 - iVar6,0x80020f4);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return iVar6 + iVar3;
    }
    __stack_chk_fail();
code_r0x08016830:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8016834);
    (*pcVar2)();
}


// ===== sym.aw_cali_attr_show_f0 @ 0x08016834 (size 400) =====

void sym.aw_cali_attr_show_f0(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    iVar6 = *(*(arg1 + 0x98) + 0x68);
    iVar3 = sym.aw_cali_svc_get_devs_cali_f0(iVar6,&uStack_48,4);
    if (iVar3 < 1) {
        piVar5 = *(iVar6 + 0x40);
        iVar6 = piVar5[0xe];
        if (iVar6 == 0) {
            iVar6 = *piVar5;
        }
        _printk(0x80062f5,iVar6,"aw_cali_attr_show_f0");
        iVar6 = 0;
    }
    else {
        iVar4 = snprintf(arg2,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
        iVar6 = iVar4;
        if (iVar3 != 1) {
            iVar4 = snprintf(arg2 + iVar6,0x1000 - iVar6,"%s:%d ","pri_r",uStack_48._4_4_);
            iVar6 = iVar6 + iVar4;
            if (iVar3 != 2) {
                iVar4 = snprintf(arg2 + iVar6,0x1000 - iVar6,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 3) {
                    iVar4 = snprintf(arg2 + iVar6,0x1000 - iVar6,"%s:%d ","sec_r",uStack_40._4_4_);
                    if (iVar3 != 4) goto code_r0x080169c0;
                    iVar6 = iVar6 + iVar4;
                }
            }
        }
        iVar3 = snprintf(arg2 + iVar6,0x1000 - iVar6,0x80020f4);
        iVar6 = iVar6 + iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x080169c0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80169c4);
    (*pcVar2)();
}


// ===== sym.aw_re_range_show @ 0x080169c4 (size 120) =====

int64_t sym.aw_re_range_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(*(arg1 + 0x98) + 0x68);
    uVar1 = *(iVar3 + 0x34);
    iVar2 = snprintf(arg2,0x1000,"re_min value: [%d] mOhms\n",*(iVar3 + 0x38));
    iVar3 = iVar2;
    iVar2 = snprintf(arg2 + iVar3,0x1000 - iVar3,"re_max value: [%d] mOhms\n",uVar1);
    return iVar3 + iVar2;
}


// ===== sym.aw_cali_class_cali_re_show @ 0x08016a3c (size 528) =====

void sym.aw_cali_class_cali_re_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar4 == 0) {
        iVar8 = *piStack_50;
        iVar7 = iVar8 + -0x3e0;
        iVar4 = sym.aw_cali_svc_cali_re(iVar7,noname_1_00,1);
        uVar2 = str.cali_Re_cmd_failed_n._8_8_;
        uVar1 = str.cali_Re_cmd_failed_n._0_8_;
        if (iVar4 < 0) {
            iVar7 = 0x13;
            *(arg1 + 0x10) = 0xa6465;
            *arg1 = uVar1;
            *(arg1 + 8) = uVar2;
        }
        else {
            iVar4 = sym.aw_cali_svc_get_devs_cali_re(iVar7,&uStack_48,4);
            if (iVar4 < 1) {
                piVar6 = *(iVar8 + -0x3a0);
                iVar7 = piVar6[0xe];
                if (iVar7 == 0) {
                    iVar7 = *piVar6;
                }
                _printk(0x80062d3,iVar7,"aw_cali_class_cali_re_show");
                uVar1 = str.get_re_failed__n._8_8_;
                iVar7 = 0xf;
                *arg1 = str.get_re_failed__n._0_8_;
                *(arg1 + 8) = uVar1;
            }
            else {
                iVar5 = snprintf(arg1,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
                iVar7 = iVar5;
                if (iVar4 != 1) {
                    iVar5 = snprintf(arg1 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 2) {
                        iVar5 = snprintf(arg1 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_l",uStack_40 & 0xffffffff);
                        iVar7 = iVar7 + iVar5;
                        if (iVar4 != 3) {
                            iVar5 = snprintf(arg1 + iVar7,0x1000 - iVar7,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                            if (iVar4 != 4) goto code_r0x08016c48;
                            iVar7 = iVar7 + iVar5;
                        }
                    }
                }
                iVar4 = snprintf(arg1 + iVar7,0x1000 - iVar7,0x80020f4);
                iVar7 = iVar7 + iVar4;
            }
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_re_show");
        iVar7 = iVar4;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x08016c48:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016c4c);
    (*pcVar3)();
}


// ===== sym.aw_cali_class_cali_re_store @ 0x08016c4c (size 232) =====

int64_t sym.aw_cali_class_cali_re_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    char *pcVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    int64_t *piStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t *puStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    puStack_40 = NULL;
    pcVar7 = arg1;
    uVar4 = sym.aw882xx_dev_get_list_head(&puStack_40);
    if (uVar4 == 0) {
        uVar10 = *puStack_40;
        iVar5 = sym.aw_cali_svc_set_devs_re_str(uVar10 - 0x3e0,arg1);
        if (iVar5 < 1) {
            iVar9 = (*(uVar10 - 0x3a0))[0xe];
            if (iVar9 == 0) {
                iVar9 = **(uVar10 - 0x3a0);
            }
            pcVar7 = "aw_cali_class_cali_re_store";
            _printk(0x8007e6b,iVar9,"aw_cali_class_cali_re_store",arg1);
            arg2 = -1;
        }
    }
    else {
        uVar10 = uVar4;
        _printk(0x8004ff8,"aw_cali_class_cali_re_store");
        arg2 = uVar4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_class_cali_f0_show;
    pcStack_68 = sym.aw_cali_class_cali_f0_show;
    iVar9 = sp_el0;
    iStack_78 = *(iVar9 + 0x5e0);
    piStack_90 = NULL;
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar10;
    iStack_50 = arg2;
    iStack_48 = arg1;
    iVar5 = sym.aw882xx_dev_get_list_head(&piStack_90);
    if (iVar5 == 0) {
        iVar11 = *piStack_90;
        iVar9 = iVar11 + -0x3e0;
        iVar5 = sym.aw_cali_svc_cali_f0(iVar9,noname_1_00,2);
        uVar2 = str.cali_f0_cmd_failed_n._8_8_;
        uVar1 = str.cali_f0_cmd_failed_n._0_8_;
        if (iVar5 < 0) {
            iVar9 = 0x13;
            pcVar7[0x10] = 'e';
            pcVar7[0x11] = 'd';
            pcVar7[0x12] = '\n';
            pcVar7[0x13] = '\0';
            *pcVar7 = uVar1;
            *(pcVar7 + 8) = uVar2;
        }
        else {
            iVar5 = sym.aw_cali_svc_get_devs_cali_f0(iVar9,&uStack_88,4);
            if (iVar5 < 1) {
                piVar8 = *(iVar11 + -0x3a0);
                iVar9 = piVar8[0xe];
                if (iVar9 == 0) {
                    iVar9 = *piVar8;
                }
                _printk(0x80062f5,iVar9,"aw_cali_class_cali_f0_show");
                uVar1 = str.get_f0_failed__n._8_8_;
                iVar9 = 0xf;
                *pcVar7 = str.get_f0_failed__n._0_8_;
                *(pcVar7 + 8) = uVar1;
            }
            else {
                iVar6 = snprintf(pcVar7,0x1000,"%s:%d ","pri_l",uStack_88 & 0xffffffff);
                iVar9 = iVar6;
                if (iVar5 != 1) {
                    iVar6 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,"%s:%d ","pri_r",uStack_88._4_4_);
                    iVar9 = iVar9 + iVar6;
                    if (iVar5 != 2) {
                        iVar6 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,"%s:%d ","sec_l",uStack_80 & 0xffffffff);
                        iVar9 = iVar9 + iVar6;
                        if (iVar5 != 3) {
                            iVar6 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,"%s:%d ","sec_r",uStack_80._4_4_);
                            if (iVar5 != 4) goto code_r0x08016f40;
                            iVar9 = iVar9 + iVar6;
                        }
                    }
                }
                iVar5 = snprintf(pcVar7 + iVar9,0x1000 - iVar9,0x80020f4);
                iVar9 = iVar9 + iVar5;
            }
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_f0_show");
        iVar9 = iVar5;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_78) {
        return iVar9;
    }
    __stack_chk_fail(iVar9);
code_r0x08016f40:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016f44);
    (*pcVar3)();
}


// ===== sym.aw_cali_class_cali_f0_show @ 0x08016d34 (size 528) =====

void sym.aw_cali_class_cali_f0_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    code *pcVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t iVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar noname_1_00 [16];
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar4 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar4 == 0) {
        iVar8 = *piStack_50;
        iVar7 = iVar8 + -0x3e0;
        iVar4 = sym.aw_cali_svc_cali_f0(iVar7,noname_1_00,2);
        uVar2 = str.cali_f0_cmd_failed_n._8_8_;
        uVar1 = str.cali_f0_cmd_failed_n._0_8_;
        if (iVar4 < 0) {
            iVar7 = 0x13;
            *(arg1 + 0x10) = 0xa6465;
            *arg1 = uVar1;
            *(arg1 + 8) = uVar2;
        }
        else {
            iVar4 = sym.aw_cali_svc_get_devs_cali_f0(iVar7,&uStack_48,4);
            if (iVar4 < 1) {
                piVar6 = *(iVar8 + -0x3a0);
                iVar7 = piVar6[0xe];
                if (iVar7 == 0) {
                    iVar7 = *piVar6;
                }
                _printk(0x80062f5,iVar7,"aw_cali_class_cali_f0_show");
                uVar1 = str.get_f0_failed__n._8_8_;
                iVar7 = 0xf;
                *arg1 = str.get_f0_failed__n._0_8_;
                *(arg1 + 8) = uVar1;
            }
            else {
                iVar5 = snprintf(arg1,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
                iVar7 = iVar5;
                if (iVar4 != 1) {
                    iVar5 = snprintf(arg1 + iVar7,0x1000 - iVar7,"%s:%d ","pri_r",uStack_48._4_4_);
                    iVar7 = iVar7 + iVar5;
                    if (iVar4 != 2) {
                        iVar5 = snprintf(arg1 + iVar7,0x1000 - iVar7,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                        iVar7 = iVar7 + iVar5;
                        if (iVar4 != 3) {
                            iVar5 = snprintf(arg1 + iVar7,0x1000 - iVar7,"%s:%d ","sec_r",uStack_40._4_4_);
                            if (iVar4 != 4) goto code_r0x08016f40;
                            iVar7 = iVar7 + iVar5;
                        }
                    }
                }
                iVar4 = snprintf(arg1 + iVar7,0x1000 - iVar7,0x80020f4);
                iVar7 = iVar7 + iVar4;
            }
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_f0_show");
        iVar7 = iVar4;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar7);
code_r0x08016f40:
    //WARNING: Does not return
    pcVar3 = SoftwareBreakpoint(0x5512,0x8016f44);
    (*pcVar3)();
}


// ===== sym.aw_cali_class_cali_f0_store @ 0x08016f44 (size 164) =====

int64_t sym.aw_cali_class_cali_f0_store(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar noname_1 [16];
    int64_t *piStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    piStack_30 = NULL;
    iVar2 = sym.aw882xx_dev_get_list_head(&piStack_30);
    if (iVar2 == 0) {
        in_x2 = 2;
        sym.aw_cali_svc_cali_f0(*piStack_30 + -0x3e0,noname_1,2);
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_cali_f0_store");
        arg1 = iVar2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg1;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_class_time_show;
    iVar2 = snprintf(in_x2,0x1000,"time: %d \n",_segment.ehdr);
    return iVar2;
}


// ===== sym.aw_cali_class_time_show @ 0x08016fe8 (size 64) =====

int64_t sym.aw_cali_class_time_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg1,0x1000,"time: %d \n",_segment.ehdr);
    return iVar1;
}


// ===== sym.aw_cali_class_time_store @ 0x08017028 (size 232) =====

int64_t sym.aw_cali_class_time_store(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x21;
    int64_t iVar8;
    ulong unaff_x30;
    int64_t *piStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    int64_t iStack_50;
    int64_t iStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    uStack_3c = 0;
    uVar3 = kstrtoint(arg1,0,&uStack_3c);
    if (uVar3 < 0) {
        unaff_x21 = uVar3;
        uVar6 = arg1;
        _printk(0x800773e,"aw_cali_class_time_store",arg1);
        arg2 = uVar3;
    }
    else {
        uVar6 = uStack_3c;
        if (uStack_3c < 400) {
            _printk(0x8007ea7,"aw_cali_class_time_store");
            arg2 = -0x16;
        }
        else {
            _segment.ehdr = uStack_3c;
            _printk(0x8006742,"aw_cali_class_time_store");
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return arg2;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_class_re_show;
    pcStack_68 = sym.aw_cali_class_re_show;
    iVar8 = sp_el0;
    iStack_78 = *(iVar8 + 0x5e0);
    piStack_90 = NULL;
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    iStack_50 = arg1;
    iStack_48 = arg2;
    iVar4 = sym.aw882xx_dev_get_list_head(&piStack_90);
    if (iVar4 == 0) {
        iVar8 = *piStack_90;
        iVar4 = sym.aw_cali_svc_get_devs_cali_re(iVar8 + -0x3e0,&uStack_88,4);
        if (iVar4 < 1) {
            piVar7 = *(iVar8 + -0x3a0);
            iVar8 = piVar7[0xe];
            if (iVar8 == 0) {
                iVar8 = *piVar7;
            }
            _printk(0x80062d3,iVar8,"aw_cali_class_re_show");
            iVar8 = 0;
        }
        else {
            iVar5 = snprintf(uVar6,0x1000,"%s:%d mOhms ","pri_l",uStack_88 & 0xffffffff);
            iVar8 = iVar5;
            if (iVar4 != 1) {
                iVar5 = snprintf(uVar6 + iVar8,0x1000 - iVar8,"%s:%d mOhms ","pri_r",uStack_88._4_4_);
                iVar8 = iVar8 + iVar5;
                if (iVar4 != 2) {
                    iVar5 = snprintf(uVar6 + iVar8,0x1000 - iVar8,"%s:%d mOhms ","sec_l",uStack_80 & 0xffffffff);
                    iVar8 = iVar8 + iVar5;
                    if (iVar4 != 3) {
                        iVar5 = snprintf(uVar6 + iVar8,0x1000 - iVar8,"%s:%d mOhms ","sec_r",uStack_80._4_4_);
                        if (iVar4 != 4) goto code_r0x080172d0;
                        iVar8 = iVar8 + iVar5;
                    }
                }
            }
            iVar4 = snprintf(uVar6 + iVar8,0x1000 - iVar8,0x80020f4);
            iVar8 = iVar8 + iVar4;
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_re_show");
        iVar8 = iVar4;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return iVar8;
    }
    __stack_chk_fail(iVar8);
code_r0x080172d0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80172d4);
    (*pcVar2)();
}


// ===== sym.aw_cali_class_re_show @ 0x08017110 (size 452) =====

void sym.aw_cali_class_re_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar3 == 0) {
        iVar6 = *piStack_50;
        iVar3 = sym.aw_cali_svc_get_devs_cali_re(iVar6 + -0x3e0,&uStack_48,4);
        if (iVar3 < 1) {
            piVar5 = *(iVar6 + -0x3a0);
            iVar6 = piVar5[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar5;
            }
            _printk(0x80062d3,iVar6,"aw_cali_class_re_show");
            iVar6 = 0;
        }
        else {
            iVar4 = snprintf(arg1,0x1000,"%s:%d mOhms ","pri_l",uStack_48 & 0xffffffff);
            iVar6 = iVar4;
            if (iVar3 != 1) {
                iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","pri_r",uStack_48._4_4_);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 2) {
                    iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_l",uStack_40 & 0xffffffff);
                    iVar6 = iVar6 + iVar4;
                    if (iVar3 != 3) {
                        iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:%d mOhms ","sec_r",uStack_40._4_4_);
                        if (iVar3 != 4) goto code_r0x080172d0;
                        iVar6 = iVar6 + iVar4;
                    }
                }
            }
            iVar3 = snprintf(arg1 + iVar6,0x1000 - iVar6,0x80020f4);
            iVar6 = iVar6 + iVar3;
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_re_show");
        iVar6 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x080172d0:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x80172d4);
    (*pcVar2)();
}


// ===== sym.aw_cali_class_f0_show @ 0x080172d4 (size 452) =====

void sym.aw_cali_class_f0_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    int64_t *piStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    piStack_50 = NULL;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = sym.aw882xx_dev_get_list_head(&piStack_50);
    if (iVar3 == 0) {
        iVar6 = *piStack_50;
        iVar3 = sym.aw_cali_svc_get_devs_cali_f0(iVar6 + -0x3e0,&uStack_48,4);
        if (iVar3 < 1) {
            piVar5 = *(iVar6 + -0x3a0);
            iVar6 = piVar5[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar5;
            }
            _printk(0x80062d3,iVar6,"aw_cali_class_f0_show");
            iVar6 = 0;
        }
        else {
            iVar4 = snprintf(arg1,0x1000,"%s:%d ","pri_l",uStack_48 & 0xffffffff);
            iVar6 = iVar4;
            if (iVar3 != 1) {
                iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:%d ","pri_r",uStack_48._4_4_);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 2) {
                    iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:%d ","sec_l",uStack_40 & 0xffffffff);
                    iVar6 = iVar6 + iVar4;
                    if (iVar3 != 3) {
                        iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:%d ","sec_r",uStack_40._4_4_);
                        if (iVar3 != 4) goto code_r0x08017494;
                        iVar6 = iVar6 + iVar4;
                    }
                }
            }
            iVar3 = snprintf(arg1 + iVar6,0x1000 - iVar6,0x80020f4);
            iVar6 = iVar6 + iVar3;
        }
    }
    else {
        _printk(0x8004ff8,"aw_cali_class_f0_show");
        iVar6 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x08017494:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8017498);
    (*pcVar2)();
}


// ===== sym.aw_class_re_range_show @ 0x08017498 (size 472) =====

void sym.aw_class_re_range_show(ulong noname_0,uchar noname_1 [16],int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong unaff_x30;
    int64_t *piStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    piStack_60 = NULL;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    _printk(0x8002ad6,"aw_class_re_range_show");
    iVar3 = sym.aw882xx_dev_get_list_head(&piStack_60);
    if (iVar3 < 0) {
        _printk(0x8006fef,"aw_class_re_range_show");
        iVar6 = iVar3;
    }
    else {
        iVar6 = *piStack_60;
        iVar3 = sym.aw_cali_svc_get_devs_re_range(iVar6 + -0x3e0,&uStack_58);
        if (iVar3 < 1) {
            piVar5 = *(iVar6 + -0x3a0);
            iVar6 = piVar5[0xe];
            if (iVar6 == 0) {
                iVar6 = *piVar5;
            }
            _printk(0x8008a43,iVar6,"aw_class_re_range_show");
            iVar6 = -0x16;
        }
        else {
            iVar4 = snprintf(arg1,0x1000,"%s:re_min:%d mOhms re_max:%d mOhms ","pri_l",uStack_58 & 0xffffffff,
                             uStack_58._4_4_);
            iVar6 = iVar4;
            if (iVar3 != 1) {
                iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:re_min:%d mOhms re_max:%d mOhms ","pri_r",
                                 uStack_50 & 0xffffffff,uStack_50._4_4_);
                iVar6 = iVar6 + iVar4;
                if (iVar3 != 2) {
                    iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:re_min:%d mOhms re_max:%d mOhms ","sec_l",
                                     uStack_48 & 0xffffffff,uStack_48._4_4_);
                    iVar6 = iVar6 + iVar4;
                    if (iVar3 != 3) {
                        iVar4 = snprintf(arg1 + iVar6,0x1000 - iVar6,"%s:re_min:%d mOhms re_max:%d mOhms ","sec_r",
                                         uStack_40 & 0xffffffff,uStack_40._4_4_);
                        if (iVar3 != 4) goto code_r0x0801766c;
                        iVar6 = iVar6 + iVar4;
                    }
                }
            }
            iVar3 = snprintf(arg1 + iVar6,0x1000 - iVar6,0x80020f4);
            iVar6 = iVar6 + iVar3;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail(iVar6);
code_r0x0801766c:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8017670);
    (*pcVar2)();
}


// ===== sym.aw_cali_svc_get_devs_re_range @ 0x08017670 (size 316) =====

code * sym.aw_cali_svc_get_devs_re_range(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t *in_x3;
    int64_t *piVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar11;
    int64_t arg1_00;
    code *unaff_x24;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar12 [16];
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
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int64_t *piStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piStack_40 = NULL;
    uVar2 = sym.aw882xx_dev_get_list_head(&piStack_40);
    if (uVar2 == 0) {
        piVar9 = *piStack_40;
        if (piVar9 == piStack_40) {
            pcVar11 = NULL;
        }
        else {
            pcVar11 = NULL;
            do {
                in_x3 = *(piVar9 + -0x3b4);
                if (3 < *(piVar9 + -0x3b4)) {
                    iVar7 = piVar9[-0x74][0xe];
                    if (iVar7 == 0) {
                        iVar7 = *piVar9[-0x74];
                    }
                    _printk(0x8003a7f,iVar7,"aw_cali_svc_get_devs_re_range",in_x3,4);
                    pcVar11 = 0xffffffea;
                    break;
                }
                pcVar11 = pcVar11 + 1;
                *(arg2 + in_x3 * 8) = piVar9[-0x75];
                *(arg2 + (*(piVar9 + -0x3b4) << 1 | 1) * 4) = *(piVar9 + -0x3ac);
                piVar9 = *piVar9;
            } while (piVar9 != piStack_40);
        }
    }
    else {
        pcVar11 = uVar2;
        iVar7 = (*(arg1 + 0x40))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(arg1 + 0x40);
        }
        _printk(0x8005e7f,iVar7,"aw_cali_svc_get_devs_re_range");
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return pcVar11;
    }
    auVar12 = __stack_chk_fail();
    *extraout_x18 = sym.aw_cali_misc_read;
    pcStack_88 = sym.aw_cali_misc_read;
    iVar7 = sp_el0;
    iStack_98 = *(iVar7 + 0x5e0);
    arg1_00 = *(auVar12._0_8_ + 0xd8);
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
    iVar7 = (*(arg1_00 + 0x40))[0xe];
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
    if (iVar7 == 0) {
        iVar7 = **(arg1_00 + 0x40);
    }
    puStack_90 = &stack0xffffffffffffffd0;
    _printk(0x8004092,iVar7,"aw_cali_misc_read");
    if (*in_x3 == 0) {
        unaff_x24 = segment.ehdr;
        switch(_segment.ehdr) {
        case 0:
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005ee0;
            goto code_r0x08018100;
        default:
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            _printk(0x8004280,iVar7,"aw_cali_misc_read");
            pcVar11 = 0xffffffffffffffea;
            goto code_r0x08018140;
        case 5:
            iVar3 = sym.aw_cali_svc_get_devs_cali_re(arg1_00,&uStack_138,4);
            if (0 < iVar3) {
code_r0x080178dc:
                uVar2 = snprintf(&uStack_118,0x80,"%s:%d mOhms ","pri_l",uStack_138 & 0xffffffff);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:%d mOhms ","pri_r",uStack_138._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:%d mOhms ","sec_l",
                                         uStack_130 & 0xffffffff);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar10 = uVar2;
                            iVar7 = &uStack_118 + iVar10;
                            pcVar8 = "%s:%d mOhms ";
                            goto code_r0x08017b30;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005a0f;
            break;
        case 6:
            iVar3 = sym.aw_cali_svc_get_devs_r0(arg1_00,&uStack_138,4);
            if (0 < iVar3) goto code_r0x080178dc;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8007761;
            break;
        case 7:
            iVar3 = sym.aw_cali_svc_get_devs_cali_f0(arg1_00,&uStack_138,4);
            if (0 < iVar3) {
code_r0x08017a54:
                uVar2 = snprintf(&uStack_118,0x80,"%s:%d ","pri_l",uStack_138 & 0xffffffff);
                if (iVar3 == 1) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:%d ","pri_r",uStack_138._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 2) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:%d ","sec_l",uStack_130 & 0xffffffff);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 3) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar10 = uVar2;
                iVar7 = &uStack_118 + iVar10;
                pcVar8 = "%s:%d ";
code_r0x08017b30:
                iVar5 = snprintf(iVar7,0x80 - iVar10,pcVar8,"sec_r",uStack_130._4_4_);
joined_r0x08017fbc:
                if (iVar3 != 4) goto code_r0x08017fc0;
                uVar2 = iVar5 + uVar2;
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x800491a;
            break;
        case 8:
            iVar3 = sym.aw_cali_svc_get_devs_f0(arg1_00,&uStack_138,4);
            if (0 < iVar3) goto code_r0x08017a54;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8008a6a;
            break;
        case 9:
            iVar3 = sym.aw_cali_svc_get_devs_te(arg1_00,&uStack_138,4);
            if (0 < iVar3) goto code_r0x08017a54;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005a35;
            break;
        case 10:
            iVar3 = sym.aw_cali_svc_get_devs_st(arg1_00,&uStack_138,4);
            if (0 < iVar3) {
                uVar2 = snprintf(&uStack_118,0x80,"%s:R0 %d mOhms Te %d ","pri_l",uStack_138 & 0xffffffff,
                                 uStack_138._4_4_);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:R0 %d mOhms Te %d ","pri_r",
                                     uStack_130 & 0xffffffff,uStack_130._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:R0 %d mOhms Te %d ","sec_l",
                                         uStack_128 & 0xffffffff,uStack_128._4_4_);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar10 = uVar2;
                            iVar7 = &uStack_118 + iVar10;
                            pcVar8 = "%s:R0 %d mOhms Te %d ";
                            uVar4 = uStack_120;
                            uVar1 = uStack_120._4_4_;
code_r0x08017df4:
                            iVar5 = snprintf(iVar7,0x80 - iVar10,pcVar8,"sec_r",uVar4,uVar1);
                            goto joined_r0x08017fbc;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x80053b3;
            break;
        case 0xc:
            pcVar11 = *(arg1_00 + 0x3b0);
            if (pcVar11 == NULL) {
                iVar7 = (*(arg1_00 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x40);
                }
                uVar6 = 0x8006750;
                goto code_r0x08018100;
            }
            if (pcVar11 != sym.__typeid__ZTSFiPciE_global_addr) goto code_r0x0801814c;
            goto code_r0x08017c5c;
        case 0xd:
            pcVar11 = *(arg1_00 + 0x3b8);
            if (pcVar11 == NULL) {
                iVar7 = (*(arg1_00 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x40);
                }
                uVar6 = 0x8008e5a;
                goto code_r0x08018100;
            }
            if (8 < (pcVar11 + -0x800b8c0 >> 3 | pcVar11 << 0x3d)) {
                __cfi_slowpath_diag(0x2b3a43e29242445,pcVar11,0x8001640);
            }
            uVar4 = (*pcVar11)();
            iVar3 = snprintf(&uStack_118,0x80,"dev_num:%d\n",uVar4);
            goto code_r0x08017f08;
        case 0xf:
            iVar3 = sym.aw_cali_svc_get_devs_cali_f0_q(arg1_00,&uStack_138,&uStack_158,4);
            if (0 < iVar3) {
                uVar2 = snprintf(&uStack_118,0x80,"%s:f0:%d q:%d","pri_l",uStack_138 & 0xffffffff,
                                 uStack_158 & 0xffffffff);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:f0:%d q:%d","pri_r",uStack_138._4_4_,
                                     uStack_158._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:f0:%d q:%d","sec_l",
                                         uStack_130 & 0xffffffff,uStack_150 & 0xffffffff);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar10 = uVar2;
                            iVar7 = &uStack_118 + iVar10;
                            pcVar8 = "%s:f0:%d q:%d";
                            uVar4 = uStack_130._4_4_;
                            uVar1 = uStack_150._4_4_;
                            goto code_r0x08017df4;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8008690;
            break;
        case 0x10:
            iVar3 = sym.aw_cali_svc_get_devs_re_range(arg1_00,&uStack_178);
            if (iVar3 < 1) {
                iVar7 = (*(arg1_00 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x40);
                }
                uVar6 = 0x8008a43;
                goto code_r0x08018100;
            }
            uVar2 = snprintf(&uStack_118,0x80,"%s:re_min:%d re_max:%d ","pri_l",uStack_178 & 0xffffffff,
                             uStack_178._4_4_);
            if (iVar3 != 1) {
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","pri_r",
                                 uStack_170 & 0xffffffff,uStack_170._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 2) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","sec_l",
                                 uStack_168 & 0xffffffff,uStack_168._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 3) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","sec_r",
                                 uStack_160 & 0xffffffff,uStack_160._4_4_);
                goto joined_r0x08017fbc;
            }
code_r0x08017edc:
            if (uVar2 < 0x81) {
                iVar3 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,0x8007347);
                iVar3 = iVar3 + uVar2;
                goto code_r0x08017f08;
            }
            goto code_r0x08017fc0;
        }
        _printk(uVar6,iVar7,"aw_cali_misc_read");
        pcVar11 = iVar3;
    }
    else {
        pcVar11 = NULL;
        *in_x3 = 0;
    }
    while( true ) {
        while( true ) {
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_98) {
                return pcVar11;
            }
            __stack_chk_fail();
code_r0x0801814c:
            __cfi_slowpath_diag(0x71abd6d60b240f2d,pcVar11,0x8001620);
code_r0x08017c5c:
            uVar2 = (*pcVar11)(&uStack_118,0x80);
            if (-1 < uVar2) break;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005a56;
code_r0x08018100:
            _printk(uVar6,iVar7,"aw_cali_misc_read");
            pcVar11 = 0xffffffffffffffea;
        }
        if (0x80 < uVar2) break;
        iVar3 = snprintf(&uStack_118 + uVar2,0x80 - uVar2,0x8007347);
        iVar3 = iVar3 + uVar2;
code_r0x08017f08:
        if (iVar3 < 0) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x800,0x8018118);
            (*pcVar11)();
        }
        pcVar11 = iVar3;
        noname_1 = __check_object_size(&uStack_118,pcVar11,1);
        iVar7 = sym._copy_to_user(auVar12._8_8_,noname_1,pcVar11);
        if (iVar7 == 0) {
            iVar7 = *in_x3;
            *unaff_x24 = 0;
            *in_x3 = pcVar11 + iVar7;
        }
        else {
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            _printk(0x8006346,iVar7,"aw_cali_misc_read");
            pcVar11 = 0xfffffffffffffff2;
code_r0x08018140:
            *unaff_x24 = 0;
        }
    }
code_r0x08017fc0:
    //WARNING: Does not return
    pcVar11 = SoftwareBreakpoint(0x5512,0x8017fc4);
    (*pcVar11)();
}


// ===== sym.aw_cali_misc_read @ 0x080177ac (size 2536) =====

code * sym.aw_cali_misc_read(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t arg1_00;
    code *pcVar10;
    code *unaff_x24;
    ulong unaff_x30;
    uchar noname_1 [16];
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
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    arg1_00 = *(arg1 + 0xd8);
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
    iVar7 = (*(arg1_00 + 0x40))[0xe];
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
    if (iVar7 == 0) {
        iVar7 = **(arg1_00 + 0x40);
    }
    _printk(0x8004092,iVar7,"aw_cali_misc_read");
    if (*arg3 == 0) {
        unaff_x24 = segment.ehdr;
    //switch table (17 cases) at 0x8009a48
        switch(_segment.ehdr) {
        case 0:
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005ee0;
            goto code_r0x08018100;
        default:
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            _printk(0x8004280,iVar7,"aw_cali_misc_read");
            pcVar10 = 0xffffffffffffffea;
            goto code_r0x08018140;
        case 5:
            iVar3 = sym.aw_cali_svc_get_devs_cali_re(arg1_00,&uStack_f8,4);
            if (0 < iVar3) {
code_r0x080178dc:
                uVar2 = snprintf(&uStack_d8,0x80,"%s:%d mOhms ","pri_l",uStack_f8 & 0xffffffff);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d mOhms ","pri_r",uStack_f8._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d mOhms ","sec_l",
                                         uStack_f0 & 0xffffffff);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar9 = uVar2;
                            iVar7 = &uStack_d8 + iVar9;
                            pcVar8 = "%s:%d mOhms ";
                            goto code_r0x08017b30;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005a0f;
            break;
        case 6:
            iVar3 = sym.aw_cali_svc_get_devs_r0(arg1_00,&uStack_f8,4);
            if (0 < iVar3) goto code_r0x080178dc;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8007761;
            break;
        case 7:
            iVar3 = sym.aw_cali_svc_get_devs_cali_f0(arg1_00,&uStack_f8,4);
            if (0 < iVar3) {
code_r0x08017a54:
                uVar2 = snprintf(&uStack_d8,0x80,"%s:%d ","pri_l",uStack_f8 & 0xffffffff);
                if (iVar3 == 1) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d ","pri_r",uStack_f8._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 2) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:%d ","sec_l",uStack_f0 & 0xffffffff);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 3) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar9 = uVar2;
                iVar7 = &uStack_d8 + iVar9;
                pcVar8 = "%s:%d ";
code_r0x08017b30:
                iVar5 = snprintf(iVar7,0x80 - iVar9,pcVar8,"sec_r",uStack_f0._4_4_);
joined_r0x08017fbc:
                if (iVar3 != 4) goto code_r0x08017fc0;
                uVar2 = iVar5 + uVar2;
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x800491a;
            break;
        case 8:
            iVar3 = sym.aw_cali_svc_get_devs_f0(arg1_00,&uStack_f8,4);
            if (0 < iVar3) goto code_r0x08017a54;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8008a6a;
            break;
        case 9:
            iVar3 = sym.aw_cali_svc_get_devs_te(arg1_00,&uStack_f8,4);
            if (0 < iVar3) goto code_r0x08017a54;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005a35;
            break;
        case 10:
            iVar3 = sym.aw_cali_svc_get_devs_st(arg1_00,&uStack_f8,4);
            if (0 < iVar3) {
                uVar2 = snprintf(&uStack_d8,0x80,"%s:R0 %d mOhms Te %d ","pri_l",uStack_f8 & 0xffffffff,
                                 uStack_f8._4_4_);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:R0 %d mOhms Te %d ","pri_r",
                                     uStack_f0 & 0xffffffff,uStack_f0._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:R0 %d mOhms Te %d ","sec_l",
                                         uStack_e8 & 0xffffffff,uStack_e8._4_4_);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar9 = uVar2;
                            iVar7 = &uStack_d8 + iVar9;
                            pcVar8 = "%s:R0 %d mOhms Te %d ";
                            uVar4 = uStack_e0;
                            uVar1 = uStack_e0._4_4_;
code_r0x08017df4:
                            iVar5 = snprintf(iVar7,0x80 - iVar9,pcVar8,"sec_r",uVar4,uVar1);
                            goto joined_r0x08017fbc;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x80053b3;
            break;
        case 0xc:
            pcVar10 = *(arg1_00 + 0x3b0);
            if (pcVar10 == NULL) {
                iVar7 = (*(arg1_00 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x40);
                }
                uVar6 = 0x8006750;
                goto code_r0x08018100;
            }
            if (pcVar10 != sym.__typeid__ZTSFiPciE_global_addr) goto code_r0x0801814c;
            goto code_r0x08017c5c;
        case 0xd:
            pcVar10 = *(arg1_00 + 0x3b8);
            if (pcVar10 == NULL) {
                iVar7 = (*(arg1_00 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x40);
                }
                uVar6 = 0x8008e5a;
                goto code_r0x08018100;
            }
            if (8 < (pcVar10 + -0x800b8c0 >> 3 | pcVar10 << 0x3d)) {
                __cfi_slowpath_diag(0x2b3a43e29242445,pcVar10,0x8001640);
            }
            uVar4 = (*pcVar10)();
            iVar3 = snprintf(&uStack_d8,0x80,"dev_num:%d\n",uVar4);
            goto code_r0x08017f08;
        case 0xf:
            iVar3 = sym.aw_cali_svc_get_devs_cali_f0_q(arg1_00,&uStack_f8,&uStack_118,4);
            if (0 < iVar3) {
                uVar2 = snprintf(&uStack_d8,0x80,"%s:f0:%d q:%d","pri_l",uStack_f8 & 0xffffffff,
                                 uStack_118 & 0xffffffff);
                if (iVar3 != 1) {
                    if (0x80 < uVar2) goto code_r0x08017fc0;
                    iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:f0:%d q:%d","pri_r",uStack_f8._4_4_,
                                     uStack_118._4_4_);
                    uVar2 = iVar5 + uVar2;
                    if (iVar3 != 2) {
                        if (0x80 < uVar2) goto code_r0x08017fc0;
                        iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:f0:%d q:%d","sec_l",
                                         uStack_f0 & 0xffffffff,uStack_110 & 0xffffffff);
                        uVar2 = iVar5 + uVar2;
                        if (iVar3 != 3) {
                            if (0x80 < uVar2) goto code_r0x08017fc0;
                            iVar9 = uVar2;
                            iVar7 = &uStack_d8 + iVar9;
                            pcVar8 = "%s:f0:%d q:%d";
                            uVar4 = uStack_f0._4_4_;
                            uVar1 = uStack_110._4_4_;
                            goto code_r0x08017df4;
                        }
                    }
                }
                goto code_r0x08017edc;
            }
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8008690;
            break;
        case 0x10:
            iVar3 = sym.aw_cali_svc_get_devs_re_range(arg1_00,&uStack_138);
            if (iVar3 < 1) {
                iVar7 = (*(arg1_00 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x40);
                }
                uVar6 = 0x8008a43;
                goto code_r0x08018100;
            }
            uVar2 = snprintf(&uStack_d8,0x80,"%s:re_min:%d re_max:%d ","pri_l",uStack_138 & 0xffffffff,
                             uStack_138._4_4_);
            if (iVar3 != 1) {
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","pri_r",
                                 uStack_130 & 0xffffffff,uStack_130._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 2) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","sec_l",
                                 uStack_128 & 0xffffffff,uStack_128._4_4_);
                uVar2 = iVar5 + uVar2;
                if (iVar3 == 3) goto code_r0x08017edc;
                if (0x80 < uVar2) goto code_r0x08017fc0;
                iVar5 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,"%s:re_min:%d re_max:%d ","sec_r",
                                 uStack_120 & 0xffffffff,uStack_120._4_4_);
                goto joined_r0x08017fbc;
            }
code_r0x08017edc:
            if (uVar2 < 0x81) {
                iVar3 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,0x8007347);
                iVar3 = iVar3 + uVar2;
                goto code_r0x08017f08;
            }
            goto code_r0x08017fc0;
        }
        _printk(uVar6,iVar7,"aw_cali_misc_read");
        pcVar10 = iVar3;
    }
    else {
        pcVar10 = NULL;
        *arg3 = 0;
    }
    while( true ) {
        while( true ) {
            iVar7 = sp_el0;
            if (*(iVar7 + 0x5e0) == iStack_58) {
                return pcVar10;
            }
            __stack_chk_fail();
code_r0x0801814c:
            __cfi_slowpath_diag(0x71abd6d60b240f2d,pcVar10,0x8001620);
code_r0x08017c5c:
            uVar2 = (*pcVar10)(&uStack_d8,0x80);
            if (-1 < uVar2) break;
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            uVar6 = 0x8005a56;
code_r0x08018100:
            _printk(uVar6,iVar7,"aw_cali_misc_read");
            pcVar10 = 0xffffffffffffffea;
        }
        if (0x80 < uVar2) break;
        iVar3 = snprintf(&uStack_d8 + uVar2,0x80 - uVar2,0x8007347);
        iVar3 = iVar3 + uVar2;
code_r0x08017f08:
        if (iVar3 < 0) {
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x800,0x8018118);
            (*pcVar10)();
        }
        pcVar10 = iVar3;
        noname_1 = __check_object_size(&uStack_d8,pcVar10,1);
        iVar7 = sym._copy_to_user(arg2,noname_1,pcVar10);
        if (iVar7 == 0) {
            iVar7 = *arg3;
            *unaff_x24 = 0;
            *arg3 = pcVar10 + iVar7;
        }
        else {
            iVar7 = (*(arg1_00 + 0x40))[0xe];
            if (iVar7 == 0) {
                iVar7 = **(arg1_00 + 0x40);
            }
            _printk(0x8006346,iVar7,"aw_cali_misc_read");
            pcVar10 = 0xfffffffffffffff2;
code_r0x08018140:
            *unaff_x24 = 0;
        }
    }
code_r0x08017fc0:
    //WARNING: Does not return
    pcVar10 = SoftwareBreakpoint(0x5512,0x8017fc4);
    (*pcVar10)();
}


// ===== sym.aw_cali_misc_write @ 0x08018194 (size 612) =====

int64_t sym.aw_cali_misc_write(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xd8);
    iVar6 = (*(arg1_00 + 0x40))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(arg1_00 + 0x40);
    }
    _printk(0x80068ef,iVar6,"aw_cali_misc_write",arg3 & 0xffffffff);
    iVar6 = __kmalloc(arg3 + 1,0xdc0);
    if (iVar6 == 0) {
        iVar6 = (*(arg1_00 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg1_00 + 0x40);
        }
        _printk(0x800372b,iVar6,"aw_cali_misc_write");
        return -0xc;
    }
    if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x800,0x80183f8);
        (*pcVar1)();
    }
    __check_object_size(iVar6,arg3,0);
    iVar4 = sym._copy_from_user(iVar6,arg2,arg3);
    if (iVar4 != 0) {
        iVar3 = -0xe;
        goto code_r0x080182d4;
    }
    iVar2 = sym.aw_cali_svc_get_cmd_form_str(arg1_00,iVar6);
    if (iVar2 < 0) {
        iVar4 = (*(arg1_00 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1_00 + 0x40);
        }
        uVar5 = 0x800501d;
code_r0x08018280:
        _printk(uVar5,iVar4,"aw_cali_misc_write",iVar6);
        iVar3 = -0x16;
    }
    else {
    //switch table (15 cases) at 0x8009a8c
        switch(iVar2) {
        case 1:
            iVar3 = sym.aw_cali_svc_cali_cmd(arg1_00,2,0,3);
            break;
        case 2:
            iVar3 = sym.aw_cali_svc_cali_re(arg1_00,noname_1,1);
            break;
        case 3:
            iVar3 = sym.aw_cali_svc_cali_f0(arg1_00,noname_1,3);
            break;
        case 4:
            iVar3 = sym.aw_cali_svc_set_devs_re_str(arg1_00,iVar6 + 9);
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xc:
        case 0xd:
        case 0xf:
        case 0x10:
            iVar3 = 0;
            _segment.ehdr = iVar2;
            break;
        case 0xb:
            iVar3 = sym.aw_cali_misc_switch_dev(arg1,arg1_00,iVar6);
            break;
        case 0xe:
            iVar3 = sym.aw_cali_svc_cali_f0_q(arg1_00,noname_1,3);
            break;
        default:
            iVar4 = (*(arg1_00 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(arg1_00 + 0x40);
            }
            uVar5 = 0x800701e;
            goto code_r0x08018280;
        }
    }
code_r0x080182d4:
    iVar4 = (*(arg1_00 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1_00 + 0x40);
    }
    _printk(0x8003b17,iVar4,"aw_cali_misc_write",iVar6);
    kfree(iVar6);
    iVar6 = -0x16;
    if (-1 < iVar3) {
        iVar6 = arg3;
    }
    return iVar6;
}


// ===== sym.aw_cali_misc_unlocked_ioctl @ 0x080183fc (size 96) =====

ulong sym.aw_cali_misc_unlocked_ioctl(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 & 0xff00) == 0x6100) {
        iVar1 = sym.aw_cali_misc_ops(*(arg1 + 0xd8),arg2,arg3);
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = 0xffffffffffffffea;
        }
    }
    else {
        _printk(0x8007782,"aw_cali_misc_unlocked_ioctl");
        uVar2 = 0xffffffffffffffea;
    }
    return uVar2;
}


// ===== sym.aw_cali_misc_compat_ioctl @ 0x0801845c (size 96) =====

ulong sym.aw_cali_misc_compat_ioctl(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 & 0xff00) == 0x6100) {
        iVar1 = sym.aw_cali_misc_ops(*(arg1 + 0xd8),arg2,in_x2);
        uVar2 = 0;
        if (iVar1 != 0) {
            uVar2 = 0xffffffffffffffea;
        }
    }
    else {
        _printk(0x8007782,"aw_cali_misc_compat_ioctl");
        uVar2 = 0xffffffffffffffea;
    }
    return uVar2;
}


// ===== sym.aw_cali_misc_open @ 0x080184bc (size 328) =====

ulong sym.aw_cali_misc_open(ulong noname_0,int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t extraout_x1;
    int64_t *piVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    int64_t *piStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    piStack_30 = NULL;
    iVar1 = sym.aw882xx_dev_get_list_head(&piStack_30);
    if (iVar1 == 0) {
        piVar4 = *piStack_30;
        piVar5 = piVar4;
        if (piVar4 != piStack_30) {
            do {
                piVar6 = piVar5 + -0x7c;
                if (*(piVar5 + -0x3b4) == _segment.ehdr) {
                    if (piVar6 != NULL) goto code_r0x080185a8;
                    goto code_r0x08018588;
                }
                piVar5 = *piVar5;
            } while (piVar5 != piStack_30);
            if (piVar6 != NULL) {
                piVar6 = piVar4 + -0x7c;
                iVar3 = piVar4[-0x74][0xe];
                if (iVar3 == 0) {
                    iVar3 = *piVar4[-0x74];
                }
                _printk(0x80086cf,iVar3,"aw_cali_misc_open");
code_r0x080185a8:
                *(arg1 + 0xd8) = piVar6;
                iVar3 = piVar6[8][0xe];
                if (iVar3 == 0) {
                    iVar3 = *piVar6[8];
                }
                _printk(0x80033a7,iVar3,"aw_cali_misc_open");
                uVar2 = 0;
                goto code_r0x080185d4;
            }
        }
code_r0x08018588:
        _printk(0x8006cd1,"aw_cali_misc_open",_segment.ehdr);
        uVar2 = 0xffffffea;
    }
    else {
        _printk(0x8004ff8,"aw_cali_misc_open");
        uVar2 = 0xffffffea;
        *(arg1 + 0xd8) = 0;
    }
code_r0x080185d4:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar2);
        *extraout_x18 = sym.aw_cali_misc_release;
        *(extraout_x1 + 0xd8) = 0;
        _printk(0x8005797);
        return 0;
    }
    return uVar2;
}


// ===== sym.aw_cali_misc_release @ 0x08018604 (size 52) =====

ulong sym.aw_cali_misc_release(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0xd8) = 0;
    _printk(0x8005797);
    return 0;
}


// ===== sym._copy_to_user @ 0x08018638 (size 312) =====

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
        if ((_snd_soc_unregister_component >> 0x18 & 1) == 0) {
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
        if ((_snd_soc_unregister_component >> 0x18 & 1) == 0) {
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


// ===== sym.aw_cali_misc_switch_dev @ 0x080187ac (size 508) =====

char * sym.aw_cali_misc_switch_dev(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    piStack_78 = NULL;
    sscanf(arg3,"dev_sel:%s",&uStack_70);
    iVar6 = strnstr(&uStack_70,"pri_l",5);
    uVar14 = 0;
    if (iVar6 == 0) {
        iVar6 = strnstr(&uStack_70,"pri_r",5);
        if (iVar6 == 0) {
            iVar6 = strnstr(&uStack_70,"sec_l",5);
            if (iVar6 == 0) {
                iVar6 = strnstr(&uStack_70,"sec_r",5);
                if (iVar6 == 0) {
                    iVar6 = (*(arg2 + 0x40))[0xe];
                    if (iVar6 == 0) {
                        iVar6 = **(arg2 + 0x40);
                    }
                    uVar7 = 0x8006777;
code_r0x0801895c:
                    pcVar10 = "aw_cali_misc_switch_dev";
                    _printk(uVar7,iVar6,"aw_cali_misc_switch_dev",&uStack_70);
                    pcVar13 = 0xffffffea;
                    goto code_r0x08018970;
                }
                uVar14 = 3;
            }
            else {
                uVar14 = 2;
            }
        }
        else {
            uVar14 = 1;
        }
    }
    uVar5 = sym.aw882xx_dev_get_list_head(&piStack_78);
    piVar11 = piStack_78;
    if (uVar5 == 0) {
        do {
            piVar11 = *piVar11;
            if (piVar11 == piStack_78) {
                iVar6 = (*(arg2 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg2 + 0x40);
                }
                uVar7 = 0x8004b79;
                goto code_r0x0801895c;
            }
        } while (*(piVar11 + -0x3b4) != uVar14);
        *(arg1 + 0xd8) = piVar11 + -0x7c;
        iVar6 = piVar11[-0x74][0xe];
        if (iVar6 == 0) {
            iVar6 = *piVar11[-0x74];
        }
        pcVar10 = "aw_cali_misc_switch_dev";
        _segment.ehdr = uVar14;
        _printk(0x8002e73,iVar6,"aw_cali_misc_switch_dev",*(obj.ch_name + uVar14 * 8));
        pcVar13 = NULL;
    }
    else {
        pcVar13 = uVar5;
        iVar6 = (*(arg2 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg2 + 0x40);
        }
        pcVar10 = "aw_cali_misc_switch_dev";
        _printk(0x800915c,iVar6);
    }
code_r0x08018970:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_38) {
        auVar15 = __stack_chk_fail();
        uVar9 = auVar15._8_8_;
        *extraout_x18 = sym._copy_from_user;
        puVar1 = sp_el0;
        uVar3 = (uVar9 << 8) >> 8;
        if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar9, (*puVar1 >> 0x1a & 1) != 0)) {
            uVar12 = uVar9 & uVar3;
        }
        bVar4 = CARRY8(uVar12,pcVar10);
        pcVar13 = pcVar10 + uVar12;
        uVar12 = 0;
        if (!bVar4 || pcVar13 == NULL) {
            uVar12 = 0x7fffffffff;
        }
        if (bVar4) {
            pcVar13 = 0xffffffffffffffff;
        }
        pcVar8 = pcVar10;
        if (!CARRY8(pcVar13,~uVar12) && !CARRY8(pcVar13 + ~uVar12,bVar4) || pcVar13 == uVar12 + !bVar4) {
            if ((_snd_soc_unregister_component >> 0x18 & 1) == 0) {
                uVar12 = daif;
                if ((uVar12 & 0x80) == 0) {
                    uVar2 = daif;
                    daif = uVar2 | 0xc0;
                }
                uVar2 = ttbr1_el1;
                ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar1[1];
                InstructionSynchronizationBarrier();
                daif = uVar12;
            }
            if ((uVar9 & uVar3 & 0xffffff8000000000) != 0) {
                uVar9 = 0;
            }
            pcVar8 = __arch_copy_from_user(auVar15._0_8_,uVar9,pcVar10);
            if ((_snd_soc_unregister_component >> 0x18 & 1) == 0) {
                uVar3 = daif;
                if ((uVar3 & 0x80) == 0) {
                    uVar9 = daif;
                    daif = uVar9 | 0xc0;
                }
                uVar9 = ttbr1_el1;
                ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar9 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar3;
            }
        }
        if (pcVar8 != NULL) {
            memset(pcVar10 + (auVar15._0_8_ - pcVar8),0,pcVar8);
        }
        return pcVar8;
    }
    return pcVar13;
}


// ===== sym._copy_from_user @ 0x080189a8 (size 376) =====

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
        if ((_snd_soc_unregister_component >> 0x18 & 1) == 0) {
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
        if ((_snd_soc_unregister_component >> 0x18 & 1) == 0) {
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


// ===== sym.aw_cali_misc_ops @ 0x08018b5c (size 1916) =====

int sym.aw_cali_misc_ops(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    uint32_t *arg2_00;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    uint32_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar9;
    int64_t arg1_00;
    uint64_t uVar10;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar in_q1 [16];
    uchar auVar11 [16];
    uint32_t auStack_68 [4];
    int64_t iStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    if (arg2 < -0x3ff79eef) {
        if (arg2 + 0x3ffb9efc < 0xc) {
            uVar8 = 1 << (arg2 + 0x3ffb9efc & 0x1f);
            if ((uVar8 & 0xc15) == 0) {
                if ((uVar8 & 0x2a) != 0) goto code_r0x08018c70;
                goto code_r0x08018bd8;
            }
        }
        else {
code_r0x08018bd8:
            uVar8 = 0xc001610b;
code_r0x08018d38:
            if (arg2 != uVar8) {
code_r0x080190e4:
                iVar4 = (*(arg1 + 0x40))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1 + 0x40);
                }
                uVar5 = 0x800679d;
                pcVar7 = "aw_cali_misc_ops";
                goto code_r0x0801922c;
            }
        }
        uVar10 = arg2 >> 0x10 & 0x3fff;
        arg2_00 = __kmalloc(uVar10,0xdc0);
        if (arg2_00 != NULL) {
            __check_object_size(arg2_00,uVar10,0);
            iVar4 = sym._copy_from_user(arg2_00,arg3,uVar10);
            if (iVar4 == 0) {
                if (arg2 < -0x3ff39eff) {
                    if (arg2 + 0x3ffb9efc < 0xc) {
    //switch table (12 cases) at 0x8009acc
                        switch(*((arg2 + 0x3ffb9efc) * 4 + 0x8009acc) + 0x8018dac) {
                        case 0x8018dc0:
                            iVar3 = sym.aw882xx_dsp_noise_en(arg1,*arg2_00 != 0);
                            break;
                        case 0x8018f80:
                            sym.aw_cali_store_cali_re(arg1,*arg2_00);
                            iVar3 = 0;
                            break;
                        case 0x8018f98:
                            iVar3 = sym.aw882xx_dsp_write_vmax(arg1,arg2_00,uVar10);
                            break;
                        case 0x8018fb4:
                            iVar3 = sym.aw882xx_dsp_hmute_en(arg1,*arg2_00 != 0);
                            break;
                        case 0x8018fd4:
                            iVar3 = sym.aw882xx_dsp_cali_en(arg1,*arg2_00 != 0);
                            break;
                        case 0x8019194:
code_r0x08019194:
                            iVar4 = (*(arg1 + 0x40))[0xe];
                            if (iVar4 == 0) {
                                iVar4 = **(arg1 + 0x40);
                            }
                            _printk(0x800679d,iVar4,"aw_cali_misc_ops_write",arg2);
                            iVar3 = -0x16;
                        }
                    }
                    else {
                        if (arg2 != 0xc001610b) goto code_r0x08019194;
                        if (*(arg1 + 0x1f9) != '\0') {
                            if (*arg2_00 == '\0') {
                                uVar10 = *(arg1 + 0x1f8);
                            }
                            else {
                                uVar10 = 1;
                            }
                            sym.aw_cali_svc_run_mute(arg1,uVar10);
                        }
                        obj.soc_codec_dev_aw882xx = *arg2_00 != '\0';
                        iVar4 = (*(arg1 + 0x40))[0xe];
                        if (iVar4 == 0) {
                            iVar4 = **(arg1 + 0x40);
                        }
                        pcVar7 = "disable";
                        if (*arg2_00 != '\0') {
                            pcVar7 = "enable";
                        }
                        _printk(0x80082c7,iVar4,"aw_cali_svc_set_cali_status",pcVar7);
                        iVar3 = 0;
                    }
                }
                else if (arg2 == 0xc00c6101) {
                    iVar3 = sym.aw882xx_dsp_write_cali_cfg(arg1,arg2_00,0xc);
                }
                else if (arg2 == 0xc010610c) {
                    if ((*(arg2_00 + 2) == 0) || (*arg2_00 == 0)) {
                        iVar4 = (*(arg1 + 0x40))[0xe];
                        if (iVar4 == 0) {
                            iVar4 = **(arg1 + 0x40);
                        }
                        _printk(0x8005775,iVar4,"aw_cali_misc_params_ptr");
                        iVar3 = -0xe;
                    }
                    else {
                        iVar4 = __kmalloc(*arg2_00,0xdc0);
                        if (iVar4 == 0) {
                            iVar4 = (*(arg1 + 0x40))[0xe];
                            if (iVar4 == 0) {
                                iVar4 = **(arg1 + 0x40);
                            }
                            _printk(0x8006917,iVar4,"aw_cali_misc_params_ptr");
                            iVar3 = -0xc;
                        }
                        else {
                            uVar8 = *arg2_00;
                            if (uVar8 < 0) {
    //WARNING: Does not return
                                pcVar2 = SoftwareBreakpoint(0x800,0x80192d0);
                                (*pcVar2)();
                            }
                            iVar6 = *(arg2_00 + 2);
                            __check_object_size(iVar4,uVar8,0);
                            iVar6 = sym._copy_from_user(iVar4,iVar6,uVar8);
                            if (iVar6 == 0) {
                                iVar3 = sym.aw882xx_dsp_write_params(arg1);
                                if (iVar3 < 0) {
                                    iVar6 = (*(arg1 + 0x40))[0xe];
                                    if (iVar6 == 0) {
                                        iVar6 = **(arg1 + 0x40);
                                    }
                                    _printk(0x8003b35,iVar6,"aw_cali_misc_params_ptr");
                                    iVar3 = -0xe;
                                }
                            }
                            else {
                                iVar3 = -0xe;
                            }
                            kfree(iVar4);
                        }
                    }
                }
                else {
                    if (arg2 != 0xc960610a) goto code_r0x08019194;
                    iVar3 = sym.aw882xx_dsp_write_params(arg1);
                }
            }
            else {
                iVar3 = -0xe;
            }
code_r0x08018eec:
            kfree(arg2_00);
            goto code_r0x08018ef4;
        }
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        pcVar7 = "aw_cali_misc_ops_write";
    }
    else {
        if (-0x3fef9ef4 < arg2) {
            if (arg2 < -0x3fdf9ef0) {
                if ((arg2 == 0xc010610d) || (arg2 == 0xc0186103)) goto code_r0x08018c70;
                goto code_r0x080190e4;
            }
            if (arg2 != 0xc0206110) {
                uVar8 = 0xc960610a;
                goto code_r0x08018d38;
            }
            iStack_58 = 0;
            uStack_50 = 0;
            auStack_68[0] = 0;
            auStack_68[1] = 0;
            auStack_68[2] = 0;
            auStack_68[3] = 0;
            iVar4 = sym._copy_from_user(&stack0xffffffffffffff98,arg3,0x20);
            if (iVar4 != 0) {
                iVar3 = -0xe;
                goto code_r0x08018ef4;
            }
            if (auStack_68[2] == 0) {
                if (auStack_68[0] == 0) {
                    iVar3 = sym.aw_cali_misc_ops(arg1,auStack_68[1],iStack_58);
                    goto code_r0x08018ef4;
                }
                if (auStack_68[0] == 2) {
                    iVar3 = sym.aw_cali_misc_write_dsp(arg1,&stack0xffffffffffffff98);
                    goto code_r0x08018ef4;
                }
                if (auStack_68[0] == 1) {
                    iVar3 = sym.aw_cali_misc_read_dsp(arg1,&stack0xffffffffffffff98);
                    goto code_r0x08018ef4;
                }
                iVar4 = (*(arg1 + 0x40))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1 + 0x40);
                }
                uVar5 = 0x8007ee9;
                arg2 = auStack_68[0];
            }
            else {
                iVar4 = (*(arg1 + 0x40))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1 + 0x40);
                }
                uVar5 = 0x800636c;
                arg2 = auStack_68[2];
            }
            pcVar7 = "aw_cali_misc_ops_msg";
code_r0x0801922c:
            _printk(uVar5,iVar4,pcVar7,arg2);
            iVar3 = -0x16;
            goto code_r0x08018ef4;
        }
        if (-0x3ff39eff < arg2) {
            if (arg2 == 0xc00c6102) goto code_r0x08018c70;
            uVar8 = 0xc010610c;
            goto code_r0x08018d38;
        }
        if (arg2 != 0xc0086111) {
            uVar8 = 0xc00c6101;
            goto code_r0x08018d38;
        }
code_r0x08018c70:
        uVar10 = arg2 >> 0x10 & 0x3fff;
        arg2_00 = __kmalloc(uVar10,0xdc0);
        if (arg2_00 != NULL) {
            if (arg2 < -0x3ff79eef) {
                if (arg2 == 0xc0046105) {
                    iVar3 = sym.aw882xx_dsp_read_f0(arg1);
                }
                else if (arg2 == 0xc0046107) {
                    iVar3 = sym.aw882xx_dsp_read_cali_re(arg1,arg2_00);
                }
                else {
                    if (arg2 != 0xc0046109) goto code_r0x0801910c;
                    iVar3 = sym.aw882xx_dsp_read_vmax(arg1,noname_1,4);
                }
            }
            else if (arg2 < -0x3fef9ef3) {
                if (arg2 == 0xc0086111) {
                    uVar8 = *(arg1 + 0x34);
                    iVar3 = 0;
                    *arg2_00 = *(arg1 + 0x38);
                    arg2_00[1] = uVar8;
                }
                else if (arg2 == 0xc00c6102) {
                    iVar3 = sym.aw882xx_dsp_read_cali_cfg(arg1,noname_1,0xc);
                }
                else {
code_r0x0801910c:
                    iVar4 = (*(arg1 + 0x40))[0xe];
                    if (iVar4 == 0) {
                        iVar4 = **(arg1 + 0x40);
                    }
                    _printk(0x800679d,iVar4,"aw_cali_misc_ops_read",arg2);
                    iVar3 = -0x16;
                }
            }
            else if (arg2 == 0xc010610d) {
                iVar3 = sym.aw882xx_dsp_read_f0_q(arg1,arg2_00,arg2_00 + 1);
            }
            else {
                if (arg2 != 0xc0186103) goto code_r0x0801910c;
                iVar3 = sym.aw882xx_dsp_read_cali_data(arg1,noname_1,0x18);
            }
            auVar11 = __check_object_size(arg2_00,uVar10,1);
            iVar4 = sym._copy_to_user(arg3,auVar11,uVar10);
            if (iVar4 != 0) {
                iVar3 = -0xe;
            }
            goto code_r0x08018eec;
        }
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        pcVar7 = "aw_cali_misc_ops_read";
    }
    _printk(0x8008e81,iVar4,pcVar7);
    iVar3 = -0xc;
code_r0x08018ef4:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return iVar3;
    }
    auVar11 = __stack_chk_fail();
    iVar6 = auVar11._8_8_;
    iVar4 = auVar11._0_8_;
    *extraout_x18 = sym.aw_cali_misc_read_dsp;
    uVar1 = *(iVar6 + 0xc);
    iVar9 = uVar1;
    arg1_00 = *(iVar6 + 0x10);
    uVar8 = *(iVar6 + 4);
    iVar6 = __kmalloc(iVar9,0xdc0);
    if (iVar6 == 0) {
        iVar6 = (*(iVar4 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(iVar4 + 0x40);
        }
        _printk(0x8008e81,iVar6,"aw_cali_misc_read_dsp");
        iVar3 = -0xc;
    }
    else {
        iVar3 = sym.aw882xx_dsp_read_msg(iVar4,uVar8,in_q1,uVar1);
        if (iVar3 == 0) {
            if (uVar1 < 0) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x800,0x80193e8);
                (*pcVar2)();
            }
            auVar11 = __check_object_size(iVar6,iVar9,1);
            iVar4 = sym._copy_to_user(arg1_00,auVar11,iVar9);
            iVar3 = 0;
            if (iVar4 != 0) {
                iVar3 = -0xe;
            }
        }
        else {
            iVar9 = (*(iVar4 + 0x40))[0xe];
            if (iVar9 == 0) {
                iVar9 = **(iVar4 + 0x40);
            }
            _printk(0x8007044,iVar9,"aw_cali_misc_read_dsp");
        }
        kfree(iVar6);
    }
    return iVar3;
}


// ===== sym.aw_cali_misc_read_dsp @ 0x080192d8 (size 272) =====

int sym.aw_cali_misc_read_dsp(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar in_q1 [16];
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0xc);
    iVar6 = uVar2;
    arg1_00 = *(arg2 + 0x10);
    uVar1 = *(arg2 + 4);
    iVar5 = __kmalloc(iVar6,0xdc0);
    if (iVar5 == 0) {
        iVar5 = (*(arg1 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        _printk(0x8008e81,iVar5,"aw_cali_misc_read_dsp");
        iVar4 = -0xc;
    }
    else {
        iVar4 = sym.aw882xx_dsp_read_msg(arg1,uVar1,in_q1,uVar2);
        if (iVar4 == 0) {
            if (uVar2 < 0) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x800,0x80193e8);
                (*pcVar3)();
            }
            noname_1 = __check_object_size(iVar5,iVar6,1);
            iVar6 = sym._copy_to_user(arg1_00,noname_1,iVar6);
            iVar4 = 0;
            if (iVar6 != 0) {
                iVar4 = -0xe;
            }
        }
        else {
            iVar6 = (*(arg1 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(arg1 + 0x40);
            }
            _printk(0x8007044,iVar6,"aw_cali_misc_read_dsp");
        }
        kfree(iVar5);
    }
    return iVar4;
}


// ===== sym.aw_cali_misc_write_dsp @ 0x080193ec (size 304) =====

int sym.aw_cali_misc_write_dsp(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    int64_t arg2_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg2 + 0xc);
    iVar6 = uVar2;
    arg2_00 = *(arg2 + 0x10);
    uVar1 = *(arg2 + 4);
    iVar5 = __kmalloc(iVar6,0xdc0);
    if (iVar5 == 0) {
        iVar5 = (*(arg1 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(arg1 + 0x40);
        }
        _printk(0x8008ea4,iVar5,"aw_cali_misc_write_dsp");
        iVar4 = -0xc;
    }
    else {
        if (uVar2 < 0) {
    //WARNING: Does not return
            pcVar3 = SoftwareBreakpoint(0x800,0x80194f0);
            (*pcVar3)();
        }
        __check_object_size(iVar5,iVar6,0);
        iVar6 = sym._copy_from_user(iVar5,arg2_00,iVar6);
        if (iVar6 == 0) {
            iVar4 = sym.aw882xx_dsp_write_msg(arg1,uVar1,iVar5,uVar2);
            if (iVar4 != 0) {
                iVar6 = (*(arg1 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                _printk(0x8004e55,iVar6,"aw_cali_misc_write_dsp");
            }
        }
        else {
            iVar6 = (*(arg1 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(arg1 + 0x40);
            }
            _printk(0x80026ae,iVar6,"aw_cali_misc_write_dsp");
            iVar4 = -0xe;
        }
        kfree(iVar5);
    }
    return iVar4;
}


// ===== sym.aw882xx_dev_get_ext_dsp_prof_write @ 0x0801951c (size 20) =====

code * sym.aw882xx_dev_get_ext_dsp_prof_write(void)

{
    return obj.ext_dsp_prof_write;
}


// ===== sym.aw882xx_dev_get_ext_dsp_prof_wr_lock @ 0x08019530 (size 20) =====

code * sym.aw882xx_dev_get_ext_dsp_prof_wr_lock(void)

{
    return obj.g_ext_dsp_prof_wr_lock.llvm.1666369098069863835;
}


// ===== sym.aw882xx_dev_get_int_status @ 0x08019544 (size 280) =====

uint64_t sym.aw882xx_dev_get_int_status(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar6;
    code *pcVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    pcVar7 = *(arg1 + 0x370);
    uStack_3c = 0;
    if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar7,0x8001660);
    }
    uVar1 = (*pcVar7)(arg1,*(arg1 + 0x94),&uStack_3c);
    uVar8 = uVar1;
    if (uVar1 < 0) {
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        _printk(0x8002e99,iVar4,"aw882xx_dev_get_int_status",uVar8);
    }
    else {
        *arg2 = uStack_3c;
    }
    iVar4 = (*(arg1 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + 0x40);
    }
    _printk(0x8005406,iVar4,"aw882xx_dev_get_int_status",*arg2);
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dev_clear_int_status;
    pcStack_68 = sym.aw882xx_dev_clear_int_status;
    iVar4 = sp_el0;
    iStack_78 = *(iVar4 + 0x5e0);
    pcVar7 = *(iVar3 + 0x370);
    uStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    iStack_60 = arg1;
    uStack_50 = uVar8;
    iStack_48 = arg2;
    if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar7,0x8001660);
    }
    iVar2 = (*pcVar7)(iVar3,*(iVar3 + 0x94),&uStack_7c);
    uVar1 = uStack_7c;
    if (iVar2 < 0) {
        iVar4 = (*(iVar3 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x40);
        }
        _printk(0x8002e99,iVar4,"aw882xx_dev_get_int_status",iVar2);
        uVar1 = 0;
    }
    iVar4 = (*(iVar3 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + 0x40);
    }
    _printk(0x8005406,iVar4,"aw882xx_dev_get_int_status",uVar1 & 0xffff);
    pcVar7 = *(iVar3 + 0x370);
    uStack_7c = 0;
    if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar7,0x8001660);
    }
    iVar2 = (*pcVar7)(iVar3,*(iVar3 + 0x94),&uStack_7c);
    uVar6 = uStack_7c;
    if (iVar2 < 0) {
        iVar4 = (*(iVar3 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x40);
        }
        _printk(0x8002e99,iVar4,"aw882xx_dev_get_int_status",iVar2);
        uVar6 = uVar1;
    }
    iVar4 = (*(iVar3 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + 0x40);
    }
    _printk(0x8005406,iVar4,"aw882xx_dev_get_int_status",uVar6 & 0xffff);
    iVar4 = (*(iVar3 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(iVar3 + 0x40);
    }
    uVar8 = _printk(0x8004217,iVar4,"aw882xx_dev_clear_int_status");
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_78) {
        auVar9 = __stack_chk_fail();
        iVar4 = auVar9._0_8_;
        *extraout_x18_00 = sym.aw882xx_dev_set_intmask;
        pcVar7 = *(iVar4 + 0x368);
        if ((auVar9._8_8_ & 1) == 0) {
            if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                __cfi_slowpath_diag(0x72f794085f5af073,pcVar7,0x80016a0);
            }
            puVar5 = iVar4 + 0x98;
        }
        else {
            if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                __cfi_slowpath_diag(0x72f794085f5af073,pcVar7,0x8001680);
            }
            puVar5 = iVar4 + 0x9c;
        }
        uVar8 = (*pcVar7)(iVar4,*(iVar4 + 0x90),*puVar5);
        iVar3 = (*(iVar4 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(iVar4 + 0x40);
        }
        _printk(0x8004217,iVar3,"aw882xx_dev_set_intmask");
        return uVar8 & 0xffffffff;
    }
    return uVar8;
}


// ===== sym.aw882xx_dev_clear_int_status @ 0x0801965c (size 480) =====

uint64_t sym.aw882xx_dev_clear_int_status(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    code *pcVar5;
    uint *puVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    pcVar5 = *(arg1 + 0x370);
    uStack_3c = 0;
    if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar5,0x8001660);
    }
    iVar1 = (*pcVar5)(arg1,*(arg1 + 0x94),&uStack_3c);
    uVar7 = uStack_3c;
    if (iVar1 < 0) {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8002e99,iVar3,"aw882xx_dev_get_int_status",iVar1);
        uVar7 = 0;
    }
    iVar3 = (*(arg1 + 0x40))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x40);
    }
    _printk(0x8005406,iVar3,"aw882xx_dev_get_int_status",uVar7 & 0xffff);
    pcVar5 = *(arg1 + 0x370);
    uStack_3c = 0;
    if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar5,0x8001660);
    }
    iVar1 = (*pcVar5)(arg1,*(arg1 + 0x94),&uStack_3c);
    uVar8 = uStack_3c;
    if (iVar1 < 0) {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8002e99,iVar3,"aw882xx_dev_get_int_status",iVar1);
        uVar8 = uVar7;
    }
    iVar3 = (*(arg1 + 0x40))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x40);
    }
    _printk(0x8005406,iVar3,"aw882xx_dev_get_int_status",uVar8 & 0xffff);
    iVar3 = (*(arg1 + 0x40))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x40);
    }
    uVar2 = _printk(0x8004217,iVar3,"aw882xx_dev_clear_int_status");
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_38) {
        auVar9 = __stack_chk_fail();
        iVar3 = auVar9._0_8_;
        *extraout_x18 = sym.aw882xx_dev_set_intmask;
        pcVar5 = *(iVar3 + 0x368);
        if ((auVar9._8_8_ & 1) == 0) {
            if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                __cfi_slowpath_diag(0x72f794085f5af073,pcVar5,0x80016a0);
            }
            puVar6 = iVar3 + 0x98;
        }
        else {
            if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                __cfi_slowpath_diag(0x72f794085f5af073,pcVar5,0x8001680);
            }
            puVar6 = iVar3 + 0x9c;
        }
        uVar2 = (*pcVar5)(iVar3,*(iVar3 + 0x90),*puVar6);
        iVar4 = (*(iVar3 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x40);
        }
        _printk(0x8004217,iVar4,"aw882xx_dev_set_intmask");
        return uVar2 & 0xffffffff;
    }
    return uVar2;
}


// ===== sym.aw882xx_dev_set_intmask @ 0x0801983c (size 232) =====

uint sym.aw882xx_dev_set_intmask(int64_t arg1)

{
    uint uVar1;
    uint64_t in_x1;
    int64_t iVar2;
    code *pcVar3;
    uint *puVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(arg1 + 0x368);
    if ((in_x1 & 1) == 0) {
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
            __cfi_slowpath_diag(0x72f794085f5af073,pcVar3,0x80016a0);
        }
        puVar4 = arg1 + 0x98;
    }
    else {
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
            __cfi_slowpath_diag(0x72f794085f5af073,pcVar3,0x8001680);
        }
        puVar4 = arg1 + 0x9c;
    }
    uVar1 = (*pcVar3)(arg1,*(arg1 + 0x90),*puVar4);
    iVar2 = (*(arg1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x40);
    }
    _printk(0x8004217,iVar2,"aw882xx_dev_set_intmask");
    return uVar1;
}


// ===== sym.aw882xx_dev_get_fade_vol_step @ 0x08019924 (size 16) =====

uint sym.aw882xx_dev_get_fade_vol_step(int64_t arg1)

{
    return *(arg1 + 0x30);
}


// ===== sym.aw882xx_dev_set_fade_vol_step @ 0x08019934 (size 16) =====

void sym.aw882xx_dev_set_fade_vol_step(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x30) = arg2;
    return;
}


// ===== sym.aw882xx_dev_get_fade_time @ 0x08019944 (size 44) =====

void sym.aw882xx_dev_get_fade_time(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    
    pcVar1 = obj.g_fade_in_time.llvm.1666369098069863835;
    if ((arg2 & 1) == 0) {
        pcVar1 = obj.g_fade_out_time.llvm.1666369098069863835;
    }
    *arg1 = *pcVar1;
    return;
}


// ===== sym.aw882xx_dev_set_fade_time @ 0x08019970 (size 40) =====

void sym.aw882xx_dev_set_fade_time(int64_t arg1,uint32_t arg2)

{
    code *pcVar1;
    
    pcVar1 = obj.g_fade_in_time.llvm.1666369098069863835;
    if ((arg2 & 1) == 0) {
        pcVar1 = obj.g_fade_out_time.llvm.1666369098069863835;
    }
    *pcVar1 = arg1;
    return;
}


// ===== sym.aw882xx_dev_deinit @ 0x08019998 (size 68) =====

void sym.aw882xx_dev_deinit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (*(arg1 + 0x1e0) != 0)) {
        kfree();
        *(arg1 + 0x1e0) = 0;
        *(arg1 + 0x1d0) = 0;
    }
    return;
}


// ===== sym.aw882xx_dev_get_cali_re @ 0x080199dc (size 36) =====

void sym.aw882xx_dev_get_cali_re(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_dsp_read_cali_re(arg1,arg2);
    return;
}


// ===== sym.aw882xx_dev_dc_status @ 0x08019a00 (size 36) =====

void sym.aw882xx_dev_dc_status(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_dsp_get_dc_status(arg1);
    return;
}


// ===== sym.aw882xx_dev_status @ 0x08019a24 (size 16) =====

uint sym.aw882xx_dev_status(int64_t arg1)

{
    return *(arg1 + 4);
}


// ===== sym.aw882xx_dev_init_cali_re @ 0x08019a34 (size 244) =====

ulong sym.aw882xx_dev_init_cali_re(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x1e9) == '\0') {
        iVar1 = (*(arg1 + 0x40))[0xe];
        if (iVar1 == 0) {
            iVar1 = **(arg1 + 0x40);
        }
        _printk(0x8002ecc,iVar1,"aw882xx_dev_init_cali_re");
    }
    else if (*(arg1 + 0x1ec) == 0) {
        piVar2 = *(arg1 + 0x40);
        iVar1 = piVar2[0xe];
        if (*(arg1 + 0x38) != 0) {
            if (iVar1 == 0) {
                iVar1 = *piVar2;
            }
            _printk(0x8006956,iVar1,"aw882xx_dev_init_cali_re",0);
            *(arg1 + 0x1ec) = 0;
            if (*(arg1 + 0x1f9) != '\0') {
                *(arg1 + 0x1f8) = 0xff;
                return 0xffffffea;
            }
            return 0xffffffea;
        }
        if (iVar1 == 0) {
            iVar1 = *piVar2;
        }
        _printk(0x8005a8f,iVar1,"aw882xx_dev_init_cali_re",0);
        if (*(arg1 + 0x1f9) != '\0') {
            *(arg1 + 0x1f8) = 1;
            return 0;
        }
    }
    return 0;
}


// ===== sym.aw882xx_device_irq_reinit @ 0x08019b28 (size 40) =====

uint32_t sym.aw882xx_device_irq_reinit(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.aw_dev_reg_fw_update(arg1);
    return uVar1 & uVar1 >> 0x1f;
}


// ===== sym.aw_dev_reg_fw_update @ 0x08019b50 (size 2324) =====

int sym.aw_dev_reg_fw_update(int64_t arg1)

{
    char cVar1;
    int16_t iVar2;
    int16_t iVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    ulong *in_x18;
    code *pcVar13;
    char *unaff_x22;
    uint64_t uVar14;
    int64_t iVar15;
    int iVar16;
    ulong unaff_x30;
    int64_t iStack_80;
    uint uStack_74;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_74 = 0;
    uStack_70 = 0;
    iVar6 = sym.aw882xx_dev_get_prof_name(arg1,*(arg1 + 0x29));
    if (iVar6 == 0) {
        iVar6 = (*(arg1 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg1 + 0x40);
        }
        _printk(0x8003ef5,iVar6,"aw_dev_reg_fw_update");
    }
    else {
        puVar7 = sym.aw882xx_dev_get_prof_data(arg1,*(arg1 + 0x29),0);
        if (puVar7 != NULL) {
            uVar11 = *puVar7;
            if (1 < uVar11) {
                uVar14 = 0;
                iVar15 = *(puVar7 + 2);
                unaff_x22 = "aw_dev_reg_fw_update";
                do {
                    uVar10 = -(uVar14 >> 0x1f) & 0xfffffffe00000000 | uVar14 << 1;
                    iVar2 = *(iVar15 + uVar10);
                    iVar3 = *(iVar15 + (uVar10 | 2));
                    uVar12 = iVar3;
                    iVar5 = iVar2;
                    if (*(arg1 + 0x90) == iVar5) {
                        *(arg1 + 0x9c) = iVar3;
                        uVar12 = *(arg1 + 0x98);
                    }
                    iVar16 = iVar2;
                    if (*(arg1 + 0x10) != 0) {
                        if (*(arg1 + 0x168) == iVar5) {
                            *(arg1 + 0x174) = uVar12 & (*(arg1 + 0x16c) ^ 0xffffffff);
                        }
                        if (*(arg1 + 0x178) == iVar16) {
                            *(arg1 + 0x188) = uVar12 & (*(arg1 + 0x17c) ^ 0xffffffff);
                        }
                    }
                    if (*(arg1 + 0xc0) == iVar16) {
                        *(arg1 + 0x24) = uVar12 & (*(arg1 + 0xc4) ^ 0xffffffff);
                        iVar8 = (*(arg1 + 0x40))[0xe];
                        if (iVar8 == 0) {
                            iVar8 = **(arg1 + 0x40);
                        }
                        _printk(0x8008324,iVar8,"aw_dev_reg_fw_update");
                        pcVar13 = *(arg1 + 0x370);
                        if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x8001760);
                        }
                        (*pcVar13)(arg1,iVar16,&uStack_70);
                        uStack_70 = uStack_70 & (*(arg1 + 0xc4) ^ 0xffffffff);
                        uVar12 = uStack_70 | *(arg1 + 0xc4) & uVar12;
                    }
                    if (*(arg1 + 0x354) == iVar16) {
                        *(arg1 + 0x1c) = (uVar12 & (*(arg1 + 0x358) ^ 0xffffffff)) == *(arg1 + 0x360);
                        iVar8 = (*(arg1 + 0x40))[0xe];
                        if (iVar8 == 0) {
                            iVar8 = **(arg1 + 0x40);
                        }
                        _printk(0x8005075,iVar8,"aw_dev_reg_fw_update");
                    }
                    if (*(arg1 + 0xa0) == iVar5) {
                        *(arg1 + 0xc) = (uVar12 & (*(arg1 + 0xa4) ^ 0xffffffff)) != *(arg1 + 0xac);
                    }
                    if (*(arg1 + 0xb0) == iVar16) {
                        pcVar13 = *(arg1 + 0x370);
                        if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x8001780);
                        }
                        (*pcVar13)(arg1,iVar2,&uStack_70);
                        uStack_70 = uStack_70 & (*(arg1 + 0xb4) ^ 0xffffffff);
                        uVar12 = uStack_70 | *(arg1 + 0xb4) & uVar12;
                    }
                    if (*(arg1 + 0xd0) == iVar16) {
                        *(arg1 + 0x20) = uVar12 & (*(arg1 + 0xd4) ^ 0xffffffff);
                        iVar8 = (*(arg1 + 0x40))[0xe];
                        if (iVar8 == 0) {
                            iVar8 = **(arg1 + 0x40);
                        }
                        _printk(0x80033cc,iVar8,"aw_dev_reg_fw_update");
                        pcVar13 = *(arg1 + 0x370);
                        if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x80017a0);
                        }
                        (*pcVar13)(arg1,iVar2,&uStack_70);
                        uStack_70 = uStack_70 & (*(arg1 + 0xd4) ^ 0xffffffff);
                        uVar12 = uStack_70 | *(arg1 + 0xd4) & uVar12;
                        cVar1 = *(arg1 + 0x1e9);
                    }
                    else {
                        cVar1 = *(arg1 + 0x1e9);
                    }
                    if ((cVar1 == '\0') && (*(arg1 + 0xf0) == iVar16)) {
                        *(arg1 + 0x100) = uVar12 & (*(arg1 + 0xf4) ^ 0xffffffff);
                        iVar8 = (*(arg1 + 0x40))[0xe];
                        if (iVar8 == 0) {
                            iVar8 = **(arg1 + 0x40);
                        }
                        _printk(0x80063e6,iVar8,"aw_dev_reg_fw_update");
                    }
                    if (*(arg1 + 0x14c) != iVar16) {
                        iVar8 = (*(arg1 + 0x40))[0xe];
                        if (iVar8 == 0) {
                            iVar8 = **(arg1 + 0x40);
                        }
                        _printk(0x8004bb0,iVar8,"aw_dev_reg_fw_update",iVar2,uVar12 & 0xffff);
                        pcVar13 = *(arg1 + 0x368);
                        if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                            __cfi_slowpath_diag(0x72f794085f5af073,pcVar13,0x80017c0);
                        }
                        iVar5 = (*pcVar13)(arg1,iVar16,uVar12);
                        if (iVar5 < 0) break;
                    }
                    uVar12 = uVar14 + 2;
                    uVar14 = uVar12;
                } while (uVar12 < uVar11 >> 1);
            }
            sym.aw882xx_spin_set_record_val(arg1);
            iVar5 = *(arg1 + 0x104);
            iStack_80 = iVar6;
            if ((iVar5 == 0xff) || (*(arg1 + 0x14c) == 0xff)) {
                iVar6 = (*(arg1 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(arg1 + 0x40);
                }
                _printk(0x80026d2,iVar6,"aw_dev_set_vcalb");
                iVar5 = 0;
                goto code_r0x08019c74;
            }
            uStack_6c = 0;
            pcVar13 = *(arg1 + 0x370);
            if (*(arg1 + 0x110) == 0xff) {
                if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                    __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x8001840);
                    iVar5 = *(arg1 + 0x104);
                }
                iVar5 = (*pcVar13)(arg1,iVar5,&uStack_6c);
                uVar11 = uStack_6c & 0xffff;
                uVar12 = *(arg1 + 0x108) ^ 0xffff;
code_r0x0801a114:
                uVar11 = uVar11 & uVar12;
            }
            else {
                if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                    __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x8001860);
                    iVar5 = *(arg1 + 0x104);
                }
                (*pcVar13)(arg1,iVar5,&uStack_6c);
                uVar12 = uStack_6c;
                uVar11 = *(arg1 + 0x108);
                pcVar13 = *(arg1 + 0x370);
                unaff_x22 = ~uVar11;
                if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                    __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x8001880);
                }
                iVar5 = (*pcVar13)(arg1,*(arg1 + 0x110),&uStack_6c);
                uVar12 = (uVar12 & 0xffff & ~uVar11) >> (*(arg1 + 0x10c) & 0x1f);
                uVar11 = (uStack_6c & 0xffff & (*(arg1 + 0x114) ^ 0xffff)) >> (*(arg1 + 0x118) & 0x1f);
                if (*(arg1 + 0x1c) != 1) goto code_r0x0801a114;
                uVar11 = uVar11 | uVar12;
            }
            if ((uVar11 & (*(arg1 + 0x11c) ^ 0xffffffff)) != 0) {
                uVar11 = uVar11 | *(arg1 + 0x120) ^ 0xffffffff;
            }
            if (-1 < iVar5) {
                uStack_6c = 0;
                pcVar13 = *(arg1 + 0x370);
                if (*(arg1 + 0x134) == 0xff) {
                    if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x80018a0);
                    }
                    iVar5 = (*pcVar13)(arg1,*(arg1 + 0x128),&uStack_6c);
                    uVar12 = uStack_6c & 0xffff;
                    uVar9 = *(arg1 + 300) ^ 0xffff;
code_r0x0801a1fc:
                    uVar12 = uVar12 & uVar9;
                }
                else {
                    if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x80018c0);
                    }
                    (*pcVar13)(arg1,*(arg1 + 0x128),&uStack_6c);
                    uVar9 = uStack_6c;
                    uVar12 = *(arg1 + 300);
                    pcVar13 = *(arg1 + 0x370);
                    unaff_x22 = uStack_6c;
                    if (pcVar13 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar13,0x80018e0);
                    }
                    iVar5 = (*pcVar13)(arg1,*(arg1 + 0x134),&uStack_6c);
                    uVar9 = (uVar9 & 0xffff & ~uVar12) >> (*(arg1 + 0x130) & 0x1f);
                    uVar12 = (uStack_6c & 0xffff & (*(arg1 + 0x138) ^ 0xffff)) >> (*(arg1 + 0x13c) & 0x1f);
                    if (*(arg1 + 0x1c) != 1) goto code_r0x0801a1fc;
                    uVar12 = uVar12 | uVar9;
                }
                if ((uVar12 & (*(arg1 + 0x140) ^ 0xffffffff)) != 0) {
                    uVar12 = uVar12 | *(arg1 + 0x144) ^ 0xffffffff;
                }
                if (-1 < iVar5) {
                    iVar5 = *(arg1 + 0x150) + *(arg1 + 0x148) * uVar12;
                    if (iVar5 == 0) {
                        iVar6 = (*(arg1 + 0x40))[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **(arg1 + 0x40);
                        }
                        _printk(0x8008ab1,iVar6,"aw_dev_set_vcalb");
                        iVar5 = -0x16;
                    }
                    else {
                        iVar16 = *(arg1 + 0x150) + *(arg1 + 0x124) * uVar11;
                        iVar4 = 0;
                        if (iVar5 != 0) {
                            iVar4 = (*(arg1 + 0x154) * iVar16) / iVar5;
                        }
                        iVar6 = (*(arg1 + 0x40))[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **(arg1 + 0x40);
                        }
                        _printk(0x8004bdc,iVar6,"aw_dev_set_vcalb",iVar16,iVar5,iVar4,iVar4);
                        unaff_x22 = *(arg1 + 0x368);
                        if (unaff_x22 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                            __cfi_slowpath_diag(0x72f794085f5af073,unaff_x22,0x8001820);
                        }
                        iVar5 = (*unaff_x22)(arg1,*(arg1 + 0x14c),iVar4);
                        iVar6 = (*(arg1 + 0x40))[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **(arg1 + 0x40);
                        }
                        _printk(0x8004217,iVar6,"aw_dev_set_vcalb");
                        if (-1 < iVar5) {
code_r0x08019c74:
                            unaff_x22 = *(arg1 + 0x388);
                            if (6 < (unaff_x22 + -0x800b9c0 >> 3 | unaff_x22 << 0x3d)) goto code_r0x0801a318;
                            goto code_r0x08019c90;
                        }
                    }
                }
            }
            iVar6 = (*(arg1 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(arg1 + 0x40);
            }
            _printk(0x8002f1f,iVar6,"aw_dev_reg_fw_update");
            goto code_r0x08019bb4;
        }
    }
    iVar5 = -0x16;
code_r0x08019bb4:
    while (iVar6 = sp_el0, *(iVar6 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
code_r0x0801a318:
        __cfi_slowpath_diag(0xcb68aa27346a4fae,unaff_x22,0x80017e0);
code_r0x08019c90:
        (*unaff_x22)(arg1,&uStack_74);
        unaff_x22 = *(arg1 + 0x380);
        *(arg1 + 0x1c8) = uStack_74;
        if (6 < (unaff_x22 + -0x800ba00 >> 3 | unaff_x22 << 0x3d)) {
            __cfi_slowpath_diag(0x2060516a6466f902,unaff_x22,0x8001800);
        }
        (*unaff_x22)(arg1,*(arg1 + 0x1cc));
        iVar6 = (*(arg1 + 0x40))[0xe];
        if (iVar6 == 0) {
            iVar6 = **(arg1 + 0x40);
        }
        _printk(0x80091c2,iVar6,"aw_dev_reg_fw_update",iStack_80);
    }
    return iVar5;
}


// ===== sym.aw882xx_device_init @ 0x0801a464 (size 440) =====

ulong sym.aw882xx_device_init(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8002efd,iVar3,"aw882xx_device_init");
        uVar2 = 0xfffffff4;
    }
    else {
        iVar1 = sym.aw882xx_dev_parse_acf(arg1,arg2);
        if (iVar1 == 0) {
            pcVar4 = *(arg1 + 0x368);
            if (pcVar4 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                __cfi_slowpath_diag(0x72f794085f5af073,pcVar4,0x8001900);
            }
            (*pcVar4)(arg1,*(arg1 + 0x308),*(arg1 + 0x30c));
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8008acf,iVar3,"aw_dev_soft_reset");
            *(arg1 + 0x28) = 0;
            uVar2 = sym.aw_dev_reg_fw_update(arg1);
            if (-1 < uVar2) {
                pcVar4 = *(arg1 + 0x3d8);
                if (pcVar4 != NULL) {
                    if (pcVar4 != sym.__typeid__ZTSFiP9aw_deviceE_global_addr) {
                        __cfi_slowpath_diag(0xf35b9e9e5e946443,pcVar4,0x80016c0);
                    }
                    uVar2 = (*pcVar4)(arg1);
                    if (uVar2 != 0) {
                        return uVar2;
                    }
                }
                *(arg1 + 4) = 1;
                sym.aw882xx_device_stop(arg1);
                iVar3 = (*(arg1 + 0x40))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x40);
                }
                _printk(0x800779f,iVar3,"aw882xx_device_init");
                uVar2 = 0;
            }
        }
        else {
            if ((arg1 != 0) && (*(arg1 + 0x1e0) != 0)) {
                kfree();
                *(arg1 + 0x1e0) = 0;
                *(arg1 + 0x1d0) = 0;
            }
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8006980,iVar3,"aw882xx_device_init");
            uVar2 = 0xffffffea;
        }
    }
    return uVar2;
}


// ===== sym.aw882xx_device_stop @ 0x0801a61c (size 968) =====

ulong sym.aw882xx_device_stop(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = (*(arg1 + 0x40))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x40);
    }
    _printk(0x8005ab4,iVar3,"aw882xx_device_stop");
    if (*(arg1 + 4) == 0) {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8007f14;
    }
    else {
        *(arg1 + 4) = 0;
        sym.aw882xx_monitor_stop(arg1 + 0x200);
        sym.aw882xx_dev_clear_int_status(arg1);
        pcVar4 = *(arg1 + 0x368);
        if (pcVar4 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
            __cfi_slowpath_diag(0x72f794085f5af073,pcVar4,0x80016a0);
        }
        (*pcVar4)(arg1,*(arg1 + 0x90),*(arg1 + 0x98));
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8004217,iVar3,"aw882xx_dev_set_intmask");
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8006425,iVar3,"aw_dev_uls_hmute",1);
        iVar1 = *(arg1 + 0xe0);
        if (iVar1 != 0xff) {
            pcVar4 = *(arg1 + 0x378);
            if (pcVar4 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar4,0x8001b40);
                iVar1 = *(arg1 + 0xe0);
            }
            (*pcVar4)(arg1,iVar1,*(arg1 + 0xe4),*(arg1 + 0xe8));
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8004217,iVar3,"aw_dev_uls_hmute");
        }
        sym.aw_dev_mute(arg1,1);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8005f0a,iVar3,"aw_dev_i2s_enable",0);
        iVar1 = *(arg1 + 0xf0);
        if (iVar1 == 0xff) {
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8009198,iVar3,"aw_dev_i2s_enable");
        }
        else {
            pcVar4 = *(arg1 + 0x378);
            if (pcVar4 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar4,0x8001720);
                iVar1 = *(arg1 + 0xf0);
            }
            (*pcVar4)(arg1,iVar1,*(arg1 + 0xf4),*(arg1 + 0xfc));
        }
        usleep_range_state(1000,0x44c,2);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x80050aa,iVar3,"aw_dev_amppd",1);
        pcVar4 = *(arg1 + 0x378);
        if (pcVar4 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar4,0x8001a80);
        }
        (*pcVar4)(arg1,*(arg1 + 0xc0),*(arg1 + 0xc4),*(arg1 + 200));
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8004217,iVar3,"aw_dev_amppd");
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8005acd,iVar3,"aw_dev_pwd",1);
        pcVar4 = *(arg1 + 0x378);
        if (pcVar4 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar4,0x8001960);
        }
        (*pcVar4)(arg1,*(arg1 + 0xb0),*(arg1 + 0xb4),*(arg1 + 0xb8));
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8004217,iVar3,"aw_dev_pwd");
        iVar3 = (*(arg1 + 0x40))[0xe];
        obj.ext_dsp_prof_write = 0x0;
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8004217;
    }
    _printk(uVar2,iVar3,"aw882xx_device_stop");
    return 0;
}


// ===== sym.aw882xx_dev_reg_update @ 0x0801a9e4 (size 248) =====

ulong sym.aw882xx_dev_reg_update(int64_t arg1)

{
    ulong uVar1;
    uint64_t in_x1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_x1 & 1) == 0) {
        if (*(arg1 + 0x28) == *(arg1 + 0x29)) goto code_r0x0801aa30;
    }
    else {
        pcVar3 = *(arg1 + 0x368);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
            __cfi_slowpath_diag(0x72f794085f5af073,pcVar3,0x8001900);
        }
        (*pcVar3)(arg1,*(arg1 + 0x308),*(arg1 + 0x30c));
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008acf,iVar2,"aw_dev_soft_reset");
    }
    uVar1 = sym.aw_dev_reg_fw_update(arg1);
    if (uVar1 < 0) {
        return uVar1;
    }
code_r0x0801aa30:
    *(arg1 + 0x28) = *(arg1 + 0x29);
    iVar2 = (*(arg1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x40);
    }
    _printk(0x8004217,iVar2,"aw882xx_dev_reg_update");
    return 0;
}


// ===== sym.aw882xx_dev_prof_update @ 0x0801aadc (size 256) =====

int sym.aw882xx_dev_prof_update(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 4) == 1) {
        sym.aw882xx_device_stop(arg1);
        iVar1 = sym.aw882xx_dev_reg_update(arg1);
        if (iVar1 == 0) {
            iVar1 = sym.aw882xx_device_start(arg1);
            if (iVar1 == 0) goto code_r0x0801ab70;
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            uVar2 = 0x8007b74;
        }
        else {
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            uVar2 = 0x8007b4f;
        }
        _printk(uVar2,iVar3,"aw882xx_dev_prof_update");
    }
    else {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8008707,iVar3,"aw882xx_dev_prof_update",*(arg1 + 0x29));
code_r0x0801ab70:
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x80021f6,iVar3,"aw882xx_dev_prof_update");
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.aw882xx_device_start @ 0x0801abdc (size 3048) =====

void sym.aw882xx_device_start(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t *piVar5;
    ulong *in_x18;
    code *unaff_x20;
    code *pcVar6;
    code *unaff_x24;
    ulong unaff_x30;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    iVar3 = (*(arg1 + 0x40))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x40);
    }
    _printk(0x8005ab4,iVar3,"aw882xx_device_start");
    piVar5 = *(arg1 + 0x40);
    iVar3 = piVar5[0xe];
    if (*(arg1 + 4) != 1) {
        if (iVar3 == 0) {
            iVar3 = *piVar5;
        }
        _printk(0x8005ab4,iVar3,"aw_dev_boost_type_set");
        unaff_x24 = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
        if (*(arg1 + 0x10) != 0) {
            pcVar6 = *(arg1 + 0x378);
            if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001920);
            }
            (*pcVar6)(arg1,*(arg1 + 0x168),*(arg1 + 0x16c),*(arg1 + 0x170));
            pcVar6 = *(arg1 + 0x378);
            if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001940);
            }
            (*pcVar6)(arg1,*(arg1 + 0x178),*(arg1 + 0x17c),*(arg1 + 0x180));
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8005435,iVar3,"aw_dev_boost_type_set");
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8005acd,iVar3,"aw_dev_pwd",0);
        unaff_x20 = *(arg1 + 0x378);
        if (unaff_x20 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) goto code_r0x0801b530;
        goto code_r0x0801ad20;
    }
    if (iVar3 == 0) {
        iVar3 = *piVar5;
    }
    uVar2 = 0x80077d4;
code_r0x0801b4e4:
    _printk(uVar2,iVar3,"aw882xx_device_start");
    uVar2 = 0;
    do {
        while( true ) {
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_58) {
                return;
            }
            __stack_chk_fail(uVar2);
code_r0x0801b530:
            __cfi_slowpath_diag(0x9fc9021573cf4c58,unaff_x20,0x8001980);
code_r0x0801ad20:
            (*unaff_x20)(arg1,*(arg1 + 0xb0),*(arg1 + 0xb4),*(arg1 + 0xbc));
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8004217,iVar3,"aw_dev_pwd");
            usleep_range_state(2000,0x7da,2);
            iVar1 = sym.aw_dev_mode1_pll_check(arg1);
            if (-1 < iVar1) break;
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8003f1d,iVar3,"aw_dev_syspll_check");
            pcVar6 = *(arg1 + 0x370);
            uStack_5c = 0;
            if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar6,0x80019c0);
            }
            (*pcVar6)(arg1,*(arg1 + 0x18c),&uStack_5c);
            uStack_5c = uStack_5c & (*(arg1 + 400) ^ 0xffffffff);
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x80042cf,iVar3,"aw_dev_mode2_pll_check");
            uVar4 = *(arg1 + 0x194);
            if (uStack_5c == uVar4) {
                iVar3 = (*(arg1 + 0x40))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x40);
                }
                _printk(0x80042fe,iVar3,"aw_dev_mode2_pll_check");
            }
            else {
                pcVar6 = *(arg1 + 0x378);
                if (pcVar6 != unaff_x24) {
                    __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x80019e0);
                    uVar4 = *(arg1 + 0x194);
                }
                (*pcVar6)(arg1,*(arg1 + 0x18c),*(arg1 + 400),uVar4);
                iVar1 = sym.aw_dev_mode1_pll_check(arg1);
                pcVar6 = *(arg1 + 0x378);
                if (pcVar6 != unaff_x24) {
                    __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001a00);
                }
                (*pcVar6)(arg1,*(arg1 + 0x18c),*(arg1 + 400),*(arg1 + 0x198));
                if (iVar1 == 0) {
                    usleep_range_state(2000,0x7da,2);
                    iVar1 = sym.aw_dev_mode1_pll_check(arg1);
                    if (-1 < iVar1) break;
                }
            }
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8007f39,iVar3,"aw_dev_syspll_check");
            sym.aw_dev_reg_dump(arg1);
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8005acd,iVar3,"aw_dev_pwd",1);
            unaff_x20 = *(arg1 + 0x378);
            if (unaff_x20 != unaff_x24) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,unaff_x20,0x8001960);
            }
            (*unaff_x20)(arg1,*(arg1 + 0xb0),*(arg1 + 0xb4),*(arg1 + 0xb8));
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8004217,iVar3,"aw_dev_pwd");
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x80063b5,iVar3,"aw882xx_device_start");
            uVar2 = 0xffffffff;
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x80050aa,iVar3,"aw_dev_amppd",0);
        pcVar6 = *(arg1 + 0x378);
        if (pcVar6 != unaff_x24) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001aa0);
        }
        (*pcVar6)(arg1,*(arg1 + 0xc0),*(arg1 + 0xc4),*(arg1 + 0xcc));
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8004217,iVar3,"aw_dev_amppd");
        usleep_range_state(1000,0x41a,2);
        iVar1 = 0;
        uStack_5c = 0;
        do {
            pcVar6 = *(arg1 + 0x370);
            if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar6,0x8001ac0);
            }
            (*pcVar6)(arg1,*(arg1 + 0x158),&uStack_5c);
            piVar5 = *(arg1 + 0x40);
            iVar3 = piVar5[0xe];
            if ((*(arg1 + 0x160) & (uStack_5c & (*(arg1 + 0x15c) ^ 0xffffffff) ^ 0xffffffff)) == 0) {
                if (iVar3 == 0) {
                    iVar3 = *piVar5;
                }
                _printk(0x8004217,iVar3,"aw_dev_sysst_check");
                iVar3 = (*(arg1 + 0x40))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x40);
                }
                _printk(0x8005ab4,iVar3,"aw_dev_boost_type_recover");
                if (*(arg1 + 0x10) != 0) {
                    pcVar6 = *(arg1 + 0x378);
                    if (pcVar6 != unaff_x24) {
                        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001ae0);
                    }
                    (*pcVar6)(arg1,*(arg1 + 0x178),*(arg1 + 0x17c),*(arg1 + 0x184));
                    usleep_range_state(5000,0x13ba,2);
                    pcVar6 = *(arg1 + 0x378);
                    if (pcVar6 != unaff_x24) {
                        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001b00);
                    }
                    (*pcVar6)(arg1,*(arg1 + 0x178),*(arg1 + 0x17c),*(arg1 + 0x188));
                    pcVar6 = *(arg1 + 0x378);
                    if (pcVar6 != unaff_x24) {
                        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001b20);
                    }
                    (*pcVar6)(arg1,*(arg1 + 0x168),*(arg1 + 0x16c),*(arg1 + 0x174));
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    _printk(0x80045a1,iVar3,"aw_dev_boost_type_recover");
                }
                sym.aw_dev_i2s_enable(arg1,1);
                if (*(arg1 + 0x24) != 0) {
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    _printk(0x80050aa,iVar3,"aw_dev_amppd",1);
                    pcVar6 = *(arg1 + 0x378);
                    if (pcVar6 != unaff_x24) {
                        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001a80);
                    }
                    (*pcVar6)(arg1,*(arg1 + 0xc0),*(arg1 + 0xc4),*(arg1 + 200));
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    _printk(0x8004217,iVar3,"aw_dev_amppd");
                }
                pcVar6 = *(arg1 + 0x3d0);
                if (pcVar6 != NULL) {
                    if (1 < (pcVar6 + -0x800b9a8 >> 3 | pcVar6 << 0x3d)) {
                        __cfi_slowpath_diag(0x77294c460dde6a2b,pcVar6,0x8001740);
                    }
                    (*pcVar6)(arg1);
                }
                iVar3 = (*(arg1 + 0x40))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x40);
                }
                _printk(0x8006425,iVar3,"aw_dev_uls_hmute",0);
                iVar1 = *(arg1 + 0xe0);
                if (iVar1 != 0xff) {
                    pcVar6 = *(arg1 + 0x378);
                    if (pcVar6 != unaff_x24) {
                        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001b60);
                        iVar1 = *(arg1 + 0xe0);
                    }
                    (*pcVar6)(arg1,iVar1,*(arg1 + 0xe4),*(arg1 + 0xec));
                    iVar3 = (*(arg1 + 0x40))[0xe];
                    if (iVar3 == 0) {
                        iVar3 = **(arg1 + 0x40);
                    }
                    _printk(0x8004217,iVar3,"aw_dev_uls_hmute");
                }
                if (*(arg1 + 0x20) == 0) {
                    sym.aw_dev_mute(arg1,0);
                }
                sym.aw882xx_dev_clear_int_status(arg1);
                unaff_x20 = *(arg1 + 0x368);
                if (unaff_x20 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                    __cfi_slowpath_diag(0x72f794085f5af073,unaff_x20,0x8001680);
                }
                (*unaff_x20)(arg1,*(arg1 + 0x90),*(arg1 + 0x9c));
                iVar3 = (*(arg1 + 0x40))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x40);
                }
                _printk(0x8004217,iVar3,"aw882xx_dev_set_intmask");
                sym.aw882xx_monitor_start(arg1 + 0x200);
                if (*(arg1 + 0x1e9) != '\0') {
                    uVar4 = *(arg1 + 0x1ec);
                    if (uVar4 != 0) {
                        if ((uVar4 < *(arg1 + 0x38)) || (*(arg1 + 0x34) < uVar4)) {
                            iVar3 = (*(arg1 + 0x40))[0xe];
                            if (iVar3 == 0) {
                                iVar3 = **(arg1 + 0x40);
                            }
                            _printk(0x8007f63,iVar3,"aw_dev_cali_re_update");
                        }
                        else {
                            sym.aw882xx_dsp_write_cali_re(arg1,uVar4);
                        }
                    }
                }
                *(arg1 + 4) = 1;
                iVar3 = (*(arg1 + 0x40))[0xe];
                if (iVar3 == 0) {
                    iVar3 = **(arg1 + 0x40);
                }
                uVar2 = 0x8004217;
                goto code_r0x0801b4e4;
            }
            if (iVar3 == 0) {
                iVar3 = *piVar5;
            }
            _printk(0x8002f42,iVar3,"aw_dev_sysst_check",iVar1);
            usleep_range_state(2000,0x7da,2);
            iVar1 = iVar1 + 1;
        } while (iVar1 != 10);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x80091e2,iVar3,"aw_dev_sysst_check");
        sym.aw_dev_reg_dump(arg1);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8005f0a,iVar3,"aw_dev_i2s_enable",0);
        iVar1 = *(arg1 + 0xf0);
        if (iVar1 == 0xff) {
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8009198,iVar3,"aw_dev_i2s_enable");
        }
        else {
            pcVar6 = *(arg1 + 0x378);
            if (pcVar6 != unaff_x24) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001720);
                iVar1 = *(arg1 + 0xf0);
            }
            (*pcVar6)(arg1,iVar1,*(arg1 + 0xf4),*(arg1 + 0xfc));
        }
        sym.aw882xx_dev_clear_int_status(arg1);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x80050aa,iVar3,"aw_dev_amppd",1);
        pcVar6 = *(arg1 + 0x378);
        if (pcVar6 != unaff_x24) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001a80);
        }
        (*pcVar6)(arg1,*(arg1 + 0xc0),*(arg1 + 0xc4),*(arg1 + 200));
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8004217,iVar3,"aw_dev_amppd");
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8005acd,iVar3,"aw_dev_pwd",1);
        unaff_x20 = *(arg1 + 0x378);
        if (unaff_x20 != unaff_x24) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,unaff_x20,0x8001960);
        }
        (*unaff_x20)(arg1,*(arg1 + 0xb0),*(arg1 + 0xb4),*(arg1 + 0xb8));
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        _printk(0x8004217,iVar3,"aw_dev_pwd");
        uVar2 = 0xffffffea;
    } while( true );
}


// ===== sym.aw_dev_i2s_enable @ 0x0801b7c4 (size 392) =====

void sym.aw_dev_i2s_enable(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    int64_t iVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = (*(arg1 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + 0x40);
    }
    _printk(0x8005f0a,iVar4,"aw_dev_i2s_enable",arg2 & 1);
    iVar3 = *(arg1 + 0xf0);
    if (iVar3 == 0xff) {
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        _printk(0x8009198,iVar4,"aw_dev_i2s_enable");
    }
    else if ((arg2 & 1U) == 0) {
        pcVar5 = *(arg1 + 0x378);
        if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar5,0x8001720);
            iVar3 = *(arg1 + 0xf0);
        }
        (*pcVar5)(arg1,iVar3,*(arg1 + 0xf4),*(arg1 + 0xfc));
    }
    else {
        pcVar5 = *(arg1 + 0x378);
        if (*(arg1 + 0x1e9) == '\0') {
            if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar5,0x80016e0);
                iVar3 = *(arg1 + 0xf0);
            }
            uVar1 = *(arg1 + 0xf4);
            uVar2 = *(arg1 + 0x100);
        }
        else {
            if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar5,0x8001700);
                iVar3 = *(arg1 + 0xf0);
            }
            uVar1 = *(arg1 + 0xf4);
            uVar2 = *(arg1 + 0xf8);
        }
        (*pcVar5)(arg1,iVar3,uVar1,uVar2);
    }
    return;
}


// ===== sym.aw_dev_reg_dump @ 0x0801b94c (size 456) =====

void sym.aw_dev_reg_dump(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar10;
    code *pcVar11;
    uint64_t unaff_x21;
    ulong unaff_x22;
    char *unaff_x23;
    ulong unaff_x24;
    ulong unaff_x30;
    uchar auVar12 [12];
    int iStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_b0;
    char *pcStack_a8;
    ulong uStack_a0;
    uint64_t uStack_98;
    code *pcStack_90;
    int64_t iStack_88;
    code *pcStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    pcVar11 = *(arg1 + 0x3a8);
    if (8 < (pcVar11 + -0x800b8c0 >> 3 | pcVar11 << 0x3d)) {
        __cfi_slowpath_diag(0x2b3a43e29242445,pcVar11,0x8001a20);
    }
    uVar4 = (*pcVar11)();
    uStack_6c = 0;
    if (0 < uVar4) {
        pcVar11 = uVar4;
        unaff_x21 = 0;
        unaff_x22 = 0x8005b15;
        unaff_x23 = "aw_dev_reg_dump";
        unaff_x24 = 0x8001a60;
        do {
            pcVar9 = *(arg1 + 0x3a0);
            if (0xd < (pcVar9 + -0x800bac0 >> 3 | pcVar9 << 0x3d)) {
                pcStack_78 = pcVar9;
                __cfi_slowpath_diag(0xb956711316021ea3,pcVar9,0x8001a40);
                pcVar9 = pcStack_78;
            }
            uVar5 = (*pcVar9)(unaff_x21);
            if ((uVar5 & 1) != 0) {
                pcVar9 = *(arg1 + 0x370);
                if (pcVar9 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
                    pcStack_78 = pcVar9;
                    __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar9,0x8001a60);
                    pcVar9 = pcStack_78;
                }
                (*pcVar9)(arg1,unaff_x21,&uStack_6c);
                iVar7 = (*(arg1 + 0x40))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1 + 0x40);
                }
                _printk(0x8005b15,iVar7,"aw_dev_reg_dump",unaff_x21,uStack_6c);
            }
            uVar1 = unaff_x21 + 1U & 0xff;
            unaff_x21 = uVar1;
        } while (uVar1 < uVar4);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return;
    }
    auVar12 = __stack_chk_fail();
    iVar6 = auVar12._0_8_;
    *extraout_x18 = sym.aw_dev_mute;
    pcStack_b8 = sym.aw_dev_mute;
    iVar7 = sp_el0;
    iStack_c8 = *(iVar7 + 0x5e0);
    iVar7 = (*(iVar6 + 0x40))[0xe];
    if (iVar7 == 0) {
        iVar7 = **(iVar6 + 0x40);
    }
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = unaff_x24;
    pcStack_a8 = unaff_x23;
    uStack_a0 = unaff_x22;
    uStack_98 = unaff_x21;
    pcStack_90 = pcVar11;
    iStack_88 = arg1;
    _printk(0x8002217,iVar7,"aw_dev_mute",auVar12._8_4_ & 1,*(iVar6 + 0x1f8));
    if (((auVar12._8_4_ & 1) != 0) || (*(iVar6 + 0x1f8) == -1)) {
        iVar2 = *(iVar6 + 0x30);
        iStack_cc = 0;
        if ((iVar2 == 0) || (_segment.ehdr == 0)) {
            pcVar11 = *(iVar6 + 0x380);
            if (6 < (pcVar11 + -0x800ba00 >> 3 | pcVar11 << 0x3d)) {
                __cfi_slowpath_diag(0x2060516a6466f902,pcVar11,0x8001bc0);
            }
            (*pcVar11)(iVar6,*(iVar6 + 0x1cc));
        }
        else {
            pcVar11 = *(iVar6 + 0x388);
            if (6 < (pcVar11 + -0x800b9c0 >> 3 | pcVar11 << 0x3d)) {
                __cfi_slowpath_diag(0xcb68aa27346a4fae,pcVar11,0x8001be0);
            }
            (*pcVar11)(iVar6,&iStack_cc);
            iVar3 = *(iVar6 + 0x1cc);
            iVar10 = iStack_cc;
            if (iStack_cc <= iVar3) {
                do {
                    pcVar11 = *(iVar6 + 0x380);
                    if (6 < (pcVar11 + -0x800ba00 >> 3 | pcVar11 << 0x3d)) {
                        __cfi_slowpath_diag(0x2060516a6466f902,pcVar11,0x8001c00);
                    }
                    (*pcVar11)(iVar6,iVar10);
                    usleep_range_state(_segment.ehdr,_segment.ehdr + 10,2);
                    iVar3 = *(iVar6 + 0x1cc);
                    iVar10 = iVar10 + iVar2;
                } while (iVar10 <= iVar3);
            }
            pcVar11 = *(iVar6 + 0x380);
            if (6 < (pcVar11 + -0x800ba00 >> 3 | pcVar11 << 0x3d)) {
                __cfi_slowpath_diag(0x2060516a6466f902,pcVar11,0x8001c20);
                iVar3 = *(iVar6 + 0x1cc);
            }
            (*pcVar11)(iVar6,iVar3);
            usleep_range_state(_segment.ehdr,_segment.ehdr + 10,2);
        }
        pcVar11 = *(iVar6 + 0x378);
        if (pcVar11 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) goto code_r0x0801be54;
        goto code_r0x0801bc4c;
    }
    pcVar11 = *(iVar6 + 0x378);
    if (pcVar11 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar11,0x8001ba0);
    }
    (*pcVar11)(iVar6,*(iVar6 + 0xd0),*(iVar6 + 0xd4),*(iVar6 + 0xdc));
    iVar2 = *(iVar6 + 0x30);
    if ((iVar2 == 0) || (_segment.ehdr == 0)) {
        pcVar11 = *(iVar6 + 0x380);
        if (6 < (pcVar11 + -0x800ba00 >> 3 | pcVar11 << 0x3d)) {
            uVar8 = 0x8001c40;
            goto code_r0x0801bf14;
        }
    }
    else {
        iVar10 = *(iVar6 + 0x1cc);
        iVar3 = *(iVar6 + 0x1c8);
        if (iVar3 <= iVar10) {
            do {
                pcVar11 = *(iVar6 + 0x380);
                if (6 < (pcVar11 + -0x800ba00 >> 3 | pcVar11 << 0x3d)) {
                    __cfi_slowpath_diag(0x2060516a6466f902,pcVar11,0x8001c60);
                }
                (*pcVar11)(iVar6,iVar10);
                usleep_range_state(_segment.ehdr,_segment.ehdr + 10,2);
                iVar3 = *(iVar6 + 0x1c8);
                iVar10 = iVar10 - iVar2;
            } while (iVar3 <= iVar10);
        }
        pcVar11 = *(iVar6 + 0x380);
        if ((pcVar11 + -0x800ba00 >> 3 | pcVar11 << 0x3d) < 7) goto code_r0x0801bd7c;
        uVar8 = 0x8001c80;
code_r0x0801bf14:
        __cfi_slowpath_diag(0x2060516a6466f902,pcVar11,uVar8);
    }
    iVar3 = *(iVar6 + 0x1c8);
code_r0x0801bd7c:
    (*pcVar11)(iVar6,iVar3);
    while( true ) {
        iVar7 = (*(iVar6 + 0x40))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(iVar6 + 0x40);
        }
        _printk(0x8004217,iVar7,"aw_dev_mute");
        iVar7 = sp_el0;
        if (*(iVar7 + 0x5e0) == iStack_c8) break;
        __stack_chk_fail();
code_r0x0801be54:
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar11,0x8001b80);
code_r0x0801bc4c:
        (*pcVar11)(iVar6,*(iVar6 + 0xd0),*(iVar6 + 0xd4),*(iVar6 + 0xd8));
        usleep_range_state(5000,0x13ba,2);
    }
    return;
}


// ===== sym.aw_dev_mute @ 0x0801bb14 (size 1052) =====

void sym.aw_dev_mute(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    int iVar5;
    code *pcVar6;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = (*(arg1 + 0x40))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + 0x40);
    }
    _printk(0x8002217,iVar4,"aw_dev_mute",arg2 & 1,*(arg1 + 0x1f8));
    if (((arg2 & 1U) != 0) || (*(arg1 + 0x1f8) == -1)) {
        iVar1 = *(arg1 + 0x30);
        iStack_4c = 0;
        if ((iVar1 == 0) || (_segment.ehdr == 0)) {
            pcVar6 = *(arg1 + 0x380);
            if (6 < (pcVar6 + -0x800ba00 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x2060516a6466f902,pcVar6,0x8001bc0);
            }
            (*pcVar6)(arg1,*(arg1 + 0x1cc));
        }
        else {
            pcVar6 = *(arg1 + 0x388);
            if (6 < (pcVar6 + -0x800b9c0 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0xcb68aa27346a4fae,pcVar6,0x8001be0);
            }
            (*pcVar6)(arg1,&iStack_4c);
            iVar2 = *(arg1 + 0x1cc);
            iVar5 = iStack_4c;
            if (iStack_4c <= iVar2) {
                do {
                    pcVar6 = *(arg1 + 0x380);
                    if (6 < (pcVar6 + -0x800ba00 >> 3 | pcVar6 << 0x3d)) {
                        __cfi_slowpath_diag(0x2060516a6466f902,pcVar6,0x8001c00);
                    }
                    (*pcVar6)(arg1,iVar5);
                    usleep_range_state(_segment.ehdr,_segment.ehdr + 10,2);
                    iVar2 = *(arg1 + 0x1cc);
                    iVar5 = iVar5 + iVar1;
                } while (iVar5 <= iVar2);
            }
            pcVar6 = *(arg1 + 0x380);
            if (6 < (pcVar6 + -0x800ba00 >> 3 | pcVar6 << 0x3d)) {
                __cfi_slowpath_diag(0x2060516a6466f902,pcVar6,0x8001c20);
                iVar2 = *(arg1 + 0x1cc);
            }
            (*pcVar6)(arg1,iVar2);
            usleep_range_state(_segment.ehdr,_segment.ehdr + 10,2);
        }
        pcVar6 = *(arg1 + 0x378);
        if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) goto code_r0x0801be54;
        goto code_r0x0801bc4c;
    }
    pcVar6 = *(arg1 + 0x378);
    if (pcVar6 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001ba0);
    }
    (*pcVar6)(arg1,*(arg1 + 0xd0),*(arg1 + 0xd4),*(arg1 + 0xdc));
    iVar1 = *(arg1 + 0x30);
    if ((iVar1 == 0) || (_segment.ehdr == 0)) {
        pcVar6 = *(arg1 + 0x380);
        if (6 < (pcVar6 + -0x800ba00 >> 3 | pcVar6 << 0x3d)) {
            uVar3 = 0x8001c40;
            goto code_r0x0801bf14;
        }
    }
    else {
        iVar5 = *(arg1 + 0x1cc);
        iVar2 = *(arg1 + 0x1c8);
        if (iVar2 <= iVar5) {
            do {
                pcVar6 = *(arg1 + 0x380);
                if (6 < (pcVar6 + -0x800ba00 >> 3 | pcVar6 << 0x3d)) {
                    __cfi_slowpath_diag(0x2060516a6466f902,pcVar6,0x8001c60);
                }
                (*pcVar6)(arg1,iVar5);
                usleep_range_state(_segment.ehdr,_segment.ehdr + 10,2);
                iVar2 = *(arg1 + 0x1c8);
                iVar5 = iVar5 - iVar1;
            } while (iVar2 <= iVar5);
        }
        pcVar6 = *(arg1 + 0x380);
        if ((pcVar6 + -0x800ba00 >> 3 | pcVar6 << 0x3d) < 7) goto code_r0x0801bd7c;
        uVar3 = 0x8001c80;
code_r0x0801bf14:
        __cfi_slowpath_diag(0x2060516a6466f902,pcVar6,uVar3);
    }
    iVar2 = *(arg1 + 0x1c8);
code_r0x0801bd7c:
    (*pcVar6)(arg1,iVar2);
    while( true ) {
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        _printk(0x8004217,iVar4,"aw_dev_mute");
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
code_r0x0801be54:
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar6,0x8001b80);
code_r0x0801bc4c:
        (*pcVar6)(arg1,*(arg1 + 0xd0),*(arg1 + 0xd4),*(arg1 + 0xd8));
        usleep_range_state(5000,0x13ba,2);
    }
    return;
}


// ===== sym.aw882xx_dev_set_afe_module_en @ 0x0801bf30 (size 36) =====

void sym.aw882xx_dev_set_afe_module_en(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_dsp_set_afe_module_en(arg1);
    return;
}


// ===== sym.aw882xx_dev_get_afe_module_en @ 0x0801bf54 (size 36) =====

void sym.aw882xx_dev_get_afe_module_en(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_dsp_get_afe_module_en(arg1);
    return;
}


// ===== sym.aw882xx_dev_set_copp_module_en @ 0x0801bf78 (size 80) =====

ulong sym.aw882xx_dev_set_copp_module_en(uint32_t arg1)

{
    char *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "enable";
    if ((arg1 & 1) == 0) {
        pcVar1 = "disable";
    }
    _printk(obj..str.43.llvm.7716720658683118668,"aw882xx_dsp_set_copp_module_en",pcVar1);
    return 0;
}


// ===== sym.aw882xx_dev_get_list_head @ 0x0801bfc8 (size 52) =====

uint sym.aw882xx_dev_get_list_head(int64_t arg1)

{
    uint uVar1;
    
    if (_obj.g_dev_list == obj.g_dev_list) {
        uVar1 = 0xffffffea;
    }
    else {
        uVar1 = 0;
        *arg1 = obj.g_dev_list;
    }
    return uVar1;
}


// ===== sym.aw882xx_device_probe @ 0x0801c000 (size 364) =====

ulong sym.aw882xx_device_probe(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar5 = arg1 + 0x3e0;
    iStack_38 = *(iVar6 + 0x5e0);
    *(arg1 + 0x3e0) = iVar5;
    *(arg1 + 1000) = iVar5;
    *(arg1 + 0x2c) = 0;
    uStack_3c = 0;
    iVar2 = of_property_read_variable_u32_array(*(*(arg1 + 0x40) + 0x2f0),"sound-channel",&uStack_3c,1,0);
    piVar7 = *(arg1 + 0x40);
    iVar6 = piVar7[0xe];
    if (iVar2 < 0) {
        if (iVar6 == 0) {
            iVar6 = *piVar7;
        }
        _printk(0x800545c,iVar6,"aw_device_parse_sound_channel_dt");
    }
    else {
        if (iVar6 == 0) {
            iVar6 = *piVar7;
        }
        _printk(0x8005f72,iVar6,"aw_device_parse_sound_channel_dt",uStack_3c);
        uVar1 = 0;
        if (uStack_3c < 4) {
            uVar1 = uStack_3c;
        }
        *(arg1 + 0x2c) = uVar1;
    }
    sym.aw882xx_device_parse_topo_id_dt(arg1);
    sym.aw882xx_device_parse_port_id_dt(arg1);
    uVar3 = sym.aw882xx_cali_init(arg1 + 0x1e8);
    if (uVar3 == 0) {
        sym.aw882xx_monitor_init(arg1 + 0x200);
        uVar3 = sym.aw882xx_spin_init(arg1 + 0x310);
        if (uVar3 == 0) {
            mutex_lock(obj.g_dev_lock);
            iVar6 = _obj.g_dev_list;
            uVar4 = __list_add_valid(iVar5,obj.g_dev_list,_obj.g_dev_list);
            if ((uVar4 & 1) != 0) {
                *(iVar6 + 8) = iVar5;
                *(arg1 + 0x3e0) = iVar6;
                *(arg1 + 1000) = obj.g_dev_list;
                _obj.g_dev_list = iVar5;
            }
            mutex_unlock(obj.g_dev_lock);
            uVar3 = 0;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    iVar5 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.aw882xx_device_remove;
    sym.aw882xx_monitor_deinit(iVar5 + 0x200);
    sym.aw882xx_cali_deinit(iVar5 + 0x1e8);
    return 0;
}


// ===== sym.aw882xx_device_remove @ 0x0801c16c (size 64) =====

ulong sym.aw882xx_device_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_monitor_deinit(arg1 + 0x200);
    sym.aw882xx_cali_deinit(arg1 + 0x1e8);
    return 0;
}


// ===== sym.aw_dev_mode1_pll_check @ 0x0801c1ac (size 372) =====

ulong sym.aw_dev_mode1_pll_check(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    code *pcVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int iVar6;
    ulong unaff_x30;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar6 = 0;
    iStack_48 = *(iVar3 + 0x5e0);
    uStack_4c = 0;
    do {
        pcVar4 = *(arg1 + 0x370);
        if (pcVar4 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar4,0x80019a0);
        }
        (*pcVar4)(arg1,*(arg1 + 0x158),&uStack_4c);
        piVar5 = *(arg1 + 0x40);
        iVar3 = piVar5[0xe];
        if ((*(arg1 + 0x164) & (uStack_4c ^ 0xffffffff)) == 0) {
            if (iVar3 == 0) {
                iVar3 = *piVar5;
            }
            _printk(0x8004217,iVar3,"aw_dev_mode1_pll_check");
            uVar2 = 0;
            goto code_r0x0801c2e8;
        }
        if (iVar3 == 0) {
            iVar3 = *piVar5;
        }
        _printk(0x8005f33,iVar3,"aw_dev_mode1_pll_check",iVar6);
        usleep_range_state(2000,0x7da,2);
        iVar6 = iVar6 + 1;
    } while (iVar6 != 10);
    iVar3 = (*(arg1 + 0x40))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1 + 0x40);
    }
    _printk(0x8005aef,iVar3,"aw_dev_mode1_pll_check");
    uVar2 = 0xffffffff;
code_r0x0801c2e8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_48) {
        return uVar2;
    }
    uVar1 = __stack_chk_fail(uVar2);
    if (uVar1 < 2) {
        return 0;
    }
    *extraout_x18 = sym.aw882xx_dsp_set_afe_module_en;
    _printk(0x800921a,"aw882xx_dsp_set_afe_module_en",uVar1);
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_set_afe_module_en @ 0x0801c320 (size 80) =====

ulong sym.aw882xx_dsp_set_afe_module_en(uint32_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 2) {
        return 0;
    }
    *in_x18 = unaff_x30;
    _printk(0x800921a,"aw882xx_dsp_set_afe_module_en",arg1);
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_get_afe_module_en @ 0x0801c370 (size 176) =====

ulong sym.aw882xx_dsp_get_afe_module_en(uint32_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 1) {
        if (_segment.ehdr == 0) goto code_r0x0801c3b8;
        uVar1 = 0x8005495;
    }
    else {
        if (arg1 != 0) {
            _printk(0x800921a,"aw882xx_dsp_get_afe_module_en",arg1);
            return 0xffffffea;
        }
        if (_segment.ehdr == 0) goto code_r0x0801c3b8;
        uVar1 = 0x800783f;
    }
    _printk(uVar1,"aw_check_dsp_ready",0);
code_r0x0801c3b8:
    mutex_lock(obj.g_aw_dsp_lock);
    mutex_unlock(obj.g_aw_dsp_lock);
    return 0;
}


// ===== sym.aw882xx_dsp_read_te @ 0x0801c420 (size 216) =====

ulong sym.aw882xx_dsp_read_te(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        sym.aw_read_msg_from_dsp(7,0x20);
        *arg2 = 0;
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x80050ce,iVar2,"aw882xx_dsp_read_te",0);
        uVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008ec8,iVar2,"aw882xx_dsp_read_te");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw_read_msg_from_dsp @ 0x0801c4f8 (size 224) =====

void sym.aw_read_msg_from_dsp(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.g_aw_dsp_msg_lock);
    if (_segment.ehdr != 0) {
        _printk(0x800783f,"aw_check_dsp_ready",0);
    }
    mutex_lock(obj.g_aw_dsp_lock);
    mutex_unlock(obj.g_aw_dsp_lock);
    if (_segment.ehdr != 0) {
        _printk(0x800783f,"aw_check_dsp_ready",0);
    }
    mutex_lock(obj.g_aw_dsp_lock);
    mutex_unlock(obj.g_aw_dsp_lock);
    _printk(0x80070ab,"aw_qcom_read_msg_from_dsp",arg1 & 0xffffffff,arg2 & 0xffffffff);
    mutex_unlock(obj.g_aw_dsp_msg_lock);
    return;
}


// ===== sym.aw882xx_dsp_read_st @ 0x0801c5d8 (size 236) =====

ulong sym.aw882xx_dsp_read_st(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        sym.aw_read_msg_from_dsp(7,0x20);
        *arg2 = 0;
        *arg3 = 0;
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008b02,iVar2,"aw882xx_dsp_read_st",*arg2,0);
        uVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008ec8,iVar2,"aw882xx_dsp_read_st");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_dsp_read_spin @ 0x0801c6c4 (size 132) =====

ulong sym.aw882xx_dsp_read_spin(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr != 0) {
        _printk(0x800783f,"aw_check_dsp_ready",0);
    }
    mutex_lock(obj.g_aw_dsp_lock);
    mutex_unlock(obj.g_aw_dsp_lock);
    *arg1 = 0;
    _printk(0x80050ec,"aw882xx_dsp_read_spin");
    return 0;
}


// ===== sym.aw882xx_dsp_write_spin @ 0x0801c748 (size 164) =====

ulong sym.aw882xx_dsp_write_spin(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 < 4) {
        if (_segment.ehdr != 0) {
            _printk(0x800783f,"aw_check_dsp_ready",0);
        }
        mutex_lock(obj.g_aw_dsp_lock);
        mutex_unlock(obj.g_aw_dsp_lock);
        _printk(0x8003b68,"aw882xx_dsp_write_spin");
        uVar1 = 0;
    }
    else {
        _printk(0x8005fa6,"aw882xx_dsp_write_spin",arg1 & 0xffffffff);
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_dsp_read_r0 @ 0x0801c7ec (size 264) =====

ulong sym.aw882xx_dsp_read_r0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            sym.aw_read_msg_from_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d50),0x18);
            *arg2 = 0;
            iVar2 = (*(arg1 + 0x40))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x40);
            }
            _printk(0x8008347,iVar2,"aw882xx_dsp_read_r0",0);
            return 0;
        }
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x8008ec8;
    }
    _printk(uVar1,iVar2,"aw882xx_dsp_read_r0");
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_read_cali_data @ 0x0801c8f4 (size 260) =====

ulong sym.aw882xx_dsp_read_cali_data(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x2c);
    if (uVar1 < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(uVar1 * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            sym.aw_read_msg_from_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d50),arg2 & 0xffffffff);
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x8002f78,iVar3,"aw882xx_dsp_read_cali_data");
            return 0;
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num",uVar1);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x800224b;
    }
    _printk(uVar2,iVar3,"aw882xx_dsp_read_cali_data");
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_get_dc_status @ 0x0801c9f8 (size 208) =====

ulong sym.aw882xx_dsp_get_dc_status(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        sym.aw_read_msg_from_dsp(6,8);
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x80057b0,iVar2,"aw882xx_dsp_get_dc_status",0);
        uVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008ec8,iVar2,"aw882xx_dsp_get_dc_status");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_dsp_read_f0_q @ 0x0801cac8 (size 236) =====

ulong sym.aw882xx_dsp_read_f0_q(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        sym.aw_read_msg_from_dsp(3,0x10);
        *arg2 = 0;
        *arg3 = 0;
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8003f8e,iVar2,"aw882xx_dsp_read_f0_q",*arg2,0);
        uVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008ec8,iVar2,"aw882xx_dsp_read_f0_q");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_dsp_read_f0 @ 0x0801cbb4 (size 252) =====

ulong sym.aw882xx_dsp_read_f0(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            sym.aw_read_msg_from_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d60),4);
            iVar2 = (*(arg1 + 0x40))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x40);
            }
            _printk(0x8003774,iVar2,"aw882xx_dsp_read_f0");
            return 0;
        }
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x800224b;
    }
    _printk(uVar1,iVar2,"aw882xx_dsp_read_f0");
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_cali_en @ 0x0801ccb0 (size 308) =====

int sym.aw882xx_dsp_cali_en(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uVar1 = arg2 & 1;
    uStack_2c = uVar1;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        iVar2 = sym.aw_write_msg_to_dsp(1,&uStack_2c,4);
        piVar6 = *(arg1 + 0x40);
        iVar4 = piVar6[0xe];
        if (iVar2 == 0) {
            if (iVar4 == 0) {
                iVar4 = *piVar6;
            }
            pcVar5 = "aw882xx_dsp_cali_en";
            _printk(0x8006459,iVar4,"aw882xx_dsp_cali_en",uVar1);
            iVar2 = 0;
        }
        else {
            if (iVar4 == 0) {
                iVar4 = *piVar6;
            }
            pcVar5 = "aw882xx_dsp_cali_en";
            _printk(0x8002f9a,iVar4,"aw882xx_dsp_cali_en");
        }
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        pcVar5 = "aw882xx_dsp_cali_en";
        _printk(0x800224b,iVar4,"aw882xx_dsp_cali_en");
        iVar2 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    auVar7 = __stack_chk_fail();
    *extraout_x18 = sym.aw_write_msg_to_dsp;
    iVar2 = pcVar5 + 0x18;
    mutex_lock(obj.g_aw_dsp_msg_lock);
    puVar3 = __kmalloc(iVar2,0xdc0);
    if (puVar3 == NULL) {
        _printk(0x80022a7,"aw_qcom_write_msg_to_dsp",auVar7._0_8_ & 0xffffffff);
        mutex_unlock(obj.g_aw_dsp_msg_lock);
        iVar2 = -0xc;
    }
    else {
        *puVar3 = 0;
        puVar3[1] = auVar7._0_4_;
        puVar3[2] = 1;
        memcpy(puVar3 + 6,auVar7._8_8_,pcVar5 & 0xffffffff);
        if (_segment.ehdr != 0) {
            _printk(0x800783f,"aw_check_dsp_ready",0);
        }
        mutex_lock(obj.g_aw_dsp_lock);
        mutex_unlock(obj.g_aw_dsp_lock);
        _printk(0x8003bb6,"aw_qcom_write_msg_to_dsp",auVar7._0_8_ & 0xffffffff,iVar2);
        mutex_unlock(obj.g_aw_dsp_msg_lock);
        kfree(puVar3);
        iVar2 = 0;
    }
    return iVar2;
}


// ===== sym.aw_write_msg_to_dsp @ 0x0801cde4 (size 288) =====

ulong sym.aw_write_msg_to_dsp(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint *puVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg3 + 0x18;
    mutex_lock(obj.g_aw_dsp_msg_lock);
    puVar2 = __kmalloc(iVar1,0xdc0);
    if (puVar2 == NULL) {
        _printk(0x80022a7,"aw_qcom_write_msg_to_dsp",arg1 & 0xffffffff);
        mutex_unlock(obj.g_aw_dsp_msg_lock);
        uVar3 = 0xfffffff4;
    }
    else {
        *puVar2 = 0;
        puVar2[1] = arg1;
        puVar2[2] = 1;
        memcpy(puVar2 + 6,arg2,arg3 & 0xffffffff);
        if (_segment.ehdr != 0) {
            _printk(0x800783f,"aw_check_dsp_ready",0);
        }
        mutex_lock(obj.g_aw_dsp_lock);
        mutex_unlock(obj.g_aw_dsp_lock);
        _printk(0x8003bb6,"aw_qcom_write_msg_to_dsp",arg1 & 0xffffffff,iVar1);
        mutex_unlock(obj.g_aw_dsp_msg_lock);
        kfree(puVar2);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.aw882xx_dsp_hmute_en @ 0x0801cf04 (size 308) =====

int sym.aw882xx_dsp_hmute_en(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uVar1 = arg2 & 1;
    uStack_2c = uVar1;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        iVar2 = sym.aw_write_msg_to_dsp(2,&uStack_2c,4);
        piVar6 = *(arg1 + 0x40);
        iVar4 = piVar6[0xe];
        if (iVar2 == 0) {
            if (iVar4 == 0) {
                iVar4 = *piVar6;
            }
            _printk(0x80067ea,iVar4,"aw882xx_dsp_hmute_en",uVar1);
            iVar2 = 0;
        }
        else {
            if (iVar4 == 0) {
                iVar4 = *piVar6;
            }
            _printk(0x80067c4,iVar4,"aw882xx_dsp_hmute_en");
        }
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        _printk(0x8008ec8,iVar4,"aw882xx_dsp_hmute_en");
        iVar2 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        auVar7 = __stack_chk_fail();
        iVar4 = auVar7._0_8_;
        *extraout_x18 = sym.aw882xx_dsp_read_cali_re;
        if (*(iVar4 + 0x2c) < 4) {
            _printk(0x8003430,"aw_get_msg_num",*(*(iVar4 + 0x2c) * 4 + 0x8009d20));
            if (*(iVar4 + 0x2c) < 4) {
                sym.aw_read_msg_from_dsp(*(*(iVar4 + 0x2c) * 4 + 0x8009d40),4);
                *auVar7._8_8_ = 0;
                iVar5 = (*(iVar4 + 0x40))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(iVar4 + 0x40);
                }
                _printk(0x8004346,iVar5,"aw882xx_dsp_read_cali_re");
                return 0;
            }
            iVar5 = (*(iVar4 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x40);
            }
            uVar3 = 0x800739c;
        }
        else {
            _printk(0x80069dd,"aw_get_msg_num");
            iVar5 = (*(iVar4 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x40);
            }
            uVar3 = 0x8008ec8;
        }
        _printk(uVar3,iVar5,"aw882xx_dsp_read_cali_re");
        return -0x16;
    }
    return iVar2;
}


// ===== sym.aw882xx_dsp_read_cali_re @ 0x0801d038 (size 260) =====

ulong sym.aw882xx_dsp_read_cali_re(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            sym.aw_read_msg_from_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d40),4);
            *arg2 = 0;
            iVar2 = (*(arg1 + 0x40))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + 0x40);
            }
            _printk(0x8004346,iVar2,"aw882xx_dsp_read_cali_re");
            return 0;
        }
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x8008ec8;
    }
    _printk(uVar1,iVar2,"aw882xx_dsp_read_cali_re");
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_write_cali_re @ 0x0801d13c (size 376) =====

int sym.aw882xx_dsp_write_cali_re(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iStack_2c = (arg2 << 0xc) / 1000;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            iVar1 = sym.aw_write_msg_to_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d40),&iStack_2c,4);
            piVar5 = *(arg1 + 0x40);
            iVar3 = piVar5[0xe];
            if (iVar1 == 0) {
                if (iVar3 == 0) {
                    iVar3 = *piVar5;
                }
                _printk(0x8005b67,iVar3,"aw882xx_dsp_write_cali_re");
                iVar1 = 0;
            }
            else {
                if (iVar3 == 0) {
                    iVar3 = *piVar5;
                }
                _printk(0x80073c5,iVar3,"aw882xx_dsp_write_cali_re");
            }
            goto code_r0x0801d25c;
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8008ec8;
    }
    _printk(uVar2,iVar3,"aw882xx_dsp_write_cali_re");
    iVar1 = -0x16;
code_r0x0801d25c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return iVar1;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dsp_write_params;
    if (*(iVar3 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(iVar3 + 0x2c) * 4 + 0x8009d20));
        if (_segment.ehdr != 0) {
            _printk(0x800783f,"aw_check_dsp_ready",0);
        }
        mutex_lock(obj.g_aw_dsp_lock);
        mutex_unlock(obj.g_aw_dsp_lock);
        iVar4 = (*(iVar3 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x40);
        }
        _printk(0x8005123,iVar4,"aw882xx_dsp_write_params");
        iVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar4 = (*(iVar3 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(iVar3 + 0x40);
        }
        _printk(0x800224b,iVar4,"aw882xx_dsp_write_params");
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.aw882xx_dsp_write_params @ 0x0801d2b4 (size 252) =====

ulong sym.aw882xx_dsp_write_params(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (_segment.ehdr != 0) {
            _printk(0x800783f,"aw_check_dsp_ready",0);
        }
        mutex_lock(obj.g_aw_dsp_lock);
        mutex_unlock(obj.g_aw_dsp_lock);
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8005123,iVar2,"aw882xx_dsp_write_params");
        uVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800224b,iVar2,"aw882xx_dsp_write_params");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_dsp_read_vmax @ 0x0801d3b0 (size 260) =====

ulong sym.aw882xx_dsp_read_vmax(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x2c);
    if (uVar1 < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(uVar1 * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            sym.aw_read_msg_from_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d30),arg2 & 0xffffffff);
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x80045e0,iVar3,"aw882xx_dsp_read_vmax");
            return 0;
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num",uVar1);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8008ec8;
    }
    _printk(uVar2,iVar3,"aw882xx_dsp_read_vmax");
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_write_vmax @ 0x0801d4b4 (size 316) =====

int sym.aw882xx_dsp_write_vmax(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            iVar1 = sym.aw_write_msg_to_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d30),arg2,arg3 & 0xffffffff);
            piVar4 = *(arg1 + 0x40);
            iVar3 = piVar4[0xe];
            if (iVar1 == 0) {
                if (iVar3 == 0) {
                    iVar3 = *piVar4;
                }
                _printk(0x8007b95,iVar3,"aw882xx_dsp_write_vmax");
                return 0;
            }
            if (iVar3 == 0) {
                iVar3 = *piVar4;
            }
            _printk(0x8002fc2,iVar3,"aw882xx_dsp_write_vmax");
            return iVar1;
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8008ec8;
    }
    _printk(uVar2,iVar3,"aw882xx_dsp_write_vmax");
    return -0x16;
}


// ===== sym.aw882xx_dsp_noise_en @ 0x0801d5f0 (size 356) =====

int sym.aw882xx_dsp_noise_en(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    uVar1 = arg2 & 1;
    uStack_2c = uVar1;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            iVar2 = sym.aw_write_msg_to_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d10),&uStack_2c,4);
            piVar7 = *(arg1 + 0x40);
            iVar4 = piVar7[0xe];
            if (iVar2 == 0) {
                if (iVar4 == 0) {
                    iVar4 = *piVar7;
                }
                pcVar6 = "aw882xx_dsp_noise_en";
                _printk(0x8008eef,iVar4,"aw882xx_dsp_noise_en",uVar1);
                iVar2 = 0;
            }
            else {
                if (iVar4 == 0) {
                    iVar4 = *piVar7;
                }
                pcVar6 = "aw882xx_dsp_noise_en";
                _printk(0x80033ee,iVar4);
            }
            goto code_r0x0801d6fc;
        }
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        uVar3 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        uVar3 = 0x8008ec8;
    }
    pcVar6 = "aw882xx_dsp_noise_en";
    _printk(uVar3,iVar4);
    iVar2 = -0x16;
code_r0x0801d6fc:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_dsp_read_cali_cfg;
    uVar1 = *(iVar4 + 0x2c);
    if (uVar1 < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(uVar1 * 4 + 0x8009d20));
        if (*(iVar4 + 0x2c) < 4) {
            sym.aw_read_msg_from_dsp(*(*(iVar4 + 0x2c) * 4 + 0x8009d70),pcVar6 & 0xffffffff);
            iVar5 = (*(iVar4 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar4 + 0x40);
            }
            _printk(0x800876f,iVar5,"aw882xx_dsp_read_cali_cfg");
            return 0;
        }
        iVar5 = (*(iVar4 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x40);
        }
        uVar3 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num",uVar1);
        iVar5 = (*(iVar4 + 0x40))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(iVar4 + 0x40);
        }
        uVar3 = 0x8008ec8;
    }
    _printk(uVar3,iVar5,"aw882xx_dsp_read_cali_cfg");
    return -0x16;
}


// ===== sym.aw882xx_dsp_read_cali_cfg @ 0x0801d754 (size 260) =====

ulong sym.aw882xx_dsp_read_cali_cfg(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x2c);
    if (uVar1 < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(uVar1 * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            sym.aw_read_msg_from_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d70),arg2 & 0xffffffff);
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            _printk(0x800876f,iVar3,"aw882xx_dsp_read_cali_cfg");
            return 0;
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num",uVar1);
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8008ec8;
    }
    _printk(uVar2,iVar3,"aw882xx_dsp_read_cali_cfg");
    return 0xffffffea;
}


// ===== sym.aw882xx_dsp_write_cali_cfg @ 0x0801d858 (size 316) =====

int sym.aw882xx_dsp_write_cali_cfg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        if (*(arg1 + 0x2c) < 4) {
            iVar1 = sym.aw_write_msg_to_dsp(*(*(arg1 + 0x2c) * 4 + 0x8009d70),arg2,arg3 & 0xffffffff);
            piVar4 = *(arg1 + 0x40);
            iVar3 = piVar4[0xe];
            if (iVar1 == 0) {
                if (iVar3 == 0) {
                    iVar3 = *piVar4;
                }
                _printk(0x80073ee,iVar3,"aw882xx_dsp_write_cali_cfg");
                return 0;
            }
            if (iVar3 == 0) {
                iVar3 = *piVar4;
            }
            _printk(0x800436b,iVar3,"aw882xx_dsp_write_cali_cfg");
            return iVar1;
        }
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x800739c;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8008ec8;
    }
    _printk(uVar2,iVar3,"aw882xx_dsp_write_cali_cfg");
    return -0x16;
}


// ===== sym.aw882xx_dsp_read_msg @ 0x0801d994 (size 184) =====

ulong sym.aw882xx_dsp_read_msg(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        sym.aw_read_msg_from_dsp(arg2 & 0xffffffff,arg3 & 0xffffffff);
        uVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800224b,iVar2,"aw882xx_dsp_read_msg");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_dsp_write_msg @ 0x0801da4c (size 188) =====

ulong sym.aw882xx_dsp_write_msg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        uVar1 = sym.aw_write_msg_to_dsp(arg2 & 0xffffffff,arg3,arg4 & 0xffffffff);
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800224b,iVar2,"aw882xx_dsp_write_msg");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_dsp_set_copp_module_en @ 0x0801db08 (size 80) =====

ulong sym.aw882xx_dsp_set_copp_module_en(uint32_t arg1)

{
    char *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar1 = "enable";
    if ((arg1 & 1) == 0) {
        pcVar1 = "disable";
    }
    _printk(obj..str.43.llvm.7716720658683118668,"aw882xx_dsp_set_copp_module_en",pcVar1);
    return 0;
}


// ===== sym.aw882xx_dsp_set_mixer_en @ 0x0801db58 (size 308) =====

int sym.aw882xx_dsp_set_mixer_en(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_2c = arg2;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        iVar1 = sym.aw_write_msg_to_dsp(0xb,&uStack_2c,4);
        piVar4 = *(arg1 + 0x40);
        iVar2 = piVar4[0xe];
        if (iVar1 == 0) {
            if (iVar2 == 0) {
                iVar2 = *piVar4;
            }
            _printk(0x8007819,iVar2,"aw882xx_dsp_set_mixer_en",arg2 & 0xffffffff);
            iVar1 = 0;
        }
        else {
            if (iVar2 == 0) {
                iVar2 = *piVar4;
            }
            _printk(0x8007f8e,iVar2,"aw882xx_dsp_set_mixer_en");
        }
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800224b,iVar2,"aw882xx_dsp_set_mixer_en");
        iVar1 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return iVar1;
    }
    auVar5 = __stack_chk_fail();
    iVar2 = auVar5._0_8_;
    *extraout_x18 = sym.aw882xx_get_algo_version;
    if (*(iVar2 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(iVar2 + 0x2c) * 4 + 0x8009d20));
        sym.aw_read_msg_from_dsp(8,4);
        sym.aw_read_msg_from_dsp(0x12,0x50);
        iVar3 = (*(iVar2 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(iVar2 + 0x40);
        }
        _printk(0x8008f17,iVar3,"aw882xx_get_algo_version",auVar5._8_8_);
        iVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar3 = (*(iVar2 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(iVar2 + 0x40);
        }
        _printk(0x800224b,iVar3,"aw882xx_get_algo_version");
        iVar1 = -0x16;
    }
    return iVar1;
}


// ===== sym.aw882xx_get_algo_version @ 0x0801dc8c (size 224) =====

ulong sym.aw882xx_get_algo_version(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2c) < 4) {
        _printk(0x8003430,"aw_get_msg_num",*(*(arg1 + 0x2c) * 4 + 0x8009d20));
        sym.aw_read_msg_from_dsp(8,4);
        sym.aw_read_msg_from_dsp(0x12,0x50);
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008f17,iVar2,"aw882xx_get_algo_version",arg2);
        uVar1 = 0;
    }
    else {
        _printk(0x80069dd,"aw_get_msg_num");
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800224b,iVar2,"aw882xx_get_algo_version");
        uVar1 = 0xffffffea;
    }
    return uVar1;
}


// ===== sym.aw882xx_device_parse_topo_id_dt @ 0x0801dd6c (size 276) =====

void sym.aw882xx_device_parse_topo_id_dt(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x40) + 0x2f0),"aw-tx-topo-id",obj.g_tx_topo_id,1,0);
    if (iVar1 < 0) {
        _segment.ehdr = 0x1000ff00;
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8008b28,iVar2,"aw882xx_device_parse_topo_id_dt");
    }
    iVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x40) + 0x2f0),"aw-rx-topo-id",obj.g_rx_topo_id,1,0);
    if (iVar1 < 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        _segment.ehdr = 0x1000ff01;
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x80095f6,iVar2,"aw882xx_device_parse_topo_id_dt");
    }
    iVar2 = (*(arg1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x40);
    }
    _printk(0x8005fe0,iVar2,"aw882xx_device_parse_topo_id_dt",_segment.ehdr,_segment.ehdr);
    return;
}


// ===== sym.aw882xx_device_parse_port_id_dt @ 0x0801de80 (size 272) =====

void sym.aw882xx_device_parse_port_id_dt(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x40) + 0x2f0),"aw-tx-port-id",obj.g_tx_port_id,1,0);
    if (iVar1 < 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        _segment.ehdr = 0x1007;
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8005ba6,iVar2,"aw882xx_device_parse_port_id_dt");
    }
    iVar1 = of_property_read_variable_u32_array(*(*(arg1 + 0x40) + 0x2f0),"aw-rx-port-id",obj.g_rx_port_id,1,0);
    if (iVar1 < 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        _segment.ehdr = 0x1006;
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800962f,iVar2,"aw882xx_device_parse_port_id_dt");
    }
    iVar2 = (*(arg1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x40);
    }
    _printk(0x8005156,iVar2,"aw882xx_device_parse_port_id_dt",_segment.ehdr,_segment.ehdr);
    return;
}


// ===== sym.aw882xx_dev_i2c_write_bits @ 0x0801df90 (size 40) =====

void sym.aw882xx_dev_i2c_write_bits(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_i2c_write_bits(*(arg1 + 0x88),arg2,arg3,in_x3);
    return;
}


// ===== sym.aw882xx_dev_i2c_write @ 0x0801dfb8 (size 40) =====

void sym.aw882xx_dev_i2c_write(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_i2c_write(*(arg1 + 0x88),in_x1,arg2);
    return;
}


// ===== sym.aw882xx_dev_i2c_read @ 0x0801dfe0 (size 40) =====

void sym.aw882xx_dev_i2c_read(int64_t arg1,int64_t arg2)

{
    int64_t in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),arg2,in_x2);
    return;
}


// ===== sym.aw882xx_dev_set_algo_en @ 0x0801e008 (size 40) =====

void sym.aw882xx_dev_set_algo_en(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.aw882xx_kcontorl_set(*(arg1 + 0x88));
    return;
}


// ===== sym.aw882xx_init @ 0x0801e030 (size 5596) =====

void sym.aw882xx_init(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong uVar9;
    int64_t *piVar10;
    ulong *in_x18;
    uint *arg1_00;
    uint uVar11;
    code *pcVar12;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    pcVar12 = arg2 & 0xffffffff;
    iStack_38 = *(iVar7 + 0x5e0);
    arg1_00 = *(arg1 + 0x68);
    iVar3 = arg1_00[2];
    uVar11 = arg2;
    if (0x2054 < iVar3) {
        if (iVar3 == 0x2055) {
            uStack_3c = 0;
            sym.aw882xx_i2c_write(arg1,0,0x55aa);
            usleep_range_state(1000,0x44c,2);
            sym.aw882xx_i2c_read(arg1,0x23,&uStack_3c);
            if (uStack_3c == 0x2a0) {
                arg1_00 = *(arg1 + 0x68);
                *(arg1_00 + 0x7a) = 0;
                uVar9 = str.aw882xx_pid_2055_monitor.bin._0_8_;
                *(arg1_00 + 0x1d) = 0;
                uVar5 = str.aw882xx_pid_2055_monitor.bin._16_8_;
                uVar4 = str.aw882xx_pid_2055_monitor.bin._8_8_;
                *(arg1_00 + 0x1b) = 0;
                arg1_00[0x1a] = 0x6e69622e;
                *(arg1_00 + 0x78) = 0;
                *(arg1_00 + 0x14) = uVar9;
                *(arg1_00 + 0x16) = uVar4;
                *(arg1_00 + 0x18) = uVar5;
                arg1_00[0x74] = 0;
                arg1_00[4] = 0;
                *(arg1_00 + 0xb) = 0x3000000000;
                arg1_00[6] = 0;
                *arg1_00 = uVar11;
                *(arg1_00 + 0x22) = arg1;
                *(arg1_00 + 0x10) = *(arg1 + 0x48);
                uVar9 = *(arg1 + 0x40);
                *(arg1_00 + 0xec) = sym.__typeid__ZTSFiPciE_global_addr;
                *(arg1_00 + 0xee) = sym.aw882xx_get_dev_num.cfi_jt;
                *(arg1_00 + 0x12) = uVar9;
                *(arg1_00 + 0xdc) = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                arg1_00[0x38] = 0xff;
                *(arg1_00 + 0xf0) = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
                *(arg1_00 + 0xf2) = sym.aw_pid_2055_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xea) = sym.aw_pid_2055_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xda) = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
                arg1_00[0x53] = 0xff;
                arg1_00[0x4a] = 0xff;
                *(arg1_00 + 0xde) = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
                *(arg1_00 + 0x2c) = 0xfffffffe00000004;
                *(arg1_00 + 0x2e) = 1;
                arg1_00[0x41] = 0xff;
                *(arg1_00 + 0xe2) = sym.aw_pid_2055_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                arg1_00[0xd5] = 0xff;
                *(arg1_00 + 0xe0) = sym.aw_pid_2055_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0x34) = 0xfffffeff00000004;
                *(arg1_00 + 0x36) = 0x100;
                *(arg1_00 + 0xe4) = sym.aw_pid_2055_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xe8) = sym.aw_pid_2055_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0x3c) = 0xffffbfff00000006;
                *(arg1_00 + 0x3e) = 0x4000;
                *(arg1_00 + 0xe6) = sym.aw_pid_2055_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xcb) = 0x80000000400;
                *(arg1_00 + 0x24) = 0x200000003;
                *(arg1_00 + 0x26) = 0xef3f0000ef3f;
                *(arg1_00 + 0xcf) = 0x1000000000;
                *(arg1_00 + 0x30) = 0xfffffffd00000004;
                *(arg1_00 + 0x32) = 2;
                *(arg1_00 + 0x69) = 0x22000003ff;
                *(arg1_00 + 0x28) = 0xffffff7f00000004;
                *(arg1_00 + 0x2a) = 0x8000000000;
                *(arg1_00 + 0xc9) = 0xfffff3ff00000006;
                *(arg1_00 + 0x6d) = 0xffff0fff00000061;
                *(arg1_00 + 0xcd) = 0xffffffef00000005;
                *(arg1_00 + 0xd1) = 0xffffffef0000003c;
                *(arg1_00 + 0xd3) = 0x10;
                *(arg1_00 + 0x67) = 0x178900000021;
                *(arg1_00 + 0x6b) = 0xfc00fffffdff;
                *(arg1_00 + 99) = 0xfffffffb00000052;
                *(arg1_00 + 0x65) = 0x400000000;
                *(arg1_00 + 0x56) = 0xffffb4c400000001;
                *(arg1_00 + 0x58) = 0x1100000211;
                *(arg1_00 + 0x6f) = 0xfffffc0000000005;
                arg1_00[0x71] = 0;
                arg1_00[0x73] = 0x2d0;
                *(arg1_00 + 0xc2) = 0x55aa00000000;
                usleep_range_state(2000,0x7da,2);
                pcVar12 = *(arg1_00 + 0xda);
                if (pcVar12 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                    uVar9 = 0x8001cc0;
code_r0x0801f5f0:
                    __cfi_slowpath_diag(0x72f794085f5af073,pcVar12,uVar9);
                }
            }
            else {
                if (uStack_3c != 0x6708) {
                    iVar7 = (*(arg1 + 0x48))[0xe];
                    if (iVar7 == 0) {
                        iVar7 = **(arg1 + 0x48);
                    }
                    uVar9 = 0x80083b7;
                    pcVar8 = "aw_pid_2055_dev_check";
                    goto code_r0x0801f56c;
                }
                arg1_00 = *(arg1 + 0x68);
                arg1_00[2] = 0x2055a;
                uVar5 = str.aw882xx_pid_2055a_monitor.bin._0_8_;
                *(arg1_00 + 0x6d) = 0;
                uVar6 = str.aw882xx_pid_2055a_monitor.bin._8_8_;
                *(arg1_00 + 0x75) = 0;
                uVar9 = CONCAT35(str.aw882xx_pid_2055a_monitor.bin._21_3_,str.aw882xx_pid_2055a_monitor.bin._16_5_);
                *(arg1_00 + 0x7a) = 0;
                uVar4 = CONCAT53(str.aw882xx_pid_2055a_monitor.bin._24_5_,str.aw882xx_pid_2055a_monitor.bin._21_3_);
                *(arg1_00 + 0x78) = 0;
                *(arg1_00 + 0x14) = uVar5;
                *(arg1_00 + 0x16) = uVar6;
                *(arg1_00 + 0x18) = uVar9;
                *(arg1_00 + 0x65) = uVar4;
                arg1_00[0x74] = 0;
                *(arg1_00 + 0xb) = 0x3000000000;
                arg1_00[4] = 0;
                arg1_00[6] = 0;
                *arg1_00 = uVar11;
                *(arg1_00 + 0x22) = arg1;
                *(arg1_00 + 0x10) = *(arg1 + 0x48);
                uVar9 = *(arg1 + 0x40);
                *(arg1_00 + 0xec) = sym.__typeid__ZTSFiPciE_global_addr;
                *(arg1_00 + 0xee) = sym.aw882xx_get_dev_num.cfi_jt;
                *(arg1_00 + 0x12) = uVar9;
                *(arg1_00 + 0xdc) = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                *(arg1_00 + 0xf0) = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
                *(arg1_00 + 0xf2) = sym.aw_pid_2055a_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xea) = sym.aw_pid_2055a_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xda) = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
                *(arg1_00 + 0x2c) = 0xfffffffe00000004;
                *(arg1_00 + 0x2e) = 1;
                *(arg1_00 + 0xde) = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
                *(arg1_00 + 0xe2) = sym.aw_pid_2055a_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0x34) = 0xfffffeff00000004;
                *(arg1_00 + 0x36) = 0x100;
                *(arg1_00 + 0xe0) = sym.aw_pid_2055a_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xcb) = 0x80000000400;
                *(arg1_00 + 0xe4) = sym.aw_pid_2055a_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xcf) = 0x100000000000;
                *(arg1_00 + 0xe8) = sym.aw_pid_2055a_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xe6) = sym.aw_pid_2055a_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0x24) = 0x200000003;
                *(arg1_00 + 0x26) = 0xffff0000ffff;
                *(arg1_00 + 0x30) = 0xfffffffd00000004;
                *(arg1_00 + 0x32) = 2;
                *(arg1_00 + 0xc9) = 0xfffff3ff00000006;
                arg1_00[0x38] = 0xff;
                arg1_00[0x53] = 0xff;
                arg1_00[0x4a] = 0xff;
                *(arg1_00 + 0xcd) = 0xffffefff00000005;
                arg1_00[0x41] = 0xff;
                arg1_00[0x67] = 0xff;
                *(arg1_00 + 0x56) = 0xffffb4c400000001;
                *(arg1_00 + 0x58) = 0x1100000111;
                *(arg1_00 + 0x6d) = 0xffff0fff00000061;
                arg1_00[0x6a] = 0xff;
                *(arg1_00 + 0x3c) = 0xffffbfff00000006;
                *(arg1_00 + 0x3e) = 0x4000;
                *(arg1_00 + 0x6f) = 0xfffffc0000000005;
                arg1_00[0x71] = 0;
                arg1_00[0x73] = 0x2d0;
                arg1_00[0xd1] = 0xff;
                arg1_00[0xd5] = 0xff;
                *(arg1_00 + 99) = 0xfffffffb00000052;
                *(arg1_00 + 0x65) = 0x400000000;
                *(arg1_00 + 0xc2) = 0x55aa00000000;
                usleep_range_state(2000,0x7da,2);
                pcVar12 = *(arg1_00 + 0xda);
                if (pcVar12 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                    uVar9 = 0x8001ca0;
                    goto code_r0x0801f5f0;
                }
            }
            (*pcVar12)(arg1_00,0x73,0x1d40);
            usleep_range_state(3000,0xbc2,2);
            goto code_r0x0801f178;
        }
        if (iVar3 == 0x2071) {
            *(arg1_00 + 0x7a) = 0;
            *(arg1_00 + 0x1d) = 0;
            arg1_00[0x1a] = 0x6e69622e;
            uVar5 = str.aw882xx_pid_2071_monitor.bin._16_8_;
            uVar4 = str.aw882xx_pid_2071_monitor.bin._8_8_;
            uVar9 = str.aw882xx_pid_2071_monitor.bin._0_8_;
            *(arg1_00 + 0x1b) = 0;
            *(arg1_00 + 0x78) = 0;
            arg1_00[0x74] = 0;
            *(arg1_00 + 0x14) = uVar9;
            *(arg1_00 + 0x16) = uVar4;
            *(arg1_00 + 0x18) = uVar5;
            arg1_00[4] = 0;
            arg1_00[6] = 0;
            *(arg1_00 + 0xb) = 0x3000000000;
            *arg1_00 = uVar11;
            *(arg1_00 + 0x22) = arg1;
            *(arg1_00 + 0x10) = *(arg1 + 0x48);
            uVar9 = *(arg1 + 0x40);
            *(arg1_00 + 0xee) = sym.aw882xx_get_dev_num.cfi_jt;
            *(arg1_00 + 0xf0) = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
            *(arg1_00 + 0x12) = uVar9;
            *(arg1_00 + 0xec) = sym.__typeid__ZTSFiPciE_global_addr;
            *(arg1_00 + 0xf2) = sym.aw_pid_2071_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xdc) = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
            *(arg1_00 + 0x50) = 0xffff03fffffffdff;
            *(arg1_00 + 0xde) = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
            *(arg1_00 + 0x28) = 0xffffff7f00000004;
            *(arg1_00 + 0x2a) = 0x8000000000;
            *(arg1_00 + 0xda) = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
            *(arg1_00 + 0xe2) = sym.aw_pid_2071_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xe0) = sym.aw_pid_2071_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0x30) = 0xfffffffd00000004;
            *(arg1_00 + 0x32) = 2;
            *(arg1_00 + 0xea) = sym.aw_pid_2071_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xe4) = sym.aw_pid_2071_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0x34) = 0xffffffef00000005;
            *(arg1_00 + 0x36) = 0x10;
            arg1_00[0x53] = 0x56;
            *(arg1_00 + 0xe8) = sym.__typeid__ZTSFbiE_global_addr;
            arg1_00[0x55] = 0x2000;
            arg1_00[0x54] = 1000;
            *(arg1_00 + 0xe6) = sym.aw_pid_2071_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0x24) = 0x200000003;
            *(arg1_00 + 0x26) = 0xefbf0000efbf;
            *(arg1_00 + 0x41) = 0xffff83ff00000078;
            *(arg1_00 + 0x43) = 0x7a00000005;
            *(arg1_00 + 0x2c) = 0xfffffffe00000004;
            *(arg1_00 + 0x2e) = 1;
            arg1_00[0x49] = 1;
            *(arg1_00 + 0x45) = 0xaffff83ff;
            *(arg1_00 + 0x47) = 0xffff03fffffffdff;
            arg1_00[0x4d] = 0xff;
            *(arg1_00 + 0x4a) = 0xfffffc0000000078;
            *(arg1_00 + 0xc9) = 0xfffff3ff00000006;
            *(arg1_00 + 0x3c) = 0xfffffffe00000007;
            *(arg1_00 + 0x3e) = 1;
            arg1_00[0x52] = 1;
            *(arg1_00 + 0xcb) = 0x80000000400;
            *(arg1_00 + 0xcd) = 0xfffffffd00000007;
            *(arg1_00 + 0xcf) = 0x200000000;
            *(arg1_00 + 0x56) = 0xffffb4c400000001;
            *(arg1_00 + 0x58) = 0x1100000311;
            arg1_00[0x38] = 0xff;
            arg1_00[0x67] = 0x12;
            *(arg1_00 + 99) = 0xffffbfff00000066;
            *(arg1_00 + 0x65) = 0x400000000000;
            arg1_00[0x69] = 0x3ff;
            arg1_00[0x68] = 0x1789;
            arg1_00[0x6a] = 0x13;
            *(arg1_00 + 0x6d) = 0xfffffff000000005;
            arg1_00[0x6c] = 0xfc00;
            arg1_00[0x6b] = 0xfffffdff;
            arg1_00[0x71] = 6;
            arg1_00[0xd5] = 0xff;
            arg1_00[0x73] = 0x2d0;
            *(arg1_00 + 0x6f) = 0xffff003f00000005;
            arg1_00[0xd1] = 0xff;
            *(arg1_00 + 0xc2) = 0x55aa00000000;
            goto code_r0x0801f178;
        }
        if (iVar3 == 0x2113) {
            *(arg1_00 + 0x7a) = 0;
            *(arg1_00 + 0x1d) = 0;
            arg1_00[0x1a] = 0x6e69622e;
            uVar5 = str.aw882xx_pid_2113_monitor.bin._16_8_;
            uVar4 = str.aw882xx_pid_2113_monitor.bin._8_8_;
            uVar9 = str.aw882xx_pid_2113_monitor.bin._0_8_;
            *(arg1_00 + 0x1b) = 0;
            *(arg1_00 + 0x78) = 0;
            arg1_00[0x74] = 0;
            *(arg1_00 + 0x14) = uVar9;
            *(arg1_00 + 0x16) = uVar4;
            *(arg1_00 + 0x18) = uVar5;
            arg1_00[4] = 0;
            arg1_00[6] = 0;
            *(arg1_00 + 0xb) = 0x3000000000;
            *arg1_00 = uVar11;
            *(arg1_00 + 0x22) = arg1;
            *(arg1_00 + 0x10) = *(arg1 + 0x48);
            uVar9 = *(arg1 + 0x40);
            *(arg1_00 + 0xec) = sym.__typeid__ZTSFiPciE_global_addr;
            *(arg1_00 + 0xee) = sym.aw882xx_get_dev_num.cfi_jt;
            *(arg1_00 + 0x12) = uVar9;
            *(arg1_00 + 0xda) = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
            *(arg1_00 + 0xf0) = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
            *(arg1_00 + 0xdc) = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
            *(arg1_00 + 0xf6) = sym.__typeid__ZTSFiP9aw_deviceE_global_addr;
            *(arg1_00 + 0xf4) = sym.aw_pid_2113_reg_force_set.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xde) = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
            *(arg1_00 + 0xcb) = 0x80000000400;
            *(arg1_00 + 0xe2) = sym.__typeid__ZTSFiP9aw_devicePjE_global_addr;
            *(arg1_00 + 0x2c) = 0xfffffffe00000004;
            *(arg1_00 + 0x2e) = 1;
            *(arg1_00 + 0xe0) = sym.aw_pid_2113_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xe4) = sym.aw_pid_2113_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0x30) = 0xfffffffd00000004;
            *(arg1_00 + 0x32) = 2;
            *(arg1_00 + 0xe8) = sym.aw_pid_2113_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xe6) = sym.aw_pid_2113_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xea) = sym.aw_pid_2113_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0xf2) = sym.aw_pid_2113_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
            *(arg1_00 + 0x24) = 0x200000003;
            *(arg1_00 + 0x26) = 0xffff0000ffff;
            *(arg1_00 + 0x28) = 0xffffff7f00000004;
            *(arg1_00 + 0x2a) = 0x8000000000;
            *(arg1_00 + 0x34) = 0xfffffeff00000004;
            *(arg1_00 + 0x36) = 0x100;
            *(arg1_00 + 0x38) = 0xffffbfff00000004;
            *(arg1_00 + 0x3a) = 0x4000;
            arg1_00[0x55] = 0x2000;
            *(arg1_00 + 0x41) = 0xfffffc0000000078;
            *(arg1_00 + 0x43) = 0x7c00000000;
            *(arg1_00 + 0x45) = 0xfffffc00;
            *(arg1_00 + 0x47) = 0xffff03fffffffdff;
            *(arg1_00 + 0x49) = 0x7900000001;
            *(arg1_00 + 0x4b) = 0xfffffc00;
            *(arg1_00 + 0x4d) = 0xfffffc000000007d;
            *(arg1_00 + 0x4f) = 0xfffffdff00000000;
            *(arg1_00 + 0x51) = 0x1ffff03ff;
            *(arg1_00 + 0x53) = 0x3e800000050;
            *(arg1_00 + 0xc9) = 0xfffff3ff00000006;
            *(arg1_00 + 0x3c) = 0xffffffbf00000008;
            *(arg1_00 + 0x3e) = 0x40;
            *(arg1_00 + 0xcd) = 0xfffffffe00000008;
            *(arg1_00 + 0xcf) = 0x100000000;
            *(arg1_00 + 0x56) = 0xffffb4c400000001;
            *(arg1_00 + 0x58) = 0x1100000311;
            *(arg1_00 + 99) = 0xffffffbf00000054;
            *(arg1_00 + 0x65) = 0x4000000000;
            arg1_00[0x67] = 0x21;
            arg1_00[0x69] = 0x3ff;
            arg1_00[0x68] = 0x1789;
            arg1_00[0x6a] = 0x22;
            arg1_00[0x6c] = 0xfc00;
            arg1_00[0x6b] = 0xfffffdff;
            *(arg1_00 + 0x6d) = 0xffff0fff00000061;
            *(arg1_00 + 0x6f) = 0xfffffc0000000005;
            arg1_00[0x73] = 0x2d0;
            arg1_00[0x71] = 0;
            *(arg1_00 + 0xd1) = 0xffffffdf0000003c;
            *(arg1_00 + 0xd3) = 0x20;
            *(arg1_00 + 0xc2) = 0x55aa00000000;
            usleep_range_state(2000,0x7da,2);
            pcVar12 = *(arg1_00 + 0xda);
            if (pcVar12 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) goto code_r0x0801f5c4;
            while( true ) {
                (*pcVar12)(arg1_00,0x73,0x1d40);
                usleep_range_state(3000,0xbc2,2);
                *(arg1_00 + 0xd5) = 0xfff700000014;
                *(arg1_00 + 0xd7) = 0x800000000;
                uVar9 = sym.aw882xx_device_probe(arg1_00);
                *arg1_00 = arg1_00[0xb];
code_r0x0801f180:
                *(arg1 + 0x68) = arg1_00;
code_r0x0801f184:
                iVar7 = sp_el0;
                if (*(iVar7 + 0x5e0) == iStack_38) break;
                __stack_chk_fail(uVar9);
code_r0x0801f5c4:
                __cfi_slowpath_diag(0x72f794085f5af073,pcVar12,0x8001ce0);
            }
            return;
        }
code_r0x0801f500:
        iVar7 = (*(arg1 + 0x48))[0xe];
        if (iVar7 == 0) {
            iVar7 = **(arg1 + 0x48);
        }
        uVar9 = 0x8007fc5;
        pcVar8 = "aw882xx_init";
code_r0x0801f56c:
        _printk(uVar9,iVar7,pcVar8);
        uVar9 = 0xffffffea;
        goto code_r0x0801f184;
    }
    if (iVar3 == 0x1852) {
        *(arg1_00 + 0x7a) = 0;
        *(arg1_00 + 0x1d) = 0;
        arg1_00[0x1a] = 0x6e69622e;
        uVar5 = str.aw882xx_pid_1852_monitor.bin._16_8_;
        uVar4 = str.aw882xx_pid_1852_monitor.bin._8_8_;
        uVar9 = str.aw882xx_pid_1852_monitor.bin._0_8_;
        *(arg1_00 + 0x1b) = 0;
        *(arg1_00 + 0x78) = 0;
        arg1_00[0x74] = 0;
        *(arg1_00 + 0x14) = uVar9;
        *(arg1_00 + 0x16) = uVar4;
        *(arg1_00 + 0x18) = uVar5;
        arg1_00[4] = 0;
        arg1_00[6] = 0;
        *(arg1_00 + 0xb) = 0xc00000000;
        *arg1_00 = uVar11;
        *(arg1_00 + 0x22) = arg1;
        *(arg1_00 + 0x10) = *(arg1 + 0x48);
        uVar9 = *(arg1 + 0x40);
        *(arg1_00 + 0xec) = sym.__typeid__ZTSFiPciE_global_addr;
        *(arg1_00 + 0xee) = sym.aw882xx_get_dev_num.cfi_jt;
        *(arg1_00 + 0x12) = uVar9;
        *(arg1_00 + 0xda) = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
        *(arg1_00 + 0xf0) = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
        *(arg1_00 + 0xdc) = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
        *(arg1_00 + 0xf2) = sym.aw_pid_1852_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0xea) = sym.__typeid__ZTSFivE_global_addr;
        *(arg1_00 + 0xde) = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
        *(arg1_00 + 0x4a) = 0xfffffc0000000078;
        *(arg1_00 + 0xe2) = sym.aw_pid_1852_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0x28) = 0xffffff7f00000004;
        *(arg1_00 + 0x2a) = 0x8000000000;
        *(arg1_00 + 0xe0) = sym.aw_pid_1852_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0xe4) = sym.aw_pid_1852_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0x30) = 0xfffffffd00000004;
        *(arg1_00 + 0x32) = 2;
        *(arg1_00 + 0xe8) = sym.aw_pid_1852_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        arg1_00[0x55] = 0x2000;
        *(arg1_00 + 0xe6) = sym.aw_pid_1852_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0x24) = 0x200000003;
        *(arg1_00 + 0x26) = 0xefbf0000efbf;
        *(arg1_00 + 0x2c) = 0xfffffffe00000004;
        *(arg1_00 + 0x2e) = 1;
        *(arg1_00 + 0x3c) = 0xfffffffe00000007;
        *(arg1_00 + 0x3e) = 1;
        arg1_00[0x49] = 1;
        arg1_00[0x52] = 1;
        *(arg1_00 + 0x34) = 0xffffffef00000005;
        *(arg1_00 + 0x36) = 0x10;
        arg1_00[0x54] = 1000;
        arg1_00[0x53] = 0x56;
        *(arg1_00 + 0x41) = 0xfffffc000000007a;
        *(arg1_00 + 0x47) = 0xffff03fffffffdff;
        *(arg1_00 + 0x50) = 0xffff03fffffffdff;
        *(arg1_00 + 0xc9) = 0xfffff3ff00000006;
        *(arg1_00 + 0xcd) = 0xfffffffd00000007;
        *(arg1_00 + 0x56) = 0xffffb4e400000001;
        *(arg1_00 + 0x58) = 0x1100000311;
        *(arg1_00 + 0xcb) = 0x80000000400;
        *(arg1_00 + 99) = 0xffffbfff00000066;
        *(arg1_00 + 0x65) = 0x400000000000;
        arg1_00[0x67] = 0x12;
        *(arg1_00 + 0xcf) = 0x200000000;
        arg1_00[0x68] = 0x1789;
        arg1_00[0x6a] = 0x13;
        arg1_00[0x6c] = 0xfc00;
        *(arg1_00 + 0x6d) = 0xfffffff000000005;
        arg1_00[0x6b] = 0xfffffdff;
        arg1_00[0x69] = 0x3ff;
        *(arg1_00 + 0x6f) = 0xffff00ff0000000c;
        arg1_00[0x71] = 8;
        arg1_00[0x38] = 0xff;
        arg1_00[0x44] = 0xff;
        arg1_00[0x4d] = 0xff;
        arg1_00[0x73] = 0xb4;
        arg1_00[0xd1] = 0xff;
        arg1_00[0xd5] = 0xff;
    }
    else {
        if (iVar3 != 0x2032) {
            if (iVar3 == 0x2013) {
                *(arg1_00 + 0x7a) = 0;
                *(arg1_00 + 0x1d) = 0;
                arg1_00[0x1a] = 0x6e69622e;
                uVar5 = str.aw882xx_pid_2013_monitor.bin._16_8_;
                uVar4 = str.aw882xx_pid_2013_monitor.bin._8_8_;
                uVar9 = str.aw882xx_pid_2013_monitor.bin._0_8_;
                *(arg1_00 + 0x1b) = 0;
                *(arg1_00 + 0x78) = 0;
                arg1_00[0x74] = 0;
                *(arg1_00 + 0x14) = uVar9;
                *(arg1_00 + 0x16) = uVar4;
                *(arg1_00 + 0x18) = uVar5;
                arg1_00[6] = 0;
                *arg1_00 = uVar11;
                *(arg1_00 + 0xb) = 0x3000000000;
                *(arg1_00 + 0x22) = arg1;
                uStack_3c = 0;
                *(arg1_00 + 0x10) = *(arg1 + 0x48);
                uVar9 = *(arg1 + 0x40);
                *(arg1_00 + 0xec) = sym.__typeid__ZTSFiPciE_global_addr;
                *(arg1_00 + 0xee) = sym.aw882xx_get_dev_num.cfi_jt;
                *(arg1_00 + 0x12) = uVar9;
                *(arg1_00 + 0xdc) = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                arg1_00[0x55] = 0x2000;
                *(arg1_00 + 0xf0) = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
                *(arg1_00 + 0xf2) = sym.aw_pid_2013_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xea) = sym.aw_pid_2013_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xda) = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
                arg1_00[0x5c] = 0;
                *(arg1_00 + 0xde) = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
                *(arg1_00 + 0x28) = 0xffffff7f00000004;
                *(arg1_00 + 0x2a) = 0x8000000000;
                *(arg1_00 + 0x5a) = 0xffffff7f00000004;
                *(arg1_00 + 0xe2) = sym.aw_pid_2013_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xe0) = sym.__typeid__ZTSFiP9aw_devicejE_global_addr;
                *(arg1_00 + 0x30) = 0xfffffffd00000004;
                *(arg1_00 + 0x32) = 2;
                *(arg1_00 + 0xe4) = sym.aw_pid_2013_reg_val_to_db.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0xe8) = sym.aw_pid_2013_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                *(arg1_00 + 0x3c) = 0xffffbfff00000006;
                *(arg1_00 + 0x3e) = 0x4000;
                *(arg1_00 + 0xe6) = sym.aw_pid_2013_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
                arg1_00[0x54] = 1000;
                *(arg1_00 + 0x24) = 0x200000003;
                *(arg1_00 + 0x26) = 0xffff0000ffff;
                *(arg1_00 + 0x50) = 0xffff03fffffffdff;
                *(arg1_00 + 0x2c) = 0xfffffffe00000004;
                *(arg1_00 + 0x2e) = 1;
                arg1_00[0x49] = 1;
                arg1_00[0x52] = 1;
                *(arg1_00 + 0x34) = 0xfffffeff00000004;
                *(arg1_00 + 0x36) = 0x100;
                arg1_00[0x53] = 0x50;
                arg1_00[0x38] = 0xff;
                arg1_00[0x44] = 0xff;
                arg1_00[0x4d] = 0xff;
                *(arg1_00 + 0x41) = 0xfffffc0000000078;
                arg1_00[0xd1] = 0xff;
                arg1_00[0xd5] = 0xff;
                *(arg1_00 + 0x47) = 0xffff03fffffffdff;
                *(arg1_00 + 0x4a) = 0xfffffc0000000079;
                *(arg1_00 + 0x56) = 0xffffb4c400000001;
                *(arg1_00 + 0x58) = 0x1100000311;
                *(arg1_00 + 0xc9) = 0xfffff3ff00000006;
                *(arg1_00 + 0xcb) = 0x80000000400;
                *(arg1_00 + 0xcd) = 0xffffefff00000005;
                *(arg1_00 + 0x5e) = 0xffffffcf00000061;
                *(arg1_00 + 0x60) = 0x10;
                *(arg1_00 + 0xcf) = 0x100000000000;
                arg1_00[0x69] = 0x3ff;
                arg1_00[0x68] = 0x1789;
                arg1_00[0x6a] = 0x22;
                arg1_00[0x6c] = 0xfc00;
                arg1_00[0x6b] = 0xfffffdff;
                arg1_00[0x67] = 0x21;
                *(arg1_00 + 99) = 0xfffffffb00000055;
                *(arg1_00 + 0x65) = 0x400000000;
                *(arg1_00 + 0x6d) = 0xffff8fff00000061;
                arg1_00[0x71] = 0;
                *(arg1_00 + 0x6f) = 0xfffffc0000000005;
                arg1_00[0x73] = 0x2d0;
                *(arg1_00 + 0xc2) = 0x55aa00000000;
                sym.aw882xx_i2c_read(arg1,0x7a,&uStack_3c);
                iVar7 = (*(arg1_00 + 0x10))[0xe];
                uVar1 = (uStack_3c >> 0xd ^ 0xffffffff) & 7;
                uVar2 = (uStack_3c >> 10 ^ 0xffffffff) & 7;
                pcVar12 = uVar2;
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x10);
                }
                _printk(0x8004956,iVar7,"aw_pid_2013_efver_check",uVar1,pcVar12);
                if ((uVar1 == 0) || (uVar2 == 0)) {
                    piVar10 = *(arg1_00 + 0x10);
                    arg1_00[4] = 0;
                    iVar7 = piVar10[0xe];
                    if ((uVar1 == 0) || (uVar2 != 0)) {
                        if (iVar7 == 0) {
                            iVar7 = *piVar10;
                        }
                        uVar9 = 0x8004395;
                    }
                    else {
                        if (iVar7 == 0) {
                            iVar7 = *piVar10;
                        }
                        uVar9 = 0x80022d8;
                    }
                }
                else {
                    arg1_00[4] = 1;
                    iVar7 = (*(arg1_00 + 0x10))[0xe];
                    if (iVar7 == 0) {
                        iVar7 = **(arg1_00 + 0x10);
                    }
                    uVar9 = 0x8009280;
                }
                _printk(uVar9,iVar7,"aw_pid_2013_efver_check");
                iVar7 = (*(arg1_00 + 0x10))[0xe];
                if (iVar7 == 0) {
                    iVar7 = **(arg1_00 + 0x10);
                }
                _printk(0x8007bf7,iVar7,"aw_pid_2013_efver_check",arg1_00[4]);
                goto code_r0x0801f178;
            }
            goto code_r0x0801f500;
        }
        *(arg1_00 + 0x7a) = 0;
        *(arg1_00 + 0x1d) = 0;
        arg1_00[0x1a] = 0x6e69622e;
        uVar5 = str.aw882xx_pid_2032_monitor.bin._16_8_;
        uVar4 = str.aw882xx_pid_2032_monitor.bin._8_8_;
        uVar9 = str.aw882xx_pid_2032_monitor.bin._0_8_;
        *(arg1_00 + 0x1b) = 0;
        *(arg1_00 + 0x78) = 0;
        arg1_00[0x74] = 0;
        *(arg1_00 + 0x14) = uVar9;
        *(arg1_00 + 0x16) = uVar4;
        *(arg1_00 + 0x18) = uVar5;
        arg1_00[4] = 0;
        arg1_00[6] = 0;
        *(arg1_00 + 0xb) = 0x3000000000;
        *arg1_00 = uVar11;
        *(arg1_00 + 0x22) = arg1;
        *(arg1_00 + 0x10) = *(arg1 + 0x48);
        uVar9 = *(arg1 + 0x40);
        *(arg1_00 + 0xec) = sym.__typeid__ZTSFiPciE_global_addr;
        *(arg1_00 + 0xee) = sym.aw882xx_get_dev_num.cfi_jt;
        *(arg1_00 + 0x12) = uVar9;
        *(arg1_00 + 0xda) = sym.__typeid__ZTSFiP9aw_devicehjE_global_addr;
        *(arg1_00 + 0xf0) = sym.__typeid__ZTSFvP9aw_deviceE_global_addr;
        *(arg1_00 + 0xdc) = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
        *(arg1_00 + 0xf2) = sym.aw_pid_2032_get_irq_type.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0xea) = sym.aw_pid_2032_get_reg_num.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0xde) = sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr;
        *(arg1_00 + 0xe2) = sym.aw_pid_2032_get_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0x28) = 0xffffff7f00000004;
        *(arg1_00 + 0x2a) = 0x8000000000;
        *(arg1_00 + 0xe0) = sym.aw_pid_2032_set_volume.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        *(arg1_00 + 0xe4) = sym.__typeid__ZTSFjjE_global_addr;
        *(arg1_00 + 0x30) = 0xfffffffd00000004;
        *(arg1_00 + 0x32) = 2;
        *(arg1_00 + 0xe8) = sym.aw_pid_2032_check_rd_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        arg1_00[0x53] = 0x56;
        *(arg1_00 + 0xe6) = sym.aw_pid_2032_check_wr_access.61f6b004b961e1f1b588d59d0acb321f.cfi_jt;
        arg1_00[0x54] = 1000;
        *(arg1_00 + 0x24) = 0x200000003;
        *(arg1_00 + 0x26) = 0xefbf0000efbf;
        *(arg1_00 + 0x2c) = 0xfffffffe00000004;
        *(arg1_00 + 0x2e) = 1;
        *(arg1_00 + 0x3c) = 0xfffffffe00000007;
        *(arg1_00 + 0x3e) = 1;
        arg1_00[0x49] = 1;
        arg1_00[0x52] = 1;
        *(arg1_00 + 0x34) = 0xffffffef00000005;
        *(arg1_00 + 0x36) = 0x10;
        arg1_00[0x55] = 0x2000;
        *(arg1_00 + 0x41) = 0xfffffc000000007a;
        *(arg1_00 + 0x4a) = 0xfffffc0000000078;
        *(arg1_00 + 0x47) = 0xffff03fffffffdff;
        *(arg1_00 + 0x50) = 0xffff03fffffffdff;
        *(arg1_00 + 0xc9) = 0xfffff3ff00000006;
        *(arg1_00 + 0xcb) = 0x80000000400;
        *(arg1_00 + 0xcd) = 0xfffffffd00000007;
        *(arg1_00 + 0xcf) = 0x200000000;
        *(arg1_00 + 0x56) = 0xffffb4c400000001;
        *(arg1_00 + 0x58) = 0x1100000311;
        *(arg1_00 + 99) = 0xffffbfff00000066;
        *(arg1_00 + 0x65) = 0x400000000000;
        arg1_00[0x67] = 0x12;
        arg1_00[0x69] = 0x3ff;
        arg1_00[0x68] = 0x1789;
        arg1_00[0x6a] = 0x13;
        *(arg1_00 + 0x6d) = 0xfffffff000000005;
        arg1_00[0x6c] = 0xfc00;
        arg1_00[0x38] = 0xff;
        arg1_00[0x44] = 0xff;
        arg1_00[0x6b] = 0xfffffdff;
        *(arg1_00 + 0x6f) = 0xffff003f00000005;
        arg1_00[0x4d] = 0xff;
        arg1_00[0x71] = 6;
        arg1_00[0x73] = 0x2d0;
        arg1_00[0xd1] = 0xff;
        arg1_00[0xd5] = 0xff;
    }
    *(arg1_00 + 0xc2) = 0x55aa00000000;
code_r0x0801f178:
    uVar9 = sym.aw882xx_device_probe(arg1_00);
    goto code_r0x0801f180;
}


// ===== sym.aw_pid_1852_get_volume @ 0x0801f60c (size 136) =====

int sym.aw_pid_1852_get_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),0xc,&uStack_2c);
    *arg2 = (uStack_2c >> 8 & 0xf) + (uStack_2c >> 0xc) * 0xc;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_1852_set_volume;
    pcStack_58 = sym.aw_pid_1852_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1_00 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0xc;
    uVar1 = auVar5._8_4_ + iVar4 * -0xc | iVar4 << 4;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1_00,0xc,&uStack_6c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_1852_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,0xc,uStack_6c & 0xff | uVar1 << 8);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0xf) + (uVar2 >> 4 & 0xfffffff) * 0xc;
}


// ===== sym.aw_pid_1852_set_volume @ 0x0801f694 (size 216) =====

int sym.aw_pid_1852_set_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x88);
    uStack_3c = 0;
    iVar4 = (arg2 & 0xffffffffU) / 0xc;
    uVar1 = arg2 + iVar4 * -0xc | iVar4 << 4;
    sym.aw882xx_i2c_read(arg1_00,0xc,&uStack_3c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_1852_set_volume",arg2 & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,0xc,uStack_3c & 0xff | uVar1 << 8);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0xf) + (uVar2 >> 4 & 0xfffffff) * 0xc;
}


// ===== sym.aw_pid_1852_reg_val_to_db @ 0x0801f76c (size 28) =====

int sym.aw_pid_1852_reg_val_to_db(int64_t arg1)

{
    return (arg1 & 0xf) + (arg1 >> 4 & 0xfffffff) * 0xc;
}


// ===== sym.aw_pid_1852_check_rd_access @ 0x0801f788 (size 60) =====

uint8_t sym.aw_pid_1852_check_rd_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_1852_reg_access[arg1 & 0xffffffff] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801f7c4);
    (*pcVar1)();
}


// ===== sym.aw_pid_1852_check_wr_access @ 0x0801f7c4 (size 60) =====

uint8_t sym.aw_pid_1852_check_wr_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_1852_reg_access[arg1 & 0xffffffff] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801f800);
    (*pcVar1)();
}


// ===== sym.aw_pid_1852_get_reg_num @ 0x0801f800 (size 16) =====

ulong sym.aw_pid_1852_get_reg_num(void)

{
    return 0x7d;
}


// ===== sym.aw_pid_1852_get_irq_type @ 0x0801f810 (size 256) =====

uint32_t sym.aw_pid_1852_get_irq_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2;
    if ((uVar1 >> 0xe & 1) == 0) {
        uVar3 = 0;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009261,iVar2,"aw_pid_1852_get_irq_type");
        uVar3 = 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800344c,iVar2,"aw_pid_1852_get_irq_type");
        uVar3 = uVar3 | 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002b4a,iVar2,"aw_pid_1852_get_irq_type");
        uVar3 = uVar3 | 4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8006a0e,iVar2,"aw_pid_1852_get_irq_type");
        uVar3 = uVar3 | 8;
    }
    return uVar3;
}


// ===== sym.aw_pid_2013_get_volume @ 0x0801f910 (size 136) =====

int sym.aw_pid_2013_get_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),5,&uStack_2c);
    *arg2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2013_set_volume;
    pcStack_58 = sym.aw_pid_2013_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1_00 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_6c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2013_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2013_set_volume @ 0x0801f998 (size 220) =====

int sym.aw_pid_2013_set_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x88);
    uStack_3c = 0;
    iVar4 = (arg2 & 0xffffffffU) / 0x30;
    uVar1 = arg2 + iVar4 * -0x30 | iVar4 << 6;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_3c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2013_set_volume",arg2 & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2013_reg_val_to_db @ 0x0801fa74 (size 28) =====

int sym.aw_pid_2013_reg_val_to_db(int64_t arg1)

{
    return (arg1 & 0x3f) + (arg1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2013_check_rd_access @ 0x0801fa90 (size 60) =====

uint8_t sym.aw_pid_2013_check_rd_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_2013_reg_access[arg1 & 0xffffffff] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801facc);
    (*pcVar1)();
}


// ===== sym.aw_pid_2013_check_wr_access @ 0x0801facc (size 60) =====

uint8_t sym.aw_pid_2013_check_wr_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_2013_reg_access[arg1 & 0xffffffff] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801fb08);
    (*pcVar1)();
}


// ===== sym.aw_pid_2013_get_reg_num @ 0x0801fb08 (size 16) =====

ulong sym.aw_pid_2013_get_reg_num(void)

{
    return 0x7d;
}


// ===== sym.aw_pid_2013_get_irq_type @ 0x0801fb18 (size 256) =====

uint32_t sym.aw_pid_2013_get_irq_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2;
    if ((uVar1 >> 0xe & 1) == 0) {
        uVar3 = 0;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009261,iVar2,"aw_pid_2013_get_irq_type");
        uVar3 = 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800344c,iVar2,"aw_pid_2013_get_irq_type");
        uVar3 = uVar3 | 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002b4a,iVar2,"aw_pid_2013_get_irq_type");
        uVar3 = uVar3 | 4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8006a0e,iVar2,"aw_pid_2013_get_irq_type");
        uVar3 = uVar3 | 8;
    }
    return uVar3;
}


// ===== sym.aw_pid_2032_get_volume @ 0x0801fc18 (size 136) =====

int sym.aw_pid_2032_get_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),5,&uStack_2c);
    *arg2 = (uStack_2c >> 6 & 0x3f) + (uStack_2c >> 0xc) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2032_set_volume;
    pcStack_58 = sym.aw_pid_2032_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1_00 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_6c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2032_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_6c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2032_set_volume @ 0x0801fca0 (size 216) =====

int sym.aw_pid_2032_set_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x88);
    uStack_3c = 0;
    iVar4 = (arg2 & 0xffffffffU) / 0x30;
    uVar1 = arg2 + iVar4 * -0x30 | iVar4 << 6;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_3c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2032_set_volume",arg2 & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_3c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2032_reg_val_to_db @ 0x0801fd78 (size 28) =====

int sym.aw_pid_2032_reg_val_to_db(int64_t arg1)

{
    return (arg1 & 0x3f) + (arg1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2032_check_rd_access @ 0x0801fd94 (size 60) =====

uint8_t sym.aw_pid_2032_check_rd_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7d < arg1) {
        return 0;
    }
    if (arg1 < 0x7e) {
        return obj.aw_pid_2032_reg_access[arg1 & 0xffffffff] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801fdd0);
    (*pcVar1)();
}


// ===== sym.aw_pid_2032_check_wr_access @ 0x0801fdd0 (size 60) =====

uint8_t sym.aw_pid_2032_check_wr_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7d < arg1) {
        return 0;
    }
    if (arg1 < 0x7e) {
        return obj.aw_pid_2032_reg_access[arg1 & 0xffffffff] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x801fe0c);
    (*pcVar1)();
}


// ===== sym.aw_pid_2032_get_reg_num @ 0x0801fe0c (size 16) =====

ulong sym.aw_pid_2032_get_reg_num(void)

{
    return 0x7e;
}


// ===== sym.aw_pid_2032_get_irq_type @ 0x0801fe1c (size 256) =====

uint32_t sym.aw_pid_2032_get_irq_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2;
    if ((uVar1 >> 0xe & 1) == 0) {
        uVar3 = 0;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009261,iVar2,"aw_pid_2032_get_irq_type");
        uVar3 = 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800344c,iVar2,"aw_pid_2032_get_irq_type");
        uVar3 = uVar3 | 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002b4a,iVar2,"aw_pid_2032_get_irq_type");
        uVar3 = uVar3 | 4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8006a0e,iVar2,"aw_pid_2032_get_irq_type");
        uVar3 = uVar3 | 8;
    }
    return uVar3;
}


// ===== sym.aw_pid_2055a_get_volume @ 0x0801ff1c (size 136) =====

int sym.aw_pid_2055a_get_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),5,&uStack_2c);
    *arg2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2055a_set_volume;
    pcStack_58 = sym.aw_pid_2055a_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1_00 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_6c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055a_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055a_set_volume @ 0x0801ffa4 (size 220) =====

int sym.aw_pid_2055a_set_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x88);
    uStack_3c = 0;
    iVar4 = (arg2 & 0xffffffffU) / 0x30;
    uVar1 = arg2 + iVar4 * -0x30 | iVar4 << 6;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_3c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055a_set_volume",arg2 & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055a_reg_val_to_db @ 0x08020080 (size 28) =====

int sym.aw_pid_2055a_reg_val_to_db(int64_t arg1)

{
    return (arg1 & 0x3f) + (arg1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055a_check_rd_access @ 0x0802009c (size 60) =====

uint8_t sym.aw_pid_2055a_check_rd_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_2055a_reg_access[arg1 & 0xffffffff] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80200d8);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055a_check_wr_access @ 0x080200d8 (size 60) =====

uint8_t sym.aw_pid_2055a_check_wr_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_2055a_reg_access[arg1 & 0xffffffff] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8020114);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055a_get_reg_num @ 0x08020114 (size 16) =====

ulong sym.aw_pid_2055a_get_reg_num(void)

{
    return 0x7d;
}


// ===== sym.aw_pid_2055a_get_irq_type @ 0x08020124 (size 256) =====

uint32_t sym.aw_pid_2055a_get_irq_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2;
    if ((uVar1 >> 0xe & 1) == 0) {
        uVar3 = 0;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009261,iVar2,"aw_pid_2055a_get_irq_type");
        uVar3 = 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800344c,iVar2,"aw_pid_2055a_get_irq_type");
        uVar3 = uVar3 | 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002b4a,iVar2,"aw_pid_2055a_get_irq_type");
        uVar3 = uVar3 | 4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8006a0e,iVar2,"aw_pid_2055a_get_irq_type");
        uVar3 = uVar3 | 8;
    }
    return uVar3;
}


// ===== sym.aw_pid_2055_get_volume @ 0x08020224 (size 136) =====

int sym.aw_pid_2055_get_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),5,&uStack_2c);
    *arg2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2055_set_volume;
    pcStack_58 = sym.aw_pid_2055_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1_00 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_6c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055_set_volume @ 0x080202ac (size 220) =====

int sym.aw_pid_2055_set_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x88);
    uStack_3c = 0;
    iVar4 = (arg2 & 0xffffffffU) / 0x30;
    uVar1 = arg2 + iVar4 * -0x30 | iVar4 << 6;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_3c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2055_set_volume",arg2 & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055_reg_val_to_db @ 0x08020388 (size 28) =====

int sym.aw_pid_2055_reg_val_to_db(int64_t arg1)

{
    return (arg1 & 0x3f) + (arg1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2055_check_rd_access @ 0x080203a4 (size 60) =====

uint8_t sym.aw_pid_2055_check_rd_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_2055_reg_access[arg1 & 0xffffffff] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80203e0);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055_check_wr_access @ 0x080203e0 (size 60) =====

uint8_t sym.aw_pid_2055_check_wr_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7c < arg1) {
        return 0;
    }
    if (arg1 < 0x7d) {
        return obj.aw_pid_2055_reg_access[arg1 & 0xffffffff] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x802041c);
    (*pcVar1)();
}


// ===== sym.aw_pid_2055_get_reg_num @ 0x0802041c (size 16) =====

ulong sym.aw_pid_2055_get_reg_num(void)

{
    return 0x7d;
}


// ===== sym.aw_pid_2055_get_irq_type @ 0x0802042c (size 256) =====

uint32_t sym.aw_pid_2055_get_irq_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2;
    if ((uVar1 >> 0xe & 1) == 0) {
        uVar3 = 0;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009261,iVar2,"aw_pid_2055_get_irq_type");
        uVar3 = 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800344c,iVar2,"aw_pid_2055_get_irq_type");
        uVar3 = uVar3 | 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002b4a,iVar2,"aw_pid_2055_get_irq_type");
        uVar3 = uVar3 | 4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8006a0e,iVar2,"aw_pid_2055_get_irq_type");
        uVar3 = uVar3 | 8;
    }
    return uVar3;
}


// ===== sym.aw_pid_2071_get_volume @ 0x0802052c (size 136) =====

int sym.aw_pid_2071_get_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),5,&uStack_2c);
    *arg2 = (uStack_2c >> 6 & 0x3f) + (uStack_2c >> 0xc) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2071_set_volume;
    pcStack_58 = sym.aw_pid_2071_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1_00 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_6c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2071_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_6c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2071_set_volume @ 0x080205b4 (size 216) =====

int sym.aw_pid_2071_set_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x88);
    uStack_3c = 0;
    iVar4 = (arg2 & 0xffffffffU) / 0x30;
    uVar1 = arg2 + iVar4 * -0x30 | iVar4 << 6;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_3c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2071_set_volume",arg2 & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_3c & 0x3f | uVar1 << 6);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2071_reg_val_to_db @ 0x0802068c (size 28) =====

int sym.aw_pid_2071_reg_val_to_db(int64_t arg1)

{
    return (arg1 & 0x3f) + (arg1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2071_check_rd_access @ 0x080206a8 (size 60) =====

uint8_t sym.aw_pid_2071_check_rd_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7d < arg1) {
        return 0;
    }
    if (arg1 < 0x7e) {
        return obj.aw_pid_2071_reg_access[arg1 & 0xffffffff] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80206e4);
    (*pcVar1)();
}


// ===== sym.aw_pid_2071_check_wr_access @ 0x080206e4 (size 60) =====

uint8_t sym.aw_pid_2071_check_wr_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7d < arg1) {
        return 0;
    }
    if (arg1 < 0x7e) {
        return obj.aw_pid_2071_reg_access[arg1 & 0xffffffff] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8020720);
    (*pcVar1)();
}


// ===== sym.aw_pid_2071_get_reg_num @ 0x08020720 (size 16) =====

ulong sym.aw_pid_2071_get_reg_num(void)

{
    return 0x7e;
}


// ===== sym.aw_pid_2071_get_irq_type @ 0x08020730 (size 256) =====

uint32_t sym.aw_pid_2071_get_irq_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2;
    if ((uVar1 >> 0xe & 1) == 0) {
        uVar3 = 0;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009261,iVar2,"aw_pid_2071_get_irq_type");
        uVar3 = 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800344c,iVar2,"aw_pid_2071_get_irq_type");
        uVar3 = uVar3 | 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002b4a,iVar2,"aw_pid_2071_get_irq_type");
        uVar3 = uVar3 | 4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8006a0e,iVar2,"aw_pid_2071_get_irq_type");
        uVar3 = uVar3 | 8;
    }
    return uVar3;
}


// ===== sym.aw_pid_2113_get_volume @ 0x08020830 (size 136) =====

int sym.aw_pid_2113_get_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uchar auVar5 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    uStack_2c = 0;
    sym.aw882xx_i2c_read(*(arg1 + 0x88),5,&uStack_2c);
    *arg2 = (uStack_2c & 0x3f) + (uStack_2c >> 6 & 0xf) * 0x30;
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_28) {
        return 0;
    }
    auVar5 = __stack_chk_fail();
    *extraout_x18 = sym.aw_pid_2113_set_volume;
    pcStack_58 = sym.aw_pid_2113_set_volume;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    arg1_00 = *(auVar5._0_8_ + 0x88);
    uStack_6c = 0;
    iVar4 = (auVar5._8_8_ & 0xffffffff) / 0x30;
    uVar1 = auVar5._8_4_ + iVar4 * -0x30 | iVar4 << 6;
    puStack_60 = &stack0xffffffffffffffe0;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_6c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2113_set_volume",auVar5._8_8_ & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_6c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2113_set_volume @ 0x080208b8 (size 220) =====

int sym.aw_pid_2113_set_volume(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    arg1_00 = *(arg1 + 0x88);
    uStack_3c = 0;
    iVar4 = (arg2 & 0xffffffffU) / 0x30;
    uVar1 = arg2 + iVar4 * -0x30 | iVar4 << 6;
    sym.aw882xx_i2c_read(arg1_00,5,&uStack_3c);
    iVar3 = (*(arg1_00 + 0x48))[0xe];
    if (iVar3 == 0) {
        iVar3 = **(arg1_00 + 0x48);
    }
    _printk(0x8003bf0,iVar3,"aw_pid_2113_set_volume",arg2 & 0xffffffff,uVar1);
    sym.aw882xx_i2c_write(arg1_00,5,uStack_3c & 0xfc00 | uVar1);
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    uVar2 = __stack_chk_fail();
    return (uVar2 & 0x3f) + (uVar2 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2113_reg_val_to_db @ 0x08020994 (size 28) =====

int sym.aw_pid_2113_reg_val_to_db(int64_t arg1)

{
    return (arg1 & 0x3f) + (arg1 >> 6 & 0x3ffffff) * 0x30;
}


// ===== sym.aw_pid_2113_check_rd_access @ 0x080209b0 (size 60) =====

uint8_t sym.aw_pid_2113_check_rd_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7f < arg1) {
        return 0;
    }
    if (arg1 < 0x80) {
        return obj.aw_pid_2113_reg_access[arg1 & 0xffffffff] & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x80209ec);
    (*pcVar1)();
}


// ===== sym.aw_pid_2113_check_wr_access @ 0x080209ec (size 60) =====

uint8_t sym.aw_pid_2113_check_wr_access(int64_t arg1)

{
    code *pcVar1;
    
    if (0x7f < arg1) {
        return 0;
    }
    if (arg1 < 0x80) {
        return obj.aw_pid_2113_reg_access[arg1 & 0xffffffff] >> 1 & 1;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8020a28);
    (*pcVar1)();
}


// ===== sym.aw_pid_2113_get_reg_num @ 0x08020a28 (size 16) =====

ulong sym.aw_pid_2113_get_reg_num(void)

{
    return 0x80;
}


// ===== sym.aw_pid_2113_get_irq_type @ 0x08020a38 (size 256) =====

uint32_t sym.aw_pid_2113_get_irq_type(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong *in_x18;
    uint32_t uVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2;
    if ((uVar1 >> 0xe & 1) == 0) {
        uVar3 = 0;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8009261,iVar2,"aw_pid_2113_get_irq_type");
        uVar3 = 1;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x800344c,iVar2,"aw_pid_2113_get_irq_type");
        uVar3 = uVar3 | 2;
    }
    if ((uVar1 >> 3 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8002b4a,iVar2,"aw_pid_2113_get_irq_type");
        uVar3 = uVar3 | 4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8006a0e,iVar2,"aw_pid_2113_get_irq_type");
        uVar3 = uVar3 | 8;
    }
    return uVar3;
}


// ===== sym.aw_pid_2113_reg_force_set @ 0x08020b38 (size 628) =====

void sym.aw_pid_2113_reg_force_set(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = (*(arg1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x40);
    }
    _printk(0x8005ab4,iVar2,"aw_pid_2113_reg_force_set");
    if (*(arg1 + 0x14) == 1) {
        pcVar3 = *(arg1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d00);
        }
        (*pcVar3)(arg1,0x62,0xffffefff,0x1000);
        pcVar3 = *(arg1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d20);
        }
        (*pcVar3)(arg1,100,0xfffffff8,4);
        pcVar3 = *(arg1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d40);
        }
        (*pcVar3)(arg1,0x65,0xfffffffc,2);
        pcVar3 = *(arg1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d60);
        }
        (*pcVar3)(arg1,0x66,0xffff3fff,0x8000);
        pcVar3 = *(arg1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001d80);
        }
        (*pcVar3)(arg1,0x67,0xfffffff7,0);
        pcVar3 = *(arg1 + 0x378);
        if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar3,0x8001da0);
        }
        (*pcVar3)(arg1,0x68,0xfffffc7f,0x100);
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x8007415;
    }
    else {
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        uVar1 = 0x8006016;
    }
    _printk(uVar1,iVar2,"aw_pid_2113_reg_force_set");
    return;
}


// ===== sym.aw_pid_2113_frcset_check @ 0x08020dac (size 340) =====

ulong sym.aw_pid_2113_frcset_check(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    code *pcVar7;
    code *pcVar8;
    code *extraout_x8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uint32_t uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    code *pcStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    pcVar7 = *(arg1 + 0x370);
    uStack_3c = 0;
    if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar7,0x8001dc0);
    }
    (*pcVar7)(arg1,0x79,&uStack_3c);
    uVar3 = uStack_3c;
    pcVar8 = *(arg1 + 0x370);
    uVar9 = uStack_3c;
    pcVar7 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
    if (pcVar8 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
        __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar8,0x8001de0);
        pcVar7 = pcVar8;
    }
    (*pcVar8)(arg1,0x7d,&uStack_3c);
    uVar2 = uStack_3c & 0xffff | uVar3;
    if (*(arg1 + 0x1c) != 1) {
        uVar2 = uStack_3c & 0xffff & uVar3;
    }
    *(arg1 + 0x14) = (uVar2 & 0x7c00) == 0;
    iVar6 = (*(arg1 + 0x40))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(arg1 + 0x40);
    }
    _printk(0x8007861,iVar6,"aw_pid_2113_frcset_check");
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return 0;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_monitor_start;
    pcStack_68 = sym.aw882xx_monitor_start;
    iVar6 = sp_el0;
    iStack_78 = *(iVar6 + 0x5e0);
    iVar6 = (*(iVar4 + -0x1c0))[0xe];
    if (iVar6 == 0) {
        iVar6 = **(iVar4 + -0x1c0);
    }
    iVar10 = *(iVar4 + -0x178);
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_60 = pcVar7;
    uStack_50 = uVar9;
    iStack_48 = arg1;
    _printk(0x8004092,iVar6,"aw882xx_monitor_start");
    *(iVar4 + 0xd8) = 0;
    *(iVar4 + 0xf8) = 0;
    *(iVar4 + 0xe4) = 0;
    iVar6 = (*(iVar4 + -0x1c0))[0xe];
    uStack_7c = 0;
    if (iVar6 == 0) {
        iVar6 = **(iVar4 + -0x1c0);
    }
    _printk(0x8005ab4,iVar6,"aw_check_bop_status");
    iVar1 = *(iVar4 + 0x144);
    if (iVar1 == 0xff) {
        while( true ) {
            if (*(iVar4 + -0x1e8) == 1) {
                iVar6 = (*(iVar4 + -0x1c0))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(iVar4 + -0x1c0);
                }
                uVar5 = _printk(0x80064ae,iVar6,"aw882xx_monitor_start");
            }
            else {
                uVar5 = queue_delayed_work_on(0x20,*(iVar10 + 0x70),iVar4,0);
            }
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_78) break;
            __stack_chk_fail();
            pcVar7 = extraout_x8;
code_r0x08021088:
            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar7,0x8001e00);
            iVar1 = *(iVar4 + 0x144);
code_r0x08021004:
            (*pcVar7)(iVar4 + -0x200,iVar1,&uStack_7c);
            uStack_7c = uStack_7c & 0xffff & (*(iVar4 + 0x148) ^ 0xffff);
            *(iVar4 + -0x1e8) = uStack_7c == *(iVar4 + 0x14c);
            iVar6 = (*(iVar4 + -0x1c0))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar4 + -0x1c0);
            }
            _printk(0x800403a,iVar6,"aw_check_bop_status");
        }
        return uVar5;
    }
    pcVar7 = *(iVar4 + 0x170);
    if (pcVar7 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) goto code_r0x08021088;
    goto code_r0x08021004;
}


// ===== sym.aw882xx_monitor_start @ 0x08020f00 (size 440) =====

void sym.aw882xx_monitor_start(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    code *pcVar3;
    code *extraout_x8;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    iVar2 = (*(arg1 + -0x1c0))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + -0x1c0);
    }
    iVar4 = *(arg1 + -0x178);
    _printk(0x8004092,iVar2,"aw882xx_monitor_start");
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0xe4) = 0;
    iVar2 = (*(arg1 + -0x1c0))[0xe];
    uStack_3c = 0;
    if (iVar2 == 0) {
        iVar2 = **(arg1 + -0x1c0);
    }
    _printk(0x8005ab4,iVar2,"aw_check_bop_status");
    iVar1 = *(arg1 + 0x144);
    if (iVar1 == 0xff) {
        while( true ) {
            if (*(arg1 + -0x1e8) == 1) {
                iVar2 = (*(arg1 + -0x1c0))[0xe];
                if (iVar2 == 0) {
                    iVar2 = **(arg1 + -0x1c0);
                }
                _printk(0x80064ae,iVar2,"aw882xx_monitor_start");
            }
            else {
                queue_delayed_work_on(0x20,*(iVar4 + 0x70),arg1,0);
            }
            iVar2 = sp_el0;
            if (*(iVar2 + 0x5e0) == iStack_38) break;
            __stack_chk_fail();
            pcVar3 = extraout_x8;
code_r0x08021088:
            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar3,0x8001e00);
            iVar1 = *(arg1 + 0x144);
code_r0x08021004:
            (*pcVar3)(arg1 + -0x200,iVar1,&uStack_3c);
            uStack_3c = uStack_3c & 0xffff & (*(arg1 + 0x148) ^ 0xffff);
            *(arg1 + -0x1e8) = uStack_3c == *(arg1 + 0x14c);
            iVar2 = (*(arg1 + -0x1c0))[0xe];
            if (iVar2 == 0) {
                iVar2 = **(arg1 + -0x1c0);
            }
            _printk(0x800403a,iVar2,"aw_check_bop_status");
        }
        return;
    }
    pcVar3 = *(arg1 + 0x170);
    if (pcVar3 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) goto code_r0x08021088;
    goto code_r0x08021004;
}


// ===== sym.aw882xx_monitor_stop @ 0x080210b8 (size 104) =====

ulong sym.aw882xx_monitor_stop(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*(arg1 + -0x1c0))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(arg1 + -0x1c0);
    }
    _printk(0x8004092,iVar1,"aw882xx_monitor_stop");
    if ((*arg1 & 1) != 0) {
        cancel_delayed_work_sync(arg1);
    }
    return 0;
}


// ===== sym.aw882xx_monitor_parse_fw @ 0x08021120 (size 2124) =====

ulong sym.aw882xx_monitor_parse_fw(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int iVar9;
    uint8_t *puVar10;
    ulong *in_x18;
    int64_t iVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        _printk(0x800401b);
code_r0x08021188:
        uVar3 = 0xffffffea;
    }
    else {
        iVar11 = arg1 + -0x200;
        if (arg3 < 0x54) {
            iVar11 = (*(arg1 + -0x1c0))[0xe];
            if (iVar11 == 0) {
                iVar11 = **(arg1 + -0x1c0);
            }
            uVar3 = 0x8007113;
            pcVar5 = "aw_monitor_param_check_sum";
        }
        else {
            if (arg3 + 0x7fffffff < 0x80000005) {
                iVar9 = 0;
                uVar7 = 4;
code_r0x08021204:
                do {
                    iVar4 = uVar7;
                    uVar7 = uVar7 + 1;
                    iVar9 = iVar9 + *(arg2 + iVar4);
                } while (arg3 != uVar7);
            }
            else {
                iVar8 = 0;
                uVar1 = arg3 - 4 & 0xfffffffe;
                iVar9 = 0;
                uVar7 = uVar1 + 4;
                puVar10 = arg2 + 5;
                uVar2 = uVar1;
                do {
                    uVar2 = uVar2 - 2;
                    iVar8 = iVar8 + puVar10[-1];
                    iVar9 = iVar9 + *puVar10;
                    puVar10 = puVar10 + 2;
                } while (uVar2 != 0);
                iVar9 = iVar9 + iVar8;
                if (arg3 - 4 != uVar1) goto code_r0x08021204;
            }
            if (*arg2 != iVar9) {
                iVar11 = (*(arg1 + -0x1c0))[0xe];
                if (iVar11 == 0) {
                    iVar11 = **(arg1 + -0x1c0);
                }
                _printk(0x800715c,iVar11,"aw_monitor_param_check_sum");
                return 0xfffffff4;
            }
            if (*(arg2 + 4) == 0x10100) {
                uVar7 = *(arg2 + 0x34);
                if (arg3 < uVar7) {
                    iVar11 = (*(arg1 + -0x1c0))[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **(arg1 + -0x1c0);
                    }
                    uVar3 = 0x8006a2d;
                }
                else {
                    uVar7 = *(arg2 + 0x44);
                    if (arg3 < uVar7) {
                        iVar11 = (*(arg1 + -0x1c0))[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **(arg1 + -0x1c0);
                        }
                        uVar3 = 0x80092b5;
                    }
                    else {
                        uVar7 = *(arg2 + 0x30) * *(arg2 + 0x2c);
                        if (arg3 < uVar7) {
                            iVar11 = (*(arg1 + -0x1c0))[0xe];
                            if (iVar11 == 0) {
                                iVar11 = **(arg1 + -0x1c0);
                            }
                            uVar3 = 0x8004645;
                        }
                        else {
                            uVar7 = *(arg2 + 0x40) * *(arg2 + 0x3c);
                            if (uVar7 <= arg3) {
                                *(arg1 + 0x8c) = *(arg2 + 0x24) & 1;
                                *(arg1 + 0x90) = *(arg2 + 0x1c);
                                *(arg1 + 0x94) = *(arg2 + 0x20);
                                *(arg1 + 0xac) = *(arg2 + 0x24) >> 2 & 1;
                                *(arg1 + 0x98) = *(arg2 + 0x24) >> 1 & 1;
                                *(arg1 + 0xb0) = *(arg2 + 0x24) >> 3 & 1;
                                *(arg1 + 0xb4) = *(arg2 + 0x24) >> 4 & 1;
                                *(arg1 + 0x9c) = *(arg2 + 0x24) >> 5 & 1;
                                *(arg1 + 0xa0) = *(arg2 + 0x28);
                                *(arg1 + 0xa4) = *(arg2 + 0x24) >> 6 & 1;
                                *(arg1 + 0xa8) = *(arg2 + 0x38);
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x80078ac,iVar4,"aw_monitor_parse_hdr_v_0_1_1",arg2 + 8);
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x80087c7,iVar4,"aw_monitor_parse_hdr_v_0_1_1",*(arg2 + 0x18));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x8002719,iVar4,"aw_monitor_parse_hdr_v_0_1_1",*(arg1 + 0x8c),*(arg1 + 0x90)
                                        ,*(arg1 + 0x94));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x8009319,iVar4,"aw_monitor_parse_hdr_v_0_1_1",*(arg1 + 0x98),*(arg1 + 0xac)
                                        ,*(arg1 + 0xb0),*(arg1 + 0xb4));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                uVar6 = *(arg1 + 0x9c);
                                _printk(0x80078cc,iVar4,"aw_monitor_parse_hdr_v_0_1_1",uVar6,*(arg1 + 0xa0),
                                        *(arg1 + 0xa4),*(arg1 + 0xa8));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x800800a,iVar4,"aw_monitor_parse_temp_data_v_0_1_1");
                                if (*(arg1 + 0xc0) != 0) {
                                    devm_kfree(*(arg1 + -0x1c0));
                                    *(arg1 + 0xc0) = 0;
                                }
                                iVar4 = devm_kmalloc(*(arg1 + -0x1c0),*(arg2 + 0x2c) * 0xc,0xdc0);
                                *(arg1 + 0xc0) = iVar4;
                                if (iVar4 == 0) {
                                    return 0xfffffff4;
                                }
                                *(arg1 + 0xb8) = *(arg2 + 0x2c);
                                sym.aw_monitor_write_data_to_table(iVar11,arg1 + 0xb8,arg2 + *(arg2 + 0x34),uVar6);
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x8004d05,iVar4,"aw_monitor_parse_temp_data_v_0_1_1");
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x80092ef,iVar4,"aw_monitor_parse_vol_data_v_0_1_1");
                                if (*(arg1 + 0xd0) != 0) {
                                    devm_kfree(*(arg1 + -0x1c0));
                                    *(arg1 + 0xd0) = 0;
                                }
                                iVar4 = devm_kmalloc(*(arg1 + -0x1c0),*(arg2 + 0x3c) * 0xc,0xdc0);
                                *(arg1 + 0xd0) = iVar4;
                                if (iVar4 != 0) {
                                    *(arg1 + 200) = *(arg2 + 0x3c);
                                    sym.aw_monitor_write_data_to_table(iVar11,arg1 + 200,arg2 + *(arg2 + 0x44),uVar6)
                                    ;
                                    iVar11 = (*(arg1 + -0x1c0))[0xe];
                                    if (iVar11 == 0) {
                                        iVar11 = **(arg1 + -0x1c0);
                                    }
                                    pcVar5 = "aw_monitor_parse_vol_data_v_0_1_1";
code_r0x08021958:
                                    _printk(0x80049a3,iVar11,pcVar5);
                                    *(arg1 + 0x88) = 1;
                                    return 0;
                                }
code_r0x080218fc:
                                if (*(arg1 + 0xc0) == 0) {
                                    return 0xfffffff4;
                                }
                                devm_kfree(*(arg1 + -0x1c0));
                                *(arg1 + 0xc0) = 0;
                                *(arg1 + 0xb8) = 0;
                                return 0xfffffff4;
                            }
                            iVar11 = (*(arg1 + -0x1c0))[0xe];
                            if (iVar11 == 0) {
                                iVar11 = **(arg1 + -0x1c0);
                            }
                            uVar3 = 0x8002bb6;
                        }
                    }
                }
                _printk(uVar3,iVar11,"aw_monitor_check_fw_v_0_1_1",uVar7,arg3);
                iVar11 = (*(arg1 + -0x1c0))[0xe];
                if (iVar11 == 0) {
                    iVar11 = **(arg1 + -0x1c0);
                }
                uVar3 = 0x800406a;
                pcVar5 = "aw_monitor_parse_data_v_0_1_1";
            }
            else {
                if (*(arg2 + 4) != 0x10000) {
                    iVar11 = (*(arg1 + -0x1c0))[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **(arg1 + -0x1c0);
                    }
                    _printk(0x80064eb,iVar11,"aw882xx_monitor_parse_fw");
                    goto code_r0x08021188;
                }
                uVar7 = *(arg2 + 0x3c);
                if (arg3 < uVar7) {
                    iVar11 = (*(arg1 + -0x1c0))[0xe];
                    if (iVar11 == 0) {
                        iVar11 = **(arg1 + -0x1c0);
                    }
                    uVar3 = 0x8006a2d;
                }
                else {
                    uVar7 = *(arg2 + 0x50);
                    if (arg3 < uVar7) {
                        iVar11 = (*(arg1 + -0x1c0))[0xe];
                        if (iVar11 == 0) {
                            iVar11 = **(arg1 + -0x1c0);
                        }
                        uVar3 = 0x80092b5;
                    }
                    else {
                        uVar7 = *(arg2 + 0x38) * *(arg2 + 0x34);
                        if (arg3 < uVar7) {
                            iVar11 = (*(arg1 + -0x1c0))[0xe];
                            if (iVar11 == 0) {
                                iVar11 = **(arg1 + -0x1c0);
                            }
                            uVar3 = 0x8004645;
                        }
                        else {
                            uVar7 = *(arg2 + 0x4c) * *(arg2 + 0x48);
                            if (uVar7 <= arg3) {
                                *(arg1 + 0x8c) = *(arg2 + 0x14);
                                *(arg1 + 0x90) = *(arg2 + 0x18);
                                *(arg1 + 0x94) = *(arg2 + 0x1c);
                                *(arg1 + 0xac) = *(arg2 + 0x20);
                                *(arg1 + 0xb0) = *(arg2 + 0x24);
                                *(arg1 + 0xb4) = *(arg2 + 0x28);
                                *(arg1 + 0x9c) = *(arg2 + 0x2c);
                                *(arg1 + 0xa0) = *(arg2 + 0x30);
                                *(arg1 + 0xa4) = *(arg2 + 0x40);
                                *(arg1 + 0xa8) = *(arg2 + 0x44);
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x80078ac,iVar4,"aw_monitor_parse_hdr",arg2 + 8);
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x80087c7,iVar4,"aw_monitor_parse_hdr",*(arg2 + 0x10));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x8002719,iVar4,"aw_monitor_parse_hdr",*(arg1 + 0x8c),*(arg1 + 0x90),
                                        *(arg1 + 0x94));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x8008b93,iVar4,"aw_monitor_parse_hdr",*(arg1 + 0xac),*(arg1 + 0xb0),
                                        *(arg1 + 0xb4));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                uVar6 = *(arg1 + 0x9c);
                                _printk(0x80078cc,iVar4,"aw_monitor_parse_hdr",uVar6,*(arg1 + 0xa0),*(arg1 + 0xa4)
                                        ,*(arg1 + 0xa8));
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x800800a,iVar4,"aw_monitor_parse_temp_data");
                                if (*(arg1 + 0xc0) != 0) {
                                    devm_kfree(*(arg1 + -0x1c0));
                                    *(arg1 + 0xc0) = 0;
                                }
                                iVar4 = devm_kmalloc(*(arg1 + -0x1c0),*(arg2 + 0x34) * 0xc,0xdc0);
                                *(arg1 + 0xc0) = iVar4;
                                if (iVar4 == 0) {
                                    return 0xfffffff4;
                                }
                                *(arg1 + 0xb8) = *(arg2 + 0x34);
                                sym.aw_monitor_write_data_to_table(iVar11,arg1 + 0xb8,arg2 + *(arg2 + 0x3c),uVar6);
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x8004d05,iVar4,"aw_monitor_parse_temp_data");
                                iVar4 = (*(arg1 + -0x1c0))[0xe];
                                if (iVar4 == 0) {
                                    iVar4 = **(arg1 + -0x1c0);
                                }
                                _printk(0x80092ef,iVar4,"aw_monitor_parse_vol_data");
                                if (*(arg1 + 0xd0) != 0) {
                                    devm_kfree(*(arg1 + -0x1c0));
                                    *(arg1 + 0xd0) = 0;
                                }
                                iVar4 = devm_kmalloc(*(arg1 + -0x1c0),*(arg2 + 0x48) * 0xc,0xdc0);
                                *(arg1 + 0xd0) = iVar4;
                                if (iVar4 != 0) {
                                    *(arg1 + 200) = *(arg2 + 0x48);
                                    sym.aw_monitor_write_data_to_table(iVar11,arg1 + 200,arg2 + *(arg2 + 0x50),uVar6)
                                    ;
                                    iVar11 = (*(arg1 + -0x1c0))[0xe];
                                    if (iVar11 == 0) {
                                        iVar11 = **(arg1 + -0x1c0);
                                    }
                                    pcVar5 = "aw_monitor_parse_vol_data";
                                    goto code_r0x08021958;
                                }
                                goto code_r0x080218fc;
                            }
                            iVar11 = (*(arg1 + -0x1c0))[0xe];
                            if (iVar11 == 0) {
                                iVar11 = **(arg1 + -0x1c0);
                            }
                            uVar3 = 0x8002bb6;
                        }
                    }
                }
                _printk(uVar3,iVar11,"aw_monitor_check_fw",uVar7,arg3);
                iVar11 = (*(arg1 + -0x1c0))[0xe];
                if (iVar11 == 0) {
                    iVar11 = **(arg1 + -0x1c0);
                }
                uVar3 = 0x800406a;
                pcVar5 = "aw_monitor_parse_data";
            }
        }
        _printk(uVar3,iVar11,pcVar5);
        uVar3 = 0xfffffff4;
    }
    return uVar3;
}


// ===== sym.aw882xx_monitor_init @ 0x0802196c (size 208) =====

void sym.aw882xx_monitor_init(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = (*(arg1 + -0x1c0))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + -0x1c0);
    }
    _printk(0x8004092,iVar2,"aw882xx_monitor_init");
    *arg1 = 0xfffffffe0;
    *(arg1 + 8) = arg1 + 8;
    *(arg1 + 0x10) = arg1 + 8;
    *(arg1 + 0x18) = sym.aw_monitor_work_func.9c1daae124d9744bafb1c7ef780f7a7a.cfi_jt;
    init_timer_key(arg1 + 0x30,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
    iVar1 = sysfs_create_group(*(arg1 + -0x1c0),obj.aw_monitor_attr_group);
    if (iVar1 < 0) {
        iVar2 = (*(arg1 + -0x1c0))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + -0x1c0);
        }
        _printk(0x8003907,iVar2,"aw882xx_monitor_init");
    }
    return;
}


// ===== sym.aw_monitor_work_func @ 0x08021a3c (size 2156) =====

void sym.aw_monitor_work_func(int64_t arg1)

{
    uint8_t uVar1;
    uint uVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    ulong uVar7;
    int64_t iVar8;
    uint32_t extraout_w8;
    int64_t *piVar9;
    ulong *in_x18;
    int64_t arg1_00;
    ulong uVar10;
    uint16_t uVar11;
    int64_t iVar12;
    uint32_t uVar13;
    code *unaff_x23;
    code *pcVar14;
    int64_t unaff_x24;
    code *unaff_x25;
    ulong unaff_x30;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    arg1_00 = arg1 + -0x200;
    iVar8 = (*(arg1 + -0x1c0))[0xe];
    if (iVar8 == 0) {
        iVar8 = **(arg1 + -0x1c0);
    }
    iVar12 = *(arg1 + -0x178);
    _printk(0x8002766,iVar8,"aw_monitor_work_func",*(arg1 + -500),*(arg1 + 0x88),*(arg1 + 0x8c));
    if (((*(arg1 + 0x88) == '\x01') && (*(arg1 + -500) != 0)) && (*(arg1 + 0x8c) != 0)) {
        uStack_60 = uStack_60 & 0xffffffff;
        iVar8 = (*(arg1 + -0x1c0))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(arg1 + -0x1c0);
        }
        _printk(0x8005ab4,iVar8,"aw_get_hmute");
        pcVar14 = *(arg1 + 0x170);
        unaff_x25 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
        if (pcVar14 != sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr) {
            __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar14,0x8001e20);
        }
        iVar4 = (*pcVar14)(arg1_00,*(arg1 + -0x130),&uStack_60 + 4);
        if ((-1 < iVar4) && ((uStack_60._4_4_ & (*(arg1 + -300) ^ 0xffffffff)) == 0)) {
            if (obj.soc_codec_dev_aw882xx == 0x1) {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                _printk(0x80054b7,iVar8,"aw_monitor_work");
                pcVar14 = unaff_x25;
                goto code_r0x08021d40;
            }
            uStack_60 = 0;
            iVar4 = sym.aw_monitor_get_data_form_system(arg1_00,&uStack_60 + 4,0xc);
            pcVar14 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
            if (iVar4 == 0) {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                uStack_60 = CONCAT44(uStack_60._4_4_ / 1000,uStack_60);
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                _printk(0x8002bef,iVar8,"aw_monitor_get_voltage");
            }
            else {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                _printk(0x8006d36,iVar8,"aw_monitor_get_voltage");
                if (iVar4 < 0) goto code_r0x08021d40;
            }
            iVar4 = sym.aw_monitor_get_data_form_system(arg1_00,&uStack_60,0x33);
            if (iVar4 == 0) {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                iVar4 = uStack_60 / 10;
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                _printk(0x800936d,iVar8,"aw_monitor_get_temperature",iVar4);
                uVar1 = *(arg1 + 0xd9) + 1;
                *(arg1 + 0xf8) = *(arg1 + 0xf8) + uStack_60._4_4_;
                *(arg1 + 0xe4) = *(arg1 + 0xe4) + iVar4;
                *(arg1 + 0xd9) = uVar1;
                if ((uVar1 < *(arg1 + 0x94)) && (pcVar14 = unaff_x25, *(arg1 + 0xd8) == '\x01')) goto code_r0x08021d40;
                if (*(arg1 + 0xa4) == 0) {
                    *(arg1 + 0x100) = 0xffffffff00ff00ff;
                }
                else {
                    iVar4 = sym.aw_monitor_get_data_from_table(arg1_00,*(arg1 + 200),*(arg1 + 0xd0),arg1 + 0xf4);
                    pcVar14 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                    if (iVar4 < 0) goto code_r0x08021d40;
                }
                if (*(arg1 + 0x9c) == 0) {
                    *(arg1 + 0xec) = 0xffffffff00ff00ff;
                }
                else {
                    iVar4 = sym.aw_monitor_get_data_from_table(arg1_00,*(arg1 + 0xb8),*(arg1 + 0xc0),arg1 + 0xe0);
                    unaff_x24 = iVar12;
                    pcVar14 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                    if (iVar4 < 0) goto code_r0x08021d40;
                }
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                _printk(0x8004694,iVar8,"aw_monitor_get_data",*(arg1 + 0xf8),*(arg1 + 0x100),*(arg1 + 0x102),
                        *(arg1 + 0x104));
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                _printk(0x8006078,iVar8,"aw_monitor_get_data",*(arg1 + 0xe4),*(arg1 + 0xec),*(arg1 + 0xee),
                        *(arg1 + 0xf0));
                uVar3 = *(arg1 + 0xec);
                uVar5 = uVar3;
                unaff_x23 = *(arg1 + 0x100);
                uVar13 = *(arg1 + 0x100);
                if (uVar3 != 0xff) {
                    if (uVar13 != 0xff) {
                        if (*(arg1 + 0x98) != 0) goto code_r0x08021e5c;
                        uVar5 = uVar3;
                        if (uVar13 <= uVar3) {
                            uVar5 = uVar13;
                        }
                        unaff_x23 = uVar5;
                        uVar11 = *(arg1 + 0x102);
                        if (*(arg1 + 0x102) <= *(arg1 + 0xee)) {
                            uVar11 = *(arg1 + 0xee);
                        }
                        unaff_x25 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                        uVar13 = *(arg1 + 0x104);
                        if (*(arg1 + 0xf0) < *(arg1 + 0x104)) goto code_r0x08021e84;
                        uVar13 = *(arg1 + 0xf0);
                        goto code_r0x08021e84;
                    }
                    uVar11 = *(arg1 + 0xee);
                    unaff_x23 = uVar3;
                    unaff_x25 = sym.__typeid__ZTSFiP9aw_devicehPjE_global_addr;
                    uVar13 = *(arg1 + 0xf0);
                    goto code_r0x08021e84;
                }
                if (uVar13 != 0xff) {
                    uVar11 = *(arg1 + 0x102);
                    uVar13 = *(arg1 + 0x104);
                    goto code_r0x08021e84;
                }
                uVar11 = *(arg1 + 0xee);
                uVar13 = *(arg1 + 0xf0);
                goto code_r0x08021e84;
            }
            iVar8 = (*(arg1 + -0x1c0))[0xe];
            if (iVar8 == 0) {
                iVar8 = **(arg1 + -0x1c0);
            }
            _printk(0x8005c14,iVar8,"aw_monitor_get_temperature");
            goto code_r0x08021d40;
        }
    }
    do {
        iVar12 = unaff_x24;
        uVar13 = unaff_x23;
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_58) {
            return;
        }
        __stack_chk_fail();
        uVar5 = extraout_w8;
code_r0x08021e5c:
        if (uVar13 <= uVar5) {
            uVar13 = uVar5;
        }
        unaff_x23 = uVar13;
        uVar11 = *(arg1 + 0xee);
        if (*(arg1 + 0x102) <= *(arg1 + 0xee)) {
            uVar11 = *(arg1 + 0x102);
        }
        uVar13 = *(arg1 + 0xf0);
        if (*(arg1 + 0x104) <= *(arg1 + 0xf0)) {
            uVar13 = *(arg1 + 0x104);
        }
code_r0x08021e84:
        iVar8 = (*(arg1 + -0x1c0))[0xe];
        if (iVar8 == 0) {
            iVar8 = **(arg1 + -0x1c0);
        }
        _printk(0x800651b,iVar8,"aw_monitor_work",unaff_x23,uVar11,uVar13);
        uVar5 = unaff_x23;
        uStack_60 = uStack_60 & 0xffffffff;
        if ((uVar5 != 0xff) && (*(arg1 + 0xac) != 0)) {
            pcVar14 = *(arg1 + 0x170);
            if (pcVar14 != unaff_x25) {
                __cfi_slowpath_diag(0x553f5320ac775fa3,pcVar14,0x8001e40);
            }
            iVar4 = (*pcVar14)(arg1_00,*(arg1 + -0x4c),&uStack_60 + 4);
            if (iVar4 < 0) {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                uVar7 = 0x800791a;
code_r0x08021f84:
                _printk(uVar7,iVar8,"aw_monitor_set_ipeak");
            }
            else if ((uStack_60._4_4_ & (*(arg1 + -0x48) ^ 0xffffffff)) == uVar5) {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                _printk(0x8007c2c,iVar8,"aw_monitor_set_ipeak",unaff_x23);
            }
            else {
                unaff_x25 = *(arg1 + 0x168);
                uVar5 = *(arg1 + -0x48) & uStack_60._4_4_ | uVar5;
                uStack_60 = CONCAT44(uVar5,uStack_60);
                if (unaff_x25 != sym.__typeid__ZTSFiP9aw_devicehjE_global_addr) {
                    __cfi_slowpath_diag(0x72f794085f5af073,unaff_x25,0x8001e60);
                    uVar5 = uStack_60._4_4_;
                }
                iVar4 = (*unaff_x25)(arg1_00,*(arg1 + -0x4c),uVar5);
                piVar9 = *(arg1 + -0x1c0);
                iVar8 = piVar9[0xe];
                if (iVar4 < 0) {
                    if (iVar8 == 0) {
                        iVar8 = *piVar9;
                    }
                    uVar7 = 0x80027b0;
                    goto code_r0x08021f84;
                }
                if (iVar8 == 0) {
                    iVar8 = *piVar9;
                }
                _printk(0x80096b8,iVar8,"aw_monitor_set_ipeak",uStack_60._4_4_,unaff_x23);
            }
        }
        uStack_60 = uStack_60 & 0xffffffff;
        if ((uVar11 != 0xff) && (*(arg1 + 0xb0) != 0)) {
            unaff_x23 = *(arg1 + 0x188);
            if (6 < (unaff_x23 + -0x800b9c0 >> 3 | unaff_x23 << 0x3d)) {
                __cfi_slowpath_diag(0xcb68aa27346a4fae,unaff_x23,0x8001e80);
            }
            iVar4 = (*unaff_x23)(arg1_00,&uStack_60 + 4);
            if (iVar4 < 0) {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                uVar7 = 0x8004d2e;
code_r0x08021fd8:
                _printk(uVar7,iVar8,"aw_monitor_set_gain");
            }
            else {
                pcVar14 = *(arg1 + 400);
                if (6 < (pcVar14 + -0x800b920 >> 3 | pcVar14 << 0x3d)) {
                    __cfi_slowpath_diag(0x77c30cb837e57aa5,pcVar14,0x8001ea0);
                }
                uVar5 = (*pcVar14)(uVar11);
                uVar5 = uVar5 & 0xffff;
                unaff_x23 = uVar5;
                iVar4 = uVar5 + *(arg1 + -0x38);
                if (uStack_60._4_4_ == iVar4) {
                    iVar8 = (*(arg1 + -0x1c0))[0xe];
                    if (iVar8 == 0) {
                        iVar8 = **(arg1 + -0x1c0);
                    }
                    _printk(0x800743c,iVar8,"aw_monitor_set_gain",iVar4);
                }
                else {
                    unaff_x25 = *(arg1 + 0x180);
                    if (6 < (unaff_x25 + -0x800ba00 >> 3 | unaff_x25 << 0x3d)) {
                        __cfi_slowpath_diag(0x2060516a6466f902,unaff_x25,0x8001ec0);
                    }
                    iVar6 = (*unaff_x25)(arg1_00,iVar4);
                    piVar9 = *(arg1 + -0x1c0);
                    iVar8 = piVar9[0xe];
                    if (iVar6 < 0) {
                        if (iVar8 == 0) {
                            iVar8 = *piVar9;
                        }
                        uVar7 = 0x8006561;
                        goto code_r0x08021fd8;
                    }
                    if (iVar8 == 0) {
                        iVar8 = *piVar9;
                    }
                    _printk(0x8005c4b,iVar8,"aw_monitor_set_gain",iVar4,uVar5);
                }
            }
        }
        uStack_60 = CONCAT44(uVar13,uStack_60);
        if ((uVar13 != 0xffffffff) && (*(arg1 + 0xb4) != 0)) {
            if ((*(arg1 + 0xdc) == uVar13) && (*(arg1 + 0xd8) != '\0')) {
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                uVar7 = 0x8004d54;
            }
            else {
                iVar4 = sym.aw882xx_dsp_write_vmax(arg1_00,&uStack_60 + 4,4);
                if (iVar4 != 0) goto code_r0x08021f18;
                *(arg1 + 0xdc) = uStack_60._4_4_;
                iVar8 = (*(arg1 + -0x1c0))[0xe];
                if (iVar8 == 0) {
                    iVar8 = **(arg1 + -0x1c0);
                }
                uVar7 = 0x8007466;
                uVar13 = uStack_60._4_4_;
            }
            _printk(uVar7,iVar8,"aw_monitor_set_vmax",uVar13);
        }
code_r0x08021f18:
        uVar2 = *(arg1 + 0xe4);
        *(arg1 + 0xd9) = 0;
        *(arg1 + 0xe4) = 0;
        *(arg1 + 0xe0) = uVar2;
        *(arg1 + 0xf4) = *(arg1 + 0xf8);
        *(arg1 + 0xf8) = 0;
        unaff_x24 = iVar12;
        pcVar14 = unaff_x25;
        if (*(arg1 + 0xd8) == '\0') {
            *(arg1 + 0xd8) = 1;
        }
code_r0x08021d40:
        uVar10 = *(iVar12 + 0x70);
        uVar7 = __msecs_to_jiffies(*(arg1 + 0x90));
        queue_delayed_work_on(0x20,uVar10,arg1,uVar7);
        unaff_x25 = pcVar14;
    } while( true );
}


// ===== sym.aw882xx_monitor_deinit @ 0x080222a8 (size 120) =====

void sym.aw882xx_monitor_deinit(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = (*(arg1 + -0x1c0))[0xe];
    if (iVar1 == 0) {
        iVar1 = **(arg1 + -0x1c0);
    }
    _printk(0x8004092,iVar1,"aw882xx_monitor_stop");
    if ((*arg1 & 1) != 0) {
        cancel_delayed_work_sync(arg1);
    }
    sysfs_remove_group(*(arg1 + -0x1c0),obj.aw_monitor_attr_group);
    return;
}


// ===== sym.aw_monitor_write_data_to_table @ 0x08022320 (size 484) =====

void sym.aw_monitor_write_data_to_table(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg2 != '\0') {
        uVar2 = 0;
        do {
            iVar4 = (uVar2 / 0xc) * 0xc;
            iVar3 = uVar2 << 0x20;
            *(*(arg2 + 8) + iVar4) = CONCAT11(*(arg3 + (uVar2 | 1)),*(arg3 + uVar2));
            *(*(arg2 + 8) + iVar4 + 2) = CONCAT11(*(arg3 + (uVar2 | 3)),*(arg3 + (uVar2 | 2)));
            *(*(arg2 + 8) + iVar4 + 4) =
                 CONCAT11(*(arg3 + (iVar3 + 0x500000000 >> 0x20)),*(arg3 + (iVar3 + 0x400000000 >> 0x20)));
            *(*(arg2 + 8) + iVar4 + 6) =
                 CONCAT11(*(arg3 + (iVar3 + 0x700000000 >> 0x20)),*(arg3 + (iVar3 + 0x600000000 >> 0x20)));
            uVar2 = iVar3 + 0xc00000000 >> 0x20;
            *(*(arg2 + 8) + iVar4 + 8) =
                 *(arg3 + (iVar3 + 0xb00000000 >> 0x20)) << 0x18 | *(arg3 + (iVar3 + 0xa00000000 >> 0x20)) << 0x10 |
                 *(arg3 + (iVar3 + 0x900000000 >> 0x20)) << 8 | *(arg3 + (iVar3 + 0x800000000 >> 0x20));
            uVar5 = *arg2 * 0xc;
        } while (uVar2 <= uVar5 && uVar5 - uVar2 != 0);
        if (*arg2 != 0) {
            iVar3 = 0;
            uVar2 = 0;
            do {
                iVar4 = (*(arg1 + 0x40))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1 + 0x40);
                }
                piVar1 = *(arg2 + 8) + iVar3;
                _printk(0x80057e1,iVar4,"aw_monitor_write_data_to_table",*piVar1,piVar1[1],piVar1[2],piVar1[3],
                        *(piVar1 + 4));
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0xc;
            } while (uVar2 < *arg2);
        }
    }
    return;
}


// ===== sym.aw_monitor_get_data_form_system @ 0x08022504 (size 288) =====

ulong sym.aw_monitor_get_data_form_system(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    char *pcVar6;
    int *in_x3;
    int in_w4;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar8 [16];
    uint64_t uStack_48;
    int aiStack_40 [2];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    uStack_48 = 0;
    aiStack_40[0] = 0x74746162;
    aiStack_40[1] = 0x797265;
    iVar3 = power_supply_get_by_name(aiStack_40);
    if (iVar3 == 0) {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        pcVar6 = "aw_monitor_get_data_form_system";
        in_x3 = aiStack_40;
        _printk(0x8008f70,iVar3);
code_r0x080225b8:
        uVar4 = 0xffffffea;
    }
    else {
        iVar2 = power_supply_get_property(iVar3,arg3 & 0xffffffff,&uStack_48);
        if (iVar2 < 0) {
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            pcVar6 = "aw_monitor_get_data_form_system";
            _printk(0x80049ed,iVar3);
            goto code_r0x080225b8;
        }
        in_x3 = uStack_48 & 0xffffffff;
        *arg2 = uStack_48;
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        pcVar6 = "aw_monitor_get_data_form_system";
        _printk(0x80034a1,iVar3);
        uVar4 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    auVar8 = __stack_chk_fail(uVar4);
    iVar3 = auVar8._0_8_;
    *extraout_x18 = sym.aw_monitor_get_data_from_table;
    if (*(iVar3 + 0x2d8) == '\0') {
        if (pcVar6 == NULL) {
            iVar5 = (*(iVar3 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x40);
            }
            pcVar6 = "aw_monitor_first_get_data_form_table";
            goto code_r0x08022740;
        }
        uVar7 = auVar8._8_4_ & 0xff;
        if ((auVar8._8_8_ & 0xff) != 0) {
            do {
                if (*pcVar6 <= in_x3[1]) goto code_r0x080226a8;
                uVar7 = uVar7 - 1;
                pcVar6 = pcVar6 + 0xc;
            } while (uVar7 != 0);
        }
    }
    else {
        iVar2 = 0;
        if (*(iVar3 + 0x2d9) != 0) {
            iVar2 = in_x3[1] / *(iVar3 + 0x2d9);
        }
        iVar2 = (iVar2 * in_w4 + *in_x3 * (1000 - in_w4)) / 1000;
        in_x3[1] = iVar2;
        if (pcVar6 == NULL) {
            iVar5 = (*(iVar3 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(iVar3 + 0x40);
            }
            pcVar6 = "aw_monitor_trace_data_from_table";
code_r0x08022740:
            _printk(0x8006d7d,iVar5,pcVar6);
            return 0xffffffea;
        }
        uVar7 = auVar8._8_4_ & 0xff;
        uVar1 = auVar8._8_8_ & 0xff;
        while (uVar1 != 0) {
            if ((*pcVar6 <= iVar2) && (iVar2 <= *(pcVar6 + 2))) {
code_r0x080226a8:
                uVar4 = *pcVar6;
                in_x3[4] = *(pcVar6 + 8);
                *(in_x3 + 2) = uVar4;
                return 0;
            }
            pcVar6 = pcVar6 + 0xc;
            uVar7 = uVar7 - 1;
            uVar1 = uVar7;
        }
    }
    return 0;
}


// ===== sym.aw_monitor_get_data_from_table @ 0x08022624 (size 296) =====

ulong sym.aw_monitor_get_data_from_table(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    int in_w4;
    uint64_t uVar5;
    ulong uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x2d8) == '\0') {
        if (arg3 == 0) {
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            pcVar4 = "aw_monitor_first_get_data_form_table";
            goto code_r0x08022740;
        }
        uVar5 = arg2 & 0xff;
        if ((arg2 & 0xffU) != 0) {
            do {
                if (*arg3 <= *(arg4 + 4)) goto code_r0x080226a8;
                uVar5 = uVar5 - 1;
                arg3 = arg3 + 0xc;
            } while (uVar5 != 0);
        }
    }
    else {
        iVar1 = 0;
        if (*(arg1 + 0x2d9) != 0) {
            iVar1 = *(arg4 + 4) / *(arg1 + 0x2d9);
        }
        iVar1 = (iVar1 * in_w4 + *arg4 * (1000 - in_w4)) / 1000;
        *(arg4 + 4) = iVar1;
        if (arg3 == 0) {
            iVar3 = (*(arg1 + 0x40))[0xe];
            if (iVar3 == 0) {
                iVar3 = **(arg1 + 0x40);
            }
            pcVar4 = "aw_monitor_trace_data_from_table";
code_r0x08022740:
            _printk(0x8006d7d,iVar3,pcVar4);
            return 0xffffffea;
        }
        uVar5 = arg2 & 0xff;
        uVar2 = arg2 & 0xff;
        while (uVar2 != 0) {
            if ((*arg3 <= iVar1) && (iVar1 <= *(arg3 + 2))) {
code_r0x080226a8:
                uVar6 = *arg3;
                *(arg4 + 0x10) = *(arg3 + 8);
                *(arg4 + 8) = uVar6;
                return 0;
            }
            arg3 = arg3 + 0xc;
            uVar5 = uVar5 - 1;
            uVar2 = uVar5;
        }
    }
    return 0;
}


// ===== sym.aw_monitor_show @ 0x0802274c (size 72) =====

int64_t sym.aw_monitor_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = snprintf(arg2,0x1000,"monitor enable: %d\n",*(*(*(arg1 + 0x98) + 0x68) + 0x28c));
    return iVar1;
}


// ===== sym.aw_monitor_store @ 0x08022794 (size 212) =====

uint64_t sym.aw_monitor_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t *arg1_00;
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong uVar6;
    char *pcVar7;
    char *pcVar8;
    int64_t *piVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar10;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar13 [16];
    uint32_t uStack_94;
    uint32_t *puStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_28 = *(iVar11 + 0x5e0);
    uStack_2c = 0;
    iVar11 = *(*(arg1 + 0x98) + 0x68);
    pcVar7 = arg2;
    uVar10 = arg3;
    if (arg3 != 0) {
        pcVar7 = &uStack_2c;
        iVar2 = kstrtouint(arg2,0);
        if (iVar2 < 0) {
            arg3 = iVar2;
            noname_1 = extraout_q0;
        }
        else {
            iVar4 = (*(iVar11 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar11 + 0x40);
            }
            uVar10 = uStack_2c;
            pcVar7 = "aw_monitor_store";
            noname_1 = _printk(0x8003873,iVar4);
            if ((*(iVar11 + 0x28c) != uStack_2c) && (*(iVar11 + 0x28c) = uStack_2c, uStack_2c != 0)) {
                noname_1 = sym.aw882xx_monitor_start(iVar11 + 0x200);
            }
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar4 = __stack_chk_fail(noname_1);
    *extraout_x18 = sym.aw_monitor_update_store;
    pcStack_78 = sym.aw_monitor_update_store;
    iVar11 = sp_el0;
    iStack_88 = *(iVar11 + 0x5e0);
    uStack_94 = 0;
    iVar11 = *(*(iVar4 + 0x98) + 0x68);
    pcVar8 = pcVar7;
    puStack_80 = &stack0xffffffffffffffe0;
    if (uVar10 != 0) {
        pcVar8 = &uStack_94;
        iVar2 = kstrtouint(pcVar7,0);
        if (iVar2 < 0) {
            uVar10 = iVar2;
        }
        else {
            iVar4 = (*(iVar11 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar11 + 0x40);
            }
            pcVar8 = "aw_monitor_update_store";
            _printk(0x80096fb,iVar4,"aw_monitor_update_store",uStack_94);
            if (uStack_94 != 0) {
                arg1_00 = iVar11 + 0x200;
                iVar4 = (*(iVar11 + 0x40))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(iVar11 + 0x40);
                }
                _printk(0x8004092,iVar4,"aw882xx_monitor_stop");
                if ((*arg1_00 & 1) != 0) {
                    cancel_delayed_work_sync(arg1_00);
                }
                *(iVar11 + 0x288) = 0;
                if (*(iVar11 + 0x2c0) != 0) {
                    devm_kfree(*(iVar11 + 0x40));
                    *(iVar11 + 0x2c0) = 0;
                }
                if (*(iVar11 + 0x2d0) != 0) {
                    devm_kfree(*(iVar11 + 0x40));
                }
                *(iVar11 + 0x2c8) = 0;
                *(iVar11 + 0x2d0) = 0;
                *(iVar11 + 0x2b8) = 0;
                *(iVar11 + 0x2c0) = 0;
                *(iVar11 + 0x2a8) = 0;
                *(iVar11 + 0x2b0) = 0;
                *(iVar11 + 0x298) = 0;
                *(iVar11 + 0x2a0) = 0;
                *(iVar11 + 0x288) = 0;
                *(iVar11 + 0x290) = 0;
                puStack_90 = NULL;
                iVar2 = request_firmware(&puStack_90,iVar11 + 0x50,*(iVar11 + 0x40));
                piVar9 = *(iVar11 + 0x40);
                if (iVar2 < 0) {
                    iVar4 = piVar9[0xe];
                    if (iVar4 == 0) {
                        iVar4 = *piVar9;
                    }
                    pcVar8 = "aw_monitor_real_time_update_monitor";
                    _printk(0x80027d6,iVar4,"aw_monitor_real_time_update_monitor",iVar11 + 0x50);
                    release_firmware(puStack_90);
                    uVar10 = iVar2;
                }
                else {
                    puVar5 = devm_kmalloc(piVar9,*puStack_90 + 4,0xdc0);
                    puVar1 = puStack_90;
                    if (puVar5 == NULL) {
                        iVar4 = (*(iVar11 + 0x40))[0xe];
                        if (iVar4 == 0) {
                            iVar4 = **(iVar11 + 0x40);
                        }
                        pcVar8 = "aw_monitor_real_time_update_monitor";
                        _printk(0x80027fb,iVar4);
                        release_firmware(puStack_90);
                    }
                    else {
                        uVar3 = *puStack_90;
                        *puVar5 = uVar3;
                        memcpy(puVar5 + 1,*(puStack_90 + 2),*puStack_90);
                        release_firmware(puVar1);
                        pcVar8 = uVar3;
                        iVar2 = sym.aw882xx_monitor_parse_fw(arg1_00,puVar5 + 1,uVar3);
                        piVar9 = *(iVar11 + 0x40);
                        if (iVar2 < 0) {
                            iVar4 = piVar9[0xe];
                            if (iVar4 == 0) {
                                iVar4 = *piVar9;
                            }
                            pcVar8 = "aw_monitor_real_time_update_monitor";
                            _printk(0x8006a68,iVar4);
                            devm_kfree(*(iVar11 + 0x40),puVar5);
                            uVar10 = iVar2;
                            goto code_r0x080228c8;
                        }
                        devm_kfree(piVar9,puVar5);
                    }
                    sym.aw882xx_monitor_start(arg1_00);
                }
            }
        }
    }
code_r0x080228c8:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_88) {
        return uVar10;
    }
    auVar13 = __stack_chk_fail();
    iVar4 = auVar13._8_8_;
    iVar11 = auVar13._0_8_;
    *extraout_x18_00 = sym.aw_dev_set_channal_mode;
    pcVar12 = *(iVar11 + 0x378);
    if (pcVar12 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar12,0x8001ee0);
    }
    if (pcVar8 < 4) {
        uVar3 = (*pcVar12)(iVar11,*(iVar4 + 0x14),*(iVar4 + 0x18),*(iVar4 + (pcVar8 & 0xffffffff) * 4 + 4));
        if (uVar3 < 0) {
            iVar4 = (*(iVar11 + 0x40))[0xe];
            if (iVar4 == 0) {
                iVar4 = **(iVar11 + 0x40);
            }
            uVar6 = 0x8005c7e;
        }
        else {
            pcVar12 = *(iVar11 + 0x378);
            if (pcVar12 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar12,0x8001f00);
            }
            uVar3 = (*pcVar12)(iVar11,*(iVar4 + 0x24),*(iVar4 + 0x28),*(iVar4 + (pcVar8 & 0xffffffff) * 4 + 6));
            piVar9 = *(iVar11 + 0x40);
            iVar4 = piVar9[0xe];
            if (-1 < uVar3) {
                if (iVar4 == 0) {
                    iVar4 = *piVar9;
                }
                _printk(0x800301a,iVar4,"aw_dev_set_channal_mode");
                return 0;
            }
            if (iVar4 == 0) {
                iVar4 = *piVar9;
            }
            uVar6 = 0x8009722;
        }
        _printk(uVar6,iVar4,"aw_dev_set_channal_mode");
        return uVar3;
    }
    //WARNING: Does not return
    pcVar12 = SoftwareBreakpoint(0x5512,0x8022c18);
    (*pcVar12)();
}


// ===== sym.aw_monitor_update_store @ 0x08022868 (size 628) =====

uint64_t sym.aw_monitor_update_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint64_t *arg1_00;
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    ulong uVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar9;
    int64_t iVar10;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    uchar auVar11 [16];
    int iStack_64;
    uint32_t *puStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iStack_64 = 0;
    iVar10 = *(*(arg1 + 0x98) + 0x68);
    pcVar7 = arg2;
    if (arg3 != 0) {
        pcVar7 = &iStack_64;
        iVar2 = kstrtouint(arg2,0);
        if (iVar2 < 0) {
            arg3 = iVar2;
            noname_1 = extraout_q0;
        }
        else {
            iVar6 = (*(iVar10 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar10 + 0x40);
            }
            pcVar7 = "aw_monitor_update_store";
            noname_1 = _printk(0x80096fb,iVar6,"aw_monitor_update_store",iStack_64);
            if (iStack_64 != 0) {
                arg1_00 = iVar10 + 0x200;
                iVar6 = (*(iVar10 + 0x40))[0xe];
                if (iVar6 == 0) {
                    iVar6 = **(iVar10 + 0x40);
                }
                _printk(0x8004092,iVar6,"aw882xx_monitor_stop");
                if ((*arg1_00 & 1) != 0) {
                    cancel_delayed_work_sync(arg1_00);
                }
                *(iVar10 + 0x288) = 0;
                if (*(iVar10 + 0x2c0) != 0) {
                    devm_kfree(*(iVar10 + 0x40));
                    *(iVar10 + 0x2c0) = 0;
                }
                if (*(iVar10 + 0x2d0) != 0) {
                    devm_kfree(*(iVar10 + 0x40));
                }
                *(iVar10 + 0x2c8) = 0;
                *(iVar10 + 0x2d0) = 0;
                *(iVar10 + 0x2b8) = 0;
                *(iVar10 + 0x2c0) = 0;
                *(iVar10 + 0x2a8) = 0;
                *(iVar10 + 0x2b0) = 0;
                *(iVar10 + 0x298) = 0;
                *(iVar10 + 0x2a0) = 0;
                *(iVar10 + 0x288) = 0;
                *(iVar10 + 0x290) = 0;
                puStack_60 = NULL;
                iVar2 = request_firmware(&puStack_60,iVar10 + 0x50,*(iVar10 + 0x40));
                piVar8 = *(iVar10 + 0x40);
                if (iVar2 < 0) {
                    iVar6 = piVar8[0xe];
                    if (iVar6 == 0) {
                        iVar6 = *piVar8;
                    }
                    pcVar7 = "aw_monitor_real_time_update_monitor";
                    _printk(0x80027d6,iVar6,"aw_monitor_real_time_update_monitor",iVar10 + 0x50);
                    noname_1 = release_firmware(puStack_60);
                    arg3 = iVar2;
                }
                else {
                    puVar4 = devm_kmalloc(piVar8,*puStack_60 + 4,0xdc0);
                    puVar1 = puStack_60;
                    if (puVar4 == NULL) {
                        iVar6 = (*(iVar10 + 0x40))[0xe];
                        if (iVar6 == 0) {
                            iVar6 = **(iVar10 + 0x40);
                        }
                        pcVar7 = "aw_monitor_real_time_update_monitor";
                        _printk(0x80027fb,iVar6);
                        release_firmware(puStack_60);
                    }
                    else {
                        uVar3 = *puStack_60;
                        *puVar4 = uVar3;
                        memcpy(puVar4 + 1,*(puStack_60 + 2),*puStack_60);
                        release_firmware(puVar1);
                        pcVar7 = uVar3;
                        iVar2 = sym.aw882xx_monitor_parse_fw(arg1_00,puVar4 + 1,uVar3);
                        piVar8 = *(iVar10 + 0x40);
                        if (iVar2 < 0) {
                            iVar6 = piVar8[0xe];
                            if (iVar6 == 0) {
                                iVar6 = *piVar8;
                            }
                            pcVar7 = "aw_monitor_real_time_update_monitor";
                            _printk(0x8006a68,iVar6);
                            noname_1 = devm_kfree(*(iVar10 + 0x40),puVar4);
                            arg3 = iVar2;
                            goto code_r0x080228c8;
                        }
                        devm_kfree(piVar8,puVar4);
                    }
                    noname_1 = sym.aw882xx_monitor_start(arg1_00);
                }
            }
        }
    }
code_r0x080228c8:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_58) {
        return arg3;
    }
    auVar11 = __stack_chk_fail(noname_1);
    iVar6 = auVar11._8_8_;
    iVar10 = auVar11._0_8_;
    *extraout_x18 = sym.aw_dev_set_channal_mode;
    pcVar9 = *(iVar10 + 0x378);
    if (pcVar9 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar9,0x8001ee0);
    }
    if (pcVar7 < 4) {
        uVar3 = (*pcVar9)(iVar10,*(iVar6 + 0x14),*(iVar6 + 0x18),*(iVar6 + (pcVar7 & 0xffffffff) * 4 + 4));
        if (uVar3 < 0) {
            iVar6 = (*(iVar10 + 0x40))[0xe];
            if (iVar6 == 0) {
                iVar6 = **(iVar10 + 0x40);
            }
            uVar5 = 0x8005c7e;
        }
        else {
            pcVar9 = *(iVar10 + 0x378);
            if (pcVar9 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
                __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar9,0x8001f00);
            }
            uVar3 = (*pcVar9)(iVar10,*(iVar6 + 0x24),*(iVar6 + 0x28),*(iVar6 + (pcVar7 & 0xffffffff) * 4 + 6));
            piVar8 = *(iVar10 + 0x40);
            iVar6 = piVar8[0xe];
            if (-1 < uVar3) {
                if (iVar6 == 0) {
                    iVar6 = *piVar8;
                }
                _printk(0x800301a,iVar6,"aw_dev_set_channal_mode");
                return 0;
            }
            if (iVar6 == 0) {
                iVar6 = *piVar8;
            }
            uVar5 = 0x8009722;
        }
        _printk(uVar5,iVar6,"aw_dev_set_channal_mode");
        return uVar3;
    }
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x8022c18);
    (*pcVar9)();
}


// ===== sym.aw_dev_set_channal_mode @ 0x08022adc (size 352) =====

int sym.aw_dev_set_channal_mode(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    ulong *in_x18;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar5 = *(arg1 + 0x378);
    if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
        __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar5,0x8001ee0);
    }
    if (3 < arg3) {
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5512,0x8022c18);
        (*pcVar5)();
    }
    iVar1 = (*pcVar5)(arg1,*(arg2 + 0x14),*(arg2 + 0x18),*(arg2 + (arg3 & 0xffffffffU) * 4 + 4));
    if (iVar1 < 0) {
        iVar3 = (*(arg1 + 0x40))[0xe];
        if (iVar3 == 0) {
            iVar3 = **(arg1 + 0x40);
        }
        uVar2 = 0x8005c7e;
    }
    else {
        pcVar5 = *(arg1 + 0x378);
        if (pcVar5 != sym.__typeid__ZTSFiP9aw_devicehjjE_global_addr) {
            __cfi_slowpath_diag(0x9fc9021573cf4c58,pcVar5,0x8001f00);
        }
        iVar1 = (*pcVar5)(arg1,*(arg2 + 0x24),*(arg2 + 0x28),*(arg2 + (arg3 & 0xffffffffU) * 4 + 6));
        piVar4 = *(arg1 + 0x40);
        iVar3 = piVar4[0xe];
        if (-1 < iVar1) {
            if (iVar3 == 0) {
                iVar3 = *piVar4;
            }
            _printk(0x800301a,iVar3,"aw_dev_set_channal_mode");
            return 0;
        }
        if (iVar3 == 0) {
            iVar3 = *piVar4;
        }
        uVar2 = 0x8009722;
    }
    _printk(uVar2,iVar3,"aw_dev_set_channal_mode");
    return iVar1;
}


// ===== sym.aw882xx_spin_set_record_val @ 0x08022c3c (size 328) =====

uint64_t sym.aw882xx_spin_set_record_val(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t *arg1_00;
    uint64_t in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar3;
    ulong unaff_x30;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uint uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    mutex_lock(obj.g_spin_lock);
    if (_segment.ehdr == 1) {
        uVar1 = sym.aw882xx_dsp_write_spin(1);
joined_r0x08022ce0:
        if (uVar1 != 0) {
            uVar3 = uVar1;
            mutex_unlock(obj.g_spin_lock);
            goto code_r0x08022cf4;
        }
    }
    else {
        if ((_segment.ehdr & 0xfffffffe) == 2) {
            uStack_40 = *(arg1 + 0x330);
            uStack_38 = *(arg1 + 0x338);
            uStack_30 = *(arg1 + 0x340);
            uStack_60 = *(arg1 + 0x310);
            uStack_58 = *(arg1 + 0x318);
            uStack_48 = *(arg1 + 0x328);
            uStack_50 = *(arg1 + 800);
            in_x2 = _segment.ehdr;
            uVar1 = sym.aw_dev_set_channal_mode(arg1,&uStack_60,in_x2);
            goto joined_r0x08022ce0;
        }
        iVar2 = (*(arg1 + 0x40))[0xe];
        if (iVar2 == 0) {
            iVar2 = **(arg1 + 0x40);
        }
        _printk(0x8007489,iVar2,"aw882xx_spin_set_record_val");
    }
    mutex_unlock(obj.g_spin_lock);
    iVar2 = (*(arg1 + 0x40))[0xe];
    if (iVar2 == 0) {
        iVar2 = **(arg1 + 0x40);
    }
    in_x2 = 0;
    _printk(0x8008441,iVar2);
    uVar3 = 0;
code_r0x08022cf4:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return uVar3;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_spin_value_get;
    if (((_segment.ehdr & 0xfffffffe) == 2) || ((in_x2 & 1) == 0)) {
        uVar3 = 0;
        *arg1_00 = _segment.ehdr;
    }
    else if (_segment.ehdr == 1) {
        uVar3 = sym.aw882xx_dsp_read_spin(arg1_00);
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.aw882xx_spin_value_get @ 0x08022d84 (size 100) =====

ulong sym.aw882xx_spin_value_get(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((_segment.ehdr & 0xfffffffe) == 2) || ((in_w2 & 1) == 0)) {
        uVar1 = 0;
        *arg2 = _segment.ehdr;
    }
    else if (_segment.ehdr == 1) {
        uVar1 = sym.aw882xx_dsp_read_spin(arg2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.aw882xx_spin_value_set @ 0x08022de8 (size 252) =====

uint sym.aw882xx_spin_value_set(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.g_spin_lock);
    bVar1 = (_segment.ehdr & 0xfffffffe) == 2;
    if ((arg3 & 1U) == 0) {
        if (bVar1) {
            iVar4 = 0;
            goto code_r0x08022e50;
        }
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        uVar3 = 0x8007c6f;
    }
    else {
        if (bVar1) {
            iVar4 = 1;
code_r0x08022e50:
            uVar2 = sym.aw_reg_write_spin(arg1,arg2 & 0xffffffffU,iVar4);
            goto code_r0x08022e6c;
        }
        if (_segment.ehdr == 1) {
            uVar2 = sym.aw882xx_dsp_write_spin(arg2 & 0xffffffffU);
            goto code_r0x08022e6c;
        }
        iVar4 = (*(arg1 + 0x40))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + 0x40);
        }
        uVar3 = 0x80071c0;
    }
    _printk(uVar3,iVar4,"aw882xx_spin_value_set");
    uVar2 = 0;
code_r0x08022e6c:
    _segment.ehdr = arg2;
    mutex_unlock(obj.g_spin_lock);
    return uVar2;
}


// ===== sym.aw_reg_write_spin @ 0x08022ee4 (size 408) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.aw_reg_write_spin(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t *puVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    ulong uStack_e0;
    uint32_t uStack_d4;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    uint64_t uStack_98;
    int64_t *piStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    piStack_88 = NULL;
    if ((_segment.ehdr == 3) && ((arg3 & 1U) != 0)) {
        uVar1 = sym.aw882xx_dsp_set_mixer_en(arg1,1);
        uVar6 = uVar1;
        if (uVar1 == 0) {
            usleep_range_state(100000,0x186aa,2);
            goto code_r0x08022f68;
        }
    }
    else {
code_r0x08022f68:
        uVar1 = sym.aw882xx_dev_get_list_head(&piStack_88);
        if (uVar1 == 0) {
            piVar7 = *piStack_88;
            if (piVar7 != piStack_88) {
                do {
                    iStack_60 = piVar7[-0x16];
                    iStack_58 = piVar7[-0x15];
                    uStack_50 = piVar7[-0x14];
                    iStack_80 = piVar7[-0x1a];
                    iStack_78 = piVar7[-0x19];
                    iStack_70 = piVar7[-0x18];
                    iStack_68 = piVar7[-0x17];
                    uVar1 = sym.aw_dev_set_channal_mode(piVar7 + -0x7c,&iStack_80,arg2 & 0xffffffffU);
                    if (uVar1 < 0) {
                        iVar5 = piVar7[-0x74][0xe];
                        if (iVar5 == 0) {
                            iVar5 = *piVar7[-0x74];
                        }
                        uVar4 = 0x800582d;
                        goto code_r0x08023068;
                    }
                    piVar7 = *piVar7;
                } while (piVar7 != piStack_88);
            }
            if ((_segment.ehdr == 3) && ((arg3 & 1U) != 0)) {
                uVar1 = sym.aw882xx_dsp_set_mixer_en(arg1,0);
                uVar6 = uVar1;
                if (uVar1 != 0) goto code_r0x08022ff0;
            }
            uVar6 = 0;
        }
        else {
            iVar5 = (*(arg1 + 0x40))[0xe];
            if (iVar5 == 0) {
                iVar5 = **(arg1 + 0x40);
            }
            uVar4 = 0x8005e7f;
code_r0x08023068:
            uVar6 = uVar1;
            _printk(uVar4,iVar5,"aw_reg_write_spin");
        }
    }
code_r0x08022ff0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar6;
    }
    puVar3 = __stack_chk_fail();
    *extraout_x18 = sym.aw882xx_spin_init;
    pcStack_b8 = sym.aw882xx_spin_init;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    uStack_e0 = 0;
    puStack_c0 = &stack0xffffffffffffffc0;
    uStack_b0 = uVar6;
    uStack_a8 = arg2 & 0xffffffffU;
    iStack_a0 = arg1;
    uStack_98 = arg3 & 0xffffffff;
    iVar2 = of_property_read_string(*(*(puVar3 + -0xb4) + 0x2f0),"spin-mode",&uStack_e0);
    uVar4 = uStack_e0;
    if (iVar2 < 0) {
        _segment.ehdr = 0;
        iVar5 = (*(puVar3 + -0xb4))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(puVar3 + -0xb4);
        }
        uVar4 = 0x8008085;
    }
    else {
        iVar2 = strcmp(uStack_e0,"dsp_spin");
        if (iVar2 != 0) {
            iVar2 = strcmp(uVar4,"reg_spin");
            if (iVar2 == 0) {
                _segment.ehdr = 2;
            }
            else {
                iVar2 = strcmp(uVar4,"reg_mixer_spin");
                if (iVar2 != 0) {
                    _segment.ehdr = 0;
                    goto code_r0x0802335c;
                }
                _segment.ehdr = 3;
            }
            uStack_d0 = 0;
            uStack_d4 = 0;
            uVar1 = of_property_read_string(*(*(puVar3 + -0xb4) + 0x2f0),"spin-data",&uStack_d0);
            if (uVar1 < 0) {
                uVar6 = uVar1;
                iVar5 = (*(puVar3 + -0xb4))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(puVar3 + -0xb4);
                }
                _printk(0x8003057,iVar5,"aw_parse_spin_table_dt");
            }
            else {
                iVar2 = sscanf(uStack_d0,"%c %c %c %c",&uStack_d4,&uStack_d4 | 1,&uStack_d4 | 2,&uStack_d4 | 3);
                if ((iVar2 == 4) && (uVar1 = (uStack_d4 & 0xff) - 0x4c, uVar1 < 0x27)) {
    //WARNING: Could not recover jumptable at 0x08023214. Too many branches
    //WARNING: Treating indirect jump as call
                    uVar6 = (*(*(uVar1 + 0x800a0f0) * 4 + 0x8023218))(puVar3 + 0xc);
                    return uVar6;
                }
                iVar5 = (*(puVar3 + -0xb4))[0xe];
                if (iVar5 == 0) {
                    iVar5 = **(puVar3 + -0xb4);
                }
                _printk(0x800233f,iVar5,"aw_parse_spin_table_dt",uStack_d0);
                uVar6 = 0xffffffea;
            }
            goto code_r0x08023388;
        }
        _segment.ehdr = 1;
code_r0x0802335c:
        iVar5 = (*(puVar3 + -0xb4))[0xe];
        if (iVar5 == 0) {
            iVar5 = **(puVar3 + -0xb4);
        }
        uVar4 = 0x800518c;
    }
    _printk(uVar4,iVar5,"aw_parse_spin_dts",_segment.ehdr);
    uVar6 = 0;
code_r0x08023388:
    *puVar3 = _segment.ehdr != 0;
    iVar5 = (*(puVar3 + -0xb4))[0xe];
    if (iVar5 == 0) {
        iVar5 = **(puVar3 + -0xb4);
    }
    _printk(0x80087e6,iVar5,"aw882xx_spin_init");
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_c8) {
        return uVar6;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.aw882xx_spin_init @ 0x0802307c (size 888) =====

//WARNING: Control flow encountered bad instruction data

uint64_t sym.aw882xx_spin_init(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    uint64_t uVar5;
    ulong unaff_x30;
    ulong uStack_50;
    uint32_t uStack_44;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_50 = 0;
    iVar1 = of_property_read_string(*(*(arg1 + -0x2d0) + 0x2f0),"spin-mode",&stack0xffffffffffffffb0);
    uVar3 = uStack_50;
    if (iVar1 < 0) {
        _segment.ehdr = 0;
        iVar4 = (*(arg1 + -0x2d0))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + -0x2d0);
        }
        uVar3 = 0x8008085;
    }
    else {
        iVar1 = strcmp(uStack_50,"dsp_spin");
        if (iVar1 != 0) {
            iVar1 = strcmp(uVar3,"reg_spin");
            if (iVar1 == 0) {
                _segment.ehdr = 2;
            }
            else {
                iVar1 = strcmp(uVar3,"reg_mixer_spin");
                if (iVar1 != 0) {
                    _segment.ehdr = 0;
                    goto code_r0x0802335c;
                }
                _segment.ehdr = 3;
            }
            uStack_40 = 0;
            uStack_44 = 0;
            uVar2 = of_property_read_string(*(*(arg1 + -0x2d0) + 0x2f0),"spin-data",&stack0xffffffffffffffc0);
            if (uVar2 < 0) {
                uVar5 = uVar2;
                iVar4 = (*(arg1 + -0x2d0))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1 + -0x2d0);
                }
                _printk(0x8003057,iVar4,"aw_parse_spin_table_dt");
            }
            else {
                iVar1 = sscanf(uStack_40,"%c %c %c %c",&stack0xffffffffffffffbc,&stack0xffffffffffffffbc | 1,
                               &stack0xffffffffffffffbc | 2,&stack0xffffffffffffffbc | 3);
                if ((iVar1 == 4) && (uVar2 = (uStack_44 & 0xff) - 0x4c, uVar2 < 0x27)) {
    //switch table (38 cases) at 0x800a0f0
    //WARNING: Could not recover jumptable at 0x08023214. Too many branches
    //WARNING: Treating indirect jump as call
                    uVar5 = (*(*(uVar2 + 0x800a0f0) * 4 + 0x8023218))(arg1 + 0x30);
                    return uVar5;
                }
                iVar4 = (*(arg1 + -0x2d0))[0xe];
                if (iVar4 == 0) {
                    iVar4 = **(arg1 + -0x2d0);
                }
                _printk(0x800233f,iVar4,"aw_parse_spin_table_dt",uStack_40);
                uVar5 = 0xffffffea;
            }
            goto code_r0x08023388;
        }
        _segment.ehdr = 1;
code_r0x0802335c:
        iVar4 = (*(arg1 + -0x2d0))[0xe];
        if (iVar4 == 0) {
            iVar4 = **(arg1 + -0x2d0);
        }
        uVar3 = 0x800518c;
    }
    _printk(uVar3,iVar4,"aw_parse_spin_dts",_segment.ehdr);
    uVar5 = 0;
code_r0x08023388:
    *arg1 = _segment.ehdr != 0;
    iVar4 = (*(arg1 + -0x2d0))[0xe];
    if (iVar4 == 0) {
        iVar4 = **(arg1 + -0x2d0);
    }
    _printk(0x80087e6,iVar4,"aw882xx_spin_init");
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x08023404 (size 124) =====

int sym.init_module(void)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x800287f,"aw882xx_i2c_init","v1.11.0");
    iVar1 = i2c_register_driver(obj.__this_module,obj.aw882xx_i2c_driver);
    if (iVar1 != 0) {
        _printk(0x80051fe,"aw882xx_i2c_init");
    }
    return iVar1;
}


// ===== sym.cleanup_module @ 0x08023480 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    i2c_del_driver(obj.aw882xx_i2c_driver);
    return;
}

