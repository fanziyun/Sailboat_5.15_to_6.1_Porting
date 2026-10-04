// decompiled from qcom-hv-haptics by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08006000 (size 1720) =====

//WARNING: Switch with 1 destination removed at 0x08012a14

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3987c0e26ee29729) {
            if (arg1 < -0x550b9e52359ac614) {
                if (-0x5c8fdb05abca1e17 < arg1) {
                    if (arg1 != -0x5c8fdb05abca1e16) {
                        if (arg1 != -0x57be845bca9148ef) goto code_r0x080129d4;
                        pcVar2 = sym.haptics_freeze.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                        goto code_r0x08006678;
                    }
                    pcVar2 = sym.__bpf_trace_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    goto code_r0x08006650;
                }
                if (arg1 == -0x76e7814a8afd6df4) {
                    pcVar2 = sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
code_r0x080065b4:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 7) {
                        return;
                    }
                    goto code_r0x080129d4;
                }
                if (arg1 != -0x6133f297c79a0d86) goto code_r0x080129d4;
                pcVar2 = sym.haptics_set_gain.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            }
            else {
                if (arg1 < -0x4260ebb633ab377a) {
                    if (arg1 != -0x550b9e52359ac614) {
                        if ((arg1 == -0x5324bef43a497a1c) && ((pcVar1 + -0x8006950 >> 3 | pcVar1 << 0x3d) < 6)) {
                            return;
                        }
                        goto code_r0x080129d4;
                    }
                    pcVar2 = sym.haptics_stop_constant_effect_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
code_r0x080065f4:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                        return;
                    }
                    goto code_r0x080129d4;
                }
                if (arg1 != -0x4260ebb633ab377a) {
                    if (arg1 != -0x3b0bcef19920f9cb) goto code_r0x080129d4;
                    pcVar2 = sym.perf_trace_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    goto code_r0x08006650;
                }
                pcVar2 = sym.haptics_shutdown.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            }
        }
        else if (arg1 < -0x1d0b89c45569b643) {
            if (arg1 < -0x2ee0710dce68437c) {
                if (arg1 != -0x3987c0e26ee29729) {
                    if (arg1 != -0x3557318fb8d07b71) goto code_r0x080129d4;
                    pcVar2 = sym.haptics_remove.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    goto code_r0x080065f4;
                }
                pcVar2 = sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            }
            else if (arg1 == -0x2ee0710dce68437c) {
                pcVar2 = sym.delayed_work_timer_fn.cfi_jt;
            }
            else {
                if (arg1 != -0x218c0108fde83420) goto code_r0x080129d4;
                pcVar2 = sym.trace_event_raw_init.cfi_jt;
            }
        }
        else if (arg1 < -0x13a101c5ed480109) {
            if (arg1 == -0x1d0b89c45569b643) {
                pcVar2 = sym.haptics_playback.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            }
            else {
                if (arg1 != -0x1811b1d263100d64) goto code_r0x080129d4;
                pcVar2 = sym.haptics_upload_effect.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            }
        }
        else if (arg1 == -0x13a101c5ed480109) {
            pcVar2 = sym.__traceiter_qcom_haptics_status.cfi_jt;
        }
        else {
            if (arg1 == -0x8dc801903aca538) {
                pcVar2 = sym.pattern_play_rate_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                goto code_r0x08006580;
            }
            if (arg1 != 0x4d7698a0e87360) goto code_r0x080129d4;
            pcVar2 = sym.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt;
        }
    }
    else if (arg1 < 0x365ecddf6286b0c4) {
        if (arg1 < 0x1d7ed092cb04d3f1) {
            if (arg1 < 0x1bf4c7c0f319a435) {
                if (arg1 != 0x2b3a43e29242445) {
                    if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080129d4;
                    pcVar2 = sym.pattern_s_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
code_r0x08006610:
                    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 5) {
                        return;
                    }
                    goto code_r0x080129d4;
                }
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 == 0x1bf4c7c0f319a435) {
                    pcVar2 = sym.swr_slave_reg_is_enabled.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    goto code_r0x08006650;
                }
                if (arg1 != 0x1c2b0952efa24c7a) goto code_r0x080129d4;
                pcVar2 = sym.trace_event_reg.cfi_jt;
            }
        }
        else if (arg1 < 0x2f9400389bfca2f3) {
            if (arg1 == 0x1d7ed092cb04d3f1) {
                pcVar2 = sym.debugfs_attr_write.cfi_jt;
                goto code_r0x08006610;
            }
            if (arg1 != 0x2b17460ce4bf82db) goto code_r0x080129d4;
            pcVar2 = sym.__traceiter_qcom_haptics_play.cfi_jt;
        }
        else if (arg1 == 0x2f9400389bfca2f3) {
            pcVar2 = sym.haptics_erase.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x080129d4;
            pcVar2 = sym.no_llseek.cfi_jt;
        }
    }
    else {
        if (0x4f02d134afd44dca < arg1) {
            if (arg1 < 0x7b75c95e4a53ce56) {
                if (arg1 != 0x4f02d134afd44dcb) {
                    if (arg1 != 0x6b141b54612cf75f) goto code_r0x080129d4;
                    pcVar2 = sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    goto code_r0x080065b4;
                }
                pcVar2 = sym.__bpf_trace_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            }
            else {
                if (arg1 != 0x7b75c95e4a53ce56) {
                    if (arg1 == 0x7d57972cd3914fb1) {
                        pcVar2 = sym.haptics_boost_notifier.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    }
                    else {
                        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080129d4;
                        pcVar2 = sym.cleanup_module.cfi_jt;
                    }
                    goto code_r0x080066a8;
                }
                pcVar2 = sym.perf_trace_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            }
code_r0x08006650:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x080129d4;
        }
        if (0x3dd1a39e589289fd < arg1) {
            if (arg1 != 0x3dd1a39e589289fe) {
                if (arg1 != 0x4a47875dcd644744) goto code_r0x080129d4;
                pcVar2 = sym.primitive_duration_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
code_r0x08006580:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 9) {
                    return;
                }
                goto code_r0x080129d4;
            }
            pcVar2 = sym.trace_raw_output_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
code_r0x08006678:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x080129d4;
        }
        if (arg1 != 0x365ecddf6286b0c4) {
            if (arg1 != 0x39e63916c3db07da) goto code_r0x080129d4;
            pcVar2 = sym.haptics_disable_hbst_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
            goto code_r0x080065f4;
        }
        pcVar2 = sym.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt;
    }
code_r0x080066a8:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080129d4:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012a28);
    (*pcVar1)();
}


// ===== sym.haptics_playback.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080066c0 (size 8) =====

uint sym.haptics_playback.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,ulong param_2,int param_3)

{
    uint uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x2d8);
    _dev_printk(0x8003b96,*arg1,"playback val = %d\n",param_3);
    if (param_3 == 0) {
        if ((*(arg1 + 0xf4) == 0) && (arg1[0x16] != 0)) {
            _dev_printk(0x8003b96,*arg1,"FIFO playing is not done yet, defer stopping in erase\n");
            uVar1 = 0;
        }
        else {
            uVar1 = sym.haptics_enable_play(arg1,0);
            if (*(arg1 + 0xf4) == 1) {
                iVar2 = __hrtimer_get_remaining(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt,0);
                if ((0 < iVar2) ||
                   (uVar3 = hrtimer_active(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt), (uVar3 & 1) != 0))
                {
                    hrtimer_cancel(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt);
                }
                *0x8000588 = 5;
                hrtimer_start_range_ns(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt,50000000,0,1);
                _dev_info(_reloc.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt,
                          "restart_fifo_delay_timer: set delay %dms\n",*0x8000588);
            }
        }
    }
    else {
        uVar1 = sym.haptics_enable_play(arg1,1);
    }
    return uVar1;
}


// ===== sym.trace_event_raw_init.cfi_jt @ 0x080066c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_raw_init.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.delayed_work_timer_fn.cfi_jt @ 0x080066d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.delayed_work_timer_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module.cfi_jt @ 0x080066d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.haptics_probe.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt @ 0x080066e0 (size 8) =====

ulong sym.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt(ulong param_1,uint param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8012b90;
    piVar1 = *0x8012b90;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.haptics_disable_hbst_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080066e8 (size 8) =====

ulong sym.haptics_disable_hbst_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.haptics_boost_vreg_enable(param_1 + -0x290,0);
    uVar2 = *(param_1 + -0x290);
    if (iVar1 < 0) {
        _dev_err(uVar2,"disable boost vreg failed, rc=%d\n",iVar1);
    }
    else {
        _dev_printk(0x8003b96,uVar2,"boost vreg is disabled\n");
    }
    return 0;
}


// ===== sym.haptics_disable_fifo_delay_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080066f0 (size 8) =====

ulong sym.haptics_disable_fifo_delay_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000588 = 0;
    _dev_info(_reloc.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt,"cancel delay for play fifo(after direct play)\n");
    return 0;
}


// ===== sym.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt @ 0x080066f8 (size 8) =====

ulong sym.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt
                (ulong param_1,uint param_2,uint param_3,uint32_t param_4,uint32_t param_5)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8012b48 != NULL) {
        piVar1 = *0x8012b48;
        do {
            (**piVar1)(piVar1[1],param_2,param_3,param_4 & 1,param_5 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.haptics_set_gain.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006700 (size 8) =====

void sym.haptics_set_gain.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint16_t param_2)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    if (param_2 == 0) {
        return;
    }
    *in_x18 = unaff_x30;
    puVar1 = *(param_1 + 0x2d8);
    if (0x7ffe < param_2) {
        param_2 = 0x7fff;
    }
    *(puVar1 + 0x1d) = param_2;
    queue_work_on(0x20,_no_llseek,puVar1 + 0x65);
    _dev_printk(0x8003b96,*puVar1,"Set gain: %#x\n",param_2);
    return;
}


// ===== sym.__traceiter_qcom_haptics_play.cfi_jt @ 0x08006708 (size 8) =====

ulong sym.__traceiter_qcom_haptics_play.cfi_jt(ulong param_1,uint32_t param_2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8012bd8 != NULL) {
        piVar1 = *0x8012bd8;
        do {
            (**piVar1)(piVar1[1],param_2 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.haptics_upload_effect.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006710 (size 8) =====

int sym.haptics_upload_effect.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,int16_t *param_2)

{
    ulong *puVar1;
    uint32_t uVar2;
    int16_t iVar3;
    int16_t iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    uint uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    uint32_t *puVar15;
    ulong *in_x18;
    ulong *arg1;
    int64_t iVar16;
    int64_t *arg1_00;
    uint32_t uVar17;
    ulong unaff_x30;
    int iStack_84;
    ulong uStack_80;
    uint8_t auStack_74 [4];
    ulong uStack_70;
    uint64_t uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar8 = 0;
    arg1 = *(param_1 + 0x2d8);
    iStack_84 = 0;
    uStack_80 = 0x79726574746162;
    if (*(arg1 + 0x74) == 1) {
        uVar12 = thermal_zone_get_zone_by_name(&uStack_80);
        if (uVar12 < 0xfffffffffffff001) {
            uVar12 = thermal_zone_get_temp(uVar12,&iStack_84);
            uVar12 = uVar12 & 0xffffffff;
        }
        else {
            _dev_printk(0x8003b96,*arg1,
                        "haptics_upload_effect, No thermal zone for temperature,use default temperature,err:%d\n",
                        uVar12 & 0xffffffff);
            iStack_84 = 0x14;
        }
        iVar8 = uVar12;
        _dev_printk(0x8003b96,*arg1,"haptics_upload_effect, temperature:%d,ret:%d\n",iStack_84,uVar12 & 0xffffffff);
    }
    iVar3 = *param_2;
    if (iVar3 == 0x51) {
        if (param_2[8] == 0x5d) {
            if (*(param_2 + 0x12) == 6) {
                iVar16 = *(param_2 + 0x14);
                iVar3 = param_2[10];
                uStack_70 = uStack_70 & 0xffff000000000000;
                iVar11 = sym._copy_from_user(&uStack_70,iVar16,6);
                if (iVar11 == 0) {
                    uVar9 = uStack_70;
                    if (uStack_70 < 0) {
                        uVar17 = *(arg1 + 0x364);
                        if (uVar17 != 0) {
                            uVar2 = uStack_70 & 0x7fff;
                            iVar11 = 0x88;
                            goto code_r0x0800a3f8;
                        }
                    }
                    else {
                        uVar17 = *(arg1 + 0x6c);
                        if (uVar17 != 0) {
                            iVar11 = 0x80;
                            uVar2 = uVar9;
code_r0x0800a3f8:
                            iVar11 = *(arg1 + iVar11);
                            if (uVar17 < 1) {
                                uVar12 = 0;
code_r0x0800a440:
                                if (uVar12 != uVar17) {
                                    puVar1 = arg1 + 0x17;
                                    mutex_lock(puVar1);
                                    if (*(arg1 + 0x1f) == '\0') {
                                        iVar11 = iVar11 + (uVar12 & 0xffffffff) * 0x30;
                                        pcVar14 = "predefined";
                                        if (uVar9 < 0) {
                                            pcVar14 = "primitive";
                                        }
                                        *(arg1 + 0xec) = (*(iVar11 + 0x1c) * iVar3) / 0x7fff;
                                        _dev_printk(0x8003b96,*arg1,"upload %s effect %d, vmax=%d\n",pcVar14,
                                                    *(iVar11 + 0x18));
                                        iVar8 = sym.haptics_load_predefined_effect(arg1,iVar11);
                                        if (-1 < iVar8) {
                                            mutex_unlock(puVar1);
                                            uVar9 = sym.get_play_length_us(arg1 + 0x13);
                                            uVar12 = uStack_70;
                                            *(arg1 + 0x1e) = uVar9;
                                            uStack_70._6_2_ = SUB82(uVar12,6);
                                            uStack_70._0_6_ =
                                                 CONCAT24((uVar9 % 1000000) / 1000,CONCAT22(uVar9 / 1000000,uStack_70)
                                                         );
                                            iVar11 = sym._copy_to_user(iVar16);
                                            if (iVar11 == 0) goto code_r0x08009e80;
                                            goto code_r0x0800a550;
                                        }
                                        _dev_err(*arg1,"Play predefined effect%d failed, rc=%d\n",*(iVar11 + 0x18),
                                                 iVar8);
                                    }
                                    else {
                                        _dev_err(*arg1,"calibration in progress, ignore playing predefined effect\n");
                                        iVar8 = -0x10;
                                    }
                                    mutex_unlock(puVar1);
                                    goto code_r0x0800a554;
                                }
                            }
                            else {
                                uVar12 = 0;
                                puVar15 = iVar11 + 0x18;
                                do {
                                    if (*puVar15 == (uVar2 & 0xffff)) goto code_r0x0800a440;
                                    uVar12 = uVar12 + 1;
                                    puVar15 = puVar15 + 0xc;
                                } while (uVar17 != uVar12);
                            }
                            _dev_err(*arg1,"effect%d is not supported!\n",uVar9);
                            iVar8 = -0x16;
                            goto code_r0x0800a554;
                        }
                    }
                    iVar8 = -0x16;
                }
                else {
code_r0x0800a550:
                    iVar8 = -0xe;
                }
code_r0x0800a554:
                uVar13 = *arg1;
                pcVar14 = "Upload periodic effect failed\n";
            }
            else {
                if (*(param_2 + 0x12) != 0x18) goto code_r0x08009e80;
                uStack_68 = 0;
                iStack_60 = 0;
                iVar11 = *(param_2 + 0x14);
                uStack_70 = 0;
                iVar3 = param_2[10];
                if ((*(arg1 + 0xf4) == 1) && (_segment.ehdr != 0)) {
                    msleep();
                    _dev_printk(0x8003b96,*arg1,"direct-play detected, delay %dms",_segment.ehdr);
                }
                if ((arg1[0x12] == 0) || (arg1_00 = *(arg1[0x12] + 8), arg1_00 == NULL)) {
                    iVar8 = -0xc;
                }
                else {
                    iVar11 = sym._copy_from_user(&uStack_70,iVar11,0x18);
                    if (iVar11 == 0) {
                        _dev_printk(0x8003b96,*arg1,"custom data length %d with play-rate %d Hz\n",uStack_70._4_4_,
                                    uStack_68 & 0xffffffff);
                        uVar9 = *(arg1 + 8);
                        if ((uVar9 == 0) || (200000 < uVar9)) {
code_r0x0800a3b4:
                            _dev_err(*arg1,"Can\'t support play rate: %d Hz\n");
                            iVar8 = -0x16;
                        }
                        else {
                            if (uStack_68 < 32000) {
                                if (uStack_68 == 8000) {
                                    uVar10 = 8;
                                }
                                else if (uStack_68 == 16000) {
                                    uVar10 = 9;
                                }
                                else if (uStack_68 == 24000) {
                                    uVar10 = 10;
                                }
                                else {
code_r0x0800a784:
                                    uVar17 = 0;
                                    if (uVar9 != 0) {
                                        uVar17 = 1000000 / uVar9;
                                    }
                                    uVar9 = uVar17 - 5;
                                    uVar17 = uVar17 + 5;
                                    if (((uVar17 < uStack_68) || (uVar17 < uVar9)) || (uStack_68 < uVar9)) {
                                        if (uVar17 < uVar9) goto code_r0x0800a3b4;
                                        if ((uStack_68 >> 1 < uVar9) || (uVar17 < uStack_68 >> 1)) {
                                            if ((uStack_68 >> 2 < uVar9) || (uVar17 < uStack_68 >> 2)) {
                                                if ((uStack_68 >> 3 < uVar9) || (uVar17 < uStack_68 >> 3)) {
                                                    if ((uStack_68 * 2 < uVar9) || (uVar17 < uStack_68 * 2)) {
                                                        if ((uStack_68 * 4 < uVar9) || (uVar17 < uStack_68 * 4)) {
                                                            if ((uStack_68 * 8 < uVar9) || (uVar17 < uStack_68 * 8))
                                                            goto code_r0x0800a3b4;
                                                            uVar10 = 6;
                                                        }
                                                        else {
                                                            uVar10 = 5;
                                                        }
                                                    }
                                                    else {
                                                        uVar10 = 4;
                                                    }
                                                }
                                                else {
                                                    uVar10 = 3;
                                                }
                                            }
                                            else {
                                                uVar10 = 2;
                                            }
                                        }
                                        else {
                                            uVar10 = 1;
                                        }
                                    }
                                    else {
                                        uVar10 = 0;
                                    }
                                }
                            }
                            else if (uStack_68 == 32000) {
                                uVar10 = 0xb;
                            }
                            else if (uStack_68 == 0xac44) {
                                uVar10 = 0xc;
                            }
                            else {
                                if (uStack_68 != 48000) goto code_r0x0800a784;
                                uVar10 = 0xd;
                            }
                            mutex_lock(arg1 + 0x17);
                            *(arg1_00 + 0xc) = uVar10;
                            kvfree(*arg1_00);
                            iVar11 = __kmalloc(uStack_70._4_4_,0xdc0);
                            *arg1_00 = iVar11;
                            if (iVar11 == 0) {
                                iVar11 = vmalloc(uStack_70._4_4_);
                                *arg1_00 = iVar11;
                                if (iVar11 != 0) goto code_r0x0800a800;
                                iVar8 = -0xc;
                            }
                            else {
code_r0x0800a800:
                                iVar16 = iStack_60;
                                uVar12 = uStack_70 >> 0x20;
                                if (uStack_70 < 0) goto code_r0x0800aa24;
                                __check_object_size(iVar11,uVar12,0);
                                iVar11 = sym._copy_from_user(iVar11,iVar16,uVar12);
                                if (iVar11 == 0) {
                                    _dev_printk(0x8003b96,*arg1,"Copy custom FIFO samples successfully\n");
                                    *(arg1_00 + 1) = uStack_70._4_4_;
                                    uVar10 = sym.get_fifo_play_length_us(arg1_00,*(arg1[0x12] + 0x20));
                                    *(arg1_00 + 2) = uVar10;
                                    if (*(arg1 + 0x1f) == '\0') {
                                        arg1[0x13] = arg1[0x12];
                                        arg1[0x14] = 0;
                                        _dev_printk(0x8003b96,*arg1,"set magnitude on custom effect, rc=%d\n",iVar3);
                                        uVar9 = (*(arg1[0x12] + 0x1c) * iVar3) / 0x7fff;
                                        *(arg1 + 0xec) = uVar9;
                                        iVar8 = sym.haptics_set_vmax_mv(arg1,uVar9);
                                        if ((-1 < iVar8) &&
                                           (((*(arg1 + 0x6f) >> 3 & 1) == 0 ||
                                            (iVar8 = sym.haptics_toggle_module_enable(arg1), -1 < iVar8)))) {
                                            sym.haptics_enable_autores(arg1,*(arg1[0x13] + 0x2c) == '\0');
                                            *(arg1 + 0xf4) = 0;
                                            iVar8 = sym.haptics_set_fifo(arg1,*(arg1[0x13] + 8));
                                            if (-1 < iVar8) goto code_r0x0800a22c;
                                        }
                                    }
                                    else {
                                        _dev_err(*arg1,"calibration in progress, ignore playing custom effect\n");
                                        iVar8 = -0x10;
                                    }
                                }
                                else {
                                    iVar8 = -0xe;
                                }
                                kvfree(*arg1_00);
                                *arg1_00 = 0;
                            }
                            mutex_unlock(arg1 + 0x17);
                        }
                    }
                    else {
                        iVar8 = -0xe;
                    }
                }
                uVar13 = *arg1;
                pcVar14 = "Upload custom FIFO data failed\n";
            }
code_r0x0800a560:
            _dev_err(uVar13,pcVar14,iVar8);
        }
        else {
            _dev_err(*arg1,"Only support custom waveforms\n");
            iVar8 = -0x16;
        }
    }
    else {
        if (iVar3 == 0x52) {
            iVar3 = param_2[5];
            iVar4 = param_2[8];
            uVar9 = sym.get_direct_play_max_amplitude(arg1);
            uVar2 = (uVar9 & 0xff) * iVar4;
            uVar9 = *(arg1 + 0x44);
            uVar17 = *(arg1 + 0xf);
            _dev_printk(0x8003b96,*arg1,"upload constant effect, length = %dms, amplitude = %#x\n",iVar3,
                        uVar2 / 0x7fff & 0xff);
            if (((iVar8 == 0) && (*(arg1 + 0x74) == 1)) && (iStack_84 < 1)) {
                uVar5 = 0;
                if (uVar17 != 0) {
                    uVar5 = 10000000 / uVar17;
                }
                uVar17 = 0;
                if (uVar5 != 0) {
                    uVar17 = 10000000 / uVar5;
                }
                uVar6 = 0;
                if (uVar9 != 0) {
                    uVar6 = 10000000 / uVar9;
                }
                iVar8 = sym.haptics_config_openloop_lra_period(arg1,uVar5);
                _dev_info(*arg1,"temp_f0: cl_t_lra_us(%d  -->  %d),lra_freq(%d HZ ---> %d HZ).\n",*(arg1 + 0x44),
                          uVar5,uVar6,uVar17);
                if (iVar8 < 0) {
                    _dev_err(*arg1,"temp_f0: f0(%d) config failed.\n");
                    goto code_r0x0800a014;
                }
                _dev_info(*arg1,"temp_f0: f0(%d) config success.\n",*(arg1 + 0xf));
            }
            uVar13 = __msecs_to_jiffies(iVar3);
            queue_delayed_work_on(0x20,_no_llseek,arg1 + 0x29,uVar13);
            uVar9 = *(arg1 + 0x34);
            mutex_lock(arg1 + 0x17);
            if (*(arg1 + 0x1f) == '\0') {
                arg1[0x13] = 0;
                if ((arg1[0x51] == 0) && (*(arg1 + 0x71) != 3)) {
code_r0x0800a190:
                    mutex_lock(arg1 + 0x5f);
                    iVar8 = sym.__haptics_set_vmax_mv(arg1,uVar9);
                    mutex_unlock(arg1 + 0x5f);
                    if (-1 < iVar8) {
                        arg1[0x14] = arg1 + 3;
                        iVar8 = sym.haptics_set_brake(arg1,arg1 + 3);
                        if (-1 < iVar8) {
                            uStack_70 = CONCAT71(uStack_70._1_7_,uVar2 / 0x7fff);
                            uVar9 = *(arg1 + 0x36c) + 0x26U & 0xffff;
                            iVar8 = regmap_bulk_write(arg1[1],uVar9,&uStack_70,1);
                            if (iVar8 < 0) {
                                _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar9,iVar8);
                                uVar13 = *arg1;
                                pcVar14 = "config DIRECT_PLAY failed, rc=%d\n";
                                goto code_r0x0800a69c;
                            }
                            regmap_update_bits_base(arg1[1],*(arg1 + 0x6d) + 99U & 0xffff,0x80,0,0,0,0);
                            *(arg1 + 0xf4) = 1;
                        }
                    }
                }
                else {
                    uStack_70 = uStack_70 & 0xffffffffffffff00;
                    uVar9 = *(arg1 + 0x6d) + 0x67U & 0xffff;
                    iVar8 = regmap_bulk_read(arg1[1],uVar9,&uStack_70,1);
                    if (-1 < iVar8) {
                        uVar9 = *(arg1 + 0x35c) + (uStack_70 & 0x7f) * -0x32;
                        goto code_r0x0800a190;
                    }
                    _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar9,iVar8);
                    uVar13 = *arg1;
                    pcVar14 = "Get Vmax HDRM failed, rc=%d\n";
code_r0x0800a69c:
                    _dev_err(uVar13,pcVar14,iVar8);
                }
            }
            else {
                _dev_err(*arg1,"calibration in progress, ignore playing constant effect\n");
            }
code_r0x0800a22c:
            mutex_unlock(arg1 + 0x17);
code_r0x08009e80:
            iVar8 = sym.haptics_enable_hpwr_vreg(arg1,1);
            if (iVar8 < 0) {
                uVar13 = *arg1;
                pcVar14 = "enable hpwr_vreg failed, rc=%d\n";
                goto code_r0x0800a560;
            }
            auStack_74[0] = 0;
            if (((arg1[0x51] == 0) && (*(arg1 + 0x71) != 3)) && ((*(arg1 + 0x6f) >> 1 & 1) != 0)) {
                puVar1 = arg1 + 0x52;
                iVar11 = __hrtimer_get_remaining(puVar1,0);
                if ((iVar11 < 1) && (uVar12 = hrtimer_active(puVar1), (uVar12 & 1) == 0)) {
                    uVar9 = 0;
                    puVar1 = arg1 + 0x17;
                    do {
                        uVar12 = sym.is_boost_vreg_enabled_in_open_loop(arg1);
                        if ((uVar12 & 1) != 0) goto code_r0x0800a010;
                        mutex_lock(puVar1);
                        uStack_70 = uStack_70 & 0xffffffffffff0000;
                        iVar8 = sym.haptics_get_status_data(arg1,5,&uStack_70);
                        if ((-1 < iVar8) && ((uStack_70._1_1_ & 7) == 4)) {
                            _dev_printk(0x8003b96,*arg1,"Ignore waiting hBoost when SWR play is in progress\n");
                            mutex_unlock(puVar1);
                            goto code_r0x0800a010;
                        }
                        mutex_unlock(puVar1);
                        uVar17 = *(arg1 + 0x6e) + 0x46U & 0xffff;
                        iVar8 = regmap_bulk_read(arg1[1],uVar17,auStack_74,1);
                        if (iVar8 < 0) {
code_r0x08009fd4:
                            _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar17);
                        }
                        else if ((iVar8 == 0) && (-1 < auStack_74[0])) {
                            uVar17 = *(arg1 + 0x6e) + 0xbU & 0xffff;
                            iVar8 = regmap_bulk_read(arg1[1],uVar17,auStack_74,1);
                            if (iVar8 < 0) goto code_r0x08009fd4;
                            if ((iVar8 == 0) && ((auStack_74[0] & 1) == 0)) goto code_r0x0800a010;
                        }
                        uVar12 = uVar9;
                        _dev_printk(0x8003b96,*arg1,"hBoost is busy, wait %d\n");
                        usleep_range_state(200,0xc9,2);
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 100);
                    _dev_err(*arg1,"hboost is not ready for haptics play\n");
                    sym.xm_hap_driver_exception_handler(0x360387aa,0x800111f,0x800398d,uVar12);
                    if (*(arg1 + 0xf4) == 0) {
                        _dev_printk(0x8003b96,*arg1,"stop FIFO play explicitly to restore SW status\n");
                        mutex_lock(puVar1);
                        sym.haptics_stop_fifo_play(arg1);
                        mutex_unlock(puVar1);
                        iVar8 = -0x10;
                        goto code_r0x0800a014;
                    }
                }
                else {
                    hrtimer_cancel(puVar1);
                    _dev_printk(0x8003b96,*arg1,"hboost is still on, ignore\n");
                }
            }
        }
        else {
            if (iVar3 != 0x55) {
                _dev_err(*arg1,"%d effect is not supported\n");
                iVar8 = -0x16;
                goto code_r0x0800a014;
            }
            *(arg1 + 0x5e) = 1;
            _dev_info(*arg1,"set hboost quick off!");
        }
code_r0x0800a010:
        iVar8 = 0;
    }
code_r0x0800a014:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x0800aa24:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x800,0x800aa2c);
    (*pcVar7)();
}


// ===== sym.no_llseek.cfi_jt @ 0x08006718 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.haptics_freeze.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006720 (size 8) =====

ulong sym.haptics_freeze.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.haptics_suspend_config(param_1);
    if (-1 < uVar1) {
        if (0 < *(*(param_1 + 0x98) + 0x358)) {
            devm_free_irq(param_1);
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.haptics_suspend.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006728 (size 8) =====

uint32_t sym.haptics_suspend.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(param_1 + 0x98) + 0x381) == '\x01') {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.haptics_suspend_config(param_1);
        uVar1 = uVar1 & uVar1 >> 0x1f;
    }
    return uVar1;
}


// ===== sym.haptics_resume.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006730 (size 8) =====

uint64_t sym.haptics_resume.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar5 = *(param_1 + 0x98);
    auStack_3c[0] = 0x80;
    uVar1 = *(puVar5 + 0x6d) + 0x46U & 0xffff;
    uVar2 = regmap_bulk_write(puVar5[1],uVar1,auStack_3c,1);
    if (uVar2 < 0) {
        uVar4 = uVar2;
        _dev_err(*puVar5,"write addr %#x failed, rc=%d\n",uVar1,uVar4);
    }
    else {
        _dev_printk(0x8003b96,*puVar5,"haptics module %s\n","enabled");
        uVar4 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.haptics_freeze;
    uVar4 = sym.haptics_suspend_config(iVar3);
    if (-1 < uVar4) {
        if (0 < *(*(iVar3 + 0x98) + 0x358)) {
            devm_free_irq(iVar3);
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.haptics_restore.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006738 (size 8) =====

uchar * sym.haptics_restore.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1;
    uchar *puVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    arg1 = *(param_1 + 0x98);
    uVar3 = sym.haptics_hw_init(arg1);
    if (uVar3 < 0) {
        uVar5 = *arg1;
        pcVar6 = "Initialize HW failed, rc = %d\n";
code_r0x0801290c:
        puVar7 = uVar3;
        _dev_err(uVar5,pcVar6,puVar7);
    }
    else {
        if (0 < *(arg1 + 0x6b)) {
            uVar3 = devm_request_threaded_irq
                              (*arg1,*(arg1 + 0x6b),0,
                               sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,0x2000,"fifo-empty"
                               ,arg1);
            if (uVar3 < 0) {
                uVar5 = *arg1;
                pcVar6 = "request fifo-empty IRQ failed, rc=%d\n";
                goto code_r0x0801290c;
            }
            disable_irq_nosync(*(arg1 + 0x6b));
            *(arg1 + 0x38c) = 0;
        }
        auStack_3c[0] = 0x80;
        uVar3 = *(arg1 + 0x6d) + 0x46U & 0xffff;
        uVar4 = regmap_bulk_write(arg1[1],uVar3,auStack_3c,1);
        if (uVar4 < 0) {
            puVar7 = uVar4;
            _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar3,puVar7);
        }
        else {
            _dev_printk(0x8003b96,*arg1,"haptics module %s\n","enabled");
            puVar7 = NULL;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar8 = __stack_chk_fail();
        puVar7 = auVar8._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar8._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8012a28);
        (*pcVar2)();
    }
    return puVar7;
}


// ===== sym.haptics_shutdown.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006740 (size 8) =====

void sym.haptics_shutdown.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0xa8);
    sym.haptics_suspend_config(*piVar1);
    if (0 < *(*(*piVar1 + 0x98) + 0x358)) {
        devm_free_irq();
    }
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006748 (size 8) =====

void sym.trace_raw_output_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"FIFO program status: writing %u bytes, written %u bytes, total %u bytes\n\n",
                           *(iVar2 + 0x10),*(iVar2 + 0xc),*(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006750 (size 8) =====

void sym.trace_raw_output_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"FIFO HW status: filled = %u, available = %u, full = %d, empty = %d\n\n",
                           *(iVar2 + 8),*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x11));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006758 (size 8) =====

void sym.trace_raw_output_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"haptics %s status: MSB %#x, LSB %#x\n\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0xd));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006760 (size 8) =====

void sym.trace_raw_output_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x20e8);
    iVar1 = trace_raw_output_prep(param_1,param_3);
    if (iVar1 == 1) {
        trace_event_printf(param_1,"play enable: %d\n\n",*(iVar2 + 8));
        trace_handle_return(param_1 + 0x10c0);
    }
    return;
}


// ===== sym.haptics_stop_constant_effect_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006768 (size 8) =====

void sym.haptics_stop_constant_effect_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong *in_x18;
    ulong *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0x148;
    iVar1 = sym.haptics_enable_play(arg1,0);
    if (iVar1 < 0) {
        _dev_err(*arg1,"stop constant effect play failed\n");
    }
    iVar1 = sym.haptics_enable_hpwr_vreg(arg1,0);
    if (iVar1 < 0) {
        _dev_err(*arg1,"disable hpwr_vreg failed\n");
    }
    return;
}


// ===== sym.haptics_set_gain_work.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006770 (size 8) =====

uint64_t sym.haptics_set_gain_work.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1;
    uint32_t uVar5;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    arg1 = param_1 + -0x328;
    uVar5 = *(param_1 + -0x240);
    if (*(param_1 + -0x234) == 1) {
        uVar3 = sym.get_direct_play_max_amplitude(arg1);
        uVar5 = ((uVar5 & 0xffff) * (uVar3 & 0xff)) / 0x7fff;
        _dev_printk(0x8003b96,*arg1,"Set amplitude: %#x\n",uVar5);
        auStack_3c[0] = uVar5;
        uVar5 = *(param_1 + 0x44) + 0x26U & 0xffff;
        uVar4 = regmap_bulk_write(*(param_1 + -800),uVar5,auStack_3c,1);
        if (uVar4 < 0) {
            _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar5,uVar4 & 0xffffffff);
            uVar4 = _dev_err(*arg1,"config DIRECT_PLAY failed, rc=%d\n",uVar4 & 0xffffffff);
        }
    }
    else {
        puVar1 = param_1 + -0x2f4;
        if (*(param_1 + -0x290) != 0) {
            puVar1 = *(param_1 + -0x290) + 0x1c;
        }
        uVar3 = 5000;
        if (*puVar1 < 0x1389 || *(param_1 + 0x66) == '\0') {
            uVar3 = *puVar1;
        }
        uVar5 = (uVar3 * (uVar5 & 0xffff)) / 0x7fff;
        *(param_1 + -0x23c) = uVar5;
        uVar4 = sym.__haptics_set_vmax_mv(arg1,uVar5);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8009db0;
    *0x8000588 = 0;
    _dev_info(_reloc.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt,"cancel delay for play fifo(after direct play)\n");
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08006778 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.haptics_probe.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt);
    return;
}


// ===== sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006780 (size 8) =====

ulong sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t uVar5;
    uint extraout_w8;
    int64_t *piVar6;
    uint extraout_w9;
    ulong *in_x18;
    ulong *puVar7;
    uint32_t unaff_w21;
    int64_t *unaff_x22;
    int64_t *piVar8;
    ulong unaff_x30;
    uint8_t auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_58 = *(iVar3 + 0x5e0);
    auStack_5c[0] = 0;
    puVar7 = *(param_2 + 0x6d) + 0x10U & 0xffff;
    iVar4 = regmap_bulk_read(param_2[1],puVar7,auStack_5c,1);
    if (iVar4 < 0) {
        _dev_err(*param_2,"read addr %#x failed, rc=%d\n",puVar7,iVar4);
        goto code_r0x08009874;
    }
    if ((auStack_5c[0] >> 1 & 1) == 0) goto code_r0x08009874;
    puVar7 = param_2 + 0x17;
    mutex_lock(puVar7);
    if (*(param_2 + 0xac) != 1) {
        if (*(param_2 + 0xb4) == 1) {
            _dev_printk(0x8003b96,*param_2,"FIFO programming got cancelled\n");
        }
        else if (param_2[0x13] != 0) {
            unaff_x22 = *(param_2[0x13] + 8);
            if ((unaff_x22 == NULL) || (*unaff_x22 == 0)) {
                _dev_err(*param_2,"no FIFO samples available\n");
            }
            else {
                unaff_w21 = *(unaff_x22 + 1);
                iVar4 = *(param_2 + 0x15);
                uVar5 = sym.haptics_get_available_fifo_memory(param_2);
                if (-1 < uVar5) {
                    uVar1 = unaff_w21 - iVar4;
                    unaff_w21 = uVar5 & 0xfffffffc;
                    if (uVar1 <= uVar5) {
                        unaff_w21 = uVar1;
                    }
                    if (*unaff_x22 + *(param_2 + 0x15) == 0) {
                        _dev_err(*param_2,"no data available to update FIFO\n");
                        iVar4 = -0x16;
                    }
                    else {
                        iVar4 = sym.haptics_update_memory_data(param_2,*unaff_x22 + *(param_2 + 0x15),unaff_w21);
                        if (-1 < iVar4) {
                            *(param_2 + 0x15) = *(param_2 + 0x15) + unaff_w21;
                            goto code_r0x080097fc;
                        }
                    }
                    _dev_err(*param_2,"Update FIFO samples failed, rc=%d\n",iVar4);
                }
            }
        }
        goto code_r0x0800986c;
    }
    unaff_w21 = sym.haptics_get_available_fifo_memory(param_2);
    iVar4 = *(param_2 + 0x71);
    if (iVar4 == 2) {
        if (unaff_w21 == 0x280) goto code_r0x08009860;
    }
    else if (iVar4 == 4) {
        uVar5 = 0x280;
        if (*(param_2 + 0x104) != 0) {
            uVar5 = *(param_2 + 0x104);
        }
        if (unaff_w21 == uVar5) goto code_r0x08009860;
    }
    else if (iVar4 == 3) {
        if (unaff_w21 == 0x400) {
code_r0x08009860:
            iVar4 = sym.haptics_stop_fifo_play(param_2);
            if (-1 < iVar4) {
                _dev_printk(0x8003b96,*param_2,"FIFO playing is done\n");
            }
            goto code_r0x0800986c;
        }
    }
    else {
        _printk(0x800334e);
        if (unaff_w21 == 0) goto code_r0x08009860;
    }
    unaff_x22 = *param_2;
    iVar4 = sym.get_max_fifo_samples(param_2);
    _dev_printk(0x8003b96,unaff_x22,"%d FIFO samples still in playing\n",iVar4 - unaff_w21);
code_r0x0800986c:
    while( true ) {
        mutex_unlock(puVar7);
code_r0x08009874:
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
        iVar3 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar3) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar3) & 0x3f) & 1) !=
            0) {
            iVar3 = sp_el0;
            *(iVar3 + 0x10) = *(iVar3 + 0x10) + 1;
            piVar8 = *0x8012b90;
            piVar6 = *0x8012b90;
            while (piVar6 != NULL) {
                (**piVar8)(piVar8[1],extraout_w9,extraout_w8,unaff_w21);
                piVar8 = piVar8 + 3;
                piVar6 = *piVar8;
            }
            iVar2 = *(iVar3 + 0x10) + -1;
            *(iVar3 + 0x10) = iVar2;
            if ((iVar2 == 0) || (*(iVar3 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x080097fc:
        if (*(param_2 + 0x15) == unaff_x22[1]) {
            _dev_printk(0x8003b96,*param_2,"FIFO programming is done\n");
            *(param_2 + 0xac) = 1;
            sym.haptics_set_fifo_empty_threshold(param_2);
        }
    }
    return 1;
}


// ===== sym.haptics_boost_notifier.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006788 (size 8) =====

ulong sym.haptics_boost_notifier.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                (int64_t param_1,int64_t param_2,uint32_t *param_3)

{
    uint uVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0) {
        uVar2 = *param_3;
        if (10000 < uVar2) {
            _dev_err(*(param_1 + -0x2d8),"voted Vmax (%u mV) is higher than maximum (%u mV)\n",uVar2,10000);
            return 0xffffffea;
        }
        *(param_1 + 0x9c) = uVar2;
        _dev_printk(0x8003b96,*(param_1 + -0x2d8),"Vmax is clamped at %u mV to support hBoost concurrency\n",uVar2);
        uVar3 = 3;
        if (*(param_1 + 0xb0) != 4) {
            uVar3 = 1;
        }
        uVar1 = 0;
        if (uVar2 != 10000) {
            uVar1 = uVar3;
        }
        regmap_update_bits_base(*(param_1 + -0x2d0),*(param_1 + 0x90) + 0x68U & 0xffff,uVar3,uVar1,0,0,0);
    }
    return 0;
}


// ===== sym.__traceiter_qcom_haptics_status.cfi_jt @ 0x08006790 (size 8) =====

ulong sym.__traceiter_qcom_haptics_status.cfi_jt(ulong param_1,ulong param_2,uint param_3,uint param_4)

{
    int64_t *piVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = *0x8012c20;
    piVar1 = *0x8012c20;
    while (piVar1 != NULL) {
        (**piVar2)(piVar2[1],param_2,param_3,param_4);
        piVar2 = piVar2 + 3;
        piVar1 = *piVar2;
    }
    return 0;
}


// ===== sym.pattern_play_rate_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006798 (size 8) =====

void sym.pattern_play_rate_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.pattern_play_rate_us_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.pattern_play_rate_us_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.brake_en_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067a0 (size 8) =====

void sym.brake_en_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.brake_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.brake_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.simple_attr_release.cfi_jt @ 0x080067a8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_attr_release.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.brake_sine_gain_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067b0 (size 8) =====

void sym.brake_sine_gain_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.brake_sine_gain_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.brake_sine_gain_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.fifo_period_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067b8 (size 8) =====

void sym.fifo_period_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.fifo_period_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.fifo_period_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.simple_open.cfi_jt @ 0x080067c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.vmax_debugfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067c8 (size 8) =====

void sym.vmax_debugfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.auto_res_en_debugfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067d0 (size 8) =====

void sym.auto_res_en_debugfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.auto_res_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.auto_res_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.preload_effect_idx_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067d8 (size 8) =====

void sym.preload_effect_idx_dbgfs_ops_open.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.preload_effect_idx_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.preload_effect_idx_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067e0 (size 8) =====

void sym.__bpf_trace_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint64_t param_4,uint64_t param_5)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(param_1,param_2,param_3,param_4 & 1,param_5 & 1);
    return;
}


// ===== sym.perf_trace_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067e8 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x08006f5c)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.perf_trace_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    uint64_t unaff_x30;
    uchar auVar24 [16];
    uchar auStack_310 [12];
    uint32_t uStack_304;
    int64_t iStack_300;
    int64_t iStack_2f8;
    ulong **ppuStack_2f0;
    code *pcStack_2e8;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    int64_t iStack_258;
    ulong **ppuStack_250;
    ulong uStack_248;
    int64_t *piStack_240;
    code *pcStack_230;
    uint64_t uStack_228;
    int64_t *piStack_220;
    uint64_t uStack_218;
    uchar auStack_210 [12];
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    ulong **ppuStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    ulong uStack_1d8;
    int64_t iStack_1d0;
    uint64_t uStack_1c8;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    ulong uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar21 = param_5 & 0xffffffff;
    uVar16 = param_3 & 0xffffffff;
    uVar18 = param_2;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(param_1 + 0x78);
    uVar15 = param_4;
    uVar13 = param_5;
    if ((*(param_1 + 0x80) != 0) || (puVar10 = param_3, *piVar1 != 0)) {
        puVar10 = &uStack_64;
        iVar8 = perf_trace_buf_alloc(0x14,&iStack_60);
        uVar14 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar10 = uStack_64;
            uVar14 = -1L << (uVar14 & 0x3f);
            uVar13 = 1;
            uVar15 = (~uVar14 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar15 = uVar14 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = auStack_70;
            *(iStack_60 + 0x100) = uVar15;
            *(iStack_60 + 0x108) = 5;
            *(iVar8 + 8) = param_2;
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4 & 1;
            *(iVar8 + 0x11) = param_5 & 1;
            uVar15 = param_1;
            perf_trace_run_bpf_submit(iVar8,0x14,puVar10,param_1,1,iStack_60,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar9 = auVar24._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18 = 0x8006dac;
    uStack_a8 = 0x8006dac;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    uVar19 = auVar24._8_8_ & 0xffffffff;
    uVar23 = *(iVar9 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar17 = uVar23;
    uVar14 = uVar15;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_90 = uVar21;
    uStack_88 = uVar18;
    uStack_80 = uVar16;
    uStack_78 = param_1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) == 0))))
        goto code_r0x08006e34;
    }
    else {
code_r0x08006e34:
        puVar11 = 0x14;
        iVar8 = trace_event_buffer_reserve(&uStack_e8,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar24._8_4_;
            *(iVar8 + 0xc) = puVar10;
            *(iVar8 + 0x10) = uVar15;
            trace_event_buffer_commit(&uStack_e8);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar18 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    pcStack_128 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    uVar21 = uVar14 & 0xffffffff;
    uVar20 = puVar11 & 0xffffffff;
    uVar22 = auVar24._8_8_ & 0xffffffff;
    iStack_140 = 0;
    uStack_144 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar18 + 0x78);
    uVar16 = uVar14;
    ppuStack_130 = &puStack_b0;
    uStack_120 = param_4 & 0xffffffff;
    uStack_118 = uVar23;
    iStack_110 = iVar9;
    uStack_108 = uVar19;
    uStack_100 = puVar10 & 0xffffffff;
    uStack_f8 = uVar15 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar12 = puVar11, *piVar1 != 0)) {
        puVar12 = &uStack_144;
        iVar8 = perf_trace_buf_alloc(0x14,&iStack_140);
        uVar15 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_140 + 0xe8) = &ppuStack_130;
            puVar12 = uStack_144;
            uVar13 = 1;
            *(iStack_140 + 0xf8) = auStack_150;
            *(iStack_140 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8006e90;
            *(iStack_140 + 0x108) = 5;
            *(iVar8 + 8) = auVar24._8_4_;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar14;
            uVar16 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0x14,puVar12,uVar18,1,iStack_140,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar9 = auVar24._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_01 = 0x8006fb4;
    uStack_178 = 0x8006fb4;
    iVar8 = sp_el0;
    uVar15 = auVar24._8_8_ & 0xffffffff;
    iStack_188 = *(iVar8 + 0x5e0);
    uVar23 = *(iVar9 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar17 = uVar23;
    ppuStack_180 = &ppuStack_130;
    uStack_170 = uVar20;
    uStack_160 = uVar21;
    uStack_158 = uVar18;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar9), (uVar18 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar12 = 0xc;
        iVar8 = trace_event_buffer_reserve(&uStack_1b8,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar24[8] & 1;
            trace_event_buffer_commit(&uStack_1b8);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_188) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar18 = auVar24._0_8_;
    *extraout_x18_02 = sym.perf_trace_qcom_haptics_play;
    pcStack_1e8 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_1f8 = *(iVar8 + 0x5e0);
    uVar21 = auVar24._8_8_ & 0xffffffff;
    iStack_200 = 0;
    uStack_204 = 0;
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(uVar18 + 0x78);
    ppuStack_1f0 = &ppuStack_180;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar23;
    iStack_1d0 = iVar9;
    uStack_1c8 = uVar15;
    if ((*(uVar18 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &uStack_204;
        iVar8 = perf_trace_buf_alloc(0xc,&iStack_200);
        uVar15 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_200 + 0xe8) = &ppuStack_1f0;
            puVar12 = uStack_204;
            uVar13 = 1;
            *(iStack_200 + 0xf8) = auStack_210;
            *(iStack_200 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8007088;
            *(iStack_200 + 0x108) = 5;
            *(iVar8 + 8) = auVar24[8] & 1;
            uVar16 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0xc,puVar12,uVar18,1,iStack_200,piVar2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar9 = auVar24._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_03 = 0x800719c;
    uStack_248 = 0x800719c;
    pcStack_230 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_258 = *(iVar8 + 0x5e0);
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uVar17 = *(iVar9 + 0x48);
    uVar15 = uVar16;
    ppuStack_250 = &ppuStack_1f0;
    piStack_240 = piVar1;
    uStack_228 = uVar21;
    piStack_220 = piVar2;
    uStack_218 = uVar18;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar10 = puVar12;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar18 = trace_event_ignore_this_pid(iVar9), (uVar18 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar3 = auVar24._8_8_;
    }
    iVar7 = strlen(pcVar3);
    puVar10 = iVar7 + 1 + 0x10;
    iVar8 = trace_event_buffer_reserve(&uStack_288,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar8 + 0xe,pcVar3);
        *(iVar8 + 0xc) = puVar12;
        *(iVar8 + 0xd) = uVar16;
        trace_event_buffer_commit(&uStack_288);
    }
code_r0x08007284:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_258) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar16 = auVar24._0_8_;
    *extraout_x18_04 = sym.perf_trace_qcom_haptics_status;
    pcStack_2e8 = sym.perf_trace_qcom_haptics_status;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar3 = auVar24._8_8_;
    }
    iStack_2f8 = *(iVar8 + 0x5e0);
    uVar6 = uVar15;
    uVar5 = SUB81(puVar10,0);
    iStack_300 = 0;
    uStack_304 = 0;
    ppuStack_2f0 = &ppuStack_250;
    iVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_304;
        iVar4 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&iStack_300,puVar10);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_300 + 0xe8) = &ppuStack_2f0;
            *(iStack_300 + 0xf8) = auStack_310;
            *(iStack_300 + 0x100) = ~(-1L << uVar15) & 0x80072bc;
            *(iStack_300 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar8 + 0xe,pcVar3);
            puVar10 = uStack_304;
            uVar13 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar10,uVar16,1,iStack_300,piVar1,0);
            uVar15 = uVar16;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_2f8) {
        auVar24 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_05 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar15 & 1,
                       uVar13 & 1);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067f0 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x08006d44)
//WARNING: Removing unreachable block (ram,0x08006f5c)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_fifo_hw_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    ulong uVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong **ppuStack_370;
    code *pcStack_368;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    int64_t iStack_2d8;
    ulong **ppuStack_2d0;
    ulong uStack_2c8;
    int64_t *piStack_2c0;
    code *pcStack_2b0;
    uint64_t uStack_2a8;
    int64_t *piStack_2a0;
    uint64_t uStack_298;
    uchar auStack_290 [12];
    uint32_t uStack_284;
    int64_t iStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    code *pcStack_268;
    uint64_t uStack_260;
    ulong uStack_258;
    int64_t iStack_250;
    uint64_t uStack_248;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    ulong uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar19 = *(param_1 + 0x48);
    uVar15 = param_4;
    uVar16 = param_5;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(param_1), (uVar8 & 1) == 0))))
        goto code_r0x08006c08;
    }
    else {
code_r0x08006c08:
        puVar12 = 0x14;
        iVar9 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar9 != 0) {
            *(iVar9 + 8) = param_2;
            *(iVar9 + 0xc) = param_3;
            *(iVar9 + 0x10) = param_4 & 1;
            *(iVar9 + 0x11) = param_5 & 1;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar11 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_haptics_fifo_hw_status;
    pcStack_c8 = sym.perf_trace_qcom_haptics_fifo_hw_status;
    iVar9 = sp_el0;
    iStack_d8 = *(iVar9 + 0x5e0);
    uVar22 = uVar16 & 0xffffffff;
    uVar18 = puVar12 & 0xffffffff;
    uVar20 = auVar25._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar11 + 0x78);
    uVar8 = uVar15;
    uVar17 = uVar16;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar11 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_e4;
        iVar9 = perf_trace_buf_alloc(0x14,&iStack_e0);
        uVar21 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar13 = uStack_e4;
            uVar17 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8006c70;
            *(iStack_e0 + 0x108) = 5;
            *(iVar9 + 8) = auVar25._8_4_;
            *(iVar9 + 0xc) = puVar12;
            *(iVar9 + 0x10) = uVar15 & 1;
            *(iVar9 + 0x11) = uVar16 & 1;
            uVar8 = uVar11;
            perf_trace_run_bpf_submit(iVar9,0x14,puVar13,uVar11,1,iStack_e0,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar10 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_00 = 0x8006dac;
    uStack_128 = 0x8006dac;
    iVar9 = sp_el0;
    iStack_138 = *(iVar9 + 0x5e0);
    uVar21 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar10 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar19 = uVar24;
    uVar16 = uVar8;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_110 = uVar22;
    uStack_108 = uVar20;
    uStack_100 = uVar18;
    uStack_f8 = uVar11;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar11 = trace_event_ignore_this_pid(iVar10), (uVar11 & 1) == 0))))
        goto code_r0x08006e34;
    }
    else {
code_r0x08006e34:
        puVar12 = 0x14;
        iVar9 = trace_event_buffer_reserve(&uStack_168,iVar10);
        if (iVar9 != 0) {
            *(iVar9 + 8) = auVar25._8_4_;
            *(iVar9 + 0xc) = puVar13;
            *(iVar9 + 0x10) = uVar8;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_138) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar18 = auVar25._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    pcStack_1a8 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    iVar9 = sp_el0;
    iStack_1b8 = *(iVar9 + 0x5e0);
    uVar20 = uVar16 & 0xffffffff;
    uVar22 = puVar12 & 0xffffffff;
    uVar23 = auVar25._8_8_ & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar18 + 0x78);
    uVar11 = uVar16;
    ppuStack_1b0 = &ppuStack_130;
    uStack_1a0 = uVar15 & 0xffffffff;
    uStack_198 = uVar24;
    iStack_190 = iVar10;
    uStack_188 = uVar21;
    uStack_180 = puVar13 & 0xffffffff;
    uStack_178 = uVar8 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar14 = puVar12, *piVar1 != 0)) {
        puVar14 = &uStack_1c4;
        iVar9 = perf_trace_buf_alloc(0x14,&iStack_1c0);
        uVar15 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar14 = uStack_1c4;
            uVar17 = 1;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8006e90;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar9 + 8) = auVar25._8_4_;
            *(iVar9 + 0xc) = puVar12;
            *(iVar9 + 0x10) = uVar16;
            uVar11 = uVar18;
            perf_trace_run_bpf_submit(iVar9,0x14,puVar14,uVar18,1,iStack_1c0,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar10 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_02 = 0x8006fb4;
    uStack_1f8 = 0x8006fb4;
    iVar9 = sp_el0;
    uVar15 = auVar25._8_8_ & 0xffffffff;
    iStack_208 = *(iVar9 + 0x5e0);
    uVar24 = *(iVar10 + 0x48);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uVar19 = uVar24;
    ppuStack_200 = &ppuStack_1b0;
    uStack_1f0 = uVar22;
    uStack_1e0 = uVar20;
    uStack_1d8 = uVar18;
    if ((uVar19 >> 8 & 1) == 0) {
        if ((uVar19 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar14 = 0xc;
        iVar9 = trace_event_buffer_reserve(&uStack_238,iVar10);
        if (iVar9 != 0) {
            *(iVar9 + 8) = auVar25[8] & 1;
            trace_event_buffer_commit(&uStack_238);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_208) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar16 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_qcom_haptics_play;
    pcStack_268 = sym.perf_trace_qcom_haptics_play;
    iVar9 = sp_el0;
    iStack_278 = *(iVar9 + 0x5e0);
    uVar8 = auVar25._8_8_ & 0xffffffff;
    iStack_280 = 0;
    uStack_284 = 0;
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(uVar16 + 0x78);
    ppuStack_270 = &ppuStack_200;
    uStack_260 = uVar23;
    uStack_258 = uVar24;
    iStack_250 = iVar10;
    uStack_248 = uVar15;
    if ((*(uVar16 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar14 = &uStack_284;
        iVar9 = perf_trace_buf_alloc(0xc,&iStack_280);
        uVar15 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_280 + 0xe8) = &ppuStack_270;
            puVar14 = uStack_284;
            uVar17 = 1;
            *(iStack_280 + 0xf8) = auStack_290;
            *(iStack_280 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8007088;
            *(iStack_280 + 0x108) = 5;
            *(iVar9 + 8) = auVar25[8] & 1;
            uVar11 = uVar16;
            perf_trace_run_bpf_submit(iVar9,0xc,puVar14,uVar16,1,iStack_280,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_278) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar10 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_04 = 0x800719c;
    uStack_2c8 = 0x800719c;
    pcStack_2b0 = sym.perf_trace_qcom_haptics_play;
    iVar9 = sp_el0;
    iStack_2d8 = *(iVar9 + 0x5e0);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uVar19 = *(iVar10 + 0x48);
    uVar15 = uVar11;
    ppuStack_2d0 = &ppuStack_270;
    piStack_2c0 = piVar1;
    uStack_2a8 = uVar8;
    piStack_2a0 = piVar2;
    uStack_298 = uVar16;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar25._8_8_ != NULL) {
        pcVar3 = auVar25._8_8_;
    }
    iVar7 = strlen(pcVar3);
    puVar12 = iVar7 + 1 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_308,iVar10);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar9 + 0xe,pcVar3);
        *(iVar9 + 0xc) = puVar14;
        *(iVar9 + 0xd) = uVar11;
        trace_event_buffer_commit(&uStack_308);
    }
code_r0x08007284:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar16 = auVar25._0_8_;
    *extraout_x18_05 = sym.perf_trace_qcom_haptics_status;
    pcStack_368 = sym.perf_trace_qcom_haptics_status;
    iVar9 = sp_el0;
    pcVar3 = "(null)";
    if (auVar25._8_8_ != NULL) {
        pcVar3 = auVar25._8_8_;
    }
    iStack_378 = *(iVar9 + 0x5e0);
    uVar6 = uVar15;
    uVar5 = SUB81(puVar12,0);
    iStack_380 = 0;
    uStack_384 = 0;
    ppuStack_370 = &ppuStack_2d0;
    iVar7 = strlen(pcVar3);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_384;
        iVar4 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_380,puVar12);
        if (iVar9 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_380 + 0xe8) = &ppuStack_370;
            *(iStack_380 + 0xf8) = auStack_390;
            *(iStack_380 + 0x100) = ~(-1L << uVar15) & 0x80072bc;
            *(iStack_380 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,pcVar3);
            puVar12 = uStack_384;
            uVar17 = 1;
            *(iVar9 + 0xc) = uVar5;
            *(iVar9 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar4,puVar12,uVar16,1,iStack_380,piVar1,0);
            uVar15 = uVar16;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_378) {
        auVar25 = __stack_chk_fail();
        uVar24 = tpidr_el2;
        *extraout_x18_06 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar25._0_8_,auVar25._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar15 & 1,
                       uVar17 & 1);
        return;
    }
    return;
}


// ===== sym.haptics_remove.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080067f8 (size 8) =====

ulong sym.haptics_remove.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0xa8);
    unregister_hboost_event_notifier(piVar1 + 0x5b);
    class_unregister(piVar1 + 0x3e);
    debugfs_remove(piVar1[0x28]);
    input_unregister_device(piVar1[2]);
    *(*piVar1 + 0x98) = 0;
    return 0;
}


// ===== sym.haptics_probe.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006800 (size 8) =====

uint64_t sym.haptics_probe.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,code *param_4)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    code *arg1;
    ulong *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char *pcVar12;
    code *pcVar13;
    code cVar14;
    int iVar15;
    uint uVar16;
    ulong *puVar17;
    int iVar18;
    ulong *in_x18;
    code *unaff_x19;
    code *pcVar19;
    ulong uVar20;
    int64_t iVar21;
    ulong unaff_x30;
    uint8_t auStack_8c [4];
    uint64_t uStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iVar11 = param_1 + 0x10;
    iStack_58 = *(iVar21 + 0x5e0);
    arg1 = devm_kmalloc(iVar11,0x398,0xdc0);
    if ((arg1 == NULL) || (puVar6 = devm_input_allocate_device(iVar11), unaff_x19 = arg1, puVar6 == NULL)) {
        pcVar19 = 0xfffffff4;
        arg1 = unaff_x19;
        goto code_r0x08007724;
    }
    uVar7 = *(param_1 + 0x70);
    *arg1 = iVar11;
    _segment.ehdr = iVar11;
    iVar11 = dev_get_regmap(uVar7,0);
    *(arg1 + 8) = iVar11;
    if (iVar11 == 0) {
        _dev_err(*arg1,"Get regmap failed\n");
        pcVar19 = 0xfffffffa;
        goto code_r0x08007724;
    }
    obj.xm_hap_exception_enable = 0x1;
    _printk(0x800381d,"xm_hap_driver_init");
    iVar21 = *arg1;
    uVar7 = *(iVar21 + 0x2f0);
    iVar11 = of_find_property(uVar7,"qcom,hpwr-supply",0);
    if (iVar11 != 0) {
        pcVar19 = devm_regulator_get(*arg1,"qcom,hpwr");
        *(arg1 + 0x288) = pcVar19;
        if (pcVar19 < 0xfffffffffffff001) {
            param_4 = 0x1;
            uVar3 = of_property_read_variable_u32_array(uVar7,"qcom,hpwr-voltage-mv",arg1 + 0x35c,1,0);
            if (uVar3 < 0) {
                pcVar19 = uVar3;
                _dev_err(*arg1,"Failed to read qcom,hpwr-voltage-mv, rc=%d\n",pcVar19);
                goto code_r0x08007a5c;
            }
            if (*(arg1 + 0x35c) - 0xfa1U < 0xfffff060) {
                pcVar19 = 0xffffffea;
                goto code_r0x08007a5c;
            }
        }
        else {
            if (pcVar19 == -0x205) goto code_r0x080078ac;
            _dev_err(*arg1,"Failed to get qcom,hpwr-supply, rc=%d\n",pcVar19 & 0xffffffff);
            if (pcVar19 < 0) goto code_r0x08007a5c;
        }
    }
    iVar11 = of_find_property(uVar7,"nvmem-cells",0);
    if (iVar11 != 0) {
        uVar8 = devm_nvmem_cell_get(*arg1,"hap_cl_brake");
        *(arg1 + 0x1d8) = uVar8;
        if (uVar8 < 0xfffffffffffff001) goto code_r0x08007870;
        if (uVar8 == -0x205) goto code_r0x080078ac;
        iVar11 = *arg1;
        pcVar12 = "Failed to get nvmem-cells, rc=%d\n";
code_r0x08007aa0:
        pcVar19 = uVar8 & 0xffffffff;
        _dev_err(iVar11,pcVar12,pcVar19);
        if (uVar8 < 0) goto code_r0x08007a5c;
        goto code_r0x08007aac;
    }
code_r0x08007870:
    iVar11 = of_find_property(uVar7,"nvmem",0);
    if (iVar11 != 0) {
        uVar8 = devm_nvmem_device_get(*arg1,"hap_cfg_sdam");
        *(arg1 + 0x1e0) = uVar8;
        if (0xfffffffffffff000 < uVar8) {
            if (uVar8 == -0x205) {
code_r0x080078ac:
                pcVar19 = 0xfffffdfb;
                goto code_r0x08007a5c;
            }
            iVar11 = *arg1;
            pcVar12 = "Failed to get hap_cfg nvmem device, rc=%d\n";
            goto code_r0x08007aa0;
        }
    }
    iVar11 = of_find_property(uVar7,"qcom,pbs-client",0);
    if (iVar11 != 0) {
        iVar11 = of_parse_phandle(uVar7,"qcom,pbs-client",0);
        *(arg1 + 0x1e8) = iVar11;
        if (iVar11 == 0) {
            _dev_err(*arg1,"Failed to get PBS client\n");
            pcVar19 = 0xffffffed;
            goto code_r0x08007a5c;
        }
    }
    param_4 = NULL;
    puVar9 = __of_get_address(uVar7,0,0xffffffff,0,0);
    if (puVar9 == NULL) {
        iVar11 = *arg1;
        pcVar12 = "Read HAPTICS_CFG address failed\n";
        goto code_r0x080079a0;
    }
    param_4 = NULL;
    uVar3 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    *(arg1 + 0x368) = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar9 = __of_get_address(uVar7,1,0xffffffff,0,0);
    if (puVar9 == NULL) {
        iVar11 = *arg1;
        pcVar12 = "Read HAPTICS_PATTERN address failed\n";
        goto code_r0x080079a0;
    }
    uStack_88 = uStack_88 & 0xffffffffffff0000;
    uVar4 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    uVar3 = *(arg1 + 0x368);
    *(arg1 + 0x36c) = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar20 = *(*arg1 + 0x2f0);
    uVar4 = regmap_bulk_read(*(arg1 + 8),uVar3,&uStack_88,2);
    if (uVar4 < 0) {
code_r0x08007a20:
        iVar11 = *arg1;
code_r0x08007a34:
        pcVar19 = uVar4;
        param_4 = pcVar19;
        _dev_err(iVar11,"read addr %#x failed, rc=%d\n",uVar3);
    }
    else {
        uVar3 = *(arg1 + 0x36c) + 1U & 0xffff;
        *(arg1 + 0x380) = uStack_88;
        uVar4 = regmap_bulk_read(*(arg1 + 8),uVar3,&uStack_88,1);
        if (uVar4 < 0) goto code_r0x08007a20;
        cVar14 = arg1[0x381];
        param_4 = uStack_88 & 0xff;
        arg1[0x382] = uStack_88._0_1_;
        if ((cVar14 != 0x2) || (uStack_88._0_1_ != 0x2)) {
            if (cVar14 == 0x4) {
                if (uStack_88._0_1_ != 0x4) goto code_r0x08008258;
                uVar16 = 4;
                goto code_r0x08007edc;
            }
            if ((cVar14 != 0x3) || (uStack_88._0_1_ != 0x3)) {
code_r0x08008258:
                _dev_err(*arg1,"haptics revision is not supported\n");
                pcVar19 = 0xffffffa1;
                goto code_r0x08007a3c;
            }
            *(arg1 + 0x388) = 3;
code_r0x08007f60:
            _dev_info(*arg1,"haptics revision: HAP_CFG %#x, HAP_PTN %#x\n");
code_r0x08007f70:
            iVar5 = platform_get_irq_byname(iVar21 + -0x10,"fifo-empty");
            *(arg1 + 0x358) = iVar5;
            if (iVar5 == 0) {
                iVar11 = *arg1;
                pcVar12 = "Get fifo-empty IRQ failed\n";
code_r0x080079a0:
                _dev_err(iVar11,pcVar12);
                pcVar19 = 0xffffffea;
                goto code_r0x08007a50;
            }
            pcVar19 = arg1 + 0x34;
            *pcVar19 = 5000;
            of_property_read_variable_u32_array(uVar7,"qcom,vmax-mv",pcVar19,1,0);
            uVar3 = *pcVar19;
            if (0x55e < uVar3 >> 3) {
                iVar11 = *arg1;
                pcVar12 = "qcom,vmax-mv (%d) exceed the max value: %d\n";
                param_4 = 0x2af8;
                goto code_r0x08008758;
            }
            *(arg1 + 0x38) = 5000;
            of_property_read_variable_u32_array(uVar7,"qcom,custom_vmax_mv",arg1 + 0x38,1,0);
            *(arg1 + 0x3c) = 5000;
            of_property_read_variable_u32_array(uVar7,"qcom,f0-vmax-mv",arg1 + 0x3c,1,0);
            *(arg1 + 0x74) = 0;
            iVar5 = of_property_read_variable_u32_array(uVar7,"qcom,lra_temp",arg1 + 0x74,1,0);
            if (iVar5 < 0) {
                _dev_err(*arg1,"qcom,lra_temp not found\n");
            }
            *(arg1 + 0x78) = 0;
            iVar5 = of_property_read_variable_u32_array(uVar7,"qcom,mi_comp_lra",arg1 + 0x78,1,0);
            if (iVar5 < 0) {
                _dev_err(*arg1,"qcom,mi_comp_lra not found\n");
            }
            *(arg1 + 0x48) = 500;
            of_property_read_variable_u32_array(uVar7,"qcom,lra_calibration_vmax_hdrm_mv",arg1 + 0x48,1,0);
            if (*(arg1 + 0x388) - 2U < 3) {
                uVar16 = *((*(arg1 + 0x388) - 2U) * 4 + 0x8005060);
            }
            else {
                _printk(0x800334e);
                uVar16 = 0;
            }
            pcVar19 = arg1 + 0x60;
            *pcVar19 = uVar16;
            of_property_read_variable_u32_array(uVar7,"qcom,fifo-empty-threshold",pcVar19,1,0);
            iVar5 = *(arg1 + 0x388);
            uVar3 = *pcVar19;
            if (iVar5 == 2) {
                uVar4 = 0x280;
code_r0x080082c8:
                if (uVar3 < uVar4) {
                    param_4 = 0x1;
                    pcVar19 = arg1 + 0x20;
                    *pcVar19 = 3;
                    of_property_read_variable_u32_array(uVar7,"qcom,brake-mode",pcVar19,1,0);
                    uVar3 = *pcVar19;
                    if (3 < uVar3) {
                        iVar11 = *arg1;
                        pcVar12 = "Can\'t support brake mode: %d\n";
code_r0x080086d0:
                        _dev_err(iVar11,pcVar12,uVar3);
                        pcVar19 = 0xffffffea;
                        goto code_r0x08007a50;
                    }
                    iVar11 = of_find_property(uVar7,"qcom,brake-disable",0);
                    arg1[0x30] = iVar11 != 0;
                    uVar3 = of_property_count_elems_of_size(uVar7,"qcom,brake-pattern",1);
                    if (8 < uVar3) {
                        iVar11 = *arg1;
                        pcVar12 = "more than %d brake samples\n";
                        uVar3 = 8;
                        goto code_r0x080086d0;
                    }
                    if (uVar3 < 1) {
                        if (*pcVar19 < 2) {
code_r0x080083c4:
                            cVar14 = 0x1;
code_r0x080083c8:
                            arg1[0x30] = cVar14;
                        }
                    }
                    else {
                        param_4 = uVar3;
                        uVar3 = of_property_read_variable_u8_array(uVar7,"qcom,brake-pattern",arg1 + 0x18,param_4,0)
                        ;
                        if (uVar3 < 0) {
                            pcVar19 = uVar3;
                            iVar11 = *arg1;
                            pcVar12 = "Read brake-pattern failed, rc=%d\n";
                            goto code_r0x08007a48;
                        }
                        if ((*pcVar19 & 0xfffffffe) != 2) {
                            if (((((arg1[0x1f] == 0x0) && (arg1[0x1e] == 0x0)) && (arg1[0x1d] == 0x0)) &&
                                ((arg1[0x1c] == 0x0 && (arg1[0x1b] == 0x0)))) &&
                               ((arg1[0x1a] == 0x0 && (arg1[0x19] == 0x0)))) goto code_r0x080083c4;
                            cVar14 = 0x0;
                            goto code_r0x080083c8;
                        }
                    }
                    iVar11 = of_find_property(uVar7,"qcom,use-erm",0);
                    arg1[0x6c] = iVar11 != 0;
                    if (iVar11 == 0) {
                        param_4 = 0x1;
                        uVar7 = *(*arg1 + 0x2f0);
                        uVar3 = of_property_read_variable_u32_array(uVar7,"qcom,lra-period-us",arg1 + 0x40,1,0);
                        if (uVar3 < 0) {
                            pcVar19 = uVar3;
                            _dev_err(*arg1,"Read T-LRA failed, rc=%d\n",pcVar19);
                            goto code_r0x08008858;
                        }
                        if (0x4ffb < *(arg1 + 0x40)) {
                            param_4 = 0x4ffb;
                            _dev_err(*arg1,"qcom,lra-period-us (%d) exceed the max value: %d\n");
                            goto code_r0x08008854;
                        }
                        param_4 = 0x1;
                        pcVar19 = arg1 + 0x68;
                        *pcVar19 = 1;
                        of_property_read_variable_u32_array(uVar7,"qcom,drv-sig-shape",pcVar19,1,0);
                        if (2 < *pcVar19) {
                            iVar11 = *arg1;
                            pcVar12 = "Can\'t support drive shape: %d\n";
                            goto code_r0x08008850;
                        }
                        param_4 = 0x1;
                        pcVar19 = arg1 + 0x24;
                        *pcVar19 = 1;
                        of_property_read_variable_u32_array(uVar7,"qcom,brake-sig-shape",pcVar19,1,0);
                        if (2 < *pcVar19) {
                            iVar11 = *arg1;
                            pcVar12 = "Can\'t support brake shape: %d\n";
                            goto code_r0x08008850;
                        }
                        if (*pcVar19 == 1) {
                            param_4 = 0x1;
                            pcVar19 = arg1 + 0x28;
                            *pcVar19 = 0;
                            of_property_read_variable_u32_array(uVar7,"qcom,brake-sine-gain",pcVar19,1,0);
                            if (3 < *pcVar19) goto code_r0x08008844;
                        }
                        if (*(arg1 + 0x388) == 4) {
                            iVar11 = of_find_property(uVar7,"qcom,rt-imp-detect",0);
                            arg1[0x6d] = iVar11 != 0;
                        }
                    }
                    else {
                        *(arg1 + 0x68) = 2;
                        *(arg1 + 0x24) = 2;
                    }
                    *(arg1 + 0x5c) = 0xffffffea;
                    uVar7 = *(*arg1 + 0x2f0);
                    iVar11 = of_get_next_available_child(uVar7,0);
                    if (iVar11 != 0) {
                        iVar5 = 0;
                        do {
                            iVar21 = of_find_property(iVar11,"qcom,effect-id",0);
                            if (iVar21 != 0) {
                                iVar5 = iVar5 + 1;
                            }
                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                        } while (iVar11 != 0);
                        if (iVar5 != 0) {
                            auVar2._8_8_ = 0;
                            auVar2._0_8_ = iVar5;
                            if (SUB168(auVar2 * ZEXT816(0x30),8) == 0) {
                                iVar11 = devm_kmalloc(*arg1,(iVar5 + iVar5 * 2) * 0x10,0xdc0);
                                *(arg1 + 0x80) = iVar11;
                                if (iVar11 != 0) {
                                    iVar11 = of_get_next_available_child(uVar7,0);
                                    if (iVar11 == 0) {
                                        uVar3 = 0;
                                    }
                                    else {
                                        uVar3 = 0;
                                        do {
                                            iVar21 = of_find_property(iVar11,"qcom,effect-id",0);
                                            if (iVar21 != 0) {
                                                param_4 = 0x1;
                                                uVar4 = of_property_read_variable_u32_array
                                                                  (iVar11,"qcom,effect-id",
                                                                   *(arg1 + 0x80) + uVar3 * 0x30 + 0x18,1,0);
                                                if (uVar4 < 0) {
                                                    pcVar13 = uVar4;
                                                    iVar11 = *arg1;
                                                    pcVar12 = "Read qcom,effect-id failed, rc=%d\n";
                                                    pcVar19 = pcVar13;
                                                }
                                                else {
                                                    uVar4 = sym.haptics_parse_per_effect_dt
                                                                      (arg1,iVar11,*(arg1 + 0x80) + uVar3 * 0x30);
                                                    if (-1 < uVar4) {
                                                        uVar3 = uVar3 + 1;
                                                        goto code_r0x08008888;
                                                    }
                                                    iVar11 = *arg1;
                                                    pcVar12 = "parse effect %d failed, rc=%d\n";
                                                    pcVar13 = uVar3;
                                                    pcVar19 = uVar4;
                                                }
                                                _dev_err(iVar11,pcVar12,pcVar13);
                                                goto code_r0x080089b4;
                                            }
code_r0x08008888:
                                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                                        } while (iVar11 != 0);
                                    }
                                    *(arg1 + 0x360) = uVar3;
                                    _dev_printk(0x8003b96,*arg1,"Dump predefined effect settings as following\n");
                                    sym.__dump_effects(arg1,*(arg1 + 0x80),*(arg1 + 0x360));
                                    goto code_r0x0800845c;
                                }
                                pcVar19 = 0xfffffff4;
                            }
                            else {
                                pcVar19 = 0xfffffff4;
                                *(arg1 + 0x80) = 0;
                            }
code_r0x080089b4:
                            iVar11 = *arg1;
                            pcVar12 = "Parse device-tree for effects failed, rc=%d\n";
                            goto code_r0x08007a48;
                        }
                    }
code_r0x0800845c:
                    uVar7 = *(*arg1 + 0x2f0);
                    iVar11 = of_get_next_available_child(uVar7,0);
                    if (iVar11 != 0) {
                        iVar5 = 0;
                        do {
                            iVar21 = of_find_property(iVar11,"qcom,primitive-id",0);
                            if (iVar21 != 0) {
                                iVar5 = iVar5 + 1;
                            }
                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                        } while (iVar11 != 0);
                        if (iVar5 != 0) {
                            auVar1._8_8_ = 0;
                            auVar1._0_8_ = iVar5;
                            if (SUB168(auVar1 * ZEXT816(0x30),8) == 0) {
                                iVar11 = devm_kmalloc(*arg1,(iVar5 + iVar5 * 2) * 0x10,0xdc0);
                                *(arg1 + 0x88) = iVar11;
                                if (iVar11 != 0) {
                                    iVar11 = of_get_next_available_child(uVar7,0);
                                    if (iVar11 == 0) {
                                        uVar3 = 0;
                                    }
                                    else {
                                        uVar3 = 0;
                                        do {
                                            iVar21 = of_find_property(iVar11,"qcom,primitive-id",0);
                                            if (iVar21 != 0) {
                                                param_4 = 0x1;
                                                uVar4 = of_property_read_variable_u32_array
                                                                  (iVar11,"qcom,primitive-id",
                                                                   *(arg1 + 0x88) + uVar3 * 0x30 + 0x18,1,0);
                                                if (uVar4 < 0) {
                                                    pcVar13 = uVar4;
                                                    iVar11 = *arg1;
                                                    pcVar12 = "Read qcom,primitive-id failed, rc=%d\n";
                                                    pcVar19 = pcVar13;
                                                }
                                                else {
                                                    uVar4 = sym.haptics_parse_per_effect_dt
                                                                      (arg1,iVar11,*(arg1 + 0x88) + uVar3 * 0x30);
                                                    if (-1 < uVar4) {
                                                        uVar3 = uVar3 + 1;
                                                        goto code_r0x08008924;
                                                    }
                                                    iVar11 = *arg1;
                                                    pcVar12 = "parse primitive %d failed, rc=%d\n";
                                                    pcVar13 = uVar3;
                                                    pcVar19 = uVar4;
                                                }
                                                _dev_err(iVar11,pcVar12,pcVar13);
                                                goto code_r0x080089f4;
                                            }
code_r0x08008924:
                                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                                        } while (iVar11 != 0);
                                    }
                                    *(arg1 + 0x364) = uVar3;
                                    _dev_printk(0x8003b96,*arg1,"Dump primitive effect settings as following\n");
                                    sym.__dump_effects(arg1,*(arg1 + 0x88),*(arg1 + 0x364));
                                    goto code_r0x08007aac;
                                }
                                pcVar19 = 0xfffffff4;
                            }
                            else {
                                pcVar19 = 0xfffffff4;
                                *(arg1 + 0x88) = 0;
                            }
code_r0x080089f4:
                            iVar11 = *arg1;
                            pcVar12 = "Parse device-tree for primitives failed, rc=%d\n";
                            goto code_r0x08007a48;
                        }
                    }
code_r0x08007aac:
                    iVar11 = devm_kmalloc(*arg1,0x30,0xdc0);
                    *(arg1 + 0x90) = iVar11;
                    if (iVar11 == 0) {
code_r0x08007f1c:
                        pcVar19 = 0xfffffff4;
                        _dev_err(*arg1,"Init custom effect failed, rc=%d\n",0xfffffff4);
                        goto code_r0x08007724;
                    }
                    uVar7 = devm_kmalloc(*arg1,0x18,0xdc0);
                    *(*(arg1 + 0x90) + 8) = uVar7;
                    if ((*(arg1 + 0x90))[1] == 0) goto code_r0x08007f1c;
                    **(arg1 + 0x90) = 0;
                    *(*(arg1 + 0x90) + 0x10) = 0;
                    *(*(arg1 + 0x90) + 0x18) = 0xffffffff;
                    *(*(arg1 + 0x90) + 0x1c) = *(arg1 + 0x38);
                    *(*(arg1 + 0x90) + 0x20) = *(arg1 + 0x40);
                    *(*(arg1 + 0x90) + 0x24) = 0;
                    *(*(arg1 + 0x90) + 0x2c) = 1;
                    __mutex_init(arg1 + 0x2f8,"&chip->vmax_lock",obj.xm_hap_exception_enable);
                    uVar3 = sym.haptics_hw_init(arg1);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        sym.xm_hap_driver_exception_handler(0x360387a9,0x8002967,0x8002604,param_4);
                        iVar11 = *arg1;
                        pcVar12 = "Initialize HW failed, rc = %d\n";
                        goto code_r0x08007a84;
                    }
                    if (*(arg1 + 0x388) != 3) {
                        param_4 = 0x1;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        pcStack_78 = NULL;
                        uStack_70 = 0;
                        uVar3 = *(arg1 + 0x368) + 0x4eU & 0xffff;
                        uStack_80 = 0;
                        auStack_8c[0] = 0;
                        uVar4 = regmap_bulk_read(*(arg1 + 8),uVar3,auStack_8c);
                        if (uVar4 < 0) {
                            pcVar19 = uVar4;
                            param_4 = pcVar19;
                            _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar3);
                            _dev_err(*arg1,"Failed to read SWR_ACCESS, rc=%d\n",pcVar19);
                            goto code_r0x08008230;
                        }
                        uStack_88 = *arg1;
                        arg1[0x38d] = 0xdf < auStack_8c[0];
                        auStack_8c[0] = auStack_8c[0] & 0xe0;
                        pcStack_78 = arg1;
                        pcVar19 = devm_regulator_register(uStack_88,obj.swr_slave_reg_rdesc,&uStack_88);
                        *(arg1 + 0x1d0) = pcVar19;
                        if (0xfffffffffffff000 < pcVar19) {
                            *(arg1 + 0x1d0) = 0;
                            if (pcVar19 == -0x205) {
                                pcVar19 = 0xfffffdfb;
code_r0x08008230:
                                _dev_err(*arg1,"Initialize swr slave regulator failed, rc = %d\n",pcVar19 & 0xffffffff
                                        );
                                goto code_r0x08007724;
                            }
                            _dev_err(*arg1,"register swr-slave-reg regulator failed, rc=%d\n",pcVar19 & 0xffffffff);
                            if (pcVar19 < 0) goto code_r0x08008230;
                        }
                    }
                    param_4 = sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    uVar3 = devm_request_threaded_irq
                                      (*arg1,*(arg1 + 0x358),0,
                                       sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,0x2000,
                                       "fifo-empty",arg1);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        iVar11 = *arg1;
                        pcVar12 = "request fifo-empty IRQ failed, rc=%d\n";
                        goto code_r0x08007a84;
                    }
                    uVar3 = sym.haptics_set_vmax_headroom_mv(arg1,*(arg1 + 0x48));
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        iVar11 = *arg1;
                        pcVar12 = "config VMAX_HDRM failed, rc=%d\n";
                        goto code_r0x08007a84;
                    }
                    __mutex_init(arg1 + 0xb8,"&chip->play.lock",obj.xm_hap_exception_enable);
                    disable_irq_nosync(*(arg1 + 0x358));
                    arg1[0x38c] = 0x0;
                    hrtimer_init(arg1 + 0x290,1,1);
                    *(arg1 + 0x2b8) = sym.haptics_disable_hbst_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    param_4 = NULL;
                    *(arg1 + 0x148) = 0xfffffffe0;
                    *(arg1 + 0x150) = arg1 + 0x150;
                    *(arg1 + 0x158) = arg1 + 0x150;
                    *(arg1 + 0x160) = sym.haptics_stop_constant_effect_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    init_timer_key(arg1 + 0x178,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                    *(arg1 + 0x328) = 0xfffffffe0;
                    *(arg1 + 0x330) = arg1 + 0x330;
                    *(arg1 + 0x338) = arg1 + 0x330;
                    *(arg1 + 0x340) = sym.haptics_set_gain_work.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    hrtimer_init(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt,1,1);
                    *0x8000588 = 0;
                    *0x8000568 = sym.haptics_disable_fifo_delay_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    *(arg1 + 0xb0) = 0;
                    *(arg1 + 0xac) = 0;
                    *(arg1 + 0xb4) = 0;
                    *puVar6 = 0x8001690;
                    puVar6[0x5b] = arg1;
                    *(arg1 + 0x10) = puVar6;
                    input_set_capability(puVar6,0x15,0x52);
                    input_set_capability(puVar6,0x15,0x60);
                    if ((*(arg1 + 0x360) == 0) && (*(arg1 + 0x364) == 0)) {
                        iVar5 = 0;
                        iVar15 = 0;
                    }
                    else {
                        input_set_capability(puVar6,0x15,0x51);
                        input_set_capability(puVar6,0x15,0x5d);
                        input_set_capability(puVar6,0x15,0x55);
                        iVar15 = *(arg1 + 0x360);
                        iVar5 = *(arg1 + 0x364);
                    }
                    if (0x40 < iVar15 + iVar5) {
                        _dev_err(*arg1,"Effects count cannot be more than %d\n",0x40);
                        iVar15 = *(arg1 + 0x360);
                        iVar5 = *(arg1 + 0x364);
                    }
                    iVar18 = 0x40;
                    if (iVar5 + iVar15 + 1U < 0x40) {
                        iVar18 = iVar5 + iVar15 + 1;
                    }
                    uVar3 = input_ff_create(puVar6,iVar18);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        iVar11 = *arg1;
                        pcVar12 = "create input FF device failed, rc=%d\n";
                        goto code_r0x08007a84;
                    }
                    puVar17 = puVar6[0x1f];
                    *puVar17 = sym.haptics_upload_effect.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    puVar17[1] = sym.haptics_erase.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    puVar17[2] = sym.haptics_playback.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    puVar17[3] = sym.haptics_set_gain.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    uVar8 = input_register_device(puVar6);
                    pcVar19 = uVar8 & 0xffffffff;
                    if (uVar8 < 0) {
                        _dev_err(*arg1,"register input device failed, rc=%d\n",uVar8 & 0xffffffff);
code_r0x0800818c:
                        sym.xm_hap_driver_exception_handler(0x360387a9,0x8002f25,0x800352d,param_4);
                        input_ff_destroy(*(arg1 + 0x10));
                        goto code_r0x08007724;
                    }
                    *(*arg1 + 0x98) = arg1;
                    *(arg1 + 0x1f0) = 0x80039e0;
                    *(arg1 + 0x200) = obj.hap_class_groups;
                    uVar3 = __class_register(arg1 + 0x1f0,obj.xm_hap_exception_enable);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        _dev_err(*arg1,"register hap_class failed, rc=%d\n");
                        goto code_r0x0800818c;
                    }
                    *(arg1 + 0x2d8) = sym.haptics_boost_notifier.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    register_hboost_event_notifier(arg1 + 0x2d8);
                    uVar8 = debugfs_create_dir("haptics",0);
                    if (0xfffffffffffff000 < uVar8) {
                        _dev_err(*arg1,"create haptics debugfs directory failed, rc=%d\n",uVar8 & 0xffffffff);
                        uVar10 = uVar8 & 0xffffffff;
                        iVar5 = uVar8;
                        goto joined_r0x080081cc;
                    }
                    pcVar12 = "effect";
                    uVar10 = sym.haptics_add_debugfs(uVar8,*(arg1 + 0x80),*(arg1 + 0x360),0x8003521);
                    if (uVar10 < 0) {
code_r0x08007ea4:
                        uVar10 = uVar10 & 0xffffffff;
                    }
                    else {
                        pcVar12 = "primitive";
                        uVar10 = sym.haptics_add_debugfs(uVar8,*(arg1 + 0x88),*(arg1 + 0x364),0x800223e);
                        if (uVar10 < 0) goto code_r0x08007ea4;
                        pcVar12 = arg1;
                        uVar10 = debugfs_create_file_unsafe
                                           ("preload_effect_idx",0x1a4,uVar8,arg1,obj.preload_effect_idx_dbgfs_ops);
                        if (uVar10 < 0xfffffffffffff001) {
                            param_4 = arg1 + 0x60;
                            debugfs_create_u32("fifo_empty_thresh",0x180,uVar8);
                            pcVar19 = NULL;
                            *(arg1 + 0x140) = uVar8;
                            goto code_r0x08007724;
                        }
                        _dev_err(*arg1,"create preload_effect_idx debugfs failed, rc=%d\n",uVar10 & 0xffffffff);
                    }
                    debugfs_remove(uVar8);
                    iVar5 = uVar10;
                    param_4 = pcVar12;
joined_r0x080081cc:
                    if (iVar5 < 0) {
                        _dev_err(*arg1,"Creating debugfs failed, rc=%d\n",uVar10 & 0xffffffff);
                    }
                    pcVar19 = NULL;
                    goto code_r0x08007724;
                }
            }
            else {
                if (iVar5 == 4) {
                    uVar4 = 0x280;
                    if (*(arg1 + 0x104) != 0) {
                        uVar4 = *(arg1 + 0x104);
                    }
                    goto code_r0x080082c8;
                }
                if (iVar5 == 3) {
                    uVar4 = 0x400;
                    goto code_r0x080082c8;
                }
                _printk(0x800334e);
                uVar3 = *pcVar19;
            }
            iVar11 = *arg1;
            uVar8 = sym.get_max_fifo_samples(arg1);
            param_4 = uVar8 & 0xffffffff;
            pcVar12 = "FIFO empty threshold (%d) should be less than %d\n";
code_r0x08008758:
            _dev_err(iVar11,pcVar12,uVar3);
            pcVar19 = 0xffffffea;
            goto code_r0x08007a50;
        }
        uVar16 = 2;
code_r0x08007edc:
        *(arg1 + 0x388) = uVar16;
        if (*(arg1 + 0x288) != 0) goto code_r0x08007f60;
        param_4 = NULL;
        puVar9 = __of_get_address(uVar20,2,0xffffffff,0,0);
        if (puVar9 != NULL) {
            uVar4 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
            uVar3 = uVar4 >> 0x10;
            *(arg1 + 0x370) = uVar3 | uVar4 << 0x10;
            uVar4 = regmap_bulk_read(*(arg1 + 8),uVar3,&uStack_88,2);
            if (-1 < uVar4) {
                param_4 = arg1[0x382];
                *(arg1 + 900) = uStack_88;
                _dev_info(*arg1,"haptics revision: HAP_CFG %#x, HAP_PTN %#x, HAP_HBST %#x\n",arg1[0x381]);
                goto code_r0x08007f70;
            }
            iVar11 = *arg1;
            goto code_r0x08007a34;
        }
        _dev_err(*arg1,"Read HAPTICS_HBOOST address failed\n");
        pcVar19 = 0xffffffea;
    }
code_r0x08007a3c:
    iVar11 = *arg1;
    pcVar12 = "Get revision failed, rc=%d\n";
code_r0x08007a48:
    while( true ) {
        _dev_err(iVar11,pcVar12,pcVar19);
code_r0x08007a50:
        if (*(arg1 + 0x1e8) != 0) {
            *(arg1 + 0x1e8) = 0;
        }
code_r0x08007a5c:
        sym.xm_hap_driver_exception_handler(0x360387a9,0x800234b,0x8003622,param_4);
        iVar11 = *arg1;
        pcVar12 = "Parse device-tree failed, rc = %d\n";
code_r0x08007a84:
        _dev_err(iVar11,pcVar12,pcVar19 & 0xffffffff);
code_r0x08007724:
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
code_r0x08008844:
        iVar11 = *arg1;
        pcVar12 = "Can\'t support brake sine gain: %d\n";
code_r0x08008850:
        _dev_err(iVar11,pcVar12);
code_r0x08008854:
        pcVar19 = 0xffffffea;
code_r0x08008858:
        iVar11 = *arg1;
        pcVar12 = "Parse device-tree for LRA failed, rc=%d\n";
    }
    return pcVar19 & 0xffffffff;
}


// ===== sym.debugfs_attr_write.cfi_jt @ 0x08006808 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_write.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.brake_mode_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006810 (size 8) =====

int64_t sym.brake_mode_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(param_1 + 0xd8) + 0x10);
    iVar3 = __kmalloc(param_3 + 1,0xdc0);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8012278);
            (*pcVar1)();
        }
        __check_object_size(iVar3,param_3,0);
        iVar2 = sym._copy_from_user(iVar3,param_2,param_3);
        if (iVar2 < 1) {
            iVar4 = *param_4;
            *(iVar3 + param_3) = 0;
            *param_4 = iVar4 + param_3;
            iVar2 = strcmp(iVar3,"open-loop");
            if (iVar2 == 0) {
                *(iVar5 + 8) = 0;
            }
            else {
                iVar2 = strcmp(iVar3,"close-loop");
                if (iVar2 == 0) {
                    *(iVar5 + 8) = 1;
                }
                else {
                    iVar2 = strcmp(iVar3,"predictive");
                    if (iVar2 == 0) {
                        *(iVar5 + 8) = 2;
                    }
                    else {
                        iVar2 = strcmp(iVar3,"auto");
                        if (iVar2 == 0) {
                            *(iVar5 + 8) = 3;
                        }
                        else {
                            _printk(0x8001ec3,iVar3);
                            param_3 = 0xffffffffffffffea;
                        }
                    }
                }
            }
        }
        else {
            param_3 = 0xfffffffffffffff2;
        }
        kfree(iVar3);
        iVar3 = param_3;
    }
    return iVar3;
}


// ===== sym.pattern_s_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006818 (size 8) =====

int64_t sym.pattern_s_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    int64_t iVar1;
    code *pcVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    int iVar11;
    uint32_t uVar12;
    uint uVar13;
    int64_t iVar14;
    ulong uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    int64_t *piVar30;
    int64_t iVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    ushort *puVar34;
    ulong unaff_x30;
    uchar auVar35 [16];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    uint32_t auStack_c8 [24];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_68 = *(iVar27 + 0x5e0);
    piVar30 = *(param_1 + 0xd8);
    iStack_d0 = 0;
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    uStack_d4 = 0;
    auStack_c8[0x14] = 0;
    auStack_c8[0x15] = 0;
    auStack_c8[0x16] = 0;
    auStack_c8[0x17] = 0;
    auStack_c8[0x10] = 0;
    auStack_c8[0x11] = 0;
    auStack_c8[0x12] = 0;
    auStack_c8[0x13] = 0;
    auStack_c8[0xc] = 0;
    auStack_c8[0xd] = 0;
    auStack_c8[0xe] = 0;
    auStack_c8[0xf] = 0;
    auStack_c8[8] = 0;
    auStack_c8[9] = 0;
    auStack_c8[10] = 0;
    auStack_c8[0xb] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    auStack_c8[6] = 0;
    auStack_c8[7] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    if (0x180 < param_3) {
        iVar27 = -0x16;
        goto code_r0x080111ac;
    }
    iVar14 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x181);
    if (iVar14 == 0) {
        iVar27 = -0xc;
        goto code_r0x080111ac;
    }
    iStack_d0 = iVar14;
    __check_object_size(iVar14,param_3,0);
    iVar11 = sym._copy_from_user(iVar14,param_2,param_3);
    if (iVar11 < 1) {
        *(iStack_d0 + param_3) = 0;
        *param_4 = *param_4 + param_3;
        iVar27 = strsep(&iStack_d0,0x800168e);
        if (iVar27 == 0) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = false;
            uVar21 = 0;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
            uVar25 = 0;
            uVar20 = 0;
code_r0x08011088:
            bVar6 = false;
            uVar26 = 0;
            uVar12 = 0;
code_r0x0801108c:
            bVar7 = false;
            uVar16 = 0;
            uVar17 = 0;
code_r0x08011098:
            bVar8 = false;
            uVar18 = 0;
            uVar19 = 0;
code_r0x080110a4:
            bVar9 = false;
            uVar28 = 0;
            uVar29 = 0;
code_r0x080110b0:
            bVar10 = false;
            uVar32 = 0;
            uVar33 = 0;
code_r0x080110bc:
            puVar34 = *piVar30;
            *puVar34 = uVar20;
            puVar34[1] = 0;
            *(puVar34 + 2) = uVar21;
            *(puVar34 + 4) = bVar3;
            *(puVar34 + 9) = 0;
            *(puVar34 + 0xb) = 0;
            puVar34[6] = uVar22;
            puVar34[7] = 0;
            *(puVar34 + 8) = uVar23;
            *(puVar34 + 10) = bVar4;
            *(puVar34 + 0x15) = 0;
            *(puVar34 + 0x17) = 0;
            puVar34[0xc] = uVar24;
            puVar34[0xd] = 0;
            *(puVar34 + 0xe) = uVar25;
            *(puVar34 + 0x10) = bVar5;
            *(puVar34 + 0x21) = 0;
            *(puVar34 + 0x23) = 0;
            puVar34[0x12] = uVar26;
            puVar34[0x13] = 0;
            *(puVar34 + 0x14) = uVar12;
            *(puVar34 + 0x16) = bVar6;
            *(puVar34 + 0x2f) = 0;
            *(puVar34 + 0x2d) = 0;
            puVar34[0x18] = uVar16;
            puVar34[0x19] = 0;
            *(puVar34 + 0x1a) = uVar17;
            *(puVar34 + 0x1c) = bVar7;
            *(puVar34 + 0x3b) = 0;
            *(puVar34 + 0x39) = 0;
            puVar34[0x1e] = uVar18;
            puVar34[0x1f] = 0;
            *(puVar34 + 0x20) = uVar19;
            *(puVar34 + 0x22) = bVar8;
            *(puVar34 + 0x47) = 0;
            *(puVar34 + 0x45) = 0;
            puVar34[0x24] = uVar28;
            puVar34[0x25] = 0;
            *(puVar34 + 0x26) = uVar29;
            *(puVar34 + 0x28) = bVar9;
            *(puVar34 + 0x53) = 0;
            *(puVar34 + 0x51) = 0;
            puVar34[0x2a] = uVar32;
            puVar34[0x2b] = 0;
            *(puVar34 + 0x2c) = uVar33;
            *(puVar34 + 0x2e) = bVar10;
            *(puVar34 + 0x5d) = 0;
            *(puVar34 + 0x5f) = 0;
            iVar27 = *piVar30;
            uVar13 = sym.get_pattern_play_length_us(iVar27);
            *(iVar27 + 100) = uVar13;
            if (*(*piVar30 + 100) != -0x16) {
                iVar27 = param_3;
                goto code_r0x080111a4;
            }
            uVar15 = 0x8001ea1;
        }
        else {
            iVar31 = 0;
            do {
                iVar11 = kstrtouint(iVar27,0,&uStack_d4);
                if (iVar11 < 0) {
                    iVar27 = -0x16;
                    goto code_r0x080111a4;
                }
                if (iVar31 == 0x18) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8011390);
                    (*pcVar2)();
                }
                iVar1 = iVar31 + 1;
                auStack_c8[iVar31] = uStack_d4;
                iVar27 = strsep(&iStack_d0,0x800168e);
                iVar31 = iVar1;
            } while (iVar27 != 0);
            uVar32 = iVar1;
            if ((uVar32 + ((uVar32 & 0xff) / 3) * -3 & 0xff) == 0) {
                if (2 < uVar32) goto code_r0x08011034;
code_r0x08010fdc:
                bVar3 = false;
                uVar21 = 0;
                uVar20 = 0;
code_r0x08011068:
                bVar4 = false;
                uVar22 = 0;
                uVar23 = 0;
code_r0x08011074:
                bVar5 = false;
                uVar24 = 0;
                uVar25 = 0;
                goto code_r0x08011088;
            }
            _printk(0x800291c);
            if (uVar32 < 3) goto code_r0x08010fdc;
code_r0x08011034:
            if (((auStack_c8[0] < 0x200) && (auStack_c8[1] < 7)) && (auStack_c8[2] < 2)) {
                bVar3 = auStack_c8[2] != 0;
                uVar21 = auStack_c8[1];
                uVar20 = auStack_c8[0];
                if (uVar32 < 6) goto code_r0x08011068;
                if (((0x1ff < auStack_c8[3]) || (6 < auStack_c8[4])) || (1 < auStack_c8[5])) goto code_r0x0801136c;
                bVar4 = auStack_c8[5] != 0;
                uVar22 = auStack_c8[3];
                uVar23 = auStack_c8[4];
                if (uVar32 - 6 < 3) goto code_r0x08011074;
                if (((0x1ff < auStack_c8[6]) || (6 < auStack_c8[7])) || (1 < auStack_c8[8])) goto code_r0x0801136c;
                bVar5 = auStack_c8[8] != 0;
                uVar24 = auStack_c8[6];
                uVar25 = auStack_c8[7];
                if (uVar32 - 9 < 3) goto code_r0x08011088;
                if (((0x1ff < auStack_c8[9]) || (6 < auStack_c8[10])) || (1 < auStack_c8[0xb])) goto code_r0x0801136c;
                bVar6 = auStack_c8[0xb] != 0;
                uVar26 = auStack_c8[9];
                uVar12 = auStack_c8[10];
                if (uVar32 - 0xc < 3) goto code_r0x0801108c;
                if (((0x1ff < auStack_c8[0xc]) || (6 < auStack_c8[0xd])) || (1 < auStack_c8[0xe]))
                goto code_r0x0801136c;
                bVar7 = auStack_c8[0xe] != 0;
                uVar16 = auStack_c8[0xc];
                uVar17 = auStack_c8[0xd];
                if (uVar32 - 0xf < 3) goto code_r0x08011098;
                if (((0x1ff < auStack_c8[0xf]) || (6 < auStack_c8[0x10])) || (1 < auStack_c8[0x11]))
                goto code_r0x0801136c;
                bVar8 = auStack_c8[0x11] != 0;
                uVar18 = auStack_c8[0xf];
                uVar19 = auStack_c8[0x10];
                if (uVar32 - 0x12 < 3) goto code_r0x080110a4;
                if (((0x1ff < auStack_c8[0x12]) || (6 < auStack_c8[0x13])) || (1 < auStack_c8[0x14]))
                goto code_r0x0801136c;
                bVar9 = auStack_c8[0x14] != 0;
                uVar28 = auStack_c8[0x12];
                uVar29 = auStack_c8[0x13];
                if (uVar32 - 0x15 < 3) goto code_r0x080110b0;
                if (((0x1ff < auStack_c8[0x15]) || (6 < auStack_c8[0x16])) || (1 < auStack_c8[0x17]))
                goto code_r0x0801136c;
                bVar10 = auStack_c8[0x17] != 0;
                uVar32 = auStack_c8[0x15];
                uVar33 = auStack_c8[0x16];
                goto code_r0x080110bc;
            }
code_r0x0801136c:
            uVar15 = 0x8002744;
        }
        _printk(uVar15);
        iVar27 = -0x16;
    }
    else {
        iVar27 = -0xe;
    }
code_r0x080111a4:
    kfree(iVar14);
code_r0x080111ac:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_68) {
        auVar35 = __stack_chk_fail();
        *extraout_x18 = sym.pattern_play_rate_dbgfs_ops_open;
        iVar27 = simple_attr_open(auVar35._0_8_,auVar35._8_8_,
                                  sym.pattern_play_rate_us_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                                  sym.pattern_play_rate_us_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n"
                                 );
        return iVar27;
    }
    return iVar27;
}


// ===== sym.fifo_s_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006820 (size 8) =====

void sym.fifo_s_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int iVar8;
    int iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar10;
    int64_t iVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int iStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar11 = *(param_1 + 0xd8);
    iStack_64 = 0;
    piVar10 = *(iVar11 + 8);
    iVar5 = __kmalloc(param_3 + 1,0xdc0);
    if (iVar5 == 0) {
        iVar5 = -0xc;
        goto code_r0x08011884;
    }
    iStack_60 = iVar5;
    if (param_3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8011620);
        (*pcVar3)();
    }
    __check_object_size(iVar5,param_3,0);
    iVar4 = sym._copy_from_user(iVar5,param_2,param_3);
    if (iVar4 < 1) {
        iVar7 = *param_4;
        *(iVar5 + param_3) = 0;
        *param_4 = iVar7 + param_3;
        iVar7 = __kmalloc(piVar10[1],0xdc0);
        if (iVar7 == 0) {
            iVar4 = -0xc;
            goto code_r0x08011878;
        }
        uVar12 = 0;
        do {
            iVar6 = strsep(&iStack_60,0x800168e);
            if (iVar6 == 0) {
                uVar1 = *(piVar10 + 1);
                break;
            }
            iVar4 = kstrtoint(iVar6,0,&iStack_64);
            if (iVar4 < 0) goto code_r0x0801186c;
            if (0xff < iStack_64) {
                iStack_64 = 0xff;
            }
            *(iVar7 + uVar12) = iStack_64;
            uVar12 = uVar12 + 1;
            uVar1 = *(piVar10 + 1);
        } while (uVar12 < uVar1);
        memcpy(*piVar10,iVar7,uVar1);
        if (piVar10 == NULL) {
code_r0x08011858:
            *(piVar10 + 2) = 0xffffffea;
            goto code_r0x08011860;
        }
        iVar2 = piVar10[1];
        iVar4 = iVar2 + -1;
        if (-1 < iVar4) {
            iVar4 = 0;
        }
        iVar8 = iVar2 + 1;
        do {
            uVar12 = iVar8 - 2;
            iVar9 = iVar4 + 1;
            if (uVar12 < 1) break;
            iVar8 = iVar8 + -1;
            iVar9 = iVar8;
        } while (*(*piVar10 + uVar12) == '\0');
        if (0xd < *(piVar10 + 0xc)) goto code_r0x08011858;
        uVar12 = iVar9 * *(iVar11 + 0x20);
        switch(*(piVar10 + 0xc)) {
        case 1:
            *(piVar10 + 2) = uVar12 >> 1;
            break;
        case 2:
            *(piVar10 + 2) = uVar12 >> 2;
            break;
        case 3:
            *(piVar10 + 2) = uVar12 >> 3;
            break;
        case 4:
            uVar12 = uVar12 * 2;
        case 0:
            *(piVar10 + 2) = uVar12;
            if (uVar12 == 0xffffffea) {
code_r0x08011860:
                _printk(0x8001325);
code_r0x0801186c:
                param_3 = 0xffffffffffffffea;
            }
            break;
        case 5:
            *(piVar10 + 2) = uVar12 * 4;
            break;
        case 6:
            *(piVar10 + 2) = uVar12 * 8;
            break;
        case 7:
            goto code_r0x08011858;
        case 8:
            *(piVar10 + 2) = iVar2 * 1000 >> 3;
            break;
        case 9:
            *(piVar10 + 2) = iVar2 * 1000 >> 4;
            break;
        case 10:
            *(piVar10 + 2) = (iVar2 * 1000) / 0x18;
            break;
        case 0xb:
            *(piVar10 + 2) = iVar2 * 1000 >> 5;
            break;
        case 0xc:
            *(piVar10 + 2) = (iVar2 * 10000) / 0x1b9;
            break;
        case 0xd:
            *(piVar10 + 2) = (iVar2 * 1000) / 0x30;
        }
        iVar4 = param_3;
        kfree(iVar7);
    }
    else {
        iVar4 = -0xe;
    }
code_r0x08011878:
    kfree(iVar5);
    iVar5 = iVar4;
code_r0x08011884:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_58) {
        auVar13 = __stack_chk_fail(iVar5);
        *extraout_x18 = sym.fifo_period_dbgfs_ops_open;
        simple_attr_open(auVar13._0_8_,auVar13._8_8_,
                         sym.fifo_period_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                         sym.fifo_period_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
        return;
    }
    return;
}


// ===== sym.brake_s_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006828 (size 8) =====

uint32_t *
sym.brake_s_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
          (int64_t param_1,int64_t param_2,uint32_t *param_3,int64_t *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    code *pcVar6;
    uint uVar7;
    int iVar8;
    uint32_t *puVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t iVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar14;
    int64_t unaff_x20;
    int64_t *unaff_x21;
    uint64_t uVar15;
    uint64_t *puVar16;
    int64_t iVar17;
    int64_t iVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint32_t uVar22;
    ulong unaff_x30;
    uchar auVar23 [16];
    int64_t aiStack_d0 [4];
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_90;
    uint32_t *puStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    iVar18 = *(param_1 + 0xd8);
    uStack_74 = 0;
    puVar16 = *(iVar18 + 0x10);
    piVar14 = param_4;
    if (0x40 < param_3) {
        puVar9 = param_3;
        param_3 = 0xffffffffffffffea;
        param_4 = unaff_x21;
        goto code_r0x08012040;
    }
    puVar9 = 0x41;
    iVar17 = kmem_cache_alloc_trace(_simple_open,0xdc0);
    if (iVar17 == 0) {
        param_3 = 0xfffffffffffffff4;
        goto code_r0x08012040;
    }
    iStack_70 = iVar17;
    __check_object_size(iVar17,param_3,0);
    puVar9 = param_3;
    iVar8 = sym._copy_from_user(iVar17,param_2,param_3);
    if (iVar8 < 1) {
        *(iStack_70 + param_3) = 0;
        *param_4 = *param_4 + param_3;
        iVar12 = strsep(&iStack_70,0x800168e);
        if (iVar12 == 0) {
            uVar11 = 0;
            uVar19 = 0;
            uVar21 = 0;
            uVar22 = 0;
            uVar20 = 0;
            uVar15 = 0;
            param_4 = NULL;
            uVar13 = 0;
        }
        else {
            puVar9 = &uStack_74;
            iVar8 = kstrtouint(iVar12,0);
            if (iVar8 < 0) {
code_r0x08011ef0:
                param_3 = 0xffffffffffffffea;
                goto code_r0x08012038;
            }
            param_4 = uStack_74;
            if (0xff < uStack_74) {
                param_4 = 0xff;
                uStack_74 = 0xff;
            }
            iVar12 = strsep(&iStack_70,0x800168e);
            if (iVar12 == 0) {
                uVar11 = 0;
                uVar19 = 0;
                uVar21 = 0;
                uVar22 = 0;
                uVar20 = 0;
                uVar15 = 0;
                uVar13 = 0;
            }
            else {
                puVar9 = &uStack_74;
                iVar8 = kstrtouint(iVar12,0);
                if (iVar8 < 0) goto code_r0x08011ef0;
                uVar15 = uStack_74;
                if (0xff < uStack_74) {
                    uVar15 = 0xff;
                    uStack_74 = 0xff;
                }
                iVar12 = strsep(&iStack_70,0x800168e);
                if (iVar12 == 0) {
                    uVar11 = 0;
                    uVar19 = 0;
                    uVar21 = 0;
                    uVar22 = 0;
                    uVar20 = 0;
                    uVar13 = 0;
                }
                else {
                    puVar9 = &uStack_74;
                    iVar8 = kstrtouint(iVar12,0);
                    if (iVar8 < 0) goto code_r0x08011ef0;
                    uStack_80 = uStack_74;
                    if (0xff < uStack_74) {
                        uStack_80 = 0xff;
                        uStack_74 = 0xff;
                    }
                    iVar12 = strsep(&iStack_70,0x800168e);
                    if (iVar12 == 0) {
                        uVar11 = 0;
                        uVar19 = 0;
                        uVar21 = 0;
                        uVar22 = 0;
                        uVar20 = 0;
                        uVar13 = uStack_80;
                    }
                    else {
                        puVar9 = &uStack_74;
                        iVar8 = kstrtouint(iVar12,0);
                        if (iVar8 < 0) goto code_r0x08011ef0;
                        uVar20 = uStack_74;
                        if (0xff < uStack_74) {
                            uVar20 = 0xff;
                            uStack_74 = 0xff;
                        }
                        iVar12 = strsep(&iStack_70,0x800168e);
                        if (iVar12 == 0) {
                            uVar11 = 0;
                            uVar19 = 0;
                            uVar21 = 0;
                            uVar22 = 0;
                            uVar13 = uStack_80;
                        }
                        else {
                            puVar9 = &uStack_74;
                            iVar8 = kstrtouint(iVar12,0);
                            if (iVar8 < 0) goto code_r0x08011ef0;
                            if (0xff < uStack_74) {
                                uStack_74 = 0xff;
                            }
                            uVar22 = uStack_74;
                            iVar12 = strsep(&iStack_70,0x800168e);
                            if (iVar12 == 0) {
                                uVar11 = 0;
                                uVar19 = 0;
                                uVar21 = 0;
                                uVar13 = uStack_80;
                            }
                            else {
                                puVar9 = &uStack_74;
                                iVar8 = kstrtouint(iVar12,0);
                                if (iVar8 < 0) goto code_r0x08011ef0;
                                if (0xff < uStack_74) {
                                    uStack_74 = 0xff;
                                }
                                uVar21 = uStack_74 & 0xff;
                                iVar12 = strsep(&iStack_70,0x800168e);
                                if (iVar12 == 0) {
                                    uVar11 = 0;
                                    uVar19 = 0;
                                    uVar13 = uStack_80;
                                }
                                else {
                                    puVar9 = &uStack_74;
                                    iVar8 = kstrtouint(iVar12,0);
                                    if (iVar8 < 0) goto code_r0x08011ef0;
                                    if (0xff < uStack_74) {
                                        uStack_74 = 0xff;
                                    }
                                    uVar19 = uStack_74 & 0xff;
                                    iVar12 = strsep(&iStack_70,0x800168e);
                                    if (iVar12 == 0) {
                                        uVar11 = 0;
                                        uVar13 = uStack_80;
                                    }
                                    else {
                                        puVar9 = &uStack_74;
                                        iVar8 = kstrtouint(iVar12,0);
                                        if (iVar8 < 0) goto code_r0x08011ef0;
                                        uVar11 = uStack_74;
                                        if (0xff < uStack_74) {
                                            uVar11 = 0xff;
                                            uStack_74 = 0xff;
                                        }
                                        uVar11 = uVar11 << 0x38;
                                        uVar13 = uStack_80;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar22 = uVar22 & 0xff;
        uVar20 = uVar20 & 0xff;
        uVar13 = uVar11 | uVar19 << 0x30 | uVar21 << 0x28 | uVar22 << 0x20 | uVar20 << 0x18 | (uVar13 & 0xff) << 0x10;
        uVar15 = uVar13 | (uVar15 & 0xff) << 8;
        uVar1 = puVar16[1] & 0xfffffffe;
        uVar3 = uVar13 >> 0x10 & 0xff;
        uVar4 = uVar15 >> 8 & 0xff;
        *puVar16 = uVar15 | param_4 & 0xff;
        cVar5 = uVar11 >> 0x38;
        if (uVar1 != 2) {
            *(puVar16 + 3) =
                 (((((cVar5 == '\0' && uVar19 == 0) && uVar21 == 0) && uVar22 == 0) && uVar20 == 0) && uVar3 == 0) &&
                 uVar4 == 0;
        }
        if ((puVar16 == NULL) || (puVar16[3] != '\0')) {
            uVar22 = 0;
        }
        else {
            uVar2 = *(iVar18 + 0x20);
            if (uVar1 == 2) {
                uVar22 = (uVar2 & 0xfffffff) << 3;
            }
            else {
                if (cVar5 == '\0') {
                    if (uVar19 == 0) {
                        if (uVar21 == 0) {
                            if (uVar22 == 0) {
                                if (uVar20 == 0) {
                                    if (uVar3 == 0) {
                                        if (uVar4 == 0) {
                                            uVar22 = (param_4 & 0xff) != 0;
                                        }
                                        else {
                                            uVar22 = 2;
                                        }
                                    }
                                    else {
                                        uVar22 = 3;
                                    }
                                }
                                else {
                                    uVar22 = 4;
                                }
                            }
                            else {
                                uVar22 = 5;
                            }
                        }
                        else {
                            uVar22 = 6;
                        }
                    }
                    else {
                        uVar22 = 7;
                    }
                }
                else {
                    uVar22 = 8;
                }
                uVar22 = uVar22 * uVar2 >> 1;
            }
        }
        *(puVar16 + 0x14) = uVar22;
    }
    else {
        param_3 = 0xfffffffffffffff2;
    }
code_r0x08012038:
    kfree(iVar17);
    unaff_x20 = iVar17;
code_r0x08012040:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return param_3;
    }
    auVar23 = __stack_chk_fail();
    piVar10 = aiStack_d0;
    *extraout_x18 = sym.brake_mode_dbgfs_read;
    pcStack_a8 = sym.brake_mode_dbgfs_read;
    iVar18 = sp_el0;
    aiStack_d0[3] = *(iVar18 + 0x5e0);
    aiStack_d0[0] = 0;
    aiStack_d0[1] = 0;
    aiStack_d0[2] = 0;
    uVar22 = *(*(*(auVar23._0_8_ + 0xd8) + 0x10) + 8);
    puStack_b0 = &stack0xffffffffffffffa0;
    piStack_a0 = param_4;
    iStack_90 = unaff_x20;
    puStack_88 = param_3;
    if (3 < uVar22) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x80121c0);
        (*pcVar6)();
    }
    uVar7 = scnprintf(aiStack_d0,0x18,0x8003a6c,*(obj.brake_str + uVar22 * 8));
    iVar8 = simple_read_from_buffer(auVar23._8_8_,puVar9,piVar14,aiStack_d0,uVar7);
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == aiStack_d0[3]) {
        return iVar8;
    }
    auVar23 = __stack_chk_fail();
    *extraout_x18_00 = sym.brake_mode_dbgfs_write;
    iVar17 = *(*(auVar23._0_8_ + 0xd8) + 0x10);
    iVar18 = __kmalloc(piVar14 + 1,0xdc0);
    if (iVar18 == 0) {
        puVar9 = 0xfffffffffffffff4;
    }
    else {
        if (piVar14 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8012278);
            (*pcVar6)();
        }
        __check_object_size(iVar18,piVar14,0);
        iVar8 = sym._copy_from_user(iVar18,auVar23._8_8_,piVar14);
        if (iVar8 < 1) {
            iVar12 = *piVar10;
            *(iVar18 + piVar14) = 0;
            *piVar10 = iVar12 + piVar14;
            iVar8 = strcmp(iVar18,"open-loop");
            if (iVar8 == 0) {
                *(iVar17 + 8) = 0;
            }
            else {
                iVar8 = strcmp(iVar18,"close-loop");
                if (iVar8 == 0) {
                    *(iVar17 + 8) = 1;
                }
                else {
                    iVar8 = strcmp(iVar18,"predictive");
                    if (iVar8 == 0) {
                        *(iVar17 + 8) = 2;
                    }
                    else {
                        iVar8 = strcmp(iVar18,"auto");
                        if (iVar8 == 0) {
                            *(iVar17 + 8) = 3;
                        }
                        else {
                            _printk(0x8001ec3,iVar18);
                            piVar14 = 0xffffffffffffffea;
                        }
                    }
                }
            }
        }
        else {
            piVar14 = 0xfffffffffffffff2;
        }
        kfree(iVar18);
        puVar9 = piVar14;
    }
    return puVar9;
}


// ===== sym.pattern_s_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006830 (size 8) =====

int64_t sym.pattern_s_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(param_1 + 0xd8);
    if (*piVar8 == 0) {
        iVar5 = 0;
    }
    else {
        iVar5 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x180);
        if (iVar5 == 0) {
            iVar5 = -0xc;
        }
        else {
            iVar6 = 0;
            uVar7 = 0;
            do {
                iVar4 = scnprintf(iVar5 + uVar7,0x180 - uVar7,"0x%03x  ",*(*piVar8 + iVar6));
                uVar2 = *(*piVar8 + iVar6 + 4);
                if (0xe < uVar2) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8010e7c);
                    (*pcVar3)();
                }
                uVar1 = iVar4 + uVar7;
                iVar4 = scnprintf(iVar5 + uVar1,0x180 - uVar1,"%s(0x%02x)  ",*(obj.period_str + uVar2 * 8));
                uVar1 = iVar4 + uVar1;
                iVar4 = scnprintf(iVar5 + uVar1,0x180 - uVar1,"F_LRA_X2(%1d)\n",*(*piVar8 + iVar6 + 8));
                iVar6 = iVar6 + 0xc;
                uVar7 = iVar4 + uVar1;
            } while (iVar6 != 0x60);
            iVar4 = simple_read_from_buffer(param_2,param_3,param_4,iVar5,uVar7);
            kfree(iVar5);
            iVar5 = iVar4;
        }
    }
    return iVar5;
}


// ===== sym.debugfs_attr_read.cfi_jt @ 0x08006838 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.debugfs_attr_read.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.brake_s_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006840 (size 8) =====

int64_t sym.brake_s_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uchar *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(*(param_1 + 0xd8) + 0x10);
    iVar3 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x41);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        uVar1 = scnprintf(iVar3,0x41,"0x%02x ",*puVar4);
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[1]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[2]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[3]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[4]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[5]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[6]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[7]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,0x8001557,0x8002f07);
        iVar2 = simple_read_from_buffer(param_2,param_3,param_4,iVar3,iVar2 + uVar1);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.fifo_s_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006848 (size 8) =====

int64_t sym.fifo_s_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(param_1 + 0xd8) + 8);
    uVar1 = piVar4[1] << 3 | 1;
    iVar3 = __kmalloc(uVar1,0xdc0);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        if (piVar4[1] == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = 0;
            uVar6 = 0;
            do {
                iVar2 = scnprintf(iVar3 + uVar5,uVar1 - uVar5,0x800317b,*(*piVar4 + uVar6));
                uVar5 = iVar2 + uVar5;
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(piVar4 + 1));
        }
        iVar2 = scnprintf(iVar3 + uVar5,uVar1 - uVar5,0x8001557,0x8002f07);
        iVar2 = simple_read_from_buffer(param_2,param_3,param_4,iVar3,iVar2 + uVar5);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.brake_mode_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006850 (size 8) =====

int64_t sym.brake_mode_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint32_t uVar1;
    code *pcVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t aiStack_50 [4];
    
    piVar6 = aiStack_50;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    aiStack_50[3] = *(iVar5 + 0x5e0);
    aiStack_50[0] = 0;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    uVar1 = *(*(*(param_1 + 0xd8) + 0x10) + 8);
    if (3 < uVar1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x80121c0);
        (*pcVar2)();
    }
    uVar3 = scnprintf(aiStack_50,0x18,0x8003a6c,*(obj.brake_str + uVar1 * 8));
    iVar4 = simple_read_from_buffer(param_2,param_3,param_4,aiStack_50,uVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_50[3]) {
        return iVar4;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.brake_mode_dbgfs_write;
    iVar8 = *(*(auVar9._0_8_ + 0xd8) + 0x10);
    iVar5 = __kmalloc(param_4 + 1,0xdc0);
    if (iVar5 == 0) {
        iVar5 = -0xc;
    }
    else {
        if (param_4 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8012278);
            (*pcVar2)();
        }
        __check_object_size(iVar5,param_4,0);
        iVar4 = sym._copy_from_user(iVar5,auVar9._8_8_,param_4);
        if (iVar4 < 1) {
            iVar7 = *piVar6;
            *(iVar5 + param_4) = 0;
            *piVar6 = iVar7 + param_4;
            iVar4 = strcmp(iVar5,"open-loop");
            if (iVar4 == 0) {
                *(iVar8 + 8) = 0;
            }
            else {
                iVar4 = strcmp(iVar5,"close-loop");
                if (iVar4 == 0) {
                    *(iVar8 + 8) = 1;
                }
                else {
                    iVar4 = strcmp(iVar5,"predictive");
                    if (iVar4 == 0) {
                        *(iVar8 + 8) = 2;
                    }
                    else {
                        iVar4 = strcmp(iVar5,"auto");
                        if (iVar4 == 0) {
                            *(iVar8 + 8) = 3;
                        }
                        else {
                            _printk(0x8001ec3,iVar5);
                            param_4 = 0xffffffffffffffea;
                        }
                    }
                }
            }
        }
        else {
            param_4 = 0xfffffffffffffff2;
        }
        kfree(iVar5);
        iVar5 = param_4;
    }
    return iVar5;
}


// ===== sym.trace_event_reg.cfi_jt @ 0x08006858 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.trace_event_reg.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.primitive_duration_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006860 (size 8) =====

int64_t sym.primitive_duration_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8002719,*(param_1 + 0x18c));
    return iVar1;
}


// ===== sym.mi_custom_vmax_ctrl_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006868 (size 8) =====

int64_t sym.mi_custom_vmax_ctrl_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"custom vmax: %d\n",*(*(param_1 + -0x160) + 0x1c));
    return iVar1;
}


// ===== sym.lra_calibration_check_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006870 (size 8) =====

int64_t sym.lra_calibration_check_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8002719,*(param_1 + -0x182));
    return iVar1;
}


// ===== sym.lra_frequency_hz_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006878 (size 8) =====

int64_t sym.lra_frequency_hz_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + -0x1ac);
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = 0;
        if (uVar1 != 0) {
            uVar2 = 10000000 / uVar1;
        }
        iVar3 = scnprintf(param_3,0x1000,"%d Hz\n",uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.xiaomi_f0_get.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006880 (size 8) =====

int64_t sym.xiaomi_f0_get.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(param_1 + -0x1ac);
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = 0;
        if (uVar1 != 0) {
            uVar2 = 10000000 / uVar1;
        }
        iVar3 = scnprintf(param_3,0x1000,"%d Hz\n",uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.lra_impedance_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006888 (size 8) =====

int64_t sym.lra_impedance_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + -0x183) == '\0') {
        if (*(param_1 + -0x1a4) == 0) {
            if (*(param_1 + -0x1a0) == 0) {
                return -0x16;
            }
            pcVar2 = "Short circuit";
        }
        else {
            if (*(param_1 + -0x1a0) < *(param_1 + -0x19c)) {
                iVar1 = scnprintf(param_3,0x1000,"%u ~ %u mohms\n");
                goto code_r0x08010288;
            }
            pcVar2 = "Open circuit";
        }
        iVar1 = scnprintf(param_3,0x1000,0x8003a6c,pcVar2);
    }
    else {
        iVar1 = scnprintf(param_3,0x1000,"measured %u mohms\n",*(param_1 + -0x198));
    }
code_r0x08010288:
    return iVar1;
}


// ===== sym.mi_comp_lra_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006890 (size 8) =====

int64_t sym.mi_comp_lra_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"mi_comp_lra_show: %d\n",*(param_1 + -0x178));
    return iVar1;
}


// ===== sym.mi_f0_check_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006898 (size 8) =====

int64_t sym.mi_f0_check_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8002719,*(param_1 + -0x180));
    return iVar1;
}


// ===== sym.mi_vmax_ctrl_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068a0 (size 8) =====

int64_t sym.mi_vmax_ctrl_show.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"vmax: %d\n",*(param_1 + -0x1bc));
    return iVar1;
}


// ===== sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068a8 (size 8) =====

ulong sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t param_2)

{
    if (0x55e < param_2 >> 3) {
        param_2 = 11000;
    }
    *(param_1 + 0x1c) = param_2;
    return 0;
}


// ===== sym.brake_sine_gain_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068b0 (size 8) =====

ulong sym.brake_sine_gain_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t param_2)

{
    if (3 < param_2) {
        return 0xffffffea;
    }
    *(*(param_1 + 0x10) + 0x10) = param_2;
    return 0;
}


// ===== sym.pattern_play_rate_us_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068b8 (size 8) =====

ulong sym.pattern_play_rate_us_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t *param_1,uint64_t param_2)

{
    uint uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x4ffa < param_2) {
        param_2 = 0x4ffb;
    }
    *(*param_1 + 0x60) = param_2;
    arg1 = *param_1;
    uVar1 = sym.get_pattern_play_length_us(arg1);
    *(arg1 + 100) = uVar1;
    if (*(*param_1 + 100) == -0x16) {
        _printk(0x8001ea1);
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.auto_res_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068c0 (size 8) =====

ulong sym.auto_res_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_1 + 0x2c) = param_2 == 0;
    return 0;
}


// ===== sym.preload_effect_idx_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068c8 (size 8) =====

ulong sym.preload_effect_idx_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int iVar4;
    int64_t *piVar5;
    int iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x360);
    if (iVar1 != 0) {
        iVar4 = 0;
        iVar7 = *(param_1 + 0x80);
        do {
            if (*(iVar7 + iVar4 * 0x30 + 0x18) == param_2) {
                if (iVar1 == iVar4) {
                    return 0xffffffea;
                }
                iVar6 = 0;
                goto code_r0x080124f0;
            }
            iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
    }
    return 0xffffffea;
    while (iVar6 = iVar6 + 1, iVar2 = iVar1, iVar1 != iVar6) {
code_r0x080124f0:
        iVar2 = iVar6;
        if (*(iVar7 + iVar6 * 0x30 + 0x18) == *(param_1 + 0x5c)) break;
    }
    *(param_1 + 0x5c) = param_2;
    piVar5 = iVar7 + iVar4 * 0x30;
    *(*piVar5 + 0x68) = 1;
    *(piVar5 + 0x24) = 3;
    uVar3 = sym.haptics_set_pattern(param_1,*piVar5,3);
    if (-1 < uVar3) {
        uVar3 = 0;
        piVar5 = iVar7 + iVar2 * 0x30;
        *(piVar5 + 0x24) = 2;
        *(*piVar5 + 0x68) = 0;
    }
    return uVar3;
}


// ===== sym.brake_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068d0 (size 8) =====

ulong sym.brake_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(*(param_1 + 0x10) + 0x18) = param_2 == 0;
    return 0;
}


// ===== sym.fifo_period_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068d8 (size 8) =====

ulong sym.fifo_period_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t param_2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar3 = param_2;
    *in_x18 = unaff_x30;
    if (0xd < param_2) {
        return 0xffffffea;
    }
    piVar4 = *(param_1 + 8);
    *(piVar4 + 0xc) = uVar3;
    if (piVar4 != NULL) {
        iVar1 = piVar4[1];
        iVar2 = iVar1 + -1;
        if (-1 < iVar2) {
            iVar2 = 0;
        }
        iVar6 = iVar1 + 1;
        do {
            uVar5 = iVar6 - 2;
            iVar7 = iVar2 + 1;
            if (uVar5 < 1) break;
            iVar6 = iVar6 + -1;
            iVar7 = iVar6;
        } while (*(*piVar4 + uVar5) == '\0');
        if (uVar3 < 0xe) {
            uVar5 = iVar7 * *(param_1 + 0x20);
            switch(uVar3) {
            case 1:
                uVar5 = uVar5 >> 1;
                break;
            case 2:
                uVar5 = uVar5 >> 2;
                break;
            case 3:
                uVar5 = uVar5 >> 3;
                break;
            case 4:
                uVar5 = uVar5 * 2;
            case 0:
                *(piVar4 + 2) = uVar5;
                if (uVar5 != 0xffffffea) {
                    return 0;
                }
                goto code_r0x08011ac4;
            case 5:
                uVar5 = uVar5 * 4;
                break;
            case 6:
                uVar5 = uVar5 * 8;
                break;
            case 7:
                goto code_r0x08011abc;
            case 8:
                uVar5 = iVar1 * 1000 >> 3;
                break;
            case 9:
                uVar5 = iVar1 * 1000 >> 4;
                break;
            case 10:
                uVar5 = (iVar1 * 1000) / 0x18;
                break;
            case 0xb:
                uVar5 = iVar1 * 1000 >> 5;
                break;
            case 0xc:
                uVar5 = (iVar1 * 10000) / 0x1b9;
                break;
            case 0xd:
                uVar5 = (iVar1 * 1000) / 0x30;
            }
            *(piVar4 + 2) = uVar5;
            return 0;
        }
    }
code_r0x08011abc:
    *(piVar4 + 2) = 0xffffffea;
code_r0x08011ac4:
    _printk(0x8001325);
    return 0xffffffea;
}


// ===== sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068e0 (size 8) =====

ulong sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0x1c);
    return 0;
}


// ===== sym.brake_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068e8 (size 8) =====

ulong sym.brake_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x10) + 0x18) ^ 1;
    return 0;
}


// ===== sym.pattern_play_rate_us_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068f0 (size 8) =====

ulong sym.pattern_play_rate_us_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t *param_1,uint64_t *param_2)

{
    *param_2 = *(*param_1 + 0x60);
    return 0;
}


// ===== sym.auto_res_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080068f8 (size 8) =====

ulong sym.auto_res_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0x2c) ^ 1;
    return 0;
}


// ===== sym.brake_sine_gain_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006900 (size 8) =====

ulong sym.brake_sine_gain_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(*(param_1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.fifo_period_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006908 (size 8) =====

ulong sym.fifo_period_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(*(param_1 + 8) + 0xc);
    return 0;
}


// ===== sym.preload_effect_idx_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006910 (size 8) =====

ulong sym.preload_effect_idx_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1,uint64_t *param_2)

{
    *param_2 = *(param_1 + 0x5c);
    return 0;
}


// ===== sym.haptics_erase.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006918 (size 8) =====

int sym.haptics_erase.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x2d8);
    _dev_printk(0x8003b96,*arg1,"erase effect, really stop play\n");
    if (*(arg1 + 0x5e) == '\0') {
        uVar4 = *(arg1 + 0xf4);
        if (*(arg1 + 0xf4) == 0) {
            uVar4 = arg1[0x16];
        }
        puVar1 = arg1 + 0x17;
        mutex_lock(uVar4,puVar1);
        cancel_delayed_work_sync(arg1 + 0x29);
        if ((*(arg1 + 0xf4) == 0) && (arg1[0x16] != 0)) {
            if (*(arg1 + 0xac) == 0) {
                _dev_printk(0x8003b96,*arg1,"cancelling FIFO playing\n");
                *(arg1 + 0xb4) = 1;
            }
            iVar2 = sym.haptics_stop_fifo_play(arg1);
            if (iVar2 < 0) {
                _dev_err(*arg1,"stop FIFO playing failed, rc=%d\n",iVar2);
                mutex_unlock(puVar1);
                return iVar2;
            }
        }
        mutex_unlock(puVar1);
        iVar3 = sym.haptics_enable_hpwr_vreg(arg1,0);
        iVar2 = 0;
        if (iVar3 < 0) {
            _dev_err(*arg1,"disable hpwr_vreg failed, rc=%d\n");
            iVar2 = iVar3;
        }
    }
    else {
        iVar2 = sym.haptics_boost_vreg_enable(arg1,0);
        if (iVar2 < 0) {
            _dev_err(*arg1,"hboost quick off failed, rc=%d\n");
        }
        else {
            _dev_info(*arg1,"hboost quick off\n");
        }
        iVar2 = 0;
        *(arg1 + 0x5e) = 0;
    }
    return iVar2;
}


// ===== sym.perf_trace_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006920 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.perf_trace_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (uint64_t param_1,uint32_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    ulong uVar17;
    uint64_t unaff_x30;
    uchar auVar18 [16];
    uchar auStack_220 [12];
    uint32_t uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    code *pcStack_1f8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    ulong **ppuStack_160;
    ulong uStack_158;
    int64_t *piStack_150;
    code *pcStack_140;
    uint64_t uStack_138;
    int64_t *piStack_130;
    uint64_t uStack_128;
    uchar auStack_120 [12];
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uVar14 = param_4 & 0xffffffff;
    uVar16 = param_3 & 0xffffffff;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(param_1 + 0x78);
    uVar12 = param_4;
    if ((*(param_1 + 0x80) != 0) || (puVar10 = param_3, *piVar1 != 0)) {
        puVar10 = &uStack_54;
        iVar8 = perf_trace_buf_alloc(0x14,&iStack_50);
        uVar13 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar10 = uStack_54;
            uVar13 = -1L << (uVar13 & 0x3f);
            param_5 = 1;
            uVar12 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar13 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = auStack_60;
            *(iStack_50 + 0x100) = uVar12;
            *(iStack_50 + 0x108) = 5;
            *(iVar8 + 8) = param_2;
            *(iVar8 + 0xc) = param_3;
            *(iVar8 + 0x10) = param_4;
            uVar12 = param_1;
            perf_trace_run_bpf_submit(iVar8,0x14,puVar10,param_1,1,iStack_50,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    uVar17 = tpidr_el2;
    *extraout_x18 = 0x8006fb4;
    uStack_88 = 0x8006fb4;
    iVar8 = sp_el0;
    uVar13 = auVar18._8_8_ & 0xffffffff;
    iStack_98 = *(iVar8 + 0x5e0);
    uVar17 = *(iVar9 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar15 = uVar17;
    puStack_90 = &stack0xffffffffffffffc0;
    uStack_80 = uVar16;
    uStack_70 = uVar14;
    uStack_68 = param_1;
    if ((uVar15 >> 8 & 1) == 0) {
        if ((uVar15 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar15 >> 6 & 1) == 0) &&
           (((uVar15 >> 9 & 1) == 0 || (uVar14 = trace_event_ignore_this_pid(iVar9), (uVar14 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar10 = 0xc;
        iVar8 = trace_event_buffer_reserve(&uStack_c8,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar18[8] & 1;
            trace_event_buffer_commit(&uStack_c8);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar14 = auVar18._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_haptics_play;
    pcStack_f8 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_108 = *(iVar8 + 0x5e0);
    uVar16 = auVar18._8_8_ & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(uVar14 + 0x78);
    ppuStack_100 = &puStack_90;
    uStack_f0 = param_2;
    uStack_e8 = uVar17;
    iStack_e0 = iVar9;
    uStack_d8 = uVar13;
    if ((*(uVar14 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar10 = &uStack_114;
        iVar8 = perf_trace_buf_alloc(0xc,&iStack_110);
        uVar13 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_110 + 0xe8) = &ppuStack_100;
            puVar10 = uStack_114;
            param_5 = 1;
            *(iStack_110 + 0xf8) = auStack_120;
            *(iStack_110 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8007088;
            *(iStack_110 + 0x108) = 5;
            *(iVar8 + 8) = auVar18[8] & 1;
            uVar12 = uVar14;
            perf_trace_run_bpf_submit(iVar8,0xc,puVar10,uVar14,1,iStack_110,piVar2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_108) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    uVar17 = tpidr_el2;
    *extraout_x18_01 = 0x800719c;
    uStack_158 = 0x800719c;
    pcStack_140 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_168 = *(iVar8 + 0x5e0);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar15 = *(iVar9 + 0x48);
    uVar13 = uVar12;
    ppuStack_160 = &ppuStack_100;
    piStack_150 = piVar1;
    uStack_138 = uVar16;
    piStack_130 = piVar2;
    uStack_128 = uVar14;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar9), (uVar14 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar3 = auVar18._8_8_;
    }
    iVar7 = strlen(pcVar3);
    puVar11 = iVar7 + 1 + 0x10;
    iVar8 = trace_event_buffer_reserve(&uStack_198,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar8 + 0xe,pcVar3);
        *(iVar8 + 0xc) = puVar10;
        *(iVar8 + 0xd) = uVar12;
        trace_event_buffer_commit(&uStack_198);
    }
code_r0x08007284:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_168) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar12 = auVar18._0_8_;
    *extraout_x18_02 = sym.perf_trace_qcom_haptics_status;
    pcStack_1f8 = sym.perf_trace_qcom_haptics_status;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar3 = auVar18._8_8_;
    }
    iStack_208 = *(iVar8 + 0x5e0);
    uVar6 = uVar13;
    uVar5 = SUB81(puVar11,0);
    iStack_210 = 0;
    uStack_214 = 0;
    ppuStack_200 = &ppuStack_160;
    iVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &uStack_214;
        iVar4 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&iStack_210,puVar11);
        if (iVar8 != 0) {
            uVar14 = _trace_event_raw_init & 0x3f;
            *(iStack_210 + 0xe8) = &ppuStack_200;
            *(iStack_210 + 0xf8) = auStack_220;
            *(iStack_210 + 0x100) = ~(-1L << uVar14) & 0x80072bc;
            *(iStack_210 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar8 + 0xe,pcVar3);
            puVar11 = uStack_214;
            param_5 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar11,uVar12,1,iStack_210,piVar1,0);
            uVar13 = uVar12;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_208) {
        auVar18 = __stack_chk_fail();
        uVar17 = tpidr_el2;
        *extraout_x18_03 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar11 & 0xffffffff,uVar13 & 1,
                       param_5 & 1);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006928 (size 8) =====

void sym.__bpf_trace_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (ulong param_1,uint param_2,uint param_3,uint param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.trace_event_raw_event_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006930 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x08006f5c)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_fifo_prgm_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,uint param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    uint64_t uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    code *pcStack_278;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    ulong uStack_1d8;
    int64_t *piStack_1d0;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    int64_t *piStack_1b0;
    uint64_t uStack_1a8;
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    ulong uStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar17 = *(param_1 + 0x48);
    uVar15 = param_4;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar13 = param_3;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar13 = NULL;
            uVar15 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(param_1), (uVar9 & 1) == 0))))
        goto code_r0x08006e34;
    }
    else {
code_r0x08006e34:
        puVar13 = 0x14;
        iVar10 = trace_event_buffer_reserve(&uStack_78,param_1);
        if (iVar10 != 0) {
            *(iVar10 + 8) = param_2;
            *(iVar10 + 0xc) = param_3;
            *(iVar10 + 0x10) = param_4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar12 = auVar21._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    pcStack_b8 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    iVar10 = sp_el0;
    iStack_c8 = *(iVar10 + 0x5e0);
    uVar16 = uVar15 & 0xffffffff;
    uVar18 = puVar13 & 0xffffffff;
    uVar20 = auVar21._8_8_ & 0xffffffff;
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar12 + 0x78);
    uVar9 = uVar15;
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar12 + 0x80) != 0) || (puVar14 = puVar13, *piVar1 != 0)) {
        puVar14 = &uStack_d4;
        iVar10 = perf_trace_buf_alloc(0x14,&iStack_d0);
        uVar7 = _trace_event_raw_init;
        if (iVar10 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            puVar14 = uStack_d4;
            param_5 = 1;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8006e90;
            *(iStack_d0 + 0x108) = 5;
            *(iVar10 + 8) = auVar21._8_4_;
            *(iVar10 + 0xc) = puVar13;
            *(iVar10 + 0x10) = uVar15;
            uVar9 = uVar12;
            perf_trace_run_bpf_submit(iVar10,0x14,puVar14,uVar12,1,iStack_d0,piVar1,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar11 = auVar21._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_00 = 0x8006fb4;
    uStack_108 = 0x8006fb4;
    iVar10 = sp_el0;
    uVar15 = auVar21._8_8_ & 0xffffffff;
    iStack_118 = *(iVar10 + 0x5e0);
    uVar19 = *(iVar11 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar17 = uVar19;
    ppuStack_110 = &puStack_c0;
    uStack_100 = uVar18;
    uStack_f0 = uVar16;
    uStack_e8 = uVar12;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar9 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar11), (uVar12 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar14 = 0xc;
        iVar10 = trace_event_buffer_reserve(&uStack_148,iVar11);
        if (iVar10 != 0) {
            *(iVar10 + 8) = auVar21[8] & 1;
            trace_event_buffer_commit(&uStack_148);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_118) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar12 = auVar21._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_haptics_play;
    pcStack_178 = sym.perf_trace_qcom_haptics_play;
    iVar10 = sp_el0;
    iStack_188 = *(iVar10 + 0x5e0);
    uVar16 = auVar21._8_8_ & 0xffffffff;
    iStack_190 = 0;
    uStack_194 = 0;
    iVar10 = tpidr_el1;
    piVar2 = iVar10 + *(uVar12 + 0x78);
    ppuStack_180 = &ppuStack_110;
    uStack_170 = uVar20;
    uStack_168 = uVar19;
    iStack_160 = iVar11;
    uStack_158 = uVar15;
    if ((*(uVar12 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar14 = &uStack_194;
        iVar10 = perf_trace_buf_alloc(0xc,&iStack_190);
        uVar15 = _trace_event_raw_init;
        if (iVar10 != 0) {
            *(iStack_190 + 0xe8) = &ppuStack_180;
            puVar14 = uStack_194;
            param_5 = 1;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8007088;
            *(iStack_190 + 0x108) = 5;
            *(iVar10 + 8) = auVar21[8] & 1;
            uVar9 = uVar12;
            perf_trace_run_bpf_submit(iVar10,0xc,puVar14,uVar12,1,iStack_190,piVar2,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_188) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar11 = auVar21._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_02 = 0x800719c;
    uStack_1d8 = 0x800719c;
    pcStack_1c0 = sym.perf_trace_qcom_haptics_play;
    iVar10 = sp_el0;
    iStack_1e8 = *(iVar10 + 0x5e0);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uVar17 = *(iVar11 + 0x48);
    uVar15 = uVar9;
    ppuStack_1e0 = &ppuStack_180;
    piStack_1d0 = piVar1;
    uStack_1b8 = uVar16;
    piStack_1b0 = piVar2;
    uStack_1a8 = uVar12;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar13 = puVar14;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar13 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar11), (uVar12 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    iVar8 = strlen(pcVar3);
    puVar13 = iVar8 + 1 + 0x10;
    iVar10 = trace_event_buffer_reserve(&uStack_218,iVar11);
    if (iVar10 != 0) {
        *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0xe;
        strcpy(iVar10 + 0xe,pcVar3);
        *(iVar10 + 0xc) = puVar14;
        *(iVar10 + 0xd) = uVar9;
        trace_event_buffer_commit(&uStack_218);
    }
code_r0x08007284:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar9 = auVar21._0_8_;
    *extraout_x18_03 = sym.perf_trace_qcom_haptics_status;
    pcStack_278 = sym.perf_trace_qcom_haptics_status;
    iVar10 = sp_el0;
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    iStack_288 = *(iVar10 + 0x5e0);
    uVar6 = uVar15;
    uVar5 = SUB81(puVar13,0);
    iStack_290 = 0;
    uStack_294 = 0;
    ppuStack_280 = &ppuStack_1e0;
    iVar8 = strlen(pcVar3);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &uStack_294;
        iVar4 = (iVar8 + 0x1cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar4,&iStack_290,puVar13);
        if (iVar10 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_290 + 0xe8) = &ppuStack_280;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << uVar15) & 0x80072bc;
            *(iStack_290 + 0x108) = 5;
            *(iVar10 + 8) = iVar8 * 0x10000 + 0x1000e;
            strcpy(iVar10 + 0xe,pcVar3);
            puVar13 = uStack_294;
            param_5 = 1;
            *(iVar10 + 0xc) = uVar5;
            *(iVar10 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar10,iVar4,puVar13,uVar9,1,iStack_290,piVar1,0);
            uVar15 = uVar9;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_288) {
        auVar21 = __stack_chk_fail();
        uVar19 = tpidr_el2;
        *extraout_x18_04 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar13 & 0xffffffff,uVar15 & 1,
                       param_5 & 1);
        return;
    }
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006938 (size 8) =====

void sym.__bpf_trace_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(ulong param_1,uint64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1(param_1,param_2 & 1);
    return;
}


// ===== sym.perf_trace_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006940 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.perf_trace_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (uint64_t param_1,uint8_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [16];
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    code *pcStack_128;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uchar auStack_50 [12];
    uint32_t uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_44;
        iVar8 = perf_trace_buf_alloc(0xc,&iStack_40);
        uVar11 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
            param_3 = uStack_44;
            uVar12 = -1L << (uVar11 & 0x3f);
            param_5 = 1;
            uVar11 = (~uVar12 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar12 | unaff_x30;
            }
            *(iStack_40 + 0xf8) = auStack_50;
            *(iStack_40 + 0x100) = uVar11;
            *(iStack_40 + 0x108) = 5;
            *(iVar8 + 8) = param_2 & 1;
            perf_trace_run_bpf_submit(iVar8,0xc,param_3,param_1,1,iStack_40,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar9 = auVar14._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800719c;
    uStack_88 = 0x800719c;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar13 = *(iVar9 + 0x48);
    uVar11 = param_4;
    puStack_90 = &stack0xffffffffffffffd0;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar9), (uVar12 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar2 = "(null)";
    if (auVar14._8_8_ != NULL) {
        pcVar2 = auVar14._8_8_;
    }
    iVar7 = strlen(pcVar2);
    puVar10 = iVar7 + 1 + 0x10;
    iVar8 = trace_event_buffer_reserve(&uStack_c8,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar8 + 0xe,pcVar2);
        *(iVar8 + 0xc) = param_3;
        *(iVar8 + 0xd) = param_4;
        trace_event_buffer_commit(&uStack_c8);
    }
code_r0x08007284:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return;
    }
    auVar14 = __stack_chk_fail();
    uVar12 = auVar14._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_haptics_status;
    pcStack_128 = sym.perf_trace_qcom_haptics_status;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar14._8_8_ != NULL) {
        pcVar2 = auVar14._8_8_;
    }
    iStack_138 = *(iVar8 + 0x5e0);
    uVar6 = uVar11;
    uVar5 = SUB81(puVar10,0);
    iStack_140 = 0;
    uStack_144 = 0;
    ppuStack_130 = &puStack_90;
    iVar7 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_144;
        iVar3 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&iStack_140,puVar10);
        if (iVar8 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_140 + 0xe8) = &ppuStack_130;
            *(iStack_140 + 0xf8) = auStack_150;
            *(iStack_140 + 0x100) = ~(-1L << uVar11) & 0x80072bc;
            *(iStack_140 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar8 + 0xe,pcVar2);
            puVar10 = uStack_144;
            param_5 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar10,uVar12,1,iStack_140,piVar1,0);
            uVar11 = uVar12;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_138) {
        auVar14 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_01 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar11 & 1,
                       param_5 & 1);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006948 (size 8) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,uint8_t param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar13;
    ulong unaff_x30;
    unkbyte9 Var14;
    uchar auVar15 [16];
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    uchar auStack_c0 [12];
    uint32_t uStack_b4;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar13 = *(param_1 + 0x48);
    if ((uVar13 >> 8 & 1) == 0) {
        if ((uVar13 >> 7 & 1) != 0) {
            param_3 = NULL;
            param_4 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar13 >> 6 & 1) == 0) &&
           (((uVar13 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(param_1), (uVar8 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        param_3 = 0xc;
        iVar9 = trace_event_buffer_reserve(&uStack_68,param_1);
        if (iVar9 != 0) {
            *(iVar9 + 8) = param_2 & 1;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return;
    }
    Var14 = __stack_chk_fail();
    uVar8 = Var14;
    *extraout_x18 = sym.perf_trace_qcom_haptics_play;
    pcStack_98 = sym.perf_trace_qcom_haptics_play;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar8 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_b4;
        iVar9 = perf_trace_buf_alloc(0xc,&iStack_b0);
        uVar11 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_b0 + 0xe8) = &puStack_a0;
            param_3 = uStack_b4;
            param_5 = 1;
            *(iStack_b0 + 0xf8) = auStack_c0;
            *(iStack_b0 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8007088;
            *(iStack_b0 + 0x108) = 5;
            *(iVar9 + 8) = Var14 >> 0x40 & 1;
            perf_trace_run_bpf_submit(iVar9,0xc,param_3,uVar8,1,iStack_b0,piVar1,0);
            param_4 = uVar8;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar10 = auVar15._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_00 = 0x800719c;
    uStack_f8 = 0x800719c;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar13 = *(iVar10 + 0x48);
    uVar8 = param_4;
    ppuStack_100 = &puStack_a0;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar12 = param_3;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar10), (uVar11 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar2 = "(null)";
    if (auVar15._8_8_ != NULL) {
        pcVar2 = auVar15._8_8_;
    }
    iVar7 = strlen(pcVar2);
    puVar12 = iVar7 + 1 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_138,iVar10);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar9 + 0xe,pcVar2);
        *(iVar9 + 0xc) = param_3;
        *(iVar9 + 0xd) = param_4;
        trace_event_buffer_commit(&uStack_138);
    }
code_r0x08007284:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return;
    }
    auVar15 = __stack_chk_fail();
    uVar11 = auVar15._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_haptics_status;
    pcStack_198 = sym.perf_trace_qcom_haptics_status;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar15._8_8_ != NULL) {
        pcVar2 = auVar15._8_8_;
    }
    iStack_1a8 = *(iVar9 + 0x5e0);
    uVar6 = uVar8;
    uVar5 = SUB81(puVar12,0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    ppuStack_1a0 = &ppuStack_100;
    iVar7 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_1b4;
        iVar3 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_1b0,puVar12);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_1b0 + 0xe8) = &ppuStack_1a0;
            *(iStack_1b0 + 0xf8) = auStack_1c0;
            *(iStack_1b0 + 0x100) = ~(-1L << uVar8) & 0x80072bc;
            *(iStack_1b0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,pcVar2);
            puVar12 = uStack_1b4;
            param_5 = 1;
            *(iVar9 + 0xc) = uVar5;
            *(iVar9 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar12,uVar11,1,iStack_1b0,piVar1,0);
            uVar8 = uVar11;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_1a8) {
        auVar15 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_02 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar8 & 1,
                       param_5 & 1);
        return;
    }
    return;
}


// ===== sym.xiaomi_f0_put.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006950 (size 8) =====

int64_t sym.xiaomi_f0_put.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    puVar5 = &uStack_3c;
    uStack_3c = 0;
    iVar3 = kstrtouint(param_3,0,puVar5);
    if (iVar3 == 0) {
        arg1 = param_1 + -0x1f0;
        uVar2 = 0;
        if (uStack_3c != 0) {
            uVar2 = 10000000 / uStack_3c;
        }
        uVar1 = *(param_1 + -0x1ac);
        *(param_1 + -0x1b0) = uVar2;
        *(param_1 + -0x1ac) = uVar2;
        iVar3 = sym.haptics_config_openloop_lra_period(arg1,uVar2);
        _dev_info(*arg1,"xiaomi_f0_put: cl_t_lra_us(%d  -->  %d).\n",uVar1,*(param_1 + -0x1ac));
        puVar5 = uStack_3c;
        if (iVar3 < 0) {
            _dev_err(*arg1,"xiaomi_f0: f0(%d) config failed.\n");
            param_4 = iVar3;
        }
        else {
            _dev_info(*arg1,"xiaomi_f0_put: f0(%d) config success.\n",puVar5);
        }
    }
    else {
        param_4 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mi_vmax_ctrl_show;
    iVar3 = scnprintf(puVar5,0x1000,"vmax: %d\n",*(iVar4 + -0x1bc));
    return iVar3;
}


// ===== sym.mi_vmax_ctrl_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006958 (size 8) =====

int64_t sym.mi_vmax_ctrl_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar3 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtouint(param_3,0,puVar3);
    if (iVar1 == 0) {
        puVar3 = uStack_2c;
        *(param_1 + -0x1bc) = uStack_2c;
        _dev_info(*(param_1 + -0x1f0),"mi_vmax_ctrl_store: vmax %d.\n");
    }
    else {
        param_4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mi_custom_vmax_ctrl_show;
    iVar1 = scnprintf(puVar3,0x1000,"custom vmax: %d\n",*(*(iVar2 + -0x160) + 0x1c));
    return iVar1;
}


// ===== sym.mi_comp_lra_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006960 (size 8) =====

uint64_t sym.mi_comp_lra_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    unkbyte7 Stack_a8;
    uchar uStack_a1;
    unkbyte7 Stack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    uVar8 = &uStack_2c;
    uStack_2c = 0;
    *(param_1 + -0x178) = 0x708;
    uVar7 = param_4;
    iVar2 = kstrtouint(param_3,0);
    if (iVar2 == 0) {
        *(param_1 + -0x178) = uStack_2c;
        uVar8 = uStack_2c;
        _dev_info(*(param_1 + -0x1f0),"mi_comp_lra_store: mi_comp_lra %d.\n");
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return param_4;
    }
    auVar12 = __stack_chk_fail();
    piVar10 = auVar12._8_8_;
    *extraout_x18 = sym.haptics_add_debugfs;
    pcStack_88 = sym.haptics_add_debugfs;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    Stack_a0 = 0;
    Stack_a8 = 0;
    uStack_a1 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    if (uVar8 < 1) {
        uVar4 = 0;
    }
    else {
        uVar11 = uVar8;
        do {
            scnprintf(&Stack_a8,0xf,"%s%d",uVar7,piVar10[3]);
            uVar3 = debugfs_create_dir(&Stack_a8,auVar12._0_8_);
            if (0xfffffffffffff000 < uVar3) {
                _printk(0x8001e63,&Stack_a8,uVar3 & 0xffffffff);
                uVar4 = uVar3 & 0xffffffff;
                break;
            }
            uVar4 = debugfs_create_file_unsafe("vmax_mv",0x1a4,uVar3,piVar10,obj.vmax_debugfs_ops);
            if ((uVar4 < 0xfffffffffffff001) &&
               (uVar4 = debugfs_create_file_unsafe
                                  ("lra_auto_res_en",0x1a4,uVar3,piVar10,obj.auto_res_en_debugfs_ops),
               uVar4 < 0xfffffffffffff001)) {
                if (*piVar10 != 0) {
                    uVar5 = debugfs_create_dir("pattern",uVar3);
                    uVar4 = uVar5;
                    if ((uVar5 < 0xfffffffffffff001) &&
                       (uVar4 = debugfs_create_file("samples",0x1a4,uVar5,piVar10,obj.pattern_s_dbgfs_ops),
                       uVar4 < 0xfffffffffffff001)) {
                        pcVar6 = "play_rate_us";
                        pcVar9 = obj.pattern_play_rate_dbgfs_ops;
code_r0x08010aa4:
                        uVar4 = debugfs_create_file_unsafe(pcVar6,0x1a4,uVar5,piVar10,pcVar9);
                        if (uVar4 < 0xfffffffffffff001) goto code_r0x08010ab4;
                    }
                    goto code_r0x08010b90;
                }
                if (piVar10[1] != 0) {
                    uVar5 = debugfs_create_dir("fifo",uVar3);
                    uVar4 = uVar5;
                    if ((uVar5 < 0xfffffffffffff001) &&
                       (uVar4 = debugfs_create_file("samples",0x1a4,uVar5,piVar10,obj.fifo_s_dbgfs_ops),
                       uVar4 < 0xfffffffffffff001)) {
                        pcVar6 = "period";
                        pcVar9 = obj.fifo_period_dbgfs_ops;
                        goto code_r0x08010aa4;
                    }
                    goto code_r0x08010b90;
                }
code_r0x08010ab4:
                if ((piVar10[2] != 0) &&
                   ((((uVar3 = debugfs_create_dir("brake",uVar3), uVar4 = uVar3, 0xfffffffffffff000 < uVar3 ||
                      (uVar4 = debugfs_create_file("samples",0x1a4,uVar3,piVar10,obj.brake_s_dbgfs_ops),
                      0xfffffffffffff000 < uVar4)) ||
                     (uVar4 = debugfs_create_file("mode",0x1a4,uVar3,piVar10,obj.brake_mode_dbgfs_ops),
                     0xfffffffffffff000 < uVar4)) ||
                    ((uVar4 = debugfs_create_file_unsafe("enable",0x1a4,uVar3,piVar10,obj.brake_en_dbgfs_ops),
                     0xfffffffffffff000 < uVar4 ||
                     (uVar4 = debugfs_create_file_unsafe
                                        ("sine_gain",0x1a4,uVar3,piVar10,obj.brake_sine_gain_dbgfs_ops),
                     0xfffffffffffff000 < uVar4)))))) goto code_r0x08010b90;
                uVar4 = 0;
            }
            else {
code_r0x08010b90:
                if (uVar4 < 0) {
                    _printk(0x8002da0,&Stack_a8,uVar4 & 0xffffffff);
                    break;
                }
            }
            uVar11 = uVar11 - 1;
            piVar10 = piVar10 + 6;
        } while (uVar11 != 0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_98) {
        auVar12 = __stack_chk_fail();
        *extraout_x18_00 = sym.vmax_debugfs_ops_open;
        uVar7 = simple_attr_open(auVar12._0_8_,auVar12._8_8_,
                                 sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                                 sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
        return uVar7;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.lra_calibration_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006968 (size 8) =====

int64_t sym.lra_calibration_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong *param_3,int64_t param_4)

{
    uint8_t uVar1;
    int64_t iVar2;
    bool bVar3;
    uchar uVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint uVar9;
    uint32_t uVar10;
    int iVar11;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    int iVar18;
    uint32_t uVar19;
    uint8_t uVar20;
    ulong uVar21;
    ulong uVar22;
    ulong unaff_x30;
    char acStack_fc [4];
    uchar auStack_f8 [4];
    uchar auStack_f4 [4];
    uint8_t auStack_f0 [4];
    uchar auStack_ec [4];
    uint32_t uStack_e8;
    ushort uStack_e4;
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
    int iStack_80;
    int iStack_7c;
    uint uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    acStack_fc[0] = '\0';
    iVar5 = kstrtobool(param_3,acStack_fc);
    if (iVar5 != 0) {
        iVar7 = -0x16;
        goto code_r0x0800fd28;
    }
    iVar7 = param_4;
    if (acStack_fc[0] == '\0') goto code_r0x0800fd28;
    arg1 = param_1 + -0x1f0;
    mutex_lock(param_1 + -0x138);
    if ((*(param_1 + -0xfc) == 0) && (*(param_1 + -0x140) != 0)) {
        _dev_err(*arg1,"In FIFO playing, ignore calibration\n");
        iVar5 = -0x10;
    }
    else {
        iVar5 = sym.haptics_enable_play(arg1,0);
        if (iVar5 < 0) {
            uVar21 = *arg1;
            pcVar8 = "Stop playing failed, rc=%d\n";
        }
        else {
            uVar14 = *(param_1 + -0x1b4);
            *(param_1 + -0xf8) = 1;
            uVar13 = *(param_1 + 0x178) + 99U & 0xffff;
            uStack_e8 = uStack_e8 & 0xffffff00;
            auStack_ec[0] = 0;
            iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,&uStack_e8,1);
            if (iVar5 < 0) {
                _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                uVar21 = *arg1;
                pcVar8 = "Read AUTORES_CFG failed, rc=%d\n";
code_r0x0800fae0:
                _dev_err(uVar21,pcVar8,iVar5);
            }
            else {
                uVar13 = *(param_1 + 0x178) + 0x60U & 0xffff;
                iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,auStack_ec,1);
                if (iVar5 < 0) {
                    _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                    uVar21 = *arg1;
                    pcVar8 = "Read DRV_DUTY_CFG failed, rc=%d\n";
                    goto code_r0x0800fae0;
                }
                uVar9 = 0xb9;
                if (*(param_1 + 0x198) != 4) {
                    uVar9 = 0xb2;
                }
                regmap_update_bits_base(*(param_1 + -0x1e8),*(param_1 + 0x178) + 99U & 0xffff,0xbf,uVar9,0,0,0);
                bVar3 = *(param_1 + 0x198) != 4;
                uVar9 = 0xff;
                if (bVar3) {
                    uVar9 = 0x80;
                }
                uVar12 = 0x16;
                if (bVar3) {
                    uVar12 = 0;
                }
                regmap_update_bits_base
                          (*(param_1 + -0x1e8),*(param_1 + 0x178) + 0x60U & 0xffff,uVar9,uVar12,0,0,0);
                iVar5 = sym.haptics_config_openloop_lra_period(arg1,0x1653);
                if (-1 < iVar5) {
                    _dev_printk(0x8003b96,*arg1,"update lra_calibrationVMAX_HDRM to %d mv\n",*(param_1 + -0x1a8));
                    iVar5 = sym.haptics_set_vmax_headroom_mv(arg1,*(param_1 + -0x1a8));
                    if (-1 < iVar5) {
                        if ((*(param_1 + 0x98) != 0) || (*(param_1 + 0x198) == 3)) {
                            uVar14 = *(param_1 + 0x16c) - *(param_1 + -0x1a8);
                        }
                        mutex_lock(param_1 + 0x108);
                        iVar5 = sym.__haptics_set_vmax_mv(arg1,uVar14);
                        mutex_unlock(param_1 + 0x108);
                        if (-1 < iVar5) {
                            uVar4 = sym.get_direct_play_max_amplitude(arg1);
                            uStack_e0 = CONCAT71(uStack_e0._1_7_,uVar4);
                            uVar13 = *(param_1 + 0x17c) + 0x26U & 0xffff;
                            iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,&uStack_e0,1);
                            if (iVar5 < 0) {
                                _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar13,iVar5);
                                _dev_err(*arg1,"config DIRECT_PLAY failed, rc=%d\n",iVar5);
                            }
                            else {
                                iVar5 = sym.haptics_enable_hpwr_vreg(arg1,1);
                                if (-1 < iVar5) {
                                    *(param_1 + -0xfc) = 1;
                                    iVar5 = sym.haptics_enable_play(arg1,1);
                                    if (-1 < iVar5) {
                                        usleep_range_state(150000,0x25d78,2);
                                        iVar5 = sym.haptics_get_closeloop_lra_period(arg1,0);
                                        if ((-1 < iVar5) && (iVar5 = sym.haptics_enable_play(arg1,0), -1 < iVar5)) {
                                            sym.haptics_config_openloop_lra_period(arg1,*(param_1 + -0x1ac));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                sym.haptics_enable_play(arg1,0);
                iVar5 = sym.haptics_enable_hpwr_vreg(arg1,0);
                if (-1 < iVar5) {
                    uVar13 = *(param_1 + 0x178) + 99U & 0xffff;
                    iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,&uStack_e8,1);
                    if (-1 < iVar5) {
                        uVar13 = *(param_1 + 0x178) + 0x60U & 0xffff;
                        iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,auStack_ec,1);
                        if (-1 < iVar5) {
                            usleep_range_state(4000,5000,2);
                            if (*(param_1 + -0x183) == '\0') {
                                uVar15 = &uStack_e8 | 1;
                                auStack_f0[0] = 0;
                                auStack_f4[0] = 0;
                                auStack_f8[0] = 0;
                                uStack_e0._0_6_ = CONCAT24(*0x800505c,*0x8005058);
                                uStack_e4 = *0x800505c;
                                uVar13 = *(param_1 + 0x178) + 0x49U & 0xffff;
                                uStack_e8 = *0x8005058;
                                iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,uVar15,1);
                                if (iVar5 < 0) {
code_r0x0800f908:
                                    uVar21 = *arg1;
                                    pcVar8 = "read addr %#x failed, rc=%d\n";
                                }
                                else {
                                    uVar17 = &uStack_e8 | 3;
                                    uVar13 = *(param_1 + 0x178) + (uStack_e8 >> 0x10 & 0xff) & 0xffff;
                                    iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,uVar17,1);
                                    if (iVar5 < 0) goto code_r0x0800f908;
                                    uVar13 = *(param_1 + 0x178) + uStack_e4 & 0xffff;
                                    iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,&uStack_e8 | 5,1);
                                    if (iVar5 < 0) goto code_r0x0800f908;
                                    iVar5 = *(param_1 + 0x198);
                                    if (iVar5 != 3) {
                                        if (iVar5 == 4) {
                                            uVar9 = 0x10;
                                            uVar21 = 0x81;
                                            uVar22 = 0x7c;
                                            iVar6 = 0xa4;
                                            uVar20 = *(param_1 + 0x19e) ^ 0x81;
                                            goto code_r0x0800f638;
                                        }
                                        if (iVar5 != 2) {
                                            _dev_err(*arg1,"unsupported HW type: %d\n");
                                            iVar5 = -0x5f;
                                            goto code_r0x0800fce0;
                                        }
code_r0x0800fc8c:
                                        if (*(param_1 + -8) == 0) {
                                            _dev_err(*arg1,"PBS device is not defined\n");
                                            iVar5 = -0x13;
                                        }
                                        else {
                                            iVar5 = -0x13;
                                            _dev_err(*arg1,"Trigger PBS to config ISC failed, rc=%d\n",0xffffffed);
                                        }
                                        goto code_r0x0800fce0;
                                    }
                                    uVar9 = 0;
                                    uVar20 = 0x61;
                                    uVar21 = 0x67;
                                    uVar22 = 0x80;
                                    iVar6 = 0x77;
code_r0x0800f638:
                                    uVar13 = *(param_1 + 0x178) + 0x65U & 0xffff;
                                    iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,auStack_f4,1);
                                    if (iVar5 < 0) {
code_r0x0800fa68:
                                        _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                                        goto code_r0x0800fce0;
                                    }
                                    uVar13 = *(param_1 + 0x178) + iVar6 & 0xffff;
                                    iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,auStack_f8,1);
                                    if (iVar5 < 0) goto code_r0x0800fa68;
                                    regmap_update_bits_base
                                              (*(param_1 + -0x1e8),*(param_1 + 0x178) + 0x65U & 0xffff,uVar22,uVar9,
                                               0,0,0);
                                    regmap_update_bits_base
                                              (*(param_1 + -0x1e8),*(param_1 + 0x178) + iVar6 & 0xffff,uVar21,uVar20
                                               ,0,0,0);
                                    uVar13 = uStack_e0;
                                    if ((*(param_1 + 0x198) == 3) && (uVar13 == 0x48)) {
                                        uStack_e0._0_2_ = CONCAT11(0x78,uStack_e0);
                                    }
                                    uVar13 = *(param_1 + 0x178) + uVar13 & 0xffff;
                                    iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,&uStack_e0 | 1,1);
                                    if (iVar5 < 0) {
code_r0x0800f93c:
                                        uVar21 = *arg1;
                                        pcVar8 = "write addr %#x failed, rc=%d\n";
code_r0x0800f950:
                                        _dev_err(uVar21,pcVar8,uVar13,iVar5);
                                    }
                                    else {
                                        uVar13 = uStack_e0._2_1_;
                                        if ((*(param_1 + 0x198) == 3) && (uVar13 == 0x48)) {
                                            uStack_e0._0_4_ = CONCAT13(0x78,uStack_e0);
                                        }
                                        uVar13 = *(param_1 + 0x178) + uVar13 & 0xffff;
                                        iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,&uStack_e0 | 3,1);
                                        if (iVar5 < 0) goto code_r0x0800f93c;
                                        uVar13 = uStack_e0._4_1_;
                                        if ((*(param_1 + 0x198) == 3) && (uVar13 == 0x48)) {
                                            uStack_e0._0_6_ = CONCAT15(0x78,uStack_e0);
                                        }
                                        uVar13 = *(param_1 + 0x178) + uVar13 & 0xffff;
                                        iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,&uStack_e0 | 5,1);
                                        if (iVar5 < 0) goto code_r0x0800f93c;
                                        iVar5 = sym.haptics_enable_hpwr_vreg(arg1,1);
                                        if (-1 < iVar5) {
                                            iVar18 = 5;
                                            uVar14 = 100000;
                                            uVar16 = 0;
                                            do {
                                                uVar10 = uVar16 + uVar14 >> 1;
                                                uVar19 = (uVar10 * 0xff) / 100000;
                                                uVar13 = *(param_1 + 0x17c) + 0x26U & 0xffff;
                                                auStack_ec[0] = uVar19;
                                                iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,auStack_ec,1);
                                                if (iVar5 < 0) {
                                                    _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar13,iVar5);
                                                    _dev_err(*arg1,"config DIRECT_PLAY failed, rc=%d\n",iVar5);
                                                    goto code_r0x0800f954;
                                                }
                                                _dev_printk(0x8003b96,*arg1,"sweeping milli_pct %u, amplitude %#x\n",
                                                            uVar10,uVar19);
                                                *(param_1 + -0xfc) = 1;
                                                iVar5 = sym.haptics_enable_play(arg1,1);
                                                if (iVar5 < 0) goto code_r0x0800f954;
                                                usleep_range_state(*(param_1 + -0x1b0),*(param_1 + -0x1b0) + 1000,2);
                                                uVar13 = *(param_1 + 0x178) + 0xcU & 0xffff;
                                                iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,auStack_f0,1);
                                                uVar20 = auStack_f0[0];
                                                if (iVar5 < 0) {
                                                    uVar21 = *arg1;
                                                    pcVar8 = "read addr %#x failed, rc=%d\n";
                                                    goto code_r0x0800f950;
                                                }
                                                iVar5 = sym.haptics_enable_play(arg1,0);
                                                if (iVar5 < 0) goto code_r0x0800f954;
                                                uVar13 = uVar10;
                                                if ((uVar20 & 4) != 0) {
                                                    uVar13 = uVar16;
                                                    uVar14 = uVar10;
                                                }
                                                usleep_range_state(4000,5000,2);
                                                iVar18 = iVar18 + -1;
                                                uVar16 = uVar13;
                                            } while (iVar18 != 0);
                                            iVar5 = *(param_1 + 0x198);
                                            if (iVar5 == 4) {
                                                bVar3 = *(param_1 + 0x19e) != '\0';
                                                uVar16 = 10000000;
                                                if (bVar3) {
                                                    uVar16 = 5000000;
                                                }
                                                uVar10 = 0xfa;
                                                if (bVar3) {
                                                    uVar10 = 0x7d;
                                                }
code_r0x08010018:
                                                if (*(param_1 + 0x98) != 0) {
code_r0x08010028:
                                                    uVar16 = *(param_1 + 0x16c) * 1000;
                                                }
                                                uVar19 = 0;
                                                if (uVar10 != 0) {
                                                    uVar19 = uVar16 / uVar10;
                                                }
                                                _dev_printk(0x8003b96,*arg1,"LRA impedance capable max: %u mohms\n",
                                                            uVar19);
                                            }
                                            else {
                                                if (iVar5 == 3) {
                                                    uVar10 = 0x8c;
                                                    goto code_r0x08010028;
                                                }
                                                if (iVar5 == 2) {
                                                    uVar16 = 10000000;
                                                    if (*(param_1 + 0x19e) != '\0') {
                                                        uVar16 = 5000000;
                                                    }
                                                    uVar10 = 0xfa;
                                                    goto code_r0x08010018;
                                                }
                                                uVar19 = 0;
                                            }
                                            uVar16 = (uVar19 * uVar13) / 100000;
                                            uVar14 = (uVar19 * uVar14) / 100000;
                                            if (uVar19 * uVar13 < 100000) {
                                                uVar21 = *arg1;
                                                pcVar8 = "Short circuit detected!\n";
code_r0x080100c0:
                                                _dev_warn(uVar21,pcVar8);
                                            }
                                            else {
                                                uVar21 = *arg1;
                                                if (uVar19 <= uVar14) {
                                                    pcVar8 = "Open circuit detected!\n";
                                                    goto code_r0x080100c0;
                                                }
                                                _dev_printk(0x8003b96,uVar21,
                                                            "LRA impedance is between %u - %u mohms\n",uVar16,uVar14);
                                            }
                                            *(param_1 + -0x1a4) = uVar16;
                                            *(param_1 + -0x1a0) = uVar14;
                                            *(param_1 + -0x19c) = uVar19;
                                        }
                                    }
code_r0x0800f954:
                                    sym.haptics_enable_play(arg1,0);
                                    iVar5 = sym.haptics_enable_hpwr_vreg(arg1,0);
                                    if (iVar5 < 0) goto code_r0x0800fce0;
                                    if (*(param_1 + 0x198) == 2) goto code_r0x0800fc8c;
                                    uVar13 = *(param_1 + 0x178) + 0x65U & 0xffff;
                                    iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,auStack_f4,1);
                                    if (iVar5 < 0) {
code_r0x0800fcac:
                                        uVar21 = *arg1;
                                        pcVar8 = "write addr %#x failed, rc=%d\n";
                                    }
                                    else {
                                        uVar13 = *(param_1 + 0x178) + iVar6 & 0xffff;
                                        iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,auStack_f8,1);
                                        if (iVar5 < 0) goto code_r0x0800fcac;
                                        uVar13 = *(param_1 + 0x178) + (uStack_e8 & 0xff) & 0xffff;
                                        iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,uVar15,1);
                                        if (-1 < iVar5) {
                                            uVar13 = *(param_1 + 0x178) + (uStack_e8 >> 0x10 & 0xff) & 0xffff;
                                            iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,uVar17,1);
                                            if (-1 < iVar5) {
                                                uVar13 = *(param_1 + 0x178) + uStack_e4 & 0xffff;
                                                iVar5 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,&uStack_e8 | 5,1
                                                                         );
                                                if (-1 < iVar5) goto code_r0x0800fce0;
                                            }
                                        }
                                        uVar21 = *arg1;
                                        pcVar8 = "write addr %#x failed, rc=%d\n";
                                    }
                                }
                                _dev_err(uVar21,pcVar8,uVar13,iVar5);
                            }
                            else {
                                iVar18 = *(param_1 + -0x1b0);
                                uStack_e8 = uStack_e8 & 0xffffff00;
                                iVar6 = iVar18 + 2000;
                                uStack_78 = 0;
                                uStack_a0 = *0x8005038;
                                uStack_98 = *0x8005040;
                                uStack_90 = *0x8005048;
                                uStack_88 = *0x8005050;
                                uStack_c0 = *0x8005018;
                                uStack_b8 = *0x8005020;
                                uStack_b0 = *0x8005028;
                                uStack_a8 = *0x8005030;
                                uStack_e0 = *0x8004ff8;
                                uStack_d8 = *0x8005000;
                                uStack_d0 = *0x8005008;
                                uStack_c8 = *0x8005010;
                                uVar20 = *(param_1 + 0x19e) ^ 1;
                                iStack_80 = iVar6;
                                iStack_7c = iVar6;
                                if (*(param_1 + -0x10) == 0) {
                                    uVar13 = 0x1194;
                                }
                                else {
                                    iVar5 = nvmem_device_read(*(param_1 + -0x10),0x75,1,&uStack_e8);
                                    uVar13 = 0x1194;
                                    if (0 < iVar5) {
                                        if ((uStack_e8 & 0xff) != 0) {
                                            uVar1 = 0;
                                            if ((uStack_e8 & 0xff) < 0xa4) {
                                                uVar1 = uVar20;
                                            }
                                            uVar20 = uVar1;
                                            if (uStack_e8 < 0x3c) {
                                                uVar20 = 1;
                                            }
                                            iVar5 = 0x7d;
                                            if (uVar20 != 0) {
                                                iVar5 = 0xfa;
                                            }
                                            iVar11 = 1000;
                                            if (uVar20 != 0) {
                                                iVar11 = 2000;
                                            }
                                            uVar13 = iVar11 + iVar5 * (uStack_e8 >> 2);
                                            if (uVar13 < 0x1195) {
                                                uVar13 = 0x1194;
                                            }
                                        }
                                    }
                                }
                                _dev_printk(0x8003b96,*arg1,"Set %u mV Vmax for impedance detection\n",uVar13);
                                mutex_lock(param_1 + 0x108);
                                iVar5 = sym.__haptics_set_vmax_mv(arg1,uVar13);
                                mutex_unlock(param_1 + 0x108);
                                if (iVar5 < 0) goto code_r0x0800fce0;
                                uStack_e8 = CONCAT31(uStack_e8._1_3_,uVar20) | 0x80;
                                regmap_update_bits_base
                                          (*(param_1 + -0x1e8),*(param_1 + 0x178) + 0xa4U & 0xffff,0x81,uVar20 | 0x80
                                           ,0,0,0);
                                regmap_update_bits_base
                                          (*(param_1 + -0x1e8),*(param_1 + 0x178) + 0x65U & 0xffff,0x10,0,0,0,0);
                                iVar5 = sym.haptics_set_pattern(arg1,&uStack_e0,2);
                                if (iVar5 < 0) {
code_r0x0800ff44:
                                    _dev_err(*arg1,"measure LRA impedance failed, rc=%d\n",iVar5);
                                }
                                else {
                                    *(param_1 + -0xfc) = 2;
                                    iVar5 = sym.haptics_enable_play(arg1,1);
                                    if (iVar5 < 0) goto code_r0x0800ff44;
                                    usleep_range_state(iVar6,iVar18 + 0x7d1,2);
                                    iVar5 = sym.haptics_enable_play(arg1,0);
                                    if (iVar5 < 0) goto code_r0x0800ff44;
                                    uVar13 = *(param_1 + 0x178) + 0xeU & 0xffff;
                                    iVar5 = regmap_bulk_read(*(param_1 + -0x1e8),uVar13,&uStack_e8,1);
                                    if (iVar5 < 0) {
                                        _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                                        goto code_r0x0800ff44;
                                    }
                                    *(param_1 + -0x198) = (uStack_e8 & 0xff) * 0xfa;
                                    _dev_printk(0x8003b96,*arg1,"measured LRA impedance: %u mohm");
                                    if ((*(param_1 + -0x10) != 0) &&
                                       (iVar5 = nvmem_device_write(*(param_1 + -0x10),0x76,1,&uStack_e8), iVar5 < 0)
                                       ) {
                                        _dev_err(*arg1,"write measured impedance value into SDAM failed, rc=%d\n",
                                                 iVar5);
                                        goto code_r0x0800ff44;
                                    }
                                }
                                regmap_update_bits_base
                                          (*(param_1 + -0x1e8),*(param_1 + 0x178) + 0xa4U & 0xffff,0x80,0,0,0,0);
                                iVar5 = 0;
                            }
code_r0x0800fce0:
                            if (-1 < iVar5) goto code_r0x0800fce4;
                            uVar21 = *arg1;
                            pcVar8 = "Detect LRA impedance failed, rc=%d\n";
                            goto code_r0x0800fc14;
                        }
                    }
                    _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar13,iVar5);
                }
            }
            uVar21 = *arg1;
            pcVar8 = "Detect LRA frequency failed, rc=%d\n";
        }
code_r0x0800fc14:
        _dev_err(uVar21,pcVar8,iVar5);
    }
code_r0x0800fce4:
    param_3 = &uStack_e0;
    uStack_e0 = CONCAT71(uStack_e0._1_7_,7);
    uVar13 = *(param_1 + 0x178) + 0x66U & 0xffff;
    iVar6 = regmap_bulk_write(*(param_1 + -0x1e8),uVar13,param_3,1);
    if (iVar6 < 0) {
        param_3 = uVar13;
        _dev_err(*arg1,"write addr %#x failed, rc=%d\n",param_3,iVar6);
    }
    *(param_1 + -0xf8) = 0;
    mutex_unlock(param_1 + -0x138);
    iVar7 = iVar5;
    if (-1 < iVar5) {
        iVar7 = param_4;
    }
code_r0x0800fd28:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_70) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = 0x8010180;
        uVar13 = *(iVar7 + -0x1ac);
        if (uVar13 == 0) {
            iVar7 = -0x16;
        }
        else {
            uVar14 = 0;
            if (uVar13 != 0) {
                uVar14 = 10000000 / uVar13;
            }
            iVar5 = scnprintf(param_3,0x1000,"%d Hz\n",uVar14);
            iVar7 = iVar5;
        }
        return iVar7;
    }
    return iVar7;
}


// ===== sym.primitive_duration_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006970 (size 8) =====

int64_t sym.primitive_duration_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint16_t *puVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint16_t auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    puVar5 = auStack_2c;
    auStack_2c[0] = 0;
    iVar3 = kstrtou16(param_3,0,puVar5);
    if (iVar3 != 0) {
        param_4 = -0x16;
        goto code_r0x080103f0;
    }
    iVar3 = *(param_1 + 0x174);
    if (iVar3 == 0) {
        iVar6 = 0;
code_r0x08010374:
        if (iVar6 != iVar3) {
            iVar4 = *(param_1 + -0x168);
            iVar8 = *(iVar4 + iVar6 * 0x30 + 0x10);
            iVar7 = iVar6;
            if (iVar8 == 0) {
                iVar3 = 0;
            }
            else {
                iVar3 = *(iVar8 + 0x14);
            }
            uVar1 = *(iVar4 + iVar7 * 0x30 + 0x24);
            if ((uVar1 & 0xfffffffe) == 2) {
                iVar4 = *(iVar4 + iVar7 * 0x30);
                if (iVar4 != 0) {
                    iVar6 = *(iVar4 + 100);
code_r0x080103e8:
                    iVar3 = iVar6 + iVar3;
                }
            }
            else if ((uVar1 == 0) && (iVar4 = *(iVar4 + iVar7 * 0x30 + 8), iVar4 != 0)) {
                iVar6 = *(iVar4 + 0x10);
                goto code_r0x080103e8;
            }
            *(param_1 + 0x18c) = iVar3;
            goto code_r0x080103f0;
        }
    }
    else {
        iVar6 = 0;
        do {
            if (*(*(param_1 + -0x168) + iVar6 * 0x30 + 0x18) == auStack_2c[0]) goto code_r0x08010374;
            iVar6 = iVar6 + 1;
        } while (iVar3 != iVar6);
    }
    _printk(0x800271d);
    param_4 = -0x16;
code_r0x080103f0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.xiaomi_f0_get;
        uVar1 = *(iVar4 + -0x1ac);
        if (uVar1 == 0) {
            iVar4 = -0x16;
        }
        else {
            uVar2 = 0;
            if (uVar1 != 0) {
                uVar2 = 10000000 / uVar1;
            }
            iVar3 = scnprintf(puVar5,0x1000,"%d Hz\n",uVar2);
            iVar4 = iVar3;
        }
        return iVar4;
    }
    return param_4;
}


// ===== sym.mi_custom_vmax_ctrl_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006978 (size 8) =====

int64_t sym.mi_custom_vmax_ctrl_store.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar3 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtouint(param_3,0,puVar3);
    if (iVar1 == 0) {
        puVar3 = uStack_2c;
        *(*(param_1 + -0x160) + 0x1c) = uStack_2c;
        _dev_info(*(param_1 + -0x1f0),"mi_custom_vmax_ctrl_store: vmax %d.\n");
    }
    else {
        param_4 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_4;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mi_f0_check_show;
    iVar1 = scnprintf(puVar3,0x1000,0x8002719,*(iVar2 + -0x180));
    return iVar1;
}


// ===== sym.perf_trace_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006980 (size 8) =====

void sym.perf_trace_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (uint64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uchar uVar6;
    uchar uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iStack_68 = *(iVar9 + 0x5e0);
    uVar7 = param_4;
    uVar6 = SUB81(param_3,0);
    iStack_70 = 0;
    uStack_74 = 0;
    iVar8 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(param_1 + 0x78);
    if ((*(param_1 + 0x80) != 0) || (*piVar1 != 0)) {
        param_3 = &uStack_74;
        iVar4 = (iVar8 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_70,param_3);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = auStack_80;
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,pcVar2);
            param_3 = uStack_74;
            param_5 = 1;
            *(iVar9 + 0xc) = uVar6;
            *(iVar9 + 0xd) = uVar7;
            perf_trace_run_bpf_submit(iVar9,iVar4,param_3,param_1,1,iStack_70,piVar1,0);
            param_4 = param_1;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    auVar11 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8007438;
    bpf_trace_run4(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,param_3 & 0xffffffff,param_4 & 1,
                   param_5 & 1);
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006988 (size 8) =====

void sym.__bpf_trace_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (ulong param_1,ulong param_2,uchar param_3,uchar param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.trace_event_raw_event_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006990 (size 8) =====

//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_status.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
               (int64_t param_1,char *param_2,uint32_t *param_3,uint64_t param_4,uint64_t param_5)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(param_1 + 0x48);
    uVar11 = param_4;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar10 = param_3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar11 = 0;
            event_triggers_call(param_1,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(param_1), (uVar8 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar2 = "(null)";
    if (param_2 != NULL) {
        pcVar2 = param_2;
    }
    iVar7 = strlen(pcVar2);
    puVar10 = iVar7 + 1 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,param_1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar9 + 0xe,pcVar2);
        *(iVar9 + 0xc) = param_3;
        *(iVar9 + 0xd) = param_4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08007284:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_haptics_status;
    pcStack_d8 = sym.perf_trace_qcom_haptics_status;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar2 = auVar13._8_8_;
    }
    iStack_e8 = *(iVar9 + 0x5e0);
    uVar6 = uVar11;
    uVar5 = SUB81(puVar10,0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &uStack_f4;
        iVar3 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar10);
        if (iVar9 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar11) & 0x80072bc;
            *(iStack_f0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,pcVar2);
            puVar10 = uStack_f4;
            param_5 = 1;
            *(iVar9 + 0xc) = uVar5;
            *(iVar9 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar10,uVar8,1,iStack_f0,piVar1,0);
            uVar11 = uVar8;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_e8) {
        auVar13 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar11 & 1,
                       param_5 & 1);
        return;
    }
    return;
}


// ===== sym.swr_slave_reg_is_enabled.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x08006998 (size 8) =====

uchar sym.swr_slave_reg_is_enabled.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x38d);
}


// ===== sym.swr_slave_reg_enable.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080069a0 (size 8) =====

ulong sym.swr_slave_reg_enable.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(void)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar *puVar6;
    code *pcVar7;
    ushort uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    puVar6 = &stack0xffffffffffffffe0;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar3 + 8),*(iVar3 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar3 + 0x378) >> 4 & 1) != 0) {
        uStack_2c = 0;
        iVar2 = sym.haptics_get_status_data(iVar3,5,&uStack_2c);
        uVar1 = *(iVar3 + 0x368) + 0x4bU & 0xffff;
        if ((iVar2 < 0) || ((uStack_2c._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar3 + 8),uVar1,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar3 + 8),uVar1,0x10,0x10,0,0,0);
            uVar4 = sym.haptics_toggle_module_enable(iVar3);
            if (uVar4 < 0) goto code_r0x0800d8c0;
        }
    }
    uVar4 = 0;
    *(iVar3 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar4);
        *extraout_x18 = sym.swr_slave_reg_disable;
        pcVar7 = sym.swr_slave_reg_disable;
        iVar5 = rdev_get_drvdata();
        regmap_update_bits_base
                  (*(iVar5 + 8),*(iVar5 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0,in_x7,puVar6,pcVar7,iVar3);
        *(iVar5 + 0x38d) = 0;
        return 0;
    }
    return uVar4;
}


// ===== sym.swr_slave_reg_disable.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt @ 0x080069a8 (size 8) =====

ulong sym.swr_slave_reg_disable.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar1 + 8),*(iVar1 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0);
    *(iVar1 + 0x38d) = 0;
    return 0;
}


// ===== sym.__traceiter_qcom_haptics_fifo_hw_status @ 0x080069b0 (size 128) =====

ulong sym.__traceiter_qcom_haptics_fifo_hw_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t in_w4;
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8012b48 != NULL) {
        piVar1 = *0x8012b48;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 1,in_w4 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_qcom_haptics_fifo_prgm_status @ 0x08006a38 (size 112) =====

ulong sym.__traceiter_qcom_haptics_fifo_prgm_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8012b90 != NULL) {
        piVar1 = *0x8012b90;
        do {
            (**piVar1)(piVar1[1],arg2 & 0xffffffff,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_qcom_haptics_play @ 0x08006ab0 (size 88) =====

ulong sym.__traceiter_qcom_haptics_play(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8012bd8 != NULL) {
        piVar1 = *0x8012bd8;
        do {
            (**piVar1)(piVar1[1],arg2 & 1);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.__traceiter_qcom_haptics_status @ 0x08006b10 (size 112) =====

ulong sym.__traceiter_qcom_haptics_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8012c20 != NULL) {
        piVar1 = *0x8012c20;
        do {
            (**piVar1)(piVar1[1],arg2,arg3 & 0xffffffff,arg4 & 0xffffffff);
            piVar1 = piVar1 + 3;
        } while (*piVar1 != 0);
    }
    return 0;
}


// ===== sym.trace_event_raw_event_qcom_haptics_fifo_hw_status @ 0x08006b88 (size 232) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x08006d44)
//WARNING: Removing unreachable block (ram,0x08006f5c)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_fifo_hw_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    uint64_t in_x4;
    uint64_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ulong *extraout_x18_06;
    uint64_t uVar18;
    uint32_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint64_t uVar23;
    ulong uVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auStack_390 [12];
    uint32_t uStack_384;
    int64_t iStack_380;
    int64_t iStack_378;
    ulong **ppuStack_370;
    code *pcStack_368;
    ulong uStack_308;
    ulong uStack_300;
    ulong uStack_2f8;
    ulong uStack_2f0;
    ulong uStack_2e8;
    ulong uStack_2e0;
    int64_t iStack_2d8;
    ulong **ppuStack_2d0;
    ulong uStack_2c8;
    int64_t *piStack_2c0;
    code *pcStack_2b0;
    uint64_t uStack_2a8;
    int64_t *piStack_2a0;
    uint64_t uStack_298;
    uchar auStack_290 [12];
    uint32_t uStack_284;
    int64_t iStack_280;
    int64_t iStack_278;
    ulong **ppuStack_270;
    code *pcStack_268;
    uint64_t uStack_260;
    ulong uStack_258;
    int64_t iStack_250;
    uint64_t uStack_248;
    ulong uStack_238;
    ulong uStack_230;
    ulong uStack_228;
    ulong uStack_220;
    ulong uStack_218;
    ulong uStack_210;
    int64_t iStack_208;
    ulong **ppuStack_200;
    ulong uStack_1f8;
    uint64_t uStack_1f0;
    uint64_t uStack_1e0;
    uint64_t uStack_1d8;
    uchar auStack_1d0 [12];
    uint32_t uStack_1c4;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong **ppuStack_1b0;
    code *pcStack_1a8;
    uint64_t uStack_1a0;
    ulong uStack_198;
    int64_t iStack_190;
    uint64_t uStack_188;
    uint64_t uStack_180;
    uint64_t uStack_178;
    ulong uStack_168;
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    uchar **ppuStack_130;
    ulong uStack_128;
    int64_t *piStack_120;
    uint64_t uStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    uchar auStack_f0 [12];
    uint32_t uStack_e4;
    int64_t iStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar19 = *(arg1 + 0x48);
    uVar15 = arg4;
    uVar16 = in_x4;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar12 = arg3;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(arg1), (uVar8 & 1) == 0))))
        goto code_r0x08006c08;
    }
    else {
code_r0x08006c08:
        puVar12 = 0x14;
        iVar9 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar9 != 0) {
            *(iVar9 + 8) = arg2;
            *(iVar9 + 0xc) = arg3;
            *(iVar9 + 0x10) = arg4 & 1;
            *(iVar9 + 0x11) = in_x4 & 1;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar11 = auVar25._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_haptics_fifo_hw_status;
    pcStack_c8 = sym.perf_trace_qcom_haptics_fifo_hw_status;
    iVar9 = sp_el0;
    iStack_d8 = *(iVar9 + 0x5e0);
    uVar22 = uVar16 & 0xffffffff;
    uVar18 = puVar12 & 0xffffffff;
    uVar20 = auVar25._8_8_ & 0xffffffff;
    iStack_e0 = 0;
    uStack_e4 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar11 + 0x78);
    uVar8 = uVar15;
    uVar17 = uVar16;
    puStack_d0 = &stack0xffffffffffffffc0;
    if ((*(uVar11 + 0x80) != 0) || (puVar13 = puVar12, *piVar1 != 0)) {
        puVar13 = &uStack_e4;
        iVar9 = perf_trace_buf_alloc(0x14,&iStack_e0);
        uVar21 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_e0 + 0xe8) = &puStack_d0;
            puVar13 = uStack_e4;
            uVar17 = 1;
            *(iStack_e0 + 0xf8) = auStack_f0;
            *(iStack_e0 + 0x100) = ~(-1L << (uVar21 & 0x3f)) & 0x8006c70;
            *(iStack_e0 + 0x108) = 5;
            *(iVar9 + 8) = auVar25._8_4_;
            *(iVar9 + 0xc) = puVar12;
            *(iVar9 + 0x10) = uVar15 & 1;
            *(iVar9 + 0x11) = uVar16 & 1;
            uVar8 = uVar11;
            perf_trace_run_bpf_submit(iVar9,0x14,puVar13,uVar11,1,iStack_e0,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar10 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_00 = 0x8006dac;
    uStack_128 = 0x8006dac;
    iVar9 = sp_el0;
    iStack_138 = *(iVar9 + 0x5e0);
    uVar21 = auVar25._8_8_ & 0xffffffff;
    uVar24 = *(iVar10 + 0x48);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uVar19 = uVar24;
    uVar16 = uVar8;
    ppuStack_130 = &puStack_d0;
    piStack_120 = piVar1;
    uStack_110 = uVar22;
    uStack_108 = uVar20;
    uStack_100 = uVar18;
    uStack_f8 = uVar11;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar12 = puVar13;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar11 = trace_event_ignore_this_pid(iVar10), (uVar11 & 1) == 0))))
        goto code_r0x08006e34;
    }
    else {
code_r0x08006e34:
        puVar12 = 0x14;
        iVar9 = trace_event_buffer_reserve(&uStack_168,iVar10);
        if (iVar9 != 0) {
            *(iVar9 + 8) = auVar25._8_4_;
            *(iVar9 + 0xc) = puVar13;
            *(iVar9 + 0x10) = uVar8;
            trace_event_buffer_commit(&uStack_168);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_138) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar18 = auVar25._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    pcStack_1a8 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    iVar9 = sp_el0;
    iStack_1b8 = *(iVar9 + 0x5e0);
    uVar20 = uVar16 & 0xffffffff;
    uVar22 = puVar12 & 0xffffffff;
    uVar23 = auVar25._8_8_ & 0xffffffff;
    iStack_1c0 = 0;
    uStack_1c4 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar18 + 0x78);
    uVar11 = uVar16;
    ppuStack_1b0 = &ppuStack_130;
    uStack_1a0 = uVar15 & 0xffffffff;
    uStack_198 = uVar24;
    iStack_190 = iVar10;
    uStack_188 = uVar21;
    uStack_180 = puVar13 & 0xffffffff;
    uStack_178 = uVar8 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar14 = puVar12, *piVar1 != 0)) {
        puVar14 = &uStack_1c4;
        iVar9 = perf_trace_buf_alloc(0x14,&iStack_1c0);
        uVar15 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_1c0 + 0xe8) = &ppuStack_1b0;
            puVar14 = uStack_1c4;
            uVar17 = 1;
            *(iStack_1c0 + 0xf8) = auStack_1d0;
            *(iStack_1c0 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8006e90;
            *(iStack_1c0 + 0x108) = 5;
            *(iVar9 + 8) = auVar25._8_4_;
            *(iVar9 + 0xc) = puVar12;
            *(iVar9 + 0x10) = uVar16;
            uVar11 = uVar18;
            perf_trace_run_bpf_submit(iVar9,0x14,puVar14,uVar18,1,iStack_1c0,piVar1,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_1b8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar10 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_02 = 0x8006fb4;
    uStack_1f8 = 0x8006fb4;
    iVar9 = sp_el0;
    uVar15 = auVar25._8_8_ & 0xffffffff;
    iStack_208 = *(iVar9 + 0x5e0);
    uVar24 = *(iVar10 + 0x48);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    uVar19 = uVar24;
    ppuStack_200 = &ppuStack_1b0;
    uStack_1f0 = uVar22;
    uStack_1e0 = uVar20;
    uStack_1d8 = uVar18;
    if ((uVar19 >> 8 & 1) == 0) {
        if ((uVar19 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) == 0) &&
           (((uVar19 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar14 = 0xc;
        iVar9 = trace_event_buffer_reserve(&uStack_238,iVar10);
        if (iVar9 != 0) {
            *(iVar9 + 8) = auVar25[8] & 1;
            trace_event_buffer_commit(&uStack_238);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_208) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar16 = auVar25._0_8_;
    *extraout_x18_03 = sym.perf_trace_qcom_haptics_play;
    pcStack_268 = sym.perf_trace_qcom_haptics_play;
    iVar9 = sp_el0;
    iStack_278 = *(iVar9 + 0x5e0);
    uVar8 = auVar25._8_8_ & 0xffffffff;
    iStack_280 = 0;
    uStack_284 = 0;
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(uVar16 + 0x78);
    ppuStack_270 = &ppuStack_200;
    uStack_260 = uVar23;
    uStack_258 = uVar24;
    iStack_250 = iVar10;
    uStack_248 = uVar15;
    if ((*(uVar16 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar14 = &uStack_284;
        iVar9 = perf_trace_buf_alloc(0xc,&iStack_280);
        uVar15 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_280 + 0xe8) = &ppuStack_270;
            puVar14 = uStack_284;
            uVar17 = 1;
            *(iStack_280 + 0xf8) = auStack_290;
            *(iStack_280 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8007088;
            *(iStack_280 + 0x108) = 5;
            *(iVar9 + 8) = auVar25[8] & 1;
            uVar11 = uVar16;
            perf_trace_run_bpf_submit(iVar9,0xc,puVar14,uVar16,1,iStack_280,piVar2,0);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_278) {
        return;
    }
    auVar25 = __stack_chk_fail();
    iVar10 = auVar25._0_8_;
    uVar24 = tpidr_el2;
    *extraout_x18_04 = 0x800719c;
    uStack_2c8 = 0x800719c;
    pcStack_2b0 = sym.perf_trace_qcom_haptics_play;
    iVar9 = sp_el0;
    iStack_2d8 = *(iVar9 + 0x5e0);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_300 = 0;
    uVar19 = *(iVar10 + 0x48);
    uVar15 = uVar11;
    ppuStack_2d0 = &ppuStack_270;
    piStack_2c0 = piVar1;
    uStack_2a8 = uVar8;
    piStack_2a0 = piVar2;
    uStack_298 = uVar16;
    if ((uVar19 >> 8 & 1) == 0) {
        puVar12 = puVar14;
        if ((uVar19 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar19 >> 6 & 1) != 0) ||
           (((uVar19 >> 9 & 1) != 0 && (uVar16 = trace_event_ignore_this_pid(iVar10), (uVar16 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar25._8_8_ != NULL) {
        pcVar3 = auVar25._8_8_;
    }
    iVar7 = strlen(pcVar3);
    puVar12 = iVar7 + 1 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_308,iVar10);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar9 + 0xe,pcVar3);
        *(iVar9 + 0xc) = puVar14;
        *(iVar9 + 0xd) = uVar11;
        trace_event_buffer_commit(&uStack_308);
    }
code_r0x08007284:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_2d8) {
        return;
    }
    auVar25 = __stack_chk_fail();
    uVar16 = auVar25._0_8_;
    *extraout_x18_05 = sym.perf_trace_qcom_haptics_status;
    pcStack_368 = sym.perf_trace_qcom_haptics_status;
    iVar9 = sp_el0;
    pcVar3 = "(null)";
    if (auVar25._8_8_ != NULL) {
        pcVar3 = auVar25._8_8_;
    }
    iStack_378 = *(iVar9 + 0x5e0);
    uVar6 = uVar15;
    uVar5 = SUB81(puVar12,0);
    iStack_380 = 0;
    uStack_384 = 0;
    ppuStack_370 = &ppuStack_2d0;
    iVar7 = strlen(pcVar3);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_384;
        iVar4 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&iStack_380,puVar12);
        if (iVar9 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_380 + 0xe8) = &ppuStack_370;
            *(iStack_380 + 0xf8) = auStack_390;
            *(iStack_380 + 0x100) = ~(-1L << uVar15) & 0x80072bc;
            *(iStack_380 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,pcVar3);
            puVar12 = uStack_384;
            uVar17 = 1;
            *(iVar9 + 0xc) = uVar5;
            *(iVar9 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar4,puVar12,uVar16,1,iStack_380,piVar1,0);
            uVar15 = uVar16;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_378) {
        auVar25 = __stack_chk_fail();
        uVar24 = tpidr_el2;
        *extraout_x18_06 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar25._0_8_,auVar25._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar15 & 1,
                       uVar17 & 1);
        return;
    }
    return;
}


// ===== sym.perf_trace_qcom_haptics_fifo_hw_status @ 0x08006c70 (size 328) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x08006f5c)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.perf_trace_qcom_haptics_fifo_hw_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    uchar *puVar12;
    uint64_t in_x4;
    uint64_t uVar13;
    uint64_t uVar14;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    uint64_t uVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    ulong uVar23;
    uint64_t unaff_x30;
    uchar auVar24 [16];
    uchar auStack_310 [12];
    uint32_t uStack_304;
    int64_t iStack_300;
    int64_t iStack_2f8;
    uchar *puStack_2f0;
    code *pcStack_2e8;
    ulong uStack_288;
    ulong uStack_280;
    ulong uStack_278;
    ulong uStack_270;
    ulong uStack_268;
    ulong uStack_260;
    int64_t iStack_258;
    uchar *puStack_250;
    ulong uStack_248;
    int64_t *piStack_240;
    code *pcStack_230;
    uint64_t uStack_228;
    int64_t *piStack_220;
    uint64_t uStack_218;
    uchar auStack_210 [12];
    uint32_t uStack_204;
    int64_t iStack_200;
    int64_t iStack_1f8;
    uchar *puStack_1f0;
    code *pcStack_1e8;
    uint64_t uStack_1e0;
    ulong uStack_1d8;
    int64_t iStack_1d0;
    uint64_t uStack_1c8;
    ulong uStack_1b8;
    ulong uStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar *puStack_180;
    ulong uStack_178;
    uint64_t uStack_170;
    uint64_t uStack_160;
    uint64_t uStack_158;
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    uint64_t uStack_120;
    ulong uStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    ulong uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_90;
    uint64_t uStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uchar auStack_70 [12];
    uint32_t uStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar21 = in_x4 & 0xffffffff;
    uVar16 = arg3 & 0xffffffff;
    uVar18 = arg2 & 0xffffffff;
    iStack_60 = 0;
    uStack_64 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(arg1 + 0x78);
    uVar15 = arg4;
    uVar13 = in_x4;
    if ((*(arg1 + 0x80) != 0) || (puVar10 = arg3, *piVar1 != 0)) {
        puVar10 = &stack0xffffffffffffff9c;
        iVar8 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffa0);
        uVar14 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_60 + 0xe8) = &stack0xffffffffffffffb0;
            puVar10 = uStack_64;
            uVar14 = -1L << (uVar14 & 0x3f);
            uVar13 = 1;
            uVar15 = (~uVar14 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar15 = uVar14 | unaff_x30;
            }
            *(iStack_60 + 0xf8) = &stack0xffffffffffffff90;
            *(iStack_60 + 0x100) = uVar15;
            *(iStack_60 + 0x108) = 5;
            *(iVar8 + 8) = arg2;
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4 & 1;
            *(iVar8 + 0x11) = in_x4 & 1;
            uVar15 = arg1;
            perf_trace_run_bpf_submit(iVar8,0x14,puVar10,arg1,1,iStack_60,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar9 = auVar24._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18 = 0x8006dac;
    uStack_a8 = 0x8006dac;
    iVar8 = sp_el0;
    iStack_b8 = *(iVar8 + 0x5e0);
    uVar19 = auVar24._8_8_ & 0xffffffff;
    uVar23 = *(iVar9 + 0x48);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uVar17 = uVar23;
    uVar14 = uVar15;
    puStack_b0 = &stack0xffffffffffffffb0;
    piStack_a0 = piVar1;
    uStack_90 = uVar21;
    uStack_88 = uVar18;
    uStack_80 = uVar16;
    iStack_78 = arg1;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar14 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar16 = trace_event_ignore_this_pid(iVar9), (uVar16 & 1) == 0))))
        goto code_r0x08006e34;
    }
    else {
code_r0x08006e34:
        puVar11 = 0x14;
        iVar8 = trace_event_buffer_reserve(&stack0xffffffffffffff18,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar24._8_4_;
            *(iVar8 + 0xc) = puVar10;
            *(iVar8 + 0x10) = uVar15;
            trace_event_buffer_commit(&stack0xffffffffffffff18);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_b8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar18 = auVar24._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    pcStack_128 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    iVar8 = sp_el0;
    iStack_138 = *(iVar8 + 0x5e0);
    uVar21 = uVar14 & 0xffffffff;
    uVar20 = puVar11 & 0xffffffff;
    uVar22 = auVar24._8_8_ & 0xffffffff;
    iStack_140 = 0;
    uStack_144 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar18 + 0x78);
    uVar16 = uVar14;
    puStack_130 = &stack0xffffffffffffff50;
    uStack_120 = arg4 & 0xffffffff;
    uStack_118 = uVar23;
    iStack_110 = iVar9;
    uStack_108 = uVar19;
    uStack_100 = puVar10 & 0xffffffff;
    uStack_f8 = uVar15 & 0xffffffff;
    if ((*(uVar18 + 0x80) != 0) || (puVar12 = puVar11, *piVar1 != 0)) {
        puVar12 = &stack0xfffffffffffffebc;
        iVar8 = perf_trace_buf_alloc(0x14,&stack0xfffffffffffffec0);
        uVar15 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_140 + 0xe8) = &stack0xfffffffffffffed0;
            puVar12 = uStack_144;
            uVar13 = 1;
            *(iStack_140 + 0xf8) = &stack0xfffffffffffffeb0;
            *(iStack_140 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8006e90;
            *(iStack_140 + 0x108) = 5;
            *(iVar8 + 8) = auVar24._8_4_;
            *(iVar8 + 0xc) = puVar11;
            *(iVar8 + 0x10) = uVar14;
            uVar16 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0x14,puVar12,uVar18,1,iStack_140,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_138) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar9 = auVar24._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_01 = 0x8006fb4;
    uStack_178 = 0x8006fb4;
    iVar8 = sp_el0;
    uVar15 = auVar24._8_8_ & 0xffffffff;
    iStack_188 = *(iVar8 + 0x5e0);
    uVar23 = *(iVar9 + 0x48);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uVar17 = uVar23;
    puStack_180 = &stack0xfffffffffffffed0;
    uStack_170 = uVar20;
    uStack_160 = uVar21;
    uStack_158 = uVar18;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar16 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar18 = trace_event_ignore_this_pid(iVar9), (uVar18 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar12 = 0xc;
        iVar8 = trace_event_buffer_reserve(&stack0xfffffffffffffe48,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar24[8] & 1;
            trace_event_buffer_commit(&stack0xfffffffffffffe48);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_188) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar18 = auVar24._0_8_;
    *extraout_x18_02 = sym.perf_trace_qcom_haptics_play;
    pcStack_1e8 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_1f8 = *(iVar8 + 0x5e0);
    uVar21 = auVar24._8_8_ & 0xffffffff;
    iStack_200 = 0;
    uStack_204 = 0;
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(uVar18 + 0x78);
    puStack_1f0 = &stack0xfffffffffffffe80;
    uStack_1e0 = uVar22;
    uStack_1d8 = uVar23;
    iStack_1d0 = iVar9;
    uStack_1c8 = uVar15;
    if ((*(uVar18 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar12 = &stack0xfffffffffffffdfc;
        iVar8 = perf_trace_buf_alloc(0xc,&stack0xfffffffffffffe00);
        uVar15 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_200 + 0xe8) = &stack0xfffffffffffffe10;
            puVar12 = uStack_204;
            uVar13 = 1;
            *(iStack_200 + 0xf8) = &stack0xfffffffffffffdf0;
            *(iStack_200 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8007088;
            *(iStack_200 + 0x108) = 5;
            *(iVar8 + 8) = auVar24[8] & 1;
            uVar16 = uVar18;
            perf_trace_run_bpf_submit(iVar8,0xc,puVar12,uVar18,1,iStack_200,piVar2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_1f8) {
        return;
    }
    auVar24 = __stack_chk_fail();
    iVar9 = auVar24._0_8_;
    uVar23 = tpidr_el2;
    *extraout_x18_03 = 0x800719c;
    uStack_248 = 0x800719c;
    pcStack_230 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_258 = *(iVar8 + 0x5e0);
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    uVar17 = *(iVar9 + 0x48);
    uVar15 = uVar16;
    puStack_250 = &stack0xfffffffffffffe10;
    piStack_240 = piVar1;
    uStack_228 = uVar21;
    piStack_220 = piVar2;
    uStack_218 = uVar18;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar10 = puVar12;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar18 = trace_event_ignore_this_pid(iVar9), (uVar18 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar3 = auVar24._8_8_;
    }
    iVar7 = strlen(pcVar3);
    puVar10 = iVar7 + 1 + 0x10;
    iVar8 = trace_event_buffer_reserve(&stack0xfffffffffffffd78,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar8 + 0xe,pcVar3);
        *(iVar8 + 0xc) = puVar12;
        *(iVar8 + 0xd) = uVar16;
        trace_event_buffer_commit(&stack0xfffffffffffffd78);
    }
code_r0x08007284:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_258) {
        return;
    }
    auVar24 = __stack_chk_fail();
    uVar16 = auVar24._0_8_;
    *extraout_x18_04 = sym.perf_trace_qcom_haptics_status;
    pcStack_2e8 = sym.perf_trace_qcom_haptics_status;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar24._8_8_ != NULL) {
        pcVar3 = auVar24._8_8_;
    }
    iStack_2f8 = *(iVar8 + 0x5e0);
    uVar6 = uVar15;
    uVar5 = SUB81(puVar10,0);
    iStack_300 = 0;
    uStack_304 = 0;
    puStack_2f0 = &stack0xfffffffffffffdb0;
    iVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar16 + 0x78);
    if ((*(uVar16 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &stack0xfffffffffffffcfc;
        iVar4 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&stack0xfffffffffffffd00,puVar10);
        if (iVar8 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_300 + 0xe8) = &stack0xfffffffffffffd10;
            *(iStack_300 + 0xf8) = &stack0xfffffffffffffcf0;
            *(iStack_300 + 0x100) = ~(-1L << uVar15) & 0x80072bc;
            *(iStack_300 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar8 + 0xe,pcVar3);
            puVar10 = uStack_304;
            uVar13 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar10,uVar16,1,iStack_300,piVar1,0);
            uVar15 = uVar16;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_2f8) {
        auVar24 = __stack_chk_fail();
        uVar23 = tpidr_el2;
        *extraout_x18_05 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar24._0_8_,auVar24._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar15 & 1,
                       uVar13 & 1);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qcom_haptics_fifo_prgm_status @ 0x08006db8 (size 216) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x08006f5c)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_fifo_prgm_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    uint64_t uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    uint64_t in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    ulong uVar19;
    uint64_t uVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uchar auStack_2a0 [12];
    uint32_t uStack_294;
    int64_t iStack_290;
    int64_t iStack_288;
    ulong **ppuStack_280;
    code *pcStack_278;
    ulong uStack_218;
    ulong uStack_210;
    ulong uStack_208;
    ulong uStack_200;
    ulong uStack_1f8;
    ulong uStack_1f0;
    int64_t iStack_1e8;
    ulong **ppuStack_1e0;
    ulong uStack_1d8;
    int64_t *piStack_1d0;
    code *pcStack_1c0;
    uint64_t uStack_1b8;
    int64_t *piStack_1b0;
    uint64_t uStack_1a8;
    uchar auStack_1a0 [12];
    uint32_t uStack_194;
    int64_t iStack_190;
    int64_t iStack_188;
    ulong **ppuStack_180;
    code *pcStack_178;
    uint64_t uStack_170;
    ulong uStack_168;
    int64_t iStack_160;
    uint64_t uStack_158;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    int64_t iStack_118;
    uchar **ppuStack_110;
    ulong uStack_108;
    uint64_t uStack_100;
    uint64_t uStack_f0;
    uint64_t uStack_e8;
    uchar auStack_e0 [12];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar17 = *(arg1 + 0x48);
    uVar15 = arg4;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar13 = arg3;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar13 = NULL;
            uVar15 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar9 = trace_event_ignore_this_pid(arg1), (uVar9 & 1) == 0))))
        goto code_r0x08006e34;
    }
    else {
code_r0x08006e34:
        puVar13 = 0x14;
        iVar10 = trace_event_buffer_reserve(&uStack_78,arg1);
        if (iVar10 != 0) {
            *(iVar10 + 8) = arg2;
            *(iVar10 + 0xc) = arg3;
            *(iVar10 + 0x10) = arg4;
            trace_event_buffer_commit(&uStack_78);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar12 = auVar21._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    pcStack_b8 = sym.perf_trace_qcom_haptics_fifo_prgm_status;
    iVar10 = sp_el0;
    iStack_c8 = *(iVar10 + 0x5e0);
    uVar16 = uVar15 & 0xffffffff;
    uVar18 = puVar13 & 0xffffffff;
    uVar20 = auVar21._8_8_ & 0xffffffff;
    iStack_d0 = 0;
    uStack_d4 = 0;
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar12 + 0x78);
    uVar9 = uVar15;
    puStack_c0 = &stack0xffffffffffffffc0;
    if ((*(uVar12 + 0x80) != 0) || (puVar14 = puVar13, *piVar1 != 0)) {
        puVar14 = &uStack_d4;
        iVar10 = perf_trace_buf_alloc(0x14,&iStack_d0);
        uVar7 = _trace_event_raw_init;
        if (iVar10 != 0) {
            *(iStack_d0 + 0xe8) = &puStack_c0;
            puVar14 = uStack_d4;
            in_x4 = 1;
            *(iStack_d0 + 0xf8) = auStack_e0;
            *(iStack_d0 + 0x100) = ~(-1L << (uVar7 & 0x3f)) & 0x8006e90;
            *(iStack_d0 + 0x108) = 5;
            *(iVar10 + 8) = auVar21._8_4_;
            *(iVar10 + 0xc) = puVar13;
            *(iVar10 + 0x10) = uVar15;
            uVar9 = uVar12;
            perf_trace_run_bpf_submit(iVar10,0x14,puVar14,uVar12,1,iStack_d0,piVar1,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_c8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar11 = auVar21._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_00 = 0x8006fb4;
    uStack_108 = 0x8006fb4;
    iVar10 = sp_el0;
    uVar15 = auVar21._8_8_ & 0xffffffff;
    iStack_118 = *(iVar10 + 0x5e0);
    uVar19 = *(iVar11 + 0x48);
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uVar17 = uVar19;
    ppuStack_110 = &puStack_c0;
    uStack_100 = uVar18;
    uStack_f0 = uVar16;
    uStack_e8 = uVar12;
    if ((uVar17 >> 8 & 1) == 0) {
        if ((uVar17 >> 7 & 1) != 0) {
            puVar14 = NULL;
            uVar9 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar17 >> 6 & 1) == 0) &&
           (((uVar17 >> 9 & 1) == 0 || (uVar12 = trace_event_ignore_this_pid(iVar11), (uVar12 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar14 = 0xc;
        iVar10 = trace_event_buffer_reserve(&uStack_148,iVar11);
        if (iVar10 != 0) {
            *(iVar10 + 8) = auVar21[8] & 1;
            trace_event_buffer_commit(&uStack_148);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_118) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar12 = auVar21._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_haptics_play;
    pcStack_178 = sym.perf_trace_qcom_haptics_play;
    iVar10 = sp_el0;
    iStack_188 = *(iVar10 + 0x5e0);
    uVar16 = auVar21._8_8_ & 0xffffffff;
    iStack_190 = 0;
    uStack_194 = 0;
    iVar10 = tpidr_el1;
    piVar2 = iVar10 + *(uVar12 + 0x78);
    ppuStack_180 = &ppuStack_110;
    uStack_170 = uVar20;
    uStack_168 = uVar19;
    iStack_160 = iVar11;
    uStack_158 = uVar15;
    if ((*(uVar12 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar14 = &uStack_194;
        iVar10 = perf_trace_buf_alloc(0xc,&iStack_190);
        uVar15 = _trace_event_raw_init;
        if (iVar10 != 0) {
            *(iStack_190 + 0xe8) = &ppuStack_180;
            puVar14 = uStack_194;
            in_x4 = 1;
            *(iStack_190 + 0xf8) = auStack_1a0;
            *(iStack_190 + 0x100) = ~(-1L << (uVar15 & 0x3f)) & 0x8007088;
            *(iStack_190 + 0x108) = 5;
            *(iVar10 + 8) = auVar21[8] & 1;
            uVar9 = uVar12;
            perf_trace_run_bpf_submit(iVar10,0xc,puVar14,uVar12,1,iStack_190,piVar2,0);
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_188) {
        return;
    }
    auVar21 = __stack_chk_fail();
    iVar11 = auVar21._0_8_;
    uVar19 = tpidr_el2;
    *extraout_x18_02 = 0x800719c;
    uStack_1d8 = 0x800719c;
    pcStack_1c0 = sym.perf_trace_qcom_haptics_play;
    iVar10 = sp_el0;
    iStack_1e8 = *(iVar10 + 0x5e0);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uVar17 = *(iVar11 + 0x48);
    uVar15 = uVar9;
    ppuStack_1e0 = &ppuStack_180;
    piStack_1d0 = piVar1;
    uStack_1b8 = uVar16;
    piStack_1b0 = piVar2;
    uStack_1a8 = uVar12;
    if ((uVar17 >> 8 & 1) == 0) {
        puVar13 = puVar14;
        if ((uVar17 >> 7 & 1) != 0) {
            puVar13 = NULL;
            uVar15 = 0;
            event_triggers_call(iVar11,0);
        }
        if (((uVar17 >> 6 & 1) != 0) ||
           (((uVar17 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar11), (uVar12 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    iVar8 = strlen(pcVar3);
    puVar13 = iVar8 + 1 + 0x10;
    iVar10 = trace_event_buffer_reserve(&uStack_218,iVar11);
    if (iVar10 != 0) {
        *(iVar10 + 8) = (iVar8 + 1) * 0x10000 | 0xe;
        strcpy(iVar10 + 0xe,pcVar3);
        *(iVar10 + 0xc) = puVar14;
        *(iVar10 + 0xd) = uVar9;
        trace_event_buffer_commit(&uStack_218);
    }
code_r0x08007284:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_1e8) {
        return;
    }
    auVar21 = __stack_chk_fail();
    uVar9 = auVar21._0_8_;
    *extraout_x18_03 = sym.perf_trace_qcom_haptics_status;
    pcStack_278 = sym.perf_trace_qcom_haptics_status;
    iVar10 = sp_el0;
    pcVar3 = "(null)";
    if (auVar21._8_8_ != NULL) {
        pcVar3 = auVar21._8_8_;
    }
    iStack_288 = *(iVar10 + 0x5e0);
    uVar6 = uVar15;
    uVar5 = SUB81(puVar13,0);
    iStack_290 = 0;
    uStack_294 = 0;
    ppuStack_280 = &ppuStack_1e0;
    iVar8 = strlen(pcVar3);
    iVar10 = tpidr_el1;
    piVar1 = iVar10 + *(uVar9 + 0x78);
    if ((*(uVar9 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar13 = &uStack_294;
        iVar4 = (iVar8 + 0x1cU & 0xfffffff8) - 4;
        iVar10 = perf_trace_buf_alloc(iVar4,&iStack_290,puVar13);
        if (iVar10 != 0) {
            uVar15 = _trace_event_raw_init & 0x3f;
            *(iStack_290 + 0xe8) = &ppuStack_280;
            *(iStack_290 + 0xf8) = auStack_2a0;
            *(iStack_290 + 0x100) = ~(-1L << uVar15) & 0x80072bc;
            *(iStack_290 + 0x108) = 5;
            *(iVar10 + 8) = iVar8 * 0x10000 + 0x1000e;
            strcpy(iVar10 + 0xe,pcVar3);
            puVar13 = uStack_294;
            in_x4 = 1;
            *(iVar10 + 0xc) = uVar5;
            *(iVar10 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar10,iVar4,puVar13,uVar9,1,iStack_290,piVar1,0);
            uVar15 = uVar9;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_288) {
        auVar21 = __stack_chk_fail();
        uVar19 = tpidr_el2;
        *extraout_x18_04 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar21._0_8_,auVar21._8_8_ & 0xffffffff,puVar13 & 0xffffffff,uVar15 & 1,
                       in_x4 & 1);
        return;
    }
    return;
}


// ===== sym.perf_trace_qcom_haptics_fifo_prgm_status @ 0x08006e90 (size 304) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.perf_trace_qcom_haptics_fifo_prgm_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char *pcVar3;
    int iVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    uint64_t uVar12;
    uint64_t in_x4;
    uint64_t uVar13;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    ulong uVar17;
    uint64_t unaff_x30;
    uchar auVar18 [16];
    uchar auStack_220 [12];
    uint32_t uStack_214;
    int64_t iStack_210;
    int64_t iStack_208;
    uchar *puStack_200;
    code *pcStack_1f8;
    ulong uStack_198;
    ulong uStack_190;
    ulong uStack_188;
    ulong uStack_180;
    ulong uStack_178;
    ulong uStack_170;
    int64_t iStack_168;
    uchar *puStack_160;
    ulong uStack_158;
    int64_t *piStack_150;
    code *pcStack_140;
    uint64_t uStack_138;
    int64_t *piStack_130;
    uint64_t uStack_128;
    uchar auStack_120 [12];
    uint32_t uStack_114;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar *puStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    ulong uStack_e8;
    int64_t iStack_e0;
    uint64_t uStack_d8;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uint64_t uStack_80;
    uint64_t uStack_70;
    int64_t iStack_68;
    uchar auStack_60 [12];
    uint32_t uStack_54;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_48 = *(iVar8 + 0x5e0);
    uVar14 = arg4 & 0xffffffff;
    uVar16 = arg3 & 0xffffffff;
    iStack_50 = 0;
    uStack_54 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(arg1 + 0x78);
    uVar12 = arg4;
    if ((*(arg1 + 0x80) != 0) || (puVar10 = arg3, *piVar1 != 0)) {
        puVar10 = &stack0xffffffffffffffac;
        iVar8 = perf_trace_buf_alloc(0x14,&stack0xffffffffffffffb0);
        uVar13 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_50 + 0xe8) = &stack0xffffffffffffffc0;
            puVar10 = uStack_54;
            uVar13 = -1L << (uVar13 & 0x3f);
            in_x4 = 1;
            uVar12 = (~uVar13 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar12 = uVar13 | unaff_x30;
            }
            *(iStack_50 + 0xf8) = &stack0xffffffffffffffa0;
            *(iStack_50 + 0x100) = uVar12;
            *(iStack_50 + 0x108) = 5;
            *(iVar8 + 8) = arg2;
            *(iVar8 + 0xc) = arg3;
            *(iVar8 + 0x10) = arg4;
            uVar12 = arg1;
            perf_trace_run_bpf_submit(iVar8,0x14,puVar10,arg1,1,iStack_50,piVar1,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_48) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    uVar17 = tpidr_el2;
    *extraout_x18 = 0x8006fb4;
    uStack_88 = 0x8006fb4;
    iVar8 = sp_el0;
    uVar13 = auVar18._8_8_ & 0xffffffff;
    iStack_98 = *(iVar8 + 0x5e0);
    uVar17 = *(iVar9 + 0x48);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar15 = uVar17;
    puStack_90 = &stack0xffffffffffffffc0;
    uStack_80 = uVar16;
    uStack_70 = uVar14;
    iStack_68 = arg1;
    if ((uVar15 >> 8 & 1) == 0) {
        if ((uVar15 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar12 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar15 >> 6 & 1) == 0) &&
           (((uVar15 >> 9 & 1) == 0 || (uVar14 = trace_event_ignore_this_pid(iVar9), (uVar14 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        puVar10 = 0xc;
        iVar8 = trace_event_buffer_reserve(&stack0xffffffffffffff38,iVar9);
        if (iVar8 != 0) {
            *(iVar8 + 8) = auVar18[8] & 1;
            trace_event_buffer_commit(&stack0xffffffffffffff38);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar14 = auVar18._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_haptics_play;
    pcStack_f8 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_108 = *(iVar8 + 0x5e0);
    uVar16 = auVar18._8_8_ & 0xffffffff;
    iStack_110 = 0;
    uStack_114 = 0;
    iVar8 = tpidr_el1;
    piVar2 = iVar8 + *(uVar14 + 0x78);
    puStack_100 = &stack0xffffffffffffff70;
    uStack_f0 = arg2 & 0xffffffff;
    uStack_e8 = uVar17;
    iStack_e0 = iVar9;
    uStack_d8 = uVar13;
    if ((*(uVar14 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar10 = &stack0xfffffffffffffeec;
        iVar8 = perf_trace_buf_alloc(0xc,&stack0xfffffffffffffef0);
        uVar13 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_110 + 0xe8) = &stack0xffffffffffffff00;
            puVar10 = uStack_114;
            in_x4 = 1;
            *(iStack_110 + 0xf8) = &stack0xfffffffffffffee0;
            *(iStack_110 + 0x100) = ~(-1L << (uVar13 & 0x3f)) & 0x8007088;
            *(iStack_110 + 0x108) = 5;
            *(iVar8 + 8) = auVar18[8] & 1;
            uVar12 = uVar14;
            perf_trace_run_bpf_submit(iVar8,0xc,puVar10,uVar14,1,iStack_110,piVar2,0);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_108) {
        return;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._0_8_;
    uVar17 = tpidr_el2;
    *extraout_x18_01 = 0x800719c;
    uStack_158 = 0x800719c;
    pcStack_140 = sym.perf_trace_qcom_haptics_play;
    iVar8 = sp_el0;
    iStack_168 = *(iVar8 + 0x5e0);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uVar15 = *(iVar9 + 0x48);
    uVar13 = uVar12;
    puStack_160 = &stack0xffffffffffffff00;
    piStack_150 = piVar1;
    uStack_138 = uVar16;
    piStack_130 = piVar2;
    uStack_128 = uVar14;
    if ((uVar15 >> 8 & 1) == 0) {
        puVar11 = puVar10;
        if ((uVar15 >> 7 & 1) != 0) {
            puVar11 = NULL;
            uVar13 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar15 >> 6 & 1) != 0) ||
           (((uVar15 >> 9 & 1) != 0 && (uVar14 = trace_event_ignore_this_pid(iVar9), (uVar14 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar3 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar3 = auVar18._8_8_;
    }
    iVar7 = strlen(pcVar3);
    puVar11 = iVar7 + 1 + 0x10;
    iVar8 = trace_event_buffer_reserve(&stack0xfffffffffffffe68,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar8 + 0xe,pcVar3);
        *(iVar8 + 0xc) = puVar10;
        *(iVar8 + 0xd) = uVar12;
        trace_event_buffer_commit(&stack0xfffffffffffffe68);
    }
code_r0x08007284:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_168) {
        return;
    }
    auVar18 = __stack_chk_fail();
    uVar12 = auVar18._0_8_;
    *extraout_x18_02 = sym.perf_trace_qcom_haptics_status;
    pcStack_1f8 = sym.perf_trace_qcom_haptics_status;
    iVar8 = sp_el0;
    pcVar3 = "(null)";
    if (auVar18._8_8_ != NULL) {
        pcVar3 = auVar18._8_8_;
    }
    iStack_208 = *(iVar8 + 0x5e0);
    uVar6 = uVar13;
    uVar5 = SUB81(puVar11,0);
    iStack_210 = 0;
    uStack_214 = 0;
    puStack_200 = &stack0xfffffffffffffea0;
    iVar7 = strlen(pcVar3);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar11 = &stack0xfffffffffffffdec;
        iVar4 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar4,&stack0xfffffffffffffdf0,puVar11);
        if (iVar8 != 0) {
            uVar14 = _trace_event_raw_init & 0x3f;
            *(iStack_210 + 0xe8) = &stack0xfffffffffffffe00;
            *(iStack_210 + 0xf8) = &stack0xfffffffffffffde0;
            *(iStack_210 + 0x100) = ~(-1L << uVar14) & 0x80072bc;
            *(iStack_210 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar8 + 0xe,pcVar3);
            puVar11 = uStack_214;
            in_x4 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar8,iVar4,puVar11,uVar12,1,iStack_210,piVar1,0);
            uVar13 = uVar12;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_208) {
        auVar18 = __stack_chk_fail();
        uVar17 = tpidr_el2;
        *extraout_x18_03 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar11 & 0xffffffff,uVar13 & 1,
                       in_x4 & 1);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qcom_haptics_play @ 0x08006fc0 (size 200) =====

//WARNING: Removing unreachable block (ram,0x08007148)
//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_play(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t *in_x2;
    uint32_t *puVar12;
    uint64_t in_x3;
    uint64_t in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uint32_t uVar13;
    ulong unaff_x30;
    unkbyte9 Var14;
    uchar auVar15 [16];
    uchar auStack_1c0 [12];
    uint32_t uStack_1b4;
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    ulong **ppuStack_1a0;
    code *pcStack_198;
    ulong uStack_138;
    ulong uStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    ulong uStack_f8;
    uchar auStack_c0 [12];
    uint32_t uStack_b4;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar13 = *(arg1 + 0x48);
    if ((uVar13 >> 8 & 1) == 0) {
        if ((uVar13 >> 7 & 1) != 0) {
            in_x2 = NULL;
            in_x3 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar13 >> 6 & 1) == 0) &&
           (((uVar13 >> 9 & 1) == 0 || (uVar8 = trace_event_ignore_this_pid(arg1), (uVar8 & 1) == 0))))
        goto code_r0x08007030;
    }
    else {
code_r0x08007030:
        in_x2 = 0xc;
        iVar9 = trace_event_buffer_reserve(&uStack_68,arg1);
        if (iVar9 != 0) {
            *(iVar9 + 8) = arg2 & 1;
            trace_event_buffer_commit(&uStack_68);
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return;
    }
    Var14 = __stack_chk_fail();
    uVar8 = Var14;
    *extraout_x18 = sym.perf_trace_qcom_haptics_play;
    pcStack_98 = sym.perf_trace_qcom_haptics_play;
    iVar9 = sp_el0;
    iStack_a8 = *(iVar9 + 0x5e0);
    iStack_b0 = 0;
    uStack_b4 = 0;
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar8 + 0x78);
    puStack_a0 = &stack0xffffffffffffffd0;
    if ((*(uVar8 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &uStack_b4;
        iVar9 = perf_trace_buf_alloc(0xc,&iStack_b0);
        uVar11 = _trace_event_raw_init;
        if (iVar9 != 0) {
            *(iStack_b0 + 0xe8) = &puStack_a0;
            in_x2 = uStack_b4;
            in_x4 = 1;
            *(iStack_b0 + 0xf8) = auStack_c0;
            *(iStack_b0 + 0x100) = ~(-1L << (uVar11 & 0x3f)) & 0x8007088;
            *(iStack_b0 + 0x108) = 5;
            *(iVar9 + 8) = Var14 >> 0x40 & 1;
            perf_trace_run_bpf_submit(iVar9,0xc,in_x2,uVar8,1,iStack_b0,piVar1,0);
            in_x3 = uVar8;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return;
    }
    auVar15 = __stack_chk_fail();
    iVar10 = auVar15._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18_00 = 0x800719c;
    uStack_f8 = 0x800719c;
    iVar9 = sp_el0;
    iStack_108 = *(iVar9 + 0x5e0);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uVar13 = *(iVar10 + 0x48);
    uVar8 = in_x3;
    ppuStack_100 = &puStack_a0;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar12 = in_x2;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar12 = NULL;
            uVar8 = 0;
            event_triggers_call(iVar10,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar11 = trace_event_ignore_this_pid(iVar10), (uVar11 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar2 = "(null)";
    if (auVar15._8_8_ != NULL) {
        pcVar2 = auVar15._8_8_;
    }
    iVar7 = strlen(pcVar2);
    puVar12 = iVar7 + 1 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_138,iVar10);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar9 + 0xe,pcVar2);
        *(iVar9 + 0xc) = in_x2;
        *(iVar9 + 0xd) = in_x3;
        trace_event_buffer_commit(&uStack_138);
    }
code_r0x08007284:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_108) {
        return;
    }
    auVar15 = __stack_chk_fail();
    uVar11 = auVar15._0_8_;
    *extraout_x18_01 = sym.perf_trace_qcom_haptics_status;
    pcStack_198 = sym.perf_trace_qcom_haptics_status;
    iVar9 = sp_el0;
    pcVar2 = "(null)";
    if (auVar15._8_8_ != NULL) {
        pcVar2 = auVar15._8_8_;
    }
    iStack_1a8 = *(iVar9 + 0x5e0);
    uVar6 = uVar8;
    uVar5 = SUB81(puVar12,0);
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    ppuStack_1a0 = &ppuStack_100;
    iVar7 = strlen(pcVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(uVar11 + 0x78);
    if ((*(uVar11 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar12 = &uStack_1b4;
        iVar3 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_1b0,puVar12);
        if (iVar9 != 0) {
            uVar8 = _trace_event_raw_init & 0x3f;
            *(iStack_1b0 + 0xe8) = &ppuStack_1a0;
            *(iStack_1b0 + 0xf8) = auStack_1c0;
            *(iStack_1b0 + 0x100) = ~(-1L << uVar8) & 0x80072bc;
            *(iStack_1b0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,pcVar2);
            puVar12 = uStack_1b4;
            in_x4 = 1;
            *(iVar9 + 0xc) = uVar5;
            *(iVar9 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar12,uVar11,1,iStack_1b0,piVar1,0);
            uVar8 = uVar11;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_1a8) {
        auVar15 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_02 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar12 & 0xffffffff,uVar8 & 1,
                       in_x4 & 1);
        return;
    }
    return;
}


// ===== sym.perf_trace_qcom_haptics_play @ 0x08007088 (size 288) =====

//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.perf_trace_qcom_haptics_play(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char *pcVar2;
    int iVar3;
    ulong uVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uchar *in_x2;
    uchar *puVar10;
    uint64_t in_x3;
    uint64_t uVar11;
    uint64_t in_x4;
    uint64_t uVar12;
    uint64_t *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar13;
    uint64_t unaff_x30;
    uchar auVar14 [16];
    uchar auStack_150 [12];
    uint32_t uStack_144;
    int64_t iStack_140;
    int64_t iStack_138;
    uchar *puStack_130;
    code *pcStack_128;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uchar auStack_50 [12];
    uint32_t uStack_44;
    int64_t iStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_40 = 0;
    uStack_44 = 0;
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        in_x2 = &stack0xffffffffffffffbc;
        iVar8 = perf_trace_buf_alloc(0xc,&stack0xffffffffffffffc0);
        uVar11 = _trace_event_raw_init;
        if (iVar8 != 0) {
            *(iStack_40 + 0xe8) = &stack0xffffffffffffffd0;
            in_x2 = uStack_44;
            uVar12 = -1L << (uVar11 & 0x3f);
            in_x4 = 1;
            uVar11 = (~uVar12 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar11 = uVar12 | unaff_x30;
            }
            *(iStack_40 + 0xf8) = &stack0xffffffffffffffb0;
            *(iStack_40 + 0x100) = uVar11;
            *(iStack_40 + 0x108) = 5;
            *(iVar8 + 8) = arg2 & 1;
            perf_trace_run_bpf_submit(iVar8,0xc,in_x2,arg1,1,iStack_40,piVar1,0);
            in_x3 = arg1;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    auVar14 = __stack_chk_fail();
    iVar9 = auVar14._0_8_;
    uVar4 = tpidr_el2;
    *extraout_x18 = 0x800719c;
    uStack_88 = 0x800719c;
    iVar8 = sp_el0;
    iStack_98 = *(iVar8 + 0x5e0);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uVar13 = *(iVar9 + 0x48);
    uVar11 = in_x3;
    puStack_90 = &stack0xffffffffffffffd0;
    if ((uVar13 >> 8 & 1) == 0) {
        puVar10 = in_x2;
        if ((uVar13 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar11 = 0;
            event_triggers_call(iVar9,0);
        }
        if (((uVar13 >> 6 & 1) != 0) ||
           (((uVar13 >> 9 & 1) != 0 && (uVar12 = trace_event_ignore_this_pid(iVar9), (uVar12 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar2 = "(null)";
    if (auVar14._8_8_ != NULL) {
        pcVar2 = auVar14._8_8_;
    }
    iVar7 = strlen(pcVar2);
    puVar10 = iVar7 + 1 + 0x10;
    iVar8 = trace_event_buffer_reserve(&stack0xffffffffffffff38,iVar9);
    if (iVar8 != 0) {
        *(iVar8 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar8 + 0xe,pcVar2);
        *(iVar8 + 0xc) = in_x2;
        *(iVar8 + 0xd) = in_x3;
        trace_event_buffer_commit(&stack0xffffffffffffff38);
    }
code_r0x08007284:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_98) {
        return;
    }
    auVar14 = __stack_chk_fail();
    uVar12 = auVar14._0_8_;
    *extraout_x18_00 = sym.perf_trace_qcom_haptics_status;
    pcStack_128 = sym.perf_trace_qcom_haptics_status;
    iVar8 = sp_el0;
    pcVar2 = "(null)";
    if (auVar14._8_8_ != NULL) {
        pcVar2 = auVar14._8_8_;
    }
    iStack_138 = *(iVar8 + 0x5e0);
    uVar6 = uVar11;
    uVar5 = SUB81(puVar10,0);
    iStack_140 = 0;
    uStack_144 = 0;
    puStack_130 = &stack0xffffffffffffff70;
    iVar7 = strlen(pcVar2);
    iVar8 = tpidr_el1;
    piVar1 = iVar8 + *(uVar12 + 0x78);
    if ((*(uVar12 + 0x80) != 0) || (*piVar1 != 0)) {
        puVar10 = &stack0xfffffffffffffebc;
        iVar3 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar8 = perf_trace_buf_alloc(iVar3,&stack0xfffffffffffffec0,puVar10);
        if (iVar8 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_140 + 0xe8) = &stack0xfffffffffffffed0;
            *(iStack_140 + 0xf8) = &stack0xfffffffffffffeb0;
            *(iStack_140 + 0x100) = ~(-1L << uVar11) & 0x80072bc;
            *(iStack_140 + 0x108) = 5;
            *(iVar8 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar8 + 0xe,pcVar2);
            puVar10 = uStack_144;
            in_x4 = 1;
            *(iVar8 + 0xc) = uVar5;
            *(iVar8 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar8,iVar3,puVar10,uVar12,1,iStack_140,piVar1,0);
            uVar11 = uVar12;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_138) {
        auVar14 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_01 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar14._0_8_,auVar14._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar11 & 1,
                       in_x4 & 1);
        return;
    }
    return;
}


// ===== sym.trace_event_raw_event_qcom_haptics_status @ 0x080071a8 (size 276) =====

//WARNING: Removing unreachable block (ram,0x080073b0)

void sym.trace_event_raw_event_qcom_haptics_status(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    int iVar3;
    ulong uVar4;
    uchar uVar5;
    uchar uVar6;
    ulong in_tmp_ldXn;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t in_x4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar auStack_100 [12];
    uint32_t uStack_f4;
    int64_t iStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_48 = *(iVar9 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uVar12 = *(arg1 + 0x48);
    uVar11 = arg4;
    if ((uVar12 >> 8 & 1) == 0) {
        puVar10 = arg3;
        if ((uVar12 >> 7 & 1) != 0) {
            puVar10 = NULL;
            uVar11 = 0;
            event_triggers_call(arg1,0);
        }
        if (((uVar12 >> 6 & 1) != 0) ||
           (((uVar12 >> 9 & 1) != 0 && (uVar8 = trace_event_ignore_this_pid(arg1), (uVar8 & 1) != 0))))
        goto code_r0x08007284;
    }
    pcVar1 = "(null)";
    if (arg2 != 0) {
        pcVar1 = arg2;
    }
    iVar7 = strlen(pcVar1);
    puVar10 = iVar7 + 1 + 0x10;
    iVar9 = trace_event_buffer_reserve(&uStack_78,arg1);
    if (iVar9 != 0) {
        *(iVar9 + 8) = (iVar7 + 1) * 0x10000 | 0xe;
        strcpy(iVar9 + 0xe,pcVar1);
        *(iVar9 + 0xc) = arg3;
        *(iVar9 + 0xd) = arg4;
        trace_event_buffer_commit(&uStack_78);
    }
code_r0x08007284:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_48) {
        return;
    }
    auVar13 = __stack_chk_fail();
    uVar8 = auVar13._0_8_;
    *extraout_x18 = sym.perf_trace_qcom_haptics_status;
    pcStack_d8 = sym.perf_trace_qcom_haptics_status;
    iVar9 = sp_el0;
    pcVar1 = "(null)";
    if (auVar13._8_8_ != NULL) {
        pcVar1 = auVar13._8_8_;
    }
    iStack_e8 = *(iVar9 + 0x5e0);
    uVar6 = uVar11;
    uVar5 = SUB81(puVar10,0);
    iStack_f0 = 0;
    uStack_f4 = 0;
    puStack_e0 = &stack0xffffffffffffffc0;
    iVar7 = strlen(pcVar1);
    iVar9 = tpidr_el1;
    piVar2 = iVar9 + *(uVar8 + 0x78);
    if ((*(uVar8 + 0x80) != 0) || (*piVar2 != 0)) {
        puVar10 = &uStack_f4;
        iVar3 = (iVar7 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar3,&iStack_f0,puVar10);
        if (iVar9 != 0) {
            uVar11 = _trace_event_raw_init & 0x3f;
            *(iStack_f0 + 0xe8) = &puStack_e0;
            *(iStack_f0 + 0xf8) = auStack_100;
            *(iStack_f0 + 0x100) = ~(-1L << uVar11) & 0x80072bc;
            *(iStack_f0 + 0x108) = 5;
            *(iVar9 + 8) = iVar7 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,pcVar1);
            puVar10 = uStack_f4;
            in_x4 = 1;
            *(iVar9 + 0xc) = uVar5;
            *(iVar9 + 0xd) = uVar6;
            perf_trace_run_bpf_submit(iVar9,iVar3,puVar10,uVar8,1,iStack_f0,piVar2,0);
            uVar11 = uVar8;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_e8) {
        auVar13 = __stack_chk_fail();
        uVar4 = tpidr_el2;
        *extraout_x18_00 = 0x8007438;
        bpf_trace_run4(in_tmp_ldXn,auVar13._0_8_,auVar13._8_8_ & 0xffffffff,puVar10 & 0xffffffff,uVar11 & 1,
                       in_x4 & 1);
        return;
    }
    return;
}


// ===== sym.perf_trace_qcom_haptics_status @ 0x080072bc (size 392) =====

void sym.perf_trace_qcom_haptics_status(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int iVar4;
    ulong uVar5;
    uchar uVar6;
    uchar uVar7;
    ulong in_tmp_ldXn;
    int iVar8;
    int64_t iVar9;
    uint64_t in_x4;
    uint64_t uVar10;
    uint64_t *in_x18;
    ulong *extraout_x18;
    uint64_t unaff_x30;
    uchar auVar11 [16];
    uchar auStack_80 [12];
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    uVar2 = 0x800312a;
    if (arg2 != 0) {
        uVar2 = arg2;
    }
    iStack_68 = *(iVar9 + 0x5e0);
    uVar7 = arg4;
    uVar6 = arg3;
    iStack_70 = 0;
    uStack_74 = 0;
    iVar8 = strlen(uVar2);
    iVar9 = tpidr_el1;
    piVar1 = iVar9 + *(arg1 + 0x78);
    if ((*(arg1 + 0x80) != 0) || (*piVar1 != 0)) {
        arg3 = &stack0xffffffffffffff8c;
        iVar4 = (iVar8 + 0x1cU & 0xfffffff8) - 4;
        iVar9 = perf_trace_buf_alloc(iVar4,&stack0xffffffffffffff90,arg3);
        if (iVar9 != 0) {
            uVar10 = -1L << (_trace_event_raw_init & 0x3f);
            *(iStack_70 + 0xe8) = &stack0xffffffffffffffa0;
            *(iStack_70 + 0xf8) = &stack0xffffffffffffff80;
            uVar3 = (~uVar10 | 0xff80000000000000) & unaff_x30;
            if ((unaff_x30 & 0x80000000000000) != 0) {
                uVar3 = uVar10 | unaff_x30;
            }
            *(iStack_70 + 0x100) = uVar3;
            *(iStack_70 + 0x108) = 5;
            *(iVar9 + 8) = iVar8 * 0x10000 + 0x1000e;
            strcpy(iVar9 + 0xe,uVar2);
            arg3 = uStack_74;
            in_x4 = 1;
            *(iVar9 + 0xc) = uVar6;
            *(iVar9 + 0xd) = uVar7;
            perf_trace_run_bpf_submit(iVar9,iVar4,arg3,arg1,1,iStack_70,piVar1,0);
            arg4 = arg1;
        }
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return;
    }
    auVar11 = __stack_chk_fail();
    uVar5 = tpidr_el2;
    *extraout_x18 = 0x8007438;
    bpf_trace_run4(in_tmp_ldXn,auVar11._0_8_,auVar11._8_8_ & 0xffffffff,arg3 & 0xffffffff,arg4 & 1,in_x4 & 1);
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_fifo_hw_status @ 0x08007444 (size 52) =====

void sym.__bpf_trace_qcom_haptics_fifo_hw_status(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    uint64_t in_x4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run4(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 1,in_x4 & 1);
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_fifo_prgm_status @ 0x08007478 (size 48) =====

void sym.__bpf_trace_qcom_haptics_fifo_prgm_status(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,arg1 & 0xffffffff,arg2 & 0xffffffff,arg3 & 0xffffffff);
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_play @ 0x080074a8 (size 40) =====

void sym.__bpf_trace_qcom_haptics_play(ulong noname_0,int64_t arg1)

{
    ulong in_x0;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run1(in_x0,arg1 & 1);
    return;
}


// ===== sym.__bpf_trace_qcom_haptics_status @ 0x080074d0 (size 44) =====

void sym.__bpf_trace_qcom_haptics_status(ulong noname_0,uchar noname_1 [16],int64_t arg1,int64_t arg2)

{
    ulong in_x0;
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bpf_trace_run3(in_x0,in_x1,arg1 & 0xff,arg2 & 0xff);
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_fifo_hw_status @ 0x080074fc (size 116) =====

void sym.trace_raw_output_qcom_haptics_fifo_hw_status(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"FIFO HW status: filled = %u, available = %u, full = %d, empty = %d\n\n",*(iVar2 + 8)
                           ,*(iVar2 + 0xc),*(iVar2 + 0x10),*(iVar2 + 0x11));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_fifo_prgm_status @ 0x08007570 (size 112) =====

void sym.trace_raw_output_qcom_haptics_fifo_prgm_status(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"FIFO program status: writing %u bytes, written %u bytes, total %u bytes\n\n",
                           *(iVar2 + 0x10),*(iVar2 + 0xc),*(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_play @ 0x080075e0 (size 108) =====

void sym.trace_raw_output_qcom_haptics_play(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"play enable: %d\n\n",*(iVar2 + 8));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.trace_raw_output_qcom_haptics_status @ 0x0800764c (size 120) =====

void sym.trace_raw_output_qcom_haptics_status(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x20e8);
    iVar1 = trace_raw_output_prep(arg1,arg2);
    if (iVar1 == 1) {
        trace_event_printf(arg1,"haptics %s status: MSB %#x, LSB %#x\n\n",iVar2 + *(iVar2 + 8),*(iVar2 + 0xc),
                           *(iVar2 + 0xd));
        trace_handle_return(arg1 + 0x10c0);
    }
    return;
}


// ===== sym.haptics_probe @ 0x080076c4 (size 4952) =====

uint64_t sym.haptics_probe(int64_t arg1)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    code *arg1_00;
    ulong *puVar6;
    ulong uVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char *pcVar12;
    code *pcVar13;
    code *in_x3;
    code cVar14;
    int iVar15;
    uint uVar16;
    ulong *puVar17;
    int iVar18;
    ulong *in_x18;
    code *unaff_x19;
    code *pcVar19;
    ulong uVar20;
    int64_t iVar21;
    ulong unaff_x30;
    uint8_t auStack_8c [4];
    uint64_t uStack_88;
    ulong uStack_80;
    code *pcStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar21 = sp_el0;
    iVar11 = arg1 + 0x10;
    iStack_58 = *(iVar21 + 0x5e0);
    arg1_00 = devm_kmalloc(iVar11,0x398,0xdc0);
    if ((arg1_00 == NULL) || (puVar6 = devm_input_allocate_device(iVar11), unaff_x19 = arg1_00, puVar6 == NULL)) {
        pcVar19 = 0xfffffff4;
        arg1_00 = unaff_x19;
        goto code_r0x08007724;
    }
    uVar7 = *(arg1 + 0x70);
    *arg1_00 = iVar11;
    _segment.ehdr = iVar11;
    iVar11 = dev_get_regmap(uVar7,0);
    *(arg1_00 + 8) = iVar11;
    if (iVar11 == 0) {
        _dev_err(*arg1_00,"Get regmap failed\n");
        pcVar19 = 0xfffffffa;
        goto code_r0x08007724;
    }
    obj.xm_hap_exception_enable = 0x1;
    _printk(0x800381d,"xm_hap_driver_init");
    iVar21 = *arg1_00;
    uVar7 = *(iVar21 + 0x2f0);
    iVar11 = of_find_property(uVar7,"qcom,hpwr-supply",0);
    if (iVar11 != 0) {
        pcVar19 = devm_regulator_get(*arg1_00,"qcom,hpwr");
        *(arg1_00 + 0x288) = pcVar19;
        if (pcVar19 < 0xfffffffffffff001) {
            in_x3 = 0x1;
            uVar3 = of_property_read_variable_u32_array(uVar7,"qcom,hpwr-voltage-mv",arg1_00 + 0x35c,1,0);
            if (uVar3 < 0) {
                pcVar19 = uVar3;
                _dev_err(*arg1_00,"Failed to read qcom,hpwr-voltage-mv, rc=%d\n",pcVar19);
                goto code_r0x08007a5c;
            }
            if (*(arg1_00 + 0x35c) - 0xfa1U < 0xfffff060) {
                pcVar19 = 0xffffffea;
                goto code_r0x08007a5c;
            }
        }
        else {
            if (pcVar19 == -0x205) goto code_r0x080078ac;
            _dev_err(*arg1_00,"Failed to get qcom,hpwr-supply, rc=%d\n",pcVar19 & 0xffffffff);
            if (pcVar19 < 0) goto code_r0x08007a5c;
        }
    }
    iVar11 = of_find_property(uVar7,"nvmem-cells",0);
    if (iVar11 != 0) {
        uVar8 = devm_nvmem_cell_get(*arg1_00,"hap_cl_brake");
        *(arg1_00 + 0x1d8) = uVar8;
        if (uVar8 < 0xfffffffffffff001) goto code_r0x08007870;
        if (uVar8 == -0x205) goto code_r0x080078ac;
        iVar11 = *arg1_00;
        pcVar12 = "Failed to get nvmem-cells, rc=%d\n";
code_r0x08007aa0:
        pcVar19 = uVar8 & 0xffffffff;
        _dev_err(iVar11,pcVar12,pcVar19);
        if (uVar8 < 0) goto code_r0x08007a5c;
        goto code_r0x08007aac;
    }
code_r0x08007870:
    iVar11 = of_find_property(uVar7,"nvmem",0);
    if (iVar11 != 0) {
        uVar8 = devm_nvmem_device_get(*arg1_00,"hap_cfg_sdam");
        *(arg1_00 + 0x1e0) = uVar8;
        if (0xfffffffffffff000 < uVar8) {
            if (uVar8 == -0x205) {
code_r0x080078ac:
                pcVar19 = 0xfffffdfb;
                goto code_r0x08007a5c;
            }
            iVar11 = *arg1_00;
            pcVar12 = "Failed to get hap_cfg nvmem device, rc=%d\n";
            goto code_r0x08007aa0;
        }
    }
    iVar11 = of_find_property(uVar7,"qcom,pbs-client",0);
    if (iVar11 != 0) {
        iVar11 = of_parse_phandle(uVar7,"qcom,pbs-client",0);
        *(arg1_00 + 0x1e8) = iVar11;
        if (iVar11 == 0) {
            _dev_err(*arg1_00,"Failed to get PBS client\n");
            pcVar19 = 0xffffffed;
            goto code_r0x08007a5c;
        }
    }
    in_x3 = NULL;
    puVar9 = __of_get_address(uVar7,0,0xffffffff,0,0);
    if (puVar9 == NULL) {
        iVar11 = *arg1_00;
        pcVar12 = "Read HAPTICS_CFG address failed\n";
        goto code_r0x080079a0;
    }
    in_x3 = NULL;
    uVar3 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    *(arg1_00 + 0x368) = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar9 = __of_get_address(uVar7,1,0xffffffff,0,0);
    if (puVar9 == NULL) {
        iVar11 = *arg1_00;
        pcVar12 = "Read HAPTICS_PATTERN address failed\n";
        goto code_r0x080079a0;
    }
    uStack_88 = uStack_88 & 0xffffffffffff0000;
    uVar4 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    uVar3 = *(arg1_00 + 0x368);
    *(arg1_00 + 0x36c) = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar20 = *(*arg1_00 + 0x2f0);
    uVar4 = regmap_bulk_read(*(arg1_00 + 8),uVar3,&uStack_88,2);
    if (uVar4 < 0) {
code_r0x08007a20:
        iVar11 = *arg1_00;
code_r0x08007a34:
        pcVar19 = uVar4;
        in_x3 = pcVar19;
        _dev_err(iVar11,"read addr %#x failed, rc=%d\n",uVar3);
    }
    else {
        uVar3 = *(arg1_00 + 0x36c) + 1U & 0xffff;
        *(arg1_00 + 0x380) = uStack_88;
        uVar4 = regmap_bulk_read(*(arg1_00 + 8),uVar3,&uStack_88,1);
        if (uVar4 < 0) goto code_r0x08007a20;
        cVar14 = arg1_00[0x381];
        in_x3 = uStack_88 & 0xff;
        arg1_00[0x382] = uStack_88._0_1_;
        if ((cVar14 != 0x2) || (uStack_88._0_1_ != 0x2)) {
            if (cVar14 == 0x4) {
                if (uStack_88._0_1_ != 0x4) goto code_r0x08008258;
                uVar16 = 4;
                goto code_r0x08007edc;
            }
            if ((cVar14 != 0x3) || (uStack_88._0_1_ != 0x3)) {
code_r0x08008258:
                _dev_err(*arg1_00,"haptics revision is not supported\n");
                pcVar19 = 0xffffffa1;
                goto code_r0x08007a3c;
            }
            *(arg1_00 + 0x388) = 3;
code_r0x08007f60:
            _dev_info(*arg1_00,"haptics revision: HAP_CFG %#x, HAP_PTN %#x\n");
code_r0x08007f70:
            iVar5 = platform_get_irq_byname(iVar21 + -0x10,"fifo-empty");
            *(arg1_00 + 0x358) = iVar5;
            if (iVar5 == 0) {
                iVar11 = *arg1_00;
                pcVar12 = "Get fifo-empty IRQ failed\n";
code_r0x080079a0:
                _dev_err(iVar11,pcVar12);
                pcVar19 = 0xffffffea;
                goto code_r0x08007a50;
            }
            pcVar19 = arg1_00 + 0x34;
            *pcVar19 = 5000;
            of_property_read_variable_u32_array(uVar7,"qcom,vmax-mv",pcVar19,1,0);
            uVar3 = *pcVar19;
            if (0x55e < uVar3 >> 3) {
                iVar11 = *arg1_00;
                pcVar12 = "qcom,vmax-mv (%d) exceed the max value: %d\n";
                in_x3 = 0x2af8;
                goto code_r0x08008758;
            }
            *(arg1_00 + 0x38) = 5000;
            of_property_read_variable_u32_array(uVar7,"qcom,custom_vmax_mv",arg1_00 + 0x38,1,0);
            *(arg1_00 + 0x3c) = 5000;
            of_property_read_variable_u32_array(uVar7,"qcom,f0-vmax-mv",arg1_00 + 0x3c,1,0);
            *(arg1_00 + 0x74) = 0;
            iVar5 = of_property_read_variable_u32_array(uVar7,"qcom,lra_temp",arg1_00 + 0x74,1,0);
            if (iVar5 < 0) {
                _dev_err(*arg1_00,"qcom,lra_temp not found\n");
            }
            *(arg1_00 + 0x78) = 0;
            iVar5 = of_property_read_variable_u32_array(uVar7,"qcom,mi_comp_lra",arg1_00 + 0x78,1,0);
            if (iVar5 < 0) {
                _dev_err(*arg1_00,"qcom,mi_comp_lra not found\n");
            }
            *(arg1_00 + 0x48) = 500;
            of_property_read_variable_u32_array(uVar7,"qcom,lra_calibration_vmax_hdrm_mv",arg1_00 + 0x48,1,0);
            if (*(arg1_00 + 0x388) - 2U < 3) {
                uVar16 = *((*(arg1_00 + 0x388) - 2U) * 4 + 0x8005060);
            }
            else {
                _printk(0x800334e);
                uVar16 = 0;
            }
            pcVar19 = arg1_00 + 0x60;
            *pcVar19 = uVar16;
            of_property_read_variable_u32_array(uVar7,"qcom,fifo-empty-threshold",pcVar19,1,0);
            iVar5 = *(arg1_00 + 0x388);
            uVar3 = *pcVar19;
            if (iVar5 == 2) {
                uVar4 = 0x280;
code_r0x080082c8:
                if (uVar3 < uVar4) {
                    in_x3 = 0x1;
                    pcVar19 = arg1_00 + 0x20;
                    *pcVar19 = 3;
                    of_property_read_variable_u32_array(uVar7,"qcom,brake-mode",pcVar19,1,0);
                    uVar3 = *pcVar19;
                    if (3 < uVar3) {
                        iVar11 = *arg1_00;
                        pcVar12 = "Can\'t support brake mode: %d\n";
code_r0x080086d0:
                        _dev_err(iVar11,pcVar12,uVar3);
                        pcVar19 = 0xffffffea;
                        goto code_r0x08007a50;
                    }
                    iVar11 = of_find_property(uVar7,"qcom,brake-disable",0);
                    arg1_00[0x30] = iVar11 != 0;
                    uVar3 = of_property_count_elems_of_size(uVar7,"qcom,brake-pattern",1);
                    if (8 < uVar3) {
                        iVar11 = *arg1_00;
                        pcVar12 = "more than %d brake samples\n";
                        uVar3 = 8;
                        goto code_r0x080086d0;
                    }
                    if (uVar3 < 1) {
                        if (*pcVar19 < 2) {
code_r0x080083c4:
                            cVar14 = 0x1;
code_r0x080083c8:
                            arg1_00[0x30] = cVar14;
                        }
                    }
                    else {
                        in_x3 = uVar3;
                        uVar3 = of_property_read_variable_u8_array
                                          (uVar7,"qcom,brake-pattern",arg1_00 + 0x18,in_x3,0);
                        if (uVar3 < 0) {
                            pcVar19 = uVar3;
                            iVar11 = *arg1_00;
                            pcVar12 = "Read brake-pattern failed, rc=%d\n";
                            goto code_r0x08007a48;
                        }
                        if ((*pcVar19 & 0xfffffffe) != 2) {
                            if (((((arg1_00[0x1f] == 0x0) && (arg1_00[0x1e] == 0x0)) && (arg1_00[0x1d] == 0x0)) &&
                                ((arg1_00[0x1c] == 0x0 && (arg1_00[0x1b] == 0x0)))) &&
                               ((arg1_00[0x1a] == 0x0 && (arg1_00[0x19] == 0x0)))) goto code_r0x080083c4;
                            cVar14 = 0x0;
                            goto code_r0x080083c8;
                        }
                    }
                    iVar11 = of_find_property(uVar7,"qcom,use-erm",0);
                    arg1_00[0x6c] = iVar11 != 0;
                    if (iVar11 == 0) {
                        in_x3 = 0x1;
                        uVar7 = *(*arg1_00 + 0x2f0);
                        uVar3 = of_property_read_variable_u32_array(uVar7,"qcom,lra-period-us",arg1_00 + 0x40,1,0);
                        if (uVar3 < 0) {
                            pcVar19 = uVar3;
                            _dev_err(*arg1_00,"Read T-LRA failed, rc=%d\n",pcVar19);
                            goto code_r0x08008858;
                        }
                        if (0x4ffb < *(arg1_00 + 0x40)) {
                            in_x3 = 0x4ffb;
                            _dev_err(*arg1_00,"qcom,lra-period-us (%d) exceed the max value: %d\n");
                            goto code_r0x08008854;
                        }
                        in_x3 = 0x1;
                        pcVar19 = arg1_00 + 0x68;
                        *pcVar19 = 1;
                        of_property_read_variable_u32_array(uVar7,"qcom,drv-sig-shape",pcVar19,1,0);
                        if (2 < *pcVar19) {
                            iVar11 = *arg1_00;
                            pcVar12 = "Can\'t support drive shape: %d\n";
                            goto code_r0x08008850;
                        }
                        in_x3 = 0x1;
                        pcVar19 = arg1_00 + 0x24;
                        *pcVar19 = 1;
                        of_property_read_variable_u32_array(uVar7,"qcom,brake-sig-shape",pcVar19,1,0);
                        if (2 < *pcVar19) {
                            iVar11 = *arg1_00;
                            pcVar12 = "Can\'t support brake shape: %d\n";
                            goto code_r0x08008850;
                        }
                        if (*pcVar19 == 1) {
                            in_x3 = 0x1;
                            pcVar19 = arg1_00 + 0x28;
                            *pcVar19 = 0;
                            of_property_read_variable_u32_array(uVar7,"qcom,brake-sine-gain",pcVar19,1,0);
                            if (3 < *pcVar19) goto code_r0x08008844;
                        }
                        if (*(arg1_00 + 0x388) == 4) {
                            iVar11 = of_find_property(uVar7,"qcom,rt-imp-detect",0);
                            arg1_00[0x6d] = iVar11 != 0;
                        }
                    }
                    else {
                        *(arg1_00 + 0x68) = 2;
                        *(arg1_00 + 0x24) = 2;
                    }
                    *(arg1_00 + 0x5c) = 0xffffffea;
                    uVar7 = *(*arg1_00 + 0x2f0);
                    iVar11 = of_get_next_available_child(uVar7,0);
                    if (iVar11 != 0) {
                        iVar5 = 0;
                        do {
                            iVar21 = of_find_property(iVar11,"qcom,effect-id",0);
                            if (iVar21 != 0) {
                                iVar5 = iVar5 + 1;
                            }
                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                        } while (iVar11 != 0);
                        if (iVar5 != 0) {
                            auVar2._8_8_ = 0;
                            auVar2._0_8_ = iVar5;
                            if (SUB168(auVar2 * ZEXT816(0x30),8) == 0) {
                                iVar11 = devm_kmalloc(*arg1_00,(iVar5 + iVar5 * 2) * 0x10,0xdc0);
                                *(arg1_00 + 0x80) = iVar11;
                                if (iVar11 != 0) {
                                    iVar11 = of_get_next_available_child(uVar7,0);
                                    if (iVar11 == 0) {
                                        uVar3 = 0;
                                    }
                                    else {
                                        uVar3 = 0;
                                        do {
                                            iVar21 = of_find_property(iVar11,"qcom,effect-id",0);
                                            if (iVar21 != 0) {
                                                in_x3 = 0x1;
                                                uVar4 = of_property_read_variable_u32_array
                                                                  (iVar11,"qcom,effect-id",
                                                                   *(arg1_00 + 0x80) + uVar3 * 0x30 + 0x18,1,0);
                                                if (uVar4 < 0) {
                                                    pcVar13 = uVar4;
                                                    iVar11 = *arg1_00;
                                                    pcVar12 = "Read qcom,effect-id failed, rc=%d\n";
                                                    pcVar19 = pcVar13;
                                                }
                                                else {
                                                    uVar4 = sym.haptics_parse_per_effect_dt
                                                                      (arg1_00,iVar11,*(arg1_00 + 0x80) + uVar3 * 0x30
                                                                      );
                                                    if (-1 < uVar4) {
                                                        uVar3 = uVar3 + 1;
                                                        goto code_r0x08008888;
                                                    }
                                                    iVar11 = *arg1_00;
                                                    pcVar12 = "parse effect %d failed, rc=%d\n";
                                                    pcVar13 = uVar3;
                                                    pcVar19 = uVar4;
                                                }
                                                _dev_err(iVar11,pcVar12,pcVar13);
                                                goto code_r0x080089b4;
                                            }
code_r0x08008888:
                                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                                        } while (iVar11 != 0);
                                    }
                                    *(arg1_00 + 0x360) = uVar3;
                                    _dev_printk(0x8003b96,*arg1_00,"Dump predefined effect settings as following\n");
                                    sym.__dump_effects(arg1_00,*(arg1_00 + 0x80),*(arg1_00 + 0x360));
                                    goto code_r0x0800845c;
                                }
                                pcVar19 = 0xfffffff4;
                            }
                            else {
                                pcVar19 = 0xfffffff4;
                                *(arg1_00 + 0x80) = 0;
                            }
code_r0x080089b4:
                            iVar11 = *arg1_00;
                            pcVar12 = "Parse device-tree for effects failed, rc=%d\n";
                            goto code_r0x08007a48;
                        }
                    }
code_r0x0800845c:
                    uVar7 = *(*arg1_00 + 0x2f0);
                    iVar11 = of_get_next_available_child(uVar7,0);
                    if (iVar11 != 0) {
                        iVar5 = 0;
                        do {
                            iVar21 = of_find_property(iVar11,"qcom,primitive-id",0);
                            if (iVar21 != 0) {
                                iVar5 = iVar5 + 1;
                            }
                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                        } while (iVar11 != 0);
                        if (iVar5 != 0) {
                            auVar1._8_8_ = 0;
                            auVar1._0_8_ = iVar5;
                            if (SUB168(auVar1 * ZEXT816(0x30),8) == 0) {
                                iVar11 = devm_kmalloc(*arg1_00,(iVar5 + iVar5 * 2) * 0x10,0xdc0);
                                *(arg1_00 + 0x88) = iVar11;
                                if (iVar11 != 0) {
                                    iVar11 = of_get_next_available_child(uVar7,0);
                                    if (iVar11 == 0) {
                                        uVar3 = 0;
                                    }
                                    else {
                                        uVar3 = 0;
                                        do {
                                            iVar21 = of_find_property(iVar11,"qcom,primitive-id",0);
                                            if (iVar21 != 0) {
                                                in_x3 = 0x1;
                                                uVar4 = of_property_read_variable_u32_array
                                                                  (iVar11,"qcom,primitive-id",
                                                                   *(arg1_00 + 0x88) + uVar3 * 0x30 + 0x18,1,0);
                                                if (uVar4 < 0) {
                                                    pcVar13 = uVar4;
                                                    iVar11 = *arg1_00;
                                                    pcVar12 = "Read qcom,primitive-id failed, rc=%d\n";
                                                    pcVar19 = pcVar13;
                                                }
                                                else {
                                                    uVar4 = sym.haptics_parse_per_effect_dt
                                                                      (arg1_00,iVar11,*(arg1_00 + 0x88) + uVar3 * 0x30
                                                                      );
                                                    if (-1 < uVar4) {
                                                        uVar3 = uVar3 + 1;
                                                        goto code_r0x08008924;
                                                    }
                                                    iVar11 = *arg1_00;
                                                    pcVar12 = "parse primitive %d failed, rc=%d\n";
                                                    pcVar13 = uVar3;
                                                    pcVar19 = uVar4;
                                                }
                                                _dev_err(iVar11,pcVar12,pcVar13);
                                                goto code_r0x080089f4;
                                            }
code_r0x08008924:
                                            iVar11 = of_get_next_available_child(uVar7,iVar11);
                                        } while (iVar11 != 0);
                                    }
                                    *(arg1_00 + 0x364) = uVar3;
                                    _dev_printk(0x8003b96,*arg1_00,"Dump primitive effect settings as following\n");
                                    sym.__dump_effects(arg1_00,*(arg1_00 + 0x88),*(arg1_00 + 0x364));
                                    goto code_r0x08007aac;
                                }
                                pcVar19 = 0xfffffff4;
                            }
                            else {
                                pcVar19 = 0xfffffff4;
                                *(arg1_00 + 0x88) = 0;
                            }
code_r0x080089f4:
                            iVar11 = *arg1_00;
                            pcVar12 = "Parse device-tree for primitives failed, rc=%d\n";
                            goto code_r0x08007a48;
                        }
                    }
code_r0x08007aac:
                    iVar11 = devm_kmalloc(*arg1_00,0x30,0xdc0);
                    *(arg1_00 + 0x90) = iVar11;
                    if (iVar11 == 0) {
code_r0x08007f1c:
                        pcVar19 = 0xfffffff4;
                        _dev_err(*arg1_00,"Init custom effect failed, rc=%d\n",0xfffffff4);
                        goto code_r0x08007724;
                    }
                    uVar7 = devm_kmalloc(*arg1_00,0x18,0xdc0);
                    *(*(arg1_00 + 0x90) + 8) = uVar7;
                    if ((*(arg1_00 + 0x90))[1] == 0) goto code_r0x08007f1c;
                    **(arg1_00 + 0x90) = 0;
                    *(*(arg1_00 + 0x90) + 0x10) = 0;
                    *(*(arg1_00 + 0x90) + 0x18) = 0xffffffff;
                    *(*(arg1_00 + 0x90) + 0x1c) = *(arg1_00 + 0x38);
                    *(*(arg1_00 + 0x90) + 0x20) = *(arg1_00 + 0x40);
                    *(*(arg1_00 + 0x90) + 0x24) = 0;
                    *(*(arg1_00 + 0x90) + 0x2c) = 1;
                    __mutex_init(arg1_00 + 0x2f8,"&chip->vmax_lock",obj.xm_hap_exception_enable);
                    uVar3 = sym.haptics_hw_init(arg1_00);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        sym.xm_hap_driver_exception_handler(0x360387a9,0x8002967,0x8002604,in_x3);
                        iVar11 = *arg1_00;
                        pcVar12 = "Initialize HW failed, rc = %d\n";
                        goto code_r0x08007a84;
                    }
                    if (*(arg1_00 + 0x388) != 3) {
                        in_x3 = 0x1;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        pcStack_78 = NULL;
                        uStack_70 = 0;
                        uVar3 = *(arg1_00 + 0x368) + 0x4eU & 0xffff;
                        uStack_80 = 0;
                        auStack_8c[0] = 0;
                        uVar4 = regmap_bulk_read(*(arg1_00 + 8),uVar3,auStack_8c);
                        if (uVar4 < 0) {
                            pcVar19 = uVar4;
                            in_x3 = pcVar19;
                            _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",uVar3);
                            _dev_err(*arg1_00,"Failed to read SWR_ACCESS, rc=%d\n",pcVar19);
                            goto code_r0x08008230;
                        }
                        uStack_88 = *arg1_00;
                        arg1_00[0x38d] = 0xdf < auStack_8c[0];
                        auStack_8c[0] = auStack_8c[0] & 0xe0;
                        pcStack_78 = arg1_00;
                        pcVar19 = devm_regulator_register(uStack_88,obj.swr_slave_reg_rdesc,&uStack_88);
                        *(arg1_00 + 0x1d0) = pcVar19;
                        if (0xfffffffffffff000 < pcVar19) {
                            *(arg1_00 + 0x1d0) = 0;
                            if (pcVar19 == -0x205) {
                                pcVar19 = 0xfffffdfb;
code_r0x08008230:
                                _dev_err(*arg1_00,"Initialize swr slave regulator failed, rc = %d\n",
                                         pcVar19 & 0xffffffff);
                                goto code_r0x08007724;
                            }
                            _dev_err(*arg1_00,"register swr-slave-reg regulator failed, rc=%d\n",pcVar19 & 0xffffffff)
                            ;
                            if (pcVar19 < 0) goto code_r0x08008230;
                        }
                    }
                    in_x3 = sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    uVar3 = devm_request_threaded_irq
                                      (*arg1_00,*(arg1_00 + 0x358),0,
                                       sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,0x2000,
                                       "fifo-empty",arg1_00);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        iVar11 = *arg1_00;
                        pcVar12 = "request fifo-empty IRQ failed, rc=%d\n";
                        goto code_r0x08007a84;
                    }
                    uVar3 = sym.haptics_set_vmax_headroom_mv(arg1_00,*(arg1_00 + 0x48));
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        iVar11 = *arg1_00;
                        pcVar12 = "config VMAX_HDRM failed, rc=%d\n";
                        goto code_r0x08007a84;
                    }
                    __mutex_init(arg1_00 + 0xb8,"&chip->play.lock",obj.xm_hap_exception_enable);
                    disable_irq_nosync(*(arg1_00 + 0x358));
                    arg1_00[0x38c] = 0x0;
                    hrtimer_init(arg1_00 + 0x290,1,1);
                    *(arg1_00 + 0x2b8) = sym.haptics_disable_hbst_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    in_x3 = NULL;
                    *(arg1_00 + 0x148) = 0xfffffffe0;
                    *(arg1_00 + 0x150) = arg1_00 + 0x150;
                    *(arg1_00 + 0x158) = arg1_00 + 0x150;
                    *(arg1_00 + 0x160) = sym.haptics_stop_constant_effect_play.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    init_timer_key(arg1_00 + 0x178,sym.delayed_work_timer_fn.cfi_jt,0x200000,0,0);
                    *(arg1_00 + 0x328) = 0xfffffffe0;
                    *(arg1_00 + 0x330) = arg1_00 + 0x330;
                    *(arg1_00 + 0x338) = arg1_00 + 0x330;
                    *(arg1_00 + 0x340) = sym.haptics_set_gain_work.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    hrtimer_init(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt,1,1);
                    *0x8000588 = 0;
                    *0x8000568 = sym.haptics_disable_fifo_delay_timer.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    *(arg1_00 + 0xb0) = 0;
                    *(arg1_00 + 0xac) = 0;
                    *(arg1_00 + 0xb4) = 0;
                    *puVar6 = 0x8001690;
                    puVar6[0x5b] = arg1_00;
                    *(arg1_00 + 0x10) = puVar6;
                    input_set_capability(puVar6,0x15,0x52);
                    input_set_capability(puVar6,0x15,0x60);
                    if ((*(arg1_00 + 0x360) == 0) && (*(arg1_00 + 0x364) == 0)) {
                        iVar5 = 0;
                        iVar15 = 0;
                    }
                    else {
                        input_set_capability(puVar6,0x15,0x51);
                        input_set_capability(puVar6,0x15,0x5d);
                        input_set_capability(puVar6,0x15,0x55);
                        iVar15 = *(arg1_00 + 0x360);
                        iVar5 = *(arg1_00 + 0x364);
                    }
                    if (0x40 < iVar15 + iVar5) {
                        _dev_err(*arg1_00,"Effects count cannot be more than %d\n",0x40);
                        iVar15 = *(arg1_00 + 0x360);
                        iVar5 = *(arg1_00 + 0x364);
                    }
                    iVar18 = 0x40;
                    if (iVar5 + iVar15 + 1U < 0x40) {
                        iVar18 = iVar5 + iVar15 + 1;
                    }
                    uVar3 = input_ff_create(puVar6,iVar18);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        iVar11 = *arg1_00;
                        pcVar12 = "create input FF device failed, rc=%d\n";
                        goto code_r0x08007a84;
                    }
                    puVar17 = puVar6[0x1f];
                    *puVar17 = sym.haptics_upload_effect.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    puVar17[1] = sym.haptics_erase.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    puVar17[2] = sym.haptics_playback.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    puVar17[3] = sym.haptics_set_gain.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    uVar8 = input_register_device(puVar6);
                    pcVar19 = uVar8 & 0xffffffff;
                    if (uVar8 < 0) {
                        _dev_err(*arg1_00,"register input device failed, rc=%d\n",uVar8 & 0xffffffff);
code_r0x0800818c:
                        sym.xm_hap_driver_exception_handler(0x360387a9,0x8002f25,0x800352d,in_x3);
                        input_ff_destroy(*(arg1_00 + 0x10));
                        goto code_r0x08007724;
                    }
                    *(*arg1_00 + 0x98) = arg1_00;
                    *(arg1_00 + 0x1f0) = 0x80039e0;
                    *(arg1_00 + 0x200) = obj.hap_class_groups;
                    uVar3 = __class_register(arg1_00 + 0x1f0,obj.xm_hap_exception_enable);
                    if (uVar3 < 0) {
                        pcVar19 = uVar3;
                        _dev_err(*arg1_00,"register hap_class failed, rc=%d\n");
                        goto code_r0x0800818c;
                    }
                    *(arg1_00 + 0x2d8) = sym.haptics_boost_notifier.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt;
                    register_hboost_event_notifier(arg1_00 + 0x2d8);
                    uVar8 = debugfs_create_dir("haptics",0);
                    if (0xfffffffffffff000 < uVar8) {
                        _dev_err(*arg1_00,"create haptics debugfs directory failed, rc=%d\n",uVar8 & 0xffffffff);
                        uVar10 = uVar8 & 0xffffffff;
                        iVar5 = uVar8;
                        goto joined_r0x080081cc;
                    }
                    pcVar12 = "effect";
                    uVar10 = sym.haptics_add_debugfs(uVar8,*(arg1_00 + 0x80),*(arg1_00 + 0x360),0x8003521);
                    if (uVar10 < 0) {
code_r0x08007ea4:
                        uVar10 = uVar10 & 0xffffffff;
                    }
                    else {
                        pcVar12 = "primitive";
                        uVar10 = sym.haptics_add_debugfs(uVar8,*(arg1_00 + 0x88),*(arg1_00 + 0x364),0x800223e);
                        if (uVar10 < 0) goto code_r0x08007ea4;
                        pcVar12 = arg1_00;
                        uVar10 = debugfs_create_file_unsafe
                                           ("preload_effect_idx",0x1a4,uVar8,arg1_00,
                                            obj.preload_effect_idx_dbgfs_ops);
                        if (uVar10 < 0xfffffffffffff001) {
                            in_x3 = arg1_00 + 0x60;
                            debugfs_create_u32("fifo_empty_thresh",0x180,uVar8);
                            pcVar19 = NULL;
                            *(arg1_00 + 0x140) = uVar8;
                            goto code_r0x08007724;
                        }
                        _dev_err(*arg1_00,"create preload_effect_idx debugfs failed, rc=%d\n",uVar10 & 0xffffffff);
                    }
                    debugfs_remove(uVar8);
                    iVar5 = uVar10;
                    in_x3 = pcVar12;
joined_r0x080081cc:
                    if (iVar5 < 0) {
                        _dev_err(*arg1_00,"Creating debugfs failed, rc=%d\n",uVar10 & 0xffffffff);
                    }
                    pcVar19 = NULL;
                    goto code_r0x08007724;
                }
            }
            else {
                if (iVar5 == 4) {
                    uVar4 = 0x280;
                    if (*(arg1_00 + 0x104) != 0) {
                        uVar4 = *(arg1_00 + 0x104);
                    }
                    goto code_r0x080082c8;
                }
                if (iVar5 == 3) {
                    uVar4 = 0x400;
                    goto code_r0x080082c8;
                }
                _printk(0x800334e);
                uVar3 = *pcVar19;
            }
            iVar11 = *arg1_00;
            uVar8 = sym.get_max_fifo_samples(arg1_00);
            in_x3 = uVar8 & 0xffffffff;
            pcVar12 = "FIFO empty threshold (%d) should be less than %d\n";
code_r0x08008758:
            _dev_err(iVar11,pcVar12,uVar3);
            pcVar19 = 0xffffffea;
            goto code_r0x08007a50;
        }
        uVar16 = 2;
code_r0x08007edc:
        *(arg1_00 + 0x388) = uVar16;
        if (*(arg1_00 + 0x288) != 0) goto code_r0x08007f60;
        in_x3 = NULL;
        puVar9 = __of_get_address(uVar20,2,0xffffffff,0,0);
        if (puVar9 != NULL) {
            uVar4 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
            uVar3 = uVar4 >> 0x10;
            *(arg1_00 + 0x370) = uVar3 | uVar4 << 0x10;
            uVar4 = regmap_bulk_read(*(arg1_00 + 8),uVar3,&uStack_88,2);
            if (-1 < uVar4) {
                in_x3 = arg1_00[0x382];
                *(arg1_00 + 900) = uStack_88;
                _dev_info(*arg1_00,"haptics revision: HAP_CFG %#x, HAP_PTN %#x, HAP_HBST %#x\n",arg1_00[0x381]);
                goto code_r0x08007f70;
            }
            iVar11 = *arg1_00;
            goto code_r0x08007a34;
        }
        _dev_err(*arg1_00,"Read HAPTICS_HBOOST address failed\n");
        pcVar19 = 0xffffffea;
    }
code_r0x08007a3c:
    iVar11 = *arg1_00;
    pcVar12 = "Get revision failed, rc=%d\n";
code_r0x08007a48:
    while( true ) {
        _dev_err(iVar11,pcVar12,pcVar19);
code_r0x08007a50:
        if (*(arg1_00 + 0x1e8) != 0) {
            *(arg1_00 + 0x1e8) = 0;
        }
code_r0x08007a5c:
        sym.xm_hap_driver_exception_handler(0x360387a9,0x800234b,0x8003622,in_x3);
        iVar11 = *arg1_00;
        pcVar12 = "Parse device-tree failed, rc = %d\n";
code_r0x08007a84:
        _dev_err(iVar11,pcVar12,pcVar19 & 0xffffffff);
code_r0x08007724:
        iVar11 = sp_el0;
        if (*(iVar11 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
code_r0x08008844:
        iVar11 = *arg1_00;
        pcVar12 = "Can\'t support brake sine gain: %d\n";
code_r0x08008850:
        _dev_err(iVar11,pcVar12);
code_r0x08008854:
        pcVar19 = 0xffffffea;
code_r0x08008858:
        iVar11 = *arg1_00;
        pcVar12 = "Parse device-tree for LRA failed, rc=%d\n";
    }
    return pcVar19 & 0xffffffff;
}


// ===== sym.haptics_remove @ 0x08008a1c (size 88) =====

ulong sym.haptics_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xa8);
    unregister_hboost_event_notifier(piVar1 + 0x5b);
    class_unregister(piVar1 + 0x3e);
    debugfs_remove(piVar1[0x28]);
    input_unregister_device(piVar1[2]);
    *(*piVar1 + 0x98) = 0;
    return 0;
}


// ===== sym.haptics_shutdown @ 0x08008a74 (size 76) =====

void sym.haptics_shutdown(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0xa8);
    sym.haptics_suspend_config(*piVar1);
    if (0 < *(*(*piVar1 + 0x98) + 0x358)) {
        devm_free_irq();
    }
    return;
}


// ===== sym.xm_hap_driver_exception_handler @ 0x08008ac0 (size 724) =====

//WARNING: Removing unreachable block (ram,0x08008c74)
//WARNING: Removing unreachable block (ram,0x08008cb8)
//WARNING: Removing unreachable block (ram,0x08008c58)
//WARNING: Removing unreachable block (ram,0x08008ce4)
//WARNING: Removing unreachable block (ram,0x08008ce0)
//WARNING: Removing unreachable block (ram,0x08008d00)
//WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff80 : 0x08008c84
//WARNING: Restarted to delay deadcode elimination for space: stack

uint64_t sym.xm_hap_driver_exception_handler(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong uVar7;
    char *pcVar8;
    ulong *arg1_00;
    int iVar9;
    uint extraout_w8;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t iVar12;
    int64_t *piVar13;
    uint extraout_w9;
    ushort uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *puVar15;
    int iVar16;
    char *unaff_x21;
    char *pcVar17;
    char *unaff_x22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    uint64_t unaff_x25;
    uint32_t uVar18;
    ulong unaff_x30;
    uint8_t auStack_14c [4];
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    int64_t iStack_120;
    int64_t iStack_118;
    uint32_t *puStack_110;
    char *pcStack_108;
    uint64_t uStack_100;
    ulong *puStack_f8;
    uint uStack_ec;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int iStack_80;
    uint uStack_7c;
    int iStack_78;
    uint32_t uStack_30;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iVar10 = *(iVar10 + 0x5e0);
    uVar5 = cdev_tevent_alloc();
    if (obj.xm_hap_exception_enable == 0x1) {
        iVar3 = arg1;
        puVar6 = *0x8;
        if (iVar3 < 0x36038b91) {
            if (iVar3 == 0x360387a9) {
                pcVar17 = "type";
code_r0x08008cd0:
                uStack_30 = 0xffffffd0;
                cdev_tevent_add_str(uVar5,pcVar17,CONCAT44(uStack_7c,iStack_80));
code_r0x08008d28:
                if (uStack_30 < 0xfffffff9) {
                    puVar6 = &stack0xffffffffffffffb8 + uStack_30;
                }
                goto code_r0x08008d50;
            }
            if (iVar3 == 0x360387aa) {
                pcVar17 = "raceObject";
                goto code_r0x08008cd0;
            }
code_r0x08008c3c:
            _printk(0x800189d,"xm_hap_driver_exception_handler",arg1 & 0xffffffff);
        }
        else {
            if (iVar3 == 0x36038b91) {
                uStack_30 = 0xffffffd0;
                pcVar17 = "calVal";
                iStack_78 = iStack_80;
            }
            else {
                if (iVar3 != 0x36038b92) goto code_r0x08008c3c;
                cdev_tevent_add_int(uVar5,"calVal",iStack_80);
                uStack_30 = 0xffffffd8;
                pcVar17 = "defaultVal";
            }
            cdev_tevent_add_int(uVar5,pcVar17,iStack_78);
            if (uStack_30 < 0) goto code_r0x08008d28;
code_r0x08008d50:
            cdev_tevent_add_str(uVar5,"keyword",*puVar6);
        }
        cdev_tevent_write(uVar5);
        cdev_tevent_destroy(uVar5);
        uVar5 = _printk(0x800338b,"xm_hap_driver_exception_handler",arg1 & 0xffffffff);
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iVar10) {
        return uVar5;
    }
    puVar6 = __stack_chk_fail();
    *extraout_x18 = sym.haptics_hw_init;
    pcStack_d8 = sym.haptics_hw_init;
    iVar10 = sp_el0;
    iStack_e8 = *(iVar10 + 0x5e0);
    iVar3 = *(puVar6 + 0x71);
    puStack_e0 = &stack0xffffffffffffffe0;
    if (iVar3 == 2) {
        uVar2 = 0x1f;
code_r0x08008e10:
        *(puVar6 + 0x6f) = *(puVar6 + 0x6f) | uVar2;
code_r0x08008e1c:
        uStack_ec = uStack_ec & 0xffff0000;
        if (puVar6[0x3b] == 0) {
code_r0x08008e54:
            uStack_ec = uStack_ec & 0xffffff00;
            if ((puVar6[0x51] == 0) && (*(puVar6 + 0x71) != 3)) {
                pcVar17 = *(puVar6 + 0x6e) + 0x70U & 0xffff;
                uVar2 = regmap_bulk_read(puVar6[1],pcVar17,&uStack_ec,1);
                if (-1 < uVar2) {
                    *(puVar6 + 0x38e) = uStack_ec & 1;
                    goto code_r0x08008e9c;
                }
                goto code_r0x0800917c;
            }
code_r0x08008e9c:
            *(puVar6 + 0x72) = 1;
            *(puVar6 + 0x386) = 11000;
            if (*(puVar6 + 0x71) - 3U < 2) {
                pcVar17 = *(puVar6 + 0x6d) + 0xdU & 0xffff;
                uVar2 = regmap_bulk_read(puVar6[1],pcVar17,&uStack_ec,1);
                if (uVar2 < 0) goto code_r0x0800917c;
                uVar14 = 6000;
                if ((uStack_ec & 2) != 0) {
                    uVar14 = 10000;
                }
                *(puVar6 + 0x72) = (uStack_ec & 2) >> 1;
                *(puVar6 + 0x386) = uVar14;
            }
            pcVar17 = puVar6 + 0x5f;
            uVar2 = *(puVar6 + 0x34);
            *(puVar6 + 0x374) = 10000;
            mutex_lock(pcVar17);
            sym.__haptics_set_vmax_mv(puVar6,uVar2);
            mutex_unlock(pcVar17);
            regmap_update_bits_base(puVar6[1],*(puVar6 + 0x6d) + 0x49U & 0xffff,0x13,*(puVar6 + 0xd),0,0,0);
            regmap_update_bits_base
                      (puVar6[1],*(puVar6 + 0x6d) + 0x50U & 0xffff,0xcf,
                       (*(puVar6 + 4) & 3) << 6 | (*(puVar6 + 5) & 3) << 2 | *(puVar6 + 0x24) & 3,0,0,0);
            uStack_ec = uStack_ec & 0xffffff00;
            if (*(puVar6 + 0x71) != 3) goto code_r0x08009014;
            if (puVar6[0x51] == 0) {
                pcVar17 = *(puVar6 + 0x6d) + 0x80U & 0xffff;
                uVar2 = regmap_bulk_read(puVar6[1],pcVar17,&uStack_ec,1);
                if (-1 < uVar2) {
                    *(puVar6 + 899) = uStack_ec & 3;
                    if ((*(puVar6 + 0x35c) == 0) && ((uStack_ec & 3) == 1)) {
                        pcVar17 = *(puVar6 + 0x6d) + 0x84U & 0xffff;
                        uVar2 = regmap_bulk_read(puVar6[1],pcVar17,&uStack_ec,1);
                        if (uVar2 < 0) goto code_r0x0800917c;
                        *(puVar6 + 0x35c) = (uStack_ec & 0xff) << 5;
                    }
code_r0x08009014:
                    if ((puVar6[0x51] != 0) || (unaff_x21 = pcVar17, *(puVar6 + 0x71) == 3)) goto code_r0x08009028;
                    goto code_r0x08009050;
                }
code_r0x0800917c:
                uVar7 = *puVar6;
                pcVar8 = "read addr %#x failed, rc=%d\n";
                unaff_x21 = pcVar17;
            }
            else {
code_r0x08009028:
                regmap_update_bits_base(puVar6[1],*(puVar6 + 0x6d) + 0x68U & 0xffff,1,1,0,0,0);
                unaff_x21 = pcVar17;
code_r0x08009050:
                if (*(puVar6 + 0x6c) != '\0') goto code_r0x08009058;
                regmap_update_bits_base(puVar6[1],*(puVar6 + 0x6d) + 0x72U & 0xffff,0xc,4,0,0,0);
                uVar2 = *(puVar6 + 8);
                iVar3 = sym.haptics_get_closeloop_lra_period(puVar6,1);
                if ((iVar3 != 0) || (uVar4 = *(puVar6 + 0x44), *(puVar6 + 0x44) == 0)) {
                    _dev_warn(*puVar6,"get closeloop LRA period failed, rc=%d\n",iVar3);
                    uVar4 = uVar2;
                }
                uVar2 = sym.haptics_config_openloop_lra_period(puVar6,uVar4);
                if (uVar2 < 0) goto code_r0x080090f4;
                iVar3 = *(puVar6 + 0x5c);
                if (iVar3 != -0x16) {
                    iVar16 = *(puVar6 + 0x6c);
                    if (iVar16 == 0) {
                        iVar9 = 0;
code_r0x08009100:
                        if (iVar9 != iVar16) {
                            piVar11 = puVar6[0x10] + iVar9 * 0x30;
                            uVar2 = sym.haptics_set_pattern(puVar6,*piVar11,*(piVar11 + 0x24));
                            uVar5 = uVar2;
                            if (uVar2 < 0) goto code_r0x080091f0;
                            goto code_r0x0800912c;
                        }
                    }
                    else {
                        iVar9 = 0;
                        do {
                            if (*(puVar6[0x10] + iVar9 * 0x30 + 0x18) == iVar3) goto code_r0x08009100;
                            iVar9 = iVar9 + 1;
                        } while (iVar16 != iVar9);
                    }
                    uVar7 = *puVar6;
                    pcVar17 = "preload effect %d is not found\n";
                    goto code_r0x080091e8;
                }
code_r0x0800912c:
                if (*(puVar6 + 0x71) != 4) {
                    _dev_printk(0x8003b96,*puVar6,"HW type %d doesn\'t support mmap\n");
code_r0x08009058:
                    uVar5 = 0;
                    goto code_r0x080091f0;
                }
                unaff_x23 = 1;
                puVar6[0x20] = 0x80000000800;
                *(puVar6 + 0x10c) = 0x580;
                *(puVar6 + 0x23) = 0x580;
                *(puVar6 + 0x21) = 1;
                *(puVar6 + 0x124) = 0x3e0;
                *(puVar6 + 0x26) = 0x3e0;
                *(puVar6 + 0x13c) = 0xe;
                if (*(puVar6 + 0x6c) == 0) {
                    uVar5 = 0;
                }
                else {
                    uVar2 = 0;
                    unaff_x24 = 0x30;
                    unaff_x25 = 0xc;
                    unaff_x21 = "no PAT_MEM source available\n";
                    unaff_x22 = "PATx_MEM sources only support one play rate\n";
                    do {
                        piVar11 = puVar6[0x10] + uVar2 * 0x30 + 8;
                        iVar10 = *piVar11;
                        if ((iVar10 != 0) && (*(iVar10 + 0x14) != '\0')) {
                            if (*(puVar6 + 0x13c) == 0xe) {
                                *(puVar6 + 0x13c) = *(iVar10 + 0xc);
                                iVar10 = *piVar11;
code_r0x080092e4:
                                uVar4 = *(iVar10 + 8);
                                if ((uVar4 & 0x1f) != 0) {
                                    uVar4 = uVar4 + 0x20 & 0xffffffe0;
                                }
                                uVar18 = *(puVar6 + 0x104) - uVar4;
                                if (uVar18 < 0x280) {
                                    uVar7 = *puVar6;
                                    pcVar17 = "not enough space for preload FIFO effect\n";
                                    goto code_r0x0800939c;
                                }
                                if ((*(puVar6 + 0x27) == '\0') && (uVar4 <= *(puVar6 + 0x26))) {
                                    iVar10 = 3;
code_r0x0800927c:
                                    *(puVar6 + 0x104) = uVar18;
                                    iVar12 = puVar6[0x10] + uVar2 * 0x30;
                                    *(puVar6 + iVar10 * 0xc + 0x114) = 1;
                                    *(puVar6 + iVar10 * 0xc + 0x110) = uVar4;
                                    *(iVar12 + 0x24) = 5;
                                    *(iVar12 + 0x28) = iVar10;
                                    goto code_r0x08009294;
                                }
                                if ((*(puVar6 + 300) == '\0') && (uVar4 <= *(puVar6 + 0x124))) {
                                    iVar10 = 2;
                                    goto code_r0x0800927c;
                                }
                                if ((*(puVar6 + 0x24) == '\0') && (uVar4 <= *(puVar6 + 0x23))) {
                                    iVar10 = 1;
                                    goto code_r0x0800927c;
                                }
                                if ((*(puVar6 + 0x114) == '\0') && (uVar4 <= *(puVar6 + 0x10c))) {
                                    iVar10 = 0;
                                    goto code_r0x0800927c;
                                }
                                _dev_warn(*puVar6,"no PAT_MEM source available\n");
                                *(*piVar11 + 0x14) = 0;
                            }
                            else {
                                if (*(puVar6 + 0x13c) == *(iVar10 + 0xc)) goto code_r0x080092e4;
                                uVar7 = *puVar6;
                                pcVar17 = unaff_x22;
code_r0x0800939c:
                                _dev_warn(uVar7,pcVar17);
                            }
                            *(*piVar11 + 0x14) = 0;
                        }
code_r0x08009294:
                        uVar2 = uVar2 + 1;
                    } while (uVar2 < *(puVar6 + 0x6c));
                    uVar2 = *(puVar6 + 0x104);
                    uStack_ec = 0;
                    uVar4 = uVar2 & 0x7f;
                    if ((uVar2 & 0x7f) != 0) {
                        uVar2 = uVar2 & 0xffffff80;
                        *(puVar6 + 0x104) = uVar2;
                        *(puVar6 + 0x22) = *(puVar6 + 0x22) + uVar4;
                    }
                    uVar5 = uVar2;
                    if ((uVar2 & 0x7f80) == 0) {
                        _dev_err(*puVar6,"fifo length %d is less than %d\n",uVar5,0x80);
                        uVar5 = 0xffffffea;
                        goto code_r0x080091f0;
                    }
                }
                pcVar17 = *(puVar6 + 0x36c) + 0xa0U & 0xffff;
                uStack_ec = (uVar5 >> 7) - 1 & 0xffffff0f | 0x80;
                uVar2 = regmap_bulk_write(puVar6[1],pcVar17,&uStack_ec,1);
                if (-1 < uVar2) {
                    uVar2 = *(puVar6 + 0x22);
                    if (*(puVar6 + 0x10c) <= *(puVar6 + 0x22)) {
                        uVar2 = *(puVar6 + 0x10c);
                    }
                    uVar4 = *(puVar6 + 0x11c);
                    if (*(puVar6 + 0x23) <= *(puVar6 + 0x11c)) {
                        uVar4 = *(puVar6 + 0x23);
                    }
                    uVar18 = *(puVar6 + 0x25);
                    if (*(puVar6 + 0x124) <= *(puVar6 + 0x25)) {
                        uVar18 = *(puVar6 + 0x124);
                    }
                    uVar1 = *(puVar6 + 0x134);
                    if (*(puVar6 + 0x26) <= *(puVar6 + 0x134)) {
                        uVar1 = *(puVar6 + 0x26);
                    }
                    pcVar17 = *(puVar6 + 0x36c) + 0xa1U & 0xffff;
                    uStack_ec = CONCAT13(uVar1 >> 5,CONCAT12(uVar18 >> 5,CONCAT11(uVar4 >> 5,uVar2 >> 5)));
                    uVar2 = regmap_bulk_write(puVar6[1],pcVar17,&uStack_ec,4);
                    if (-1 < uVar2) {
                        regmap_update_bits_base
                                  (puVar6[1],*(puVar6 + 0x36c) + 0x24U & 0xffff,0xf0,(*(puVar6 + 0x13c) & 0xf) << 4,
                                   0,0,0);
                        _dev_printk(0x8003b96,*puVar6,
                                    "haptics memory map configured with FIFO: %d, PAT1:%d, PAT2: %d, PAT3: %d, PAT4: %d\n"
                                    ,*(puVar6 + 0x104),*(puVar6 + 0x22),*(puVar6 + 0x11c),*(puVar6 + 0x25),
                                    *(puVar6 + 0x134));
                        unaff_x21 = pcVar17;
                        if (*(puVar6 + 0x6c) != 0) {
                            uVar4 = 0;
                            unaff_x21 = 0x8003b96;
                            do {
                                unaff_x23 = puVar6[0x10];
                                iVar10 = uVar4;
                                piVar11 = *(unaff_x23 + uVar4 * 0x30 + 8);
                                if ((piVar11 != NULL) && (*(piVar11 + 0x14) != '\0')) {
                                    if (*(unaff_x23 + iVar10 * 0x30 + 0x24) != 5) {
                                        uVar7 = *puVar6;
                                        pcVar17 = "effect %d pattern_src is not PATTERN_MEM\n";
                                        iVar3 = *(unaff_x23 + iVar10 * 0x30 + 0x18);
                                        goto code_r0x080091e8;
                                    }
                                    unaff_x24 = *piVar11;
                                    if (unaff_x24 == 0) {
                                        _dev_err(*puVar6,"no data available to update PAT_MEM\n");
                                        uVar5 = 0xffffffea;
                                        break;
                                    }
                                    unaff_x22 = unaff_x23 + iVar10 * 0x30 + 0x28;
                                    if (*(puVar6 + 0x71) == 4) {
                                        uVar1 = *(piVar11 + 1);
                                        unaff_x25 = uVar1;
                                        uVar18 = *(puVar6 + 0x36c) + 0x2dU & 0xffff;
                                        uStack_ec = CONCAT31(uStack_ec._1_3_,(*unaff_x22 & 3) << 4) | 0x81;
                                        uVar2 = regmap_bulk_write(puVar6[1],uVar18,&uStack_ec,1);
                                        if (-1 < uVar2) {
                                            uVar18 = *(puVar6 + 0x36c) + 0x2dU & 0xffff;
                                            uStack_ec = uStack_ec & 0xfffffffe;
                                            uVar2 = regmap_bulk_write(puVar6[1],uVar18,&uStack_ec,1);
                                            if (-1 < uVar2) {
                                                uVar2 = sym.haptics_update_memory_data(puVar6,unaff_x24,uVar1);
                                                uVar5 = uVar2;
                                                regmap_update_bits_base
                                                          (puVar6[1],*(puVar6 + 0x36c) + 0x2dU & 0xffff,0x80,0,0,0
                                                           ,0);
                                                if (uVar2 == 0) goto code_r0x0800954c;
                                                if (-1 < uVar2) goto code_r0x0800956c;
                                                break;
                                            }
                                        }
                                        uVar7 = *puVar6;
                                        pcVar17 = uVar18;
                                        pcVar8 = "write addr %#x failed, rc=%d\n";
                                        goto code_r0x08009190;
                                    }
                                    _dev_printk(0x8003b96,*puVar6,
                                                "HW type %d doesn\'t support PATx_MEM pattern source\n");
code_r0x0800954c:
                                    _dev_printk(0x8003b96,*puVar6,"effect %d is preloaded in PAT_MEM %d\n",
                                                *(unaff_x23 + iVar10 * 0x30 + 0x18),*unaff_x22);
                                }
code_r0x0800956c:
                                uVar5 = 0;
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < *(puVar6 + 0x6c));
                            goto code_r0x080091f0;
                        }
                        goto code_r0x08009058;
                    }
                }
                uVar7 = *puVar6;
                pcVar8 = "write addr %#x failed, rc=%d\n";
                unaff_x21 = pcVar17;
            }
code_r0x08009190:
            uVar5 = uVar2;
            _dev_err(uVar7,pcVar8,pcVar17,uVar5);
        }
        else {
            unaff_x21 = &uStack_ec;
            uVar2 = sym.haptics_get_status_data(puVar6,6,&uStack_ec);
            if (uVar2 < 0) {
code_r0x080090f4:
                uVar5 = uVar2;
            }
            else {
                uVar2 = nvmem_cell_write(puVar6[0x3b],unaff_x21 | 1,1);
                if (-1 < uVar2) goto code_r0x08008e54;
                uVar5 = uVar2;
                _dev_err(*puVar6,"store RNAT/RCAL to SDAM failed, rc=%d\n");
            }
        }
    }
    else {
        if (iVar3 == 4) {
            if (*(puVar6 + 900) == 1) {
                uVar2 = 2;
                goto code_r0x08008e10;
            }
            goto code_r0x08008e1c;
        }
        if (iVar3 == 3) {
            if (*(puVar6 + 0x70) == '\0') {
                uVar2 = 0x20;
                goto code_r0x08008e10;
            }
            goto code_r0x08008e1c;
        }
        uVar7 = *puVar6;
        pcVar17 = "HW type %d does not match\n";
code_r0x080091e8:
        _dev_err(uVar7,pcVar17,iVar3);
        uVar5 = 0xffffffea;
    }
code_r0x080091f0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_e8) {
        return uVar5;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.fifo_empty_irq_handler;
    pcStack_138 = sym.fifo_empty_irq_handler;
    iVar10 = sp_el0;
    iStack_148 = *(iVar10 + 0x5e0);
    auStack_14c[0] = 0;
    puVar15 = *(arg1_00 + 0x6d) + 0x10U & 0xffff;
    ppuStack_140 = &puStack_e0;
    uStack_130 = unaff_x25;
    iStack_120 = unaff_x24;
    iStack_118 = unaff_x23;
    puStack_110 = unaff_x22;
    pcStack_108 = unaff_x21;
    uStack_100 = uVar5;
    puStack_f8 = puVar6;
    iVar3 = regmap_bulk_read(arg1_00[1],puVar15,auStack_14c,1);
    if (iVar3 < 0) {
        _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",puVar15,iVar3);
        goto code_r0x08009874;
    }
    if ((auStack_14c[0] >> 1 & 1) == 0) goto code_r0x08009874;
    puVar15 = arg1_00 + 0x17;
    mutex_lock(puVar15);
    if (*(arg1_00 + 0xac) != 1) {
        if (*(arg1_00 + 0xb4) == 1) {
            _dev_printk(0x8003b96,*arg1_00,"FIFO programming got cancelled\n");
        }
        else if (arg1_00[0x13] != 0) {
            unaff_x22 = *(arg1_00[0x13] + 8);
            if ((unaff_x22 == NULL) || (*unaff_x22 == 0)) {
                _dev_err(*arg1_00,"no FIFO samples available\n");
            }
            else {
                uVar2 = *(unaff_x22 + 8);
                unaff_x21 = uVar2;
                iVar3 = *(arg1_00 + 0x15);
                uVar4 = sym.haptics_get_available_fifo_memory(arg1_00);
                if (-1 < uVar4) {
                    uVar2 = uVar2 - iVar3;
                    uVar18 = uVar4 & 0xfffffffc;
                    if (uVar2 <= uVar4) {
                        uVar18 = uVar2;
                    }
                    unaff_x21 = uVar18;
                    if (*unaff_x22 + *(arg1_00 + 0x15) == 0) {
                        _dev_err(*arg1_00,"no data available to update FIFO\n");
                        iVar3 = -0x16;
                    }
                    else {
                        iVar3 = sym.haptics_update_memory_data(arg1_00,*unaff_x22 + *(arg1_00 + 0x15),uVar18);
                        if (-1 < iVar3) {
                            *(arg1_00 + 0x15) = *(arg1_00 + 0x15) + uVar18;
                            goto code_r0x080097fc;
                        }
                    }
                    _dev_err(*arg1_00,"Update FIFO samples failed, rc=%d\n",iVar3);
                }
            }
        }
        goto code_r0x0800986c;
    }
    uVar5 = sym.haptics_get_available_fifo_memory(arg1_00);
    iVar3 = *(arg1_00 + 0x71);
    unaff_x21 = uVar5 & 0xffffffff;
    iVar16 = uVar5;
    if (iVar3 == 2) {
        if (iVar16 == 0x280) goto code_r0x08009860;
    }
    else if (iVar3 == 4) {
        iVar3 = 0x280;
        if (*(arg1_00 + 0x104) != 0) {
            iVar3 = *(arg1_00 + 0x104);
        }
        if (iVar16 == iVar3) goto code_r0x08009860;
    }
    else if (iVar3 == 3) {
        if (iVar16 == 0x400) {
code_r0x08009860:
            iVar3 = sym.haptics_stop_fifo_play(arg1_00);
            if (-1 < iVar3) {
                _dev_printk(0x8003b96,*arg1_00,"FIFO playing is done\n");
            }
            goto code_r0x0800986c;
        }
    }
    else {
        _printk(0x800334e);
        if (iVar16 == 0) goto code_r0x08009860;
    }
    unaff_x22 = *arg1_00;
    iVar3 = sym.get_max_fifo_samples(arg1_00);
    _dev_printk(0x8003b96,unaff_x22,"%d FIFO samples still in playing\n",iVar3 - iVar16);
code_r0x0800986c:
    while( true ) {
        mutex_unlock(puVar15);
code_r0x08009874:
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_148) break;
        __stack_chk_fail();
        iVar10 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar10) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar10) & 0x3f) & 1)
            != 0) {
            iVar10 = sp_el0;
            *(iVar10 + 0x10) = *(iVar10 + 0x10) + 1;
            piVar11 = *0x8012b90;
            piVar13 = *0x8012b90;
            while (piVar13 != NULL) {
                (**piVar11)(piVar11[1],extraout_w9,extraout_w8,unaff_x21 & 0xffffffff);
                piVar11 = piVar11 + 3;
                piVar13 = *piVar11;
            }
            iVar12 = *(iVar10 + 0x10) + -1;
            *(iVar10 + 0x10) = iVar12;
            if ((iVar12 == 0) || (*(iVar10 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x080097fc:
        if (*(arg1_00 + 0x15) == *(unaff_x22 + 8)) {
            _dev_printk(0x8003b96,*arg1_00,"FIFO programming is done\n");
            *(arg1_00 + 0xac) = 1;
            sym.haptics_set_fifo_empty_threshold(arg1_00);
        }
    }
    return 1;
}


// ===== sym.haptics_hw_init @ 0x08008d94 (size 2352) =====

uint64_t sym.haptics_hw_init(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *arg1_00;
    int iVar7;
    uint extraout_w8;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint extraout_w9;
    ushort uVar11;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar13;
    uint64_t uVar14;
    int iVar15;
    char *unaff_x21;
    uint32_t *puVar16;
    char *unaff_x22;
    int64_t unaff_x23;
    int64_t unaff_x24;
    uint64_t unaff_x25;
    uint32_t uVar17;
    int64_t iVar18;
    ulong unaff_x30;
    uint8_t auStack_cc [4];
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint64_t uStack_b0;
    int64_t iStack_a0;
    int64_t iStack_98;
    uint32_t *puStack_90;
    uint32_t *puStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar18 = sp_el0;
    iStack_68 = *(iVar18 + 0x5e0);
    iVar3 = *(arg1 + 0x388);
    if (iVar3 == 2) {
        uVar2 = 0x1f;
code_r0x08008e10:
        *(arg1 + 0x378) = *(arg1 + 0x378) | uVar2;
code_r0x08008e1c:
        uStack_6c = uStack_6c & 0xffff0000;
        if (*(arg1 + 0x1d8) == 0) {
code_r0x08008e54:
            uStack_6c = uStack_6c & 0xffffff00;
            if ((*(arg1 + 0x288) == 0) && (*(arg1 + 0x388) != 3)) {
                puVar16 = *(arg1 + 0x370) + 0x70U & 0xffff;
                uVar2 = regmap_bulk_read(*(arg1 + 8),puVar16,&uStack_6c,1);
                if (-1 < uVar2) {
                    *(arg1 + 0x38e) = uStack_6c & 1;
                    goto code_r0x08008e9c;
                }
                goto code_r0x0800917c;
            }
code_r0x08008e9c:
            *(arg1 + 0x390) = 1;
            *(arg1 + 0x386) = 11000;
            if (*(arg1 + 0x388) - 3U < 2) {
                puVar16 = *(arg1 + 0x368) + 0xdU & 0xffff;
                uVar2 = regmap_bulk_read(*(arg1 + 8),puVar16,&uStack_6c,1);
                if (uVar2 < 0) goto code_r0x0800917c;
                uVar11 = 6000;
                if ((uStack_6c & 2) != 0) {
                    uVar11 = 10000;
                }
                *(arg1 + 0x390) = (uStack_6c & 2) >> 1;
                *(arg1 + 0x386) = uVar11;
            }
            puVar16 = arg1 + 0x2f8;
            uVar2 = *(arg1 + 0x34);
            *(arg1 + 0x374) = 10000;
            mutex_lock(puVar16);
            sym.__haptics_set_vmax_mv(arg1,uVar2);
            mutex_unlock(puVar16);
            regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x49U & 0xffff,0x13,*(arg1 + 0x68),0,0,0);
            regmap_update_bits_base
                      (*(arg1 + 8),*(arg1 + 0x368) + 0x50U & 0xffff,0xcf,
                       (*(arg1 + 0x20) & 3) << 6 | (*(arg1 + 0x28) & 3) << 2 | *(arg1 + 0x24) & 3,0,0,0);
            uStack_6c = uStack_6c & 0xffffff00;
            if (*(arg1 + 0x388) != 3) goto code_r0x08009014;
            if (*(arg1 + 0x288) == 0) {
                puVar16 = *(arg1 + 0x368) + 0x80U & 0xffff;
                uVar2 = regmap_bulk_read(*(arg1 + 8),puVar16,&uStack_6c,1);
                if (-1 < uVar2) {
                    *(arg1 + 899) = uStack_6c & 3;
                    if ((*(arg1 + 0x35c) == 0) && ((uStack_6c & 3) == 1)) {
                        puVar16 = *(arg1 + 0x368) + 0x84U & 0xffff;
                        uVar2 = regmap_bulk_read(*(arg1 + 8),puVar16,&uStack_6c,1);
                        if (uVar2 < 0) goto code_r0x0800917c;
                        *(arg1 + 0x35c) = (uStack_6c & 0xff) << 5;
                    }
code_r0x08009014:
                    if ((*(arg1 + 0x288) != 0) || (unaff_x21 = puVar16, *(arg1 + 0x388) == 3)) goto code_r0x08009028;
                    goto code_r0x08009050;
                }
code_r0x0800917c:
                uVar5 = *arg1;
                pcVar6 = "read addr %#x failed, rc=%d\n";
                unaff_x21 = puVar16;
            }
            else {
code_r0x08009028:
                regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x68U & 0xffff,1,1,0,0,0);
                unaff_x21 = puVar16;
code_r0x08009050:
                if (*(arg1 + 0x6c) != '\0') goto code_r0x08009058;
                regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x72U & 0xffff,0xc,4,0,0,0);
                uVar2 = *(arg1 + 0x40);
                iVar3 = sym.haptics_get_closeloop_lra_period(arg1,1);
                if ((iVar3 != 0) || (uVar4 = *(arg1 + 0x44), *(arg1 + 0x44) == 0)) {
                    _dev_warn(*arg1,"get closeloop LRA period failed, rc=%d\n",iVar3);
                    uVar4 = uVar2;
                }
                uVar2 = sym.haptics_config_openloop_lra_period(arg1,uVar4);
                if (uVar2 < 0) goto code_r0x080090f4;
                iVar3 = *(arg1 + 0x5c);
                if (iVar3 != -0x16) {
                    iVar15 = *(arg1 + 0x360);
                    if (iVar15 == 0) {
                        iVar7 = 0;
code_r0x08009100:
                        if (iVar7 != iVar15) {
                            piVar8 = *(arg1 + 0x80) + iVar7 * 0x30;
                            uVar2 = sym.haptics_set_pattern(arg1,*piVar8,*(piVar8 + 0x24));
                            uVar14 = uVar2;
                            if (uVar2 < 0) goto code_r0x080091f0;
                            goto code_r0x0800912c;
                        }
                    }
                    else {
                        iVar7 = 0;
                        do {
                            if (*(*(arg1 + 0x80) + iVar7 * 0x30 + 0x18) == iVar3) goto code_r0x08009100;
                            iVar7 = iVar7 + 1;
                        } while (iVar15 != iVar7);
                    }
                    uVar5 = *arg1;
                    pcVar6 = "preload effect %d is not found\n";
                    goto code_r0x080091e8;
                }
code_r0x0800912c:
                if (*(arg1 + 0x388) != 4) {
                    _dev_printk(0x8003b96,*arg1,"HW type %d doesn\'t support mmap\n");
code_r0x08009058:
                    uVar14 = 0;
                    goto code_r0x080091f0;
                }
                unaff_x23 = 1;
                *(arg1 + 0x100) = 0x80000000800;
                *(arg1 + 0x10c) = 0x580;
                *(arg1 + 0x118) = 0x580;
                *(arg1 + 0x108) = 1;
                *(arg1 + 0x124) = 0x3e0;
                *(arg1 + 0x130) = 0x3e0;
                *(arg1 + 0x13c) = 0xe;
                if (*(arg1 + 0x360) == 0) {
                    uVar14 = 0;
                }
                else {
                    uVar2 = 0;
                    unaff_x24 = 0x30;
                    unaff_x25 = 0xc;
                    unaff_x21 = "no PAT_MEM source available\n";
                    unaff_x22 = "PATx_MEM sources only support one play rate\n";
                    do {
                        piVar8 = *(arg1 + 0x80) + uVar2 * 0x30 + 8;
                        iVar18 = *piVar8;
                        if ((iVar18 != 0) && (*(iVar18 + 0x14) != '\0')) {
                            if (*(arg1 + 0x13c) == 0xe) {
                                *(arg1 + 0x13c) = *(iVar18 + 0xc);
                                iVar18 = *piVar8;
code_r0x080092e4:
                                uVar4 = *(iVar18 + 8);
                                if ((uVar4 & 0x1f) != 0) {
                                    uVar4 = uVar4 + 0x20 & 0xffffffe0;
                                }
                                uVar17 = *(arg1 + 0x104) - uVar4;
                                if (uVar17 < 0x280) {
                                    uVar5 = *arg1;
                                    pcVar6 = "not enough space for preload FIFO effect\n";
                                    goto code_r0x0800939c;
                                }
                                if ((*(arg1 + 0x138) == '\0') && (uVar4 <= *(arg1 + 0x130))) {
                                    iVar18 = 3;
code_r0x0800927c:
                                    iVar12 = arg1 + iVar18 * 0xc;
                                    *(arg1 + 0x104) = uVar17;
                                    iVar9 = *(arg1 + 0x80) + uVar2 * 0x30;
                                    *(iVar12 + 0x114) = 1;
                                    *(iVar12 + 0x110) = uVar4;
                                    *(iVar9 + 0x24) = 5;
                                    *(iVar9 + 0x28) = iVar18;
                                    goto code_r0x08009294;
                                }
                                if ((*(arg1 + 300) == '\0') && (uVar4 <= *(arg1 + 0x124))) {
                                    iVar18 = 2;
                                    goto code_r0x0800927c;
                                }
                                if ((*(arg1 + 0x120) == '\0') && (uVar4 <= *(arg1 + 0x118))) {
                                    iVar18 = 1;
                                    goto code_r0x0800927c;
                                }
                                if ((*(arg1 + 0x114) == '\0') && (uVar4 <= *(arg1 + 0x10c))) {
                                    iVar18 = 0;
                                    goto code_r0x0800927c;
                                }
                                _dev_warn(*arg1,"no PAT_MEM source available\n");
                                *(*piVar8 + 0x14) = 0;
                            }
                            else {
                                if (*(arg1 + 0x13c) == *(iVar18 + 0xc)) goto code_r0x080092e4;
                                uVar5 = *arg1;
                                pcVar6 = unaff_x22;
code_r0x0800939c:
                                _dev_warn(uVar5,pcVar6);
                            }
                            *(*piVar8 + 0x14) = 0;
                        }
code_r0x08009294:
                        uVar2 = uVar2 + 1;
                    } while (uVar2 < *(arg1 + 0x360));
                    uVar2 = *(arg1 + 0x104);
                    uStack_6c = 0;
                    uVar4 = uVar2 & 0x7f;
                    if ((uVar2 & 0x7f) != 0) {
                        uVar2 = uVar2 & 0xffffff80;
                        *(arg1 + 0x104) = uVar2;
                        *(arg1 + 0x110) = *(arg1 + 0x110) + uVar4;
                    }
                    uVar14 = uVar2;
                    if ((uVar2 & 0x7f80) == 0) {
                        _dev_err(*arg1,"fifo length %d is less than %d\n",uVar14,0x80);
                        uVar14 = 0xffffffea;
                        goto code_r0x080091f0;
                    }
                }
                puVar16 = *(arg1 + 0x36c) + 0xa0U & 0xffff;
                uStack_6c = (uVar14 >> 7) - 1 & 0xffffff0f | 0x80;
                uVar2 = regmap_bulk_write(*(arg1 + 8),puVar16,&uStack_6c,1);
                if (-1 < uVar2) {
                    uVar2 = *(arg1 + 0x110);
                    if (*(arg1 + 0x10c) <= *(arg1 + 0x110)) {
                        uVar2 = *(arg1 + 0x10c);
                    }
                    uVar4 = *(arg1 + 0x11c);
                    if (*(arg1 + 0x118) <= *(arg1 + 0x11c)) {
                        uVar4 = *(arg1 + 0x118);
                    }
                    uVar17 = *(arg1 + 0x128);
                    if (*(arg1 + 0x124) <= *(arg1 + 0x128)) {
                        uVar17 = *(arg1 + 0x124);
                    }
                    uVar1 = *(arg1 + 0x134);
                    if (*(arg1 + 0x130) <= *(arg1 + 0x134)) {
                        uVar1 = *(arg1 + 0x130);
                    }
                    puVar16 = *(arg1 + 0x36c) + 0xa1U & 0xffff;
                    uStack_6c = CONCAT13(uVar1 >> 5,CONCAT12(uVar17 >> 5,CONCAT11(uVar4 >> 5,uVar2 >> 5)));
                    uVar2 = regmap_bulk_write(*(arg1 + 8),puVar16,&uStack_6c,4);
                    if (-1 < uVar2) {
                        regmap_update_bits_base
                                  (*(arg1 + 8),*(arg1 + 0x36c) + 0x24U & 0xffff,0xf0,(*(arg1 + 0x13c) & 0xf) << 4,0
                                   ,0,0);
                        _dev_printk(0x8003b96,*arg1,
                                    "haptics memory map configured with FIFO: %d, PAT1:%d, PAT2: %d, PAT3: %d, PAT4: %d\n"
                                    ,*(arg1 + 0x104),*(arg1 + 0x110),*(arg1 + 0x11c),*(arg1 + 0x128),
                                    *(arg1 + 0x134));
                        unaff_x21 = puVar16;
                        if (*(arg1 + 0x360) != 0) {
                            uVar4 = 0;
                            unaff_x21 = 0x8003b96;
                            do {
                                unaff_x23 = *(arg1 + 0x80);
                                iVar18 = uVar4;
                                piVar8 = *(unaff_x23 + uVar4 * 0x30 + 8);
                                if ((piVar8 != NULL) && (*(piVar8 + 0x14) != '\0')) {
                                    if (*(unaff_x23 + iVar18 * 0x30 + 0x24) != 5) {
                                        uVar5 = *arg1;
                                        pcVar6 = "effect %d pattern_src is not PATTERN_MEM\n";
                                        iVar3 = *(unaff_x23 + iVar18 * 0x30 + 0x18);
                                        goto code_r0x080091e8;
                                    }
                                    unaff_x24 = *piVar8;
                                    if (unaff_x24 == 0) {
                                        _dev_err(*arg1,"no data available to update PAT_MEM\n");
                                        uVar14 = 0xffffffea;
                                        break;
                                    }
                                    unaff_x22 = unaff_x23 + iVar18 * 0x30 + 0x28;
                                    if (*(arg1 + 0x388) == 4) {
                                        uVar1 = *(piVar8 + 1);
                                        unaff_x25 = uVar1;
                                        uVar17 = *(arg1 + 0x36c) + 0x2dU & 0xffff;
                                        uStack_6c = CONCAT31(uStack_6c._1_3_,(*unaff_x22 & 3) << 4) | 0x81;
                                        uVar2 = regmap_bulk_write(*(arg1 + 8),uVar17,&uStack_6c,1);
                                        if (-1 < uVar2) {
                                            uVar17 = *(arg1 + 0x36c) + 0x2dU & 0xffff;
                                            uStack_6c = uStack_6c & 0xfffffffe;
                                            uVar2 = regmap_bulk_write(*(arg1 + 8),uVar17,&uStack_6c,1);
                                            if (-1 < uVar2) {
                                                uVar2 = sym.haptics_update_memory_data(arg1,unaff_x24,uVar1);
                                                uVar14 = uVar2;
                                                regmap_update_bits_base
                                                          (*(arg1 + 8),*(arg1 + 0x36c) + 0x2dU & 0xffff,0x80,0,0,0
                                                           ,0);
                                                if (uVar2 == 0) goto code_r0x0800954c;
                                                if (-1 < uVar2) goto code_r0x0800956c;
                                                break;
                                            }
                                        }
                                        uVar5 = *arg1;
                                        puVar16 = uVar17;
                                        pcVar6 = "write addr %#x failed, rc=%d\n";
                                        goto code_r0x08009190;
                                    }
                                    _dev_printk(0x8003b96,*arg1,
                                                "HW type %d doesn\'t support PATx_MEM pattern source\n");
code_r0x0800954c:
                                    _dev_printk(0x8003b96,*arg1,"effect %d is preloaded in PAT_MEM %d\n",
                                                *(unaff_x23 + iVar18 * 0x30 + 0x18),*unaff_x22);
                                }
code_r0x0800956c:
                                uVar14 = 0;
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < *(arg1 + 0x360));
                            goto code_r0x080091f0;
                        }
                        goto code_r0x08009058;
                    }
                }
                uVar5 = *arg1;
                pcVar6 = "write addr %#x failed, rc=%d\n";
                unaff_x21 = puVar16;
            }
code_r0x08009190:
            uVar14 = uVar2;
            _dev_err(uVar5,pcVar6,puVar16,uVar14);
        }
        else {
            unaff_x21 = &uStack_6c;
            uVar2 = sym.haptics_get_status_data(arg1,6,&uStack_6c);
            if (uVar2 < 0) {
code_r0x080090f4:
                uVar14 = uVar2;
            }
            else {
                uVar2 = nvmem_cell_write(*(arg1 + 0x1d8),unaff_x21 | 1,1);
                if (-1 < uVar2) goto code_r0x08008e54;
                uVar14 = uVar2;
                _dev_err(*arg1,"store RNAT/RCAL to SDAM failed, rc=%d\n");
            }
        }
    }
    else {
        if (iVar3 == 4) {
            if (*(arg1 + 900) == 1) {
                uVar2 = 2;
                goto code_r0x08008e10;
            }
            goto code_r0x08008e1c;
        }
        if (iVar3 == 3) {
            if (*(arg1 + 0x380) == '\0') {
                uVar2 = 0x20;
                goto code_r0x08008e10;
            }
            goto code_r0x08008e1c;
        }
        uVar5 = *arg1;
        pcVar6 = "HW type %d does not match\n";
code_r0x080091e8:
        _dev_err(uVar5,pcVar6,iVar3);
        uVar14 = 0xffffffea;
    }
code_r0x080091f0:
    iVar18 = sp_el0;
    if (*(iVar18 + 0x5e0) == iStack_68) {
        return uVar14;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.fifo_empty_irq_handler;
    pcStack_b8 = sym.fifo_empty_irq_handler;
    iVar18 = sp_el0;
    iStack_c8 = *(iVar18 + 0x5e0);
    auStack_cc[0] = 0;
    puVar13 = *(arg1_00 + 0x6d) + 0x10U & 0xffff;
    puStack_c0 = &stack0xffffffffffffffa0;
    uStack_b0 = unaff_x25;
    iStack_a0 = unaff_x24;
    iStack_98 = unaff_x23;
    puStack_90 = unaff_x22;
    puStack_88 = unaff_x21;
    uStack_80 = uVar14;
    iStack_78 = arg1;
    iVar3 = regmap_bulk_read(arg1_00[1],puVar13,auStack_cc,1);
    if (iVar3 < 0) {
        _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",puVar13,iVar3);
        goto code_r0x08009874;
    }
    if ((auStack_cc[0] >> 1 & 1) == 0) goto code_r0x08009874;
    puVar13 = arg1_00 + 0x17;
    mutex_lock(puVar13);
    if (*(arg1_00 + 0xac) != 1) {
        if (*(arg1_00 + 0xb4) == 1) {
            _dev_printk(0x8003b96,*arg1_00,"FIFO programming got cancelled\n");
        }
        else if (arg1_00[0x13] != 0) {
            unaff_x22 = *(arg1_00[0x13] + 8);
            if ((unaff_x22 == NULL) || (*unaff_x22 == 0)) {
                _dev_err(*arg1_00,"no FIFO samples available\n");
            }
            else {
                uVar2 = *(unaff_x22 + 8);
                unaff_x21 = uVar2;
                iVar3 = *(arg1_00 + 0x15);
                uVar4 = sym.haptics_get_available_fifo_memory(arg1_00);
                if (-1 < uVar4) {
                    uVar2 = uVar2 - iVar3;
                    uVar17 = uVar4 & 0xfffffffc;
                    if (uVar2 <= uVar4) {
                        uVar17 = uVar2;
                    }
                    unaff_x21 = uVar17;
                    if (*unaff_x22 + *(arg1_00 + 0x15) == 0) {
                        _dev_err(*arg1_00,"no data available to update FIFO\n");
                        iVar3 = -0x16;
                    }
                    else {
                        iVar3 = sym.haptics_update_memory_data(arg1_00,*unaff_x22 + *(arg1_00 + 0x15),uVar17);
                        if (-1 < iVar3) {
                            *(arg1_00 + 0x15) = *(arg1_00 + 0x15) + uVar17;
                            goto code_r0x080097fc;
                        }
                    }
                    _dev_err(*arg1_00,"Update FIFO samples failed, rc=%d\n",iVar3);
                }
            }
        }
        goto code_r0x0800986c;
    }
    uVar14 = sym.haptics_get_available_fifo_memory(arg1_00);
    iVar3 = *(arg1_00 + 0x71);
    unaff_x21 = uVar14 & 0xffffffff;
    iVar15 = uVar14;
    if (iVar3 == 2) {
        if (iVar15 == 0x280) goto code_r0x08009860;
    }
    else if (iVar3 == 4) {
        iVar3 = 0x280;
        if (*(arg1_00 + 0x104) != 0) {
            iVar3 = *(arg1_00 + 0x104);
        }
        if (iVar15 == iVar3) goto code_r0x08009860;
    }
    else if (iVar3 == 3) {
        if (iVar15 == 0x400) {
code_r0x08009860:
            iVar3 = sym.haptics_stop_fifo_play(arg1_00);
            if (-1 < iVar3) {
                _dev_printk(0x8003b96,*arg1_00,"FIFO playing is done\n");
            }
            goto code_r0x0800986c;
        }
    }
    else {
        _printk(0x800334e);
        if (iVar15 == 0) goto code_r0x08009860;
    }
    unaff_x22 = *arg1_00;
    iVar3 = sym.get_max_fifo_samples(arg1_00);
    _dev_printk(0x8003b96,unaff_x22,"%d FIFO samples still in playing\n",iVar3 - iVar15);
code_r0x0800986c:
    while( true ) {
        mutex_unlock(puVar13);
code_r0x08009874:
        iVar18 = sp_el0;
        if (*(iVar18 + 0x5e0) == iStack_c8) break;
        __stack_chk_fail();
        iVar18 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar18) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar18) & 0x3f) & 1)
            != 0) {
            iVar18 = sp_el0;
            *(iVar18 + 0x10) = *(iVar18 + 0x10) + 1;
            piVar8 = *0x8012b90;
            piVar10 = *0x8012b90;
            while (piVar10 != NULL) {
                (**piVar8)(piVar8[1],extraout_w9,extraout_w8,unaff_x21 & 0xffffffff);
                piVar8 = piVar8 + 3;
                piVar10 = *piVar8;
            }
            iVar9 = *(iVar18 + 0x10) + -1;
            *(iVar18 + 0x10) = iVar9;
            if ((iVar9 == 0) || (*(iVar18 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x080097fc:
        if (*(arg1_00 + 0x15) == *(unaff_x22 + 8)) {
            _dev_printk(0x8003b96,*arg1_00,"FIFO programming is done\n");
            *(arg1_00 + 0xac) = 1;
            sym.haptics_set_fifo_empty_threshold(arg1_00);
        }
    }
    return 1;
}


// ===== sym.fifo_empty_irq_handler @ 0x080096c4 (size 868) =====

ulong sym.fifo_empty_irq_handler(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t uVar5;
    uint extraout_w8;
    int64_t *piVar6;
    uint extraout_w9;
    ulong *in_x18;
    uint64_t uVar7;
    uint32_t unaff_w21;
    int64_t *unaff_x22;
    int64_t *piVar8;
    ulong unaff_x30;
    uint8_t auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    auStack_5c[0] = 0;
    uVar7 = *(arg2 + 0x368) + 0x10U & 0xffff;
    iVar4 = regmap_bulk_read(*(arg2 + 8),uVar7,auStack_5c,1);
    if (iVar4 < 0) {
        _dev_err(*arg2,"read addr %#x failed, rc=%d\n",uVar7,iVar4);
        goto code_r0x08009874;
    }
    if ((auStack_5c[0] >> 1 & 1) == 0) goto code_r0x08009874;
    uVar7 = arg2 + 0xb8;
    mutex_lock(uVar7);
    if (*(arg2 + 0xac) != 1) {
        if (*(arg2 + 0xb4) == 1) {
            _dev_printk(0x8003b96,*arg2,"FIFO programming got cancelled\n");
        }
        else if (*(arg2 + 0x98) != 0) {
            unaff_x22 = *(*(arg2 + 0x98) + 8);
            if ((unaff_x22 == NULL) || (*unaff_x22 == 0)) {
                _dev_err(*arg2,"no FIFO samples available\n");
            }
            else {
                unaff_w21 = *(unaff_x22 + 1);
                iVar4 = *(arg2 + 0xa8);
                uVar5 = sym.haptics_get_available_fifo_memory(arg2);
                if (-1 < uVar5) {
                    uVar2 = unaff_w21 - iVar4;
                    iVar1 = *unaff_x22 + *(arg2 + 0xa8);
                    unaff_w21 = uVar5 & 0xfffffffc;
                    if (uVar2 <= uVar5) {
                        unaff_w21 = uVar2;
                    }
                    if (iVar1 == 0) {
                        _dev_err(*arg2,"no data available to update FIFO\n");
                        iVar4 = -0x16;
                    }
                    else {
                        iVar4 = sym.haptics_update_memory_data(arg2,iVar1,unaff_w21);
                        if (-1 < iVar4) {
                            *(arg2 + 0xa8) = *(arg2 + 0xa8) + unaff_w21;
                            goto code_r0x080097fc;
                        }
                    }
                    _dev_err(*arg2,"Update FIFO samples failed, rc=%d\n",iVar4);
                }
            }
        }
        goto code_r0x0800986c;
    }
    unaff_w21 = sym.haptics_get_available_fifo_memory(arg2);
    iVar4 = *(arg2 + 0x388);
    if (iVar4 == 2) {
        if (unaff_w21 == 0x280) goto code_r0x08009860;
    }
    else if (iVar4 == 4) {
        uVar5 = 0x280;
        if (*(arg2 + 0x104) != 0) {
            uVar5 = *(arg2 + 0x104);
        }
        if (unaff_w21 == uVar5) goto code_r0x08009860;
    }
    else if (iVar4 == 3) {
        if (unaff_w21 == 0x400) {
code_r0x08009860:
            iVar4 = sym.haptics_stop_fifo_play(arg2);
            if (-1 < iVar4) {
                _dev_printk(0x8003b96,*arg2,"FIFO playing is done\n");
            }
            goto code_r0x0800986c;
        }
    }
    else {
        _printk(0x800334e);
        if (unaff_w21 == 0) goto code_r0x08009860;
    }
    unaff_x22 = *arg2;
    iVar4 = sym.get_max_fifo_samples(arg2);
    _dev_printk(0x8003b96,unaff_x22,"%d FIFO samples still in playing\n",iVar4 - unaff_w21);
code_r0x0800986c:
    while( true ) {
        mutex_unlock(uVar7);
code_r0x08009874:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_58) break;
        __stack_chk_fail();
        iVar1 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar1) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar1) & 0x3f) & 1) !=
            0) {
            iVar1 = sp_el0;
            *(iVar1 + 0x10) = *(iVar1 + 0x10) + 1;
            piVar8 = *0x8012b90;
            piVar6 = *0x8012b90;
            while (piVar6 != NULL) {
                (**piVar8)(piVar8[1],extraout_w9,extraout_w8,unaff_w21);
                piVar8 = piVar8 + 3;
                piVar6 = *piVar8;
            }
            iVar3 = *(iVar1 + 0x10) + -1;
            *(iVar1 + 0x10) = iVar3;
            if ((iVar3 == 0) || (*(iVar1 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x080097fc:
        if (*(arg2 + 0xa8) == unaff_x22[1]) {
            _dev_printk(0x8003b96,*arg2,"FIFO programming is done\n");
            *(arg2 + 0xac) = 1;
            sym.haptics_set_fifo_empty_threshold(arg2);
        }
    }
    return 1;
}


// ===== sym.haptics_set_vmax_headroom_mv @ 0x08009a48 (size 252) =====

int sym.haptics_set_vmax_headroom_mv(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    if (arg2 < 0x18cf) {
        uVar1 = *(arg1 + 0x368) + 0x67U & 0xffff;
        auStack_3c[0] = (arg2 >> 1 & 0x7fff) / 0x19;
        iVar2 = regmap_bulk_write(*(arg1 + 8),uVar1,auStack_3c,1);
        if (iVar2 < 0) {
            _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar1,iVar2);
            _dev_err(*arg1,"config VMAX_HDRM failed, rc=%d\n",iVar2);
        }
    }
    else {
        _dev_err(*arg1,"headroom (%d) exceed the max value: %d\n",arg2,0x18ce);
        iVar2 = -0x16;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return iVar2;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.haptics_disable_hbst_timer;
    iVar2 = sym.haptics_boost_vreg_enable(iVar3 + -0x290,0);
    uVar4 = *(iVar3 + -0x290);
    if (iVar2 < 0) {
        _dev_err(uVar4,"disable boost vreg failed, rc=%d\n",iVar2);
    }
    else {
        _dev_printk(0x8003b96,uVar4,"boost vreg is disabled\n");
    }
    return 0;
}


// ===== sym.haptics_disable_hbst_timer @ 0x08009b44 (size 116) =====

ulong sym.haptics_disable_hbst_timer(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.haptics_boost_vreg_enable(arg1 + -0x290,0);
    uVar2 = *(arg1 + -0x290);
    if (iVar1 < 0) {
        _dev_err(uVar2,"disable boost vreg failed, rc=%d\n",iVar1);
    }
    else {
        _dev_printk(0x8003b96,uVar2,"boost vreg is disabled\n");
    }
    return 0;
}


// ===== sym.haptics_stop_constant_effect_play @ 0x08009bb8 (size 116) =====

void sym.haptics_stop_constant_effect_play(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + -0x148;
    iVar1 = sym.haptics_enable_play(arg1_00,0);
    if (iVar1 < 0) {
        _dev_err(*arg1_00,"stop constant effect play failed\n");
    }
    iVar1 = sym.haptics_enable_hpwr_vreg(arg1_00,0);
    if (iVar1 < 0) {
        _dev_err(*arg1_00,"disable hpwr_vreg failed\n");
    }
    return;
}


// ===== sym.haptics_set_gain_work @ 0x08009c2c (size 392) =====

uint64_t sym.haptics_set_gain_work(int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1_00;
    uint32_t uVar5;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    arg1_00 = arg1 + -0x328;
    uVar5 = *(arg1 + -0x240);
    if (*(arg1 + -0x234) == 1) {
        uVar3 = sym.get_direct_play_max_amplitude(arg1_00);
        uVar5 = ((uVar5 & 0xffff) * (uVar3 & 0xff)) / 0x7fff;
        _dev_printk(0x8003b96,*arg1_00,"Set amplitude: %#x\n",uVar5);
        auStack_3c[0] = uVar5;
        uVar5 = *(arg1 + 0x44) + 0x26U & 0xffff;
        uVar4 = regmap_bulk_write(*(arg1 + -800),uVar5,&stack0xffffffffffffffc4,1);
        if (uVar4 < 0) {
            _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",uVar5,uVar4 & 0xffffffff);
            uVar4 = _dev_err(*arg1_00,"config DIRECT_PLAY failed, rc=%d\n",uVar4 & 0xffffffff);
        }
    }
    else {
        puVar1 = arg1 + -0x2f4;
        if (*(arg1 + -0x290) != 0) {
            puVar1 = *(arg1 + -0x290) + 0x1c;
        }
        uVar3 = 5000;
        if (*puVar1 < 0x1389 || *(arg1 + 0x66) == '\0') {
            uVar3 = *puVar1;
        }
        uVar5 = (uVar3 * (uVar5 & 0xffff)) / 0x7fff;
        *(arg1 + -0x23c) = uVar5;
        uVar4 = sym.__haptics_set_vmax_mv(arg1_00,uVar5);
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    __stack_chk_fail();
    *extraout_x18 = 0x8009db0;
    *0x8000588 = 0;
    _dev_info(_reloc.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt,"cancel delay for play fifo(after direct play)\n");
    return 0;
}


// ===== sym.haptics_disable_fifo_delay_timer @ 0x08009db4 (size 64) =====

ulong sym.haptics_disable_fifo_delay_timer(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *0x8000588 = 0;
    _dev_info(_reloc.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt,"cancel delay for play fifo(after direct play)\n");
    return 0;
}


// ===== sym.haptics_upload_effect @ 0x08009df4 (size 3128) =====

int sym.haptics_upload_effect(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint32_t uVar2;
    int16_t iVar3;
    ushort uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    code *pcVar7;
    int iVar8;
    uint32_t uVar9;
    uint uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    char *pcVar14;
    uint32_t *puVar15;
    ulong *in_x18;
    ulong *arg1_00;
    int64_t iVar16;
    int64_t *arg1_01;
    uint32_t uVar17;
    ulong unaff_x30;
    int iStack_84;
    ulong uStack_80;
    uint8_t auStack_74 [4];
    ulong uStack_70;
    uint64_t uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_58 = *(iVar11 + 0x5e0);
    iVar8 = 0;
    arg1_00 = *(arg1 + 0x2d8);
    iStack_84 = 0;
    uStack_80 = 0x79726574746162;
    if (*(arg1_00 + 0x74) == 1) {
        uVar12 = thermal_zone_get_zone_by_name(&uStack_80);
        if (uVar12 < 0xfffffffffffff001) {
            uVar12 = thermal_zone_get_temp(uVar12,&iStack_84);
            uVar12 = uVar12 & 0xffffffff;
        }
        else {
            _dev_printk(0x8003b96,*arg1_00,
                        "haptics_upload_effect, No thermal zone for temperature,use default temperature,err:%d\n",
                        uVar12 & 0xffffffff);
            iStack_84 = 0x14;
        }
        iVar8 = uVar12;
        _dev_printk(0x8003b96,*arg1_00,"haptics_upload_effect, temperature:%d,ret:%d\n",iStack_84,
                    uVar12 & 0xffffffff);
    }
    iVar3 = *arg2;
    if (iVar3 == 0x51) {
        if (*(arg2 + 0x10) == 0x5d) {
            if (*(arg2 + 0x24) == 6) {
                iVar16 = *(arg2 + 0x28);
                iVar3 = *(arg2 + 0x14);
                uStack_70 = uStack_70 & 0xffff000000000000;
                iVar11 = sym._copy_from_user(&uStack_70,iVar16,6);
                if (iVar11 == 0) {
                    uVar9 = uStack_70;
                    if (uStack_70 < 0) {
                        uVar17 = *(arg1_00 + 0x364);
                        if (uVar17 != 0) {
                            uVar2 = uStack_70 & 0x7fff;
                            iVar11 = 0x88;
                            goto code_r0x0800a3f8;
                        }
                    }
                    else {
                        uVar17 = *(arg1_00 + 0x6c);
                        if (uVar17 != 0) {
                            iVar11 = 0x80;
                            uVar2 = uVar9;
code_r0x0800a3f8:
                            iVar11 = *(arg1_00 + iVar11);
                            if (uVar17 < 1) {
                                uVar12 = 0;
code_r0x0800a440:
                                if (uVar12 != uVar17) {
                                    puVar1 = arg1_00 + 0x17;
                                    mutex_lock(puVar1);
                                    if (*(arg1_00 + 0x1f) == '\0') {
                                        iVar11 = iVar11 + (uVar12 & 0xffffffff) * 0x30;
                                        pcVar14 = "predefined";
                                        if (uVar9 < 0) {
                                            pcVar14 = "primitive";
                                        }
                                        *(arg1_00 + 0xec) = (*(iVar11 + 0x1c) * iVar3) / 0x7fff;
                                        _dev_printk(0x8003b96,*arg1_00,"upload %s effect %d, vmax=%d\n",pcVar14,
                                                    *(iVar11 + 0x18));
                                        iVar8 = sym.haptics_load_predefined_effect(arg1_00,iVar11);
                                        if (-1 < iVar8) {
                                            mutex_unlock(puVar1);
                                            uVar9 = sym.get_play_length_us(arg1_00 + 0x13);
                                            uVar12 = uStack_70;
                                            *(arg1_00 + 0x1e) = uVar9;
                                            uStack_70._6_2_ = SUB82(uVar12,6);
                                            uStack_70._0_6_ =
                                                 CONCAT24((uVar9 % 1000000) / 1000,CONCAT22(uVar9 / 1000000,uStack_70)
                                                         );
                                            iVar11 = sym._copy_to_user(iVar16);
                                            if (iVar11 == 0) goto code_r0x08009e80;
                                            goto code_r0x0800a550;
                                        }
                                        _dev_err(*arg1_00,"Play predefined effect%d failed, rc=%d\n",*(iVar11 + 0x18)
                                                 ,iVar8);
                                    }
                                    else {
                                        _dev_err(*arg1_00,"calibration in progress, ignore playing predefined effect\n"
                                                );
                                        iVar8 = -0x10;
                                    }
                                    mutex_unlock(puVar1);
                                    goto code_r0x0800a554;
                                }
                            }
                            else {
                                uVar12 = 0;
                                puVar15 = iVar11 + 0x18;
                                do {
                                    if (*puVar15 == (uVar2 & 0xffff)) goto code_r0x0800a440;
                                    uVar12 = uVar12 + 1;
                                    puVar15 = puVar15 + 0xc;
                                } while (uVar17 != uVar12);
                            }
                            _dev_err(*arg1_00,"effect%d is not supported!\n",uVar9);
                            iVar8 = -0x16;
                            goto code_r0x0800a554;
                        }
                    }
                    iVar8 = -0x16;
                }
                else {
code_r0x0800a550:
                    iVar8 = -0xe;
                }
code_r0x0800a554:
                uVar13 = *arg1_00;
                pcVar14 = "Upload periodic effect failed\n";
            }
            else {
                if (*(arg2 + 0x24) != 0x18) goto code_r0x08009e80;
                uStack_68 = 0;
                iStack_60 = 0;
                iVar11 = *(arg2 + 0x28);
                uStack_70 = 0;
                iVar3 = *(arg2 + 0x14);
                if ((*(arg1_00 + 0xf4) == 1) && (_segment.ehdr != 0)) {
                    msleep();
                    _dev_printk(0x8003b96,*arg1_00,"direct-play detected, delay %dms",_segment.ehdr);
                }
                if ((arg1_00[0x12] == 0) || (arg1_01 = *(arg1_00[0x12] + 8), arg1_01 == NULL)) {
                    iVar8 = -0xc;
                }
                else {
                    iVar11 = sym._copy_from_user(&uStack_70,iVar11,0x18);
                    if (iVar11 == 0) {
                        _dev_printk(0x8003b96,*arg1_00,"custom data length %d with play-rate %d Hz\n",uStack_70._4_4_
                                    ,uStack_68 & 0xffffffff);
                        uVar9 = *(arg1_00 + 8);
                        if ((uVar9 == 0) || (200000 < uVar9)) {
code_r0x0800a3b4:
                            _dev_err(*arg1_00,"Can\'t support play rate: %d Hz\n");
                            iVar8 = -0x16;
                        }
                        else {
                            if (uStack_68 < 32000) {
                                if (uStack_68 == 8000) {
                                    uVar10 = 8;
                                }
                                else if (uStack_68 == 16000) {
                                    uVar10 = 9;
                                }
                                else if (uStack_68 == 24000) {
                                    uVar10 = 10;
                                }
                                else {
code_r0x0800a784:
                                    uVar17 = 0;
                                    if (uVar9 != 0) {
                                        uVar17 = 1000000 / uVar9;
                                    }
                                    uVar9 = uVar17 - 5;
                                    uVar17 = uVar17 + 5;
                                    if (((uVar17 < uStack_68) || (uVar17 < uVar9)) || (uStack_68 < uVar9)) {
                                        if (uVar17 < uVar9) goto code_r0x0800a3b4;
                                        if ((uStack_68 >> 1 < uVar9) || (uVar17 < uStack_68 >> 1)) {
                                            if ((uStack_68 >> 2 < uVar9) || (uVar17 < uStack_68 >> 2)) {
                                                if ((uStack_68 >> 3 < uVar9) || (uVar17 < uStack_68 >> 3)) {
                                                    if ((uStack_68 * 2 < uVar9) || (uVar17 < uStack_68 * 2)) {
                                                        if ((uStack_68 * 4 < uVar9) || (uVar17 < uStack_68 * 4)) {
                                                            if ((uStack_68 * 8 < uVar9) || (uVar17 < uStack_68 * 8))
                                                            goto code_r0x0800a3b4;
                                                            uVar10 = 6;
                                                        }
                                                        else {
                                                            uVar10 = 5;
                                                        }
                                                    }
                                                    else {
                                                        uVar10 = 4;
                                                    }
                                                }
                                                else {
                                                    uVar10 = 3;
                                                }
                                            }
                                            else {
                                                uVar10 = 2;
                                            }
                                        }
                                        else {
                                            uVar10 = 1;
                                        }
                                    }
                                    else {
                                        uVar10 = 0;
                                    }
                                }
                            }
                            else if (uStack_68 == 32000) {
                                uVar10 = 0xb;
                            }
                            else if (uStack_68 == 0xac44) {
                                uVar10 = 0xc;
                            }
                            else {
                                if (uStack_68 != 48000) goto code_r0x0800a784;
                                uVar10 = 0xd;
                            }
                            mutex_lock(arg1_00 + 0x17);
                            *(arg1_01 + 0xc) = uVar10;
                            kvfree(*arg1_01);
                            iVar11 = __kmalloc(uStack_70._4_4_,0xdc0);
                            *arg1_01 = iVar11;
                            if (iVar11 == 0) {
                                iVar11 = vmalloc(uStack_70._4_4_);
                                *arg1_01 = iVar11;
                                if (iVar11 != 0) goto code_r0x0800a800;
                                iVar8 = -0xc;
                            }
                            else {
code_r0x0800a800:
                                iVar16 = iStack_60;
                                uVar12 = uStack_70 >> 0x20;
                                if (uStack_70 < 0) goto code_r0x0800aa24;
                                __check_object_size(iVar11,uVar12,0);
                                iVar11 = sym._copy_from_user(iVar11,iVar16,uVar12);
                                if (iVar11 == 0) {
                                    _dev_printk(0x8003b96,*arg1_00,"Copy custom FIFO samples successfully\n");
                                    *(arg1_01 + 1) = uStack_70._4_4_;
                                    uVar10 = sym.get_fifo_play_length_us(arg1_01,*(arg1_00[0x12] + 0x20));
                                    *(arg1_01 + 2) = uVar10;
                                    if (*(arg1_00 + 0x1f) == '\0') {
                                        arg1_00[0x13] = arg1_00[0x12];
                                        arg1_00[0x14] = 0;
                                        _dev_printk(0x8003b96,*arg1_00,"set magnitude on custom effect, rc=%d\n",
                                                    iVar3);
                                        uVar9 = (*(arg1_00[0x12] + 0x1c) * iVar3) / 0x7fff;
                                        *(arg1_00 + 0xec) = uVar9;
                                        iVar8 = sym.haptics_set_vmax_mv(arg1_00,uVar9);
                                        if ((-1 < iVar8) &&
                                           (((*(arg1_00 + 0x6f) >> 3 & 1) == 0 ||
                                            (iVar8 = sym.haptics_toggle_module_enable(arg1_00), -1 < iVar8)))) {
                                            sym.haptics_enable_autores(arg1_00,*(arg1_00[0x13] + 0x2c) == '\0');
                                            *(arg1_00 + 0xf4) = 0;
                                            iVar8 = sym.haptics_set_fifo(arg1_00,*(arg1_00[0x13] + 8));
                                            if (-1 < iVar8) goto code_r0x0800a22c;
                                        }
                                    }
                                    else {
                                        _dev_err(*arg1_00,"calibration in progress, ignore playing custom effect\n");
                                        iVar8 = -0x10;
                                    }
                                }
                                else {
                                    iVar8 = -0xe;
                                }
                                kvfree(*arg1_01);
                                *arg1_01 = 0;
                            }
                            mutex_unlock(arg1_00 + 0x17);
                        }
                    }
                    else {
                        iVar8 = -0xe;
                    }
                }
                uVar13 = *arg1_00;
                pcVar14 = "Upload custom FIFO data failed\n";
            }
code_r0x0800a560:
            _dev_err(uVar13,pcVar14,iVar8);
        }
        else {
            _dev_err(*arg1_00,"Only support custom waveforms\n");
            iVar8 = -0x16;
        }
    }
    else {
        if (iVar3 == 0x52) {
            uVar4 = *(arg2 + 10);
            iVar3 = *(arg2 + 0x10);
            uVar9 = sym.get_direct_play_max_amplitude(arg1_00);
            uVar2 = (uVar9 & 0xff) * iVar3;
            uVar9 = *(arg1_00 + 0x44);
            uVar17 = *(arg1_00 + 0xf);
            _dev_printk(0x8003b96,*arg1_00,"upload constant effect, length = %dms, amplitude = %#x\n",uVar4,
                        uVar2 / 0x7fff & 0xff);
            if (((iVar8 == 0) && (*(arg1_00 + 0x74) == 1)) && (iStack_84 < 1)) {
                uVar5 = 0;
                if (uVar17 != 0) {
                    uVar5 = 10000000 / uVar17;
                }
                uVar17 = 0;
                if (uVar5 != 0) {
                    uVar17 = 10000000 / uVar5;
                }
                uVar6 = 0;
                if (uVar9 != 0) {
                    uVar6 = 10000000 / uVar9;
                }
                iVar8 = sym.haptics_config_openloop_lra_period(arg1_00,uVar5);
                _dev_info(*arg1_00,"temp_f0: cl_t_lra_us(%d  -->  %d),lra_freq(%d HZ ---> %d HZ).\n",*(arg1_00 + 0x44)
                          ,uVar5,uVar6,uVar17);
                if (iVar8 < 0) {
                    _dev_err(*arg1_00,"temp_f0: f0(%d) config failed.\n");
                    goto code_r0x0800a014;
                }
                _dev_info(*arg1_00,"temp_f0: f0(%d) config success.\n",*(arg1_00 + 0xf));
            }
            uVar13 = __msecs_to_jiffies(uVar4);
            queue_delayed_work_on(0x20,_no_llseek,arg1_00 + 0x29,uVar13);
            uVar9 = *(arg1_00 + 0x34);
            mutex_lock(arg1_00 + 0x17);
            if (*(arg1_00 + 0x1f) == '\0') {
                arg1_00[0x13] = 0;
                if ((arg1_00[0x51] == 0) && (*(arg1_00 + 0x71) != 3)) {
code_r0x0800a190:
                    mutex_lock(arg1_00 + 0x5f);
                    iVar8 = sym.__haptics_set_vmax_mv(arg1_00,uVar9);
                    mutex_unlock(arg1_00 + 0x5f);
                    if (-1 < iVar8) {
                        arg1_00[0x14] = arg1_00 + 3;
                        iVar8 = sym.haptics_set_brake(arg1_00,arg1_00 + 3);
                        if (-1 < iVar8) {
                            uStack_70 = CONCAT71(uStack_70._1_7_,uVar2 / 0x7fff);
                            uVar9 = *(arg1_00 + 0x36c) + 0x26U & 0xffff;
                            iVar8 = regmap_bulk_write(arg1_00[1],uVar9,&uStack_70,1);
                            if (iVar8 < 0) {
                                _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",uVar9,iVar8);
                                uVar13 = *arg1_00;
                                pcVar14 = "config DIRECT_PLAY failed, rc=%d\n";
                                goto code_r0x0800a69c;
                            }
                            regmap_update_bits_base(arg1_00[1],*(arg1_00 + 0x6d) + 99U & 0xffff,0x80,0,0,0,0);
                            *(arg1_00 + 0xf4) = 1;
                        }
                    }
                }
                else {
                    uStack_70 = uStack_70 & 0xffffffffffffff00;
                    uVar9 = *(arg1_00 + 0x6d) + 0x67U & 0xffff;
                    iVar8 = regmap_bulk_read(arg1_00[1],uVar9,&uStack_70,1);
                    if (-1 < iVar8) {
                        uVar9 = *(arg1_00 + 0x35c) + (uStack_70 & 0x7f) * -0x32;
                        goto code_r0x0800a190;
                    }
                    _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",uVar9,iVar8);
                    uVar13 = *arg1_00;
                    pcVar14 = "Get Vmax HDRM failed, rc=%d\n";
code_r0x0800a69c:
                    _dev_err(uVar13,pcVar14,iVar8);
                }
            }
            else {
                _dev_err(*arg1_00,"calibration in progress, ignore playing constant effect\n");
            }
code_r0x0800a22c:
            mutex_unlock(arg1_00 + 0x17);
code_r0x08009e80:
            iVar8 = sym.haptics_enable_hpwr_vreg(arg1_00,1);
            if (iVar8 < 0) {
                uVar13 = *arg1_00;
                pcVar14 = "enable hpwr_vreg failed, rc=%d\n";
                goto code_r0x0800a560;
            }
            auStack_74[0] = 0;
            if (((arg1_00[0x51] == 0) && (*(arg1_00 + 0x71) != 3)) && ((*(arg1_00 + 0x6f) >> 1 & 1) != 0)) {
                puVar1 = arg1_00 + 0x52;
                iVar11 = __hrtimer_get_remaining(puVar1,0);
                if ((iVar11 < 1) && (uVar12 = hrtimer_active(puVar1), (uVar12 & 1) == 0)) {
                    uVar9 = 0;
                    puVar1 = arg1_00 + 0x17;
                    do {
                        uVar12 = sym.is_boost_vreg_enabled_in_open_loop(arg1_00);
                        if ((uVar12 & 1) != 0) goto code_r0x0800a010;
                        mutex_lock(puVar1);
                        uStack_70 = uStack_70 & 0xffffffffffff0000;
                        iVar8 = sym.haptics_get_status_data(arg1_00,5,&uStack_70);
                        if ((-1 < iVar8) && ((uStack_70._1_1_ & 7) == 4)) {
                            _dev_printk(0x8003b96,*arg1_00,"Ignore waiting hBoost when SWR play is in progress\n");
                            mutex_unlock(puVar1);
                            goto code_r0x0800a010;
                        }
                        mutex_unlock(puVar1);
                        uVar17 = *(arg1_00 + 0x6e) + 0x46U & 0xffff;
                        iVar8 = regmap_bulk_read(arg1_00[1],uVar17,auStack_74,1);
                        if (iVar8 < 0) {
code_r0x08009fd4:
                            _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",uVar17);
                        }
                        else if ((iVar8 == 0) && (-1 < auStack_74[0])) {
                            uVar17 = *(arg1_00 + 0x6e) + 0xbU & 0xffff;
                            iVar8 = regmap_bulk_read(arg1_00[1],uVar17,auStack_74,1);
                            if (iVar8 < 0) goto code_r0x08009fd4;
                            if ((iVar8 == 0) && ((auStack_74[0] & 1) == 0)) goto code_r0x0800a010;
                        }
                        uVar12 = uVar9;
                        _dev_printk(0x8003b96,*arg1_00,"hBoost is busy, wait %d\n");
                        usleep_range_state(200,0xc9,2);
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != 100);
                    _dev_err(*arg1_00,"hboost is not ready for haptics play\n");
                    sym.xm_hap_driver_exception_handler(0x360387aa,0x800111f,0x800398d,uVar12);
                    if (*(arg1_00 + 0xf4) == 0) {
                        _dev_printk(0x8003b96,*arg1_00,"stop FIFO play explicitly to restore SW status\n");
                        mutex_lock(puVar1);
                        sym.haptics_stop_fifo_play(arg1_00);
                        mutex_unlock(puVar1);
                        iVar8 = -0x10;
                        goto code_r0x0800a014;
                    }
                }
                else {
                    hrtimer_cancel(puVar1);
                    _dev_printk(0x8003b96,*arg1_00,"hboost is still on, ignore\n");
                }
            }
        }
        else {
            if (iVar3 != 0x55) {
                _dev_err(*arg1_00,"%d effect is not supported\n");
                iVar8 = -0x16;
                goto code_r0x0800a014;
            }
            *(arg1_00 + 0x5e) = 1;
            _dev_info(*arg1_00,"set hboost quick off!");
        }
code_r0x0800a010:
        iVar8 = 0;
    }
code_r0x0800a014:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_58) {
        return iVar8;
    }
    __stack_chk_fail();
code_r0x0800aa24:
    //WARNING: Does not return
    pcVar7 = SoftwareBreakpoint(0x800,0x800aa2c);
    (*pcVar7)();
}


// ===== sym.haptics_playback @ 0x0800aa30 (size 300) =====

uint sym.haptics_playback(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x2d8);
    _dev_printk(0x8003b96,*arg1_00,"playback val = %d\n",arg2 & 0xffffffff);
    if (arg2 == 0) {
        if ((*(arg1_00 + 0xf4) == 0) && (arg1_00[0x16] != 0)) {
            _dev_printk(0x8003b96,*arg1_00,"FIFO playing is not done yet, defer stopping in erase\n");
            uVar1 = 0;
        }
        else {
            uVar1 = sym.haptics_enable_play(arg1_00,0);
            if (*(arg1_00 + 0xf4) == 1) {
                iVar2 = __hrtimer_get_remaining(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt,0);
                if ((0 < iVar2) ||
                   (uVar3 = hrtimer_active(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt), (uVar3 & 1) != 0))
                {
                    hrtimer_cancel(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt);
                }
                *0x8000588 = 5;
                hrtimer_start_range_ns(reloc.__traceiter_qcom_haptics_fifo_prgm_status.cfi_jt,50000000,0,1);
                _dev_info(_reloc.__traceiter_qcom_haptics_fifo_hw_status.cfi_jt,
                          "restart_fifo_delay_timer: set delay %dms\n",*0x8000588);
            }
        }
    }
    else {
        uVar1 = sym.haptics_enable_play(arg1_00,1);
    }
    return uVar1;
}


// ===== sym.haptics_erase @ 0x0800ab60 (size 360) =====

int sym.haptics_erase(int64_t arg1)

{
    ulong *puVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x2d8);
    _dev_printk(0x8003b96,*arg1_00,"erase effect, really stop play\n");
    if (*(arg1_00 + 0x5e) == '\0') {
        uVar4 = *(arg1_00 + 0xf4);
        if (*(arg1_00 + 0xf4) == 0) {
            uVar4 = arg1_00[0x16];
        }
        puVar1 = arg1_00 + 0x17;
        mutex_lock(uVar4,puVar1);
        cancel_delayed_work_sync(arg1_00 + 0x29);
        if ((*(arg1_00 + 0xf4) == 0) && (arg1_00[0x16] != 0)) {
            if (*(arg1_00 + 0xac) == 0) {
                _dev_printk(0x8003b96,*arg1_00,"cancelling FIFO playing\n");
                *(arg1_00 + 0xb4) = 1;
            }
            iVar2 = sym.haptics_stop_fifo_play(arg1_00);
            if (iVar2 < 0) {
                _dev_err(*arg1_00,"stop FIFO playing failed, rc=%d\n",iVar2);
                mutex_unlock(puVar1);
                return iVar2;
            }
        }
        mutex_unlock(puVar1);
        iVar3 = sym.haptics_enable_hpwr_vreg(arg1_00,0);
        iVar2 = 0;
        if (iVar3 < 0) {
            _dev_err(*arg1_00,"disable hpwr_vreg failed, rc=%d\n");
            iVar2 = iVar3;
        }
    }
    else {
        iVar2 = sym.haptics_boost_vreg_enable(arg1_00,0);
        if (iVar2 < 0) {
            _dev_err(*arg1_00,"hboost quick off failed, rc=%d\n");
        }
        else {
            _dev_info(*arg1_00,"hboost quick off\n");
        }
        iVar2 = 0;
        *(arg1_00 + 0x5e) = 0;
    }
    return iVar2;
}


// ===== sym.haptics_set_gain @ 0x0800acd4 (size 128) =====

void sym.haptics_set_gain(int64_t arg1,uint32_t arg2)

{
    ulong *in_x18;
    ulong *puVar1;
    ulong unaff_x30;
    
    if ((arg2 & 0xffff) == 0) {
        return;
    }
    *in_x18 = unaff_x30;
    puVar1 = *(arg1 + 0x2d8);
    if (0x7ffe < (arg2 & 0xffff)) {
        arg2 = 0x7fff;
    }
    *(puVar1 + 0x1d) = arg2 & 0xffff;
    queue_work_on(0x20,_no_llseek,puVar1 + 0x65);
    _dev_printk(0x8003b96,*puVar1,"Set gain: %#x\n",arg2 & 0xffff);
    return;
}


// ===== sym.haptics_boost_notifier @ 0x0800ad54 (size 196) =====

ulong sym.haptics_boost_notifier(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    uint32_t uVar2;
    int64_t in_x1;
    uint uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (in_x1 == 0) {
        uVar2 = *arg2;
        if (10000 < uVar2) {
            _dev_err(*(arg1 + -0x2d8),"voted Vmax (%u mV) is higher than maximum (%u mV)\n",uVar2,10000);
            return 0xffffffea;
        }
        *(arg1 + 0x9c) = uVar2;
        _dev_printk(0x8003b96,*(arg1 + -0x2d8),"Vmax is clamped at %u mV to support hBoost concurrency\n",uVar2);
        uVar3 = 3;
        if (*(arg1 + 0xb0) != 4) {
            uVar3 = 1;
        }
        uVar1 = 0;
        if (uVar2 != 10000) {
            uVar1 = uVar3;
        }
        regmap_update_bits_base(*(arg1 + -0x2d0),*(arg1 + 0x90) + 0x68U & 0xffff,uVar3,uVar1,0,0,0);
    }
    return 0;
}


// ===== sym.get_max_fifo_samples @ 0x0800ae18 (size 112) =====

int sym.get_max_fifo_samples(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x388);
    if (iVar1 == 2) {
        iVar1 = 0x280;
    }
    else if (iVar1 == 4) {
        iVar1 = 0x280;
        if (*(arg1 + 0x104) != 0) {
            iVar1 = *(arg1 + 0x104);
        }
    }
    else if (iVar1 == 3) {
        iVar1 = 0x400;
    }
    else {
        _printk(0x800334e);
        iVar1 = 0;
    }
    return iVar1;
}


// ===== sym.haptics_read @ 0x0800ae88 (size 116) =====

int sym.haptics_read(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong in_x2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = arg2 + 0x5cU & 0xffff;
    iVar2 = regmap_bulk_read(*(arg1 + 8),uVar1,in_x2,2);
    if (iVar2 < 0) {
        _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar1,iVar2);
    }
    return iVar2;
}


// ===== sym.haptics_parse_per_effect_dt @ 0x0800aefc (size 2540) =====

ulong * sym.haptics_parse_per_effect_dt(int arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    int iVar7;
    uint32_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    ulong *puVar11;
    ulong *puVar12;
    int64_t iVar13;
    int64_t *piVar14;
    char *pcVar15;
    ushort *puVar16;
    int64_t *piVar17;
    char cVar18;
    ulong uVar19;
    int iVar20;
    int iVar21;
    uint64_t uVar22;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    uint32_t auStack_a8 [24];
    int64_t iStack_48;
    
    puVar12 = arg1;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uStack_b0 = 0;
    if (arg3 == 0) {
        puVar11 = 0xffffffea;
        uVar4 = 0;
        goto code_r0x0800b824;
    }
    *(arg3 + 0x1c) = *(puVar12 + 0x34);
    iVar3 = of_property_read_variable_u32_array(arg2,"qcom,wf-vmax-mv",&stack0xffffffffffffff50,1,0);
    if (iVar3 < 0) {
        _dev_printk(0x8003b96,*puVar12,"read qcom,wf-vmax-mv failed, rc=%d\n",iVar3);
        uVar4 = *(arg3 + 0x1c);
    }
    else {
        *(arg3 + 0x1c) = uStack_b0;
        uVar4 = uStack_b0;
    }
    if (11000 < uVar4) {
        _dev_err(*puVar12,"qcom,wf-vmax-mv (%d) exceed the max value: %d\n",uVar4,11000);
        puVar11 = 0xffffffea;
        goto code_r0x0800b824;
    }
    auStack_a8[0x14] = 0;
    auStack_a8[0x15] = 0;
    auStack_a8[0x16] = 0;
    auStack_a8[0x17] = 0;
    auStack_a8[0x10] = 0;
    auStack_a8[0x11] = 0;
    auStack_a8[0x12] = 0;
    auStack_a8[0x13] = 0;
    auStack_a8[0xc] = 0;
    auStack_a8[0xd] = 0;
    auStack_a8[0xe] = 0;
    auStack_a8[0xf] = 0;
    auStack_a8[8] = 0;
    auStack_a8[9] = 0;
    auStack_a8[10] = 0;
    auStack_a8[0xb] = 0;
    auStack_a8[4] = 0;
    auStack_a8[5] = 0;
    auStack_a8[6] = 0;
    auStack_a8[7] = 0;
    auStack_a8[0] = 0;
    auStack_a8[1] = 0;
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    *(arg3 + 0x20) = *(puVar12 + 8);
    uVar4 = of_property_count_elems_of_size(arg2,"qcom,wf-pattern-data",4);
    uStack_ac = uVar4;
    if (uVar4 < 1) {
        _dev_printk(0x8003b96,*puVar12,"qcom,wf-pattern-data is not defined properly for effect %d\n",*(arg3 + 0x18))
        ;
        iVar10 = *arg3;
code_r0x0800b238:
        if (iVar10 == 0) {
            iVar3 = of_property_count_elems_of_size(arg2,"qcom,wf-fifo-data",1);
            auStack_a8[0] = iVar3;
            if (0 < iVar3) {
                iVar10 = devm_kmalloc(*puVar12,0x18,0xdc0);
                *(arg3 + 8) = iVar10;
                if (iVar10 == 0) {
code_r0x0800b5b8:
                    puVar11 = 0xfffffff4;
                }
                else {
                    uVar9 = devm_kmalloc(*puVar12,iVar3,0xdc0);
                    **(arg3 + 8) = uVar9;
                    if (**(arg3 + 8) == 0) goto code_r0x0800b5b8;
                    uVar4 = of_property_read_variable_u8_array(arg2,"qcom,wf-fifo-data",**(arg3 + 8),iVar3,0);
                    if (uVar4 < 0) {
                        uVar9 = *puVar12;
                        pcVar15 = "Read wf-fifo-data failed, rc=%d\n";
code_r0x0800b688:
                        puVar11 = uVar4;
                        _dev_err(uVar9,pcVar15,puVar11);
                    }
                    else {
                        *(*(arg3 + 8) + 8) = iVar3;
                        *(*(arg3 + 8) + 0xc) = 0;
                        uVar4 = of_property_read_variable_u32_array
                                          (arg2,"qcom,wf-fifo-period",&stack0xffffffffffffff58,1,0);
                        if (uVar4 < 0) {
                            uVar9 = *puVar12;
                            pcVar15 = "Get qcom,wf-fifo-period failed, rc=%d\n";
                            goto code_r0x0800b688;
                        }
                        if (auStack_a8[0] < 0xe) {
                            *(*(arg3 + 8) + 0xc) = auStack_a8[0];
                            piVar14 = *(arg3 + 8);
                            if (piVar14 == NULL) {
code_r0x0800b384:
                                uVar4 = 0xffffffea;
                            }
                            else {
                                iVar7 = piVar14[1];
                                iVar3 = iVar7 + -1;
                                if (-1 < iVar3) {
                                    iVar3 = 0;
                                }
                                iVar20 = iVar7 + 1;
                                do {
                                    uVar4 = iVar20 - 2;
                                    iVar21 = iVar3 + 1;
                                    if (uVar4 < 1) break;
                                    iVar20 = iVar20 + -1;
                                    iVar21 = iVar20;
                                } while (*(*piVar14 + uVar4) == '\0');
                                if (0xd < *(piVar14 + 0xc)) goto code_r0x0800b384;
                                uVar4 = iVar21 * *(puVar12 + 8);
    //switch table (13 cases) at 0x8003ca8
                                switch(*(*(piVar14 + 0xc) * 2 + 0x8003ca8) * 4 + 0x800b374) {
                                case 0x800b378:
                                    uVar4 = uVar4 >> 1;
                                    break;
                                case 0x800b384:
                                    goto code_r0x0800b384;
                                case 0x800b6fc:
                                    uVar4 = uVar4 >> 2;
                                    break;
                                case 0x800b708:
                                    uVar4 = uVar4 >> 3;
                                    break;
                                case 0x800b714:
                                    uVar4 = uVar4 * 2;
                                    break;
                                case 0x800b720:
                                    uVar4 = uVar4 * 4;
                                    break;
                                case 0x800b72c:
                                    uVar4 = uVar4 * 8;
                                    break;
                                case 0x800b738:
                                    uVar4 = iVar7 * 1000 >> 3;
                                    break;
                                case 0x800b74c:
                                    uVar4 = iVar7 * 1000 >> 4;
                                    break;
                                case 0x800b760:
                                    uVar4 = (iVar7 * 1000) / 0x18;
                                    break;
                                case 0x800b780:
                                    uVar4 = iVar7 * 1000 >> 5;
                                    break;
                                case 0x800b794:
                                    uVar4 = (iVar7 * 10000) / 0x1b9;
                                    break;
                                case 0x800b7b4:
                                    uVar4 = (iVar7 * 1000) / 0x30;
                                }
                            }
                            *(piVar14 + 2) = uVar4;
                            if (*(*(arg3 + 8) + 0x10) != -0x16) {
                                *(arg3 + 0x24) = 0;
                                iVar10 = of_find_property(arg2,"qcom,wf-fifo-preload",0);
                                *(*(arg3 + 8) + 0x14) = iVar10 != 0;
                                goto code_r0x0800b3c8;
                            }
                            _dev_err(*puVar12,"get fifo play length failed\n");
                        }
                        else {
                            _dev_err(*puVar12,"FIFO playing period %d is not supported\n");
                        }
                        puVar11 = 0xffffffea;
                    }
                }
                uVar9 = *puVar12;
                pcVar15 = "parse effect FIFO data failed, rc=%d\n";
                goto code_r0x0800b81c;
            }
            _dev_printk(0x8003b96,*puVar12,"qcom,wf-fifo-data is not defined properly for effect %d\n",*(arg3 + 0x18)
                       );
        }
        else {
            _dev_printk(0x8003b96,*puVar12,"ignore parsing FIFO effect when pattern effect is present\n");
        }
code_r0x0800b3c8:
        if ((*arg3 == 0) && (*(arg3 + 8) == 0)) {
            uVar4 = *(arg3 + 0x18);
            _dev_err(*puVar12,"no pattern specified for effect %d\n");
            puVar11 = 0xffffffea;
            goto code_r0x0800b824;
        }
        puVar11 = devm_kmalloc(*puVar12,0x1c,0xdc0);
        *(arg3 + 0x10) = puVar11;
        if (puVar11 == NULL) {
            puVar11 = 0xfffffff4;
        }
        else {
            uVar9 = puVar12[4];
            uVar19 = puVar12[5];
            uVar6 = *(puVar12 + 6);
            *puVar11 = puVar12[3];
            puVar11[2] = uVar19;
            *(puVar11 + 3) = uVar6;
            puVar11[1] = uVar9;
            of_property_read_variable_u32_array(arg2,"qcom,wf-brake-mode",puVar11 + 1,1,0);
            iVar10 = *(arg3 + 0x10);
            uVar4 = *(iVar10 + 8);
            if (uVar4 < 4) {
                if (*(iVar10 + 0xc) == 1) {
                    of_property_read_variable_u32_array(arg2,"qcom,wf-brake-sine-gain",iVar10 + 0x10,1,0);
                    uVar4 = *(*(arg3 + 0x10) + 0x10);
                    if (3 < uVar4) {
                        uVar9 = *puVar12;
                        pcVar15 = "can\'t support brake sine gain: %d\n";
                        goto code_r0x0800b808;
                    }
                }
                iVar10 = of_find_property(arg2,"qcom,wf-brake-disable",0);
                uVar4 = 1;
                *(*(arg3 + 0x10) + 0x18) = iVar10 != 0;
                iVar3 = of_property_count_elems_of_size(arg2,"qcom,wf-brake-pattern");
                if (iVar3 < 9) {
                    if (iVar3 < 1) {
                        pcVar15 = *(arg3 + 0x10);
                        if (*(pcVar15 + 8) < 2) {
code_r0x0800b544:
                            cVar18 = '\x01';
code_r0x0800b548:
                            pcVar15[0x18] = cVar18;
                            pcVar15 = *(arg3 + 0x10);
                        }
                    }
                    else {
                        **(arg3 + 0x10) = 0;
                        uVar9 = *(arg3 + 0x10);
                        uVar5 = of_property_read_variable_u8_array(arg2,"qcom,wf-brake-pattern",uVar9,iVar3,0);
                        uVar4 = uVar9;
                        if (uVar5 < 0) {
                            puVar11 = uVar5;
                            _dev_err(*puVar12,"Read wf-brake-pattern failed, rc=%d\n",puVar11);
                            goto code_r0x0800b810;
                        }
                        pcVar15 = *(arg3 + 0x10);
                        if ((*(pcVar15 + 8) & 0xfffffffe) != 2) {
                            if (((pcVar15[7] == '\0') && (pcVar15[6] == '\0')) &&
                               ((pcVar15[5] == '\0' &&
                                ((((pcVar15[4] == '\0' && (pcVar15[3] == '\0')) && (pcVar15[2] == '\0')) &&
                                 (pcVar15[1] == '\0')))))) goto code_r0x0800b544;
                            cVar18 = '\0';
                            goto code_r0x0800b548;
                        }
                    }
                    if ((pcVar15 == NULL) || (pcVar15[0x18] != '\0')) {
                        uVar5 = 0;
                    }
                    else if ((*(pcVar15 + 8) & 0xfffffffe) == 2) {
                        uVar5 = (*(puVar12 + 8) & 0xfffffff) << 3;
                    }
                    else {
                        if (pcVar15[7] == '\0') {
                            if (pcVar15[6] == '\0') {
                                if (pcVar15[5] == '\0') {
                                    if (pcVar15[4] == '\0') {
                                        if (pcVar15[3] == '\0') {
                                            if (pcVar15[2] == '\0') {
                                                if (pcVar15[1] == '\0') {
                                                    uVar5 = *pcVar15 != '\0';
                                                }
                                                else {
                                                    uVar5 = 2;
                                                }
                                            }
                                            else {
                                                uVar5 = 3;
                                            }
                                        }
                                        else {
                                            uVar5 = 4;
                                        }
                                    }
                                    else {
                                        uVar5 = 5;
                                    }
                                }
                                else {
                                    uVar5 = 6;
                                }
                            }
                            else {
                                uVar5 = 7;
                            }
                        }
                        else {
                            uVar5 = 8;
                        }
                        uVar5 = uVar5 * *(puVar12 + 8) >> 1;
                    }
                    *(pcVar15 + 0x14) = uVar5;
                    if (*(puVar12 + 0x6c) == '\0') {
                        uVar4 = 0;
                        iVar10 = of_find_property(arg2,"qcom,wf-auto-res-disable");
                        puVar11 = NULL;
                        *(arg3 + 0x2c) = iVar10 != 0;
                    }
                    else {
                        puVar11 = NULL;
                    }
                    goto code_r0x0800b824;
                }
                uVar9 = *puVar12;
                pcVar15 = "more than %d brake samples\n";
                uVar4 = 8;
            }
            else {
                uVar9 = *puVar12;
                pcVar15 = "can\'t support brake mode: %d\n";
            }
code_r0x0800b808:
            _dev_err(uVar9,pcVar15,uVar4);
            puVar11 = 0xffffffea;
        }
code_r0x0800b810:
        uVar9 = *puVar12;
        pcVar15 = "parse effect brake data failed, rc=%d\n";
    }
    else {
        uVar9 = *puVar12;
        if (uVar4 < 0x19) {
            iVar10 = devm_kmalloc(uVar9,0x6c,0xdc0);
            *arg3 = iVar10;
            if (iVar10 == 0) {
                puVar11 = 0xfffffff4;
            }
            else {
                uVar5 = of_property_read_variable_u32_array
                                  (arg2,"qcom,wf-pattern-data",&stack0xffffffffffffff58,uVar4,0);
                if (-1 < uVar5) {
                    if (2 < uVar4) {
                        iVar13 = 0;
                        iVar10 = 0;
                        uVar22 = &stack0xffffffffffffff58 | 4;
                        do {
                            if (iVar10 == 8) {
    //WARNING: Does not return
                                pcVar2 = SoftwareBreakpoint(0x5512,0x800b8e4);
                                (*pcVar2)();
                            }
                            uVar4 = *(&stack0xffffffffffffff58 + iVar13);
                            if (((0x1ff < uVar4) || (6 < *(uVar22 + iVar13))) ||
                               (iVar23 = uVar22 + iVar13, 1 < *(iVar23 + 4))) {
                                uVar9 = *puVar12;
                                pcVar15 = "allowed tuples: [amplitude(<= 0x1ff) period(<=6(T_LRA_X_8)) f_lra_x2(0,1)]\n"
                                ;
                                goto code_r0x0800b630;
                            }
                            iVar10 = iVar10 + 1;
                            *(*arg3 + iVar13) = uVar4;
                            *(*arg3 + iVar13 + 4) = *(uVar22 + iVar13);
                            iVar1 = *arg3 + iVar13;
                            iVar13 = iVar13 + 0xc;
                            *(iVar1 + 8) = *(iVar23 + 4) != 0;
                        } while (iVar10 < uStack_ac / 3);
                    }
                    iVar10 = of_find_property(arg2,"qcom,wf-pattern-preload",0);
                    *(*arg3 + 0x68) = iVar10 != 0;
                    *(arg3 + 0x24) = 2;
                    if (*(*arg3 + 0x68) == '\0') {
code_r0x0800b0f4:
                        if (*(puVar12 + 0x6c) != '\0') goto code_r0x0800b0fc;
code_r0x0800b1d0:
                        uVar6 = *(puVar12 + 8);
                    }
                    else {
                        if (*(puVar12 + 0x5c) == -0x16) {
                            *(puVar12 + 0x5c) = *(arg3 + 0x18);
                            *(arg3 + 0x24) = 3;
                            goto code_r0x0800b0f4;
                        }
                        _dev_err(*puVar12,"effect %d has been defined as preloaded\n");
                        *(*arg3 + 0x68) = 0;
                        if (*(puVar12 + 0x6c) == '\0') goto code_r0x0800b1d0;
code_r0x0800b0fc:
                        uVar6 = 5000;
                    }
                    *(*arg3 + 0x60) = uVar6;
                    iVar3 = of_property_read_variable_u32_array
                                      (arg2,"qcom,wf-pattern-period-us",&stack0xffffffffffffff54,1,0);
                    if (iVar3 < 0) {
                        _dev_printk(0x8003b96,*puVar12,"Read qcom,wf-pattern-period-us failed, rc=%d\n",iVar3);
                    }
                    else {
                        *(*arg3 + 0x60) = uStack_ac;
                    }
                    iVar10 = *arg3;
                    if (*(iVar10 + 0x60) < 0x4ffc) {
                        uVar6 = sym.get_pattern_play_length_us(iVar10);
                        *(iVar10 + 100) = uVar6;
                        iVar10 = *arg3;
                        if (*(iVar10 + 100) != -0x16) goto code_r0x0800b238;
                        uVar9 = *puVar12;
                        pcVar15 = "get pattern play length failed\n";
                        goto code_r0x0800b630;
                    }
                    _dev_err(*puVar12,"qcom,wf-pattern-period-us (%d) exceed the max value: %d\n",*(iVar10 + 0x60),
                             0x4ffb);
                    goto code_r0x0800b634;
                }
                puVar11 = uVar5;
                _dev_err(*puVar12,"Read wf-pattern-data failed, rc=%d\n",puVar11);
            }
        }
        else {
            pcVar15 = "Pattern src can only play 8 samples at max\n";
code_r0x0800b630:
            _dev_err(uVar9,pcVar15);
code_r0x0800b634:
            puVar11 = 0xffffffea;
        }
        uVar9 = *puVar12;
        pcVar15 = "parse effect PATTERN data failed, rc=%d\n";
    }
code_r0x0800b81c:
    puVar12 = puVar11;
    _dev_err(uVar9,pcVar15);
    uVar4 = puVar12;
code_r0x0800b824:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_48) {
        return puVar11;
    }
    auVar24 = __stack_chk_fail();
    iVar10 = auVar24._8_8_;
    puVar11 = auVar24._0_8_;
    *extraout_x18 = sym.__dump_effects;
    puVar12 = puVar11;
    if (0 < uVar4) {
        uVar5 = 0;
        do {
            piVar14 = iVar10 + uVar5 * 0x30;
            if (piVar14 == NULL) {
                return puVar12;
            }
            iVar23 = uVar5;
            iVar13 = iVar10 + iVar23 * 0x30;
            _dev_printk(0x8003b96,*puVar11,"effect %d\n",*(iVar13 + 0x18));
            _dev_printk(0x8003b96,*puVar11,"vmax_mv = %d\n",*(iVar13 + 0x1c));
            puVar16 = *piVar14;
            if (puVar16 != NULL) {
                if (0xe < *(puVar16 + 2)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*puVar16,
                            *(obj.period_str + *(puVar16 + 2) * 8),*(puVar16 + 4));
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0x10)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar13 + 0xc),
                            *(obj.period_str + *(iVar13 + 0x10) * 8),*(iVar13 + 0x14));
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0x1c)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar13 + 0x18),
                            *(obj.period_str + *(iVar13 + 0x1c) * 8),*(iVar13 + 0x20));
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0x28)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar13 + 0x24),
                            *(obj.period_str + *(iVar13 + 0x28) * 8),*(iVar13 + 0x2c));
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0x34)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar13 + 0x30),
                            *(obj.period_str + *(iVar13 + 0x34) * 8),*(iVar13 + 0x38));
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0x40)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar13 + 0x3c),
                            *(obj.period_str + *(iVar13 + 0x40) * 8),*(iVar13 + 0x44));
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0x4c)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar13 + 0x48),
                            *(obj.period_str + *(iVar13 + 0x4c) * 8),*(iVar13 + 0x50));
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0x58)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar13 + 0x54),
                            *(obj.period_str + *(iVar13 + 0x58) * 8),*(iVar13 + 0x5c));
                _dev_printk(0x8003b96,*puVar11,"pattern play_rate_us = %d\n",*(*piVar14 + 0x60));
                _dev_printk(0x8003b96,*puVar11,"pattern play_length_us = %d\n",*(*piVar14 + 100));
                _dev_printk(0x8003b96,*puVar11,"pattern preload = %d\n",*(*piVar14 + 0x68));
            }
            piVar14 = iVar10 + iVar23 * 0x30 + 8;
            if (*piVar14 != 0) {
                iVar3 = *(*piVar14 + 8) * 8 + 0x10;
                iVar13 = __kmalloc(iVar3,0xdc0);
                if (iVar13 == 0) {
                    return NULL;
                }
                uVar22 = scnprintf(iVar13,iVar3,0x8001557,"FIFO data: ");
                piVar17 = *piVar14;
                if (piVar17[1] != 0) {
                    uVar22 = uVar22 & 0xffffffff;
                    uVar8 = 0;
                    do {
                        iVar7 = scnprintf(iVar13 + uVar22,iVar3 - uVar22,0x800317b,*(*piVar17 + uVar8));
                        piVar17 = *piVar14;
                        uVar22 = iVar7 + uVar22;
                        uVar8 = uVar8 + 1;
                    } while (uVar8 < *(piVar17 + 1));
                }
                _dev_printk(0x8003b96,*puVar11,0x8003a6c,iVar13);
                kfree(iVar13);
                iVar13 = *piVar14;
                if (0xe < *(iVar13 + 0xc)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"FIFO data preload: %d, play rate: %s, play length: %uus\n",
                            *(iVar13 + 0x14),*(obj.period_str + *(iVar13 + 0xc) * 8),*(iVar13 + 0x10));
            }
            piVar14 = iVar10 + iVar23 * 0x30 + 0x10;
            if ((*piVar14 != 0) && (*(*piVar14 + 0x18) == '\0')) {
                iVar13 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x50);
                if (iVar13 == 0) {
                    return NULL;
                }
                uVar8 = scnprintf(iVar13,0x50,0x8001557,"brake pattern: ");
                iVar3 = scnprintf(iVar13 + uVar8,0x50 - uVar8,"%#x ",**piVar14);
                uVar8 = iVar3 + uVar8;
                iVar3 = scnprintf(iVar13 + uVar8,0x50 - uVar8,"%#x ",*(*piVar14 + 1));
                uVar8 = iVar3 + uVar8;
                iVar3 = scnprintf(iVar13 + uVar8,0x50 - uVar8,"%#x ",*(*piVar14 + 2));
                uVar8 = iVar3 + uVar8;
                iVar3 = scnprintf(iVar13 + uVar8,0x50 - uVar8,"%#x ",*(*piVar14 + 3));
                uVar8 = iVar3 + uVar8;
                iVar3 = scnprintf(iVar13 + uVar8,0x50 - uVar8,"%#x ",*(*piVar14 + 4));
                uVar8 = iVar3 + uVar8;
                iVar3 = scnprintf(iVar13 + uVar8,0x50 - uVar8,"%#x ",*(*piVar14 + 5));
                uVar8 = iVar3 + uVar8;
                iVar3 = scnprintf(iVar13 + uVar8,0x50 - uVar8,"%#x ",*(*piVar14 + 6));
                scnprintf(iVar13 + iVar3 + uVar8,0x50 - (iVar3 + uVar8),"%#x ",*(*piVar14 + 7));
                _dev_printk(0x8003b96,*puVar11,0x8003a6c,iVar13);
                kfree(iVar13);
                if (3 < *(*piVar14 + 8)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*puVar11,"brake mode: %s\n",*(obj.brake_str + *(*piVar14 + 8) * 8));
                _dev_printk(0x8003b96,*puVar11,"brake play length: %dus\n",*(*piVar14 + 0x14));
            }
            uVar8 = *(iVar10 + iVar23 * 0x30 + 0x24);
            if (5 < uVar8) {
code_r0x0800bee4:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800bee8);
                (*pcVar2)();
            }
            _dev_printk(0x8003b96,*puVar11,"pattern src: %s\n",*(obj.src_str + uVar8 * 8));
            pcVar15 = "enabled";
            if (*(iVar10 + iVar23 * 0x30 + 0x2c) != '\0') {
                pcVar15 = "disabled";
            }
            puVar12 = _dev_printk(0x8003b96,*puVar11,"auto resonance %s\n",pcVar15);
            uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
    }
    return puVar12;
}


// ===== sym.__dump_effects @ 0x0800b8e8 (size 1536) =====

void sym.__dump_effects(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    code *pcVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    int iVar7;
    ushort *puVar8;
    int64_t *piVar9;
    ulong *in_x18;
    int64_t iVar10;
    int64_t *piVar11;
    int64_t iVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0 < arg3) {
        iVar7 = 0;
        do {
            piVar11 = arg2 + iVar7 * 0x30;
            if (piVar11 == NULL) {
                return;
            }
            iVar12 = iVar7;
            iVar10 = arg2 + iVar12 * 0x30;
            _dev_printk(0x8003b96,*arg1,"effect %d\n",*(iVar10 + 0x18));
            _dev_printk(0x8003b96,*arg1,"vmax_mv = %d\n",*(iVar10 + 0x1c));
            puVar8 = *piVar11;
            if (puVar8 != NULL) {
                if (0xe < *(puVar8 + 2)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*puVar8,
                            *(obj.period_str + *(puVar8 + 2) * 8),*(puVar8 + 4));
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0x10)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar10 + 0xc),
                            *(obj.period_str + *(iVar10 + 0x10) * 8),*(iVar10 + 0x14));
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0x1c)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar10 + 0x18),
                            *(obj.period_str + *(iVar10 + 0x1c) * 8),*(iVar10 + 0x20));
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0x28)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar10 + 0x24),
                            *(obj.period_str + *(iVar10 + 0x28) * 8),*(iVar10 + 0x2c));
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0x34)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar10 + 0x30),
                            *(obj.period_str + *(iVar10 + 0x34) * 8),*(iVar10 + 0x38));
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0x40)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar10 + 0x3c),
                            *(obj.period_str + *(iVar10 + 0x40) * 8),*(iVar10 + 0x44));
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0x4c)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar10 + 0x48),
                            *(obj.period_str + *(iVar10 + 0x4c) * 8),*(iVar10 + 0x50));
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0x58)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"pattern = %d, period = %s, f_lra_x2 = %d\n",*(iVar10 + 0x54),
                            *(obj.period_str + *(iVar10 + 0x58) * 8),*(iVar10 + 0x5c));
                _dev_printk(0x8003b96,*arg1,"pattern play_rate_us = %d\n",*(*piVar11 + 0x60));
                _dev_printk(0x8003b96,*arg1,"pattern play_length_us = %d\n",*(*piVar11 + 100));
                _dev_printk(0x8003b96,*arg1,"pattern preload = %d\n",*(*piVar11 + 0x68));
            }
            piVar11 = arg2 + iVar12 * 0x30 + 8;
            if (*piVar11 != 0) {
                iVar5 = *(*piVar11 + 8) * 8 + 0x10;
                iVar10 = __kmalloc(iVar5,0xdc0);
                if (iVar10 == 0) {
                    return;
                }
                uVar6 = scnprintf(iVar10,iVar5,0x8001557,"FIFO data: ");
                piVar9 = *piVar11;
                if (piVar9[1] != 0) {
                    uVar6 = uVar6 & 0xffffffff;
                    uVar4 = 0;
                    do {
                        iVar3 = scnprintf(iVar10 + uVar6,iVar5 - uVar6,0x800317b,*(*piVar9 + uVar4));
                        piVar9 = *piVar11;
                        uVar6 = iVar3 + uVar6;
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < *(piVar9 + 1));
                }
                _dev_printk(0x8003b96,*arg1,0x8003a6c,iVar10);
                kfree(iVar10);
                iVar10 = *piVar11;
                if (0xe < *(iVar10 + 0xc)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"FIFO data preload: %d, play rate: %s, play length: %uus\n",
                            *(iVar10 + 0x14),*(obj.period_str + *(iVar10 + 0xc) * 8),*(iVar10 + 0x10));
            }
            piVar11 = arg2 + iVar12 * 0x30 + 0x10;
            if ((*piVar11 != 0) && (*(*piVar11 + 0x18) == '\0')) {
                iVar10 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x50);
                if (iVar10 == 0) {
                    return;
                }
                uVar4 = scnprintf(iVar10,0x50,0x8001557,"brake pattern: ");
                iVar5 = scnprintf(iVar10 + uVar4,0x50 - uVar4,"%#x ",**piVar11);
                uVar4 = iVar5 + uVar4;
                iVar5 = scnprintf(iVar10 + uVar4,0x50 - uVar4,"%#x ",*(*piVar11 + 1));
                uVar4 = iVar5 + uVar4;
                iVar5 = scnprintf(iVar10 + uVar4,0x50 - uVar4,"%#x ",*(*piVar11 + 2));
                uVar4 = iVar5 + uVar4;
                iVar5 = scnprintf(iVar10 + uVar4,0x50 - uVar4,"%#x ",*(*piVar11 + 3));
                uVar4 = iVar5 + uVar4;
                iVar5 = scnprintf(iVar10 + uVar4,0x50 - uVar4,"%#x ",*(*piVar11 + 4));
                uVar4 = iVar5 + uVar4;
                iVar5 = scnprintf(iVar10 + uVar4,0x50 - uVar4,"%#x ",*(*piVar11 + 5));
                uVar4 = iVar5 + uVar4;
                iVar5 = scnprintf(iVar10 + uVar4,0x50 - uVar4,"%#x ",*(*piVar11 + 6));
                scnprintf(iVar10 + iVar5 + uVar4,0x50 - (iVar5 + uVar4),"%#x ",*(*piVar11 + 7));
                _dev_printk(0x8003b96,*arg1,0x8003a6c,iVar10);
                kfree(iVar10);
                if (3 < *(*piVar11 + 8)) goto code_r0x0800bee4;
                _dev_printk(0x8003b96,*arg1,"brake mode: %s\n",*(obj.brake_str + *(*piVar11 + 8) * 8));
                _dev_printk(0x8003b96,*arg1,"brake play length: %dus\n",*(*piVar11 + 0x14));
            }
            uVar4 = *(arg2 + iVar12 * 0x30 + 0x24);
            if (5 < uVar4) {
code_r0x0800bee4:
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x800bee8);
                (*pcVar2)();
            }
            _dev_printk(0x8003b96,*arg1,"pattern src: %s\n",*(obj.src_str + uVar4 * 8));
            pcVar1 = "enabled";
            if (*(arg2 + iVar12 * 0x30 + 0x2c) != '\0') {
                pcVar1 = "disabled";
            }
            _dev_printk(0x8003b96,*arg1,"auto resonance %s\n",pcVar1);
            iVar7 = iVar7 + 1;
        } while (iVar7 != arg3);
    }
    return;
}


// ===== sym.get_pattern_play_length_us @ 0x0800bee8 (size 1196) =====

uint32_t sym.get_pattern_play_length_us(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    
    if (arg1 != 0) {
        if (*(arg1 + 0x54) == 0) {
            if (*(arg1 + 0x48) == 0) {
                if (*(arg1 + 0x3c) == 0) {
                    if (*(arg1 + 0x30) == 0) {
                        if (*(arg1 + 0x24) == 0) {
                            if (*(arg1 + 0x18) == 0) {
                                if (*(arg1 + 0xc) == 0) {
                                    return 0;
                                }
                                bVar8 = false;
                                bVar9 = false;
                                bVar10 = false;
                                bVar11 = false;
                                bVar12 = false;
                                bVar7 = true;
                            }
                            else {
                                bVar7 = false;
                                bVar9 = false;
                                bVar10 = false;
                                bVar11 = false;
                                bVar12 = false;
                                bVar8 = true;
                            }
                        }
                        else {
                            bVar7 = false;
                            bVar8 = false;
                            bVar10 = false;
                            bVar11 = false;
                            bVar12 = false;
                            bVar9 = true;
                        }
                    }
                    else {
                        bVar7 = false;
                        bVar8 = false;
                        bVar9 = false;
                        bVar11 = false;
                        bVar12 = false;
                        bVar10 = true;
                    }
                }
                else {
                    bVar7 = false;
                    bVar8 = false;
                    bVar9 = false;
                    bVar10 = false;
                    bVar12 = false;
                    bVar11 = true;
                }
            }
            else {
                bVar7 = false;
                bVar8 = false;
                bVar9 = false;
                bVar10 = false;
                bVar11 = false;
                bVar12 = true;
            }
        }
        else {
            bVar7 = false;
            bVar8 = false;
            bVar9 = false;
            bVar10 = false;
            bVar11 = false;
            bVar12 = false;
        }
        if (*(arg1 + 4) < 7) {
            uVar15 = *(arg1 + 0x60);
            uVar1 = uVar15 << 3;
            uVar2 = uVar15 << 2;
    //switch table (6 cases) at 0x8003cc4
            uVar3 = uVar15 << 1;
            uVar4 = uVar15 >> 3;
            uVar5 = uVar15 >> 2;
            uVar6 = uVar15 >> 1;
            uVar14 = uVar15;
            switch(*(*(arg1 + 4) + 0x8003cc4) * 4 + 0x800c030) {
            case 0x800c034:
                uVar14 = uVar6;
                break;
            case 0x800c040:
                uVar14 = uVar5;
                break;
            case 0x800c04c:
                uVar14 = uVar4;
                break;
            case 0x800c058:
                uVar14 = uVar3;
                break;
            case 0x800c064:
                uVar14 = uVar2;
                break;
            case 0x800c070:
                uVar14 = uVar1;
            }
            uVar14 = uVar14 >> (*(arg1 + 8) & 0x1f);
            if (bVar7) {
                return uVar14;
            }
            if (*(arg1 + 0x10) < 7) {
    //switch table (6 cases) at 0x8003ccb
                uVar13 = uVar15;
                switch(*(*(arg1 + 0x10) + 0x8003ccb) * 4 + 0x800c0ac) {
                case 0x800c0b0:
                    uVar13 = uVar6;
                    break;
                case 0x800c0bc:
                    uVar13 = uVar5;
                    break;
                case 0x800c0c8:
                    uVar13 = uVar4;
                    break;
                case 0x800c0d4:
                    uVar13 = uVar3;
                    break;
                case 0x800c0e0:
                    uVar13 = uVar2;
                    break;
                case 0x800c0ec:
                    uVar13 = uVar1;
                }
                uVar14 = (uVar13 >> (*(arg1 + 0x14) & 0x1f)) + uVar14;
                if (bVar8) {
                    return uVar14;
                }
                if (*(arg1 + 0x1c) < 7) {
    //switch table (6 cases) at 0x8003cd2
                    uVar13 = uVar15;
                    switch(*(*(arg1 + 0x1c) + 0x8003cd2) * 4 + 0x800c12c) {
                    case 0x800c130:
                        uVar13 = uVar6;
                        break;
                    case 0x800c13c:
                        uVar13 = uVar5;
                        break;
                    case 0x800c148:
                        uVar13 = uVar4;
                        break;
                    case 0x800c154:
                        uVar13 = uVar3;
                        break;
                    case 0x800c160:
                        uVar13 = uVar2;
                        break;
                    case 0x800c16c:
                        uVar13 = uVar1;
                    }
                    uVar14 = (uVar13 >> (*(arg1 + 0x20) & 0x1f)) + uVar14;
                    if (bVar9) {
                        return uVar14;
                    }
                    if (*(arg1 + 0x28) < 7) {
    //switch table (6 cases) at 0x8003cd9
                        uVar13 = uVar15;
                        switch(*(*(arg1 + 0x28) + 0x8003cd9) * 4 + 0x800c1ac) {
                        case 0x800c1b0:
                            uVar13 = uVar6;
                            break;
                        case 0x800c1bc:
                            uVar13 = uVar5;
                            break;
                        case 0x800c1c8:
                            uVar13 = uVar4;
                            break;
                        case 0x800c1d4:
                            uVar13 = uVar3;
                            break;
                        case 0x800c1e0:
                            uVar13 = uVar2;
                            break;
                        case 0x800c1ec:
                            uVar13 = uVar1;
                        }
                        uVar14 = (uVar13 >> (*(arg1 + 0x2c) & 0x1f)) + uVar14;
                        if (bVar10) {
                            return uVar14;
                        }
                        if (*(arg1 + 0x34) < 7) {
    //switch table (6 cases) at 0x8003ce0
                            uVar13 = uVar15;
                            switch(*(*(arg1 + 0x34) + 0x8003ce0) * 4 + 0x800c22c) {
                            case 0x800c230:
                                uVar13 = uVar6;
                                break;
                            case 0x800c23c:
                                uVar13 = uVar5;
                                break;
                            case 0x800c248:
                                uVar13 = uVar4;
                                break;
                            case 0x800c254:
                                uVar13 = uVar3;
                                break;
                            case 0x800c260:
                                uVar13 = uVar2;
                                break;
                            case 0x800c26c:
                                uVar13 = uVar1;
                            }
                            uVar14 = (uVar13 >> (*(arg1 + 0x38) & 0x1f)) + uVar14;
                            if (bVar11) {
                                return uVar14;
                            }
                            if (*(arg1 + 0x40) < 7) {
    //switch table (6 cases) at 0x8003ce7
                                uVar13 = uVar15;
                                switch(*(*(arg1 + 0x40) + 0x8003ce7) * 4 + 0x800c2ac) {
                                case 0x800c2b0:
                                    uVar13 = uVar6;
                                    break;
                                case 0x800c2bc:
                                    uVar13 = uVar5;
                                    break;
                                case 0x800c2c8:
                                    uVar13 = uVar4;
                                    break;
                                case 0x800c2d4:
                                    uVar13 = uVar3;
                                    break;
                                case 0x800c2e0:
                                    uVar13 = uVar2;
                                    break;
                                case 0x800c2ec:
                                    uVar13 = uVar1;
                                }
                                uVar14 = (uVar13 >> (*(arg1 + 0x44) & 0x1f)) + uVar14;
                                if (bVar12) {
                                    return uVar14;
                                }
                                if (*(arg1 + 0x4c) < 7) {
    //switch table (6 cases) at 0x8003cee
                                    switch(*(*(arg1 + 0x4c) + 0x8003cee) * 4 + 0x800c328) {
                                    case 0x800c32c:
                                        uVar15 = uVar6;
                                        break;
                                    case 0x800c34c:
                                        uVar15 = uVar5;
                                        break;
                                    case 0x800c358:
                                        uVar15 = uVar4;
                                        break;
                                    case 0x800c364:
                                        uVar15 = uVar3;
                                        break;
                                    case 0x800c370:
                                        uVar15 = uVar2;
                                        break;
                                    case 0x800c37c:
                                        uVar15 = uVar1;
                                    }
                                    return (uVar15 >> (*(arg1 + 0x50) & 0x1f)) + uVar14;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0xffffffea;
}


// ===== sym.get_fifo_play_length_us @ 0x0800c394 (size 328) =====

uint64_t sym.get_fifo_play_length_us(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    int iVar6;
    
    if (arg1 != 0) {
        iVar1 = *(arg1 + 8);
        iVar2 = iVar1 + -1;
        if (-1 < iVar2) {
            iVar2 = 0;
        }
        iVar5 = iVar1 + 1;
        do {
            uVar3 = iVar5 - 2;
            iVar6 = iVar2 + 1;
            if (uVar3 < 1) break;
            iVar5 = iVar5 + -1;
            iVar6 = iVar5;
        } while (*(*arg1 + uVar3) == '\0');
        if (*(arg1 + 0xc) < 0xe) {
            uVar3 = iVar6 * arg2;
            uVar4 = uVar3;
    //switch table (13 cases) at 0x8003cf5
            switch(*(*(arg1 + 0xc) + 0x8003cf5) * 4 + 0x800c408) {
            case 0x800c40c:
                return uVar3 >> 1;
            case 0x800c420:
                goto code_r0x0800c420;
            case 0x800c428:
                return uVar3 >> 2;
            case 0x800c434:
                return uVar3 >> 3;
            case 0x800c440:
                return uVar3 * 2;
            case 0x800c44c:
                return uVar3 * 4;
            case 0x800c458:
                return uVar3 * 8;
            case 0x800c464:
                return iVar1 * 1000 >> 3;
            case 0x800c478:
                return iVar1 * 1000 >> 4;
            case 0x800c48c:
                return (iVar1 * 1000) / 0x18;
            case 0x800c4ac:
                return iVar1 * 1000 >> 5;
            case 0x800c4c0:
                return (iVar1 * 10000) / 0x1b9;
            case 0x800c4e0:
                return (iVar1 * 1000) / 0x30;
            }
        }
    }
    uVar4 = 0xffffffea;
code_r0x0800c420:
    return uVar4;
}


// ===== sym.haptics_get_status_data @ 0x0800c4fc (size 552) =====

int sym.haptics_get_status_data(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    char *pcVar5;
    int64_t *piVar6;
    ulong *in_x18;
    uint32_t uVar7;
    char *pcVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    ushort auStack_4c [2];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_48 = *(iVar2 + 0x5e0);
    pcVar8 = arg2 & 0xffffffff;
    auStack_4c[0] = arg2;
    uVar7 = *(arg1 + 0x368) + 0x71U & 0xffff;
    iVar3 = regmap_bulk_write(*(arg1 + 8),uVar7,auStack_4c | 1,1);
    if (-1 < iVar3) {
        uVar7 = *(arg1 + 0x368) + 0x70U & 0xffff;
        iVar3 = regmap_bulk_write(*(arg1 + 8),uVar7,auStack_4c,1);
        if (-1 < iVar3) {
            uVar7 = *(arg1 + 0x368) + 9U & 0xffff;
            iVar3 = regmap_bulk_read(*(arg1 + 8),uVar7,arg3,2);
            if (-1 < iVar3) {
                uVar7 = arg2;
                if (uVar7 < 8) {
                    pcVar8 = *(pcVar8 * 8 + 0x8004fb8);
                }
                else {
                    pcVar5 = "FIFO_REAL_TIME_STS";
                    if (uVar7 != 0x8005) {
                        pcVar5 = NULL;
                    }
                    pcVar8 = "CLAMPED_DUTY_CYCLE_STS";
                    if (uVar7 != 0x8003) {
                        pcVar8 = pcVar5;
                    }
                }
                _dev_printk(0x8003b96,*arg1,"Get status data[%s] = (%#x, %#x)\n",pcVar8,*arg3,*(arg3 + 1));
                arg1 = *arg3;
                arg3 = *(arg3 + 1);
                goto code_r0x0800c680;
            }
            uVar4 = *arg1;
            pcVar5 = "read addr %#x failed, rc=%d\n";
            goto code_r0x0800c594;
        }
    }
    uVar4 = *arg1;
    pcVar5 = "write addr %#x failed, rc=%d\n";
code_r0x0800c594:
    _dev_err(uVar4,pcVar5,uVar7,iVar3);
    while (iVar2 = sp_el0, *(iVar2 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar9 = *0x8012c20;
            piVar6 = *0x8012c20;
            while (piVar6 != NULL) {
                (**piVar9)(piVar9[1],pcVar8,arg1 & 0xffffffff,arg3 & 0xffffffff);
                piVar9 = piVar9 + 3;
                piVar6 = *piVar9;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x0800c680:
        iVar3 = 0;
    }
    return iVar3;
}


// ===== sym.haptics_set_vmax_mv @ 0x0800c73c (size 96) =====

uint sym.haptics_set_vmax_mv(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x2f8);
    uVar1 = sym.__haptics_set_vmax_mv(arg1,arg2);
    mutex_unlock(arg1 + 0x2f8);
    return uVar1;
}


// ===== sym.__haptics_set_vmax_mv @ 0x0800c79c (size 508) =====

ushort * sym.__haptics_set_vmax_mv(int64_t arg1,uint32_t arg2)

{
    ushort uVar1;
    uchar auVar2 [16];
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    bool bVar7;
    uint32_t uVar8;
    uint32_t uVar10;
    int iVar11;
    uint32_t uVar12;
    int iVar13;
    uint32_t uVar9;
    ulong uVar14;
    ulong *puVar15;
    int64_t iVar16;
    ulong *puVar17;
    char *pcVar18;
    uint8_t *puVar19;
    uint uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ulong *extraout_x18_05;
    ushort *puVar21;
    uint64_t uVar22;
    ushort *puVar23;
    uint64_t uVar24;
    uint64_t arg2_00;
    ushort *puVar25;
    ushort *puVar26;
    ushort *puVar27;
    uint64_t unaff_x23;
    uint64_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    ulong unaff_x30;
    uchar auVar31 [16];
    ushort uStack_22c;
    int64_t iStack_228;
    ulong ****ppppuStack_220;
    code *pcStack_218;
    ulong *puStack_210;
    uint uStack_1fc;
    int64_t iStack_1f8;
    ulong ****ppppuStack_1f0;
    code *pcStack_1e8;
    ushort *puStack_1e0;
    uint64_t uStack_1d8;
    ushort *puStack_1d0;
    ushort *puStack_1c8;
    ushort *puStack_1c0;
    ulong *puStack_1b8;
    uint8_t auStack_1a4 [4];
    ulong uStack_1a0;
    ulong uStack_198;
    ulong uStack_190;
    int64_t iStack_188;
    uchar ****ppppuStack_180;
    code *pcStack_178;
    ushort *puStack_170;
    uint64_t uStack_168;
    ushort *puStack_160;
    ushort *puStack_158;
    ushort *puStack_150;
    ulong *puStack_148;
    uint8_t uStack_140;
    uchar uStack_13f;
    uint8_t auStack_13c [4];
    int64_t iStack_138;
    uchar ***pppuStack_130;
    code *pcStack_128;
    ushort *puStack_120;
    uint64_t uStack_118;
    uint64_t uStack_110;
    int64_t *piStack_108;
    uint uStack_fc;
    ulong uStack_f8;
    uint32_t uStack_f0;
    ushort uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uchar auStack_80 [4];
    uchar auStack_7c [4];
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    ushort *puStack_50;
    int64_t iStack_48;
    uchar auStack_40 [4];
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    int64_t *arg1_00;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_38 = *(iVar16 + 0x5e0);
    if (*(arg1 + 0x386) < arg2) {
        _dev_printk(0x8003b96,*arg1,"vmax (%d) exceed the max value: %d\n");
        arg2 = *(arg1 + 0x386);
    }
    uVar10 = *(arg1 + 0x374);
    if (arg2 <= *(arg1 + 0x374)) {
        uVar10 = arg2;
    }
    uVar9 = 5000;
    if (uVar10 < 0x1389 || *(arg1 + 0x38e) == '\0') {
        uVar9 = uVar10;
    }
    uVar24 = uVar9;
    uVar10 = 0x20;
    if (*(arg1 + 0x390) != '\0') {
        uVar10 = 0x32;
    }
    auStack_40[0] = 0;
    if (uVar10 != 0) {
        auStack_40[0] = uVar9 / uVar10;
    }
    uVar10 = *(arg1 + 0x368) + 0x48U & 0xffff;
    uVar8 = regmap_bulk_write(*(arg1 + 8),uVar10,auStack_40,1);
    if (uVar8 < 0) {
        puVar21 = uVar8;
        _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar10,puVar21);
        uVar14 = *arg1;
        pcVar18 = "config VMAX failed, rc=%d\n";
code_r0x0800c880:
        _dev_err(uVar14,pcVar18,puVar21);
    }
    else {
        _dev_printk(0x8003b96,*arg1,"Set Vmax to %u mV\n",uVar9);
        puVar21 = NULL;
        auStack_3c[0] = 0;
        if (*(arg1 + 0x388) == 4) {
            iVar13 = 10;
            do {
                uVar24 = *(arg1 + 0x368) + 0xbU & 0xffff;
                uVar10 = regmap_bulk_read(*(arg1 + 8),uVar24,auStack_3c,1);
                puVar21 = uVar10;
                if (uVar10 < 0) {
                    _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar24,puVar21);
                    goto code_r0x0800c984;
                }
                uVar4 = auStack_3c[0] & 3;
                auStack_3c[0] = auStack_3c[0] & 3;
                if ((uVar4 == 0) || (auStack_3c[0] == 3)) goto code_r0x0800c918;
                __const_udelay(0x418958);
                iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
            if (uVar10 == 0) {
                sym.haptics_toggle_module_enable(arg1);
                _dev_err(*arg1,"set Vmax failed, toggle HAPTICS_EN to restore HW status\n");
                puVar21 = 0xfffffff0;
code_r0x0800c984:
                uVar14 = *arg1;
                pcVar18 = "check hpwr_status failed, rc=%d\n";
                goto code_r0x0800c880;
            }
        }
    }
code_r0x0800c918:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_38) {
        return puVar21;
    }
    puVar15 = __stack_chk_fail();
    *extraout_x18 = sym.haptics_toggle_module_enable;
    pcStack_68 = sym.haptics_toggle_module_enable;
    iVar16 = sp_el0;
    iStack_78 = *(iVar16 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = uVar24;
    puStack_50 = puVar21;
    iStack_48 = arg1;
    usleep_range_state(100,0x65,2);
    auStack_80[0] = 0;
    uVar10 = *(puVar15 + 0x6d) + 0x46U & 0xffff;
    uVar9 = regmap_bulk_write(puVar15[1],uVar10,auStack_80,1);
    uVar14 = *puVar15;
    if (uVar9 < 0) {
code_r0x0800ca60:
        puVar21 = uVar9;
        _dev_err(uVar14,"write addr %#x failed, rc=%d\n",uVar10,puVar21);
    }
    else {
        _dev_printk(0x8003b96,uVar14,"haptics module %s\n","disabled");
        usleep_range_state(100,0x65,2);
        auStack_7c[0] = 0x80;
        uVar10 = *(puVar15 + 0x6d) + 0x46U & 0xffff;
        uVar9 = regmap_bulk_write(puVar15[1],uVar10,auStack_7c,1);
        uVar14 = *puVar15;
        if (uVar9 < 0) goto code_r0x0800ca60;
        _dev_printk(0x8003b96,uVar14,"haptics module %s\n","enabled");
        puVar21 = NULL;
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_78) {
        return puVar21;
    }
    auVar31 = __stack_chk_fail();
    uVar24 = auVar31._8_8_;
    arg1_00 = auVar31._0_8_;
    *extraout_x18_00 = sym.haptics_get_closeloop_lra_period;
    pcStack_d8 = sym.haptics_get_closeloop_lra_period;
    iVar16 = sp_el0;
    arg2_00 = uVar24 & 0xffffffff;
    iStack_e8 = *(iVar16 + 0x5e0);
    uStack_ec = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uVar22 = *(*arg1_00 + 0x2f0);
    uStack_fc = 0;
    if ((uVar24 & 1) != 0) {
        *(arg1_00 + 0xe) = 0;
    }
    puVar21 = arg1_00[0x6d] + 0x72U & 0xffff;
    ppuStack_e0 = &puStack_70;
    uVar10 = regmap_bulk_read(arg1_00[1],puVar21,&uStack_ec,1);
    if (uVar10 < 0) {
        iVar16 = *arg1_00;
        pcVar18 = "read addr %#x failed, rc=%d\n";
        puVar26 = puVar21;
code_r0x0800cd4c:
        _dev_err(iVar16,pcVar18,puVar21,uVar10);
        puVar21 = uVar10;
    }
    else {
        uVar4 = uStack_ec;
        puVar26 = uStack_ec;
        if (((uVar24 & 1) == 0) || ((*(arg1_00 + 0x71) & 0xfffffffe) != 2)) {
            uVar10 = sym.haptics_get_status_data(arg1_00,0,&uStack_ec);
            if (uVar10 < 0) {
                puVar21 = uVar10;
            }
            else {
code_r0x0800cbbc:
                uVar6 = uStack_ec;
                uVar5 = uStack_ec;
                uVar30 = uStack_ec;
                uVar29 = uStack_ec._1_1_;
                uVar10 = sym.haptics_get_status_data(arg1_00,4,&uStack_ec);
                puVar21 = uVar10;
                if (-1 < uVar10) {
                    bVar7 = (uVar6 & 0x20) != 0;
                    uVar4 = uVar4 >> 2;
                    uVar10 = uVar4 & 3;
                    puVar26 = uVar10;
                    uVar28 = (uVar30 & 0x20) >> 5;
                    uVar30 = uStack_ec._1_1_ | (uStack_ec & 0x1f) << 8;
                    _dev_info(*arg1_00,"rc_clk_cal = %u, auto_res_done = %d\n",puVar26,uVar28);
                    *(arg1_00 + 0x6e) = uVar28;
                    if (((uVar4 & 3) != 0) || (bVar7)) {
                        unaff_x23 = (uVar5 & 0x1f) << 8 | uVar29;
                        if (((uVar4 & 3) == 0) && ((uVar6 & 0x20) != 0)) {
                            _dev_printk(0x8003b96,*arg1_00,"cal_tlra_cl_sts = %#x\n",unaff_x23);
                            auVar31._8_8_ = 0;
                            auVar31._0_8_ = unaff_x23 * 0x32db8800000000 >> 0x20;
                            uVar29 = SUB168(auVar31 * ZEXT816(0x431bde82d7b634db),8);
                            goto code_r0x0800ce60;
                        }
                        if (uVar10 != 1 || bVar7) {
                            if ((uVar10 != 1) || ((uVar6 & 0x20) == 0)) {
                                _dev_err(*arg1_00,"Can\'t get close-loop LRA period in rc_clk_cal mode %u\n",uVar10);
                                puVar21 = 0xffffffea;
                            }
                            else {
                                uVar10 = sym.haptics_get_status_data(arg1_00,3,&uStack_ec);
                                puVar21 = uVar10;
                                if (-1 < uVar10) {
                                    uVar29 = uStack_ec._1_1_ | (uStack_ec & 0x1f) << 8;
                                    _dev_printk(0x8003b96,*arg1_00,
                                                "last_good_tlra_cl_sts = %#x, cal_tlra_cl_sts = %#x\n",uVar29,
                                                unaff_x23);
                                    uVar10 = 0xcb735;
                                    if ((*(arg1_00 + 0x6f) & 4) != 0) {
                                        uVar10 = 0xc6b1a;
                                    }
                                    uVar30 = 0;
                                    if (unaff_x23 != 0) {
                                        uVar30 = (uVar10 * uVar29 * uVar29) / unaff_x23;
                                    }
                                    uVar10 = *(arg1_00 + 8);
                                    uVar9 = uVar30 / 1000000;
                                    *(arg1_00 + 0x44) = uVar9;
                                    puVar21 = 0xffffffea;
                                    if ((uVar10 != 0) && (uVar9 != 0)) {
                                        uVar8 = 0x53d64;
                                        if ((*(arg1_00 + 0x6f) & 4) != 0) {
                                            uVar8 = 360000;
                                        }
                                        puVar26 = NULL;
                                        uVar30 = 0;
                                        if (uVar29 != 0) {
                                            uVar30 = (uVar9 * unaff_x23 * uVar8) / uVar29;
                                        }
                                        uVar30 = uVar30 / 0x125;
                                        goto code_r0x0800d0cc;
                                    }
                                }
                            }
                            goto code_r0x0800cd54;
                        }
                        uVar10 = sym.haptics_read(arg1_00,*(arg1_00 + 0x6d));
                        puVar26 = uVar10;
                        puVar21 = puVar26;
                        if (uVar10 < 0) goto code_r0x0800cd54;
                        uVar29 = uStack_ec._1_1_ | (uStack_ec & 0xf) << 8;
                        _dev_printk(0x8003b96,*arg1_00,"tlra_ol = %#x, tlra_cl_err_sts = %#x, cal_tlra_cl_sts = %#x\n"
                                    ,uVar29,uVar30,unaff_x23);
                        uVar10 = 0x196e6b;
                        if ((*(arg1_00 + 0x6f) & 4) != 0) {
                            uVar10 = 0x18d634;
                        }
                        uVar28 = 0;
                        if (unaff_x23 != 0) {
                            uVar28 = (uVar10 * uVar29 * uVar30) / unaff_x23;
                        }
                        uVar10 = *(arg1_00 + 8);
                        uVar9 = uVar28 / 1000000;
                        *(arg1_00 + 0x44) = uVar9;
                        puVar21 = 0xffffffea;
                        if ((uVar10 == 0) || (uVar9 == 0)) goto code_r0x0800cd54;
                        uVar8 = 0x53d64;
                        if ((*(arg1_00 + 0x6f) & 4) != 0) {
                            uVar8 = 360000;
                        }
                        uVar30 = 0;
                        if (uVar29 != 0) {
                            uVar30 = (uVar9 * unaff_x23 * uVar8) / uVar29;
                        }
                        uVar30 = uVar30 / 0x24a;
code_r0x0800d0cc:
                        uVar1 = 0;
                        if (uVar10 != 0) {
                            uVar1 = uVar30 / uVar10;
                        }
                        *(arg1_00 + 100) = uVar1;
                    }
                    else {
                        unaff_x23 = uVar30 * 0x196fb8;
                        _dev_printk(0x8003b96,*arg1_00,"tlra_cl_err_sts = %#x\n",uVar30);
                        auVar2._8_8_ = 0;
                        auVar2._0_8_ = unaff_x23;
                        uVar29 = SUB168(auVar2 * ZEXT816(0x431bde82d7b634db),8);
code_r0x0800ce60:
                        puVar26 = NULL;
                        uVar9 = uVar29 >> 0x12;
                        *(arg1_00 + 0x44) = uVar9;
                    }
                    if ((uVar24 & 1) != 0) {
                        uVar10 = 0;
                        if (uVar9 != 0) {
                            uVar10 = 1000000 / uVar9;
                        }
                        arg2_00 = uVar10;
                        *(arg1_00 + 0xe) = 1;
                        _dev_info(*arg1_00,"xbl f0  =%d \n",arg2_00);
                        uVar9 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-min",&uStack_f0,1,0);
                        unaff_x23 = uVar9;
                        if (uVar9 < 0) {
                            _dev_err(*arg1_00,"lra-f0-min failed, rc=%d\n",puVar26);
                        }
                        iVar13 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-max",&uStack_f8 + 4,1,0);
                        if (iVar13 < 0) {
                            _dev_err(*arg1_00,"lra-f0-max failed, rc=%d\n",puVar26);
                        }
                        iVar11 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-default",&uStack_f8,1,0);
                        if (iVar11 < 0) {
                            _dev_err(*arg1_00,"lra-f0-default failed, rc=%d\n",puVar26);
                        }
                        iVar16 = 1;
                        uVar8 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-cal-count",&uStack_fc,1,0);
                        uVar22 = uVar8;
                        if (uVar8 < 0) {
                            _dev_err(*arg1_00,"lra-f0-cal-count failed, rc=%d\n",puVar26);
                        }
                        if ((((uVar9 < 0) || (iVar13 < 0)) || (iVar11 < 0)) || (uVar8 < 0)) {
                            _dev_err(*arg1_00,"lra-f0: default min max count must set together in dtsi\n");
                            sym.xm_hap_driver_exception_handler(0x36038b91,arg2_00,0x80036d2,iVar16);
                        }
                        else {
                            if ((uStack_f8._4_4_ < uVar10) || (uVar10 < uStack_f0)) {
                                _dev_info(*arg1_00,
                                          "xbl f0 abnormal: %d ~ 0x%x use default: %d ~ 0x%x f0:%d - %d after boot\n",
                                          arg2_00,*(arg1_00 + 100),uStack_f8 & 0xffffffff,uStack_fc);
                                sym.xm_hap_driver_exception_handler
                                          (0x36038b92,arg2_00,uStack_f8 & 0xffffffff,0x80033ec);
                                iVar13 = 0;
                                if (uStack_f8 != 0) {
                                    iVar13 = 1000000 / uStack_f8;
                                }
                                *(arg1_00 + 100) = uStack_fc;
                                *(arg1_00 + 0x44) = iVar13;
                                if ((uVar6 & 0x20) == 0) {
                                    uVar20 = 0xffffffff;
                                }
                                else {
                                    uVar20 = 0xfffffffe;
                                }
                            }
                            else {
                                uVar20 = 2;
                            }
                            *(arg1_00 + 0xe) = uVar20;
                        }
                    }
                    _dev_printk(0x8003b96,*arg1_00,"OL_TLRA %u us, CL_TLRA %u us, RC_CLK_CAL_COUNT %#x\n",arg1_00[8]
                                ,*(arg1_00 + 0x44),*(arg1_00 + 100));
                    puVar21 = NULL;
                }
            }
        }
        else {
            if (arg1_00[0x3c] != 0) {
                uVar10 = nvmem_device_read(arg1_00[0x3c],0x46,2,&uStack_ec);
                if (-1 < uVar10) goto code_r0x0800cbbc;
                iVar16 = *arg1_00;
                puVar21 = 0x46;
                pcVar18 = "read SDAM %#x failed, rc=%d\n";
                goto code_r0x0800cd4c;
            }
            _dev_printk(0x8003b96,*arg1_00,"nvmem device for hap_cfg is not defined\n");
            puVar21 = 0xffffffea;
        }
    }
code_r0x0800cd54:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_e8) {
        return puVar21;
    }
    auVar31 = __stack_chk_fail();
    puVar15 = auVar31._0_8_;
    puVar19 = &uStack_140;
    *extraout_x18_01 = sym.haptics_config_openloop_lra_period;
    pcStack_128 = sym.haptics_config_openloop_lra_period;
    iVar16 = sp_el0;
    iStack_138 = *(iVar16 + 0x5e0);
    puVar23 = auVar31._8_8_ & 0xffffffff;
    auStack_13c[0] = 0;
    pppuStack_130 = &ppuStack_e0;
    puStack_120 = puVar26;
    uStack_118 = arg2_00;
    uStack_110 = uVar22;
    piStack_108 = arg1_00;
    if ((*(puVar15 + 0x6f) >> 2 & 1) == 0) {
code_r0x0800d1f8:
        puVar27 = *(puVar15 + 0x6d) + 0x5cU & 0xffff;
        uStack_140 = (puVar23 & 0xffffffff) / 0x500 & 0xf;
        uStack_13f = (puVar23 & 0xffffffff) / 5;
        uVar10 = regmap_bulk_write(puVar15[1],puVar27,&uStack_140,2);
        puVar25 = uVar10;
        puVar23 = puVar27;
        if (uVar10 < 0) {
            uVar14 = *puVar15;
            pcVar18 = "write addr %#x failed, rc=%d\n";
            goto code_r0x0800d298;
        }
    }
    else {
        puVar27 = *(puVar15 + 0x6d) + 0x72U & 0xffff;
        uVar10 = regmap_bulk_read(puVar15[1],puVar27,auStack_13c,1);
        puVar26 = puVar27;
        if (-1 < uVar10) {
            if ((auStack_13c[0] & 0xc) == 4) {
                puVar23 = (puVar23 << 7) / 0x7d;
            }
            goto code_r0x0800d1f8;
        }
        puVar25 = uVar10;
        uVar14 = *puVar15;
        pcVar18 = "read addr %#x failed, rc=%d\n";
code_r0x0800d298:
        _dev_err(uVar14,pcVar18,puVar27,puVar25);
        puVar19 = puVar27;
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_138) {
        return puVar25;
    }
    auVar31 = __stack_chk_fail();
    puVar27 = auVar31._8_8_;
    puVar17 = auVar31._0_8_;
    *extraout_x18_02 = sym.haptics_set_pattern;
    pcStack_178 = sym.haptics_set_pattern;
    iVar16 = sp_el0;
    iStack_188 = *(iVar16 + 0x5e0);
    uVar10 = puVar19;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_1a0 = 0;
    ppppuStack_180 = &pppuStack_130;
    puStack_170 = puVar21;
    uStack_168 = unaff_x23;
    puStack_160 = puVar26;
    puStack_158 = puVar25;
    puStack_150 = puVar23;
    puStack_148 = puVar15;
    if ((uVar10 & 0xfffffffe) == 2) {
        puVar23 = puVar19 & 0xffffffff;
        auStack_1a4[0] = 0;
        puVar21 = *(puVar27 + 0x30);
        if ((*(puVar17 + 0x6f) >> 2 & 1) != 0) {
            uVar24 = *(puVar17 + 0x6d) + 0x72U & 0xffff;
            uVar9 = regmap_bulk_read(puVar17[1],uVar24,auStack_1a4,1);
            if (uVar9 < 0) {
                puVar26 = uVar9;
                uVar22 = uVar24;
                _dev_err(*puVar17,"read addr %#x failed, rc=%d\n",uVar24,puVar26);
                uVar10 = uVar22;
                puVar25 = puVar27;
                unaff_x23 = uVar24;
                goto code_r0x0800d4fc;
            }
            if ((auStack_1a4[0] & 0xc) == 4) {
                puVar21 = (puVar21 << 7) / 0x7d;
            }
        }
        iVar13 = 0x32;
        if (uVar10 != 3) {
            iVar13 = 0x30;
        }
        unaff_x23 = *(puVar17 + 0x36c) + iVar13 & 0xffff;
        uStack_1a0 = CONCAT71(uStack_1a0._1_7_,(puVar21 & 0xffffffff) / 0x500) & 0xffffffffffffff0f;
        uStack_1a0._0_2_ = CONCAT11((puVar21 & 0xffffffff) / 5,uStack_1a0);
        uVar9 = regmap_bulk_write(puVar17[1],unaff_x23,&uStack_1a0,2);
        if (uVar9 < 0) {
            puVar26 = uVar9;
            _dev_err(*puVar17,"write addr %#x failed, rc=%d\n",unaff_x23,puVar26);
            uVar14 = *puVar17;
            pcVar18 = "update pattern TLRA failed, rc=%d\n";
        }
        else {
            puVar15 = &uStack_1a0;
            uStack_1a0._0_4_ =
                 CONCAT13(*(puVar27 + 8) & 7 | *(puVar27 + 10) << 7,
                          CONCAT21(CONCAT11(*puVar27,*puVar27 >> 8),*(puVar27 + 2) & 7 | *(puVar27 + 4) << 7)) &
                 0xffff01ff;
            uStack_1a0._0_5_ = uStack_1a0;
            uStack_1a0._0_7_ = CONCAT16(*(puVar27 + 0xe) & 7 | *(puVar27 + 0x10) << 7,CONCAT15(puVar27[6],uStack_1a0))
            ;
            uStack_1a0 = CONCAT17(puVar27[0xc] >> 8,uStack_1a0) & 0x1ffffffffffffff;
            uStack_1a0 = CONCAT35(uStack_1a0._5_3_,CONCAT14(puVar27[6] >> 8,uStack_1a0)) & 0xffffff01ffffffff;
            uStack_198._0_4_ = puVar27[0x12] << 0x18;
            uVar9 = uStack_198 >> 0x10;
            uStack_198._0_2_ = CONCAT11(*(puVar27 + 0x14) & 7 | *(puVar27 + 0x16) << 7,puVar27[0xc]);
            uStack_198._0_5_ = CONCAT14(*(puVar27 + 0x1a) & 7 | *(puVar27 + 0x1c) << 7,CONCAT22(uVar9,uStack_198));
            uStack_198 = CONCAT17(*(puVar27 + 0x20) & 7 | *(puVar27 + 0x22) << 7,
                                  CONCAT16(puVar27[0x18],
                                           CONCAT15(puVar27[0x18] >> 8,
                                                    CONCAT53(uStack_198 >> 0x18,
                                                             CONCAT12(puVar27[0x12] >> 8,uStack_198))))) &
                         0xffff01ffff01ffff;
            uStack_190._0_3_ = CONCAT12(*(puVar27 + 0x26) & 7 | *(puVar27 + 0x28) << 7,puVar27[0x1e] << 8);
            iVar13 = 0x50;
            if (uVar10 != 3) {
                iVar13 = 0x34;
            }
            puVar23 = *(puVar17 + 0x36c) + iVar13 & 0xffff;
            uStack_190 = CONCAT17(puVar27[0x2a],
                                  CONCAT16(puVar27[0x2a] >> 8,
                                           CONCAT15(*(puVar27 + 0x2c) & 7 | *(puVar27 + 0x2e) << 7,
                                                    CONCAT14(puVar27[0x24],
                                                             CONCAT31(CONCAT13(puVar27[0x24] >> 8,uStack_190) >> 8,
                                                                      puVar27[0x1e] >> 8))))) & 0xff01ffff01ffff01;
            uVar9 = regmap_bulk_write(puVar17[1],puVar23,puVar15,0x18);
            uVar10 = puVar15;
            if (-1 < uVar9) {
                puVar26 = NULL;
                puVar25 = puVar27;
                goto code_r0x0800d4fc;
            }
            puVar26 = uVar9;
            _dev_err(*puVar17,"write addr %#x failed, rc=%d\n",puVar23,puVar26);
            uVar14 = *puVar17;
            pcVar18 = "write pattern data failed, rc=%d\n";
        }
        puVar25 = puVar26;
        _dev_err(uVar14,pcVar18);
        uVar10 = puVar25;
        puVar25 = puVar27;
    }
    else {
        _dev_err(*puVar17,"no pattern src specified!\n");
        puVar26 = 0xffffffea;
    }
code_r0x0800d4fc:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_188) {
        return puVar26;
    }
    auVar31 = __stack_chk_fail();
    iVar16 = auVar31._8_8_;
    puVar15 = auVar31._0_8_;
    *extraout_x18_03 = sym.haptics_update_memory_data;
    pcStack_1e8 = sym.haptics_update_memory_data;
    iVar3 = sp_el0;
    iStack_1f8 = *(iVar3 + 0x5e0);
    uStack_1fc = 0;
    puStack_210 = puVar17;
    ppppuStack_1f0 = &ppppuStack_180;
    puStack_1e0 = puVar21;
    uStack_1d8 = unaff_x23;
    puStack_1d0 = puVar26;
    puStack_1c8 = puVar25;
    puStack_1c0 = puVar23;
    puStack_1b8 = puVar17;
    if (uVar10 == 0) {
code_r0x0800d73c:
        puVar21 = NULL;
    }
    else {
        puStack_210 = puVar15;
        if (3 < uVar10) {
            uVar9 = uVar10 >> 2;
            do {
                uVar8 = *(puVar15 + 0x36c) + 0x20U & 0xffff;
                uVar12 = regmap_bulk_write(puVar15[1],uVar8,iVar16,4);
                if (uVar12 < 0) {
                    puVar21 = uVar12;
                    _dev_err(*puVar15,"write addr %#x failed, rc=%d\n",uVar8,puVar21);
                    uVar14 = *puVar15;
                    pcVar18 = "bulk write FIFO_DIN failed, rc=%d\n";
                    goto code_r0x0800d7cc;
                }
                iVar16 = iVar16 + 4;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
        uVar9 = uVar10 & 3;
        if ((uVar10 & 3) == 0) goto code_r0x0800d73c;
        if (*(puVar15 + 0x71) == 2) {
            memcpy(&uStack_1fc,iVar16,uVar9);
            uVar10 = *(puVar15 + 0x36c) + 0x20U & 0xffff;
            uVar9 = regmap_bulk_write(puVar15[1],uVar10,&uStack_1fc,4);
            puVar21 = uVar9;
            if (uVar9 < 0) {
                _dev_err(*puVar15,"write addr %#x failed, rc=%d\n",uVar10,puVar21);
                uVar14 = *puVar15;
                pcVar18 = "write FIFO_DIN failed, rc=%d\n";
                goto code_r0x0800d7cc;
            }
        }
        else {
            uVar10 = *(puVar15 + 0x36c) + 0x2cU & 0xffff;
            uVar8 = regmap_bulk_write(puVar15[1],uVar10,iVar16,1);
            if (-1 < uVar8) {
                if (uVar9 != 1) {
                    uVar10 = *(puVar15 + 0x36c) + 0x2cU & 0xffff;
                    uVar8 = regmap_bulk_write(puVar15[1],uVar10,iVar16 + 1,1);
                    if (uVar8 < 0) goto code_r0x0800d7a4;
                    if (uVar9 != 2) {
                        uVar10 = *(puVar15 + 0x36c) + 0x2cU & 0xffff;
                        uVar8 = regmap_bulk_write(puVar15[1],uVar10,iVar16 + 2,1);
                        if (uVar8 < 0) goto code_r0x0800d7a4;
                    }
                }
                goto code_r0x0800d73c;
            }
code_r0x0800d7a4:
            puVar21 = uVar8;
            _dev_err(*puVar15,"write addr %#x failed, rc=%d\n",uVar10,puVar21);
            uVar14 = *puVar15;
            pcVar18 = "write FIFO_DIN_1B failed, rc=%d\n";
code_r0x0800d7cc:
            _dev_err(uVar14,pcVar18,puVar21);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_1f8) {
        return puVar21;
    }
    __stack_chk_fail();
    *extraout_x18_04 = sym.swr_slave_reg_enable;
    pcStack_218 = sym.swr_slave_reg_enable;
    iVar16 = sp_el0;
    iStack_228 = *(iVar16 + 0x5e0);
    ppppuStack_220 = &ppppuStack_1f0;
    iVar16 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar16 + 8),*(iVar16 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar16 + 0x378) >> 4 & 1) != 0) {
        uStack_22c = 0;
        iVar13 = sym.haptics_get_status_data(iVar16,5,&uStack_22c);
        uVar10 = *(iVar16 + 0x368) + 0x4bU & 0xffff;
        if ((iVar13 < 0) || ((uStack_22c._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar16 + 8),uVar10,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar16 + 8),uVar10,0x10,0x10,0,0,0);
            puVar21 = sym.haptics_toggle_module_enable(iVar16);
            if (puVar21 < 0) goto code_r0x0800d8c0;
        }
    }
    puVar21 = NULL;
    *(iVar16 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_228) {
        return puVar21;
    }
    __stack_chk_fail(puVar21);
    *extraout_x18_05 = sym.swr_slave_reg_disable;
    iVar16 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar16 + 8),*(iVar16 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0);
    *(iVar16 + 0x38d) = 0;
    return NULL;
}


// ===== sym.haptics_toggle_module_enable @ 0x0800c998 (size 324) =====

ushort * sym.haptics_toggle_module_enable(int64_t arg1)

{
    ushort uVar1;
    uchar auVar2 [16];
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    bool bVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int iVar13;
    int64_t iVar14;
    ulong *puVar15;
    char *pcVar16;
    uint8_t *puVar17;
    ulong *puVar18;
    uint uVar19;
    ulong uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    ushort *puVar21;
    uint64_t uVar22;
    ushort *puVar23;
    uint64_t arg2;
    ushort *puVar24;
    ushort *puVar25;
    ushort *puVar26;
    uint64_t unaff_x23;
    uint64_t uVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    ulong unaff_x30;
    uchar auVar31 [16];
    ushort uStack_1ec;
    int64_t iStack_1e8;
    ulong ****ppppuStack_1e0;
    code *pcStack_1d8;
    ulong *puStack_1d0;
    uint uStack_1bc;
    int64_t iStack_1b8;
    uchar ****ppppuStack_1b0;
    code *pcStack_1a8;
    ushort *puStack_1a0;
    uint64_t uStack_198;
    ushort *puStack_190;
    ushort *puStack_188;
    ushort *puStack_180;
    ulong *puStack_178;
    uint8_t auStack_164 [4];
    ulong uStack_160;
    ulong uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    uchar ***pppuStack_140;
    code *pcStack_138;
    ushort *puStack_130;
    uint64_t uStack_128;
    ushort *puStack_120;
    ushort *puStack_118;
    ushort *puStack_110;
    ulong *puStack_108;
    uint8_t uStack_100;
    uchar uStack_ff;
    uint8_t auStack_fc [4];
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    ushort *puStack_e0;
    uint64_t uStack_d8;
    uint64_t uStack_d0;
    int64_t *piStack_c8;
    uint uStack_bc;
    ulong uStack_b8;
    uint32_t uStack_b0;
    ushort uStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uchar auStack_40 [4];
    uchar auStack_3c [4];
    int64_t iStack_38;
    int64_t *arg1_00;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_38 = *(iVar14 + 0x5e0);
    usleep_range_state(100,0x65,2);
    auStack_40[0] = 0;
    uVar9 = *(arg1 + 0x368) + 0x46U & 0xffff;
    uVar8 = regmap_bulk_write(*(arg1 + 8),uVar9,auStack_40,1);
    uVar20 = *arg1;
    if (uVar8 < 0) {
code_r0x0800ca60:
        puVar21 = uVar8;
        _dev_err(uVar20,"write addr %#x failed, rc=%d\n",uVar9,puVar21);
    }
    else {
        _dev_printk(0x8003b96,uVar20,"haptics module %s\n","disabled");
        usleep_range_state(100,0x65,2);
        auStack_3c[0] = 0x80;
        uVar9 = *(arg1 + 0x368) + 0x46U & 0xffff;
        uVar8 = regmap_bulk_write(*(arg1 + 8),uVar9,auStack_3c,1);
        uVar20 = *arg1;
        if (uVar8 < 0) goto code_r0x0800ca60;
        _dev_printk(0x8003b96,uVar20,"haptics module %s\n","enabled");
        puVar21 = NULL;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_38) {
        return puVar21;
    }
    auVar31 = __stack_chk_fail();
    uVar28 = auVar31._8_8_;
    arg1_00 = auVar31._0_8_;
    *extraout_x18 = sym.haptics_get_closeloop_lra_period;
    pcStack_98 = sym.haptics_get_closeloop_lra_period;
    iVar14 = sp_el0;
    arg2 = uVar28 & 0xffffffff;
    iStack_a8 = *(iVar14 + 0x5e0);
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uVar22 = *(*arg1_00 + 0x2f0);
    uStack_bc = 0;
    if ((uVar28 & 1) != 0) {
        *(arg1_00 + 0xe) = 0;
    }
    puVar21 = arg1_00[0x6d] + 0x72U & 0xffff;
    puStack_a0 = &stack0xffffffffffffffd0;
    uVar9 = regmap_bulk_read(arg1_00[1],puVar21,&uStack_ac,1);
    if (uVar9 < 0) {
        iVar14 = *arg1_00;
        pcVar16 = "read addr %#x failed, rc=%d\n";
        puVar25 = puVar21;
code_r0x0800cd4c:
        _dev_err(iVar14,pcVar16,puVar21,uVar9);
        puVar21 = uVar9;
    }
    else {
        uVar4 = uStack_ac;
        puVar25 = uStack_ac;
        if (((uVar28 & 1) == 0) || ((*(arg1_00 + 0x71) & 0xfffffffe) != 2)) {
            uVar9 = sym.haptics_get_status_data(arg1_00,0,&uStack_ac);
            if (uVar9 < 0) {
                puVar21 = uVar9;
            }
            else {
code_r0x0800cbbc:
                uVar6 = uStack_ac;
                uVar5 = uStack_ac;
                uVar30 = uStack_ac;
                uVar29 = uStack_ac._1_1_;
                uVar9 = sym.haptics_get_status_data(arg1_00,4,&uStack_ac);
                puVar21 = uVar9;
                if (-1 < uVar9) {
                    bVar7 = (uVar6 & 0x20) != 0;
                    uVar4 = uVar4 >> 2;
                    uVar9 = uVar4 & 3;
                    puVar25 = uVar9;
                    uVar27 = (uVar30 & 0x20) >> 5;
                    uVar30 = uStack_ac._1_1_ | (uStack_ac & 0x1f) << 8;
                    _dev_info(*arg1_00,"rc_clk_cal = %u, auto_res_done = %d\n",puVar25,uVar27);
                    *(arg1_00 + 0x6e) = uVar27;
                    if (((uVar4 & 3) != 0) || (bVar7)) {
                        unaff_x23 = (uVar5 & 0x1f) << 8 | uVar29;
                        if (((uVar4 & 3) == 0) && ((uVar6 & 0x20) != 0)) {
                            _dev_printk(0x8003b96,*arg1_00,"cal_tlra_cl_sts = %#x\n",unaff_x23);
                            auVar31._8_8_ = 0;
                            auVar31._0_8_ = unaff_x23 * 0x32db8800000000 >> 0x20;
                            uVar29 = SUB168(auVar31 * ZEXT816(0x431bde82d7b634db),8);
                            goto code_r0x0800ce60;
                        }
                        if (uVar9 != 1 || bVar7) {
                            if ((uVar9 != 1) || ((uVar6 & 0x20) == 0)) {
                                _dev_err(*arg1_00,"Can\'t get close-loop LRA period in rc_clk_cal mode %u\n",uVar9);
                                puVar21 = 0xffffffea;
                            }
                            else {
                                uVar9 = sym.haptics_get_status_data(arg1_00,3,&uStack_ac);
                                puVar21 = uVar9;
                                if (-1 < uVar9) {
                                    uVar29 = uStack_ac._1_1_ | (uStack_ac & 0x1f) << 8;
                                    _dev_printk(0x8003b96,*arg1_00,
                                                "last_good_tlra_cl_sts = %#x, cal_tlra_cl_sts = %#x\n",uVar29,
                                                unaff_x23);
                                    uVar9 = 0xcb735;
                                    if ((*(arg1_00 + 0x6f) & 4) != 0) {
                                        uVar9 = 0xc6b1a;
                                    }
                                    uVar30 = 0;
                                    if (unaff_x23 != 0) {
                                        uVar30 = (uVar9 * uVar29 * uVar29) / unaff_x23;
                                    }
                                    uVar9 = *(arg1_00 + 8);
                                    uVar8 = uVar30 / 1000000;
                                    *(arg1_00 + 0x44) = uVar8;
                                    puVar21 = 0xffffffea;
                                    if ((uVar9 != 0) && (uVar8 != 0)) {
                                        uVar12 = 0x53d64;
                                        if ((*(arg1_00 + 0x6f) & 4) != 0) {
                                            uVar12 = 360000;
                                        }
                                        puVar25 = NULL;
                                        uVar30 = 0;
                                        if (uVar29 != 0) {
                                            uVar30 = (uVar8 * unaff_x23 * uVar12) / uVar29;
                                        }
                                        uVar30 = uVar30 / 0x125;
                                        goto code_r0x0800d0cc;
                                    }
                                }
                            }
                            goto code_r0x0800cd54;
                        }
                        uVar9 = sym.haptics_read(arg1_00,*(arg1_00 + 0x6d));
                        puVar25 = uVar9;
                        puVar21 = puVar25;
                        if (uVar9 < 0) goto code_r0x0800cd54;
                        uVar29 = uStack_ac._1_1_ | (uStack_ac & 0xf) << 8;
                        _dev_printk(0x8003b96,*arg1_00,"tlra_ol = %#x, tlra_cl_err_sts = %#x, cal_tlra_cl_sts = %#x\n"
                                    ,uVar29,uVar30,unaff_x23);
                        uVar9 = 0x196e6b;
                        if ((*(arg1_00 + 0x6f) & 4) != 0) {
                            uVar9 = 0x18d634;
                        }
                        uVar27 = 0;
                        if (unaff_x23 != 0) {
                            uVar27 = (uVar9 * uVar29 * uVar30) / unaff_x23;
                        }
                        uVar9 = *(arg1_00 + 8);
                        uVar8 = uVar27 / 1000000;
                        *(arg1_00 + 0x44) = uVar8;
                        puVar21 = 0xffffffea;
                        if ((uVar9 == 0) || (uVar8 == 0)) goto code_r0x0800cd54;
                        uVar12 = 0x53d64;
                        if ((*(arg1_00 + 0x6f) & 4) != 0) {
                            uVar12 = 360000;
                        }
                        uVar30 = 0;
                        if (uVar29 != 0) {
                            uVar30 = (uVar8 * unaff_x23 * uVar12) / uVar29;
                        }
                        uVar30 = uVar30 / 0x24a;
code_r0x0800d0cc:
                        uVar1 = 0;
                        if (uVar9 != 0) {
                            uVar1 = uVar30 / uVar9;
                        }
                        *(arg1_00 + 100) = uVar1;
                    }
                    else {
                        unaff_x23 = uVar30 * 0x196fb8;
                        _dev_printk(0x8003b96,*arg1_00,"tlra_cl_err_sts = %#x\n",uVar30);
                        auVar2._8_8_ = 0;
                        auVar2._0_8_ = unaff_x23;
                        uVar29 = SUB168(auVar2 * ZEXT816(0x431bde82d7b634db),8);
code_r0x0800ce60:
                        puVar25 = NULL;
                        uVar8 = uVar29 >> 0x12;
                        *(arg1_00 + 0x44) = uVar8;
                    }
                    if ((uVar28 & 1) != 0) {
                        uVar9 = 0;
                        if (uVar8 != 0) {
                            uVar9 = 1000000 / uVar8;
                        }
                        arg2 = uVar9;
                        *(arg1_00 + 0xe) = 1;
                        _dev_info(*arg1_00,"xbl f0  =%d \n",arg2);
                        uVar8 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-min",&uStack_b0,1,0);
                        unaff_x23 = uVar8;
                        if (uVar8 < 0) {
                            _dev_err(*arg1_00,"lra-f0-min failed, rc=%d\n",puVar25);
                        }
                        iVar13 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-max",&uStack_b8 + 4,1,0);
                        if (iVar13 < 0) {
                            _dev_err(*arg1_00,"lra-f0-max failed, rc=%d\n",puVar25);
                        }
                        iVar10 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-default",&uStack_b8,1,0);
                        if (iVar10 < 0) {
                            _dev_err(*arg1_00,"lra-f0-default failed, rc=%d\n",puVar25);
                        }
                        iVar14 = 1;
                        uVar12 = of_property_read_variable_u32_array(uVar22,"qcom,lra-f0-cal-count",&uStack_bc,1,0);
                        uVar22 = uVar12;
                        if (uVar12 < 0) {
                            _dev_err(*arg1_00,"lra-f0-cal-count failed, rc=%d\n",puVar25);
                        }
                        if ((((uVar8 < 0) || (iVar13 < 0)) || (iVar10 < 0)) || (uVar12 < 0)) {
                            _dev_err(*arg1_00,"lra-f0: default min max count must set together in dtsi\n");
                            sym.xm_hap_driver_exception_handler(0x36038b91,arg2,0x80036d2,iVar14);
                        }
                        else {
                            if ((uStack_b8._4_4_ < uVar9) || (uVar9 < uStack_b0)) {
                                _dev_info(*arg1_00,
                                          "xbl f0 abnormal: %d ~ 0x%x use default: %d ~ 0x%x f0:%d - %d after boot\n",
                                          arg2,*(arg1_00 + 100),uStack_b8 & 0xffffffff,uStack_bc);
                                sym.xm_hap_driver_exception_handler(0x36038b92,arg2,uStack_b8 & 0xffffffff,0x80033ec)
                                ;
                                iVar13 = 0;
                                if (uStack_b8 != 0) {
                                    iVar13 = 1000000 / uStack_b8;
                                }
                                *(arg1_00 + 100) = uStack_bc;
                                *(arg1_00 + 0x44) = iVar13;
                                if ((uVar6 & 0x20) == 0) {
                                    uVar19 = 0xffffffff;
                                }
                                else {
                                    uVar19 = 0xfffffffe;
                                }
                            }
                            else {
                                uVar19 = 2;
                            }
                            *(arg1_00 + 0xe) = uVar19;
                        }
                    }
                    _dev_printk(0x8003b96,*arg1_00,"OL_TLRA %u us, CL_TLRA %u us, RC_CLK_CAL_COUNT %#x\n",arg1_00[8]
                                ,*(arg1_00 + 0x44),*(arg1_00 + 100));
                    puVar21 = NULL;
                }
            }
        }
        else {
            if (arg1_00[0x3c] != 0) {
                uVar9 = nvmem_device_read(arg1_00[0x3c],0x46,2,&uStack_ac);
                if (-1 < uVar9) goto code_r0x0800cbbc;
                iVar14 = *arg1_00;
                puVar21 = 0x46;
                pcVar16 = "read SDAM %#x failed, rc=%d\n";
                goto code_r0x0800cd4c;
            }
            _dev_printk(0x8003b96,*arg1_00,"nvmem device for hap_cfg is not defined\n");
            puVar21 = 0xffffffea;
        }
    }
code_r0x0800cd54:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_a8) {
        return puVar21;
    }
    auVar31 = __stack_chk_fail();
    puVar18 = auVar31._0_8_;
    puVar17 = &uStack_100;
    *extraout_x18_00 = sym.haptics_config_openloop_lra_period;
    pcStack_e8 = sym.haptics_config_openloop_lra_period;
    iVar14 = sp_el0;
    iStack_f8 = *(iVar14 + 0x5e0);
    puVar23 = auVar31._8_8_ & 0xffffffff;
    auStack_fc[0] = 0;
    ppuStack_f0 = &puStack_a0;
    puStack_e0 = puVar25;
    uStack_d8 = arg2;
    uStack_d0 = uVar22;
    piStack_c8 = arg1_00;
    if ((*(puVar18 + 0x6f) >> 2 & 1) == 0) {
code_r0x0800d1f8:
        puVar26 = *(puVar18 + 0x6d) + 0x5cU & 0xffff;
        uStack_100 = (puVar23 & 0xffffffff) / 0x500 & 0xf;
        uStack_ff = (puVar23 & 0xffffffff) / 5;
        uVar9 = regmap_bulk_write(puVar18[1],puVar26,&uStack_100,2);
        puVar24 = uVar9;
        puVar23 = puVar26;
        if (uVar9 < 0) {
            uVar20 = *puVar18;
            pcVar16 = "write addr %#x failed, rc=%d\n";
            goto code_r0x0800d298;
        }
    }
    else {
        puVar26 = *(puVar18 + 0x6d) + 0x72U & 0xffff;
        uVar9 = regmap_bulk_read(puVar18[1],puVar26,auStack_fc,1);
        puVar25 = puVar26;
        if (-1 < uVar9) {
            if ((auStack_fc[0] & 0xc) == 4) {
                puVar23 = (puVar23 << 7) / 0x7d;
            }
            goto code_r0x0800d1f8;
        }
        puVar24 = uVar9;
        uVar20 = *puVar18;
        pcVar16 = "read addr %#x failed, rc=%d\n";
code_r0x0800d298:
        _dev_err(uVar20,pcVar16,puVar26,puVar24);
        puVar17 = puVar26;
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_f8) {
        return puVar24;
    }
    auVar31 = __stack_chk_fail();
    puVar26 = auVar31._8_8_;
    puVar15 = auVar31._0_8_;
    *extraout_x18_01 = sym.haptics_set_pattern;
    pcStack_138 = sym.haptics_set_pattern;
    iVar14 = sp_el0;
    iStack_148 = *(iVar14 + 0x5e0);
    uVar9 = puVar17;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_160 = 0;
    pppuStack_140 = &ppuStack_f0;
    puStack_130 = puVar21;
    uStack_128 = unaff_x23;
    puStack_120 = puVar25;
    puStack_118 = puVar24;
    puStack_110 = puVar23;
    puStack_108 = puVar18;
    if ((uVar9 & 0xfffffffe) == 2) {
        puVar23 = puVar17 & 0xffffffff;
        auStack_164[0] = 0;
        puVar21 = *(puVar26 + 0x30);
        if ((*(puVar15 + 0x6f) >> 2 & 1) != 0) {
            uVar28 = *(puVar15 + 0x6d) + 0x72U & 0xffff;
            uVar8 = regmap_bulk_read(puVar15[1],uVar28,auStack_164,1);
            if (uVar8 < 0) {
                puVar25 = uVar8;
                uVar22 = uVar28;
                _dev_err(*puVar15,"read addr %#x failed, rc=%d\n",uVar28,puVar25);
                uVar9 = uVar22;
                puVar24 = puVar26;
                unaff_x23 = uVar28;
                goto code_r0x0800d4fc;
            }
            if ((auStack_164[0] & 0xc) == 4) {
                puVar21 = (puVar21 << 7) / 0x7d;
            }
        }
        iVar13 = 0x32;
        if (uVar9 != 3) {
            iVar13 = 0x30;
        }
        unaff_x23 = *(puVar15 + 0x36c) + iVar13 & 0xffff;
        uStack_160 = CONCAT71(uStack_160._1_7_,(puVar21 & 0xffffffff) / 0x500) & 0xffffffffffffff0f;
        uStack_160._0_2_ = CONCAT11((puVar21 & 0xffffffff) / 5,uStack_160);
        uVar8 = regmap_bulk_write(puVar15[1],unaff_x23,&uStack_160,2);
        if (uVar8 < 0) {
            puVar25 = uVar8;
            _dev_err(*puVar15,"write addr %#x failed, rc=%d\n",unaff_x23,puVar25);
            uVar20 = *puVar15;
            pcVar16 = "update pattern TLRA failed, rc=%d\n";
        }
        else {
            puVar18 = &uStack_160;
            uStack_160._0_4_ =
                 CONCAT13(*(puVar26 + 8) & 7 | *(puVar26 + 10) << 7,
                          CONCAT21(CONCAT11(*puVar26,*puVar26 >> 8),*(puVar26 + 2) & 7 | *(puVar26 + 4) << 7)) &
                 0xffff01ff;
            uStack_160._0_5_ = uStack_160;
            uStack_160._0_7_ = CONCAT16(*(puVar26 + 0xe) & 7 | *(puVar26 + 0x10) << 7,CONCAT15(puVar26[6],uStack_160))
            ;
            uStack_160 = CONCAT17(puVar26[0xc] >> 8,uStack_160) & 0x1ffffffffffffff;
            uStack_160 = CONCAT35(uStack_160._5_3_,CONCAT14(puVar26[6] >> 8,uStack_160)) & 0xffffff01ffffffff;
            uStack_158._0_4_ = puVar26[0x12] << 0x18;
            uVar8 = uStack_158 >> 0x10;
            uStack_158._0_2_ = CONCAT11(*(puVar26 + 0x14) & 7 | *(puVar26 + 0x16) << 7,puVar26[0xc]);
            uStack_158._0_5_ = CONCAT14(*(puVar26 + 0x1a) & 7 | *(puVar26 + 0x1c) << 7,CONCAT22(uVar8,uStack_158));
            uStack_158 = CONCAT17(*(puVar26 + 0x20) & 7 | *(puVar26 + 0x22) << 7,
                                  CONCAT16(puVar26[0x18],
                                           CONCAT15(puVar26[0x18] >> 8,
                                                    CONCAT53(uStack_158 >> 0x18,
                                                             CONCAT12(puVar26[0x12] >> 8,uStack_158))))) &
                         0xffff01ffff01ffff;
            uStack_150._0_3_ = CONCAT12(*(puVar26 + 0x26) & 7 | *(puVar26 + 0x28) << 7,puVar26[0x1e] << 8);
            iVar13 = 0x50;
            if (uVar9 != 3) {
                iVar13 = 0x34;
            }
            puVar23 = *(puVar15 + 0x36c) + iVar13 & 0xffff;
            uStack_150 = CONCAT17(puVar26[0x2a],
                                  CONCAT16(puVar26[0x2a] >> 8,
                                           CONCAT15(*(puVar26 + 0x2c) & 7 | *(puVar26 + 0x2e) << 7,
                                                    CONCAT14(puVar26[0x24],
                                                             CONCAT31(CONCAT13(puVar26[0x24] >> 8,uStack_150) >> 8,
                                                                      puVar26[0x1e] >> 8))))) & 0xff01ffff01ffff01;
            uVar8 = regmap_bulk_write(puVar15[1],puVar23,puVar18,0x18);
            uVar9 = puVar18;
            if (-1 < uVar8) {
                puVar25 = NULL;
                puVar24 = puVar26;
                goto code_r0x0800d4fc;
            }
            puVar25 = uVar8;
            _dev_err(*puVar15,"write addr %#x failed, rc=%d\n",puVar23,puVar25);
            uVar20 = *puVar15;
            pcVar16 = "write pattern data failed, rc=%d\n";
        }
        puVar24 = puVar25;
        _dev_err(uVar20,pcVar16);
        uVar9 = puVar24;
        puVar24 = puVar26;
    }
    else {
        _dev_err(*puVar15,"no pattern src specified!\n");
        puVar25 = 0xffffffea;
    }
code_r0x0800d4fc:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_148) {
        return puVar25;
    }
    auVar31 = __stack_chk_fail();
    iVar14 = auVar31._8_8_;
    puVar18 = auVar31._0_8_;
    *extraout_x18_02 = sym.haptics_update_memory_data;
    pcStack_1a8 = sym.haptics_update_memory_data;
    iVar3 = sp_el0;
    iStack_1b8 = *(iVar3 + 0x5e0);
    uStack_1bc = 0;
    puStack_1d0 = puVar15;
    ppppuStack_1b0 = &pppuStack_140;
    puStack_1a0 = puVar21;
    uStack_198 = unaff_x23;
    puStack_190 = puVar25;
    puStack_188 = puVar24;
    puStack_180 = puVar23;
    puStack_178 = puVar15;
    if (uVar9 == 0) {
code_r0x0800d73c:
        puVar21 = NULL;
    }
    else {
        puStack_1d0 = puVar18;
        if (3 < uVar9) {
            uVar8 = uVar9 >> 2;
            do {
                uVar12 = *(puVar18 + 0x36c) + 0x20U & 0xffff;
                uVar11 = regmap_bulk_write(puVar18[1],uVar12,iVar14,4);
                if (uVar11 < 0) {
                    puVar21 = uVar11;
                    _dev_err(*puVar18,"write addr %#x failed, rc=%d\n",uVar12,puVar21);
                    uVar20 = *puVar18;
                    pcVar16 = "bulk write FIFO_DIN failed, rc=%d\n";
                    goto code_r0x0800d7cc;
                }
                iVar14 = iVar14 + 4;
                uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
        }
        uVar8 = uVar9 & 3;
        if ((uVar9 & 3) == 0) goto code_r0x0800d73c;
        if (*(puVar18 + 0x71) == 2) {
            memcpy(&uStack_1bc,iVar14,uVar8);
            uVar9 = *(puVar18 + 0x36c) + 0x20U & 0xffff;
            uVar8 = regmap_bulk_write(puVar18[1],uVar9,&uStack_1bc,4);
            puVar21 = uVar8;
            if (uVar8 < 0) {
                _dev_err(*puVar18,"write addr %#x failed, rc=%d\n",uVar9,puVar21);
                uVar20 = *puVar18;
                pcVar16 = "write FIFO_DIN failed, rc=%d\n";
                goto code_r0x0800d7cc;
            }
        }
        else {
            uVar9 = *(puVar18 + 0x36c) + 0x2cU & 0xffff;
            uVar12 = regmap_bulk_write(puVar18[1],uVar9,iVar14,1);
            if (-1 < uVar12) {
                if (uVar8 != 1) {
                    uVar9 = *(puVar18 + 0x36c) + 0x2cU & 0xffff;
                    uVar12 = regmap_bulk_write(puVar18[1],uVar9,iVar14 + 1,1);
                    if (uVar12 < 0) goto code_r0x0800d7a4;
                    if (uVar8 != 2) {
                        uVar9 = *(puVar18 + 0x36c) + 0x2cU & 0xffff;
                        uVar12 = regmap_bulk_write(puVar18[1],uVar9,iVar14 + 2,1);
                        if (uVar12 < 0) goto code_r0x0800d7a4;
                    }
                }
                goto code_r0x0800d73c;
            }
code_r0x0800d7a4:
            puVar21 = uVar12;
            _dev_err(*puVar18,"write addr %#x failed, rc=%d\n",uVar9,puVar21);
            uVar20 = *puVar18;
            pcVar16 = "write FIFO_DIN_1B failed, rc=%d\n";
code_r0x0800d7cc:
            _dev_err(uVar20,pcVar16,puVar21);
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_1b8) {
        return puVar21;
    }
    __stack_chk_fail();
    *extraout_x18_03 = sym.swr_slave_reg_enable;
    pcStack_1d8 = sym.swr_slave_reg_enable;
    iVar14 = sp_el0;
    iStack_1e8 = *(iVar14 + 0x5e0);
    ppppuStack_1e0 = &ppppuStack_1b0;
    iVar14 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar14 + 8),*(iVar14 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar14 + 0x378) >> 4 & 1) != 0) {
        uStack_1ec = 0;
        iVar13 = sym.haptics_get_status_data(iVar14,5,&uStack_1ec);
        uVar9 = *(iVar14 + 0x368) + 0x4bU & 0xffff;
        if ((iVar13 < 0) || ((uStack_1ec._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar14 + 8),uVar9,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar14 + 8),uVar9,0x10,0x10,0,0,0);
            puVar21 = sym.haptics_toggle_module_enable(iVar14);
            if (puVar21 < 0) goto code_r0x0800d8c0;
        }
    }
    puVar21 = NULL;
    *(iVar14 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_1e8) {
        return puVar21;
    }
    __stack_chk_fail(puVar21);
    *extraout_x18_04 = sym.swr_slave_reg_disable;
    iVar14 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar14 + 8),*(iVar14 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0);
    *(iVar14 + 0x38d) = 0;
    return NULL;
}


// ===== sym.haptics_get_closeloop_lra_period @ 0x0800cadc (size 1676) =====

ushort * sym.haptics_get_closeloop_lra_period(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    uchar auVar2 [16];
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    bool bVar7;
    uint32_t uVar8;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int iVar13;
    int iVar9;
    ulong uVar14;
    ulong *puVar15;
    int64_t iVar16;
    char *pcVar17;
    uint8_t *puVar18;
    ulong *puVar19;
    uint uVar20;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    uint64_t uVar21;
    ushort *puVar22;
    uint64_t uVar23;
    ushort *puVar24;
    ushort *puVar25;
    ushort *puVar26;
    ushort *puVar27;
    uint64_t unaff_x23;
    uint64_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    ulong unaff_x30;
    uchar auVar31 [16];
    ushort uStack_1ac;
    int64_t iStack_1a8;
    uchar ****ppppuStack_1a0;
    code *pcStack_198;
    ulong *puStack_190;
    uint uStack_17c;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    ushort *puStack_160;
    uint64_t uStack_158;
    ushort *puStack_150;
    ushort *puStack_148;
    ushort *puStack_140;
    ulong *puStack_138;
    uint8_t auStack_124 [4];
    ulong uStack_120;
    ulong uStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    ushort *puStack_f0;
    uint64_t uStack_e8;
    ushort *puStack_e0;
    ushort *puStack_d8;
    ushort *puStack_d0;
    ulong *puStack_c8;
    uint8_t uStack_c0;
    uchar uStack_bf;
    uint8_t auStack_bc [4];
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ushort *puStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint uStack_7c;
    ulong uStack_78;
    uint32_t uStack_70;
    ushort uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    uVar23 = arg2 & 0xffffffff;
    iStack_68 = *(iVar16 + 0x5e0);
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uVar21 = *(*arg1 + 0x2f0);
    uStack_7c = 0;
    if ((arg2 & 1U) != 0) {
        *(arg1 + 0x70) = 0;
    }
    puVar25 = *(arg1 + 0x368) + 0x72U & 0xffff;
    uVar8 = regmap_bulk_read(*(arg1 + 8),puVar25,&uStack_6c,1);
    if (uVar8 < 0) {
        uVar14 = *arg1;
        pcVar17 = "read addr %#x failed, rc=%d\n";
        puVar26 = puVar25;
code_r0x0800cd4c:
        _dev_err(uVar14,pcVar17,puVar25,uVar8);
        puVar25 = uVar8;
    }
    else {
        uVar4 = uStack_6c;
        puVar26 = uStack_6c;
        if (((arg2 & 1U) == 0) || ((*(arg1 + 0x388) & 0xfffffffe) != 2)) {
            uVar8 = sym.haptics_get_status_data(arg1,0,&uStack_6c);
            if (uVar8 < 0) {
                puVar25 = uVar8;
            }
            else {
code_r0x0800cbbc:
                uVar6 = uStack_6c;
                uVar5 = uStack_6c;
                uVar30 = uStack_6c;
                uVar29 = uStack_6c._1_1_;
                uVar8 = sym.haptics_get_status_data(arg1,4,&uStack_6c);
                puVar25 = uVar8;
                if (-1 < uVar8) {
                    bVar7 = (uVar6 & 0x20) != 0;
                    uVar4 = uVar4 >> 2;
                    uVar8 = uVar4 & 3;
                    puVar26 = uVar8;
                    uVar28 = (uVar30 & 0x20) >> 5;
                    uVar30 = uStack_6c._1_1_ | (uStack_6c & 0x1f) << 8;
                    _dev_info(*arg1,"rc_clk_cal = %u, auto_res_done = %d\n",puVar26,uVar28);
                    *(arg1 + 0x6e) = uVar28;
                    if (((uVar4 & 3) != 0) || (bVar7)) {
                        unaff_x23 = (uVar5 & 0x1f) << 8 | uVar29;
                        if (((uVar4 & 3) == 0) && ((uVar6 & 0x20) != 0)) {
                            _dev_printk(0x8003b96,*arg1,"cal_tlra_cl_sts = %#x\n",unaff_x23);
                            auVar31._8_8_ = 0;
                            auVar31._0_8_ = unaff_x23 * 0x32db8800000000 >> 0x20;
                            uVar29 = SUB168(auVar31 * ZEXT816(0x431bde82d7b634db),8);
                            goto code_r0x0800ce60;
                        }
                        if (uVar8 != 1 || bVar7) {
                            if ((uVar8 != 1) || ((uVar6 & 0x20) == 0)) {
                                _dev_err(*arg1,"Can\'t get close-loop LRA period in rc_clk_cal mode %u\n",uVar8);
                                puVar25 = 0xffffffea;
                            }
                            else {
                                uVar8 = sym.haptics_get_status_data(arg1,3,&uStack_6c);
                                puVar25 = uVar8;
                                if (-1 < uVar8) {
                                    uVar29 = uStack_6c._1_1_ | (uStack_6c & 0x1f) << 8;
                                    _dev_printk(0x8003b96,*arg1,"last_good_tlra_cl_sts = %#x, cal_tlra_cl_sts = %#x\n"
                                                ,uVar29,unaff_x23);
                                    uVar8 = 0xcb735;
                                    if ((*(arg1 + 0x378) & 4) != 0) {
                                        uVar8 = 0xc6b1a;
                                    }
                                    uVar30 = 0;
                                    if (unaff_x23 != 0) {
                                        uVar30 = (uVar8 * uVar29 * uVar29) / unaff_x23;
                                    }
                                    uVar8 = *(arg1 + 0x40);
                                    uVar10 = uVar30 / 1000000;
                                    *(arg1 + 0x44) = uVar10;
                                    puVar25 = 0xffffffea;
                                    if ((uVar8 != 0) && (uVar10 != 0)) {
                                        uVar12 = 0x53d64;
                                        if ((*(arg1 + 0x378) & 4) != 0) {
                                            uVar12 = 360000;
                                        }
                                        puVar26 = NULL;
                                        uVar30 = 0;
                                        if (uVar29 != 0) {
                                            uVar30 = (uVar10 * unaff_x23 * uVar12) / uVar29;
                                        }
                                        uVar30 = uVar30 / 0x125;
                                        goto code_r0x0800d0cc;
                                    }
                                }
                            }
                            goto code_r0x0800cd54;
                        }
                        uVar8 = sym.haptics_read(arg1,*(arg1 + 0x368));
                        puVar26 = uVar8;
                        puVar25 = puVar26;
                        if (uVar8 < 0) goto code_r0x0800cd54;
                        uVar29 = uStack_6c._1_1_ | (uStack_6c & 0xf) << 8;
                        _dev_printk(0x8003b96,*arg1,"tlra_ol = %#x, tlra_cl_err_sts = %#x, cal_tlra_cl_sts = %#x\n",
                                    uVar29,uVar30,unaff_x23);
                        uVar8 = 0x196e6b;
                        if ((*(arg1 + 0x378) & 4) != 0) {
                            uVar8 = 0x18d634;
                        }
                        uVar28 = 0;
                        if (unaff_x23 != 0) {
                            uVar28 = (uVar8 * uVar29 * uVar30) / unaff_x23;
                        }
                        uVar8 = *(arg1 + 0x40);
                        uVar10 = uVar28 / 1000000;
                        *(arg1 + 0x44) = uVar10;
                        puVar25 = 0xffffffea;
                        if ((uVar8 == 0) || (uVar10 == 0)) goto code_r0x0800cd54;
                        uVar12 = 0x53d64;
                        if ((*(arg1 + 0x378) & 4) != 0) {
                            uVar12 = 360000;
                        }
                        uVar30 = 0;
                        if (uVar29 != 0) {
                            uVar30 = (uVar10 * unaff_x23 * uVar12) / uVar29;
                        }
                        uVar30 = uVar30 / 0x24a;
code_r0x0800d0cc:
                        uVar1 = 0;
                        if (uVar8 != 0) {
                            uVar1 = uVar30 / uVar8;
                        }
                        *(arg1 + 100) = uVar1;
                    }
                    else {
                        unaff_x23 = uVar30 * 0x196fb8;
                        _dev_printk(0x8003b96,*arg1,"tlra_cl_err_sts = %#x\n",uVar30);
                        auVar2._8_8_ = 0;
                        auVar2._0_8_ = unaff_x23;
                        uVar29 = SUB168(auVar2 * ZEXT816(0x431bde82d7b634db),8);
code_r0x0800ce60:
                        puVar26 = NULL;
                        uVar10 = uVar29 >> 0x12;
                        *(arg1 + 0x44) = uVar10;
                    }
                    if ((arg2 & 1U) != 0) {
                        uVar8 = 0;
                        if (uVar10 != 0) {
                            uVar8 = 1000000 / uVar10;
                        }
                        uVar23 = uVar8;
                        *(arg1 + 0x70) = 1;
                        _dev_info(*arg1,"xbl f0  =%d \n",uVar23);
                        uVar10 = of_property_read_variable_u32_array(uVar21,"qcom,lra-f0-min",&uStack_70,1,0);
                        unaff_x23 = uVar10;
                        if (uVar10 < 0) {
                            _dev_err(*arg1,"lra-f0-min failed, rc=%d\n",puVar26);
                        }
                        iVar13 = of_property_read_variable_u32_array(uVar21,"qcom,lra-f0-max",&uStack_78 + 4,1,0);
                        if (iVar13 < 0) {
                            _dev_err(*arg1,"lra-f0-max failed, rc=%d\n",puVar26);
                        }
                        iVar9 = of_property_read_variable_u32_array(uVar21,"qcom,lra-f0-default",&uStack_78,1,0);
                        if (iVar9 < 0) {
                            _dev_err(*arg1,"lra-f0-default failed, rc=%d\n",puVar26);
                        }
                        iVar16 = 1;
                        uVar12 = of_property_read_variable_u32_array(uVar21,"qcom,lra-f0-cal-count",&uStack_7c,1,0);
                        uVar21 = uVar12;
                        if (uVar12 < 0) {
                            _dev_err(*arg1,"lra-f0-cal-count failed, rc=%d\n",puVar26);
                        }
                        if ((((uVar10 < 0) || (iVar13 < 0)) || (iVar9 < 0)) || (uVar12 < 0)) {
                            _dev_err(*arg1,"lra-f0: default min max count must set together in dtsi\n");
                            sym.xm_hap_driver_exception_handler(0x36038b91,uVar23,0x80036d2,iVar16);
                        }
                        else {
                            if ((uStack_78._4_4_ < uVar8) || (uVar8 < uStack_70)) {
                                _dev_info(*arg1,
                                          "xbl f0 abnormal: %d ~ 0x%x use default: %d ~ 0x%x f0:%d - %d after boot\n",
                                          uVar23,*(arg1 + 100),uStack_78 & 0xffffffff,uStack_7c);
                                sym.xm_hap_driver_exception_handler
                                          (0x36038b92,uVar23,uStack_78 & 0xffffffff,0x80033ec);
                                iVar13 = 0;
                                if (uStack_78 != 0) {
                                    iVar13 = 1000000 / uStack_78;
                                }
                                *(arg1 + 100) = uStack_7c;
                                *(arg1 + 0x44) = iVar13;
                                if ((uVar6 & 0x20) == 0) {
                                    uVar20 = 0xffffffff;
                                }
                                else {
                                    uVar20 = 0xfffffffe;
                                }
                            }
                            else {
                                uVar20 = 2;
                            }
                            *(arg1 + 0x70) = uVar20;
                        }
                    }
                    _dev_printk(0x8003b96,*arg1,"OL_TLRA %u us, CL_TLRA %u us, RC_CLK_CAL_COUNT %#x\n",*(arg1 + 0x40)
                                ,*(arg1 + 0x44),*(arg1 + 100));
                    puVar25 = NULL;
                }
            }
        }
        else {
            if (*(arg1 + 0x1e0) != 0) {
                uVar8 = nvmem_device_read(*(arg1 + 0x1e0),0x46,2,&uStack_6c);
                if (-1 < uVar8) goto code_r0x0800cbbc;
                uVar14 = *arg1;
                puVar25 = 0x46;
                pcVar17 = "read SDAM %#x failed, rc=%d\n";
                goto code_r0x0800cd4c;
            }
            _dev_printk(0x8003b96,*arg1,"nvmem device for hap_cfg is not defined\n");
            puVar25 = 0xffffffea;
        }
    }
code_r0x0800cd54:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_68) {
        return puVar25;
    }
    auVar31 = __stack_chk_fail();
    puVar19 = auVar31._0_8_;
    puVar18 = &uStack_c0;
    *extraout_x18 = sym.haptics_config_openloop_lra_period;
    pcStack_a8 = sym.haptics_config_openloop_lra_period;
    iVar16 = sp_el0;
    iStack_b8 = *(iVar16 + 0x5e0);
    puVar22 = auVar31._8_8_ & 0xffffffff;
    auStack_bc[0] = 0;
    puStack_b0 = &stack0xffffffffffffffa0;
    puStack_a0 = puVar26;
    uStack_98 = uVar23;
    uStack_90 = uVar21;
    iStack_88 = arg1;
    if ((*(puVar19 + 0x6f) >> 2 & 1) == 0) {
code_r0x0800d1f8:
        puVar27 = *(puVar19 + 0x6d) + 0x5cU & 0xffff;
        uStack_c0 = (puVar22 & 0xffffffff) / 0x500 & 0xf;
        uStack_bf = (puVar22 & 0xffffffff) / 5;
        uVar8 = regmap_bulk_write(puVar19[1],puVar27,&uStack_c0,2);
        puVar24 = uVar8;
        puVar22 = puVar27;
        if (uVar8 < 0) {
            uVar14 = *puVar19;
            pcVar17 = "write addr %#x failed, rc=%d\n";
            goto code_r0x0800d298;
        }
    }
    else {
        puVar27 = *(puVar19 + 0x6d) + 0x72U & 0xffff;
        uVar8 = regmap_bulk_read(puVar19[1],puVar27,auStack_bc,1);
        puVar26 = puVar27;
        if (-1 < uVar8) {
            if ((auStack_bc[0] & 0xc) == 4) {
                puVar22 = (puVar22 << 7) / 0x7d;
            }
            goto code_r0x0800d1f8;
        }
        puVar24 = uVar8;
        uVar14 = *puVar19;
        pcVar17 = "read addr %#x failed, rc=%d\n";
code_r0x0800d298:
        _dev_err(uVar14,pcVar17,puVar27,puVar24);
        puVar18 = puVar27;
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_b8) {
        return puVar24;
    }
    auVar31 = __stack_chk_fail();
    puVar27 = auVar31._8_8_;
    puVar15 = auVar31._0_8_;
    *extraout_x18_00 = sym.haptics_set_pattern;
    pcStack_f8 = sym.haptics_set_pattern;
    iVar16 = sp_el0;
    iStack_108 = *(iVar16 + 0x5e0);
    uVar8 = puVar18;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_120 = 0;
    ppuStack_100 = &puStack_b0;
    puStack_f0 = puVar25;
    uStack_e8 = unaff_x23;
    puStack_e0 = puVar26;
    puStack_d8 = puVar24;
    puStack_d0 = puVar22;
    puStack_c8 = puVar19;
    if ((uVar8 & 0xfffffffe) == 2) {
        puVar22 = puVar18 & 0xffffffff;
        auStack_124[0] = 0;
        puVar25 = *(puVar27 + 0x30);
        if ((*(puVar15 + 0x6f) >> 2 & 1) != 0) {
            uVar21 = *(puVar15 + 0x6d) + 0x72U & 0xffff;
            uVar10 = regmap_bulk_read(puVar15[1],uVar21,auStack_124,1);
            if (uVar10 < 0) {
                puVar26 = uVar10;
                uVar23 = uVar21;
                _dev_err(*puVar15,"read addr %#x failed, rc=%d\n",uVar21,puVar26);
                uVar8 = uVar23;
                puVar24 = puVar27;
                unaff_x23 = uVar21;
                goto code_r0x0800d4fc;
            }
            if ((auStack_124[0] & 0xc) == 4) {
                puVar25 = (puVar25 << 7) / 0x7d;
            }
        }
        iVar13 = 0x32;
        if (uVar8 != 3) {
            iVar13 = 0x30;
        }
        unaff_x23 = *(puVar15 + 0x36c) + iVar13 & 0xffff;
        uStack_120 = CONCAT71(uStack_120._1_7_,(puVar25 & 0xffffffff) / 0x500) & 0xffffffffffffff0f;
        uStack_120._0_2_ = CONCAT11((puVar25 & 0xffffffff) / 5,uStack_120);
        uVar10 = regmap_bulk_write(puVar15[1],unaff_x23,&uStack_120,2);
        if (uVar10 < 0) {
            puVar26 = uVar10;
            _dev_err(*puVar15,"write addr %#x failed, rc=%d\n",unaff_x23,puVar26);
            uVar14 = *puVar15;
            pcVar17 = "update pattern TLRA failed, rc=%d\n";
        }
        else {
            puVar19 = &uStack_120;
            uStack_120._0_4_ =
                 CONCAT13(*(puVar27 + 8) & 7 | *(puVar27 + 10) << 7,
                          CONCAT21(CONCAT11(*puVar27,*puVar27 >> 8),*(puVar27 + 2) & 7 | *(puVar27 + 4) << 7)) &
                 0xffff01ff;
            uStack_120._0_5_ = uStack_120;
            uStack_120._0_7_ = CONCAT16(*(puVar27 + 0xe) & 7 | *(puVar27 + 0x10) << 7,CONCAT15(puVar27[6],uStack_120))
            ;
            uStack_120 = CONCAT17(puVar27[0xc] >> 8,uStack_120) & 0x1ffffffffffffff;
            uStack_120 = CONCAT35(uStack_120._5_3_,CONCAT14(puVar27[6] >> 8,uStack_120)) & 0xffffff01ffffffff;
            uStack_118._0_4_ = puVar27[0x12] << 0x18;
            uVar10 = uStack_118 >> 0x10;
            uStack_118._0_2_ = CONCAT11(*(puVar27 + 0x14) & 7 | *(puVar27 + 0x16) << 7,puVar27[0xc]);
            uStack_118._0_5_ = CONCAT14(*(puVar27 + 0x1a) & 7 | *(puVar27 + 0x1c) << 7,CONCAT22(uVar10,uStack_118));
            uStack_118 = CONCAT17(*(puVar27 + 0x20) & 7 | *(puVar27 + 0x22) << 7,
                                  CONCAT16(puVar27[0x18],
                                           CONCAT15(puVar27[0x18] >> 8,
                                                    CONCAT53(uStack_118 >> 0x18,
                                                             CONCAT12(puVar27[0x12] >> 8,uStack_118))))) &
                         0xffff01ffff01ffff;
            uStack_110._0_3_ = CONCAT12(*(puVar27 + 0x26) & 7 | *(puVar27 + 0x28) << 7,puVar27[0x1e] << 8);
            iVar13 = 0x50;
            if (uVar8 != 3) {
                iVar13 = 0x34;
            }
            puVar22 = *(puVar15 + 0x36c) + iVar13 & 0xffff;
            uStack_110 = CONCAT17(puVar27[0x2a],
                                  CONCAT16(puVar27[0x2a] >> 8,
                                           CONCAT15(*(puVar27 + 0x2c) & 7 | *(puVar27 + 0x2e) << 7,
                                                    CONCAT14(puVar27[0x24],
                                                             CONCAT31(CONCAT13(puVar27[0x24] >> 8,uStack_110) >> 8,
                                                                      puVar27[0x1e] >> 8))))) & 0xff01ffff01ffff01;
            uVar10 = regmap_bulk_write(puVar15[1],puVar22,puVar19,0x18);
            uVar8 = puVar19;
            if (-1 < uVar10) {
                puVar26 = NULL;
                puVar24 = puVar27;
                goto code_r0x0800d4fc;
            }
            puVar26 = uVar10;
            _dev_err(*puVar15,"write addr %#x failed, rc=%d\n",puVar22,puVar26);
            uVar14 = *puVar15;
            pcVar17 = "write pattern data failed, rc=%d\n";
        }
        puVar24 = puVar26;
        _dev_err(uVar14,pcVar17);
        uVar8 = puVar24;
        puVar24 = puVar27;
    }
    else {
        _dev_err(*puVar15,"no pattern src specified!\n");
        puVar26 = 0xffffffea;
    }
code_r0x0800d4fc:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_108) {
        return puVar26;
    }
    auVar31 = __stack_chk_fail();
    iVar16 = auVar31._8_8_;
    puVar19 = auVar31._0_8_;
    *extraout_x18_01 = sym.haptics_update_memory_data;
    pcStack_168 = sym.haptics_update_memory_data;
    iVar3 = sp_el0;
    iStack_178 = *(iVar3 + 0x5e0);
    uStack_17c = 0;
    puStack_190 = puVar15;
    pppuStack_170 = &ppuStack_100;
    puStack_160 = puVar25;
    uStack_158 = unaff_x23;
    puStack_150 = puVar26;
    puStack_148 = puVar24;
    puStack_140 = puVar22;
    puStack_138 = puVar15;
    if (uVar8 == 0) {
code_r0x0800d73c:
        puVar25 = NULL;
    }
    else {
        puStack_190 = puVar19;
        if (3 < uVar8) {
            uVar10 = uVar8 >> 2;
            do {
                uVar12 = *(puVar19 + 0x36c) + 0x20U & 0xffff;
                uVar11 = regmap_bulk_write(puVar19[1],uVar12,iVar16,4);
                if (uVar11 < 0) {
                    puVar25 = uVar11;
                    _dev_err(*puVar19,"write addr %#x failed, rc=%d\n",uVar12,puVar25);
                    uVar14 = *puVar19;
                    pcVar17 = "bulk write FIFO_DIN failed, rc=%d\n";
                    goto code_r0x0800d7cc;
                }
                iVar16 = iVar16 + 4;
                uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
        }
        uVar10 = uVar8 & 3;
        if ((uVar8 & 3) == 0) goto code_r0x0800d73c;
        if (*(puVar19 + 0x71) == 2) {
            memcpy(&uStack_17c,iVar16,uVar10);
            uVar8 = *(puVar19 + 0x36c) + 0x20U & 0xffff;
            uVar10 = regmap_bulk_write(puVar19[1],uVar8,&uStack_17c,4);
            puVar25 = uVar10;
            if (uVar10 < 0) {
                _dev_err(*puVar19,"write addr %#x failed, rc=%d\n",uVar8,puVar25);
                uVar14 = *puVar19;
                pcVar17 = "write FIFO_DIN failed, rc=%d\n";
                goto code_r0x0800d7cc;
            }
        }
        else {
            uVar8 = *(puVar19 + 0x36c) + 0x2cU & 0xffff;
            uVar12 = regmap_bulk_write(puVar19[1],uVar8,iVar16,1);
            if (-1 < uVar12) {
                if (uVar10 != 1) {
                    uVar8 = *(puVar19 + 0x36c) + 0x2cU & 0xffff;
                    uVar12 = regmap_bulk_write(puVar19[1],uVar8,iVar16 + 1,1);
                    if (uVar12 < 0) goto code_r0x0800d7a4;
                    if (uVar10 != 2) {
                        uVar8 = *(puVar19 + 0x36c) + 0x2cU & 0xffff;
                        uVar12 = regmap_bulk_write(puVar19[1],uVar8,iVar16 + 2,1);
                        if (uVar12 < 0) goto code_r0x0800d7a4;
                    }
                }
                goto code_r0x0800d73c;
            }
code_r0x0800d7a4:
            puVar25 = uVar12;
            _dev_err(*puVar19,"write addr %#x failed, rc=%d\n",uVar8,puVar25);
            uVar14 = *puVar19;
            pcVar17 = "write FIFO_DIN_1B failed, rc=%d\n";
code_r0x0800d7cc:
            _dev_err(uVar14,pcVar17,puVar25);
        }
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_178) {
        return puVar25;
    }
    __stack_chk_fail();
    *extraout_x18_02 = sym.swr_slave_reg_enable;
    pcStack_198 = sym.swr_slave_reg_enable;
    iVar16 = sp_el0;
    iStack_1a8 = *(iVar16 + 0x5e0);
    ppppuStack_1a0 = &pppuStack_170;
    iVar16 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar16 + 8),*(iVar16 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar16 + 0x378) >> 4 & 1) != 0) {
        uStack_1ac = 0;
        iVar13 = sym.haptics_get_status_data(iVar16,5,&uStack_1ac);
        uVar8 = *(iVar16 + 0x368) + 0x4bU & 0xffff;
        if ((iVar13 < 0) || ((uStack_1ac._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar16 + 8),uVar8,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar16 + 8),uVar8,0x10,0x10,0,0,0);
            puVar25 = sym.haptics_toggle_module_enable(iVar16);
            if (puVar25 < 0) goto code_r0x0800d8c0;
        }
    }
    puVar25 = NULL;
    *(iVar16 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_1a8) {
        return puVar25;
    }
    __stack_chk_fail(puVar25);
    *extraout_x18_03 = sym.swr_slave_reg_disable;
    iVar16 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar16 + 8),*(iVar16 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0);
    *(iVar16 + 0x38d) = 0;
    return NULL;
}


// ===== sym.haptics_config_openloop_lra_period @ 0x0800d168 (size 320) =====

ushort * sym.haptics_config_openloop_lra_period(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong *puVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    char *pcVar10;
    uint8_t *puVar11;
    ulong *puVar12;
    ushort *puVar13;
    uint64_t uVar14;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    uchar *puVar15;
    ushort *puVar16;
    uchar *puVar17;
    ushort *puVar18;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    ulong unaff_x30;
    uchar auVar19 [16];
    uchar ****ppppuVar20;
    code *pcVar21;
    ushort uStack_12c;
    int64_t iStack_128;
    uchar ***pppuStack_120;
    code *pcStack_118;
    ulong *puStack_110;
    uint uStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    uint64_t uStack_d8;
    ushort *puStack_d0;
    ushort *puStack_c8;
    uchar *puStack_c0;
    ulong *puStack_b8;
    uint8_t auStack_a4 [4];
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint8_t uStack_40;
    uchar uStack_3f;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    puVar11 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    puVar15 = arg2 & 0xffffffff;
    auStack_3c[0] = 0;
    if ((*(arg1 + 0x378) >> 2 & 1) == 0) {
code_r0x0800d1f8:
        puVar17 = *(arg1 + 0x368) + 0x5cU & 0xffff;
        uStack_40 = (puVar15 & 0xffffffff) / 0x500 & 0xf;
        uStack_3f = (puVar15 & 0xffffffff) / 5;
        uVar1 = regmap_bulk_write(*(arg1 + 8),puVar17,&uStack_40,2);
        puVar16 = uVar1;
        puVar15 = puVar17;
        if (uVar1 < 0) {
            uVar7 = *arg1;
            pcVar10 = "write addr %#x failed, rc=%d\n";
            goto code_r0x0800d298;
        }
    }
    else {
        puVar17 = *(arg1 + 0x368) + 0x72U & 0xffff;
        uVar1 = regmap_bulk_read(*(arg1 + 8),puVar17,auStack_3c,1);
        if (-1 < uVar1) {
            if ((auStack_3c[0] & 0xc) == 4) {
                puVar15 = (puVar15 << 7) / 0x7d;
            }
            goto code_r0x0800d1f8;
        }
        puVar16 = uVar1;
        uVar7 = *arg1;
        pcVar10 = "read addr %#x failed, rc=%d\n";
code_r0x0800d298:
        _dev_err(uVar7,pcVar10,puVar17,puVar16);
        puVar11 = puVar17;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return puVar16;
    }
    auVar19 = __stack_chk_fail();
    puVar18 = auVar19._8_8_;
    puVar6 = auVar19._0_8_;
    *extraout_x18 = sym.haptics_set_pattern;
    pcStack_78 = sym.haptics_set_pattern;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uVar1 = puVar11;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    if ((uVar1 & 0xfffffffe) == 2) {
        puVar15 = puVar11 & 0xffffffff;
        auStack_a4[0] = 0;
        unaff_x24 = *(puVar18 + 0x30);
        puVar16 = puVar18;
        if ((*(puVar6 + 0x6f) >> 2 & 1) != 0) {
            unaff_x23 = *(puVar6 + 0x6d) + 0x72U & 0xffff;
            uVar2 = regmap_bulk_read(puVar6[1],unaff_x23,auStack_a4,1);
            if (uVar2 < 0) {
                puVar18 = uVar2;
                uVar14 = unaff_x23;
                _dev_err(*puVar6,"read addr %#x failed, rc=%d\n",unaff_x23,puVar18);
                uVar1 = uVar14;
                goto code_r0x0800d4fc;
            }
            if ((auStack_a4[0] & 0xc) == 4) {
                unaff_x24 = (unaff_x24 << 7) / 0x7d;
            }
        }
        iVar5 = 0x32;
        if (uVar1 != 3) {
            iVar5 = 0x30;
        }
        unaff_x23 = *(puVar6 + 0x36c) + iVar5 & 0xffff;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,(unaff_x24 & 0xffffffff) / 0x500) & 0xffffffffffffff0f;
        uStack_a0._0_2_ = CONCAT11((unaff_x24 & 0xffffffff) / 5,uStack_a0);
        uVar2 = regmap_bulk_write(puVar6[1],unaff_x23,&uStack_a0,2);
        if (uVar2 < 0) {
            puVar18 = uVar2;
            _dev_err(*puVar6,"write addr %#x failed, rc=%d\n",unaff_x23,puVar18);
            uVar7 = *puVar6;
            pcVar10 = "update pattern TLRA failed, rc=%d\n";
        }
        else {
            puVar12 = &uStack_a0;
            uStack_a0._0_4_ =
                 CONCAT13(*(puVar18 + 8) & 7 | *(puVar18 + 10) << 7,
                          CONCAT21(CONCAT11(*puVar18,*puVar18 >> 8),*(puVar18 + 2) & 7 | *(puVar18 + 4) << 7)) &
                 0xffff01ff;
            uStack_a0._0_5_ = uStack_a0;
            uStack_a0._0_7_ = CONCAT16(*(puVar18 + 0xe) & 7 | *(puVar18 + 0x10) << 7,CONCAT15(puVar18[6],uStack_a0));
            uStack_a0 = CONCAT17(puVar18[0xc] >> 8,uStack_a0) & 0x1ffffffffffffff;
            uStack_a0 = CONCAT35(uStack_a0._5_3_,CONCAT14(puVar18[6] >> 8,uStack_a0)) & 0xffffff01ffffffff;
            uStack_98._0_4_ = puVar18[0x12] << 0x18;
            uVar2 = uStack_98 >> 0x10;
            uStack_98._0_2_ = CONCAT11(*(puVar18 + 0x14) & 7 | *(puVar18 + 0x16) << 7,puVar18[0xc]);
            uStack_98._0_5_ = CONCAT14(*(puVar18 + 0x1a) & 7 | *(puVar18 + 0x1c) << 7,CONCAT22(uVar2,uStack_98));
            uStack_98 = CONCAT17(*(puVar18 + 0x20) & 7 | *(puVar18 + 0x22) << 7,
                                 CONCAT16(puVar18[0x18],
                                          CONCAT15(puVar18[0x18] >> 8,
                                                   CONCAT53(uStack_98 >> 0x18,CONCAT12(puVar18[0x12] >> 8,uStack_98)))
                                         )) & 0xffff01ffff01ffff;
            uStack_90._0_3_ = CONCAT12(*(puVar18 + 0x26) & 7 | *(puVar18 + 0x28) << 7,puVar18[0x1e] << 8);
            iVar5 = 0x50;
            if (uVar1 != 3) {
                iVar5 = 0x34;
            }
            puVar15 = *(puVar6 + 0x36c) + iVar5 & 0xffff;
            uStack_90 = CONCAT17(puVar18[0x2a],
                                 CONCAT16(puVar18[0x2a] >> 8,
                                          CONCAT15(*(puVar18 + 0x2c) & 7 | *(puVar18 + 0x2e) << 7,
                                                   CONCAT14(puVar18[0x24],
                                                            CONCAT31(CONCAT13(puVar18[0x24] >> 8,uStack_90) >> 8,
                                                                     puVar18[0x1e] >> 8))))) & 0xff01ffff01ffff01;
            uVar2 = regmap_bulk_write(puVar6[1],puVar15,puVar12,0x18);
            uVar1 = puVar12;
            if (-1 < uVar2) {
                puVar18 = NULL;
                goto code_r0x0800d4fc;
            }
            puVar18 = uVar2;
            _dev_err(*puVar6,"write addr %#x failed, rc=%d\n",puVar15,puVar18);
            uVar7 = *puVar6;
            pcVar10 = "write pattern data failed, rc=%d\n";
        }
        puVar13 = puVar18;
        _dev_err(uVar7,pcVar10);
        uVar1 = puVar13;
    }
    else {
        _dev_err(*puVar6,"no pattern src specified!\n");
        puVar18 = 0xffffffea;
    }
code_r0x0800d4fc:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return puVar18;
    }
    auVar19 = __stack_chk_fail();
    iVar8 = auVar19._8_8_;
    puVar12 = auVar19._0_8_;
    *extraout_x18_00 = sym.haptics_update_memory_data;
    pcStack_e8 = sym.haptics_update_memory_data;
    iVar9 = sp_el0;
    iStack_f8 = *(iVar9 + 0x5e0);
    uStack_fc = 0;
    puStack_110 = puVar6;
    ppuStack_f0 = &puStack_80;
    uStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    puStack_d0 = puVar18;
    puStack_c8 = puVar16;
    puStack_c0 = puVar15;
    puStack_b8 = puVar6;
    if (uVar1 == 0) {
code_r0x0800d73c:
        puVar16 = NULL;
    }
    else {
        puStack_110 = puVar12;
        if (3 < uVar1) {
            uVar2 = uVar1 >> 2;
            do {
                uVar4 = *(puVar12 + 0x36c) + 0x20U & 0xffff;
                uVar3 = regmap_bulk_write(puVar12[1],uVar4,iVar8,4);
                if (uVar3 < 0) {
                    puVar16 = uVar3;
                    _dev_err(*puVar12,"write addr %#x failed, rc=%d\n",uVar4,puVar16);
                    uVar7 = *puVar12;
                    pcVar10 = "bulk write FIFO_DIN failed, rc=%d\n";
                    goto code_r0x0800d7cc;
                }
                iVar8 = iVar8 + 4;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
        }
        uVar2 = uVar1 & 3;
        if ((uVar1 & 3) == 0) goto code_r0x0800d73c;
        if (*(puVar12 + 0x71) == 2) {
            memcpy(&uStack_fc,iVar8,uVar2);
            uVar1 = *(puVar12 + 0x36c) + 0x20U & 0xffff;
            uVar2 = regmap_bulk_write(puVar12[1],uVar1,&uStack_fc,4);
            puVar16 = uVar2;
            if (uVar2 < 0) {
                _dev_err(*puVar12,"write addr %#x failed, rc=%d\n",uVar1,puVar16);
                uVar7 = *puVar12;
                pcVar10 = "write FIFO_DIN failed, rc=%d\n";
                goto code_r0x0800d7cc;
            }
        }
        else {
            uVar1 = *(puVar12 + 0x36c) + 0x2cU & 0xffff;
            uVar4 = regmap_bulk_write(puVar12[1],uVar1,iVar8,1);
            if (-1 < uVar4) {
                if (uVar2 != 1) {
                    uVar1 = *(puVar12 + 0x36c) + 0x2cU & 0xffff;
                    uVar4 = regmap_bulk_write(puVar12[1],uVar1,iVar8 + 1,1);
                    if (uVar4 < 0) goto code_r0x0800d7a4;
                    if (uVar2 != 2) {
                        uVar1 = *(puVar12 + 0x36c) + 0x2cU & 0xffff;
                        uVar4 = regmap_bulk_write(puVar12[1],uVar1,iVar8 + 2,1);
                        if (uVar4 < 0) goto code_r0x0800d7a4;
                    }
                }
                goto code_r0x0800d73c;
            }
code_r0x0800d7a4:
            puVar16 = uVar4;
            _dev_err(*puVar12,"write addr %#x failed, rc=%d\n",uVar1,puVar16);
            uVar7 = *puVar12;
            pcVar10 = "write FIFO_DIN_1B failed, rc=%d\n";
code_r0x0800d7cc:
            _dev_err(uVar7,pcVar10,puVar16);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_f8) {
        return puVar16;
    }
    __stack_chk_fail();
    *extraout_x18_01 = sym.swr_slave_reg_enable;
    pcStack_118 = sym.swr_slave_reg_enable;
    ppppuVar20 = &pppuStack_120;
    iVar8 = sp_el0;
    iStack_128 = *(iVar8 + 0x5e0);
    pppuStack_120 = &ppuStack_f0;
    iVar8 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar8 + 8),*(iVar8 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar8 + 0x378) >> 4 & 1) != 0) {
        uStack_12c = 0;
        iVar5 = sym.haptics_get_status_data(iVar8,5,&uStack_12c);
        uVar1 = *(iVar8 + 0x368) + 0x4bU & 0xffff;
        if ((iVar5 < 0) || ((uStack_12c._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar8 + 8),uVar1,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar8 + 8),uVar1,0x10,0x10,0,0,0);
            puVar16 = sym.haptics_toggle_module_enable(iVar8);
            if (puVar16 < 0) goto code_r0x0800d8c0;
        }
    }
    puVar16 = NULL;
    *(iVar8 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_128) {
        __stack_chk_fail(puVar16);
        *extraout_x18_02 = sym.swr_slave_reg_disable;
        pcVar21 = sym.swr_slave_reg_disable;
        iVar9 = rdev_get_drvdata();
        regmap_update_bits_base
                  (*(iVar9 + 8),*(iVar9 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0,in_x7,ppppuVar20,pcVar21,iVar8)
        ;
        *(iVar9 + 0x38d) = 0;
        return NULL;
    }
    return puVar16;
}


// ===== sym.haptics_set_pattern @ 0x0800d2a8 (size 808) =====

uint64_t sym.haptics_set_pattern(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t uVar9;
    ulong *puVar10;
    uint64_t uVar11;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t unaff_x20;
    int64_t unaff_x21;
    uint64_t uVar12;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    ulong unaff_x30;
    uchar auVar13 [16];
    uchar ***pppuVar14;
    code *pcVar15;
    ushort uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    ulong *puStack_d0;
    uint uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    int64_t iStack_78;
    uint8_t auStack_64 [4];
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    uVar9 = arg3;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    if ((uVar9 & 0xfffffffe) == 2) {
        unaff_x20 = arg3 & 0xffffffff;
        auStack_64[0] = 0;
        unaff_x24 = *(arg2 + 0x60);
        unaff_x21 = arg2;
        if ((*(arg1 + 0x378) >> 2 & 1) != 0) {
            unaff_x23 = *(arg1 + 0x368) + 0x72U & 0xffff;
            uVar1 = regmap_bulk_read(*(arg1 + 8),unaff_x23,auStack_64,1);
            if (uVar1 < 0) {
                uVar12 = uVar1;
                uVar11 = unaff_x23;
                _dev_err(*arg1,"read addr %#x failed, rc=%d\n",unaff_x23,uVar12);
                uVar9 = uVar11;
                goto code_r0x0800d4fc;
            }
            if ((auStack_64[0] & 0xc) == 4) {
                unaff_x24 = (unaff_x24 << 7) / 0x7d;
            }
        }
        iVar4 = 0x32;
        if (uVar9 != 3) {
            iVar4 = 0x30;
        }
        unaff_x23 = *(arg1 + 0x36c) + iVar4 & 0xffff;
        uStack_60 = CONCAT71(uStack_60._1_7_,(unaff_x24 & 0xffffffff) / 0x500) & 0xffffffffffffff0f;
        uStack_60._0_2_ = CONCAT11((unaff_x24 & 0xffffffff) / 5,uStack_60);
        uVar1 = regmap_bulk_write(*(arg1 + 8),unaff_x23,&uStack_60,2);
        if (uVar1 < 0) {
            uVar12 = uVar1;
            _dev_err(*arg1,"write addr %#x failed, rc=%d\n",unaff_x23,uVar12);
            uVar5 = *arg1;
            pcVar8 = "update pattern TLRA failed, rc=%d\n";
        }
        else {
            puVar10 = &uStack_60;
            uStack_60._0_4_ =
                 CONCAT13(*(arg2 + 0x10) & 7 | *(arg2 + 0x14) << 7,
                          CONCAT21(CONCAT11(*arg2,*arg2 >> 8),*(arg2 + 4) & 7 | *(arg2 + 8) << 7)) & 0xffff01ff;
            uStack_60._0_5_ = uStack_60;
            uStack_60._0_7_ = CONCAT16(*(arg2 + 0x1c) & 7 | *(arg2 + 0x20) << 7,CONCAT15(*(arg2 + 0xc),uStack_60));
            uStack_60 = CONCAT17(*(arg2 + 0x18) >> 8,uStack_60) & 0x1ffffffffffffff;
            uStack_60 = CONCAT35(uStack_60._5_3_,CONCAT14(*(arg2 + 0xc) >> 8,uStack_60)) & 0xffffff01ffffffff;
            uStack_58._0_4_ = *(arg2 + 0x24) << 0x18;
            uVar1 = uStack_58 >> 0x10;
            uStack_58._0_2_ = CONCAT11(*(arg2 + 0x28) & 7 | *(arg2 + 0x2c) << 7,*(arg2 + 0x18));
            uStack_58._0_5_ = CONCAT14(*(arg2 + 0x34) & 7 | *(arg2 + 0x38) << 7,CONCAT22(uVar1,uStack_58));
            uStack_58 = CONCAT17(*(arg2 + 0x40) & 7 | *(arg2 + 0x44) << 7,
                                 CONCAT16(*(arg2 + 0x30),
                                          CONCAT15(*(arg2 + 0x30) >> 8,
                                                   CONCAT53(uStack_58 >> 0x18,CONCAT12(*(arg2 + 0x24) >> 8,uStack_58))
                                                  ))) & 0xffff01ffff01ffff;
            uStack_50._0_3_ = CONCAT12(*(arg2 + 0x4c) & 7 | *(arg2 + 0x50) << 7,*(arg2 + 0x3c) << 8);
            iVar4 = 0x50;
            if (uVar9 != 3) {
                iVar4 = 0x34;
            }
            unaff_x20 = *(arg1 + 0x36c) + iVar4 & 0xffff;
            uStack_50 = CONCAT17(*(arg2 + 0x54),
                                 CONCAT16(*(arg2 + 0x54) >> 8,
                                          CONCAT15(*(arg2 + 0x58) & 7 | *(arg2 + 0x5c) << 7,
                                                   CONCAT14(*(arg2 + 0x48),
                                                            CONCAT31(CONCAT13(*(arg2 + 0x48) >> 8,uStack_50) >> 8,
                                                                     *(arg2 + 0x3c) >> 8))))) & 0xff01ffff01ffff01;
            uVar1 = regmap_bulk_write(*(arg1 + 8),unaff_x20,puVar10,0x18);
            uVar9 = puVar10;
            if (-1 < uVar1) {
                uVar12 = 0;
                goto code_r0x0800d4fc;
            }
            uVar12 = uVar1;
            _dev_err(*arg1,"write addr %#x failed, rc=%d\n",unaff_x20,uVar12);
            uVar5 = *arg1;
            pcVar8 = "write pattern data failed, rc=%d\n";
        }
        uVar11 = uVar12;
        _dev_err(uVar5,pcVar8);
        uVar9 = uVar11;
    }
    else {
        _dev_err(*arg1,"no pattern src specified!\n");
        uVar12 = 0xffffffea;
    }
code_r0x0800d4fc:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return uVar12;
    }
    auVar13 = __stack_chk_fail();
    iVar6 = auVar13._8_8_;
    puVar10 = auVar13._0_8_;
    *extraout_x18 = sym.haptics_update_memory_data;
    pcStack_a8 = sym.haptics_update_memory_data;
    iVar7 = sp_el0;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_bc = 0;
    puStack_d0 = arg1;
    puStack_b0 = &stack0xffffffffffffffc0;
    uStack_a0 = unaff_x24;
    uStack_98 = unaff_x23;
    uStack_90 = uVar12;
    iStack_88 = unaff_x21;
    uStack_80 = unaff_x20;
    iStack_78 = arg1;
    if (uVar9 == 0) {
code_r0x0800d73c:
        uVar12 = 0;
    }
    else {
        puStack_d0 = puVar10;
        if (3 < uVar9) {
            uVar1 = uVar9 >> 2;
            do {
                uVar3 = *(puVar10 + 0x36c) + 0x20U & 0xffff;
                uVar2 = regmap_bulk_write(puVar10[1],uVar3,iVar6,4);
                if (uVar2 < 0) {
                    uVar12 = uVar2;
                    _dev_err(*puVar10,"write addr %#x failed, rc=%d\n",uVar3,uVar12);
                    uVar5 = *puVar10;
                    pcVar8 = "bulk write FIFO_DIN failed, rc=%d\n";
                    goto code_r0x0800d7cc;
                }
                iVar6 = iVar6 + 4;
                uVar1 = uVar1 - 1;
            } while (uVar1 != 0);
        }
        uVar1 = uVar9 & 3;
        if ((uVar9 & 3) == 0) goto code_r0x0800d73c;
        if (*(puVar10 + 0x71) == 2) {
            memcpy(&uStack_bc,iVar6,uVar1);
            uVar9 = *(puVar10 + 0x36c) + 0x20U & 0xffff;
            uVar1 = regmap_bulk_write(puVar10[1],uVar9,&uStack_bc,4);
            uVar12 = uVar1;
            if (uVar1 < 0) {
                _dev_err(*puVar10,"write addr %#x failed, rc=%d\n",uVar9,uVar12);
                uVar5 = *puVar10;
                pcVar8 = "write FIFO_DIN failed, rc=%d\n";
                goto code_r0x0800d7cc;
            }
        }
        else {
            uVar9 = *(puVar10 + 0x36c) + 0x2cU & 0xffff;
            uVar3 = regmap_bulk_write(puVar10[1],uVar9,iVar6,1);
            if (-1 < uVar3) {
                if (uVar1 != 1) {
                    uVar9 = *(puVar10 + 0x36c) + 0x2cU & 0xffff;
                    uVar3 = regmap_bulk_write(puVar10[1],uVar9,iVar6 + 1,1);
                    if (uVar3 < 0) goto code_r0x0800d7a4;
                    if (uVar1 != 2) {
                        uVar9 = *(puVar10 + 0x36c) + 0x2cU & 0xffff;
                        uVar3 = regmap_bulk_write(puVar10[1],uVar9,iVar6 + 2,1);
                        if (uVar3 < 0) goto code_r0x0800d7a4;
                    }
                }
                goto code_r0x0800d73c;
            }
code_r0x0800d7a4:
            uVar12 = uVar3;
            _dev_err(*puVar10,"write addr %#x failed, rc=%d\n",uVar9,uVar12);
            uVar5 = *puVar10;
            pcVar8 = "write FIFO_DIN_1B failed, rc=%d\n";
code_r0x0800d7cc:
            _dev_err(uVar5,pcVar8,uVar12);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_b8) {
        return uVar12;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.swr_slave_reg_enable;
    pcStack_d8 = sym.swr_slave_reg_enable;
    pppuVar14 = &ppuStack_e0;
    iVar6 = sp_el0;
    iStack_e8 = *(iVar6 + 0x5e0);
    ppuStack_e0 = &puStack_b0;
    iVar6 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar6 + 8),*(iVar6 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar6 + 0x378) >> 4 & 1) != 0) {
        uStack_ec = 0;
        iVar4 = sym.haptics_get_status_data(iVar6,5,&uStack_ec);
        uVar9 = *(iVar6 + 0x368) + 0x4bU & 0xffff;
        if ((iVar4 < 0) || ((uStack_ec._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar6 + 8),uVar9,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar6 + 8),uVar9,0x10,0x10,0,0,0);
            uVar12 = sym.haptics_toggle_module_enable(iVar6);
            if (uVar12 < 0) goto code_r0x0800d8c0;
        }
    }
    uVar12 = 0;
    *(iVar6 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_e8) {
        __stack_chk_fail(uVar12);
        *extraout_x18_01 = sym.swr_slave_reg_disable;
        pcVar15 = sym.swr_slave_reg_disable;
        iVar7 = rdev_get_drvdata();
        regmap_update_bits_base
                  (*(iVar7 + 8),*(iVar7 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0,in_x7,pppuVar14,pcVar15,iVar6);
        *(iVar7 + 0x38d) = 0;
        return 0;
    }
    return uVar12;
}


// ===== sym.haptics_update_memory_data @ 0x0800d5d0 (size 524) =====

uint64_t sym.haptics_update_memory_data(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint64_t uVar8;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar **ppuVar10;
    code *pcVar11;
    ushort uStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    uStack_4c = 0;
    iStack_60 = unaff_x19;
    if (arg3 == 0) {
code_r0x0800d73c:
        uVar8 = 0;
    }
    else {
        iStack_60 = arg1;
        if (3 < arg3) {
            uVar9 = arg3 >> 2;
            do {
                uVar2 = *(arg1 + 0x36c) + 0x20U & 0xffff;
                uVar1 = regmap_bulk_write(*(arg1 + 8),uVar2,arg2,4);
                if (uVar1 < 0) {
                    uVar8 = uVar1;
                    _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar2,uVar8);
                    uVar4 = *arg1;
                    pcVar7 = "bulk write FIFO_DIN failed, rc=%d\n";
                    goto code_r0x0800d7cc;
                }
                arg2 = arg2 + 4;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
        uVar9 = arg3 & 3;
        if ((arg3 & 3) == 0) goto code_r0x0800d73c;
        if (*(arg1 + 0x388) == 2) {
            memcpy(&uStack_4c,arg2,uVar9);
            uVar9 = *(arg1 + 0x36c) + 0x20U & 0xffff;
            uVar2 = regmap_bulk_write(*(arg1 + 8),uVar9,&uStack_4c,4);
            uVar8 = uVar2;
            if (uVar2 < 0) {
                _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar9,uVar8);
                uVar4 = *arg1;
                pcVar7 = "write FIFO_DIN failed, rc=%d\n";
                goto code_r0x0800d7cc;
            }
        }
        else {
            uVar2 = *(arg1 + 0x36c) + 0x2cU & 0xffff;
            uVar1 = regmap_bulk_write(*(arg1 + 8),uVar2,arg2,1);
            if (-1 < uVar1) {
                if (uVar9 != 1) {
                    uVar2 = *(arg1 + 0x36c) + 0x2cU & 0xffff;
                    uVar1 = regmap_bulk_write(*(arg1 + 8),uVar2,arg2 + 1,1);
                    if (uVar1 < 0) goto code_r0x0800d7a4;
                    if (uVar9 != 2) {
                        uVar2 = *(arg1 + 0x36c) + 0x2cU & 0xffff;
                        uVar1 = regmap_bulk_write(*(arg1 + 8),uVar2,arg2 + 2,1);
                        if (uVar1 < 0) goto code_r0x0800d7a4;
                    }
                }
                goto code_r0x0800d73c;
            }
code_r0x0800d7a4:
            uVar8 = uVar1;
            _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar2,uVar8);
            uVar4 = *arg1;
            pcVar7 = "write FIFO_DIN_1B failed, rc=%d\n";
code_r0x0800d7cc:
            _dev_err(uVar4,pcVar7,uVar8);
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar8;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.swr_slave_reg_enable;
    pcStack_68 = sym.swr_slave_reg_enable;
    ppuVar10 = &puStack_70;
    iVar5 = sp_el0;
    iStack_78 = *(iVar5 + 0x5e0);
    puStack_70 = &stack0xffffffffffffffc0;
    iVar5 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar5 + 8),*(iVar5 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar5 + 0x378) >> 4 & 1) != 0) {
        uStack_7c = 0;
        iVar3 = sym.haptics_get_status_data(iVar5,5,&uStack_7c);
        uVar9 = *(iVar5 + 0x368) + 0x4bU & 0xffff;
        if ((iVar3 < 0) || ((uStack_7c._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar5 + 8),uVar9,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar5 + 8),uVar9,0x10,0x10,0,0,0);
            uVar8 = sym.haptics_toggle_module_enable(iVar5);
            if (uVar8 < 0) goto code_r0x0800d8c0;
        }
    }
    uVar8 = 0;
    *(iVar5 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_78) {
        __stack_chk_fail(uVar8);
        *extraout_x18_00 = sym.swr_slave_reg_disable;
        pcVar11 = sym.swr_slave_reg_disable;
        iVar6 = rdev_get_drvdata();
        regmap_update_bits_base
                  (*(iVar6 + 8),*(iVar6 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0,in_x7,ppuVar10,pcVar11,iVar5);
        *(iVar6 + 0x38d) = 0;
        return 0;
    }
    return uVar8;
}


// ===== sym.swr_slave_reg_enable @ 0x0800d7dc (size 276) =====

ulong sym.swr_slave_reg_enable(void)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong in_x7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar *puVar6;
    code *pcVar7;
    ushort uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    puVar6 = &stack0xffffffffffffffe0;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar3 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar3 + 8),*(iVar3 + 0x368) + 0x4eU & 0xffff,0xe0,0xe0,0,0,0);
    if ((*(iVar3 + 0x378) >> 4 & 1) != 0) {
        uStack_2c = 0;
        iVar2 = sym.haptics_get_status_data(iVar3,5,&uStack_2c);
        uVar1 = *(iVar3 + 0x368) + 0x4bU & 0xffff;
        if ((iVar2 < 0) || ((uStack_2c._1_1_ & 7) != 4)) {
            regmap_update_bits_base(*(iVar3 + 8),uVar1,0x10,0,0,0,0);
        }
        else {
            regmap_update_bits_base(*(iVar3 + 8),uVar1,0x10,0x10,0,0,0);
            uVar4 = sym.haptics_toggle_module_enable(iVar3);
            if (uVar4 < 0) goto code_r0x0800d8c0;
        }
    }
    uVar4 = 0;
    *(iVar3 + 0x38d) = 1;
code_r0x0800d8c0:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_28) {
        __stack_chk_fail(uVar4);
        *extraout_x18 = sym.swr_slave_reg_disable;
        pcVar7 = sym.swr_slave_reg_disable;
        iVar5 = rdev_get_drvdata();
        regmap_update_bits_base
                  (*(iVar5 + 8),*(iVar5 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0,in_x7,puVar6,pcVar7,iVar3);
        *(iVar5 + 0x38d) = 0;
        return 0;
    }
    return uVar4;
}


// ===== sym.swr_slave_reg_disable @ 0x0800d8f0 (size 96) =====

ulong sym.swr_slave_reg_disable(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    regmap_update_bits_base(*(iVar1 + 8),*(iVar1 + 0x368) + 0x4eU & 0xffff,0xe0,0,0,0,0);
    *(iVar1 + 0x38d) = 0;
    return 0;
}


// ===== sym.swr_slave_reg_is_enabled @ 0x0800d950 (size 40) =====

uchar sym.swr_slave_reg_is_enabled(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = rdev_get_drvdata();
    return *(iVar1 + 0x38d);
}


// ===== sym.haptics_get_available_fifo_memory @ 0x0800d978 (size 552) =====

uint64_t sym.haptics_get_available_fifo_memory(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *arg1_00;
    char *pcVar5;
    int iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar7;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_3c = 0;
    uVar4 = sym.haptics_get_fifo_fill_status(arg1,&uStack_3c);
    uVar3 = uStack_3c;
    if (uVar4 < 0) goto code_r0x0800daa0;
    iVar6 = *(arg1 + 0x388);
    if (iVar6 == 2) {
        if (uStack_3c < 0x281) goto code_r0x0800da0c;
    }
    else if (iVar6 == 4) {
        uVar1 = 0x280;
        if (*(arg1 + 0x104) != 0) {
            uVar1 = *(arg1 + 0x104);
        }
        if (uStack_3c <= uVar1) goto code_r0x0800da0c;
    }
    else if (iVar6 == 3) {
        if (uStack_3c < 0x401) {
code_r0x0800da0c:
            iVar6 = *(arg1 + 0x388);
            if (iVar6 == 2) {
                if (uVar3 != 0x280) goto code_r0x0800da60;
            }
            else if (iVar6 == 4) {
                uVar1 = 0x280;
                if (*(arg1 + 0x104) != 0) {
                    uVar1 = *(arg1 + 0x104);
                }
                if (uVar3 != uVar1) goto code_r0x0800da60;
            }
            else if (iVar6 == 3) {
                if (uVar3 != 0x400) {
code_r0x0800da60:
                    iVar6 = *(arg1 + 0x388);
                    if (iVar6 == 2) {
                        iVar6 = 0x280;
                    }
                    else if (iVar6 == 4) {
                        iVar6 = 0x280;
                        if (*(arg1 + 0x104) != 0) {
                            iVar6 = *(arg1 + 0x104);
                        }
                    }
                    else if (iVar6 == 3) {
                        iVar6 = 0x400;
                    }
                    else {
                        _printk(0x800334e);
                        iVar6 = 0;
                    }
                    uVar4 = iVar6 - uVar3;
                    goto code_r0x0800daa0;
                }
            }
            else {
                _printk(0x800334e);
                if (uVar3 != 0) goto code_r0x0800da60;
            }
            _dev_err(*arg1,"no FIFO space available\n");
            uVar4 = 0xfffffff0;
            goto code_r0x0800daa0;
        }
    }
    else {
        _printk(0x800334e);
        if (uVar3 == 0) goto code_r0x0800da0c;
    }
    iVar6 = *(arg1 + 0x388);
    uVar7 = *arg1;
    if (iVar6 == 2) {
        iVar6 = 0x280;
    }
    else if (iVar6 == 4) {
        iVar6 = 0x280;
        if (*(arg1 + 0x104) != 0) {
            iVar6 = *(arg1 + 0x104);
        }
    }
    else if (iVar6 == 3) {
        iVar6 = 0x400;
    }
    else {
        _printk(0x800334e);
        iVar6 = 0;
    }
    _dev_err(uVar7,"Filled FIFO number %d exceed the max %d\n",uVar3,iVar6);
    uVar4 = 0xffffffea;
code_r0x0800daa0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    arg1_00 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.haptics_stop_fifo_play;
    if (arg1_00[0x16] == 0) {
        pcVar5 = "FIFO playing is not in progress\n";
    }
    else {
        uVar4 = sym.haptics_enable_play(arg1_00,0);
        if (uVar4 < 0) {
            return uVar4;
        }
        regmap_update_bits_base(arg1_00[1],*(arg1_00 + 0x36c) + 0x24U & 0xffff,0xf,0,0,0,0);
        if (*(arg1_00 + 0x38c) != '\0') {
            disable_irq_nosync(*(arg1_00 + 0x6b));
            *(arg1_00 + 0x38c) = 0;
        }
        kvfree(**(arg1_00[0x12] + 8));
        **(arg1_00[0x12] + 8) = 0;
        *(arg1_00 + 0x16) = 0;
        regmap_update_bits_base(arg1_00[1],*(arg1_00 + 0x6d) + 0x72U & 0xffff,0xc,4,0,0,0);
        pcVar5 = "stopped FIFO playing successfully\n";
    }
    _dev_printk(0x8003b96,*arg1_00,pcVar5);
    return 0;
}


// ===== sym.haptics_stop_fifo_play @ 0x0800dba0 (size 248) =====

ulong sym.haptics_stop_fifo_play(int64_t arg1)

{
    ulong uVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0xb0) == 0) {
        pcVar2 = "FIFO playing is not in progress\n";
    }
    else {
        uVar1 = sym.haptics_enable_play(arg1,0);
        if (uVar1 < 0) {
            return uVar1;
        }
        regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x36c) + 0x24U & 0xffff,0xf,0,0,0,0);
        if (*(arg1 + 0x38c) != '\0') {
            disable_irq_nosync(*(arg1 + 0x358));
            *(arg1 + 0x38c) = 0;
        }
        kvfree(**(*(arg1 + 0x90) + 8));
        **(*(arg1 + 0x90) + 8) = 0;
        *(arg1 + 0xb0) = 0;
        regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x72U & 0xffff,0xc,4,0,0,0);
        pcVar2 = "stopped FIFO playing successfully\n";
    }
    _dev_printk(0x8003b96,*arg1,pcVar2);
    return 0;
}


// ===== sym.haptics_set_fifo_empty_threshold @ 0x0800dc9c (size 104) =====

void sym.haptics_set_fifo_empty_threshold(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x388) - 2U < 3) {
        regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x36c) + 0x2aU & 0xffff,0xf,0,0,0,0);
    }
    else {
        _printk(0x800334e);
    }
    return;
}


// ===== sym.haptics_get_fifo_fill_status @ 0x0800dd04 (size 504) =====

void sym.haptics_get_fifo_fill_status(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    int iVar5;
    ulong *in_x18;
    uint32_t unaff_w20;
    int unaff_w22;
    uint64_t unaff_x23;
    uint64_t unaff_x24;
    int64_t *piVar6;
    ulong unaff_x30;
    ushort uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_58 = *(iVar2 + 0x5e0);
    uStack_5c = 0;
    uVar3 = sym.haptics_get_status_data(arg1,0x8005,&uStack_5c);
    if (uVar3 < 0) goto code_r0x0800dd50;
    iVar5 = *(arg1 + 0x388);
    if (iVar5 == 4) {
        iVar5 = 0x280;
        if (*(arg1 + 0x104) != 0) {
            iVar5 = *(arg1 + 0x104);
        }
        unaff_w20 = uStack_5c._1_1_ | (uStack_5c & 0xf) << 8;
    }
    else if (iVar5 == 3) {
        unaff_w20 = uStack_5c._1_1_ | (uStack_5c & 7) << 8;
        iVar5 = 0x400;
    }
    else {
        if (iVar5 != 2) {
            _dev_err(*arg1,"HW type %d is not supported\n");
            uVar3 = 0xffffffea;
            goto code_r0x0800dd50;
        }
        unaff_w20 = uStack_5c._1_1_ | (uStack_5c & 3) << 8;
        iVar5 = 0x280;
    }
    unaff_w22 = iVar5 - unaff_w20;
    unaff_x23 = uStack_5c & 0x40;
    unaff_x24 = uStack_5c & 0x20;
    _dev_printk(0x8003b96,*arg1,"filled=%u, available=%u, full=%d, empty=%d\n",unaff_w20,unaff_w22,
                uStack_5c >> 5 & 1,uStack_5c >> 6 & 1);
    while( true ) {
        uVar3 = 0;
        *arg2 = unaff_w20;
code_r0x0800dd50:
        iVar2 = sp_el0;
        if (*(iVar2 + 0x5e0) == iStack_58) break;
        __stack_chk_fail(uVar3);
        iVar2 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar2) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar2) & 0x3f) & 1) !=
            0) {
            iVar2 = sp_el0;
            *(iVar2 + 0x10) = *(iVar2 + 0x10) + 1;
            piVar6 = *0x8012b48;
            piVar4 = *0x8012b48;
            while (piVar4 != NULL) {
                (**piVar6)(piVar6[1],unaff_w20,unaff_w22,unaff_x24 != 0,unaff_x23 != 0);
                piVar6 = piVar6 + 3;
                piVar4 = *piVar6;
            }
            iVar1 = *(iVar2 + 0x10) + -1;
            *(iVar2 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar2 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return;
}


// ===== sym.haptics_enable_play @ 0x0800df14 (size 992) =====

//WARNING: Removing unreachable block (ram,0x0800e1cc)

int sym.haptics_enable_play(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    ulong uVar4;
    char *pcVar5;
    uint uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong *in_x18;
    uint32_t uVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uint8_t auStack_54 [4];
    uchar auStack_50 [4];
    uint8_t auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    if ((arg2 & 1U) != 0) {
        auStack_50[0] = 7;
        uVar9 = *(arg1 + 0x368) + 0x66U & 0xffff;
        iVar2 = regmap_bulk_write(*(arg1 + 8),uVar9,auStack_50,1);
        if (-1 < iVar2) goto code_r0x0800df78;
        uVar4 = *arg1;
        pcVar5 = "write addr %#x failed, rc=%d\n";
code_r0x0800e23c:
        _dev_err(uVar4,pcVar5,uVar9,iVar2);
        goto code_r0x0800e184;
    }
code_r0x0800df78:
    auStack_4c[0] = 0;
    uVar3 = sym.is_boost_vreg_enabled_in_open_loop(arg1);
    if (((uVar3 & 1) == 0) && (*(arg1 + 0x391) == '\0')) {
        iVar7 = *(arg1 + 0x288);
        if (((iVar7 == 0) && (*(arg1 + 0x388) != 3)) || ((arg2 & 1U) == 0)) goto code_r0x0800e090;
code_r0x0800df94:
        if (*(arg1 + 0x374) == 10000) {
            uVar6 = 3;
            if (*(arg1 + 0x388) != 4) {
                uVar6 = 1;
            }
            regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x68U & 0xffff,uVar6,uVar6,0,0,0);
        }
        uVar9 = *(arg1 + 0x368) + 0x72U & 0xffff;
        iVar2 = regmap_bulk_read(*(arg1 + 8),uVar9,auStack_4c,1);
        if (iVar2 < 0) {
            uVar4 = *arg1;
            pcVar5 = "read addr %#x failed, rc=%d\n";
            goto code_r0x0800e23c;
        }
        if (((*(arg1 + 0x378) & 1) != 0) && ((auStack_4c[0] & 0xc) == 4)) {
            auStack_4c[0] = 0;
            regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x72U & 0xffff,0xc,0,0,0,0);
            auStack_4c[0] = 4;
            regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x72U & 0xffff,0xc,4,0,0,0);
            _dev_printk(0x8003b96,*arg1,"Toggle CAL_EN in open-loop-VREG playing\n");
        }
    }
    else {
        if ((arg2 & 1U) != 0) goto code_r0x0800df94;
        iVar7 = *(arg1 + 0x288);
code_r0x0800e090:
        if (((iVar7 == 0) && (*(arg1 + 0x388) != 3)) && (*(arg1 + 0x374) == 10000)) {
            uVar6 = 3;
            if (*(arg1 + 0x388) != 4) {
                uVar6 = 1;
            }
            regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x68U & 0xffff,uVar6,0,0,0,0);
        }
    }
    uVar9 = *(arg1 + 0xf4);
    auStack_54[0] = uVar9;
    if ((*(arg1 + 0x388) == 4) && (uVar9 == 5)) {
        uVar9 = (*(*(arg1 + 0x98) + 0x28) & 3) << 4 | 5;
        auStack_54[0] = uVar9;
    }
    if ((arg2 & 1U) != 0) {
        auStack_54[0] = uVar9 | 0x80;
    }
    uVar9 = *(arg1 + 0x368) + 0x4cU & 0xffff;
    iVar2 = regmap_bulk_write(*(arg1 + 8),uVar9,auStack_54,1);
    if (iVar2 < 0) {
        _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar9,iVar2);
        uVar4 = *arg1;
        pcVar5 = "Write SPMI_PLAY failed, rc=%d\n";
    }
    else {
        if ((*(arg1 + 0x378) >> 1 & 1) == 0) goto code_r0x0800e184;
        if ((arg2 & 1U) == 0) {
            hrtimer_start_range_ns(arg1 + 0x290,2000000000,0,1);
            goto code_r0x0800e184;
        }
        iVar2 = sym.haptics_boost_vreg_enable(arg1,1);
        if (-1 < iVar2) {
            iVar2 = 0;
            goto code_r0x0800e184;
        }
        uVar4 = *arg1;
        pcVar5 = "Keep boost vreg on failed, rc=%d\n";
    }
    _dev_err(uVar4,pcVar5,iVar2);
code_r0x0800e184:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_48) {
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            *(iVar7 + 0x10) = *(iVar7 + 0x10) + 1;
            piVar10 = *0x8012bd8;
            piVar8 = *0x8012bd8;
            while (piVar8 != NULL) {
                (**piVar10)(piVar10[1],arg2 & 1);
                piVar10 = piVar10 + 3;
                piVar8 = *piVar10;
            }
            iVar1 = *(iVar7 + 0x10) + -1;
            *(iVar7 + 0x10) = iVar1;
            if ((iVar1 == 0) || (*(iVar7 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
    }
    return iVar2;
}


// ===== sym.haptics_boost_vreg_enable @ 0x0800e30c (size 396) =====

uint64_t sym.haptics_boost_vreg_enable(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong uVar7;
    char *pcVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    uint32_t uVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint8_t auStack_6c [4];
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if (((*(arg1 + 0x288) == 0) && (unaff_x19 = arg1, *(arg1 + 0x388) != 3)) && ((*(arg1 + 0x378) >> 1 & 1) != 0)) {
        if (*(arg1 + 0x1e0) == 0) {
            _dev_printk(0x8003b96,*arg1,"nvmem device for hap_cfg is not defined\n");
            uVar4 = 0;
        }
        else {
            uVar4 = sym.is_boost_vreg_enabled_in_open_loop(arg1);
            if ((uVar4 & 1) == 0) {
                uVar10 = arg2 & 1;
                if (*(arg1 + 0x391) == uVar10) goto code_r0x0800e37c;
                auStack_3c[0] = 1;
                if ((arg2 & 1U) == 0) {
                    auStack_3c[0] = 2;
                }
                uVar3 = nvmem_device_write(*(arg1 + 0x1e0),0x42,1,auStack_3c);
                if (uVar3 < 0) {
                    uVar7 = *arg1;
                    pcVar8 = "write SDAM %#x failed, rc=%d\n";
                    uVar9 = 0x42;
                }
                else {
                    auStack_3c[0] = 1;
                    uVar3 = nvmem_device_write(*(arg1 + 0x1e0),0xe5,1,auStack_3c);
                    if (-1 < uVar3) {
                        uVar4 = 0;
                        *(arg1 + 0x391) = uVar10;
                        goto code_r0x0800e380;
                    }
                    uVar7 = *arg1;
                    uVar9 = 0xe5;
                    pcVar8 = "Write SDAM %#x failed, rc=%d\n";
                }
                uVar4 = uVar3;
                _dev_err(uVar7,pcVar8,uVar9,uVar4);
            }
            else {
                pcVar8 = "enabling";
                if ((arg2 & 1U) == 0) {
                    pcVar8 = "disabling";
                }
                _dev_printk(0x8003b96,*arg1,"Ignore %s hBoost while it\'s enabled in open-loop mode\n",pcVar8);
                uVar4 = 0;
            }
        }
    }
    else {
code_r0x0800e37c:
        uVar4 = 0;
        arg1 = unaff_x19;
    }
code_r0x0800e380:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    puVar5 = __stack_chk_fail();
    *extraout_x18 = sym.is_boost_vreg_enabled_in_open_loop;
    pcStack_58 = sym.is_boost_vreg_enabled_in_open_loop;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    uVar6 = 0;
    auStack_6c[0] = 0;
    puStack_60 = &stack0xffffffffffffffd0;
    uStack_50 = uVar4;
    iStack_48 = arg1;
    if (puVar5[0x51] == 0) {
        if (*(puVar5 + 0x71) == 3) {
code_r0x0800e540:
            uVar6 = 0;
        }
        else {
            uVar10 = *(puVar5 + 0x6e) + 0x46U & 0xffff;
            iVar2 = regmap_bulk_read(puVar5[1],uVar10,auStack_6c,1);
            if (-1 < iVar2) {
                uVar10 = *(puVar5 + 0x6e) + 0x41U & 0xffff;
                *(puVar5 + 0x391) = auStack_6c[0] >> 7;
                iVar2 = regmap_bulk_read(puVar5[1],uVar10,auStack_6c,1);
                if (-1 < iVar2) {
                    if ((-1 < auStack_6c[0]) && (*(puVar5 + 0x391) != '\0')) {
                        _dev_printk(0x8003b96,*puVar5,"HBoost is enabled in open loop condition\n");
                        uVar6 = 1;
                        goto code_r0x0800e544;
                    }
                    goto code_r0x0800e540;
                }
            }
            _dev_err(*puVar5,"read addr %#x failed, rc=%d\n",uVar10,iVar2);
            uVar6 = 0;
        }
    }
code_r0x0800e544:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar6;
    }
    auVar11 = __stack_chk_fail(uVar6);
    puVar5 = auVar11._0_8_;
    *extraout_x18_00 = sym.haptics_enable_hpwr_vreg;
    if (puVar5[0x51] != 0) {
        uVar10 = auVar11._8_4_ & 1;
        if (*(puVar5 + 0x38f) != uVar10) {
            if ((auVar11._8_8_ & 1) == 0) {
                uVar3 = regulator_disable();
                if (uVar3 < 0) {
                    uVar7 = *puVar5;
                    pcVar8 = "Disable hpwr failed, rc=%d\n";
                    goto code_r0x0800e69c;
                }
                uVar3 = regulator_set_voltage(puVar5[0x51],0,0x7fffffff);
                if (uVar3 < 0) goto code_r0x0800e68c;
                pcVar8 = "disabled";
            }
            else {
                uVar3 = regulator_set_voltage(puVar5[0x51],*(puVar5 + 0x35c) * 1000,0x7fffffff);
                if (uVar3 < 0) {
code_r0x0800e68c:
                    uVar7 = *puVar5;
                    pcVar8 = "Set hpwr voltage failed, rc=%d\n";
code_r0x0800e69c:
                    _dev_err(uVar7,pcVar8,uVar3);
                    goto code_r0x0800e5ec;
                }
                uVar3 = regulator_enable(puVar5[0x51]);
                if (uVar3 < 0) {
                    _dev_err(*puVar5,"Enable hpwr failed, rc=%d\n",uVar3);
                    regulator_set_voltage(puVar5[0x51],0,0x7fffffff);
                    goto code_r0x0800e5ec;
                }
                pcVar8 = "enabled";
            }
            _dev_printk(0x8003b96,*puVar5,"%s hpwr vreg\n",pcVar8);
            uVar3 = 0;
            *(puVar5 + 0x38f) = uVar10;
            goto code_r0x0800e5ec;
        }
    }
    uVar3 = 0;
code_r0x0800e5ec:
    return uVar3;
}


// ===== sym.is_boost_vreg_enabled_in_open_loop @ 0x0800e498 (size 284) =====

int sym.is_boost_vreg_enabled_in_open_loop(char arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong uVar4;
    char *pcVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    uint8_t auStack_2c [4];
    int64_t iStack_28;
    
    puVar3 = arg1;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    iVar2 = 0;
    auStack_2c[0] = 0;
    if (puVar3[0x51] == 0) {
        if (*(puVar3 + 0x71) == 3) {
code_r0x0800e540:
            iVar2 = 0;
        }
        else {
            uVar6 = *(puVar3 + 0x6e) + 0x46U & 0xffff;
            iVar2 = regmap_bulk_read(puVar3[1],uVar6,auStack_2c,1);
            if (-1 < iVar2) {
                uVar6 = *(puVar3 + 0x6e) + 0x41U & 0xffff;
                *(puVar3 + 0x391) = auStack_2c[0] >> 7;
                iVar2 = regmap_bulk_read(puVar3[1],uVar6,auStack_2c,1);
                if (-1 < iVar2) {
                    if ((-1 < auStack_2c[0]) && (*(puVar3 + 0x391) != '\0')) {
                        _dev_printk(0x8003b96,*puVar3,"HBoost is enabled in open loop condition\n");
                        iVar2 = 1;
                        goto code_r0x0800e544;
                    }
                    goto code_r0x0800e540;
                }
            }
            _dev_err(*puVar3,"read addr %#x failed, rc=%d\n",uVar6,iVar2);
            iVar2 = 0;
        }
    }
code_r0x0800e544:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar2;
    }
    auVar7 = __stack_chk_fail(iVar2);
    puVar3 = auVar7._0_8_;
    *extraout_x18 = sym.haptics_enable_hpwr_vreg;
    if ((puVar3[0x51] == 0) || (uVar6 = auVar7._8_4_ & 1, *(puVar3 + 0x38f) == uVar6)) {
        return 0;
    }
    if ((auVar7._8_8_ & 1) == 0) {
        iVar2 = regulator_disable();
        if (iVar2 < 0) {
            uVar4 = *puVar3;
            pcVar5 = "Disable hpwr failed, rc=%d\n";
            goto code_r0x0800e69c;
        }
        iVar2 = regulator_set_voltage(puVar3[0x51],0,0x7fffffff);
        if (-1 < iVar2) {
            pcVar5 = "disabled";
            goto code_r0x0800e6bc;
        }
    }
    else {
        iVar2 = regulator_set_voltage(puVar3[0x51],*(puVar3 + 0x35c) * 1000,0x7fffffff);
        if (-1 < iVar2) {
            iVar2 = regulator_enable(puVar3[0x51]);
            if (iVar2 < 0) {
                _dev_err(*puVar3,"Enable hpwr failed, rc=%d\n",iVar2);
                regulator_set_voltage(puVar3[0x51],0,0x7fffffff);
                return iVar2;
            }
            pcVar5 = "enabled";
code_r0x0800e6bc:
            _dev_printk(0x8003b96,*puVar3,"%s hpwr vreg\n",pcVar5);
            *(puVar3 + 0x38f) = uVar6;
            return 0;
        }
    }
    uVar4 = *puVar3;
    pcVar5 = "Set hpwr voltage failed, rc=%d\n";
code_r0x0800e69c:
    _dev_err(uVar4,pcVar5,iVar2);
    return iVar2;
}


// ===== sym.haptics_enable_hpwr_vreg @ 0x0800e5b4 (size 300) =====

int sym.haptics_enable_hpwr_vreg(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x288) == 0) || (uVar1 = arg2 & 1, *(arg1 + 0x38f) == uVar1)) {
        return 0;
    }
    if ((arg2 & 1U) == 0) {
        iVar2 = regulator_disable();
        if (iVar2 < 0) {
            uVar3 = *arg1;
            pcVar4 = "Disable hpwr failed, rc=%d\n";
            goto code_r0x0800e69c;
        }
        iVar2 = regulator_set_voltage(*(arg1 + 0x288),0,0x7fffffff);
        if (-1 < iVar2) {
            pcVar4 = "disabled";
            goto code_r0x0800e6bc;
        }
    }
    else {
        iVar2 = regulator_set_voltage(*(arg1 + 0x288),*(arg1 + 0x35c) * 1000,0x7fffffff);
        if (-1 < iVar2) {
            iVar2 = regulator_enable(*(arg1 + 0x288));
            if (iVar2 < 0) {
                _dev_err(*arg1,"Enable hpwr failed, rc=%d\n",iVar2);
                regulator_set_voltage(*(arg1 + 0x288),0,0x7fffffff);
                return iVar2;
            }
            pcVar4 = "enabled";
code_r0x0800e6bc:
            _dev_printk(0x8003b96,*arg1,"%s hpwr vreg\n",pcVar4);
            *(arg1 + 0x38f) = uVar1;
            return 0;
        }
    }
    uVar3 = *arg1;
    pcVar4 = "Set hpwr voltage failed, rc=%d\n";
code_r0x0800e69c:
    _dev_err(uVar3,pcVar4,iVar2);
    return iVar2;
}


// ===== sym.get_direct_play_max_amplitude @ 0x0800e6e0 (size 300) =====

uint64_t sym.get_direct_play_max_amplitude(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong in_x7;
    uint32_t uVar5;
    uint uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar7;
    uint64_t unaff_x21;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint64_t uStack_60;
    uint64_t uStack_50;
    int64_t iStack_48;
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if ((*(arg1 + 0x288) == 0) && (*(arg1 + 0x388) != 3)) {
        uVar7 = 0xff;
    }
    else {
        auStack_3c[0] = 0;
        uVar5 = *(arg1 + 0x368) + 0x67U & 0xffff;
        uVar2 = regmap_bulk_read(*(arg1 + 8),uVar5,auStack_3c,1);
        if (uVar2 < 0) {
            unaff_x21 = uVar2;
            _dev_err(*arg1,"read addr %#x failed, rc=%d\n",uVar5,unaff_x21);
            _dev_err(*arg1,"Get Vmax HDRM failed, rc=%d\n",unaff_x21);
            uVar7 = 0;
            goto code_r0x0800e7d4;
        }
        uVar2 = *(arg1 + 0x35c) + (auStack_3c[0] & 0x7f) * -0x32;
        uVar5 = 0;
        if (uVar2 != 0) {
            uVar5 = (*(arg1 + 0x34) * 0xff) / uVar2;
        }
        if (0xfe < uVar5) {
            uVar5 = 0xff;
        }
        uVar7 = uVar5;
    }
    _dev_printk(0x8003b96,*arg1,"max amplitude for direct play: %#x\n",uVar7);
code_r0x0800e7d4:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    auVar8 = __stack_chk_fail();
    puVar4 = auVar8._8_8_;
    puVar3 = auVar8._0_8_;
    *extraout_x18 = sym.haptics_set_brake;
    pcStack_68 = sym.haptics_set_brake;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_80 = 0;
    puStack_70 = &stack0xffffffffffffffd0;
    uStack_60 = unaff_x21;
    uStack_50 = uVar7;
    iStack_48 = arg1;
    if (*(puVar4 + 0x18) == '\0') {
        regmap_update_bits_base
                  (puVar3[1],*(puVar3 + 0x6d) + 0x50U & 0xffff,0xcc,
                   (*(puVar4 + 0x10) << 2 | *(puVar4 + 8) << 6) & 0xfc,0,0,0);
        if (1 < *(puVar4 + 8)) {
            puVar4 = &uStack_80;
        }
        uVar5 = *(puVar3 + 0x36c) + 0x70U & 0xffff;
        uVar2 = regmap_bulk_write(puVar3[1],uVar5,puVar4,8);
        uVar7 = 0;
        if (uVar2 < 0) {
            _dev_err(*puVar3,"write addr %#x failed, rc=%d\n",uVar5,uVar2);
            _dev_err(*puVar3,"set brake pattern failed, rc=%d\n",uVar2);
            uVar7 = uVar2;
        }
    }
    else {
        uVar7 = 0;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return uVar7;
    }
    auVar8 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.haptics_enable_autores;
    uVar6 = 0x80;
    if ((auVar8._8_8_ & 1) == 0) {
        uVar6 = 0;
    }
    uVar7 = regmap_update_bits_base
                      (*(auVar8._0_8_ + 8),*(auVar8._0_8_ + 0x368) + 99U & 0xffff,0x80,uVar6,0,0,0,in_x7,
                       &puStack_70,sym.haptics_enable_autores);
    return uVar7;
}


// ===== sym.haptics_set_brake @ 0x0800e80c (size 284) =====

void sym.haptics_set_brake(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    ulong in_x7;
    uint uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uStack_40 = 0;
    if (*(arg2 + 0x18) == '\0') {
        regmap_update_bits_base
                  (*(arg1 + 8),*(arg1 + 0x368) + 0x50U & 0xffff,0xcc,(*(arg2 + 0x10) << 2 | *(arg2 + 8) << 6) & 0xfc
                   ,0,0,0);
        if (1 < *(arg2 + 8)) {
            arg2 = &uStack_40;
        }
        uVar1 = *(arg1 + 0x36c) + 0x70U & 0xffff;
        iVar3 = regmap_bulk_write(*(arg1 + 8),uVar1,arg2,8);
        iVar4 = 0;
        if (iVar3 < 0) {
            _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar1,iVar3);
            _dev_err(*arg1,"set brake pattern failed, rc=%d\n",iVar3);
            iVar4 = iVar3;
        }
    }
    else {
        iVar4 = 0;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    auVar6 = __stack_chk_fail(iVar4);
    *extraout_x18 = sym.haptics_enable_autores;
    uVar5 = 0x80;
    if ((auVar6._8_8_ & 1) == 0) {
        uVar5 = 0;
    }
    regmap_update_bits_base
              (*(auVar6._0_8_ + 8),*(auVar6._0_8_ + 0x368) + 99U & 0xffff,0x80,uVar5,0,0,0,in_x7,
               &stack0xffffffffffffffd0,sym.haptics_enable_autores);
    return;
}


// ===== sym.haptics_enable_autores @ 0x0800e928 (size 80) =====

void sym.haptics_enable_autores(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = 0x80;
    if ((arg2 & 1) == 0) {
        uVar1 = 0;
    }
    regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 99U & 0xffff,0x80,uVar1,0,0,0);
    return;
}


// ===== sym.haptics_set_fifo @ 0x0800e978 (size 1080) =====

uint32_t sym.haptics_set_fifo(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int16_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    ulong *in_x18;
    int64_t unaff_x20;
    uint32_t unaff_w21;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uint8_t uStack_60;
    uchar uStack_5f;
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    if (*(arg1 + 0xb0) == 1) {
        _dev_err(*arg1,"FIFO is busy\n");
        uVar5 = 0xfffffff0;
        goto code_r0x0800ecc4;
    }
    regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x36c) + 0x24U & 0xffff,0xf,*(arg2 + 0xc),0,0,0);
    unaff_x20 = arg2;
    if (7 < *(arg2 + 0xc)) {
        iVar2 = *(arg1 + 100);
        if (iVar2 == 0) {
            _dev_printk(0x8003b96,*arg1,"Ignore setting RC_CLK_CAL_COUNT\n");
        }
        else {
            uStack_60 = iVar2 >> 8 & 3;
            uStack_5f = iVar2;
            unaff_w21 = *(arg1 + 0x368) + 0x5eU & 0xffff;
            uVar5 = regmap_bulk_write(*(arg1 + 8),unaff_w21,&uStack_60,2);
            if (uVar5 < 0) {
                _dev_err(*arg1,"write addr %#x failed, rc=%d\n",unaff_w21,uVar5);
                goto code_r0x0800ecc4;
            }
            uStack_60 = 8;
            regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 0x72U & 0xffff,0xc,8,0,0,0);
        }
    }
    *(arg1 + 0xac) = 0;
    *(arg1 + 0xb4) = 0;
    iVar1 = *(arg1 + 0x388);
    *(arg1 + 0xa8) = 0;
    unaff_w21 = *(arg2 + 8);
    if (iVar1 == 2) {
        uVar5 = 0x280;
    }
    else if (iVar1 == 4) {
        uVar5 = 0x280;
        if (*(arg1 + 0x104) != 0) {
            uVar5 = *(arg1 + 0x104);
        }
    }
    else if (iVar1 == 3) {
        uVar5 = 0x400;
    }
    else {
        _printk(0x800334e);
        uVar5 = 0;
    }
    if (uVar5 <= unaff_w21) {
        unaff_w21 = uVar5;
    }
    uVar5 = sym.haptics_get_available_fifo_memory(arg1);
    if (uVar5 < 0) goto code_r0x0800ecc4;
    if (unaff_w21 <= uVar5) {
        uVar5 = unaff_w21;
    }
    iVar7 = *arg2;
    if (0x13f < uVar5) {
        uVar5 = 0x140;
    }
    auStack_5c[0] = 0;
    unaff_w21 = uVar5;
    if (uVar5 < *(arg2 + 8) && (uVar5 & 3) != 0) {
        unaff_w21 = uVar5 & 0x1fc;
    }
    if (iVar7 == 0) {
        _dev_err(*arg1,"no data available to update FIFO\n");
        uVar5 = 0xffffffea;
    }
    else if (*(arg1 + 0x388) == 4) {
        auStack_5c[0] = 1;
        uVar8 = *(arg1 + 0x36c) + 0x2dU & 0xffff;
        uVar5 = regmap_bulk_write(*(arg1 + 8),uVar8,auStack_5c,1);
        if (-1 < uVar5) {
            auStack_5c[0] = 0;
            uVar8 = *(arg1 + 0x36c) + 0x2dU & 0xffff;
            uVar5 = regmap_bulk_write(*(arg1 + 8),uVar8,auStack_5c,1);
            if (-1 < uVar5) goto code_r0x0800eb58;
        }
        _dev_err(*arg1,"write addr %#x failed, rc=%d\n",uVar8,uVar5);
    }
    else {
code_r0x0800eb58:
        uVar5 = sym.haptics_update_memory_data(arg1,iVar7,unaff_w21);
        if (-1 < uVar5) {
            *(arg1 + 0xb0) = 1;
            *(arg1 + 0xa8) = unaff_w21;
            goto code_r0x0800eb80;
        }
    }
    _dev_err(*arg1,"write FIFO samples failed, rc=%d\n",uVar5);
code_r0x0800ecc4:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        iVar7 = tpidr_el1;
        if ((*(__cpu_online_mask + (*(cpu_number + iVar7) >> 3 & 0x1ffffff8)) >> (*(cpu_number + iVar7) & 0x3f) & 1) !=
            0) {
            iVar7 = sp_el0;
            *(iVar7 + 0x10) = *(iVar7 + 0x10) + 1;
            piVar9 = *0x8012b90;
            piVar6 = *0x8012b90;
            while (piVar6 != NULL) {
                (**piVar9)(piVar9[1],uVar5,unaff_w21,unaff_w21);
                piVar9 = piVar9 + 3;
                piVar6 = *piVar9;
            }
            iVar3 = *(iVar7 + 0x10) + -1;
            *(iVar7 + 0x10) = iVar3;
            if ((iVar3 == 0) || (*(iVar7 + 0x10) == 0)) {
                preempt_schedule_notrace();
            }
        }
code_r0x0800eb80:
        if (unaff_w21 == *(unaff_x20 + 8)) {
            uVar5 = 0;
            *(arg1 + 0xac) = 1;
        }
        else {
            uVar5 = *(arg1 + 0x60);
        }
        uVar8 = *(arg1 + 0x388) - 2;
        if (uVar8 < 3) {
            uVar8 = *(uVar8 * 4 + 0x800506c);
            uVar4 = 0;
            if (uVar8 != 0) {
                uVar4 = uVar5 / uVar8;
            }
            regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x36c) + 0x2aU & 0xffff,0xf,uVar4 & 0xff,0,0,0);
            uVar5 = 0;
            if (*(arg1 + 0x38c) == '\0') {
                enable_irq(*(arg1 + 0x358));
                uVar5 = 0;
                *(arg1 + 0x38c) = 1;
            }
        }
        else {
            _printk(0x800334e);
            uVar5 = 0xffffffea;
        }
    }
    return uVar5;
}


// ===== sym._copy_from_user @ 0x0800edcc (size 376) =====

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
        if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
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
        if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
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


// ===== sym.haptics_load_predefined_effect @ 0x0800ef80 (size 488) =====

int sym.haptics_load_predefined_effect(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    ulong uVar3;
    char *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        return -0x16;
    }
    uVar5 = *(arg1 + 0xec);
    *(arg1 + 0x98) = arg2;
    mutex_lock(arg1 + 0x2f8);
    iVar2 = sym.__haptics_set_vmax_mv(arg1,uVar5);
    mutex_unlock(arg1 + 0x2f8);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar6 = *(arg1 + 0x98);
    iVar2 = *(iVar6 + 0x24);
    *(arg1 + 0xf4) = iVar2;
    if (iVar2 == 0) {
        if ((*(arg1 + 0x378) >> 3 & 1) != 0) {
            iVar2 = sym.haptics_toggle_module_enable(arg1);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar6 = *(arg1 + 0x98);
        }
    }
    else if ((iVar2 == 4) || (iVar2 == 1)) {
        uVar3 = *arg1;
        pcVar4 = "pattern src %d can\'t be used for predefined effect\n";
        goto code_r0x0800effc;
    }
    regmap_update_bits_base(*(arg1 + 8),*(arg1 + 0x368) + 99U & 0xffff,0x80,(*(iVar6 + 0x2c) == '\0') << 7,0,0,0);
    iVar6 = *(*(arg1 + 0x98) + 0x10);
    *(arg1 + 0xa0) = iVar6;
    if ((iVar6 != 0) && (iVar2 = sym.haptics_set_brake(arg1,iVar6), iVar2 < 0)) {
        return iVar2;
    }
    uVar5 = *(arg1 + 0xf4);
    if ((uVar5 & 0xfffffffe) == 2) {
        iVar6 = **(arg1 + 0x98);
        if (*(iVar6 + 0x68) != '\0') {
            uVar3 = *arg1;
            uVar1 = (*(arg1 + 0x98))[3];
            pcVar4 = "Ignore preloaded effect: %d\n";
            goto code_r0x0800f160;
        }
        iVar2 = sym.haptics_set_pattern(arg1,iVar6,uVar5);
        if (iVar2 < 0) {
            return iVar2;
        }
        uVar5 = *(arg1 + 0xf4);
    }
    if ((uVar5 == 0) && (iVar2 = sym.haptics_set_fifo(arg1,*(*(arg1 + 0x98) + 8)), iVar2 < 0)) {
        return iVar2;
    }
    if (*(arg1 + 0x388) != 4) {
        return 0;
    }
    if (*(arg1 + 0xf4) != 5) {
        return 0;
    }
    if (*(*(*(arg1 + 0x98) + 8) + 0x14) == '\0') {
        uVar3 = *arg1;
        iVar2 = *(*(arg1 + 0x98) + 0x18);
        pcVar4 = "effect %d has PAT_MEM src but not preloaded\n";
code_r0x0800effc:
        _dev_err(uVar3,pcVar4,iVar2);
        return -0x16;
    }
    sym.haptics_enable_autores(arg1,0);
    uVar3 = *arg1;
    pcVar4 = "Ignore loading data for preload FIFO effect: %d\n";
    uVar1 = *(*(arg1 + 0x98) + 0x18);
code_r0x0800f160:
    _dev_printk(0x8003b96,uVar3,pcVar4,uVar1);
    return 0;
}


// ===== sym.get_play_length_us @ 0x0800f168 (size 96) =====

int sym.get_play_length_us(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t *piVar3;
    
    piVar3 = *arg1;
    if (piVar3[2] == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = *(piVar3[2] + 0x14);
    }
    if ((*(piVar3 + 0x24) & 0xfffffffe) == 2) {
        if (*piVar3 == 0) {
            return iVar1;
        }
        iVar2 = *(*piVar3 + 100);
    }
    else {
        if (*(piVar3 + 0x24) != 0) {
            return iVar1;
        }
        if (piVar3[1] == 0) {
            return iVar1;
        }
        iVar2 = *(piVar3[1] + 0x10);
    }
    return iVar2 + iVar1;
}


// ===== sym._copy_to_user @ 0x0800f1c8 (size 320) =====

ulong sym._copy_to_user(int64_t arg1)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    ulong in_x1;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg1 & uVar3;
    }
    uVar5 = 6;
    bVar4 = 0xfffffffffffffff9 < uVar6;
    uVar6 = uVar6 + 6;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
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
        uVar5 = __arch_copy_to_user(arg1,in_x1,6);
        if ((_debugfs_attr_read >> 0x18 & 1) == 0) {
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
    return uVar5;
}


// ===== sym.lra_calibration_store @ 0x0800f344 (size 3648) =====

int64_t sym.lra_calibration_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    bool bVar3;
    uchar uVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    char *pcVar8;
    uint uVar9;
    uint32_t uVar10;
    int iVar11;
    uint uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1_00;
    uint32_t uVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    int iVar18;
    uint32_t uVar19;
    uint8_t uVar20;
    ulong uVar21;
    ulong uVar22;
    ulong unaff_x30;
    char acStack_fc [4];
    uchar auStack_f8 [4];
    uchar auStack_f4 [4];
    uint8_t auStack_f0 [4];
    uchar auStack_ec [4];
    uint32_t uStack_e8;
    ushort uStack_e4;
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
    int iStack_80;
    int iStack_7c;
    uint uStack_78;
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_70 = *(iVar7 + 0x5e0);
    acStack_fc[0] = '\0';
    iVar5 = kstrtobool(arg2,&stack0xffffffffffffff04);
    if (iVar5 != 0) {
        iVar7 = -0x16;
        goto code_r0x0800fd28;
    }
    iVar7 = arg3;
    if (acStack_fc[0] == '\0') goto code_r0x0800fd28;
    arg1_00 = arg1 + -0x1f0;
    mutex_lock(arg1 + -0x138);
    if ((*(arg1 + -0xfc) == 0) && (*(arg1 + -0x140) != 0)) {
        _dev_err(*arg1_00,"In FIFO playing, ignore calibration\n");
        iVar5 = -0x10;
    }
    else {
        iVar5 = sym.haptics_enable_play(arg1_00,0);
        if (iVar5 < 0) {
            uVar21 = *arg1_00;
            pcVar8 = "Stop playing failed, rc=%d\n";
        }
        else {
            uVar14 = *(arg1 + -0x1b4);
            *(arg1 + -0xf8) = 1;
            uVar13 = *(arg1 + 0x178) + 99U & 0xffff;
            uStack_e8 = uStack_e8 & 0xffffff00;
            auStack_ec[0] = 0;
            iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff18,1);
            if (iVar5 < 0) {
                _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                uVar21 = *arg1_00;
                pcVar8 = "Read AUTORES_CFG failed, rc=%d\n";
code_r0x0800fae0:
                _dev_err(uVar21,pcVar8,iVar5);
            }
            else {
                uVar13 = *(arg1 + 0x178) + 0x60U & 0xffff;
                iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff14,1);
                if (iVar5 < 0) {
                    _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                    uVar21 = *arg1_00;
                    pcVar8 = "Read DRV_DUTY_CFG failed, rc=%d\n";
                    goto code_r0x0800fae0;
                }
                uVar9 = 0xb9;
                if (*(arg1 + 0x198) != 4) {
                    uVar9 = 0xb2;
                }
                regmap_update_bits_base(*(arg1 + -0x1e8),*(arg1 + 0x178) + 99U & 0xffff,0xbf,uVar9,0,0,0);
                bVar3 = *(arg1 + 0x198) != 4;
                uVar9 = 0xff;
                if (bVar3) {
                    uVar9 = 0x80;
                }
                uVar12 = 0x16;
                if (bVar3) {
                    uVar12 = 0;
                }
                regmap_update_bits_base(*(arg1 + -0x1e8),*(arg1 + 0x178) + 0x60U & 0xffff,uVar9,uVar12,0,0,0);
                iVar5 = sym.haptics_config_openloop_lra_period(arg1_00,0x1653);
                if (-1 < iVar5) {
                    _dev_printk(0x8003b96,*arg1_00,"update lra_calibrationVMAX_HDRM to %d mv\n",*(arg1 + -0x1a8));
                    iVar5 = sym.haptics_set_vmax_headroom_mv(arg1_00,*(arg1 + -0x1a8));
                    if (-1 < iVar5) {
                        if ((*(arg1 + 0x98) != 0) || (*(arg1 + 0x198) == 3)) {
                            uVar14 = *(arg1 + 0x16c) - *(arg1 + -0x1a8);
                        }
                        mutex_lock(arg1 + 0x108);
                        iVar5 = sym.__haptics_set_vmax_mv(arg1_00,uVar14);
                        mutex_unlock(arg1 + 0x108);
                        if (-1 < iVar5) {
                            uVar4 = sym.get_direct_play_max_amplitude(arg1_00);
                            uStack_e0 = CONCAT71(uStack_e0._1_7_,uVar4);
                            uVar13 = *(arg1 + 0x17c) + 0x26U & 0xffff;
                            iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff20,1);
                            if (iVar5 < 0) {
                                _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",uVar13,iVar5);
                                _dev_err(*arg1_00,"config DIRECT_PLAY failed, rc=%d\n",iVar5);
                            }
                            else {
                                iVar5 = sym.haptics_enable_hpwr_vreg(arg1_00,1);
                                if (-1 < iVar5) {
                                    *(arg1 + -0xfc) = 1;
                                    iVar5 = sym.haptics_enable_play(arg1_00,1);
                                    if (-1 < iVar5) {
                                        usleep_range_state(150000,0x25d78,2);
                                        iVar5 = sym.haptics_get_closeloop_lra_period(arg1_00,0);
                                        if ((-1 < iVar5) && (iVar5 = sym.haptics_enable_play(arg1_00,0), -1 < iVar5))
                                        {
                                            sym.haptics_config_openloop_lra_period(arg1_00,*(arg1 + -0x1ac));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                sym.haptics_enable_play(arg1_00,0);
                iVar5 = sym.haptics_enable_hpwr_vreg(arg1_00,0);
                if (-1 < iVar5) {
                    uVar13 = *(arg1 + 0x178) + 99U & 0xffff;
                    iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff18,1);
                    if (-1 < iVar5) {
                        uVar13 = *(arg1 + 0x178) + 0x60U & 0xffff;
                        iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff14,1);
                        if (-1 < iVar5) {
                            usleep_range_state(4000,5000,2);
                            if (*(arg1 + -0x183) == '\0') {
                                uVar15 = &stack0xffffffffffffff18 | 1;
                                auStack_f0[0] = 0;
                                auStack_f4[0] = 0;
                                auStack_f8[0] = 0;
                                uStack_e0._0_6_ = CONCAT24(*0x800505c,*0x8005058);
                                uStack_e4 = *0x800505c;
                                uVar13 = *(arg1 + 0x178) + 0x49U & 0xffff;
                                uStack_e8 = *0x8005058;
                                iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,uVar15,1);
                                if (iVar5 < 0) {
code_r0x0800f908:
                                    uVar21 = *arg1_00;
                                    pcVar8 = "read addr %#x failed, rc=%d\n";
                                }
                                else {
                                    uVar17 = &stack0xffffffffffffff18 | 3;
                                    uVar13 = *(arg1 + 0x178) + (uStack_e8 >> 0x10 & 0xff) & 0xffff;
                                    iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,uVar17,1);
                                    if (iVar5 < 0) goto code_r0x0800f908;
                                    uVar13 = *(arg1 + 0x178) + uStack_e4 & 0xffff;
                                    iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff18 | 5,1);
                                    if (iVar5 < 0) goto code_r0x0800f908;
                                    iVar5 = *(arg1 + 0x198);
                                    if (iVar5 != 3) {
                                        if (iVar5 == 4) {
                                            uVar9 = 0x10;
                                            uVar21 = 0x81;
                                            uVar22 = 0x7c;
                                            iVar6 = 0xa4;
                                            uVar20 = *(arg1 + 0x19e) ^ 0x81;
                                            goto code_r0x0800f638;
                                        }
                                        if (iVar5 != 2) {
                                            _dev_err(*arg1_00,"unsupported HW type: %d\n");
                                            iVar5 = -0x5f;
                                            goto code_r0x0800fce0;
                                        }
code_r0x0800fc8c:
                                        if (*(arg1 + -8) == 0) {
                                            _dev_err(*arg1_00,"PBS device is not defined\n");
                                            iVar5 = -0x13;
                                        }
                                        else {
                                            iVar5 = -0x13;
                                            _dev_err(*arg1_00,"Trigger PBS to config ISC failed, rc=%d\n",0xffffffed);
                                        }
                                        goto code_r0x0800fce0;
                                    }
                                    uVar9 = 0;
                                    uVar20 = 0x61;
                                    uVar21 = 0x67;
                                    uVar22 = 0x80;
                                    iVar6 = 0x77;
code_r0x0800f638:
                                    uVar13 = *(arg1 + 0x178) + 0x65U & 0xffff;
                                    iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff0c,1);
                                    if (iVar5 < 0) {
code_r0x0800fa68:
                                        _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                                        goto code_r0x0800fce0;
                                    }
                                    uVar13 = *(arg1 + 0x178) + iVar6 & 0xffff;
                                    iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff08,1);
                                    if (iVar5 < 0) goto code_r0x0800fa68;
                                    regmap_update_bits_base
                                              (*(arg1 + -0x1e8),*(arg1 + 0x178) + 0x65U & 0xffff,uVar22,uVar9,0,0,
                                               0);
                                    regmap_update_bits_base
                                              (*(arg1 + -0x1e8),*(arg1 + 0x178) + iVar6 & 0xffff,uVar21,uVar20,0,0
                                               ,0);
                                    uVar13 = uStack_e0;
                                    if ((*(arg1 + 0x198) == 3) && (uVar13 == 0x48)) {
                                        uStack_e0._0_2_ = CONCAT11(0x78,uStack_e0);
                                    }
                                    uVar13 = *(arg1 + 0x178) + uVar13 & 0xffff;
                                    iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff20 | 1,1)
                                    ;
                                    if (iVar5 < 0) {
code_r0x0800f93c:
                                        uVar21 = *arg1_00;
                                        pcVar8 = "write addr %#x failed, rc=%d\n";
code_r0x0800f950:
                                        _dev_err(uVar21,pcVar8,uVar13,iVar5);
                                    }
                                    else {
                                        uVar13 = uStack_e0._2_1_;
                                        if ((*(arg1 + 0x198) == 3) && (uVar13 == 0x48)) {
                                            uStack_e0._0_4_ = CONCAT13(0x78,uStack_e0);
                                        }
                                        uVar13 = *(arg1 + 0x178) + uVar13 & 0xffff;
                                        iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff20 | 3
                                                                  ,1);
                                        if (iVar5 < 0) goto code_r0x0800f93c;
                                        uVar13 = uStack_e0._4_1_;
                                        if ((*(arg1 + 0x198) == 3) && (uVar13 == 0x48)) {
                                            uStack_e0._0_6_ = CONCAT15(0x78,uStack_e0);
                                        }
                                        uVar13 = *(arg1 + 0x178) + uVar13 & 0xffff;
                                        iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff20 | 5
                                                                  ,1);
                                        if (iVar5 < 0) goto code_r0x0800f93c;
                                        iVar5 = sym.haptics_enable_hpwr_vreg(arg1_00,1);
                                        if (-1 < iVar5) {
                                            iVar18 = 5;
                                            uVar14 = 100000;
                                            uVar16 = 0;
                                            do {
                                                uVar10 = uVar16 + uVar14 >> 1;
                                                uVar19 = (uVar10 * 0xff) / 100000;
                                                uVar13 = *(arg1 + 0x17c) + 0x26U & 0xffff;
                                                auStack_ec[0] = uVar19;
                                                iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,
                                                                          &stack0xffffffffffffff14,1);
                                                if (iVar5 < 0) {
                                                    _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",uVar13,iVar5);
                                                    _dev_err(*arg1_00,"config DIRECT_PLAY failed, rc=%d\n",iVar5);
                                                    goto code_r0x0800f954;
                                                }
                                                _dev_printk(0x8003b96,*arg1_00,
                                                            "sweeping milli_pct %u, amplitude %#x\n",uVar10,uVar19);
                                                *(arg1 + -0xfc) = 1;
                                                iVar5 = sym.haptics_enable_play(arg1_00,1);
                                                if (iVar5 < 0) goto code_r0x0800f954;
                                                usleep_range_state(*(arg1 + -0x1b0),*(arg1 + -0x1b0) + 1000,2);
                                                uVar13 = *(arg1 + 0x178) + 0xcU & 0xffff;
                                                iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,
                                                                         &stack0xffffffffffffff10,1);
                                                uVar20 = auStack_f0[0];
                                                if (iVar5 < 0) {
                                                    uVar21 = *arg1_00;
                                                    pcVar8 = "read addr %#x failed, rc=%d\n";
                                                    goto code_r0x0800f950;
                                                }
                                                iVar5 = sym.haptics_enable_play(arg1_00,0);
                                                if (iVar5 < 0) goto code_r0x0800f954;
                                                uVar13 = uVar10;
                                                if ((uVar20 & 4) != 0) {
                                                    uVar13 = uVar16;
                                                    uVar14 = uVar10;
                                                }
                                                usleep_range_state(4000,5000,2);
                                                iVar18 = iVar18 + -1;
                                                uVar16 = uVar13;
                                            } while (iVar18 != 0);
                                            iVar5 = *(arg1 + 0x198);
                                            if (iVar5 == 4) {
                                                bVar3 = *(arg1 + 0x19e) != '\0';
                                                uVar16 = 10000000;
                                                if (bVar3) {
                                                    uVar16 = 5000000;
                                                }
                                                uVar10 = 0xfa;
                                                if (bVar3) {
                                                    uVar10 = 0x7d;
                                                }
code_r0x08010018:
                                                if (*(arg1 + 0x98) != 0) {
code_r0x08010028:
                                                    uVar16 = *(arg1 + 0x16c) * 1000;
                                                }
                                                uVar19 = 0;
                                                if (uVar10 != 0) {
                                                    uVar19 = uVar16 / uVar10;
                                                }
                                                _dev_printk(0x8003b96,*arg1_00,"LRA impedance capable max: %u mohms\n"
                                                            ,uVar19);
                                            }
                                            else {
                                                if (iVar5 == 3) {
                                                    uVar10 = 0x8c;
                                                    goto code_r0x08010028;
                                                }
                                                if (iVar5 == 2) {
                                                    uVar16 = 10000000;
                                                    if (*(arg1 + 0x19e) != '\0') {
                                                        uVar16 = 5000000;
                                                    }
                                                    uVar10 = 0xfa;
                                                    goto code_r0x08010018;
                                                }
                                                uVar19 = 0;
                                            }
                                            uVar16 = (uVar19 * uVar13) / 100000;
                                            uVar14 = (uVar19 * uVar14) / 100000;
                                            if (uVar19 * uVar13 < 100000) {
                                                uVar21 = *arg1_00;
                                                pcVar8 = "Short circuit detected!\n";
code_r0x080100c0:
                                                _dev_warn(uVar21,pcVar8);
                                            }
                                            else {
                                                uVar21 = *arg1_00;
                                                if (uVar19 <= uVar14) {
                                                    pcVar8 = "Open circuit detected!\n";
                                                    goto code_r0x080100c0;
                                                }
                                                _dev_printk(0x8003b96,uVar21,
                                                            "LRA impedance is between %u - %u mohms\n",uVar16,uVar14);
                                            }
                                            *(arg1 + -0x1a4) = uVar16;
                                            *(arg1 + -0x1a0) = uVar14;
                                            *(arg1 + -0x19c) = uVar19;
                                        }
                                    }
code_r0x0800f954:
                                    sym.haptics_enable_play(arg1_00,0);
                                    iVar5 = sym.haptics_enable_hpwr_vreg(arg1_00,0);
                                    if (iVar5 < 0) goto code_r0x0800fce0;
                                    if (*(arg1 + 0x198) == 2) goto code_r0x0800fc8c;
                                    uVar13 = *(arg1 + 0x178) + 0x65U & 0xffff;
                                    iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff0c,1);
                                    if (iVar5 < 0) {
code_r0x0800fcac:
                                        uVar21 = *arg1_00;
                                        pcVar8 = "write addr %#x failed, rc=%d\n";
                                    }
                                    else {
                                        uVar13 = *(arg1 + 0x178) + iVar6 & 0xffff;
                                        iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff08,1)
                                        ;
                                        if (iVar5 < 0) goto code_r0x0800fcac;
                                        uVar13 = *(arg1 + 0x178) + (uStack_e8 & 0xff) & 0xffff;
                                        iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,uVar15,1);
                                        if (-1 < iVar5) {
                                            uVar13 = *(arg1 + 0x178) + (uStack_e8 >> 0x10 & 0xff) & 0xffff;
                                            iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,uVar17,1);
                                            if (-1 < iVar5) {
                                                uVar13 = *(arg1 + 0x178) + uStack_e4 & 0xffff;
                                                iVar5 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,
                                                                          &stack0xffffffffffffff18 | 5,1);
                                                if (-1 < iVar5) goto code_r0x0800fce0;
                                            }
                                        }
                                        uVar21 = *arg1_00;
                                        pcVar8 = "write addr %#x failed, rc=%d\n";
                                    }
                                }
                                _dev_err(uVar21,pcVar8,uVar13,iVar5);
                            }
                            else {
                                iVar18 = *(arg1 + -0x1b0);
                                uStack_e8 = uStack_e8 & 0xffffff00;
                                iVar6 = iVar18 + 2000;
                                uStack_78 = 0;
                                uStack_a0 = *0x8005038;
                                uStack_98 = *0x8005040;
                                uStack_90 = *0x8005048;
                                uStack_88 = *0x8005050;
                                uStack_c0 = *0x8005018;
                                uStack_b8 = *0x8005020;
                                uStack_b0 = *0x8005028;
                                uStack_a8 = *0x8005030;
                                uStack_e0 = *0x8004ff8;
                                uStack_d8 = *0x8005000;
                                uStack_d0 = *0x8005008;
                                uStack_c8 = *0x8005010;
                                uVar20 = *(arg1 + 0x19e) ^ 1;
                                iStack_80 = iVar6;
                                iStack_7c = iVar6;
                                if (*(arg1 + -0x10) == 0) {
                                    uVar13 = 0x1194;
                                }
                                else {
                                    iVar5 = nvmem_device_read(*(arg1 + -0x10),0x75,1,&stack0xffffffffffffff18);
                                    uVar13 = 0x1194;
                                    if (0 < iVar5) {
                                        if ((uStack_e8 & 0xff) != 0) {
                                            uVar1 = 0;
                                            if ((uStack_e8 & 0xff) < 0xa4) {
                                                uVar1 = uVar20;
                                            }
                                            uVar20 = uVar1;
                                            if (uStack_e8 < 0x3c) {
                                                uVar20 = 1;
                                            }
                                            iVar5 = 0x7d;
                                            if (uVar20 != 0) {
                                                iVar5 = 0xfa;
                                            }
                                            iVar11 = 1000;
                                            if (uVar20 != 0) {
                                                iVar11 = 2000;
                                            }
                                            uVar13 = iVar11 + iVar5 * (uStack_e8 >> 2);
                                            if (uVar13 < 0x1195) {
                                                uVar13 = 0x1194;
                                            }
                                        }
                                    }
                                }
                                _dev_printk(0x8003b96,*arg1_00,"Set %u mV Vmax for impedance detection\n",uVar13);
                                mutex_lock(arg1 + 0x108);
                                iVar5 = sym.__haptics_set_vmax_mv(arg1_00,uVar13);
                                mutex_unlock(arg1 + 0x108);
                                if (iVar5 < 0) goto code_r0x0800fce0;
                                uStack_e8 = CONCAT31(uStack_e8._1_3_,uVar20) | 0x80;
                                regmap_update_bits_base
                                          (*(arg1 + -0x1e8),*(arg1 + 0x178) + 0xa4U & 0xffff,0x81,uVar20 | 0x80,0,0
                                           ,0);
                                regmap_update_bits_base
                                          (*(arg1 + -0x1e8),*(arg1 + 0x178) + 0x65U & 0xffff,0x10,0,0,0,0);
                                iVar5 = sym.haptics_set_pattern(arg1_00,&stack0xffffffffffffff20,2);
                                if (iVar5 < 0) {
code_r0x0800ff44:
                                    _dev_err(*arg1_00,"measure LRA impedance failed, rc=%d\n",iVar5);
                                }
                                else {
                                    *(arg1 + -0xfc) = 2;
                                    iVar5 = sym.haptics_enable_play(arg1_00,1);
                                    if (iVar5 < 0) goto code_r0x0800ff44;
                                    usleep_range_state(iVar6,iVar18 + 0x7d1,2);
                                    iVar5 = sym.haptics_enable_play(arg1_00,0);
                                    if (iVar5 < 0) goto code_r0x0800ff44;
                                    uVar13 = *(arg1 + 0x178) + 0xeU & 0xffff;
                                    iVar5 = regmap_bulk_read(*(arg1 + -0x1e8),uVar13,&stack0xffffffffffffff18,1);
                                    if (iVar5 < 0) {
                                        _dev_err(*arg1_00,"read addr %#x failed, rc=%d\n",uVar13,iVar5);
                                        goto code_r0x0800ff44;
                                    }
                                    *(arg1 + -0x198) = (uStack_e8 & 0xff) * 0xfa;
                                    _dev_printk(0x8003b96,*arg1_00,"measured LRA impedance: %u mohm");
                                    if ((*(arg1 + -0x10) != 0) &&
                                       (iVar5 = nvmem_device_write(*(arg1 + -0x10),0x76,1,&stack0xffffffffffffff18),
                                       iVar5 < 0)) {
                                        _dev_err(*arg1_00,"write measured impedance value into SDAM failed, rc=%d\n",
                                                 iVar5);
                                        goto code_r0x0800ff44;
                                    }
                                }
                                regmap_update_bits_base
                                          (*(arg1 + -0x1e8),*(arg1 + 0x178) + 0xa4U & 0xffff,0x80,0,0,0,0);
                                iVar5 = 0;
                            }
code_r0x0800fce0:
                            if (-1 < iVar5) goto code_r0x0800fce4;
                            uVar21 = *arg1_00;
                            pcVar8 = "Detect LRA impedance failed, rc=%d\n";
                            goto code_r0x0800fc14;
                        }
                    }
                    _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",uVar13,iVar5);
                }
            }
            uVar21 = *arg1_00;
            pcVar8 = "Detect LRA frequency failed, rc=%d\n";
        }
code_r0x0800fc14:
        _dev_err(uVar21,pcVar8,iVar5);
    }
code_r0x0800fce4:
    arg2 = &stack0xffffffffffffff20;
    uStack_e0 = CONCAT71(uStack_e0._1_7_,7);
    uVar13 = *(arg1 + 0x178) + 0x66U & 0xffff;
    iVar6 = regmap_bulk_write(*(arg1 + -0x1e8),uVar13,arg2,1);
    if (iVar6 < 0) {
        arg2 = uVar13;
        _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",arg2,iVar6);
    }
    *(arg1 + -0xf8) = 0;
    mutex_unlock(arg1 + -0x138);
    iVar7 = iVar5;
    if (-1 < iVar5) {
        iVar7 = arg3;
    }
code_r0x0800fd28:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_70) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = 0x8010180;
        uVar13 = *(iVar7 + -0x1ac);
        if (uVar13 == 0) {
            iVar7 = -0x16;
        }
        else {
            uVar14 = 0;
            if (uVar13 != 0) {
                uVar14 = 10000000 / uVar13;
            }
            iVar5 = scnprintf(arg2,0x1000,"%d Hz\n",uVar14);
            iVar7 = iVar5;
        }
        return iVar7;
    }
    return iVar7;
}


// ===== sym.lra_frequency_hz_show @ 0x08010184 (size 92) =====

int64_t sym.lra_frequency_hz_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + -0x1ac);
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = 0;
        if (uVar1 != 0) {
            uVar2 = 10000000 / uVar1;
        }
        iVar3 = scnprintf(arg2,0x1000,"%d Hz\n",uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.lra_impedance_show @ 0x080101e0 (size 196) =====

int64_t sym.lra_impedance_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    char *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + -0x183) == '\0') {
        if (*(arg1 + -0x1a4) == 0) {
            if (*(arg1 + -0x1a0) == 0) {
                return -0x16;
            }
            pcVar2 = "Short circuit";
        }
        else {
            if (*(arg1 + -0x1a0) < *(arg1 + -0x19c)) {
                iVar1 = scnprintf(arg2,0x1000,"%u ~ %u mohms\n");
                goto code_r0x08010288;
            }
            pcVar2 = "Open circuit";
        }
        iVar1 = scnprintf(arg2,0x1000,0x8003a6c,pcVar2);
    }
    else {
        iVar1 = scnprintf(arg2,0x1000,"measured %u mohms\n",*(arg1 + -0x198));
    }
code_r0x08010288:
    return iVar1;
}


// ===== sym.primitive_duration_show @ 0x080102a4 (size 64) =====

int64_t sym.primitive_duration_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8002719,*(arg1 + 0x18c));
    return iVar1;
}


// ===== sym.primitive_duration_store @ 0x080102e4 (size 340) =====

int64_t sym.primitive_duration_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint16_t *puVar5;
    int iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint16_t auStack_2c [2];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_28 = *(iVar4 + 0x5e0);
    puVar5 = auStack_2c;
    auStack_2c[0] = 0;
    iVar3 = kstrtou16(arg2,0,puVar5);
    if (iVar3 != 0) {
        arg3 = -0x16;
        goto code_r0x080103f0;
    }
    iVar3 = *(arg1 + 0x174);
    if (iVar3 == 0) {
        iVar6 = 0;
code_r0x08010374:
        if (iVar6 != iVar3) {
            iVar4 = *(arg1 + -0x168);
            iVar8 = *(iVar4 + iVar6 * 0x30 + 0x10);
            iVar7 = iVar6;
            if (iVar8 == 0) {
                iVar3 = 0;
            }
            else {
                iVar3 = *(iVar8 + 0x14);
            }
            uVar1 = *(iVar4 + iVar7 * 0x30 + 0x24);
            if ((uVar1 & 0xfffffffe) == 2) {
                iVar4 = *(iVar4 + iVar7 * 0x30);
                if (iVar4 != 0) {
                    iVar6 = *(iVar4 + 100);
code_r0x080103e8:
                    iVar3 = iVar6 + iVar3;
                }
            }
            else if ((uVar1 == 0) && (iVar4 = *(iVar4 + iVar7 * 0x30 + 8), iVar4 != 0)) {
                iVar6 = *(iVar4 + 0x10);
                goto code_r0x080103e8;
            }
            *(arg1 + 0x18c) = iVar3;
            goto code_r0x080103f0;
        }
    }
    else {
        iVar6 = 0;
        do {
            if (*(*(arg1 + -0x168) + iVar6 * 0x30 + 0x18) == auStack_2c[0]) goto code_r0x08010374;
            iVar6 = iVar6 + 1;
        } while (iVar3 != iVar6);
    }
    _printk(0x800271d);
    arg3 = -0x16;
code_r0x080103f0:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_28) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = sym.xiaomi_f0_get;
        uVar1 = *(iVar4 + -0x1ac);
        if (uVar1 == 0) {
            iVar4 = -0x16;
        }
        else {
            uVar2 = 0;
            if (uVar1 != 0) {
                uVar2 = 10000000 / uVar1;
            }
            iVar3 = scnprintf(puVar5,0x1000,"%d Hz\n",uVar2);
            iVar4 = iVar3;
        }
        return iVar4;
    }
    return arg3;
}


// ===== sym.xiaomi_f0_get @ 0x08010438 (size 92) =====

int64_t sym.xiaomi_f0_get(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + -0x1ac);
    if (uVar1 == 0) {
        iVar4 = -0x16;
    }
    else {
        uVar2 = 0;
        if (uVar1 != 0) {
            uVar2 = 10000000 / uVar1;
        }
        iVar3 = scnprintf(arg2,0x1000,"%d Hz\n",uVar2);
        iVar4 = iVar3;
    }
    return iVar4;
}


// ===== sym.xiaomi_f0_put @ 0x08010494 (size 248) =====

int64_t sym.xiaomi_f0_put(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    uint32_t uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    puVar5 = &uStack_3c;
    uStack_3c = 0;
    iVar3 = kstrtouint(arg2,0,puVar5);
    if (iVar3 == 0) {
        arg1_00 = arg1 + -0x1f0;
        uVar2 = 0;
        if (uStack_3c != 0) {
            uVar2 = 10000000 / uStack_3c;
        }
        uVar1 = *(arg1 + -0x1ac);
        *(arg1 + -0x1b0) = uVar2;
        *(arg1 + -0x1ac) = uVar2;
        iVar3 = sym.haptics_config_openloop_lra_period(arg1_00,uVar2);
        _dev_info(*arg1_00,"xiaomi_f0_put: cl_t_lra_us(%d  -->  %d).\n",uVar1,*(arg1 + -0x1ac));
        puVar5 = uStack_3c;
        if (iVar3 < 0) {
            _dev_err(*arg1_00,"xiaomi_f0: f0(%d) config failed.\n");
            arg3 = iVar3;
        }
        else {
            _dev_info(*arg1_00,"xiaomi_f0_put: f0(%d) config success.\n",puVar5);
        }
    }
    else {
        arg3 = -0x16;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.mi_vmax_ctrl_show;
    iVar3 = scnprintf(puVar5,0x1000,"vmax: %d\n",*(iVar4 + -0x1bc));
    return iVar3;
}


// ===== sym.mi_vmax_ctrl_show @ 0x0801058c (size 68) =====

int64_t sym.mi_vmax_ctrl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"vmax: %d\n",*(arg1 + -0x1bc));
    return iVar1;
}


// ===== sym.mi_vmax_ctrl_store @ 0x080105d0 (size 160) =====

int64_t sym.mi_vmax_ctrl_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar3 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtouint(arg2,0,puVar3);
    if (iVar1 == 0) {
        puVar3 = uStack_2c;
        *(arg1 + -0x1bc) = uStack_2c;
        _dev_info(*(arg1 + -0x1f0),"mi_vmax_ctrl_store: vmax %d.\n");
    }
    else {
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mi_custom_vmax_ctrl_show;
    iVar1 = scnprintf(puVar3,0x1000,"custom vmax: %d\n",*(*(iVar2 + -0x160) + 0x1c));
    return iVar1;
}


// ===== sym.mi_custom_vmax_ctrl_show @ 0x08010670 (size 72) =====

int64_t sym.mi_custom_vmax_ctrl_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"custom vmax: %d\n",*(*(arg1 + -0x160) + 0x1c));
    return iVar1;
}


// ===== sym.mi_custom_vmax_ctrl_store @ 0x080106b8 (size 164) =====

int64_t sym.mi_custom_vmax_ctrl_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    puVar3 = &uStack_2c;
    uStack_2c = 0;
    iVar1 = kstrtouint(arg2,0,puVar3);
    if (iVar1 == 0) {
        puVar3 = uStack_2c;
        *(*(arg1 + -0x160) + 0x1c) = uStack_2c;
        _dev_info(*(arg1 + -0x1f0),"mi_custom_vmax_ctrl_store: vmax %d.\n");
    }
    else {
        arg3 = -0x16;
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg3;
    }
    iVar2 = __stack_chk_fail();
    *extraout_x18 = sym.mi_f0_check_show;
    iVar1 = scnprintf(puVar3,0x1000,0x8002719,*(iVar2 + -0x180));
    return iVar1;
}


// ===== sym.mi_f0_check_show @ 0x0801075c (size 68) =====

int64_t sym.mi_f0_check_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8002719,*(arg1 + -0x180));
    return iVar1;
}


// ===== sym.lra_calibration_check_show @ 0x080107a0 (size 68) =====

int64_t sym.lra_calibration_check_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8002719,*(arg1 + -0x182));
    return iVar1;
}


// ===== sym.mi_comp_lra_show @ 0x080107e4 (size 68) =====

int64_t sym.mi_comp_lra_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"mi_comp_lra_show: %d\n",*(arg1 + -0x178));
    return iVar1;
}


// ===== sym.mi_comp_lra_store @ 0x08010828 (size 172) =====

uint64_t sym.mi_comp_lra_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint32_t uVar7;
    int64_t iVar8;
    code *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar10;
    uint64_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    unkbyte7 Stack_a8;
    uchar uStack_a1;
    unkbyte7 Stack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uVar7 = &uStack_2c;
    uStack_2c = 0;
    *(arg1 + -0x178) = 0x708;
    iVar8 = arg3;
    iVar2 = kstrtouint(arg2,0);
    if (iVar2 == 0) {
        *(arg1 + -0x178) = uStack_2c;
        uVar7 = uStack_2c;
        _dev_info(*(arg1 + -0x1f0),"mi_comp_lra_store: mi_comp_lra %d.\n");
    }
    else {
        arg3 = 0xffffffffffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return arg3;
    }
    auVar12 = __stack_chk_fail();
    piVar10 = auVar12._8_8_;
    *extraout_x18 = sym.haptics_add_debugfs;
    pcStack_88 = sym.haptics_add_debugfs;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    Stack_a0 = 0;
    Stack_a8 = 0;
    uStack_a1 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    if (uVar7 < 1) {
        uVar4 = 0;
    }
    else {
        uVar11 = uVar7;
        do {
            scnprintf(&Stack_a8,0xf,"%s%d",iVar8,piVar10[3]);
            uVar3 = debugfs_create_dir(&Stack_a8,auVar12._0_8_);
            if (0xfffffffffffff000 < uVar3) {
                _printk(0x8001e63,&Stack_a8,uVar3 & 0xffffffff);
                uVar4 = uVar3 & 0xffffffff;
                break;
            }
            uVar4 = debugfs_create_file_unsafe("vmax_mv",0x1a4,uVar3,piVar10,obj.vmax_debugfs_ops);
            if ((uVar4 < 0xfffffffffffff001) &&
               (uVar4 = debugfs_create_file_unsafe
                                  ("lra_auto_res_en",0x1a4,uVar3,piVar10,obj.auto_res_en_debugfs_ops),
               uVar4 < 0xfffffffffffff001)) {
                if (*piVar10 != 0) {
                    uVar5 = debugfs_create_dir("pattern",uVar3);
                    uVar4 = uVar5;
                    if ((uVar5 < 0xfffffffffffff001) &&
                       (uVar4 = debugfs_create_file("samples",0x1a4,uVar5,piVar10,obj.pattern_s_dbgfs_ops),
                       uVar4 < 0xfffffffffffff001)) {
                        pcVar6 = "play_rate_us";
                        pcVar9 = obj.pattern_play_rate_dbgfs_ops;
code_r0x08010aa4:
                        uVar4 = debugfs_create_file_unsafe(pcVar6,0x1a4,uVar5,piVar10,pcVar9);
                        if (uVar4 < 0xfffffffffffff001) goto code_r0x08010ab4;
                    }
                    goto code_r0x08010b90;
                }
                if (piVar10[1] != 0) {
                    uVar5 = debugfs_create_dir("fifo",uVar3);
                    uVar4 = uVar5;
                    if ((uVar5 < 0xfffffffffffff001) &&
                       (uVar4 = debugfs_create_file("samples",0x1a4,uVar5,piVar10,obj.fifo_s_dbgfs_ops),
                       uVar4 < 0xfffffffffffff001)) {
                        pcVar6 = "period";
                        pcVar9 = obj.fifo_period_dbgfs_ops;
                        goto code_r0x08010aa4;
                    }
                    goto code_r0x08010b90;
                }
code_r0x08010ab4:
                if ((piVar10[2] != 0) &&
                   ((((uVar3 = debugfs_create_dir("brake",uVar3), uVar4 = uVar3, 0xfffffffffffff000 < uVar3 ||
                      (uVar4 = debugfs_create_file("samples",0x1a4,uVar3,piVar10,obj.brake_s_dbgfs_ops),
                      0xfffffffffffff000 < uVar4)) ||
                     (uVar4 = debugfs_create_file("mode",0x1a4,uVar3,piVar10,obj.brake_mode_dbgfs_ops),
                     0xfffffffffffff000 < uVar4)) ||
                    ((uVar4 = debugfs_create_file_unsafe("enable",0x1a4,uVar3,piVar10,obj.brake_en_dbgfs_ops),
                     0xfffffffffffff000 < uVar4 ||
                     (uVar4 = debugfs_create_file_unsafe
                                        ("sine_gain",0x1a4,uVar3,piVar10,obj.brake_sine_gain_dbgfs_ops),
                     0xfffffffffffff000 < uVar4)))))) goto code_r0x08010b90;
                uVar4 = 0;
            }
            else {
code_r0x08010b90:
                if (uVar4 < 0) {
                    _printk(0x8002da0,&Stack_a8,uVar4 & 0xffffffff);
                    break;
                }
            }
            uVar11 = uVar11 - 1;
            piVar10 = piVar10 + 6;
        } while (uVar11 != 0);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_98) {
        auVar12 = __stack_chk_fail();
        *extraout_x18_00 = sym.vmax_debugfs_ops_open;
        uVar4 = simple_attr_open(auVar12._0_8_,auVar12._8_8_,
                                 sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                                 sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
        return uVar4;
    }
    return uVar4 & 0xffffffff;
}


// ===== sym.haptics_add_debugfs @ 0x080108d4 (size 852) =====

uint64_t sym.haptics_add_debugfs(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    char *pcVar5;
    code *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    unkbyte7 Stack_78;
    uchar uStack_71;
    unkbyte7 Stack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    Stack_70 = 0;
    Stack_78 = 0;
    uStack_71 = 0;
    if (arg3 < 1) {
        uVar3 = 0;
    }
    else {
        uVar7 = arg3;
        do {
            scnprintf(&Stack_78,0xf,"%s%d",arg4,*(arg2 + 0x18));
            uVar2 = debugfs_create_dir(&Stack_78,arg1);
            if (0xfffffffffffff000 < uVar2) {
                _printk(0x8001e63,&Stack_78,uVar2 & 0xffffffff);
                uVar3 = uVar2 & 0xffffffff;
                break;
            }
            uVar3 = debugfs_create_file_unsafe("vmax_mv",0x1a4,uVar2,arg2,obj.vmax_debugfs_ops);
            if ((uVar3 < 0xfffffffffffff001) &&
               (uVar3 = debugfs_create_file_unsafe("lra_auto_res_en",0x1a4,uVar2,arg2,obj.auto_res_en_debugfs_ops),
               uVar3 < 0xfffffffffffff001)) {
                if (*arg2 != 0) {
                    uVar4 = debugfs_create_dir("pattern",uVar2);
                    uVar3 = uVar4;
                    if ((uVar4 < 0xfffffffffffff001) &&
                       (uVar3 = debugfs_create_file("samples",0x1a4,uVar4,arg2,obj.pattern_s_dbgfs_ops),
                       uVar3 < 0xfffffffffffff001)) {
                        pcVar5 = "play_rate_us";
                        pcVar6 = obj.pattern_play_rate_dbgfs_ops;
code_r0x08010aa4:
                        uVar3 = debugfs_create_file_unsafe(pcVar5,0x1a4,uVar4,arg2,pcVar6);
                        if (uVar3 < 0xfffffffffffff001) goto code_r0x08010ab4;
                    }
                    goto code_r0x08010b90;
                }
                if (*(arg2 + 8) != 0) {
                    uVar4 = debugfs_create_dir("fifo",uVar2);
                    uVar3 = uVar4;
                    if ((uVar4 < 0xfffffffffffff001) &&
                       (uVar3 = debugfs_create_file("samples",0x1a4,uVar4,arg2,obj.fifo_s_dbgfs_ops),
                       uVar3 < 0xfffffffffffff001)) {
                        pcVar5 = "period";
                        pcVar6 = obj.fifo_period_dbgfs_ops;
                        goto code_r0x08010aa4;
                    }
                    goto code_r0x08010b90;
                }
code_r0x08010ab4:
                if ((*(arg2 + 0x10) != 0) &&
                   ((((uVar2 = debugfs_create_dir("brake",uVar2), uVar3 = uVar2, 0xfffffffffffff000 < uVar2 ||
                      (uVar3 = debugfs_create_file("samples",0x1a4,uVar2,arg2,obj.brake_s_dbgfs_ops),
                      0xfffffffffffff000 < uVar3)) ||
                     (uVar3 = debugfs_create_file("mode",0x1a4,uVar2,arg2,obj.brake_mode_dbgfs_ops),
                     0xfffffffffffff000 < uVar3)) ||
                    ((uVar3 = debugfs_create_file_unsafe("enable",0x1a4,uVar2,arg2,obj.brake_en_dbgfs_ops),
                     0xfffffffffffff000 < uVar3 ||
                     (uVar3 = debugfs_create_file_unsafe("sine_gain",0x1a4,uVar2,arg2,obj.brake_sine_gain_dbgfs_ops)
                     , 0xfffffffffffff000 < uVar3)))))) goto code_r0x08010b90;
                uVar3 = 0;
            }
            else {
code_r0x08010b90:
                if (uVar3 < 0) {
                    _printk(0x8002da0,&Stack_78,uVar3 & 0xffffffff);
                    break;
                }
            }
            uVar7 = uVar7 - 1;
            arg2 = arg2 + 0x30;
        } while (uVar7 != 0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_68) {
        auVar8 = __stack_chk_fail();
        *extraout_x18 = sym.vmax_debugfs_ops_open;
        uVar3 = simple_attr_open(auVar8._0_8_,auVar8._8_8_,sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt
                                 ,sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
        return uVar3;
    }
    return uVar3 & 0xffffffff;
}


// ===== sym.vmax_debugfs_ops_open @ 0x08010c28 (size 60) =====

void sym.vmax_debugfs_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.vmax_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.vmax_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.vmax_dbgfs_read @ 0x08010c64 (size 24) =====

ulong sym.vmax_dbgfs_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x1c);
    return 0;
}


// ===== sym.vmax_dbgfs_write @ 0x08010c7c (size 40) =====

ulong sym.vmax_dbgfs_write(int64_t arg1,int64_t arg2)

{
    if (0x55e < arg2 >> 3) {
        arg2 = 11000;
    }
    *(arg1 + 0x1c) = arg2;
    return 0;
}


// ===== sym.auto_res_en_debugfs_ops_open @ 0x08010ca4 (size 60) =====

void sym.auto_res_en_debugfs_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.auto_res_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.auto_res_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.auto_res_en_dbgfs_read @ 0x08010ce0 (size 28) =====

ulong sym.auto_res_en_dbgfs_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x2c) ^ 1;
    return 0;
}


// ===== sym.auto_res_en_dbgfs_write @ 0x08010cfc (size 32) =====

ulong sym.auto_res_en_dbgfs_write(int64_t arg1,uint32_t arg2)

{
    *(arg1 + 0x2c) = arg2 == 0;
    return 0;
}


// ===== sym.pattern_s_dbgfs_read @ 0x08010d1c (size 352) =====

int64_t sym.pattern_s_dbgfs_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar8 = *(arg1 + 0xd8);
    if (*piVar8 == 0) {
        iVar5 = 0;
    }
    else {
        iVar5 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x180);
        if (iVar5 == 0) {
            iVar5 = -0xc;
        }
        else {
            iVar6 = 0;
            uVar7 = 0;
            do {
                iVar4 = scnprintf(iVar5 + uVar7,0x180 - uVar7,"0x%03x  ",*(*piVar8 + iVar6));
                uVar2 = *(*piVar8 + iVar6 + 4);
                if (0xe < uVar2) {
    //WARNING: Does not return
                    pcVar3 = SoftwareBreakpoint(0x5512,0x8010e7c);
                    (*pcVar3)();
                }
                uVar1 = iVar4 + uVar7;
                iVar4 = scnprintf(iVar5 + uVar1,0x180 - uVar1,"%s(0x%02x)  ",*(obj.period_str + uVar2 * 8));
                uVar1 = iVar4 + uVar1;
                iVar4 = scnprintf(iVar5 + uVar1,0x180 - uVar1,"F_LRA_X2(%1d)\n",*(*piVar8 + iVar6 + 8));
                iVar6 = iVar6 + 0xc;
                uVar7 = iVar4 + uVar1;
            } while (iVar6 != 0x60);
            iVar4 = simple_read_from_buffer(arg2,arg3,arg4,iVar5,uVar7);
            kfree(iVar5);
            iVar5 = iVar4;
        }
    }
    return iVar5;
}


// ===== sym.pattern_s_dbgfs_write @ 0x08010e7c (size 1304) =====

int64_t sym.pattern_s_dbgfs_write(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    code *pcVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    bool bVar10;
    int iVar11;
    uint32_t uVar12;
    uint uVar13;
    int64_t iVar14;
    ulong uVar15;
    uint32_t uVar16;
    uint64_t arg3_00;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    int64_t *piVar30;
    int64_t iVar31;
    uint32_t uVar32;
    uint32_t uVar33;
    ushort *puVar34;
    ulong unaff_x30;
    uchar auVar35 [16];
    uint32_t uStack_d4;
    int64_t iStack_d0;
    uint32_t auStack_c8 [24];
    int64_t iStack_68;
    
    arg3_00 = arg3;
    *in_x18 = unaff_x30;
    iVar27 = sp_el0;
    iStack_68 = *(iVar27 + 0x5e0);
    piVar30 = *(arg1 + 0xd8);
    iStack_d0 = 0;
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    uStack_d4 = 0;
    auStack_c8[0x14] = 0;
    auStack_c8[0x15] = 0;
    auStack_c8[0x16] = 0;
    auStack_c8[0x17] = 0;
    auStack_c8[0x10] = 0;
    auStack_c8[0x11] = 0;
    auStack_c8[0x12] = 0;
    auStack_c8[0x13] = 0;
    auStack_c8[0xc] = 0;
    auStack_c8[0xd] = 0;
    auStack_c8[0xe] = 0;
    auStack_c8[0xf] = 0;
    auStack_c8[8] = 0;
    auStack_c8[9] = 0;
    auStack_c8[10] = 0;
    auStack_c8[0xb] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    auStack_c8[6] = 0;
    auStack_c8[7] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    if (0x180 < arg3_00) {
        iVar27 = -0x16;
        goto code_r0x080111ac;
    }
    iVar14 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x181);
    if (iVar14 == 0) {
        iVar27 = -0xc;
        goto code_r0x080111ac;
    }
    iStack_d0 = iVar14;
    __check_object_size(iVar14,arg3_00,0);
    iVar11 = sym._copy_from_user(iVar14,arg2,arg3_00);
    if (iVar11 < 1) {
        *(iStack_d0 + arg3_00) = 0;
        *arg4 = *arg4 + arg3_00;
        iVar27 = strsep(&iStack_d0,0x800168e);
        if (iVar27 == 0) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = false;
            uVar21 = 0;
            uVar22 = 0;
            uVar23 = 0;
            uVar24 = 0;
            uVar25 = 0;
            uVar20 = 0;
code_r0x08011088:
            bVar6 = false;
            uVar26 = 0;
            uVar12 = 0;
code_r0x0801108c:
            bVar7 = false;
            uVar16 = 0;
            uVar17 = 0;
code_r0x08011098:
            bVar8 = false;
            uVar18 = 0;
            uVar19 = 0;
code_r0x080110a4:
            bVar9 = false;
            uVar28 = 0;
            uVar29 = 0;
code_r0x080110b0:
            bVar10 = false;
            uVar32 = 0;
            uVar33 = 0;
code_r0x080110bc:
            puVar34 = *piVar30;
            *puVar34 = uVar20;
            puVar34[1] = 0;
            *(puVar34 + 2) = uVar21;
            *(puVar34 + 4) = bVar3;
            *(puVar34 + 9) = 0;
            *(puVar34 + 0xb) = 0;
            puVar34[6] = uVar22;
            puVar34[7] = 0;
            *(puVar34 + 8) = uVar23;
            *(puVar34 + 10) = bVar4;
            *(puVar34 + 0x15) = 0;
            *(puVar34 + 0x17) = 0;
            puVar34[0xc] = uVar24;
            puVar34[0xd] = 0;
            *(puVar34 + 0xe) = uVar25;
            *(puVar34 + 0x10) = bVar5;
            *(puVar34 + 0x21) = 0;
            *(puVar34 + 0x23) = 0;
            puVar34[0x12] = uVar26;
            puVar34[0x13] = 0;
            *(puVar34 + 0x14) = uVar12;
            *(puVar34 + 0x16) = bVar6;
            *(puVar34 + 0x2f) = 0;
            *(puVar34 + 0x2d) = 0;
            puVar34[0x18] = uVar16;
            puVar34[0x19] = 0;
            *(puVar34 + 0x1a) = uVar17;
            *(puVar34 + 0x1c) = bVar7;
            *(puVar34 + 0x3b) = 0;
            *(puVar34 + 0x39) = 0;
            puVar34[0x1e] = uVar18;
            puVar34[0x1f] = 0;
            *(puVar34 + 0x20) = uVar19;
            *(puVar34 + 0x22) = bVar8;
            *(puVar34 + 0x47) = 0;
            *(puVar34 + 0x45) = 0;
            puVar34[0x24] = uVar28;
            puVar34[0x25] = 0;
            *(puVar34 + 0x26) = uVar29;
            *(puVar34 + 0x28) = bVar9;
            *(puVar34 + 0x53) = 0;
            *(puVar34 + 0x51) = 0;
            puVar34[0x2a] = uVar32;
            puVar34[0x2b] = 0;
            *(puVar34 + 0x2c) = uVar33;
            *(puVar34 + 0x2e) = bVar10;
            *(puVar34 + 0x5d) = 0;
            *(puVar34 + 0x5f) = 0;
            iVar27 = *piVar30;
            uVar13 = sym.get_pattern_play_length_us(iVar27);
            *(iVar27 + 100) = uVar13;
            if (*(*piVar30 + 100) != -0x16) {
                iVar27 = arg3;
                goto code_r0x080111a4;
            }
            uVar15 = 0x8001ea1;
        }
        else {
            iVar31 = 0;
            do {
                iVar11 = kstrtouint(iVar27,0,&uStack_d4);
                if (iVar11 < 0) {
                    iVar27 = -0x16;
                    goto code_r0x080111a4;
                }
                if (iVar31 == 0x18) {
    //WARNING: Does not return
                    pcVar2 = SoftwareBreakpoint(0x5512,0x8011390);
                    (*pcVar2)();
                }
                iVar1 = iVar31 + 1;
                auStack_c8[iVar31] = uStack_d4;
                iVar27 = strsep(&iStack_d0,0x800168e);
                iVar31 = iVar1;
            } while (iVar27 != 0);
            uVar32 = iVar1;
            if ((uVar32 + ((uVar32 & 0xff) / 3) * -3 & 0xff) == 0) {
                if (2 < uVar32) goto code_r0x08011034;
code_r0x08010fdc:
                bVar3 = false;
                uVar21 = 0;
                uVar20 = 0;
code_r0x08011068:
                bVar4 = false;
                uVar22 = 0;
                uVar23 = 0;
code_r0x08011074:
                bVar5 = false;
                uVar24 = 0;
                uVar25 = 0;
                goto code_r0x08011088;
            }
            _printk(0x800291c);
            if (uVar32 < 3) goto code_r0x08010fdc;
code_r0x08011034:
            if (((auStack_c8[0] < 0x200) && (auStack_c8[1] < 7)) && (auStack_c8[2] < 2)) {
                bVar3 = auStack_c8[2] != 0;
                uVar21 = auStack_c8[1];
                uVar20 = auStack_c8[0];
                if (uVar32 < 6) goto code_r0x08011068;
                if (((0x1ff < auStack_c8[3]) || (6 < auStack_c8[4])) || (1 < auStack_c8[5])) goto code_r0x0801136c;
                bVar4 = auStack_c8[5] != 0;
                uVar22 = auStack_c8[3];
                uVar23 = auStack_c8[4];
                if (uVar32 - 6 < 3) goto code_r0x08011074;
                if (((0x1ff < auStack_c8[6]) || (6 < auStack_c8[7])) || (1 < auStack_c8[8])) goto code_r0x0801136c;
                bVar5 = auStack_c8[8] != 0;
                uVar24 = auStack_c8[6];
                uVar25 = auStack_c8[7];
                if (uVar32 - 9 < 3) goto code_r0x08011088;
                if (((0x1ff < auStack_c8[9]) || (6 < auStack_c8[10])) || (1 < auStack_c8[0xb])) goto code_r0x0801136c;
                bVar6 = auStack_c8[0xb] != 0;
                uVar26 = auStack_c8[9];
                uVar12 = auStack_c8[10];
                if (uVar32 - 0xc < 3) goto code_r0x0801108c;
                if (((0x1ff < auStack_c8[0xc]) || (6 < auStack_c8[0xd])) || (1 < auStack_c8[0xe]))
                goto code_r0x0801136c;
                bVar7 = auStack_c8[0xe] != 0;
                uVar16 = auStack_c8[0xc];
                uVar17 = auStack_c8[0xd];
                if (uVar32 - 0xf < 3) goto code_r0x08011098;
                if (((0x1ff < auStack_c8[0xf]) || (6 < auStack_c8[0x10])) || (1 < auStack_c8[0x11]))
                goto code_r0x0801136c;
                bVar8 = auStack_c8[0x11] != 0;
                uVar18 = auStack_c8[0xf];
                uVar19 = auStack_c8[0x10];
                if (uVar32 - 0x12 < 3) goto code_r0x080110a4;
                if (((0x1ff < auStack_c8[0x12]) || (6 < auStack_c8[0x13])) || (1 < auStack_c8[0x14]))
                goto code_r0x0801136c;
                bVar9 = auStack_c8[0x14] != 0;
                uVar28 = auStack_c8[0x12];
                uVar29 = auStack_c8[0x13];
                if (uVar32 - 0x15 < 3) goto code_r0x080110b0;
                if (((0x1ff < auStack_c8[0x15]) || (6 < auStack_c8[0x16])) || (1 < auStack_c8[0x17]))
                goto code_r0x0801136c;
                bVar10 = auStack_c8[0x17] != 0;
                uVar32 = auStack_c8[0x15];
                uVar33 = auStack_c8[0x16];
                goto code_r0x080110bc;
            }
code_r0x0801136c:
            uVar15 = 0x8002744;
        }
        _printk(uVar15);
        iVar27 = -0x16;
    }
    else {
        iVar27 = -0xe;
    }
code_r0x080111a4:
    kfree(iVar14);
code_r0x080111ac:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) != iStack_68) {
        auVar35 = __stack_chk_fail();
        *extraout_x18 = sym.pattern_play_rate_dbgfs_ops_open;
        iVar27 = simple_attr_open(auVar35._0_8_,auVar35._8_8_,
                                  sym.pattern_play_rate_us_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                                  sym.pattern_play_rate_us_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n"
                                 );
        return iVar27;
    }
    return iVar27;
}


// ===== sym.pattern_play_rate_dbgfs_ops_open @ 0x08011394 (size 60) =====

void sym.pattern_play_rate_dbgfs_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.pattern_play_rate_us_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.pattern_play_rate_us_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.pattern_play_rate_us_dbgfs_read @ 0x080113d0 (size 28) =====

ulong sym.pattern_play_rate_us_dbgfs_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*arg1 + 0x60);
    return 0;
}


// ===== sym.pattern_play_rate_us_dbgfs_write @ 0x080113ec (size 120) =====

ulong sym.pattern_play_rate_us_dbgfs_write(int64_t arg1,uint32_t arg2)

{
    uint uVar1;
    ulong uVar2;
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0x4ffa < arg2) {
        arg2 = 0x4ffb;
    }
    *(*arg1 + 0x60) = arg2;
    arg1_00 = *arg1;
    uVar1 = sym.get_pattern_play_length_us(arg1_00);
    *(arg1_00 + 100) = uVar1;
    if (*(*arg1 + 100) == -0x16) {
        _printk(0x8001ea1);
        uVar2 = 0xffffffea;
    }
    else {
        uVar2 = 0;
    }
    return uVar2;
}


// ===== sym.fifo_s_dbgfs_read @ 0x08011464 (size 276) =====

int64_t sym.fifo_s_dbgfs_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(*(arg1 + 0xd8) + 8);
    uVar1 = piVar4[1] << 3 | 1;
    iVar3 = __kmalloc(uVar1,0xdc0);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        if (piVar4[1] == 0) {
            uVar5 = 0;
        }
        else {
            uVar5 = 0;
            uVar6 = 0;
            do {
                iVar2 = scnprintf(iVar3 + uVar5,uVar1 - uVar5,0x800317b,*(*piVar4 + uVar6));
                uVar5 = iVar2 + uVar5;
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(piVar4 + 1));
        }
        iVar2 = scnprintf(iVar3 + uVar5,uVar1 - uVar5,0x8001557,0x8002f07);
        iVar2 = simple_read_from_buffer(arg2,arg3,arg4,iVar3,iVar2 + uVar5);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.fifo_s_dbgfs_write @ 0x08011578 (size 840) =====

void sym.fifo_s_dbgfs_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    code *pcVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int iVar8;
    int iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar10;
    int64_t iVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    int iStack_64;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_58 = *(iVar5 + 0x5e0);
    iVar11 = *(arg1 + 0xd8);
    iStack_64 = 0;
    piVar10 = *(iVar11 + 8);
    iVar5 = __kmalloc(arg3 + 1,0xdc0);
    if (iVar5 == 0) {
        iVar5 = -0xc;
        goto code_r0x08011884;
    }
    iStack_60 = iVar5;
    if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x800,0x8011620);
        (*pcVar3)();
    }
    __check_object_size(iVar5,arg3,0);
    iVar4 = sym._copy_from_user(iVar5,arg2,arg3);
    if (iVar4 < 1) {
        iVar7 = *arg4;
        *(iVar5 + arg3) = 0;
        *arg4 = iVar7 + arg3;
        iVar7 = __kmalloc(piVar10[1],0xdc0);
        if (iVar7 == 0) {
            iVar4 = -0xc;
            goto code_r0x08011878;
        }
        uVar12 = 0;
        do {
            iVar6 = strsep(&stack0xffffffffffffffa0,0x800168e);
            if (iVar6 == 0) {
                uVar1 = *(piVar10 + 1);
                break;
            }
            iVar4 = kstrtoint(iVar6,0,&stack0xffffffffffffff9c);
            if (iVar4 < 0) goto code_r0x0801186c;
            if (0xff < iStack_64) {
                iStack_64 = 0xff;
            }
            *(iVar7 + uVar12) = iStack_64;
            uVar12 = uVar12 + 1;
            uVar1 = *(piVar10 + 1);
        } while (uVar12 < uVar1);
        memcpy(*piVar10,iVar7,uVar1);
        if (piVar10 == NULL) {
code_r0x08011858:
            *(piVar10 + 2) = 0xffffffea;
            goto code_r0x08011860;
        }
        iVar2 = piVar10[1];
        iVar4 = iVar2 + -1;
        if (-1 < iVar4) {
            iVar4 = 0;
        }
        iVar8 = iVar2 + 1;
        do {
            uVar12 = iVar8 - 2;
            iVar9 = iVar4 + 1;
            if (uVar12 < 1) break;
            iVar8 = iVar8 + -1;
            iVar9 = iVar8;
        } while (*(*piVar10 + uVar12) == '\0');
        if (0xd < *(piVar10 + 0xc)) goto code_r0x08011858;
        uVar12 = iVar9 * *(iVar11 + 0x20);
    //switch table (13 cases) at 0x8003d04
        switch(*(*(piVar10 + 0xc) * 4 + 0x8003d04) + 0x8011724) {
        case 0x8011738:
            *(piVar10 + 2) = uVar12 >> 1;
            break;
        case 0x8011748:
            *(piVar10 + 2) = uVar12 >> 2;
            break;
        case 0x8011758:
            *(piVar10 + 2) = uVar12 >> 3;
            break;
        case 0x8011768:
            uVar12 = uVar12 * 2;
        case 0x8011770:
            *(piVar10 + 2) = uVar12;
            if (uVar12 == 0xffffffea) {
code_r0x08011860:
                _printk(0x8001325);
code_r0x0801186c:
                arg3 = -0x16;
            }
            break;
        case 0x8011784:
            *(piVar10 + 2) = uVar12 * 4;
            break;
        case 0x8011794:
            *(piVar10 + 2) = uVar12 * 8;
            break;
        case 0x80117a4:
            *(piVar10 + 2) = iVar2 * 1000 >> 3;
            break;
        case 0x80117bc:
            *(piVar10 + 2) = iVar2 * 1000 >> 4;
            break;
        case 0x80117d4:
            *(piVar10 + 2) = (iVar2 * 1000) / 0x18;
            break;
        case 0x80117f8:
            *(piVar10 + 2) = iVar2 * 1000 >> 5;
            break;
        case 0x8011810:
            *(piVar10 + 2) = (iVar2 * 10000) / 0x1b9;
            break;
        case 0x8011834:
            *(piVar10 + 2) = (iVar2 * 1000) / 0x30;
            break;
        case 0x8011858:
            goto code_r0x08011858;
        }
        iVar4 = arg3;
        kfree(iVar7);
    }
    else {
        iVar4 = -0xe;
    }
code_r0x08011878:
    kfree(iVar5);
    iVar5 = iVar4;
code_r0x08011884:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_58) {
        auVar13 = __stack_chk_fail(iVar5);
        *extraout_x18 = sym.fifo_period_dbgfs_ops_open;
        simple_attr_open(auVar13._0_8_,auVar13._8_8_,
                         sym.fifo_period_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                         sym.fifo_period_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
        return;
    }
    return;
}


// ===== sym.fifo_period_dbgfs_ops_open @ 0x080118c0 (size 60) =====

void sym.fifo_period_dbgfs_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.fifo_period_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.fifo_period_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.fifo_period_dbgfs_read @ 0x080118fc (size 28) =====

ulong sym.fifo_period_dbgfs_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 8) + 0xc);
    return 0;
}


// ===== sym.fifo_period_dbgfs_write @ 0x08011918 (size 444) =====

ulong sym.fifo_period_dbgfs_write(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (0xd < arg2) {
        return 0xffffffea;
    }
    piVar3 = *(arg1 + 8);
    *(piVar3 + 0xc) = arg2;
    if (piVar3 != NULL) {
        iVar1 = piVar3[1];
        iVar2 = iVar1 + -1;
        if (-1 < iVar2) {
            iVar2 = 0;
        }
        iVar5 = iVar1 + 1;
        do {
            uVar4 = iVar5 - 2;
            iVar6 = iVar2 + 1;
            if (uVar4 < 1) break;
            iVar5 = iVar5 + -1;
            iVar6 = iVar5;
        } while (*(*piVar3 + uVar4) == '\0');
        if (arg2 < 0xe) {
            uVar4 = iVar6 * *(arg1 + 0x20);
    //switch table (13 cases) at 0x8003d3c
            switch(*(arg2 + 0x8003d3c) * 4 + 0x80119ac) {
            case 0x80119b0:
                uVar4 = uVar4 >> 1;
                break;
            case 0x80119bc:
                uVar4 = uVar4 >> 2;
                break;
            case 0x80119c8:
                uVar4 = uVar4 >> 3;
                break;
            case 0x80119d4:
                uVar4 = uVar4 * 2;
            case 0x80119dc:
                *(piVar3 + 2) = uVar4;
                if (uVar4 != 0xffffffea) {
                    return 0;
                }
                goto code_r0x08011ac4;
            case 0x80119f4:
                uVar4 = uVar4 * 4;
                break;
            case 0x8011a00:
                uVar4 = uVar4 * 8;
                break;
            case 0x8011a0c:
                uVar4 = iVar1 * 1000 >> 3;
                break;
            case 0x8011a20:
                uVar4 = iVar1 * 1000 >> 4;
                break;
            case 0x8011a34:
                uVar4 = (iVar1 * 1000) / 0x18;
                break;
            case 0x8011a54:
                uVar4 = iVar1 * 1000 >> 5;
                break;
            case 0x8011a68:
                uVar4 = (iVar1 * 10000) / 0x1b9;
                break;
            case 0x8011a88:
                uVar4 = (iVar1 * 1000) / 0x30;
                break;
            case 0x8011abc:
                goto code_r0x08011abc;
            }
            *(piVar3 + 2) = uVar4;
            return 0;
        }
    }
code_r0x08011abc:
    *(piVar3 + 2) = 0xffffffea;
code_r0x08011ac4:
    _printk(0x8001325);
    return 0xffffffea;
}


// ===== sym.brake_s_dbgfs_read @ 0x08011ad4 (size 388) =====

int64_t sym.brake_s_dbgfs_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    ulong *in_x18;
    uchar *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar4 = *(*(arg1 + 0xd8) + 0x10);
    iVar3 = kmem_cache_alloc_trace(_simple_open,0xdc0,0x41);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        uVar1 = scnprintf(iVar3,0x41,"0x%02x ",*puVar4);
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[1]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[2]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[3]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[4]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[5]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[6]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,"0x%02x ",puVar4[7]);
        uVar1 = iVar2 + uVar1;
        iVar2 = scnprintf(iVar3 + uVar1,0x41 - uVar1,0x8001557,0x8002f07);
        iVar2 = simple_read_from_buffer(arg2,arg3,arg4,iVar3,iVar2 + uVar1);
        kfree(iVar3);
        iVar3 = iVar2;
    }
    return iVar3;
}


// ===== sym.brake_s_dbgfs_write @ 0x08011c58 (size 1192) =====

uint32_t * sym.brake_s_dbgfs_write(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    code *pcVar6;
    uint uVar7;
    int iVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar15;
    int64_t unaff_x20;
    uint64_t unaff_x21;
    uint64_t uVar16;
    uint64_t *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint32_t uVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    int64_t aiStack_d0 [4];
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_90;
    uint32_t *puStack_88;
    uint64_t uStack_80;
    uint32_t uStack_74;
    int64_t iStack_70;
    int64_t iStack_68;
    
    puVar9 = arg3;
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    iVar19 = *(arg1 + 0xd8);
    uStack_74 = 0;
    puVar17 = *(iVar19 + 0x10);
    uVar15 = arg4;
    if (0x40 < puVar9) {
        puVar10 = puVar9;
        puVar9 = 0xffffffffffffffea;
        arg4 = unaff_x21;
        goto code_r0x08012040;
    }
    puVar10 = 0x41;
    iVar18 = kmem_cache_alloc_trace(_simple_open,0xdc0);
    if (iVar18 == 0) {
        puVar9 = 0xfffffffffffffff4;
        goto code_r0x08012040;
    }
    iStack_70 = iVar18;
    __check_object_size(iVar18,puVar9,0);
    puVar10 = puVar9;
    iVar8 = sym._copy_from_user(iVar18,arg2,puVar9);
    if (iVar8 < 1) {
        *(iStack_70 + puVar9) = 0;
        *arg4 = *arg4 + puVar9;
        iVar13 = strsep(&iStack_70,0x800168e);
        if (iVar13 == 0) {
            uVar12 = 0;
            uVar20 = 0;
            uVar22 = 0;
            uVar23 = 0;
            uVar21 = 0;
            uVar16 = 0;
            arg4 = 0;
            uVar14 = 0;
        }
        else {
            puVar10 = &uStack_74;
            iVar8 = kstrtouint(iVar13,0);
            if (iVar8 < 0) {
code_r0x08011ef0:
                puVar9 = 0xffffffffffffffea;
                goto code_r0x08012038;
            }
            arg4 = uStack_74;
            if (0xff < uStack_74) {
                arg4 = 0xff;
                uStack_74 = 0xff;
            }
            iVar13 = strsep(&iStack_70,0x800168e);
            if (iVar13 == 0) {
                uVar12 = 0;
                uVar20 = 0;
                uVar22 = 0;
                uVar23 = 0;
                uVar21 = 0;
                uVar16 = 0;
                uVar14 = 0;
            }
            else {
                puVar10 = &uStack_74;
                iVar8 = kstrtouint(iVar13,0);
                if (iVar8 < 0) goto code_r0x08011ef0;
                uVar16 = uStack_74;
                if (0xff < uStack_74) {
                    uVar16 = 0xff;
                    uStack_74 = 0xff;
                }
                iVar13 = strsep(&iStack_70,0x800168e);
                if (iVar13 == 0) {
                    uVar12 = 0;
                    uVar20 = 0;
                    uVar22 = 0;
                    uVar23 = 0;
                    uVar21 = 0;
                    uVar14 = 0;
                }
                else {
                    puVar10 = &uStack_74;
                    iVar8 = kstrtouint(iVar13,0);
                    if (iVar8 < 0) goto code_r0x08011ef0;
                    uStack_80 = uStack_74;
                    if (0xff < uStack_74) {
                        uStack_80 = 0xff;
                        uStack_74 = 0xff;
                    }
                    iVar13 = strsep(&iStack_70,0x800168e);
                    if (iVar13 == 0) {
                        uVar12 = 0;
                        uVar20 = 0;
                        uVar22 = 0;
                        uVar23 = 0;
                        uVar21 = 0;
                        uVar14 = uStack_80;
                    }
                    else {
                        puVar10 = &uStack_74;
                        iVar8 = kstrtouint(iVar13,0);
                        if (iVar8 < 0) goto code_r0x08011ef0;
                        uVar21 = uStack_74;
                        if (0xff < uStack_74) {
                            uVar21 = 0xff;
                            uStack_74 = 0xff;
                        }
                        iVar13 = strsep(&iStack_70,0x800168e);
                        if (iVar13 == 0) {
                            uVar12 = 0;
                            uVar20 = 0;
                            uVar22 = 0;
                            uVar23 = 0;
                            uVar14 = uStack_80;
                        }
                        else {
                            puVar10 = &uStack_74;
                            iVar8 = kstrtouint(iVar13,0);
                            if (iVar8 < 0) goto code_r0x08011ef0;
                            if (0xff < uStack_74) {
                                uStack_74 = 0xff;
                            }
                            uVar23 = uStack_74;
                            iVar13 = strsep(&iStack_70,0x800168e);
                            if (iVar13 == 0) {
                                uVar12 = 0;
                                uVar20 = 0;
                                uVar22 = 0;
                                uVar14 = uStack_80;
                            }
                            else {
                                puVar10 = &uStack_74;
                                iVar8 = kstrtouint(iVar13,0);
                                if (iVar8 < 0) goto code_r0x08011ef0;
                                if (0xff < uStack_74) {
                                    uStack_74 = 0xff;
                                }
                                uVar22 = uStack_74 & 0xff;
                                iVar13 = strsep(&iStack_70,0x800168e);
                                if (iVar13 == 0) {
                                    uVar12 = 0;
                                    uVar20 = 0;
                                    uVar14 = uStack_80;
                                }
                                else {
                                    puVar10 = &uStack_74;
                                    iVar8 = kstrtouint(iVar13,0);
                                    if (iVar8 < 0) goto code_r0x08011ef0;
                                    if (0xff < uStack_74) {
                                        uStack_74 = 0xff;
                                    }
                                    uVar20 = uStack_74 & 0xff;
                                    iVar13 = strsep(&iStack_70,0x800168e);
                                    if (iVar13 == 0) {
                                        uVar12 = 0;
                                        uVar14 = uStack_80;
                                    }
                                    else {
                                        puVar10 = &uStack_74;
                                        iVar8 = kstrtouint(iVar13,0);
                                        if (iVar8 < 0) goto code_r0x08011ef0;
                                        uVar12 = uStack_74;
                                        if (0xff < uStack_74) {
                                            uVar12 = 0xff;
                                            uStack_74 = 0xff;
                                        }
                                        uVar12 = uVar12 << 0x38;
                                        uVar14 = uStack_80;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        uVar23 = uVar23 & 0xff;
        uVar21 = uVar21 & 0xff;
        uVar14 = uVar12 | uVar20 << 0x30 | uVar22 << 0x28 | uVar23 << 0x20 | uVar21 << 0x18 | (uVar14 & 0xff) << 0x10;
        uVar16 = uVar14 | (uVar16 & 0xff) << 8;
        uVar1 = puVar17[1] & 0xfffffffe;
        uVar3 = uVar14 >> 0x10 & 0xff;
        uVar4 = uVar16 >> 8 & 0xff;
        *puVar17 = uVar16 | arg4 & 0xffU;
        cVar5 = uVar12 >> 0x38;
        if (uVar1 != 2) {
            *(puVar17 + 3) =
                 (((((cVar5 == '\0' && uVar20 == 0) && uVar22 == 0) && uVar23 == 0) && uVar21 == 0) && uVar3 == 0) &&
                 uVar4 == 0;
        }
        if ((puVar17 == NULL) || (puVar17[3] != '\0')) {
            uVar23 = 0;
        }
        else {
            uVar2 = *(iVar19 + 0x20);
            if (uVar1 == 2) {
                uVar23 = (uVar2 & 0xfffffff) << 3;
            }
            else {
                if (cVar5 == '\0') {
                    if (uVar20 == 0) {
                        if (uVar22 == 0) {
                            if (uVar23 == 0) {
                                if (uVar21 == 0) {
                                    if (uVar3 == 0) {
                                        if (uVar4 == 0) {
                                            uVar23 = (arg4 & 0xffU) != 0;
                                        }
                                        else {
                                            uVar23 = 2;
                                        }
                                    }
                                    else {
                                        uVar23 = 3;
                                    }
                                }
                                else {
                                    uVar23 = 4;
                                }
                            }
                            else {
                                uVar23 = 5;
                            }
                        }
                        else {
                            uVar23 = 6;
                        }
                    }
                    else {
                        uVar23 = 7;
                    }
                }
                else {
                    uVar23 = 8;
                }
                uVar23 = uVar23 * uVar2 >> 1;
            }
        }
        *(puVar17 + 0x14) = uVar23;
    }
    else {
        puVar9 = 0xfffffffffffffff2;
    }
code_r0x08012038:
    kfree(iVar18);
    unaff_x20 = iVar18;
code_r0x08012040:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_68) {
        return puVar9;
    }
    auVar24 = __stack_chk_fail();
    piVar11 = aiStack_d0;
    *extraout_x18 = sym.brake_mode_dbgfs_read;
    pcStack_a8 = sym.brake_mode_dbgfs_read;
    iVar19 = sp_el0;
    aiStack_d0[3] = *(iVar19 + 0x5e0);
    aiStack_d0[0] = 0;
    aiStack_d0[1] = 0;
    aiStack_d0[2] = 0;
    uVar23 = *(*(*(auVar24._0_8_ + 0xd8) + 0x10) + 8);
    puStack_b0 = &stack0xffffffffffffffa0;
    uStack_a0 = arg4;
    iStack_90 = unaff_x20;
    puStack_88 = puVar9;
    if (3 < uVar23) {
    //WARNING: Does not return
        pcVar6 = SoftwareBreakpoint(0x5512,0x80121c0);
        (*pcVar6)();
    }
    uVar7 = scnprintf(aiStack_d0,0x18,0x8003a6c,*(obj.brake_str + uVar23 * 8));
    iVar8 = simple_read_from_buffer(auVar24._8_8_,puVar10,uVar15,aiStack_d0,uVar7);
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == aiStack_d0[3]) {
        return iVar8;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_00 = sym.brake_mode_dbgfs_write;
    iVar18 = *(*(auVar24._0_8_ + 0xd8) + 0x10);
    iVar19 = __kmalloc(uVar15 + 1,0xdc0);
    if (iVar19 == 0) {
        puVar9 = 0xfffffffffffffff4;
    }
    else {
        if (uVar15 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar6 = SoftwareBreakpoint(0x800,0x8012278);
            (*pcVar6)();
        }
        __check_object_size(iVar19,uVar15,0);
        iVar8 = sym._copy_from_user(iVar19,auVar24._8_8_,uVar15);
        if (iVar8 < 1) {
            iVar13 = *piVar11;
            *(iVar19 + uVar15) = 0;
            *piVar11 = iVar13 + uVar15;
            iVar8 = strcmp(iVar19,"open-loop");
            if (iVar8 == 0) {
                *(iVar18 + 8) = 0;
            }
            else {
                iVar8 = strcmp(iVar19,"close-loop");
                if (iVar8 == 0) {
                    *(iVar18 + 8) = 1;
                }
                else {
                    iVar8 = strcmp(iVar19,"predictive");
                    if (iVar8 == 0) {
                        *(iVar18 + 8) = 2;
                    }
                    else {
                        iVar8 = strcmp(iVar19,"auto");
                        if (iVar8 == 0) {
                            *(iVar18 + 8) = 3;
                        }
                        else {
                            _printk(0x8001ec3,iVar19);
                            uVar15 = 0xffffffffffffffea;
                        }
                    }
                }
            }
        }
        else {
            uVar15 = 0xfffffffffffffff2;
        }
        kfree(iVar19);
        puVar9 = uVar15;
    }
    return puVar9;
}


// ===== sym.brake_mode_dbgfs_read @ 0x08012100 (size 196) =====

int64_t sym.brake_mode_dbgfs_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    code *pcVar2;
    uint uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t aiStack_50 [4];
    
    piVar6 = aiStack_50;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    aiStack_50[3] = *(iVar5 + 0x5e0);
    aiStack_50[0] = 0;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    uVar1 = *(*(*(arg1 + 0xd8) + 0x10) + 8);
    if (3 < uVar1) {
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5512,0x80121c0);
        (*pcVar2)();
    }
    uVar3 = scnprintf(aiStack_50,0x18,0x8003a6c,*(obj.brake_str + uVar1 * 8));
    iVar4 = simple_read_from_buffer(arg2,arg3,arg4,aiStack_50,uVar3);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_50[3]) {
        return iVar4;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = sym.brake_mode_dbgfs_write;
    iVar8 = *(*(auVar9._0_8_ + 0xd8) + 0x10);
    iVar5 = __kmalloc(arg4 + 1,0xdc0);
    if (iVar5 == 0) {
        iVar5 = -0xc;
    }
    else {
        if (arg4 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(0x800,0x8012278);
            (*pcVar2)();
        }
        __check_object_size(iVar5,arg4,0);
        iVar4 = sym._copy_from_user(iVar5,auVar9._8_8_,arg4);
        if (iVar4 < 1) {
            iVar7 = *piVar6;
            *(iVar5 + arg4) = 0;
            *piVar6 = iVar7 + arg4;
            iVar4 = strcmp(iVar5,"open-loop");
            if (iVar4 == 0) {
                *(iVar8 + 8) = 0;
            }
            else {
                iVar4 = strcmp(iVar5,"close-loop");
                if (iVar4 == 0) {
                    *(iVar8 + 8) = 1;
                }
                else {
                    iVar4 = strcmp(iVar5,"predictive");
                    if (iVar4 == 0) {
                        *(iVar8 + 8) = 2;
                    }
                    else {
                        iVar4 = strcmp(iVar5,"auto");
                        if (iVar4 == 0) {
                            *(iVar8 + 8) = 3;
                        }
                        else {
                            _printk(0x8001ec3,iVar5);
                            arg4 = 0xffffffffffffffea;
                        }
                    }
                }
            }
        }
        else {
            arg4 = 0xfffffffffffffff2;
        }
        kfree(iVar5);
        iVar5 = arg4;
    }
    return iVar5;
}


// ===== sym.brake_mode_dbgfs_write @ 0x080121c4 (size 352) =====

int64_t sym.brake_mode_dbgfs_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(*(arg1 + 0xd8) + 0x10);
    iVar3 = __kmalloc(arg3 + 1,0xdc0);
    if (iVar3 == 0) {
        iVar3 = -0xc;
    }
    else {
        if (arg3 >> 0x1f != 0) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x800,0x8012278);
            (*pcVar1)();
        }
        __check_object_size(iVar3,arg3,0);
        iVar2 = sym._copy_from_user(iVar3,arg2,arg3);
        if (iVar2 < 1) {
            iVar4 = *arg4;
            *(iVar3 + arg3) = 0;
            *arg4 = iVar4 + arg3;
            iVar2 = strcmp(iVar3,"open-loop");
            if (iVar2 == 0) {
                *(iVar5 + 8) = 0;
            }
            else {
                iVar2 = strcmp(iVar3,"close-loop");
                if (iVar2 == 0) {
                    *(iVar5 + 8) = 1;
                }
                else {
                    iVar2 = strcmp(iVar3,"predictive");
                    if (iVar2 == 0) {
                        *(iVar5 + 8) = 2;
                    }
                    else {
                        iVar2 = strcmp(iVar3,"auto");
                        if (iVar2 == 0) {
                            *(iVar5 + 8) = 3;
                        }
                        else {
                            _printk(0x8001ec3,iVar3);
                            arg3 = -0x16;
                        }
                    }
                }
            }
        }
        else {
            arg3 = -0xe;
        }
        kfree(iVar3);
        iVar3 = arg3;
    }
    return iVar3;
}


// ===== sym.brake_en_dbgfs_ops_open @ 0x08012324 (size 60) =====

void sym.brake_en_dbgfs_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.brake_en_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.brake_en_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.brake_en_dbgfs_read @ 0x08012360 (size 32) =====

ulong sym.brake_en_dbgfs_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x10) + 0x18) ^ 1;
    return 0;
}


// ===== sym.brake_en_dbgfs_write @ 0x08012380 (size 32) =====

ulong sym.brake_en_dbgfs_write(int64_t arg1,uint32_t arg2)

{
    *(*(arg1 + 0x10) + 0x18) = arg2 == 0;
    return 0;
}


// ===== sym.brake_sine_gain_dbgfs_ops_open @ 0x080123a0 (size 60) =====

void sym.brake_sine_gain_dbgfs_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.brake_sine_gain_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.brake_sine_gain_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.brake_sine_gain_dbgfs_read @ 0x080123dc (size 28) =====

ulong sym.brake_sine_gain_dbgfs_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *(*(arg1 + 0x10) + 0x10);
    return 0;
}


// ===== sym.brake_sine_gain_dbgfs_write @ 0x080123f8 (size 44) =====

ulong sym.brake_sine_gain_dbgfs_write(int64_t arg1,uint32_t arg2)

{
    if (3 < arg2) {
        return 0xffffffea;
    }
    *(*(arg1 + 0x10) + 0x10) = arg2;
    return 0;
}


// ===== sym.preload_effect_idx_dbgfs_ops_open @ 0x08012424 (size 60) =====

void sym.preload_effect_idx_dbgfs_ops_open(ulong param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    simple_attr_open(param_1,param_2,sym.preload_effect_idx_dbgfs_read.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,
                     sym.preload_effect_idx_dbgfs_write.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,"%llu\n");
    return;
}


// ===== sym.preload_effect_idx_dbgfs_read @ 0x08012460 (size 24) =====

ulong sym.preload_effect_idx_dbgfs_read(int64_t arg1,int64_t arg2)

{
    *arg2 = *(arg1 + 0x5c);
    return 0;
}


// ===== sym.preload_effect_idx_dbgfs_write @ 0x08012478 (size 240) =====

ulong sym.preload_effect_idx_dbgfs_write(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int iVar2;
    ulong uVar3;
    int iVar4;
    int64_t *piVar5;
    int iVar6;
    ulong *in_x18;
    int64_t iVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x360);
    if (iVar1 != 0) {
        iVar4 = 0;
        iVar7 = *(arg1 + 0x80);
        do {
            if (*(iVar7 + iVar4 * 0x30 + 0x18) == arg2) {
                if (iVar1 == iVar4) {
                    return 0xffffffea;
                }
                iVar6 = 0;
                goto code_r0x080124f0;
            }
            iVar4 = iVar4 + 1;
        } while (iVar1 != iVar4);
    }
    return 0xffffffea;
    while (iVar6 = iVar6 + 1, iVar2 = iVar1, iVar1 != iVar6) {
code_r0x080124f0:
        iVar2 = iVar6;
        if (*(iVar7 + iVar6 * 0x30 + 0x18) == *(arg1 + 0x5c)) break;
    }
    *(arg1 + 0x5c) = arg2;
    piVar5 = iVar7 + iVar4 * 0x30;
    *(*piVar5 + 0x68) = 1;
    *(piVar5 + 0x24) = 3;
    uVar3 = sym.haptics_set_pattern(arg1,*piVar5,3);
    if (-1 < uVar3) {
        uVar3 = 0;
        piVar5 = iVar7 + iVar2 * 0x30;
        *(piVar5 + 0x24) = 2;
        *(*piVar5 + 0x68) = 0;
    }
    return uVar3;
}


// ===== sym.haptics_suspend_config @ 0x08012568 (size 428) =====

uint32_t sym.haptics_suspend_config(int64_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1_00;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg1_00 = *(arg1 + 0x98);
    puVar1 = arg1_00 + 0x17;
    mutex_lock(puVar1);
    if ((*(arg1_00 + 0xf4) == 0) && (arg1_00[0x16] != 0)) {
        if (*(arg1_00 + 0xac) == 0) {
            _dev_printk(0x8003b96,*arg1_00,"cancelling FIFO playing\n");
            *(arg1_00 + 0xb4) = 1;
        }
        uVar3 = sym.haptics_stop_fifo_play(arg1_00);
        if (-1 < uVar3) {
code_r0x080125ec:
            mutex_unlock(puVar1);
            if ((*(arg1_00 + 0x6f) >> 1 & 1) != 0) {
                hrtimer_cancel(arg1_00 + 0x52);
                sym.haptics_boost_vreg_enable(arg1_00,0);
            }
            uVar3 = sym.haptics_enable_hpwr_vreg(arg1_00,0);
            if (-1 < uVar3) {
                auStack_3c[0] = 0;
                uVar2 = *(arg1_00 + 0x6d) + 0x46U & 0xffff;
                uVar3 = regmap_bulk_write(arg1_00[1],uVar2,&stack0xffffffffffffffc4,1);
                if (uVar3 < 0) {
                    _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",uVar2,uVar3);
                }
                else {
                    _dev_printk(0x8003b96,*arg1_00,"haptics module %s\n","disabled");
                    uVar3 = 0;
                }
            }
            goto code_r0x08012624;
        }
        _dev_err(*arg1_00,"stop FIFO playing failed, rc=%d\n");
    }
    else {
        uVar3 = sym.haptics_enable_play(arg1_00,0);
        if (-1 < uVar3) goto code_r0x080125ec;
    }
    mutex_unlock(puVar1);
code_r0x08012624:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) != iStack_38) {
        iVar4 = __stack_chk_fail();
        *extraout_x18 = 0x801270c;
        if (*(*(iVar4 + 0x98) + 0x381) == '\x01') {
            uVar3 = 0;
        }
        else {
            uVar3 = sym.haptics_suspend_config(iVar4);
            uVar3 = uVar3 & uVar3 >> 0x1f;
        }
        return uVar3;
    }
    return uVar3;
}


// ===== sym.haptics_suspend @ 0x08012714 (size 64) =====

uint32_t sym.haptics_suspend(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(*(arg1 + 0x98) + 0x381) == '\x01') {
        uVar1 = 0;
    }
    else {
        uVar1 = sym.haptics_suspend_config(arg1);
        uVar1 = uVar1 & uVar1 >> 0x1f;
    }
    return uVar1;
}


// ===== sym.haptics_resume @ 0x08012754 (size 216) =====

uint64_t sym.haptics_resume(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar4;
    ulong *puVar5;
    ulong unaff_x30;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    puVar5 = *(arg1 + 0x98);
    auStack_3c[0] = 0x80;
    uVar1 = *(puVar5 + 0x6d) + 0x46U & 0xffff;
    uVar2 = regmap_bulk_write(puVar5[1],uVar1,auStack_3c,1);
    if (uVar2 < 0) {
        uVar4 = uVar2;
        _dev_err(*puVar5,"write addr %#x failed, rc=%d\n",uVar1,uVar4);
    }
    else {
        _dev_printk(0x8003b96,*puVar5,"haptics module %s\n","enabled");
        uVar4 = 0;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar3 = __stack_chk_fail();
    *extraout_x18 = sym.haptics_freeze;
    uVar4 = sym.haptics_suspend_config(iVar3);
    if (-1 < uVar4) {
        if (0 < *(*(iVar3 + 0x98) + 0x358)) {
            devm_free_irq(iVar3);
        }
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.haptics_freeze @ 0x0801282c (size 80) =====

ulong sym.haptics_freeze(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = sym.haptics_suspend_config(arg1);
    if (-1 < uVar1) {
        if (0 < *(*(arg1 + 0x98) + 0x358)) {
            devm_free_irq(arg1);
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.haptics_restore @ 0x0801287c (size 340) =====

uchar * sym.haptics_restore(int64_t arg1)

{
    int64_t iVar1;
    code *pcVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    char *pcVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *arg1_00;
    uchar *puVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    arg1_00 = *(arg1 + 0x98);
    uVar3 = sym.haptics_hw_init(arg1_00);
    if (uVar3 < 0) {
        uVar5 = *arg1_00;
        pcVar6 = "Initialize HW failed, rc = %d\n";
code_r0x0801290c:
        puVar7 = uVar3;
        _dev_err(uVar5,pcVar6,puVar7);
    }
    else {
        if (0 < *(arg1_00 + 0x6b)) {
            uVar3 = devm_request_threaded_irq
                              (*arg1_00,*(arg1_00 + 0x6b),0,
                               sym.fifo_empty_irq_handler.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,0x2000,"fifo-empty"
                               ,arg1_00);
            if (uVar3 < 0) {
                uVar5 = *arg1_00;
                pcVar6 = "request fifo-empty IRQ failed, rc=%d\n";
                goto code_r0x0801290c;
            }
            disable_irq_nosync(*(arg1_00 + 0x6b));
            *(arg1_00 + 0x38c) = 0;
        }
        auStack_3c[0] = 0x80;
        uVar3 = *(arg1_00 + 0x6d) + 0x46U & 0xffff;
        uVar4 = regmap_bulk_write(arg1_00[1],uVar3,auStack_3c,1);
        if (uVar4 < 0) {
            puVar7 = uVar4;
            _dev_err(*arg1_00,"write addr %#x failed, rc=%d\n",uVar3,puVar7);
        }
        else {
            _dev_printk(0x8003b96,*arg1_00,"haptics module %s\n","enabled");
            puVar7 = NULL;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_38) {
        auVar8 = __stack_chk_fail();
        puVar7 = auVar8._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar7 != NULL) {
            switch(*puVar7) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar7,auVar8._8_8_,0);
                break;
            default:
                return puVar7;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x8012a28);
        (*pcVar2)();
    }
    return puVar7;
}


// ===== sym.__cfi_check_fail @ 0x080129d0 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08012a14

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
    //switch table (4 cases) at 0x8003d4a
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8012a28);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08012a44 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.haptics_probe.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08012a78 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.haptics_probe.b73609ec7b1785e0ea609f01c04c8fbb.cfi_jt);
    return;
}

