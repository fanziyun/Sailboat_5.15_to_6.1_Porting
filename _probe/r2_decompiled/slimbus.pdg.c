// decompiled from slimbus by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 1284) =====

//WARNING: Switch with 1 destination removed at 0x08002318

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x21e95ed3a8afdc0a) {
        if (arg1 < -0x216446a1f50cec45) {
            if (arg1 < -0x57be845bca9148ef) {
                if (arg1 == -0x75aad5634c137604) {
                    pcVar2 = sym.slim_stream_prepare.cfi_jt;
                }
                else if (arg1 == -0x711344a4f390b2f1) {
                    pcVar2 = sym.__typeid__ZTSFvP11slim_deviceE_global_addr;
                }
                else {
                    if (arg1 != -0x59a85bcf63dffd48) goto code_r0x080022d8;
                    pcVar2 = sym.slim_device_match.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt;
                }
            }
            else if (arg1 == -0x57be845bca9148ef) {
                pcVar2 = sym.slim_device_probe.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt;
            }
            else {
                if (arg1 != -0x33b0d96f6ee79f4e) {
                    if ((arg1 == -0x2d1ef4d8549a89e5) && ((pcVar1 + -0x8001600 >> 3 | pcVar1 << 0x3d) < 3)) {
                        return;
                    }
                    goto code_r0x080022d8;
                }
                pcVar2 = sym.__typeid__ZTSFiP15slim_controllerP10slim_eaddrPhE_global_addr;
            }
        }
        else if (arg1 < 0x1d5c3ccf2306001) {
            if (arg1 == -0x216446a1f50cec45) {
                pcVar2 = sym.slim_ctrl_clk_pause.cfi_jt;
            }
            else if (arg1 == -0x101230e15fa66b7c) {
                pcVar2 = sym.slim_stream_allocate.cfi_jt;
            }
            else {
                if (arg1 != -0x79e8601f6976098) goto code_r0x080022d8;
                pcVar2 = sym.slim_get_device.cfi_jt;
            }
        }
        else if (arg1 < 0xf08bcc055827c44) {
            if (arg1 == 0x1d5c3ccf2306001) {
                pcVar2 = sym.slim_stream_unprepare_disconnect_port.cfi_jt;
            }
            else {
                if (arg1 != 0x2b3a43e29242445) goto code_r0x080022d8;
                pcVar2 = sym.init_module.cfi_jt;
            }
        }
        else if (arg1 == 0xf08bcc055827c44) {
            pcVar2 = sym.slim_msg_response.cfi_jt;
        }
        else {
            if (arg1 != 0x1d6541f22a6e1b86) goto code_r0x080022d8;
            pcVar2 = sym.of_slim_get_device.cfi_jt;
        }
    }
    else if (arg1 < 0x4ee4d43a14eca80a) {
        if (arg1 < 0x2d3f4915c22cd1ac) {
            if (arg1 == 0x21e95ed3a8afdc0a) {
                pcVar2 = sym.slim_free_txn_tid.cfi_jt;
            }
            else if (arg1 == 0x24d9376c47b2411a) {
                pcVar2 = sym.__slim_driver_register.cfi_jt;
            }
            else {
                if (arg1 != 0x2b908bfba9100fae) goto code_r0x080022d8;
                pcVar2 = sym.slim_driver_unregister.cfi_jt;
            }
        }
        else {
            if (arg1 < 0x4b4ad99a78e6dbc3) {
                if (arg1 == 0x2d3f4915c22cd1ac) {
                    pcVar2 = sym.__typeid__ZTSFiP15slim_controllerE_global_addr;
                }
                else {
                    if (arg1 != 0x3ef5e436b7244c58) goto code_r0x080022d8;
                    pcVar2 = sym.slim_read.cfi_jt;
                }
                goto code_r0x08001490;
            }
            if (arg1 == 0x4b4ad99a78e6dbc3) {
                if ((pcVar1 + -0x8001618 >> 3 | pcVar1 << 0x3d) < 4) {
                    return;
                }
                goto code_r0x080022d8;
            }
            if (arg1 != 0x4c83cf235a8ef09d) goto code_r0x080022d8;
            pcVar2 = sym.slim_xfer_msg.cfi_jt;
        }
    }
    else if (arg1 < 0x65e0fa8d11b0e621) {
        if (arg1 != 0x4ee4d43a14eca80a) {
            if (arg1 == 0x5b83a3fd302a5421) {
                pcVar2 = sym.slim_device_remove.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt;
            }
            else {
                if (arg1 != 0x616834158b2017a8) goto code_r0x080022d8;
                pcVar2 = sym.__typeid__ZTSFiP11slim_deviceE_global_addr;
            }
code_r0x08001490:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080022d8;
        }
        pcVar2 = sym.slim_writeb.cfi_jt;
    }
    else if (arg1 < 0x76182c68fb3000dc) {
        if (arg1 != 0x65e0fa8d11b0e621) {
            if (arg1 != 0x65e2fc7b0d9880a3) goto code_r0x080022d8;
            pcVar2 = sym.__typeid__ZTSFiP15slim_controllerP12slim_msg_txnE_global_addr;
            goto code_r0x08001490;
        }
        pcVar2 = sym.slim_readb.cfi_jt;
    }
    else if (arg1 == 0x76182c68fb3000dc) {
        pcVar2 = sym.slim_device_uevent.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080022d8;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080022d8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800232c);
    (*pcVar1)();
}


// ===== sym.slim_xfer_msg.cfi_jt @ 0x08001510 (size 8) =====

code * sym.slim_xfer_msg.cfi_jt(int64_t param_1,uint16_t *param_2,uint32_t param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong *arg1;
    int64_t arg1_00;
    ulong uVar8;
    int64_t iVar9;
    uchar uVar10;
    char cVar11;
    code *pcVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t unaff_x19;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [12];
    unkbyte10 Var16;
    uchar auVar17 [16];
    ulong uStack_1e8;
    ulong *puStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    uchar *puStack_1c0;
    ulong uStack_1b8;
    uchar auStack_1ac [4];
    int64_t iStack_1a8;
    ulong ***pppuStack_1a0;
    code *pcStack_198;
    uchar auStack_15c [4];
    ushort uStack_158;
    unkbyte6 Stack_156;
    ulong uStack_150;
    uchar *puStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    ulong uStack_118;
    ulong uStack_110;
    uint64_t uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    uint8_t auStack_d4 [4];
    ushort uStack_d0;
    unkbyte6 Stack_ce;
    uint8_t *puStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    uchar uStack_b0;
    ushort uStack_af;
    uchar uStack_ad;
    uint16_t uStack_ac;
    uchar uStack_aa;
    uchar uStack_a9;
    ushort *puStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uchar uStack_60;
    ushort uStack_5f;
    uchar uStack_5d;
    uint16_t uStack_5c;
    uchar uStack_5a;
    uchar uStack_59;
    uchar *puStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    char acStack_30 [3];
    uchar uStack_2d;
    uint16_t uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    uint16_t *puStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_18 = *(iVar13 + 0x5e0);
    uStack_29 = *(param_1 + 0x3a4);
    acStack_30[0] = '\x06';
    acStack_30[1] = 0;
    acStack_30[2] = param_3;
    uStack_2d = 0;
    pcVar12 = 0xffffffea;
    uStack_2a = 0;
    uStack_20 = 0;
    puStack_28 = param_2;
    if ((param_2 != NULL) && (puVar6 = *(param_1 + 0x398), puVar6 != NULL)) {
        uVar2 = param_2[1];
        if (uVar2 < 0x11) {
            uVar3 = *param_2;
            uVar5 = uVar3;
            if (uVar3 + uVar2 < 0xc01) {
                uVar1 = param_3 & 0xff;
                if (uVar1 < 0x60) {
                    if (uVar1 == 0x20) {
code_r0x080029a4:
                        iVar13 = *(param_2 + 4);
joined_r0x080029a8:
                        if (iVar13 != 0) {
                            uVar5 = uVar2;
                            if (uVar5 < 2) {
                                uVar5 = 1;
                            }
                            if (0xf < uVar5) {
                                uVar5 = 0x10;
                            }
                            uVar1 = param_3 & 0xff;
                            uStack_2c = obj.slim_slicesize.sizetocode[uVar5 - 1] | uVar3 << 4 | 8;
                            cVar11 = '\a';
                            if (uVar1 < 0x61) {
                                if ((uVar1 == 0x21) || (uVar1 == 0x28)) {
code_r0x08002a24:
                                    acStack_30[0] = uVar2 + 6;
                                    cVar11 = uVar2 + 7;
                                }
                            }
                            else if ((uVar1 == 0x68) || (uVar1 == 0x61)) goto code_r0x08002a24;
                            acStack_30[1] = 0;
                            if (((param_3 & 0xff) - 0x60 < 2) || ((param_3 & 0xff) - 0x20 < 2)) {
                                acStack_30[0] = cVar11;
                            }
                            uVar7 = sym.slim_do_transfer(puVar6,acStack_30);
                            pcVar12 = uVar7 & 0xffffffff;
                            goto code_r0x08002a5c;
                        }
                    }
                    else if (uVar1 == 0x21) {
code_r0x080029b0:
                        if (*(param_2 + 4) != 0) goto code_r0x080029b8;
                    }
                    else if (uVar1 == 0x28) goto code_r0x080029b8;
                }
                else {
                    if (uVar1 == 0x68) {
code_r0x080029b8:
                        iVar13 = *(param_2 + 8);
                        goto joined_r0x080029a8;
                    }
                    if (uVar1 == 0x61) goto code_r0x080029b0;
                    if (uVar1 == 0x60) goto code_r0x080029a4;
                }
            }
        }
        else {
            uVar5 = *param_2;
        }
        param_4 = param_3 & 0xff;
        param_3 = uVar5;
        _dev_err(*puVar6,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
        pcVar12 = 0xffffffea;
    }
code_r0x08002a5c:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_18) {
        return pcVar12;
    }
    auVar15 = __stack_chk_fail();
    puStack_58 = &uStack_80;
    *extraout_x18 = sym.slim_read;
    pcStack_38 = sym.slim_read;
    iVar13 = sp_el0;
    iStack_48 = *(iVar13 + 0x5e0);
    uStack_5f = 0x6000;
    uStack_59 = *(auVar15._0_8_ + 0x3a4);
    arg1 = *(auVar15._0_8_ + 0x398);
    uVar10 = param_3;
    uStack_80 = CONCAT12(uVar10,auVar15._8_2_);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_5d = 0;
    uStack_5a = 0;
    uStack_50 = 0;
    uStack_78 = param_4;
    puVar6 = &uStack_80;
    puStack_40 = &stack0xfffffffffffffff0;
    if (arg1 == NULL) {
code_r0x08002b8c:
        puStack_58 = puVar6;
        pcVar12 = 0xffffffea;
    }
    else {
        if (((0x10 < (param_3 & 0xff)) || (param_4 == 0)) ||
           (param_3 = param_3 & 0xff, 0xc00 < param_3 + (auVar15._8_4_ & 0xffff))) {
            uVar10 = auVar15[8];
            param_4 = 0x60;
            _dev_err(*arg1,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            puVar6 = puStack_58;
            goto code_r0x08002b8c;
        }
        if (param_3 < 2) {
            param_3 = 1;
        }
        if (0xf < param_3) {
            param_3 = 0x10;
        }
        uStack_60 = 7;
        uStack_5c = obj.slim_slicesize.sizetocode[param_3 - 1] | auVar15._8_4_ << 4 | 8;
        puStack_58 = &uStack_80;
        pcVar12 = sym.slim_do_transfer(arg1,&uStack_60);
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return pcVar12;
    }
    auVar15 = __stack_chk_fail(pcVar12);
    *extraout_x18_00 = sym.slim_readb;
    pcStack_88 = sym.slim_readb;
    iVar13 = sp_el0;
    iStack_98 = *(iVar13 + 0x5e0);
    puStack_c8 = auStack_d4;
    auStack_d4[0] = 0;
    uStack_af = 0x6000;
    uStack_a9 = *(auVar15._0_8_ + 0x3a4);
    puVar6 = *(auVar15._0_8_ + 0x398);
    _uStack_d0 = CONCAT62(1,auVar15._8_2_);
    uStack_c0 = 0;
    uStack_b8 = 0;
    puStack_a8 = &uStack_d0;
    uStack_ad = 0;
    uStack_aa = 0;
    uStack_a0 = 0;
    ppuStack_90 = &puStack_40;
    if (puVar6 == NULL) {
code_r0x08002c64:
        pcVar12 = 0xffffffea;
    }
    else {
        uVar5 = auVar15._8_4_ & 0xffff;
        if (0xbff < uVar5) {
            param_4 = 0x60;
            _dev_err(*puVar6,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            uVar10 = uVar5;
            goto code_r0x08002c64;
        }
        uStack_ac = auVar15._8_4_ << 4 | 8;
        uStack_b0 = 7;
        pcVar12 = sym.slim_do_transfer(puVar6,&uStack_b0);
        uVar10 = uVar5;
        if (-1 < pcVar12) {
            pcVar12 = auStack_d4[0];
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_98) {
        return pcVar12;
    }
    Var16 = __stack_chk_fail(pcVar12);
    *extraout_x18_01 = sym.slim_write;
    pcStack_e8 = sym.slim_write;
    iVar13 = sp_el0;
    iStack_f8 = *(iVar13 + 0x5e0);
    uStack_110 = 0;
    uStack_118 = CONCAT12(uVar10,Var16 >> 0x40);
    auStack_15c[0] = 0x68;
    uStack_100 = 0;
    uStack_108 = param_4;
    pppuStack_f0 = &ppuStack_90;
    pcVar12 = sym.slim_xfer_msg(Var16,&uStack_118,0x68);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_f8) {
        return pcVar12;
    }
    Var16 = __stack_chk_fail();
    *extraout_x18_02 = sym.slim_writeb;
    pcStack_128 = sym.slim_writeb;
    iVar13 = sp_el0;
    iStack_138 = *(iVar13 + 0x5e0);
    puStack_148 = auStack_15c;
    uVar5 = 0x68;
    uStack_150 = 0;
    _uStack_158 = CONCAT62(1,Var16 >> 0x40);
    uStack_140 = 0;
    pppuStack_130 = &pppuStack_f0;
    pcVar12 = sym.slim_xfer_msg(Var16,&uStack_158,0x68);
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_138) {
        return pcVar12;
    }
    auVar17 = __stack_chk_fail();
    arg1_00 = auVar17._0_8_;
    *extraout_x18_03 = sym.slim_ctrl_clk_pause;
    pcStack_198 = sym.slim_ctrl_clk_pause;
    iVar13 = sp_el0;
    iStack_1a8 = *(iVar13 + 0x5e0);
    puStack_1e0 = &uStack_1d0;
    auStack_1ac[0] = uVar5;
    puStack_1c0 = NULL;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e8 = 0xff00000003400003;
    uStack_1d8 = 0;
    pppuStack_1a0 = &pppuStack_130;
    if (((uVar5 & 0xff) < 3) || ((auVar17._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_00 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar17._8_8_ & 1) == 0) {
            if (*(arg1_00 + 0xb0) != 2) {
                iVar13 = arg1_00 + 0xa8;
                uVar8 = _raw_spin_lock_irqsave(iVar13);
                iVar14 = 0;
                while (iVar9 = idr_find(arg1_00 + 0x90,iVar14), iVar9 == 0) {
                    iVar14 = iVar14 + 1;
                    if (iVar14 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar13,uVar8);
                        *(arg1_00 + 0xb0) = 1;
                        uVar5 = sym.slim_do_transfer(arg1_00,&uStack_1e8);
                        pcVar12 = uVar5;
                        if (uVar5 != 0) goto code_r0x08002f18;
                        puStack_1c0 = auStack_1ac;
                        uStack_1d0._0_3_ = CONCAT12(1,uStack_1d0);
                        uStack_1e8._0_3_ = CONCAT12(0x4a,uStack_1e8);
                        uStack_1e8 = CONCAT71(uStack_1e8._1_7_,4);
                        uVar5 = sym.slim_do_transfer(arg1_00,&uStack_1e8);
                        pcVar12 = uVar5;
                        if (uVar5 != 0) goto code_r0x08002f18;
                        puStack_1c0 = NULL;
                        uStack_1e8._0_3_ = CONCAT12(0x5f,uStack_1e8);
                        uStack_1e8 = CONCAT71(uStack_1e8._1_7_,3);
                        uStack_1d0._0_3_ = CONCAT12(1,uStack_1d0);
                        uVar5 = sym.slim_do_transfer(arg1_00,&uStack_1e8);
                        pcVar12 = uVar5;
                        if (uVar5 != 0) goto code_r0x08002f18;
                        *(arg1_00 + 0xb0) = 2;
                        complete(arg1_00 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar13,uVar8);
                mutex_unlock(unaff_x19);
                pcVar12 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_00 + 0xb0) != 0) {
            iVar4 = wait_for_completion_timeout(arg1_00 + 0xb8,0x19);
            if (iVar4 != 0) {
                if (*(arg1_00 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar12 = *(arg1_00 + 0x130);
                if (pcVar12 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar12 + -0x80015a8 >> 3 | pcVar12 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar12 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar12 = NULL;
    }
    else {
        pcVar12 = 0xffffffea;
    }
code_r0x08002f40:
    while (iVar13 = sp_el0, *(iVar13 + 0x5e0) != iStack_1a8) {
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar12,0x8000420);
code_r0x08002e2c:
        uVar5 = (*pcVar12)(arg1_00);
        pcVar12 = uVar5;
        if (uVar5 == 0) {
code_r0x08002e3c:
            pcVar12 = NULL;
code_r0x08002f18:
            *(arg1_00 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar12;
}


// ===== sym.slim_device_uevent.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x08001518 (size 8) =====

void sym.slim_device_uevent.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(int64_t *param_1,ulong param_2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = param_1[0xe];
    if (iVar1 == 0) {
        iVar1 = *param_1;
    }
    add_uevent_var(param_2,"MODALIAS=slim:%s",iVar1);
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001520 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_unregister(obj.slimbus_bus);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001528 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_register(obj.slimbus_bus);
    return;
}


// ===== sym.slim_writeb.cfi_jt @ 0x08001530 (size 8) =====

code * sym.slim_writeb.cfi_jt(int64_t param_1,ushort param_2,uchar param_3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int64_t arg1;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_c8;
    ulong *puStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    uchar auStack_8c [4];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uchar auStack_3c [4];
    ushort uStack_38;
    unkbyte6 Stack_36;
    ulong uStack_30;
    uchar *puStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    puStack_28 = auStack_3c;
    uVar3 = 0x68;
    uStack_30 = 0;
    _uStack_38 = CONCAT62(1,param_2);
    uStack_20 = 0;
    auStack_3c[0] = param_3;
    pcVar4 = sym.slim_xfer_msg(param_1,&uStack_38,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    auVar8 = __stack_chk_fail();
    arg1 = auVar8._0_8_;
    *extraout_x18 = sym.slim_ctrl_clk_pause;
    pcStack_78 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_88 = *(iVar1 + 0x5e0);
    puStack_c0 = &uStack_b0;
    auStack_8c[0] = uVar3;
    puStack_a0 = NULL;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c8 = 0xff00000003400003;
    uStack_b8 = 0;
    puStack_80 = &stack0xfffffffffffffff0;
    if (((uVar3 & 0xff) < 3) || ((auVar8._8_8_ & 1) != 0)) {
        unaff_x19 = arg1 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar8._8_8_ & 1) == 0) {
            if (*(arg1 + 0xb0) != 2) {
                iVar1 = arg1 + 0xa8;
                uVar5 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar6 = idr_find(arg1 + 0x90,iVar7), iVar6 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar5);
                        *(arg1 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_c8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_a0 = auStack_8c;
                        uStack_b0._0_3_ = CONCAT12(1,uStack_b0);
                        uStack_c8._0_3_ = CONCAT12(0x4a,uStack_c8);
                        uStack_c8 = CONCAT71(uStack_c8._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_c8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_a0 = NULL;
                        uStack_c8._0_3_ = CONCAT12(0x5f,uStack_c8);
                        uStack_c8 = CONCAT71(uStack_c8._1_7_,3);
                        uStack_b0._0_3_ = CONCAT12(1,uStack_b0);
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_c8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1 + 0xb0) = 2;
                        complete(arg1 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_88) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_stream_unprepare_disconnect_port.cfi_jt @ 0x08001538 (size 8) =====

ulong sym.slim_stream_unprepare_disconnect_port.cfi_jt(int64_t param_1,uint64_t param_2,uint64_t param_3)

{
    uint *puVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint uStack_98;
    ushort uStack_94;
    uchar uStack_92;
    uchar uStack_91;
    ulong *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uchar *puStack_70;
    ulong uStack_68;
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    if (param_1 == 0) {
        _printk(0x80005ef,"slim_stream_unprepare_disconnect_port");
    }
    else {
        iVar6 = *(param_1 + 0x28);
        if ((iVar6 != 0) && (*(param_1 + 0x24) != 0)) {
            if (((param_2 & 1) != 0) && (0 < *(param_1 + 0x24))) {
                iVar8 = 0;
                iVar9 = 1;
                while( true ) {
                    iVar7 = *(param_1 + 8);
                    puVar1 = iVar6 + iVar8;
                    uStack_80 = 0x10000;
                    uStack_78 = 0;
                    uStack_68 = 0;
                    uStack_91 = *(iVar7 + 0x3a4);
                    uStack_98 = 0x140005;
                    uStack_94 = 0;
                    uStack_92 = 0;
                    uStack_88 = 0;
                    auStack_5c[0] = *puVar1;
                    puVar1[8] = 0;
                    puVar1[2] = 0;
                    puStack_90 = &uStack_80;
                    puStack_70 = auStack_5c;
                    sym.slim_do_transfer(*(iVar7 + 0x398),&uStack_98);
                    if (*(param_1 + 0x24) <= iVar9) break;
                    iVar6 = *(param_1 + 0x28);
                    iVar9 = iVar9 + 1;
                    iVar8 = iVar8 + 0x24;
                }
            }
            if ((param_3 & 1) == 0) {
                uVar3 = 0;
            }
            else {
                kfree(*(param_1 + 0x28));
                uVar3 = 0;
                *(param_1 + 0x28) = 0;
                *(param_1 + 0x24) = 0;
            }
            goto code_r0x08003d80;
        }
        _printk(0x800087c,"slim_stream_unprepare_disconnect_port");
    }
    uVar3 = 0xffffffea;
code_r0x08003d80:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.slim_stream_free;
    if (puVar4 == NULL) {
        _printk(0x80005ef,"slim_stream_free");
        uVar3 = 0xffffffea;
    }
    else {
        iVar6 = puVar4[1];
        _raw_spin_lock(iVar6 + 0x3b8);
        uVar5 = __list_del_entry_valid(puVar4 + 6);
        if ((uVar5 & 1) != 0) {
            iVar9 = puVar4[6];
            piVar2 = puVar4[7];
            *(iVar9 + 8) = piVar2;
            *piVar2 = iVar9;
        }
        puVar4[6] = 0xdead000000000100;
        puVar4[7] = 0xdead000000000122;
        _raw_spin_unlock(iVar6 + 0x3b8);
        kfree(*puVar4);
        kfree(puVar4);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.slim_ctrl_clk_pause.cfi_jt @ 0x08001540 (size 8) =====

code * sym.slim_ctrl_clk_pause.cfi_jt(int64_t param_1,uint64_t param_2,uint8_t param_3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t unaff_x19;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint8_t *puStack_60;
    ulong uStack_58;
    uint8_t auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    puStack_80 = &uStack_70;
    puStack_60 = NULL;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_88 = 0xff00000003400003;
    uStack_78 = 0;
    auStack_4c[0] = param_3;
    if ((param_3 < 3) || ((param_2 & 1) != 0)) {
        unaff_x19 = param_1 + 0xd8;
        mutex_lock(unaff_x19);
        if ((param_2 & 1) == 0) {
            if (*(param_1 + 0xb0) != 2) {
                iVar1 = param_1 + 0xa8;
                uVar4 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar5 = idr_find(param_1 + 0x90,iVar7), iVar5 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar4);
                        *(param_1 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(param_1,&uStack_88);
                        pcVar6 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_60 = auStack_4c;
                        uStack_70._0_3_ = CONCAT12(1,uStack_70);
                        uStack_88._0_3_ = CONCAT12(0x4a,uStack_88);
                        uStack_88 = CONCAT71(uStack_88._1_7_,4);
                        uVar3 = sym.slim_do_transfer(param_1,&uStack_88);
                        pcVar6 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_60 = NULL;
                        uStack_88._0_3_ = CONCAT12(0x5f,uStack_88);
                        uStack_88 = CONCAT71(uStack_88._1_7_,3);
                        uStack_70._0_3_ = CONCAT12(1,uStack_70);
                        uVar3 = sym.slim_do_transfer(param_1,&uStack_88);
                        pcVar6 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(param_1 + 0xb0) = 2;
                        complete(param_1 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                mutex_unlock(unaff_x19);
                pcVar6 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(param_1 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(param_1 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(param_1 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar6 = *(param_1 + 0x130);
                if (pcVar6 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar6 + -0x80015a8 >> 3 | pcVar6 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar6 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar6 = NULL;
    }
    else {
        pcVar6 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar6,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar6)(param_1);
        pcVar6 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar6 = NULL;
code_r0x08002f18:
            *(param_1 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar6;
}


// ===== sym.slim_device_probe.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x08001548 (size 8) =====

ulong sym.slim_device_probe.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(int64_t param_1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(*(param_1 + 0x88) + -0x20);
    if (1 < (pcVar3 + -0x80015b8 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0x616834158b2017a8,pcVar3,0x8000360);
    }
    uVar2 = (*pcVar3)(param_1);
    if (uVar2 == 0) {
        if ((*(param_1 + 0x3a5) == '\0') && (iVar1 = sym.slim_device_alloc_laddr(param_1,0), iVar1 != 0)) {
            _dev_err(param_1,"Failed to get logical address\n");
            uVar2 = 0xfffffdfb;
        }
        else {
            if (*(param_1 + 0x3a0) != 1) {
                *(param_1 + 0x3a0) = 1;
                if ((*(param_1 + 0x88) != 0) && (pcVar3 = *(*(param_1 + 0x88) + -8), pcVar3 != NULL)) {
                    __cfi_slowpath_diag(0xcf049ca126c6d869,pcVar3,0x80003a0);
                    (*pcVar3)(param_1,*(param_1 + 0x3a0));
                }
            }
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.slim_readb.cfi_jt @ 0x08001550 (size 8) =====

code * sym.slim_readb.cfi_jt(int64_t param_1,uint32_t param_2,uchar param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1;
    code *pcVar4;
    int64_t arg1_00;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    int64_t iVar7;
    ulong unaff_x30;
    unkbyte10 Var8;
    uchar auVar9 [16];
    ulong uStack_168;
    ulong *puStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uchar *puStack_140;
    ulong uStack_138;
    uchar auStack_12c [4];
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    uchar auStack_dc [4];
    ushort uStack_d8;
    unkbyte6 Stack_d6;
    ulong uStack_d0;
    uchar *puStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint8_t auStack_54 [4];
    ushort uStack_50;
    unkbyte6 Stack_4e;
    uint8_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uchar uStack_30;
    ushort uStack_2f;
    uchar uStack_2d;
    uint16_t uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    ushort *puStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    puStack_48 = auStack_54;
    auStack_54[0] = 0;
    uStack_2f = 0x6000;
    uStack_29 = *(param_1 + 0x3a4);
    arg1 = *(param_1 + 0x398);
    _uStack_50 = CONCAT62(1,param_2);
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_28 = &uStack_50;
    uStack_2d = 0;
    uStack_2a = 0;
    uStack_20 = 0;
    if (arg1 == NULL) {
code_r0x08002c64:
        pcVar4 = 0xffffffea;
    }
    else {
        uVar3 = param_2 & 0xffff;
        if (0xbff < uVar3) {
            param_4 = 0x60;
            _dev_err(*arg1,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            param_3 = uVar3;
            goto code_r0x08002c64;
        }
        uStack_2c = param_2 << 4 | 8;
        uStack_30 = 7;
        pcVar4 = sym.slim_do_transfer(arg1,&uStack_30);
        param_3 = uVar3;
        if (-1 < pcVar4) {
            pcVar4 = auStack_54[0];
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    Var8 = __stack_chk_fail(pcVar4);
    *extraout_x18 = sym.slim_write;
    pcStack_68 = sym.slim_write;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_90 = 0;
    uStack_98 = CONCAT12(param_3,Var8 >> 0x40);
    auStack_dc[0] = 0x68;
    uStack_80 = 0;
    uStack_88 = param_4;
    puStack_70 = &stack0xfffffffffffffff0;
    pcVar4 = sym.slim_xfer_msg(Var8,&uStack_98,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return pcVar4;
    }
    Var8 = __stack_chk_fail();
    *extraout_x18_00 = sym.slim_writeb;
    pcStack_a8 = sym.slim_writeb;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    puStack_c8 = auStack_dc;
    uVar3 = 0x68;
    uStack_d0 = 0;
    _uStack_d8 = CONCAT62(1,Var8 >> 0x40);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    pcVar4 = sym.slim_xfer_msg(Var8,&uStack_d8,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return pcVar4;
    }
    auVar9 = __stack_chk_fail();
    arg1_00 = auVar9._0_8_;
    *extraout_x18_01 = sym.slim_ctrl_clk_pause;
    pcStack_118 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_128 = *(iVar1 + 0x5e0);
    puStack_160 = &uStack_150;
    auStack_12c[0] = uVar3;
    puStack_140 = NULL;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_168 = 0xff00000003400003;
    uStack_158 = 0;
    ppuStack_120 = &ppuStack_b0;
    if (((uVar3 & 0xff) < 3) || ((auVar9._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_00 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar9._8_8_ & 1) == 0) {
            if (*(arg1_00 + 0xb0) != 2) {
                iVar1 = arg1_00 + 0xa8;
                uVar5 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar6 = idr_find(arg1_00 + 0x90,iVar7), iVar6 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar5);
                        *(arg1_00 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_168);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_140 = auStack_12c;
                        uStack_150._0_3_ = CONCAT12(1,uStack_150);
                        uStack_168._0_3_ = CONCAT12(0x4a,uStack_168);
                        uStack_168 = CONCAT71(uStack_168._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_168);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_140 = NULL;
                        uStack_168._0_3_ = CONCAT12(0x5f,uStack_168);
                        uStack_168 = CONCAT71(uStack_168._1_7_,3);
                        uStack_150._0_3_ = CONCAT12(1,uStack_150);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_168);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1_00 + 0xb0) = 2;
                        complete(arg1_00 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_00 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1_00 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1_00 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1_00 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_128) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1_00);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1_00 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_get_device.cfi_jt @ 0x08001558 (size 8) =====

int64_t sym.slim_get_device.cfi_jt(ulong *param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = device_find_child(*param_1,param_2,sym.slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
    if (iVar1 == 0) {
        iVar2 = sym.slim_alloc_device(param_1,param_2,0);
        iVar1 = -0xc;
        if (iVar2 != 0) {
            iVar1 = iVar2;
        }
    }
    return iVar1;
}


// ===== sym.slim_msg_response.cfi_jt @ 0x08001560 (size 8) =====

void sym.slim_msg_response.cfi_jt(int64_t *param_1,ulong param_2,uchar param_3,uchar param_4)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + 0x15;
    uVar2 = _raw_spin_lock_irqsave(piVar1);
    iVar3 = idr_find(param_1 + 0x12,param_3);
    _raw_spin_unlock_irqrestore(piVar1,uVar2);
    if (iVar3 != 0) {
        iVar4 = *(iVar3 + 8);
        if ((iVar4 == 0) || (*(iVar4 + 8) == 0)) {
            _dev_err(*param_1,"Got response to invalid TID:%d, len:%d\n",param_3,param_4);
        }
        else {
            uVar2 = _raw_spin_lock_irqsave(piVar1);
            idr_remove(param_1 + 0x12,*(iVar3 + 6));
            _raw_spin_unlock_irqrestore(piVar1,uVar2);
            __memcpy_fromio(*(iVar4 + 8),param_2,param_4);
            if (*(iVar3 + 0x10) != 0) {
                complete();
            }
            iVar3 = *param_1;
            uVar2 = ktime_get_mono_fast_ns();
            *(iVar3 + 0x218) = uVar2;
            __pm_runtime_suspend(*param_1,0xd);
        }
    }
    return;
}


// ===== sym.of_slim_get_device.cfi_jt @ 0x08001568 (size 8) =====

void sym.of_slim_get_device.cfi_jt(ulong *param_1,ulong param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_find_child(*param_1,param_2,sym.of_slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
    return;
}


// ===== sym.__slim_driver_register.cfi_jt @ 0x08001570 (size 8) =====

ulong sym.__slim_driver_register.cfi_jt(int64_t *param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((param_1[9] == 0) && (param_1[0x1a] == 0)) || (*param_1 == 0)) {
        uVar1 = 0xffffffea;
    }
    else {
        param_1[5] = obj.slimbus_bus;
        param_1[6] = param_2;
        uVar1 = driver_register(param_1 + 4);
    }
    return uVar1;
}


// ===== sym.slim_device_remove.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x08001578 (size 8) =====

void sym.slim_device_remove.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(param_1 + 0x88) != 0) && (pcVar1 = *(*(param_1 + 0x88) + -0x18), pcVar1 != NULL)) {
        if (pcVar1 != sym.__typeid__ZTSFvP11slim_deviceE_global_addr) {
            __cfi_slowpath_diag(0x8eecbb5b0c6f4d0f,pcVar1,0x8000380);
        }
        (*pcVar1)(param_1);
    }
    return;
}


// ===== sym.slim_dev_release.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x08001580 (size 8) =====

void sym.slim_dev_release.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.slim_stream_prepare.cfi_jt @ 0x08001588 (size 8) =====

int sym.slim_stream_prepare.cfi_jt(int64_t param_1,code *param_2)

{
    code *pcVar1;
    char cVar2;
    uchar auVar3 [16];
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint uVar9;
    uint64_t uVar10;
    uint *puVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int iVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    code *arg1;
    code *unaff_x21;
    int64_t unaff_x22;
    ulong unaff_x23;
    int64_t unaff_x24;
    ulong unaff_x25;
    ulong unaff_x26;
    ulong unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    uint uStack_158;
    ushort uStack_154;
    uchar uStack_152;
    uchar uStack_151;
    ulong *puStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    uint *puStack_130;
    ulong uStack_128;
    uint uStack_11c;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    int64_t iStack_e0;
    ulong uStack_d8;
    int64_t iStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    int64_t iStack_b8;
    uint uStack_a8;
    ushort uStack_a4;
    uchar uStack_a2;
    uchar uStack_a1;
    ulong *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uchar uStack_6c;
    uchar uStack_6b;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if ((param_1 == 0) || (unaff_x20 = param_2, param_2 == NULL)) {
        _printk(0x8000667,"slim_stream_prepare");
        iVar7 = -0x16;
    }
    else {
        unaff_x19 = param_1;
        if (*(param_1 + 0x28) == 0) {
            unaff_x22 = *(*(param_1 + 8) + 0x398);
            uVar6 = __sw_hweight32(*(param_2 + 0x18));
            unaff_x21 = uVar6;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar6;
            if (SUB168(auVar3 * ZEXT816(0x24),8) == 0) {
                iVar8 = __kmalloc((uVar6 + uVar6 * 8) * 4,0xdc0);
                *(param_1 + 0x28) = iVar8;
                if (iVar8 == 0) {
                    iVar7 = -0xc;
                }
                else {
                    *(param_1 + 0x24) = uVar6;
                    *(param_1 + 0x18) = *param_2;
                    *(param_1 + 0x1c) = *(param_2 + 4);
                    *(param_1 + 0x10) = *(param_2 + 0x20);
                    uVar6 = *(*(unaff_x22 + 0x48) + 0x39c);
                    uVar17 = 0;
                    if (uVar6 != 0) {
                        uVar17 = *param_2 / uVar6;
                    }
                    if (*param_2 == uVar17 * uVar6) {
                        *(param_1 + 0x14) = 0;
                    }
                    else {
                        if (*(param_2 + 0x20) == 0) {
                            uVar9 = 2;
                        }
                        else {
                            uVar9 = 3;
                        }
                        *(param_1 + 0x14) = uVar9;
                    }
                    uVar6 = *(*(unaff_x22 + 0x48) + 0x39c);
                    uVar17 = 0;
                    if (uVar6 != 0) {
                        uVar17 = *param_2 / uVar6;
                    }
                    *(param_1 + 0x20) = uVar17;
                    uVar10 = *(param_2 + 0x18);
                    uVar19 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                    unaff_x24 = 0x20;
                    if (uVar10 != 0) {
                        unaff_x24 = LZCOUNT((uVar19 >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10) << 0x20);
                    }
                    if (unaff_x24 < 0x20) {
                        iVar7 = 0;
                        unaff_x21 = 0x24;
                        unaff_x22 = 0x15888;
                        unaff_x25 = 0xac44;
                        unaff_x27 = 1;
                        unaff_x23 = 0xffffffffffffffff;
                        unaff_x26 = 0x20;
                        while( true ) {
                            puVar11 = iVar8 + iVar7 * 0x24;
                            *puVar11 = unaff_x24;
                            puVar11[2] = 0;
                            uVar6 = *param_2;
                            if ((uVar6 == 0x15888) || (uVar6 == 0xac44)) {
                                uVar19 = uVar6 / 0x2b11;
                            }
                            else {
                                uVar19 = uVar6 / 4000;
                            }
                            iVar15 = 0;
                            unaff_x28 = iVar7;
                            bVar5 = true;
                            do {
                                bVar4 = bVar5;
                                uVar17 = uVar19;
                                if ((uVar19 & 1) == 0) {
                                    do {
                                        uVar18 = uVar19;
                                        uVar17 = uVar18 >> 1;
                                        uVar19 = uVar17;
                                        iVar15 = iVar15 + 1;
                                    } while ((uVar18 >> 1 & 1) == 0);
                                }
                                uVar18 = uVar17;
                                if (3 < uVar17) {
                                    uVar18 = uVar17 + 1;
                                }
                                uVar19 = uVar18;
                                bVar5 = false;
                            } while (3 < uVar17);
                            bVar5 = (uVar6 == 0x15888) != (uVar6 == 0xac44);
                            uVar6 = iVar15 + (bVar5 || uVar18 != 1);
                            uVar17 = 8;
                            if (!bVar5) {
                                uVar17 = (uVar18 == 1) << 4;
                            }
                            uVar17 = uVar6 | uVar17;
                            puStack_80 = &uStack_6c;
                            uVar18 = uVar17 | 0x80;
                            if (!bVar4) {
                                uVar18 = uVar17;
                            }
                            iVar8 = iVar8 + unaff_x28 * 0x24;
                            if (7 < uVar6) {
                                uVar18 = 0;
                            }
                            *(iVar8 + 0x10) = uVar18;
                            *(iVar8 + 0xc) = *(*(param_2 + 0x10) + unaff_x28 * 4);
                            *(iVar8 + 0x18) = 0;
                            *(iVar8 + 0x20) = 1;
                            *(iVar8 + 4) = *(param_2 + 0x20) != 0;
                            uStack_78 = 0;
                            uStack_90 = 0x20000;
                            uStack_88 = 0;
                            iVar16 = *(param_1 + 8);
                            uStack_a4 = 0;
                            uStack_a8 = 0x100006;
                            uStack_a1 = *(iVar16 + 0x3a4);
                            uStack_a2 = 0;
                            puStack_a0 = &uStack_90;
                            uStack_98 = 0;
                            if (*(iVar8 + 4) == 0) {
                                uStack_a8 = 0x110006;
                            }
                            _uStack_6c = CONCAT11(*(iVar8 + 0xc),*puVar11);
                            puVar11[2] = 1;
                            *(iVar8 + 0x20) = 2;
                            sym.slim_do_transfer(*(iVar16 + 0x398),&uStack_a8);
                            uVar19 = (unaff_x24 << 0x20) + 0x100000000;
                            if (0x1f00000000 < uVar19) break;
                            uVar6 = -1L << (uVar19 >> 0x20 & 0x3f) & *(param_2 + 0x18);
                            uVar19 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                            unaff_x24 = 0x20;
                            if (uVar6 != 0) {
                                unaff_x24 = LZCOUNT((uVar19 >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10) << 0x20);
                            }
                            if (0x1f < unaff_x24) break;
                            iVar8 = *(param_1 + 0x28);
                            iVar7 = iVar7 + 1;
                        }
                    }
                    iVar7 = 0;
                }
            }
            else {
                iVar7 = -0xc;
                *(param_1 + 0x28) = 0;
            }
        }
        else {
            _dev_err(*(param_1 + 8),"Stream already Prepared\n");
            iVar7 = -0x16;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar7;
    }
    iVar16 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.slim_stream_enable;
    pcStack_108 = sym.slim_stream_enable;
    iVar8 = sp_el0;
    iStack_118 = *(iVar8 + 0x5e0);
    uStack_170 = *0x8000d90;
    uStack_168 = *0x8000d98;
    uStack_160 = *0x8000da0;
    puStack_110 = &stack0xffffffffffffffa0;
    iStack_100 = unaff_x28;
    uStack_f8 = unaff_x27;
    uStack_f0 = unaff_x26;
    uStack_e8 = unaff_x25;
    iStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    iStack_d0 = unaff_x22;
    pcStack_c8 = unaff_x21;
    pcStack_c0 = unaff_x20;
    iStack_b8 = unaff_x19;
    if (iVar16 == 0) {
        _printk(0x80005ef,"slim_stream_enable");
        iVar7 = -0x16;
    }
    else {
        arg1 = *(*(iVar16 + 8) + 0x398);
        if (*(arg1 + 0x120) != 0) {
            pcVar1 = arg1 + 0x140;
            mutex_lock(pcVar1);
            unaff_x20 = *(arg1 + 0x120);
            unaff_x21 = pcVar1;
            if (3 < (unaff_x20 + -0x8001618 >> 3 | unaff_x20 << 0x3d)) goto code_r0x080038c0;
            goto code_r0x080034cc;
        }
        iVar7 = sym.slim_do_transfer(arg1,&uStack_170);
        unaff_x19 = iVar16;
        unaff_x20 = arg1;
        if (iVar7 == 0) {
            if (0 < *(iVar16 + 0x24)) {
                unaff_x21 = NULL;
                iVar8 = 0;
                unaff_x20 = 0x500008;
                do {
                    iVar13 = *(iVar16 + 8);
                    iVar7 = *(iVar16 + 0x20);
                    uStack_140 = 0x40000;
                    uStack_138 = 0;
                    iVar12 = *(iVar16 + 0x28);
                    uStack_128 = 0;
                    uStack_151 = *(iVar13 + 0x3a4);
                    uStack_158 = 0x500008;
                    uStack_154 = 0;
                    uStack_152 = 0;
                    uVar9 = 0xffffffea;
                    uStack_148 = 0;
                    if (0xbf < iVar7) {
                        if (iVar7 < 0x16c) {
                            if (iVar7 == 0xc0) {
                                iVar14 = 0x10;
                            }
                            else {
                                if (iVar7 != 0x100) goto code_r0x080036e0;
                                iVar14 = 8;
                            }
                        }
                        else if (iVar7 == 0x16c) {
                            iVar14 = 0x11;
                        }
                        else if (iVar7 == 0x200) {
                            iVar14 = 9;
                        }
                        else {
                            if (iVar7 != 0x300) goto code_r0x080036e0;
                            iVar14 = 0x12;
                        }
                        goto code_r0x080036cc;
                    }
                    iVar14 = 0;
                    switch(iVar7) {
                    case 1:
                        break;
                    case 2:
                        iVar14 = 1;
                        break;
                    case 3:
                        iVar14 = 10;
                        break;
                    case 4:
                        iVar14 = 2;
                        break;
                    default:
                        goto code_r0x080036e0;
                    case 6:
                        iVar14 = 0xb;
                        break;
                    case 8:
                        iVar14 = 3;
                        break;
                    case 0xc:
                        iVar14 = 0xc;
                        break;
                    case 0x10:
                        iVar14 = 4;
                        break;
                    case 0x18:
                        iVar14 = 0xd;
                        break;
                    case 0x20:
                        iVar14 = 5;
                        break;
                    case 0x30:
                        iVar14 = 0xe;
                        break;
                    case 0x40:
                        iVar14 = 6;
                        break;
                    case 0x60:
                        iVar14 = 0xf;
                        break;
                    case 0x80:
                        iVar14 = 7;
                    }
code_r0x080036cc:
                    uVar9 = *(iVar14 * 0x10 + 0x8000a54);
code_r0x080036e0:
                    *(unaff_x21 + iVar12 + 0x14) = uVar9;
                    cVar2 = *(iVar16 + 0x1c) >> 2;
                    if (*(iVar16 + 0x14) != 0) {
                        cVar2 = cVar2 + '\x01';
                    }
                    uStack_11c = CONCAT13(cVar2,CONCAT12(uVar9 >> 8 & 0xf | *(iVar16 + 0x14) << 4,
                                                          CONCAT31(uVar9,*(unaff_x21 + iVar12 + 0xc))));
                    *(unaff_x21 + iVar12 + 0x20) = 3;
                    puStack_150 = &uStack_140;
                    puStack_130 = &uStack_11c;
                    sym.slim_do_transfer(*(iVar13 + 0x398),&uStack_158);
                    iVar13 = *(iVar16 + 8);
                    uStack_140 = 0x40000;
                    uStack_138 = 0;
                    uStack_128 = 0;
                    uStack_151 = *(iVar13 + 0x3a4);
                    uStack_158 = 0x510008;
                    uStack_154 = 0;
                    uStack_152 = 0;
                    uStack_148 = 0;
                    uStack_11c._0_2_ = CONCAT11(*(unaff_x21 + iVar12 + 0x10),*(unaff_x21 + iVar12 + 0xc));
                    if (*(iVar16 + 0x14) != 0) {
                        uStack_11c._0_2_ = CONCAT11(*(unaff_x21 + iVar12 + 0x10),*(unaff_x21 + iVar12 + 0xc)) | 0x8000;
                    }
                    uStack_11c = CONCAT13(*(iVar16 + 0x1c) >> 2,
                                          CONCAT12(*(unaff_x21 + iVar12 + 0x18) | *(unaff_x21 + iVar12 + 0x1c) << 4,
                                                   uStack_11c));
                    *(unaff_x21 + iVar12 + 0x20) = 4;
                    puStack_150 = &uStack_140;
                    puStack_130 = &uStack_11c;
                    sym.slim_do_transfer(*(iVar13 + 0x398),&uStack_158);
                    iVar8 = iVar8 + 1;
                    unaff_x21 = unaff_x21 + 0x24;
                } while (iVar8 < *(iVar16 + 0x24));
                if (0 < *(iVar16 + 0x24)) {
                    unaff_x21 = NULL;
                    iVar8 = 0;
                    do {
                        iVar13 = *(iVar16 + 8);
                        uStack_138 = 0;
                        uStack_158 = 0x540005;
                        uStack_154 = 0;
                        uStack_151 = *(iVar13 + 0x3a4);
                        uStack_152 = 0;
                        unaff_x20 = unaff_x21 + *(iVar16 + 0x28);
                        uStack_148 = 0;
                        uStack_140 = 0x10000;
                        uStack_128 = 0;
                        uStack_11c = CONCAT31(uStack_11c._1_3_,*(unaff_x20 + 0xc));
                        *(unaff_x20 + 0x20) = 5;
                        puStack_150 = &uStack_140;
                        puStack_130 = &uStack_11c;
                        sym.slim_do_transfer(*(iVar13 + 0x398),&uStack_158);
                        *(unaff_x20 + 8) = 2;
                        iVar8 = iVar8 + 1;
                        unaff_x21 = unaff_x21 + 0x24;
                    } while (iVar8 < *(iVar16 + 0x24));
                }
            }
            uStack_170._0_3_ = CONCAT12(0x5f,uStack_170);
            iVar7 = sym.slim_do_transfer(arg1,&uStack_170);
        }
    }
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_118) {
        __stack_chk_fail();
        iVar16 = unaff_x19;
code_r0x080038c0:
        __cfi_slowpath_diag(0x4b4ad99a78e6dbc3,unaff_x20,0x8000440);
code_r0x080034cc:
        iVar7 = (*unaff_x20)(iVar16);
        unaff_x19 = iVar16;
        if (iVar7 == 0) {
            if (0 < *(iVar16 + 0x24)) {
                iVar8 = 0;
                iVar13 = 0x20;
                do {
                    iVar8 = iVar8 + 1;
                    *(*(iVar16 + 0x28) + iVar13) = 5;
                    iVar13 = iVar13 + 0x24;
                } while (iVar8 < *(iVar16 + 0x24));
            }
            mutex_unlock(unaff_x21);
            iVar7 = 0;
        }
        else {
            mutex_unlock(unaff_x21);
        }
    }
    return iVar7;
}


// ===== sym.__typeid__ZTSFiP15slim_controllerP10slim_eaddrPhE_global_addr @ 0x08001590 (size 8) =====

int sym.__typeid__ZTSFiP15slim_controllerP10slim_eaddrPhE_global_addr(int64_t *param_1,int64_t param_2,uchar *param_3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = __pm_runtime_resume(*param_1,4);
    if (-1 < iVar5) {
        if (param_1[0x16] == 0) {
            uVar6 = device_find_child(*param_1,param_2,sym.slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
            if (((uVar6 == 0) && (uVar6 = sym.slim_alloc_device(param_1,param_2,0), uVar6 == 0)) ||
               (0xfffffffffffff000 < uVar6)) {
                return -0x13;
            }
            if (*(uVar6 + 0x3a5) != '\0') {
                *param_3 = *(uVar6 + 0x3a4);
                return 0;
            }
            iVar5 = sym.slim_device_alloc_laddr(uVar6,1);
        }
        else {
            _dev_err(*param_1,"slim ctrl not active,state:%d, ret:%d\n",param_1[0x16],iVar5);
        }
        iVar9 = *param_1;
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar9 + 0x218) = uVar7;
        __pm_runtime_suspend(*param_1,0xd);
        return iVar5;
    }
    _dev_err(*param_1,"slim %s: PM get_sync failed ret :%d\n","slim_device_report_present",iVar5);
    puVar1 = *param_1 + 0x1f8;
    uVar6 = *puVar1;
    do {
        uVar8 = uVar6;
        if (uVar8 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar6 = uVar2;
            if (uVar2 != uVar8) goto code_r0x08001f94;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar8 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08001f94:
    } while (uVar8 != uVar2);
    __pm_runtime_set_status(*param_1,2);
    return iVar5;
}


// ===== sym.__typeid__ZTSFiP15slim_controllerP12slim_msg_txnE_global_addr @ 0x08001598 (size 8) =====

int sym.__typeid__ZTSFiP15slim_controllerP12slim_msg_txnE_global_addr(int64_t param_1,int64_t param_2)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = _raw_spin_lock_irqsave(param_1 + 0xa8);
    iVar1 = idr_alloc_cyclic(param_1 + 0x90,param_2,1,0x100,0xa20);
    if (-1 < iVar1) {
        *(param_2 + 6) = iVar1;
        iVar1 = 0;
    }
    _raw_spin_unlock_irqrestore(param_1 + 0xa8,uVar2);
    return iVar1;
}


// ===== sym.slim_do_transfer.cfi_jt @ 0x080015a0 (size 8) =====

//WARNING: Type propagation algorithm not settling

code * sym.slim_do_transfer.cfi_jt(int64_t *param_1,uint8_t *param_2)

{
    int64_t *piVar1;
    uint64_t *puVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    char cVar5;
    int64_t iVar6;
    bool bVar7;
    uint32_t uVar8;
    int iVar9;
    uint64_t uVar10;
    ulong *in_x18;
    uint8_t *puVar11;
    code *pcVar12;
    ulong uVar13;
    uint64_t unaff_x23;
    uint32_t unaff_w25;
    ulong uVar14;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong *******pppppppuStack_78;
    ulong *******pppppppuStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    pppppppuStack_78 = &pppppppuStack_78;
    uStack_88 = 0;
    uStack_80 = 0;
    puVar11 = param_2;
    pppppppuStack_70 = pppppppuStack_78;
    if (param_1[0x16] == 1) {
        if (param_2[1] == 0) {
            param_2[6] = 0;
            uVar3 = param_2[2];
            bVar7 = (uVar3 & 0xe0) == 0x40;
code_r0x080025c4:
            if ((uVar3 - 0x60 < 2) || (uVar3 - 0x20 < 2)) {
                piVar1 = param_1 + 0x15;
                unaff_x23 = _raw_spin_lock_irqsave(piVar1);
                uVar8 = idr_alloc_cyclic(param_1 + 0x12,param_2,1,0x100,0xa20);
                pcVar12 = uVar8;
                if (uVar8 < 0) {
                    _raw_spin_unlock_irqrestore(piVar1,unaff_x23);
                    goto code_r0x08002740;
                }
                param_2[6] = uVar8;
                _raw_spin_unlock_irqrestore(piVar1,unaff_x23);
                if (*(*(param_2 + 8) + 0x18) != 0) {
                    unaff_w25 = 1;
                    goto joined_r0x0800262c;
                }
                uVar14 = *(param_2 + 0x10);
                unaff_w25 = 1;
                *(param_2 + 0x10) = &uStack_88;
                if (!bVar7) goto code_r0x08002670;
            }
            else {
                unaff_w25 = 0;
joined_r0x0800262c:
                if (!bVar7) {
                    uVar14 = 0;
                    goto code_r0x08002670;
                }
            }
            unaff_x23 = 1;
            goto code_r0x08002690;
        }
        uVar14 = 0;
        unaff_w25 = 0;
        param_2[6] = 0;
    }
    else {
        param_2[6] = 0;
        if (param_2[1] == 0) {
            bVar7 = false;
            uVar3 = param_2[2];
            goto code_r0x080025c4;
        }
        uVar14 = 0;
        unaff_w25 = 0;
    }
code_r0x08002670:
    uVar8 = __pm_runtime_resume(*param_1,4);
    pcVar12 = uVar8;
    if (uVar8 < 0) {
        _dev_err(*param_1,"runtime resume failed ret:%d\n",pcVar12);
        unaff_x23 = _raw_spin_lock_irqsave(param_1 + 0x15);
        idr_remove(param_1 + 0x12,param_2[6]);
        _raw_spin_unlock_irqrestore(param_1 + 0x15,unaff_x23);
        puVar2 = *param_1 + 0x1f8;
        uVar10 = *puVar2;
        do {
            uVar8 = uVar10;
            if (uVar8 == 0) break;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar4 = *puVar2;
                uVar10 = uVar4;
                if (uVar4 != uVar8) goto code_r0x080027ec;
                cVar5 = '\x01';
                bVar7 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                    *puVar2 = uVar8 - 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080027ec:
        } while (uVar8 != uVar4);
        __pm_runtime_set_status(*param_1,2);
        if (unaff_w25 == 0) goto code_r0x08002740;
        if (*(*(param_2 + 8) + 0x18) != 0) goto code_r0x08002740;
        *(param_2 + 0x10) = uVar14;
        goto code_r0x08002740;
    }
    if (param_1[0x16] != 0) {
        _dev_err(*param_1,"ctrl wrong state:%d, ret:%d\n",param_1[0x16],pcVar12);
        if (unaff_w25 == 0) goto code_r0x08002718;
        if (*(*(param_2 + 8) + 0x18) != 0) goto code_r0x08002718;
        *(param_2 + 0x10) = uVar14;
        goto code_r0x08002718;
    }
    unaff_x23 = 0;
code_r0x08002690:
    pcVar12 = param_1[0x21];
    if (1 < (pcVar12 + -0x8001598 >> 3 | pcVar12 << 0x3d)) goto code_r0x080028b0;
    do {
        uVar8 = (*pcVar12)(param_1,puVar11);
        if (((unaff_w25 ^ 1) & 1) == 0 && uVar8 == 0) {
            if (*(*(puVar11 + 8) + 0x18) == 0) {
                uVar13 = *(puVar11 + 0x10);
                uVar14 = __msecs_to_jiffies(*puVar11 + 0xfa);
                iVar9 = wait_for_completion_timeout(uVar13,uVar14);
                if (iVar9 == 0) {
                    uVar14 = _raw_spin_lock_irqsave(param_1 + 0x15);
                    idr_remove(param_1 + 0x12,param_2[6]);
                    _raw_spin_unlock_irqrestore(param_1 + 0x15,uVar14);
                    pcVar12 = 0xffffff92;
                    goto code_r0x08002884;
                }
                pcVar12 = NULL;
            }
            else {
                pcVar12 = NULL;
            }
        }
        else {
            pcVar12 = uVar8;
            if (uVar8 != 0) {
code_r0x08002884:
                _dev_err(*param_1,"Tx:MT:0x%x, MC:0x%x, LA:0x%x failed:%d\n",puVar11[1],puVar11[2],puVar11[7],
                         pcVar12);
            }
        }
        if ((unaff_x23 & 1) == 0) {
code_r0x08002718:
            if ((param_2[6] == 0) || (pcVar12 == -0x6e)) {
                puVar11 = *param_1;
                uVar14 = ktime_get_mono_fast_ns();
                *(puVar11 + 0x218) = uVar14;
                __pm_runtime_suspend(*param_1,0xd);
            }
        }
code_r0x08002740:
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_68) {
            return pcVar12;
        }
        __stack_chk_fail();
code_r0x080028b0:
        __cfi_slowpath_diag(0x65e2fc7b0d9880a3,pcVar12,0x8000400);
    } while( true );
}


// ===== sym.__typeid__ZTSFiP15slim_controllerE_global_addr @ 0x080015a8 (size 8) =====

ulong sym.__typeid__ZTSFiP15slim_controllerE_global_addr(int64_t *param_1)

{
    int iVar1;
    ulong uVar2;
    int64_t arg3;
    int64_t iVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    uchar uStack_70;
    uchar uStack_6f;
    ushort uStack_6e;
    ushort uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar2 = ida_alloc_range(obj.ctrl_ida,0,0xffffffff,0xcc0);
    if (-1 < uVar2) {
        *(param_1 + 1) = uVar2;
        if (*(param_1 + 0x2c) == 0) {
            *(param_1 + 0x2c) = 1;
            iVar1 = param_1[6];
        }
        else {
            iVar1 = param_1[6];
        }
        if (iVar1 == 0) {
            *(param_1 + 6) = 10;
        }
        param_1[8] = 0;
        param_1[0x12] = 0x1000000400000000;
        param_1[0x13] = 0;
        *(param_1 + 7) = 0;
        *(param_1 + 0x3c) = 0x10000005;
        param_1[0x14] = 0;
        __mutex_init(param_1 + 10,"&ctrl->lock",obj.slim_register_controller.__key);
        __mutex_init(param_1 + 0x1b,"&ctrl->sched.m_reconf",obj.slim_register_controller.__key);
        *(param_1 + 0x17) = 0;
        __init_swait_queue_head(param_1 + 0x18,"&x->wait",obj.slim_register_controller.__key);
        iVar5 = *param_1;
        *(param_1 + 0x15) = 0;
        uVar2 = 0;
        if (*(iVar5 + 0x2f0) != 0) {
            for (arg3 = of_get_next_child(*(iVar5 + 0x2f0),0); uVar2 = 0, arg3 != 0;
                arg3 = of_get_next_child(*(*param_1 + 0x2f0),arg3)) {
                uStack_80 = 0;
                uStack_78 = 0;
                iVar3 = of_get_property(arg3,"compatible",0);
                if (iVar3 != 0) {
                    iVar1 = sscanf(iVar3,"slim%x,%x",&uStack_80 + 4,&uStack_80);
                    if (iVar1 == 2) {
                        iVar1 = of_property_read_variable_u32_array(arg3,0x8000878,&uStack_78,2,0);
                        if (iVar1 < 0) {
                            _dev_err(iVar5,"Device and Instance id not found:%d\n",iVar1);
                        }
                        else {
                            uStack_6f = uStack_78;
                            uStack_70 = uStack_78 >> 0x20;
                            uStack_6c = uStack_80 >> 0x20;
                            uStack_6e = uStack_80;
                            sym.slim_alloc_device(param_1,&uStack_70,arg3);
                        }
                    }
                    else {
                        _dev_err(iVar5,"Manf ID & Product code not found %s\n",iVar3);
                    }
                }
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        puVar4 = __stack_chk_fail();
        *extraout_x18 = sym.slim_unregister_controller;
        device_for_each_child(*puVar4,0,sym.slim_ctrl_remove_device.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
        ida_free(obj.ctrl_ida,*(puVar4 + 1));
        return 0;
    }
    return uVar2;
}


// ===== sym.slim_unregister_controller.cfi_jt @ 0x080015b0 (size 8) =====

ulong sym.slim_unregister_controller.cfi_jt(ulong *param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_for_each_child(*param_1,0,sym.slim_ctrl_remove_device.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
    ida_free(obj.ctrl_ida,*(param_1 + 1));
    return 0;
}


// ===== sym.__typeid__ZTSFiP11slim_deviceE_global_addr @ 0x080015b8 (size 8) =====

ulong sym.__typeid__ZTSFiP11slim_deviceE_global_addr(int64_t param_1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_1 + 0x3a5) == '\0') {
        uVar1 = sym.slim_device_alloc_laddr(param_1,0);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.slim_vote_for_suspend.cfi_jt @ 0x080015c0 (size 8) =====

ulong sym.slim_vote_for_suspend.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0x398);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        pcVar3 = *(iVar1 + 0x138);
        if (1 < (pcVar3 + -0x80015a8 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar3,0x8000340);
        }
        uVar2 = (*pcVar3)(iVar1);
    }
    return uVar2;
}


// ===== sym.slim_read.cfi_jt @ 0x080015c8 (size 8) =====

code * sym.slim_read.cfi_jt(int64_t param_1,uint16_t param_2,uint8_t param_3,int64_t param_4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1;
    code *pcVar4;
    ulong *puVar5;
    int64_t arg1_00;
    ulong uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t unaff_x19;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [12];
    unkbyte10 Var10;
    uchar auVar11 [16];
    ulong uStack_1b8;
    ulong *puStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    uchar *puStack_190;
    ulong uStack_188;
    uchar auStack_17c [4];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    uchar auStack_12c [4];
    ushort uStack_128;
    unkbyte6 Stack_126;
    ulong uStack_120;
    uchar *puStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint8_t auStack_a4 [4];
    ushort uStack_a0;
    unkbyte6 Stack_9e;
    uint8_t *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uchar uStack_80;
    ushort uStack_7f;
    uchar uStack_7d;
    uint16_t uStack_7c;
    uchar uStack_7a;
    uchar uStack_79;
    ushort *puStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uchar uStack_30;
    ushort uStack_2f;
    uchar uStack_2d;
    uint16_t uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    uchar *puStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    puStack_28 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_2f = 0x6000;
    uStack_29 = *(param_1 + 0x3a4);
    arg1 = *(param_1 + 0x398);
    uStack_50 = CONCAT12(param_3,param_2);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_2d = 0;
    uStack_2a = 0;
    uStack_20 = 0;
    iStack_48 = param_4;
    puVar5 = &uStack_50;
    if (arg1 == NULL) {
code_r0x08002b8c:
        puStack_28 = puVar5;
        pcVar4 = 0xffffffea;
    }
    else {
        if (((0x10 < param_3) || (param_4 == 0)) || (uVar3 = param_3, 0xc00 < uVar3 + param_2)) {
            param_3 = param_2;
            param_4 = 0x60;
            _dev_err(*arg1,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            puVar5 = puStack_28;
            goto code_r0x08002b8c;
        }
        if (uVar3 < 2) {
            uVar3 = 1;
        }
        if (0xf < uVar3) {
            uVar3 = 0x10;
        }
        uStack_30 = 7;
        uStack_2c = obj.slim_slicesize.sizetocode[uVar3 - 1] | param_2 << 4 | 8;
        puStack_28 = &uStack_50;
        pcVar4 = sym.slim_do_transfer(arg1,&uStack_30);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    auVar9 = __stack_chk_fail(pcVar4);
    *extraout_x18 = sym.slim_readb;
    pcStack_58 = sym.slim_readb;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puStack_98 = auStack_a4;
    auStack_a4[0] = 0;
    uStack_7f = 0x6000;
    uStack_79 = *(auVar9._0_8_ + 0x3a4);
    puVar5 = *(auVar9._0_8_ + 0x398);
    _uStack_a0 = CONCAT62(1,auVar9._8_2_);
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_78 = &uStack_a0;
    uStack_7d = 0;
    uStack_7a = 0;
    uStack_70 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    if (puVar5 == NULL) {
code_r0x08002c64:
        pcVar4 = 0xffffffea;
    }
    else {
        uVar3 = auVar9._8_4_ & 0xffff;
        if (0xbff < uVar3) {
            param_4 = 0x60;
            _dev_err(*puVar5,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            param_3 = uVar3;
            goto code_r0x08002c64;
        }
        uStack_7c = auVar9._8_4_ << 4 | 8;
        uStack_80 = 7;
        pcVar4 = sym.slim_do_transfer(puVar5,&uStack_80);
        param_3 = uVar3;
        if (-1 < pcVar4) {
            pcVar4 = auStack_a4[0];
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return pcVar4;
    }
    Var10 = __stack_chk_fail(pcVar4);
    *extraout_x18_00 = sym.slim_write;
    pcStack_b8 = sym.slim_write;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    uStack_e0 = 0;
    uStack_e8 = CONCAT12(param_3,Var10 >> 0x40);
    auStack_12c[0] = 0x68;
    uStack_d0 = 0;
    iStack_d8 = param_4;
    ppuStack_c0 = &puStack_60;
    pcVar4 = sym.slim_xfer_msg(Var10,&uStack_e8,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return pcVar4;
    }
    Var10 = __stack_chk_fail();
    *extraout_x18_01 = sym.slim_writeb;
    pcStack_f8 = sym.slim_writeb;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    puStack_118 = auStack_12c;
    uVar3 = 0x68;
    uStack_120 = 0;
    _uStack_128 = CONCAT62(1,Var10 >> 0x40);
    uStack_110 = 0;
    pppuStack_100 = &ppuStack_c0;
    pcVar4 = sym.slim_xfer_msg(Var10,&uStack_128,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar4;
    }
    auVar11 = __stack_chk_fail();
    arg1_00 = auVar11._0_8_;
    *extraout_x18_02 = sym.slim_ctrl_clk_pause;
    pcStack_168 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_178 = *(iVar1 + 0x5e0);
    puStack_1b0 = &uStack_1a0;
    auStack_17c[0] = uVar3;
    puStack_190 = NULL;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b8 = 0xff00000003400003;
    uStack_1a8 = 0;
    pppuStack_170 = &pppuStack_100;
    if (((uVar3 & 0xff) < 3) || ((auVar11._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_00 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar11._8_8_ & 1) == 0) {
            if (*(arg1_00 + 0xb0) != 2) {
                iVar1 = arg1_00 + 0xa8;
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                iVar8 = 0;
                while (iVar7 = idr_find(arg1_00 + 0x90,iVar8), iVar7 == 0) {
                    iVar8 = iVar8 + 1;
                    if (iVar8 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar6);
                        *(arg1_00 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_1b8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_190 = auStack_17c;
                        uStack_1a0._0_3_ = CONCAT12(1,uStack_1a0);
                        uStack_1b8._0_3_ = CONCAT12(0x4a,uStack_1b8);
                        uStack_1b8 = CONCAT71(uStack_1b8._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_1b8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_190 = NULL;
                        uStack_1b8._0_3_ = CONCAT12(0x5f,uStack_1b8);
                        uStack_1b8 = CONCAT71(uStack_1b8._1_7_,3);
                        uStack_1a0._0_3_ = CONCAT12(1,uStack_1a0);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_1b8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1_00 + 0xb0) = 2;
                        complete(arg1_00 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_00 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1_00 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1_00 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1_00 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while (iVar1 = sp_el0, *(iVar1 + 0x5e0) != iStack_178) {
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1_00);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1_00 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_write.cfi_jt @ 0x080015d0 (size 8) =====

code * sym.slim_write.cfi_jt(int64_t param_1,ushort param_2,uchar param_3,ulong param_4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int64_t arg1;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t iVar7;
    ulong unaff_x30;
    unkbyte10 Var8;
    uchar auVar9 [16];
    ulong uStack_108;
    ulong *puStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uchar auStack_cc [4];
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uchar auStack_7c [4];
    ushort uStack_78;
    unkbyte6 Stack_76;
    ulong uStack_70;
    uchar *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    uStack_38 = CONCAT12(param_3,param_2);
    auStack_7c[0] = 0x68;
    uStack_20 = 0;
    uStack_28 = param_4;
    pcVar4 = sym.slim_xfer_msg(param_1,&uStack_38,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    Var8 = __stack_chk_fail();
    *extraout_x18 = sym.slim_writeb;
    pcStack_48 = sym.slim_writeb;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puStack_68 = auStack_7c;
    uVar3 = 0x68;
    uStack_70 = 0;
    _uStack_78 = CONCAT62(1,Var8 >> 0x40);
    uStack_60 = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    pcVar4 = sym.slim_xfer_msg(Var8,&uStack_78,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return pcVar4;
    }
    auVar9 = __stack_chk_fail();
    arg1 = auVar9._0_8_;
    *extraout_x18_00 = sym.slim_ctrl_clk_pause;
    pcStack_b8 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    puStack_100 = &uStack_f0;
    auStack_cc[0] = uVar3;
    puStack_e0 = NULL;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_108 = 0xff00000003400003;
    uStack_f8 = 0;
    ppuStack_c0 = &puStack_50;
    if (((uVar3 & 0xff) < 3) || ((auVar9._8_8_ & 1) != 0)) {
        unaff_x19 = arg1 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar9._8_8_ & 1) == 0) {
            if (*(arg1 + 0xb0) != 2) {
                iVar1 = arg1 + 0xa8;
                uVar5 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar6 = idr_find(arg1 + 0x90,iVar7), iVar6 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar5);
                        *(arg1 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_108);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_e0 = auStack_cc;
                        uStack_f0._0_3_ = CONCAT12(1,uStack_f0);
                        uStack_108._0_3_ = CONCAT12(0x4a,uStack_108);
                        uStack_108 = CONCAT71(uStack_108._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_108);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_e0 = NULL;
                        uStack_108._0_3_ = CONCAT12(0x5f,uStack_108);
                        uStack_108 = CONCAT71(uStack_108._1_7_,3);
                        uStack_f0._0_3_ = CONCAT12(1,uStack_f0);
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_108);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1 + 0xb0) = 2;
                        complete(arg1 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_c8) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_stream_allocate.cfi_jt @ 0x080015d8 (size 8) =====

int64_t * sym.slim_stream_allocate.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x40);
    if (piVar2 != NULL) {
        iVar3 = kasprintf(0xcc0,"slim-%s",param_2);
        *piVar2 = iVar3;
        if (iVar3 != 0) {
            piVar2[1] = param_1;
            _raw_spin_lock(param_1 + 0x3b8);
            piVar5 = *(param_1 + 0x3b0);
            piVar1 = piVar2 + 6;
            uVar4 = __list_add_valid(piVar1,piVar5,param_1 + 0x3a8);
            if ((uVar4 & 1) != 0) {
                *(param_1 + 0x3b0) = piVar1;
                piVar2[6] = param_1 + 0x3a8;
                piVar2[7] = piVar5;
                *piVar5 = piVar1;
            }
            _raw_spin_unlock(param_1 + 0x3b8);
            return piVar2;
        }
        kfree(piVar2);
    }
    return 0xfffffffffffffff4;
}


// ===== sym.slim_device_match.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x080015e0 (size 8) =====

bool sym.slim_device_match.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(int64_t param_1,int64_t param_2)

{
    bool bVar1;
    int64_t iVar2;
    int16_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_match_device(*(param_2 + 0x28),param_1);
    if (iVar2 == 0) {
        for (piVar3 = *(param_2 + 0xb0); (*piVar3 != 0 || (piVar3[1] != 0)); piVar3 = piVar3 + 8) {
            if ((((*piVar3 == *(param_1 + 0x394)) && (piVar3[1] == *(param_1 + 0x392))) &&
                (piVar3[2] == *(param_1 + 0x391))) && (piVar3[3] == *(param_1 + 0x390))) goto code_r0x080016cc;
        }
        piVar3 = NULL;
code_r0x080016cc:
        bVar1 = piVar3 != NULL;
    }
    else {
        bVar1 = true;
    }
    return bVar1;
}


// ===== sym.slim_driver_unregister.cfi_jt @ 0x080015e8 (size 8) =====

void sym.slim_driver_unregister.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(param_1 + 0x20);
    return;
}


// ===== sym.__typeid__ZTSFvP11slim_deviceE_global_addr @ 0x080015f0 (size 8) =====

void sym.__typeid__ZTSFvP11slim_deviceE_global_addr(int64_t param_1)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x398);
    if (iVar2 != 0) {
        mutex_lock(iVar2 + 0x50);
        *(param_1 + 0x3a5) = 0;
        mutex_unlock(iVar2 + 0x50);
        if (*(iVar2 + 0x118) == 0) {
            ida_free(iVar2 + 0x38,*(param_1 + 0x3a4));
        }
        if (*(param_1 + 0x3a0) != 0) {
            *(param_1 + 0x3a0) = 0;
            if ((*(param_1 + 0x88) != 0) && (pcVar1 = *(*(param_1 + 0x88) + -8), pcVar1 != NULL)) {
                __cfi_slowpath_diag(0xcf049ca126c6d869,pcVar1,0x80003a0);
                (*pcVar1)(param_1,*(param_1 + 0x3a0));
            }
        }
    }
    return;
}


// ===== sym.slim_free_txn_tid.cfi_jt @ 0x080015f8 (size 8) =====

void sym.slim_free_txn_tid.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(param_1 + 0xa8);
    idr_remove(param_1 + 0x90,*(param_2 + 6));
    _raw_spin_unlock_irqrestore(param_1 + 0xa8,uVar1);
    return;
}


// ===== sym.slim_ctrl_remove_device.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x08001600 (size 8) =====

ulong sym.slim_ctrl_remove_device.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x08001608 (size 8) =====

bool sym.slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(int64_t param_1,char *param_2)

{
    if (((*(param_1 + 0x394) == *(param_2 + 4)) && (*(param_1 + 0x392) == *(param_2 + 2))) &&
       (*(param_1 + 0x391) == param_2[1])) {
        return *(param_1 + 0x390) == *param_2;
    }
    return false;
}


// ===== sym.of_slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt @ 0x08001610 (size 8) =====

bool sym.of_slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt(int64_t param_1,int64_t param_2)

{
    return *(param_1 + 0x2f0) == param_2;
}


// ===== sym.__typeid__ZTSFiP19slim_stream_runtimeE_global_addr @ 0x08001618 (size 8) =====

ulong sym.__typeid__ZTSFiP19slim_stream_runtimeE_global_addr(int64_t param_1,ulong param_2,uint64_t param_3)

{
    uint *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint uStack_138;
    ushort uStack_134;
    uchar uStack_132;
    uchar uStack_131;
    ulong *puStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    uchar auStack_fc [4];
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint uStack_98;
    ushort uStack_94;
    uchar uStack_92;
    uchar uStack_91;
    ulong *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uchar *puStack_70;
    ulong uStack_68;
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    if (param_1 == 0) {
        _printk(0x80005ef,"slim_stream_unprepare");
        uVar5 = 0xffffffea;
    }
    else {
        iVar4 = *(param_1 + 0x28);
        uVar3 = *(param_1 + 0x24);
        param_3 = uVar3;
        if ((iVar4 == 0) || (uVar3 == 0)) {
            _printk(0x800087c,"slim_stream_unprepare");
            uVar5 = 0xffffffea;
        }
        else {
            if (0 < uVar3) {
                iVar10 = 0;
                iVar11 = 1;
                while( true ) {
                    iVar8 = *(param_1 + 8);
                    uStack_80 = 0x10000;
                    uStack_78 = 0;
                    uStack_68 = 0;
                    uStack_98 = 0x140005;
                    uStack_91 = *(iVar8 + 0x3a4);
                    uStack_94 = 0;
                    uStack_92 = 0;
                    uStack_88 = 0;
                    puVar1 = iVar4 + iVar10;
                    auStack_5c[0] = *puVar1;
                    puVar1[8] = 0;
                    puVar1[2] = 0;
                    puStack_90 = &uStack_80;
                    puStack_70 = auStack_5c;
                    sym.slim_do_transfer(*(iVar8 + 0x398),&uStack_98);
                    if (*(param_1 + 0x24) <= iVar11) break;
                    iVar4 = *(param_1 + 0x28);
                    iVar11 = iVar11 + 1;
                    iVar10 = iVar10 + 0x24;
                }
                iVar4 = *(param_1 + 0x28);
            }
            kfree(iVar4);
            uVar5 = 0;
            *(param_1 + 0x28) = 0;
            *(param_1 + 0x24) = 0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    iVar11 = auVar12._0_8_;
    *extraout_x18 = sym.slim_stream_unprepare_disconnect_port;
    pcStack_e8 = sym.slim_stream_unprepare_disconnect_port;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffb0;
    if (iVar11 == 0) {
        _printk(0x80005ef,"slim_stream_unprepare_disconnect_port");
    }
    else {
        iVar4 = *(iVar11 + 0x28);
        if ((iVar4 != 0) && (*(iVar11 + 0x24) != 0)) {
            if (((auVar12._8_8_ & 1) != 0) && (0 < *(iVar11 + 0x24))) {
                iVar8 = 0;
                iVar10 = 1;
                while( true ) {
                    iVar9 = *(iVar11 + 8);
                    puVar1 = iVar4 + iVar8;
                    uStack_120 = 0x10000;
                    uStack_118 = 0;
                    uStack_108 = 0;
                    uStack_131 = *(iVar9 + 0x3a4);
                    uStack_138 = 0x140005;
                    uStack_134 = 0;
                    uStack_132 = 0;
                    uStack_128 = 0;
                    auStack_fc[0] = *puVar1;
                    puVar1[8] = 0;
                    puVar1[2] = 0;
                    puStack_130 = &uStack_120;
                    puStack_110 = auStack_fc;
                    sym.slim_do_transfer(*(iVar9 + 0x398),&uStack_138);
                    if (*(iVar11 + 0x24) <= iVar10) break;
                    iVar4 = *(iVar11 + 0x28);
                    iVar10 = iVar10 + 1;
                    iVar8 = iVar8 + 0x24;
                }
            }
            if ((param_3 & 1) == 0) {
                uVar5 = 0;
            }
            else {
                kfree(*(iVar11 + 0x28));
                uVar5 = 0;
                *(iVar11 + 0x28) = 0;
                *(iVar11 + 0x24) = 0;
            }
            goto code_r0x08003d80;
        }
        _printk(0x800087c,"slim_stream_unprepare_disconnect_port");
    }
    uVar5 = 0xffffffea;
code_r0x08003d80:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return uVar5;
    }
    puVar6 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.slim_stream_free;
    if (puVar6 == NULL) {
        _printk(0x80005ef,"slim_stream_free");
        uVar5 = 0xffffffea;
    }
    else {
        iVar4 = puVar6[1];
        _raw_spin_lock(iVar4 + 0x3b8);
        uVar7 = __list_del_entry_valid(puVar6 + 6);
        if ((uVar7 & 1) != 0) {
            iVar11 = puVar6[6];
            piVar2 = puVar6[7];
            *(iVar11 + 8) = piVar2;
            *piVar2 = iVar11;
        }
        puVar6[6] = 0xdead000000000100;
        puVar6[7] = 0xdead000000000122;
        _raw_spin_unlock(iVar4 + 0x3b8);
        kfree(*puVar6);
        kfree(puVar6);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.slim_stream_disable.cfi_jt @ 0x08001620 (size 8) =====

code * sym.slim_stream_disable.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    code *pcVar5;
    int64_t iVar6;
    int64_t unaff_x22;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    ushort uStack_a4;
    uchar uStack_a2;
    uchar uStack_a1;
    ulong *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_c0 = *0x8000d90;
    uStack_b8 = *0x8000d98;
    uStack_b0 = *0x8000da0;
    if (param_1 == 0) {
        _printk(0x80005ef,"slim_stream_disable");
    }
    else {
        if ((*(param_1 + 0x28) != 0) && (*(param_1 + 0x24) != 0)) {
            unaff_x20 = *(*(param_1 + 8) + 0x398);
            if (*(unaff_x20 + 0x128) == 0) goto code_r0x08003998;
            unaff_x22 = unaff_x20 + 0x140;
            mutex_lock(unaff_x22);
            pcVar5 = *(unaff_x20 + 0x128);
            if (3 < (pcVar5 + -0x8001618 >> 3 | pcVar5 << 0x3d)) goto code_r0x08003ae0;
            while( true ) {
                uVar2 = (*pcVar5)(param_1);
                pcVar5 = uVar2;
                mutex_unlock(unaff_x22);
                if (uVar2 == 0) {
code_r0x08003998:
                    uVar2 = sym.slim_do_transfer(unaff_x20,&uStack_c0);
                    pcVar5 = uVar2;
                    if (uVar2 == 0) {
                        if (0 < *(param_1 + 0x24)) {
                            iVar6 = 0;
                            unaff_x22 = 0;
                            do {
                                iVar7 = *(param_1 + 8);
                                uStack_90 = 0x10000;
                                uStack_88 = 0;
                                uStack_78 = 0;
                                uStack_a8 = 0x550005;
                                uStack_a1 = *(iVar7 + 0x3a4);
                                uStack_a4 = 0;
                                iVar1 = *(param_1 + 0x28) + iVar6;
                                uStack_a2 = 0;
                                uStack_98 = 0;
                                auStack_6c[0] = *(iVar1 + 0xc);
                                puStack_a0 = &uStack_90;
                                puStack_80 = auStack_6c;
                                iVar3 = sym.slim_do_transfer(*(iVar7 + 0x398),&uStack_a8);
                                if (iVar3 == 0) {
                                    uStack_a8._0_3_ = CONCAT12(0x58,uStack_a8);
                                    *(iVar1 + 0x20) = 6;
                                    sym.slim_do_transfer(*(iVar7 + 0x398),&uStack_a8);
                                }
                                unaff_x22 = unaff_x22 + 1;
                                iVar6 = iVar6 + 0x24;
                            } while (unaff_x22 < *(param_1 + 0x24));
                        }
                        uStack_c0._0_3_ = CONCAT12(0x5f,uStack_c0);
                        uVar4 = sym.slim_do_transfer(unaff_x20,&uStack_c0);
                        pcVar5 = uVar4 & 0xffffffff;
                    }
                }
code_r0x08003a9c:
                iVar6 = sp_el0;
                if (*(iVar6 + 0x5e0) == iStack_68) break;
                __stack_chk_fail();
code_r0x08003ae0:
                __cfi_slowpath_diag(0x4b4ad99a78e6dbc3,pcVar5,0x8000460);
            }
            return pcVar5;
        }
        _printk(0x800087c,"slim_stream_disable");
        unaff_x19 = param_1;
    }
    pcVar5 = 0xffffffea;
    param_1 = unaff_x19;
    goto code_r0x08003a9c;
}


// ===== sym.slim_stream_free.cfi_jt @ 0x08001628 (size 8) =====

ulong sym.slim_stream_free.cfi_jt(ulong *param_1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_1 == NULL) {
        _printk(0x80005ef,"slim_stream_free");
        uVar4 = 0xffffffea;
    }
    else {
        iVar5 = param_1[1];
        _raw_spin_lock(iVar5 + 0x3b8);
        uVar3 = __list_del_entry_valid(param_1 + 6);
        if ((uVar3 & 1) != 0) {
            iVar1 = param_1[6];
            piVar2 = param_1[7];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        param_1[6] = 0xdead000000000100;
        param_1[7] = 0xdead000000000122;
        _raw_spin_unlock(iVar5 + 0x3b8);
        kfree(*param_1);
        kfree(param_1);
        uVar4 = 0;
    }
    return uVar4;
}


// ===== sym.slim_stream_enable.cfi_jt @ 0x08001630 (size 8) =====

int sym.slim_stream_enable.cfi_jt(int64_t param_1)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    code *arg1;
    code *unaff_x21;
    ulong unaff_x30;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    ushort uStack_a4;
    uchar uStack_a2;
    uchar uStack_a1;
    ulong *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint *puStack_80;
    ulong uStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uStack_c0 = *0x8000d90;
    uStack_b8 = *0x8000d98;
    uStack_b0 = *0x8000da0;
    if (param_1 == 0) {
        _printk(0x80005ef,"slim_stream_enable");
        iVar2 = -0x16;
    }
    else {
        arg1 = *(*(param_1 + 8) + 0x398);
        if (*(arg1 + 0x120) != 0) {
            unaff_x21 = arg1 + 0x140;
            mutex_lock(unaff_x21);
            unaff_x20 = *(arg1 + 0x120);
            if (3 < (unaff_x20 + -0x8001618 >> 3 | unaff_x20 << 0x3d)) goto code_r0x080038c0;
            goto code_r0x080034cc;
        }
        iVar2 = sym.slim_do_transfer(arg1,&uStack_c0);
        unaff_x19 = param_1;
        unaff_x20 = arg1;
        if (iVar2 == 0) {
            if (0 < *(param_1 + 0x24)) {
                unaff_x21 = NULL;
                iVar3 = 0;
                unaff_x20 = 0x500008;
                do {
                    iVar5 = *(param_1 + 8);
                    iVar2 = *(param_1 + 0x20);
                    uStack_90 = 0x40000;
                    uStack_88 = 0;
                    iVar4 = *(param_1 + 0x28);
                    uStack_78 = 0;
                    uStack_a1 = *(iVar5 + 0x3a4);
                    uStack_a8 = 0x500008;
                    uStack_a4 = 0;
                    uStack_a2 = 0;
                    uVar6 = 0xffffffea;
                    uStack_98 = 0;
                    if (0xbf < iVar2) {
                        if (iVar2 < 0x16c) {
                            if (iVar2 == 0xc0) {
                                iVar7 = 0x10;
                            }
                            else {
                                if (iVar2 != 0x100) goto code_r0x080036e0;
                                iVar7 = 8;
                            }
                        }
                        else if (iVar2 == 0x16c) {
                            iVar7 = 0x11;
                        }
                        else if (iVar2 == 0x200) {
                            iVar7 = 9;
                        }
                        else {
                            if (iVar2 != 0x300) goto code_r0x080036e0;
                            iVar7 = 0x12;
                        }
                        goto code_r0x080036cc;
                    }
                    iVar7 = 0;
                    switch(iVar2) {
                    case 1:
                        break;
                    case 2:
                        iVar7 = 1;
                        break;
                    case 3:
                        iVar7 = 10;
                        break;
                    case 4:
                        iVar7 = 2;
                        break;
                    default:
                        goto code_r0x080036e0;
                    case 6:
                        iVar7 = 0xb;
                        break;
                    case 8:
                        iVar7 = 3;
                        break;
                    case 0xc:
                        iVar7 = 0xc;
                        break;
                    case 0x10:
                        iVar7 = 4;
                        break;
                    case 0x18:
                        iVar7 = 0xd;
                        break;
                    case 0x20:
                        iVar7 = 5;
                        break;
                    case 0x30:
                        iVar7 = 0xe;
                        break;
                    case 0x40:
                        iVar7 = 6;
                        break;
                    case 0x60:
                        iVar7 = 0xf;
                        break;
                    case 0x80:
                        iVar7 = 7;
                    }
code_r0x080036cc:
                    uVar6 = *(iVar7 * 0x10 + 0x8000a54);
code_r0x080036e0:
                    *(unaff_x21 + iVar4 + 0x14) = uVar6;
                    cVar1 = *(param_1 + 0x1c) >> 2;
                    if (*(param_1 + 0x14) != 0) {
                        cVar1 = cVar1 + '\x01';
                    }
                    uStack_6c = CONCAT13(cVar1,CONCAT12(uVar6 >> 8 & 0xf | *(param_1 + 0x14) << 4,
                                                         CONCAT31(uVar6,*(unaff_x21 + iVar4 + 0xc))));
                    *(unaff_x21 + iVar4 + 0x20) = 3;
                    puStack_a0 = &uStack_90;
                    puStack_80 = &uStack_6c;
                    sym.slim_do_transfer(*(iVar5 + 0x398),&uStack_a8);
                    iVar5 = *(param_1 + 8);
                    uStack_90 = 0x40000;
                    uStack_88 = 0;
                    uStack_78 = 0;
                    uStack_a1 = *(iVar5 + 0x3a4);
                    uStack_a8 = 0x510008;
                    uStack_a4 = 0;
                    uStack_a2 = 0;
                    uStack_98 = 0;
                    uStack_6c._0_2_ = CONCAT11(*(unaff_x21 + iVar4 + 0x10),*(unaff_x21 + iVar4 + 0xc));
                    if (*(param_1 + 0x14) != 0) {
                        uStack_6c._0_2_ = CONCAT11(*(unaff_x21 + iVar4 + 0x10),*(unaff_x21 + iVar4 + 0xc)) | 0x8000;
                    }
                    uStack_6c = CONCAT13(*(param_1 + 0x1c) >> 2,
                                         CONCAT12(*(unaff_x21 + iVar4 + 0x18) | *(unaff_x21 + iVar4 + 0x1c) << 4,
                                                  uStack_6c));
                    *(unaff_x21 + iVar4 + 0x20) = 4;
                    puStack_a0 = &uStack_90;
                    puStack_80 = &uStack_6c;
                    sym.slim_do_transfer(*(iVar5 + 0x398),&uStack_a8);
                    iVar3 = iVar3 + 1;
                    unaff_x21 = unaff_x21 + 0x24;
                } while (iVar3 < *(param_1 + 0x24));
                if (0 < *(param_1 + 0x24)) {
                    unaff_x21 = NULL;
                    iVar3 = 0;
                    do {
                        iVar5 = *(param_1 + 8);
                        uStack_88 = 0;
                        uStack_a8 = 0x540005;
                        uStack_a4 = 0;
                        uStack_a1 = *(iVar5 + 0x3a4);
                        uStack_a2 = 0;
                        unaff_x20 = unaff_x21 + *(param_1 + 0x28);
                        uStack_98 = 0;
                        uStack_90 = 0x10000;
                        uStack_78 = 0;
                        uStack_6c = CONCAT31(uStack_6c._1_3_,*(unaff_x20 + 0xc));
                        *(unaff_x20 + 0x20) = 5;
                        puStack_a0 = &uStack_90;
                        puStack_80 = &uStack_6c;
                        sym.slim_do_transfer(*(iVar5 + 0x398),&uStack_a8);
                        *(unaff_x20 + 8) = 2;
                        iVar3 = iVar3 + 1;
                        unaff_x21 = unaff_x21 + 0x24;
                    } while (iVar3 < *(param_1 + 0x24));
                }
            }
            uStack_c0._0_3_ = CONCAT12(0x5f,uStack_c0);
            iVar2 = sym.slim_do_transfer(arg1,&uStack_c0);
        }
    }
    while (iVar3 = sp_el0, *(iVar3 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        param_1 = unaff_x19;
code_r0x080038c0:
        __cfi_slowpath_diag(0x4b4ad99a78e6dbc3,unaff_x20,0x8000440);
code_r0x080034cc:
        iVar2 = (*unaff_x20)(param_1);
        unaff_x19 = param_1;
        if (iVar2 == 0) {
            if (0 < *(param_1 + 0x24)) {
                iVar3 = 0;
                iVar5 = 0x20;
                do {
                    iVar3 = iVar3 + 1;
                    *(*(param_1 + 0x28) + iVar5) = 5;
                    iVar5 = iVar5 + 0x24;
                } while (iVar3 < *(param_1 + 0x24));
            }
            mutex_unlock(unaff_x21);
            iVar2 = 0;
        }
        else {
            mutex_unlock(unaff_x21);
        }
    }
    return iVar2;
}


// ===== sym.slim_device_match @ 0x08001638 (size 176) =====

bool sym.slim_device_match(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    int16_t *piVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = of_match_device(*(arg2 + 0x28),arg1);
    if (iVar2 == 0) {
        for (piVar3 = *(arg2 + 0xb0); (*piVar3 != 0 || (piVar3[1] != 0)); piVar3 = piVar3 + 8) {
            if ((((*piVar3 == *(arg1 + 0x394)) && (piVar3[1] == *(arg1 + 0x392))) && (piVar3[2] == *(arg1 + 0x391))) &&
               (piVar3[3] == *(arg1 + 0x390))) goto code_r0x080016cc;
        }
        piVar3 = NULL;
code_r0x080016cc:
        bVar1 = piVar3 != NULL;
    }
    else {
        bVar1 = true;
    }
    return bVar1;
}


// ===== sym.slim_device_uevent @ 0x080016e8 (size 64) =====

void sym.slim_device_uevent(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x70);
    if (iVar1 == 0) {
        iVar1 = *arg1;
    }
    add_uevent_var(arg2,"MODALIAS=slim:%s",iVar1);
    return;
}


// ===== sym.slim_device_probe @ 0x08001728 (size 256) =====

ulong sym.slim_device_probe(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar3 = *(*(arg1 + 0x88) + -0x20);
    if (1 < (pcVar3 + -0x80015b8 >> 3 | pcVar3 << 0x3d)) {
        __cfi_slowpath_diag(0x616834158b2017a8,pcVar3,0x8000360);
    }
    uVar2 = (*pcVar3)(arg1);
    if (uVar2 == 0) {
        if ((*(arg1 + 0x3a5) == '\0') && (iVar1 = sym.slim_device_alloc_laddr(arg1,0), iVar1 != 0)) {
            _dev_err(arg1,"Failed to get logical address\n");
            uVar2 = 0xfffffdfb;
        }
        else {
            if (*(arg1 + 0x3a0) != 1) {
                *(arg1 + 0x3a0) = 1;
                if ((*(arg1 + 0x88) != 0) && (pcVar3 = *(*(arg1 + 0x88) + -8), pcVar3 != NULL)) {
                    __cfi_slowpath_diag(0xcf049ca126c6d869,pcVar3,0x80003a0);
                    (*pcVar3)(arg1,*(arg1 + 0x3a0));
                }
            }
            uVar2 = 0;
        }
    }
    return uVar2;
}


// ===== sym.slim_device_remove @ 0x08001828 (size 120) =====

void sym.slim_device_remove(int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((*(arg1 + 0x88) != 0) && (pcVar1 = *(*(arg1 + 0x88) + -0x18), pcVar1 != NULL)) {
        if (pcVar1 != sym.__typeid__ZTSFvP11slim_deviceE_global_addr) {
            __cfi_slowpath_diag(0x8eecbb5b0c6f4d0f,pcVar1,0x8000380);
        }
        (*pcVar1)(arg1);
    }
    return;
}


// ===== sym.__slim_driver_register @ 0x080018a0 (size 88) =====

ulong sym.__slim_driver_register(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (((*(arg1 + 0x48) == 0) && (*(arg1 + 0xd0) == 0)) || (*arg1 == 0)) {
        uVar1 = 0xffffffea;
    }
    else {
        *(arg1 + 0x28) = obj.slimbus_bus;
        *(arg1 + 0x30) = arg2;
        uVar1 = driver_register(arg1 + 0x20);
    }
    return uVar1;
}


// ===== sym.slim_driver_unregister @ 0x080018f8 (size 40) =====

void sym.slim_driver_unregister(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    driver_unregister(arg1 + 0x20);
    return;
}


// ===== sym.slim_register_controller @ 0x08001920 (size 568) =====

ulong sym.slim_register_controller(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t arg3;
    int64_t iVar3;
    ulong *puVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    ulong uStack_80;
    ulong uStack_78;
    uchar uStack_70;
    uchar uStack_6f;
    ushort uStack_6e;
    ushort uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    uVar2 = ida_alloc_range(obj.ctrl_ida,0,0xffffffff,0xcc0);
    if (-1 < uVar2) {
        *(arg1 + 8) = uVar2;
        if (*(arg1 + 0x2c) == 0) {
            *(arg1 + 0x2c) = 1;
            iVar1 = *(arg1 + 0x30);
        }
        else {
            iVar1 = *(arg1 + 0x30);
        }
        if (iVar1 == 0) {
            *(arg1 + 0x30) = 10;
        }
        *(arg1 + 0x40) = 0;
        *(arg1 + 0x90) = 0x1000000400000000;
        *(arg1 + 0x98) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x3c) = 0x10000005;
        *(arg1 + 0xa0) = 0;
        __mutex_init(arg1 + 0x50,"&ctrl->lock",obj.slim_register_controller.__key);
        __mutex_init(arg1 + 0xd8,"&ctrl->sched.m_reconf",obj.slim_register_controller.__key);
        *(arg1 + 0xb8) = 0;
        __init_swait_queue_head(arg1 + 0xc0,"&x->wait",obj.slim_register_controller.__key);
        iVar5 = *arg1;
        *(arg1 + 0xa8) = 0;
        uVar2 = 0;
        if (*(iVar5 + 0x2f0) != 0) {
            for (arg3 = of_get_next_child(*(iVar5 + 0x2f0),0); uVar2 = 0, arg3 != 0;
                arg3 = of_get_next_child(*(*arg1 + 0x2f0),arg3)) {
                uStack_80 = 0;
                uStack_78 = 0;
                iVar3 = of_get_property(arg3,"compatible",0);
                if (iVar3 != 0) {
                    iVar1 = sscanf(iVar3,"slim%x,%x",&uStack_80 + 4,&uStack_80);
                    if (iVar1 == 2) {
                        iVar1 = of_property_read_variable_u32_array(arg3,0x8000878,&uStack_78,2,0);
                        if (iVar1 < 0) {
                            _dev_err(iVar5,"Device and Instance id not found:%d\n",iVar1);
                        }
                        else {
                            uStack_6f = uStack_78;
                            uStack_70 = uStack_78 >> 0x20;
                            uStack_6c = uStack_80 >> 0x20;
                            uStack_6e = uStack_80;
                            sym.slim_alloc_device(arg1,&uStack_70,arg3);
                        }
                    }
                    else {
                        _dev_err(iVar5,"Manf ID & Product code not found %s\n",iVar3);
                    }
                }
            }
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) != iStack_68) {
        puVar4 = __stack_chk_fail();
        *extraout_x18 = sym.slim_unregister_controller;
        device_for_each_child(*puVar4,0,sym.slim_ctrl_remove_device.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
        ida_free(obj.ctrl_ida,*(puVar4 + 1));
        return 0;
    }
    return uVar2;
}


// ===== sym.slim_unregister_controller @ 0x08001b58 (size 84) =====

ulong sym.slim_unregister_controller(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_for_each_child(*arg1,0,sym.slim_ctrl_remove_device.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
    ida_free(obj.ctrl_ida,*(arg1 + 8));
    return 0;
}


// ===== sym.slim_ctrl_remove_device @ 0x08001bac (size 40) =====

ulong sym.slim_ctrl_remove_device(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_unregister();
    return 0;
}


// ===== sym.slim_vote_for_suspend @ 0x08001bd4 (size 132) =====

ulong sym.slim_vote_for_suspend(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    code *pcVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0x398);
    if (iVar1 == 0) {
        uVar2 = 0xffffffea;
    }
    else {
        pcVar3 = *(iVar1 + 0x138);
        if (1 < (pcVar3 + -0x80015a8 >> 3 | pcVar3 << 0x3d)) {
            __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar3,0x8000340);
        }
        uVar2 = (*pcVar3)(iVar1);
    }
    return uVar2;
}


// ===== sym.slim_report_absent @ 0x08001c58 (size 176) =====

void sym.slim_report_absent(int64_t arg1)

{
    ulong *in_x18;
    code *pcVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x398);
    if (iVar2 != 0) {
        mutex_lock(iVar2 + 0x50);
        *(arg1 + 0x3a5) = 0;
        mutex_unlock(iVar2 + 0x50);
        if (*(iVar2 + 0x118) == 0) {
            ida_free(iVar2 + 0x38,*(arg1 + 0x3a4));
        }
        if (*(arg1 + 0x3a0) != 0) {
            *(arg1 + 0x3a0) = 0;
            if ((*(arg1 + 0x88) != 0) && (pcVar1 = *(*(arg1 + 0x88) + -8), pcVar1 != NULL)) {
                __cfi_slowpath_diag(0xcf049ca126c6d869,pcVar1,0x80003a0);
                (*pcVar1)(arg1,*(arg1 + 0x3a0));
            }
        }
    }
    return;
}


// ===== sym.slim_get_device @ 0x08001d08 (size 96) =====

int64_t sym.slim_get_device(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = device_find_child(*arg1,arg2,sym.slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
    if (iVar1 == 0) {
        iVar2 = sym.slim_alloc_device(arg1,arg2,0);
        iVar1 = -0xc;
        if (iVar2 != 0) {
            iVar1 = iVar2;
        }
    }
    return iVar1;
}


// ===== sym.slim_alloc_device @ 0x08001d68 (size 268) =====

int64_t sym.slim_alloc_device(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ushort uVar2;
    int iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = kmem_cache_alloc_trace(_of_match_device,0xdc0,0x3c0);
    if (iVar4 != 0) {
        uVar2 = *(arg2 + 4);
        *(iVar4 + 0x390) = *arg2;
        uVar5 = *arg1;
        *(iVar4 + 0x394) = uVar2;
        *(iVar4 + 0x60) = uVar5;
        *(iVar4 + 0x398) = arg1;
        *(iVar4 + 0x80) = obj.slimbus_bus;
        *(iVar4 + 0x88) = 0;
        *(iVar4 + 0x330) = sym.slim_dev_release.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt;
        *(iVar4 + 0x3a8) = iVar4 + 0x3a8;
        *(iVar4 + 0x3b0) = iVar4 + 0x3a8;
        *(iVar4 + 0x3b8) = 0;
        __mutex_init(arg1 + 0x140,"&ctrl->stream_lock",obj.slim_register_controller.__key);
        iVar1 = 0;
        if (arg3 != 0) {
            iVar1 = arg3 + 0x18;
        }
        *(iVar4 + 0x2f0) = arg3;
        *(iVar4 + 0x2f8) = iVar1;
        dev_set_name(iVar4,"%x:%x:%x:%x%s",*(iVar4 + 0x394),*(iVar4 + 0x392),*(iVar4 + 0x391),*(iVar4 + 0x390),
                     0x800089a);
        iVar3 = device_register(iVar4);
        if (iVar3 != 0) {
            put_device(iVar4);
            iVar4 = 0;
        }
    }
    return iVar4;
}


// ===== sym.of_slim_get_device @ 0x08001e74 (size 48) =====

void sym.of_slim_get_device(int64_t arg1)

{
    ulong in_x1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    device_find_child(*arg1,in_x1,sym.of_slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
    return;
}


// ===== sym.slim_device_report_present @ 0x08001ea4 (size 388) =====

int sym.slim_device_report_present(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    uint32_t uVar8;
    ulong *in_x18;
    int64_t iVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = __pm_runtime_resume(*arg1,4);
    if (-1 < iVar5) {
        if (*(arg1 + 0xb0) == 0) {
            uVar6 = device_find_child(*arg1,arg2,sym.slim_match_dev.6630c5cfd75b4cb02cd2164a2e68c769.cfi_jt);
            if (((uVar6 == 0) && (uVar6 = sym.slim_alloc_device(arg1,arg2,0), uVar6 == 0)) ||
               (0xfffffffffffff000 < uVar6)) {
                return -0x13;
            }
            if (*(uVar6 + 0x3a5) != '\0') {
                *arg3 = *(uVar6 + 0x3a4);
                return 0;
            }
            iVar5 = sym.slim_device_alloc_laddr(uVar6,1);
        }
        else {
            _dev_err(*arg1,"slim ctrl not active,state:%d, ret:%d\n",*(arg1 + 0xb0),iVar5);
        }
        iVar9 = *arg1;
        uVar7 = ktime_get_mono_fast_ns();
        *(iVar9 + 0x218) = uVar7;
        __pm_runtime_suspend(*arg1,0xd);
        return iVar5;
    }
    _dev_err(*arg1,"slim %s: PM get_sync failed ret :%d\n","slim_device_report_present",iVar5);
    puVar1 = *arg1 + 0x1f8;
    uVar6 = *puVar1;
    do {
        uVar8 = uVar6;
        if (uVar8 == 0) break;
        Hint_Prefetch(puVar1,2,0,1);
        do {
            uVar2 = *puVar1;
            uVar6 = uVar2;
            if (uVar2 != uVar8) goto code_r0x08001f94;
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
                *puVar1 = uVar8 - 1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
code_r0x08001f94:
    } while (uVar8 != uVar2);
    __pm_runtime_set_status(*arg1,2);
    return iVar5;
}


// ===== sym.slim_device_alloc_laddr @ 0x08002028 (size 480) =====

code * sym.slim_device_alloc_laddr(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    ulong *in_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar4 = *(arg1 + 0x398);
    auStack_4c[0] = 0;
    if (iVar4 == 0) {
        _printk(0x800093e,"slim_device_alloc_laddr");
        pcVar5 = 0xffffffea;
        arg1 = unaff_x19;
        goto code_r0x0800218c;
    }
    unaff_x20 = iVar4 + 0x50;
    mutex_lock(unaff_x20);
    pcVar5 = *(iVar4 + 0x118);
    if (pcVar5 == NULL) {
        if ((arg2 & 1U) == 0) goto code_r0x08002178;
        uVar2 = ida_alloc_range(iVar4 + 0x38,0,0xfd,0xcc0);
        pcVar5 = uVar2;
        if (uVar2 < 0) goto code_r0x08002184;
        auStack_4c[0] = uVar2;
        pcVar5 = *(iVar4 + 0x110);
        goto joined_r0x08002108;
    }
    if (pcVar5 != sym.__typeid__ZTSFiP15slim_controllerP10slim_eaddrPhE_global_addr) goto code_r0x080021e4;
    do {
        uVar2 = (*pcVar5)(iVar4,arg1 + 0x390,auStack_4c);
        if (uVar2 < 0) {
            pcVar5 = uVar2;
code_r0x08002184:
            mutex_unlock(unaff_x20);
        }
        else {
            pcVar5 = *(iVar4 + 0x110);
joined_r0x08002108:
            if (pcVar5 != NULL) {
                __cfi_slowpath_diag(0xb59f3ae1aa4322af,pcVar5,0x80003e0);
                iVar3 = (*pcVar5)(iVar4,arg1 + 0x390,auStack_4c[0]);
                if (iVar3 != 0) {
code_r0x08002178:
                    pcVar5 = 0xffffffea;
                    goto code_r0x08002184;
                }
            }
            iVar4 = 1;
            *(arg1 + 0x3a4) = auStack_4c[0];
            *(arg1 + 0x3a5) = 1;
            mutex_unlock(unaff_x20);
            if (*(arg1 + 0x3a0) != 1) {
                *(arg1 + 0x3a0) = 1;
                if ((*(arg1 + 0x88) != 0) && (unaff_x20 = *(*(arg1 + 0x88) + -8), unaff_x20 != NULL)) {
                    __cfi_slowpath_diag(0xcf049ca126c6d869,unaff_x20,0x80003a0);
                    (*unaff_x20)(arg1,*(arg1 + 0x3a0));
                }
            }
            pcVar5 = NULL;
        }
code_r0x0800218c:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) {
            return pcVar5;
        }
        __stack_chk_fail();
code_r0x080021e4:
        __cfi_slowpath_diag(0xcc4f2690911860b2,pcVar5,0x80003c0);
    } while( true );
}


// ===== sym.slim_get_logical_addr @ 0x08002208 (size 56) =====

ulong sym.slim_get_logical_addr(int64_t arg1)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x3a5) == '\0') {
        uVar1 = sym.slim_device_alloc_laddr(arg1,0);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.slim_match_dev @ 0x08002240 (size 88) =====

bool sym.slim_match_dev(int64_t arg1,int64_t arg2)

{
    if (((*(arg1 + 0x394) == *(arg2 + 4)) && (*(arg1 + 0x392) == *(arg2 + 2))) && (*(arg1 + 0x391) == *(arg2 + 1))) {
        return *(arg1 + 0x390) == *arg2;
    }
    return false;
}


// ===== sym.slim_dev_release @ 0x08002298 (size 36) =====

void sym.slim_dev_release(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    kfree();
    return;
}


// ===== sym.of_slim_match_dev @ 0x080022bc (size 24) =====

bool sym.of_slim_match_dev(int64_t arg1,uint32_t arg2)

{
    return *(arg1 + 0x2f0) == arg2;
}


// ===== sym.__cfi_check_fail @ 0x080022d4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08002318

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
    //switch table (4 cases) at 0x8000480
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800232c);
    (*pcVar1)();
}


// ===== sym.slim_msg_response @ 0x0800232c (size 264) =====

void sym.slim_msg_response(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t iVar3;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = arg1 + 0xa8;
    uVar1 = _raw_spin_lock_irqsave(iVar3);
    iVar2 = idr_find(arg1 + 0x90,arg3 & 0xff);
    _raw_spin_unlock_irqrestore(iVar3,uVar1);
    if (iVar2 != 0) {
        iVar4 = *(iVar2 + 8);
        if ((iVar4 == 0) || (*(iVar4 + 8) == 0)) {
            _dev_err(*arg1,"Got response to invalid TID:%d, len:%d\n",arg3 & 0xff,arg4 & 0xff);
        }
        else {
            uVar1 = _raw_spin_lock_irqsave(iVar3);
            idr_remove(arg1 + 0x90,*(iVar2 + 6));
            _raw_spin_unlock_irqrestore(iVar3,uVar1);
            __memcpy_fromio(*(iVar4 + 8),arg2,arg4 & 0xff);
            if (*(iVar2 + 0x10) != 0) {
                complete();
            }
            iVar3 = *arg1;
            uVar1 = ktime_get_mono_fast_ns();
            *(iVar3 + 0x218) = uVar1;
            __pm_runtime_suspend(*arg1,0xd);
        }
    }
    return;
}


// ===== sym.slim_free_txn_tid @ 0x08002434 (size 96) =====

void sym.slim_free_txn_tid(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = _raw_spin_lock_irqsave(arg1 + 0xa8);
    idr_remove(arg1 + 0x90,*(arg2 + 6));
    _raw_spin_unlock_irqrestore(arg1 + 0xa8,uVar1);
    return;
}


// ===== sym.slim_alloc_txn_tid @ 0x08002494 (size 128) =====

void sym.slim_alloc_txn_tid(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_irqsave(arg1 + 0xa8);
    return;
}


// ===== sym.slim_do_transfer @ 0x08002514 (size 996) =====

//WARNING: Type propagation algorithm not settling

code * sym.slim_do_transfer(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    char cVar5;
    bool bVar6;
    uint32_t uVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    uint8_t *puVar10;
    code *pcVar11;
    ulong uVar12;
    uint64_t unaff_x23;
    uint32_t unaff_w25;
    ulong uVar13;
    ulong unaff_x30;
    ulong uStack_88;
    ulong uStack_80;
    ulong *******pppppppuStack_78;
    ulong *******pppppppuStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    pppppppuStack_78 = &pppppppuStack_78;
    uStack_88 = 0;
    uStack_80 = 0;
    puVar10 = arg2;
    pppppppuStack_70 = pppppppuStack_78;
    if (*(arg1 + 0xb0) == 1) {
        if (*(arg2 + 1) == '\0') {
            *(arg2 + 6) = 0;
            uVar3 = *(arg2 + 2);
            bVar6 = (uVar3 & 0xe0) == 0x40;
code_r0x080025c4:
            if ((uVar3 - 0x60 < 2) || (uVar3 - 0x20 < 2)) {
                iVar1 = arg1 + 0xa8;
                unaff_x23 = _raw_spin_lock_irqsave(iVar1);
                uVar7 = idr_alloc_cyclic(arg1 + 0x90,arg2,1,0x100,0xa20);
                pcVar11 = uVar7;
                if (uVar7 < 0) {
                    _raw_spin_unlock_irqrestore(iVar1,unaff_x23);
                    goto code_r0x08002740;
                }
                *(arg2 + 6) = uVar7;
                _raw_spin_unlock_irqrestore(iVar1,unaff_x23);
                if (*(*(arg2 + 8) + 0x18) != 0) {
                    unaff_w25 = 1;
                    goto joined_r0x0800262c;
                }
                uVar13 = *(arg2 + 0x10);
                unaff_w25 = 1;
                *(arg2 + 0x10) = &uStack_88;
                if (!bVar6) goto code_r0x08002670;
            }
            else {
                unaff_w25 = 0;
joined_r0x0800262c:
                if (!bVar6) {
                    uVar13 = 0;
                    goto code_r0x08002670;
                }
            }
            unaff_x23 = 1;
            goto code_r0x08002690;
        }
        uVar13 = 0;
        unaff_w25 = 0;
        *(arg2 + 6) = 0;
    }
    else {
        *(arg2 + 6) = 0;
        if (*(arg2 + 1) == '\0') {
            bVar6 = false;
            uVar3 = *(arg2 + 2);
            goto code_r0x080025c4;
        }
        uVar13 = 0;
        unaff_w25 = 0;
    }
code_r0x08002670:
    uVar7 = __pm_runtime_resume(*arg1,4);
    pcVar11 = uVar7;
    if (uVar7 < 0) {
        _dev_err(*arg1,"runtime resume failed ret:%d\n",pcVar11);
        unaff_x23 = _raw_spin_lock_irqsave(arg1 + 0xa8);
        idr_remove(arg1 + 0x90,*(arg2 + 6));
        _raw_spin_unlock_irqrestore(arg1 + 0xa8,unaff_x23);
        puVar2 = *arg1 + 0x1f8;
        uVar9 = *puVar2;
        do {
            uVar7 = uVar9;
            if (uVar7 == 0) break;
            Hint_Prefetch(puVar2,2,0,1);
            do {
                uVar4 = *puVar2;
                uVar9 = uVar4;
                if (uVar4 != uVar7) goto code_r0x080027ec;
                cVar5 = '\x01';
                bVar6 = ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                    *puVar2 = uVar7 - 1;
                    cVar5 = ExclusiveMonitorsStatus();
                }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
code_r0x080027ec:
        } while (uVar7 != uVar4);
        __pm_runtime_set_status(*arg1,2);
        if (unaff_w25 == 0) goto code_r0x08002740;
        if (*(*(arg2 + 8) + 0x18) != 0) goto code_r0x08002740;
        *(arg2 + 0x10) = uVar13;
        goto code_r0x08002740;
    }
    if (*(arg1 + 0xb0) != 0) {
        _dev_err(*arg1,"ctrl wrong state:%d, ret:%d\n",*(arg1 + 0xb0),pcVar11);
        if (unaff_w25 == 0) goto code_r0x08002718;
        if (*(*(arg2 + 8) + 0x18) != 0) goto code_r0x08002718;
        *(arg2 + 0x10) = uVar13;
        goto code_r0x08002718;
    }
    unaff_x23 = 0;
code_r0x08002690:
    pcVar11 = *(arg1 + 0x108);
    if (1 < (pcVar11 + -0x8001598 >> 3 | pcVar11 << 0x3d)) goto code_r0x080028b0;
    do {
        uVar7 = (*pcVar11)(arg1,puVar10);
        if (((unaff_w25 ^ 1) & 1) == 0 && uVar7 == 0) {
            if (*(*(puVar10 + 8) + 0x18) == 0) {
                uVar12 = *(puVar10 + 0x10);
                uVar13 = __msecs_to_jiffies(*puVar10 + 0xfa);
                iVar8 = wait_for_completion_timeout(uVar12,uVar13);
                if (iVar8 == 0) {
                    uVar13 = _raw_spin_lock_irqsave(arg1 + 0xa8);
                    idr_remove(arg1 + 0x90,*(arg2 + 6));
                    _raw_spin_unlock_irqrestore(arg1 + 0xa8,uVar13);
                    pcVar11 = 0xffffff92;
                    goto code_r0x08002884;
                }
                pcVar11 = NULL;
            }
            else {
                pcVar11 = NULL;
            }
        }
        else {
            pcVar11 = uVar7;
            if (uVar7 != 0) {
code_r0x08002884:
                _dev_err(*arg1,"Tx:MT:0x%x, MC:0x%x, LA:0x%x failed:%d\n",puVar10[1],puVar10[2],puVar10[7],pcVar11)
                ;
            }
        }
        if ((unaff_x23 & 1) == 0) {
code_r0x08002718:
            if ((*(arg2 + 6) == '\0') || (pcVar11 == -0x6e)) {
                puVar10 = *arg1;
                uVar13 = ktime_get_mono_fast_ns();
                *(puVar10 + 0x218) = uVar13;
                __pm_runtime_suspend(*arg1,0xd);
            }
        }
code_r0x08002740:
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_68) {
            return pcVar11;
        }
        __stack_chk_fail();
code_r0x080028b0:
        __cfi_slowpath_diag(0x65e2fc7b0d9880a3,pcVar11,0x8000400);
    } while( true );
}


// ===== sym.slim_xfer_msg @ 0x080028f8 (size 440) =====

code * sym.slim_xfer_msg(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong *arg1_00;
    int64_t arg1_01;
    ulong uVar8;
    int64_t iVar9;
    uchar uVar10;
    uint64_t in_x3;
    char cVar11;
    code *pcVar12;
    uint32_t uVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    int64_t unaff_x19;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    unkbyte10 Var17;
    uchar auVar18 [16];
    ulong uStack_1e8;
    ulong *puStack_1e0;
    ulong uStack_1d8;
    ulong uStack_1d0;
    ulong uStack_1c8;
    uchar *puStack_1c0;
    ulong uStack_1b8;
    uchar auStack_1ac [4];
    int64_t iStack_1a8;
    ulong ***pppuStack_1a0;
    code *pcStack_198;
    uchar auStack_15c [4];
    ushort uStack_158;
    unkbyte6 Stack_156;
    ulong uStack_150;
    uchar *puStack_148;
    ulong uStack_140;
    int64_t iStack_138;
    ulong ***pppuStack_130;
    code *pcStack_128;
    ulong uStack_118;
    ulong uStack_110;
    uint64_t uStack_108;
    ulong uStack_100;
    int64_t iStack_f8;
    uchar ***pppuStack_f0;
    code *pcStack_e8;
    uint8_t auStack_d4 [4];
    ushort uStack_d0;
    unkbyte6 Stack_ce;
    uint8_t *puStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    uchar uStack_b0;
    ushort uStack_af;
    uchar uStack_ad;
    uint16_t uStack_ac;
    uchar uStack_aa;
    uchar uStack_a9;
    ushort *puStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar **ppuStack_90;
    code *pcStack_88;
    ulong uStack_80;
    uint64_t uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uchar uStack_60;
    ushort uStack_5f;
    uchar uStack_5d;
    uint16_t uStack_5c;
    uchar uStack_5a;
    uchar uStack_59;
    uchar *puStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    uchar *puStack_40;
    code *pcStack_38;
    char acStack_30 [3];
    uchar uStack_2d;
    uint16_t uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    int64_t iStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    uVar5 = arg3;
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_18 = *(iVar14 + 0x5e0);
    uStack_29 = *(arg1 + 0x3a4);
    acStack_30[0] = '\x06';
    acStack_30[1] = 0;
    acStack_30[2] = arg3;
    uStack_2d = 0;
    pcVar12 = 0xffffffea;
    uStack_2a = 0;
    uStack_20 = 0;
    iStack_28 = arg2;
    if ((arg2 != 0) && (puVar6 = *(arg1 + 0x398), puVar6 != NULL)) {
        uVar2 = *(arg2 + 2);
        if (uVar2 < 0x11) {
            uVar3 = *arg2;
            uVar13 = uVar3;
            if (uVar3 + uVar2 < 0xc01) {
                uVar1 = uVar5 & 0xff;
                if (uVar1 < 0x60) {
                    if (uVar1 == 0x20) {
code_r0x080029a4:
                        iVar14 = *(arg2 + 8);
joined_r0x080029a8:
                        if (iVar14 != 0) {
                            uVar13 = uVar2;
                            if (uVar13 < 2) {
                                uVar13 = 1;
                            }
                            if (0xf < uVar13) {
                                uVar13 = 0x10;
                            }
                            uVar1 = uVar5 & 0xff;
                            uStack_2c = obj.slim_slicesize.sizetocode[uVar13 - 1] | uVar3 << 4 | 8;
                            cVar11 = '\a';
                            if (uVar1 < 0x61) {
                                if ((uVar1 == 0x21) || (uVar1 == 0x28)) {
code_r0x08002a24:
                                    acStack_30[0] = uVar2 + 6;
                                    cVar11 = uVar2 + 7;
                                }
                            }
                            else if ((uVar1 == 0x68) || (uVar1 == 0x61)) goto code_r0x08002a24;
                            acStack_30[1] = 0;
                            if (((uVar5 & 0xff) - 0x60 < 2) || ((uVar5 & 0xff) - 0x20 < 2)) {
                                acStack_30[0] = cVar11;
                            }
                            uVar7 = sym.slim_do_transfer(puVar6,acStack_30);
                            pcVar12 = uVar7 & 0xffffffff;
                            goto code_r0x08002a5c;
                        }
                    }
                    else if (uVar1 == 0x21) {
code_r0x080029b0:
                        if (*(arg2 + 8) != 0) goto code_r0x080029b8;
                    }
                    else if (uVar1 == 0x28) goto code_r0x080029b8;
                }
                else {
                    if (uVar1 == 0x68) {
code_r0x080029b8:
                        iVar14 = *(arg2 + 0x10);
                        goto joined_r0x080029a8;
                    }
                    if (uVar1 == 0x61) goto code_r0x080029b0;
                    if (uVar1 == 0x60) goto code_r0x080029a4;
                }
            }
        }
        else {
            uVar13 = *arg2;
        }
        in_x3 = uVar5 & 0xff;
        uVar5 = uVar13;
        _dev_err(*puVar6,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
        pcVar12 = 0xffffffea;
    }
code_r0x08002a5c:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_18) {
        return pcVar12;
    }
    auVar16 = __stack_chk_fail();
    puStack_58 = &uStack_80;
    *extraout_x18 = sym.slim_read;
    pcStack_38 = sym.slim_read;
    iVar14 = sp_el0;
    iStack_48 = *(iVar14 + 0x5e0);
    uStack_5f = 0x6000;
    uStack_59 = *(auVar16._0_8_ + 0x3a4);
    arg1_00 = *(auVar16._0_8_ + 0x398);
    uVar10 = uVar5;
    uStack_80 = CONCAT12(uVar10,auVar16._8_2_);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_5d = 0;
    uStack_5a = 0;
    uStack_50 = 0;
    uStack_78 = in_x3;
    puVar6 = &uStack_80;
    puStack_40 = &stack0xfffffffffffffff0;
    if (arg1_00 == NULL) {
code_r0x08002b8c:
        puStack_58 = puVar6;
        pcVar12 = 0xffffffea;
    }
    else {
        if (((0x10 < (uVar5 & 0xff)) || (in_x3 == 0)) ||
           (uVar5 = uVar5 & 0xff, 0xc00 < uVar5 + (auVar16._8_4_ & 0xffff))) {
            uVar10 = auVar16[8];
            in_x3 = 0x60;
            _dev_err(*arg1_00,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            puVar6 = puStack_58;
            goto code_r0x08002b8c;
        }
        if (uVar5 < 2) {
            uVar5 = 1;
        }
        if (0xf < uVar5) {
            uVar5 = 0x10;
        }
        uStack_60 = 7;
        uStack_5c = obj.slim_slicesize.sizetocode[uVar5 - 1] | auVar16._8_4_ << 4 | 8;
        puStack_58 = &uStack_80;
        pcVar12 = sym.slim_do_transfer(arg1_00,&uStack_60);
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_48) {
        return pcVar12;
    }
    auVar16 = __stack_chk_fail(pcVar12);
    *extraout_x18_00 = sym.slim_readb;
    pcStack_88 = sym.slim_readb;
    iVar14 = sp_el0;
    iStack_98 = *(iVar14 + 0x5e0);
    puStack_c8 = auStack_d4;
    auStack_d4[0] = 0;
    uStack_af = 0x6000;
    uStack_a9 = *(auVar16._0_8_ + 0x3a4);
    puVar6 = *(auVar16._0_8_ + 0x398);
    _uStack_d0 = CONCAT62(1,auVar16._8_2_);
    uStack_c0 = 0;
    uStack_b8 = 0;
    puStack_a8 = &uStack_d0;
    uStack_ad = 0;
    uStack_aa = 0;
    uStack_a0 = 0;
    ppuStack_90 = &puStack_40;
    if (puVar6 == NULL) {
code_r0x08002c64:
        pcVar12 = 0xffffffea;
    }
    else {
        uVar5 = auVar16._8_4_ & 0xffff;
        if (0xbff < uVar5) {
            in_x3 = 0x60;
            _dev_err(*puVar6,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            uVar10 = uVar5;
            goto code_r0x08002c64;
        }
        uStack_ac = auVar16._8_4_ << 4 | 8;
        uStack_b0 = 7;
        pcVar12 = sym.slim_do_transfer(puVar6,&uStack_b0);
        uVar10 = uVar5;
        if (-1 < pcVar12) {
            pcVar12 = auStack_d4[0];
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_98) {
        return pcVar12;
    }
    Var17 = __stack_chk_fail(pcVar12);
    *extraout_x18_01 = sym.slim_write;
    pcStack_e8 = sym.slim_write;
    iVar14 = sp_el0;
    iStack_f8 = *(iVar14 + 0x5e0);
    uStack_110 = 0;
    uStack_118 = CONCAT12(uVar10,Var17 >> 0x40);
    auStack_15c[0] = 0x68;
    uStack_100 = 0;
    uStack_108 = in_x3;
    pppuStack_f0 = &ppuStack_90;
    pcVar12 = sym.slim_xfer_msg(Var17,&uStack_118,0x68);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_f8) {
        return pcVar12;
    }
    Var17 = __stack_chk_fail();
    *extraout_x18_02 = sym.slim_writeb;
    pcStack_128 = sym.slim_writeb;
    iVar14 = sp_el0;
    iStack_138 = *(iVar14 + 0x5e0);
    puStack_148 = auStack_15c;
    uVar5 = 0x68;
    uStack_150 = 0;
    _uStack_158 = CONCAT62(1,Var17 >> 0x40);
    uStack_140 = 0;
    pppuStack_130 = &pppuStack_f0;
    pcVar12 = sym.slim_xfer_msg(Var17,&uStack_158,0x68);
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_138) {
        return pcVar12;
    }
    auVar18 = __stack_chk_fail();
    arg1_01 = auVar18._0_8_;
    *extraout_x18_03 = sym.slim_ctrl_clk_pause;
    pcStack_198 = sym.slim_ctrl_clk_pause;
    iVar14 = sp_el0;
    iStack_1a8 = *(iVar14 + 0x5e0);
    puStack_1e0 = &uStack_1d0;
    auStack_1ac[0] = uVar5;
    puStack_1c0 = NULL;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e8 = 0xff00000003400003;
    uStack_1d8 = 0;
    pppuStack_1a0 = &pppuStack_130;
    if (((uVar5 & 0xff) < 3) || ((auVar18._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_01 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar18._8_8_ & 1) == 0) {
            if (*(arg1_01 + 0xb0) != 2) {
                iVar14 = arg1_01 + 0xa8;
                uVar8 = _raw_spin_lock_irqsave(iVar14);
                iVar15 = 0;
                while (iVar9 = idr_find(arg1_01 + 0x90,iVar15), iVar9 == 0) {
                    iVar15 = iVar15 + 1;
                    if (iVar15 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar14,uVar8);
                        *(arg1_01 + 0xb0) = 1;
                        uVar5 = sym.slim_do_transfer(arg1_01,&uStack_1e8);
                        pcVar12 = uVar5;
                        if (uVar5 != 0) goto code_r0x08002f18;
                        puStack_1c0 = auStack_1ac;
                        uStack_1d0._0_3_ = CONCAT12(1,uStack_1d0);
                        uStack_1e8._0_3_ = CONCAT12(0x4a,uStack_1e8);
                        uStack_1e8 = CONCAT71(uStack_1e8._1_7_,4);
                        uVar5 = sym.slim_do_transfer(arg1_01,&uStack_1e8);
                        pcVar12 = uVar5;
                        if (uVar5 != 0) goto code_r0x08002f18;
                        puStack_1c0 = NULL;
                        uStack_1e8._0_3_ = CONCAT12(0x5f,uStack_1e8);
                        uStack_1e8 = CONCAT71(uStack_1e8._1_7_,3);
                        uStack_1d0._0_3_ = CONCAT12(1,uStack_1d0);
                        uVar5 = sym.slim_do_transfer(arg1_01,&uStack_1e8);
                        pcVar12 = uVar5;
                        if (uVar5 != 0) goto code_r0x08002f18;
                        *(arg1_01 + 0xb0) = 2;
                        complete(arg1_01 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar14,uVar8);
                mutex_unlock(unaff_x19);
                pcVar12 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_01 + 0xb0) != 0) {
            iVar4 = wait_for_completion_timeout(arg1_01 + 0xb8,0x19);
            if (iVar4 != 0) {
                if (*(arg1_01 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar12 = *(arg1_01 + 0x130);
                if (pcVar12 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar12 + -0x80015a8 >> 3 | pcVar12 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar12 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar12 = NULL;
    }
    else {
        pcVar12 = 0xffffffea;
    }
code_r0x08002f40:
    while (iVar14 = sp_el0, *(iVar14 + 0x5e0) != iStack_1a8) {
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar12,0x8000420);
code_r0x08002e2c:
        uVar5 = (*pcVar12)(arg1_01);
        pcVar12 = uVar5;
        if (uVar5 == 0) {
code_r0x08002e3c:
            pcVar12 = NULL;
code_r0x08002f18:
            *(arg1_01 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar12;
}


// ===== sym.slim_read @ 0x08002ab0 (size 268) =====

code * sym.slim_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1_00;
    code *pcVar4;
    ulong *puVar5;
    int64_t arg1_01;
    ulong uVar6;
    int64_t iVar7;
    uchar uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int64_t unaff_x19;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [12];
    unkbyte10 Var11;
    uchar auVar12 [16];
    ulong uStack_1b8;
    ulong *puStack_1b0;
    ulong uStack_1a8;
    ulong uStack_1a0;
    ulong uStack_198;
    uchar *puStack_190;
    ulong uStack_188;
    uchar auStack_17c [4];
    int64_t iStack_178;
    ulong ***pppuStack_170;
    code *pcStack_168;
    uchar auStack_12c [4];
    ushort uStack_128;
    unkbyte6 Stack_126;
    ulong uStack_120;
    uchar *puStack_118;
    ulong uStack_110;
    int64_t iStack_108;
    uchar ***pppuStack_100;
    code *pcStack_f8;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uint8_t auStack_a4 [4];
    ushort uStack_a0;
    unkbyte6 Stack_9e;
    uint8_t *puStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uchar uStack_80;
    ushort uStack_7f;
    uchar uStack_7d;
    uint16_t uStack_7c;
    uchar uStack_7a;
    uchar uStack_79;
    ushort *puStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uchar uStack_30;
    ushort uStack_2f;
    uchar uStack_2d;
    uint16_t uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    uchar *puStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    uVar8 = arg3;
    puStack_28 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_2f = 0x6000;
    uStack_29 = *(arg1 + 0x3a4);
    arg1_00 = *(arg1 + 0x398);
    uStack_50 = CONCAT12(uVar8,arg2);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_2d = 0;
    uStack_2a = 0;
    uStack_20 = 0;
    iStack_48 = arg4;
    puVar5 = &uStack_50;
    if (arg1_00 == NULL) {
code_r0x08002b8c:
        puStack_28 = puVar5;
        pcVar4 = 0xffffffea;
    }
    else {
        if (((0x10 < (arg3 & 0xff)) || (arg4 == 0)) || (uVar3 = arg3 & 0xff, 0xc00 < uVar3 + (arg2 & 0xffff))) {
            uVar8 = arg2;
            arg4 = 0x60;
            _dev_err(*arg1_00,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            puVar5 = puStack_28;
            goto code_r0x08002b8c;
        }
        if (uVar3 < 2) {
            uVar3 = 1;
        }
        if (0xf < uVar3) {
            uVar3 = 0x10;
        }
        uStack_30 = 7;
        uStack_2c = obj.slim_slicesize.sizetocode[uVar3 - 1] | arg2 << 4 | 8;
        puStack_28 = &uStack_50;
        pcVar4 = sym.slim_do_transfer(arg1_00,&uStack_30);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    auVar10 = __stack_chk_fail(pcVar4);
    *extraout_x18 = sym.slim_readb;
    pcStack_58 = sym.slim_readb;
    iVar1 = sp_el0;
    iStack_68 = *(iVar1 + 0x5e0);
    puStack_98 = auStack_a4;
    auStack_a4[0] = 0;
    uStack_7f = 0x6000;
    uStack_79 = *(auVar10._0_8_ + 0x3a4);
    puVar5 = *(auVar10._0_8_ + 0x398);
    _uStack_a0 = CONCAT62(1,auVar10._8_2_);
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_78 = &uStack_a0;
    uStack_7d = 0;
    uStack_7a = 0;
    uStack_70 = 0;
    puStack_60 = &stack0xfffffffffffffff0;
    if (puVar5 == NULL) {
code_r0x08002c64:
        pcVar4 = 0xffffffea;
    }
    else {
        uVar3 = auVar10._8_4_ & 0xffff;
        if (0xbff < uVar3) {
            arg4 = 0x60;
            _dev_err(*puVar5,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            uVar8 = uVar3;
            goto code_r0x08002c64;
        }
        uStack_7c = auVar10._8_4_ << 4 | 8;
        uStack_80 = 7;
        pcVar4 = sym.slim_do_transfer(puVar5,&uStack_80);
        uVar8 = uVar3;
        if (-1 < pcVar4) {
            pcVar4 = auStack_a4[0];
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return pcVar4;
    }
    Var11 = __stack_chk_fail(pcVar4);
    *extraout_x18_00 = sym.slim_write;
    pcStack_b8 = sym.slim_write;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    uStack_e0 = 0;
    uStack_e8 = CONCAT12(uVar8,Var11 >> 0x40);
    auStack_12c[0] = 0x68;
    uStack_d0 = 0;
    iStack_d8 = arg4;
    ppuStack_c0 = &puStack_60;
    pcVar4 = sym.slim_xfer_msg(Var11,&uStack_e8,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_c8) {
        return pcVar4;
    }
    Var11 = __stack_chk_fail();
    *extraout_x18_01 = sym.slim_writeb;
    pcStack_f8 = sym.slim_writeb;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    puStack_118 = auStack_12c;
    uVar3 = 0x68;
    uStack_120 = 0;
    _uStack_128 = CONCAT62(1,Var11 >> 0x40);
    uStack_110 = 0;
    pppuStack_100 = &ppuStack_c0;
    pcVar4 = sym.slim_xfer_msg(Var11,&uStack_128,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar4;
    }
    auVar12 = __stack_chk_fail();
    arg1_01 = auVar12._0_8_;
    *extraout_x18_02 = sym.slim_ctrl_clk_pause;
    pcStack_168 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_178 = *(iVar1 + 0x5e0);
    puStack_1b0 = &uStack_1a0;
    auStack_17c[0] = uVar3;
    puStack_190 = NULL;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_1b8 = 0xff00000003400003;
    uStack_1a8 = 0;
    pppuStack_170 = &pppuStack_100;
    if (((uVar3 & 0xff) < 3) || ((auVar12._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_01 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar12._8_8_ & 1) == 0) {
            if (*(arg1_01 + 0xb0) != 2) {
                iVar1 = arg1_01 + 0xa8;
                uVar6 = _raw_spin_lock_irqsave(iVar1);
                iVar9 = 0;
                while (iVar7 = idr_find(arg1_01 + 0x90,iVar9), iVar7 == 0) {
                    iVar9 = iVar9 + 1;
                    if (iVar9 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar6);
                        *(arg1_01 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1_01,&uStack_1b8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_190 = auStack_17c;
                        uStack_1a0._0_3_ = CONCAT12(1,uStack_1a0);
                        uStack_1b8._0_3_ = CONCAT12(0x4a,uStack_1b8);
                        uStack_1b8 = CONCAT71(uStack_1b8._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1_01,&uStack_1b8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_190 = NULL;
                        uStack_1b8._0_3_ = CONCAT12(0x5f,uStack_1b8);
                        uStack_1b8 = CONCAT71(uStack_1b8._1_7_,3);
                        uStack_1a0._0_3_ = CONCAT12(1,uStack_1a0);
                        uVar3 = sym.slim_do_transfer(arg1_01,&uStack_1b8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1_01 + 0xb0) = 2;
                        complete(arg1_01 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar6);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_01 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1_01 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1_01 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1_01 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while (iVar1 = sp_el0, *(iVar1 + 0x5e0) != iStack_178) {
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1_01);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1_01 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_readb @ 0x08002bbc (size 216) =====

code * sym.slim_readb(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong *arg1_00;
    code *pcVar4;
    int64_t arg1_01;
    ulong uVar5;
    int64_t iVar6;
    uchar in_w2;
    ulong in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    int64_t iVar7;
    ulong unaff_x30;
    unkbyte10 Var8;
    uchar auVar9 [16];
    ulong uStack_168;
    ulong *puStack_160;
    ulong uStack_158;
    ulong uStack_150;
    ulong uStack_148;
    uchar *puStack_140;
    ulong uStack_138;
    uchar auStack_12c [4];
    int64_t iStack_128;
    ulong **ppuStack_120;
    code *pcStack_118;
    uchar auStack_dc [4];
    ushort uStack_d8;
    unkbyte6 Stack_d6;
    ulong uStack_d0;
    uchar *puStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint8_t auStack_54 [4];
    ushort uStack_50;
    unkbyte6 Stack_4e;
    uint8_t *puStack_48;
    ulong uStack_40;
    ulong uStack_38;
    uchar uStack_30;
    ushort uStack_2f;
    uchar uStack_2d;
    uint16_t uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    ushort *puStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    puStack_48 = auStack_54;
    auStack_54[0] = 0;
    uStack_2f = 0x6000;
    uStack_29 = *(arg1 + 0x3a4);
    arg1_00 = *(arg1 + 0x398);
    _uStack_50 = CONCAT62(1,arg2);
    uStack_40 = 0;
    uStack_38 = 0;
    puStack_28 = &uStack_50;
    uStack_2d = 0;
    uStack_2a = 0;
    uStack_20 = 0;
    if (arg1_00 == NULL) {
code_r0x08002c64:
        pcVar4 = 0xffffffea;
    }
    else {
        uVar3 = arg2 & 0xffff;
        if (0xbff < uVar3) {
            in_x3 = 0x60;
            _dev_err(*arg1_00,"Sanity check failed:msg:offset:0x%x, mc:%d\n");
            in_w2 = uVar3;
            goto code_r0x08002c64;
        }
        uStack_2c = arg2 << 4 | 8;
        uStack_30 = 7;
        pcVar4 = sym.slim_do_transfer(arg1_00,&uStack_30);
        in_w2 = uVar3;
        if (-1 < pcVar4) {
            pcVar4 = auStack_54[0];
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    Var8 = __stack_chk_fail(pcVar4);
    *extraout_x18 = sym.slim_write;
    pcStack_68 = sym.slim_write;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    uStack_90 = 0;
    uStack_98 = CONCAT12(in_w2,Var8 >> 0x40);
    auStack_dc[0] = 0x68;
    uStack_80 = 0;
    uStack_88 = in_x3;
    puStack_70 = &stack0xfffffffffffffff0;
    pcVar4 = sym.slim_xfer_msg(Var8,&uStack_98,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_78) {
        return pcVar4;
    }
    Var8 = __stack_chk_fail();
    *extraout_x18_00 = sym.slim_writeb;
    pcStack_a8 = sym.slim_writeb;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    puStack_c8 = auStack_dc;
    uVar3 = 0x68;
    uStack_d0 = 0;
    _uStack_d8 = CONCAT62(1,Var8 >> 0x40);
    uStack_c0 = 0;
    ppuStack_b0 = &puStack_70;
    pcVar4 = sym.slim_xfer_msg(Var8,&uStack_d8,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return pcVar4;
    }
    auVar9 = __stack_chk_fail();
    arg1_01 = auVar9._0_8_;
    *extraout_x18_01 = sym.slim_ctrl_clk_pause;
    pcStack_118 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_128 = *(iVar1 + 0x5e0);
    puStack_160 = &uStack_150;
    auStack_12c[0] = uVar3;
    puStack_140 = NULL;
    uStack_138 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_168 = 0xff00000003400003;
    uStack_158 = 0;
    ppuStack_120 = &ppuStack_b0;
    if (((uVar3 & 0xff) < 3) || ((auVar9._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_01 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar9._8_8_ & 1) == 0) {
            if (*(arg1_01 + 0xb0) != 2) {
                iVar1 = arg1_01 + 0xa8;
                uVar5 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar6 = idr_find(arg1_01 + 0x90,iVar7), iVar6 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar5);
                        *(arg1_01 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1_01,&uStack_168);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_140 = auStack_12c;
                        uStack_150._0_3_ = CONCAT12(1,uStack_150);
                        uStack_168._0_3_ = CONCAT12(0x4a,uStack_168);
                        uStack_168 = CONCAT71(uStack_168._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1_01,&uStack_168);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_140 = NULL;
                        uStack_168._0_3_ = CONCAT12(0x5f,uStack_168);
                        uStack_168 = CONCAT71(uStack_168._1_7_,3);
                        uStack_150._0_3_ = CONCAT12(1,uStack_150);
                        uVar3 = sym.slim_do_transfer(arg1_01,&uStack_168);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1_01 + 0xb0) = 2;
                        complete(arg1_01 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_01 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1_01 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1_01 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1_01 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_128) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1_01);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1_01 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_write @ 0x08002c94 (size 104) =====

code * sym.slim_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int64_t arg1_00;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t iVar7;
    ulong unaff_x30;
    unkbyte10 Var8;
    uchar auVar9 [16];
    ulong uStack_108;
    ulong *puStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    uchar *puStack_e0;
    ulong uStack_d8;
    uchar auStack_cc [4];
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    uchar auStack_7c [4];
    ushort uStack_78;
    unkbyte6 Stack_76;
    ulong uStack_70;
    uchar *puStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    uchar *puStack_50;
    code *pcStack_48;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    uStack_30 = 0;
    uStack_38 = CONCAT12(arg3,arg2);
    auStack_7c[0] = 0x68;
    uStack_20 = 0;
    iStack_28 = arg4;
    pcVar4 = sym.slim_xfer_msg(arg1,&uStack_38,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    Var8 = __stack_chk_fail();
    *extraout_x18 = sym.slim_writeb;
    pcStack_48 = sym.slim_writeb;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    puStack_68 = auStack_7c;
    uVar3 = 0x68;
    uStack_70 = 0;
    _uStack_78 = CONCAT62(1,Var8 >> 0x40);
    uStack_60 = 0;
    puStack_50 = &stack0xfffffffffffffff0;
    pcVar4 = sym.slim_xfer_msg(Var8,&uStack_78,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return pcVar4;
    }
    auVar9 = __stack_chk_fail();
    arg1_00 = auVar9._0_8_;
    *extraout_x18_00 = sym.slim_ctrl_clk_pause;
    pcStack_b8 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_c8 = *(iVar1 + 0x5e0);
    puStack_100 = &uStack_f0;
    auStack_cc[0] = uVar3;
    puStack_e0 = NULL;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_108 = 0xff00000003400003;
    uStack_f8 = 0;
    ppuStack_c0 = &puStack_50;
    if (((uVar3 & 0xff) < 3) || ((auVar9._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_00 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar9._8_8_ & 1) == 0) {
            if (*(arg1_00 + 0xb0) != 2) {
                iVar1 = arg1_00 + 0xa8;
                uVar5 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar6 = idr_find(arg1_00 + 0x90,iVar7), iVar6 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar5);
                        *(arg1_00 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_108);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_e0 = auStack_cc;
                        uStack_f0._0_3_ = CONCAT12(1,uStack_f0);
                        uStack_108._0_3_ = CONCAT12(0x4a,uStack_108);
                        uStack_108 = CONCAT71(uStack_108._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_108);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_e0 = NULL;
                        uStack_108._0_3_ = CONCAT12(0x5f,uStack_108);
                        uStack_108 = CONCAT71(uStack_108._1_7_,3);
                        uStack_f0._0_3_ = CONCAT12(1,uStack_f0);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_108);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1_00 + 0xb0) = 2;
                        complete(arg1_00 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_00 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1_00 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1_00 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1_00 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_c8) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1_00);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1_00 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_writeb @ 0x08002cfc (size 112) =====

code * sym.slim_writeb(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    code *pcVar4;
    int64_t arg1_00;
    ulong uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_c8;
    ulong *puStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    uchar auStack_8c [4];
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uchar auStack_3c [4];
    ushort uStack_38;
    unkbyte6 Stack_36;
    ulong uStack_30;
    uchar *puStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_18 = *(iVar1 + 0x5e0);
    puStack_28 = auStack_3c;
    auStack_3c[0] = arg3;
    uVar3 = 0x68;
    uStack_30 = 0;
    _uStack_38 = CONCAT62(1,arg2);
    uStack_20 = 0;
    pcVar4 = sym.slim_xfer_msg(arg1,&uStack_38,0x68);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_18) {
        return pcVar4;
    }
    auVar8 = __stack_chk_fail();
    arg1_00 = auVar8._0_8_;
    *extraout_x18 = sym.slim_ctrl_clk_pause;
    pcStack_78 = sym.slim_ctrl_clk_pause;
    iVar1 = sp_el0;
    iStack_88 = *(iVar1 + 0x5e0);
    puStack_c0 = &uStack_b0;
    auStack_8c[0] = uVar3;
    puStack_a0 = NULL;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c8 = 0xff00000003400003;
    uStack_b8 = 0;
    puStack_80 = &stack0xfffffffffffffff0;
    if (((uVar3 & 0xff) < 3) || ((auVar8._8_8_ & 1) != 0)) {
        unaff_x19 = arg1_00 + 0xd8;
        mutex_lock(unaff_x19);
        if ((auVar8._8_8_ & 1) == 0) {
            if (*(arg1_00 + 0xb0) != 2) {
                iVar1 = arg1_00 + 0xa8;
                uVar5 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar6 = idr_find(arg1_00 + 0x90,iVar7), iVar6 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar5);
                        *(arg1_00 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_c8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_a0 = auStack_8c;
                        uStack_b0._0_3_ = CONCAT12(1,uStack_b0);
                        uStack_c8._0_3_ = CONCAT12(0x4a,uStack_c8);
                        uStack_c8 = CONCAT71(uStack_c8._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_c8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_a0 = NULL;
                        uStack_c8._0_3_ = CONCAT12(0x5f,uStack_c8);
                        uStack_c8 = CONCAT71(uStack_c8._1_7_,3);
                        uStack_b0._0_3_ = CONCAT12(1,uStack_b0);
                        uVar3 = sym.slim_do_transfer(arg1_00,&uStack_c8);
                        pcVar4 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1_00 + 0xb0) = 2;
                        complete(arg1_00 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar5);
                mutex_unlock(unaff_x19);
                pcVar4 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1_00 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1_00 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1_00 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar4 = *(arg1_00 + 0x130);
                if (pcVar4 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar4 + -0x80015a8 >> 3 | pcVar4 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar4 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar4 = NULL;
    }
    else {
        pcVar4 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_88) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar4,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar4)(arg1_00);
        pcVar4 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar4 = NULL;
code_r0x08002f18:
            *(arg1_00 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar4;
}


// ===== sym.slim_ctrl_clk_pause @ 0x08002d6c (size 612) =====

code * sym.slim_ctrl_clk_pause(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    int64_t unaff_x19;
    code *pcVar6;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uchar *puStack_60;
    ulong uStack_58;
    uchar auStack_4c [4];
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    puStack_80 = &uStack_70;
    auStack_4c[0] = arg3;
    puStack_60 = NULL;
    uStack_58 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_88 = 0xff00000003400003;
    uStack_78 = 0;
    if (((arg3 & 0xff) < 3) || ((arg2 & 1U) != 0)) {
        unaff_x19 = arg1 + 0xd8;
        mutex_lock(unaff_x19);
        if ((arg2 & 1U) == 0) {
            if (*(arg1 + 0xb0) != 2) {
                iVar1 = arg1 + 0xa8;
                uVar4 = _raw_spin_lock_irqsave(iVar1);
                iVar7 = 0;
                while (iVar5 = idr_find(arg1 + 0x90,iVar7), iVar5 == 0) {
                    iVar7 = iVar7 + 1;
                    if (iVar7 == 0x100) {
                        _raw_spin_unlock_irqrestore(iVar1,uVar4);
                        *(arg1 + 0xb0) = 1;
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_88);
                        pcVar6 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_60 = auStack_4c;
                        uStack_70._0_3_ = CONCAT12(1,uStack_70);
                        uStack_88._0_3_ = CONCAT12(0x4a,uStack_88);
                        uStack_88 = CONCAT71(uStack_88._1_7_,4);
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_88);
                        pcVar6 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        puStack_60 = NULL;
                        uStack_88._0_3_ = CONCAT12(0x5f,uStack_88);
                        uStack_88 = CONCAT71(uStack_88._1_7_,3);
                        uStack_70._0_3_ = CONCAT12(1,uStack_70);
                        uVar3 = sym.slim_do_transfer(arg1,&uStack_88);
                        pcVar6 = uVar3;
                        if (uVar3 != 0) goto code_r0x08002f18;
                        *(arg1 + 0xb0) = 2;
                        complete(arg1 + 0xb8);
                        goto code_r0x08002f1c;
                    }
                }
                _raw_spin_unlock_irqrestore(iVar1,uVar4);
                mutex_unlock(unaff_x19);
                pcVar6 = 0xfffffff0;
                goto code_r0x08002f40;
            }
        }
        else if (*(arg1 + 0xb0) != 0) {
            iVar2 = wait_for_completion_timeout(arg1 + 0xb8,0x19);
            if (iVar2 != 0) {
                if (*(arg1 + 0xb0) != 2) goto code_r0x08002e3c;
                pcVar6 = *(arg1 + 0x130);
                if (pcVar6 == NULL) goto code_r0x08002e3c;
                if (1 < (pcVar6 + -0x80015a8 >> 3 | pcVar6 << 0x3d)) goto code_r0x08002fac;
                goto code_r0x08002e2c;
            }
            mutex_unlock(unaff_x19);
            _printk(0x800077e);
            pcVar6 = 0xffffff92;
            goto code_r0x08002f40;
        }
        mutex_unlock(unaff_x19);
        pcVar6 = NULL;
    }
    else {
        pcVar6 = 0xffffffea;
    }
code_r0x08002f40:
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
code_r0x08002fac:
        __cfi_slowpath_diag(0x2d3f4915c22cd1ac,pcVar6,0x8000420);
code_r0x08002e2c:
        uVar3 = (*pcVar6)(arg1);
        pcVar6 = uVar3;
        if (uVar3 == 0) {
code_r0x08002e3c:
            pcVar6 = NULL;
code_r0x08002f18:
            *(arg1 + 0xb0) = 0;
        }
code_r0x08002f1c:
        mutex_unlock(unaff_x19);
    }
    return pcVar6;
}


// ===== sym.slim_stream_allocate @ 0x08002fd0 (size 240) =====

int64_t * sym.slim_stream_allocate(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar3 = 0x30;
    }
    piVar2 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar3),0xdc0,0x40);
    if (piVar2 != NULL) {
        iVar3 = kasprintf(0xcc0,"slim-%s",arg2);
        *piVar2 = iVar3;
        if (iVar3 != 0) {
            piVar2[1] = arg1;
            _raw_spin_lock(arg1 + 0x3b8);
            piVar5 = *(arg1 + 0x3b0);
            piVar1 = piVar2 + 6;
            uVar4 = __list_add_valid(piVar1,piVar5,arg1 + 0x3a8);
            if ((uVar4 & 1) != 0) {
                *(arg1 + 0x3b0) = piVar1;
                piVar2[6] = arg1 + 0x3a8;
                piVar2[7] = piVar5;
                *piVar5 = piVar1;
            }
            _raw_spin_unlock(arg1 + 0x3b8);
            return piVar2;
        }
        kfree(piVar2);
    }
    return 0xfffffffffffffff4;
}


// ===== sym.slim_stream_prepare @ 0x080030c0 (size 896) =====

int sym.slim_stream_prepare(int64_t arg1,int64_t arg2)

{
    code *pcVar1;
    char cVar2;
    uchar auVar3 [16];
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    uint uVar9;
    uint64_t uVar10;
    uint *puVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t iVar14;
    int iVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    code *arg1_00;
    code *unaff_x21;
    int64_t unaff_x22;
    ulong unaff_x23;
    int64_t unaff_x24;
    ulong unaff_x25;
    ulong unaff_x26;
    ulong unaff_x27;
    int64_t unaff_x28;
    ulong unaff_x30;
    ulong uStack_170;
    ulong uStack_168;
    ulong uStack_160;
    uint uStack_158;
    ushort uStack_154;
    uchar uStack_152;
    uchar uStack_151;
    ulong *puStack_150;
    ulong uStack_148;
    ulong uStack_140;
    ulong uStack_138;
    uint *puStack_130;
    ulong uStack_128;
    uint uStack_11c;
    int64_t iStack_118;
    uchar *puStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    int64_t iStack_e0;
    ulong uStack_d8;
    int64_t iStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    int64_t iStack_b8;
    uint uStack_a8;
    ushort uStack_a4;
    uchar uStack_a2;
    uchar uStack_a1;
    ulong *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uchar uStack_6c;
    uchar uStack_6b;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    if ((arg1 == 0) || (unaff_x20 = arg2, arg2 == 0)) {
        _printk(0x8000667,"slim_stream_prepare");
        iVar7 = -0x16;
    }
    else {
        unaff_x19 = arg1;
        if (*(arg1 + 0x28) == 0) {
            unaff_x22 = *(*(arg1 + 8) + 0x398);
            uVar6 = __sw_hweight32(*(arg2 + 0x18));
            unaff_x21 = uVar6;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar6;
            if (SUB168(auVar3 * ZEXT816(0x24),8) == 0) {
                iVar8 = __kmalloc((uVar6 + uVar6 * 8) * 4,0xdc0);
                *(arg1 + 0x28) = iVar8;
                if (iVar8 == 0) {
                    iVar7 = -0xc;
                }
                else {
                    *(arg1 + 0x24) = uVar6;
                    *(arg1 + 0x18) = *arg2;
                    *(arg1 + 0x1c) = *(arg2 + 4);
                    *(arg1 + 0x10) = *(arg2 + 0x20);
                    uVar6 = *(*(unaff_x22 + 0x48) + 0x39c);
                    uVar17 = 0;
                    if (uVar6 != 0) {
                        uVar17 = *arg2 / uVar6;
                    }
                    if (*arg2 == uVar17 * uVar6) {
                        *(arg1 + 0x14) = 0;
                    }
                    else {
                        if (*(arg2 + 0x20) == 0) {
                            uVar9 = 2;
                        }
                        else {
                            uVar9 = 3;
                        }
                        *(arg1 + 0x14) = uVar9;
                    }
                    uVar6 = *(*(unaff_x22 + 0x48) + 0x39c);
                    uVar17 = 0;
                    if (uVar6 != 0) {
                        uVar17 = *arg2 / uVar6;
                    }
                    *(arg1 + 0x20) = uVar17;
                    uVar10 = *(arg2 + 0x18);
                    uVar19 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
                    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                    unaff_x24 = 0x20;
                    if (uVar10 != 0) {
                        unaff_x24 = LZCOUNT((uVar19 >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10) << 0x20);
                    }
                    if (unaff_x24 < 0x20) {
                        iVar7 = 0;
                        unaff_x21 = 0x24;
                        unaff_x22 = 0x15888;
                        unaff_x25 = 0xac44;
                        unaff_x27 = 1;
                        unaff_x23 = 0xffffffffffffffff;
                        unaff_x26 = 0x20;
                        while( true ) {
                            puVar11 = iVar8 + iVar7 * 0x24;
                            *puVar11 = unaff_x24;
                            puVar11[2] = 0;
                            uVar6 = *arg2;
                            if ((uVar6 == 0x15888) || (uVar6 == 0xac44)) {
                                uVar19 = uVar6 / 0x2b11;
                            }
                            else {
                                uVar19 = uVar6 / 4000;
                            }
                            iVar15 = 0;
                            unaff_x28 = iVar7;
                            bVar5 = true;
                            do {
                                bVar4 = bVar5;
                                uVar17 = uVar19;
                                if ((uVar19 & 1) == 0) {
                                    do {
                                        uVar18 = uVar19;
                                        uVar17 = uVar18 >> 1;
                                        uVar19 = uVar17;
                                        iVar15 = iVar15 + 1;
                                    } while ((uVar18 >> 1 & 1) == 0);
                                }
                                uVar18 = uVar17;
                                if (3 < uVar17) {
                                    uVar18 = uVar17 + 1;
                                }
                                uVar19 = uVar18;
                                bVar5 = false;
                            } while (3 < uVar17);
                            bVar5 = (uVar6 == 0x15888) != (uVar6 == 0xac44);
                            uVar6 = iVar15 + (bVar5 || uVar18 != 1);
                            uVar17 = 8;
                            if (!bVar5) {
                                uVar17 = (uVar18 == 1) << 4;
                            }
                            uVar17 = uVar6 | uVar17;
                            puStack_80 = &uStack_6c;
                            uVar18 = uVar17 | 0x80;
                            if (!bVar4) {
                                uVar18 = uVar17;
                            }
                            iVar8 = iVar8 + unaff_x28 * 0x24;
                            if (7 < uVar6) {
                                uVar18 = 0;
                            }
                            *(iVar8 + 0x10) = uVar18;
                            *(iVar8 + 0xc) = *(*(arg2 + 0x10) + unaff_x28 * 4);
                            *(iVar8 + 0x18) = 0;
                            *(iVar8 + 0x20) = 1;
                            *(iVar8 + 4) = *(arg2 + 0x20) != 0;
                            uStack_78 = 0;
                            uStack_90 = 0x20000;
                            uStack_88 = 0;
                            iVar16 = *(arg1 + 8);
                            uStack_a4 = 0;
                            uStack_a8 = 0x100006;
                            uStack_a1 = *(iVar16 + 0x3a4);
                            uStack_a2 = 0;
                            puStack_a0 = &uStack_90;
                            uStack_98 = 0;
                            if (*(iVar8 + 4) == 0) {
                                uStack_a8 = 0x110006;
                            }
                            _uStack_6c = CONCAT11(*(iVar8 + 0xc),*puVar11);
                            puVar11[2] = 1;
                            *(iVar8 + 0x20) = 2;
                            sym.slim_do_transfer(*(iVar16 + 0x398),&uStack_a8);
                            uVar19 = (unaff_x24 << 0x20) + 0x100000000;
                            if (0x1f00000000 < uVar19) break;
                            uVar6 = -1L << (uVar19 >> 0x20 & 0x3f) & *(arg2 + 0x18);
                            uVar19 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
                            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
                            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
                            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
                            unaff_x24 = 0x20;
                            if (uVar6 != 0) {
                                unaff_x24 = LZCOUNT((uVar19 >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10) << 0x20);
                            }
                            if (0x1f < unaff_x24) break;
                            iVar8 = *(arg1 + 0x28);
                            iVar7 = iVar7 + 1;
                        }
                    }
                    iVar7 = 0;
                }
            }
            else {
                iVar7 = -0xc;
                *(arg1 + 0x28) = 0;
            }
        }
        else {
            _dev_err(*(arg1 + 8),"Stream already Prepared\n");
            iVar7 = -0x16;
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_68) {
        return iVar7;
    }
    iVar16 = __stack_chk_fail(iVar7);
    *extraout_x18 = sym.slim_stream_enable;
    pcStack_108 = sym.slim_stream_enable;
    iVar8 = sp_el0;
    iStack_118 = *(iVar8 + 0x5e0);
    uStack_170 = *0x8000d90;
    uStack_168 = *0x8000d98;
    uStack_160 = *0x8000da0;
    puStack_110 = &stack0xffffffffffffffa0;
    iStack_100 = unaff_x28;
    uStack_f8 = unaff_x27;
    uStack_f0 = unaff_x26;
    uStack_e8 = unaff_x25;
    iStack_e0 = unaff_x24;
    uStack_d8 = unaff_x23;
    iStack_d0 = unaff_x22;
    pcStack_c8 = unaff_x21;
    pcStack_c0 = unaff_x20;
    iStack_b8 = unaff_x19;
    if (iVar16 == 0) {
        _printk(0x80005ef,"slim_stream_enable");
        iVar7 = -0x16;
    }
    else {
        arg1_00 = *(*(iVar16 + 8) + 0x398);
        if (*(arg1_00 + 0x120) != 0) {
            pcVar1 = arg1_00 + 0x140;
            mutex_lock(pcVar1);
            unaff_x20 = *(arg1_00 + 0x120);
            unaff_x21 = pcVar1;
            if (3 < (unaff_x20 + -0x8001618 >> 3 | unaff_x20 << 0x3d)) goto code_r0x080038c0;
            goto code_r0x080034cc;
        }
        iVar7 = sym.slim_do_transfer(arg1_00,&uStack_170);
        unaff_x19 = iVar16;
        unaff_x20 = arg1_00;
        if (iVar7 == 0) {
            if (0 < *(iVar16 + 0x24)) {
                unaff_x21 = NULL;
                iVar8 = 0;
                unaff_x20 = 0x500008;
                do {
                    iVar13 = *(iVar16 + 8);
                    iVar7 = *(iVar16 + 0x20);
                    uStack_140 = 0x40000;
                    uStack_138 = 0;
                    iVar12 = *(iVar16 + 0x28);
                    uStack_128 = 0;
                    uStack_151 = *(iVar13 + 0x3a4);
                    uStack_158 = 0x500008;
                    uStack_154 = 0;
                    uStack_152 = 0;
                    uVar9 = 0xffffffea;
                    uStack_148 = 0;
                    if (0xbf < iVar7) {
                        if (iVar7 < 0x16c) {
                            if (iVar7 == 0xc0) {
                                iVar14 = 0x10;
                            }
                            else {
                                if (iVar7 != 0x100) goto code_r0x080036e0;
                                iVar14 = 8;
                            }
                        }
                        else if (iVar7 == 0x16c) {
                            iVar14 = 0x11;
                        }
                        else if (iVar7 == 0x200) {
                            iVar14 = 9;
                        }
                        else {
                            if (iVar7 != 0x300) goto code_r0x080036e0;
                            iVar14 = 0x12;
                        }
                        goto code_r0x080036cc;
                    }
                    iVar14 = 0;
                    switch(iVar7) {
                    case 1:
                        break;
                    case 2:
                        iVar14 = 1;
                        break;
                    case 3:
                        iVar14 = 10;
                        break;
                    case 4:
                        iVar14 = 2;
                        break;
                    default:
                        goto code_r0x080036e0;
                    case 6:
                        iVar14 = 0xb;
                        break;
                    case 8:
                        iVar14 = 3;
                        break;
                    case 0xc:
                        iVar14 = 0xc;
                        break;
                    case 0x10:
                        iVar14 = 4;
                        break;
                    case 0x18:
                        iVar14 = 0xd;
                        break;
                    case 0x20:
                        iVar14 = 5;
                        break;
                    case 0x30:
                        iVar14 = 0xe;
                        break;
                    case 0x40:
                        iVar14 = 6;
                        break;
                    case 0x60:
                        iVar14 = 0xf;
                        break;
                    case 0x80:
                        iVar14 = 7;
                    }
code_r0x080036cc:
                    uVar9 = *(iVar14 * 0x10 + 0x8000a54);
code_r0x080036e0:
                    *(unaff_x21 + iVar12 + 0x14) = uVar9;
                    cVar2 = *(iVar16 + 0x1c) >> 2;
                    if (*(iVar16 + 0x14) != 0) {
                        cVar2 = cVar2 + '\x01';
                    }
                    uStack_11c = CONCAT13(cVar2,CONCAT12(uVar9 >> 8 & 0xf | *(iVar16 + 0x14) << 4,
                                                          CONCAT31(uVar9,*(unaff_x21 + iVar12 + 0xc))));
                    *(unaff_x21 + iVar12 + 0x20) = 3;
                    puStack_150 = &uStack_140;
                    puStack_130 = &uStack_11c;
                    sym.slim_do_transfer(*(iVar13 + 0x398),&uStack_158);
                    iVar13 = *(iVar16 + 8);
                    uStack_140 = 0x40000;
                    uStack_138 = 0;
                    uStack_128 = 0;
                    uStack_151 = *(iVar13 + 0x3a4);
                    uStack_158 = 0x510008;
                    uStack_154 = 0;
                    uStack_152 = 0;
                    uStack_148 = 0;
                    uStack_11c._0_2_ = CONCAT11(*(unaff_x21 + iVar12 + 0x10),*(unaff_x21 + iVar12 + 0xc));
                    if (*(iVar16 + 0x14) != 0) {
                        uStack_11c._0_2_ = CONCAT11(*(unaff_x21 + iVar12 + 0x10),*(unaff_x21 + iVar12 + 0xc)) | 0x8000;
                    }
                    uStack_11c = CONCAT13(*(iVar16 + 0x1c) >> 2,
                                          CONCAT12(*(unaff_x21 + iVar12 + 0x18) | *(unaff_x21 + iVar12 + 0x1c) << 4,
                                                   uStack_11c));
                    *(unaff_x21 + iVar12 + 0x20) = 4;
                    puStack_150 = &uStack_140;
                    puStack_130 = &uStack_11c;
                    sym.slim_do_transfer(*(iVar13 + 0x398),&uStack_158);
                    iVar8 = iVar8 + 1;
                    unaff_x21 = unaff_x21 + 0x24;
                } while (iVar8 < *(iVar16 + 0x24));
                if (0 < *(iVar16 + 0x24)) {
                    unaff_x21 = NULL;
                    iVar8 = 0;
                    do {
                        iVar13 = *(iVar16 + 8);
                        uStack_138 = 0;
                        uStack_158 = 0x540005;
                        uStack_154 = 0;
                        uStack_151 = *(iVar13 + 0x3a4);
                        uStack_152 = 0;
                        unaff_x20 = unaff_x21 + *(iVar16 + 0x28);
                        uStack_148 = 0;
                        uStack_140 = 0x10000;
                        uStack_128 = 0;
                        uStack_11c = CONCAT31(uStack_11c._1_3_,*(unaff_x20 + 0xc));
                        *(unaff_x20 + 0x20) = 5;
                        puStack_150 = &uStack_140;
                        puStack_130 = &uStack_11c;
                        sym.slim_do_transfer(*(iVar13 + 0x398),&uStack_158);
                        *(unaff_x20 + 8) = 2;
                        iVar8 = iVar8 + 1;
                        unaff_x21 = unaff_x21 + 0x24;
                    } while (iVar8 < *(iVar16 + 0x24));
                }
            }
            uStack_170._0_3_ = CONCAT12(0x5f,uStack_170);
            iVar7 = sym.slim_do_transfer(arg1_00,&uStack_170);
        }
    }
    while (iVar8 = sp_el0, *(iVar8 + 0x5e0) != iStack_118) {
        __stack_chk_fail();
        iVar16 = unaff_x19;
code_r0x080038c0:
        __cfi_slowpath_diag(0x4b4ad99a78e6dbc3,unaff_x20,0x8000440);
code_r0x080034cc:
        iVar7 = (*unaff_x20)(iVar16);
        unaff_x19 = iVar16;
        if (iVar7 == 0) {
            if (0 < *(iVar16 + 0x24)) {
                iVar8 = 0;
                iVar13 = 0x20;
                do {
                    iVar8 = iVar8 + 1;
                    *(*(iVar16 + 0x28) + iVar13) = 5;
                    iVar13 = iVar13 + 0x24;
                } while (iVar8 < *(iVar16 + 0x24));
            }
            mutex_unlock(unaff_x21);
            iVar7 = 0;
        }
        else {
            mutex_unlock(unaff_x21);
        }
    }
    return iVar7;
}


// ===== sym.slim_stream_enable @ 0x08003440 (size 1188) =====

int sym.slim_stream_enable(int64_t arg1)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t unaff_x19;
    code *unaff_x20;
    code *arg1_00;
    code *unaff_x21;
    ulong unaff_x30;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    ushort uStack_a4;
    uchar uStack_a2;
    uchar uStack_a1;
    uchar *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_68 = *(iVar3 + 0x5e0);
    uStack_c0 = *0x8000d90;
    uStack_b8 = *0x8000d98;
    uStack_b0 = *0x8000da0;
    if (arg1 == 0) {
        _printk(0x80005ef,"slim_stream_enable");
        iVar2 = -0x16;
        goto code_r0x0800387c;
    }
    arg1_00 = *(*(arg1 + 8) + 0x398);
    if (*(arg1_00 + 0x120) != 0) {
        unaff_x21 = arg1_00 + 0x140;
        mutex_lock(unaff_x21);
        unaff_x20 = *(arg1_00 + 0x120);
        if (3 < (unaff_x20 + -0x8001618 >> 3 | unaff_x20 << 0x3d)) goto code_r0x080038c0;
        while( true ) {
            iVar2 = (*unaff_x20)(arg1);
            unaff_x19 = arg1;
            if (iVar2 == 0) {
                if (0 < *(arg1 + 0x24)) {
                    iVar3 = 0;
                    iVar5 = 0x20;
                    do {
                        iVar3 = iVar3 + 1;
                        *(*(arg1 + 0x28) + iVar5) = 5;
                        iVar5 = iVar5 + 0x24;
                    } while (iVar3 < *(arg1 + 0x24));
                }
                mutex_unlock(unaff_x21);
                iVar2 = 0;
            }
            else {
                mutex_unlock(unaff_x21);
            }
code_r0x0800387c:
            iVar3 = sp_el0;
            if (*(iVar3 + 0x5e0) == iStack_68) break;
            __stack_chk_fail();
            arg1 = unaff_x19;
code_r0x080038c0:
            __cfi_slowpath_diag(0x4b4ad99a78e6dbc3,unaff_x20,0x8000440);
        }
        return iVar2;
    }
    iVar2 = sym.slim_do_transfer(arg1_00,&stack0xffffffffffffff40);
    unaff_x19 = arg1;
    unaff_x20 = arg1_00;
    if (iVar2 != 0) goto code_r0x0800387c;
    if (0 < *(arg1 + 0x24)) {
        unaff_x21 = NULL;
        iVar3 = 0;
        unaff_x20 = 0x500008;
        do {
            iVar5 = *(arg1 + 8);
            iVar2 = *(arg1 + 0x20);
            uStack_90 = 0x40000;
            uStack_88 = 0;
            iVar4 = *(arg1 + 0x28);
            uStack_78 = 0;
            uStack_a1 = *(iVar5 + 0x3a4);
            uStack_a8 = 0x500008;
            uStack_a4 = 0;
            uStack_a2 = 0;
            uVar6 = 0xffffffea;
            uStack_98 = 0;
            if (0xbf < iVar2) {
                if (iVar2 < 0x16c) {
                    if (iVar2 == 0xc0) {
                        iVar7 = 0x10;
                    }
                    else {
                        if (iVar2 != 0x100) goto code_r0x080036e0;
                        iVar7 = 8;
                    }
                }
                else if (iVar2 == 0x16c) {
                    iVar7 = 0x11;
                }
                else if (iVar2 == 0x200) {
                    iVar7 = 9;
                }
                else {
                    if (iVar2 != 0x300) goto code_r0x080036e0;
                    iVar7 = 0x12;
                }
                goto code_r0x080036cc;
            }
            if (iVar2 - 1U < 0x80) {
                iVar7 = 0;
    //switch table (127 cases) at 0x80009c9
                switch(*((iVar2 - 1U) + 0x80009c9) * 4 + 0x80035d8) {
                case 0x80035dc:
                    iVar7 = 1;
                    break;
                case 0x8003628:
                    iVar7 = 10;
                    break;
                case 0x8003634:
                    iVar7 = 2;
                    break;
                case 0x8003640:
                    iVar7 = 0xb;
                    break;
                case 0x800364c:
                    iVar7 = 3;
                    break;
                case 0x8003658:
                    iVar7 = 0xc;
                    break;
                case 0x8003664:
                    iVar7 = 4;
                    break;
                case 0x8003670:
                    iVar7 = 0xd;
                    break;
                case 0x800367c:
                    iVar7 = 5;
                    break;
                case 0x8003688:
                    iVar7 = 0xe;
                    break;
                case 0x8003694:
                    iVar7 = 6;
                    break;
                case 0x80036a0:
                    iVar7 = 0xf;
                    break;
                case 0x80036ac:
                    iVar7 = 7;
                    break;
                case 0x80036cc:
                    break;
                default:
                    goto code_r0x080036e0;
                }
code_r0x080036cc:
                uVar6 = *(iVar7 * 0x10 + 0x8000a54);
            }
code_r0x080036e0:
            *(unaff_x21 + iVar4 + 0x14) = uVar6;
            cVar1 = *(arg1 + 0x1c) >> 2;
            if (*(arg1 + 0x14) != 0) {
                cVar1 = cVar1 + '\x01';
            }
            uStack_6c = CONCAT13(cVar1,CONCAT12(uVar6 >> 8 & 0xf | *(arg1 + 0x14) << 4,
                                                 CONCAT31(uVar6,*(unaff_x21 + iVar4 + 0xc))));
            *(unaff_x21 + iVar4 + 0x20) = 3;
            puStack_a0 = &stack0xffffffffffffff70;
            puStack_80 = &stack0xffffffffffffff94;
            sym.slim_do_transfer(*(iVar5 + 0x398),&stack0xffffffffffffff58);
            iVar5 = *(arg1 + 8);
            uStack_90 = 0x40000;
            uStack_88 = 0;
            uStack_78 = 0;
            uStack_a1 = *(iVar5 + 0x3a4);
            uStack_a8 = 0x510008;
            uStack_a4 = 0;
            uStack_a2 = 0;
            uStack_98 = 0;
            uStack_6c._0_2_ = CONCAT11(*(unaff_x21 + iVar4 + 0x10),*(unaff_x21 + iVar4 + 0xc));
            if (*(arg1 + 0x14) != 0) {
                uStack_6c._0_2_ = CONCAT11(*(unaff_x21 + iVar4 + 0x10),*(unaff_x21 + iVar4 + 0xc)) | 0x8000;
            }
            uStack_6c = CONCAT13(*(arg1 + 0x1c) >> 2,
                                 CONCAT12(*(unaff_x21 + iVar4 + 0x18) | *(unaff_x21 + iVar4 + 0x1c) << 4,uStack_6c));
            *(unaff_x21 + iVar4 + 0x20) = 4;
            puStack_a0 = &stack0xffffffffffffff70;
            puStack_80 = &stack0xffffffffffffff94;
            sym.slim_do_transfer(*(iVar5 + 0x398),&stack0xffffffffffffff58);
            iVar3 = iVar3 + 1;
            unaff_x21 = unaff_x21 + 0x24;
        } while (iVar3 < *(arg1 + 0x24));
        if (0 < *(arg1 + 0x24)) {
            unaff_x21 = NULL;
            iVar3 = 0;
            do {
                iVar5 = *(arg1 + 8);
                uStack_88 = 0;
                uStack_a8 = 0x540005;
                uStack_a4 = 0;
                uStack_a1 = *(iVar5 + 0x3a4);
                uStack_a2 = 0;
                unaff_x20 = unaff_x21 + *(arg1 + 0x28);
                uStack_98 = 0;
                uStack_90 = 0x10000;
                uStack_78 = 0;
                uStack_6c = CONCAT31(uStack_6c._1_3_,*(unaff_x20 + 0xc));
                *(unaff_x20 + 0x20) = 5;
                puStack_a0 = &stack0xffffffffffffff70;
                puStack_80 = &stack0xffffffffffffff94;
                sym.slim_do_transfer(*(iVar5 + 0x398),&stack0xffffffffffffff58);
                *(unaff_x20 + 8) = 2;
                iVar3 = iVar3 + 1;
                unaff_x21 = unaff_x21 + 0x24;
            } while (iVar3 < *(arg1 + 0x24));
        }
    }
    uStack_c0._0_3_ = CONCAT12(0x5f,uStack_c0);
    iVar2 = sym.slim_do_transfer(arg1_00,&stack0xffffffffffffff40);
    goto code_r0x0800387c;
}


// ===== sym.slim_stream_disable @ 0x080038e4 (size 544) =====

code * sym.slim_stream_disable(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    code *pcVar5;
    int64_t iVar6;
    int64_t unaff_x22;
    int64_t iVar7;
    ulong unaff_x30;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint uStack_a8;
    ushort uStack_a4;
    uchar uStack_a2;
    uchar uStack_a1;
    ulong *puStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uchar *puStack_80;
    ulong uStack_78;
    uchar auStack_6c [4];
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    uStack_c0 = *0x8000d90;
    uStack_b8 = *0x8000d98;
    uStack_b0 = *0x8000da0;
    if (arg1 == 0) {
        _printk(0x80005ef,"slim_stream_disable");
    }
    else {
        if ((*(arg1 + 0x28) != 0) && (*(arg1 + 0x24) != 0)) {
            unaff_x20 = *(*(arg1 + 8) + 0x398);
            if (*(unaff_x20 + 0x128) == 0) goto code_r0x08003998;
            unaff_x22 = unaff_x20 + 0x140;
            mutex_lock(unaff_x22);
            pcVar5 = *(unaff_x20 + 0x128);
            if (3 < (pcVar5 + -0x8001618 >> 3 | pcVar5 << 0x3d)) goto code_r0x08003ae0;
            while( true ) {
                uVar2 = (*pcVar5)(arg1);
                pcVar5 = uVar2;
                mutex_unlock(unaff_x22);
                if (uVar2 == 0) {
code_r0x08003998:
                    uVar2 = sym.slim_do_transfer(unaff_x20,&uStack_c0);
                    pcVar5 = uVar2;
                    if (uVar2 == 0) {
                        if (0 < *(arg1 + 0x24)) {
                            iVar6 = 0;
                            unaff_x22 = 0;
                            do {
                                iVar7 = *(arg1 + 8);
                                uStack_90 = 0x10000;
                                uStack_88 = 0;
                                uStack_78 = 0;
                                uStack_a8 = 0x550005;
                                uStack_a1 = *(iVar7 + 0x3a4);
                                uStack_a4 = 0;
                                iVar1 = *(arg1 + 0x28) + iVar6;
                                uStack_a2 = 0;
                                uStack_98 = 0;
                                auStack_6c[0] = *(iVar1 + 0xc);
                                puStack_a0 = &uStack_90;
                                puStack_80 = auStack_6c;
                                iVar3 = sym.slim_do_transfer(*(iVar7 + 0x398),&uStack_a8);
                                if (iVar3 == 0) {
                                    uStack_a8._0_3_ = CONCAT12(0x58,uStack_a8);
                                    *(iVar1 + 0x20) = 6;
                                    sym.slim_do_transfer(*(iVar7 + 0x398),&uStack_a8);
                                }
                                unaff_x22 = unaff_x22 + 1;
                                iVar6 = iVar6 + 0x24;
                            } while (unaff_x22 < *(arg1 + 0x24));
                        }
                        uStack_c0._0_3_ = CONCAT12(0x5f,uStack_c0);
                        uVar4 = sym.slim_do_transfer(unaff_x20,&uStack_c0);
                        pcVar5 = uVar4 & 0xffffffff;
                    }
                }
code_r0x08003a9c:
                iVar6 = sp_el0;
                if (*(iVar6 + 0x5e0) == iStack_68) break;
                __stack_chk_fail();
code_r0x08003ae0:
                __cfi_slowpath_diag(0x4b4ad99a78e6dbc3,pcVar5,0x8000460);
            }
            return pcVar5;
        }
        _printk(0x800087c,"slim_stream_disable");
        unaff_x19 = arg1;
    }
    pcVar5 = 0xffffffea;
    arg1 = unaff_x19;
    goto code_r0x08003a9c;
}


// ===== sym.slim_stream_unprepare @ 0x08003b04 (size 340) =====

ulong sym.slim_stream_unprepare(int64_t arg1)

{
    uint *puVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    uint64_t uVar7;
    uint64_t in_x2;
    int64_t iVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    uint uStack_138;
    ushort uStack_134;
    uchar uStack_132;
    uchar uStack_131;
    ulong *puStack_130;
    ulong uStack_128;
    ulong uStack_120;
    ulong uStack_118;
    uchar *puStack_110;
    ulong uStack_108;
    uchar auStack_fc [4];
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint uStack_98;
    ushort uStack_94;
    uchar uStack_92;
    uchar uStack_91;
    ulong *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uchar *puStack_70;
    ulong uStack_68;
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_58 = *(iVar4 + 0x5e0);
    if (arg1 == 0) {
        _printk(0x80005ef,"slim_stream_unprepare");
        uVar5 = 0xffffffea;
    }
    else {
        iVar4 = *(arg1 + 0x28);
        uVar3 = *(arg1 + 0x24);
        in_x2 = uVar3;
        if ((iVar4 == 0) || (uVar3 == 0)) {
            _printk(0x800087c,"slim_stream_unprepare");
            uVar5 = 0xffffffea;
        }
        else {
            if (0 < uVar3) {
                iVar10 = 0;
                iVar11 = 1;
                while( true ) {
                    iVar8 = *(arg1 + 8);
                    uStack_80 = 0x10000;
                    uStack_78 = 0;
                    uStack_68 = 0;
                    uStack_98 = 0x140005;
                    uStack_91 = *(iVar8 + 0x3a4);
                    uStack_94 = 0;
                    uStack_92 = 0;
                    uStack_88 = 0;
                    puVar1 = iVar4 + iVar10;
                    auStack_5c[0] = *puVar1;
                    puVar1[8] = 0;
                    puVar1[2] = 0;
                    puStack_90 = &uStack_80;
                    puStack_70 = auStack_5c;
                    sym.slim_do_transfer(*(iVar8 + 0x398),&uStack_98);
                    if (*(arg1 + 0x24) <= iVar11) break;
                    iVar4 = *(arg1 + 0x28);
                    iVar11 = iVar11 + 1;
                    iVar10 = iVar10 + 0x24;
                }
                iVar4 = *(arg1 + 0x28);
            }
            kfree(iVar4);
            uVar5 = 0;
            *(arg1 + 0x28) = 0;
            *(arg1 + 0x24) = 0;
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_58) {
        return uVar5;
    }
    auVar12 = __stack_chk_fail(uVar5);
    iVar11 = auVar12._0_8_;
    *extraout_x18 = sym.slim_stream_unprepare_disconnect_port;
    pcStack_e8 = sym.slim_stream_unprepare_disconnect_port;
    iVar4 = sp_el0;
    iStack_f8 = *(iVar4 + 0x5e0);
    puStack_f0 = &stack0xffffffffffffffb0;
    if (iVar11 == 0) {
        _printk(0x80005ef,"slim_stream_unprepare_disconnect_port");
    }
    else {
        iVar4 = *(iVar11 + 0x28);
        if ((iVar4 != 0) && (*(iVar11 + 0x24) != 0)) {
            if (((auVar12._8_8_ & 1) != 0) && (0 < *(iVar11 + 0x24))) {
                iVar8 = 0;
                iVar10 = 1;
                while( true ) {
                    iVar9 = *(iVar11 + 8);
                    puVar1 = iVar4 + iVar8;
                    uStack_120 = 0x10000;
                    uStack_118 = 0;
                    uStack_108 = 0;
                    uStack_131 = *(iVar9 + 0x3a4);
                    uStack_138 = 0x140005;
                    uStack_134 = 0;
                    uStack_132 = 0;
                    uStack_128 = 0;
                    auStack_fc[0] = *puVar1;
                    puVar1[8] = 0;
                    puVar1[2] = 0;
                    puStack_130 = &uStack_120;
                    puStack_110 = auStack_fc;
                    sym.slim_do_transfer(*(iVar9 + 0x398),&uStack_138);
                    if (*(iVar11 + 0x24) <= iVar10) break;
                    iVar4 = *(iVar11 + 0x28);
                    iVar10 = iVar10 + 1;
                    iVar8 = iVar8 + 0x24;
                }
            }
            if ((in_x2 & 1) == 0) {
                uVar5 = 0;
            }
            else {
                kfree(*(iVar11 + 0x28));
                uVar5 = 0;
                *(iVar11 + 0x28) = 0;
                *(iVar11 + 0x24) = 0;
            }
            goto code_r0x08003d80;
        }
        _printk(0x800087c,"slim_stream_unprepare_disconnect_port");
    }
    uVar5 = 0xffffffea;
code_r0x08003d80:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_f8) {
        return uVar5;
    }
    puVar6 = __stack_chk_fail(uVar5);
    *extraout_x18_00 = sym.slim_stream_free;
    if (puVar6 == NULL) {
        _printk(0x80005ef,"slim_stream_free");
        uVar5 = 0xffffffea;
    }
    else {
        iVar4 = puVar6[1];
        _raw_spin_lock(iVar4 + 0x3b8);
        uVar7 = __list_del_entry_valid(puVar6 + 6);
        if ((uVar7 & 1) != 0) {
            iVar11 = puVar6[6];
            piVar2 = puVar6[7];
            *(iVar11 + 8) = piVar2;
            *piVar2 = iVar11;
        }
        puVar6[6] = 0xdead000000000100;
        puVar6[7] = 0xdead000000000122;
        _raw_spin_unlock(iVar4 + 0x3b8);
        kfree(*puVar6);
        kfree(puVar6);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.slim_stream_unprepare_disconnect_port @ 0x08003c58 (size 356) =====

ulong sym.slim_stream_unprepare_disconnect_port(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint *puVar1;
    int64_t *piVar2;
    ulong uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint64_t in_x1;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    uint uStack_98;
    ushort uStack_94;
    uchar uStack_92;
    uchar uStack_91;
    ulong *puStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    uchar *puStack_70;
    ulong uStack_68;
    uchar auStack_5c [4];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    if (arg1 == 0) {
        _printk(0x80005ef,"slim_stream_unprepare_disconnect_port");
    }
    else {
        iVar6 = *(arg1 + 0x28);
        if ((iVar6 != 0) && (*(arg1 + 0x24) != 0)) {
            if (((in_x1 & 1) != 0) && (0 < *(arg1 + 0x24))) {
                iVar8 = 0;
                iVar9 = 1;
                while( true ) {
                    iVar7 = *(arg1 + 8);
                    puVar1 = iVar6 + iVar8;
                    uStack_80 = 0x10000;
                    uStack_78 = 0;
                    uStack_68 = 0;
                    uStack_91 = *(iVar7 + 0x3a4);
                    uStack_98 = 0x140005;
                    uStack_94 = 0;
                    uStack_92 = 0;
                    uStack_88 = 0;
                    auStack_5c[0] = *puVar1;
                    puVar1[8] = 0;
                    puVar1[2] = 0;
                    puStack_90 = &uStack_80;
                    puStack_70 = auStack_5c;
                    noname_1 = sym.slim_do_transfer(*(iVar7 + 0x398),&uStack_98);
                    if (*(arg1 + 0x24) <= iVar9) break;
                    iVar6 = *(arg1 + 0x28);
                    iVar9 = iVar9 + 1;
                    iVar8 = iVar8 + 0x24;
                }
            }
            if ((arg2 & 1U) == 0) {
                uVar3 = 0;
            }
            else {
                kfree(noname_1,*(arg1 + 0x28));
                uVar3 = 0;
                *(arg1 + 0x28) = 0;
                *(arg1 + 0x24) = 0;
            }
            goto code_r0x08003d80;
        }
        _printk(0x800087c,"slim_stream_unprepare_disconnect_port");
    }
    uVar3 = 0xffffffea;
code_r0x08003d80:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return uVar3;
    }
    puVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.slim_stream_free;
    if (puVar4 == NULL) {
        _printk(0x80005ef,"slim_stream_free");
        uVar3 = 0xffffffea;
    }
    else {
        iVar6 = puVar4[1];
        _raw_spin_lock(iVar6 + 0x3b8);
        uVar5 = __list_del_entry_valid(puVar4 + 6);
        if ((uVar5 & 1) != 0) {
            iVar9 = puVar4[6];
            piVar2 = puVar4[7];
            *(iVar9 + 8) = piVar2;
            *piVar2 = iVar9;
        }
        puVar4[6] = 0xdead000000000100;
        puVar4[7] = 0xdead000000000122;
        _raw_spin_unlock(iVar6 + 0x3b8);
        kfree(*puVar4);
        kfree(puVar4);
        uVar3 = 0;
    }
    return uVar3;
}


// ===== sym.slim_stream_free @ 0x08003dbc (size 164) =====

ulong sym.slim_stream_free(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg1 == 0) {
        _printk(0x80005ef,"slim_stream_free");
        uVar5 = 0xffffffea;
    }
    else {
        iVar1 = *(arg1 + 8) + 0x3b8;
        _raw_spin_lock(iVar1);
        uVar4 = __list_del_entry_valid(arg1 + 0x30);
        if ((uVar4 & 1) != 0) {
            iVar2 = *(arg1 + 0x30);
            piVar3 = *(arg1 + 0x38);
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *(arg1 + 0x30) = 0xdead000000000100;
        *(arg1 + 0x38) = 0xdead000000000122;
        _raw_spin_unlock(iVar1);
        kfree(*arg1);
        kfree(arg1);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.cleanup_module @ 0x08004084 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_unregister(obj.slimbus_bus);
    return;
}


// ===== sym.init_module @ 0x080040b0 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    bus_register(obj.slimbus_bus);
    return;
}

