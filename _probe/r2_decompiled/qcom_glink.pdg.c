// decompiled from qcom_glink by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 1492) =====

//WARNING: Switch with 1 destination removed at 0x08007408

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x1603dc51a55e8218) {
        if (arg1 < -0x3ff87eea0daa0163) {
            if (-0x57be845bca9148f0 < arg1) {
                if (arg1 < -0x4e983d520e0f8ff8) {
                    if (arg1 != -0x57be845bca9148ef) {
                        if (arg1 != -0x550b9e52359ac614) goto code_r0x080073c8;
                        pcVar2 = sym.qcom_glink_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                        goto code_r0x080025c4;
                    }
                    pcVar2 = sym.qcom_glink_resume_no_irq.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                }
                else if (arg1 == -0x4e983d520e0f8ff8) {
                    pcVar2 = sym.qcom_glink_send.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                }
                else {
                    if (arg1 != -0x4b32cbb75708e89d) goto code_r0x080073c8;
                    pcVar2 = sym.qcom_glink_native_unregister.cfi_jt;
                }
code_r0x08002588:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x080073c8;
            }
            if (arg1 == -0x6aa5b02213584e8c) {
                pcVar2 = sym.qcom_glink_set_sigs.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            }
            else if (arg1 == -0x66d421a09845f9f8) {
                pcVar2 = sym.rpmsg_name_show.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            }
            else {
                if (arg1 != -0x61278529fef85643) goto code_r0x080073c8;
                pcVar2 = sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr;
            }
        }
        else if (arg1 < -0x2d1ef4d8549a89e5) {
            if (arg1 < -0x3987c0e26ee29729) {
                if (arg1 == -0x3ff87eea0daa0163) {
                    pcVar2 = sym.qcom_glink_rx_done_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                }
                else {
                    if (arg1 != -0x3f2fa47179abe5aa) goto code_r0x080073c8;
                    pcVar2 = sym.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                }
            }
            else {
                if (arg1 == -0x3987c0e26ee29729) {
                    pcVar2 = sym.qcom_glink_native_thread_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                    goto code_r0x08002588;
                }
                if (arg1 != -0x2eae92351440028f) goto code_r0x080073c8;
                pcVar2 = sym.qcom_glink_is_wakeup.cfi_jt;
            }
        }
        else if (arg1 < -0x23811694d33ed223) {
            if (arg1 == -0x2d1ef4d8549a89e5) {
                pcVar2 = sym.qcom_glink_remove_device.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            }
            else {
                if (arg1 != -0x263f2bdb64fdf50f) goto code_r0x080073c8;
                pcVar2 = sym.qcom_glink_rx_done.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            }
        }
        else {
            if (arg1 != -0x23811694d33ed223) {
                if (arg1 != -0x19ad56ffbc919b67) goto code_r0x080073c8;
                pcVar2 = sym.qcom_glink_announce_create.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                goto code_r0x08002588;
            }
            pcVar2 = sym.qcom_glink_get_sigs.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        }
    }
    else if (arg1 < 0x4c550309df1cf4c1) {
        if (arg1 < 0x2b3a43e29242445) {
            if (arg1 < -0x643fb58fee2925e) {
                if (arg1 == -0x1603dc51a55e8218) {
                    pcVar2 = sym.qcom_glink_native_start.cfi_jt;
                }
                else {
                    if (arg1 != -0x925ce0179be0719) goto code_r0x080073c8;
                    pcVar2 = sym.qcom_glink_mem_entry_free.cfi_jt;
                }
            }
            else if (arg1 == -0x643fb58fee2925e) {
                pcVar2 = sym.qcom_glink_ssr_notify.cfi_jt;
            }
            else {
                if (arg1 != -0x2ac316d8df914f8) goto code_r0x080073c8;
                pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
            }
        }
        else if (arg1 < 0x2ce63a3287021e91) {
            if (arg1 == 0x2b3a43e29242445) {
                pcVar2 = sym.init_module.cfi_jt;
            }
            else {
                if (arg1 != 0x2145d9bd5768a082) goto code_r0x080073c8;
                pcVar2 = sym.qcom_glink_create_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            }
        }
        else if (arg1 == 0x2ce63a3287021e91) {
            pcVar2 = sym.qcom_glink_ssr_remove.a38385d870d17b5d27b65d7b83c7b324.cfi_jt;
        }
        else {
            if (arg1 != 0x2e3034f0e0de938a) goto code_r0x080073c8;
            pcVar2 = sym.qcom_glink_native_probe.cfi_jt;
        }
    }
    else if (arg1 < 0x7125349e70bbf7bf) {
        if (arg1 < 0x641d19c7be126e92) {
            if (arg1 != 0x4c550309df1cf4c1) {
                if (arg1 != 0x5b83a3fd302a5421) goto code_r0x080073c8;
                pcVar2 = sym.qcom_glink_device_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                goto code_r0x08002588;
            }
            pcVar2 = sym.qcom_glink_early_ssr_notify.cfi_jt;
        }
        else if (arg1 == 0x641d19c7be126e92) {
            pcVar2 = sym.kthread_worker_fn.cfi_jt;
        }
        else {
            if (arg1 != 0x65023c489e5a9eb5) goto code_r0x080073c8;
            pcVar2 = sym.qcom_glink_mem_entry_init.cfi_jt;
        }
    }
    else if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == 0x7125349e70bbf7bf) {
            pcVar2 = sym.qcom_glink_sendto.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            goto code_r0x08002588;
        }
        if (arg1 != 0x7964b50148a2f84f) goto code_r0x080073c8;
        pcVar2 = sym.qcom_glink_prepare_da_for_cpu.cfi_jt;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        pcVar2 = sym.qcom_glink_ssr_notifier_call.a38385d870d17b5d27b65d7b83c7b324.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080073c8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
code_r0x080025c4:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080073c8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800741c);
    (*pcVar1)();
}


// ===== sym.qcom_glink_early_ssr_notify.cfi_jt @ 0x080025e0 (size 8) =====

void sym.qcom_glink_early_ssr_notify.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    int *extraout_x8;
    int *piVar6;
    ulong *in_x18;
    int64_t unaff_x21;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if (param_1 == 0) goto code_r0x08002810;
    piVar6 = param_1 + 0x150;
    unaff_x21 = param_1;
    while( true ) {
        Hint_Prefetch(piVar6,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        __wake_up(unaff_x21 + 0x168,3,0,0);
        iVar1 = unaff_x21 + 0x11c;
        uVar4 = _raw_spin_lock_irqsave(iVar1);
        unaff_x21 = unaff_x21 + 0x120;
        iStack_3c = 0;
        iVar5 = idr_get_next(unaff_x21,&iStack_3c);
        while (iVar5 != 0) {
            __wake_up(iVar5 + 0x1a0,3,1,0);
            __wake_up(iVar5 + 0x1b8,3,1,0);
            iStack_3c = iStack_3c + 1;
            iVar5 = idr_get_next(unaff_x21,&iStack_3c);
        }
        _raw_spin_unlock_irqrestore(iVar1,uVar4);
code_r0x08002810:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        piVar6 = extraout_x8;
    }
    return;
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x080025e8 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    char *pcVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int *extraout_x8;
    int *piVar8;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iStack_4c = 0;
    if (*(param_1 + -8) != 0) {
        ipc_log_string(*(*(param_1 + -8) + 0x188),"%s[%d:%d] %s: \n",*(param_1 + 8),*(param_1 + 0x10),
                       *(param_1 + 0x14),"qcom_glink_channel_release");
    }
    piVar8 = param_1 + 0x11c;
    *(param_1 + 0x118) = 0;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = *piVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        __wake_up(param_1 + 0x128,3,1,0);
        piVar8 = param_1 + 0x120;
        Hint_Prefetch(piVar8,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = *piVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        __wake_up(param_1 + 0x140,3,1,0);
        kthread_cancel_work_sync(param_1 + 0x50);
        uVar4 = _raw_spin_lock_irqsave(param_1 + 0x18);
        piVar7 = *(param_1 + 0x78);
        while (piVar7 != param_1 + 0x78) {
            puVar5 = piVar7 + -4;
            if (piVar7[-2] == 0) {
                *puVar5 = 0;
            }
            pcVar1 = piVar7 + -1;
            piVar7 = *piVar7;
            if (*pcVar1 == '\0') {
                kfree(*puVar5);
                kfree(puVar5);
            }
        }
        piVar7 = *(param_1 + 0x88);
        while (piVar7 != param_1 + 0x88) {
            puVar5 = piVar7 + -4;
            if (piVar7[-2] == 0) {
                *puVar5 = 0;
            }
            pcVar1 = piVar7 + -1;
            piVar7 = *piVar7;
            if (*pcVar1 == '\0') {
                kfree(*puVar5);
                kfree(puVar5);
            }
        }
        iVar6 = param_1 + 0x20;
        iStack_4c = 0;
        puVar5 = idr_get_next(iVar6,&iStack_4c);
        while (puVar5 != NULL) {
            kfree(*puVar5);
            kfree(puVar5);
            iStack_4c = iStack_4c + 1;
            puVar5 = idr_get_next(iVar6,&iStack_4c);
        }
        idr_destroy(iVar6);
        iStack_4c = 0;
        while (iVar6 = idr_get_next(param_1 + 0x38,&iStack_4c), iVar6 != 0) {
            kfree();
            iStack_4c = iStack_4c + 1;
        }
        idr_destroy(param_1 + 0x38);
        _raw_spin_unlock_irqrestore(param_1 + 0x18,uVar4);
        kfree(*(param_1 + 8));
        kfree(param_1 + -0x78);
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        piVar8 = extraout_x8;
    }
    return;
}


// ===== sym.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080025f0 (size 8) =====

void sym.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar1 = param_1 + 0x7c;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(param_1 + 0x70);
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    if (*(param_1 + 0x10) == 0) {
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
    }
    else {
        *(param_1 + 0x10) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        uStack_40 = CONCAT22(*(param_1 + 0x88),3);
        if (*(param_1 + 0x70) != 0) {
            ipc_log_string(*(*(param_1 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(param_1 + 0x80),*(param_1 + 0x88),
                           *(param_1 + 0x8c),"qcom_glink_send_close_req");
        }
        param_3 = 8;
        sym.qcom_glink_tx(iVar3,&uStack_40,8,0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_send;
    sym.__qcom_glink_send(auVar4._0_8_,auVar4._8_8_,param_3,1);
    return;
}


// ===== sym.qcom_glink_get_sigs.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080025f8 (size 8) =====

uint sym.qcom_glink_get_sigs.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1)

{
    return *(param_1 + 0x1d8);
}


// ===== sym.qcom_glink_set_sigs.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002600 (size 8) =====

int64_t * sym.qcom_glink_set_sigs.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt
                    (int64_t param_1,uint32_t param_2,uint64_t param_3)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar14;
    ulong *arg1;
    char *pcVar15;
    char *pcVar16;
    char *pcVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    ushort uStack_168;
    ushort uStack_166;
    uint uStack_164;
    uint uStack_160;
    uint uStack_15c;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    char *pcStack_140;
    int64_t iStack_130;
    char *pcStack_128;
    ulong *puStack_120;
    int64_t iStack_118;
    uint32_t uStack_110;
    uint32_t uStack_104;
    ulong *puStack_100;
    int64_t iStack_f8;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    int iStack_dc;
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
    ushort uStack_30;
    ushort uStack_2e;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_28 = *(iVar14 + 0x5e0);
    iVar14 = *(param_1 + 0x70);
    uVar3 = *(param_1 + 0x1d4) | param_2 & 0xc6;
    if ((param_3 & 2) != 0) {
        uVar3 = uVar3 & 0xfffffffd;
    }
    if ((param_3 & 4) != 0) {
        uVar3 = uVar3 & 0xfffffffb;
    }
    if ((param_3 & 0x40) != 0) {
        uVar3 = uVar3 & 0xffffffbf;
    }
    if ((param_3 & 0x80) != 0) {
        uVar3 = uVar3 & 0xffffff7f;
    }
    *(param_1 + 0x1d4) = uVar3;
    _uStack_30 = CONCAT44((uVar3 >> 1) << 0x1f | (uVar3 >> 2 & 1) << 0x1e | (uVar3 >> 6 & 1) << 0x1d |
                          uVar3 & 0xfff | (uVar3 >> 7 & 1) << 0x1c,CONCAT22(*(param_1 + 0x88),0xf));
    ipc_log_string(*(iVar14 + 0x188),"[%s]: sigs:%d\n","qcom_glink_send_signals");
    iVar11 = 8;
    uVar3 = 0;
    piVar5 = sym.qcom_glink_tx(iVar14,&uStack_30,8,0);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_28) {
        return piVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar14 = auVar21._8_8_;
    iVar6 = auVar21._0_8_;
    *extraout_x18 = sym.__qcom_glink_send;
    pcStack_88 = sym.__qcom_glink_send;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    arg1 = *(iVar6 + 0x70);
    iStack_dc = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    if (*(arg1 + 0x2c) == '\0') {
        uStack_ec = uVar3 ^ 1;
        iVar1 = iVar6 + 0x90;
        uVar19 = iVar11;
        pcVar17 = iVar6 + 0x1a0;
        iVar12 = iVar6 + 0x1b8;
        iStack_e8 = iVar6 + 0x160;
        puStack_100 = iVar6 + 0x194;
        uStack_104 = uVar3;
        iStack_f8 = iVar11;
        do {
            uVar8 = _raw_spin_lock_irqsave(iVar1);
            iStack_dc = 0;
            pcVar7 = idr_get_next(iVar6 + 0xb0,&iStack_dc);
            pcVar15 = pcVar17;
            if (pcVar7 != NULL) {
                pcVar16 = NULL;
                do {
                    pcVar15 = pcVar16;
                    if ((uVar19 <= *(pcVar7 + 0x10)) && (pcVar7[0x19] == '\0')) {
                        pcVar15 = pcVar7;
                        if ((pcVar16 != NULL) && (*(pcVar16 + 0x10) <= *(pcVar7 + 0x10))) {
                            pcVar15 = pcVar16;
                        }
                        if (*(pcVar15 + 0x10) == uVar19) break;
                    }
                    iStack_dc = iStack_dc + 1;
                    pcVar7 = idr_get_next(iVar6 + 0xb0,&iStack_dc);
                    pcVar16 = pcVar15;
                } while (pcVar7 != NULL);
                if (pcVar15 != NULL) {
                    pcVar15[0x19] = '\x01';
                    _raw_spin_unlock_irqrestore(iVar1,uVar8);
                    iStack_dc = *(pcVar15 + 8);
                    puVar13 = *(iVar6 + 0x70);
                    iVar11 = iStack_f8;
                    uVar3 = uStack_104;
                    goto code_r0x080055bc;
                }
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar8);
            bVar2 = arg1[0x2a] != 0;
            if (bVar2 || (uStack_ec & 1) != 0) {
                uVar3 = 0xffffff98;
                if (!bVar2) {
                    uVar3 = 0xfffffff0;
                }
                piVar5 = uVar3;
                goto code_r0x080056e8;
            }
            uStack_b0 = 7;
            mutex_lock(iStack_e8);
            *(iVar6 + 0x194) = 0;
            *(iVar6 + 0x198) = 0;
            uStack_b0 = CONCAT44(iStack_f8,CONCAT22(*(iVar6 + 0x88),uStack_b0));
            if (*(iVar6 + 0x70) != 0) {
                ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: size:%zd\n",*(iVar6 + 0x80),*(iVar6 + 0x88)
                               ,*(iVar6 + 0x8c),"qcom_glink_request_intent",uVar19);
            }
            iVar11 = 8;
            uVar3 = sym.qcom_glink_tx(arg1,&uStack_b0,8,0);
            if (uVar3 == 0) {
                if ((*puStack_100 == 0) && (arg1[0x2a] == 0)) {
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_d8 = 0;
                    init_wait_entry(&uStack_d8,0);
                    iVar11 = 2;
                    prepare_to_wait_event(pcVar17,&uStack_d8);
                    if (*puStack_100 != 0) {
code_r0x080058dc:
                        finish_wait(pcVar17,&uStack_d8);
                        goto code_r0x0800594c;
                    }
                    iVar20 = 0x9c4;
                    do {
                        if (iVar20 == 0 && arg1[0x2a] != 0) {
                            iVar20 = 1;
                        }
                        if (arg1[0x2a] != 0 || iVar20 == 0) goto code_r0x0800593c;
                        iVar20 = schedule_timeout(iVar20);
                        iVar11 = 2;
                        prepare_to_wait_event(pcVar17,&uStack_d8);
                    } while (*puStack_100 == 0);
                    if (iVar20 == 0) goto code_r0x080058dc;
code_r0x0800593c:
                    finish_wait(pcVar17,&uStack_d8);
                    if (iVar20 != 0) goto code_r0x0800594c;
                    iVar11 = *(iVar6 + 0x80);
                    *(iVar6 + 0x1d0) = *(iVar6 + 0x1d0) + 1;
                    _dev_err(*arg1,"%s: intent request ack timed out (%d)\n");
                    pcVar15 = pcVar17;
                    if (1 < *(iVar6 + 0x1d0)) {
                        pcVar15 = "qcom_glink_request_intent";
                        ipc_log_string(arg1[0x31],"[%s]: WARN at line %d: remoteproc:%s channel:%s unresponsive\n",
                                       "qcom_glink_request_intent",0x73a,arg1[1],*(iVar6 + 0x80));
                        iVar11 = 0x73a;
                        _printk(0x8000d46,"qcom_glink_request_intent",0x73a,arg1[1],*(iVar6 + 0x80));
                    }
                    piVar5 = 0xffffff92;
                }
                else {
code_r0x0800594c:
                    if (arg1[0x2a] == 0) {
                        if (*(iVar6 + 400) != '\0') {
                            mutex_unlock(iStack_e8);
                            goto code_r0x08005968;
                        }
                        piVar5 = 0xffffff83;
                        pcVar15 = pcVar17;
                    }
                    else {
                        if (*(iVar6 + 0x70) != 0) {
                            iVar11 = *(iVar6 + 0x80);
                            ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: ssr detected\n",iVar11,
                                           *(iVar6 + 0x88),*(iVar6 + 0x8c),"qcom_glink_request_intent");
                        }
                        piVar5 = 0xffffff98;
                        pcVar15 = pcVar17;
                    }
                }
                mutex_unlock(iStack_e8);
                goto code_r0x080056e8;
            }
            piVar5 = uVar3;
            mutex_unlock(iStack_e8);
            pcVar15 = pcVar17;
            if (uVar3 < 0) goto code_r0x080056e8;
code_r0x08005968:
            if ((*(iVar6 + 0x198) == 0) && (arg1[0x2a] == 0)) {
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_d8 = 0;
                init_wait_entry(&uStack_d8,0);
                iVar11 = 2;
                prepare_to_wait_event(iVar12,&uStack_d8);
                if (*(iVar6 + 0x198) == 0) {
                    iVar20 = 0x9c4;
                    do {
                        if (iVar20 == 0 && arg1[0x2a] != 0) {
                            iVar20 = 1;
                        }
                        if (arg1[0x2a] != 0 || iVar20 == 0) goto code_r0x08005a14;
                        iVar20 = schedule_timeout(iVar20);
                        iVar11 = 2;
                        prepare_to_wait_event(iVar12,&uStack_d8);
                    } while (*(iVar6 + 0x198) == 0);
                    if (iVar20 != 0) {
code_r0x08005a14:
                        finish_wait(iVar12,&uStack_d8);
                        if (iVar20 != 0) goto code_r0x08005a24;
                        _dev_err(*arg1,"intent request completion timed out\n");
                        piVar5 = 0xffffff92;
                        pcVar15 = pcVar17;
                        goto code_r0x080056e8;
                    }
                }
                finish_wait(iVar12,&uStack_d8);
            }
code_r0x08005a24:
            if (arg1[0x2a] != 0) {
                if (*(iVar6 + 0x70) != 0) {
                    iVar11 = *(iVar6 + 0x80);
                    ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: ssr detected\n",iVar11,*(iVar6 + 0x88),
                                   *(iVar6 + 0x8c),"__qcom_glink_send");
                }
                piVar5 = 0xffffff98;
                pcVar15 = pcVar17;
                goto code_r0x080056e8;
            }
        } while (*(iVar6 + 400) != '\0');
        piVar5 = 0xffffff83;
        pcVar15 = pcVar17;
    }
    else {
        pcVar15 = NULL;
        puVar13 = arg1;
code_r0x080055bc:
        uVar10 = iVar11;
        uVar18 = uVar10 - 0x2000;
        bVar2 = ((uVar18 != 0 && 0x1fff < uVar10) & uVar3) == 0;
        uVar3 = 0x2000;
        if (bVar2) {
            uVar3 = uVar10;
        }
        pcVar17 = uVar3;
        uVar10 = uVar18;
        if (bVar2) {
            uVar10 = 0;
        }
        uStack_a8._0_4_ = CONCAT22(*(iVar6 + 0x88),9);
        uStack_a8 = CONCAT44(iStack_dc,uStack_a8);
        uStack_a0 = CONCAT44(uVar10,uVar3);
        if (puVar13 != NULL) {
            uStack_110 = uVar10;
            ipc_log_string(puVar13[0x31],"%s[%d:%d] %s: iid:%d chunk_size:%d left_size:%d\n",*(iVar6 + 0x80),
                           *(iVar6 + 0x88),*(iVar6 + 0x8c),"__qcom_glink_send",iStack_dc,uVar3);
        }
        iVar11 = 0x10;
        uVar3 = sym.qcom_glink_tx(arg1,&uStack_a8,0x10,iVar14);
        piVar5 = uVar3;
        if ((uVar3 == 0) || (pcVar15 == NULL)) {
            pcVar7 = pcVar17;
            if (uVar10 != 0) {
                do {
                    uVar3 = uVar18;
                    if (0x1fff < uVar18) {
                        uVar3 = 0x2000;
                    }
                    pcVar17 = uVar3;
                    uVar18 = uVar18 - uVar3;
                    uStack_a8._0_4_ = CONCAT22(*(iVar6 + 0x88),0xc);
                    uStack_a8 = CONCAT44(iStack_dc,uStack_a8);
                    uStack_a0 = CONCAT44(uVar18,uVar3);
                    if (*(iVar6 + 0x70) != 0) {
                        uStack_110 = uVar18;
                        ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: iid:%d chunk_size:%d left_size:%d\n",
                                       *(iVar6 + 0x80),*(iVar6 + 0x88),*(iVar6 + 0x8c),"__qcom_glink_send",iStack_dc
                                       ,pcVar17);
                    }
                    iVar14 = iVar14 + pcVar7;
                    iVar11 = 0x10;
                    uVar3 = sym.qcom_glink_tx(arg1,&uStack_a8,0x10,iVar14);
                    piVar5 = uVar3;
                    if ((uVar3 != 0) && (pcVar15 != NULL)) goto code_r0x080056e4;
                    pcVar7 = pcVar17;
                } while (0 < uVar18);
            }
        }
        else {
code_r0x080056e4:
            pcVar15[0x19] = '\0';
        }
    }
code_r0x080056e8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return piVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar20 = auVar21._8_8_;
    *extraout_x18_00 = 0x8005b84;
    uStack_148 = 0x8005b84;
    iVar12 = sp_el0;
    iVar1 = iVar20 + 0x90;
    iStack_158 = *(iVar12 + 0x5e0);
    iVar12 = iVar11;
    ppuStack_150 = &puStack_90;
    pcStack_140 = pcVar17;
    iStack_130 = iVar14;
    pcStack_128 = pcVar15;
    puStack_120 = arg1;
    iStack_118 = iVar6;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar9 = iVar12;
    if (*(iVar11 + 0x1a) == '\0') {
        *(iVar11 + 0x1a) = 1;
        _raw_spin_unlock_irqrestore(iVar1,uVar8);
        uStack_15c = *(iVar11 + 8);
        uStack_168 = 5;
        uStack_166 = *(iVar20 + 0x88);
        uStack_160 = *(iVar11 + 0x10);
        uStack_164 = 1;
        if (*(iVar20 + 0x70) != 0) {
            ipc_log_string(*(*(iVar20 + 0x70) + 0x188),"%s[%d:%d] %s: count:%d size:%zd liid:%d\n",*(iVar20 + 0x80),
                           *(iVar20 + 0x88),*(iVar20 + 0x8c),"qcom_glink_advertise_intent",1,*(iVar11 + 0x10),
                           uStack_15c);
        }
        uVar9 = 0;
        piVar5 = sym.qcom_glink_tx(auVar21._0_8_,&uStack_168,0x10,0);
    }
    else {
        piVar5 = _raw_spin_unlock_irqrestore(iVar1,uVar8);
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_158) {
        return piVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar11 = auVar21._8_8_;
    *extraout_x18_01 = sym.qcom_glink_alloc_intent;
    iVar14 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar14 = 0x30;
    }
    piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x30);
    if (piVar5 == NULL) {
        return NULL;
    }
    if (iVar11 != 0) {
        iVar14 = __kmalloc(iVar11,0xdc0);
        *piVar5 = iVar14;
        if (iVar14 == 0) goto code_r0x08005d9c;
    }
    iVar14 = auVar21._0_8_ + 0x90;
    uVar8 = _raw_spin_lock_irqsave(iVar14);
    iVar4 = idr_alloc_cyclic(auVar21._0_8_ + 0x98,piVar5,1,0xffffffff,0xa20);
    _raw_spin_unlock_irqrestore(iVar14,uVar8);
    if (-1 < iVar4) {
        *(piVar5 + 1) = iVar4;
        piVar5[2] = iVar11;
        *(piVar5 + 3) = uVar9 & 1;
        return piVar5;
    }
    kfree(*piVar5);
code_r0x08005d9c:
    kfree(piVar5);
    return NULL;
}


// ===== sym.init_module.cfi_jt @ 0x08002608 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.qcom_glink_ssr_driver,obj.__this_module);
    return;
}


// ===== sym.qcom_glink_ssr_notifier_call.a38385d870d17b5d27b65d7b83c7b324.cfi_jt @ 0x08002610 (size 8) =====

uchar (*) [16]
sym.qcom_glink_ssr_notifier_call.a38385d870d17b5d27b65d7b83c7b324.cfi_jt
          (int64_t param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint uVar5;
    int iVar6;
    uchar (*pauVar7) [16];
    uint64_t uVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    *(param_1 + 0x20) = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uVar1 = *(param_1 + 0x18) + 1;
    *(param_1 + 0x18) = uVar1;
    uStack_60 = uVar1;
    uVar5 = strlen(param_3);
    uStack_60 = CONCAT44(uVar5,uStack_60);
    strlcpy(&uStack_58,param_3,0x20);
    uVar9 = 0x30;
    iVar6 = rpmsg_send(*(param_1 + -8),&uStack_68);
    if (iVar6 < 0) {
        _dev_err(*(param_1 + -0x10),"failed to send cleanup message\n");
    }
    iVar6 = wait_for_completion_timeout(param_1 + 0x20,0xfa);
    if (iVar6 == 0) {
        _dev_err(*(param_1 + -0x10),"timeout waiting for cleanup done message\n");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return NULL;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_mem_entry_init;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    pauVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x38);
    if (pauVar7 != NULL) {
        *pauVar7[2] = param_5;
        piVar2 = pauVar7[2] + 8;
        *pauVar7 = auVar10;
        *pauVar7[1] = uVar9;
        *(pauVar7[1] + 8) = param_4;
        *(pauVar7[2] + 8) = piVar2;
        *pauVar7[3] = piVar2;
        uVar9 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
        piVar4 = *0x8000690;
        uVar8 = __list_add_valid(piVar2,*0x8000690,obj.qcom_glink_mem_entries);
        if ((uVar8 & 1) != 0) {
            *0x8000690 = piVar2;
            *(pauVar7[2] + 8) = obj.qcom_glink_mem_entries;
            *pauVar7[3] = piVar4;
            *piVar4 = piVar2;
        }
        _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar9);
    }
    return pauVar7;
}


// ===== sym.qcom_glink_native_probe.cfi_jt @ 0x08002618 (size 8) =====

int64_t * sym.qcom_glink_native_probe.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,uint8_t param_5)

{
    int iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = devm_kmalloc(param_1,0x198,0xdc0);
    if (piVar2 == NULL) {
        piVar2 = 0xfffffffffffffff4;
    }
    else {
        *piVar2 = param_1;
        *(piVar2 + 0x2c) = param_5 & 1;
        *(param_1 + 0x328) = obj.qcom_glink_groups;
        piVar2[10] = param_3;
        piVar2[0xb] = param_4;
        piVar2[0x2b] = param_2;
        *(piVar2 + 0x23) = 0;
        *(piVar2 + 0x20) = 0;
        piVar2[0x21] = piVar2 + 0x21;
        piVar2[0x22] = piVar2 + 0x21;
        piVar2[0x1a] = 0xfffffffe0;
        piVar2[0x1b] = piVar2 + 0x1b;
        piVar2[0x1c] = piVar2 + 0x1b;
        piVar2[0x1d] = sym.qcom_glink_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        __init_waitqueue_head(piVar2 + 0x2d,"&glink->tx_avail_notify",obj.qcom_glink_native_probe.__key);
        piVar2[0x25] = 0;
        piVar2[0x26] = 0;
        piVar2[0x29] = 0;
        *(piVar2 + 0x11c) = 0;
        *(piVar2 + 0x124) = 0x10000004;
        piVar2[0x27] = 0x1000000400000000;
        piVar2[0x28] = 0;
        *(piVar2 + 0x2a) = 0;
        *(*piVar2 + 0x328) = obj.qcom_glink_groups;
        iVar1 = device_add_groups(param_1,obj.qcom_glink_groups);
        if (iVar1 != 0) {
            _dev_err(param_1,"failed to add groups\n");
        }
        iVar1 = of_property_read_string(*(param_1 + 0x2f0),"label",piVar2 + 1);
        if (iVar1 < 0) {
            piVar2[1] = **(param_1 + 0x2f0);
        }
        piVar2[2] = param_1;
        *(piVar2 + 5) = 1;
        uVar3 = mbox_request_channel(piVar2 + 2,0);
        piVar2[9] = uVar3;
        if (uVar3 < 0xfffffffffffff001) {
            __kthread_init_worker(piVar2 + 0x12,"(&glink->kworker)->lock",obj.qcom_glink_native_probe.__key);
            uVar3 = kthread_create_on_node
                              (sym.kthread_worker_fn.cfi_jt,piVar2 + 0x12,0xffffffff,"glink_%s",piVar2[1]);
            if (uVar3 < 0xfffffffffffff001) {
                wake_up_process(uVar3);
                piVar2[0x19] = uVar3;
                snprintf(piVar2 + 100,0x20,"glink-native-%s",piVar2[1]);
                iVar4 = ipc_log_context_create(2,piVar2[1],0);
                piVar2[0x31] = iVar4;
            }
            else {
                piVar2[0x19] = uVar3;
                _dev_err(param_1,"failed to spawn intent kthread %ld\n",uVar3);
                piVar2 = piVar2[0x19];
            }
        }
        else if (uVar3 == 0xfffffffffffffdfb) {
            piVar2 = 0xfffffffffffffdfb;
        }
        else {
            _dev_err(param_1,"failed to acquire IPC channel\n");
            piVar2 = piVar2[9];
        }
    }
    return piVar2;
}


// ===== sym.qcom_glink_device_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002620 (size 8) =====

void sym.qcom_glink_device_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1)

{
    int *arg1;
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x3c8) + 0x78;
    Hint_Prefetch(arg1,2,0,1);
    do {
        iVar1 = *arg1;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1,0x10);
        if (bVar3) {
            *arg1 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        sym.qcom_glink_channel_release(arg1);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(arg1,3);
    }
    kfree(param_1);
    return;
}


// ===== sym.qcom_glink_rpdev_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002628 (size 8) =====

void sym.qcom_glink_rpdev_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.qcom_glink_prepare_da_for_cpu.cfi_jt @ 0x08002630 (size 8) =====

int64_t sym.qcom_glink_prepare_da_for_cpu.cfi_jt(ulong param_1,int64_t param_2)

{
    uint32_t uVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
    pcVar3 = _obj.qcom_glink_mem_entries;
    do {
        if (pcVar3 == obj.qcom_glink_mem_entries) {
            iVar4 = 0;
code_r0x080078bc:
            _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar2);
            return iVar4;
        }
        if (((*(pcVar3 + -0x20) != 0) && (uVar1 = param_1 - *(pcVar3 + -8), -1 < uVar1)) &&
           (param_2 + uVar1 <= *(pcVar3 + -0x10))) {
            iVar4 = *(pcVar3 + -0x20) + uVar1;
            dma_sync_single_for_cpu(*(pcVar3 + -0x28),param_1,param_2,2);
            goto code_r0x080078bc;
        }
        pcVar3 = *pcVar3;
    } while( true );
}


// ===== sym.qcom_glink_native_thread_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002638 (size 8) =====

ulong sym.qcom_glink_native_thread_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_glink_native_rx(param_2,0);
    return 1;
}


// ===== sym.qcom_glink_native_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002640 (size 8) =====

uint sym.qcom_glink_native_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(ulong param_1,int64_t param_2)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qcom_glink_native_rx(param_2,10);
    uVar2 = 1;
    if (iVar1 != 0) {
        uVar2 = 2;
    }
    return uVar2;
}


// ===== sym.qcom_glink_native_unregister.cfi_jt @ 0x08002648 (size 8) =====

void sym.qcom_glink_native_unregister.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister(*param_1);
    return;
}


// ===== sym.qcom_glink_native_remove.cfi_jt @ 0x08002650 (size 8) =====

void sym.qcom_glink_native_remove.cfi_jt(ulong *param_1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int *piVar6;
    ulong *in_x18;
    code *pcVar7;
    ulong *puVar8;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    sym.qcom_glink_early_ssr_notify(param_1);
    disable_irq(*(param_1 + 0xc));
    cancel_work_sync(param_1 + 0x1a);
    piVar4 = param_1[0x21];
    while (piVar4 != param_1 + 0x21) {
        piVar4 = *piVar4;
        kfree();
    }
    iVar3 = device_for_each_child(*param_1,0,sym.qcom_glink_remove_device.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt);
    if (iVar3 != 0) {
        _dev_warn(*param_1,"Can\'t remove GLINK devices: %d\n",iVar3);
    }
    pcVar7 = param_1 + 0x24;
    iStack_3c = 0;
    iVar5 = idr_get_next(pcVar7,&iStack_3c);
    if (iVar5 == 0) goto code_r0x080033ec;
    puVar8 = 0x1;
    do {
        piVar6 = iVar5 + 0x78;
        while( true ) {
            Hint_Prefetch(piVar6,2,0,1);
            do {
                iVar3 = *piVar6;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar2) {
                    *piVar6 = iVar3 - puVar8;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                sym.qcom_glink_channel_release(piVar6);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(piVar6,3);
            }
            idr_remove(pcVar7,iStack_3c);
            iStack_3c = iStack_3c + 1;
            iVar5 = idr_get_next(pcVar7,&iStack_3c);
            if (iVar5 != 0) break;
code_r0x080033ec:
            puVar8 = param_1 + 0x27;
            iStack_3c = 0;
            iVar5 = idr_get_next(puVar8,&iStack_3c);
            while (iVar5 != 0) {
                piVar6 = iVar5 + 0x78;
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    iVar3 = *piVar6;
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar2) {
                        *piVar6 = iVar3 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                if (iVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.qcom_glink_channel_release(piVar6);
                }
                else if (iVar3 < 1) {
                    refcount_warn_saturate(piVar6,3);
                }
                idr_remove(puVar8,iStack_3c);
                iStack_3c = iStack_3c + 1;
                iVar5 = idr_get_next(puVar8,&iStack_3c);
            }
            iStack_3c = 0;
            iVar5 = idr_get_next(puVar8,&iStack_3c);
            while (iVar5 != 0) {
                piVar6 = iVar5 + 0x78;
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    iVar3 = *piVar6;
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar2) {
                        *piVar6 = iVar3 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                if (iVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.qcom_glink_channel_release(piVar6);
                }
                else if (iVar3 < 1) {
                    refcount_warn_saturate(piVar6,3);
                }
                iStack_3c = iStack_3c + 1;
                iVar5 = idr_get_next(puVar8,&iStack_3c);
            }
            idr_destroy(pcVar7);
            idr_destroy(puVar8);
            kthread_flush_worker(param_1 + 0x12);
            kthread_stop(param_1[0x19]);
            pcVar7 = *(param_1[0xb] + 0x28);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x9fbc554045878591,pcVar7,0x80007a0);
                (*pcVar7)(param_1[0xb]);
            }
            pcVar7 = *(param_1[10] + 0x28);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x9fbc554045878591,pcVar7,0x80007c0);
                (*pcVar7)(param_1[10]);
            }
            mbox_free_channel(param_1[9]);
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_38) {
                return;
            }
            piVar6 = __stack_chk_fail();
        }
    } while( true );
}


// ===== sym.qcom_glink_native_start.cfi_jt @ 0x08002658 (size 8) =====

uint64_t sym.qcom_glink_native_start.cfi_jt(int64_t *param_1)

{
    ulong uVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    char *pcVar7;
    int64_t arg1;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint64_t uVar9;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar8 = *param_1;
    *(param_1 + 0x84) = 0;
    *(param_1 + 0x11) = 0;
    uVar2 = of_irq_get(*(iVar8 + 0x2f0),0);
    uVar3 = devm_request_threaded_irq
                      (iVar8,uVar2,sym.qcom_glink_native_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,
                       sym.qcom_glink_native_thread_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,0x6000,param_1 + 100
                       ,param_1);
    if (uVar3 == 0) {
        *(param_1 + 0xc) = uVar2;
        uVar3 = of_property_count_elems_of_size(*(iVar8 + 0x2f0),"cpu-affinity",4);
        if (0 < uVar3) {
            uVar9 = uVar3;
            iVar5 = __kmalloc(uVar9 << 2,0xcc0);
            if (iVar5 == 0) {
                uVar9 = 0xfffffff4;
                goto code_r0x08003120;
            }
            iVar4 = of_property_read_variable_u32_array(*(iVar8 + 0x2f0),"cpu-affinity",iVar5,uVar9,0);
            if (-1 < iVar4) {
                sym.qcom_glink_set_affinity(param_1,iVar5,uVar9);
            }
            kfree(iVar5);
        }
        uStack_40 = CONCAT44(param_1[0x2b],0x10000);
        ipc_log_string(param_1[0x31],"[%s]: vers:%d features:%d\n","qcom_glink_send_version",1);
        uVar3 = sym.qcom_glink_tx(param_1,&uStack_40,8,0);
        if (uVar3 == 0) {
            iVar8 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x3e0);
            if (iVar8 != 0) {
                uVar9 = sym.qcom_glink_alloc_channel(param_1,0x8001170);
                if (uVar9 < 0xfffffffffffff001) {
                    *(uVar9 + 0x68) = iVar8;
                    iVar5 = *param_1;
                    *(iVar8 + 0x3c8) = uVar9;
                    *(iVar8 + 0x3d8) = obj.glink_device_ops;
                    *(iVar8 + 0x60) = iVar5;
                    *(iVar8 + 0x397) = 0x6c7274;
                    uVar1 = str.rpmsg_ctrl._0_8_;
                    *(iVar8 + 0x3b8) = "rpmsg_ctrl";
                    *(iVar8 + 0x330) = sym.qcom_glink_device_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                    *(iVar8 + 0x390) = uVar1;
                    uVar6 = rpmsg_register_device(iVar8);
                    uVar9 = uVar6 & 0xffffffff;
                    iVar4 = uVar6;
                }
                else {
                    kfree(iVar8);
                    iVar4 = uVar9;
                }
                if (iVar4 == 0) goto code_r0x08003120;
            }
            _dev_err(*param_1,"failed to register chrdev\n");
            uVar9 = 0;
            goto code_r0x08003120;
        }
        iVar8 = *param_1;
        pcVar7 = "failed to send version: %d\n";
    }
    else {
        pcVar7 = "failed to request IRQ with %d\n";
    }
    uVar9 = uVar3;
    _dev_err(iVar8,pcVar7,uVar9);
code_r0x08003120:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return uVar9 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_native_intr;
    iVar4 = sym.qcom_glink_native_rx(arg1,10);
    uVar3 = 1;
    if (iVar4 != 0) {
        uVar3 = 2;
    }
    return uVar3;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08002660 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.qcom_glink_ssr_driver);
    return;
}


// ===== sym.qcom_glink_announce_create.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002668 (size 8) =====

int * sym.qcom_glink_announce_create.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t arg1;
    int *arg2;
    ulong extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t arg1_00;
    int64_t arg2_00;
    uint32_t *unaff_x22;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t *puStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int iStack_6c;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x3c8);
    arg2_00 = *(param_1 + 0x2f0);
    arg1_00 = *(iVar8 + 0x70);
    uStack_68 = *0x8001718;
    uStack_60 = *0x8001720;
    if (arg1_00 != 0) {
        ipc_log_string(*(arg1_00 + 0x188),"%s[%d:%d] %s: Entered\n",*(iVar8 + 0x80),*(iVar8 + 0x88),*(iVar8 + 0x8c)
                       ,"qcom_glink_announce_create");
    }
    if ((*(arg1_00 + 0x160) != '\0') || (uVar5 = completion_done(iVar8 + 0x120), (uVar5 & 1) == 0))
    goto code_r0x08004ca0;
    unaff_x22 = iVar8 + 0x90;
    *(iVar8 + 0x191) = 1;
    uVar6 = _raw_spin_lock_irqsave(unaff_x22);
    iStack_6c = 0;
    iVar7 = idr_get_next(iVar8 + 0x98,&iStack_6c);
    while (iVar7 != 0) {
        if ((*(iVar7 + 0x18) == '\0') && (*(iVar7 + 0x1a) == '\0')) {
            _raw_spin_unlock_irqrestore(unaff_x22,uVar6);
            sym.qcom_glink_advertise_intent(arg1_00,iVar8,iVar7);
            uVar6 = _raw_spin_lock_irqsave(unaff_x22);
        }
        iStack_6c = iStack_6c + 1;
        iVar7 = idr_get_next(iVar8 + 0x98,&iStack_6c);
    }
    _raw_spin_unlock_irqrestore(unaff_x22,uVar6);
    iVar7 = of_find_property(arg2_00,"qcom,intents",0);
    if (iVar7 == 0) {
        unaff_x22 = &uStack_68;
        iVar4 = 2;
code_r0x08004cfc:
        do {
            uVar9 = unaff_x22[1];
            iVar4 = iVar4 + -1;
            if (uVar9 != 0) {
                uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
                uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                uVar1 = (*unaff_x22 & 0xff00ff00) >> 8 | (*unaff_x22 & 0xff00ff) << 8;
                arg2_00 = uVar1 >> 0x10 | uVar1 << 0x10;
                do {
                    iVar7 = sym.qcom_glink_alloc_intent(iVar8,arg2_00,1);
                    if (iVar7 == 0) break;
                    uVar9 = uVar9 - 1;
                    sym.qcom_glink_advertise_intent(arg1_00,iVar8,iVar7);
                } while (uVar9 != 0);
            }
            unaff_x22 = unaff_x22 + 2;
        } while (iVar4 != 0);
    }
    else if (7 < *(iVar7 + 8)) {
        unaff_x22 = *(iVar7 + 0x10);
        iVar4 = *(iVar7 + 8) >> 3;
        goto code_r0x08004cfc;
    }
    if (*(iVar8 + 0x70) != 0) {
        ipc_log_string(*(*(iVar8 + 0x70) + 0x188),"%s[%d:%d] %s: Exit\n",*(iVar8 + 0x80),*(iVar8 + 0x88),
                       *(iVar8 + 0x8c),"qcom_glink_announce_create");
    }
code_r0x08004ca0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return NULL;
    }
    auVar10 = __stack_chk_fail();
    arg1 = auVar10._0_8_;
    *extraout_x18 = sym.qcom_glink_create_local;
    pcStack_98 = sym.qcom_glink_create_local;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffb0;
    puStack_90 = unaff_x22;
    iStack_88 = arg2_00;
    iStack_80 = arg1_00;
    iStack_78 = iVar8;
    arg2 = sym.qcom_glink_alloc_channel(arg1,auVar10._8_8_);
    if (0xfffffffffffff000 < arg2) goto code_r0x08004f64;
    if (*(arg2 + 0x1c) != 0) {
        ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                       "qcom_glink_create_local");
    }
    iVar4 = sym.qcom_glink_send_open_req(arg1,arg2);
    if (iVar4 == 0) {
        iVar4 = wait_for_completion_timeout(arg2 + 0x48,0x4e2);
        if ((iVar4 != 0) && (iVar4 = wait_for_completion_timeout(arg2 + 0x50,0x4e2), iVar4 != 0)) {
            uStack_b0 = CONCAT22(arg2[0x23],4);
            if (*(arg2 + 0x1c) != 0) {
                ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                               "qcom_glink_send_open_ack");
            }
            sym.qcom_glink_tx(arg1,&uStack_b0,8,0);
            goto code_r0x08004f64;
        }
        if (*(arg2 + 0x1c) != 0) {
            ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: err_timeout\n",*(arg2 + 0x20),arg2[0x22],
                           arg2[0x23],"qcom_glink_create_local");
        }
        uVar6 = _raw_spin_lock_irqsave(arg1 + 0x11c);
        idr_remove(arg1 + 0x120,arg2[0x22]);
        _raw_spin_unlock_irqrestore(arg1 + 0x11c,uVar6);
        iVar8 = *(arg2 + 0x1c);
    }
    else {
        iVar8 = *(arg2 + 0x1c);
    }
    if (iVar8 != 0) {
        ipc_log_string(*(iVar8 + 0x188),"%s[%d:%d] %s: release_channel\n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                       "qcom_glink_create_local");
    }
    arg2 = arg2 + 0x1e;
    uVar6 = 1;
    while( true ) {
        Hint_Prefetch(arg2,2,0,1);
        do {
            iVar4 = *arg2;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar3) {
                *arg2 = iVar4 - uVar6;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(arg2);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(arg2,3);
        }
        Hint_Prefetch(arg2,2,0,1);
        do {
            iVar4 = *arg2;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar3) {
                *arg2 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(arg2);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(arg2,3);
        }
        arg2 = 0xffffffffffffff92;
code_r0x08004f64:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_a8) break;
        __stack_chk_fail();
        uVar6 = extraout_x9;
    }
    return arg2;
}


// ===== sym.qcom_glink_ssr_probe.a38385d870d17b5d27b65d7b83c7b324.cfi_jt @ 0x08002670 (size 8) =====

ulong sym.qcom_glink_ssr_probe.a38385d870d17b5d27b65d7b83c7b324.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = devm_kmalloc(param_1,0x50,0xdc0);
    if (piVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(piVar1 + 6) = 0;
        __init_swait_queue_head(piVar1 + 7,"&x->wait",obj.qcom_glink_native_probe.__key);
        iVar3 = *(param_1 + 0x3c8);
        *(param_1 + 0x98) = piVar1;
        *piVar1 = param_1;
        piVar1[1] = iVar3;
        piVar1[2] = sym.qcom_glink_ssr_notifier_call.a38385d870d17b5d27b65d7b83c7b324.cfi_jt;
        uVar2 = blocking_notifier_chain_register(obj.ssr_notifiers);
    }
    return uVar2;
}


// ===== sym.qcom_glink_ssr_remove.a38385d870d17b5d27b65d7b83c7b324.cfi_jt @ 0x08002678 (size 8) =====

void sym.qcom_glink_ssr_remove.a38385d870d17b5d27b65d7b83c7b324.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_unregister(obj.ssr_notifiers,*(param_1 + 0x98) + 0x10);
    return;
}


// ===== sym.qcom_glink_sendto.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002680 (size 8) =====

void sym.qcom_glink_sendto.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(param_1,param_2,param_3,1);
    return;
}


// ===== sym.qcom_glink_trysendto.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002688 (size 8) =====

void sym.qcom_glink_trysendto.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(param_1,param_2,param_3,0);
    return;
}


// ===== sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr @ 0x08002690 (size 8) =====

ulong sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr(int64_t param_1,int *param_2,uint32_t param_3)

{
    ulong uVar1;
    char *pcVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(param_1 + 0x98);
    if (param_3 < 0xc) {
        uVar1 = *puVar3;
        pcVar2 = "message too short\n";
code_r0x08007580:
        _dev_err(uVar1,pcVar2);
        uVar1 = 0xffffffea;
    }
    else {
        if (*param_2 != 0) {
            return 0xffffffea;
        }
        if (param_2[1] == 1) {
            if (param_2[2] != *(puVar3 + 5)) {
                uVar1 = *puVar3;
                pcVar2 = "invalid sequence number of response\n";
                goto code_r0x08007580;
            }
            complete(puVar3 + 6);
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qcom_glink_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002698 (size 8) =====

uint64_t sym.qcom_glink_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    code *pcVar4;
    uint uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    char *pcVar12;
    int64_t arg1;
    uint uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t iVar15;
    ulong unaff_x21;
    uint64_t uVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_88;
    int64_t iStack_80;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar11 = param_1 + 0x30;
    iStack_68 = *(iVar14 + 0x5e0);
    puVar1 = param_1 + 0x38;
    uVar8 = _raw_spin_lock_irqsave(iVar11);
    iVar14 = param_1;
    if (*puVar1 != puVar1) {
        unaff_x20 = param_1 + -0xd0;
        iStack_80 = param_1 + 0x4c;
        iStack_88 = param_1 + 0x68;
        unaff_x21 = 0xdead000000000100;
        do {
            piVar17 = *puVar1;
            uVar9 = __list_del_entry_valid(piVar17);
            if ((uVar9 & 1) != 0) {
                iVar14 = *piVar17;
                piVar2 = piVar17[1];
                *(iVar14 + 8) = piVar2;
                *piVar2 = iVar14;
            }
            *piVar17 = -0x2152ffffffffff00;
            piVar17[1] = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore(iVar11,uVar8);
            iVar14 = iStack_80;
            if (0xb < *(piVar17 + 2)) {
code_r0x08002b40:
                __warn_printk("Unknown defer object %d\n");
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8002b50);
                (*pcVar4)();
            }
            uVar3 = *(piVar17 + 0x12);
            uVar16 = uVar3;
            uVar9 = *(piVar17 + 0x14);
            switch(*(piVar17 + 2)) {
            case 0:
                ipc_log_string(*(param_1 + 0xb8),"[%s]: vers:%d features:%d\n","qcom_glink_receive_version",uVar16,
                               uVar9);
                if (uVar3 != 0) {
                    if (uVar3 == 1) {
                        uVar9 = *(param_1 + 0x88) & uVar9;
                        *(param_1 + 0x88) = uVar9;
                    }
                    else {
                        uVar9 = *(param_1 + 0x88);
                    }
                    uVar5 = uVar9;
                    uVar8 = *(param_1 + 0xb8);
                    uVar13 = 0x10001;
                    pcVar12 = "qcom_glink_send_version_ack";
code_r0x08002e50:
                    uStack_70 = CONCAT44(uVar5,uVar13);
                    ipc_log_string(uVar8,"[%s]: vers:%d features:%d\n",pcVar12,1);
                    sym.qcom_glink_tx(unaff_x20,&uStack_70,8,0);
                }
                break;
            case 1:
                ipc_log_string(*(param_1 + 0xb8),"[%s]: vers:%d features:%d\n","qcom_glink_receive_version_ack",
                               uVar16,uVar9);
                if (uVar3 != 0) {
                    if (uVar3 == 1) {
                        if (*(param_1 + 0x88) == uVar9) break;
                        uVar9 = *(param_1 + 0x88) & uVar9;
                        *(param_1 + 0x88) = uVar9;
                    }
                    else {
                        uVar9 = *(param_1 + 0x88);
                    }
                    uVar5 = uVar9;
                    uVar13 = 0x10000;
                    uVar8 = *(param_1 + 0xb8);
                    pcVar12 = "qcom_glink_send_version";
                    goto code_r0x08002e50;
                }
                break;
            case 2:
                sym.qcom_glink_rx_open(unaff_x20,uVar16,piVar17 + 3);
                break;
            case 3:
                sym.qcom_glink_rx_close(unaff_x20,uVar16);
                break;
            default:
                goto code_r0x08002b40;
            case 7:
                uVar8 = _raw_spin_lock_irqsave(iStack_80);
                iVar15 = idr_find(iStack_88,uVar16);
                _raw_spin_unlock_irqrestore(iVar14,uVar8);
                if (iVar15 == 0) {
                    _printk(0x80012be,"qcom_glink_handle_intent_req",uVar16);
                }
                else {
                    iVar14 = iVar15 + 0x90;
                    uVar8 = _raw_spin_lock_irqsave(iVar14);
                    iStack_74 = 0;
                    while (iVar10 = idr_get_next(iVar15 + 0x98,&iStack_74), iVar10 != 0) {
                        if ((uVar9 <= *(iVar10 + 0x10)) && (*(iVar10 + 0x18) != '\0')) {
                            _raw_spin_unlock_irqrestore(iVar14,uVar8);
                            uStack_70._0_4_ = CONCAT22(*(iVar15 + 0x88),8);
                            uStack_70 = CONCAT44(1,uStack_70);
                            if (*(iVar15 + 0x70) != 0) {
                                ipc_log_string(*(*(iVar15 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar15 + 0x80),
                                               *(iVar15 + 0x88),*(iVar15 + 0x8c),"qcom_glink_send_intent_req_ack");
                            }
                            sym.qcom_glink_tx(unaff_x20,&uStack_70,8,0);
                            goto code_r0x08002b50;
                        }
                        iStack_74 = iStack_74 + 1;
                    }
                    _raw_spin_unlock_irqrestore(iVar14,uVar8);
                    iVar14 = sym.qcom_glink_alloc_intent(iVar15,uVar9,0);
                    if ((iVar14 != 0) && (*(iVar15 + 0x191) != '\0')) {
                        sym.qcom_glink_advertise_intent(unaff_x20,iVar15,iVar14);
                    }
                    uStack_70._0_4_ = CONCAT22(*(iVar15 + 0x88),8);
                    uStack_70 = CONCAT14(iVar14 != 0,uStack_70);
                    if (*(iVar15 + 0x70) != 0) {
                        ipc_log_string(*(*(iVar15 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar15 + 0x80),
                                       *(iVar15 + 0x88),*(iVar15 + 0x8c),"qcom_glink_send_intent_req_ack");
                    }
                    sym.qcom_glink_tx(unaff_x20,&uStack_70,8,0);
                }
                break;
            case 0xb:
                sym.qcom_glink_rx_close_ack(unaff_x20,uVar16);
            }
code_r0x08002b50:
            iVar14 = 0x8001568;
            kfree(piVar17);
            uVar8 = _raw_spin_lock_irqsave(iVar11);
        } while (*puVar1 != puVar1);
    }
    uVar9 = _raw_spin_unlock_irqrestore(iVar11,uVar8);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    piVar17 = __stack_chk_fail();
    *extraout_x18 = 0x8002ef8;
    uStack_b8 = 0x8002ef8;
    iVar15 = sp_el0;
    iStack_c8 = *(iVar15 + 0x5e0);
    iVar15 = *piVar17;
    *(piVar17 + 0x84) = 0;
    *(piVar17 + 0x11) = 0;
    puStack_c0 = &stack0xffffffffffffffa0;
    iStack_b0 = iVar14;
    uStack_a8 = unaff_x21;
    iStack_a0 = unaff_x20;
    iStack_98 = iVar11;
    uVar5 = of_irq_get(*(iVar15 + 0x2f0),0);
    uVar6 = devm_request_threaded_irq
                      (iVar15,uVar5,sym.qcom_glink_native_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,
                       sym.qcom_glink_native_thread_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,0x6000,piVar17 + 100
                       ,piVar17);
    if (uVar6 == 0) {
        *(piVar17 + 0xc) = uVar5;
        uVar6 = of_property_count_elems_of_size(*(iVar15 + 0x2f0),"cpu-affinity",4);
        if (0 < uVar6) {
            uVar9 = uVar6;
            iVar11 = __kmalloc(uVar9 << 2,0xcc0);
            if (iVar11 == 0) {
                uVar9 = 0xfffffff4;
                goto code_r0x08003120;
            }
            iVar7 = of_property_read_variable_u32_array(*(iVar15 + 0x2f0),"cpu-affinity",iVar11,uVar9,0);
            if (-1 < iVar7) {
                sym.qcom_glink_set_affinity(piVar17,iVar11,uVar9);
            }
            kfree(iVar11);
        }
        uStack_d0 = CONCAT44(piVar17[0x2b],0x10000);
        ipc_log_string(piVar17[0x31],"[%s]: vers:%d features:%d\n","qcom_glink_send_version",1);
        uVar6 = sym.qcom_glink_tx(piVar17,&uStack_d0,8,0);
        if (uVar6 == 0) {
            iVar11 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x3e0);
            if (iVar11 != 0) {
                uVar9 = sym.qcom_glink_alloc_channel(piVar17,0x8001170);
                if (uVar9 < 0xfffffffffffff001) {
                    *(uVar9 + 0x68) = iVar11;
                    iVar14 = *piVar17;
                    *(iVar11 + 0x3c8) = uVar9;
                    *(iVar11 + 0x3d8) = obj.glink_device_ops;
                    *(iVar11 + 0x60) = iVar14;
                    *(iVar11 + 0x397) = 0x6c7274;
                    uVar8 = str.rpmsg_ctrl._0_8_;
                    *(iVar11 + 0x3b8) = "rpmsg_ctrl";
                    *(iVar11 + 0x330) = sym.qcom_glink_device_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                    *(iVar11 + 0x390) = uVar8;
                    uVar16 = rpmsg_register_device(iVar11);
                    uVar9 = uVar16 & 0xffffffff;
                    iVar7 = uVar16;
                }
                else {
                    kfree(iVar11);
                    iVar7 = uVar9;
                }
                if (iVar7 == 0) goto code_r0x08003120;
            }
            _dev_err(*piVar17,"failed to register chrdev\n");
            uVar9 = 0;
            goto code_r0x08003120;
        }
        iVar15 = *piVar17;
        pcVar12 = "failed to send version: %d\n";
    }
    else {
        pcVar12 = "failed to request IRQ with %d\n";
    }
    uVar9 = uVar6;
    _dev_err(iVar15,pcVar12,uVar9);
code_r0x08003120:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_c8) {
        return uVar9 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_glink_native_intr;
    iVar7 = sym.qcom_glink_native_rx(arg1,10);
    uVar6 = 1;
    if (iVar7 != 0) {
        uVar6 = 2;
    }
    return uVar6;
}


// ===== sym.qcom_glink_is_wakeup.cfi_jt @ 0x080026a0 (size 8) =====

bool sym.qcom_glink_is_wakeup.cfi_jt(uint64_t param_1)

{
    int iVar1;
    
    iVar1 = _segment.ehdr;
    if ((_segment.ehdr != 0) && ((param_1 & 1) != 0)) {
        _segment.ehdr = 0;
    }
    return iVar1 != 0;
}


// ===== sym.qcom_glink_mem_entry_init.cfi_jt @ 0x080026a8 (size 8) =====

ulong * sym.qcom_glink_mem_entry_init.cfi_jt(ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *puVar4;
    ulong uVar5;
    uint64_t uVar6;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x38);
    if (puVar4 != NULL) {
        *(puVar4 + 4) = param_5;
        piVar1 = puVar4 + 5;
        *puVar4 = param_1;
        puVar4[1] = param_2;
        puVar4[2] = param_3;
        puVar4[3] = param_4;
        puVar4[5] = piVar1;
        puVar4[6] = piVar1;
        uVar5 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
        piVar3 = *0x8000690;
        uVar6 = __list_add_valid(piVar1,*0x8000690,obj.qcom_glink_mem_entries);
        if ((uVar6 & 1) != 0) {
            *0x8000690 = piVar1;
            puVar4[5] = obj.qcom_glink_mem_entries;
            puVar4[6] = piVar3;
            *piVar3 = piVar1;
        }
        _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar5);
    }
    return puVar4;
}


// ===== sym.qcom_glink_ssr_notify.cfi_jt @ 0x080026b0 (size 8) =====

void sym.qcom_glink_ssr_notify.cfi_jt(ulong param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_call_chain(obj.ssr_notifiers,0,param_1);
    return;
}


// ===== sym.rpmsg_name_show.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080026b8 (size 8) =====

int * sym.rpmsg_name_show.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t *arg1;
    ulong uVar5;
    int *piVar6;
    int *arg1_00;
    int64_t iVar7;
    int64_t iVar8;
    ulong extraout_x9;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [12];
    int iStack_a4;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_30 = 0;
    iVar4 = of_property_read_string(*(param_1 + 0x2f0),"label",&uStack_30);
    if (iVar4 < 0) {
        uStack_30 = **(param_1 + 0x2f0);
    }
    iVar8 = 0x8001532;
    iVar4 = snprintf(param_3,0x20,0x8001532,uStack_30);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    auVar10 = __stack_chk_fail();
    arg1 = auVar10._0_8_;
    *extraout_x18 = sym.qcom_glink_rx_open;
    pcStack_88 = sym.qcom_glink_rx_open;
    iVar7 = sp_el0;
    iVar1 = arg1 + 0x11c;
    iStack_98 = *(iVar7 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffe0;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iStack_a4 = 0;
    piVar6 = idr_get_next(arg1 + 0x24,&iStack_a4);
    while (piVar6 != NULL) {
        iVar4 = strcmp(*(piVar6 + 0x20),iVar8);
        if (iVar4 == 0) {
            _raw_spin_unlock_irqrestore(iVar1,uVar5);
            bVar3 = false;
            goto code_r0x08003ab8;
        }
        iStack_a4 = iStack_a4 + 1;
        piVar6 = idr_get_next(arg1 + 0x24,&iStack_a4);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    arg1_00 = sym.qcom_glink_alloc_channel(arg1,iVar8);
    if (0xfffffffffffff000 < arg1_00) goto code_r0x08003cd4;
    bVar3 = true;
    piVar6 = arg1_00;
code_r0x08003ab8:
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iVar4 = idr_alloc(arg1 + 0x27,piVar6,auVar10._8_4_,auVar10._8_4_ + 1,0xa20);
    if (iVar4 < 0) {
        _dev_err(*arg1,"Unable to insert channel into rcid list\n");
    }
    else {
        piVar6[0x23] = iVar4;
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        arg1_00 = complete_all(piVar6 + 0x50);
        if (!bVar3) {
code_r0x08003c78:
            if (*(piVar6 + 0x1c) == 0) goto code_r0x08003cd4;
            arg1_00 = ipc_log_string(*(*(piVar6 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(piVar6 + 0x20),piVar6[0x22],
                                     piVar6[0x23],"qcom_glink_rx_open");
            goto code_r0x08003cd4;
        }
        iVar7 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x3e0);
        if (iVar7 != 0) {
            *(iVar7 + 0x3c8) = piVar6;
            strscpy(iVar7 + 0x390,iVar8,0x20);
            iVar9 = *arg1;
            uStack_a0 = 0;
            *(iVar7 + 0x3c0) = 0xffffffffffffffff;
            *(iVar7 + 0x3d8) = obj.glink_device_ops;
            uVar5 = *(iVar9 + 0x2f0);
            iVar9 = of_get_next_available_child(uVar5,0);
            while ((iVar9 != 0 &&
                   ((iVar4 = of_property_read_string(iVar9,"qcom,glink-channels",&uStack_a0), iVar4 != 0 ||
                    (iVar4 = strcmp(uStack_a0,iVar8), iVar4 != 0))))) {
                iVar9 = of_get_next_available_child(uVar5,iVar9);
            }
            iVar8 = *arg1;
            *(iVar7 + 0x2f0) = iVar9;
            *(iVar7 + 0x60) = iVar8;
            *(iVar7 + 0x330) = sym.qcom_glink_rpdev_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            arg1_00 = rpmsg_register_device(iVar7);
            if (arg1_00 == 0) {
                *(piVar6 + 0x1a) = iVar7;
                goto code_r0x08003c78;
            }
        }
        if (*(piVar6 + 0x1c) != 0) {
            ipc_log_string(*(*(piVar6 + 0x1c) + 0x188),"%s[%d:%d] %s: rcid_remove\n",*(piVar6 + 0x20),piVar6[0x22],
                           piVar6[0x23],"qcom_glink_rx_open");
        }
        uVar5 = _raw_spin_lock_irqsave(iVar1);
        idr_remove(arg1 + 0x27,piVar6[0x23]);
        piVar6[0x23] = 0;
    }
    arg1_00 = _raw_spin_unlock_irqrestore(iVar1,uVar5);
    if (*(piVar6 + 0x1c) != 0) {
        arg1_00 = ipc_log_string(*(*(piVar6 + 0x1c) + 0x188),"%s[%d:%d] %s: free_channel\n",*(piVar6 + 0x20),
                                 piVar6[0x22],piVar6[0x23],"qcom_glink_rx_open");
    }
    if (!bVar3) goto code_r0x08003cd4;
    arg1_00 = piVar6 + 0x1e;
    uVar5 = 1;
    while( true ) {
        Hint_Prefetch(arg1_00,2,0,1);
        do {
            iVar4 = *arg1_00;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
            if (bVar3) {
                *arg1_00 = iVar4 - uVar5;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            arg1_00 = sym.qcom_glink_channel_release(arg1_00);
        }
        else if (iVar4 < 1) {
            arg1_00 = refcount_warn_saturate(arg1_00,3);
        }
code_r0x08003cd4:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_98) break;
        arg1_00 = __stack_chk_fail();
        uVar5 = extraout_x9;
    }
    return arg1_00;
}


// ===== sym.qcom_glink_send.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080026c0 (size 8) =====

void sym.qcom_glink_send.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(param_1,param_2,param_3,1);
    return;
}


// ===== sym.qcom_glink_trysend.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080026c8 (size 8) =====

void sym.qcom_glink_trysend.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(param_1,param_2,param_3,0);
    return;
}


// ===== sym.qcom_glink_rx_done.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080026d0 (size 8) =====

ulong sym.qcom_glink_rx_done.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong noname_0;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1 + 0x90;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = param_1 + 0x100;
    do {
        piVar6 = *piVar6;
        if (piVar6 == param_1 + 0x100) {
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            return 0xffffffea;
        }
    } while (piVar6[-4] != param_2);
    uVar5 = __list_del_entry_valid(piVar6);
    if ((uVar5 & 1) != 0) {
        iVar2 = *piVar6;
        piVar3 = piVar6[1];
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *piVar6 = -0x2152ffffffffff00;
    piVar6[1] = -0x2152fffffffffede;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    sym.qcom_glink_send_rx_done(noname_0,param_1,piVar6 + -4,1);
    return 0;
}


// ===== sym.qcom_glink_remove_device.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080026d8 (size 8) =====

ulong sym.qcom_glink_remove_device.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.qcom_glink_mem_entry_free.cfi_jt @ 0x080026e0 (size 8) =====

void sym.qcom_glink_mem_entry_free.cfi_jt(code *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
    pcVar5 = obj.qcom_glink_mem_entries;
    do {
        pcVar5 = *pcVar5;
        if (pcVar5 == obj.qcom_glink_mem_entries) goto code_r0x08007800;
    } while (pcVar5 + -0x28 != param_1);
    uVar4 = __list_del_entry_valid(param_1 + 0x28);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(param_1 + 0x28);
        piVar2 = *(param_1 + 0x30);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(param_1 + 0x28) = 0xdead000000000100;
    *(param_1 + 0x30) = 0xdead000000000122;
code_r0x08007800:
    _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar3);
    kfree(param_1);
    return;
}


// ===== sym.kthread_worker_fn.cfi_jt @ 0x080026e8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.kthread_worker_fn.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.qcom_glink_resume_no_irq.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080026f0 (size 8) =====

ulong sym.qcom_glink_resume_no_irq.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(void)

{
    obj.qcom_glink_native_probe.__key = 0x0;
    return 0;
}


// ===== sym.qcom_glink_suspend_no_irq.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x080026f8 (size 8) =====

ulong sym.qcom_glink_suspend_no_irq.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(void)

{
    obj.qcom_glink_native_probe.__key = 0x1;
    return 0;
}


// ===== sym.qcom_glink_rx_done_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002700 (size 8) =====

void sym.qcom_glink_rx_done_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong noname_0;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = param_1 + -0x38;
    uVar3 = _raw_spin_lock_irqsave(iVar5);
    piVar6 = param_1 + 0x28;
    if (piVar6 != *piVar6) {
        piVar7 = *piVar6;
        do {
            piVar8 = *piVar7;
            uVar4 = __list_del_entry_valid(piVar7);
            if ((uVar4 & 1) != 0) {
                iVar1 = *piVar7;
                piVar2 = piVar7[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore(iVar5,uVar3);
            sym.qcom_glink_send_rx_done(noname_0,param_1 + -200,piVar7 + -4,1);
            uVar3 = _raw_spin_lock_irqsave(iVar5);
            piVar7 = piVar8;
        } while (piVar6 != piVar8);
    }
    _raw_spin_unlock_irqrestore(iVar5,uVar3);
    return;
}


// ===== sym.qcom_glink_create_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt @ 0x08002708 (size 8) =====

int64_t * sym.qcom_glink_create_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt
                    (int64_t param_1,uint32_t *param_2,int64_t param_3,ulong param_4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    int64_t iVar11;
    int64_t arg2;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    uint32_t *puStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    int iStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    ulong uStack_b0;
    int64_t iStack_a8;
    uint32_t *puStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    int64_t *piStack_88;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar11 = *(*(param_1 + 0x3c8) + 0x70);
    iVar9 = iVar11 + 0x11c;
    uVar5 = _raw_spin_lock_irqsave(iVar9);
    iStack_74 = 0;
    piVar6 = idr_get_next(iVar11 + 0x138,&iStack_74);
    while (piVar6 != NULL) {
        iVar4 = strcmp(piVar6[0x10],param_4);
        if (iVar4 == 0) {
            _raw_spin_unlock_irqrestore(iVar9,uVar5);
            if (piVar6[0xe] == 0) {
                uStack_70._0_4_ = CONCAT22(*(piVar6 + 0x8c),4);
                uStack_70 = uStack_70;
            }
            else {
                ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c)
                               ,"qcom_glink_create_remote");
                uStack_70._0_4_ = CONCAT22(*(piVar6 + 0x8c),4);
                uStack_70 = uStack_70;
                if (piVar6[0xe] != 0) {
                    ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],
                                   *(piVar6 + 0x8c),"qcom_glink_send_open_ack");
                }
            }
            sym.qcom_glink_tx(iVar11,&uStack_70,8,0);
            iVar4 = sym.qcom_glink_send_open_req(iVar11,piVar6);
            if (iVar4 == 0) {
                iVar4 = wait_for_completion_timeout(piVar6 + 0x24,0x4e2);
                if (iVar4 != 0) goto code_r0x080048f8;
                iVar4 = -0x6e;
                iVar10 = piVar6[0xe];
                if (iVar10 == 0) goto code_r0x08004ab8;
code_r0x08004a40:
                ipc_log_string(*(iVar10 + 0x188),"%s[%d:%d] %s: close_link %d\n",piVar6[0x10],piVar6[0x11],
                               *(piVar6 + 0x8c),"qcom_glink_create_remote",iVar4);
                uStack_70._0_4_ = CONCAT22(piVar6[0x11],3);
                uStack_70 = uStack_70;
                if (piVar6[0xe] != 0) {
                    ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],
                                   *(piVar6 + 0x8c),"qcom_glink_send_close_req");
                }
            }
            else {
                iVar10 = piVar6[0xe];
                if (iVar10 != 0) goto code_r0x08004a40;
code_r0x08004ab8:
                uStack_70._0_4_ = CONCAT22(piVar6[0x11],3);
                uStack_70 = uStack_70;
            }
            sym.qcom_glink_tx(iVar11,&uStack_70,8,0);
            goto code_r0x08004ae4;
        }
        iStack_74 = iStack_74 + 1;
        piVar6 = idr_get_next(iVar11 + 0x138,&iStack_74);
    }
    _raw_spin_unlock_irqrestore(iVar9,uVar5);
    piVar6 = sym.qcom_glink_create_local(iVar11);
    if (piVar6 < 0xfffffffffffff001) {
code_r0x080048f8:
        if (piVar6[0xe] == 0) {
            *piVar6 = param_1;
            piVar6[2] = param_2;
            *(piVar6 + 10) = 1;
            piVar6[0xb] = param_3;
            piVar6[0xc] = reloc.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        }
        else {
            ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: Initializing ept\n",piVar6[0x10],piVar6[0x11],
                           *(piVar6 + 0x8c),"qcom_glink_create_ept");
            *piVar6 = param_1;
            piVar6[2] = param_2;
            piVar6[0xb] = param_3;
            piVar6[0xc] = reloc.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            *(piVar6 + 10) = 1;
            if (piVar6[0xe] != 0) {
                ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: Initialized ept\n",piVar6[0x10],piVar6[0x11],
                               *(piVar6 + 0x8c),"qcom_glink_create_ept");
            }
        }
    }
    else {
code_r0x08004ae4:
        piVar6 = NULL;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return piVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_announce_create;
    pcStack_c8 = sym.qcom_glink_announce_create;
    iVar10 = sp_el0;
    iStack_d8 = *(iVar10 + 0x5e0);
    iVar10 = *(iVar7 + 0x3c8);
    arg2 = *(iVar7 + 0x2f0);
    iVar7 = *(iVar10 + 0x70);
    uStack_e8 = *0x8001718;
    uStack_e0 = *0x8001720;
    puStack_d0 = &stack0xffffffffffffffa0;
    iStack_c0 = iVar9;
    uStack_b0 = param_4;
    iStack_a8 = param_1;
    puStack_a0 = param_2;
    iStack_98 = param_3;
    iStack_90 = iVar11;
    piStack_88 = piVar6;
    if (iVar7 != 0) {
        ipc_log_string(*(iVar7 + 0x188),"%s[%d:%d] %s: Entered\n",*(iVar10 + 0x80),*(iVar10 + 0x88),*(iVar10 + 0x8c)
                       ,"qcom_glink_announce_create");
    }
    if ((*(iVar7 + 0x160) != '\0') || (uVar8 = completion_done(iVar10 + 0x120), (uVar8 & 1) == 0))
    goto code_r0x08004ca0;
    param_2 = iVar10 + 0x90;
    *(iVar10 + 0x191) = 1;
    uVar5 = _raw_spin_lock_irqsave(param_2);
    iStack_ec = 0;
    iVar9 = idr_get_next(iVar10 + 0x98,&iStack_ec);
    while (iVar9 != 0) {
        if ((*(iVar9 + 0x18) == '\0') && (*(iVar9 + 0x1a) == '\0')) {
            _raw_spin_unlock_irqrestore(param_2,uVar5);
            sym.qcom_glink_advertise_intent(iVar7,iVar10,iVar9);
            uVar5 = _raw_spin_lock_irqsave(param_2);
        }
        iStack_ec = iStack_ec + 1;
        iVar9 = idr_get_next(iVar10 + 0x98,&iStack_ec);
    }
    _raw_spin_unlock_irqrestore(param_2,uVar5);
    iVar9 = of_find_property(arg2,"qcom,intents",0);
    if (iVar9 == 0) {
        param_2 = &uStack_e8;
        iVar4 = 2;
code_r0x08004cfc:
        do {
            uVar12 = param_2[1];
            iVar4 = iVar4 + -1;
            if (uVar12 != 0) {
                uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                uVar1 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
                arg2 = uVar1 >> 0x10 | uVar1 << 0x10;
                do {
                    iVar9 = sym.qcom_glink_alloc_intent(iVar10,arg2,1);
                    if (iVar9 == 0) break;
                    uVar12 = uVar12 - 1;
                    sym.qcom_glink_advertise_intent(iVar7,iVar10,iVar9);
                } while (uVar12 != 0);
            }
            param_2 = param_2 + 2;
        } while (iVar4 != 0);
    }
    else if (7 < *(iVar9 + 8)) {
        param_2 = *(iVar9 + 0x10);
        iVar4 = *(iVar9 + 8) >> 3;
        goto code_r0x08004cfc;
    }
    if (*(iVar10 + 0x70) != 0) {
        ipc_log_string(*(*(iVar10 + 0x70) + 0x188),"%s[%d:%d] %s: Exit\n",*(iVar10 + 0x80),*(iVar10 + 0x88),
                       *(iVar10 + 0x8c),"qcom_glink_announce_create");
    }
code_r0x08004ca0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return NULL;
    }
    auVar13 = __stack_chk_fail();
    iVar11 = auVar13._0_8_;
    *extraout_x18_00 = sym.qcom_glink_create_local;
    pcStack_118 = sym.qcom_glink_create_local;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    ppuStack_120 = &puStack_d0;
    puStack_110 = param_2;
    iStack_108 = arg2;
    iStack_100 = iVar7;
    iStack_f8 = iVar10;
    piVar6 = sym.qcom_glink_alloc_channel(iVar11,auVar13._8_8_);
    if (0xfffffffffffff000 < piVar6) goto code_r0x08004f64;
    if (piVar6[0xe] != 0) {
        ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c),
                       "qcom_glink_create_local");
    }
    iVar4 = sym.qcom_glink_send_open_req(iVar11,piVar6);
    if (iVar4 == 0) {
        iVar4 = wait_for_completion_timeout(piVar6 + 0x24,0x4e2);
        if ((iVar4 != 0) && (iVar4 = wait_for_completion_timeout(piVar6 + 0x28,0x4e2), iVar4 != 0)) {
            uStack_130 = CONCAT22(*(piVar6 + 0x8c),4);
            if (piVar6[0xe] != 0) {
                ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c)
                               ,"qcom_glink_send_open_ack");
            }
            sym.qcom_glink_tx(iVar11,&uStack_130,8,0);
            goto code_r0x08004f64;
        }
        if (piVar6[0xe] != 0) {
            ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: err_timeout\n",piVar6[0x10],piVar6[0x11],
                           *(piVar6 + 0x8c),"qcom_glink_create_local");
        }
        uVar5 = _raw_spin_lock_irqsave(iVar11 + 0x11c);
        idr_remove(iVar11 + 0x120,piVar6[0x11]);
        _raw_spin_unlock_irqrestore(iVar11 + 0x11c,uVar5);
        iVar9 = piVar6[0xe];
    }
    else {
        iVar9 = piVar6[0xe];
    }
    if (iVar9 != 0) {
        ipc_log_string(*(iVar9 + 0x188),"%s[%d:%d] %s: release_channel\n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c)
                       ,"qcom_glink_create_local");
    }
    piVar6 = piVar6 + 0xf;
    uVar5 = 1;
    while( true ) {
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar4 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar4 - uVar5;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(piVar6);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar6,3);
        }
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar4 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(piVar6);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar6,3);
        }
        piVar6 = 0xffffffffffffff92;
code_r0x08004f64:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_128) break;
        __stack_chk_fail();
        uVar5 = extraout_x9;
    }
    return piVar6;
}


// ===== sym.qcom_glink_is_wakeup @ 0x08002710 (size 40) =====

bool sym.qcom_glink_is_wakeup(int64_t arg1)

{
    int iVar1;
    
    iVar1 = _segment.ehdr;
    if ((_segment.ehdr != 0) && ((arg1 & 1U) != 0)) {
        _segment.ehdr = 0;
    }
    return iVar1 != 0;
}


// ===== sym.qcom_glink_early_ssr_notify @ 0x08002738 (size 304) =====

void sym.qcom_glink_early_ssr_notify(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    int *extraout_x8;
    int *piVar6;
    ulong *in_x18;
    int64_t unaff_x21;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    if (arg1 == 0) goto code_r0x08002810;
    piVar6 = arg1 + 0x150;
    unaff_x21 = arg1;
    while( true ) {
        Hint_Prefetch(piVar6,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = *piVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        __wake_up(unaff_x21 + 0x168,3,0,0);
        iVar1 = unaff_x21 + 0x11c;
        uVar4 = _raw_spin_lock_irqsave(iVar1);
        unaff_x21 = unaff_x21 + 0x120;
        iStack_3c = 0;
        iVar5 = idr_get_next(unaff_x21,&iStack_3c);
        while (iVar5 != 0) {
            __wake_up(iVar5 + 0x1a0,3,1,0);
            __wake_up(iVar5 + 0x1b8,3,1,0);
            iStack_3c = iStack_3c + 1;
            iVar5 = idr_get_next(unaff_x21,&iStack_3c);
        }
        _raw_spin_unlock_irqrestore(iVar1,uVar4);
code_r0x08002810:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        piVar6 = extraout_x8;
    }
    return;
}


// ===== sym.qcom_glink_native_probe @ 0x08002868 (size 592) =====

int64_t * sym.qcom_glink_native_probe(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint8_t in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar2 = devm_kmalloc(arg1,0x198,0xdc0);
    if (piVar2 == NULL) {
        piVar2 = 0xfffffffffffffff4;
    }
    else {
        *piVar2 = arg1;
        *(piVar2 + 0x2c) = in_w4 & 1;
        *(arg1 + 0x328) = obj.qcom_glink_groups;
        piVar2[10] = arg3;
        piVar2[0xb] = arg4;
        piVar2[0x2b] = arg2;
        *(piVar2 + 0x23) = 0;
        *(piVar2 + 0x20) = 0;
        piVar2[0x21] = piVar2 + 0x21;
        piVar2[0x22] = piVar2 + 0x21;
        piVar2[0x1a] = 0xfffffffe0;
        piVar2[0x1b] = piVar2 + 0x1b;
        piVar2[0x1c] = piVar2 + 0x1b;
        piVar2[0x1d] = sym.qcom_glink_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        __init_waitqueue_head(piVar2 + 0x2d,"&glink->tx_avail_notify",obj.qcom_glink_native_probe.__key);
        piVar2[0x25] = 0;
        piVar2[0x26] = 0;
        piVar2[0x29] = 0;
        *(piVar2 + 0x11c) = 0;
        *(piVar2 + 0x124) = 0x10000004;
        piVar2[0x27] = 0x1000000400000000;
        piVar2[0x28] = 0;
        *(piVar2 + 0x2a) = 0;
        *(*piVar2 + 0x328) = obj.qcom_glink_groups;
        iVar1 = device_add_groups(arg1,obj.qcom_glink_groups);
        if (iVar1 != 0) {
            _dev_err(arg1,"failed to add groups\n");
        }
        iVar1 = of_property_read_string(*(arg1 + 0x2f0),"label",piVar2 + 1);
        if (iVar1 < 0) {
            piVar2[1] = **(arg1 + 0x2f0);
        }
        piVar2[2] = arg1;
        *(piVar2 + 5) = 1;
        uVar3 = mbox_request_channel(piVar2 + 2,0);
        piVar2[9] = uVar3;
        if (uVar3 < 0xfffffffffffff001) {
            __kthread_init_worker(piVar2 + 0x12,"(&glink->kworker)->lock",obj.qcom_glink_native_probe.__key);
            uVar3 = kthread_create_on_node
                              (sym.kthread_worker_fn.cfi_jt,piVar2 + 0x12,0xffffffff,"glink_%s",piVar2[1]);
            if (uVar3 < 0xfffffffffffff001) {
                wake_up_process(uVar3);
                piVar2[0x19] = uVar3;
                snprintf(piVar2 + 100,0x20,"glink-native-%s",piVar2[1]);
                iVar4 = ipc_log_context_create(2,piVar2[1],0);
                piVar2[0x31] = iVar4;
            }
            else {
                piVar2[0x19] = uVar3;
                _dev_err(arg1,"failed to spawn intent kthread %ld\n",uVar3);
                piVar2 = piVar2[0x19];
            }
        }
        else if (uVar3 == 0xfffffffffffffdfb) {
            piVar2 = 0xfffffffffffffdfb;
        }
        else {
            _dev_err(arg1,"failed to acquire IPC channel\n");
            piVar2 = piVar2[9];
        }
    }
    return piVar2;
}


// ===== sym.qcom_glink_work @ 0x08002ab8 (size 1096) =====

uint64_t sym.qcom_glink_work(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    code *pcVar4;
    uint uVar5;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    char *pcVar12;
    int64_t arg1_00;
    uint uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x20;
    int64_t iVar15;
    ulong unaff_x21;
    uint64_t uVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar *puStack_c0;
    ulong uStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_88;
    int64_t iStack_80;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar11 = arg1 + 0x30;
    iStack_68 = *(iVar14 + 0x5e0);
    puVar1 = arg1 + 0x38;
    uVar8 = _raw_spin_lock_irqsave(iVar11);
    iVar14 = arg1;
    if (*puVar1 != puVar1) {
        unaff_x20 = arg1 + -0xd0;
        iStack_80 = arg1 + 0x4c;
        iStack_88 = arg1 + 0x68;
        unaff_x21 = 0xdead000000000100;
        do {
            piVar17 = *puVar1;
            uVar9 = __list_del_entry_valid(piVar17);
            if ((uVar9 & 1) != 0) {
                iVar14 = *piVar17;
                piVar2 = piVar17[1];
                *(iVar14 + 8) = piVar2;
                *piVar2 = iVar14;
            }
            *piVar17 = -0x2152ffffffffff00;
            piVar17[1] = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore(iVar11,uVar8);
            iVar14 = iStack_80;
            if (0xb < *(piVar17 + 2)) {
code_r0x08002b40:
                __warn_printk("Unknown defer object %d\n");
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8002b50);
                (*pcVar4)();
            }
            uVar3 = *(piVar17 + 0x12);
            uVar16 = uVar3;
            uVar9 = *(piVar17 + 0x14);
    //switch table (11 cases) at 0x8001568
            switch(*(*(piVar17 + 2) * 4 + 0x8001568) + 0x8002bb4) {
            case 0x8002b40:
                goto code_r0x08002b40;
            case 0x8002bc8:
                ipc_log_string(*(arg1 + 0xb8),"[%s]: vers:%d features:%d\n","qcom_glink_receive_version",uVar16,
                               uVar9);
                if (uVar3 != 0) {
                    if (uVar3 == 1) {
                        uVar9 = *(arg1 + 0x88) & uVar9;
                        *(arg1 + 0x88) = uVar9;
                    }
                    else {
                        uVar9 = *(arg1 + 0x88);
                    }
                    uVar5 = uVar9;
                    uVar8 = *(arg1 + 0xb8);
                    uVar13 = 0x10001;
                    pcVar12 = "qcom_glink_send_version_ack";
code_r0x08002e50:
                    uStack_70 = CONCAT44(uVar5,uVar13);
                    ipc_log_string(uVar8,"[%s]: vers:%d features:%d\n",pcVar12,1);
                    sym.qcom_glink_tx(unaff_x20,&stack0xffffffffffffff90,8,0);
                }
                break;
            case 0x8002c04:
                ipc_log_string(*(arg1 + 0xb8),"[%s]: vers:%d features:%d\n","qcom_glink_receive_version_ack",uVar16,
                               uVar9);
                if (uVar3 != 0) {
                    if (uVar3 == 1) {
                        if (*(arg1 + 0x88) == uVar9) break;
                        uVar9 = *(arg1 + 0x88) & uVar9;
                        *(arg1 + 0x88) = uVar9;
                    }
                    else {
                        uVar9 = *(arg1 + 0x88);
                    }
                    uVar5 = uVar9;
                    uVar13 = 0x10000;
                    uVar8 = *(arg1 + 0xb8);
                    pcVar12 = "qcom_glink_send_version";
                    goto code_r0x08002e50;
                }
                break;
            case 0x8002c48:
                sym.qcom_glink_rx_open(unaff_x20,uVar16,piVar17 + 3);
                break;
            case 0x8002c60:
                sym.qcom_glink_rx_close(unaff_x20,uVar16);
                break;
            case 0x8002c74:
                uVar8 = _raw_spin_lock_irqsave(iStack_80);
                iVar15 = idr_find(iStack_88,uVar16);
                _raw_spin_unlock_irqrestore(iVar14,uVar8);
                if (iVar15 == 0) {
                    _printk(0x80012be,"qcom_glink_handle_intent_req",uVar16);
                }
                else {
                    iVar14 = iVar15 + 0x90;
                    uVar8 = _raw_spin_lock_irqsave(iVar14);
                    iStack_74 = 0;
                    while (iVar10 = idr_get_next(iVar15 + 0x98,&stack0xffffffffffffff8c), iVar10 != 0) {
                        if ((uVar9 <= *(iVar10 + 0x10)) && (*(iVar10 + 0x18) != '\0')) {
                            _raw_spin_unlock_irqrestore(iVar14,uVar8);
                            uStack_70._0_4_ = CONCAT22(*(iVar15 + 0x88),8);
                            uStack_70 = CONCAT44(1,uStack_70);
                            if (*(iVar15 + 0x70) != 0) {
                                ipc_log_string(*(*(iVar15 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar15 + 0x80),
                                               *(iVar15 + 0x88),*(iVar15 + 0x8c),"qcom_glink_send_intent_req_ack");
                            }
                            sym.qcom_glink_tx(unaff_x20,&stack0xffffffffffffff90,8,0);
                            goto code_r0x08002b50;
                        }
                        iStack_74 = iStack_74 + 1;
                    }
                    _raw_spin_unlock_irqrestore(iVar14,uVar8);
                    iVar14 = sym.qcom_glink_alloc_intent(iVar15,uVar9,0);
                    if ((iVar14 != 0) && (*(iVar15 + 0x191) != '\0')) {
                        sym.qcom_glink_advertise_intent(unaff_x20,iVar15,iVar14);
                    }
                    uStack_70._0_4_ = CONCAT22(*(iVar15 + 0x88),8);
                    uStack_70 = CONCAT14(iVar14 != 0,uStack_70);
                    if (*(iVar15 + 0x70) != 0) {
                        ipc_log_string(*(*(iVar15 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar15 + 0x80),
                                       *(iVar15 + 0x88),*(iVar15 + 0x8c),"qcom_glink_send_intent_req_ack");
                    }
                    sym.qcom_glink_tx(unaff_x20,&stack0xffffffffffffff90,8,0);
                }
                break;
            case 0x8002d5c:
                sym.qcom_glink_rx_close_ack(unaff_x20,uVar16);
            }
code_r0x08002b50:
            iVar14 = 0x8001568;
            kfree(piVar17);
            uVar8 = _raw_spin_lock_irqsave(iVar11);
        } while (*puVar1 != puVar1);
    }
    uVar9 = _raw_spin_unlock_irqrestore(iVar11,uVar8);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_68) {
        return uVar9;
    }
    piVar17 = __stack_chk_fail();
    *extraout_x18 = 0x8002ef8;
    uStack_b8 = 0x8002ef8;
    iVar15 = sp_el0;
    iStack_c8 = *(iVar15 + 0x5e0);
    iVar15 = *piVar17;
    *(piVar17 + 0x84) = 0;
    *(piVar17 + 0x11) = 0;
    puStack_c0 = &stack0xffffffffffffffa0;
    iStack_b0 = iVar14;
    uStack_a8 = unaff_x21;
    iStack_a0 = unaff_x20;
    iStack_98 = iVar11;
    uVar5 = of_irq_get(*(iVar15 + 0x2f0),0);
    uVar6 = devm_request_threaded_irq
                      (iVar15,uVar5,sym.qcom_glink_native_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,
                       sym.qcom_glink_native_thread_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,0x6000,piVar17 + 100
                       ,piVar17);
    if (uVar6 == 0) {
        *(piVar17 + 0xc) = uVar5;
        uVar6 = of_property_count_elems_of_size(*(iVar15 + 0x2f0),"cpu-affinity",4);
        if (0 < uVar6) {
            uVar9 = uVar6;
            iVar11 = __kmalloc(uVar9 << 2,0xcc0);
            if (iVar11 == 0) {
                uVar9 = 0xfffffff4;
                goto code_r0x08003120;
            }
            iVar7 = of_property_read_variable_u32_array(*(iVar15 + 0x2f0),"cpu-affinity",iVar11,uVar9,0);
            if (-1 < iVar7) {
                sym.qcom_glink_set_affinity(piVar17,iVar11,uVar9);
            }
            kfree(iVar11);
        }
        uStack_d0 = CONCAT44(piVar17[0x2b],0x10000);
        ipc_log_string(piVar17[0x31],"[%s]: vers:%d features:%d\n","qcom_glink_send_version",1);
        uVar6 = sym.qcom_glink_tx(piVar17,&stack0xffffffffffffff30,8,0);
        if (uVar6 == 0) {
            iVar11 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x3e0);
            if (iVar11 != 0) {
                uVar9 = sym.qcom_glink_alloc_channel(piVar17,0x8001170);
                if (uVar9 < 0xfffffffffffff001) {
                    *(uVar9 + 0x68) = iVar11;
                    iVar14 = *piVar17;
                    *(iVar11 + 0x3c8) = uVar9;
                    *(iVar11 + 0x3d8) = obj.glink_device_ops;
                    *(iVar11 + 0x60) = iVar14;
                    *(iVar11 + 0x397) = 0x6c7274;
                    uVar8 = str.rpmsg_ctrl._0_8_;
                    *(iVar11 + 0x3b8) = "rpmsg_ctrl";
                    *(iVar11 + 0x330) = sym.qcom_glink_device_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                    *(iVar11 + 0x390) = uVar8;
                    uVar16 = rpmsg_register_device(iVar11);
                    uVar9 = uVar16 & 0xffffffff;
                    iVar7 = uVar16;
                }
                else {
                    kfree(iVar11);
                    iVar7 = uVar9;
                }
                if (iVar7 == 0) goto code_r0x08003120;
            }
            _dev_err(*piVar17,"failed to register chrdev\n");
            uVar9 = 0;
            goto code_r0x08003120;
        }
        iVar15 = *piVar17;
        pcVar12 = "failed to send version: %d\n";
    }
    else {
        pcVar12 = "failed to request IRQ with %d\n";
    }
    uVar9 = uVar6;
    _dev_err(iVar15,pcVar12,uVar9);
code_r0x08003120:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_c8) {
        return uVar9 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_glink_native_intr;
    iVar7 = sym.qcom_glink_native_rx(arg1_00,10);
    uVar6 = 1;
    if (iVar7 != 0) {
        uVar6 = 2;
    }
    return uVar6;
}


// ===== sym.qcom_glink_native_start @ 0x08002f00 (size 600) =====

uint64_t sym.qcom_glink_native_start(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t arg2;
    uint64_t uVar4;
    char *pcVar5;
    int64_t arg1_00;
    ulong uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    uint64_t uVar8;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = *arg1;
    *(arg1 + 0x84) = 0;
    *(arg1 + 0x88) = 0;
    uVar1 = of_irq_get(*(iVar7 + 0x2f0),0);
    uVar2 = devm_request_threaded_irq
                      (iVar7,uVar1,sym.qcom_glink_native_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,
                       sym.qcom_glink_native_thread_intr.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt,0x6000,arg1 + 100,
                       arg1);
    if (uVar2 == 0) {
        *(arg1 + 0x60) = uVar1;
        uVar2 = of_property_count_elems_of_size(*(iVar7 + 0x2f0),"cpu-affinity",4);
        if (0 < uVar2) {
            uVar8 = uVar2;
            arg2 = __kmalloc(uVar8 << 2,0xcc0);
            if (arg2 == 0) {
                uVar8 = 0xfffffff4;
                goto code_r0x08003120;
            }
            iVar3 = of_property_read_variable_u32_array(*(iVar7 + 0x2f0),"cpu-affinity",arg2,uVar8,0);
            if (-1 < iVar3) {
                sym.qcom_glink_set_affinity(arg1,arg2,uVar8);
            }
            kfree(arg2);
        }
        uStack_40 = CONCAT44(*(arg1 + 0x158),0x10000);
        ipc_log_string(*(arg1 + 0x188),"[%s]: vers:%d features:%d\n","qcom_glink_send_version",1);
        uVar2 = sym.qcom_glink_tx(arg1,&uStack_40,8,0);
        if (uVar2 == 0) {
            iVar7 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x3e0);
            if (iVar7 != 0) {
                uVar8 = sym.qcom_glink_alloc_channel(arg1,0x8001170);
                if (uVar8 < 0xfffffffffffff001) {
                    *(uVar8 + 0x68) = iVar7;
                    uVar6 = *arg1;
                    *(iVar7 + 0x3c8) = uVar8;
                    *(iVar7 + 0x3d8) = obj.glink_device_ops;
                    *(iVar7 + 0x60) = uVar6;
                    *(iVar7 + 0x397) = 0x6c7274;
                    uVar6 = str.rpmsg_ctrl._0_8_;
                    *(iVar7 + 0x3b8) = "rpmsg_ctrl";
                    *(iVar7 + 0x330) = sym.qcom_glink_device_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
                    *(iVar7 + 0x390) = uVar6;
                    uVar4 = rpmsg_register_device(iVar7);
                    uVar8 = uVar4 & 0xffffffff;
                    iVar3 = uVar4;
                }
                else {
                    kfree(iVar7);
                    iVar3 = uVar8;
                }
                if (iVar3 == 0) goto code_r0x08003120;
            }
            _dev_err(*arg1,"failed to register chrdev\n");
            uVar8 = 0;
            goto code_r0x08003120;
        }
        iVar7 = *arg1;
        pcVar5 = "failed to send version: %d\n";
    }
    else {
        pcVar5 = "failed to request IRQ with %d\n";
    }
    uVar8 = uVar2;
    _dev_err(iVar7,pcVar5,uVar8);
code_r0x08003120:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar8 & 0xffffffff;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_native_intr;
    iVar3 = sym.qcom_glink_native_rx(arg1_00,10);
    uVar2 = 1;
    if (iVar3 != 0) {
        uVar2 = 2;
    }
    return uVar2;
}


// ===== sym.qcom_glink_native_intr @ 0x08003158 (size 56) =====

uint sym.qcom_glink_native_intr(ulong noname_0,int64_t arg1)

{
    int iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = sym.qcom_glink_native_rx(arg1,10);
    uVar2 = 1;
    if (iVar1 != 0) {
        uVar2 = 2;
    }
    return uVar2;
}


// ===== sym.qcom_glink_native_thread_intr @ 0x08003190 (size 48) =====

ulong sym.qcom_glink_native_thread_intr(ulong noname_0,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.qcom_glink_native_rx(arg1,0);
    return 1;
}


// ===== sym.qcom_glink_set_affinity @ 0x080031c0 (size 280) =====

void sym.qcom_glink_set_affinity(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint *in_x6;
    ulong *in_x18;
    uint64_t uVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar7 = 0;
    *(arg1 + 400) = 0;
    iVar6 = arg1;
    do {
        uVar2 = *(arg2 + uVar7 * 4);
        *in_x6 = iVar6;
        iVar6 = __sw_hweight64();
        if (uVar2 < iVar6) {
            uVar2 = *(arg2 + uVar7 * 4);
            puVar1 = arg1 + (uVar2 >> 3 & 0x1ffffff8) + 400;
            Hint_Prefetch(puVar1,2,0,1);
            do {
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                    *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
        }
        uVar7 = uVar7 + 1;
    } while (uVar7 < arg3);
    iVar5 = irq_set_affinity_hint(*(arg1 + 0x60),arg1 + 400);
    if (iVar5 != 0) {
        _dev_err(*arg1,"failed to set irq affinity\n");
    }
    iVar5 = set_cpus_allowed_ptr(*(arg1 + 200),arg1 + 400);
    if (iVar5 != 0) {
        _dev_err(*arg1,"failed to set task affinity\n");
    }
    return;
}


// ===== sym.qcom_glink_native_remove @ 0x080032d8 (size 856) =====

void sym.qcom_glink_native_remove(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int *piVar6;
    ulong *in_x18;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_38 = *(iVar5 + 0x5e0);
    sym.qcom_glink_early_ssr_notify(arg1);
    disable_irq(*(arg1 + 0x60));
    cancel_work_sync(arg1 + 0xd0);
    piVar4 = *(arg1 + 0x108);
    while (piVar4 != arg1 + 0x108) {
        piVar4 = *piVar4;
        kfree();
    }
    iVar3 = device_for_each_child(*arg1,0,sym.qcom_glink_remove_device.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt);
    if (iVar3 != 0) {
        _dev_warn(*arg1,"Can\'t remove GLINK devices: %d\n",iVar3);
    }
    pcVar7 = arg1 + 0x120;
    iStack_3c = 0;
    iVar5 = idr_get_next(pcVar7,&iStack_3c);
    if (iVar5 == 0) goto code_r0x080033ec;
    iVar8 = 1;
    do {
        piVar6 = iVar5 + 0x78;
        while( true ) {
            Hint_Prefetch(piVar6,2,0,1);
            do {
                iVar3 = *piVar6;
                cVar1 = '\x01';
                bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                if (bVar2) {
                    *piVar6 = iVar3 - iVar8;
                    cVar1 = ExclusiveMonitorsStatus();
                }
            } while (cVar1 != '\0');
            if (iVar3 == 1) {
                DataMemoryBarrier(2,1);
                sym.qcom_glink_channel_release(piVar6);
            }
            else if (iVar3 < 1) {
                refcount_warn_saturate(piVar6,3);
            }
            idr_remove(pcVar7,iStack_3c);
            iStack_3c = iStack_3c + 1;
            iVar5 = idr_get_next(pcVar7,&iStack_3c);
            if (iVar5 != 0) break;
code_r0x080033ec:
            iVar8 = arg1 + 0x138;
            iStack_3c = 0;
            iVar5 = idr_get_next(iVar8,&iStack_3c);
            while (iVar5 != 0) {
                piVar6 = iVar5 + 0x78;
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    iVar3 = *piVar6;
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar2) {
                        *piVar6 = iVar3 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                if (iVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.qcom_glink_channel_release(piVar6);
                }
                else if (iVar3 < 1) {
                    refcount_warn_saturate(piVar6,3);
                }
                idr_remove(iVar8,iStack_3c);
                iStack_3c = iStack_3c + 1;
                iVar5 = idr_get_next(iVar8,&iStack_3c);
            }
            iStack_3c = 0;
            iVar5 = idr_get_next(iVar8,&iStack_3c);
            while (iVar5 != 0) {
                piVar6 = iVar5 + 0x78;
                Hint_Prefetch(piVar6,2,0,1);
                do {
                    iVar3 = *piVar6;
                    cVar1 = '\x01';
                    bVar2 = ExclusiveMonitorPass(piVar6,0x10);
                    if (bVar2) {
                        *piVar6 = iVar3 + -1;
                        cVar1 = ExclusiveMonitorsStatus();
                    }
                } while (cVar1 != '\0');
                if (iVar3 == 1) {
                    DataMemoryBarrier(2,1);
                    sym.qcom_glink_channel_release(piVar6);
                }
                else if (iVar3 < 1) {
                    refcount_warn_saturate(piVar6,3);
                }
                iStack_3c = iStack_3c + 1;
                iVar5 = idr_get_next(iVar8,&iStack_3c);
            }
            idr_destroy(pcVar7);
            idr_destroy(iVar8);
            kthread_flush_worker(arg1 + 0x90);
            kthread_stop(*(arg1 + 200));
            pcVar7 = *(*(arg1 + 0x58) + 0x28);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x9fbc554045878591,pcVar7,0x80007a0);
                (*pcVar7)(*(arg1 + 0x58));
            }
            pcVar7 = *(*(arg1 + 0x50) + 0x28);
            if (pcVar7 != NULL) {
                __cfi_slowpath_diag(0x9fbc554045878591,pcVar7,0x80007c0);
                (*pcVar7)(*(arg1 + 0x50));
            }
            mbox_free_channel(*(arg1 + 0x48));
            iVar5 = sp_el0;
            if (*(iVar5 + 0x5e0) == iStack_38) {
                return;
            }
            piVar6 = __stack_chk_fail();
        }
    } while( true );
}


// ===== sym.qcom_glink_remove_device @ 0x08003630 (size 40) =====

ulong sym.qcom_glink_remove_device(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.qcom_glink_channel_release @ 0x08003658 (size 648) =====

void sym.qcom_glink_channel_release(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t *piVar7;
    int *extraout_x8;
    int *piVar8;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    iStack_4c = 0;
    if (*(arg1 + -8) != 0) {
        ipc_log_string(*(*(arg1 + -8) + 0x188),"%s[%d:%d] %s: \n",*(arg1 + 8),*(arg1 + 0x10),*(arg1 + 0x14),
                       "qcom_glink_channel_release");
    }
    piVar8 = arg1 + 0x11c;
    *(arg1 + 0x118) = 0;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = *piVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        __wake_up(arg1 + 0x128,3,1,0);
        piVar8 = arg1 + 0x120;
        Hint_Prefetch(piVar8,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar3) {
                *piVar8 = *piVar8 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        __wake_up(arg1 + 0x140,3,1,0);
        kthread_cancel_work_sync(arg1 + 0x50);
        uVar4 = _raw_spin_lock_irqsave(arg1 + 0x18);
        piVar7 = *(arg1 + 0x78);
        while (piVar7 != arg1 + 0x78) {
            puVar5 = piVar7 + -4;
            if (piVar7[-2] == 0) {
                *puVar5 = 0;
            }
            pcVar1 = piVar7 + -1;
            piVar7 = *piVar7;
            if (*pcVar1 == '\0') {
                kfree(*puVar5);
                kfree(puVar5);
            }
        }
        piVar7 = *(arg1 + 0x88);
        while (piVar7 != arg1 + 0x88) {
            puVar5 = piVar7 + -4;
            if (piVar7[-2] == 0) {
                *puVar5 = 0;
            }
            pcVar1 = piVar7 + -1;
            piVar7 = *piVar7;
            if (*pcVar1 == '\0') {
                kfree(*puVar5);
                kfree(puVar5);
            }
        }
        iVar6 = arg1 + 0x20;
        iStack_4c = 0;
        puVar5 = idr_get_next(iVar6,&iStack_4c);
        while (puVar5 != NULL) {
            kfree(*puVar5);
            kfree(puVar5);
            iStack_4c = iStack_4c + 1;
            puVar5 = idr_get_next(iVar6,&iStack_4c);
        }
        idr_destroy(iVar6);
        iStack_4c = 0;
        while (iVar6 = idr_get_next(arg1 + 0x38,&iStack_4c), iVar6 != 0) {
            kfree();
            iStack_4c = iStack_4c + 1;
        }
        idr_destroy(arg1 + 0x38);
        _raw_spin_unlock_irqrestore(arg1 + 0x18,uVar4);
        kfree(*(arg1 + 8));
        kfree(arg1 + -0x78);
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        piVar8 = extraout_x8;
    }
    return;
}


// ===== sym.qcom_glink_native_unregister @ 0x080038e0 (size 40) =====

void sym.qcom_glink_native_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister(*arg1);
    return;
}


// ===== sym.qcom_glink_suspend_no_irq @ 0x08003908 (size 28) =====

ulong sym.qcom_glink_suspend_no_irq(int64_t arg1)

{
    obj.qcom_glink_native_probe.__key = 0x1;
    return 0;
}


// ===== sym.qcom_glink_resume_no_irq @ 0x08003924 (size 24) =====

ulong sym.qcom_glink_resume_no_irq(int64_t arg1)

{
    obj.qcom_glink_native_probe.__key = 0x0;
    return 0;
}


// ===== sym.rpmsg_name_show @ 0x0800393c (size 164) =====

int * sym.rpmsg_name_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    int64_t *arg1_00;
    ulong uVar5;
    int *piVar6;
    int *arg1_01;
    int64_t iVar7;
    int64_t iVar8;
    ulong extraout_x9;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [12];
    int iStack_a4;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_30 = 0;
    iVar4 = of_property_read_string(*(arg1 + 0x2f0),"label",&uStack_30);
    if (iVar4 < 0) {
        uStack_30 = **(arg1 + 0x2f0);
    }
    iVar8 = 0x8001532;
    iVar4 = snprintf(arg2,0x20,0x8001532,uStack_30);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return iVar4;
    }
    auVar10 = __stack_chk_fail();
    arg1_00 = auVar10._0_8_;
    *extraout_x18 = sym.qcom_glink_rx_open;
    pcStack_88 = sym.qcom_glink_rx_open;
    iVar7 = sp_el0;
    iVar1 = arg1_00 + 0x11c;
    iStack_98 = *(iVar7 + 0x5e0);
    puStack_90 = &stack0xffffffffffffffe0;
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iStack_a4 = 0;
    piVar6 = idr_get_next(arg1_00 + 0x24,&iStack_a4);
    while (piVar6 != NULL) {
        iVar4 = strcmp(*(piVar6 + 0x20),iVar8);
        if (iVar4 == 0) {
            _raw_spin_unlock_irqrestore(iVar1,uVar5);
            bVar3 = false;
            goto code_r0x08003ab8;
        }
        iStack_a4 = iStack_a4 + 1;
        piVar6 = idr_get_next(arg1_00 + 0x24,&iStack_a4);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    arg1_01 = sym.qcom_glink_alloc_channel(arg1_00,iVar8);
    if (0xfffffffffffff000 < arg1_01) goto code_r0x08003cd4;
    bVar3 = true;
    piVar6 = arg1_01;
code_r0x08003ab8:
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iVar4 = idr_alloc(arg1_00 + 0x27,piVar6,auVar10._8_4_,auVar10._8_4_ + 1,0xa20);
    if (iVar4 < 0) {
        _dev_err(*arg1_00,"Unable to insert channel into rcid list\n");
    }
    else {
        piVar6[0x23] = iVar4;
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        arg1_01 = complete_all(piVar6 + 0x50);
        if (!bVar3) {
code_r0x08003c78:
            if (*(piVar6 + 0x1c) == 0) goto code_r0x08003cd4;
            arg1_01 = ipc_log_string(*(*(piVar6 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(piVar6 + 0x20),piVar6[0x22],
                                     piVar6[0x23],"qcom_glink_rx_open");
            goto code_r0x08003cd4;
        }
        iVar7 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x3e0);
        if (iVar7 != 0) {
            *(iVar7 + 0x3c8) = piVar6;
            strscpy(iVar7 + 0x390,iVar8,0x20);
            iVar9 = *arg1_00;
            uStack_a0 = 0;
            *(iVar7 + 0x3c0) = 0xffffffffffffffff;
            *(iVar7 + 0x3d8) = obj.glink_device_ops;
            uVar5 = *(iVar9 + 0x2f0);
            iVar9 = of_get_next_available_child(uVar5,0);
            while ((iVar9 != 0 &&
                   ((iVar4 = of_property_read_string(iVar9,"qcom,glink-channels",&uStack_a0), iVar4 != 0 ||
                    (iVar4 = strcmp(uStack_a0,iVar8), iVar4 != 0))))) {
                iVar9 = of_get_next_available_child(uVar5,iVar9);
            }
            iVar8 = *arg1_00;
            *(iVar7 + 0x2f0) = iVar9;
            *(iVar7 + 0x60) = iVar8;
            *(iVar7 + 0x330) = sym.qcom_glink_rpdev_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            arg1_01 = rpmsg_register_device(iVar7);
            if (arg1_01 == 0) {
                *(piVar6 + 0x1a) = iVar7;
                goto code_r0x08003c78;
            }
        }
        if (*(piVar6 + 0x1c) != 0) {
            ipc_log_string(*(*(piVar6 + 0x1c) + 0x188),"%s[%d:%d] %s: rcid_remove\n",*(piVar6 + 0x20),piVar6[0x22],
                           piVar6[0x23],"qcom_glink_rx_open");
        }
        uVar5 = _raw_spin_lock_irqsave(iVar1);
        idr_remove(arg1_00 + 0x27,piVar6[0x23]);
        piVar6[0x23] = 0;
    }
    arg1_01 = _raw_spin_unlock_irqrestore(iVar1,uVar5);
    if (*(piVar6 + 0x1c) != 0) {
        arg1_01 = ipc_log_string(*(*(piVar6 + 0x1c) + 0x188),"%s[%d:%d] %s: free_channel\n",*(piVar6 + 0x20),
                                 piVar6[0x22],piVar6[0x23],"qcom_glink_rx_open");
    }
    if (!bVar3) goto code_r0x08003cd4;
    arg1_01 = piVar6 + 0x1e;
    uVar5 = 1;
    while( true ) {
        Hint_Prefetch(arg1_01,2,0,1);
        do {
            iVar4 = *arg1_01;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg1_01,0x10);
            if (bVar3) {
                *arg1_01 = iVar4 - uVar5;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            arg1_01 = sym.qcom_glink_channel_release(arg1_01);
        }
        else if (iVar4 < 1) {
            arg1_01 = refcount_warn_saturate(arg1_01,3);
        }
code_r0x08003cd4:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_98) break;
        arg1_01 = __stack_chk_fail();
        uVar5 = extraout_x9;
    }
    return arg1_01;
}


// ===== sym.qcom_glink_rx_open @ 0x080039e0 (size 856) =====

void sym.qcom_glink_rx_open(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int *arg1_00;
    ulong extraout_x9;
    int64_t iVar8;
    ulong *in_x18;
    ulong unaff_x30;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar1 = arg1 + 0x11c;
    iStack_68 = *(iVar7 + 0x5e0);
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iStack_74 = 0;
    uVar6 = idr_get_next(arg1 + 0x120,&iStack_74);
    while (uVar6 != 0) {
        iVar4 = strcmp(*(uVar6 + 0x80),arg3);
        if (iVar4 == 0) {
            _raw_spin_unlock_irqrestore(iVar1,uVar5);
            bVar3 = false;
            goto code_r0x08003ab8;
        }
        iStack_74 = iStack_74 + 1;
        uVar6 = idr_get_next(arg1 + 0x120,&iStack_74);
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    uVar6 = sym.qcom_glink_alloc_channel(arg1,arg3);
    if (0xfffffffffffff000 < uVar6) goto code_r0x08003cd4;
    bVar3 = true;
code_r0x08003ab8:
    uVar5 = _raw_spin_lock_irqsave(iVar1);
    iVar4 = idr_alloc(arg1 + 0x138,uVar6,arg2 & 0xffffffff,arg2 + 1,0xa20);
    if (iVar4 < 0) {
        _dev_err(*arg1,"Unable to insert channel into rcid list\n");
    }
    else {
        *(uVar6 + 0x8c) = iVar4;
        _raw_spin_unlock_irqrestore(iVar1,uVar5);
        complete_all(uVar6 + 0x140);
        if (!bVar3) {
code_r0x08003c78:
            if (*(uVar6 + 0x70) == 0) goto code_r0x08003cd4;
            ipc_log_string(*(*(uVar6 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(uVar6 + 0x80),*(uVar6 + 0x88),
                           *(uVar6 + 0x8c),"qcom_glink_rx_open");
            goto code_r0x08003cd4;
        }
        iVar7 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x3e0);
        if (iVar7 != 0) {
            *(iVar7 + 0x3c8) = uVar6;
            strscpy(iVar7 + 0x390,arg3,0x20);
            iVar8 = *arg1;
            uStack_70 = 0;
            *(iVar7 + 0x3c0) = 0xffffffffffffffff;
            *(iVar7 + 0x3d8) = obj.glink_device_ops;
            uVar5 = *(iVar8 + 0x2f0);
            iVar8 = of_get_next_available_child(uVar5,0);
            while ((iVar8 != 0 &&
                   ((iVar4 = of_property_read_string(iVar8,"qcom,glink-channels",&uStack_70), iVar4 != 0 ||
                    (iVar4 = strcmp(uStack_70,arg3), iVar4 != 0))))) {
                iVar8 = of_get_next_available_child(uVar5,iVar8);
            }
            uVar5 = *arg1;
            *(iVar7 + 0x2f0) = iVar8;
            *(iVar7 + 0x60) = uVar5;
            *(iVar7 + 0x330) = sym.qcom_glink_rpdev_release.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            iVar4 = rpmsg_register_device(iVar7);
            if (iVar4 == 0) {
                *(uVar6 + 0x68) = iVar7;
                goto code_r0x08003c78;
            }
        }
        if (*(uVar6 + 0x70) != 0) {
            ipc_log_string(*(*(uVar6 + 0x70) + 0x188),"%s[%d:%d] %s: rcid_remove\n",*(uVar6 + 0x80),*(uVar6 + 0x88),
                           *(uVar6 + 0x8c),"qcom_glink_rx_open");
        }
        uVar5 = _raw_spin_lock_irqsave(iVar1);
        idr_remove(arg1 + 0x138,*(uVar6 + 0x8c));
        *(uVar6 + 0x8c) = 0;
    }
    _raw_spin_unlock_irqrestore(iVar1,uVar5);
    if (*(uVar6 + 0x70) != 0) {
        ipc_log_string(*(*(uVar6 + 0x70) + 0x188),"%s[%d:%d] %s: free_channel\n",*(uVar6 + 0x80),*(uVar6 + 0x88),
                       *(uVar6 + 0x8c),"qcom_glink_rx_open");
    }
    if (!bVar3) goto code_r0x08003cd4;
    arg1_00 = uVar6 + 0x78;
    uVar5 = 1;
    while( true ) {
        Hint_Prefetch(arg1_00,2,0,1);
        do {
            iVar4 = *arg1_00;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
            if (bVar3) {
                *arg1_00 = iVar4 - uVar5;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(arg1_00);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(arg1_00,3);
        }
code_r0x08003cd4:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_68) break;
        arg1_00 = __stack_chk_fail();
        uVar5 = extraout_x9;
    }
    return;
}


// ===== sym.qcom_glink_rx_close @ 0x08003d38 (size 504) =====

void sym.qcom_glink_rx_close(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    char cVar3;
    bool bVar4;
    code *pcVar5;
    ulong uVar6;
    int64_t iVar7;
    int *arg1_00;
    ulong extraout_x9;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iVar1 = arg1 + 0x11c;
    iStack_48 = *(iVar7 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uVar6 = _raw_spin_lock_irqsave(iVar1);
    iVar7 = idr_find(arg1 + 0x138,arg2 & 0xffffffff);
    _raw_spin_unlock_irqrestore(iVar1,uVar6);
    if (iVar7 != 0) {
        if (*(iVar7 + 0x70) != 0) {
            ipc_log_string(*(*(iVar7 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar7 + 0x80),*(iVar7 + 0x88),
                           *(iVar7 + 0x8c),"qcom_glink_rx_close");
        }
        kthread_cancel_work_sync(iVar7 + 200);
        if (*(iVar7 + 0x68) != 0) {
            strscpy_pad(&uStack_70,*(iVar7 + 0x80),0x20);
            uStack_50 = 0xffffffffffffffff;
            rpmsg_unregister_device(*arg1,&uStack_70);
        }
        *(iVar7 + 0x68) = 0;
        uStack_78 = CONCAT22(*(iVar7 + 0x8c),0xb);
        ipc_log_string(*(arg1 + 0x188),"[%s]: rcid:%d\n","qcom_glink_send_close_ack");
        sym.qcom_glink_tx(arg1,&uStack_78,8,0);
        uVar6 = _raw_spin_lock_irqsave(iVar1);
        idr_remove(arg1 + 0x138,*(iVar7 + 0x8c));
        *(iVar7 + 0x8c) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar6);
        arg1_00 = iVar7 + 0x78;
        uVar6 = 1;
        while( true ) {
            Hint_Prefetch(arg1_00,2,0,1);
            do {
                iVar2 = *arg1_00;
                cVar3 = '\x01';
                bVar4 = ExclusiveMonitorPass(arg1_00,0x10);
                if (bVar4) {
                    *arg1_00 = iVar2 - uVar6;
                    cVar3 = ExclusiveMonitorsStatus();
                }
            } while (cVar3 != '\0');
            if (iVar2 == 1) {
                DataMemoryBarrier(2,1);
                sym.qcom_glink_channel_release(arg1_00);
            }
            else if (iVar2 < 1) {
                refcount_warn_saturate(arg1_00,3);
            }
            iVar1 = sp_el0;
            if (*(iVar1 + 0x5e0) == iStack_48) break;
            arg1_00 = __stack_chk_fail();
            uVar6 = extraout_x9;
        }
        return;
    }
    __warn_printk("close request on unknown channel\n");
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x800,0x8003eb4);
    (*pcVar5)();
}


// ===== sym.qcom_glink_rx_close_ack @ 0x08003f30 (size 416) =====

void sym.qcom_glink_rx_close_ack(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    code *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    int *arg1_00;
    ulong extraout_x9;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uVar5 = _raw_spin_lock_irqsave(arg1 + 0x11c);
    iVar6 = idr_find(arg1 + 0x120,arg2 & 0xffffffff);
    if (iVar6 != 0) {
        if (*(iVar6 + 0x70) != 0) {
            ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar6 + 0x80),*(iVar6 + 0x88),
                           *(iVar6 + 0x8c),"qcom_glink_rx_close_ack");
        }
        idr_remove(arg1 + 0x120,*(iVar6 + 0x88));
        *(iVar6 + 0x88) = 0;
        _raw_spin_unlock_irqrestore(arg1 + 0x11c,uVar5);
        if (*(iVar6 + 0x68) != 0) {
            strscpy(&uStack_70,*(iVar6 + 0x80),0x20);
            uStack_50 = 0xffffffffffffffff;
            rpmsg_unregister_device(*arg1,&uStack_70);
        }
        arg1_00 = iVar6 + 0x78;
        *(iVar6 + 0x68) = 0;
        uVar5 = 1;
        while( true ) {
            Hint_Prefetch(arg1_00,2,0,1);
            do {
                iVar1 = *arg1_00;
                cVar2 = '\x01';
                bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
                if (bVar3) {
                    *arg1_00 = iVar1 - uVar5;
                    cVar2 = ExclusiveMonitorsStatus();
                }
            } while (cVar2 != '\0');
            if (iVar1 == 1) {
                DataMemoryBarrier(2,1);
                sym.qcom_glink_channel_release(arg1_00);
            }
            else if (iVar1 < 1) {
                refcount_warn_saturate(arg1_00,3);
            }
            iVar6 = sp_el0;
            if (*(iVar6 + 0x5e0) == iStack_48) break;
            arg1_00 = __stack_chk_fail();
            uVar5 = extraout_x9;
        }
        return;
    }
    __warn_printk("close ack on unknown channel\n");
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x800,0x8004050);
    (*pcVar4)();
}


// ===== sym.qcom_glink_tx @ 0x080040d0 (size 984) =====

int64_t sym.qcom_glink_tx(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int in_w4;
    uint32_t in_w5;
    int iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    uint64_t uVar6;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar6 = in_w4 + arg3;
    if (**(arg1 + 0x58) <= uVar6) {
        iVar5 = 0xffffffea;
        goto code_r0x08004454;
    }
    if (*(arg1 + 0x150) != 0) {
        iVar5 = 0xffffff98;
        goto code_r0x08004454;
    }
    iVar1 = arg1 + 0x118;
    uVar3 = _raw_spin_lock_irqsave(iVar1);
    pcVar7 = *(*(arg1 + 0x58) + 8);
    __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar7,0x80006a0);
    uVar2 = (*pcVar7)(*(arg1 + 0x58));
    if (uVar2 < uVar6) {
        if ((in_w5 & 1) != 0) {
            iVar5 = arg1 + 0x168;
            do {
                if (*(arg1 + 0x180) == '\0') {
                    *(arg1 + 0x180) = 1;
                    uStack_90 = 0xd;
                    ipc_log_string(*(arg1 + 0x188),"[%s]: send READ NOTIFY cmd\n","qcom_glink_send_read_notify");
                    pcVar7 = *(*(arg1 + 0x58) + 0x20);
                    __cfi_slowpath_diag(0x51abad1cc76803c3,pcVar7,0x80006c0);
                    (*pcVar7)(*(arg1 + 0x58),&stack0xffffffffffffff70,8,0,0);
                    mbox_send_message(*(arg1 + 0x48),0);
                    mbox_client_txdone(*(arg1 + 0x48),0);
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar3);
                pcVar7 = *(*(arg1 + 0x58) + 8);
                __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar7,0x80006a0);
                uVar2 = (*pcVar7)(*(arg1 + 0x58));
                if ((uVar2 < uVar6) && (*(arg1 + 0x150) == 0)) {
                    uStack_78 = 0;
                    uStack_70 = 0;
                    uStack_88 = 0;
                    uStack_80 = 0;
                    uStack_90 = 0;
                    init_wait_entry(&stack0xffffffffffffff70,0);
                    prepare_to_wait_event(iVar5,&stack0xffffffffffffff70,2);
                    pcVar7 = *(*(arg1 + 0x58) + 8);
                    __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar7,0x80006a0);
                    uVar2 = (*pcVar7)(*(arg1 + 0x58));
                    if (uVar2 < uVar6) {
                        iVar8 = 0x9c4;
                        do {
                            iVar4 = *(arg1 + 0x150);
                            if (iVar8 == 0 && iVar4 != 0) {
                                iVar8 = 1;
                            }
                            if (iVar4 != 0 || iVar8 == 0) break;
                            iVar8 = schedule_timeout();
                            prepare_to_wait_event(iVar5,&stack0xffffffffffffff70,2);
                            pcVar7 = *(*(arg1 + 0x58) + 8);
                            __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar7,0x80006a0);
                            uVar2 = (*pcVar7)(*(arg1 + 0x58));
                        } while (uVar2 < uVar6);
                    }
                    finish_wait(iVar5,&stack0xffffffffffffff70);
                }
                uVar3 = _raw_spin_lock_irqsave(iVar1);
                if (*(arg1 + 0x150) != 0) {
                    iVar5 = 0xffffff98;
                    goto code_r0x08004448;
                }
                pcVar7 = *(*(arg1 + 0x58) + 8);
                __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar7,0x80006a0);
                uVar2 = (*pcVar7)(*(arg1 + 0x58));
                if (uVar6 <= uVar2) {
                    *(arg1 + 0x180) = 0;
                }
                pcVar7 = *(*(arg1 + 0x58) + 8);
                __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar7,0x80006a0);
                uVar2 = (*pcVar7)(*(arg1 + 0x58));
            } while (uVar2 < uVar6);
            goto code_r0x080043dc;
        }
        iVar5 = 0xfffffff5;
    }
    else {
code_r0x080043dc:
        pcVar7 = *(*(arg1 + 0x58) + 0x20);
        __cfi_slowpath_diag(0x51abad1cc76803c3,pcVar7,0x80006c0);
        (*pcVar7)(*(arg1 + 0x58),arg2,arg3,arg4);
        mbox_send_message(*(arg1 + 0x48),0);
        mbox_client_txdone(*(arg1 + 0x48),0);
        iVar5 = 0;
    }
code_r0x08004448:
    _raw_spin_unlock_irqrestore(iVar1,uVar3);
code_r0x08004454:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    auVar9 = __stack_chk_fail();
    *extraout_x18 = 0x8004498;
    iVar5 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1e0);
    if (iVar5 == 0) {
        iVar5 = -0xc;
    }
    else {
        *(iVar5 + 0x7c) = 0;
        *(iVar5 + 0x90) = 0;
        __mutex_init(iVar5 + 0x160,"&channel->intent_req_lock",obj.qcom_glink_native_probe.__key);
        *(iVar5 + 0x70) = auVar9._0_8_;
        uVar3 = kstrdup(auVar9._8_8_,0xcc0);
        *(iVar5 + 0x80) = uVar3;
        *(iVar5 + 0x140) = 0;
        __init_swait_queue_head(iVar5 + 0x148,"&x->wait",obj.qcom_glink_native_probe.__key);
        *(iVar5 + 0x120) = 0;
        __init_swait_queue_head(iVar5 + 0x128,"&x->wait",obj.qcom_glink_native_probe.__key);
        *(iVar5 + 0x194) = 0;
        *(iVar5 + 0x198) = 0;
        __init_waitqueue_head(iVar5 + 0x1a0,"&channel->intent_req_ack",obj.qcom_glink_native_probe.__key);
        __init_waitqueue_head(iVar5 + 0x1b8,"&channel->intent_req_comp",obj.qcom_glink_native_probe.__key);
        *(iVar5 + 0x1d0) = 0;
        *(iVar5 + 0xf0) = iVar5 + 0xf0;
        *(iVar5 + 0xf8) = iVar5 + 0xf0;
        *(iVar5 + 0x100) = iVar5 + 0x100;
        *(iVar5 + 0x108) = iVar5 + 0x100;
        *(iVar5 + 0xe0) = 0;
        *(iVar5 + 0xe8) = 0;
        *(iVar5 + 200) = iVar5 + 200;
        *(iVar5 + 0xd0) = iVar5 + 200;
        *(iVar5 + 0xd8) = sym.qcom_glink_rx_done_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        *(iVar5 + 0xb8) = 0;
        *(iVar5 + 0xc0) = 0;
        *(iVar5 + 0x98) = 0x1000000400000000;
        *(iVar5 + 0xa0) = 0;
        *(iVar5 + 0xa8) = 0;
        *(iVar5 + 0xb0) = 0x1000000400000000;
        *(iVar5 + 0x78) = 1;
    }
    return iVar5;
}


// ===== sym.qcom_glink_alloc_channel @ 0x080044a8 (size 348) =====

int64_t sym.qcom_glink_alloc_channel(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = kmem_cache_alloc_trace(_kthread_worker_fn,0xdc0,0x1e0);
    if (iVar1 == 0) {
        iVar1 = -0xc;
    }
    else {
        *(iVar1 + 0x7c) = 0;
        *(iVar1 + 0x90) = 0;
        __mutex_init(iVar1 + 0x160,"&channel->intent_req_lock",obj.qcom_glink_native_probe.__key);
        *(iVar1 + 0x70) = arg1;
        uVar2 = kstrdup(arg2,0xcc0);
        *(iVar1 + 0x80) = uVar2;
        *(iVar1 + 0x140) = 0;
        __init_swait_queue_head(iVar1 + 0x148,"&x->wait",obj.qcom_glink_native_probe.__key);
        *(iVar1 + 0x120) = 0;
        __init_swait_queue_head(iVar1 + 0x128,"&x->wait",obj.qcom_glink_native_probe.__key);
        *(iVar1 + 0x194) = 0;
        *(iVar1 + 0x198) = 0;
        __init_waitqueue_head(iVar1 + 0x1a0,"&channel->intent_req_ack",obj.qcom_glink_native_probe.__key);
        __init_waitqueue_head(iVar1 + 0x1b8,"&channel->intent_req_comp",obj.qcom_glink_native_probe.__key);
        *(iVar1 + 0x1d0) = 0;
        *(iVar1 + 0xf0) = iVar1 + 0xf0;
        *(iVar1 + 0xf8) = iVar1 + 0xf0;
        *(iVar1 + 0x100) = iVar1 + 0x100;
        *(iVar1 + 0x108) = iVar1 + 0x100;
        *(iVar1 + 0xe0) = 0;
        *(iVar1 + 0xe8) = 0;
        *(iVar1 + 200) = iVar1 + 200;
        *(iVar1 + 0xd0) = iVar1 + 200;
        *(iVar1 + 0xd8) = sym.qcom_glink_rx_done_work.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        *(iVar1 + 0xb8) = 0;
        *(iVar1 + 0xc0) = 0;
        *(iVar1 + 0x98) = 0x1000000400000000;
        *(iVar1 + 0xa0) = 0;
        *(iVar1 + 0xa8) = 0;
        *(iVar1 + 0xb0) = 0x1000000400000000;
        *(iVar1 + 0x78) = 1;
    }
    return iVar1;
}


// ===== sym.qcom_glink_rpdev_release @ 0x08004604 (size 36) =====

void sym.qcom_glink_rpdev_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.qcom_glink_rx_done_work @ 0x08004628 (size 236) =====

void sym.qcom_glink_rx_done_work(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong noname_0;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = arg1 + -0x38;
    uVar3 = _raw_spin_lock_irqsave(iVar5);
    piVar6 = arg1 + 0x28;
    if (piVar6 != *piVar6) {
        piVar7 = *piVar6;
        do {
            piVar8 = *piVar7;
            uVar4 = __list_del_entry_valid(piVar7);
            if ((uVar4 & 1) != 0) {
                iVar1 = *piVar7;
                piVar2 = piVar7[1];
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            _raw_spin_unlock_irqrestore(iVar5,uVar3);
            sym.qcom_glink_send_rx_done(noname_0,arg1 + -200,piVar7 + -4,1);
            uVar3 = _raw_spin_lock_irqsave(iVar5);
            piVar7 = piVar8;
        } while (piVar6 != piVar8);
    }
    _raw_spin_unlock_irqrestore(iVar5,uVar3);
    return;
}


// ===== sym.qcom_glink_send_rx_done @ 0x08004714 (size 280) =====

int64_t * sym.qcom_glink_send_rx_done(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    char cVar2;
    uint32_t uVar3;
    bool bVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t in_x0;
    ulong uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar13;
    int64_t arg1_00;
    int64_t arg2_00;
    uint32_t *puVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    ulong uStack_180;
    int64_t iStack_178;
    uchar ***pppuStack_170;
    code *pcStack_168;
    uint32_t *puStack_160;
    int64_t iStack_158;
    int64_t iStack_150;
    int64_t iStack_148;
    int iStack_13c;
    ulong uStack_138;
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    uint64_t uStack_100;
    uchar auStack_f8 [16];
    int64_t iStack_e8;
    int64_t iStack_e0;
    int64_t *piStack_d8;
    int iStack_c4;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ushort uStack_50;
    ushort uStack_4e;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_48 = *(iVar10 + 0x5e0);
    uVar11 = 0;
    cVar2 = *(arg2 + 0x18);
    uVar1 = *(arg2 + 8);
    iVar10 = 8;
    uStack_50 = 6;
    if (cVar2 != '\0') {
        uStack_50 = 0xe;
    }
    uStack_4e = *(arg1 + 0x88);
    uStack_4c = uVar1;
    uVar5 = sym.qcom_glink_tx(in_x0,&uStack_50,8,0);
    if (uVar5 == 0) {
        if (*(arg2 + 0x10) == 0) {
            *arg2 = 0;
            if (cVar2 == '\0') goto code_r0x0800480c;
code_r0x0800479c:
            iVar12 = *(arg1 + 0x70);
        }
        else {
            if (cVar2 != '\0') goto code_r0x0800479c;
code_r0x0800480c:
            kfree(*arg2);
            kfree(arg2);
            iVar12 = *(arg1 + 0x70);
        }
        if (iVar12 != 0) {
            uVar11 = *(arg1 + 0x88);
            iVar10 = *(arg1 + 0x80);
            ipc_log_string(*(iVar12 + 0x188),"%s[%d:%d] %s: reuse:%d liid:%d",iVar10,uVar11,*(arg1 + 0x8c),
                           "qcom_glink_send_rx_done",cVar2,uVar1);
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_48) {
        return uVar5;
    }
    auVar15 = __stack_chk_fail();
    puVar14 = auVar15._8_8_;
    iVar13 = auVar15._0_8_;
    *extraout_x18 = sym.qcom_glink_create_ept;
    pcStack_a8 = sym.qcom_glink_create_ept;
    iVar12 = sp_el0;
    iStack_b8 = *(iVar12 + 0x5e0);
    arg1_00 = *(*(iVar13 + 0x3c8) + 0x70);
    iVar12 = arg1_00 + 0x11c;
    puStack_b0 = &stack0xffffffffffffffc0;
    uVar7 = _raw_spin_lock_irqsave(iVar12);
    iStack_c4 = 0;
    piVar8 = idr_get_next(arg1_00 + 0x138,&iStack_c4);
    while (piVar8 != NULL) {
        iVar6 = strcmp(piVar8[0x10],uVar11);
        if (iVar6 == 0) {
            _raw_spin_unlock_irqrestore(iVar12,uVar7);
            if (piVar8[0xe] == 0) {
                uStack_c0._0_4_ = CONCAT22(*(piVar8 + 0x8c),4);
                uStack_c0 = uStack_c0;
            }
            else {
                ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar8[0x10],piVar8[0x11],*(piVar8 + 0x8c)
                               ,"qcom_glink_create_remote");
                uStack_c0._0_4_ = CONCAT22(*(piVar8 + 0x8c),4);
                uStack_c0 = uStack_c0;
                if (piVar8[0xe] != 0) {
                    ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar8[0x10],piVar8[0x11],
                                   *(piVar8 + 0x8c),"qcom_glink_send_open_ack");
                }
            }
            sym.qcom_glink_tx(arg1_00,&uStack_c0,8,0);
            iVar6 = sym.qcom_glink_send_open_req(arg1_00,piVar8);
            if (iVar6 == 0) {
                iVar6 = wait_for_completion_timeout(piVar8 + 0x24,0x4e2);
                if (iVar6 != 0) goto code_r0x080048f8;
                iVar6 = -0x6e;
                iVar13 = piVar8[0xe];
                if (iVar13 == 0) goto code_r0x08004ab8;
code_r0x08004a40:
                ipc_log_string(*(iVar13 + 0x188),"%s[%d:%d] %s: close_link %d\n",piVar8[0x10],piVar8[0x11],
                               *(piVar8 + 0x8c),"qcom_glink_create_remote",iVar6);
                uStack_c0._0_4_ = CONCAT22(piVar8[0x11],3);
                uStack_c0 = uStack_c0;
                if (piVar8[0xe] != 0) {
                    ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar8[0x10],piVar8[0x11],
                                   *(piVar8 + 0x8c),"qcom_glink_send_close_req");
                }
            }
            else {
                iVar13 = piVar8[0xe];
                if (iVar13 != 0) goto code_r0x08004a40;
code_r0x08004ab8:
                uStack_c0._0_4_ = CONCAT22(piVar8[0x11],3);
                uStack_c0 = uStack_c0;
            }
            sym.qcom_glink_tx(arg1_00,&uStack_c0,8,0);
            goto code_r0x08004ae4;
        }
        iStack_c4 = iStack_c4 + 1;
        piVar8 = idr_get_next(arg1_00 + 0x138,&iStack_c4);
    }
    _raw_spin_unlock_irqrestore(iVar12,uVar7);
    piVar8 = sym.qcom_glink_create_local(arg1_00);
    if (piVar8 < 0xfffffffffffff001) {
code_r0x080048f8:
        if (piVar8[0xe] == 0) {
            *piVar8 = iVar13;
            piVar8[2] = puVar14;
            *(piVar8 + 10) = 1;
            piVar8[0xb] = iVar10;
            piVar8[0xc] = reloc.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        }
        else {
            ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: Initializing ept\n",piVar8[0x10],piVar8[0x11],
                           *(piVar8 + 0x8c),"qcom_glink_create_ept");
            *piVar8 = iVar13;
            piVar8[2] = puVar14;
            piVar8[0xb] = iVar10;
            piVar8[0xc] = reloc.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            *(piVar8 + 10) = 1;
            if (piVar8[0xe] != 0) {
                ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: Initialized ept\n",piVar8[0x10],piVar8[0x11],
                               *(piVar8 + 0x8c),"qcom_glink_create_ept");
            }
        }
    }
    else {
code_r0x08004ae4:
        piVar8 = NULL;
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_b8) {
        return piVar8;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.qcom_glink_announce_create;
    pcStack_118 = sym.qcom_glink_announce_create;
    iVar13 = sp_el0;
    iStack_128 = *(iVar13 + 0x5e0);
    iVar13 = *(iVar9 + 0x3c8);
    arg2_00 = *(iVar9 + 0x2f0);
    iVar9 = *(iVar13 + 0x70);
    uStack_138 = *0x8001718;
    uStack_130 = *0x8001720;
    ppuStack_120 = &puStack_b0;
    iStack_110 = iVar12;
    uStack_100 = uVar11;
    iStack_e8 = iVar10;
    iStack_e0 = arg1_00;
    piStack_d8 = piVar8;
    auStack_f8 = auVar15;
    if (iVar9 != 0) {
        ipc_log_string(*(iVar9 + 0x188),"%s[%d:%d] %s: Entered\n",*(iVar13 + 0x80),*(iVar13 + 0x88),*(iVar13 + 0x8c)
                       ,"qcom_glink_announce_create");
    }
    if (*(iVar9 + 0x160) != '\0') goto code_r0x08004ca0;
    uVar11 = completion_done(iVar13 + 0x120);
    if ((uVar11 & 1) == 0) goto code_r0x08004ca0;
    puVar14 = iVar13 + 0x90;
    *(iVar13 + 0x191) = 1;
    uVar7 = _raw_spin_lock_irqsave(puVar14);
    iStack_13c = 0;
    iVar10 = idr_get_next(iVar13 + 0x98,&iStack_13c);
    while (iVar10 != 0) {
        if ((*(iVar10 + 0x18) == '\0') && (*(iVar10 + 0x1a) == '\0')) {
            _raw_spin_unlock_irqrestore(puVar14,uVar7);
            sym.qcom_glink_advertise_intent(iVar9,iVar13,iVar10);
            uVar7 = _raw_spin_lock_irqsave(puVar14);
        }
        iStack_13c = iStack_13c + 1;
        iVar10 = idr_get_next(iVar13 + 0x98,&iStack_13c);
    }
    _raw_spin_unlock_irqrestore(puVar14,uVar7);
    iVar10 = of_find_property(arg2_00,"qcom,intents",0);
    if (iVar10 == 0) {
        puVar14 = &uStack_138;
        iVar6 = 2;
code_r0x08004cfc:
        do {
            uVar5 = puVar14[1];
            iVar6 = iVar6 + -1;
            if (uVar5 != 0) {
                uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
                uVar3 = (*puVar14 & 0xff00ff00) >> 8 | (*puVar14 & 0xff00ff) << 8;
                arg2_00 = uVar3 >> 0x10 | uVar3 << 0x10;
                do {
                    iVar10 = sym.qcom_glink_alloc_intent(iVar13,arg2_00,1);
                    if (iVar10 == 0) break;
                    uVar5 = uVar5 - 1;
                    sym.qcom_glink_advertise_intent(iVar9,iVar13,iVar10);
                } while (uVar5 != 0);
            }
            puVar14 = puVar14 + 2;
        } while (iVar6 != 0);
    }
    else if (7 < *(iVar10 + 8)) {
        puVar14 = *(iVar10 + 0x10);
        iVar6 = *(iVar10 + 8) >> 3;
        goto code_r0x08004cfc;
    }
    if (*(iVar13 + 0x70) != 0) {
        ipc_log_string(*(*(iVar13 + 0x70) + 0x188),"%s[%d:%d] %s: Exit\n",*(iVar13 + 0x80),*(iVar13 + 0x88),
                       *(iVar13 + 0x8c),"qcom_glink_announce_create");
    }
code_r0x08004ca0:
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_128) {
        return NULL;
    }
    auVar15 = __stack_chk_fail();
    iVar12 = auVar15._0_8_;
    *extraout_x18_01 = sym.qcom_glink_create_local;
    pcStack_168 = sym.qcom_glink_create_local;
    iVar10 = sp_el0;
    iStack_178 = *(iVar10 + 0x5e0);
    pppuStack_170 = &ppuStack_120;
    puStack_160 = puVar14;
    iStack_158 = arg2_00;
    iStack_150 = iVar9;
    iStack_148 = iVar13;
    piVar8 = sym.qcom_glink_alloc_channel(iVar12,auVar15._8_8_);
    if (0xfffffffffffff000 < piVar8) goto code_r0x08004f64;
    if (piVar8[0xe] != 0) {
        ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar8[0x10],piVar8[0x11],*(piVar8 + 0x8c),
                       "qcom_glink_create_local");
    }
    iVar6 = sym.qcom_glink_send_open_req(iVar12,piVar8);
    if (iVar6 == 0) {
        iVar6 = wait_for_completion_timeout(piVar8 + 0x24,0x4e2);
        if (iVar6 != 0) {
            iVar6 = wait_for_completion_timeout(piVar8 + 0x28,0x4e2);
            if (iVar6 != 0) {
                uStack_180 = CONCAT22(*(piVar8 + 0x8c),4);
                if (piVar8[0xe] != 0) {
                    ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar8[0x10],piVar8[0x11],
                                   *(piVar8 + 0x8c),"qcom_glink_send_open_ack");
                }
                sym.qcom_glink_tx(iVar12,&uStack_180,8,0);
                goto code_r0x08004f64;
            }
        }
        if (piVar8[0xe] != 0) {
            ipc_log_string(*(piVar8[0xe] + 0x188),"%s[%d:%d] %s: err_timeout\n",piVar8[0x10],piVar8[0x11],
                           *(piVar8 + 0x8c),"qcom_glink_create_local");
        }
        uVar7 = _raw_spin_lock_irqsave(iVar12 + 0x11c);
        idr_remove(iVar12 + 0x120,piVar8[0x11]);
        _raw_spin_unlock_irqrestore(iVar12 + 0x11c,uVar7);
        iVar10 = piVar8[0xe];
    }
    else {
        iVar10 = piVar8[0xe];
    }
    if (iVar10 != 0) {
        ipc_log_string(*(iVar10 + 0x188),"%s[%d:%d] %s: release_channel\n",piVar8[0x10],piVar8[0x11],
                       *(piVar8 + 0x8c),"qcom_glink_create_local");
    }
    piVar8 = piVar8 + 0xf;
    uVar7 = 1;
    while( true ) {
        Hint_Prefetch(piVar8,2,0,1);
        do {
            iVar6 = *piVar8;
            cVar2 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
                *piVar8 = iVar6 - uVar7;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar6 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(piVar8);
        }
        else if (iVar6 < 1) {
            refcount_warn_saturate(piVar8,3);
        }
        Hint_Prefetch(piVar8,2,0,1);
        do {
            iVar6 = *piVar8;
            cVar2 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar8,0x10);
            if (bVar4) {
                *piVar8 = iVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar6 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(piVar8);
        }
        else if (iVar6 < 1) {
            refcount_warn_saturate(piVar8,3);
        }
        piVar8 = 0xffffffffffffff92;
code_r0x08004f64:
        iVar10 = sp_el0;
        if (*(iVar10 + 0x5e0) == iStack_178) break;
        __stack_chk_fail();
        uVar7 = extraout_x9;
    }
    return piVar8;
}


// ===== sym.qcom_glink_create_ept @ 0x0800482c (size 768) =====

int64_t * sym.qcom_glink_create_ept(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    ulong uVar5;
    int64_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    int64_t iVar11;
    int64_t arg2_00;
    uint32_t uVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    ulong uStack_130;
    int64_t iStack_128;
    uchar **ppuStack_120;
    code *pcStack_118;
    uint32_t *puStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    int64_t iStack_f8;
    int iStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    int64_t *piStack_88;
    int iStack_74;
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar11 = *(*(arg1 + 0x3c8) + 0x70);
    iVar9 = iVar11 + 0x11c;
    uVar5 = _raw_spin_lock_irqsave(iVar9);
    iStack_74 = 0;
    piVar6 = idr_get_next(iVar11 + 0x138,&iStack_74);
    while (piVar6 != NULL) {
        iVar4 = strcmp(piVar6[0x10],arg4);
        if (iVar4 == 0) {
            _raw_spin_unlock_irqrestore(iVar9,uVar5);
            if (piVar6[0xe] == 0) {
                uStack_70._0_4_ = CONCAT22(*(piVar6 + 0x8c),4);
                uStack_70 = uStack_70;
            }
            else {
                ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c)
                               ,"qcom_glink_create_remote");
                uStack_70._0_4_ = CONCAT22(*(piVar6 + 0x8c),4);
                uStack_70 = uStack_70;
                if (piVar6[0xe] != 0) {
                    ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],
                                   *(piVar6 + 0x8c),"qcom_glink_send_open_ack");
                }
            }
            sym.qcom_glink_tx(iVar11,&uStack_70,8,0);
            iVar4 = sym.qcom_glink_send_open_req(iVar11,piVar6);
            if (iVar4 == 0) {
                iVar4 = wait_for_completion_timeout(piVar6 + 0x24,0x4e2);
                if (iVar4 != 0) goto code_r0x080048f8;
                iVar4 = -0x6e;
                iVar10 = piVar6[0xe];
                if (iVar10 == 0) goto code_r0x08004ab8;
code_r0x08004a40:
                ipc_log_string(*(iVar10 + 0x188),"%s[%d:%d] %s: close_link %d\n",piVar6[0x10],piVar6[0x11],
                               *(piVar6 + 0x8c),"qcom_glink_create_remote",iVar4);
                uStack_70._0_4_ = CONCAT22(piVar6[0x11],3);
                uStack_70 = uStack_70;
                if (piVar6[0xe] != 0) {
                    ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],
                                   *(piVar6 + 0x8c),"qcom_glink_send_close_req");
                }
            }
            else {
                iVar10 = piVar6[0xe];
                if (iVar10 != 0) goto code_r0x08004a40;
code_r0x08004ab8:
                uStack_70._0_4_ = CONCAT22(piVar6[0x11],3);
                uStack_70 = uStack_70;
            }
            sym.qcom_glink_tx(iVar11,&uStack_70,8,0);
            goto code_r0x08004ae4;
        }
        iStack_74 = iStack_74 + 1;
        piVar6 = idr_get_next(iVar11 + 0x138,&iStack_74);
    }
    _raw_spin_unlock_irqrestore(iVar9,uVar5);
    piVar6 = sym.qcom_glink_create_local(iVar11);
    if (piVar6 < 0xfffffffffffff001) {
code_r0x080048f8:
        if (piVar6[0xe] == 0) {
            *piVar6 = arg1;
            piVar6[2] = arg2;
            *(piVar6 + 10) = 1;
            piVar6[0xb] = arg3;
            piVar6[0xc] = reloc.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
        }
        else {
            ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: Initializing ept\n",piVar6[0x10],piVar6[0x11],
                           *(piVar6 + 0x8c),"qcom_glink_create_ept");
            *piVar6 = arg1;
            piVar6[2] = arg2;
            piVar6[0xb] = arg3;
            piVar6[0xc] = reloc.qcom_glink_destroy_ept.7233d5d5ea6999cccbabdcee554cdcc4.cfi_jt;
            *(piVar6 + 10) = 1;
            if (piVar6[0xe] != 0) {
                ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: Initialized ept\n",piVar6[0x10],piVar6[0x11],
                               *(piVar6 + 0x8c),"qcom_glink_create_ept");
            }
        }
    }
    else {
code_r0x08004ae4:
        piVar6 = NULL;
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return piVar6;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_announce_create;
    pcStack_c8 = sym.qcom_glink_announce_create;
    iVar10 = sp_el0;
    iStack_d8 = *(iVar10 + 0x5e0);
    iVar10 = *(iVar7 + 0x3c8);
    arg2_00 = *(iVar7 + 0x2f0);
    iVar7 = *(iVar10 + 0x70);
    uStack_e8 = *0x8001718;
    uStack_e0 = *0x8001720;
    puStack_d0 = &stack0xffffffffffffffa0;
    iStack_c0 = iVar9;
    iStack_b0 = arg4;
    iStack_a8 = arg1;
    iStack_a0 = arg2;
    iStack_98 = arg3;
    iStack_90 = iVar11;
    piStack_88 = piVar6;
    if (iVar7 != 0) {
        ipc_log_string(*(iVar7 + 0x188),"%s[%d:%d] %s: Entered\n",*(iVar10 + 0x80),*(iVar10 + 0x88),*(iVar10 + 0x8c)
                       ,"qcom_glink_announce_create");
    }
    if ((*(iVar7 + 0x160) != '\0') || (uVar8 = completion_done(iVar10 + 0x120), (uVar8 & 1) == 0))
    goto code_r0x08004ca0;
    arg2 = iVar10 + 0x90;
    *(iVar10 + 0x191) = 1;
    uVar5 = _raw_spin_lock_irqsave(arg2);
    iStack_ec = 0;
    iVar9 = idr_get_next(iVar10 + 0x98,&iStack_ec);
    while (iVar9 != 0) {
        if ((*(iVar9 + 0x18) == '\0') && (*(iVar9 + 0x1a) == '\0')) {
            _raw_spin_unlock_irqrestore(arg2,uVar5);
            sym.qcom_glink_advertise_intent(iVar7,iVar10,iVar9);
            uVar5 = _raw_spin_lock_irqsave(arg2);
        }
        iStack_ec = iStack_ec + 1;
        iVar9 = idr_get_next(iVar10 + 0x98,&iStack_ec);
    }
    _raw_spin_unlock_irqrestore(arg2,uVar5);
    iVar9 = of_find_property(arg2_00,"qcom,intents",0);
    if (iVar9 == 0) {
        arg2 = &uStack_e8;
        iVar4 = 2;
code_r0x08004cfc:
        do {
            uVar12 = *(arg2 + 4);
            iVar4 = iVar4 + -1;
            if (uVar12 != 0) {
                uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                uVar1 = (*arg2 & 0xff00ff00) >> 8 | (*arg2 & 0xff00ff) << 8;
                arg2_00 = uVar1 >> 0x10 | uVar1 << 0x10;
                do {
                    iVar9 = sym.qcom_glink_alloc_intent(iVar10,arg2_00,1);
                    if (iVar9 == 0) break;
                    uVar12 = uVar12 - 1;
                    sym.qcom_glink_advertise_intent(iVar7,iVar10,iVar9);
                } while (uVar12 != 0);
            }
            arg2 = arg2 + 8;
        } while (iVar4 != 0);
    }
    else if (7 < *(iVar9 + 8)) {
        arg2 = *(iVar9 + 0x10);
        iVar4 = *(iVar9 + 8) >> 3;
        goto code_r0x08004cfc;
    }
    if (*(iVar10 + 0x70) != 0) {
        ipc_log_string(*(*(iVar10 + 0x70) + 0x188),"%s[%d:%d] %s: Exit\n",*(iVar10 + 0x80),*(iVar10 + 0x88),
                       *(iVar10 + 0x8c),"qcom_glink_announce_create");
    }
code_r0x08004ca0:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_d8) {
        return NULL;
    }
    auVar13 = __stack_chk_fail();
    iVar11 = auVar13._0_8_;
    *extraout_x18_00 = sym.qcom_glink_create_local;
    pcStack_118 = sym.qcom_glink_create_local;
    iVar9 = sp_el0;
    iStack_128 = *(iVar9 + 0x5e0);
    ppuStack_120 = &puStack_d0;
    puStack_110 = arg2;
    iStack_108 = arg2_00;
    iStack_100 = iVar7;
    iStack_f8 = iVar10;
    piVar6 = sym.qcom_glink_alloc_channel(iVar11,auVar13._8_8_);
    if (0xfffffffffffff000 < piVar6) goto code_r0x08004f64;
    if (piVar6[0xe] != 0) {
        ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c),
                       "qcom_glink_create_local");
    }
    iVar4 = sym.qcom_glink_send_open_req(iVar11,piVar6);
    if (iVar4 == 0) {
        iVar4 = wait_for_completion_timeout(piVar6 + 0x24,0x4e2);
        if ((iVar4 != 0) && (iVar4 = wait_for_completion_timeout(piVar6 + 0x28,0x4e2), iVar4 != 0)) {
            uStack_130 = CONCAT22(*(piVar6 + 0x8c),4);
            if (piVar6[0xe] != 0) {
                ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: \n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c)
                               ,"qcom_glink_send_open_ack");
            }
            sym.qcom_glink_tx(iVar11,&uStack_130,8,0);
            goto code_r0x08004f64;
        }
        if (piVar6[0xe] != 0) {
            ipc_log_string(*(piVar6[0xe] + 0x188),"%s[%d:%d] %s: err_timeout\n",piVar6[0x10],piVar6[0x11],
                           *(piVar6 + 0x8c),"qcom_glink_create_local");
        }
        uVar5 = _raw_spin_lock_irqsave(iVar11 + 0x11c);
        idr_remove(iVar11 + 0x120,piVar6[0x11]);
        _raw_spin_unlock_irqrestore(iVar11 + 0x11c,uVar5);
        iVar9 = piVar6[0xe];
    }
    else {
        iVar9 = piVar6[0xe];
    }
    if (iVar9 != 0) {
        ipc_log_string(*(iVar9 + 0x188),"%s[%d:%d] %s: release_channel\n",piVar6[0x10],piVar6[0x11],*(piVar6 + 0x8c)
                       ,"qcom_glink_create_local");
    }
    piVar6 = piVar6 + 0xf;
    uVar5 = 1;
    while( true ) {
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar4 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar4 - uVar5;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(piVar6);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar6,3);
        }
        Hint_Prefetch(piVar6,2,0,1);
        do {
            iVar4 = *piVar6;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar6,0x10);
            if (bVar3) {
                *piVar6 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(piVar6);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(piVar6,3);
        }
        piVar6 = 0xffffffffffffff92;
code_r0x08004f64:
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_128) break;
        __stack_chk_fail();
        uVar5 = extraout_x9;
    }
    return piVar6;
}


// ===== sym.qcom_glink_announce_create @ 0x08004b2c (size 544) =====

int * sym.qcom_glink_announce_create(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    bool bVar3;
    int iVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t arg1_00;
    int *arg2;
    ulong extraout_x9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t arg1_01;
    int64_t arg2_00;
    uint32_t *unaff_x22;
    uint32_t uVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint32_t *puStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int iStack_6c;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x3c8);
    arg2_00 = *(arg1 + 0x2f0);
    arg1_01 = *(iVar8 + 0x70);
    uStack_68 = *0x8001718;
    uStack_60 = *0x8001720;
    if (arg1_01 != 0) {
        ipc_log_string(*(arg1_01 + 0x188),"%s[%d:%d] %s: Entered\n",*(iVar8 + 0x80),*(iVar8 + 0x88),*(iVar8 + 0x8c)
                       ,"qcom_glink_announce_create");
    }
    if ((*(arg1_01 + 0x160) != '\0') || (uVar5 = completion_done(iVar8 + 0x120), (uVar5 & 1) == 0))
    goto code_r0x08004ca0;
    unaff_x22 = iVar8 + 0x90;
    *(iVar8 + 0x191) = 1;
    uVar6 = _raw_spin_lock_irqsave(unaff_x22);
    iStack_6c = 0;
    iVar7 = idr_get_next(iVar8 + 0x98,&iStack_6c);
    while (iVar7 != 0) {
        if ((*(iVar7 + 0x18) == '\0') && (*(iVar7 + 0x1a) == '\0')) {
            _raw_spin_unlock_irqrestore(unaff_x22,uVar6);
            sym.qcom_glink_advertise_intent(arg1_01,iVar8,iVar7);
            uVar6 = _raw_spin_lock_irqsave(unaff_x22);
        }
        iStack_6c = iStack_6c + 1;
        iVar7 = idr_get_next(iVar8 + 0x98,&iStack_6c);
    }
    _raw_spin_unlock_irqrestore(unaff_x22,uVar6);
    iVar7 = of_find_property(arg2_00,"qcom,intents",0);
    if (iVar7 == 0) {
        unaff_x22 = &uStack_68;
        iVar4 = 2;
code_r0x08004cfc:
        do {
            uVar9 = unaff_x22[1];
            iVar4 = iVar4 + -1;
            if (uVar9 != 0) {
                uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
                uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
                uVar1 = (*unaff_x22 & 0xff00ff00) >> 8 | (*unaff_x22 & 0xff00ff) << 8;
                arg2_00 = uVar1 >> 0x10 | uVar1 << 0x10;
                do {
                    iVar7 = sym.qcom_glink_alloc_intent(iVar8,arg2_00,1);
                    if (iVar7 == 0) break;
                    uVar9 = uVar9 - 1;
                    sym.qcom_glink_advertise_intent(arg1_01,iVar8,iVar7);
                } while (uVar9 != 0);
            }
            unaff_x22 = unaff_x22 + 2;
        } while (iVar4 != 0);
    }
    else if (7 < *(iVar7 + 8)) {
        unaff_x22 = *(iVar7 + 0x10);
        iVar4 = *(iVar7 + 8) >> 3;
        goto code_r0x08004cfc;
    }
    if (*(iVar8 + 0x70) != 0) {
        ipc_log_string(*(*(iVar8 + 0x70) + 0x188),"%s[%d:%d] %s: Exit\n",*(iVar8 + 0x80),*(iVar8 + 0x88),
                       *(iVar8 + 0x8c),"qcom_glink_announce_create");
    }
code_r0x08004ca0:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_58) {
        return NULL;
    }
    auVar10 = __stack_chk_fail();
    arg1_00 = auVar10._0_8_;
    *extraout_x18 = sym.qcom_glink_create_local;
    pcStack_98 = sym.qcom_glink_create_local;
    iVar7 = sp_el0;
    iStack_a8 = *(iVar7 + 0x5e0);
    puStack_a0 = &stack0xffffffffffffffb0;
    puStack_90 = unaff_x22;
    iStack_88 = arg2_00;
    iStack_80 = arg1_01;
    iStack_78 = iVar8;
    arg2 = sym.qcom_glink_alloc_channel(arg1_00,auVar10._8_8_);
    if (0xfffffffffffff000 < arg2) goto code_r0x08004f64;
    if (*(arg2 + 0x1c) != 0) {
        ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                       "qcom_glink_create_local");
    }
    iVar4 = sym.qcom_glink_send_open_req(arg1_00,arg2);
    if (iVar4 == 0) {
        iVar4 = wait_for_completion_timeout(arg2 + 0x48,0x4e2);
        if ((iVar4 != 0) && (iVar4 = wait_for_completion_timeout(arg2 + 0x50,0x4e2), iVar4 != 0)) {
            uStack_b0 = CONCAT22(arg2[0x23],4);
            if (*(arg2 + 0x1c) != 0) {
                ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                               "qcom_glink_send_open_ack");
            }
            sym.qcom_glink_tx(arg1_00,&uStack_b0,8,0);
            goto code_r0x08004f64;
        }
        if (*(arg2 + 0x1c) != 0) {
            ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: err_timeout\n",*(arg2 + 0x20),arg2[0x22],
                           arg2[0x23],"qcom_glink_create_local");
        }
        uVar6 = _raw_spin_lock_irqsave(arg1_00 + 0x11c);
        idr_remove(arg1_00 + 0x120,arg2[0x22]);
        _raw_spin_unlock_irqrestore(arg1_00 + 0x11c,uVar6);
        iVar8 = *(arg2 + 0x1c);
    }
    else {
        iVar8 = *(arg2 + 0x1c);
    }
    if (iVar8 != 0) {
        ipc_log_string(*(iVar8 + 0x188),"%s[%d:%d] %s: release_channel\n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                       "qcom_glink_create_local");
    }
    arg2 = arg2 + 0x1e;
    uVar6 = 1;
    while( true ) {
        Hint_Prefetch(arg2,2,0,1);
        do {
            iVar4 = *arg2;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar3) {
                *arg2 = iVar4 - uVar6;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(arg2);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(arg2,3);
        }
        Hint_Prefetch(arg2,2,0,1);
        do {
            iVar4 = *arg2;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar3) {
                *arg2 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(arg2);
        }
        else if (iVar4 < 1) {
            refcount_warn_saturate(arg2,3);
        }
        arg2 = 0xffffffffffffff92;
code_r0x08004f64:
        iVar8 = sp_el0;
        if (*(iVar8 + 0x5e0) == iStack_a8) break;
        __stack_chk_fail();
        uVar6 = extraout_x9;
    }
    return arg2;
}


// ===== sym.qcom_glink_create_local @ 0x08004d4c (size 656) =====

int * sym.qcom_glink_create_local(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    int *arg2;
    int64_t in_x1;
    int64_t iVar4;
    ulong uVar5;
    ulong extraout_x9;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    arg2 = sym.qcom_glink_alloc_channel(arg1,in_x1);
    if (0xfffffffffffff000 < arg2) goto code_r0x08004f64;
    if (*(arg2 + 0x1c) != 0) {
        ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                       "qcom_glink_create_local");
    }
    iVar3 = sym.qcom_glink_send_open_req(arg1,arg2);
    if (iVar3 == 0) {
        iVar3 = wait_for_completion_timeout(arg2 + 0x48,0x4e2);
        if ((iVar3 != 0) && (iVar3 = wait_for_completion_timeout(arg2 + 0x50,0x4e2), iVar3 != 0)) {
            uStack_40 = CONCAT22(arg2[0x23],4);
            if (*(arg2 + 0x1c) != 0) {
                ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: \n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                               "qcom_glink_send_open_ack");
            }
            sym.qcom_glink_tx(arg1,&uStack_40,8,0);
            goto code_r0x08004f64;
        }
        if (*(arg2 + 0x1c) != 0) {
            ipc_log_string(*(*(arg2 + 0x1c) + 0x188),"%s[%d:%d] %s: err_timeout\n",*(arg2 + 0x20),arg2[0x22],
                           arg2[0x23],"qcom_glink_create_local");
        }
        uVar5 = _raw_spin_lock_irqsave(arg1 + 0x11c);
        idr_remove(arg1 + 0x120,arg2[0x22]);
        _raw_spin_unlock_irqrestore(arg1 + 0x11c,uVar5);
        iVar4 = *(arg2 + 0x1c);
    }
    else {
        iVar4 = *(arg2 + 0x1c);
    }
    if (iVar4 != 0) {
        ipc_log_string(*(iVar4 + 0x188),"%s[%d:%d] %s: release_channel\n",*(arg2 + 0x20),arg2[0x22],arg2[0x23],
                       "qcom_glink_create_local");
    }
    arg2 = arg2 + 0x1e;
    uVar5 = 1;
    while( true ) {
        Hint_Prefetch(arg2,2,0,1);
        do {
            iVar3 = *arg2;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar2) {
                *arg2 = iVar3 - uVar5;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(arg2);
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(arg2,3);
        }
        Hint_Prefetch(arg2,2,0,1);
        do {
            iVar3 = *arg2;
            cVar1 = '\x01';
            bVar2 = ExclusiveMonitorPass(arg2,0x10);
            if (bVar2) {
                *arg2 = iVar3 + -1;
                cVar1 = ExclusiveMonitorsStatus();
            }
        } while (cVar1 != '\0');
        if (iVar3 == 1) {
            DataMemoryBarrier(2,1);
            sym.qcom_glink_channel_release(arg2);
        }
        else if (iVar3 < 1) {
            refcount_warn_saturate(arg2,3);
        }
        arg2 = 0xffffffffffffff92;
code_r0x08004f64:
        iVar4 = sp_el0;
        if (*(iVar4 + 0x5e0) == iStack_38) break;
        __stack_chk_fail();
        uVar5 = extraout_x9;
    }
    return arg2;
}


// ===== sym.qcom_glink_send_open_req @ 0x08004fdc (size 516) =====

int sym.qcom_glink_send_open_req(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char cVar4;
    bool bVar5;
    int iVar6;
    int iVar7;
    uint32_t *puVar8;
    ulong uVar9;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    iVar6 = strlen(*(arg2 + 0x80));
    puVar8 = arg2 + 0x78;
    do {
        Hint_Prefetch(puVar8,2,0,1);
        do {
            uVar3 = *puVar8;
            cVar4 = '\x01';
            bVar5 = ExclusiveMonitorPass(puVar8,0x10);
            if (bVar5) {
                *puVar8 = uVar3 + 1;
                cVar4 = ExclusiveMonitorsStatus();
            }
        } while (cVar4 != '\0');
        if (uVar3 == 0) {
            uVar9 = 2;
code_r0x080051c0:
            refcount_warn_saturate(puVar8,uVar9);
        }
        else if ((uVar3 + 1 | uVar3) < 0) {
            uVar9 = 1;
            goto code_r0x080051c0;
        }
        iVar1 = arg1 + 0x11c;
        uVar9 = _raw_spin_lock_irqsave(iVar1);
        iVar2 = arg1 + 0x120;
        iVar7 = idr_alloc_cyclic(iVar2,arg2,1,0x10000,0xa20);
        _raw_spin_unlock_irqrestore(iVar1,uVar9);
        if (-1 < iVar7) {
            *(arg2 + 0x88) = iVar7;
            if (*(arg2 + 0x70) != 0) {
                ipc_log_string(*(*(arg2 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(arg2 + 0x80),iVar7,*(arg2 + 0x8c),
                               "qcom_glink_send_open_req");
                iVar7 = *(arg2 + 0x88);
            }
            uStack_80 = CONCAT62(iVar7,2);
            uStack_80 = CONCAT44(iVar6 + 1,uStack_80);
            strscpy(&uStack_78,*(arg2 + 0x80),0x20);
            iVar7 = sym.qcom_glink_tx(arg1,&uStack_80,iVar6 + 0x10 & 0xfffffffffffffff8,0);
            if (iVar7 != 0) {
                if (*(arg2 + 0x70) != 0) {
                    ipc_log_string(*(*(arg2 + 0x70) + 0x188),"%s[%d:%d] %s: remote_idr\n",*(arg2 + 0x80),
                                   *(arg2 + 0x88),*(arg2 + 0x8c),"qcom_glink_send_open_req");
                }
                arg1 = _raw_spin_lock_irqsave(iVar1);
                idr_remove(iVar2,*(arg2 + 0x88));
                *(arg2 + 0x88) = 0;
                _raw_spin_unlock_irqrestore(iVar1,arg1);
            }
        }
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_58) {
            return iVar7;
        }
        puVar8 = __stack_chk_fail();
    } while( true );
}


// ===== sym.qcom_glink_destroy_ept @ 0x080051e0 (size 232) =====

void sym.qcom_glink_destroy_ept(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t in_x2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar3;
    ulong unaff_x30;
    uchar auVar4 [16];
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar1 = arg1 + 0x7c;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = *(arg1 + 0x70);
    uVar2 = _raw_spin_lock_irqsave(iVar1);
    if (*(arg1 + 0x10) == 0) {
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
    }
    else {
        *(arg1 + 0x10) = 0;
        _raw_spin_unlock_irqrestore(iVar1,uVar2);
        uStack_40 = CONCAT22(*(arg1 + 0x88),3);
        if (*(arg1 + 0x70) != 0) {
            ipc_log_string(*(*(arg1 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(arg1 + 0x80),*(arg1 + 0x88),*(arg1 + 0x8c)
                           ,"qcom_glink_send_close_req");
        }
        in_x2 = 8;
        sym.qcom_glink_tx(iVar3,&uStack_40,8,0);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar4 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_send;
    sym.__qcom_glink_send(auVar4._0_8_,auVar4._8_8_,in_x2,1);
    return;
}


// ===== sym.qcom_glink_send @ 0x080052c8 (size 40) =====

void sym.qcom_glink_send(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(arg1,arg2,arg3,1);
    return;
}


// ===== sym.qcom_glink_sendto @ 0x080052f0 (size 40) =====

void sym.qcom_glink_sendto(int64_t arg4,int64_t arg2,int64_t arg3)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(arg4,arg2,arg3,1);
    return;
}


// ===== sym.qcom_glink_trysend @ 0x08005318 (size 40) =====

void sym.qcom_glink_trysend(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(arg1,in_x1,arg2,0);
    return;
}


// ===== sym.qcom_glink_trysendto @ 0x08005340 (size 40) =====

void sym.qcom_glink_trysendto(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_glink_send(arg1,in_x1,arg2,0);
    return;
}


// ===== sym.qcom_glink_rx_done @ 0x08005368 (size 220) =====

ulong sym.qcom_glink_rx_done(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint64_t uVar5;
    ulong noname_0;
    ulong *in_x18;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = arg1 + 0x90;
    uVar4 = _raw_spin_lock_irqsave(iVar1);
    piVar6 = arg1 + 0x100;
    do {
        piVar6 = *piVar6;
        if (piVar6 == arg1 + 0x100) {
            _raw_spin_unlock_irqrestore(iVar1,uVar4);
            return 0xffffffea;
        }
    } while (piVar6[-4] != arg2);
    uVar5 = __list_del_entry_valid(piVar6);
    if ((uVar5 & 1) != 0) {
        iVar2 = *piVar6;
        piVar3 = piVar6[1];
        *(iVar2 + 8) = piVar3;
        *piVar3 = iVar2;
    }
    *piVar6 = -0x2152ffffffffff00;
    piVar6[1] = -0x2152fffffffffede;
    _raw_spin_unlock_irqrestore(iVar1,uVar4);
    sym.qcom_glink_send_rx_done(noname_0,arg1,piVar6 + -4,1);
    return 0;
}


// ===== sym.qcom_glink_get_sigs @ 0x08005444 (size 16) =====

uint sym.qcom_glink_get_sigs(int64_t arg1)

{
    return *(arg1 + 0x1d8);
}


// ===== sym.qcom_glink_set_sigs @ 0x08005454 (size 264) =====

int64_t * sym.qcom_glink_set_sigs(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    bool bVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong *puVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar14;
    ulong *arg1_00;
    char *pcVar15;
    char *pcVar16;
    char *pcVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    int64_t iVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    ushort uStack_168;
    ushort uStack_166;
    uint uStack_164;
    uint uStack_160;
    uint uStack_15c;
    int64_t iStack_158;
    uchar **ppuStack_150;
    ulong uStack_148;
    char *pcStack_140;
    int64_t iStack_130;
    char *pcStack_128;
    ulong *puStack_120;
    int64_t iStack_118;
    uint32_t uStack_110;
    uint32_t uStack_104;
    ulong *puStack_100;
    int64_t iStack_f8;
    uint32_t uStack_ec;
    int64_t iStack_e8;
    int iStack_dc;
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
    ushort uStack_30;
    ushort uStack_2e;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_28 = *(iVar14 + 0x5e0);
    iVar14 = *(arg1 + 0x70);
    uVar3 = *(arg1 + 0x1d4) | arg2 & 0xc6;
    if ((arg3 & 2) != 0) {
        uVar3 = uVar3 & 0xfffffffd;
    }
    if ((arg3 & 4) != 0) {
        uVar3 = uVar3 & 0xfffffffb;
    }
    if ((arg3 & 0x40) != 0) {
        uVar3 = uVar3 & 0xffffffbf;
    }
    if ((arg3 & 0x80) != 0) {
        uVar3 = uVar3 & 0xffffff7f;
    }
    *(arg1 + 0x1d4) = uVar3;
    _uStack_30 = CONCAT44((uVar3 >> 1) << 0x1f | (uVar3 >> 2 & 1) << 0x1e | (uVar3 >> 6 & 1) << 0x1d |
                          uVar3 & 0xfff | (uVar3 >> 7 & 1) << 0x1c,CONCAT22(*(arg1 + 0x88),0xf));
    ipc_log_string(*(iVar14 + 0x188),"[%s]: sigs:%d\n","qcom_glink_send_signals");
    iVar11 = 8;
    uVar3 = 0;
    piVar5 = sym.qcom_glink_tx(iVar14,&uStack_30,8,0);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_28) {
        return piVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar14 = auVar21._8_8_;
    iVar6 = auVar21._0_8_;
    *extraout_x18 = sym.__qcom_glink_send;
    pcStack_88 = sym.__qcom_glink_send;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    arg1_00 = *(iVar6 + 0x70);
    iStack_dc = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffe0;
    if (*(arg1_00 + 0x2c) == '\0') {
        uStack_ec = uVar3 ^ 1;
        iVar1 = iVar6 + 0x90;
        uVar19 = iVar11;
        pcVar17 = iVar6 + 0x1a0;
        iVar12 = iVar6 + 0x1b8;
        iStack_e8 = iVar6 + 0x160;
        puStack_100 = iVar6 + 0x194;
        uStack_104 = uVar3;
        iStack_f8 = iVar11;
        do {
            uVar8 = _raw_spin_lock_irqsave(iVar1);
            iStack_dc = 0;
            pcVar7 = idr_get_next(iVar6 + 0xb0,&iStack_dc);
            pcVar15 = pcVar17;
            if (pcVar7 != NULL) {
                pcVar16 = NULL;
                do {
                    pcVar15 = pcVar16;
                    if ((uVar19 <= *(pcVar7 + 0x10)) && (pcVar7[0x19] == '\0')) {
                        pcVar15 = pcVar7;
                        if ((pcVar16 != NULL) && (*(pcVar16 + 0x10) <= *(pcVar7 + 0x10))) {
                            pcVar15 = pcVar16;
                        }
                        if (*(pcVar15 + 0x10) == uVar19) break;
                    }
                    iStack_dc = iStack_dc + 1;
                    pcVar7 = idr_get_next(iVar6 + 0xb0,&iStack_dc);
                    pcVar16 = pcVar15;
                } while (pcVar7 != NULL);
                if (pcVar15 != NULL) {
                    pcVar15[0x19] = '\x01';
                    _raw_spin_unlock_irqrestore(iVar1,uVar8);
                    iStack_dc = *(pcVar15 + 8);
                    puVar13 = *(iVar6 + 0x70);
                    iVar11 = iStack_f8;
                    uVar3 = uStack_104;
                    goto code_r0x080055bc;
                }
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar8);
            bVar2 = arg1_00[0x2a] != 0;
            if (bVar2 || (uStack_ec & 1) != 0) {
                uVar3 = 0xffffff98;
                if (!bVar2) {
                    uVar3 = 0xfffffff0;
                }
                piVar5 = uVar3;
                goto code_r0x080056e8;
            }
            uStack_b0 = 7;
            mutex_lock(iStack_e8);
            *(iVar6 + 0x194) = 0;
            *(iVar6 + 0x198) = 0;
            uStack_b0 = CONCAT44(iStack_f8,CONCAT22(*(iVar6 + 0x88),uStack_b0));
            if (*(iVar6 + 0x70) != 0) {
                ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: size:%zd\n",*(iVar6 + 0x80),*(iVar6 + 0x88)
                               ,*(iVar6 + 0x8c),"qcom_glink_request_intent",uVar19);
            }
            iVar11 = 8;
            uVar3 = sym.qcom_glink_tx(arg1_00,&uStack_b0,8,0);
            if (uVar3 == 0) {
                if ((*puStack_100 == 0) && (arg1_00[0x2a] == 0)) {
                    uStack_c0 = 0;
                    uStack_b8 = 0;
                    uStack_d0 = 0;
                    uStack_c8 = 0;
                    uStack_d8 = 0;
                    init_wait_entry(&uStack_d8,0);
                    iVar11 = 2;
                    prepare_to_wait_event(pcVar17,&uStack_d8);
                    if (*puStack_100 != 0) {
code_r0x080058dc:
                        finish_wait(pcVar17,&uStack_d8);
                        goto code_r0x0800594c;
                    }
                    iVar20 = 0x9c4;
                    do {
                        if (iVar20 == 0 && arg1_00[0x2a] != 0) {
                            iVar20 = 1;
                        }
                        if (arg1_00[0x2a] != 0 || iVar20 == 0) goto code_r0x0800593c;
                        iVar20 = schedule_timeout(iVar20);
                        iVar11 = 2;
                        prepare_to_wait_event(pcVar17,&uStack_d8);
                    } while (*puStack_100 == 0);
                    if (iVar20 == 0) goto code_r0x080058dc;
code_r0x0800593c:
                    finish_wait(pcVar17,&uStack_d8);
                    if (iVar20 != 0) goto code_r0x0800594c;
                    iVar11 = *(iVar6 + 0x80);
                    *(iVar6 + 0x1d0) = *(iVar6 + 0x1d0) + 1;
                    _dev_err(*arg1_00,"%s: intent request ack timed out (%d)\n");
                    pcVar15 = pcVar17;
                    if (1 < *(iVar6 + 0x1d0)) {
                        pcVar15 = "qcom_glink_request_intent";
                        ipc_log_string(arg1_00[0x31],"[%s]: WARN at line %d: remoteproc:%s channel:%s unresponsive\n",
                                       "qcom_glink_request_intent",0x73a,arg1_00[1],*(iVar6 + 0x80));
                        iVar11 = 0x73a;
                        _printk(0x8000d46,"qcom_glink_request_intent",0x73a,arg1_00[1],*(iVar6 + 0x80));
                    }
                    piVar5 = 0xffffff92;
                }
                else {
code_r0x0800594c:
                    if (arg1_00[0x2a] == 0) {
                        if (*(iVar6 + 400) != '\0') {
                            mutex_unlock(iStack_e8);
                            goto code_r0x08005968;
                        }
                        piVar5 = 0xffffff83;
                        pcVar15 = pcVar17;
                    }
                    else {
                        if (*(iVar6 + 0x70) != 0) {
                            iVar11 = *(iVar6 + 0x80);
                            ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: ssr detected\n",iVar11,
                                           *(iVar6 + 0x88),*(iVar6 + 0x8c),"qcom_glink_request_intent");
                        }
                        piVar5 = 0xffffff98;
                        pcVar15 = pcVar17;
                    }
                }
                mutex_unlock(iStack_e8);
                goto code_r0x080056e8;
            }
            piVar5 = uVar3;
            mutex_unlock(iStack_e8);
            pcVar15 = pcVar17;
            if (uVar3 < 0) goto code_r0x080056e8;
code_r0x08005968:
            if ((*(iVar6 + 0x198) == 0) && (arg1_00[0x2a] == 0)) {
                uStack_c0 = 0;
                uStack_b8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_d8 = 0;
                init_wait_entry(&uStack_d8,0);
                iVar11 = 2;
                prepare_to_wait_event(iVar12,&uStack_d8);
                if (*(iVar6 + 0x198) == 0) {
                    iVar20 = 0x9c4;
                    do {
                        if (iVar20 == 0 && arg1_00[0x2a] != 0) {
                            iVar20 = 1;
                        }
                        if (arg1_00[0x2a] != 0 || iVar20 == 0) goto code_r0x08005a14;
                        iVar20 = schedule_timeout(iVar20);
                        iVar11 = 2;
                        prepare_to_wait_event(iVar12,&uStack_d8);
                    } while (*(iVar6 + 0x198) == 0);
                    if (iVar20 != 0) {
code_r0x08005a14:
                        finish_wait(iVar12,&uStack_d8);
                        if (iVar20 != 0) goto code_r0x08005a24;
                        _dev_err(*arg1_00,"intent request completion timed out\n");
                        piVar5 = 0xffffff92;
                        pcVar15 = pcVar17;
                        goto code_r0x080056e8;
                    }
                }
                finish_wait(iVar12,&uStack_d8);
            }
code_r0x08005a24:
            if (arg1_00[0x2a] != 0) {
                if (*(iVar6 + 0x70) != 0) {
                    iVar11 = *(iVar6 + 0x80);
                    ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: ssr detected\n",iVar11,*(iVar6 + 0x88),
                                   *(iVar6 + 0x8c),"__qcom_glink_send");
                }
                piVar5 = 0xffffff98;
                pcVar15 = pcVar17;
                goto code_r0x080056e8;
            }
        } while (*(iVar6 + 400) != '\0');
        piVar5 = 0xffffff83;
        pcVar15 = pcVar17;
    }
    else {
        pcVar15 = NULL;
        puVar13 = arg1_00;
code_r0x080055bc:
        uVar10 = iVar11;
        uVar18 = uVar10 - 0x2000;
        bVar2 = ((uVar18 != 0 && 0x1fff < uVar10) & uVar3) == 0;
        uVar3 = 0x2000;
        if (bVar2) {
            uVar3 = uVar10;
        }
        pcVar17 = uVar3;
        uVar10 = uVar18;
        if (bVar2) {
            uVar10 = 0;
        }
        uStack_a8._0_4_ = CONCAT22(*(iVar6 + 0x88),9);
        uStack_a8 = CONCAT44(iStack_dc,uStack_a8);
        uStack_a0 = CONCAT44(uVar10,uVar3);
        if (puVar13 != NULL) {
            uStack_110 = uVar10;
            ipc_log_string(puVar13[0x31],"%s[%d:%d] %s: iid:%d chunk_size:%d left_size:%d\n",*(iVar6 + 0x80),
                           *(iVar6 + 0x88),*(iVar6 + 0x8c),"__qcom_glink_send",iStack_dc,uVar3);
        }
        iVar11 = 0x10;
        uVar3 = sym.qcom_glink_tx(arg1_00,&uStack_a8,0x10,iVar14);
        piVar5 = uVar3;
        if ((uVar3 == 0) || (pcVar15 == NULL)) {
            pcVar7 = pcVar17;
            if (uVar10 != 0) {
                do {
                    uVar3 = uVar18;
                    if (0x1fff < uVar18) {
                        uVar3 = 0x2000;
                    }
                    pcVar17 = uVar3;
                    uVar18 = uVar18 - uVar3;
                    uStack_a8._0_4_ = CONCAT22(*(iVar6 + 0x88),0xc);
                    uStack_a8 = CONCAT44(iStack_dc,uStack_a8);
                    uStack_a0 = CONCAT44(uVar18,uVar3);
                    if (*(iVar6 + 0x70) != 0) {
                        uStack_110 = uVar18;
                        ipc_log_string(*(*(iVar6 + 0x70) + 0x188),"%s[%d:%d] %s: iid:%d chunk_size:%d left_size:%d\n",
                                       *(iVar6 + 0x80),*(iVar6 + 0x88),*(iVar6 + 0x8c),"__qcom_glink_send",iStack_dc
                                       ,pcVar17);
                    }
                    iVar14 = iVar14 + pcVar7;
                    iVar11 = 0x10;
                    uVar3 = sym.qcom_glink_tx(arg1_00,&uStack_a8,0x10,iVar14);
                    piVar5 = uVar3;
                    if ((uVar3 != 0) && (pcVar15 != NULL)) goto code_r0x080056e4;
                    pcVar7 = pcVar17;
                } while (0 < uVar18);
            }
        }
        else {
code_r0x080056e4:
            pcVar15[0x19] = '\0';
        }
    }
code_r0x080056e8:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return piVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar20 = auVar21._8_8_;
    *extraout_x18_00 = 0x8005b84;
    uStack_148 = 0x8005b84;
    iVar12 = sp_el0;
    iVar1 = iVar20 + 0x90;
    iStack_158 = *(iVar12 + 0x5e0);
    iVar12 = iVar11;
    ppuStack_150 = &puStack_90;
    pcStack_140 = pcVar17;
    iStack_130 = iVar14;
    pcStack_128 = pcVar15;
    puStack_120 = arg1_00;
    iStack_118 = iVar6;
    uVar8 = _raw_spin_lock_irqsave(iVar1);
    uVar9 = iVar12;
    if (*(iVar11 + 0x1a) == '\0') {
        *(iVar11 + 0x1a) = 1;
        _raw_spin_unlock_irqrestore(iVar1,uVar8);
        uStack_15c = *(iVar11 + 8);
        uStack_168 = 5;
        uStack_166 = *(iVar20 + 0x88);
        uStack_160 = *(iVar11 + 0x10);
        uStack_164 = 1;
        if (*(iVar20 + 0x70) != 0) {
            ipc_log_string(*(*(iVar20 + 0x70) + 0x188),"%s[%d:%d] %s: count:%d size:%zd liid:%d\n",*(iVar20 + 0x80),
                           *(iVar20 + 0x88),*(iVar20 + 0x8c),"qcom_glink_advertise_intent",1,*(iVar11 + 0x10),
                           uStack_15c);
        }
        uVar9 = 0;
        piVar5 = sym.qcom_glink_tx(auVar21._0_8_,&uStack_168,0x10,0);
    }
    else {
        piVar5 = _raw_spin_unlock_irqrestore(iVar1,uVar8);
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_158) {
        return piVar5;
    }
    auVar21 = __stack_chk_fail();
    iVar11 = auVar21._8_8_;
    *extraout_x18_01 = sym.qcom_glink_alloc_intent;
    iVar14 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar14 = 0x30;
    }
    piVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x30);
    if (piVar5 == NULL) {
        return NULL;
    }
    if (iVar11 != 0) {
        iVar14 = __kmalloc(iVar11,0xdc0);
        *piVar5 = iVar14;
        if (iVar14 == 0) goto code_r0x08005d9c;
    }
    iVar14 = auVar21._0_8_ + 0x90;
    uVar8 = _raw_spin_lock_irqsave(iVar14);
    iVar4 = idr_alloc_cyclic(auVar21._0_8_ + 0x98,piVar5,1,0xffffffff,0xa20);
    _raw_spin_unlock_irqrestore(iVar14,uVar8);
    if (-1 < iVar4) {
        *(piVar5 + 1) = iVar4;
        piVar5[2] = iVar11;
        *(piVar5 + 3) = uVar9 & 1;
        return piVar5;
    }
    kfree(*piVar5);
code_r0x08005d9c:
    kfree(piVar5);
    return NULL;
}


// ===== sym.__qcom_glink_send @ 0x0800555c (size 1628) =====

int64_t * sym.__qcom_glink_send(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    char *pcVar4;
    ulong uVar5;
    int64_t iVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *arg1_00;
    char *pcVar11;
    char *pcVar12;
    char *pcVar13;
    uint32_t uVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [16];
    ushort uStack_138;
    ushort uStack_136;
    uint uStack_134;
    uint uStack_130;
    uint uStack_12c;
    int64_t iStack_128;
    uchar *puStack_120;
    ulong uStack_118;
    char *pcStack_110;
    int64_t iStack_100;
    char *pcStack_f8;
    ulong *puStack_f0;
    int64_t iStack_e8;
    uint32_t uStack_e0;
    uint32_t uStack_d4;
    ulong *puStack_d0;
    int64_t iStack_c8;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    int iStack_ac;
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
    iVar6 = sp_el0;
    uVar2 = arg4;
    iStack_68 = *(iVar6 + 0x5e0);
    arg1_00 = *(arg1 + 0x70);
    iStack_ac = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    if (*(arg1_00 + 0x2c) == '\0') {
        uStack_bc = uVar2 ^ 1;
        iVar6 = arg1 + 0x90;
        uVar15 = arg3;
        pcVar13 = arg1 + 0x1a0;
        iVar9 = arg1 + 0x1b8;
        iStack_b8 = arg1 + 0x160;
        puStack_d0 = arg1 + 0x194;
        uStack_d4 = uVar2;
        iStack_c8 = arg3;
        do {
            uVar5 = _raw_spin_lock_irqsave(iVar6);
            iStack_ac = 0;
            pcVar4 = idr_get_next(arg1 + 0xb0,&stack0xffffffffffffff54);
            pcVar11 = pcVar13;
            if (pcVar4 != NULL) {
                pcVar12 = NULL;
                do {
                    pcVar11 = pcVar12;
                    if ((uVar15 <= *(pcVar4 + 0x10)) && (pcVar4[0x19] == '\0')) {
                        pcVar11 = pcVar4;
                        if ((pcVar12 != NULL) && (*(pcVar12 + 0x10) <= *(pcVar4 + 0x10))) {
                            pcVar11 = pcVar12;
                        }
                        if (*(pcVar11 + 0x10) == uVar15) break;
                    }
                    iStack_ac = iStack_ac + 1;
                    pcVar4 = idr_get_next(arg1 + 0xb0,&stack0xffffffffffffff54);
                    pcVar12 = pcVar11;
                } while (pcVar4 != NULL);
                if (pcVar11 != NULL) {
                    pcVar11[0x19] = '\x01';
                    _raw_spin_unlock_irqrestore(iVar6,uVar5);
                    iStack_ac = *(pcVar11 + 8);
                    puVar10 = *(arg1 + 0x70);
                    arg3 = iStack_c8;
                    uVar2 = uStack_d4;
                    goto code_r0x080055bc;
                }
            }
            _raw_spin_unlock_irqrestore(iVar6,uVar5);
            bVar1 = arg1_00[0x2a] != 0;
            if (bVar1 || (uStack_bc & 1) != 0) {
                uVar2 = 0xffffff98;
                if (!bVar1) {
                    uVar2 = 0xfffffff0;
                }
                piVar16 = uVar2;
                goto code_r0x080056e8;
            }
            uStack_80 = 7;
            mutex_lock(iStack_b8);
            *(arg1 + 0x194) = 0;
            *(arg1 + 0x198) = 0;
            uStack_80 = CONCAT44(iStack_c8,CONCAT22(*(arg1 + 0x88),uStack_80));
            if (*(arg1 + 0x70) != 0) {
                ipc_log_string(*(*(arg1 + 0x70) + 0x188),"%s[%d:%d] %s: size:%zd\n",*(arg1 + 0x80),*(arg1 + 0x88),
                               *(arg1 + 0x8c),"qcom_glink_request_intent",uVar15);
            }
            arg3 = 8;
            uVar2 = sym.qcom_glink_tx(arg1_00,&stack0xffffffffffffff80,8,0);
            if (uVar2 == 0) {
                if ((*puStack_d0 == 0) && (arg1_00[0x2a] == 0)) {
                    uStack_90 = 0;
                    uStack_88 = 0;
                    uStack_a0 = 0;
                    uStack_98 = 0;
                    uStack_a8 = 0;
                    init_wait_entry(&stack0xffffffffffffff58,0);
                    arg3 = 2;
                    prepare_to_wait_event(pcVar13,&stack0xffffffffffffff58);
                    if (*puStack_d0 != 0) {
code_r0x080058dc:
                        finish_wait(pcVar13,&stack0xffffffffffffff58);
                        goto code_r0x0800594c;
                    }
                    iVar17 = 0x9c4;
                    do {
                        if (iVar17 == 0 && arg1_00[0x2a] != 0) {
                            iVar17 = 1;
                        }
                        if (arg1_00[0x2a] != 0 || iVar17 == 0) goto code_r0x0800593c;
                        iVar17 = schedule_timeout(iVar17);
                        arg3 = 2;
                        prepare_to_wait_event(pcVar13,&stack0xffffffffffffff58);
                    } while (*puStack_d0 == 0);
                    if (iVar17 == 0) goto code_r0x080058dc;
code_r0x0800593c:
                    finish_wait(pcVar13,&stack0xffffffffffffff58);
                    if (iVar17 != 0) goto code_r0x0800594c;
                    arg3 = *(arg1 + 0x80);
                    *(arg1 + 0x1d0) = *(arg1 + 0x1d0) + 1;
                    _dev_err(*arg1_00,"%s: intent request ack timed out (%d)\n");
                    pcVar11 = pcVar13;
                    if (1 < *(arg1 + 0x1d0)) {
                        pcVar11 = "qcom_glink_request_intent";
                        ipc_log_string(arg1_00[0x31],"[%s]: WARN at line %d: remoteproc:%s channel:%s unresponsive\n",
                                       "qcom_glink_request_intent",0x73a,arg1_00[1],*(arg1 + 0x80));
                        arg3 = 0x73a;
                        _printk(0x8000d46,"qcom_glink_request_intent",0x73a,arg1_00[1],*(arg1 + 0x80));
                    }
                    piVar16 = 0xffffff92;
                }
                else {
code_r0x0800594c:
                    if (arg1_00[0x2a] == 0) {
                        if (*(arg1 + 400) != '\0') {
                            mutex_unlock(iStack_b8);
                            goto code_r0x08005968;
                        }
                        piVar16 = 0xffffff83;
                        pcVar11 = pcVar13;
                    }
                    else {
                        if (*(arg1 + 0x70) != 0) {
                            arg3 = *(arg1 + 0x80);
                            ipc_log_string(*(*(arg1 + 0x70) + 0x188),"%s[%d:%d] %s: ssr detected\n",arg3,
                                           *(arg1 + 0x88),*(arg1 + 0x8c),"qcom_glink_request_intent");
                        }
                        piVar16 = 0xffffff98;
                        pcVar11 = pcVar13;
                    }
                }
                mutex_unlock(iStack_b8);
                goto code_r0x080056e8;
            }
            piVar16 = uVar2;
            mutex_unlock(iStack_b8);
            pcVar11 = pcVar13;
            if (uVar2 < 0) goto code_r0x080056e8;
code_r0x08005968:
            if ((*(arg1 + 0x198) == 0) && (arg1_00[0x2a] == 0)) {
                uStack_90 = 0;
                uStack_88 = 0;
                uStack_a0 = 0;
                uStack_98 = 0;
                uStack_a8 = 0;
                init_wait_entry(&stack0xffffffffffffff58,0);
                arg3 = 2;
                prepare_to_wait_event(iVar9,&stack0xffffffffffffff58);
                if (*(arg1 + 0x198) == 0) {
                    iVar17 = 0x9c4;
                    do {
                        if (iVar17 == 0 && arg1_00[0x2a] != 0) {
                            iVar17 = 1;
                        }
                        if (arg1_00[0x2a] != 0 || iVar17 == 0) goto code_r0x08005a14;
                        iVar17 = schedule_timeout(iVar17);
                        arg3 = 2;
                        prepare_to_wait_event(iVar9,&stack0xffffffffffffff58);
                    } while (*(arg1 + 0x198) == 0);
                    if (iVar17 != 0) {
code_r0x08005a14:
                        finish_wait(iVar9,&stack0xffffffffffffff58);
                        if (iVar17 != 0) goto code_r0x08005a24;
                        _dev_err(*arg1_00,"intent request completion timed out\n");
                        piVar16 = 0xffffff92;
                        pcVar11 = pcVar13;
                        goto code_r0x080056e8;
                    }
                }
                finish_wait(iVar9,&stack0xffffffffffffff58);
            }
code_r0x08005a24:
            if (arg1_00[0x2a] != 0) {
                if (*(arg1 + 0x70) != 0) {
                    arg3 = *(arg1 + 0x80);
                    ipc_log_string(*(*(arg1 + 0x70) + 0x188),"%s[%d:%d] %s: ssr detected\n",arg3,*(arg1 + 0x88),
                                   *(arg1 + 0x8c),"__qcom_glink_send");
                }
                piVar16 = 0xffffff98;
                pcVar11 = pcVar13;
                goto code_r0x080056e8;
            }
        } while (*(arg1 + 400) != '\0');
        piVar16 = 0xffffff83;
        pcVar11 = pcVar13;
    }
    else {
        pcVar11 = NULL;
        puVar10 = arg1_00;
code_r0x080055bc:
        uVar8 = arg3;
        uVar14 = uVar8 - 0x2000;
        bVar1 = ((uVar14 != 0 && 0x1fff < uVar8) & uVar2) == 0;
        uVar2 = 0x2000;
        if (bVar1) {
            uVar2 = uVar8;
        }
        pcVar13 = uVar2;
        uVar8 = uVar14;
        if (bVar1) {
            uVar8 = 0;
        }
        uStack_78._0_4_ = CONCAT22(*(arg1 + 0x88),9);
        uStack_78 = CONCAT44(iStack_ac,uStack_78);
        uStack_70 = CONCAT44(uVar8,uVar2);
        if (puVar10 != NULL) {
            uStack_e0 = uVar8;
            ipc_log_string(puVar10[0x31],"%s[%d:%d] %s: iid:%d chunk_size:%d left_size:%d\n",*(arg1 + 0x80),
                           *(arg1 + 0x88),*(arg1 + 0x8c),"__qcom_glink_send",iStack_ac,uVar2);
        }
        arg3 = 0x10;
        uVar2 = sym.qcom_glink_tx(arg1_00,&stack0xffffffffffffff88,0x10,arg2);
        piVar16 = uVar2;
        if ((uVar2 == 0) || (pcVar11 == NULL)) {
            pcVar4 = pcVar13;
            if (uVar8 != 0) {
                do {
                    uVar2 = uVar14;
                    if (0x1fff < uVar14) {
                        uVar2 = 0x2000;
                    }
                    pcVar13 = uVar2;
                    uVar14 = uVar14 - uVar2;
                    uStack_78._0_4_ = CONCAT22(*(arg1 + 0x88),0xc);
                    uStack_78 = CONCAT44(iStack_ac,uStack_78);
                    uStack_70 = CONCAT44(uVar14,uVar2);
                    if (*(arg1 + 0x70) != 0) {
                        uStack_e0 = uVar14;
                        ipc_log_string(*(*(arg1 + 0x70) + 0x188),"%s[%d:%d] %s: iid:%d chunk_size:%d left_size:%d\n",
                                       *(arg1 + 0x80),*(arg1 + 0x88),*(arg1 + 0x8c),"__qcom_glink_send",iStack_ac,
                                       pcVar13);
                    }
                    arg2 = arg2 + pcVar4;
                    arg3 = 0x10;
                    uVar2 = sym.qcom_glink_tx(arg1_00,&stack0xffffffffffffff88,0x10,arg2);
                    piVar16 = uVar2;
                    if ((uVar2 != 0) && (pcVar11 != NULL)) goto code_r0x080056e4;
                    pcVar4 = pcVar13;
                } while (0 < uVar14);
            }
        }
        else {
code_r0x080056e4:
            pcVar11[0x19] = '\0';
        }
    }
code_r0x080056e8:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return piVar16;
    }
    auVar18 = __stack_chk_fail();
    iVar17 = auVar18._8_8_;
    *extraout_x18 = 0x8005b84;
    uStack_118 = 0x8005b84;
    iVar9 = sp_el0;
    iVar6 = iVar17 + 0x90;
    iStack_128 = *(iVar9 + 0x5e0);
    iVar9 = arg3;
    puStack_120 = &stack0xffffffffffffffa0;
    pcStack_110 = pcVar13;
    iStack_100 = arg2;
    pcStack_f8 = pcVar11;
    puStack_f0 = arg1_00;
    iStack_e8 = arg1;
    uVar5 = _raw_spin_lock_irqsave(iVar6);
    uVar7 = iVar9;
    if (*(arg3 + 0x1a) == '\0') {
        *(arg3 + 0x1a) = 1;
        _raw_spin_unlock_irqrestore(iVar6,uVar5);
        uStack_12c = *(arg3 + 8);
        uStack_138 = 5;
        uStack_136 = *(iVar17 + 0x88);
        uStack_130 = *(arg3 + 0x10);
        uStack_134 = 1;
        if (*(iVar17 + 0x70) != 0) {
            ipc_log_string(*(*(iVar17 + 0x70) + 0x188),"%s[%d:%d] %s: count:%d size:%zd liid:%d\n",*(iVar17 + 0x80),
                           *(iVar17 + 0x88),*(iVar17 + 0x8c),"qcom_glink_advertise_intent",1,*(arg3 + 0x10),
                           uStack_12c);
        }
        uVar7 = 0;
        piVar16 = sym.qcom_glink_tx(auVar18._0_8_,&stack0xfffffffffffffec8,0x10,0);
    }
    else {
        piVar16 = _raw_spin_unlock_irqrestore(iVar6,uVar5);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_128) {
        return piVar16;
    }
    auVar18 = __stack_chk_fail();
    iVar9 = auVar18._8_8_;
    *extraout_x18_00 = sym.qcom_glink_alloc_intent;
    iVar6 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar6 = 0x30;
    }
    piVar16 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x30);
    if (piVar16 == NULL) {
        return NULL;
    }
    if (iVar9 != 0) {
        iVar6 = __kmalloc(iVar9,0xdc0);
        *piVar16 = iVar6;
        if (iVar6 == 0) goto code_r0x08005d9c;
    }
    iVar6 = auVar18._0_8_ + 0x90;
    uVar5 = _raw_spin_lock_irqsave(iVar6);
    iVar3 = idr_alloc_cyclic(auVar18._0_8_ + 0x98,piVar16,1,0xffffffff,0xa20);
    _raw_spin_unlock_irqrestore(iVar6,uVar5);
    if (-1 < iVar3) {
        *(piVar16 + 1) = iVar3;
        piVar16[2] = iVar9;
        *(piVar16 + 3) = uVar7 & 1;
        return piVar16;
    }
    kfree(*piVar16);
code_r0x08005d9c:
    kfree(piVar16);
    return NULL;
}


// ===== sym.qcom_glink_advertise_intent @ 0x08005bb8 (size 272) =====

int64_t * sym.qcom_glink_advertise_intent(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint8_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar7 [16];
    ushort uStack_58;
    ushort uStack_56;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iVar4 = arg2 + 0x90;
    iStack_48 = *(iVar6 + 0x5e0);
    iVar6 = arg3;
    uVar2 = _raw_spin_lock_irqsave(iVar4);
    uVar5 = iVar6;
    if (*(arg3 + 0x1a) == '\0') {
        *(arg3 + 0x1a) = 1;
        _raw_spin_unlock_irqrestore(iVar4,uVar2);
        uStack_4c = *(arg3 + 8);
        uStack_58 = 5;
        uStack_56 = *(arg2 + 0x88);
        uStack_50 = *(arg3 + 0x10);
        uStack_54 = 1;
        if (*(arg2 + 0x70) != 0) {
            ipc_log_string(*(*(arg2 + 0x70) + 0x188),"%s[%d:%d] %s: count:%d size:%zd liid:%d\n",*(arg2 + 0x80),
                           *(arg2 + 0x88),*(arg2 + 0x8c),"qcom_glink_advertise_intent",1,*(arg3 + 0x10),uStack_4c);
        }
        uVar5 = 0;
        piVar3 = sym.qcom_glink_tx(arg1,&uStack_58,0x10,0);
    }
    else {
        piVar3 = _raw_spin_unlock_irqrestore(iVar4,uVar2);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return piVar3;
    }
    auVar7 = __stack_chk_fail();
    iVar6 = auVar7._8_8_;
    *extraout_x18 = sym.qcom_glink_alloc_intent;
    iVar4 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar4 = 0x30;
    }
    piVar3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x30);
    if (piVar3 == NULL) {
        return NULL;
    }
    if (iVar6 != 0) {
        iVar4 = __kmalloc(iVar6,0xdc0);
        *piVar3 = iVar4;
        if (iVar4 == 0) goto code_r0x08005d9c;
    }
    iVar4 = auVar7._0_8_ + 0x90;
    uVar2 = _raw_spin_lock_irqsave(iVar4);
    iVar1 = idr_alloc_cyclic(auVar7._0_8_ + 0x98,piVar3,1,0xffffffff,0xa20);
    _raw_spin_unlock_irqrestore(iVar4,uVar2);
    if (-1 < iVar1) {
        *(piVar3 + 1) = iVar1;
        piVar3[2] = iVar6;
        *(piVar3 + 3) = uVar5 & 1;
        return piVar3;
    }
    kfree(*piVar3);
code_r0x08005d9c:
    kfree(piVar3);
    return NULL;
}


// ===== sym.qcom_glink_alloc_intent @ 0x08005cc8 (size 256) =====

int64_t * sym.qcom_glink_alloc_intent(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x30);
    if (piVar2 == NULL) {
        return NULL;
    }
    if (arg2 != 0) {
        iVar3 = __kmalloc(arg2,0xdc0);
        *piVar2 = iVar3;
        if (iVar3 == 0) goto code_r0x08005d9c;
    }
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0x90);
    iVar1 = idr_alloc_cyclic(arg1 + 0x98,piVar2,1,0xffffffff,0xa20);
    _raw_spin_unlock_irqrestore(arg1 + 0x90,uVar4);
    if (-1 < iVar1) {
        *(piVar2 + 1) = iVar1;
        piVar2[2] = arg2;
        *(piVar2 + 3) = arg3 & 1;
        return piVar2;
    }
    kfree(*piVar2);
code_r0x08005d9c:
    kfree(piVar2);
    return NULL;
}


// ===== sym.qcom_glink_native_rx @ 0x08005dc8 (size 3544) =====

//WARNING: Removing unreachable block (ram,0x0800639c)

ulong sym.qcom_glink_native_rx(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint uVar4;
    ushort uVar5;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    ulong uVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    int64_t iVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar16;
    uint64_t uVar17;
    int iVar18;
    uint64_t uVar19;
    ulong *puVar20;
    uint64_t arg2_00;
    ulong unaff_x30;
    uchar auVar21 [16];
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    uStack_88 = 0;
    if (obj.qcom_glink_native_probe.__key == 0x1) {
        _printk(0x8000e50,"qcom_glink_native_rx",arg1 + 100);
        obj.qcom_glink_native_probe.__key = 0x0;
        _segment.ehdr = 1;
        pm_system_wakeup();
    }
    iVar11 = arg1 + 0x84;
    uVar9 = _raw_spin_lock_irqsave(iVar11);
    if (*(arg1 + 0x88) == '\0') {
        *(arg1 + 0x88) = 1;
        _raw_spin_unlock_irqrestore(iVar11,uVar9);
        __wake_up(arg1 + 0x168,3,0,0);
        iVar1 = arg1 + 0x11c;
        iVar2 = arg1 + 0x138;
        iVar7 = 1;
        while( true ) {
            iVar18 = iVar7;
            pcVar16 = *(*(arg1 + 0x50) + 8);
            __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar16,0x80006e0);
            uVar6 = (*pcVar16)(*(arg1 + 0x50));
            uVar19 = uVar6;
            if (uVar19 < 8) break;
            pcVar16 = *(*(arg1 + 0x50) + 0x10);
            __cfi_slowpath_diag(0xfb5653a149f06ccb,pcVar16,0x8000700);
            (*pcVar16)(*(arg1 + 0x50),&uStack_88,0,8);
            uVar12 = uStack_88;
            if (0xf < uStack_88) {
                _dev_err(*arg1,"unhandled rx cmd: %d\n");
                break;
            }
            arg2_00 = uStack_88 >> 0x10 & 0xffff;
            uVar3 = uStack_88._4_4_;
            uVar17 = uStack_88._4_4_;
    //switch table (16 cases) at 0x8001598
            switch(uStack_88 & 0xffff) {
            default:
                uVar17 = 0;
                goto code_r0x08005f2c;
            case 2:
code_r0x08005f2c:
                iVar7 = sym.qcom_glink_rx_defer(arg1,uVar17);
joined_r0x080068cc:
                if (iVar7 != 0) goto code_r0x08006b18;
                break;
            case 4:
                _raw_spin_lock(iVar1);
                iVar14 = idr_find(arg1 + 0x120,arg2_00);
                _raw_spin_unlock(iVar1);
                if (iVar14 == 0) {
                    _dev_err(*arg1,"Invalid open ack packet\n");
                    iVar7 = -0x16;
                }
                else {
                    if (*(iVar14 + 0x70) != 0) {
                        ipc_log_string(*(*(iVar14 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar14 + 0x80),
                                       *(iVar14 + 0x88),*(iVar14 + 0x8c),"qcom_glink_rx_open_ack");
                    }
                    complete_all(iVar14 + 0x120);
                    iVar7 = 0;
                }
                pcVar16 = *(*(arg1 + 0x50) + 0x18);
                __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar16,0x8000720);
                (*pcVar16)(*(arg1 + 0x50),8);
                goto joined_r0x080068cc;
            case 5:
                sym.qcom_glink_handle_intent(arg1,arg2_00,uVar17,uVar6);
                break;
            case 6:
                iVar14 = 0;
                goto code_r0x08006280;
            case 8:
                sym.qcom_glink_handle_intent_req_ack(arg1,arg2_00,uStack_88._4_4_ != 0);
                goto code_r0x08006284;
            case 9:
            case 0xc:
                uStack_80 = 0;
                uStack_78 = 0;
                if (0xf < uVar19) {
                    pcVar16 = *(*(arg1 + 0x50) + 0x10);
                    __cfi_slowpath_diag(0xfb5653a149f06ccb,pcVar16,0x8000700);
                    (*pcVar16)(*(arg1 + 0x50),&uStack_80,0,0x10);
                    iVar7 = uStack_78;
                    uVar12 = uStack_78 & 0xffffffff;
                    if (uVar12 + 0x10 <= uVar19) {
                        iVar8 = uStack_78._4_4_;
                        uVar5 = uStack_80._2_2_;
                        uVar9 = _raw_spin_lock_irqsave(iVar1);
                        puVar20 = idr_find(iVar2,uVar5);
                        _raw_spin_unlock_irqrestore(iVar1,uVar9);
                        if (puVar20 == NULL) {
                            iVar7 = 0;
code_r0x0800688c:
                            pcVar16 = *(*(arg1 + 0x50) + 0x18);
                            __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar16,0x8000720);
                            (*pcVar16)(*(arg1 + 0x50),uVar12 + 0x17 & 0x1fffffff8);
                        }
                        else {
                            if (puVar20[0xe] != 0) {
                                ipc_log_string(*(puVar20[0xe] + 0x188),"%s[%d:%d] %s: chunk_size:%d left_size:%d\n",
                                               puVar20[0x10],*(puVar20 + 0x11),*(puVar20 + 0x8c),"qcom_glink_rx_data"
                                               ,uVar12,iVar8);
                            }
                            if (*(arg1 + 0x160) == '\0') {
                                uVar19 = uStack_80 >> 0x20;
                                uVar9 = _raw_spin_lock_irqsave(puVar20 + 0x12);
                                piVar13 = idr_find(puVar20 + 0x13,uVar19);
                                _raw_spin_unlock_irqrestore(puVar20 + 0x12,uVar9);
                                if (piVar13 != NULL) goto code_r0x080064cc;
                                _dev_err(*arg1,"no intent found for channel %s intent %d",puVar20[0x10],uVar19);
                                iVar7 = -2;
                                goto code_r0x0800688c;
                            }
                            piVar13 = puVar20[0x22];
                            if (piVar13 != NULL) {
code_r0x080064cc:
                                uVar6 = *(piVar13 + 0x1c);
                                if (piVar13[2] - uVar6 < uVar12) {
                                    _dev_err(*arg1,"Insufficient space in intent\n");
                                    iVar7 = 0;
                                }
                                else {
                                    iVar14 = *piVar13;
                                    pcVar16 = *(*(arg1 + 0x50) + 0x10);
                                    __cfi_slowpath_diag(0xfb5653a149f06ccb,pcVar16,0x8000700);
                                    (*pcVar16)(*(arg1 + 0x50),iVar14 + uVar6,0x10,uVar12);
                                    *(piVar13 + 0x1c) = *(piVar13 + 0x1c) + iVar7;
                                    if (iVar8 == 0) {
                                        _raw_spin_lock(puVar20 + 0x7c);
                                        pcVar16 = puVar20[2];
                                        if (pcVar16 == NULL) {
                                            if (puVar20[0xe] != 0) {
                                                ipc_log_string(*(puVar20[0xe] + 0x188),
                                                               "%s[%d:%d] %s: callback not present\n",puVar20[0x10],
                                                               *(puVar20 + 0x11),*(puVar20 + 0x8c),
                                                               "qcom_glink_rx_data");
                                                iVar7 = ___ratelimit(obj.qcom_glink_rx_data._rs.64,"qcom_glink_rx_data"
                                                                    );
                                                if (iVar7 != 0) {
                                                    _dev_err(*puVar20[0xe],"[%s]: callback not present\n",
                                                             "qcom_glink_rx_data");
                                                }
                                                goto code_r0x080066f4;
                                            }
code_r0x08006844:
                                            iVar7 = 0;
                                        }
                                        else {
                                            if (pcVar16 != sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr) {
                                                __cfi_slowpath_diag(0x9ed87ad60107a9bd,pcVar16,0x8000740);
                                            }
                                            iVar7 = (*pcVar16)(*puVar20,*piVar13,*(piVar13 + 0x1c),puVar20[0xb],
                                                               0xffffffff);
                                            if ((iVar7 < 0) && (iVar7 != -0x13)) {
                                                if (puVar20[0xe] == 0) goto code_r0x08006844;
                                                ipc_log_string(*(puVar20[0xe] + 0x188),
                                                               "%s[%d:%d] %s: callback error ret = %d\n",puVar20[0x10]
                                                               ,*(puVar20 + 0x11),*(puVar20 + 0x8c),
                                                               "qcom_glink_rx_data",iVar7);
                                                iVar8 = ___ratelimit(obj.qcom_glink_rx_data._rs,"qcom_glink_rx_data");
                                                if (iVar8 != 0) {
                                                    _dev_err(*puVar20[0xe],"[%s]: callback error ret = %d\n",
                                                             "qcom_glink_rx_data",iVar7);
                                                }
code_r0x080066f4:
                                                iVar7 = 0;
                                            }
                                        }
                                        _raw_spin_unlock(puVar20 + 0x7c);
                                        if (_segment.ehdr != 0) {
                                            _segment.ehdr = 0;
                                            _printk(0x8000e9b,puVar20[0x10],*(puVar20 + 0x11),*(puVar20 + 0x8c),
                                                    "qcom_glink_rx_data",*(piVar13 + 0x1c));
                                        }
                                        *(piVar13 + 0x1c) = 0;
                                        puVar20[0x22] = 0;
                                        sym.__qcom_glink_rx_done
                                                  (arg1,puVar20,piVar13,*(puVar20 + 10) != '\0' && iVar7 == 1);
                                    }
                                    else {
                                        iVar7 = 0;
                                    }
                                }
                                goto code_r0x0800688c;
                            }
                            iVar14 = 0x38;
                            if (android_kmalloc_64_create != 0x0) {
                                iVar14 = 0x30;
                            }
                            piVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xb20,0x30);
                            if (piVar13 == NULL) {
                                iVar7 = -0xc;
                            }
                            else {
                                uVar19 = iVar8 + iVar7;
                                iVar14 = __kmalloc(uVar19,0xa20);
                                *piVar13 = iVar14;
                                if (iVar14 != 0) {
                                    piVar13[2] = uVar19;
                                    *(piVar13 + 0x1c) = 0;
                                    *(piVar13 + 1) = 0xbabababa;
                                    puVar20[0x22] = piVar13;
                                    goto code_r0x080064cc;
                                }
                                kfree(piVar13);
                                iVar7 = -0xc;
                            }
                        }
                        goto joined_r0x080068cc;
                    }
                }
                goto code_r0x08006b18;
            case 10:
                uStack_78 = 0;
                iStack_70 = 0;
                uStack_80 = 0;
                if (uVar19 < 0x18) goto code_r0x08006b18;
                pcVar16 = *(*(arg1 + 0x50) + 0x10);
                __cfi_slowpath_diag(0xfb5653a149f06ccb,pcVar16,0x8000700);
                (*pcVar16)(*(arg1 + 0x50),&uStack_80,0,0x18);
                if (*(arg1 + 0x160) == '\0') {
                    uVar5 = uStack_80._2_2_;
                    uVar9 = _raw_spin_lock_irqsave(iVar1);
                    puVar20 = idr_find(iVar2,uVar5);
                    _raw_spin_unlock_irqrestore(iVar1,uVar9);
                    if (puVar20 != NULL) {
                        uVar19 = uStack_80 >> 0x20;
                        uVar9 = _raw_spin_lock_irqsave(puVar20 + 0x12);
                        piVar13 = idr_find(puVar20 + 0x13,uVar19);
                        _raw_spin_unlock_irqrestore(puVar20 + 0x12,uVar9);
                        iVar14 = iStack_70;
                        if (piVar13 == NULL) {
                            if (puVar20[0xe] != 0) {
                                ipc_log_string(*(puVar20[0xe] + 0x188),"%s[%d:%d] %s: no intent found liid:%d\n",
                                               puVar20[0x10],*(puVar20 + 0x11),*(puVar20 + 0x8c),
                                               "qcom_glink_rx_data_zero_copy",uVar19);
                                iVar7 = ___ratelimit(obj.qcom_glink_rx_data_zero_copy._rs,
                                                     "qcom_glink_rx_data_zero_copy");
                                if (iVar7 != 0) {
                                    _dev_err(*puVar20[0xe],"[%s]: no intent found liid:%d\n",
                                             "qcom_glink_rx_data_zero_copy",uVar19);
                                }
                            }
                        }
                        else if (piVar13[2] == 0) {
                            uVar6 = uStack_78._4_4_;
                            uVar19 = uStack_78._4_4_;
                            iVar10 = sym.qcom_glink_prepare_da_for_cpu(iStack_70,uVar19);
                            iVar15 = puVar20[0xe];
                            if (iVar10 == 0) {
                                if (iVar15 != 0) {
                                    ipc_log_string(*(iVar15 + 0x188),
                                                   "%s[%d:%d] %s: failed to get va da:0x%llx len:%d\n",puVar20[0x10],
                                                   *(puVar20 + 0x11),*(puVar20 + 0x8c),"qcom_glink_rx_data_zero_copy"
                                                   ,iVar14,uVar19);
                                    iVar7 = ___ratelimit(obj.qcom_glink_rx_data_zero_copy._rs.73,
                                                         "qcom_glink_rx_data_zero_copy");
                                    if (iVar7 != 0) {
                                        _dev_err(*puVar20[0xe],"[%s]: failed to get va da:0x%llx len:%d\n",
                                                 "qcom_glink_rx_data_zero_copy",iVar14,uVar19);
                                    }
                                }
                            }
                            else {
                                if (iVar15 != 0) {
                                    ipc_log_string(*(iVar15 + 0x188),"%s[%d:%d] %s: da:0x%llx va:0x%llx len:%d\n",
                                                   puVar20[0x10],*(puVar20 + 0x11),*(puVar20 + 0x8c),
                                                   "qcom_glink_rx_data_zero_copy",iVar14,iVar10,uVar6);
                                }
                                *piVar13 = iVar10;
                                *(piVar13 + 0x1c) = uVar6;
                                _raw_spin_lock();
                                pcVar16 = puVar20[2];
                                if (pcVar16 == NULL) {
                                    if (puVar20[0xe] != 0) {
                                        ipc_log_string(*(puVar20[0xe] + 0x188),"%s[%d:%d] %s: callback not present\n",
                                                       puVar20[0x10],*(puVar20 + 0x11),*(puVar20 + 0x8c),
                                                       "qcom_glink_rx_data_zero_copy");
                                        iVar7 = ___ratelimit(obj.qcom_glink_rx_data_zero_copy._rs.77,
                                                             "qcom_glink_rx_data_zero_copy");
                                        if (iVar7 != 0) {
                                            _dev_err(*puVar20[0xe],"[%s]: callback not present\n",
                                                     "qcom_glink_rx_data_zero_copy");
                                        }
                                        goto code_r0x080069a4;
                                    }
code_r0x080069dc:
                                    iVar7 = 0;
                                }
                                else {
                                    if (pcVar16 != sym.__typeid__ZTSFiP12rpmsg_devicePviS1_jE_global_addr) {
                                        __cfi_slowpath_diag(0x9ed87ad60107a9bd,pcVar16,0x8000760);
                                    }
                                    iVar7 = (*pcVar16)(*puVar20,*piVar13,*(piVar13 + 0x1c),puVar20[0xb],0xffffffff);
                                    if ((iVar7 < 0) && (iVar7 != -0x13)) {
                                        if (puVar20[0xe] == 0) goto code_r0x080069dc;
                                        ipc_log_string(*(puVar20[0xe] + 0x188),
                                                       "%s[%d:%d] %s: callback error ret = %d\n",puVar20[0x10],
                                                       *(puVar20 + 0x11),*(puVar20 + 0x8c),
                                                       "qcom_glink_rx_data_zero_copy",iVar7);
                                        iVar8 = ___ratelimit(obj.qcom_glink_rx_data_zero_copy._rs.76,
                                                             "qcom_glink_rx_data_zero_copy");
                                        if (iVar8 != 0) {
                                            _dev_err(*puVar20[0xe],"[%s]: callback error ret = %d\n",
                                                     "qcom_glink_rx_data_zero_copy",iVar7);
                                        }
code_r0x080069a4:
                                        iVar7 = 0;
                                    }
                                }
                                _raw_spin_unlock(puVar20 + 0x7c);
                                if (_segment.ehdr != 0) {
                                    _segment.ehdr = 0;
                                    _printk(0x8000e9b,puVar20[0x10],*(puVar20 + 0x11),*(puVar20 + 0x8c),
                                            "qcom_glink_rx_data_zero_copy",*(piVar13 + 0x1c));
                                }
                                *(piVar13 + 0x1c) = 0;
                                sym.__qcom_glink_rx_done(arg1,puVar20,piVar13,*(puVar20 + 10) != '\0' && iVar7 == 1);
                            }
                        }
                        else if (puVar20[0xe] != 0) {
                            ipc_log_string(*(puVar20[0xe] + 0x188),
                                           "%s[%d:%d] %s: zero copy req wrong intent liid:%d size:%d\n",puVar20[0x10],
                                           *(puVar20 + 0x11),*(puVar20 + 0x8c),"qcom_glink_rx_data_zero_copy",uVar19)
                            ;
                            iVar7 = ___ratelimit(obj.qcom_glink_rx_data_zero_copy._rs.70,"qcom_glink_rx_data_zero_copy"
                                                );
                            if (iVar7 != 0) {
                                _dev_err(*puVar20[0xe],"[%s]: zero copy req wrong intent liid:%d size:%d\n",
                                         "qcom_glink_rx_data_zero_copy",uVar19,piVar13[2]);
                            }
                        }
                    }
                }
                pcVar16 = *(*(arg1 + 0x50) + 0x18);
                __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar16,0x8000720);
                (*pcVar16)(*(arg1 + 0x50),0x18);
                break;
            case 0xd:
                pcVar16 = *(*(arg1 + 0x50) + 0x18);
                __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar16,0x8000720);
                (*pcVar16)(*(arg1 + 0x50),8);
                mbox_send_message(*(arg1 + 0x48),0);
                mbox_client_txdone(*(arg1 + 0x48),0);
                break;
            case 0xe:
                iVar14 = 1;
code_r0x08006280:
                sym.qcom_glink_handle_rx_done(arg1,arg2_00,uVar17,iVar14);
                goto code_r0x08006284;
            case 0xf:
                uVar9 = _raw_spin_lock_irqsave(iVar1);
                puVar20 = idr_find(iVar2,arg2_00);
                _raw_spin_unlock_irqrestore(iVar1,uVar9);
                if (puVar20 == NULL) {
                    _dev_err(*arg1,"signal for non-existing channel\n");
                }
                else {
                    if (uVar12 < 0) {
                        uVar3 = uVar3 | 0x100;
                    }
                    uVar4 = *(puVar20 + 0x3b);
                    *(puVar20 + 0x3b) =
                         uVar3 >> 0x19 & 0x20 | uVar3 & 0xfff | uVar3 >> 0x17 & 0x40 | uVar3 >> 0x15 & 0x80;
                    if (puVar20[0xe] != 0) {
                        ipc_log_string(*(puVar20[0xe] + 0x188),"%s[%d:%d] %s: old:%d new:%d\n",puVar20[0x10],
                                       *(puVar20 + 0x11),*(puVar20 + 0x8c),"qcom_glink_handle_signals",uVar4);
                    }
                    pcVar16 = puVar20[9];
                    if (pcVar16 != NULL) {
                        __cfi_slowpath_diag(0x3d67368aab6f96b2,pcVar16,0x8000780);
                        (*pcVar16)(*puVar20,puVar20[0xb],uVar4,*(puVar20 + 0x3b));
                    }
                }
code_r0x08006284:
                pcVar16 = *(*(arg1 + 0x50) + 0x18);
                __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar16,0x8000720);
                (*pcVar16)(*(arg1 + 0x50),8);
            }
            iVar7 = iVar18 + 1;
            if ((arg2 != 0) && (arg2 <= iVar18)) break;
        }
code_r0x08006b18:
        uVar9 = _raw_spin_lock_irqsave(iVar11);
        *(arg1 + 0x88) = 0;
        _raw_spin_unlock_irqrestore(iVar11,uVar9);
        pcVar16 = *(*(arg1 + 0x50) + 8);
        __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar16,0x80006e0);
        uVar9 = (*pcVar16)(*(arg1 + 0x50));
    }
    else {
        _raw_spin_unlock_irqrestore(iVar11,uVar9);
        uVar9 = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        auVar21 = __stack_chk_fail(uVar9);
        iVar11 = auVar21._0_8_;
        *extraout_x18 = sym.qcom_glink_rx_defer;
        uVar17 = auVar21._8_8_ + 7U & 0xfffffffffffffff8;
        pcVar16 = *(*(iVar11 + 0x50) + 8);
        __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar16,0x80006e0);
        uVar12 = (*pcVar16)(*(iVar11 + 0x50));
        uVar19 = uVar17 + 8;
        if (uVar12 < uVar19) {
            uVar9 = 0xfffffffa;
        }
        else {
            piVar13 = __kmalloc(uVar17 + 0x18,0xb20);
            if (piVar13 == NULL) {
                uVar9 = 0xfffffff4;
            }
            else {
                *piVar13 = piVar13;
                piVar13[1] = piVar13;
                pcVar16 = *(*(iVar11 + 0x50) + 0x10);
                __cfi_slowpath_diag(0xfb5653a149f06ccb,pcVar16,0x8000700);
                (*pcVar16)(*(iVar11 + 0x50),piVar13 + 2,0,uVar19);
                _raw_spin_lock(iVar11 + 0x100);
                puVar20 = *(iVar11 + 0x110);
                uVar12 = __list_add_valid(piVar13,puVar20,iVar11 + 0x108);
                if ((uVar12 & 1) != 0) {
                    *(iVar11 + 0x110) = piVar13;
                    *piVar13 = iVar11 + 0x108;
                    piVar13[1] = puVar20;
                    *puVar20 = piVar13;
                }
                _raw_spin_unlock(iVar11 + 0x100);
                queue_work_on(0x20,__raw_spin_unlock_irqrestore,iVar11 + 0xd0);
                pcVar16 = *(*(iVar11 + 0x50) + 0x18);
                __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar16,0x8000720);
                (*pcVar16)(*(iVar11 + 0x50),uVar19);
                uVar9 = 0;
            }
        }
        return uVar9;
    }
    return uVar9;
}


// ===== sym.qcom_glink_rx_defer @ 0x08006ba0 (size 372) =====

ulong sym.qcom_glink_rx_defer(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t *piVar4;
    ulong *in_x18;
    code *pcVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar6 = arg2 + 7U & 0xfffffffffffffff8;
    pcVar5 = *(*(arg1 + 0x50) + 8);
    __cfi_slowpath_diag(0xa95a1513bc7540d,pcVar5,0x80006e0);
    uVar2 = (*pcVar5)(*(arg1 + 0x50));
    uVar1 = uVar6 + 8;
    if (uVar2 < uVar1) {
        uVar3 = 0xfffffffa;
    }
    else {
        piVar4 = __kmalloc(uVar6 + 0x18,0xb20);
        if (piVar4 == NULL) {
            uVar3 = 0xfffffff4;
        }
        else {
            *piVar4 = piVar4;
            piVar4[1] = piVar4;
            pcVar5 = *(*(arg1 + 0x50) + 0x10);
            __cfi_slowpath_diag(0xfb5653a149f06ccb,pcVar5,0x8000700);
            (*pcVar5)(*(arg1 + 0x50),piVar4 + 2,0,uVar1);
            _raw_spin_lock(arg1 + 0x100);
            puVar7 = *(arg1 + 0x110);
            uVar2 = __list_add_valid(piVar4,puVar7,arg1 + 0x108);
            if ((uVar2 & 1) != 0) {
                *(arg1 + 0x110) = piVar4;
                *piVar4 = arg1 + 0x108;
                piVar4[1] = puVar7;
                *puVar7 = piVar4;
            }
            _raw_spin_unlock(arg1 + 0x100);
            queue_work_on(0x20,__raw_spin_unlock_irqrestore,arg1 + 0xd0);
            pcVar5 = *(*(arg1 + 0x50) + 0x18);
            __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar5,0x8000720);
            (*pcVar5)(*(arg1 + 0x50),uVar1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


// ===== sym.qcom_glink_handle_intent @ 0x08006d14 (size 644) =====

void sym.qcom_glink_handle_intent(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    int *piVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    int iVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong *in_x18;
    code *pcVar12;
    int64_t iVar13;
    int iVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar13 = (arg3 & 0xffffffffU) * 8;
    uVar2 = iVar13 + 8;
    if (uVar2 <= arg4) {
        uVar8 = _raw_spin_lock_irqsave(arg1 + 0x11c);
        iVar9 = idr_find(arg1 + 0x138,arg2 & 0xffffffff);
        _raw_spin_unlock_irqrestore(arg1 + 0x11c,uVar8);
        if (iVar9 == 0) {
            _dev_err(*arg1,"intents for non-existing channel\n");
        }
        else {
            iVar10 = __kmalloc(uVar2,0xa20);
            if (iVar10 != 0) {
                pcVar12 = *(*(arg1 + 0x50) + 0x10);
                __cfi_slowpath_diag(0xfb5653a149f06ccb,pcVar12,0x8000700);
                (*pcVar12)(*(arg1 + 0x50),iVar10,0,uVar2);
                if (arg3 != 0) {
                    iVar14 = 0;
                    do {
                        iVar11 = 0x38;
                        if (android_kmalloc_64_create != 0x0) {
                            iVar11 = 0x30;
                        }
                        iVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar11),0xb20,0x30);
                        if (iVar11 == 0) break;
                        puVar1 = iVar10 + 8 + iVar14 * 8;
                        uVar4 = *puVar1;
                        *(iVar11 + 8) = puVar1[1];
                        *(iVar11 + 0x10) = uVar4;
                        if (*(iVar9 + 0x70) != 0) {
                            ipc_log_string(*(*(iVar9 + 0x70) + 0x188),"%s[%d:%d] %s: riid:%d size:%zd\n",
                                           *(iVar9 + 0x80),*(iVar9 + 0x88),*(iVar9 + 0x8c),"qcom_glink_handle_intent"
                                          );
                        }
                        uVar8 = _raw_spin_lock_irqsave(iVar9 + 0x90);
                        iVar7 = idr_alloc(iVar9 + 0xb0,iVar11,*(iVar11 + 8),*(iVar11 + 8) + 1,0xa20);
                        _raw_spin_unlock_irqrestore(iVar9 + 0x90,uVar8);
                        if (iVar7 < 0) {
                            _dev_err(*arg1,"failed to store remote intent\n");
                        }
                        iVar14 = iVar14 + 1;
                    } while (arg3 != iVar14);
                }
                piVar3 = iVar9 + 0x198;
                Hint_Prefetch(piVar3,2,0,1);
                do {
                    cVar5 = '\x01';
                    bVar6 = ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar6) {
                        *piVar3 = *piVar3 + 1;
                        cVar5 = ExclusiveMonitorsStatus();
                    }
                } while (cVar5 != '\0');
                __wake_up(iVar9 + 0x1b8,3,1,0);
                kfree(iVar10);
                pcVar12 = *(*(arg1 + 0x50) + 0x18);
                __cfi_slowpath_diag(0x84b554a74dc9f54b,pcVar12,0x8000720);
                (*pcVar12)(*(arg1 + 0x50),iVar13 + 0xfU & 0xffffffff8);
            }
        }
    }
    return;
}


// ===== sym.qcom_glink_handle_rx_done @ 0x08006f98 (size 308) =====

void sym.qcom_glink_handle_rx_done(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(arg1 + 0x11c);
    iVar3 = idr_find(arg1 + 0x138,arg2 & 0xffffffff);
    _raw_spin_unlock_irqrestore(arg1 + 0x11c,uVar2);
    if (iVar3 == 0) {
        _dev_err(*arg1,"invalid channel id received\n");
    }
    else {
        iVar1 = iVar3 + 0x90;
        uVar2 = _raw_spin_lock_irqsave(iVar1);
        iVar4 = idr_find(iVar3 + 0xb0,arg3 & 0xffffffff);
        if (iVar4 == 0) {
            _raw_spin_unlock_irqrestore(iVar1,uVar2);
            _dev_err(*arg1,"invalid intent id received\n");
        }
        else {
            *(iVar4 + 0x19) = 0;
            if (*(iVar3 + 0x70) != 0) {
                ipc_log_string(*(*(iVar3 + 0x70) + 0x188),"%s[%d:%d] %s: reuse:%d iid:%d\n",*(iVar3 + 0x80),
                               *(iVar3 + 0x88),*(iVar3 + 0x8c),"qcom_glink_handle_rx_done",arg4 & 1,*(iVar4 + 8));
            }
            if ((arg4 & 1U) == 0) {
                idr_remove(iVar3 + 0xb0,*(iVar4 + 8));
                kfree(iVar4);
            }
            _raw_spin_unlock_irqrestore(iVar1,uVar2);
        }
    }
    return;
}


// ===== sym.qcom_glink_handle_intent_req_ack @ 0x080070cc (size 264) =====

void sym.qcom_glink_handle_intent_req_ack(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    char cVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = _raw_spin_lock_irqsave(arg1 + 0x11c);
    iVar5 = idr_find(arg1 + 0x138,arg2 & 0xffffffff);
    _raw_spin_unlock_irqrestore(arg1 + 0x11c,uVar4);
    if (iVar5 == 0) {
        _dev_err(*arg1,"unable to find channel\n");
    }
    else {
        piVar1 = iVar5 + 0x194;
        *(iVar5 + 0x1d0) = 0;
        *(iVar5 + 400) = arg3 & 1;
        Hint_Prefetch(piVar1,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        __wake_up(iVar5 + 0x1a0,3,1,0);
        if (*(iVar5 + 0x70) != 0) {
            ipc_log_string(*(*(iVar5 + 0x70) + 0x188),"%s[%d:%d] %s: \n",*(iVar5 + 0x80),*(iVar5 + 0x88),
                           *(iVar5 + 0x8c),"qcom_glink_handle_intent_req_ack");
        }
    }
    return;
}


// ===== sym.__qcom_glink_rx_done @ 0x080071d4 (size 328) =====

void sym.__qcom_glink_rx_done(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x160) == '\0') {
        if (*(arg3 + 0x18) == '\0') {
            uVar3 = _raw_spin_lock_irqsave(arg2 + 0x90);
            idr_remove(arg2 + 0x98,*(arg3 + 8));
            _raw_spin_unlock_irqrestore(arg2 + 0x90,uVar3);
        }
        uVar3 = _raw_spin_lock_irqsave(arg2 + 0x90);
        if ((arg4 & 1U) == 0) {
            piVar5 = arg2 + 0xf0;
            if ((piVar5 != *piVar5) || (iVar2 = sym.qcom_glink_send_rx_done(*piVar5,arg2,arg3,0), iVar2 != 0)) {
                piVar6 = *(arg2 + 0xf8);
                iVar1 = arg3 + 0x20;
                uVar4 = __list_add_valid(iVar1,piVar6,piVar5);
                if ((uVar4 & 1) != 0) {
                    *(arg2 + 0xf8) = iVar1;
                    *(arg3 + 0x20) = piVar5;
                    *(arg3 + 0x28) = piVar6;
                    *piVar6 = iVar1;
                }
                kthread_queue_work(arg1 + 0x90,arg2 + 200);
            }
        }
        else {
            piVar5 = *(arg2 + 0x108);
            iVar1 = arg3 + 0x20;
            uVar4 = __list_add_valid(iVar1,piVar5,arg2 + 0x100);
            if ((uVar4 & 1) != 0) {
                *(arg2 + 0x108) = iVar1;
                *(arg3 + 0x20) = arg2 + 0x100;
                *(arg3 + 0x28) = piVar5;
                *piVar5 = iVar1;
            }
        }
        _raw_spin_unlock_irqrestore(arg2 + 0x90,uVar3);
    }
    else {
        kfree(*arg3);
        kfree(arg3);
    }
    return;
}


// ===== sym.qcom_glink_device_release @ 0x08007320 (size 164) =====

void sym.qcom_glink_device_release(int64_t arg1)

{
    int *arg1_00;
    int iVar1;
    char cVar2;
    bool bVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x3c8) + 0x78;
    Hint_Prefetch(arg1_00,2,0,1);
    do {
        iVar1 = *arg1_00;
        cVar2 = '\x01';
        bVar3 = ExclusiveMonitorPass(arg1_00,0x10);
        if (bVar3) {
            *arg1_00 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
        }
    } while (cVar2 != '\0');
    if (iVar1 == 1) {
        DataMemoryBarrier(2,1);
        sym.qcom_glink_channel_release(arg1_00);
    }
    else if (iVar1 < 1) {
        refcount_warn_saturate(arg1_00,3);
    }
    kfree(arg1);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080073c4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08007408

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
    //switch table (4 cases) at 0x80015a8
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800741c);
    (*pcVar1)();
}


// ===== sym.qcom_glink_ssr_notify @ 0x0800741c (size 52) =====

void sym.qcom_glink_ssr_notify(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_call_chain(obj.ssr_notifiers,0,arg1);
    return;
}


// ===== sym.qcom_glink_ssr_probe @ 0x08007450 (size 140) =====

ulong sym.qcom_glink_ssr_probe(int64_t arg1)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = devm_kmalloc(arg1,0x50,0xdc0);
    if (piVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        *(piVar1 + 6) = 0;
        __init_swait_queue_head(piVar1 + 7,"&x->wait",obj.qcom_glink_native_probe.__key);
        iVar3 = *(arg1 + 0x3c8);
        *(arg1 + 0x98) = piVar1;
        *piVar1 = arg1;
        piVar1[1] = iVar3;
        piVar1[2] = sym.qcom_glink_ssr_notifier_call.a38385d870d17b5d27b65d7b83c7b324.cfi_jt;
        uVar2 = blocking_notifier_chain_register(obj.ssr_notifiers);
    }
    return uVar2;
}


// ===== sym.qcom_glink_ssr_remove @ 0x080074dc (size 52) =====

void sym.qcom_glink_ssr_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    blocking_notifier_chain_unregister(obj.ssr_notifiers,*(arg1 + 0x98) + 0x10);
    return;
}


// ===== sym.qcom_glink_ssr_callback @ 0x08007510 (size 140) =====

ulong sym.qcom_glink_ssr_callback(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    char *pcVar2;
    ulong *puVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar3 = *(arg1 + 0x98);
    if (arg3 < 0xc) {
        uVar1 = *puVar3;
        pcVar2 = "message too short\n";
code_r0x08007580:
        _dev_err(uVar1,pcVar2);
        uVar1 = 0xffffffea;
    }
    else {
        if (*arg2 != 0) {
            return 0xffffffea;
        }
        if (*(arg2 + 4) == 1) {
            if (*(arg2 + 8) != *(puVar3 + 5)) {
                uVar1 = *puVar3;
                pcVar2 = "invalid sequence number of response\n";
                goto code_r0x08007580;
            }
            complete(puVar3 + 6);
        }
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.qcom_glink_ssr_notifier_call @ 0x0800759c (size 252) =====

uchar (*) [16] sym.qcom_glink_ssr_notifier_call(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint uVar5;
    int iVar6;
    uchar (*pauVar7) [16];
    uint64_t uVar8;
    ulong uVar9;
    ulong in_x3;
    uint in_w4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    *(arg1 + 0x20) = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uVar1 = *(arg1 + 0x18) + 1;
    *(arg1 + 0x18) = uVar1;
    uStack_60 = uVar1;
    uVar5 = strlen(arg2);
    uStack_60 = CONCAT44(uVar5,uStack_60);
    strlcpy(&uStack_58,arg2,0x20);
    uVar9 = 0x30;
    iVar6 = rpmsg_send(*(arg1 + -8),&uStack_68);
    if (iVar6 < 0) {
        _dev_err(*(arg1 + -0x10),"failed to send cleanup message\n");
    }
    iVar6 = wait_for_completion_timeout(arg1 + 0x20,0xfa);
    if (iVar6 == 0) {
        _dev_err(*(arg1 + -0x10),"timeout waiting for cleanup done message\n");
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return NULL;
    }
    auVar10 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_glink_mem_entry_init;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    pauVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x38);
    if (pauVar7 != NULL) {
        *pauVar7[2] = in_w4;
        piVar2 = pauVar7[2] + 8;
        *pauVar7 = auVar10;
        *pauVar7[1] = uVar9;
        *(pauVar7[1] + 8) = in_x3;
        *(pauVar7[2] + 8) = piVar2;
        *pauVar7[3] = piVar2;
        uVar9 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
        piVar4 = *0x8000690;
        uVar8 = __list_add_valid(piVar2,*0x8000690,obj.qcom_glink_mem_entries);
        if ((uVar8 & 1) != 0) {
            *0x8000690 = piVar2;
            *(pauVar7[2] + 8) = obj.qcom_glink_mem_entries;
            *pauVar7[3] = piVar4;
            *piVar4 = piVar2;
        }
        _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar9);
    }
    return pauVar7;
}


// ===== sym.qcom_glink_mem_entry_init @ 0x08007698 (size 240) =====

int64_t * sym.qcom_glink_mem_entry_init(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint in_w4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar2 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x38);
    if (piVar4 != NULL) {
        *(piVar4 + 4) = in_w4;
        piVar1 = piVar4 + 5;
        *piVar4 = arg1;
        piVar4[1] = arg2;
        piVar4[2] = arg3;
        piVar4[3] = arg4;
        piVar4[5] = piVar1;
        piVar4[6] = piVar1;
        uVar5 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
        piVar3 = *0x8000690;
        uVar6 = __list_add_valid(piVar1,*0x8000690,obj.qcom_glink_mem_entries);
        if ((uVar6 & 1) != 0) {
            *0x8000690 = piVar1;
            piVar4[5] = obj.qcom_glink_mem_entries;
            piVar4[6] = piVar3;
            *piVar3 = piVar1;
        }
        _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar5);
    }
    return piVar4;
}


// ===== sym.qcom_glink_mem_entry_free @ 0x08007788 (size 164) =====

void sym.qcom_glink_mem_entry_free(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    code *pcVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
    pcVar5 = obj.qcom_glink_mem_entries;
    do {
        pcVar5 = *pcVar5;
        if (pcVar5 == obj.qcom_glink_mem_entries) goto code_r0x08007800;
    } while (pcVar5 + -0x28 != arg1);
    uVar4 = __list_del_entry_valid(arg1 + 0x28);
    if ((uVar4 & 1) != 0) {
        iVar1 = *(arg1 + 0x28);
        piVar2 = *(arg1 + 0x30);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *(arg1 + 0x28) = 0xdead000000000100;
    *(arg1 + 0x30) = 0xdead000000000122;
code_r0x08007800:
    _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar3);
    kfree(arg1);
    return;
}


// ===== sym.qcom_glink_prepare_da_for_cpu @ 0x0800782c (size 188) =====

int64_t sym.qcom_glink_prepare_da_for_cpu(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(obj.qcom_glink_groups);
    pcVar3 = _obj.qcom_glink_mem_entries;
    do {
        if (pcVar3 == obj.qcom_glink_mem_entries) {
            iVar4 = 0;
code_r0x080078bc:
            _raw_spin_unlock_irqrestore(obj.qcom_glink_groups,uVar2);
            return iVar4;
        }
        if (((*(pcVar3 + -0x20) != 0) && (uVar1 = arg1 - *(pcVar3 + -8), -1 < uVar1)) &&
           (arg2 + uVar1 <= *(pcVar3 + -0x10))) {
            iVar4 = *(pcVar3 + -0x20) + uVar1;
            dma_sync_single_for_cpu(*(pcVar3 + -0x28),arg1,arg2,2);
            goto code_r0x080078bc;
        }
        pcVar3 = *pcVar3;
    } while( true );
}


// ===== sym.init_module @ 0x08007ac0 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_rpmsg_driver(obj.qcom_glink_ssr_driver,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08007af4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    unregister_rpmsg_driver(obj.qcom_glink_ssr_driver);
    return;
}

