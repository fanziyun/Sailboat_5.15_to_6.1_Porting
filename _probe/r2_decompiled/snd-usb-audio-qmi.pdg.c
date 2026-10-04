// decompiled from snd-usb-audio-qmi by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08003000 (size 472) =====

//WARNING: Switch with 1 destination removed at 0x0800327c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x46d76d34f7c7623a) {
            if (arg1 == -0x550b9e52359ac614) {
                pcVar2 = sym.uaudio_qmi_disconnect_work.39905be140b67e9ea55cbaff5680076d.cfi_jt;
            }
            else {
                if (arg1 != -0x4b755308df01dcc1) goto code_r0x0800323c;
                pcVar2 = sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt;
            }
        }
        else if (arg1 == -0x46d76d34f7c7623a) {
            pcVar2 = sym.uaudio_qmi_bye_cb.39905be140b67e9ea55cbaff5680076d.cfi_jt;
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                if ((pcVar1 + -0x8003218 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x0800323c;
            }
            if (arg1 != -0x2ac316d8df914f8) goto code_r0x0800323c;
            pcVar2 = sym.__typeid__ZTSFvP4krefE_global_addr;
        }
    }
    else if (arg1 < 0x64c0f88806bc150f) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x2b1394c7097a0a26) goto code_r0x0800323c;
            pcVar2 = sym.handle_uaudio_stream_req.39905be140b67e9ea55cbaff5680076d.cfi_jt;
        }
    }
    else if (arg1 == 0x64c0f88806bc150f) {
        pcVar2 = sym.uaudio_disconnect.39905be140b67e9ea55cbaff5680076d.cfi_jt;
    }
    else if (arg1 == 0x7b38a7f1693a8f7b) {
        pcVar2 = sym.uaudio_qmi_svc_disconnect_cb.39905be140b67e9ea55cbaff5680076d.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800323c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800323c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003290);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFvP4krefE_global_addr @ 0x080031e0 (size 8) =====

void sym.__typeid__ZTSFvP4krefE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1 + -0x1c;
    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: for dev %pK\n",0x8001d8e,"uaudio_dev_release",arg1);
    _printk("%s%s: for dev %pK\n",0x8001f33,"uaudio_dev_release",arg1);
    sym.uaudio_event_ring_cleanup_free(arg1);
    *(param_1 + -4) = 0;
    __wake_up(param_1 + 4,3,1,0);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080031e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = _segment.ehdr;
    qmi_handle_release(*_segment.ehdr);
    flush_workqueue(puVar1[7]);
    destroy_workqueue(puVar1[7]);
    kfree(*puVar1);
    ipc_log_context_destroy(puVar1[10]);
    kfree(puVar1);
    _segment.ehdr = NULL;
    platform_driver_unregister(reloc.uaudio_qmi_plat_probe.39905be140b67e9ea55cbaff5680076d.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080031f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.uaudio_qmi_plat_probe.39905be140b67e9ea55cbaff5680076d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.uaudio_disconnect.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x080031f8 (size 8) =====

void sym.uaudio_disconnect.39905be140b67e9ea55cbaff5680076d.cfi_jt(ulong param_1,int64_t param_2)

{
    ulong *puVar1;
    uint32_t uVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *puVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    puVar3 = _segment.ehdr;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    iVar11 = *(param_2 + 200);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    if (iVar11 == 0) {
        uVar6 = _segment.ehdr[10];
        pcVar8 = "%s%s: chip is NULL\n";
code_r0x08003b7c:
        ipc_log_string(uVar6,pcVar8,0x8001d8e,"uaudio_disconnect");
        _printk(pcVar8,0x8001b5e,"uaudio_disconnect");
    }
    else {
        iVar9 = *(param_2 + 0xa0);
        uVar2 = **(iVar11 + 0x10);
        uVar10 = uVar2;
        if (iVar9 == 0) {
            iVar9 = *(param_2 + 0x30);
        }
        ipc_log_string(_segment.ehdr[10],"%s%s: intf: %s: %p chip: %p card: %d\n",0x8001d8e,"uaudio_disconnect",
                       iVar9,param_2,iVar11,uVar10);
        iVar9 = *(param_2 + 0xa0);
        if (iVar9 == 0) {
            iVar9 = *(param_2 + 0x30);
        }
        pcVar8 = "uaudio_disconnect";
        noname_1 = _printk("%s%s: intf: %s: %p chip: %p card: %d\n",0x8001f33,"uaudio_disconnect",iVar9,param_2,
                           iVar11,uVar10);
        if (0x1f < uVar2) {
            pcVar8 = "%s%s: invalid card number\n";
            uVar6 = _segment.ehdr[10];
            goto code_r0x08003b7c;
        }
        if (0x20 < uVar2) goto code_r0x08003f7c;
        pcVar4 = obj.uadev + uVar10 * 0x50;
        if (*pcVar4 == 0) {
            ipc_log_string(_segment.ehdr[10],"%s%s: no clean up required\n",0x8001d8e,"uaudio_disconnect");
            _printk("%s%s: no clean up required\n",0x8001f33,"uaudio_disconnect");
        }
        else {
            puVar1 = uVar10 * 0x50 + 0x8000230;
            if (*puVar1 != 0) {
                ipc_log_string(_segment.ehdr[10],"%s%s: sending qmi indication disconnect\n",0x8001d8e,
                               "uaudio_disconnect");
                _printk("%s%s: sending qmi indication disconnect\n",0x8001f33,"uaudio_disconnect");
                puVar12 = puVar3 + 8;
                ipc_log_string(_segment.ehdr[10],"%s%s: sq->sq_family:%x sq->sq_node:%x sq->sq_port:%x\n",0x8001d8e,
                               "uaudio_disconnect",*puVar12,*(puVar3 + 0x44),*(puVar3 + 9));
                _printk("%s%s: sq->sq_family:%x sq->sq_node:%x sq->sq_port:%x\n",0x8001f33,"uaudio_disconnect",
                        *puVar12,*(puVar3 + 0x44),*(puVar3 + 9));
                uVar6 = uStack_78;
                pcVar8 = 0x1;
                uStack_130 = CONCAT44(*(*pcVar4 + 0x5d8),1);
                uStack_78._4_4_ = SUB84(uVar6,4);
                uStack_78._0_4_ = CONCAT13(*(uVar10 * 0x50 + 0x800022c),CONCAT12(1,uStack_78));
                iVar5 = qmi_send_indication(*puVar3,puVar12,1,0xb5,obj.qmi_uaudio_stream_ind_msg_v01_ei,&uStack_130
                                           );
                if (iVar5 < 0) {
                    pcVar8 = "uaudio_disconnect";
                    ipc_log_string(_segment.ehdr[10],"%s%s: qmi send failed with err: %d\n",0x8001d8e,
                                   "uaudio_disconnect",iVar5);
                    noname_1 = _printk("%s%s: qmi send failed with err: %d\n",0x8001b5e,"uaudio_disconnect",iVar5);
                    iVar5 = *puVar1;
                }
                else {
                    iVar5 = *puVar1;
                    noname_1 = extraout_q0;
                }
                if (iVar5 != 0) {
                    uStack_140 = 0;
                    uStack_138 = 0;
                    uStack_150 = 0;
                    uStack_148 = 0;
                    uStack_158 = 0;
                    init_wait_entry(&uStack_158,0);
                    pcVar8 = 0x1;
                    iVar11 = uVar10 * 0x50 + 0x8000238;
                    uVar7 = prepare_to_wait_event(iVar11,&uStack_158);
                    if (*puVar1 == 0) {
                        uVar13 = 0x9c4;
                    }
                    else {
                        uVar13 = 0x9c4;
                        noname_1 = extraout_q0_00;
                        do {
                            if (uVar7 != 0) goto code_r0x08003e88;
                            uVar13 = schedule_timeout(uVar13);
                            pcVar8 = 0x1;
                            uVar7 = prepare_to_wait_event(iVar11,&uStack_158);
                            if (uVar13 == 0 && *puVar1 == 0) {
                                uVar13 = 1;
                            }
                        } while ((*puVar1 != 0) && (noname_1 = extraout_q0_01, uVar13 != 0));
                    }
                    uVar7 = uVar13;
                    noname_1 = finish_wait(iVar11,&uStack_158);
code_r0x08003e88:
                    if (uVar7 == 0) {
                        pcVar8 = "uaudio_disconnect";
                        ipc_log_string(_segment.ehdr[10],"%s%s: timeout while waiting for dev_release\n",0x8001d8e,
                                       "uaudio_disconnect");
                        noname_1 = _printk("%s%s: timeout while waiting for dev_release\n",0x8001b5e);
                    }
                    else {
                        if (-1 < uVar7) goto code_r0x08003c64;
                        pcVar8 = "uaudio_disconnect";
                        ipc_log_string(_segment.ehdr[10],"%s%s: failed with ret %d\n",0x8001d8e,"uaudio_disconnect",
                                       uVar7 & 0xffffffff);
                        noname_1 = _printk("%s%s: failed with ret %d\n",0x8001b5e,"uaudio_disconnect",
                                           uVar7 & 0xffffffff);
                    }
                    *puVar1 = 0;
                }
            }
code_r0x08003c64:
            sym.uaudio_dev_cleanup(pcVar4,noname_1,pcVar8);
        }
        *(uVar10 * 0x50 + 0x8000260) = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail();
code_r0x08003f7c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8003f80);
    (*pcVar4)();
}


// ===== sym.uaudio_qmi_disconnect_work.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x08003200 (size 8) =====

void sym.uaudio_qmi_disconnect_work.39905be140b67e9ea55cbaff5680076d.cfi_jt
               (uchar param_1 [16],ulong param_2,ulong param_3,char *param_4)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint8_t *puVar10;
    uint8_t *puVar11;
    int64_t iVar12;
    uint8_t *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        puVar1 = iVar7 * 0x50 + 0x8000230;
        if (*puVar1 != 0) {
            iVar4 = iVar7 * 0x50;
            if (0 < *(iVar4 + 0x8000250)) {
                iVar12 = 0;
                do {
                    iVar6 = *(iVar4 + 0x8000258);
                    if ((iVar6 != 0) && (*(iVar6 + iVar12 * 0x50 + 0x4c) != '\0')) {
                        iVar6 = iVar6 + iVar12 * 0x50;
                        puVar11 = iVar6 + 0x49;
                        if (0x1f < *puVar11) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x80041b8);
                            (*pcVar5)();
                        }
                        puVar13 = iVar6 + 0x4a;
                        uVar2 = *puVar13;
                        param_4 = uVar2;
                        iVar9 = *(*puVar11 * 0x50 + 0x8000260);
                        puVar10 = iVar6 + 0x4b;
                        uVar3 = *puVar10;
                        if ((iVar9 != 0) && (*(iVar9 + 0xd8) == 0)) {
                            if (uVar2 < *(iVar9 + 0x140)) {
                                if (uVar3 < 2) {
                                    for (piVar8 = *(iVar9 + 0x110); iVar9 + 0x110 != piVar8; piVar8 = *piVar8) {
                                        if (*(piVar8 + -0x35) == uVar2) {
                                            if ((piVar8 + uVar3 * 0x1a + -0x34 != NULL && *(iVar4 + 0x8000260) != 0) &&
                                               (*(*(iVar4 + 0x8000260) + 0xd8) == 0)) {
                                                param_1 = sym.disable_audio_stream(piVar8 + uVar3 * 0x1a + -0x34);
                                                goto code_r0x080040a0;
                                            }
                                            break;
                                        }
                                    }
                                }
                                else {
                                    _printk(0x8001292,"find_substream",uVar3);
                                }
                            }
                            else {
                                _printk(0x800120e,"find_substream");
                            }
                        }
                        param_4 = "uaudio_qmi_disconnect_work";
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: no subs for c#%u, dev#%u dir%u\n",0x8001d8e,
                                       "uaudio_qmi_disconnect_work",*puVar11,*puVar13,*puVar10);
                        param_1 = _printk("%s%s: no subs for c#%u, dev#%u dir%u\n",0x8001f33,
                                          "uaudio_qmi_disconnect_work",*puVar11,*puVar13,*puVar10);
                    }
code_r0x080040a0:
                    iVar12 = iVar12 + 1;
                } while (iVar12 < *(iVar4 + 0x8000250));
            }
            *puVar1 = 0;
            param_1 = sym.uaudio_dev_cleanup(obj.uadev + iVar7 * 0x50,param_1,param_4);
        }
        iVar7 = iVar7 + 1;
        if (iVar7 == 0x20) {
            return;
        }
    } while( true );
}


// ===== sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x08003208 (size 8) =====

void sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt(ulong param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_2 + 0xa0);
    if (iVar3 == 0) {
        iVar3 = *(param_2 + 0x30);
    }
    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: intf: %s: %p chip: %p card_number:%d\n",0x8001d8e,"uaudio_connect"
                   ,iVar3,param_2,param_3,**(param_3 + 0x10));
    iVar3 = *(param_2 + 0xa0);
    if (iVar3 == 0) {
        iVar3 = *(param_2 + 0x30);
    }
    _printk("%s%s: intf: %s: %p chip: %p card_number:%d\n",0x8001f33,"uaudio_connect",iVar3,param_2,param_3,
            **(param_3 + 0x10));
    uVar1 = **(param_3 + 0x10);
    if (0x1f < uVar1) {
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: Invalid card number\n",0x8001d8e,"uaudio_connect");
        _printk("%s%s: Invalid card number\n",0x8001b5e,"uaudio_connect");
        return;
    }
    if (uVar1 < 0x20) {
        *(uVar1 * 0x50 + 0x8000260) = param_3;
        if (**(param_3 + 0x10) < 0x20) {
            iVar3 = *(**(param_3 + 0x10) * 0x50 + 0x8000260);
            *(iVar3 + 0xf8) = *(iVar3 + 0xf8) | 0x200;
            return;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8003afc);
    (*pcVar2)();
}


// ===== sym.handle_uaudio_stream_req.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x08003210 (size 8) =====

void sym.handle_uaudio_stream_req.39905be140b67e9ea55cbaff5680076d.cfi_jt
               (ulong param_1,ulong *param_2,ulong param_3,char *param_4)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint32_t arg2;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint64_t uVar7;
    int64_t arg1;
    ulong *puVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    code *pcVar12;
    int64_t *piVar13;
    ulong *puVar14;
    ulong uVar15;
    int *extraout_x10;
    int *piVar16;
    uint64_t uVar17;
    ulong *in_x18;
    code *pcVar18;
    int64_t *piVar19;
    char *unaff_x25;
    uint64_t uVar20;
    uint32_t *puVar21;
    ulong unaff_x30;
    int *piStack_180;
    int64_t *piStack_178;
    uint64_t uStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    code *pcStack_158;
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    puVar8 = _segment.ehdr;
    iVar9 = sp_el0;
    iStack_70 = *(iVar9 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    uVar5 = ktime_get();
    ipc_log_string(_segment.ehdr[10],"%s%s: sq_node:%x sq_port:%x sq_family:%x\n",0x8001d8e,
                   "handle_uaudio_stream_req",*(param_2 + 4),*(param_2 + 1),*param_2);
    _printk("%s%s: sq_node:%x sq_port:%x sq_family:%x\n",0x8001f33,"handle_uaudio_stream_req",*(param_2 + 4),
            *(param_2 + 1),*param_2);
    if (*(puVar8 + 0x4c) == '\0') {
        uVar15 = *param_2;
        *(puVar8 + 9) = *(param_2 + 1);
        puVar8[8] = uVar15;
        *(puVar8 + 0x4c) = 1;
    }
    if ((((param_4[8] == '\0') || (param_4[0x18] == '\0')) || (param_4[0x10] == '\0')) || (param_4[0x20] == '\0')) {
        ipc_log_string(_segment.ehdr[10],"%s%s: invalid request msg\n",0x8001d8e,"handle_uaudio_stream_req");
        _printk("%s%s: invalid request msg\n",0x8001b5e,"handle_uaudio_stream_req");
        pcVar18 = NULL;
    }
    else {
        uVar10 = *(param_4 + 4);
        pcVar18 = uVar10 >> 0x10 & 0xff;
        arg2 = uVar10 >> 8 & 0xff;
        unaff_x25 = arg2;
        uVar10 = uVar10 & 0xff;
        ipc_log_string(_segment.ehdr[10],"%s%s: card#:%d dev#:%d dir:%d en:%d fmt:%d rate:%d #ch:%d\n",0x8001d8e,
                       "handle_uaudio_stream_req",pcVar18,unaff_x25,uVar10,*param_4,*(param_4 + 0xc),
                       *(param_4 + 0x1c),*(param_4 + 0x14));
        _printk("%s%s: card#:%d dev#:%d dir:%d en:%d fmt:%d rate:%d #ch:%d\n",0x800149e,"handle_uaudio_stream_req",
                pcVar18,unaff_x25,uVar10,*param_4,*(param_4 + 0xc),*(param_4 + 0x1c),*(param_4 + 0x14));
        uStack_150 = param_3;
        if (pcVar18 < 0x20) {
            if (*(param_4 + 0xc) < 0x12) {
                piVar19 = sym.find_substream(pcVar18,arg2,uVar10);
                if (piVar19 != NULL) {
                    uVar17 = pcVar18 * 0x50;
                    pcVar12 = obj.uadev + uVar17;
                    iVar9 = *(uVar17 + 0x8000260);
                    if ((iVar9 != 0) && (*(iVar9 + 0xd8) == 0)) {
                        if (piVar19[4] == 0) {
                            uVar10 = 0xffffffff;
                        }
                        else {
                            uVar10 = *(piVar19[4] + 0x28);
                        }
                        uVar7 = sym.info_idx_from_ifnum(pcVar18,uVar10);
                        puVar14 = iVar9 + 0xd8;
                        uVar20 = uVar7 & 0xffffffff;
                        pcStack_168 = pcVar12;
                        iStack_160 = iVar9;
                        pcStack_158 = pcVar18;
                        if (((*puVar14 == 0) && (piVar13 = *piVar19, piVar13 != NULL)) &&
                           ((piVar13[1] != 0 && (*piVar13 != 0)))) {
                            if ((*param_4 == '\0') || (-1 < uVar7)) {
                                piStack_178 = piVar19;
                                uStack_170 = uVar5;
                                if (param_4[0x28] == '\0') {
                                    iVar4 = 0;
                                }
                                else {
                                    uVar10 = *(param_4 + 0x2c);
                                    iVar4 = sym.get_data_interval_from_si(piVar19,uVar10);
                                    if (iVar4 == -0x16) {
                                        unaff_x25 = "handle_uaudio_stream_req";
                                        ipc_log_string(_segment.ehdr[10],"%s%s: invalid service interval %u\n",
                                                       0x8001d8e,"handle_uaudio_stream_req",uVar10);
                                        _printk("%s%s: invalid service interval %u\n",0x8001b5e,
                                                "handle_uaudio_stream_req",*(param_4 + 0x2c));
                                        iVar4 = -0x16;
                                        goto code_r0x0800455c;
                                    }
                                    ipc_log_string(_segment.ehdr[10],"%s%s: data interval %u\n",0x8001d8e,
                                                   "handle_uaudio_stream_req",iVar4);
                                    _printk("%s%s: data interval %u\n",0x8001f33,"handle_uaudio_stream_req",iVar4);
                                }
                                if (0xa00 < (uVar17 | 8)) {
    //WARNING: Does not return
                                    pcVar18 = SoftwareBreakpoint(1,0x8004cdc);
                                    (*pcVar18)();
                                }
                                piVar16 = iVar9 + 0xdc;
                                *(pcVar18 * 0x50 + 0x8000220) = *(iVar9 + 0x170);
                                unaff_x25 = obj.uadev;
                                piStack_180 = piVar16;
                                goto code_r0x08004e20;
                            }
                            unaff_x25 = "handle_uaudio_stream_req";
                            ipc_log_string(_segment.ehdr[10],"%s%s: interface# %d already in use card# %d\n",0x8001d8e
                                           ,"handle_uaudio_stream_req",*(piVar19[4] + 0x28),pcVar18);
                            _printk("%s%s: interface# %d already in use card# %d\n",0x8001b5e,
                                    "handle_uaudio_stream_req",*(piVar19[4] + 0x28),pcVar18);
                            iVar4 = -0x10;
                        }
                        else {
                            unaff_x25 = "handle_uaudio_stream_req";
                            ipc_log_string(_segment.ehdr[10],"%s%s: chip or sub not available: shutdown:%d stream:%p\n"
                                           ,0x8001d8e,"handle_uaudio_stream_req",*puVar14,*piVar19);
                            _printk("%s%s: chip or sub not available: shutdown:%d stream:%p\n",0x8001b5e,
                                    "handle_uaudio_stream_req",*puVar14,*piVar19);
                            puVar14 = *piVar19;
                            if (puVar14 != NULL) {
                                ipc_log_string(_segment.ehdr[10],"%s%s: pcm:%p chip:%p\n",0x8001d8e,
                                               "handle_uaudio_stream_req",puVar14[1],*puVar14);
                                _printk("%s%s: pcm:%p chip:%p\n",0x8001b5e,"handle_uaudio_stream_req",(*piVar19)[1],
                                        **piVar19);
                            }
                            iVar4 = -0x13;
                        }
                        goto code_r0x0800455c;
                    }
                }
                ipc_log_string(_segment.ehdr[10],"%s%s: can\'t find substream for card# %u, dev# %u dir%u\n",0x8001d8e
                               ,"handle_uaudio_stream_req",pcVar18,unaff_x25,uVar10);
                _printk("%s%s: can\'t find substream for card# %u, dev# %u dir%u\n",0x8001b5e,
                        "handle_uaudio_stream_req",pcVar18,unaff_x25,uVar10);
                uVar20 = 0xffffffea;
                iVar4 = -0x13;
                goto code_r0x0800455c;
            }
            pcVar6 = "%s%s: unsupported pcm format received %d\n";
            ipc_log_string(_segment.ehdr[10],"%s%s: unsupported pcm format received %d\n",0x8001d8e,
                           "handle_uaudio_stream_req");
            pcVar12 = *(param_4 + 0xc);
        }
        else {
            pcVar6 = "%s%s: invalid card # %u";
            ipc_log_string(_segment.ehdr[10],"%s%s: invalid card # %u",0x8001d8e,"handle_uaudio_stream_req",pcVar18)
            ;
            pcVar12 = pcVar18;
        }
        unaff_x25 = "handle_uaudio_stream_req";
        _printk(pcVar6,0x8001b5e,"handle_uaudio_stream_req",pcVar12);
    }
    iVar4 = -0x16;
    uVar20 = 0xffffffea;
code_r0x0800455c:
    do {
        if (((*param_4 == '\0') && (iVar4 != -0x16)) && (iVar4 != -0x13)) {
            if (uVar20 < 0) {
                pcVar12 = unaff_x25;
                if (0x1f < pcVar18) goto code_r0x08004cd4;
            }
            else {
                if (0x1f < pcVar18) {
code_r0x08004cd4:
    //WARNING: Does not return
                    pcVar18 = SoftwareBreakpoint(0x5512,0x8004cd8);
                    (*pcVar18)();
                }
                iVar9 = (pcVar18 & 0xffffffff) * 0x50;
                piVar19 = *(iVar9 + 0x8000258) + (uVar20 & 0xffffffff) * 0x50;
                uStack_150 = *(obj.uadev + iVar9);
                sym.uaudio_iommu_unmap(1,*piVar19,piVar19[1],piVar19[1]);
                *piVar19 = 0;
                piVar19[1] = 0;
                sym.uaudio_iommu_unmap(1,piVar19[2],piVar19[3],piVar19[3]);
                piVar19[2] = 0;
                piVar19[3] = 0;
                sym.uaudio_iommu_unmap(2,piVar19[4],piVar19[5],piVar19[5]);
                piVar19[4] = 0;
                usb_free_coherent(uStack_150,piVar19[5],piVar19[8],piVar19[6]);
                piVar19[8] = 0;
                *(piVar19 + 0x4c) = 0;
                piVar19[5] = 0;
                piVar19[6] = 0;
                ipc_log_string(_segment.ehdr[10],"%s%s: release resources: intf# %d card# %d\n",0x8001d8e,
                               "handle_uaudio_stream_req",piVar19[9],pcVar18 & 0xffffffff);
                _printk("%s%s: release resources: intf# %d card# %d\n",0x8001f33,"handle_uaudio_stream_req",
                        piVar19[9],pcVar18 & 0xffffffff);
                pcVar12 = pcVar18;
            }
            uVar20 = pcVar18 & 0xffffffff;
            unaff_x25 = pcVar12;
            if (*(uVar20 * 0x50 + 0x8000230) != 0) {
                iVar9 = uVar20 * 0x50;
                unaff_x25 = obj.uadev + iVar9;
                piVar16 = iVar9 + 0x8000234;
                Hint_Prefetch(piVar16,2,0,1);
                do {
                    iVar1 = *piVar16;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar16,0x10);
                    if (bVar3) {
                        *piVar16 = iVar1 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (iVar1 == 1) {
                    DataMemoryBarrier(2,1);
                    ipc_log_string(_segment.ehdr[10],"%s%s: for dev %pK\n",0x8001d8e,"uaudio_dev_release",unaff_x25)
                    ;
                    _printk("%s%s: for dev %pK\n",0x8001f33,"uaudio_dev_release",unaff_x25);
                    sym.uaudio_event_ring_cleanup_free(unaff_x25);
                    *(iVar9 + 0x8000230) = 0;
                    __wake_up(iVar9 + 0x8000238,3,1,0);
                    uVar20 = uVar5;
                }
                else {
                    unaff_x25 = pcVar12;
                    if (iVar1 < 1) {
                        refcount_warn_saturate(piVar16,3);
                    }
                }
            }
        }
        uStack_138 = CONCAT44(uStack_138._4_4_,iVar4);
        uStack_128 = CONCAT44(uStack_128._4_4_,*(param_4 + 4));
        uStack_130._0_5_ = CONCAT14(1,uStack_130);
        uStack_140 = CONCAT35(uStack_140._5_3_,0x100000000);
        uStack_140 = CONCAT44(uStack_140._4_4_,iVar4 != 0);
        uStack_148._0_5_ = CONCAT14(1,uStack_148);
        puVar8 = qmi_send_response(*puVar8,param_2,param_3,1,0xca,obj.qmi_uaudio_stream_resp_msg_v01_ei,
                                   &uStack_148);
        param_2 = _segment.ehdr[10];
        iVar9 = ktime_get();
        iVar4 = -0x2849cb25;
        param_4 = "%s%s: ret %d: qmi response latency %lld ms\n";
        ipc_log_string(param_2,"%s%s: ret %d: qmi response latency %lld ms\n",0x8001d8e,"handle_uaudio_stream_req",
                       puVar8 & 0xffffffff,(iVar9 - uVar5) / 1000000);
        iVar9 = ktime_get();
        _printk("%s%s: ret %d: qmi response latency %lld ms\n",0x8001f33,"handle_uaudio_stream_req",
                puVar8 & 0xffffffff,(iVar9 - uVar5) / 1000000);
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail();
        piVar16 = extraout_x10;
code_r0x08004e20:
        Hint_Prefetch(piVar16,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar16,0x10);
            if (bVar3) {
                *piVar16 = *piVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*param_4 == '\0') {
            iVar9 = *(unaff_x25 + pcStack_158 * 0x50 + 0x40);
            puVar21 = iVar9 + uVar20 * 0x50 + 0x38;
            uVar10 = *puVar21;
            if (uVar10 != 0) {
                arg1 = *pcStack_168;
                iVar11 = arg1 + 0x4e8;
                if ((uVar10 & 0x80) != 0) {
                    iVar11 = arg1 + 0x468;
                }
                iVar11 = *(iVar11 + (uVar10 >> 0xf & 0xf) * 8);
                if (iVar11 == 0) {
                    unaff_x25 = "%s%s: no data ep\n";
                    ipc_log_string(_segment.ehdr[10],"%s%s: no data ep\n",0x8001d8e,"handle_uaudio_stream_req");
                    _printk("%s%s: no data ep\n",0x8001f33,"handle_uaudio_stream_req");
                }
                else {
                    sym.xhci_stop_endpoint(arg1,iVar11);
                }
                *puVar21 = 0;
            }
            puVar21 = iVar9 + uVar20 * 0x50 + 0x3c;
            uVar10 = *puVar21;
            if (uVar10 != 0) {
                iVar11 = *pcStack_168;
                iVar9 = iVar11 + 0x4e8;
                if ((uVar10 & 0x80) != 0) {
                    iVar9 = iVar11 + 0x468;
                }
                iVar9 = *(iVar9 + (uVar10 >> 0xf & 0xf) * 8);
                if (iVar9 == 0) {
                    ipc_log_string(_segment.ehdr[10],"%s%s: no sync ep\n",0x8001d8e,"handle_uaudio_stream_req");
                    _printk("%s%s: no sync ep\n",0x8001f33,"handle_uaudio_stream_req");
                }
                else {
                    sym.xhci_stop_endpoint(iVar11,iVar9);
                }
                *puVar21 = 0;
            }
            sym.disable_audio_stream(piStack_178);
        }
        else {
            uVar5 = sym.map_pcm_format(*(param_4 + 0xc));
            iVar4 = sym.enable_audio_stream(piStack_178,uVar5 & 0xffffffff,*(param_4 + 0x14),*(param_4 + 0x1c));
            if (iVar4 == 0) {
                iVar4 = sym.prepare_qmi_response(piStack_178,param_4,&uStack_148,uVar20 & 0xffffffff);
            }
        }
        Hint_Prefetch(piStack_180,2,0,1);
        do {
            iVar1 = *piStack_180;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piStack_180,0x10);
            if (bVar3) {
                *piStack_180 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        uVar5 = uStack_170;
        pcVar18 = pcStack_158;
        param_3 = uStack_150;
        if ((iVar1 + -1 == 0) && (*(iStack_160 + 0xd8) != 0)) {
            __wake_up(iStack_160 + 0xe0,3,1,0);
        }
    } while( true );
}


// ===== sym.uaudio_qmi_plat_probe.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x08003218 (size 8) =====

int sym.uaudio_qmi_plat_probe.39905be140b67e9ea55cbaff5680076d.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(param_1 + 0x300);
    if (_segment.ehdr != NULL) {
code_r0x08003628:
        iVar5 = param_1 + 0x10;
        _segment.ehdr = devm_kmalloc(iVar5,0x70,0xdc0);
        if (_segment.ehdr == NULL) {
            return -0xc;
        }
        piVar4 = _segment.ehdr + 1;
        *_segment.ehdr = iVar5;
        iVar2 = of_property_read_variable_u32_array(uVar8,"qcom,usb-audio-stream-id",piVar4,1,0);
        if (iVar2 < 0) {
            pcVar7 = "failed to read sid.\n";
        }
        else {
            iVar2 = of_property_read_variable_u32_array(uVar8,"qcom,usb-audio-intr-num",_segment.ehdr + 0xc,1,0);
            if (iVar2 < 0) {
                pcVar7 = "failed to read intr num.\n";
            }
            else {
                iVar6 = iommu_domain_alloc(*(param_1 + 0x90));
                _segment.ehdr[3] = iVar6;
                if (iVar6 != 0) {
                    iVar2 = iommu_attach_device(iVar6,iVar5);
                    piVar4 = _segment.ehdr;
                    if (iVar2 == 0) {
                        piVar1 = _segment.ehdr + 4;
                        _segment.ehdr[4] = piVar1;
                        piVar4[5] = piVar1;
                        piVar4[6] = 0x3ff000;
                        piVar4[7] = 0x22000;
                        piVar4[8] = piVar4 + 8;
                        piVar4[9] = piVar4 + 8;
                        piVar4[10] = 0xffbdc000;
                        piVar4[0xb] = 0x422000;
                        iVar2 = tracepoint_probe_register
                                          (__tracepoint_android_vh_audio_usb_offload_connect,
                                           sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
                        if (iVar2 == 0) {
                            uVar3 = android_rvh_probe_register
                                              (__tracepoint_android_rvh_audio_usb_offload_disconnect,
                                               sym.uaudio_disconnect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
                            _dev_err(iVar5,"failed to register disconnect callback ret = %d\n",uVar3);
                            return 0;
                        }
                        _dev_err(iVar5,"failed to register connect callback ret = %d\n",iVar2);
                        iommu_detach_device(_segment.ehdr[3],iVar5);
                    }
                    else {
                        _dev_err(iVar5,"failed to attach device ret = %d\n",iVar2);
                    }
                    iommu_domain_free(_segment.ehdr[3]);
                    return iVar2;
                }
                pcVar7 = "failed to allocate iommu domain\n";
            }
        }
        _dev_err(iVar5,pcVar7);
        return -0x13;
    }
    piVar4 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x58);
    if (piVar4 == NULL) {
        return -0xc;
    }
    iVar5 = alloc_workqueue(0x80011a6,0xe000a,1,"uaudio_svc");
    piVar4[7] = iVar5;
    if (iVar5 == 0) {
        iVar2 = -0xc;
    }
    else {
        iVar6 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x140);
        *piVar4 = iVar6;
        if (iVar6 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar2 = qmi_handle_init(iVar6,0x2e,obj.uaudio_svc_ops_options,obj.uaudio_stream_req_handlers);
            if (iVar2 < 0) {
                _printk(0x800181f,"uaudio_qmi_svc_init",iVar2);
            }
            else {
                _segment.ehdr = piVar4;
                piVar4[1] = 0xfffffffe0;
                piVar4[2] = piVar4 + 2;
                piVar4[3] = piVar4 + 2;
                piVar4[4] = sym.uaudio_qmi_disconnect_work.39905be140b67e9ea55cbaff5680076d.cfi_jt;
                iVar2 = qmi_add_server(iVar6,0x41d,1,0);
                if (-1 < iVar2) {
                    iVar5 = ipc_log_context_create(10,"usb_audio",0);
                    piVar4[10] = iVar5;
                    goto code_r0x08003628;
                }
                _printk(0x80010ea,"uaudio_qmi_svc_init",iVar2);
                qmi_handle_release(*piVar4);
                iVar6 = *piVar4;
                _segment.ehdr = NULL;
            }
            kfree(iVar6);
            iVar5 = piVar4[7];
        }
        destroy_workqueue(iVar5);
    }
    kfree(piVar4);
    return iVar2;
}


// ===== sym.uaudio_qmi_plat_remove.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x08003220 (size 8) =====

ulong sym.uaudio_qmi_plat_remove.39905be140b67e9ea55cbaff5680076d.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_audio_usb_offload_connect,
               sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
    iommu_detach_device(*(_segment.ehdr + 0x18),param_1 + 0x10);
    iommu_domain_free(*(_segment.ehdr + 0x18));
    *(_segment.ehdr + 0x18) = 0;
    return 0;
}


// ===== sym.uaudio_qmi_bye_cb.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x08003228 (size 8) =====

void sym.uaudio_qmi_bye_cb.39905be140b67e9ea55cbaff5680076d.cfi_jt(int64_t param_1,int param_2)

{
    int64_t *piVar1;
    ulong *in_x18;
    int *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = _segment.ehdr;
    if (*_segment.ehdr == param_1) {
        if (*(_segment.ehdr + 0x4c) != '\0') {
            piVar2 = _segment.ehdr + 0x44;
            if (*piVar2 == param_2) {
                ipc_log_string(_segment.ehdr[10],"%s%s: node: %d\n",0x8001d8e,"uaudio_qmi_bye_cb",param_2);
                _printk("%s%s: node: %d\n",0x8001f33,"uaudio_qmi_bye_cb",param_2);
                queue_work_on(0x20,piVar1[7],piVar1 + 1);
                *(piVar1 + 8) = 0;
                piVar2[0] = 0;
                piVar2[1] = 0;
                *(piVar1 + 0x4c) = 0;
            }
        }
    }
    else {
        ipc_log_string(_segment.ehdr[10],"%s%s: handle mismatch\n",0x8001d8e,"uaudio_qmi_bye_cb");
        _printk("%s%s: handle mismatch\n",0x8001b5e,"uaudio_qmi_bye_cb");
    }
    return;
}


// ===== sym.uaudio_qmi_svc_disconnect_cb.39905be140b67e9ea55cbaff5680076d.cfi_jt @ 0x08003230 (size 8) =====

void sym.uaudio_qmi_svc_disconnect_cb.39905be140b67e9ea55cbaff5680076d.cfi_jt(int64_t param_1,int param_2,int param_3)

{
    int64_t *piVar1;
    ulong *in_x18;
    int *piVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = _segment.ehdr;
    if (_segment.ehdr != NULL) {
        if (*_segment.ehdr == param_1) {
            if (*(_segment.ehdr + 0x4c) != '\0') {
                piVar2 = _segment.ehdr + 0x44;
                if (*piVar2 == param_2) {
                    if (_segment.ehdr[9] == param_3) {
                        ipc_log_string(_segment.ehdr[10],"%s%s: client node:%x port:%x\n",0x8001d8e,
                                       "uaudio_qmi_svc_disconnect_cb",param_2,param_3);
                        _printk("%s%s: client node:%x port:%x\n",0x8001f33,"uaudio_qmi_svc_disconnect_cb",param_2,
                                param_3);
                        queue_work_on(0x20,piVar1[7],piVar1 + 1);
                        *(piVar1 + 8) = 0;
                        piVar2[0] = 0;
                        piVar2[1] = 0;
                        *(piVar1 + 0x4c) = 0;
                    }
                }
            }
        }
        else {
            ipc_log_string(_segment.ehdr[10],"%s%s: handle mismatch\n",0x8001d8e,"uaudio_qmi_svc_disconnect_cb");
            _printk("%s%s: handle mismatch\n",0x8001b5e,"uaudio_qmi_svc_disconnect_cb");
        }
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08003238 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800327c

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
    //switch table (4 cases) at 0x8000f38
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003290);
    (*pcVar1)();
}


// ===== sym.uaudio_qmi_ctrl_msg_quirk @ 0x08003290 (size 108) =====

uchar  [16] sym.uaudio_qmi_ctrl_msg_quirk(int64_t arg1,uchar noname_1 [16],uchar noname_2 [16],int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg2 & 0x60) == 0x20) && (*(arg1 + 0x140) != 0)) {
        uVar1 = *(*(arg1 + 0x140) + 0xf8);
        if ((uVar1 >> 8 & 1) == 0) {
            if ((uVar1 >> 9 & 1) == 0) {
                if ((uVar1 >> 10 & 1) == 0) {
                    return noname_1;
                }
                uVar2 = 5000;
                uVar3 = 6000;
            }
            else {
                uVar2 = 1000;
                uVar3 = 2000;
            }
            noname_1 = usleep_range_state(uVar2,uVar3,2);
        }
        else {
            noname_1 = msleep(0x14);
        }
    }
    return noname_1;
}


// ===== sym.uaudio_qmi_ctrl_msg @ 0x080032fc (size 376) =====

uint sym.uaudio_qmi_ctrl_msg(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    uint in_w4;
    uint in_w5;
    uint32_t in_w7;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = usb_pipe_type_check();
    if (iVar2 == 0) {
        if ((in_w7 & 0xffff) == 0) {
            uVar3 = usb_control_msg(arg1,arg2 & 0xffffffffU,arg3 & 0xffffffffU,arg4 & 0xffffffffU,in_w4,in_w5,0,0
                                    ,5000);
        }
        else {
            iVar4 = kmemdup();
            if (iVar4 == 0) {
                return 0xfffffff4;
            }
            uVar3 = usb_control_msg(arg1,arg2 & 0xffffffffU,arg3 & 0xffffffffU,arg4 & 0xffffffffU,in_w4,in_w5,
                                    iVar4,in_w7,5000);
            memcpy();
            kfree(iVar4);
        }
        if (((arg4 & 0x60) == 0x20) && (*(arg1 + 0x140) != 0)) {
            uVar1 = *(*(arg1 + 0x140) + 0xf8);
            if ((uVar1 >> 8 & 1) == 0) {
                if ((uVar1 >> 9 & 1) == 0) {
                    if ((uVar1 >> 10 & 1) == 0) {
                        return uVar3;
                    }
                    uVar5 = 5000;
                    uVar6 = 6000;
                }
                else {
                    uVar5 = 1000;
                    uVar6 = 2000;
                }
                usleep_range_state(uVar5,uVar6,2);
            }
            else {
                msleep(0x14);
            }
        }
    }
    else {
        uVar3 = 0xffffffea;
    }
    return uVar3;
}


// ===== sym.usb_audio_power_domain_set @ 0x08003474 (size 384) =====

//WARNING: Removing unreachable block (ram,0x08003554)
//WARNING: Removing unreachable block (ram,0x08003578)
//WARNING: Removing unreachable block (ram,0x0800357c)

int sym.usb_audio_power_domain_set(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    int *arg1_00;
    ulong uVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar8 = *(iVar8 + 0x5e0);
    arg1_00 = *(arg1 + 8);
    iVar2 = sym.uaudio_qmi_ctrl_msg(arg1_00,*arg1_00 << 8 | 0x80000080,1,0xa1);
    if (iVar2 < 0) {
        _dev_err(arg1_00 + 0x2a,"Can\'t get UAC3 power state for id %d\n",*arg2);
    }
    else if ((arg3 & 0xffU) == 0) {
code_r0x0800358c:
        iVar2 = 0;
    }
    else {
        iVar2 = sym.uaudio_qmi_ctrl_msg(*(arg1 + 8),**(arg1 + 8) << 8 | 0x80000000,1,0x21);
        if (iVar2 < 0) {
            _dev_err(arg1_00 + 0x2a,"Can\'t set UAC3 power state to %d for id %d\n",arg3 & 0xff,*arg2);
        }
        else {
            if (arg3 != '\0') goto code_r0x0800358c;
            iVar2 = -0x16;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iVar8) {
        return iVar2;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.uaudio_qmi_plat_probe;
    uVar9 = *(iVar8 + 0x300);
    if (_segment.ehdr == NULL) {
        piVar4 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x58);
        if (piVar4 == NULL) {
            return -0xc;
        }
        iVar5 = alloc_workqueue(0x80011a6,0xe000a,1,"uaudio_svc");
        piVar4[7] = iVar5;
        if (iVar5 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar6 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x140);
            *piVar4 = iVar6;
            if (iVar6 == 0) {
                iVar2 = -0xc;
            }
            else {
                iVar2 = qmi_handle_init(iVar6,0x2e,obj.uaudio_svc_ops_options,obj.uaudio_stream_req_handlers);
                if (iVar2 < 0) {
                    _printk(0x800181f,"uaudio_qmi_svc_init",iVar2);
                }
                else {
                    _segment.ehdr = piVar4;
                    piVar4[1] = 0xfffffffe0;
                    piVar4[2] = piVar4 + 2;
                    piVar4[3] = piVar4 + 2;
                    piVar4[4] = sym.uaudio_qmi_disconnect_work.39905be140b67e9ea55cbaff5680076d.cfi_jt;
                    iVar2 = qmi_add_server(iVar6,0x41d,1,0);
                    if (-1 < iVar2) {
                        iVar5 = ipc_log_context_create(10,"usb_audio",0);
                        piVar4[10] = iVar5;
                        goto code_r0x08003628;
                    }
                    _printk(0x80010ea,"uaudio_qmi_svc_init",iVar2);
                    qmi_handle_release(*piVar4);
                    iVar6 = *piVar4;
                    _segment.ehdr = NULL;
                }
                kfree(iVar6);
                iVar5 = piVar4[7];
            }
            destroy_workqueue(iVar5);
        }
        kfree(piVar4);
        return iVar2;
    }
code_r0x08003628:
    iVar5 = iVar8 + 0x10;
    _segment.ehdr = devm_kmalloc(iVar5,0x70,0xdc0);
    if (_segment.ehdr == NULL) {
        return -0xc;
    }
    piVar4 = _segment.ehdr + 1;
    *_segment.ehdr = iVar5;
    iVar2 = of_property_read_variable_u32_array(uVar9,"qcom,usb-audio-stream-id",piVar4,1,0);
    if (iVar2 < 0) {
        pcVar7 = "failed to read sid.\n";
    }
    else {
        iVar2 = of_property_read_variable_u32_array(uVar9,"qcom,usb-audio-intr-num",_segment.ehdr + 0xc,1,0);
        if (iVar2 < 0) {
            pcVar7 = "failed to read intr num.\n";
        }
        else {
            iVar8 = iommu_domain_alloc(*(iVar8 + 0x90));
            _segment.ehdr[3] = iVar8;
            if (iVar8 != 0) {
                iVar2 = iommu_attach_device(iVar8,iVar5);
                piVar4 = _segment.ehdr;
                if (iVar2 == 0) {
                    piVar1 = _segment.ehdr + 4;
                    _segment.ehdr[4] = piVar1;
                    piVar4[5] = piVar1;
                    piVar4[6] = 0x3ff000;
                    piVar4[7] = 0x22000;
                    piVar4[8] = piVar4 + 8;
                    piVar4[9] = piVar4 + 8;
                    piVar4[10] = 0xffbdc000;
                    piVar4[0xb] = 0x422000;
                    iVar2 = tracepoint_probe_register
                                      (__tracepoint_android_vh_audio_usb_offload_connect,
                                       sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
                    if (iVar2 == 0) {
                        uVar3 = android_rvh_probe_register
                                          (__tracepoint_android_rvh_audio_usb_offload_disconnect,
                                           sym.uaudio_disconnect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
                        _dev_err(iVar5,"failed to register disconnect callback ret = %d\n",uVar3);
                        return 0;
                    }
                    _dev_err(iVar5,"failed to register connect callback ret = %d\n",iVar2);
                    iommu_detach_device(_segment.ehdr[3],iVar5);
                }
                else {
                    _dev_err(iVar5,"failed to attach device ret = %d\n",iVar2);
                }
                iommu_domain_free(_segment.ehdr[3]);
                return iVar2;
            }
            pcVar7 = "failed to allocate iommu domain\n";
        }
    }
    _dev_err(iVar5,pcVar7);
    return -0x13;
}


// ===== sym.uaudio_qmi_plat_probe @ 0x080035f4 (size 840) =====

int sym.uaudio_qmi_plat_probe(int64_t arg1)

{
    int64_t *piVar1;
    int iVar2;
    uint uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    ulong *in_x18;
    ulong uVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar8 = *(arg1 + 0x300);
    if (_segment.ehdr != NULL) {
code_r0x08003628:
        iVar5 = arg1 + 0x10;
        _segment.ehdr = devm_kmalloc(iVar5,0x70,0xdc0);
        if (_segment.ehdr == NULL) {
            return -0xc;
        }
        piVar4 = _segment.ehdr + 1;
        *_segment.ehdr = iVar5;
        iVar2 = of_property_read_variable_u32_array(uVar8,"qcom,usb-audio-stream-id",piVar4,1,0);
        if (iVar2 < 0) {
            pcVar7 = "failed to read sid.\n";
        }
        else {
            iVar2 = of_property_read_variable_u32_array(uVar8,"qcom,usb-audio-intr-num",_segment.ehdr + 0xc,1,0);
            if (iVar2 < 0) {
                pcVar7 = "failed to read intr num.\n";
            }
            else {
                iVar6 = iommu_domain_alloc(*(arg1 + 0x90));
                _segment.ehdr[3] = iVar6;
                if (iVar6 != 0) {
                    iVar2 = iommu_attach_device(iVar6,iVar5);
                    piVar4 = _segment.ehdr;
                    if (iVar2 == 0) {
                        piVar1 = _segment.ehdr + 4;
                        _segment.ehdr[4] = piVar1;
                        piVar4[5] = piVar1;
                        piVar4[6] = 0x3ff000;
                        piVar4[7] = 0x22000;
                        piVar4[8] = piVar4 + 8;
                        piVar4[9] = piVar4 + 8;
                        piVar4[10] = 0xffbdc000;
                        piVar4[0xb] = 0x422000;
                        iVar2 = tracepoint_probe_register
                                          (__tracepoint_android_vh_audio_usb_offload_connect,
                                           sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
                        if (iVar2 == 0) {
                            uVar3 = android_rvh_probe_register
                                              (__tracepoint_android_rvh_audio_usb_offload_disconnect,
                                               sym.uaudio_disconnect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
                            _dev_err(iVar5,"failed to register disconnect callback ret = %d\n",uVar3);
                            return 0;
                        }
                        _dev_err(iVar5,"failed to register connect callback ret = %d\n",iVar2);
                        iommu_detach_device(_segment.ehdr[3],iVar5);
                    }
                    else {
                        _dev_err(iVar5,"failed to attach device ret = %d\n",iVar2);
                    }
                    iommu_domain_free(_segment.ehdr[3]);
                    return iVar2;
                }
                pcVar7 = "failed to allocate iommu domain\n";
            }
        }
        _dev_err(iVar5,pcVar7);
        return -0x13;
    }
    piVar4 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x58);
    if (piVar4 == NULL) {
        return -0xc;
    }
    iVar5 = alloc_workqueue(0x80011a6,0xe000a,1,"uaudio_svc");
    piVar4[7] = iVar5;
    if (iVar5 == 0) {
        iVar2 = -0xc;
    }
    else {
        iVar6 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x140);
        *piVar4 = iVar6;
        if (iVar6 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar2 = qmi_handle_init(iVar6,0x2e,obj.uaudio_svc_ops_options,obj.uaudio_stream_req_handlers);
            if (iVar2 < 0) {
                _printk(0x800181f,"uaudio_qmi_svc_init",iVar2);
            }
            else {
                _segment.ehdr = piVar4;
                piVar4[1] = 0xfffffffe0;
                piVar4[2] = piVar4 + 2;
                piVar4[3] = piVar4 + 2;
                piVar4[4] = sym.uaudio_qmi_disconnect_work.39905be140b67e9ea55cbaff5680076d.cfi_jt;
                iVar2 = qmi_add_server(iVar6,0x41d,1,0);
                if (-1 < iVar2) {
                    iVar5 = ipc_log_context_create(10,"usb_audio",0);
                    piVar4[10] = iVar5;
                    goto code_r0x08003628;
                }
                _printk(0x80010ea,"uaudio_qmi_svc_init",iVar2);
                qmi_handle_release(*piVar4);
                iVar6 = *piVar4;
                _segment.ehdr = NULL;
            }
            kfree(iVar6);
            iVar5 = piVar4[7];
        }
        destroy_workqueue(iVar5);
    }
    kfree(piVar4);
    return iVar2;
}


// ===== sym.uaudio_qmi_plat_remove @ 0x0800393c (size 112) =====

ulong sym.uaudio_qmi_plat_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    tracepoint_probe_unregister
              (__tracepoint_android_vh_audio_usb_offload_connect,
               sym.uaudio_connect.39905be140b67e9ea55cbaff5680076d.cfi_jt,0);
    iommu_detach_device(*(_segment.ehdr + 0x18),arg1 + 0x10);
    iommu_domain_free(*(_segment.ehdr + 0x18));
    *(_segment.ehdr + 0x18) = 0;
    return 0;
}


// ===== sym.uaudio_connect @ 0x080039ac (size 336) =====

void sym.uaudio_connect(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0xa0);
    if (iVar3 == 0) {
        iVar3 = *(arg1 + 0x30);
    }
    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: intf: %s: %p chip: %p card_number:%d\n",0x8001d8e,"uaudio_connect"
                   ,iVar3,arg1,arg2,**(arg2 + 0x10));
    iVar3 = *(arg1 + 0xa0);
    if (iVar3 == 0) {
        iVar3 = *(arg1 + 0x30);
    }
    _printk("%s%s: intf: %s: %p chip: %p card_number:%d\n",0x8001f33,"uaudio_connect",iVar3,arg1,arg2,
            **(arg2 + 0x10));
    uVar1 = **(arg2 + 0x10);
    if (0x1f < uVar1) {
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: Invalid card number\n",0x8001d8e,"uaudio_connect");
        _printk("%s%s: Invalid card number\n",0x8001b5e,"uaudio_connect");
        return;
    }
    if (uVar1 < 0x20) {
        *(uVar1 * 0x50 + 0x8000260) = arg2;
        if (**(arg2 + 0x10) < 0x20) {
            iVar3 = *(**(arg2 + 0x10) * 0x50 + 0x8000260);
            *(iVar3 + 0xf8) = *(iVar3 + 0xf8) | 0x200;
            return;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8003afc);
    (*pcVar2)();
}


// ===== sym.uaudio_disconnect @ 0x08003afc (size 1156) =====

void sym.uaudio_disconnect(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    ulong *puVar3;
    code *pcVar4;
    int iVar5;
    ulong uVar6;
    uint64_t uVar7;
    char *pcVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint64_t uVar10;
    int64_t iVar11;
    ulong *puVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar extraout_q0 [16];
    uchar extraout_q0_00 [16];
    uchar extraout_q0_01 [16];
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    puVar3 = _segment.ehdr;
    iVar11 = sp_el0;
    iStack_70 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 200);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    if (iVar11 == 0) {
        uVar6 = _segment.ehdr[10];
        pcVar8 = "%s%s: chip is NULL\n";
code_r0x08003b7c:
        ipc_log_string(uVar6,pcVar8,0x8001d8e,"uaudio_disconnect");
        _printk(pcVar8,0x8001b5e,"uaudio_disconnect");
    }
    else {
        iVar9 = *(arg1 + 0xa0);
        uVar2 = **(iVar11 + 0x10);
        uVar10 = uVar2;
        if (iVar9 == 0) {
            iVar9 = *(arg1 + 0x30);
        }
        ipc_log_string(_segment.ehdr[10],"%s%s: intf: %s: %p chip: %p card: %d\n",0x8001d8e,"uaudio_disconnect",
                       iVar9,arg1,iVar11,uVar10);
        iVar9 = *(arg1 + 0xa0);
        if (iVar9 == 0) {
            iVar9 = *(arg1 + 0x30);
        }
        pcVar8 = "uaudio_disconnect";
        noname_1 = _printk("%s%s: intf: %s: %p chip: %p card: %d\n",0x8001f33,"uaudio_disconnect",iVar9,arg1,iVar11
                           ,uVar10);
        if (0x1f < uVar2) {
            pcVar8 = "%s%s: invalid card number\n";
            uVar6 = _segment.ehdr[10];
            goto code_r0x08003b7c;
        }
        if (0x20 < uVar2) goto code_r0x08003f7c;
        pcVar4 = obj.uadev + uVar10 * 0x50;
        if (*pcVar4 == 0) {
            ipc_log_string(_segment.ehdr[10],"%s%s: no clean up required\n",0x8001d8e,"uaudio_disconnect");
            _printk("%s%s: no clean up required\n",0x8001f33,"uaudio_disconnect");
        }
        else {
            puVar1 = uVar10 * 0x50 + 0x8000230;
            if (*puVar1 != 0) {
                ipc_log_string(_segment.ehdr[10],"%s%s: sending qmi indication disconnect\n",0x8001d8e,
                               "uaudio_disconnect");
                _printk("%s%s: sending qmi indication disconnect\n",0x8001f33,"uaudio_disconnect");
                puVar12 = puVar3 + 8;
                ipc_log_string(_segment.ehdr[10],"%s%s: sq->sq_family:%x sq->sq_node:%x sq->sq_port:%x\n",0x8001d8e,
                               "uaudio_disconnect",*puVar12,*(puVar3 + 0x44),*(puVar3 + 9));
                _printk("%s%s: sq->sq_family:%x sq->sq_node:%x sq->sq_port:%x\n",0x8001f33,"uaudio_disconnect",
                        *puVar12,*(puVar3 + 0x44),*(puVar3 + 9));
                uVar6 = uStack_78;
                pcVar8 = 0x1;
                uStack_130 = CONCAT44(*(*pcVar4 + 0x5d8),1);
                uStack_78._4_4_ = SUB84(uVar6,4);
                uStack_78._0_4_ = CONCAT13(*(uVar10 * 0x50 + 0x800022c),CONCAT12(1,uStack_78));
                iVar5 = qmi_send_indication(*puVar3,puVar12,1,0xb5,obj.qmi_uaudio_stream_ind_msg_v01_ei,&uStack_130
                                           );
                if (iVar5 < 0) {
                    pcVar8 = "uaudio_disconnect";
                    ipc_log_string(_segment.ehdr[10],"%s%s: qmi send failed with err: %d\n",0x8001d8e,
                                   "uaudio_disconnect",iVar5);
                    noname_1 = _printk("%s%s: qmi send failed with err: %d\n",0x8001b5e,"uaudio_disconnect",iVar5);
                    iVar5 = *puVar1;
                }
                else {
                    iVar5 = *puVar1;
                    noname_1 = extraout_q0;
                }
                if (iVar5 != 0) {
                    uStack_140 = 0;
                    uStack_138 = 0;
                    uStack_150 = 0;
                    uStack_148 = 0;
                    uStack_158 = 0;
                    init_wait_entry(&uStack_158,0);
                    pcVar8 = 0x1;
                    iVar11 = uVar10 * 0x50 + 0x8000238;
                    uVar7 = prepare_to_wait_event(iVar11,&uStack_158);
                    if (*puVar1 == 0) {
                        uVar13 = 0x9c4;
                    }
                    else {
                        uVar13 = 0x9c4;
                        noname_1 = extraout_q0_00;
                        do {
                            if (uVar7 != 0) goto code_r0x08003e88;
                            uVar13 = schedule_timeout(uVar13);
                            pcVar8 = 0x1;
                            uVar7 = prepare_to_wait_event(iVar11,&uStack_158);
                            if (uVar13 == 0 && *puVar1 == 0) {
                                uVar13 = 1;
                            }
                        } while ((*puVar1 != 0) && (noname_1 = extraout_q0_01, uVar13 != 0));
                    }
                    uVar7 = uVar13;
                    noname_1 = finish_wait(iVar11,&uStack_158);
code_r0x08003e88:
                    if (uVar7 == 0) {
                        pcVar8 = "uaudio_disconnect";
                        ipc_log_string(_segment.ehdr[10],"%s%s: timeout while waiting for dev_release\n",0x8001d8e,
                                       "uaudio_disconnect");
                        noname_1 = _printk("%s%s: timeout while waiting for dev_release\n",0x8001b5e);
                    }
                    else {
                        if (-1 < uVar7) goto code_r0x08003c64;
                        pcVar8 = "uaudio_disconnect";
                        ipc_log_string(_segment.ehdr[10],"%s%s: failed with ret %d\n",0x8001d8e,"uaudio_disconnect",
                                       uVar7 & 0xffffffff);
                        noname_1 = _printk("%s%s: failed with ret %d\n",0x8001b5e,"uaudio_disconnect",
                                           uVar7 & 0xffffffff);
                    }
                    *puVar1 = 0;
                }
            }
code_r0x08003c64:
            sym.uaudio_dev_cleanup(pcVar4,noname_1,pcVar8);
        }
        *(uVar10 * 0x50 + 0x8000260) = 0;
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_70) {
        return;
    }
    __stack_chk_fail();
code_r0x08003f7c:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8003f80);
    (*pcVar4)();
}


// ===== sym.uaudio_qmi_disconnect_work @ 0x08003f94 (size 548) =====

int64_t sym.uaudio_qmi_disconnect_work(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    code *pcVar5;
    char *in_x2;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint8_t *puVar10;
    uint8_t *puVar11;
    int64_t iVar12;
    uint8_t *puVar13;
    ulong unaff_x30;
    uchar in_q0 [16];
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar7 = 0;
    do {
        puVar1 = iVar7 * 0x50 + 0x8000230;
        if (*puVar1 != 0) {
            iVar4 = iVar7 * 0x50;
            if (0 < *(iVar4 + 0x8000250)) {
                iVar12 = 0;
                do {
                    iVar6 = *(iVar4 + 0x8000258);
                    if ((iVar6 != 0) && (*(iVar6 + iVar12 * 0x50 + 0x4c) != '\0')) {
                        iVar6 = iVar6 + iVar12 * 0x50;
                        puVar11 = iVar6 + 0x49;
                        if (0x1f < *puVar11) {
    //WARNING: Does not return
                            pcVar5 = SoftwareBreakpoint(0x5512,0x80041b8);
                            (*pcVar5)();
                        }
                        puVar13 = iVar6 + 0x4a;
                        uVar2 = *puVar13;
                        in_x2 = uVar2;
                        iVar9 = *(*puVar11 * 0x50 + 0x8000260);
                        puVar10 = iVar6 + 0x4b;
                        uVar3 = *puVar10;
                        if ((iVar9 != 0) && (*(iVar9 + 0xd8) == 0)) {
                            if (uVar2 < *(iVar9 + 0x140)) {
                                if (uVar3 < 2) {
                                    for (piVar8 = *(iVar9 + 0x110); iVar9 + 0x110 != piVar8; piVar8 = *piVar8) {
                                        if (*(piVar8 + -0x35) == uVar2) {
                                            if ((piVar8 + uVar3 * 0x1a + -0x34 != NULL && *(iVar4 + 0x8000260) != 0) &&
                                               (*(*(iVar4 + 0x8000260) + 0xd8) == 0)) {
                                                in_q0 = sym.disable_audio_stream(piVar8 + uVar3 * 0x1a + -0x34);
                                                goto code_r0x080040a0;
                                            }
                                            break;
                                        }
                                    }
                                }
                                else {
                                    _printk(0x8001292,"find_substream",uVar3);
                                }
                            }
                            else {
                                _printk(0x800120e,"find_substream");
                            }
                        }
                        in_x2 = "uaudio_qmi_disconnect_work";
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: no subs for c#%u, dev#%u dir%u\n",0x8001d8e,
                                       "uaudio_qmi_disconnect_work",*puVar11,*puVar13,*puVar10);
                        in_q0 = _printk("%s%s: no subs for c#%u, dev#%u dir%u\n",0x8001f33,
                                        "uaudio_qmi_disconnect_work",*puVar11,*puVar13,*puVar10);
                    }
code_r0x080040a0:
                    iVar12 = iVar12 + 1;
                } while (iVar12 < *(iVar4 + 0x8000250));
            }
            *puVar1 = 0;
            arg1 = sym.uaudio_dev_cleanup(obj.uadev + iVar7 * 0x50,in_q0,in_x2);
            in_q0 = extraout_q0;
        }
        iVar7 = iVar7 + 1;
        if (iVar7 == 0x20) {
            return arg1;
        }
    } while( true );
}


// ===== sym.uaudio_qmi_bye_cb @ 0x080041c4 (size 268) =====

void sym.uaudio_qmi_bye_cb(uint32_t arg1,uint32_t arg2)

{
    uint64_t *puVar1;
    ulong *in_x18;
    uint32_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = _segment.ehdr;
    if (*_segment.ehdr == arg1) {
        if (*(_segment.ehdr + 0x4c) != '\0') {
            puVar2 = _segment.ehdr + 0x44;
            if (*puVar2 == arg2) {
                ipc_log_string(_segment.ehdr[10],"%s%s: node: %d\n",0x8001d8e,"uaudio_qmi_bye_cb",arg2);
                _printk("%s%s: node: %d\n",0x8001f33,"uaudio_qmi_bye_cb",arg2);
                queue_work_on(0x20,puVar1[7],puVar1 + 1);
                *(puVar1 + 8) = 0;
                puVar2[0] = 0;
                puVar2[1] = 0;
                *(puVar1 + 0x4c) = 0;
            }
        }
    }
    else {
        ipc_log_string(_segment.ehdr[10],"%s%s: handle mismatch\n",0x8001d8e,"uaudio_qmi_bye_cb");
        _printk("%s%s: handle mismatch\n",0x8001b5e,"uaudio_qmi_bye_cb");
    }
    return;
}


// ===== sym.uaudio_qmi_svc_disconnect_cb @ 0x080042d0 (size 296) =====

void sym.uaudio_qmi_svc_disconnect_cb(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint64_t *puVar1;
    ulong *in_x18;
    uint32_t *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = _segment.ehdr;
    if (_segment.ehdr != NULL) {
        if (*_segment.ehdr == arg1) {
            if (*(_segment.ehdr + 0x4c) != '\0') {
                puVar2 = _segment.ehdr + 0x44;
                if (*puVar2 == arg2) {
                    if (_segment.ehdr[9] == arg3) {
                        ipc_log_string(_segment.ehdr[10],"%s%s: client node:%x port:%x\n",0x8001d8e,
                                       "uaudio_qmi_svc_disconnect_cb",arg2,arg3);
                        _printk("%s%s: client node:%x port:%x\n",0x8001f33,"uaudio_qmi_svc_disconnect_cb",arg2,arg3)
                        ;
                        queue_work_on(0x20,puVar1[7],puVar1 + 1);
                        *(puVar1 + 8) = 0;
                        puVar2[0] = 0;
                        puVar2[1] = 0;
                        *(puVar1 + 0x4c) = 0;
                    }
                }
            }
        }
        else {
            ipc_log_string(_segment.ehdr[10],"%s%s: handle mismatch\n",0x8001d8e,"uaudio_qmi_svc_disconnect_cb");
            _printk("%s%s: handle mismatch\n",0x8001b5e,"uaudio_qmi_svc_disconnect_cb");
        }
    }
    return;
}


// ===== sym.handle_uaudio_stream_req @ 0x080043f8 (size 2888) =====

void sym.handle_uaudio_stream_req(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    char cVar2;
    bool bVar3;
    uint32_t arg2_00;
    int iVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint64_t uVar7;
    int64_t arg1_00;
    ulong *puVar8;
    int64_t iVar9;
    uint32_t uVar10;
    int64_t iVar11;
    code *pcVar12;
    int64_t *piVar13;
    ulong *puVar14;
    ulong uVar15;
    int *extraout_x10;
    int *piVar16;
    uint64_t uVar17;
    ulong *in_x18;
    code *pcVar18;
    int64_t *piVar19;
    char *unaff_x25;
    uint64_t uVar20;
    uint32_t *puVar21;
    ulong unaff_x30;
    int *piStack_180;
    int64_t *piStack_178;
    uint64_t uStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    code *pcStack_158;
    int64_t iStack_150;
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
    int64_t iStack_70;
    
    *in_x18 = unaff_x30;
    puVar8 = _segment.ehdr;
    iVar9 = sp_el0;
    iStack_70 = *(iVar9 + 0x5e0);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_148 = 0;
    uVar5 = ktime_get();
    ipc_log_string(_segment.ehdr[10],"%s%s: sq_node:%x sq_port:%x sq_family:%x\n",0x8001d8e,
                   "handle_uaudio_stream_req",*(arg1 + 4),*(arg1 + 8),*arg1);
    _printk("%s%s: sq_node:%x sq_port:%x sq_family:%x\n",0x8001f33,"handle_uaudio_stream_req",*(arg1 + 4),
            *(arg1 + 8),*arg1);
    if (*(puVar8 + 0x4c) == '\0') {
        uVar15 = *arg1;
        *(puVar8 + 9) = *(arg1 + 8);
        puVar8[8] = uVar15;
        *(puVar8 + 0x4c) = 1;
    }
    if ((((*(arg3 + 8) == '\0') || (*(arg3 + 0x18) == '\0')) || (*(arg3 + 0x10) == '\0')) || (*(arg3 + 0x20) == '\0')) {
        ipc_log_string(_segment.ehdr[10],"%s%s: invalid request msg\n",0x8001d8e,"handle_uaudio_stream_req");
        _printk("%s%s: invalid request msg\n",0x8001b5e,"handle_uaudio_stream_req");
        pcVar18 = NULL;
    }
    else {
        uVar10 = *(arg3 + 4);
        pcVar18 = uVar10 >> 0x10 & 0xff;
        arg2_00 = uVar10 >> 8 & 0xff;
        unaff_x25 = arg2_00;
        uVar10 = uVar10 & 0xff;
        ipc_log_string(_segment.ehdr[10],"%s%s: card#:%d dev#:%d dir:%d en:%d fmt:%d rate:%d #ch:%d\n",0x8001d8e,
                       "handle_uaudio_stream_req",pcVar18,unaff_x25,uVar10,*arg3,*(arg3 + 0xc),*(arg3 + 0x1c),
                       *(arg3 + 0x14));
        _printk("%s%s: card#:%d dev#:%d dir:%d en:%d fmt:%d rate:%d #ch:%d\n",0x800149e,"handle_uaudio_stream_req",
                pcVar18,unaff_x25,uVar10,*arg3,*(arg3 + 0xc),*(arg3 + 0x1c),*(arg3 + 0x14));
        iStack_150 = arg2;
        if (pcVar18 < 0x20) {
            if (*(arg3 + 0xc) < 0x12) {
                piVar19 = sym.find_substream(pcVar18,arg2_00,uVar10);
                if (piVar19 != NULL) {
                    uVar17 = pcVar18 * 0x50;
                    pcVar12 = obj.uadev + uVar17;
                    iVar9 = *(uVar17 + 0x8000260);
                    if ((iVar9 != 0) && (*(iVar9 + 0xd8) == 0)) {
                        if (piVar19[4] == 0) {
                            uVar10 = 0xffffffff;
                        }
                        else {
                            uVar10 = *(piVar19[4] + 0x28);
                        }
                        uVar7 = sym.info_idx_from_ifnum(pcVar18,uVar10);
                        puVar14 = iVar9 + 0xd8;
                        uVar20 = uVar7 & 0xffffffff;
                        pcStack_168 = pcVar12;
                        iStack_160 = iVar9;
                        pcStack_158 = pcVar18;
                        if (((*puVar14 == 0) && (piVar13 = *piVar19, piVar13 != NULL)) &&
                           ((piVar13[1] != 0 && (*piVar13 != 0)))) {
                            if ((*arg3 == '\0') || (-1 < uVar7)) {
                                piStack_178 = piVar19;
                                uStack_170 = uVar5;
                                if (*(arg3 + 0x28) == '\0') {
                                    iVar4 = 0;
                                }
                                else {
                                    uVar10 = *(arg3 + 0x2c);
                                    iVar4 = sym.get_data_interval_from_si(piVar19,uVar10);
                                    if (iVar4 == -0x16) {
                                        unaff_x25 = "handle_uaudio_stream_req";
                                        ipc_log_string(_segment.ehdr[10],"%s%s: invalid service interval %u\n",
                                                       0x8001d8e,"handle_uaudio_stream_req",uVar10);
                                        _printk("%s%s: invalid service interval %u\n",0x8001b5e,
                                                "handle_uaudio_stream_req",*(arg3 + 0x2c));
                                        iVar4 = -0x16;
                                        goto code_r0x0800455c;
                                    }
                                    ipc_log_string(_segment.ehdr[10],"%s%s: data interval %u\n",0x8001d8e,
                                                   "handle_uaudio_stream_req",iVar4);
                                    _printk("%s%s: data interval %u\n",0x8001f33,"handle_uaudio_stream_req",iVar4);
                                }
                                if (0xa00 < (uVar17 | 8)) {
    //WARNING: Does not return
                                    pcVar18 = SoftwareBreakpoint(1,0x8004cdc);
                                    (*pcVar18)();
                                }
                                piVar16 = iVar9 + 0xdc;
                                *(pcVar18 * 0x50 + 0x8000220) = *(iVar9 + 0x170);
                                pcVar6 = arg3;
                                unaff_x25 = obj.uadev;
                                piStack_180 = piVar16;
                                goto code_r0x08004e20;
                            }
                            unaff_x25 = "handle_uaudio_stream_req";
                            ipc_log_string(_segment.ehdr[10],"%s%s: interface# %d already in use card# %d\n",0x8001d8e
                                           ,"handle_uaudio_stream_req",*(piVar19[4] + 0x28),pcVar18);
                            _printk("%s%s: interface# %d already in use card# %d\n",0x8001b5e,
                                    "handle_uaudio_stream_req",*(piVar19[4] + 0x28),pcVar18);
                            iVar4 = -0x10;
                        }
                        else {
                            unaff_x25 = "handle_uaudio_stream_req";
                            ipc_log_string(_segment.ehdr[10],"%s%s: chip or sub not available: shutdown:%d stream:%p\n"
                                           ,0x8001d8e,"handle_uaudio_stream_req",*puVar14,*piVar19);
                            _printk("%s%s: chip or sub not available: shutdown:%d stream:%p\n",0x8001b5e,
                                    "handle_uaudio_stream_req",*puVar14,*piVar19);
                            puVar14 = *piVar19;
                            if (puVar14 != NULL) {
                                ipc_log_string(_segment.ehdr[10],"%s%s: pcm:%p chip:%p\n",0x8001d8e,
                                               "handle_uaudio_stream_req",puVar14[1],*puVar14);
                                _printk("%s%s: pcm:%p chip:%p\n",0x8001b5e,"handle_uaudio_stream_req",(*piVar19)[1],
                                        **piVar19);
                            }
                            iVar4 = -0x13;
                        }
                        goto code_r0x0800455c;
                    }
                }
                ipc_log_string(_segment.ehdr[10],"%s%s: can\'t find substream for card# %u, dev# %u dir%u\n",0x8001d8e
                               ,"handle_uaudio_stream_req",pcVar18,unaff_x25,uVar10);
                _printk("%s%s: can\'t find substream for card# %u, dev# %u dir%u\n",0x8001b5e,
                        "handle_uaudio_stream_req",pcVar18,unaff_x25,uVar10);
                uVar20 = 0xffffffea;
                iVar4 = -0x13;
                goto code_r0x0800455c;
            }
            pcVar6 = "%s%s: unsupported pcm format received %d\n";
            ipc_log_string(_segment.ehdr[10],"%s%s: unsupported pcm format received %d\n",0x8001d8e,
                           "handle_uaudio_stream_req");
            pcVar12 = *(arg3 + 0xc);
        }
        else {
            pcVar6 = "%s%s: invalid card # %u";
            ipc_log_string(_segment.ehdr[10],"%s%s: invalid card # %u",0x8001d8e,"handle_uaudio_stream_req",pcVar18)
            ;
            pcVar12 = pcVar18;
        }
        unaff_x25 = "handle_uaudio_stream_req";
        _printk(pcVar6,0x8001b5e,"handle_uaudio_stream_req",pcVar12);
    }
    iVar4 = -0x16;
    uVar20 = 0xffffffea;
code_r0x0800455c:
    do {
        if (((*arg3 == '\0') && (iVar4 != -0x16)) && (iVar4 != -0x13)) {
            if (uVar20 < 0) {
                pcVar12 = unaff_x25;
                if (0x1f < pcVar18) goto code_r0x08004cd4;
            }
            else {
                if (0x1f < pcVar18) {
code_r0x08004cd4:
    //WARNING: Does not return
                    pcVar18 = SoftwareBreakpoint(0x5512,0x8004cd8);
                    (*pcVar18)();
                }
                iVar9 = (pcVar18 & 0xffffffff) * 0x50;
                piVar19 = *(iVar9 + 0x8000258) + (uVar20 & 0xffffffff) * 0x50;
                iStack_150 = *(obj.uadev + iVar9);
                sym.uaudio_iommu_unmap(1,*piVar19,piVar19[1],piVar19[1]);
                *piVar19 = 0;
                piVar19[1] = 0;
                sym.uaudio_iommu_unmap(1,piVar19[2],piVar19[3],piVar19[3]);
                piVar19[2] = 0;
                piVar19[3] = 0;
                sym.uaudio_iommu_unmap(2,piVar19[4],piVar19[5],piVar19[5]);
                piVar19[4] = 0;
                usb_free_coherent(iStack_150,piVar19[5],piVar19[8],piVar19[6]);
                piVar19[8] = 0;
                *(piVar19 + 0x4c) = 0;
                piVar19[5] = 0;
                piVar19[6] = 0;
                ipc_log_string(_segment.ehdr[10],"%s%s: release resources: intf# %d card# %d\n",0x8001d8e,
                               "handle_uaudio_stream_req",piVar19[9],pcVar18 & 0xffffffff);
                _printk("%s%s: release resources: intf# %d card# %d\n",0x8001f33,"handle_uaudio_stream_req",
                        piVar19[9],pcVar18 & 0xffffffff);
                pcVar12 = pcVar18;
            }
            uVar20 = pcVar18 & 0xffffffff;
            unaff_x25 = pcVar12;
            if (*(uVar20 * 0x50 + 0x8000230) != 0) {
                iVar9 = uVar20 * 0x50;
                unaff_x25 = obj.uadev + iVar9;
                piVar16 = iVar9 + 0x8000234;
                Hint_Prefetch(piVar16,2,0,1);
                do {
                    iVar1 = *piVar16;
                    cVar2 = '\x01';
                    bVar3 = ExclusiveMonitorPass(piVar16,0x10);
                    if (bVar3) {
                        *piVar16 = iVar1 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                    }
                } while (cVar2 != '\0');
                if (iVar1 == 1) {
                    DataMemoryBarrier(2,1);
                    ipc_log_string(_segment.ehdr[10],"%s%s: for dev %pK\n",0x8001d8e,"uaudio_dev_release",unaff_x25)
                    ;
                    _printk("%s%s: for dev %pK\n",0x8001f33,"uaudio_dev_release",unaff_x25);
                    sym.uaudio_event_ring_cleanup_free(unaff_x25);
                    *(iVar9 + 0x8000230) = 0;
                    __wake_up(iVar9 + 0x8000238,3,1,0);
                    uVar20 = uVar5;
                }
                else {
                    unaff_x25 = pcVar12;
                    if (iVar1 < 1) {
                        refcount_warn_saturate(piVar16,3);
                    }
                }
            }
        }
        uStack_138 = CONCAT44(uStack_138._4_4_,iVar4);
        uStack_128 = CONCAT44(uStack_128._4_4_,*(arg3 + 4));
        uStack_130._0_5_ = CONCAT14(1,uStack_130);
        uStack_140 = CONCAT35(uStack_140._5_3_,0x100000000);
        uStack_140 = CONCAT44(uStack_140._4_4_,iVar4 != 0);
        uStack_148._0_5_ = CONCAT14(1,uStack_148);
        puVar8 = qmi_send_response(*puVar8,arg1,arg2,1,0xca,obj.qmi_uaudio_stream_resp_msg_v01_ei,&uStack_148);
        arg1 = _segment.ehdr[10];
        iVar9 = ktime_get();
        iVar4 = -0x2849cb25;
        pcVar6 = "%s%s: ret %d: qmi response latency %lld ms\n";
        ipc_log_string(arg1,"%s%s: ret %d: qmi response latency %lld ms\n",0x8001d8e,"handle_uaudio_stream_req",
                       puVar8 & 0xffffffff,(iVar9 - uVar5) / 1000000);
        iVar9 = ktime_get();
        _printk("%s%s: ret %d: qmi response latency %lld ms\n",0x8001f33,"handle_uaudio_stream_req",
                puVar8 & 0xffffffff,(iVar9 - uVar5) / 1000000);
        iVar9 = sp_el0;
        if (*(iVar9 + 0x5e0) == iStack_70) {
            return;
        }
        __stack_chk_fail();
        piVar16 = extraout_x10;
code_r0x08004e20:
        Hint_Prefetch(piVar16,2,0,1);
        do {
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piVar16,0x10);
            if (bVar3) {
                *piVar16 = *piVar16 + 1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        if (*pcVar6 == '\0') {
            iVar9 = *(unaff_x25 + pcStack_158 * 0x50 + 0x40);
            puVar21 = iVar9 + uVar20 * 0x50 + 0x38;
            uVar10 = *puVar21;
            if (uVar10 != 0) {
                arg1_00 = *pcStack_168;
                iVar11 = arg1_00 + 0x4e8;
                if ((uVar10 & 0x80) != 0) {
                    iVar11 = arg1_00 + 0x468;
                }
                iVar11 = *(iVar11 + (uVar10 >> 0xf & 0xf) * 8);
                if (iVar11 == 0) {
                    unaff_x25 = "%s%s: no data ep\n";
                    ipc_log_string(_segment.ehdr[10],"%s%s: no data ep\n",0x8001d8e,"handle_uaudio_stream_req");
                    _printk("%s%s: no data ep\n",0x8001f33,"handle_uaudio_stream_req");
                }
                else {
                    sym.xhci_stop_endpoint(arg1_00,iVar11);
                }
                *puVar21 = 0;
            }
            puVar21 = iVar9 + uVar20 * 0x50 + 0x3c;
            uVar10 = *puVar21;
            if (uVar10 != 0) {
                iVar11 = *pcStack_168;
                iVar9 = iVar11 + 0x4e8;
                if ((uVar10 & 0x80) != 0) {
                    iVar9 = iVar11 + 0x468;
                }
                iVar9 = *(iVar9 + (uVar10 >> 0xf & 0xf) * 8);
                if (iVar9 == 0) {
                    ipc_log_string(_segment.ehdr[10],"%s%s: no sync ep\n",0x8001d8e,"handle_uaudio_stream_req");
                    _printk("%s%s: no sync ep\n",0x8001f33,"handle_uaudio_stream_req");
                }
                else {
                    sym.xhci_stop_endpoint(iVar11,iVar9);
                }
                *puVar21 = 0;
            }
            sym.disable_audio_stream(piStack_178);
        }
        else {
            uVar5 = sym.map_pcm_format(*(pcVar6 + 0xc));
            iVar4 = sym.enable_audio_stream(piStack_178,uVar5 & 0xffffffff,*(pcVar6 + 0x14),*(pcVar6 + 0x1c));
            if (iVar4 == 0) {
                iVar4 = sym.prepare_qmi_response(piStack_178,pcVar6,&uStack_148,uVar20 & 0xffffffff);
            }
        }
        Hint_Prefetch(piStack_180,2,0,1);
        do {
            iVar1 = *piStack_180;
            cVar2 = '\x01';
            bVar3 = ExclusiveMonitorPass(piStack_180,0x10);
            if (bVar3) {
                *piStack_180 = iVar1 + -1;
                cVar2 = ExclusiveMonitorsStatus();
            }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        uVar5 = uStack_170;
        arg3 = pcVar6;
        pcVar18 = pcStack_158;
        arg2 = iStack_150;
        if ((iVar1 + -1 == 0) && (*(iStack_160 + 0xd8) != 0)) {
            __wake_up(iStack_160 + 0xe0,3,1,0);
        }
    } while( true );
}


// ===== sym.find_substream @ 0x08004f40 (size 208) =====

int64_t sym.find_substream(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *((arg1 & 0xffffffffU) * 0x50 + 0x8000260);
    if ((iVar2 != 0) && (*(iVar2 + 0xd8) == 0)) {
        if (arg2 < *(iVar2 + 0x140)) {
            if (arg3 < 2) {
                for (piVar1 = *(iVar2 + 0x110); iVar2 + 0x110 != piVar1; piVar1 = *piVar1) {
                    if (*(piVar1 + -0x35) == arg2) {
                        return piVar1 + arg3 * 0x1a + -0x34;
                    }
                }
            }
            else {
                _printk(0x8001292,"find_substream");
            }
        }
        else {
            _printk(0x800120e,"find_substream",arg2);
        }
    }
    return 0;
}


// ===== sym.info_idx_from_ifnum @ 0x08005014 (size 148) =====

uint64_t sym.info_idx_from_ifnum(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint32_t in_w2;
    char *pcVar4;
    
    if (((in_w2 & 1) != 0) && (*(arg1 * 0x50 + 0x8000258) == 0)) {
        return 0;
    }
    iVar2 = arg1 * 0x50;
    uVar1 = *(iVar2 + 0x8000250);
    if (0 < uVar1) {
        uVar3 = 0;
        pcVar4 = *(iVar2 + 0x8000258) + 0x4c;
        do {
            if ((in_w2 & 1) == 0) {
                if (pcVar4[-4] == arg2) {
                    return uVar3;
                }
            }
            else if (*pcVar4 == '\0') {
                return uVar3;
            }
            uVar3 = uVar3 + 1;
            pcVar4 = pcVar4 + 0x50;
        } while (uVar1 != uVar3);
    }
    return 0xffffffea;
}


// ===== sym.get_data_interval_from_si @ 0x080050a8 (size 100) =====

int sym.get_data_interval_from_si(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar2;
    
    uVar5 = 0x7d;
    if (*(*(arg1 + 8) + 0x1c) < 3) {
        uVar5 = 1000;
    }
    uVar4 = 0;
    if (uVar5 != 0) {
        uVar4 = arg2 / uVar5;
    }
    if (arg2 != uVar4 * uVar5) {
        return -0x16;
    }
    uVar1 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
    uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
    uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar1 = 0;
    if (uVar5 <= arg2) {
        uVar1 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10) + 1;
    }
    iVar3 = uVar1 - 1;
    if ((uVar4 >> (uVar1 & 0x1f) != 0 || 0x10 < uVar1) || arg2 < uVar5) {
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.enable_audio_stream @ 0x0800510c (size 1524) =====

int sym.enable_audio_stream(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t in_w4;
    int64_t *piVar7;
    int64_t *piVar8;
    uint8_t uVar9;
    uint8_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong *in_x18;
    char *pcVar13;
    int64_t iVar14;
    uint32_t uVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    int iVar18;
    ulong unaff_x30;
    uint32_t uStack_2d8;
    uint32_t uStack_2d4;
    uint uStack_2d0;
    uchar auStack_2c8 [36];
    uint32_t auStack_2a4 [62];
    uchar auStack_1ac [12];
    uchar auStack_1a0 [216];
    uint32_t uStack_c8;
    uint32_t uStack_c4;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    uVar3 = arg3;
    iVar14 = **arg1;
    memset(auStack_2c8,0,0x260);
    _snd_pcm_hw_params_any(auStack_2c8);
    if (((auStack_2a4[0] == 0) ||
        (bVar4 = false, uVar15 = auStack_2a4[0] - (auStack_2a4[0] >> 1 & 0x55555555),
        uVar15 = (uVar15 & 0x33333333) + (uVar15 >> 2 & 0x33333333),
        (uVar15 + (uVar15 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)) &&
       ((auStack_2a4[1] == 0 || ((bVar4 = false, (auStack_2a4[1] & auStack_2a4[1] - 1) == 0 && (auStack_2a4[0] == 0))))
       )) {
        bVar4 = true;
    }
    uVar11 = (arg2 & 0xffffffffU) >> 5;
    auStack_2a4[4] = 0;
    auStack_2a4[5] = 0;
    auStack_2a4[6] = 0;
    auStack_2a4[7] = 0;
    auStack_2a4[0] = 0;
    auStack_2a4[1] = 0;
    auStack_2a4[2] = 0;
    auStack_2a4[3] = 0;
    auStack_2a4[uVar11] = auStack_2a4[uVar11] & 1 << (arg2 & 0x1f);
    if ((!bVar4) || (auStack_2a4[0] == 0 && auStack_2a4[1] == 0)) {
        uStack_c4 = uStack_c4 | 2;
        uStack_c8 = uStack_c8 | 2;
    }
    uStack_2d0 = 4;
    uStack_2d8 = uVar3;
    uStack_2d4 = uVar3;
    iVar5 = snd_interval_refine(auStack_1ac,&uStack_2d8);
    if (iVar5 != 0) {
        uStack_c4 = uStack_c4 | 0x400;
        uStack_c8 = uStack_c8 | 0x400;
    }
    uVar15 = arg4;
    uStack_2d0 = 4;
    uStack_2d8 = uVar15;
    uStack_2d4 = uVar15;
    iVar5 = snd_interval_refine(auStack_1a0,&uStack_2d8);
    if (iVar5 != 0) {
        uStack_c4 = uStack_c4 | 0x800;
        uStack_c8 = uStack_c8 | 0x800;
    }
    if (*(iVar14 + 0x18) == 0) {
code_r0x080052a8:
        iVar5 = -0x13;
        goto code_r0x080052ac;
    }
    pm_runtime_barrier(*(iVar14 + 0x18) + 0x30);
    snd_usb_autoresume(iVar14);
    if ((*(arg1 + 0x28) != 0) && (iVar5 = sym.usb_audio_power_domain_set(**arg1,*(arg1 + 0x28),0), iVar5 < 0)) {
        _dev_err(*(arg1 + 8) + 0xa8,"Cannot change Power Domain ID: %d to state: %d. Err: %d\n",**(arg1 + 0x28),0,
                 iVar5);
        goto code_r0x080052ac;
    }
    piVar7 = arg1 + 0x98;
    piVar8 = *piVar7;
    if (piVar8 != piVar7) {
        piVar17 = NULL;
        uVar9 = 0;
        do {
            piVar16 = piVar17;
            uVar10 = uVar9;
            if (((((in_w4 == 0xffffffea) || (*(piVar8 + 0x34) == in_w4)) && ((piVar8[2] & 1L << (arg2 & 0x3fU)) != 0))
                && ((*(piVar8 + 3) == uVar3 && (*(piVar8 + 8) <= uVar15)))) && (uVar15 <= *(piVar8 + 0x44))) {
                if ((*(piVar8 + 0x3f) >> 6 & 1) == 0) {
                    uVar11 = *(piVar8 + 9);
                    if (*(piVar8 + 9) != 0) {
                        puVar12 = piVar8[10];
                        do {
                            if (*puVar12 == uVar15) goto code_r0x080053f8;
                            uVar11 = uVar11 - 1;
                            puVar12 = puVar12 + 1;
                        } while (uVar11 != 0);
                    }
                }
                else {
code_r0x080053f8:
                    uVar1 = *(piVar8 + 0x2e) & 0xc;
                    piVar16 = piVar8;
                    uVar10 = uVar1;
                    if (piVar17 != NULL) {
                        if ((arg1 == 0) || (uVar9 == uVar1)) goto code_r0x08005470;
                        if (uVar1 == 8) {
                            piVar16 = piVar17;
                            uVar10 = uVar9;
                            if (*(arg1 + 0x18) != 1) goto code_r0x08005440;
                        }
                        else if ((uVar1 != 4) || (piVar16 = piVar17, uVar10 = uVar9, *(arg1 + 0x18) != 0)) {
code_r0x08005440:
                            if (uVar9 == 8) {
                                piVar16 = piVar8;
                                uVar10 = uVar1;
                                if (*(arg1 + 0x18) != 1) goto code_r0x08005470;
                            }
                            else if ((uVar9 != 4) || (piVar16 = piVar8, uVar10 = uVar1, *(arg1 + 0x18) != 0)) {
code_r0x08005470:
                                piVar16 = piVar8;
                                uVar10 = uVar1;
                                if (*(piVar8 + 7) <= *(piVar17 + 7)) {
                                    piVar16 = piVar17;
                                    uVar10 = uVar9;
                                }
                            }
                        }
                    }
                }
            }
            piVar8 = *piVar8;
            piVar17 = piVar16;
            uVar9 = uVar10;
        } while (piVar8 != piVar7);
        if (piVar16 != NULL) {
            if (*(iVar14 + 0xd8) != 0) {
                ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: chip already shutdown\n",0x8001d8e,
                               "enable_audio_stream");
                _printk("%s%s: chip already shutdown\n",0x8001b5e,"enable_audio_stream");
                goto code_r0x080052a8;
            }
            if (*(arg1 + 0x68) != 0) {
                sym.close_endpoints(iVar14,arg1);
            }
            iVar6 = snd_usb_endpoint_open(iVar14,piVar16,auStack_2c8,0);
            *(arg1 + 0x68) = iVar6;
            if (iVar6 == 0) {
                pcVar13 = "%s%s: failed to open data endpoint\n";
code_r0x080054fc:
                ipc_log_string(*(_segment.ehdr + 0x50),pcVar13,0x8001d8e,"enable_audio_stream");
                _printk(pcVar13,0x8001b5e,"enable_audio_stream");
                iVar5 = -0x16;
            }
            else {
                if (piVar16[6] != '\0') {
                    iVar6 = snd_usb_endpoint_open(iVar14,piVar16,auStack_2c8,1);
                    *(arg1 + 0x70) = iVar6;
                    if (iVar6 == 0) {
                        pcVar13 = "%s%s: failed to open sync endpoint\n";
                        goto code_r0x080054fc;
                    }
                    *(*(arg1 + 0x68) + 0x40) = iVar6;
                }
                mutex_lock(iVar14 + 0xa0);
                *(arg1 + 0x20) = piVar16;
                mutex_unlock(iVar14 + 0xa0);
                iVar5 = sym.configure_endpoints(iVar14,arg1);
                if (iVar5 < 0) {
                    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: %d:%d: usb_set_interface failed (%d)\n",0x8001d8e,
                                   "enable_audio_stream",piVar16[5],*(piVar16 + 0x29),iVar5);
                    _printk("%s%s: %d:%d: usb_set_interface failed (%d)\n",0x8001b5e,"enable_audio_stream",piVar16[5]
                            ,*(piVar16 + 0x29),iVar5);
                }
                else {
                    pcVar13 = "playback";
                    if (*(arg1 + 0x18) != 0) {
                        pcVar13 = "capture";
                    }
                    iVar18 = 0x7d;
                    iVar2 = iVar18;
                    if (*(*(arg1 + 8) + 0x1c) < 3) {
                        iVar2 = 1000;
                    }
                    ipc_log_string(*(_segment.ehdr + 0x50),
                                   "%s%s: selected %s iface:%d altsetting:%d datainterval:%dus\n",0x8001d8e,
                                   "enable_audio_stream",pcVar13,piVar16[5],*(piVar16 + 0x29),
                                   iVar2 << (*(piVar16 + 0x34) & 0x1f));
                    pcVar13 = "playback";
                    if (*(arg1 + 0x18) != 0) {
                        pcVar13 = "capture";
                    }
                    if (*(*(arg1 + 8) + 0x1c) < 3) {
                        iVar18 = 1000;
                    }
                    _printk("%s%s: selected %s iface:%d altsetting:%d datainterval:%dus\n",0x800149e,
                            "enable_audio_stream",pcVar13,piVar16[5],*(piVar16 + 0x29),
                            iVar18 << (*(piVar16 + 0x34) & 0x1f));
                }
            }
            goto code_r0x080052ac;
        }
    }
    _dev_err(*(arg1 + 8) + 0xa8,"cannot find format: format = %#x, rate = %d, channels = %d\n",arg2 & 0xffffffff,
             arg4 & 0xffffffff,arg3 & 0xffffffff);
    iVar5 = -0x16;
code_r0x080052ac:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    iVar5 = __stack_chk_fail();
    if (iVar5 - 1U < 0x11) {
        return *((iVar5 - 1U) * 4 + 0x8002118);
    }
    return 0;
}


// ===== sym.map_pcm_format @ 0x08005700 (size 48) =====

uint sym.map_pcm_format(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 - 1;
    if (uVar1 < 0x11) {
        return *(uVar1 * 4 + 0x8002118);
    }
    return 0;
}


// ===== sym.prepare_qmi_response @ 0x08005730 (size 3564) =====

uint64_t sym.prepare_qmi_response(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint64_t *puVar2;
    uint8_t *puVar3;
    uint32_t uVar4;
    uint uVar5;
    uint32_t uVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    ushort uVar9;
    char cVar10;
    bool bVar11;
    uint32_t arg2_00;
    int iVar12;
    uint32_t uVar13;
    uint8_t *puVar14;
    uint8_t *puVar15;
    code *pcVar16;
    int iVar17;
    int64_t *piVar18;
    uint64_t arg2_01;
    uint64_t uVar19;
    ulong *puVar20;
    uchar uVar21;
    int64_t iVar22;
    uint8_t *puVar23;
    ulong uVar24;
    uint8_t *puVar25;
    int64_t iVar26;
    ulong *in_x18;
    char *pcVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    uint64_t arg4_00;
    uint64_t uVar32;
    int64_t iVar33;
    uint32_t uVar34;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_68 = *(iVar22 + 0x5e0);
    iVar12 = arg4;
    uStack_78 = 0;
    iStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    piVar18 = usb_ifnum_to_if(*(arg1 + 8),*(*(arg1 + 0x20) + 0x28));
    if (piVar18 == NULL) {
        pcVar27 = "%s%s: interface # %d does not exist\n";
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: interface # %d does not exist\n",0x8001d8e,
                       "prepare_qmi_response",*(*(arg1 + 0x20) + 0x28));
        uVar30 = *(*(arg1 + 0x20) + 0x28);
code_r0x08005c88:
        _printk(pcVar27,0x8001b5e,"prepare_qmi_response",uVar30);
        uVar29 = 0xffffffed;
    }
    else {
        iVar22 = *(arg1 + 0x20);
        iVar33 = *piVar18;
        uVar29 = *(iVar22 + 0x2b);
        uVar4 = *(arg2 + 4);
        uVar34 = *(arg2 + 0x24);
        uVar7 = *(iVar33 + uVar29 * 0x28 + 7);
        uVar30 = uVar7;
        if (uVar7 == 0x30) {
            puVar23 = NULL;
code_r0x08005820:
            if (0x1fffff < uVar4) goto code_r0x080064c8;
            uVar13 = uVar4 >> 0x10;
            uVar32 = uVar13;
            if (0xa00 < (uVar32 * 0x50 | 8)) goto code_r0x080064c0;
            iVar26 = *(uVar32 * 0x50 + 0x8000220);
            if (iVar26 == 0) {
                pcVar27 = "%s%s: audio ctrl intf info not cached\n";
                goto code_r0x080060ec;
            }
            if (uVar7 == 0x30) {
code_r0x08005864:
                if (*(piVar18[3] + 5) == '\x01') {
                    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: full adc is not supported\n",0x8001d8e,
                                   "prepare_qmi_response");
                    _printk("%s%s: full adc is not supported\n",0x8001b5e,"prepare_qmi_response");
                }
                uVar8 = *(*(iVar33 + uVar29 * 0x28 + 0x18) + 4);
                uVar21 = 2;
                if (uVar8 < 0xc0) {
                    if (uVar8 < 0x90) {
                        if ((uVar8 == 0x60) || (uVar8 == 0x62)) {
code_r0x08005a54:
                            *(arg3 + 0x4d) = uVar21;
                            *(arg3 + 0x4c) = 1;
                            goto code_r0x08005a60;
                        }
                    }
                    else if ((uVar8 == 0x90) || (uVar8 == 0x93)) {
code_r0x08005a50:
                        uVar21 = 3;
                        goto code_r0x08005a54;
                    }
                }
                else if (uVar8 < 0x120) {
                    if ((uVar8 == 0xc0) || (uVar8 == 0xc4)) goto code_r0x08005a54;
                }
                else if ((uVar8 == 0x126) || (uVar8 == 0x120)) goto code_r0x08005a50;
                ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: %d: %u: Invalid wMaxPacketSize\n",0x8001d8e,
                               "prepare_qmi_response",*(*(arg1 + 0x20) + 0x28),*(*(arg1 + 0x20) + 0x2b));
                _printk("%s%s: %d: %u: Invalid wMaxPacketSize\n",0x8001b5e,"prepare_qmi_response",
                        *(*(arg1 + 0x20) + 0x28),*(*(arg1 + 0x20) + 0x2b));
                uVar29 = 0xffffffea;
                goto code_r0x08006344;
            }
            puVar3 = *(iVar26 + 0x10) + *(iVar26 + 0xc);
            puVar25 = *(iVar26 + 0x10);
            do {
                puVar14 = puVar25;
                if ((puVar3 <= puVar14) || (puVar25 = puVar14 + *puVar14, *puVar14 < 2 || puVar3 < puVar25))
                goto code_r0x08005a1c;
            } while ((puVar14[1] != 0x24) || (puVar14[2] != 1));
            if (puVar14 == NULL) {
code_r0x08005a1c:
                pcVar27 = "%s%s: no UAC_HEADER desc\n";
            }
            else {
                if (uVar7 == 0x30) goto code_r0x08005864;
                if (uVar7 == 0x20) {
                    *(arg3 + 0x4d) = puVar23[4];
                    *(arg3 + 0x4c) = 1;
                    uVar9 = *(puVar14 + 3);
                    *(arg3 + 0x46) = 1;
                    *(arg3 + 0x48) = uVar9;
                }
                else {
                    if (uVar7 != 0) {
                        pcVar27 = "%s%s: unknown protocol version %x\n";
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: unknown protocol version %x\n",0x8001d8e,
                                       "prepare_qmi_response",uVar7);
                        goto code_r0x08005c88;
                    }
                    iVar26 = iVar33 + uVar29 * 0x28;
                    puVar25 = *(iVar26 + 0x10);
                    puVar3 = puVar25 + *(iVar26 + 0xc);
                    do {
                        puVar15 = puVar25;
                        if ((puVar3 <= puVar15) || (puVar25 = puVar15 + *puVar15, *puVar15 < 2 || puVar3 < puVar25))
                        goto code_r0x08005be0;
                    } while ((puVar15[1] != 0x24) || (puVar15[2] != 1));
                    if (puVar15 == NULL) {
code_r0x08005be0:
                        uVar21 = *(iVar22 + 0x28);
                        pcVar27 = "%s%s: %u:%d : no UAC_AS_GENERAL desc\n";
                        goto code_r0x080059cc;
                    }
                    *(arg3 + 0x4b) = puVar15[4];
                    *(arg3 + 0x4a) = 1;
                    uVar7 = puVar23[5];
                    *(arg3 + 0x4c) = 1;
                    *(arg3 + 0x4d) = uVar7;
                    uVar9 = *(puVar14 + 3);
                    *(arg3 + 0x46) = 1;
                    *(arg3 + 0x48) = uVar9;
                }
code_r0x08005a60:
                uVar5 = *(*(arg1 + 8) + 0x5d8);
                puVar20 = iVar33 + uVar29 * 0x28;
                *(arg3 + 0x14) = 1;
                *(arg3 + 0x18) = uVar5;
                uVar21 = *(puVar20 + 1);
                uVar24 = *puVar20;
                *(arg3 + 0x24) = 1;
                *(arg3 + 0x2d) = uVar21;
                *(arg3 + 0x25) = uVar24;
                iVar22 = *(arg1 + 0x68);
                if (iVar22 == 0) {
                    uVar30 = 0;
                    iVar22 = 0;
                    iVar33 = *(arg1 + 0x70);
                    if (iVar33 == 0) {
code_r0x08005ce8:
                        uVar31 = 0;
                        iVar33 = 0;
                    }
                    else {
code_r0x08005b10:
                        uVar31 = *(iVar33 + 0x15c8);
                        iVar33 = *(arg1 + 8) + 0x4e8;
                        if ((uVar31 & 0x80) != 0) {
                            iVar33 = *(arg1 + 8) + 0x468;
                        }
                        puVar20 = *(iVar33 + (uVar31 >> 0xf & 0xf) * 8);
                        if (puVar20 == NULL) {
                            ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: implicit fb on data ep\n",0x8001d8e,
                                           "prepare_qmi_response");
                            _printk("%s%s: implicit fb on data ep\n",0x8001f33,"prepare_qmi_response");
                            goto code_r0x08005ce8;
                        }
                        uVar24 = *puVar20;
                        *(arg3 + 0x44) = *(puVar20 + 1);
                        *(arg3 + 0x3c) = uVar24;
                        *(arg3 + 0x3a) = 1;
                        iVar33 = sym.xhci_get_xfer_ring_phys_addr(*(arg1 + 8),puVar20,&uStack_78);
                        if (iVar33 == 0) {
                            pcVar27 = "%s%s: failed to get sync ep ring dma address\n";
                            goto code_r0x080060ec;
                        }
                        *(arg3 + 0x88) = uStack_78;
                    }
                    uVar5 = *(_segment.ehdr + 0xc);
                    *(arg3 + 200) = 1;
                    *(arg3 + 0xd0) = 0;
                    *(arg3 + 0xc9) = uVar5;
                    iVar26 = *(*(*(arg1 + 8) + 0x50) + 8);
                    if (((iVar26 != 0) && (iVar26 = *(iVar26 + 0x2f0), iVar26 != 0)) &&
                       (iVar17 = of_alias_get_id(iVar26,0x8001ec7), -1 < iVar17)) {
                        *(arg3 + 0xd1) = iVar17;
                        *(arg3 + 0xd0) = 1;
                    }
                    uVar7 = *(*(*(*(arg1 + 8) + 0x50) + 8) + 0x34c);
                    uVar29 = sym.xhci_sec_event_ring_setup(*(arg1 + 8),*(arg3 + 0xc9));
                    *(_segment.ehdr + 0x10) = uVar29;
                    if (0xfffffffffffff000 < uVar29) {
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: failed to setup sec event ring ret %d\n",
                                       0x8001d8e,"prepare_qmi_response",uVar29 & 0xffffffff);
                        _printk("%s%s: failed to setup sec event ring ret %d\n",0x8001b5e,"prepare_qmi_response",
                                uVar29 & 0xffffffff);
                        goto code_r0x08006344;
                    }
                    iVar26 = sym.xhci_get_sec_event_ring_phys_addr(*(arg1 + 8),uVar29,&uStack_78);
                    if (iVar26 == 0) {
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: failed to get sec event ring dma address\n",
                                       0x8001d8e,"prepare_qmi_response");
                        _printk("%s%s: failed to get sec event ring dma address\n",0x8001b5e,"prepare_qmi_response");
                        uVar29 = 0xffffffed;
                    }
                    else {
                        arg2_00 = uVar7 >> 5 & 1;
                        uVar29 = sym.uaudio_iommu_map(0,arg2_00,iVar26,0x1000);
                        iVar26 = _segment.ehdr;
                        if (uVar29 == 0) {
                            uVar29 = 0xfffffff4;
                        }
                        else {
                            uVar6 = *(_segment.ehdr + 8);
                            *(arg3 + 0x60) = 0x1000;
                            *(arg3 + 0x50) = uVar29 | uVar6 << 0x20;
                            *(arg3 + 0x58) = uStack_78;
                            *(iVar26 + 0x68) = 1;
                            iVar17 = *(*(arg1 + 8) + 0x1c);
                            uVar6 = iVar17 - 1;
                            if ((uVar6 < 6) && ((0x37U >> (uVar6 & 0x1f) & 1) != 0)) {
                                uVar5 = *(uVar6 * 4 + 0x800215c);
                                *(arg3 + 0xca) = 1;
                                *(arg3 + 0xcc) = uVar5;
                                uVar29 = sym.uaudio_iommu_map(1,arg2_00,iVar22,0x1000);
                                if (uVar29 != 0) {
                                    uVar6 = *(_segment.ehdr + 8);
                                    *(arg3 + 0x78) = 0x1000;
                                    *(arg3 + 0x68) = uVar29 | uVar6 << 0x20;
                                    if (*(arg3 + 0x88) == 0) {
                                        arg2_01 = 0;
code_r0x08005e94:
                                        uVar6 = 0x1000;
                                        if (uVar34 != 0) {
                                            uVar6 = uVar34;
                                        }
                                        uVar34 = (uVar6 & 0xfffff000) + ((uVar6 & 0xfff) != 0) * 0x1000;
                                        if (0x18000 < uVar34) {
                                            ipc_log_string(*(_segment.ehdr + 0x50),
                                                           "%s%s: req buf len %d > max buf len %lu, setting %lu\n",
                                                           0x8001d8e,"prepare_qmi_response",uVar34,0x18000,0x18000);
                                            _printk("%s%s: req buf len %d > max buf len %lu, setting %lu\n",0x8001b5e,
                                                    "prepare_qmi_response",uVar34,0x18000,0x18000);
                                            uVar34 = 0x18000;
                                        }
                                        arg4_00 = uVar34;
                                        iVar22 = usb_alloc_coherent(*(arg1 + 8),arg4_00,0xcc0,&iStack_70);
                                        if (iVar22 != 0) {
                                            dma_get_sgtable_attrs
                                                      (*(*(*(arg1 + 8) + 0x50) + 8),&uStack_88,iVar22,iStack_70,
                                                       arg4_00,0);
                                            uVar19 = sym.uaudio_iommu_map(2,arg2_00,iStack_70,arg4_00);
                                            if (uVar19 != 0) {
                                                *(arg3 + 0xa8) = uVar34;
                                                iVar33 = _segment.ehdr;
                                                uVar28 = uVar32 * 0x50;
                                                *(arg3 + 0xa0) = iStack_70;
                                                uVar34 = *(iVar33 + 8);
                                                *(arg3 + 0x4e) = 1;
                                                *(arg3 + 0x98) = uVar19 | uVar34 << 0x20;
                                                sg_free_table(&uStack_88);
                                                puVar20 = uVar32 * 0x50 + 0x8000230;
                                                if (*puVar20 == 0) {
                                                    *(uVar32 * 0x50 + 0x8000234) = 1;
                                                    __init_waitqueue_head
                                                              (uVar32 * 0x50 + 0x8000238,
                                                               "&uadev[card_num].disconnect_wq",
                                                               obj.prepare_qmi_response.__key);
                                                    if (0x9c8 < uVar28) goto code_r0x080064c0;
                                                    uVar7 = *(*(*(arg1 + 8) + 0x458) + 4);
                                                    *(uVar32 * 0x50 + 0x8000250) = uVar7;
                                                    iVar33 = __kmalloc(uVar7 * 0x50,0xdc0);
                                                    if (0x9c0 < uVar28) goto code_r0x080064c0;
                                                    *(uVar32 * 0x50 + 0x8000258) = iVar33;
                                                    if (iVar33 == 0) goto code_r0x080062dc;
                                                    if (uVar13 == 0x20) goto code_r0x080064c0;
                                                    iVar26 = uVar32 * 0x50;
                                                    *(obj.uadev + iVar26) = *(arg1 + 8);
                                                    *puVar20 = 1;
                                                    *(iVar26 + 0x8000228) = uVar13;
                                                    *(iVar26 + 0x800022c) = *(arg3 + 0xd1);
                                                }
                                                else {
                                                    puVar1 = uVar32 * 0x50 + 0x8000234;
                                                    Hint_Prefetch(puVar1,2,0,1);
                                                    do {
                                                        uVar34 = *puVar1;
                                                        cVar10 = '\x01';
                                                        bVar11 = ExclusiveMonitorPass(puVar1,0x10);
                                                        if (bVar11) {
                                                            *puVar1 = uVar34 + 1;
                                                            cVar10 = ExclusiveMonitorsStatus();
                                                        }
                                                    } while (cVar10 != '\0');
                                                    if (uVar34 == 0) {
                                                        uVar24 = 2;
code_r0x080064a4:
                                                        refcount_warn_saturate(puVar1,uVar24);
                                                    }
                                                    else if ((uVar34 + 1 | uVar34) < 0) {
                                                        uVar24 = 1;
                                                        goto code_r0x080064a4;
                                                    }
                                                    if (((0x9f0 < uVar28) ||
                                                        (*(uVar32 * 0x50 + 0x8000228) = uVar13, 0x9ec < uVar28)) ||
                                                       (*(uVar32 * 0x50 + 0x800022c) = *(arg3 + 0xd1), 0x9c0 < uVar28))
                                                    {
code_r0x080064c0:
    //WARNING: Does not return
                                                        pcVar16 = SoftwareBreakpoint(1,0x80064c4);
                                                        (*pcVar16)();
                                                    }
                                                    iVar33 = *(uVar32 * 0x50 + 0x8000258);
                                                }
                                                iVar26 = uVar32 * 0x50;
                                                *(iVar33 + iVar12 * 0x50) = uVar29;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 8) = 0x1000;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x10) = arg2_01;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x18) = 0x1000;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x20) = uVar19;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x30) = iStack_70;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x28) = arg4_00;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x38) = uVar30;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x3c) = uVar31;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x40) = iVar22;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x49) = uVar4 >> 0x10;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x4a) = uVar4 >> 8;
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x4b) = *(arg1 + 0x18);
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x48) =
                                                     *(*(arg1 + 0x20) + 0x28);
                                                *(*(iVar26 + 0x8000258) + iVar12 * 0x50 + 0x4c) = 1;
                                                puVar2 = _segment.ehdr + 0x60;
                                                Hint_Prefetch(puVar2,2,0,1);
                                                do {
                                                    cVar10 = '\x01';
                                                    bVar11 = ExclusiveMonitorPass(puVar2,0x10);
                                                    if (bVar11) {
                                                        *puVar2 = *puVar2 | 1L << (uVar32 & 0x3f);
                                                        cVar10 = ExclusiveMonitorsStatus();
                                                    }
                                                } while (cVar10 != '\0');
                                                uVar29 = 0;
                                                goto code_r0x08006344;
                                            }
                                        }
code_r0x080062dc:
                                        usb_free_coherent(*(arg1 + 8),arg4_00,iVar22,iStack_70);
                                        sym.uaudio_iommu_unmap(1,arg2_01,0x1000,0x1000);
                                    }
                                    else {
                                        arg2_01 = sym.uaudio_iommu_map(1,arg2_00,iVar33,0x1000);
                                        if (arg2_01 != 0) {
                                            uVar6 = *(_segment.ehdr + 8);
                                            *(arg3 + 0x90) = 0x1000;
                                            *(arg3 + 0x80) = arg2_01 | uVar6 << 0x20;
                                            goto code_r0x08005e94;
                                        }
                                    }
                                    sym.uaudio_iommu_unmap(1,uVar29,0x1000,0x1000);
                                }
                                uVar29 = 0xfffffff4;
                            }
                            else {
                                ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: udev speed %d\n",0x8001d8e,
                                               "get_speed_info",iVar17);
                                _printk("%s%s: udev speed %d\n",0x8001b5e,"get_speed_info",iVar17);
                                uVar29 = 0xffffffed;
                                *(arg3 + 0xcc) = 0;
                            }
                            sym.uaudio_iommu_unmap(0,0x1000,0x1000,0x1000);
                        }
                    }
                    sym.xhci_sec_event_ring_cleanup(*(arg1 + 8),*(_segment.ehdr + 0x10));
                    goto code_r0x08006344;
                }
                uVar30 = *(iVar22 + 0x15c8);
                iVar33 = *(arg1 + 8) + 0x4e8;
                if ((uVar30 & 0x80) != 0) {
                    iVar33 = *(arg1 + 8) + 0x468;
                }
                puVar20 = *(iVar33 + (uVar30 >> 0xf & 0xf) * 8);
                if (puVar20 == NULL) {
                    pcVar27 = "%s%s: data ep # %d context is null\n";
                    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: data ep # %d context is null\n",0x8001d8e,
                                   "prepare_qmi_response",*(iVar22 + 0x18));
                    uVar30 = *(*(arg1 + 0x68) + 0x18);
                    goto code_r0x08005c88;
                }
                uVar24 = *puVar20;
                *(arg3 + 0x38) = *(puVar20 + 1);
                *(arg3 + 0x30) = uVar24;
                *(arg3 + 0x2e) = 1;
                iVar22 = sym.xhci_get_xfer_ring_phys_addr(*(arg1 + 8),puVar20,&uStack_78);
                if (iVar22 != 0) {
                    *(arg3 + 0x70) = uStack_78;
                    iVar33 = *(arg1 + 0x70);
                    if (iVar33 != 0) goto code_r0x08005b10;
                    goto code_r0x08005ce8;
                }
                pcVar27 = "%s%s: failed to get data ep ring dma address\n";
            }
code_r0x080060ec:
            ipc_log_string(*(_segment.ehdr + 0x50),pcVar27,0x8001d8e,"prepare_qmi_response");
            _printk(pcVar27,0x8001b5e,"prepare_qmi_response");
            uVar29 = 0xffffffed;
        }
        else {
            iVar26 = iVar33 + uVar29 * 0x28;
            puVar25 = *(iVar26 + 0x10);
            puVar3 = puVar25 + *(iVar26 + 0xc);
            do {
                puVar23 = puVar25;
                if ((puVar3 <= puVar23) || (puVar25 = puVar23 + *puVar23, *puVar23 < 2 || puVar3 < puVar25))
                goto code_r0x080059bc;
            } while ((puVar23[1] != 0x24) || (puVar23[2] != 2));
            if (puVar23 != NULL) goto code_r0x08005820;
code_r0x080059bc:
            uVar21 = *(iVar22 + 0x28);
            pcVar27 = "%s%s: %u:%d : no UAC_FORMAT_TYPE desc\n";
code_r0x080059cc:
            ipc_log_string(*(_segment.ehdr + 0x50),pcVar27,0x8001d8e,"prepare_qmi_response",uVar21,uVar29);
            _printk(pcVar27,0x8001b5e,"prepare_qmi_response",*(*(arg1 + 0x20) + 0x28),*(*(arg1 + 0x20) + 0x2b));
            uVar29 = 0xffffffed;
        }
    }
code_r0x08006344:
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return uVar29 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x080064c8:
    //WARNING: Does not return
    pcVar16 = SoftwareBreakpoint(0x5512,0x80064cc);
    (*pcVar16)();
}


// ===== sym.disable_audio_stream @ 0x0800651c (size 152) =====

void sym.disable_audio_stream(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = **arg1;
    if (*(arg1 + 0x68) == 0) {
        if (*(arg1 + 0x70) == 0) goto code_r0x08006594;
code_r0x08006570:
        snd_usb_endpoint_close(iVar1);
        *(arg1 + 0x70) = 0;
    }
    else {
        *(*(arg1 + 0x68) + 0x40) = 0;
        snd_usb_endpoint_close(iVar1,*(arg1 + 0x68));
        *(arg1 + 0x68) = 0;
        if (*(arg1 + 0x70) != 0) goto code_r0x08006570;
    }
    mutex_lock(iVar1 + 0xa0);
    *(arg1 + 0x20) = 0;
    mutex_unlock(iVar1 + 0xa0);
code_r0x08006594:
    snd_usb_autosuspend(iVar1);
    return;
}


// ===== sym.uaudio_dev_release @ 0x080065b4 (size 164) =====

void sym.uaudio_dev_release(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = arg1 + -0x1c;
    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: for dev %pK\n",0x8001d8e,"uaudio_dev_release",arg1_00);
    _printk("%s%s: for dev %pK\n",0x8001f33,"uaudio_dev_release",arg1_00);
    sym.uaudio_event_ring_cleanup_free(arg1_00);
    *(arg1 + -4) = 0;
    __wake_up(arg1 + 4,3,1,0);
    return;
}


// ===== sym.close_endpoints @ 0x08006658 (size 96) =====

void sym.close_endpoints(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x68) != 0) {
        *(*(arg2 + 0x68) + 0x40) = 0;
        snd_usb_endpoint_close(arg1,*(arg2 + 0x68));
        *(arg2 + 0x68) = 0;
    }
    if (*(arg2 + 0x70) != 0) {
        snd_usb_endpoint_close(arg1);
        *(arg2 + 0x70) = 0;
    }
    return;
}


// ===== sym.configure_endpoints @ 0x080066b8 (size 204) =====

int sym.configure_endpoints(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    char *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(*(arg2 + 0x68) + 0x1626) == '\0') || (iVar1 = snd_usb_endpoint_configure(arg1), -1 < iVar1)) {
        if ((*(arg2 + 0x70) == 0) || (iVar1 = snd_usb_endpoint_configure(arg1), -1 < iVar1)) {
            return 0;
        }
        pcVar2 = "%s%s: failed to configure endpoint\n";
    }
    else {
        pcVar2 = "%s%s: failed to configure data endpoint\n";
    }
    ipc_log_string(*(_segment.ehdr + 0x50),pcVar2,0x8001d8e,"configure_endpoints");
    _printk(pcVar2,0x8001b5e,"configure_endpoints");
    return iVar1;
}


// ===== sym.uaudio_iommu_map @ 0x08006784 (size 1184) =====

//WARNING: Removing unreachable block (ram,0x08006810)

char ** sym.uaudio_iommu_map(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    char **ppcVar4;
    int64_t iVar5;
    char *arg3_00;
    char **ppcVar6;
    ulong *in_x4;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    char **arg2_00;
    uint64_t uVar8;
    char **arg4_00;
    char **ppcVar9;
    uint64_t *puVar10;
    uint32_t uVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    int64_t iStack_78;
    char *pcStack_70;
    int64_t iStack_68;
    
    ppcVar4 = arg1;
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uVar7 = 7;
    if ((arg2 & 1) == 0) {
        uVar7 = 3;
    }
    iStack_78 = 0;
    ppcVar6 = arg4;
    pcStack_70 = arg3;
    if (arg1 == 2) {
        iVar3 = _segment.ehdr + 0x58;
        iVar5 = _segment.ehdr + 0x50;
        arg3_00 = _segment.ehdr + 0x40;
code_r0x08006840:
        arg2_00 = sym.uaudio_get_iova(iVar3,iVar5,arg3_00,arg4);
        bVar1 = false;
        if (arg2_00 != NULL) {
code_r0x08006854:
            if (!bVar1) {
                if (in_x4 == NULL) {
                    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: type:%d map pa:%pa to iova:0x%08lx size:%zu\n",
                                   0x8001d8e,"uaudio_iommu_map",ppcVar4,&pcStack_70,arg2_00,arg4);
                    _printk("%s%s: type:%d map pa:%pa to iova:0x%08lx size:%zu\n",0x8001f33,"uaudio_iommu_map",
                            ppcVar4,&pcStack_70,arg2_00,arg4);
                    arg3_00 = pcStack_70;
                    iVar2 = iommu_map(*(_segment.ehdr + 0x18),arg2_00,pcStack_70,arg4,uVar7);
                    ppcVar6 = arg4;
                    if (iVar2 != 0) {
                        arg3_00 = "uaudio_iommu_map";
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: failed to map pa:%pa iova:0x%lx type:%d ret:%d\n"
                                       ,0x8001d8e,"uaudio_iommu_map",&pcStack_70,arg2_00,ppcVar4,iVar2);
                        ppcVar6 = &pcStack_70;
                        _printk("%s%s: failed to map pa:%pa iova:0x%lx type:%d ret:%d\n",0x8001b5e,"uaudio_iommu_map"
                                ,ppcVar6,arg2_00,ppcVar4,iVar2);
                    }
                }
                else {
                    if (*(in_x4 + 1) == 0) {
                        arg4_00 = NULL;
                    }
                    else {
                        uVar11 = 0;
                        arg4_00 = NULL;
                        puVar10 = *in_x4;
                        ppcVar9 = arg2_00;
                        do {
                            uVar8 = puVar10[1] + *(puVar10 + 0xc) + 0xfffU & 0xfffff000;
                            iStack_78 = ((*puVar10 & 0x3fffffffffffffc) + (_usleep_range_state >> 0xc) * 0x40) * 0x40 +
                                        0x8000000000;
                            iVar2 = iommu_map(*(_segment.ehdr + 0x18),ppcVar9,iStack_78,uVar8,uVar7);
                            if (iVar2 != 0) {
                                ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: mapping failed ret%d\n",0x8001d8e,
                                               "uaudio_iommu_map",iVar2);
                                _printk("%s%s: mapping failed ret%d\n",0x8001b5e,"uaudio_iommu_map",iVar2);
                                ipc_log_string(*(_segment.ehdr + 0x50),
                                               "%s%s: type:%d, pa:%pa iova:0x%08lx sg_len:%zu\n",0x8001d8e,
                                               "uaudio_iommu_map",ppcVar4,&iStack_78,ppcVar9,uVar8);
                                _printk("%s%s: type:%d, pa:%pa iova:0x%08lx sg_len:%zu\n",0x8001b5e,"uaudio_iommu_map"
                                        ,ppcVar4,&iStack_78,ppcVar9,uVar8);
                                goto code_r0x08006bbc;
                            }
                            ipc_log_string(*(_segment.ehdr + 0x50),
                                           "%s%s: type:%d map pa:%pa to iova:0x%08lx len:%zu offset:%u\n",0x8001d8e,
                                           "uaudio_iommu_map",ppcVar4,&iStack_78,ppcVar9,uVar8,puVar10[1]);
                            ppcVar6 = arg1;
                            arg3_00 = "uaudio_iommu_map";
                            _printk("%s%s: type:%d map pa:%pa to iova:0x%08lx len:%zu offset:%u\n",0x8001f33,
                                    "uaudio_iommu_map",ppcVar6,&iStack_78,ppcVar9,uVar8,puVar10[1]);
                            ppcVar9 = ppcVar9 + uVar8;
                            arg4_00 = arg4_00 + uVar8;
                            uVar11 = uVar11 + 1;
                            puVar10 = sg_next(puVar10);
                        } while (uVar11 < *(in_x4 + 1));
                    }
                    if (arg4_00 != arg4) {
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: iova size %zu != mapped iova size %zu\n",
                                       0x8001d8e,"uaudio_iommu_map",arg4,arg4_00);
                        _printk("%s%s: iova size %zu != mapped iova size %zu\n",0x8001b5e,"uaudio_iommu_map",arg4,
                                arg4_00);
code_r0x08006bbc:
                        sym.uaudio_iommu_unmap(2,arg2_00,arg4,arg4_00);
                        arg2_00 = NULL;
                        arg3_00 = arg4;
                        ppcVar6 = arg4_00;
                    }
                }
            }
        }
    }
    else {
        if (arg1 == 1) {
            iVar3 = _segment.ehdr + 0x38;
            iVar5 = _segment.ehdr + 0x30;
            arg3_00 = _segment.ehdr + 0x20;
            goto code_r0x08006840;
        }
        if (arg1 == 0) {
            arg2_00 = 0x1000;
            bVar1 = *(_segment.ehdr + 0x68) != '\0';
            arg3_00 = arg3;
            goto code_r0x08006854;
        }
        arg3_00 = "uaudio_iommu_map";
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: unknown mem type %d\n",0x8001d8e,"uaudio_iommu_map",ppcVar4);
        _printk("%s%s: unknown mem type %d\n",0x8001b5e);
        arg2_00 = NULL;
        ppcVar6 = ppcVar4;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_68) {
        return arg2_00;
    }
    auVar12 = __stack_chk_fail();
    iVar3 = auVar12._8_8_;
    ppcVar4 = auVar12._0_8_;
    *extraout_x18 = sym.uaudio_iommu_unmap;
    if (iVar3 == 0) {
        return ppcVar4;
    }
    if (arg3_00 == NULL) {
        return ppcVar4;
    }
    uVar8 = ppcVar4 & 0xffffffff;
    iVar2 = auVar12._0_4_;
    if (iVar2 == 2) {
        uVar11 = _segment.ehdr + 0x40;
        iVar5 = _segment.ehdr + 0x50;
    }
    else {
        if (iVar2 != 1) {
            if (iVar2 != 0) {
                ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: unknown mem type %d\n",0x8001d8e,"uaudio_iommu_unmap",
                               uVar8);
                ppcVar4 = _printk("%s%s: unknown mem type %d\n",0x8001b5e,"uaudio_iommu_unmap",uVar8);
                return ppcVar4;
            }
            if (*(_segment.ehdr + 0x68) == '\0') {
                return ppcVar4;
            }
            *(_segment.ehdr + 0x68) = 0;
            goto code_r0x08006cb4;
        }
        uVar11 = _segment.ehdr + 0x20;
        iVar5 = _segment.ehdr + 0x30;
    }
    ppcVar4 = sym.uaudio_put_iova(iVar3,arg3_00,uVar11,iVar5);
code_r0x08006cb4:
    if (ppcVar6 != NULL) {
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: type %d: unmap iova 0x%08lx size %zu\n",0x8001d8e,
                       "uaudio_iommu_unmap",uVar8,iVar3,ppcVar6);
        _printk("%s%s: type %d: unmap iova 0x%08lx size %zu\n",0x8001f33,"uaudio_iommu_unmap",uVar8,iVar3,ppcVar6);
        ppcVar4 = iommu_unmap(*(_segment.ehdr + 0x18),iVar3,ppcVar6);
        if (ppcVar4 != ppcVar6) {
            ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: unmapped size %zu for iova 0x%08lx of mapped size %zu\n",
                           0x8001d8e,"uaudio_iommu_unmap",ppcVar4,iVar3,ppcVar6);
            ppcVar4 = _printk("%s%s: unmapped size %zu for iova 0x%08lx of mapped size %zu\n",0x8001b5e,
                              "uaudio_iommu_unmap",ppcVar4,iVar3,ppcVar6);
        }
    }
    return ppcVar4;
}


// ===== sym.uaudio_iommu_unmap @ 0x08006c24 (size 476) =====

void sym.uaudio_iommu_unmap(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t arg3_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0) {
        return;
    }
    if (arg3 == 0) {
        return;
    }
    if (arg1 == 2) {
        arg3_00 = _segment.ehdr + 0x40;
        iVar1 = _segment.ehdr + 0x50;
    }
    else {
        if (arg1 != 1) {
            if (arg1 != 0) {
                ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: unknown mem type %d\n",0x8001d8e,"uaudio_iommu_unmap",
                               arg1);
                _printk("%s%s: unknown mem type %d\n",0x8001b5e,"uaudio_iommu_unmap",arg1);
                return;
            }
            if (*(_segment.ehdr + 0x68) == '\0') {
                return;
            }
            *(_segment.ehdr + 0x68) = 0;
            goto code_r0x08006cb4;
        }
        arg3_00 = _segment.ehdr + 0x20;
        iVar1 = _segment.ehdr + 0x30;
    }
    sym.uaudio_put_iova(arg2,arg3,arg3_00,iVar1);
code_r0x08006cb4:
    if (arg4 != 0) {
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: type %d: unmap iova 0x%08lx size %zu\n",0x8001d8e,
                       "uaudio_iommu_unmap",arg1,arg2,arg4);
        _printk("%s%s: type %d: unmap iova 0x%08lx size %zu\n",0x8001f33,"uaudio_iommu_unmap",arg1,arg2,arg4);
        iVar1 = iommu_unmap(*(_segment.ehdr + 0x18),arg2,arg4);
        if (iVar1 != arg4) {
            ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: unmapped size %zu for iova 0x%08lx of mapped size %zu\n",
                           0x8001d8e,"uaudio_iommu_unmap",iVar1,arg2,arg4);
            _printk("%s%s: unmapped size %zu for iova 0x%08lx of mapped size %zu\n",0x8001b5e,"uaudio_iommu_unmap",
                    iVar1,arg2,arg4);
        }
    }
    return;
}


// ===== sym.uaudio_get_iova @ 0x08006e00 (size 952) =====

int64_t sym.uaudio_get_iova(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    ulong *in_x18;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    uVar1 = arg4;
    *in_x18 = unaff_x30;
    if ((arg4 & 0xfff) == 0) {
        if (*arg2 < uVar1) {
            ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: size %zu > curr size %zu\n",0x8001d8e,"uaudio_get_iova",
                           uVar1);
            _printk("%s%s: size %zu > curr size %zu\n",0x8001b5e,"uaudio_get_iova",uVar1,*arg2);
        }
        else if (*arg2 == 0) {
            ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: iova mapping is full\n",0x8001d8e,"uaudio_get_iova");
            _printk("%s%s: iova mapping is full\n",0x8001b5e,"uaudio_get_iova");
        }
        else {
            piVar6 = *arg3;
            if (piVar6 != arg3) {
                uVar2 = uVar1;
                piVar5 = NULL;
                do {
                    if (piVar6[4] == '\0') {
                        if (piVar6[3] == uVar1) {
                            iVar3 = piVar6[2];
                            *(piVar6 + 4) = 1;
                            *arg2 = *arg2 - uVar1;
                            ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: exact size: %zu found\n",0x8001d8e,
                                           "uaudio_get_iova",uVar1);
                            _printk("%s%s: exact size: %zu found\n",0x8001f33,"uaudio_get_iova",uVar1);
                            goto code_r0x0800715c;
                        }
                        if (uVar2 < piVar6[3]) goto code_r0x08007000;
                        piVar4 = piVar6;
                        if (piVar5 != NULL) {
                            piVar4 = piVar5;
                        }
                        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: partial size: %zu found\n",0x8001d8e,
                                       "uaudio_get_iova");
                        _printk("%s%s: partial size: %zu found\n",0x8001f33,"uaudio_get_iova",piVar6[3]);
                        uVar2 = uVar2 - piVar6[3];
                        if (uVar2 == 0) {
                            iVar3 = piVar4[2];
                            for (; piVar4 != piVar6; piVar4 = *piVar4) {
                                *(piVar4 + 4) = 1;
                            }
                            *(piVar6 + 4) = 1;
                            *arg2 = *arg2 - uVar1;
                            goto code_r0x0800715c;
                        }
                    }
                    else {
code_r0x08007000:
                        piVar4 = NULL;
                        uVar2 = uVar1;
                    }
                    piVar6 = *piVar6;
                    piVar5 = piVar4;
                } while (piVar6 != arg3);
            }
            iVar3 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar3 = 0x30;
            }
            piVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x28);
            if (piVar6 != NULL) {
                iVar3 = *arg1;
                piVar6[2] = iVar3;
                piVar6[3] = uVar1;
                *(piVar6 + 4) = 1;
                *arg1 = iVar3 + uVar1;
                *arg2 = *arg2 - uVar1;
                piVar5 = *(arg3 + 8);
                uVar1 = __list_add_valid(piVar6,piVar5,arg3);
                if ((uVar1 & 1) != 0) {
                    *(arg3 + 8) = piVar6;
                    *piVar6 = arg3;
                    piVar6[1] = piVar5;
                    *piVar5 = piVar6;
                }
code_r0x0800715c:
                ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: va:0x%08lx curr_iova:0x%08lx curr_iova_size:%zu\n",
                               0x8001d8e,"uaudio_get_iova",iVar3,*arg1,*arg2);
                _printk("%s%s: va:0x%08lx curr_iova:0x%08lx curr_iova_size:%zu\n",0x8001f33,"uaudio_get_iova",iVar3,
                        *arg1,*arg2);
                return iVar3;
            }
        }
    }
    else {
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: size %zu is not page size multiple\n",0x8001d8e,
                       "uaudio_get_iova",uVar1);
        _printk("%s%s: size %zu is not page size multiple\n",0x8001b5e,"uaudio_get_iova",uVar1);
    }
    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: unable to find %zu size iova\n",0x8001d8e,"uaudio_get_iova",uVar1)
    ;
    _printk("%s%s: unable to find %zu size iova\n",0x8001b5e,"uaudio_get_iova",uVar1);
    return 0;
}


// ===== sym.uaudio_put_iova @ 0x080071b8 (size 368) =====

void sym.uaudio_put_iova(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    bool bVar1;
    char *pcVar2;
    ulong uVar3;
    uint64_t *puVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong unaff_x30;
    
    puVar4 = arg3;
    *in_x18 = unaff_x30;
    puVar5 = *puVar4;
    if (puVar5 != puVar4) {
        bVar1 = false;
        uVar7 = arg2;
code_r0x08007264:
        do {
            if (puVar5[2] == arg1) {
                if (puVar5[4] != '\0') {
                    uVar6 = puVar5[3];
                    *(puVar5 + 4) = 0;
                    if (uVar6 != arg2) goto joined_r0x080072a4;
code_r0x080072c4:
                    pcVar2 = "%s%s: curr_iova_size %zu\n";
                    *arg4 = *arg4 + arg2;
                    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: curr_iova_size %zu\n",0x8001d8e,"uaudio_put_iova");
                    arg1 = *arg4;
                    uVar3 = 0x8001f33;
                    goto code_r0x08007228;
                }
                pcVar2 = "%s%s: va %lu is not in use\n";
                goto code_r0x080071ec;
            }
            if (bVar1) {
                uVar6 = puVar5[3];
joined_r0x080072a4:
                if (uVar6 <= uVar7) {
                    uVar7 = uVar7 - uVar6;
                    *(puVar5 + 4) = 0;
                    if (uVar7 == 0) goto code_r0x080072c4;
                }
                puVar5 = *puVar5;
                bVar1 = true;
                if (puVar5 == puVar4) goto code_r0x080072c4;
                goto code_r0x08007264;
            }
            puVar5 = *puVar5;
            bVar1 = false;
        } while (puVar5 != puVar4);
    }
    pcVar2 = "%s%s: unable to find the va %lu\n";
code_r0x080071ec:
    ipc_log_string(*(_segment.ehdr + 0x50),pcVar2,0x8001d8e,"uaudio_put_iova",arg1);
    uVar3 = 0x8001b5e;
code_r0x08007228:
    _printk(pcVar2,uVar3,"uaudio_put_iova",arg1);
    return;
}


// ===== sym.uaudio_event_ring_cleanup_free @ 0x08007328 (size 248) =====

void sym.uaudio_event_ring_cleanup_free(int64_t arg1)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = *(arg1 + 0x10);
    puVar1 = _segment.ehdr + (uVar2 >> 3 & 0x1ffffff8) + 0x60;
    Hint_Prefetch(puVar1,2,0,1);
    do {
        cVar3 = '\x01';
        bVar4 = ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
            *puVar1 = *puVar1 & (1L << (uVar2 & 0x3f) ^ 0xffffffffffffffffU);
            cVar3 = ExclusiveMonitorsStatus();
        }
    } while (cVar3 != '\0');
    if (*(_segment.ehdr + 0x60) == 0) {
        sym.uaudio_iommu_unmap(0,0x1000,0x1000,0x1000);
        sym.xhci_sec_event_ring_cleanup(*arg1,*(_segment.ehdr + 0x10));
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: all audio devices disconnected\n",0x8001d8e,
                       "uaudio_event_ring_cleanup_free");
        _printk("%s%s: all audio devices disconnected\n",0x8001f33,"uaudio_event_ring_cleanup_free");
    }
    return;
}


// ===== sym.uaudio_dev_cleanup @ 0x08007420 (size 448) =====

void sym.uaudio_dev_cleanup(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    ulong *in_x18;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*arg1 == 0) {
        ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: USB audio device memory is already freed.\n",0x8001d8e,
                       "uaudio_dev_cleanup");
        _printk("%s%s: USB audio device memory is already freed.\n",0x8001f33,"uaudio_dev_cleanup");
    }
    else {
        iVar2 = *(arg1 + 0x38);
        if (0 < iVar2) {
            iVar4 = 0;
            iVar5 = 0x28;
            do {
                piVar1 = *(arg1 + 0x40) + iVar5;
                if (*(piVar1 + 0x24) != '\0') {
                    uVar3 = *arg1;
                    sym.uaudio_iommu_unmap(1,piVar1[-5],piVar1[-4],piVar1[-4]);
                    piVar1[-5] = 0;
                    piVar1[-4] = 0;
                    sym.uaudio_iommu_unmap(1,piVar1[-3],piVar1[-2],piVar1[-2]);
                    piVar1[-3] = 0;
                    piVar1[-2] = 0;
                    sym.uaudio_iommu_unmap(2,piVar1[-1],*piVar1,*piVar1);
                    piVar1[-1] = 0;
                    usb_free_coherent(uVar3,*piVar1,piVar1[3],piVar1[1]);
                    piVar1[3] = 0;
                    *(piVar1 + 0x24) = 0;
                    *piVar1 = 0;
                    piVar1[1] = 0;
                    ipc_log_string(*(_segment.ehdr + 0x50),"%s%s: release resources: intf# %d card# %d\n",0x8001d8e,
                                   "uaudio_dev_cleanup",*(*(arg1 + 0x40) + iVar5 + 0x20),*(arg1 + 0x10));
                    noname_1 = _printk("%s%s: release resources: intf# %d card# %d\n",0x8001f33,"uaudio_dev_cleanup",
                                       *(*(arg1 + 0x40) + iVar5 + 0x20),*(arg1 + 0x10));
                    iVar2 = *(arg1 + 0x38);
                }
                iVar4 = iVar4 + 1;
                iVar5 = iVar5 + 0x50;
            } while (iVar4 < iVar2);
        }
        *(arg1 + 0x38) = 0;
        kfree(noname_1,*(arg1 + 0x40));
        *(arg1 + 0x40) = 0;
        sym.uaudio_event_ring_cleanup_free(arg1);
        *arg1 = 0;
    }
    return;
}


// ===== sym.xhci_sec_event_ring_setup @ 0x080075e0 (size 720) =====

int64_t sym.xhci_sec_event_ring_setup(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint64_t *puVar2;
    code *pcVar3;
    uint8_t uVar4;
    code *pcVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    code *pcVar10;
    uint64_t uVar11;
    int64_t iVar12;
    ulong *in_x18;
    uint64_t uVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar12 = *(arg1 + 0x50);
    iVar9 = iVar12;
    if (*(iVar12 + 0x288) != 0) {
        iVar9 = *(iVar12 + 0x288);
    }
    if ((*(arg1 + 0x18) == 0) || ((*(iVar12 + 0x1a8) >> 5 & 1) == 0)) {
        iVar9 = -0x13;
    }
    else {
        puVar1 = iVar9 + 0x2e0;
        uVar13 = arg2 & 0xffffffff;
        uVar4 = *(iVar9 + 0x335);
        if (uVar4 == 0) {
            uVar4 = *(iVar9 + 0x319);
            *(iVar9 + 0x335) = uVar4;
        }
        uVar7 = arg2;
        if (((*(iVar9 + 0xcf0) >> 1 & 1) == 0) && (pcVar10 = _obj.xhci_sec, uVar7 < uVar4)) {
            for (; pcVar10 != obj.xhci_sec; pcVar10 = *pcVar10) {
                if ((*(pcVar10 + -0x10) == puVar1) && (*(pcVar10 + -8) == uVar7)) {
                    pcVar10 = pcVar10 + -0x48;
                    goto code_r0x08007804;
                }
            }
            pcVar10 = kmem_cache_alloc_trace(___ubsan_handle_cfi_check_fail_abort,0xdc0,0x58);
            if (pcVar10 == NULL) {
                iVar9 = -0xc;
            }
            else {
                *(pcVar10 + 0x40) = uVar7;
                *(pcVar10 + 0x38) = puVar1;
                if (0x80 < uVar7) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x5512,0x80078b0);
                    (*pcVar10)();
                }
                iVar9 = *(iVar9 + 0x300);
                *(pcVar10 + 0x30) = iVar9 + uVar13 * 0x20 + 0x20;
                iVar12 = xhci_ring_alloc(puVar1,1,1,6,0,0xcc0);
                *pcVar10 = iVar12;
                if (iVar12 == 0) {
                    iVar6 = -0xc;
                }
                else {
                    iVar6 = xhci_alloc_erst(puVar1,iVar12,pcVar10 + 8,0xcc0);
                    if (iVar6 == 0) {
                        iVar9 = iVar9 + uVar13 * 0x20;
                        uVar7 = sym.readl_relaxed(iVar9 + 0x28);
                        sym.writel_relaxed(uVar7 & 0xffff0000 | 1,iVar9 + 0x28);
                        uVar8 = sym.readl(iVar9 + 0x30);
                        sym.readl(iVar9 + 0x34);
                        uVar7 = *(pcVar10 + 0x1c);
                        sym.writel(*(pcVar10 + 0x18) & 0xfffffff0 | uVar8 & 0xf,iVar9 + 0x30);
                        sym.writel(uVar7,iVar9 + 0x34);
                        uVar11 = xhci_trb_virt_to_dma(*(*pcVar10 + 0x28),*(*pcVar10 + 0x20));
                        if (uVar11 == 0) {
                            iVar12 = sp_el0;
                            puVar2 = iVar12 + 0x10;
                            if (((*puVar2 & 0xf0000) == 0 && (*puVar2 & 0xf00000) == 0) && (*puVar2 & 0xff00) == 0) {
                                _dev_warn(**puVar1,"intr# %d:WARN something wrong with SW event ring deq ptr.\n",
                                          uVar13);
                            }
                        }
                        uVar7 = sym.readl(iVar9 + 0x38);
                        sym.readl(iVar9 + 0x3c);
                        sym.writel(uVar11 & 0xfffffff0 | uVar7 & 7,iVar9 + 0x38);
                        sym.writel(uVar11 >> 0x20,iVar9 + 0x3c);
                        pcVar5 = *0x8000f30;
                        pcVar3 = pcVar10 + 0x48;
                        uVar13 = __list_add_valid(pcVar3,*0x8000f30,obj.xhci_sec);
                        if ((uVar13 & 1) != 0) {
                            *0x8000f30 = pcVar3;
                            *(pcVar10 + 0x48) = obj.xhci_sec;
                            *(pcVar10 + 0x50) = pcVar5;
                            *pcVar5 = pcVar3;
                        }
code_r0x08007804:
                        return *pcVar10;
                    }
                }
                _dev_err(**puVar1,"sec event ring setup failed inter#%d\n",uVar13);
                kfree(pcVar10);
                iVar9 = iVar6;
            }
        }
        else {
            _dev_err(**puVar1,"%s:state %x intr# %d\n","xhci_sec_event_ring_setup",*(iVar9 + 0xcf0),uVar13);
            iVar9 = -0x16;
        }
    }
    return iVar9;
}


// ===== sym.xhci_sec_event_ring_cleanup @ 0x080078bc (size 544) =====

ulong sym.xhci_sec_event_ring_cleanup(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    code *pcVar11;
    ulong uVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar9 = *(*(arg1 + 0x50) + 0x288);
    iVar13 = *(arg1 + 0x50);
    if (iVar9 != 0) {
        iVar13 = iVar9;
    }
    if (_obj.xhci_sec != obj.xhci_sec) {
        piVar1 = iVar13 + 0x2e0;
        pcVar11 = _obj.xhci_sec;
        do {
            if (*(pcVar11 + -0x48) == arg2) {
                if ((*(*piVar1 + 0x1a8) >> 5 & 1) != 0) {
                    if (*(pcVar11 + -0x40) != 0) {
                        iVar13 = *(pcVar11 + -0x18);
                        uVar12 = *(*piVar1 + 8);
                        iVar3 = *(pcVar11 + -0x38);
                        uVar5 = sym.readl_relaxed(iVar13);
                        sym.writel_relaxed(uVar5 & 0xfffffffd,iVar13);
                        uVar6 = sym.readl_relaxed(iVar13);
                        if ((uVar6 & 1) != 0) {
                            sym.writel_relaxed(uVar6,iVar13);
                        }
                        uVar7 = sym.readl(iVar13 + 0x18);
                        iVar9 = sym.readl(iVar13 + 0x1c);
                        uVar6 = uVar7 & 0xffffffff | iVar9 << 0x20;
                        uVar4 = uVar7 & 0xfffffff0 | iVar9 << 0x20;
                        if (uVar4 != 0) {
                            piVar8 = *arg2;
                            iVar2 = *piVar8 + (uVar4 - piVar8[2] & 0xfffffffffffffff0);
                            uVar5 = *(iVar2 + 0xc) & 1;
                            *(arg2 + 0x40) = uVar5;
                            iVar10 = *piVar8;
                            iVar9 = iVar2;
                            do {
                                if (iVar9 == iVar10 + 0xff0) {
                                    uVar5 = uVar5 ^ 1;
                                    *(arg2 + 0x40) = uVar5;
                                    iVar9 = *piVar8;
                                    iVar10 = iVar9;
                                }
                                else {
                                    iVar9 = iVar9 + 0x10;
                                }
                            } while ((*(iVar9 + 0xc) & 1) == uVar5);
                            if (iVar2 != iVar9) {
                                uVar6 = xhci_trb_virt_to_dma(*(arg2 + 0x28));
                                if (uVar6 == 0) {
                                    _dev_warn(**piVar1,"WARN invalid SW event ring dequeue ptr.\n");
                                }
                                uVar6 = uVar6 & 0xfffffffffffffff0 | uVar7 & 0xf;
                            }
                            sym.writel(uVar6 | 8,iVar13 + 0x18);
                            sym.writel(uVar6 >> 0x20,iVar13 + 0x1c);
                        }
                        dma_free_attrs(uVar12,iVar3 << 4,*(pcVar11 + -0x40),*(pcVar11 + -0x30),0);
                        *(pcVar11 + -0x40) = 0;
                    }
                    xhci_ring_free(piVar1,arg2);
                }
                uVar6 = __list_del_entry_valid(pcVar11);
                if ((uVar6 & 1) != 0) {
                    iVar13 = *pcVar11;
                    piVar1 = *(pcVar11 + 8);
                    *(iVar13 + 8) = piVar1;
                    *piVar1 = iVar13;
                }
                *pcVar11 = -0x2152ffffffffff00;
                *(pcVar11 + 8) = -0x2152fffffffffede;
                kfree(pcVar11 + -0x48);
                return 0;
            }
            pcVar11 = *pcVar11;
        } while (pcVar11 != obj.xhci_sec);
    }
    return 0;
}


// ===== sym.xhci_get_sec_event_ring_phys_addr @ 0x08007adc (size 300) =====

int64_t sym.xhci_get_sec_event_ring_phys_addr(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    int64_t iVar7;
    int64_t unaff_x20;
    ulong uVar8;
    int64_t iVar9;
    ulong *puVar10;
    ulong unaff_x30;
    uchar auVar11 [16];
    uint64_t *puStack_98;
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t *puStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar4 = *(arg1 + 0x50);
    puStack_48 = NULL;
    uStack_40 = 0;
    iVar7 = iVar4;
    if (*(iVar4 + 0x288) != 0) {
        iVar7 = *(iVar4 + 0x288);
    }
    puVar3 = arg3;
    if ((*(arg1 + 0x18) == 0) || ((*(iVar4 + 0x1a8) >> 5 & 1) == 0)) {
code_r0x08007b2c:
        iVar9 = 0;
        iStack_58 = unaff_x19;
        iStack_60 = unaff_x20;
    }
    else {
        iVar9 = 0;
        iStack_58 = unaff_x19;
        iStack_60 = unaff_x20;
        if (((*(iVar7 + 0xcf0) >> 1 & 1) == 0) && (pcVar1 = _segment.ehdr, _segment.ehdr != obj.xhci_sec)) {
            do {
                if (*(pcVar1 + -0x48) == arg2) {
                    puVar3 = **arg2;
                    dma_get_sgtable_attrs(*(iVar4 + 8),&puStack_48,puVar3,(*arg2)[2],0x1000,0);
                    *arg3 = *(*arg2 + 0x10);
                    iVar9 = ((*puStack_48 & 0x3fffffffffffffc) + (_usleep_range_state >> 0xc) * 0x40) * 0x40 +
                            0x8000000000;
                    sg_free_table(&puStack_48);
                    iStack_58 = arg3;
                    iStack_60 = arg2;
                    goto code_r0x08007b30;
                }
                pcVar1 = *pcVar1;
                unaff_x19 = arg3;
                unaff_x20 = arg2;
            } while (pcVar1 != obj.xhci_sec);
            goto code_r0x08007b2c;
        }
    }
code_r0x08007b30:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return iVar9;
    }
    auVar11 = __stack_chk_fail();
    iVar4 = auVar11._0_8_;
    *extraout_x18 = sym.xhci_get_xfer_ring_phys_addr;
    pcStack_78 = sym.xhci_get_xfer_ring_phys_addr;
    iVar7 = sp_el0;
    iStack_88 = *(iVar7 + 0x5e0);
    iVar6 = *(iVar4 + 0x50);
    uVar8 = *(iVar6 + 8);
    puStack_98 = NULL;
    uStack_90 = 0;
    iVar7 = iVar6;
    if (*(iVar6 + 0x288) != 0) {
        iVar7 = *(iVar6 + 0x288);
    }
    puStack_80 = &stack0xffffffffffffffd0;
    iStack_70 = iVar9;
    if ((*(iVar4 + 0x18) == 0) || ((*(iVar6 + 0x1a8) >> 5 & 1) == 0)) {
code_r0x08007d40:
        iVar7 = 0;
    }
    else {
        if ((iVar6 == 0) || (((iVar4 == 0 || (auVar11._8_8_ == 0)) || (*(iVar4 + 0x48) == 0)))) {
code_r0x08007d24:
            _dev_err(**(iVar7 + 0x2e0),"%s: invalid args\n","xhci_get_xfer_ring_phys_addr");
            goto code_r0x08007d40;
        }
        uVar2 = *(iVar4 + 0x5d8);
        if (uVar2 == 0) goto code_r0x08007d24;
        if (0xff < uVar2) goto code_r0x08007d7c;
        iVar9 = *(iVar7 + uVar2 * 8 + 0x4c8);
        if (((iVar9 == 0) || (*(iVar9 + 8) != iVar4)) || ((*(iVar7 + 0xcf0) >> 1 & 1) != 0)) goto code_r0x08007d24;
        uVar2 = xhci_get_endpoint_index(auVar11._8_8_);
        if (0x1e < uVar2) goto code_r0x08007d7c;
        puVar10 = iVar9 + uVar2 * 200 + 0x30;
        puVar5 = *puVar10;
        if ((puVar5 == NULL) || (puVar5 = *puVar5, puVar5 == NULL)) goto code_r0x08007d40;
        dma_get_sgtable_attrs(uVar8,&puStack_98,*puVar5,puVar5[2],0x1000,0);
        *puVar3 = *(**puVar10 + 0x10);
        iVar7 = ((*puStack_98 & 0x3fffffffffffffc) + (_usleep_range_state >> 0xc) * 0x40) * 0x40 + 0x8000000000;
        sg_free_table(&puStack_98);
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_88) {
        return iVar7;
    }
    __stack_chk_fail();
code_r0x08007d7c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007d80);
    (*pcVar1)();
}


// ===== sym.xhci_get_xfer_ring_phys_addr @ 0x08007c08 (size 376) =====

int64_t sym.xhci_get_xfer_ring_phys_addr(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t iVar6;
    ulong uVar7;
    ulong *puVar8;
    ulong unaff_x30;
    uint64_t *puStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    uVar3 = arg1;
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    iVar5 = *(uVar3 + 0x50);
    uVar7 = *(iVar5 + 8);
    puStack_48 = NULL;
    uStack_40 = 0;
    iVar6 = iVar5;
    if (*(iVar5 + 0x288) != 0) {
        iVar6 = *(iVar5 + 0x288);
    }
    if ((*(uVar3 + 0x18) == 0) || ((*(iVar5 + 0x1a8) >> 5 & 1) == 0)) {
code_r0x08007d40:
        iVar6 = 0;
    }
    else {
        if ((iVar5 == 0) || (((uVar3 == 0 || (arg2 == 0)) || (*(uVar3 + 0x48) == 0)))) {
code_r0x08007d24:
            _dev_err(**(iVar6 + 0x2e0),"%s: invalid args\n","xhci_get_xfer_ring_phys_addr");
            goto code_r0x08007d40;
        }
        uVar2 = *(uVar3 + 0x5d8);
        if (uVar2 == 0) goto code_r0x08007d24;
        if (0xff < uVar2) goto code_r0x08007d7c;
        iVar5 = *(iVar6 + uVar2 * 8 + 0x4c8);
        if (((iVar5 == 0) || (*(iVar5 + 8) != uVar3)) || ((*(iVar6 + 0xcf0) >> 1 & 1) != 0)) goto code_r0x08007d24;
        uVar2 = xhci_get_endpoint_index(arg2);
        if (0x1e < uVar2) goto code_r0x08007d7c;
        puVar8 = iVar5 + uVar2 * 200 + 0x30;
        puVar4 = *puVar8;
        if ((puVar4 == NULL) || (puVar4 = *puVar4, puVar4 == NULL)) goto code_r0x08007d40;
        dma_get_sgtable_attrs(uVar7,&puStack_48,*puVar4,puVar4[2],0x1000,0);
        *arg3 = *(**puVar8 + 0x10);
        iVar6 = ((*puStack_48 & 0x3fffffffffffffc) + (_usleep_range_state >> 0xc) * 0x40) * 0x40 + 0x8000000000;
        sg_free_table(&puStack_48);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return iVar6;
    }
    __stack_chk_fail();
code_r0x08007d7c:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8007d80);
    (*pcVar1)();
}


// ===== sym.xhci_stop_endpoint @ 0x08007d80 (size 488) =====

int sym.xhci_stop_endpoint(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    code *pcVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar7 = *(arg1 + 0x50);
    iVar8 = iVar7;
    if (*(iVar7 + 0x288) != 0) {
        iVar8 = *(iVar7 + 0x288);
    }
    if (iVar7 == 0) {
        return -0x16;
    }
    if (arg1 == 0) {
        return -0x16;
    }
    if (arg2 == 0) {
        return -0x16;
    }
    if (*(arg1 + 0x48) == 0) {
        return 0;
    }
    uVar4 = *(arg1 + 0x5d8);
    if (uVar4 == 0) {
        return -0x16;
    }
    if (0xff < uVar4) {
code_r0x08007f64:
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5512,0x8007f68);
        (*pcVar3)();
    }
    iVar7 = *(iVar8 + 0x4c8 + uVar4 * 8);
    if (iVar7 == 0) {
        return -0x16;
    }
    if (*(iVar7 + 8) != arg1) {
        return -0x16;
    }
    if ((*(iVar8 + 0xcf0) >> 1 & 1) != 0) {
        return -0x13;
    }
    puVar1 = iVar8 + 0x2e0;
    iVar7 = xhci_alloc_command(puVar1,1,0xc00);
    if (iVar7 == 0) {
        return -0xc;
    }
    iVar2 = iVar8 + 0x32c;
    uVar6 = _raw_spin_lock_irqsave(iVar2);
    if (0xff < *(arg1 + 0x5d8)) goto code_r0x08007f64;
    iVar8 = *(iVar8 + 0x4c8 + *(arg1 + 0x5d8) * 8);
    if (iVar8 == 0) {
        iVar5 = -0x13;
    }
    else {
        uVar4 = xhci_get_endpoint_index(arg2);
        if (0x1e < uVar4) goto code_r0x08007f64;
        iVar8 = *(iVar8 + uVar4 * 200 + 0x30);
        if ((iVar8 == 0) || (*(iVar8 + 0x20) == 0)) {
            iVar5 = 1;
        }
        else {
            iVar5 = xhci_queue_stop_endpoint(puVar1,iVar7,*(arg1 + 0x5d8),uVar4,0);
            if (iVar5 == 0) {
                xhci_ring_cmd_db(puVar1);
                _raw_spin_unlock_irqrestore(iVar2,uVar6);
                wait_for_completion(*(iVar7 + 0x10));
                if (*(iVar7 + 8) - 0x19U < 2) {
                    uVar6 = 0x8001177;
                    if (*(arg2 + 2) < '\0') {
                        uVar6 = 0x8001e4a;
                    }
                    _dev_warn(**puVar1,"stop endpoint command timeout for ep%d%s\n",*(arg2 + 2) & 0xf,uVar6);
                    iVar5 = -0x3e;
                }
                else {
                    iVar5 = 0;
                }
                goto code_r0x08007f14;
            }
        }
    }
    _raw_spin_unlock_irqrestore(iVar2,uVar6);
code_r0x08007f14:
    xhci_free_command(puVar1,iVar7);
    return iVar5;
}


// ===== sym.readl_relaxed @ 0x08007f68 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8007f6c);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x8007fa0);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x08007fd8 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8007ff4);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800801c);
    return;
}


// ===== sym.readl @ 0x08008050 (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8008054);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x8008098);
    return uVar1;
}


// ===== sym.writel @ 0x080080d0 (size 124) =====

void sym.writel(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80080ec);
    DataMemoryBarrier(0,2);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8008118);
    return;
}


// ===== sym.init_module @ 0x08008154 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.uaudio_qmi_plat_probe.39905be140b67e9ea55cbaff5680076d.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08008188 (size 112) =====

void sym.cleanup_module(void)

{
    ulong *puVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = _segment.ehdr;
    qmi_handle_release(*_segment.ehdr);
    flush_workqueue(puVar1[7]);
    destroy_workqueue(puVar1[7]);
    kfree(*puVar1);
    ipc_log_context_destroy(puVar1[10]);
    kfree(puVar1);
    _segment.ehdr = NULL;
    platform_driver_unregister(reloc.uaudio_qmi_plat_probe.39905be140b67e9ea55cbaff5680076d.cfi_jt);
    return;
}

