// decompiled from hdcp_qseecom_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 636) =====

//WARNING: Switch with 1 destination removed at 0x08004560

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3c7cb2f41cacff71) {
            if (arg1 == -0x79257cb1bdfcf828) {
                pcVar2 = sym.hdcp2_app_comm.cfi_jt;
            }
            else {
                if (arg1 != -0x592c90174cea9ca7) {
                    if ((arg1 == -0x46628ae32105cbe1) && ((pcVar1 + -0x8002300 >> 3 | pcVar1 << 0x3d) < 4)) {
                        return;
                    }
                    goto code_r0x08004520;
                }
                pcVar2 = sym.hdcp1_ops_notify.cfi_jt;
            }
        }
        else if (arg1 == -0x3c7cb2f41cacff71) {
            pcVar2 = sym.hdcp2_init.cfi_jt;
        }
        else {
            if (arg1 != -0x3766929085c161c6) {
                if (arg1 != -0x3309776639b8e75a) goto code_r0x08004520;
                pcVar2 = sym.hdcp2_force_encryption.cfi_jt;
                goto code_r0x08002260;
            }
            pcVar2 = sym.hdcp1_init.cfi_jt;
        }
    }
    else if (arg1 < 0x4a1fb9889a178f57) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x2b17460ce4bf82db) {
            pcVar2 = sym.hdcp1_set_enc.cfi_jt;
        }
        else {
            if (arg1 != 0x3e67df8a95ab91ba) goto code_r0x08004520;
            pcVar2 = sym.hdcp1_start.cfi_jt;
        }
    }
    else if (arg1 < 0x59e6215b9d01bc88) {
        if (arg1 != 0x4a1fb9889a178f57) {
            if ((arg1 == 0x4c550309df1cf4c1) && ((pcVar1 + -0x80022e8 >> 3 | pcVar1 << 0x3d) < 3)) {
                return;
            }
            goto code_r0x08004520;
        }
        pcVar2 = sym.hdcp2_open_stream.cfi_jt;
    }
    else {
        if (arg1 == 0x59e6215b9d01bc88) {
            pcVar2 = sym.hdcp1_feature_supported.cfi_jt;
code_r0x08002260:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08004520;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08004520;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004520:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004574);
    (*pcVar1)();
}


// ===== sym.hdcp1_set_enc.cfi_jt @ 0x08002288 (size 8) =====

ulong sym.hdcp1_set_enc.cfi_jt(int64_t *param_1,uint32_t param_2)

{
    int iVar1;
    ulong uVar2;
    uint *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (iVar4 = *param_1, iVar4 == 0)) {
        uVar2 = 0x800151c;
    }
    else {
        if (param_1[2] != '\0') {
            if ((*(param_1 + 3) & 1) == 0) {
                _printk(0x80007cd,"hdcp1_set_enc",param_1[4]);
                return 0xffffffea;
            }
            mutex_lock(obj.hdcp1_mutex_g);
            puVar3 = *(iVar4 + 8);
            *puVar3 = 0xcd;
            puVar3[1] = param_2 & 1;
            iVar5 = *(iVar4 + 8);
            iVar1 = qseecom_send_command(iVar4,puVar3,0x40,iVar5 + 0x40,0x40);
            if (iVar1 < 0) {
                uVar2 = 0x800045e;
            }
            else {
                iVar1 = *(iVar5 + 0x44);
                if (iVar1 == 0) {
                    mutex_unlock(obj.hdcp1_mutex_g);
                    return 0;
                }
                uVar2 = 0x800143f;
            }
            _printk(uVar2,"hdcp1_set_enc",iVar1);
            mutex_unlock(obj.hdcp1_mutex_g);
            return 0xffffffea;
        }
        uVar2 = 0x8000e24;
    }
    _printk(uVar2,"hdcp1_set_enc");
    return 0xffffffea;
}


// ===== sym.hdcp1_start.cfi_jt @ 0x08002290 (size 8) =====

int sym.hdcp1_start.cfi_jt(int64_t *param_1,uint32_t *param_2,uint32_t *param_3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint *puVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_2 == NULL) || (param_3 == NULL)) {
        uVar8 = 0x8001276;
code_r0x08003ee8:
        _printk(uVar8,"hdcp1_start");
        return -0x16;
    }
    if (param_1 == NULL) {
        uVar8 = 0x8000dc9;
        goto code_r0x08003ee8;
    }
    if (param_1[2] == '\0') {
        uVar8 = 0x8000e51;
        goto code_r0x08003ee8;
    }
    if ((*(param_1 + 3) & 1) != 0) {
        return 0;
    }
    mutex_lock(obj.hdcp1_mutex_g);
    iVar6 = sym.hdcp1_app_load(param_1);
    if (iVar6 != 0) goto code_r0x08003cf8;
    iVar7 = *param_1;
    if (iVar7 == 0) {
        _printk(0x800151c,"hdcp1_set_key");
        iVar6 = -0x16;
    }
    else if ((*(param_1 + 3) & 1) == 0) {
        _printk(0x80007cd,"hdcp1_set_key",param_1[4]);
        iVar6 = -0x16;
    }
    else {
        puVar9 = *(iVar7 + 8);
        *puVar9 = 0xca;
        iVar10 = *(iVar7 + 8);
        iVar6 = qseecom_send_command(iVar7,puVar9,0x40,iVar10 + 0x40,0x40);
        if (iVar6 < 0) {
            uVar8 = 0x800045e;
        }
        else {
            iVar6 = *(iVar10 + 0x44);
            if (iVar6 == 0) {
                uVar5 = (*(iVar10 + 0x48) & 0xff00ff00) >> 8 | (*(iVar10 + 0x48) & 0xff00ff) << 8;
                *param_2 = uVar5 >> 0x10 | uVar5 << 0x10;
                uVar1 = *(iVar10 + 0x4c);
                uVar2 = *(iVar10 + 0x4d);
                uVar3 = *(iVar10 + 0x4e);
                uVar4 = *(iVar10 + 0x4f);
                *param_3 = uVar1 << 0x18 | uVar2 << 0x10 | uVar3 << 8 | uVar4;
                uVar5 = *param_2;
                if ((uVar1 & 1) + (uVar1 >> 7) + (uVar2 & 1) + (uVar2 >> 7) + (uVar1 >> 1 & 1) + (uVar1 >> 2 & 1) +
                    (uVar1 >> 3 & 1) + (uVar1 >> 4 & 1) + (uVar1 >> 5 & 1) + (uVar1 >> 6 & 1) + (uVar3 & 1) +
                    (uVar3 >> 7) + (uVar2 >> 1 & 1) + (uVar2 >> 2 & 1) + (uVar2 >> 3 & 1) + (uVar2 >> 4 & 1) +
                    (uVar2 >> 5 & 1) + (uVar2 >> 6 & 1) + (uVar4 & 1) + (uVar4 >> 7) + (uVar3 >> 1 & 1) +
                    (uVar3 >> 2 & 1) + (uVar3 >> 3 & 1) + (uVar3 >> 4 & 1) + (uVar3 >> 5 & 1) + (uVar3 >> 6 & 1) +
                    (uVar5 & 1) + (uVar4 >> 1 & 1) + (uVar4 >> 2 & 1) + (uVar4 >> 3 & 1) + (uVar4 >> 4 & 1) +
                    (uVar4 >> 5 & 1) + (uVar4 >> 6 & 1) + (uVar5 >> 1 & 1) + (uVar5 >> 2 & 1) + (uVar5 >> 3 & 1) +
                    (uVar5 >> 4 & 1) + (uVar5 >> 5 & 1) + (uVar5 >> 6 & 1) + (uVar5 >> 7 & 1) == 0x14) {
                    mutex_unlock(obj.hdcp1_mutex_g);
                    return 0;
                }
                _printk(0x8000407,"hdcp1_validate_aksv");
                iVar6 = -0x16;
                _printk(0x80008d1,"hdcp1_set_key",0xffffffea);
                goto code_r0x08003fac;
            }
            uVar8 = 0x800060f;
        }
        _printk(uVar8,"hdcp1_set_key",iVar6);
        iVar6 = -0x7e;
    }
code_r0x08003fac:
    sym.hdcp1_app_unload(param_1);
code_r0x08003cf8:
    mutex_unlock(obj.hdcp1_mutex_g);
    return iVar6;
}


// ===== sym.hdcp1_ops_notify.cfi_jt @ 0x08002298 (size 8) =====

ulong sym.hdcp1_ops_notify.cfi_jt(int64_t param_1,uint *param_2,uint8_t param_3)

{
    uint uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (iVar2 = *(param_1 + 8), iVar2 == 0)) {
        uVar3 = 0x8000f43;
    }
    else {
        if (*(param_1 + 0x10) != '\0') {
            if ((*(param_1 + 0x18) & 1) == 0) {
                _printk(0x80007cd,"hdcp1_ops_notify",0x80010d1);
                return 0xffffffea;
            }
            puVar4 = *(iVar2 + 8);
            *puVar4 = 0x800200000001;
            *(puVar4 + 0xc4) = param_3 & 1;
            *(puVar4 + 0xac) = *param_2;
            *(puVar4 + 0x16) = param_2[1];
            *(puVar4 + 0xb4) = param_2[2];
            uVar1 = param_2[3];
            *(puVar4 + 0xbc) = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
            puVar4[8] = 0;
            puVar4[9] = 0;
            puVar4[10] = 0;
            puVar4[0xb] = 0;
            puVar4[0xc] = 0;
            *(puVar4 + 0x17) = uVar1;
            puVar4[0xd] = 0;
            puVar4[0xe] = 0;
            puVar4[0xf] = 0;
            puVar4[0x10] = 0;
            puVar4[0x11] = 0;
            puVar4[0x12] = 0;
            puVar4[0x13] = 0;
            puVar4[0x14] = 0;
            iVar5 = *(iVar2 + 8);
            qseecom_send_command(iVar2,puVar4,0x100,iVar5 + 0x100,0x40);
            if (*(iVar5 + 0x104) < 0) {
                _printk(0x800048e,"hdcp1_ops_notify");
                return 0xffffffea;
            }
            return 0;
        }
        uVar3 = 0x8000e24;
    }
    _printk(uVar3,"hdcp1_ops_notify");
    return 0xffffffea;
}


// ===== sym.init_module.cfi_jt @ 0x080022a0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080022a8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    return;
}


// ===== sym.hdcp2_app_comm.cfi_jt @ 0x080022b0 (size 8) =====

int sym.hdcp2_app_comm.cfi_jt(uint *param_1,uint param_2,uint *param_3)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint uVar7;
    ulong *in_x18;
    code *pcVar8;
    uint *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == NULL) || (param_3 == NULL)) {
        _printk(0x80012af,"hdcp2_app_comm");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    param_1[4] = param_3[4];
    switch(param_2) {
    case 0:
        iVar2 = sym.hdcp2_app_load(param_1);
        if (iVar2 != 0) goto code_r0x08003234;
        if (*(param_1 + 0x13) == '\0') {
            if (*(param_1 + 0xe) == 0) {
                uVar6 = 0x8000f88;
                pcVar3 = "hdcp2_app_session_init";
                pcVar4 = "session_init";
            }
            else {
                puVar9 = *(*(param_1 + 0xe) + 8);
                *puVar9 = 0x1010;
                if ((*(param_1 + 0xe) == 0) || (*(*(param_1 + 0xe) + 8) == 0)) {
                    uVar6 = 0x8000dc9;
                    pcVar3 = "hdcp2_app_session_init";
                    break;
                }
                if ((param_1[0xc] & 1) != 0) {
                    if ((param_1[0xc] >> 1 & 1) == 0) {
                        puVar9[1] = param_1[0x14];
                        iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x40,puVar9 + 0x10,0x40);
                        uVar1 = puVar9[0x10];
                        uVar5 = uVar1;
                        if ((iVar2 < 0) || (uVar1 != 0)) {
                            if (uVar1 < 0x44) {
                                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                            }
                            else {
                                uVar6 = 0x800146c;
                            }
                            pcVar3 = "hdcp2_app_session_init";
                            pcVar4 = "session_init";
                            goto code_r0x08003150;
                        }
                        if (iVar2 != 0) goto code_r0x08003234;
                        param_1[0x12] = puVar9[0x12];
                        param_1[0xc] = param_1[0xc] | 2;
                    }
                    else {
                        _printk(0x800131f,"hdcp2_app_session_init");
                    }
                    goto code_r0x08002ab8;
                }
                pcVar4 = *(param_1 + 0x16);
                uVar6 = 0x80007cd;
                pcVar3 = "hdcp2_app_session_init";
            }
            goto code_r0x08002fc0;
        }
code_r0x08002ab8:
        pcVar8 = *(param_1 + 0x1e);
        if (pcVar8 != NULL) {
            if (3 < (pcVar8 + -0x8002300 >> 3 | pcVar8 << 0x3d)) {
                __cfi_slowpath_diag(0xb99d751cdefa341f,pcVar8,0x80003a0);
            }
            iVar2 = (*pcVar8)(param_1);
            if (iVar2 != 0) goto code_r0x08003234;
            goto code_r0x08002dc4;
        }
        uVar6 = 0x8000918;
        pcVar3 = "hdcp2_app_start";
        break;
    case 1:
        if (*(param_1 + 0xe) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_start_auth";
            pcVar4 = "start_auth";
            goto code_r0x08002fc0;
        }
        puVar9 = *(*(param_1 + 0xe) + 8);
        *puVar9 = 0x1012;
        if ((param_1[0xc] >> 1 & 1) == 0) {
            uVar6 = 0x800154a;
        }
        else {
            if ((param_1[0xc] >> 2 & 1) != 0) {
                puVar9[1] = param_1[10];
                iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x40,puVar9 + 0x10,0xc0);
                uVar1 = puVar9[0x10];
                uVar5 = uVar1;
                if ((iVar2 < 0) || (uVar1 != 0)) {
                    if (uVar1 < 0x44) {
                        uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                    }
                    else {
                        uVar6 = 0x800146c;
                    }
                    pcVar3 = "hdcp2_app_start_auth";
                    pcVar4 = "start_auth";
                    goto code_r0x08003150;
                }
                if (iVar2 != 0) goto code_r0x08003234;
                memcpy(*(param_1 + 0x1a),puVar9 + 0x15,puVar9[0x14]);
                param_1[8] = puVar9[0x14];
                uVar7 = puVar9[0x13];
                *(param_1 + 1) = 0;
                *param_1 = uVar7;
                param_1[10] = puVar9[0x12];
                goto code_r0x08002dc4;
            }
            uVar6 = 0x8000c01;
        }
        pcVar3 = "hdcp2_app_start_auth";
        break;
    case 2:
        if (*(param_1 + 0xe) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_tx_deinit";
            pcVar4 = "tx_deinit";
        }
        else {
            puVar9 = *(*(param_1 + 0xe) + 8);
            *puVar9 = 0x1002;
            if ((param_1[0xc] & 1) == 0) {
                pcVar4 = *(param_1 + 0x16);
                uVar6 = 0x80007cd;
                pcVar3 = "hdcp2_app_tx_deinit";
            }
            else {
                if ((param_1[0xc] >> 2 & 1) == 0) {
                    uVar6 = 0x8000c01;
                    pcVar3 = "hdcp2_app_tx_deinit";
                    break;
                }
                puVar9[1] = param_1[10];
                iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x40,puVar9 + 0x10,0x40);
                uVar1 = puVar9[0x10];
                uVar5 = uVar1;
                if ((iVar2 < 0) || (uVar1 != 0)) {
                    if (uVar1 < 0x44) {
                        uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                    }
                    else {
                        uVar6 = 0x800146c;
                    }
                    pcVar3 = "hdcp2_app_tx_deinit";
                    pcVar4 = "tx_deinit";
                    goto code_r0x08003150;
                }
                if (iVar2 != 0) goto code_r0x08003234;
                param_1[0xc] = param_1[0xc] & 0xfffffffb;
                if (*(param_1 + 0x13) != '\0') {
code_r0x08002be8:
                    iVar2 = sym.hdcp2_app_unload(param_1);
                    goto code_r0x08003234;
                }
                if (*(param_1 + 0xe) == 0) {
                    uVar6 = 0x8000f88;
                    pcVar3 = "hdcp2_app_session_deinit";
                    pcVar4 = "session_deinit";
                }
                else {
                    puVar9 = *(*(param_1 + 0xe) + 8);
                    *puVar9 = 0x1011;
                    if ((param_1[0xc] & 1) != 0) {
                        if ((param_1[0xc] >> 1 & 1) == 0) {
                            uVar6 = 0x800154a;
                            pcVar3 = "hdcp2_app_session_deinit";
                            break;
                        }
                        puVar9[1] = param_1[0x12];
                        iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x40,puVar9 + 0x10,0x40);
                        uVar1 = puVar9[0x10];
                        uVar5 = uVar1;
                        if ((iVar2 < 0) || (uVar1 != 0)) {
                            if (uVar1 < 0x44) {
                                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                            }
                            else {
                                uVar6 = 0x800146c;
                            }
                            pcVar3 = "hdcp2_app_session_deinit";
                            pcVar4 = "session_deinit";
                            goto code_r0x08003150;
                        }
                        if (iVar2 != 0) goto code_r0x08003234;
                        param_1[0xc] = param_1[0xc] & 0xfffffffd;
                        goto code_r0x08002be8;
                    }
                    pcVar4 = *(param_1 + 0x16);
                    uVar6 = 0x80007cd;
                    pcVar3 = "hdcp2_app_session_deinit";
                }
            }
        }
        goto code_r0x08002fc0;
    case 3:
        if (*(param_1 + 0xe) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_process_msg";
            pcVar4 = "rcvd_msg";
            goto code_r0x08002fc0;
        }
        puVar9 = *(*(param_1 + 0xe) + 8);
        *puVar9 = 0x1003;
        if (*(param_1 + 2) != 0) {
            puVar9[2] = param_1[4];
            puVar9[1] = param_1[10];
            memcpy(puVar9 + 3,*(param_1 + 0x18),param_1[4]);
            iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x240,puVar9 + 0x90,0xc0);
            uVar1 = puVar9[0x90];
            uVar5 = uVar1;
            if ((iVar2 < 0) || (uVar1 != 0)) {
                if (uVar1 < 0x44) {
                    uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                }
                else {
                    uVar6 = 0x800146c;
                }
                pcVar3 = "hdcp2_app_process_msg";
                pcVar4 = "rcvd_msg";
                goto code_r0x08003150;
            }
            if (iVar2 != 0) goto code_r0x08003234;
            if (puVar9[0x94] == 1) {
                *(param_1 + 1) = 1;
            }
            memcpy(*(param_1 + 0x1a),puVar9 + 0x96,puVar9[0x95]);
            param_1[8] = puVar9[0x95];
            uVar7 = puVar9[0x93];
code_r0x08002dc0:
            *param_1 = uVar7;
code_r0x08002dc4:
            iVar2 = 0;
            *(param_3 + 2) = *(param_1 + 2);
            param_3[4] = param_1[4];
            *(param_3 + 6) = *(param_1 + 6);
            param_3[8] = param_1[8];
            *param_3 = *param_1;
            *(param_3 + 1) = *(param_1 + 1);
            goto code_r0x08003234;
        }
        uVar6 = 0x80011f5;
        pcVar3 = "hdcp2_app_process_msg";
        break;
    case 4:
        if (*(param_1 + 0xe) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_timeout";
            pcVar4 = "send_timeout";
            goto code_r0x08002fc0;
        }
        puVar9 = *(*(param_1 + 0xe) + 8);
        *puVar9 = 0x1004;
        iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x40,puVar9 + 0x10,0xc0);
        uVar1 = puVar9[0x10];
        uVar5 = uVar1;
        if ((-1 < iVar2) && (uVar1 == 0)) {
code_r0x08002da0:
            if (iVar2 != 0) goto code_r0x08003234;
            memcpy(*(param_1 + 0x1a),puVar9 + 0x14,puVar9[0x13]);
            param_1[8] = puVar9[0x13];
            uVar7 = puVar9[0x12];
            goto code_r0x08002dc0;
        }
        if (uVar1 < 0x44) {
            uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
        }
        else {
            uVar6 = 0x800146c;
        }
        pcVar3 = "hdcp2_app_timeout";
        pcVar4 = "send_timeout";
code_r0x08003150:
        _printk(0x8001196,pcVar3,pcVar4,iVar2,uVar5,uVar6);
        goto code_r0x08003230;
    case 5:
        if (*(param_1 + 0xe) != 0) {
            puVar9 = *(*(param_1 + 0xe) + 8);
            *puVar9 = 0x1005;
            msleep(300);
            puVar9[1] = param_1[10];
            iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x40,puVar9 + 0x10,0x40);
            uVar1 = puVar9[0x10];
            uVar5 = uVar1;
            if ((-1 < iVar2) && (uVar1 == 0)) {
                if (iVar2 != 0) goto code_r0x08003234;
                param_1[0xc] = param_1[0xc] | 8;
                goto code_r0x08002dc4;
            }
            if (uVar1 < 0x44) {
                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
            }
            else {
                uVar6 = 0x800146c;
            }
            pcVar3 = "hdcp2_app_enable_encryption";
            pcVar4 = "set_hw_key";
            goto code_r0x08003150;
        }
        uVar6 = 0x8000f88;
        pcVar3 = "hdcp2_app_enable_encryption";
        pcVar4 = "set_hw_key";
        goto code_r0x08002fc0;
    case 6:
        if (*(param_1 + 0xe) != 0) {
            puVar9 = *(*(param_1 + 0xe) + 8);
            *puVar9 = 0x1006;
            puVar9[1] = param_1[10];
            iVar2 = qseecom_send_command(*(param_1 + 0xe),puVar9,0x40,puVar9 + 0x10,0xc0);
            uVar1 = puVar9[0x10];
            uVar5 = uVar1;
            if ((-1 < iVar2) && (uVar1 == 0)) goto code_r0x08002da0;
            if (uVar1 < 0x44) {
                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
            }
            else {
                uVar6 = 0x800146c;
            }
            pcVar3 = "hdcp2_app_query_stream";
            pcVar4 = "query_stream_type";
            goto code_r0x08003150;
        }
        uVar6 = 0x8000f88;
        pcVar3 = "hdcp2_app_query_stream";
        pcVar4 = "query_stream_type";
code_r0x08002fc0:
        _printk(uVar6,pcVar3,pcVar4);
        goto code_r0x08003230;
    default:
        iVar2 = 0;
        goto code_r0x08003234;
    }
    _printk(uVar6,pcVar3);
code_r0x08003230:
    iVar2 = -0x16;
code_r0x08003234:
    mutex_unlock(obj.hdcp2_mutex_g);
    return iVar2;
}


// ===== sym.hdcp2_init.cfi_jt @ 0x080022b8 (size 8) =====

int64_t sym.hdcp2_init.cfi_jt(uint param_1)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x80);
    if (iVar2 != 0) {
        *(iVar2 + 0x50) = param_1;
        uVar1 = _mutex_lock;
        *(iVar2 + 0x58) = "hdcp2p2";
        iVar3 = kmem_cache_alloc_trace(uVar1,0xcc0,0x1000);
        *(iVar2 + 0x68) = iVar3;
        if (iVar3 != 0) {
            iVar4 = kmem_cache_alloc_trace(_mutex_lock,0xcc0,0x1000);
            *(iVar2 + 0x60) = iVar4;
            if (iVar4 != 0) {
                *(iVar2 + 8) = iVar4;
                *(iVar2 + 0x18) = iVar3;
                return iVar2;
            }
            kfree_sensitive(iVar3);
        }
        kfree_sensitive(iVar2);
    }
    return 0;
}


// ===== sym.hdcp1_init.cfi_jt @ 0x080022c0 (size 8) =====

void sym.hdcp1_init.cfi_jt(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    iVar1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (iVar1 != 0) {
        *(iVar1 + 0x20) = "hdcp1";
    }
    return;
}


// ===== sym.hdcp2_force_encryption.cfi_jt @ 0x080022c8 (size 8) =====

int sym.hdcp2_force_encryption.cfi_jt(int64_t param_1,uint param_2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80012af,"hdcp2_force_encryption");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    if (*(param_1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_force_encryption_utility","force_encryption");
    }
    else {
        puVar4 = *(*(param_1 + 0x38) + 8);
        *puVar4 = 0x1016;
        if (*(param_1 + 0x30) == 8) {
            msleep(200);
        }
        puVar4[1] = *(param_1 + 0x28);
        puVar4[2] = param_2;
        iVar2 = qseecom_send_command(*(param_1 + 0x38),puVar4,0x40,puVar4 + 0x10,0x40);
        uVar1 = puVar4[0x10];
        if ((-1 < iVar2) && (uVar1 == 0)) {
            if (iVar2 == 0) {
                mutex_unlock(obj.hdcp2_mutex_g);
                return 0;
            }
            goto code_r0x08002a10;
        }
        if (uVar1 < 0x44) {
            uVar3 = *(obj.qseecom_handle_g + uVar1 * 8);
        }
        else {
            uVar3 = 0x800146c;
        }
        _printk(0x8001196,"hdcp2_force_encryption_utility","force_encryption",iVar2,uVar1,uVar3);
    }
    iVar2 = -0x16;
code_r0x08002a10:
    mutex_unlock(obj.hdcp2_mutex_g);
    _printk(0x80009be,"hdcp2_force_encryption",iVar2);
    return iVar2;
}


// ===== sym.hdcp2_close_stream.cfi_jt @ 0x080022d0 (size 8) =====

int sym.hdcp2_close_stream.cfi_jt(int64_t param_1,uint param_2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80012af,"hdcp2_close_stream");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    if (*(param_1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_close_stream_helper","session_close_stream");
    }
    else {
        puVar4 = *(*(param_1 + 0x38) + 8);
        *puVar4 = 0x1015;
        if ((*(param_1 + 0x30) >> 1 & 1) == 0) {
            uVar3 = 0x800154a;
        }
        else {
            if ((*(param_1 + 0x30) >> 2 & 1) != 0) {
                puVar4[1] = *(param_1 + 0x48);
                puVar4[2] = param_2;
                iVar2 = qseecom_send_command(*(param_1 + 0x38),puVar4,0x40,puVar4 + 0x10,0x40);
                uVar1 = puVar4[0x10];
                if ((-1 < iVar2) && (uVar1 == 0)) goto code_r0x0800357c;
                if (uVar1 < 0x44) {
                    uVar3 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar3 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_close_stream_helper","session_close_stream",iVar2,uVar1,uVar3);
                goto code_r0x08003578;
            }
            uVar3 = 0x8000c01;
        }
        _printk(uVar3,"hdcp2_close_stream_helper");
    }
code_r0x08003578:
    iVar2 = -0x16;
code_r0x0800357c:
    mutex_unlock(obj.hdcp2_mutex_g);
    return iVar2;
}


// ===== sym.hdcp1_feature_supported.cfi_jt @ 0x080022d8 (size 8) =====

uint sym.hdcp1_feature_supported.cfi_jt(int64_t *param_1)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint *puVar4;
    ulong *in_x18;
    uint uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.hdcp1_mutex_g);
    if (param_1 == NULL) {
        _printk(0x8000dc9,"hdcp1_feature_supported");
    }
    else {
        if (param_1[2] != '\0') {
            uVar5 = 1;
            goto code_r0x080037d4;
        }
        iVar1 = sym.hdcp1_app_load(param_1);
        if ((iVar1 == 0) && ((*(param_1 + 3) & 1) != 0)) {
            iVar2 = *param_1;
            if (iVar2 == 0) {
                _printk(0x800151c,"hdcp1_verify_key");
                uVar5 = 0;
            }
            else {
                puVar4 = *(iVar2 + 8);
                *puVar4 = 0xcc;
                iVar6 = *(iVar2 + 8);
                iVar1 = qseecom_send_command(iVar2,puVar4,0x40,iVar6 + 0x40,0x40);
                if (iVar1 < 0) {
                    uVar3 = 0x8000a97;
                }
                else {
                    iVar1 = *(iVar6 + 0x44);
                    if (iVar1 == 0) {
                        uVar5 = 1;
                        *(param_1 + 2) = 1;
                        goto code_r0x080037b0;
                    }
                    uVar3 = 0x80004fa;
                }
                _printk(uVar3,"hdcp1_verify_key",iVar1);
                uVar5 = 0;
            }
code_r0x080037b0:
            sym.hdcp1_app_unload(param_1);
            goto code_r0x080037d4;
        }
    }
    uVar5 = 0;
code_r0x080037d4:
    mutex_unlock(obj.hdcp1_mutex_g);
    return uVar5;
}


// ===== sym.hdcp2_feature_supported.cfi_jt @ 0x080022e0 (size 8) =====

uint sym.hdcp2_feature_supported.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    uint uVar5;
    uint *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80012af,"hdcp2_feature_supported");
        return 0;
    }
    if (*(param_1 + 0x2c) != '\0') {
        return 1;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    iVar2 = sym.hdcp2_app_load(param_1);
    if (iVar2 != 0) {
        uVar5 = 0;
        goto code_r0x080023f0;
    }
    if (*(param_1 + 0x38) == 0) {
        uVar4 = 0x8000f88;
        pcVar3 = "verify_key";
code_r0x08002444:
        _printk(uVar4,"hdcp2_verify_key",pcVar3);
code_r0x080023bc:
        uVar5 = 0;
    }
    else {
        puVar6 = *(*(param_1 + 0x38) + 8);
        *puVar6 = 0x100f;
        if ((*(param_1 + 0x30) & 1) == 0) {
            pcVar3 = *(param_1 + 0x58);
            uVar4 = 0x80007cd;
            goto code_r0x08002444;
        }
        iVar2 = qseecom_send_command(*(param_1 + 0x38),puVar6,0x40,puVar6 + 0x10,0x40);
        uVar1 = puVar6[0x10];
        if ((iVar2 < 0) || (uVar1 != 0)) {
            if (uVar1 < 0x44) {
                uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
            }
            else {
                uVar4 = 0x800146c;
            }
            _printk(0x8001196,"hdcp2_verify_key","verify_key",iVar2,uVar1,uVar4);
            goto code_r0x080023bc;
        }
        if (iVar2 != 0) goto code_r0x080023bc;
        uVar5 = 1;
        *(param_1 + 0x2c) = 1;
    }
    sym.hdcp2_app_unload(param_1);
code_r0x080023f0:
    mutex_unlock(obj.hdcp2_mutex_g);
    return uVar5;
}


// ===== sym.hdcp1_stop.cfi_jt @ 0x080022e8 (size 8) =====

void sym.hdcp1_stop.cfi_jt(int64_t *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1 == NULL) || (*param_1 == 0)) || (param_1[1] == 0)) {
        _printk(0x8000dc9,"hdcp1_stop");
    }
    else if ((*(param_1 + 3) & 1) != 0) {
        mutex_lock(obj.hdcp1_mutex_g);
        sym.hdcp1_app_unload(param_1);
        mutex_unlock(obj.hdcp1_mutex_g);
    }
    return;
}


// ===== sym.hdcp1_deinit.cfi_jt @ 0x080022f0 (size 8) =====

void sym.hdcp1_deinit.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.hdcp2_deinit.cfi_jt @ 0x080022f8 (size 8) =====

void sym.hdcp2_deinit.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree_sensitive(*(param_1 + 0x68));
    kfree_sensitive(*(param_1 + 0x60));
    kfree_sensitive(param_1);
    return;
}


// ===== sym.__typeid__ZTSFiP12hdcp2_handleE_global_addr @ 0x08002300 (size 8) =====

int sym.__typeid__ZTSFiP12hdcp2_handleE_global_addr(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_app_init","init");
        iVar2 = -0x16;
    }
    else {
        puVar5 = *(*(param_1 + 0x38) + 8);
        puVar3 = puVar5 + 0x10;
        *puVar5 = 0x100b;
        if (*(param_1 + 0x4c) == '\0') {
            if ((*(param_1 + 0x30) & 1) == 0) {
                puVar5[1] = 0x20100;
                iVar2 = qseecom_send_command(*(param_1 + 0x38),puVar5,0x40,puVar3,0x40);
                uVar1 = puVar5[0x10];
                if ((iVar2 < 0) || (uVar1 != 0)) {
                    if (uVar1 < 0x44) {
                        uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
                    }
                    else {
                        uVar4 = 0x800146c;
                    }
                    _printk(0x8001196,"hdcp2_app_init","init",iVar2,uVar1,uVar4);
                    return -0x16;
                }
                if (iVar2 != 0) {
                    return iVar2;
                }
                if (*(puVar5 + 0x49) != '\x01') {
                    _printk(0x80012d3,"hdcp2_app_init",*(puVar5 + 0x49),1);
                    return -1;
                }
            }
            else {
                _printk(0x8000a0e,"hdcp2_app_init",param_3,puVar3);
            }
            iVar2 = 0;
        }
        else {
            _printk(0x8000b8e,"hdcp2_app_init",param_3,puVar3);
            iVar2 = -0x16;
        }
    }
    return iVar2;
}


// ===== sym.hdcp2_app_init_legacy.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt @ 0x08002308 (size 8) =====

int sym.hdcp2_app_init_legacy.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_app_init_legacy","init_v1");
    }
    else {
        puVar5 = *(*(param_1 + 0x38) + 8);
        puVar3 = puVar5 + 0x10;
        *puVar5 = 0x100b;
        if (*(param_1 + 0x4c) == '\0') {
            _printk(0x8000b8e,"hdcp2_app_init_legacy",param_3,puVar3);
        }
        else {
            if ((*(param_1 + 0x30) & 1) != 0) {
                _printk(0x8000a0e,"hdcp2_app_init_legacy",param_3,puVar3);
                return 0;
            }
            iVar2 = qseecom_send_command(*(param_1 + 0x38),puVar5,0x40,puVar3,0xc0);
            uVar1 = puVar5[0x10];
            if ((-1 < iVar2) && (uVar1 == 0)) {
                return iVar2;
            }
            if (uVar1 < 0x44) {
                uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
            }
            else {
                uVar4 = 0x800146c;
            }
            _printk(0x8001196,"hdcp2_app_init_legacy","init_v1",iVar2,uVar1,uVar4);
        }
    }
    return -0x16;
}


// ===== sym.hdcp2_app_tx_init_legacy.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt @ 0x08002310 (size 8) =====

int sym.hdcp2_app_tx_init_legacy.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt(uint *param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    uint *puVar4;
    ulong uVar5;
    ulong *in_x18;
    uint *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0xe) == 0) {
        _printk(0x8000f88,"hdcp2_app_tx_init_legacy","tx_init_v1");
        iVar3 = -0x16;
    }
    else {
        puVar6 = *(*(param_1 + 0xe) + 8);
        puVar4 = puVar6 + 0x10;
        *puVar6 = 0x1001;
        if ((param_1[0xc] & 1) == 0) {
            _printk(0x8001601,"hdcp2_app_tx_init_legacy",param_3,puVar4);
            iVar3 = -0x16;
        }
        else if ((param_1[0xc] >> 2 & 1) == 0) {
            iVar3 = qseecom_send_command(*(param_1 + 0xe),puVar6,0x40,puVar4,0xc0);
            uVar1 = puVar6[0x10];
            if ((iVar3 < 0) || (uVar1 != 0)) {
                if (uVar1 < 0x44) {
                    uVar5 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar5 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_app_tx_init_legacy","tx_init_v1",iVar3,uVar1,uVar5);
                iVar3 = -0x16;
            }
            else if (iVar3 == 0) {
                *(param_1 + 6) = puVar6 + 0x15;
                param_1[8] = puVar6[0x14];
                *param_1 = puVar6[0x13];
                uVar2 = puVar6[0x12];
                param_1[0xc] = param_1[0xc] | 4;
                param_1[10] = uVar2;
            }
        }
        else {
            _printk(0x800067d,"hdcp2_app_tx_init_legacy",param_3,puVar4);
            iVar3 = 0;
        }
    }
    return iVar3;
}


// ===== sym.hdcp2_app_tx_init.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt @ 0x08002318 (size 8) =====

int sym.hdcp2_app_tx_init.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_app_tx_init","tx_init");
        iVar2 = -0x16;
    }
    else {
        puVar5 = *(*(param_1 + 0x38) + 8);
        puVar3 = puVar5 + 0x10;
        *puVar5 = 0x1001;
        if ((*(param_1 + 0x30) >> 1 & 1) == 0) {
            _printk(0x800154a,"hdcp2_app_tx_init",param_3,puVar3);
            iVar2 = -0x16;
        }
        else if ((*(param_1 + 0x30) >> 2 & 1) == 0) {
            puVar5[1] = *(param_1 + 0x48);
            iVar2 = qseecom_send_command(*(param_1 + 0x38),puVar5,0x40,puVar3,0x40);
            uVar1 = puVar5[0x10];
            if ((iVar2 < 0) || (uVar1 != 0)) {
                if (uVar1 < 0x44) {
                    uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar4 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_app_tx_init","tx_init",iVar2,uVar1,uVar4);
                iVar2 = -0x16;
            }
            else if (iVar2 == 0) {
                *(param_1 + 0x28) = puVar5[0x12];
                *(param_1 + 0x30) = *(param_1 + 0x30) | 4;
            }
        }
        else {
            _printk(0x800067d,"hdcp2_app_tx_init",param_3,puVar3);
            iVar2 = 0;
        }
    }
    return iVar2;
}


// ===== sym.hdcp2_open_stream.cfi_jt @ 0x08002320 (size 8) =====

int sym.hdcp2_open_stream.cfi_jt(int64_t param_1,uint32_t param_2,uint32_t param_3,uint *param_4)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == 0) {
        _printk(0x80012af,"hdcp2_open_stream");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    if (*(param_1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_open_stream_helper","session_open_stream");
    }
    else {
        puVar4 = *(*(param_1 + 0x38) + 8);
        *puVar4 = 0x1014;
        if ((*(param_1 + 0x30) >> 1 & 1) == 0) {
            uVar3 = 0x800154a;
        }
        else {
            if ((*(param_1 + 0x30) >> 2 & 1) != 0) {
                puVar4[1] = *(param_1 + 0x48);
                puVar4[2] = param_2 & 0xff;
                puVar4[3] = param_3 & 0xff;
                puVar4[4] = 0;
                iVar2 = qseecom_send_command(*(param_1 + 0x38),puVar4,0x40,puVar4 + 0x10,0x40);
                uVar1 = puVar4[0x10];
                if ((-1 < iVar2) && (uVar1 == 0)) {
                    if (iVar2 == 0) {
                        *param_4 = puVar4[0x12];
                    }
                    goto code_r0x0800342c;
                }
                if (uVar1 < 0x44) {
                    uVar3 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar3 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_open_stream_helper","session_open_stream",iVar2,uVar1,uVar3);
                goto code_r0x08003428;
            }
            uVar3 = 0x8000c01;
        }
        _printk(uVar3,"hdcp2_open_stream_helper");
    }
code_r0x08003428:
    iVar2 = -0x16;
code_r0x0800342c:
    mutex_unlock(obj.hdcp2_mutex_g);
    return iVar2;
}


// ===== sym.hdcp2_feature_supported @ 0x08002328 (size 356) =====

uint sym.hdcp2_feature_supported(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    ulong uVar4;
    ulong *in_x18;
    uint uVar5;
    uint *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80012af,"hdcp2_feature_supported");
        return 0;
    }
    if (*(arg1 + 0x2c) != '\0') {
        return 1;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    iVar2 = sym.hdcp2_app_load(arg1);
    if (iVar2 != 0) {
        uVar5 = 0;
        goto code_r0x080023f0;
    }
    if (*(arg1 + 0x38) == 0) {
        uVar4 = 0x8000f88;
        pcVar3 = "verify_key";
code_r0x08002444:
        _printk(uVar4,"hdcp2_verify_key",pcVar3);
code_r0x080023bc:
        uVar5 = 0;
    }
    else {
        puVar6 = *(*(arg1 + 0x38) + 8);
        *puVar6 = 0x100f;
        if ((*(arg1 + 0x30) & 1) == 0) {
            pcVar3 = *(arg1 + 0x58);
            uVar4 = 0x80007cd;
            goto code_r0x08002444;
        }
        iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar6,0x40,puVar6 + 0x10,0x40);
        uVar1 = puVar6[0x10];
        if ((iVar2 < 0) || (uVar1 != 0)) {
            if (uVar1 < 0x44) {
                uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
            }
            else {
                uVar4 = 0x800146c;
            }
            _printk(0x8001196,"hdcp2_verify_key","verify_key",iVar2,uVar1,uVar4);
            goto code_r0x080023bc;
        }
        if (iVar2 != 0) goto code_r0x080023bc;
        uVar5 = 1;
        *(arg1 + 0x2c) = 1;
    }
    sym.hdcp2_app_unload(arg1);
code_r0x080023f0:
    mutex_unlock(obj.hdcp2_mutex_g);
    return uVar5;
}


// ===== sym.hdcp2_app_load @ 0x0800248c (size 720) =====

int sym.hdcp2_app_load(int64_t arg1)

{
    code *pcVar1;
    code *pcVar2;
    uint32_t uVar3;
    bool bVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    int iVar8;
    int64_t iVar9;
    ulong *in_x18;
    uint *puVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80012af,"hdcp2_app_load");
        return -0x16;
    }
    if ((*(arg1 + 0x30) & 1) != 0) {
        _printk(0x80009e2,"hdcp2_app_load",*(arg1 + 0x58));
        return 0;
    }
    iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar7 == 0) {
        iVar5 = qseecom_start_app(obj.qseecom_handle_g,*(arg1 + 0x58),0x1000);
        if (iVar5 != 0) {
            _printk(0x8000b06,"hdcp2_app_load",iVar5);
            return iVar5;
        }
        iVar7 = CONCAT44(*0x8000004,_segment.ehdr);
    }
    *(arg1 + 0x38) = iVar7;
    iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
    if (iVar9 == 0) {
        iVar5 = qseecom_start_app(obj.hdcpsrm_qseecom_handle_g,"hdcpsrm",0x1000);
        if (iVar5 != 0) {
            _printk(0x8000b46,"hdcp2_app_load",iVar5);
            goto joined_r0x080026e4;
        }
        iVar7 = *(arg1 + 0x38);
        iVar9 = CONCAT44(*0x8000004,_segment.ehdr);
    }
    *(arg1 + 0x40) = iVar9;
    if (iVar7 == 0) {
        _printk(0x8000f88,"hdcp_get_version","version");
code_r0x080026a8:
        iVar5 = -0x16;
code_r0x080026ac:
        uVar6 = 0x8001387;
    }
    else {
        puVar10 = *(iVar7 + 8);
        *puVar10 = 0x100e;
        if ((*(arg1 + 0x30) & 1) == 0) {
            iVar5 = qseecom_send_command(*(arg1 + 0x38),puVar10,0x40,puVar10 + 0x10,0x40);
            uVar3 = puVar10[0x10];
            if ((iVar5 < 0) || (uVar3 != 0)) {
                if (uVar3 < 0x44) {
                    uVar6 = *(obj.qseecom_handle_g + uVar3 * 8);
                }
                else {
                    uVar6 = 0x800146c;
                }
                _printk(0x8001196,"hdcp_get_version","version",iVar5,uVar3,uVar6);
                goto code_r0x080026a8;
            }
            if (iVar5 == 0) {
                if (*(puVar10 + 0x4a) == '\x01') {
                    *(arg1 + 0x4c) = 1;
                }
                goto code_r0x08002574;
            }
            goto code_r0x080026ac;
        }
        _printk(0x8000a0e,"hdcp_get_version");
code_r0x08002574:
        iVar8 = _segment.ehdr;
        bVar4 = *(arg1 + 0x4c) != '\0';
        pcVar1 = sym.__typeid__ZTSFiP12hdcp2_handleE_global_addr;
        if (bVar4) {
            pcVar1 = sym.hdcp2_app_init_legacy.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt;
        }
        pcVar2 = sym.hdcp2_app_tx_init.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt;
        if (bVar4) {
            pcVar2 = sym.hdcp2_app_tx_init_legacy.222a4f2a72c5ed5e703d6525e5470e6b.cfi_jt;
        }
        *(arg1 + 0x70) = pcVar1;
        *(arg1 + 0x78) = pcVar2;
        if ((iVar8 != 0) || (iVar5 = (*pcVar1)(arg1), iVar8 = _segment.ehdr, iVar5 == 0)) {
            _segment.ehdr = iVar8 + 1;
            *(arg1 + 0x30) = *(arg1 + 0x30) | 1;
            return 0;
        }
        uVar6 = 0x8001170;
    }
    _printk(uVar6,"hdcp2_app_load");
    if (_segment.ehdr == 0) {
        qseecom_shutdown_app(obj.hdcpsrm_qseecom_handle_g);
        _obj.hdcpsrm_qseecom_handle_g = 0;
    }
    *(arg1 + 0x40) = 0;
joined_r0x080026e4:
    if (_segment.ehdr == 0) {
        qseecom_shutdown_app(obj.qseecom_handle_g);
        _obj.qseecom_handle_g = 0;
    }
    *(arg1 + 0x38) = 0;
    return iVar5;
}


// ===== sym.hdcp2_app_unload @ 0x0800275c (size 380) =====

int sym.hdcp2_app_unload(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = arg1 + 0x38;
    if (*piVar4 == 0) {
        _printk(0x8000f88,"hdcp2_app_unload","deinit");
        if (_segment.ehdr == 0) {
            qseecom_shutdown_app(arg1 + 0x40);
        }
        iVar2 = -0x16;
    }
    else {
        puVar5 = *(*piVar4 + 8);
        *puVar5 = 0x100c;
        iVar2 = _segment.ehdr + -1;
        _segment.ehdr = CONCAT44(*0x8000004,iVar2);
        if (iVar2 == 0) {
            iVar2 = qseecom_send_command(*piVar4,puVar5,0x40,puVar5 + 0x10,0x40);
            uVar1 = puVar5[0x10];
            if ((iVar2 < 0) || (uVar1 != 0)) {
                if (uVar1 < 0x44) {
                    uVar3 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar3 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_app_unload","deinit",iVar2,uVar1,uVar3);
            }
            iVar2 = qseecom_shutdown_app(arg1 + 0x40);
            if (iVar2 != 0) {
                _printk(0x800056e,"hdcp2_app_unload",iVar2);
            }
            _segment.ehdr = 0;
            iVar2 = qseecom_shutdown_app(piVar4);
            if (iVar2 != 0) {
                _printk(0x8000a3b,"hdcp2_app_unload",iVar2);
                return iVar2;
            }
            _segment.ehdr = 0;
        }
        iVar2 = 0;
        *piVar4 = 0;
        *(arg1 + 0x40) = 0;
        *(arg1 + 0x30) = *(arg1 + 0x30) & 0xfffffffe;
    }
    return iVar2;
}


// ===== sym.hdcp2_force_encryption @ 0x080028d8 (size 352) =====

int sym.hdcp2_force_encryption(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80012af,"hdcp2_force_encryption");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    if (*(arg1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_force_encryption_utility","force_encryption");
    }
    else {
        puVar4 = *(*(arg1 + 0x38) + 8);
        *puVar4 = 0x1016;
        if (*(arg1 + 0x30) == 8) {
            msleep(200);
        }
        puVar4[1] = *(arg1 + 0x28);
        puVar4[2] = arg2;
        iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar4,0x40,puVar4 + 0x10,0x40);
        uVar1 = puVar4[0x10];
        if ((-1 < iVar2) && (uVar1 == 0)) {
            if (iVar2 == 0) {
                mutex_unlock(obj.hdcp2_mutex_g);
                return 0;
            }
            goto code_r0x08002a10;
        }
        if (uVar1 < 0x44) {
            uVar3 = *(obj.qseecom_handle_g + uVar1 * 8);
        }
        else {
            uVar3 = 0x800146c;
        }
        _printk(0x8001196,"hdcp2_force_encryption_utility","force_encryption",iVar2,uVar1,uVar3);
    }
    iVar2 = -0x16;
code_r0x08002a10:
    mutex_unlock(obj.hdcp2_mutex_g);
    _printk(0x80009be,"hdcp2_force_encryption",iVar2);
    return iVar2;
}


// ===== sym.hdcp2_app_comm @ 0x08002a38 (size 2544) =====

int sym.hdcp2_app_comm(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint uVar7;
    ulong *in_x18;
    code *pcVar8;
    uint *puVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg3 == 0)) {
        _printk(0x80012af,"hdcp2_app_comm");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    *(arg1 + 0x10) = *(arg3 + 0x10);
    if (6 < arg2) {
        iVar2 = 0;
        goto code_r0x08003234;
    }
    //switch table (7 cases) at 0x80003c0
    switch(*((arg2 & 0xffffffffU) + 0x80003c0) * 4 + 0x8002a9c) {
    case 0x8002aa0:
        iVar2 = sym.hdcp2_app_load(arg1);
        if (iVar2 != 0) goto code_r0x08003234;
        if (*(arg1 + 0x4c) == '\0') {
            if (*(arg1 + 0x38) == 0) {
                uVar6 = 0x8000f88;
                pcVar3 = "hdcp2_app_session_init";
                pcVar4 = "session_init";
            }
            else {
                puVar9 = *(*(arg1 + 0x38) + 8);
                *puVar9 = 0x1010;
                if ((*(arg1 + 0x38) == 0) || (*(*(arg1 + 0x38) + 8) == 0)) {
                    uVar6 = 0x8000dc9;
                    pcVar3 = "hdcp2_app_session_init";
                    break;
                }
                if ((*(arg1 + 0x30) & 1) != 0) {
                    if ((*(arg1 + 0x30) >> 1 & 1) == 0) {
                        puVar9[1] = *(arg1 + 0x50);
                        iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x40,puVar9 + 0x10,0x40);
                        uVar1 = puVar9[0x10];
                        uVar5 = uVar1;
                        if ((iVar2 < 0) || (uVar1 != 0)) {
                            if (uVar1 < 0x44) {
                                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                            }
                            else {
                                uVar6 = 0x800146c;
                            }
                            pcVar3 = "hdcp2_app_session_init";
                            pcVar4 = "session_init";
                            goto code_r0x08003150;
                        }
                        if (iVar2 != 0) goto code_r0x08003234;
                        *(arg1 + 0x48) = puVar9[0x12];
                        *(arg1 + 0x30) = *(arg1 + 0x30) | 2;
                    }
                    else {
                        _printk(0x800131f,"hdcp2_app_session_init");
                    }
                    goto code_r0x08002ab8;
                }
                pcVar4 = *(arg1 + 0x58);
                uVar6 = 0x80007cd;
                pcVar3 = "hdcp2_app_session_init";
            }
            goto code_r0x08002fc0;
        }
code_r0x08002ab8:
        pcVar8 = *(arg1 + 0x78);
        if (pcVar8 != NULL) {
            if (3 < (pcVar8 + -0x8002300 >> 3 | pcVar8 << 0x3d)) {
                __cfi_slowpath_diag(0xb99d751cdefa341f,pcVar8,0x80003a0);
            }
            iVar2 = (*pcVar8)(arg1);
            if (iVar2 != 0) goto code_r0x08003234;
            goto code_r0x08002dc4;
        }
        uVar6 = 0x8000918;
        pcVar3 = "hdcp2_app_start";
        break;
    case 0x8002af8:
        if (*(arg1 + 0x38) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_start_auth";
            pcVar4 = "start_auth";
            goto code_r0x08002fc0;
        }
        puVar9 = *(*(arg1 + 0x38) + 8);
        *puVar9 = 0x1012;
        if ((*(arg1 + 0x30) >> 1 & 1) == 0) {
            uVar6 = 0x800154a;
        }
        else {
            if ((*(arg1 + 0x30) >> 2 & 1) != 0) {
                puVar9[1] = *(arg1 + 0x28);
                iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x40,puVar9 + 0x10,0xc0);
                uVar1 = puVar9[0x10];
                uVar5 = uVar1;
                if ((iVar2 < 0) || (uVar1 != 0)) {
                    if (uVar1 < 0x44) {
                        uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                    }
                    else {
                        uVar6 = 0x800146c;
                    }
                    pcVar3 = "hdcp2_app_start_auth";
                    pcVar4 = "start_auth";
                    goto code_r0x08003150;
                }
                if (iVar2 != 0) goto code_r0x08003234;
                memcpy(*(arg1 + 0x68),puVar9 + 0x15,puVar9[0x14]);
                *(arg1 + 0x20) = puVar9[0x14];
                uVar7 = puVar9[0x13];
                *(arg1 + 4) = 0;
                *arg1 = uVar7;
                *(arg1 + 0x28) = puVar9[0x12];
                goto code_r0x08002dc4;
            }
            uVar6 = 0x8000c01;
        }
        pcVar3 = "hdcp2_app_start_auth";
        break;
    case 0x8002b80:
        if (*(arg1 + 0x38) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_tx_deinit";
            pcVar4 = "tx_deinit";
        }
        else {
            puVar9 = *(*(arg1 + 0x38) + 8);
            *puVar9 = 0x1002;
            if ((*(arg1 + 0x30) & 1) == 0) {
                pcVar4 = *(arg1 + 0x58);
                uVar6 = 0x80007cd;
                pcVar3 = "hdcp2_app_tx_deinit";
            }
            else {
                if ((*(arg1 + 0x30) >> 2 & 1) == 0) {
                    uVar6 = 0x8000c01;
                    pcVar3 = "hdcp2_app_tx_deinit";
                    break;
                }
                puVar9[1] = *(arg1 + 0x28);
                iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x40,puVar9 + 0x10,0x40);
                uVar1 = puVar9[0x10];
                uVar5 = uVar1;
                if ((iVar2 < 0) || (uVar1 != 0)) {
                    if (uVar1 < 0x44) {
                        uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                    }
                    else {
                        uVar6 = 0x800146c;
                    }
                    pcVar3 = "hdcp2_app_tx_deinit";
                    pcVar4 = "tx_deinit";
                    goto code_r0x08003150;
                }
                if (iVar2 != 0) goto code_r0x08003234;
                *(arg1 + 0x30) = *(arg1 + 0x30) & 0xfffffffb;
                if (*(arg1 + 0x4c) != '\0') {
code_r0x08002be8:
                    iVar2 = sym.hdcp2_app_unload(arg1);
                    goto code_r0x08003234;
                }
                if (*(arg1 + 0x38) == 0) {
                    uVar6 = 0x8000f88;
                    pcVar3 = "hdcp2_app_session_deinit";
                    pcVar4 = "session_deinit";
                }
                else {
                    puVar9 = *(*(arg1 + 0x38) + 8);
                    *puVar9 = 0x1011;
                    if ((*(arg1 + 0x30) & 1) != 0) {
                        if ((*(arg1 + 0x30) >> 1 & 1) == 0) {
                            uVar6 = 0x800154a;
                            pcVar3 = "hdcp2_app_session_deinit";
                            break;
                        }
                        puVar9[1] = *(arg1 + 0x48);
                        iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x40,puVar9 + 0x10,0x40);
                        uVar1 = puVar9[0x10];
                        uVar5 = uVar1;
                        if ((iVar2 < 0) || (uVar1 != 0)) {
                            if (uVar1 < 0x44) {
                                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                            }
                            else {
                                uVar6 = 0x800146c;
                            }
                            pcVar3 = "hdcp2_app_session_deinit";
                            pcVar4 = "session_deinit";
                            goto code_r0x08003150;
                        }
                        if (iVar2 != 0) goto code_r0x08003234;
                        *(arg1 + 0x30) = *(arg1 + 0x30) & 0xfffffffd;
                        goto code_r0x08002be8;
                    }
                    pcVar4 = *(arg1 + 0x58);
                    uVar6 = 0x80007cd;
                    pcVar3 = "hdcp2_app_session_deinit";
                }
            }
        }
        goto code_r0x08002fc0;
    case 0x8002bfc:
        if (*(arg1 + 0x38) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_process_msg";
            pcVar4 = "rcvd_msg";
            goto code_r0x08002fc0;
        }
        puVar9 = *(*(arg1 + 0x38) + 8);
        *puVar9 = 0x1003;
        if (*(arg1 + 8) != 0) {
            puVar9[2] = *(arg1 + 0x10);
            puVar9[1] = *(arg1 + 0x28);
            memcpy(puVar9 + 3,*(arg1 + 0x60),*(arg1 + 0x10));
            iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x240,puVar9 + 0x90,0xc0);
            uVar1 = puVar9[0x90];
            uVar5 = uVar1;
            if ((iVar2 < 0) || (uVar1 != 0)) {
                if (uVar1 < 0x44) {
                    uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
                }
                else {
                    uVar6 = 0x800146c;
                }
                pcVar3 = "hdcp2_app_process_msg";
                pcVar4 = "rcvd_msg";
                goto code_r0x08003150;
            }
            if (iVar2 != 0) goto code_r0x08003234;
            if (puVar9[0x94] == 1) {
                *(arg1 + 4) = 1;
            }
            memcpy(*(arg1 + 0x68),puVar9 + 0x96,puVar9[0x95]);
            *(arg1 + 0x20) = puVar9[0x95];
            uVar7 = puVar9[0x93];
code_r0x08002dc0:
            *arg1 = uVar7;
code_r0x08002dc4:
            iVar2 = 0;
            *(arg3 + 8) = *(arg1 + 8);
            *(arg3 + 0x10) = *(arg1 + 0x10);
            *(arg3 + 0x18) = *(arg1 + 0x18);
            *(arg3 + 0x20) = *(arg1 + 0x20);
            *arg3 = *arg1;
            *(arg3 + 4) = *(arg1 + 4);
            goto code_r0x08003234;
        }
        uVar6 = 0x80011f5;
        pcVar3 = "hdcp2_app_process_msg";
        break;
    case 0x8002c9c:
        if (*(arg1 + 0x38) == 0) {
            uVar6 = 0x8000f88;
            pcVar3 = "hdcp2_app_timeout";
            pcVar4 = "send_timeout";
            goto code_r0x08002fc0;
        }
        puVar9 = *(*(arg1 + 0x38) + 8);
        *puVar9 = 0x1004;
        iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x40,puVar9 + 0x10,0xc0);
        uVar1 = puVar9[0x10];
        uVar5 = uVar1;
        if ((-1 < iVar2) && (uVar1 == 0)) {
code_r0x08002da0:
            if (iVar2 != 0) goto code_r0x08003234;
            memcpy(*(arg1 + 0x68),puVar9 + 0x14,puVar9[0x13]);
            *(arg1 + 0x20) = puVar9[0x13];
            uVar7 = puVar9[0x12];
            goto code_r0x08002dc0;
        }
        if (uVar1 < 0x44) {
            uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
        }
        else {
            uVar6 = 0x800146c;
        }
        pcVar3 = "hdcp2_app_timeout";
        pcVar4 = "send_timeout";
code_r0x08003150:
        _printk(0x8001196,pcVar3,pcVar4,iVar2,uVar5,uVar6);
        goto code_r0x08003230;
    case 0x8002cf4:
        if (*(arg1 + 0x38) != 0) {
            puVar9 = *(*(arg1 + 0x38) + 8);
            *puVar9 = 0x1005;
            msleep(300);
            puVar9[1] = *(arg1 + 0x28);
            iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x40,puVar9 + 0x10,0x40);
            uVar1 = puVar9[0x10];
            uVar5 = uVar1;
            if ((-1 < iVar2) && (uVar1 == 0)) {
                if (iVar2 != 0) goto code_r0x08003234;
                *(arg1 + 0x30) = *(arg1 + 0x30) | 8;
                goto code_r0x08002dc4;
            }
            if (uVar1 < 0x44) {
                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
            }
            else {
                uVar6 = 0x800146c;
            }
            pcVar3 = "hdcp2_app_enable_encryption";
            pcVar4 = "set_hw_key";
            goto code_r0x08003150;
        }
        uVar6 = 0x8000f88;
        pcVar3 = "hdcp2_app_enable_encryption";
        pcVar4 = "set_hw_key";
        goto code_r0x08002fc0;
    case 0x8002d5c:
        if (*(arg1 + 0x38) != 0) {
            puVar9 = *(*(arg1 + 0x38) + 8);
            *puVar9 = 0x1006;
            puVar9[1] = *(arg1 + 0x28);
            iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar9,0x40,puVar9 + 0x10,0xc0);
            uVar1 = puVar9[0x10];
            uVar5 = uVar1;
            if ((-1 < iVar2) && (uVar1 == 0)) goto code_r0x08002da0;
            if (uVar1 < 0x44) {
                uVar6 = *(obj.qseecom_handle_g + uVar5 * 8);
            }
            else {
                uVar6 = 0x800146c;
            }
            pcVar3 = "hdcp2_app_query_stream";
            pcVar4 = "query_stream_type";
            goto code_r0x08003150;
        }
        uVar6 = 0x8000f88;
        pcVar3 = "hdcp2_app_query_stream";
        pcVar4 = "query_stream_type";
code_r0x08002fc0:
        _printk(uVar6,pcVar3,pcVar4);
        goto code_r0x08003230;
    }
    _printk(uVar6,pcVar3);
code_r0x08003230:
    iVar2 = -0x16;
code_r0x08003234:
    mutex_unlock(obj.hdcp2_mutex_g);
    return iVar2;
}


// ===== sym.hdcp2_open_stream @ 0x080032e0 (size 376) =====

int sym.hdcp2_open_stream(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80012af,"hdcp2_open_stream");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    if (*(arg1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_open_stream_helper","session_open_stream");
    }
    else {
        puVar4 = *(*(arg1 + 0x38) + 8);
        *puVar4 = 0x1014;
        if ((*(arg1 + 0x30) >> 1 & 1) == 0) {
            uVar3 = 0x800154a;
        }
        else {
            if ((*(arg1 + 0x30) >> 2 & 1) != 0) {
                puVar4[1] = *(arg1 + 0x48);
                puVar4[2] = arg2 & 0xff;
                puVar4[3] = arg3 & 0xff;
                puVar4[4] = 0;
                iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar4,0x40,puVar4 + 0x10,0x40);
                uVar1 = puVar4[0x10];
                if ((-1 < iVar2) && (uVar1 == 0)) {
                    if (iVar2 == 0) {
                        *arg4 = puVar4[0x12];
                    }
                    goto code_r0x0800342c;
                }
                if (uVar1 < 0x44) {
                    uVar3 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar3 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_open_stream_helper","session_open_stream",iVar2,uVar1,uVar3);
                goto code_r0x08003428;
            }
            uVar3 = 0x8000c01;
        }
        _printk(uVar3,"hdcp2_open_stream_helper");
    }
code_r0x08003428:
    iVar2 = -0x16;
code_r0x0800342c:
    mutex_unlock(obj.hdcp2_mutex_g);
    return iVar2;
}


// ===== sym.hdcp2_close_stream @ 0x08003458 (size 332) =====

int sym.hdcp2_close_stream(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    ulong uVar3;
    ulong *in_x18;
    uint *puVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80012af,"hdcp2_close_stream");
        return -0x16;
    }
    mutex_lock(obj.hdcp2_mutex_g);
    if (*(arg1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_close_stream_helper","session_close_stream");
    }
    else {
        puVar4 = *(*(arg1 + 0x38) + 8);
        *puVar4 = 0x1015;
        if ((*(arg1 + 0x30) >> 1 & 1) == 0) {
            uVar3 = 0x800154a;
        }
        else {
            if ((*(arg1 + 0x30) >> 2 & 1) != 0) {
                puVar4[1] = *(arg1 + 0x48);
                puVar4[2] = arg2;
                iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar4,0x40,puVar4 + 0x10,0x40);
                uVar1 = puVar4[0x10];
                if ((-1 < iVar2) && (uVar1 == 0)) goto code_r0x0800357c;
                if (uVar1 < 0x44) {
                    uVar3 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar3 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_close_stream_helper","session_close_stream",iVar2,uVar1,uVar3);
                goto code_r0x08003578;
            }
            uVar3 = 0x8000c01;
        }
        _printk(uVar3,"hdcp2_close_stream_helper");
    }
code_r0x08003578:
    iVar2 = -0x16;
code_r0x0800357c:
    mutex_unlock(obj.hdcp2_mutex_g);
    return iVar2;
}


// ===== sym.hdcp2_init @ 0x080035a4 (size 188) =====

int64_t sym.hdcp2_init(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = kmem_cache_alloc_trace(_mutex_lock,0xdc0,0x80);
    if (iVar2 != 0) {
        *(iVar2 + 0x50) = arg1;
        uVar1 = _mutex_lock;
        *(iVar2 + 0x58) = "hdcp2p2";
        iVar3 = kmem_cache_alloc_trace(uVar1,0xcc0,0x1000);
        *(iVar2 + 0x68) = iVar3;
        if (iVar3 != 0) {
            iVar4 = kmem_cache_alloc_trace(_mutex_lock,0xcc0,0x1000);
            *(iVar2 + 0x60) = iVar4;
            if (iVar4 != 0) {
                *(iVar2 + 8) = iVar4;
                *(iVar2 + 0x18) = iVar3;
                return iVar2;
            }
            kfree_sensitive(iVar3);
        }
        kfree_sensitive(iVar2);
    }
    return 0;
}


// ===== sym.hdcp2_deinit @ 0x08003660 (size 68) =====

void sym.hdcp2_deinit(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree_sensitive(*(arg1 + 0x68));
    kfree_sensitive(*(arg1 + 0x60));
    kfree_sensitive(arg1);
    return;
}


// ===== sym.hdcp1_init @ 0x080036a4 (size 96) =====

void sym.hdcp1_init(void)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    iVar1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
    if (iVar1 != 0) {
        *(iVar1 + 0x20) = "hdcp1";
    }
    return;
}


// ===== sym.hdcp1_deinit @ 0x08003704 (size 36) =====

void sym.hdcp1_deinit(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.hdcp1_feature_supported @ 0x08003728 (size 280) =====

uint sym.hdcp1_feature_supported(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint *puVar4;
    ulong *in_x18;
    uint uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.hdcp1_mutex_g);
    if (arg1 == 0) {
        _printk(0x8000dc9,"hdcp1_feature_supported");
    }
    else {
        if (*(arg1 + 0x10) != '\0') {
            uVar5 = 1;
            goto code_r0x080037d4;
        }
        iVar1 = sym.hdcp1_app_load(arg1);
        if ((iVar1 == 0) && ((*(arg1 + 0x18) & 1) != 0)) {
            iVar2 = *arg1;
            if (iVar2 == 0) {
                _printk(0x800151c,"hdcp1_verify_key");
                uVar5 = 0;
            }
            else {
                puVar4 = *(iVar2 + 8);
                *puVar4 = 0xcc;
                iVar6 = *(iVar2 + 8);
                iVar1 = qseecom_send_command(iVar2,puVar4,0x40,iVar6 + 0x40,0x40);
                if (iVar1 < 0) {
                    uVar3 = 0x8000a97;
                }
                else {
                    iVar1 = *(iVar6 + 0x44);
                    if (iVar1 == 0) {
                        uVar5 = 1;
                        *(arg1 + 0x10) = 1;
                        goto code_r0x080037b0;
                    }
                    uVar3 = 0x80004fa;
                }
                _printk(uVar3,"hdcp1_verify_key",iVar1);
                uVar5 = 0;
            }
code_r0x080037b0:
            sym.hdcp1_app_unload(arg1);
            goto code_r0x080037d4;
        }
    }
    uVar5 = 0;
code_r0x080037d4:
    mutex_unlock(obj.hdcp1_mutex_g);
    return uVar5;
}


// ===== sym.hdcp1_app_load @ 0x08003840 (size 268) =====

int sym.hdcp1_app_load(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x8000dc9,"hdcp1_app_load");
        iVar1 = 0;
    }
    else {
        iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        if (iVar2 == 0) {
            iVar1 = qseecom_start_app(obj.hdcp1_qseecom_handle_g,*(arg1 + 0x20),0x1000);
            if (iVar1 != 0) {
                _printk(0x80005b1,"hdcp1_app_load",*(arg1 + 0x20),iVar1);
                return iVar1;
            }
            iVar2 = CONCAT44(*0x8000004,_segment.ehdr);
        }
        *arg1 = iVar2;
        _segment.ehdr = _segment.ehdr + 1;
        iVar1 = qseecom_start_app(arg1 + 8,0x80010d1,0x1000);
        if (iVar1 != 0) {
            _printk(0x80013de,"hdcp1_app_load",0x80010d1,iVar1);
            *(arg1 + 8) = 0;
        }
        *(arg1 + 0x18) = *(arg1 + 0x18) | 1;
    }
    return iVar1;
}


// ===== sym.hdcp1_app_unload @ 0x0800394c (size 264) =====

void sym.hdcp1_app_unload(int64_t arg1)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (*arg1 == 0)) {
        _printk(0x8000dc9,"hdcp1_app_unload");
    }
    else if ((*(arg1 + 0x18) & 1) == 0) {
        _printk(0x8001131,"hdcp1_app_unload",*(arg1 + 0x20));
    }
    else {
        if ((*(arg1 + 8) != 0) && (iVar1 = qseecom_shutdown_app(), iVar1 != 0)) {
            _printk(0x80005df,"hdcp1_app_unload",0x80010d1,iVar1);
        }
        iVar1 = _segment.ehdr + -1;
        _segment.ehdr = CONCAT44(*0x8000004,iVar1);
        if (iVar1 == 0) {
            iVar1 = qseecom_shutdown_app(obj.hdcp1_qseecom_handle_g);
            if (iVar1 != 0) {
                _printk(0x8000815,"hdcp1_app_unload",*(arg1 + 0x20),iVar1);
                return;
            }
            _segment.ehdr = 0;
        }
        *arg1 = 0;
        *(arg1 + 0x18) = *(arg1 + 0x18) & 0xfffffffe;
    }
    return;
}


// ===== sym.hdcp1_set_enc @ 0x08003a54 (size 280) =====

ulong sym.hdcp1_set_enc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint *puVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar4 = *arg1, iVar4 == 0)) {
        uVar2 = 0x800151c;
    }
    else {
        if (*(arg1 + 0x10) != '\0') {
            if ((*(arg1 + 0x18) & 1) == 0) {
                _printk(0x80007cd,"hdcp1_set_enc",*(arg1 + 0x20));
                return 0xffffffea;
            }
            mutex_lock(obj.hdcp1_mutex_g);
            puVar3 = *(iVar4 + 8);
            *puVar3 = 0xcd;
            puVar3[1] = arg2 & 1;
            iVar5 = *(iVar4 + 8);
            iVar1 = qseecom_send_command(iVar4,puVar3,0x40,iVar5 + 0x40,0x40);
            if (iVar1 < 0) {
                uVar2 = 0x800045e;
            }
            else {
                iVar1 = *(iVar5 + 0x44);
                if (iVar1 == 0) {
                    mutex_unlock(obj.hdcp1_mutex_g);
                    return 0;
                }
                uVar2 = 0x800143f;
            }
            _printk(uVar2,"hdcp1_set_enc",iVar1);
            mutex_unlock(obj.hdcp1_mutex_g);
            return 0xffffffea;
        }
        uVar2 = 0x8000e24;
    }
    _printk(uVar2,"hdcp1_set_enc");
    return 0xffffffea;
}


// ===== sym.hdcp1_ops_notify @ 0x08003b6c (size 304) =====

ulong sym.hdcp1_ops_notify(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    ulong *in_x18;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (iVar2 = *(arg1 + 8), iVar2 == 0)) {
        uVar3 = 0x8000f43;
    }
    else {
        if (*(arg1 + 0x10) != '\0') {
            if ((*(arg1 + 0x18) & 1) == 0) {
                _printk(0x80007cd,"hdcp1_ops_notify",0x80010d1);
                return 0xffffffea;
            }
            puVar4 = *(iVar2 + 8);
            *puVar4 = 0x800200000001;
            *(puVar4 + 0xc4) = arg3 & 1;
            *(puVar4 + 0xac) = *arg2;
            *(puVar4 + 0x16) = *(arg2 + 4);
            *(puVar4 + 0xb4) = *(arg2 + 8);
            uVar1 = *(arg2 + 0xc);
            *(puVar4 + 0xbc) = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
            puVar4[8] = 0;
            puVar4[9] = 0;
            puVar4[10] = 0;
            puVar4[0xb] = 0;
            puVar4[0xc] = 0;
            *(puVar4 + 0x17) = uVar1;
            puVar4[0xd] = 0;
            puVar4[0xe] = 0;
            puVar4[0xf] = 0;
            puVar4[0x10] = 0;
            puVar4[0x11] = 0;
            puVar4[0x12] = 0;
            puVar4[0x13] = 0;
            puVar4[0x14] = 0;
            iVar5 = *(iVar2 + 8);
            qseecom_send_command(iVar2,puVar4,0x100,iVar5 + 0x100,0x40);
            if (*(iVar5 + 0x104) < 0) {
                _printk(0x800048e,"hdcp1_ops_notify");
                return 0xffffffea;
            }
            return 0;
        }
        uVar3 = 0x8000e24;
    }
    _printk(uVar3,"hdcp1_ops_notify");
    return 0xffffffea;
}


// ===== sym.hdcp1_start @ 0x08003c9c (size 796) =====

int sym.hdcp1_start(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint *puVar9;
    ulong *in_x18;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg2 == 0) || (arg3 == 0)) {
        uVar8 = 0x8001276;
code_r0x08003ee8:
        _printk(uVar8,"hdcp1_start");
        return -0x16;
    }
    if (arg1 == 0) {
        uVar8 = 0x8000dc9;
        goto code_r0x08003ee8;
    }
    if (*(arg1 + 0x10) == '\0') {
        uVar8 = 0x8000e51;
        goto code_r0x08003ee8;
    }
    if ((*(arg1 + 0x18) & 1) != 0) {
        return 0;
    }
    mutex_lock(obj.hdcp1_mutex_g);
    iVar6 = sym.hdcp1_app_load(arg1);
    if (iVar6 != 0) goto code_r0x08003cf8;
    iVar7 = *arg1;
    if (iVar7 == 0) {
        _printk(0x800151c,"hdcp1_set_key");
        iVar6 = -0x16;
    }
    else if ((*(arg1 + 0x18) & 1) == 0) {
        _printk(0x80007cd,"hdcp1_set_key",*(arg1 + 0x20));
        iVar6 = -0x16;
    }
    else {
        puVar9 = *(iVar7 + 8);
        *puVar9 = 0xca;
        iVar10 = *(iVar7 + 8);
        iVar6 = qseecom_send_command(iVar7,puVar9,0x40,iVar10 + 0x40,0x40);
        if (iVar6 < 0) {
            uVar8 = 0x800045e;
        }
        else {
            iVar6 = *(iVar10 + 0x44);
            if (iVar6 == 0) {
                uVar5 = (*(iVar10 + 0x48) & 0xff00ff00) >> 8 | (*(iVar10 + 0x48) & 0xff00ff) << 8;
                *arg2 = uVar5 >> 0x10 | uVar5 << 0x10;
                uVar1 = *(iVar10 + 0x4c);
                uVar2 = *(iVar10 + 0x4d);
                uVar3 = *(iVar10 + 0x4e);
                uVar4 = *(iVar10 + 0x4f);
                *arg3 = uVar1 << 0x18 | uVar2 << 0x10 | uVar3 << 8 | uVar4;
                uVar5 = *arg2;
                if ((uVar1 & 1) + (uVar1 >> 7) + (uVar2 & 1) + (uVar2 >> 7) + (uVar1 >> 1 & 1) + (uVar1 >> 2 & 1) +
                    (uVar1 >> 3 & 1) + (uVar1 >> 4 & 1) + (uVar1 >> 5 & 1) + (uVar1 >> 6 & 1) + (uVar3 & 1) +
                    (uVar3 >> 7) + (uVar2 >> 1 & 1) + (uVar2 >> 2 & 1) + (uVar2 >> 3 & 1) + (uVar2 >> 4 & 1) +
                    (uVar2 >> 5 & 1) + (uVar2 >> 6 & 1) + (uVar4 & 1) + (uVar4 >> 7) + (uVar3 >> 1 & 1) +
                    (uVar3 >> 2 & 1) + (uVar3 >> 3 & 1) + (uVar3 >> 4 & 1) + (uVar3 >> 5 & 1) + (uVar3 >> 6 & 1) +
                    (uVar5 & 1) + (uVar4 >> 1 & 1) + (uVar4 >> 2 & 1) + (uVar4 >> 3 & 1) + (uVar4 >> 4 & 1) +
                    (uVar4 >> 5 & 1) + (uVar4 >> 6 & 1) + (uVar5 >> 1 & 1) + (uVar5 >> 2 & 1) + (uVar5 >> 3 & 1) +
                    (uVar5 >> 4 & 1) + (uVar5 >> 5 & 1) + (uVar5 >> 6 & 1) + (uVar5 >> 7 & 1) == 0x14) {
                    mutex_unlock(obj.hdcp1_mutex_g);
                    return 0;
                }
                _printk(0x8000407,"hdcp1_validate_aksv");
                iVar6 = -0x16;
                _printk(0x80008d1,"hdcp1_set_key",0xffffffea);
                goto code_r0x08003fac;
            }
            uVar8 = 0x800060f;
        }
        _printk(uVar8,"hdcp1_set_key",iVar6);
        iVar6 = -0x7e;
    }
code_r0x08003fac:
    sym.hdcp1_app_unload(arg1);
code_r0x08003cf8:
    mutex_unlock(obj.hdcp1_mutex_g);
    return iVar6;
}


// ===== sym.hdcp1_stop @ 0x08003fb8 (size 128) =====

void sym.hdcp1_stop(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((arg1 == 0) || (*arg1 == 0)) || (*(arg1 + 8) == 0)) {
        _printk(0x8000dc9,"hdcp1_stop");
    }
    else if ((*(arg1 + 0x18) & 1) != 0) {
        mutex_lock(obj.hdcp1_mutex_g);
        sym.hdcp1_app_unload(arg1);
        mutex_unlock(obj.hdcp1_mutex_g);
    }
    return;
}


// ===== sym.hdcp2_app_init_legacy @ 0x08004038 (size 272) =====

int sym.hdcp2_app_init_legacy(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong in_x2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_app_init_legacy","init_v1");
    }
    else {
        puVar5 = *(*(arg1 + 0x38) + 8);
        puVar3 = puVar5 + 0x10;
        *puVar5 = 0x100b;
        if (*(arg1 + 0x4c) == '\0') {
            _printk(0x8000b8e,"hdcp2_app_init_legacy",in_x2,puVar3);
        }
        else {
            if ((*(arg1 + 0x30) & 1) != 0) {
                _printk(0x8000a0e,"hdcp2_app_init_legacy",in_x2,puVar3);
                return 0;
            }
            iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar5,0x40,puVar3,0xc0);
            uVar1 = puVar5[0x10];
            if ((-1 < iVar2) && (uVar1 == 0)) {
                return iVar2;
            }
            if (uVar1 < 0x44) {
                uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
            }
            else {
                uVar4 = 0x800146c;
            }
            _printk(0x8001196,"hdcp2_app_init_legacy","init_v1",iVar2,uVar1,uVar4);
        }
    }
    return -0x16;
}


// ===== sym.hdcp2_app_tx_init_legacy @ 0x08004148 (size 328) =====

int sym.hdcp2_app_tx_init_legacy(int64_t arg1)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    ulong in_x2;
    uint *puVar4;
    ulong uVar5;
    ulong *in_x18;
    uint *puVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_app_tx_init_legacy","tx_init_v1");
        iVar3 = -0x16;
    }
    else {
        puVar6 = *(*(arg1 + 0x38) + 8);
        puVar4 = puVar6 + 0x10;
        *puVar6 = 0x1001;
        if ((*(arg1 + 0x30) & 1) == 0) {
            _printk(0x8001601,"hdcp2_app_tx_init_legacy",in_x2,puVar4);
            iVar3 = -0x16;
        }
        else if ((*(arg1 + 0x30) >> 2 & 1) == 0) {
            iVar3 = qseecom_send_command(*(arg1 + 0x38),puVar6,0x40,puVar4,0xc0);
            uVar1 = puVar6[0x10];
            if ((iVar3 < 0) || (uVar1 != 0)) {
                if (uVar1 < 0x44) {
                    uVar5 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar5 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_app_tx_init_legacy","tx_init_v1",iVar3,uVar1,uVar5);
                iVar3 = -0x16;
            }
            else if (iVar3 == 0) {
                *(arg1 + 0x18) = puVar6 + 0x15;
                *(arg1 + 0x20) = puVar6[0x14];
                *arg1 = puVar6[0x13];
                uVar2 = puVar6[0x12];
                *(arg1 + 0x30) = *(arg1 + 0x30) | 4;
                *(arg1 + 0x28) = uVar2;
            }
        }
        else {
            _printk(0x800067d,"hdcp2_app_tx_init_legacy",in_x2,puVar4);
            iVar3 = 0;
        }
    }
    return iVar3;
}


// ===== sym.hdcp2_app_init @ 0x08004290 (size 340) =====

int sym.hdcp2_app_init(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong in_x2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_app_init","init");
        iVar2 = -0x16;
    }
    else {
        puVar5 = *(*(arg1 + 0x38) + 8);
        puVar3 = puVar5 + 0x10;
        *puVar5 = 0x100b;
        if (*(arg1 + 0x4c) == '\0') {
            if ((*(arg1 + 0x30) & 1) == 0) {
                puVar5[1] = 0x20100;
                iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar5,0x40,puVar3,0x40);
                uVar1 = puVar5[0x10];
                if ((iVar2 < 0) || (uVar1 != 0)) {
                    if (uVar1 < 0x44) {
                        uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
                    }
                    else {
                        uVar4 = 0x800146c;
                    }
                    _printk(0x8001196,"hdcp2_app_init","init",iVar2,uVar1,uVar4);
                    return -0x16;
                }
                if (iVar2 != 0) {
                    return iVar2;
                }
                if (*(puVar5 + 0x49) != '\x01') {
                    _printk(0x80012d3,"hdcp2_app_init",*(puVar5 + 0x49),1);
                    return -1;
                }
            }
            else {
                _printk(0x8000a0e,"hdcp2_app_init",in_x2,puVar3);
            }
            iVar2 = 0;
        }
        else {
            _printk(0x8000b8e,"hdcp2_app_init",in_x2,puVar3);
            iVar2 = -0x16;
        }
    }
    return iVar2;
}


// ===== sym.hdcp2_app_tx_init @ 0x080043e4 (size 312) =====

int sym.hdcp2_app_tx_init(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    ulong in_x2;
    uint *puVar3;
    ulong uVar4;
    ulong *in_x18;
    uint *puVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x38) == 0) {
        _printk(0x8000f88,"hdcp2_app_tx_init","tx_init");
        iVar2 = -0x16;
    }
    else {
        puVar5 = *(*(arg1 + 0x38) + 8);
        puVar3 = puVar5 + 0x10;
        *puVar5 = 0x1001;
        if ((*(arg1 + 0x30) >> 1 & 1) == 0) {
            _printk(0x800154a,"hdcp2_app_tx_init",in_x2,puVar3);
            iVar2 = -0x16;
        }
        else if ((*(arg1 + 0x30) >> 2 & 1) == 0) {
            puVar5[1] = *(arg1 + 0x48);
            iVar2 = qseecom_send_command(*(arg1 + 0x38),puVar5,0x40,puVar3,0x40);
            uVar1 = puVar5[0x10];
            if ((iVar2 < 0) || (uVar1 != 0)) {
                if (uVar1 < 0x44) {
                    uVar4 = *(obj.qseecom_handle_g + uVar1 * 8);
                }
                else {
                    uVar4 = 0x800146c;
                }
                _printk(0x8001196,"hdcp2_app_tx_init","tx_init",iVar2,uVar1,uVar4);
                iVar2 = -0x16;
            }
            else if (iVar2 == 0) {
                *(arg1 + 0x28) = puVar5[0x12];
                *(arg1 + 0x30) = *(arg1 + 0x30) | 4;
            }
        }
        else {
            _printk(0x800067d,"hdcp2_app_tx_init",in_x2,puVar3);
            iVar2 = 0;
        }
    }
    return iVar2;
}


// ===== sym.__cfi_check_fail @ 0x0800451c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004560

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
    //switch table (4 cases) at 0x80003c7
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004574);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08004668 (size 16) =====

ulong sym.init_module(int64_t arg1)

{
    return 0;
}


// ===== sym.cleanup_module @ 0x08004678 (size 12) =====

void sym.cleanup_module(void)

{
    return;
}

