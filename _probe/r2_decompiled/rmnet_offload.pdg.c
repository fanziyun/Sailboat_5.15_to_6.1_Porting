// decompiled from rmnet_offload by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 524) =====

//WARNING: Switch with 1 destination removed at 0x080016a4

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x199c66976d43c92e) {
        if (arg1 < -0x34ff9400d02d6a36) {
            if (arg1 == -0x6220a336ca3e580d) {
                pcVar2 = sym.DATARMNETb56d685c50.0e07ef9868cf16610b77ecd6a88e3c8d.cfi_jt;
            }
            else {
                if (arg1 != -0x4336ce8ff630bbc3) goto code_r0x08001664;
                pcVar2 = sym.DATARMNET95e1703026.cfi_jt;
            }
        }
        else if (arg1 == -0x34ff9400d02d6a36) {
            pcVar2 = sym.DATARMNET29e8d137c4.0e07ef9868cf16610b77ecd6a88e3c8d.cfi_jt;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x1996fdbd024c04c3) goto code_r0x08001664;
            pcVar2 = sym.__typeid__ZTSFiyyE_global_addr;
        }
    }
    else {
        if (0x4c550309df1cf4c0 < arg1) {
            if (arg1 == 0x4c550309df1cf4c1) {
                pcVar2 = sym.DATARMNET9292bebdd3.cfi_jt;
            }
            else {
                if (arg1 == 0x7d57972cd3914fb1) {
                    pcVar2 = sym.DATARMNET7dec24813e.cb09fe597dc53e8c863ba90454a985c6.cfi_jt;
                    goto code_r0x080011fc;
                }
                if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001664;
                pcVar2 = sym.cleanup_module.cfi_jt;
            }
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001664;
        }
        if (arg1 == 0x199c66976d43c92e) {
            if ((pcVar1 + -0x8001268 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001664;
        }
        if (arg1 == 0x390ff1194794c0f0) {
            pcVar2 = sym.DATARMNETc9dd320f49.cfi_jt;
        }
        else {
            if (arg1 != 0x4a220a35dbe7fc62) goto code_r0x08001664;
            pcVar2 = sym.param_get_ullong.cfi_jt;
        }
    }
code_r0x080011fc:
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001664:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016b8);
    (*pcVar1)();
}


// ===== sym.DATARMNETb56d685c50.0e07ef9868cf16610b77ecd6a88e3c8d.cfi_jt @ 0x08001218 (size 8) =====

void sym.DATARMNETb56d685c50.0e07ef9868cf16610b77ecd6a88e3c8d.cfi_jt(int64_t param_1,ulong param_2)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar *puStack_90;
    ulong *puStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puStack_88 = &puStack_90;
    puStack_90 = &puStack_90;
    *in_x18 = unaff_x30;
    puVar2 = _segment.ehdr;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_80 = NULL;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    *puVar2 = param_2;
    uVar4 = sym.DATARMNET1a7ed9a6a2(param_1,&puStack_80);
    if ((uVar4 & 1) == 0) {
        sym.DATARMNETa00cda79d0(0);
        if (uStack_40._3_1_ == '\0') {
            if (uStack_40._4_1_ == '\0') {
                if (((*(param_1 + 0x51) & 1) != 0) &&
                   (uVar4 = sym.DATARMNETfbf5798e15(&puStack_80,&puStack_90), (uVar4 & 1) != 0))
                goto code_r0x08001878;
            }
            else {
                sym.DATARMNETc38c135c9f(uStack_48 >> 0x20,&puStack_90);
            }
        }
        puVar3 = puStack_80;
        puVar2 = puStack_88;
        if (uStack_50._4_2_ + uStack_40 + uStack_50._6_2_ < 0x10001) {
            if (uStack_40._3_1_ == '\0') {
                *(puStack_80 + 0x34) = uStack_48._4_4_;
            }
            uVar4 = __list_add_valid(puStack_80,puStack_88,&puStack_90);
            if ((uVar4 & 1) != 0) {
                puStack_88 = puVar3;
                *puVar3 = &puStack_90;
                puVar3[1] = puVar2;
                *puVar2 = puVar3;
            }
        }
    }
    else {
        sym.DATARMNETa00cda79d0(2);
        rmnet_recycle_frag_descriptor(param_1,param_2);
    }
code_r0x08001878:
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&puStack_90);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETba38823a2f;
    __printk = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET162e7a2013.llvm.17990970886840922578,1);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001220 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001cf,"DATARMNETb1c42acd9c");
    register_netdevice_notifier(reloc.DATARMNET7dec24813e.cb09fe597dc53e8c863ba90454a985c6.cfi_jt);
    return;
}


// ===== sym.DATARMNET7dec24813e.cb09fe597dc53e8c863ba90454a985c6.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.DATARMNET7dec24813e.cb09fe597dc53e8c863ba90454a985c6.cfi_jt(ulong param_1,int64_t param_2,int64_t *param_3)

{
    char cVar1;
    int iVar2;
    int64_t arg1;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *param_3;
    if ((iVar3 != 0) && (iVar2 = strncmp(iVar3,"rmnet_data",10), iVar2 == 0)) {
        if (param_2 == 6) {
            if ((_segment.ehdr != 0) &&
               (cVar1 = *(_segment.ehdr + 0x14b8) + -1, *(_segment.ehdr + 0x14b8) = cVar1, cVar1 == '\0')) {
                _printk(0x80001fc,"DATARMNET7dec24813e",iVar3);
                sym.DATARMNET345f805b34();
            }
        }
        else if (param_2 == 5) {
            if (_segment.ehdr == 0) {
                arg1 = rmnet_get_port(*(iVar3 + 0xa08));
                if (arg1 == 0) {
                    _printk(0x8000185,"DATARMNET7dec24813e",iVar3);
                }
                else {
                    _printk(0x8000221,"DATARMNET7dec24813e",iVar3);
                    iVar2 = sym.DATARMNET9f53d54812(arg1);
                    if (iVar2 == 2) {
                        _printk(0x80001b0,"DATARMNET7dec24813e");
                    }
                }
            }
            else {
                *(_segment.ehdr + 0x14b8) = *(_segment.ehdr + 0x14b8) + '\x01';
            }
        }
    }
    return 0;
}


// ===== sym.DATARMNET9292bebdd3.cfi_jt @ 0x08001230 (size 8) =====

void sym.DATARMNET9292bebdd3.cfi_jt(void)

{
    return;
}


// ===== sym.DATARMNETb7e47d7254.cfi_jt @ 0x08001238 (size 8) =====

void sym.DATARMNETb7e47d7254.cfi_jt(void)

{
    return;
}


// ===== sym.param_get_ullong.cfi_jt @ 0x08001240 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.param_get_ullong.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001248 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000258,"DATARMNET0f6d85e415");
    unregister_netdevice_notifier(reloc.DATARMNET7dec24813e.cb09fe597dc53e8c863ba90454a985c6.cfi_jt);
    return;
}


// ===== sym.DATARMNETbe30d096c6.881e72f5f88a4a394e75c9529b77e0ea.cfi_jt @ 0x08001250 (size 8) =====

void sym.DATARMNETbe30d096c6.881e72f5f88a4a394e75c9529b77e0ea.cfi_jt(void)

{
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1;
    int iVar1;
    int64_t iVar2;
    ulong unaff_x30;
    ulong ****ppppuStack_48;
    ulong ****ppppuStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    ppppuStack_48 = &ppppuStack_48;
    ppppuStack_40 = ppppuStack_48;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    iVar2 = 0;
    iVar1 = 0;
    do {
        for (arg1 = *(obj.DATARMNET4791268d67 + iVar2 * 8); arg1 != NULL; arg1 = *arg1) {
            if (*(arg1 + 0x62) != '\0') {
                iVar1 = iVar1 + 1;
                sym.DATARMNETa3055c21f2(arg1,&ppppuStack_48);
            }
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 != 0x20);
    if (iVar1 != 0) {
        sym.DATARMNETa00cda79d0(9);
    }
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&ppppuStack_48);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNET560e127137;
    _kmalloc_caches = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNETcbc211d052.llvm.17123689797798262549,1);
    return;
}


// ===== sym.DATARMNETc9dd320f49.cfi_jt @ 0x08001258 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.DATARMNETc9dd320f49.cfi_jt(int *param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    int16_t iVar6;
    ushort uVar7;
    code *pcVar8;
    int iVar9;
    uint uVar10;
    ulong uVar11;
    uint8_t *puVar12;
    uint *puVar13;
    ushort *puVar14;
    int64_t iVar15;
    int64_t *arg1;
    uint32_t uVar16;
    int64_t *piVar17;
    int iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint32_t *puVar23;
    int64_t iVar24;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int16_t iVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    ulong uStack_118;
    ulong uStack_110;
    uint32_t auStack_108 [8];
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    ulong uStack_d8;
    char acStack_cc [4];
    char acStack_c8 [4];
    int16_t aiStack_c4 [2];
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    uint64_t auStack_a8 [3];
    uint64_t uStack_90;
    uint32_t uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong *******pppppppuStack_38;
    ulong *******pppppppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar15 = _segment.ehdr;
    iVar21 = sp_el0;
    iStack_28 = *(iVar21 + 0x5e0);
    pppppppuStack_38 = &pppppppuStack_38;
    pppppppuStack_30 = pppppppuStack_38;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    if (*(iVar15 + 0x30) != *param_1) {
        sym.DATARMNETa00cda79d0(4);
    }
    iVar9 = sym.DATARMNETae70636c90(&pppppppuStack_38);
    if (iVar9 != 0) {
        sym.DATARMNETa00cda79d0(5);
    }
    *(iVar15 + 0x39) = 0;
    *(iVar15 + 0x30) = 0;
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&pppppppuStack_38);
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_28) {
        return;
    }
    auVar26 = __stack_chk_fail();
    arg1 = auVar26._8_8_;
    iVar15 = auVar26._0_8_;
    *extraout_x18 = sym.DATARMNET1a7ed9a6a2;
    pcStack_68 = sym.DATARMNET1a7ed9a6a2;
    iVar21 = sp_el0;
    iStack_78 = *(iVar21 + 0x5e0);
    uVar19 = *(iVar15 + 0x30);
    iVar25 = uVar19;
    *(arg1 + 0x43) = 1;
    puStack_70 = &stack0xffffffffffffffe0;
    if ((*(*(iVar15 + 0x20) + 0xe5) & 1) == 0) goto code_r0x08002068;
    if ((*(iVar15 + 0x51) >> 1 & 1) == 0) {
        piVar17 = *(iVar15 + 0x10);
        uVar11 = 1;
        if ((piVar17 != NULL) && (iVar15 + 0x10 != piVar17)) {
            puVar12 = ((piVar17[2] & 0x3ffffffffffc0U) << 6 | 0xff00000000000000) + *(piVar17 + 0x1c);
            if (puVar12 != NULL) {
                uVar4 = *puVar12 >> 4;
                *(arg1 + 7) = uVar4;
                if (uVar4 == 6) {
                    uStack_88 = 0;
                    uStack_80 = 0;
                    auStack_a8[2] = 0;
                    uStack_90 = 0;
                    auStack_a8[1] = 0;
                    auStack_c0[0] = auStack_c0[0] & 0xffffffffffff0000;
                    auStack_a8[0] = auStack_a8[0] & 0xffffffffffffff00;
                    puVar13 = rmnet_frag_header_ptr(iVar15,0,0x28,auStack_a8 + 1);
                    if (puVar13 != NULL) {
                        aiStack_c4[0] = CONCAT11(aiStack_c4[0]._1_1_,*(puVar13 + 6));
                        uVar20 = rmnet_frag_ipv6_skip_exthdr(iVar15,0x28,aiStack_c4,auStack_c0,auStack_a8);
                        if (-1 < uVar20) {
                            iVar6 = uVar20;
                            *(arg1 + 0x34) = iVar6;
                            *(arg1 + 0x39) = aiStack_c4[0];
                            uVar11 = *(puVar13 + 4);
                            *(arg1 + 0xc) = *(puVar13 + 2);
                            *(arg1 + 0x14) = uVar11;
                            uVar11 = *(puVar13 + 8);
                            *(arg1 + 0x1c) = *(puVar13 + 6);
                            *(arg1 + 0x24) = uVar11;
                            *(arg1 + 0x2c) = *puVar13;
                            if ((auStack_c0[0] == 0) && (auStack_a8[0] == '\0')) {
                                uVar16 = (*(puVar13 + 1) >> 8 | (*(puVar13 + 1) & 0xff00ff) << 8) + 0x28 & 0xffff;
                                uVar4 = aiStack_c4[0];
                                goto code_r0x08001fcc;
                            }
                            if (aiStack_c4[0] == 0x2c) goto code_r0x0800205c;
code_r0x08002060:
                            sym.DATARMNETa00cda79d0(6);
                        }
                    }
                }
                else {
                    if (uVar4 != 4) goto code_r0x08001f20;
                    uStack_90 = uStack_8c << 0x20;
                    auStack_a8[1] = 0;
                    auStack_a8[2] = 0;
                    puVar12 = rmnet_frag_header_ptr(iVar15,0,0x14,auStack_a8 + 1);
                    if (puVar12 != NULL) {
                        uVar20 = (*puVar12 & 0xf) << 2;
                        *(arg1 + 0x34) = uVar20;
                        uVar4 = puVar12[9];
                        *(arg1 + 0x39) = uVar4;
                        *(arg1 + 0xc) = *(puVar12 + 0xc);
                        *(arg1 + 0x1c) = *(puVar12 + 0x10);
                        *(arg1 + 0x2c) = puVar12[8];
                        *(arg1 + 0x2d) = puVar12[1];
                        *(arg1 + 0x2e) = *(puVar12 + 6);
                        if ((*(puVar12 + 6) & 0xff3f) != 0) goto code_r0x08002060;
                        uVar16 = *(puVar12 + 2) >> 8 | (*(puVar12 + 2) & 0xff00ff) << 8;
code_r0x08001fcc:
                        *(arg1 + 0x44) = uVar16 != (uVar19 & 0xffff);
                        if (uVar4 == 0x11) {
                            auStack_a8[1] = 0;
                            puVar14 = rmnet_frag_header_ptr(iVar15,uVar20 & 0xffff,8,auStack_a8 + 1);
                            if (puVar14 != NULL) {
                                *(arg1 + 0x36) = 8;
                                *(arg1 + 1) = *puVar14;
                                *(arg1 + 10) = puVar14[1];
code_r0x080020f8:
                                *(arg1 + 0x43) = 0;
                                uVar10 = sym.DATARMNETcb7325e02d(arg1);
                                *(arg1 + 0x3c) = uVar10;
                                if (*(arg1 + 0x44) == '\0') {
                                    *(iVar15 + 0x4e) = arg1[7];
                                    *(iVar15 + 0x4a) = *(arg1 + 0x34);
                                    *(iVar15 + 0x4f) = *(arg1 + 0x39);
                                    uVar7 = *(arg1 + 0x36);
                                    *(iVar15 + 0x51) = *(iVar15 + 0x51) | 2;
                                    *(iVar15 + 0x4c) = uVar7;
                                }
                            }
                        }
                        else if (uVar4 == 6) {
                            uStack_90 = uStack_90 & 0xffffffff00000000;
                            auStack_a8[1] = 0;
                            auStack_a8[2] = 0;
                            puVar14 = rmnet_frag_header_ptr(iVar15,uVar20 & 0xffff,0x14,auStack_a8 + 1);
                            if (puVar14 != NULL) {
                                *(arg1 + 0x36) = *(puVar14 + 6) >> 2 & 0x3c;
                                *(arg1 + 1) = *puVar14;
                                *(arg1 + 10) = puVar14[1];
                                uVar19 = (*(puVar14 + 2) & 0xff00ff00) >> 8 | (*(puVar14 + 2) & 0xff00ff) << 8;
                                *(arg1 + 6) = uVar19 >> 0x10 | uVar19 << 0x10;
                                goto code_r0x080020f8;
                            }
                        }
                    }
                }
                goto code_r0x08002068;
            }
code_r0x08001f20:
            uVar11 = 1;
        }
    }
    else {
        cVar5 = *(iVar15 + 0x4e);
        auStack_a8[0] = 0;
        uStack_b0 = 0;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        *(arg1 + 7) = cVar5;
        *(arg1 + 0x34) = *(iVar15 + 0x4a);
        *(arg1 + 0x39) = *(iVar15 + 0x4f);
        *(arg1 + 0x36) = *(iVar15 + 0x4c);
        iVar25 = *(iVar15 + 0x30);
        if (cVar5 == '\x04') {
            uStack_90 = uStack_8c << 0x20;
            auStack_a8[1] = 0;
            auStack_a8[2] = 0;
            iVar21 = rmnet_frag_header_ptr(iVar15,0,0x14,auStack_a8 + 1);
            if (iVar21 != 0) {
                *(arg1 + 0xc) = *(iVar21 + 0xc);
                *(arg1 + 0x1c) = *(iVar21 + 0x10);
                *(arg1 + 0x2c) = *(iVar21 + 8);
                *(arg1 + 0x2d) = *(iVar21 + 1);
                *(arg1 + 0x2e) = *(iVar21 + 6);
code_r0x08001e7c:
                puVar14 = rmnet_frag_header_ptr(iVar15,*(arg1 + 0x34),8,auStack_a8);
                if (puVar14 != NULL) {
                    *(arg1 + 1) = *puVar14;
                    *(arg1 + 10) = puVar14[1];
                    if (*(arg1 + 0x39) == '\x06') {
                        iVar21 = rmnet_frag_header_ptr(iVar15,*(arg1 + 0x34),0x14,auStack_c0);
                        if (iVar21 == 0) goto code_r0x08002068;
                        puVar23 = iVar21 + 4;
                        if ((*(iVar15 + 0x51) & 8) != 0) {
                            puVar23 = iVar15 + 0x3c;
                        }
                        uVar19 = (*puVar23 & 0xff00ff00) >> 8 | (*puVar23 & 0xff00ff) << 8;
                        *(arg1 + 6) = uVar19 >> 0x10 | uVar19 << 0x10;
                    }
                    uVar10 = sym.DATARMNETcb7325e02d(arg1);
                    uVar11 = 0;
                    *(arg1 + 0x3c) = uVar10;
                    iVar25 = *(iVar15 + 0x4a);
                    iVar6 = *(iVar15 + 0x4c);
                    uVar10 = *(iVar15 + 0x30);
                    *arg1 = iVar15;
                    *(arg1 + 0x43) = 0;
                    *(arg1 + 8) = uVar10 - (iVar25 + iVar6);
                    goto code_r0x08002094;
                }
            }
        }
        else {
            uStack_88 = 0;
            uStack_80 = 0;
            auStack_a8[2] = 0;
            uStack_90 = 0;
            auStack_a8[1] = 0;
            puVar13 = rmnet_frag_header_ptr(iVar15,0,0x28,auStack_a8 + 1);
            if (puVar13 != NULL) {
                uVar11 = *(puVar13 + 4);
                *(arg1 + 0xc) = *(puVar13 + 2);
                *(arg1 + 0x14) = uVar11;
                uVar11 = *(puVar13 + 8);
                *(arg1 + 0x1c) = *(puVar13 + 6);
                *(arg1 + 0x24) = uVar11;
                *(arg1 + 0x2c) = *puVar13;
                if (0x28 < *(arg1 + 0x34)) {
                    acStack_cc[0] = *(puVar13 + 6);
                    aiStack_c4[0] = 0;
                    acStack_c8[0] = '\0';
                    iVar9 = rmnet_frag_ipv6_skip_exthdr(iVar15,0x28,acStack_cc,aiStack_c4,acStack_c8);
                    if (((iVar9 < 0) || (aiStack_c4[0] != 0)) || (acStack_c8[0] != '\0')) {
                        if (acStack_cc[0] == ',') {
                            iVar6 = *(arg1 + 0x34);
code_r0x0800205c:
                            *(arg1 + 0x34) = iVar6 + 8;
                        }
                        goto code_r0x08002060;
                    }
                }
                goto code_r0x08001e7c;
            }
        }
code_r0x08002068:
        *(arg1 + 8) = iVar25 - (*(arg1 + 0x34) + *(arg1 + 0x36));
        if (*(arg1 + 0x44) != '\0') {
            sym.DATARMNETa00cda79d0(7);
        }
        uVar11 = 0;
        *arg1 = iVar15;
    }
code_r0x08002094:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_78) {
        return;
    }
    iVar15 = __stack_chk_fail(uVar11);
    *extraout_x18_00 = 0x8002144;
    ppuStack_e0 = &puStack_70;
    uStack_d8 = 0x8002144;
    iVar21 = sp_el0;
    iStack_e8 = *(iVar21 + 0x5e0);
    uVar4 = *(iVar15 + 0x39);
    auStack_108[6] = 0;
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    auStack_108[4] = 0;
    auStack_108[5] = 0;
    uStack_110 = 0;
    auStack_108[0] = 0;
    auStack_108[1] = 0;
    if (uVar4 == 0x11) {
code_r0x08002194:
        uVar19 = *(iVar15 + 8);
        uVar20 = *(iVar15 + 10);
    }
    else {
        uVar19 = 0;
        uVar20 = 0;
        if (uVar4 == 6) goto code_r0x08002194;
    }
    if (*(iVar15 + 0x38) == '\x04') {
        iVar9 = 5;
        iVar21 = 4;
        iVar22 = 3;
        iVar24 = 2;
        uStack_118 = CONCAT44(*(iVar15 + 0xc),*(iVar15 + 0x1c));
    }
    else {
        iVar9 = 0xb;
        iVar21 = 10;
        iVar22 = 9;
        uStack_118 = *(iVar15 + 0x1c);
        uStack_110 = *(iVar15 + 0x24);
        auStack_108[1] = *(iVar15 + 0xc);
        auStack_108[2] = *(iVar15 + 0xc) >> 0x20;
        iVar24 = 8;
        auStack_108[3] = *(iVar15 + 0x14);
    }
    *(&uStack_118 + iVar24 * 4) = uVar4;
    *(&uStack_118 + iVar22 * 4) = uVar20;
    *(&uStack_118 + iVar21 * 4) = uVar19;
    iVar1 = iVar9 * 4 + -0x21524111;
    uVar19 = uStack_110 + iVar1;
    uVar20 = (uStack_118 + iVar1) - uVar19 ^ (uVar19 >> 0x1c | uVar19 * 0x10);
    iVar18 = uVar19 + uStack_118._4_4_ + iVar1;
    uVar19 = (uStack_118._4_4_ + iVar1) - uVar20 ^ (uVar20 >> 0x1a | uVar20 << 6);
    iVar1 = uVar20 + iVar18;
    uVar20 = iVar18 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
    iVar18 = uVar19 + iVar1;
    uVar19 = iVar1 - uVar20 ^ (uVar20 >> 0x10 | uVar20 << 0x10);
    iVar1 = uVar20 + iVar18;
    uVar20 = iVar18 - uVar19 ^ (uVar19 >> 0xd | uVar19 << 0x13);
    uVar16 = (iVar9 - 4U & 0xff) / 3;
    iVar18 = uVar19 + iVar1;
    uVar19 = iVar1 - uVar20 ^ (uVar20 >> 0x1c | uVar20 << 4);
    uVar20 = uVar20 + iVar18;
    if (iVar9 - 7U < 0xfffffffc) {
        uVar19 = auStack_108[1] + uVar19;
        uVar3 = (uStack_110._4_4_ + iVar18) - uVar19 ^ (uVar19 >> 0x1c | uVar19 * 0x10);
        iVar1 = uVar19 + auStack_108[0] + uVar20;
        uVar19 = (auStack_108[0] + uVar20) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
        iVar18 = uVar3 + iVar1;
        uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
        iVar1 = uVar19 + iVar18;
        uVar19 = iVar18 - uVar20 ^ (uVar20 >> 0x10 | uVar20 << 0x10);
        iVar2 = uVar20 + iVar1;
        uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0xd | uVar19 << 0x13);
        iVar18 = uVar19 + iVar2;
        uVar19 = iVar2 - uVar20 ^ (uVar20 >> 0x1c | uVar20 << 4);
        uVar20 = uVar20 + iVar18;
        if (iVar9 - 10U < 0xfffffffc) {
            uVar19 = auStack_108[4] + uVar19;
            uVar3 = (auStack_108[2] + iVar18) - uVar19 ^ (uVar19 >> 0x1c | uVar19 * 0x10);
            iVar1 = uVar19 + auStack_108[3] + uVar20;
            uVar19 = (auStack_108[3] + uVar20) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
            iVar18 = uVar3 + iVar1;
            uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
            iVar1 = uVar19 + iVar18;
            uVar19 = iVar18 - uVar20 ^ (uVar20 >> 0x10 | uVar20 << 0x10);
            iVar2 = uVar20 + iVar1;
            iVar18 = uVar19 + iVar2;
            uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0xd | uVar19 << 0x13);
            puVar23 = auStack_108 + 5;
            uVar19 = iVar2 - uVar20 ^ (uVar20 >> 0x1c | uVar20 << 4);
            uVar20 = uVar20 + iVar18;
        }
        else {
            puVar23 = auStack_108 + 2;
        }
    }
    else {
        puVar23 = &uStack_110 + 4;
    }
    uVar3 = (iVar9 - 4U) + uVar16 * -3 & 0xff | 4;
    if (uVar3 == 4) {
code_r0x080023b4:
        uVar19 = (uVar19 ^ uVar20) - (uVar20 >> 0x12 | uVar20 << 0xe);
        uVar16 = (*puVar23 + iVar18 ^ uVar19) - (uVar19 >> 0x15 | uVar19 * 0x800);
        uVar20 = (uVar16 ^ uVar20) - (uVar16 >> 7 | uVar16 * 0x2000000);
        uVar19 = (uVar20 ^ uVar19) - (uVar20 >> 0x10 | uVar20 * 0x10000);
        uVar16 = (uVar19 ^ uVar16) - (uVar19 >> 0x1c | uVar19 * 0x10);
        uVar20 = (uVar16 ^ uVar20) - (uVar16 >> 0x12 | uVar16 * 0x4000);
        uVar19 = (uVar20 ^ uVar19) - (uVar20 >> 8 | uVar20 * 0x1000000);
    }
    else {
        if (uVar3 == 5) {
code_r0x080023ac:
            uVar20 = auStack_108[uVar16 * 3] + uVar20;
            goto code_r0x080023b4;
        }
        if (uVar3 == 6) {
            if (iVar9 - 10U < 3) goto code_r0x0800243c;
            uVar19 = auStack_108[uVar16 * 3 + 1] + uVar19;
            goto code_r0x080023ac;
        }
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_e8) {
        return;
    }
    __stack_chk_fail(uVar19);
code_r0x0800243c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(1,0x8002440);
    (*pcVar8)();
}


// ===== sym.__typeid__ZTSFiyyE_global_addr @ 0x08001260 (size 8) =====

int sym.__typeid__ZTSFiyyE_global_addr(int64_t param_1,int64_t param_2)

{
    int64_t arg2;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar1;
    int iVar2;
    uint64_t arg2_00;
    int64_t iVar3;
    ulong unaff_x30;
    ulong ****ppppuStack_48;
    ulong ****ppppuStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    ppppuStack_48 = &ppppuStack_48;
    iStack_38 = *(iVar3 + 0x5e0);
    ppppuStack_40 = ppppuStack_48;
    if ((param_1 != 3) && (param_2 != 0)) {
        if (param_2 == 1) {
            iVar3 = 0;
            arg2_00 = 0;
            do {
                for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
                    if ((*(piVar1 + 0x62) != '\0') && (*(piVar1 + 0x51) == '\x11')) {
                        arg2_00 = arg2_00 + 1;
                        sym.DATARMNETa3055c21f2(piVar1,&ppppuStack_48);
                    }
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
        }
        else if (param_2 == 2) {
            iVar3 = 0;
            arg2_00 = 0;
            do {
                for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
                    if ((*(piVar1 + 0x62) != '\0') && (*(piVar1 + 0x51) == '\x06')) {
                        arg2_00 = arg2_00 + 1;
                        sym.DATARMNETa3055c21f2(piVar1,&ppppuStack_48);
                    }
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
        }
        else if (param_2 == 3) {
            iVar3 = 0;
            arg2_00 = 0;
            do {
                for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
                    if (*(piVar1 + 0x62) != '\0') {
                        arg2_00 = arg2_00 + 1;
                        sym.DATARMNETa3055c21f2(piVar1,&ppppuStack_48);
                    }
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
        }
        else {
            arg2_00 = 0;
        }
        sym.DATARMNETbad3b5165e(0xb,arg2_00);
        sym.DATARMNETc70e73c8d4(&ppppuStack_48);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    arg2 = __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETae70636c90;
    iVar3 = 0;
    iVar2 = 0;
    do {
        for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
            if (*(piVar1 + 0x62) != '\0') {
                iVar2 = iVar2 + 1;
                sym.DATARMNETa3055c21f2(piVar1,arg2);
            }
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
    return iVar2;
}


// ===== sym.__DATARMNET9c85bb95a3.07513040d09ac031960273413eb8ff28.cfi_jt @ 0x08001268 (size 8) =====

void sym.__DATARMNET9c85bb95a3.07513040d09ac031960273413eb8ff28.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETf467eaf6fc(param_1,param_2,1);
    return;
}


// ===== sym.__DATARMNET6d2ed4b822.07513040d09ac031960273413eb8ff28.cfi_jt @ 0x08001270 (size 8) =====

void sym.__DATARMNET6d2ed4b822.07513040d09ac031960273413eb8ff28.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETf467eaf6fc(param_1,param_2,2);
    return;
}


// ===== sym.__DATARMNETdf66588a73.07513040d09ac031960273413eb8ff28.cfi_jt @ 0x08001278 (size 8) =====

void sym.__DATARMNETdf66588a73.07513040d09ac031960273413eb8ff28.cfi_jt(int64_t param_1,int64_t param_2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETf467eaf6fc(param_1,param_2,0);
    return;
}


// ===== sym.DATARMNET29e8d137c4.0e07ef9868cf16610b77ecd6a88e3c8d.cfi_jt @ 0x08001280 (size 8) =====

void sym.DATARMNET29e8d137c4.0e07ef9868cf16610b77ecd6a88e3c8d.cfi_jt(int64_t *param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *arg1;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *param_1;
    while (arg1 != param_1) {
        piVar4 = *arg1;
        uVar3 = __list_del_entry_valid(arg1);
        if ((uVar3 & 1) != 0) {
            iVar1 = *arg1;
            piVar2 = arg1[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *arg1 = arg1;
        arg1[1] = arg1;
        sym.DATARMNETb56d685c50(arg1,param_2);
        arg1 = piVar4;
    }
    return;
}


// ===== sym.DATARMNET95e1703026.cfi_jt @ 0x08001288 (size 8) =====

//WARNING: Type propagation algorithm not settling

void sym.DATARMNET95e1703026.cfi_jt(uint *param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    int16_t iVar6;
    ushort uVar7;
    code *pcVar8;
    int iVar9;
    uint uVar10;
    int *piVar11;
    ulong uVar12;
    uint8_t *puVar13;
    uint *puVar14;
    ushort *puVar15;
    int64_t iVar16;
    int64_t *arg1;
    uint32_t uVar17;
    int64_t *piVar18;
    int iVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint32_t *puVar24;
    int64_t iVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int16_t iVar26;
    ulong unaff_x30;
    uchar auVar27 [16];
    ulong uStack_158;
    ulong uStack_150;
    uint32_t auStack_148 [8];
    int64_t iStack_128;
    uchar ***pppuStack_120;
    ulong uStack_118;
    char acStack_10c [4];
    char acStack_108 [4];
    int16_t aiStack_104 [2];
    uint64_t auStack_100 [2];
    uint uStack_f0;
    uint64_t auStack_e8 [3];
    uint64_t uStack_d0;
    uint32_t uStack_cc;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong *******pppppppuStack_78;
    ulong *******pppppppuStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    uint *puStack_48;
    ulong *******pppppppuStack_38;
    ulong *******pppppppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar16 = _segment.ehdr;
    iVar22 = sp_el0;
    iStack_28 = *(iVar22 + 0x5e0);
    pppppppuStack_38 = &pppppppuStack_38;
    pppppppuStack_30 = pppppppuStack_38;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    if ((*(iVar16 + 0x39) != '\0') && (iVar9 = sym.DATARMNETae70636c90(&pppppppuStack_38), iVar9 != 0)) {
        sym.DATARMNETa00cda79d0(3);
    }
    *(iVar16 + 0x39) = 1;
    *(iVar16 + 0x30) = *param_1;
    *(iVar16 + 0x34) = param_1[2];
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&pppppppuStack_38);
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_28) {
        return;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETc9dd320f49;
    iVar23 = _segment.ehdr;
    pcStack_58 = sym.DATARMNETc9dd320f49;
    iStack_50 = iVar16;
    iVar22 = sp_el0;
    iStack_68 = *(iVar22 + 0x5e0);
    pppppppuStack_78 = &pppppppuStack_78;
    pppppppuStack_70 = pppppppuStack_78;
    puStack_60 = &stack0xffffffffffffffe0;
    puStack_48 = param_1;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    if (*(iVar23 + 0x30) != *piVar11) {
        sym.DATARMNETa00cda79d0(4);
    }
    iVar9 = sym.DATARMNETae70636c90(&pppppppuStack_78);
    if (iVar9 != 0) {
        sym.DATARMNETa00cda79d0(5);
    }
    *(iVar23 + 0x39) = 0;
    *(iVar23 + 0x30) = 0;
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&pppppppuStack_78);
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return;
    }
    auVar27 = __stack_chk_fail();
    arg1 = auVar27._8_8_;
    iVar16 = auVar27._0_8_;
    *extraout_x18_00 = sym.DATARMNET1a7ed9a6a2;
    pcStack_a8 = sym.DATARMNET1a7ed9a6a2;
    iVar22 = sp_el0;
    iStack_b8 = *(iVar22 + 0x5e0);
    uVar20 = *(iVar16 + 0x30);
    iVar26 = uVar20;
    *(arg1 + 0x43) = 1;
    ppuStack_b0 = &puStack_60;
    if ((*(*(iVar16 + 0x20) + 0xe5) & 1) == 0) goto code_r0x08002068;
    if ((*(iVar16 + 0x51) >> 1 & 1) == 0) {
        piVar18 = *(iVar16 + 0x10);
        uVar12 = 1;
        if ((piVar18 != NULL) && (iVar16 + 0x10 != piVar18)) {
            puVar13 = ((piVar18[2] & 0x3ffffffffffc0U) << 6 | 0xff00000000000000) + *(piVar18 + 0x1c);
            if (puVar13 != NULL) {
                uVar4 = *puVar13 >> 4;
                *(arg1 + 7) = uVar4;
                if (uVar4 == 6) {
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    auStack_e8[2] = 0;
                    uStack_d0 = 0;
                    auStack_e8[1] = 0;
                    auStack_100[0] = auStack_100[0] & 0xffffffffffff0000;
                    auStack_e8[0] = auStack_e8[0] & 0xffffffffffffff00;
                    puVar14 = rmnet_frag_header_ptr(iVar16,0,0x28,auStack_e8 + 1);
                    if (puVar14 != NULL) {
                        aiStack_104[0] = CONCAT11(aiStack_104[0]._1_1_,*(puVar14 + 6));
                        uVar21 = rmnet_frag_ipv6_skip_exthdr(iVar16,0x28,aiStack_104,auStack_100,auStack_e8);
                        if (-1 < uVar21) {
                            iVar6 = uVar21;
                            *(arg1 + 0x34) = iVar6;
                            *(arg1 + 0x39) = aiStack_104[0];
                            uVar12 = *(puVar14 + 4);
                            *(arg1 + 0xc) = *(puVar14 + 2);
                            *(arg1 + 0x14) = uVar12;
                            uVar12 = *(puVar14 + 8);
                            *(arg1 + 0x1c) = *(puVar14 + 6);
                            *(arg1 + 0x24) = uVar12;
                            *(arg1 + 0x2c) = *puVar14;
                            if ((auStack_100[0] == 0) && (auStack_e8[0] == '\0')) {
                                uVar17 = (*(puVar14 + 1) >> 8 | (*(puVar14 + 1) & 0xff00ff) << 8) + 0x28 & 0xffff;
                                uVar4 = aiStack_104[0];
                                goto code_r0x08001fcc;
                            }
                            if (aiStack_104[0] == 0x2c) goto code_r0x0800205c;
code_r0x08002060:
                            sym.DATARMNETa00cda79d0(6);
                        }
                    }
                }
                else {
                    if (uVar4 != 4) goto code_r0x08001f20;
                    uStack_d0 = uStack_cc << 0x20;
                    auStack_e8[1] = 0;
                    auStack_e8[2] = 0;
                    puVar13 = rmnet_frag_header_ptr(iVar16,0,0x14,auStack_e8 + 1);
                    if (puVar13 != NULL) {
                        uVar21 = (*puVar13 & 0xf) << 2;
                        *(arg1 + 0x34) = uVar21;
                        uVar4 = puVar13[9];
                        *(arg1 + 0x39) = uVar4;
                        *(arg1 + 0xc) = *(puVar13 + 0xc);
                        *(arg1 + 0x1c) = *(puVar13 + 0x10);
                        *(arg1 + 0x2c) = puVar13[8];
                        *(arg1 + 0x2d) = puVar13[1];
                        *(arg1 + 0x2e) = *(puVar13 + 6);
                        if ((*(puVar13 + 6) & 0xff3f) != 0) goto code_r0x08002060;
                        uVar17 = *(puVar13 + 2) >> 8 | (*(puVar13 + 2) & 0xff00ff) << 8;
code_r0x08001fcc:
                        *(arg1 + 0x44) = uVar17 != (uVar20 & 0xffff);
                        if (uVar4 == 0x11) {
                            auStack_e8[1] = 0;
                            puVar15 = rmnet_frag_header_ptr(iVar16,uVar21 & 0xffff,8,auStack_e8 + 1);
                            if (puVar15 != NULL) {
                                *(arg1 + 0x36) = 8;
                                *(arg1 + 1) = *puVar15;
                                *(arg1 + 10) = puVar15[1];
code_r0x080020f8:
                                *(arg1 + 0x43) = 0;
                                uVar10 = sym.DATARMNETcb7325e02d(arg1);
                                *(arg1 + 0x3c) = uVar10;
                                if (*(arg1 + 0x44) == '\0') {
                                    *(iVar16 + 0x4e) = arg1[7];
                                    *(iVar16 + 0x4a) = *(arg1 + 0x34);
                                    *(iVar16 + 0x4f) = *(arg1 + 0x39);
                                    uVar7 = *(arg1 + 0x36);
                                    *(iVar16 + 0x51) = *(iVar16 + 0x51) | 2;
                                    *(iVar16 + 0x4c) = uVar7;
                                }
                            }
                        }
                        else if (uVar4 == 6) {
                            uStack_d0 = uStack_d0 & 0xffffffff00000000;
                            auStack_e8[1] = 0;
                            auStack_e8[2] = 0;
                            puVar15 = rmnet_frag_header_ptr(iVar16,uVar21 & 0xffff,0x14,auStack_e8 + 1);
                            if (puVar15 != NULL) {
                                *(arg1 + 0x36) = *(puVar15 + 6) >> 2 & 0x3c;
                                *(arg1 + 1) = *puVar15;
                                *(arg1 + 10) = puVar15[1];
                                uVar20 = (*(puVar15 + 2) & 0xff00ff00) >> 8 | (*(puVar15 + 2) & 0xff00ff) << 8;
                                *(arg1 + 6) = uVar20 >> 0x10 | uVar20 << 0x10;
                                goto code_r0x080020f8;
                            }
                        }
                    }
                }
                goto code_r0x08002068;
            }
code_r0x08001f20:
            uVar12 = 1;
        }
    }
    else {
        cVar5 = *(iVar16 + 0x4e);
        auStack_e8[0] = 0;
        uStack_f0 = 0;
        auStack_100[0] = 0;
        auStack_100[1] = 0;
        *(arg1 + 7) = cVar5;
        *(arg1 + 0x34) = *(iVar16 + 0x4a);
        *(arg1 + 0x39) = *(iVar16 + 0x4f);
        *(arg1 + 0x36) = *(iVar16 + 0x4c);
        iVar26 = *(iVar16 + 0x30);
        if (cVar5 == '\x04') {
            uStack_d0 = uStack_cc << 0x20;
            auStack_e8[1] = 0;
            auStack_e8[2] = 0;
            iVar22 = rmnet_frag_header_ptr(iVar16,0,0x14,auStack_e8 + 1);
            if (iVar22 != 0) {
                *(arg1 + 0xc) = *(iVar22 + 0xc);
                *(arg1 + 0x1c) = *(iVar22 + 0x10);
                *(arg1 + 0x2c) = *(iVar22 + 8);
                *(arg1 + 0x2d) = *(iVar22 + 1);
                *(arg1 + 0x2e) = *(iVar22 + 6);
code_r0x08001e7c:
                puVar15 = rmnet_frag_header_ptr(iVar16,*(arg1 + 0x34),8,auStack_e8);
                if (puVar15 != NULL) {
                    *(arg1 + 1) = *puVar15;
                    *(arg1 + 10) = puVar15[1];
                    if (*(arg1 + 0x39) == '\x06') {
                        iVar22 = rmnet_frag_header_ptr(iVar16,*(arg1 + 0x34),0x14,auStack_100);
                        if (iVar22 == 0) goto code_r0x08002068;
                        puVar24 = iVar22 + 4;
                        if ((*(iVar16 + 0x51) & 8) != 0) {
                            puVar24 = iVar16 + 0x3c;
                        }
                        uVar20 = (*puVar24 & 0xff00ff00) >> 8 | (*puVar24 & 0xff00ff) << 8;
                        *(arg1 + 6) = uVar20 >> 0x10 | uVar20 << 0x10;
                    }
                    uVar10 = sym.DATARMNETcb7325e02d(arg1);
                    uVar12 = 0;
                    *(arg1 + 0x3c) = uVar10;
                    iVar26 = *(iVar16 + 0x4a);
                    iVar6 = *(iVar16 + 0x4c);
                    uVar10 = *(iVar16 + 0x30);
                    *arg1 = iVar16;
                    *(arg1 + 0x43) = 0;
                    *(arg1 + 8) = uVar10 - (iVar26 + iVar6);
                    goto code_r0x08002094;
                }
            }
        }
        else {
            uStack_c8 = 0;
            uStack_c0 = 0;
            auStack_e8[2] = 0;
            uStack_d0 = 0;
            auStack_e8[1] = 0;
            puVar14 = rmnet_frag_header_ptr(iVar16,0,0x28,auStack_e8 + 1);
            if (puVar14 != NULL) {
                uVar12 = *(puVar14 + 4);
                *(arg1 + 0xc) = *(puVar14 + 2);
                *(arg1 + 0x14) = uVar12;
                uVar12 = *(puVar14 + 8);
                *(arg1 + 0x1c) = *(puVar14 + 6);
                *(arg1 + 0x24) = uVar12;
                *(arg1 + 0x2c) = *puVar14;
                if (0x28 < *(arg1 + 0x34)) {
                    acStack_10c[0] = *(puVar14 + 6);
                    aiStack_104[0] = 0;
                    acStack_108[0] = '\0';
                    iVar9 = rmnet_frag_ipv6_skip_exthdr(iVar16,0x28,acStack_10c,aiStack_104,acStack_108);
                    if (((iVar9 < 0) || (aiStack_104[0] != 0)) || (acStack_108[0] != '\0')) {
                        if (acStack_10c[0] == ',') {
                            iVar6 = *(arg1 + 0x34);
code_r0x0800205c:
                            *(arg1 + 0x34) = iVar6 + 8;
                        }
                        goto code_r0x08002060;
                    }
                }
                goto code_r0x08001e7c;
            }
        }
code_r0x08002068:
        *(arg1 + 8) = iVar26 - (*(arg1 + 0x34) + *(arg1 + 0x36));
        if (*(arg1 + 0x44) != '\0') {
            sym.DATARMNETa00cda79d0(7);
        }
        uVar12 = 0;
        *arg1 = iVar16;
    }
code_r0x08002094:
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_b8) {
        return;
    }
    iVar16 = __stack_chk_fail(uVar12);
    *extraout_x18_01 = 0x8002144;
    pppuStack_120 = &ppuStack_b0;
    uStack_118 = 0x8002144;
    iVar22 = sp_el0;
    iStack_128 = *(iVar22 + 0x5e0);
    uVar4 = *(iVar16 + 0x39);
    auStack_148[6] = 0;
    auStack_148[2] = 0;
    auStack_148[3] = 0;
    auStack_148[4] = 0;
    auStack_148[5] = 0;
    uStack_150 = 0;
    auStack_148[0] = 0;
    auStack_148[1] = 0;
    if (uVar4 == 0x11) {
code_r0x08002194:
        uVar20 = *(iVar16 + 8);
        uVar21 = *(iVar16 + 10);
    }
    else {
        uVar20 = 0;
        uVar21 = 0;
        if (uVar4 == 6) goto code_r0x08002194;
    }
    if (*(iVar16 + 0x38) == '\x04') {
        iVar9 = 5;
        iVar22 = 4;
        iVar23 = 3;
        iVar25 = 2;
        uStack_158 = CONCAT44(*(iVar16 + 0xc),*(iVar16 + 0x1c));
    }
    else {
        iVar9 = 0xb;
        iVar22 = 10;
        iVar23 = 9;
        uStack_158 = *(iVar16 + 0x1c);
        uStack_150 = *(iVar16 + 0x24);
        auStack_148[1] = *(iVar16 + 0xc);
        auStack_148[2] = *(iVar16 + 0xc) >> 0x20;
        iVar25 = 8;
        auStack_148[3] = *(iVar16 + 0x14);
    }
    *(&uStack_158 + iVar25 * 4) = uVar4;
    *(&uStack_158 + iVar23 * 4) = uVar21;
    *(&uStack_158 + iVar22 * 4) = uVar20;
    iVar1 = iVar9 * 4 + -0x21524111;
    uVar20 = uStack_150 + iVar1;
    uVar21 = (uStack_158 + iVar1) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
    iVar19 = uVar20 + uStack_158._4_4_ + iVar1;
    uVar20 = (uStack_158._4_4_ + iVar1) - uVar21 ^ (uVar21 >> 0x1a | uVar21 << 6);
    iVar1 = uVar21 + iVar19;
    uVar21 = iVar19 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
    iVar19 = uVar20 + iVar1;
    uVar20 = iVar1 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
    iVar1 = uVar21 + iVar19;
    uVar21 = iVar19 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
    uVar17 = (iVar9 - 4U & 0xff) / 3;
    iVar19 = uVar20 + iVar1;
    uVar20 = iVar1 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
    uVar21 = uVar21 + iVar19;
    if (iVar9 - 7U < 0xfffffffc) {
        uVar20 = auStack_148[1] + uVar20;
        uVar3 = (uStack_150._4_4_ + iVar19) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
        iVar1 = uVar20 + auStack_148[0] + uVar21;
        uVar20 = (auStack_148[0] + uVar21) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
        iVar19 = uVar3 + iVar1;
        uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
        iVar1 = uVar20 + iVar19;
        uVar20 = iVar19 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
        iVar2 = uVar21 + iVar1;
        uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
        iVar19 = uVar20 + iVar2;
        uVar20 = iVar2 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
        uVar21 = uVar21 + iVar19;
        if (iVar9 - 10U < 0xfffffffc) {
            uVar20 = auStack_148[4] + uVar20;
            uVar3 = (auStack_148[2] + iVar19) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
            iVar1 = uVar20 + auStack_148[3] + uVar21;
            uVar20 = (auStack_148[3] + uVar21) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
            iVar19 = uVar3 + iVar1;
            uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
            iVar1 = uVar20 + iVar19;
            uVar20 = iVar19 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
            iVar2 = uVar21 + iVar1;
            iVar19 = uVar20 + iVar2;
            uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
            puVar24 = auStack_148 + 5;
            uVar20 = iVar2 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
            uVar21 = uVar21 + iVar19;
        }
        else {
            puVar24 = auStack_148 + 2;
        }
    }
    else {
        puVar24 = &uStack_150 + 4;
    }
    uVar3 = (iVar9 - 4U) + uVar17 * -3 & 0xff | 4;
    if (uVar3 == 4) {
code_r0x080023b4:
        uVar20 = (uVar20 ^ uVar21) - (uVar21 >> 0x12 | uVar21 << 0xe);
        uVar17 = (*puVar24 + iVar19 ^ uVar20) - (uVar20 >> 0x15 | uVar20 * 0x800);
        uVar21 = (uVar17 ^ uVar21) - (uVar17 >> 7 | uVar17 * 0x2000000);
        uVar20 = (uVar21 ^ uVar20) - (uVar21 >> 0x10 | uVar21 * 0x10000);
        uVar17 = (uVar20 ^ uVar17) - (uVar20 >> 0x1c | uVar20 * 0x10);
        uVar21 = (uVar17 ^ uVar21) - (uVar17 >> 0x12 | uVar17 * 0x4000);
        uVar20 = (uVar21 ^ uVar20) - (uVar21 >> 8 | uVar21 * 0x1000000);
    }
    else {
        if (uVar3 == 5) {
code_r0x080023ac:
            uVar21 = auStack_148[uVar17 * 3] + uVar21;
            goto code_r0x080023b4;
        }
        if (uVar3 == 6) {
            if (iVar9 - 10U < 3) goto code_r0x0800243c;
            uVar20 = auStack_148[uVar17 * 3 + 1] + uVar20;
            goto code_r0x080023ac;
        }
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_128) {
        return;
    }
    __stack_chk_fail(uVar20);
code_r0x0800243c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(1,0x8002440);
    (*pcVar8)();
}


// ===== sym.DATARMNETc2a630b113 @ 0x08001290 (size 20) =====

ulong sym.DATARMNETc2a630b113(void)

{
    return _segment.ehdr;
}


// ===== sym.DATARMNET7dec24813e @ 0x080012a4 (size 304) =====

ulong sym.DATARMNET7dec24813e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *arg3;
    if ((arg3 != 0) && (iVar2 = strncmp(arg3,"rmnet_data",10), iVar2 == 0)) {
        if (arg2 == 6) {
            if ((_segment.ehdr != 0) &&
               (cVar1 = *(_segment.ehdr + 0x14b8) + -1, *(_segment.ehdr + 0x14b8) = cVar1, cVar1 == '\0')) {
                _printk(0x80001fc,"DATARMNET7dec24813e",arg3);
                sym.DATARMNET345f805b34();
            }
        }
        else if (arg2 == 5) {
            if (_segment.ehdr == 0) {
                arg1_00 = rmnet_get_port(*(arg3 + 0xa08));
                if (arg1_00 == 0) {
                    _printk(0x8000185,"DATARMNET7dec24813e",arg3);
                }
                else {
                    _printk(0x8000221,"DATARMNET7dec24813e",arg3);
                    iVar2 = sym.DATARMNET9f53d54812(arg1_00);
                    if (iVar2 == 2) {
                        _printk(0x80001b0,"DATARMNET7dec24813e");
                    }
                }
            }
            else {
                *(_segment.ehdr + 0x14b8) = *(_segment.ehdr + 0x14b8) + '\x01';
            }
        }
    }
    return 0;
}


// ===== sym.DATARMNET9f53d54812 @ 0x080013d4 (size 436) =====

int sym.DATARMNET9f53d54812(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int64_t *piVar3;
    ulong *in_x18;
    int64_t iVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = kmem_cache_alloc_trace(_param_get_ullong,0xdc0,0x14c0);
    _segment.ehdr = piVar3;
    if (piVar3 == NULL) {
        _printk(0x800029d,"");
        return 2;
    }
    *piVar3 = arg1;
    iVar1 = sym.DATARMNETdbcaf01255(piVar3);
    piVar3 = _segment.ehdr;
    if (iVar1 < 0) {
        kfree(_segment.ehdr);
        _segment.ehdr = NULL;
        return iVar1;
    }
    iVar4 = *_segment.ehdr;
    _segment.ehdr[9] = sym.DATARMNETb7e47d7254.cfi_jt;
    piVar3[8] = sym.DATARMNET9292bebdd3.cfi_jt;
    iVar1 = qmi_rmnet_ps_ind_register(iVar4);
    if (iVar1 == 0) {
        if ((*(iVar4 + 0xb) >> 5 & 1) == 0) goto code_r0x0800148c;
code_r0x08001458:
        piVar3 = _segment.ehdr;
        _segment.ehdr[2] = sym.DATARMNET95e1703026.cfi_jt;
        piVar3[3] = sym.DATARMNETc9dd320f49.cfi_jt;
        *(piVar3 + 1) = 0;
        iVar2 = rmnet_map_dl_ind_register(iVar4);
        if (iVar2 == 0) {
            *(piVar3 + 7) = 1;
            goto code_r0x0800148c;
        }
        _printk(0x80003c1,"DATARMNETd68e3594a7");
        _rmnet_perf_chain_end = sym.DATARMNETbe30d096c6.881e72f5f88a4a394e75c9529b77e0ea.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNETcbc211d052.llvm.17123689797798262549,1);
    }
    else {
        _printk(0x800039e,"DATARMNETd68e3594a7");
        if ((*(iVar4 + 0xb) >> 5 & 1) != 0) goto code_r0x08001458;
code_r0x0800148c:
        _rmnet_perf_chain_end = sym.DATARMNETbe30d096c6.881e72f5f88a4a394e75c9529b77e0ea.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNETcbc211d052.llvm.17123689797798262549,1);
        iVar2 = 0;
        if (iVar1 == 0) goto code_r0x080014b4;
    }
    _printk(0x80002d5,"");
    iVar2 = 1;
code_r0x080014b4:
    *(_segment.ehdr + 0x297) = 1;
    sym.DATARMNET818b960147();
    return iVar2;
}


// ===== sym.DATARMNET345f805b34 @ 0x08001588 (size 216) =====

void sym.DATARMNET345f805b34(void)

{
    int64_t iVar1;
    code *pcVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar4;
    ulong unaff_x30;
    uchar auVar5 [16];
    ulong ***pppuStack_38;
    ulong ***pppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    pppuStack_38 = &pppuStack_38;
    pppuStack_30 = pppuStack_38;
    if (_segment.ehdr != NULL) {
        uVar4 = *_segment.ehdr;
        qmi_rmnet_ps_ind_deregister(uVar4,_segment.ehdr + 8);
        if (*(_segment.ehdr + 7) != '\0') {
            rmnet_map_dl_ind_deregister(uVar4,_segment.ehdr + 1);
        }
        __printk = 0;
        rmnet_module_hook_unregister_no_sync(obj.DATARMNET162e7a2013.llvm.17990970886840922578,1);
        _kmalloc_caches = 0;
        rmnet_module_hook_unregister_no_sync(obj.DATARMNETcbc211d052.llvm.17123689797798262549,1);
        synchronize_rcu();
        sym.DATARMNETae70636c90(&pppuStack_38);
        sym.DATARMNETb98b78b8e3();
        kfree(_segment.ehdr);
        _segment.ehdr = NULL;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        auVar5 = __stack_chk_fail();
        puVar3 = auVar5._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar5._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar2 = SoftwareBreakpoint(0x5502,0x80016b8);
        (*pcVar2)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001660 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080016a4

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
    //switch table (4 cases) at 0x8000180
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80016b8);
    (*pcVar1)();
}


// ===== sym.DATARMNET664568fcd0 @ 0x080016b8 (size 44) =====

void sym.DATARMNET664568fcd0(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    return;
}


// ===== sym.DATARMNET6a76048590 @ 0x080016e4 (size 44) =====

void sym.DATARMNET6a76048590(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    return;
}


// ===== sym.DATARMNET818b960147 @ 0x08001710 (size 68) =====

void sym.DATARMNET818b960147(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _rmnet_perf_desc_entry = sym.DATARMNETb56d685c50.0e07ef9868cf16610b77ecd6a88e3c8d.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNET162e7a2013.llvm.17990970886840922578,1);
    return;
}


// ===== sym.DATARMNETb56d685c50 @ 0x08001754 (size 364) =====

void sym.DATARMNETb56d685c50(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar *puStack_90;
    ulong *puStack_88;
    ulong *puStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    puStack_88 = &puStack_90;
    puStack_90 = &puStack_90;
    *in_x18 = unaff_x30;
    piVar2 = _segment.ehdr;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    puStack_80 = NULL;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    *piVar2 = arg2;
    uVar5 = sym.DATARMNET1a7ed9a6a2(arg1,&puStack_80);
    if ((uVar5 & 1) == 0) {
        sym.DATARMNETa00cda79d0(0);
        if (uStack_40._3_1_ == '\0') {
            if (uStack_40._4_1_ == '\0') {
                if (((*(arg1 + 0x51) & 1) != 0) &&
                   (uVar5 = sym.DATARMNETfbf5798e15(&puStack_80,&puStack_90), (uVar5 & 1) != 0))
                goto code_r0x08001878;
            }
            else {
                sym.DATARMNETc38c135c9f(uStack_48 >> 0x20,&puStack_90);
            }
        }
        puVar4 = puStack_80;
        puVar3 = puStack_88;
        if (uStack_50._4_2_ + uStack_40 + uStack_50._6_2_ < 0x10001) {
            if (uStack_40._3_1_ == '\0') {
                *(puStack_80 + 0x34) = uStack_48._4_4_;
            }
            uVar5 = __list_add_valid(puStack_80,puStack_88,&puStack_90);
            if ((uVar5 & 1) != 0) {
                puStack_88 = puVar4;
                *puVar4 = &puStack_90;
                puVar4[1] = puVar3;
                *puVar3 = puVar4;
            }
        }
    }
    else {
        sym.DATARMNETa00cda79d0(2);
        rmnet_recycle_frag_descriptor(arg1,arg2);
    }
code_r0x08001878:
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&puStack_90);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETba38823a2f;
    __printk = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET162e7a2013.llvm.17990970886840922578,1);
    return;
}


// ===== sym.DATARMNETba38823a2f @ 0x080018c0 (size 56) =====

void sym.DATARMNETba38823a2f(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __printk = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET162e7a2013.llvm.17990970886840922578,1);
    return;
}


// ===== sym.DATARMNETc70e73c8d4 @ 0x080018f8 (size 292) =====

void sym.DATARMNETc70e73c8d4(uint32_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    ulong *puVar5;
    uint64_t uVar6;
    ulong *in_x18;
    uint32_t arg1_00;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar5 = _segment.ehdr;
    piVar4 = *arg1;
    while (piVar4 != arg1) {
        uVar3 = *(piVar4 + 6);
        if (uVar3 < 0xc351) {
            if (uVar3 < 0x7531) {
                if (uVar3 < 0x59d9) {
                    if (uVar3 < 0x38a5) {
                        if (uVar3 < 0x1b59) {
                            arg1_00 = 0x15;
                            if (0x578 < uVar3) {
                                arg1_00 = 0x16;
                            }
                        }
                        else {
                            arg1_00 = 0x17;
                        }
                    }
                    else {
                        arg1_00 = 0x18;
                    }
                }
                else {
                    arg1_00 = 0x19;
                }
            }
            else {
                arg1_00 = 0x1a;
            }
        }
        else {
            arg1_00 = 0x1b;
        }
        piVar7 = *piVar4;
        sym.DATARMNETa00cda79d0(arg1_00);
        sym.DATARMNETa00cda79d0(1);
        uVar6 = __list_del_entry_valid(piVar4);
        if ((uVar6 & 1) != 0) {
            iVar1 = *piVar4;
            piVar2 = piVar4[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *piVar4 = piVar4;
        piVar4[1] = piVar4;
        rmnet_frag_deliver(piVar4,*puVar5);
        piVar4 = piVar7;
    }
    return;
}


// ===== sym.DATARMNET19d190f2bd @ 0x08001a1c (size 136) =====

void sym.DATARMNET19d190f2bd(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *in_x18;
    int64_t *piVar2;
    ulong *puVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x34) + *(arg1 + 0x40) + *(arg1 + 0x36) < 0x10001) {
        piVar2 = *arg1;
        if (*(arg1 + 0x43) == '\0') {
            *(piVar2 + 0x34) = *(arg1 + 0x3c);
        }
        puVar3 = *(arg2 + 8);
        uVar1 = __list_add_valid(piVar2,puVar3,arg2);
        if ((uVar1 & 1) != 0) {
            *(arg2 + 8) = piVar2;
            *piVar2 = arg2;
            piVar2[1] = puVar3;
            *puVar3 = piVar2;
        }
    }
    return;
}


// ===== sym.DATARMNET9292bebdd3 @ 0x08001aa4 (size 12) =====

void sym.DATARMNET9292bebdd3(void)

{
    return;
}


// ===== sym.DATARMNETb7e47d7254 @ 0x08001ab0 (size 12) =====

void sym.DATARMNETb7e47d7254(void)

{
    return;
}


// ===== sym.DATARMNET95e1703026 @ 0x08001abc (size 188) =====

//WARNING: Type propagation algorithm not settling

void sym.DATARMNET95e1703026(int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    int16_t iVar6;
    ushort uVar7;
    code *pcVar8;
    int iVar9;
    uint uVar10;
    int *piVar11;
    ulong uVar12;
    uint8_t *puVar13;
    uint *puVar14;
    ushort *puVar15;
    int64_t iVar16;
    int64_t *arg1_00;
    uint32_t uVar17;
    int64_t *piVar18;
    int iVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    uint32_t *puVar24;
    int64_t iVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int16_t iVar26;
    ulong unaff_x30;
    uchar auVar27 [16];
    ulong uStack_158;
    ulong uStack_150;
    uint32_t auStack_148 [8];
    int64_t iStack_128;
    uchar ***pppuStack_120;
    ulong uStack_118;
    char acStack_10c [4];
    char acStack_108 [4];
    int16_t aiStack_104 [2];
    uint64_t auStack_100 [2];
    uint uStack_f0;
    uint64_t auStack_e8 [3];
    uint64_t uStack_d0;
    uint32_t uStack_cc;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar **ppuStack_b0;
    code *pcStack_a8;
    ulong *******pppppppuStack_78;
    ulong *******pppppppuStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    ulong *******pppppppuStack_38;
    ulong *******pppppppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar16 = _segment.ehdr;
    iVar22 = sp_el0;
    iStack_28 = *(iVar22 + 0x5e0);
    pppppppuStack_38 = &pppppppuStack_38;
    pppppppuStack_30 = pppppppuStack_38;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    if ((*(iVar16 + 0x39) != '\0') && (iVar9 = sym.DATARMNETae70636c90(&pppppppuStack_38), iVar9 != 0)) {
        sym.DATARMNETa00cda79d0(3);
    }
    *(iVar16 + 0x39) = 1;
    *(iVar16 + 0x30) = *arg1;
    *(iVar16 + 0x34) = *(arg1 + 8);
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&pppppppuStack_38);
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_28) {
        return;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETc9dd320f49;
    iVar23 = _segment.ehdr;
    pcStack_58 = sym.DATARMNETc9dd320f49;
    iStack_50 = iVar16;
    iVar22 = sp_el0;
    iStack_68 = *(iVar22 + 0x5e0);
    pppppppuStack_78 = &pppppppuStack_78;
    pppppppuStack_70 = pppppppuStack_78;
    puStack_60 = &stack0xffffffffffffffe0;
    iStack_48 = arg1;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    if (*(iVar23 + 0x30) != *piVar11) {
        sym.DATARMNETa00cda79d0(4);
    }
    iVar9 = sym.DATARMNETae70636c90(&pppppppuStack_78);
    if (iVar9 != 0) {
        sym.DATARMNETa00cda79d0(5);
    }
    *(iVar23 + 0x39) = 0;
    *(iVar23 + 0x30) = 0;
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&pppppppuStack_78);
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return;
    }
    auVar27 = __stack_chk_fail();
    arg1_00 = auVar27._8_8_;
    iVar16 = auVar27._0_8_;
    *extraout_x18_00 = sym.DATARMNET1a7ed9a6a2;
    pcStack_a8 = sym.DATARMNET1a7ed9a6a2;
    iVar22 = sp_el0;
    iStack_b8 = *(iVar22 + 0x5e0);
    uVar20 = *(iVar16 + 0x30);
    iVar26 = uVar20;
    *(arg1_00 + 0x43) = 1;
    ppuStack_b0 = &puStack_60;
    if ((*(*(iVar16 + 0x20) + 0xe5) & 1) == 0) goto code_r0x08002068;
    if ((*(iVar16 + 0x51) >> 1 & 1) == 0) {
        piVar18 = *(iVar16 + 0x10);
        uVar12 = 1;
        if ((piVar18 != NULL) && (iVar16 + 0x10 != piVar18)) {
            puVar13 = ((piVar18[2] & 0x3ffffffffffc0U) << 6 | 0xff00000000000000) + *(piVar18 + 0x1c);
            if (puVar13 != NULL) {
                uVar4 = *puVar13 >> 4;
                *(arg1_00 + 7) = uVar4;
                if (uVar4 == 6) {
                    uStack_c8 = 0;
                    uStack_c0 = 0;
                    auStack_e8[2] = 0;
                    uStack_d0 = 0;
                    auStack_e8[1] = 0;
                    auStack_100[0] = auStack_100[0] & 0xffffffffffff0000;
                    auStack_e8[0] = auStack_e8[0] & 0xffffffffffffff00;
                    puVar14 = rmnet_frag_header_ptr(iVar16,0,0x28,auStack_e8 + 1);
                    if (puVar14 != NULL) {
                        aiStack_104[0] = CONCAT11(aiStack_104[0]._1_1_,*(puVar14 + 6));
                        uVar21 = rmnet_frag_ipv6_skip_exthdr(iVar16,0x28,aiStack_104,auStack_100,auStack_e8);
                        if (-1 < uVar21) {
                            iVar6 = uVar21;
                            *(arg1_00 + 0x34) = iVar6;
                            *(arg1_00 + 0x39) = aiStack_104[0];
                            uVar12 = *(puVar14 + 4);
                            *(arg1_00 + 0xc) = *(puVar14 + 2);
                            *(arg1_00 + 0x14) = uVar12;
                            uVar12 = *(puVar14 + 8);
                            *(arg1_00 + 0x1c) = *(puVar14 + 6);
                            *(arg1_00 + 0x24) = uVar12;
                            *(arg1_00 + 0x2c) = *puVar14;
                            if ((auStack_100[0] == 0) && (auStack_e8[0] == '\0')) {
                                uVar17 = (*(puVar14 + 1) >> 8 | (*(puVar14 + 1) & 0xff00ff) << 8) + 0x28 & 0xffff;
                                uVar4 = aiStack_104[0];
                                goto code_r0x08001fcc;
                            }
                            if (aiStack_104[0] == 0x2c) goto code_r0x0800205c;
code_r0x08002060:
                            sym.DATARMNETa00cda79d0(6);
                        }
                    }
                }
                else {
                    if (uVar4 != 4) goto code_r0x08001f20;
                    uStack_d0 = uStack_cc << 0x20;
                    auStack_e8[1] = 0;
                    auStack_e8[2] = 0;
                    puVar13 = rmnet_frag_header_ptr(iVar16,0,0x14,auStack_e8 + 1);
                    if (puVar13 != NULL) {
                        uVar21 = (*puVar13 & 0xf) << 2;
                        *(arg1_00 + 0x34) = uVar21;
                        uVar4 = puVar13[9];
                        *(arg1_00 + 0x39) = uVar4;
                        *(arg1_00 + 0xc) = *(puVar13 + 0xc);
                        *(arg1_00 + 0x1c) = *(puVar13 + 0x10);
                        *(arg1_00 + 0x2c) = puVar13[8];
                        *(arg1_00 + 0x2d) = puVar13[1];
                        *(arg1_00 + 0x2e) = *(puVar13 + 6);
                        if ((*(puVar13 + 6) & 0xff3f) != 0) goto code_r0x08002060;
                        uVar17 = *(puVar13 + 2) >> 8 | (*(puVar13 + 2) & 0xff00ff) << 8;
code_r0x08001fcc:
                        *(arg1_00 + 0x44) = uVar17 != (uVar20 & 0xffff);
                        if (uVar4 == 0x11) {
                            auStack_e8[1] = 0;
                            puVar15 = rmnet_frag_header_ptr(iVar16,uVar21 & 0xffff,8,auStack_e8 + 1);
                            if (puVar15 != NULL) {
                                *(arg1_00 + 0x36) = 8;
                                *(arg1_00 + 1) = *puVar15;
                                *(arg1_00 + 10) = puVar15[1];
code_r0x080020f8:
                                *(arg1_00 + 0x43) = 0;
                                uVar10 = sym.DATARMNETcb7325e02d(arg1_00);
                                *(arg1_00 + 0x3c) = uVar10;
                                if (*(arg1_00 + 0x44) == '\0') {
                                    *(iVar16 + 0x4e) = arg1_00[7];
                                    *(iVar16 + 0x4a) = *(arg1_00 + 0x34);
                                    *(iVar16 + 0x4f) = *(arg1_00 + 0x39);
                                    uVar7 = *(arg1_00 + 0x36);
                                    *(iVar16 + 0x51) = *(iVar16 + 0x51) | 2;
                                    *(iVar16 + 0x4c) = uVar7;
                                }
                            }
                        }
                        else if (uVar4 == 6) {
                            uStack_d0 = uStack_d0 & 0xffffffff00000000;
                            auStack_e8[1] = 0;
                            auStack_e8[2] = 0;
                            puVar15 = rmnet_frag_header_ptr(iVar16,uVar21 & 0xffff,0x14,auStack_e8 + 1);
                            if (puVar15 != NULL) {
                                *(arg1_00 + 0x36) = *(puVar15 + 6) >> 2 & 0x3c;
                                *(arg1_00 + 1) = *puVar15;
                                *(arg1_00 + 10) = puVar15[1];
                                uVar20 = (*(puVar15 + 2) & 0xff00ff00) >> 8 | (*(puVar15 + 2) & 0xff00ff) << 8;
                                *(arg1_00 + 6) = uVar20 >> 0x10 | uVar20 << 0x10;
                                goto code_r0x080020f8;
                            }
                        }
                    }
                }
                goto code_r0x08002068;
            }
code_r0x08001f20:
            uVar12 = 1;
        }
    }
    else {
        cVar5 = *(iVar16 + 0x4e);
        auStack_e8[0] = 0;
        uStack_f0 = 0;
        auStack_100[0] = 0;
        auStack_100[1] = 0;
        *(arg1_00 + 7) = cVar5;
        *(arg1_00 + 0x34) = *(iVar16 + 0x4a);
        *(arg1_00 + 0x39) = *(iVar16 + 0x4f);
        *(arg1_00 + 0x36) = *(iVar16 + 0x4c);
        iVar26 = *(iVar16 + 0x30);
        if (cVar5 == '\x04') {
            uStack_d0 = uStack_cc << 0x20;
            auStack_e8[1] = 0;
            auStack_e8[2] = 0;
            iVar22 = rmnet_frag_header_ptr(iVar16,0,0x14,auStack_e8 + 1);
            if (iVar22 != 0) {
                *(arg1_00 + 0xc) = *(iVar22 + 0xc);
                *(arg1_00 + 0x1c) = *(iVar22 + 0x10);
                *(arg1_00 + 0x2c) = *(iVar22 + 8);
                *(arg1_00 + 0x2d) = *(iVar22 + 1);
                *(arg1_00 + 0x2e) = *(iVar22 + 6);
code_r0x08001e7c:
                puVar15 = rmnet_frag_header_ptr(iVar16,*(arg1_00 + 0x34),8,auStack_e8);
                if (puVar15 != NULL) {
                    *(arg1_00 + 1) = *puVar15;
                    *(arg1_00 + 10) = puVar15[1];
                    if (*(arg1_00 + 0x39) == '\x06') {
                        iVar22 = rmnet_frag_header_ptr(iVar16,*(arg1_00 + 0x34),0x14,auStack_100);
                        if (iVar22 == 0) goto code_r0x08002068;
                        puVar24 = iVar22 + 4;
                        if ((*(iVar16 + 0x51) & 8) != 0) {
                            puVar24 = iVar16 + 0x3c;
                        }
                        uVar20 = (*puVar24 & 0xff00ff00) >> 8 | (*puVar24 & 0xff00ff) << 8;
                        *(arg1_00 + 6) = uVar20 >> 0x10 | uVar20 << 0x10;
                    }
                    uVar10 = sym.DATARMNETcb7325e02d(arg1_00);
                    uVar12 = 0;
                    *(arg1_00 + 0x3c) = uVar10;
                    iVar26 = *(iVar16 + 0x4a);
                    iVar6 = *(iVar16 + 0x4c);
                    uVar10 = *(iVar16 + 0x30);
                    *arg1_00 = iVar16;
                    *(arg1_00 + 0x43) = 0;
                    *(arg1_00 + 8) = uVar10 - (iVar26 + iVar6);
                    goto code_r0x08002094;
                }
            }
        }
        else {
            uStack_c8 = 0;
            uStack_c0 = 0;
            auStack_e8[2] = 0;
            uStack_d0 = 0;
            auStack_e8[1] = 0;
            puVar14 = rmnet_frag_header_ptr(iVar16,0,0x28,auStack_e8 + 1);
            if (puVar14 != NULL) {
                uVar12 = *(puVar14 + 4);
                *(arg1_00 + 0xc) = *(puVar14 + 2);
                *(arg1_00 + 0x14) = uVar12;
                uVar12 = *(puVar14 + 8);
                *(arg1_00 + 0x1c) = *(puVar14 + 6);
                *(arg1_00 + 0x24) = uVar12;
                *(arg1_00 + 0x2c) = *puVar14;
                if (0x28 < *(arg1_00 + 0x34)) {
                    acStack_10c[0] = *(puVar14 + 6);
                    aiStack_104[0] = 0;
                    acStack_108[0] = '\0';
                    iVar9 = rmnet_frag_ipv6_skip_exthdr(iVar16,0x28,acStack_10c,aiStack_104,acStack_108);
                    if (((iVar9 < 0) || (aiStack_104[0] != 0)) || (acStack_108[0] != '\0')) {
                        if (acStack_10c[0] == ',') {
                            iVar6 = *(arg1_00 + 0x34);
code_r0x0800205c:
                            *(arg1_00 + 0x34) = iVar6 + 8;
                        }
                        goto code_r0x08002060;
                    }
                }
                goto code_r0x08001e7c;
            }
        }
code_r0x08002068:
        *(arg1_00 + 8) = iVar26 - (*(arg1_00 + 0x34) + *(arg1_00 + 0x36));
        if (*(arg1_00 + 0x44) != '\0') {
            sym.DATARMNETa00cda79d0(7);
        }
        uVar12 = 0;
        *arg1_00 = iVar16;
    }
code_r0x08002094:
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_b8) {
        return;
    }
    iVar16 = __stack_chk_fail(uVar12);
    *extraout_x18_01 = 0x8002144;
    pppuStack_120 = &ppuStack_b0;
    uStack_118 = 0x8002144;
    iVar22 = sp_el0;
    iStack_128 = *(iVar22 + 0x5e0);
    uVar4 = *(iVar16 + 0x39);
    auStack_148[6] = 0;
    auStack_148[2] = 0;
    auStack_148[3] = 0;
    auStack_148[4] = 0;
    auStack_148[5] = 0;
    uStack_150 = 0;
    auStack_148[0] = 0;
    auStack_148[1] = 0;
    if (uVar4 == 0x11) {
code_r0x08002194:
        uVar20 = *(iVar16 + 8);
        uVar21 = *(iVar16 + 10);
    }
    else {
        uVar20 = 0;
        uVar21 = 0;
        if (uVar4 == 6) goto code_r0x08002194;
    }
    if (*(iVar16 + 0x38) == '\x04') {
        iVar9 = 5;
        iVar22 = 4;
        iVar23 = 3;
        iVar25 = 2;
        uStack_158 = CONCAT44(*(iVar16 + 0xc),*(iVar16 + 0x1c));
    }
    else {
        iVar9 = 0xb;
        iVar22 = 10;
        iVar23 = 9;
        uStack_158 = *(iVar16 + 0x1c);
        uStack_150 = *(iVar16 + 0x24);
        auStack_148[1] = *(iVar16 + 0xc);
        auStack_148[2] = *(iVar16 + 0xc) >> 0x20;
        iVar25 = 8;
        auStack_148[3] = *(iVar16 + 0x14);
    }
    *(&uStack_158 + iVar25 * 4) = uVar4;
    *(&uStack_158 + iVar23 * 4) = uVar21;
    *(&uStack_158 + iVar22 * 4) = uVar20;
    iVar1 = iVar9 * 4 + -0x21524111;
    uVar20 = uStack_150 + iVar1;
    uVar21 = (uStack_158 + iVar1) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
    iVar19 = uVar20 + uStack_158._4_4_ + iVar1;
    uVar20 = (uStack_158._4_4_ + iVar1) - uVar21 ^ (uVar21 >> 0x1a | uVar21 << 6);
    iVar1 = uVar21 + iVar19;
    uVar21 = iVar19 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
    iVar19 = uVar20 + iVar1;
    uVar20 = iVar1 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
    iVar1 = uVar21 + iVar19;
    uVar21 = iVar19 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
    uVar17 = (iVar9 - 4U & 0xff) / 3;
    iVar19 = uVar20 + iVar1;
    uVar20 = iVar1 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
    uVar21 = uVar21 + iVar19;
    if (iVar9 - 7U < 0xfffffffc) {
        uVar20 = auStack_148[1] + uVar20;
        uVar3 = (uStack_150._4_4_ + iVar19) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
        iVar1 = uVar20 + auStack_148[0] + uVar21;
        uVar20 = (auStack_148[0] + uVar21) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
        iVar19 = uVar3 + iVar1;
        uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
        iVar1 = uVar20 + iVar19;
        uVar20 = iVar19 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
        iVar2 = uVar21 + iVar1;
        uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
        iVar19 = uVar20 + iVar2;
        uVar20 = iVar2 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
        uVar21 = uVar21 + iVar19;
        if (iVar9 - 10U < 0xfffffffc) {
            uVar20 = auStack_148[4] + uVar20;
            uVar3 = (auStack_148[2] + iVar19) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
            iVar1 = uVar20 + auStack_148[3] + uVar21;
            uVar20 = (auStack_148[3] + uVar21) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
            iVar19 = uVar3 + iVar1;
            uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
            iVar1 = uVar20 + iVar19;
            uVar20 = iVar19 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
            iVar2 = uVar21 + iVar1;
            iVar19 = uVar20 + iVar2;
            uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
            puVar24 = auStack_148 + 5;
            uVar20 = iVar2 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
            uVar21 = uVar21 + iVar19;
        }
        else {
            puVar24 = auStack_148 + 2;
        }
    }
    else {
        puVar24 = &uStack_150 + 4;
    }
    uVar3 = (iVar9 - 4U) + uVar17 * -3 & 0xff | 4;
    if (uVar3 == 4) {
code_r0x080023b4:
        uVar20 = (uVar20 ^ uVar21) - (uVar21 >> 0x12 | uVar21 << 0xe);
        uVar17 = (*puVar24 + iVar19 ^ uVar20) - (uVar20 >> 0x15 | uVar20 * 0x800);
        uVar21 = (uVar17 ^ uVar21) - (uVar17 >> 7 | uVar17 * 0x2000000);
        uVar20 = (uVar21 ^ uVar20) - (uVar21 >> 0x10 | uVar21 * 0x10000);
        uVar17 = (uVar20 ^ uVar17) - (uVar20 >> 0x1c | uVar20 * 0x10);
        uVar21 = (uVar17 ^ uVar21) - (uVar17 >> 0x12 | uVar17 * 0x4000);
        uVar20 = (uVar21 ^ uVar20) - (uVar21 >> 8 | uVar21 * 0x1000000);
    }
    else {
        if (uVar3 == 5) {
code_r0x080023ac:
            uVar21 = auStack_148[uVar17 * 3] + uVar21;
            goto code_r0x080023b4;
        }
        if (uVar3 == 6) {
            if (iVar9 - 10U < 3) goto code_r0x0800243c;
            uVar20 = auStack_148[uVar17 * 3 + 1] + uVar20;
            goto code_r0x080023ac;
        }
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_128) {
        return;
    }
    __stack_chk_fail(uVar20);
code_r0x0800243c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(1,0x8002440);
    (*pcVar8)();
}


// ===== sym.DATARMNETc9dd320f49 @ 0x08001b78 (size 188) =====

//WARNING: Type propagation algorithm not settling

void sym.DATARMNETc9dd320f49(int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    char cVar5;
    int16_t iVar6;
    ushort uVar7;
    code *pcVar8;
    int iVar9;
    uint uVar10;
    ulong uVar11;
    uint8_t *puVar12;
    uint *puVar13;
    ushort *puVar14;
    int64_t iVar15;
    int64_t *arg1_00;
    uint32_t uVar16;
    int64_t *piVar17;
    int iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    int64_t iVar21;
    int64_t iVar22;
    uint32_t *puVar23;
    int64_t iVar24;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int16_t iVar25;
    ulong unaff_x30;
    uchar auVar26 [16];
    ulong uStack_118;
    ulong uStack_110;
    uint32_t auStack_108 [8];
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    ulong uStack_d8;
    char acStack_cc [4];
    char acStack_c8 [4];
    int16_t aiStack_c4 [2];
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    uint64_t auStack_a8 [3];
    uint64_t uStack_90;
    uint32_t uStack_8c;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    ulong *******pppppppuStack_38;
    ulong *******pppppppuStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar15 = _segment.ehdr;
    iVar21 = sp_el0;
    iStack_28 = *(iVar21 + 0x5e0);
    pppppppuStack_38 = &pppppppuStack_38;
    pppppppuStack_30 = pppppppuStack_38;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    if (*(iVar15 + 0x30) != *arg1) {
        sym.DATARMNETa00cda79d0(4);
    }
    iVar9 = sym.DATARMNETae70636c90(&pppppppuStack_38);
    if (iVar9 != 0) {
        sym.DATARMNETa00cda79d0(5);
    }
    *(iVar15 + 0x39) = 0;
    *(iVar15 + 0x30) = 0;
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&pppppppuStack_38);
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_28) {
        return;
    }
    auVar26 = __stack_chk_fail();
    arg1_00 = auVar26._8_8_;
    iVar15 = auVar26._0_8_;
    *extraout_x18 = sym.DATARMNET1a7ed9a6a2;
    pcStack_68 = sym.DATARMNET1a7ed9a6a2;
    iVar21 = sp_el0;
    iStack_78 = *(iVar21 + 0x5e0);
    uVar19 = *(iVar15 + 0x30);
    iVar25 = uVar19;
    *(arg1_00 + 0x43) = 1;
    puStack_70 = &stack0xffffffffffffffe0;
    if ((*(*(iVar15 + 0x20) + 0xe5) & 1) == 0) goto code_r0x08002068;
    if ((*(iVar15 + 0x51) >> 1 & 1) == 0) {
        piVar17 = *(iVar15 + 0x10);
        uVar11 = 1;
        if ((piVar17 != NULL) && (iVar15 + 0x10 != piVar17)) {
            puVar12 = ((piVar17[2] & 0x3ffffffffffc0U) << 6 | 0xff00000000000000) + *(piVar17 + 0x1c);
            if (puVar12 != NULL) {
                uVar4 = *puVar12 >> 4;
                *(arg1_00 + 7) = uVar4;
                if (uVar4 == 6) {
                    uStack_88 = 0;
                    uStack_80 = 0;
                    auStack_a8[2] = 0;
                    uStack_90 = 0;
                    auStack_a8[1] = 0;
                    auStack_c0[0] = auStack_c0[0] & 0xffffffffffff0000;
                    auStack_a8[0] = auStack_a8[0] & 0xffffffffffffff00;
                    puVar13 = rmnet_frag_header_ptr(iVar15,0,0x28,auStack_a8 + 1);
                    if (puVar13 != NULL) {
                        aiStack_c4[0] = CONCAT11(aiStack_c4[0]._1_1_,*(puVar13 + 6));
                        uVar20 = rmnet_frag_ipv6_skip_exthdr(iVar15,0x28,aiStack_c4,auStack_c0,auStack_a8);
                        if (-1 < uVar20) {
                            iVar6 = uVar20;
                            *(arg1_00 + 0x34) = iVar6;
                            *(arg1_00 + 0x39) = aiStack_c4[0];
                            uVar11 = *(puVar13 + 4);
                            *(arg1_00 + 0xc) = *(puVar13 + 2);
                            *(arg1_00 + 0x14) = uVar11;
                            uVar11 = *(puVar13 + 8);
                            *(arg1_00 + 0x1c) = *(puVar13 + 6);
                            *(arg1_00 + 0x24) = uVar11;
                            *(arg1_00 + 0x2c) = *puVar13;
                            if ((auStack_c0[0] == 0) && (auStack_a8[0] == '\0')) {
                                uVar16 = (*(puVar13 + 1) >> 8 | (*(puVar13 + 1) & 0xff00ff) << 8) + 0x28 & 0xffff;
                                uVar4 = aiStack_c4[0];
                                goto code_r0x08001fcc;
                            }
                            if (aiStack_c4[0] == 0x2c) goto code_r0x0800205c;
code_r0x08002060:
                            sym.DATARMNETa00cda79d0(6);
                        }
                    }
                }
                else {
                    if (uVar4 != 4) goto code_r0x08001f20;
                    uStack_90 = uStack_8c << 0x20;
                    auStack_a8[1] = 0;
                    auStack_a8[2] = 0;
                    puVar12 = rmnet_frag_header_ptr(iVar15,0,0x14,auStack_a8 + 1);
                    if (puVar12 != NULL) {
                        uVar20 = (*puVar12 & 0xf) << 2;
                        *(arg1_00 + 0x34) = uVar20;
                        uVar4 = puVar12[9];
                        *(arg1_00 + 0x39) = uVar4;
                        *(arg1_00 + 0xc) = *(puVar12 + 0xc);
                        *(arg1_00 + 0x1c) = *(puVar12 + 0x10);
                        *(arg1_00 + 0x2c) = puVar12[8];
                        *(arg1_00 + 0x2d) = puVar12[1];
                        *(arg1_00 + 0x2e) = *(puVar12 + 6);
                        if ((*(puVar12 + 6) & 0xff3f) != 0) goto code_r0x08002060;
                        uVar16 = *(puVar12 + 2) >> 8 | (*(puVar12 + 2) & 0xff00ff) << 8;
code_r0x08001fcc:
                        *(arg1_00 + 0x44) = uVar16 != (uVar19 & 0xffff);
                        if (uVar4 == 0x11) {
                            auStack_a8[1] = 0;
                            puVar14 = rmnet_frag_header_ptr(iVar15,uVar20 & 0xffff,8,auStack_a8 + 1);
                            if (puVar14 != NULL) {
                                *(arg1_00 + 0x36) = 8;
                                *(arg1_00 + 1) = *puVar14;
                                *(arg1_00 + 10) = puVar14[1];
code_r0x080020f8:
                                *(arg1_00 + 0x43) = 0;
                                uVar10 = sym.DATARMNETcb7325e02d(arg1_00);
                                *(arg1_00 + 0x3c) = uVar10;
                                if (*(arg1_00 + 0x44) == '\0') {
                                    *(iVar15 + 0x4e) = arg1_00[7];
                                    *(iVar15 + 0x4a) = *(arg1_00 + 0x34);
                                    *(iVar15 + 0x4f) = *(arg1_00 + 0x39);
                                    uVar7 = *(arg1_00 + 0x36);
                                    *(iVar15 + 0x51) = *(iVar15 + 0x51) | 2;
                                    *(iVar15 + 0x4c) = uVar7;
                                }
                            }
                        }
                        else if (uVar4 == 6) {
                            uStack_90 = uStack_90 & 0xffffffff00000000;
                            auStack_a8[1] = 0;
                            auStack_a8[2] = 0;
                            puVar14 = rmnet_frag_header_ptr(iVar15,uVar20 & 0xffff,0x14,auStack_a8 + 1);
                            if (puVar14 != NULL) {
                                *(arg1_00 + 0x36) = *(puVar14 + 6) >> 2 & 0x3c;
                                *(arg1_00 + 1) = *puVar14;
                                *(arg1_00 + 10) = puVar14[1];
                                uVar19 = (*(puVar14 + 2) & 0xff00ff00) >> 8 | (*(puVar14 + 2) & 0xff00ff) << 8;
                                *(arg1_00 + 6) = uVar19 >> 0x10 | uVar19 << 0x10;
                                goto code_r0x080020f8;
                            }
                        }
                    }
                }
                goto code_r0x08002068;
            }
code_r0x08001f20:
            uVar11 = 1;
        }
    }
    else {
        cVar5 = *(iVar15 + 0x4e);
        auStack_a8[0] = 0;
        uStack_b0 = 0;
        auStack_c0[0] = 0;
        auStack_c0[1] = 0;
        *(arg1_00 + 7) = cVar5;
        *(arg1_00 + 0x34) = *(iVar15 + 0x4a);
        *(arg1_00 + 0x39) = *(iVar15 + 0x4f);
        *(arg1_00 + 0x36) = *(iVar15 + 0x4c);
        iVar25 = *(iVar15 + 0x30);
        if (cVar5 == '\x04') {
            uStack_90 = uStack_8c << 0x20;
            auStack_a8[1] = 0;
            auStack_a8[2] = 0;
            iVar21 = rmnet_frag_header_ptr(iVar15,0,0x14,auStack_a8 + 1);
            if (iVar21 != 0) {
                *(arg1_00 + 0xc) = *(iVar21 + 0xc);
                *(arg1_00 + 0x1c) = *(iVar21 + 0x10);
                *(arg1_00 + 0x2c) = *(iVar21 + 8);
                *(arg1_00 + 0x2d) = *(iVar21 + 1);
                *(arg1_00 + 0x2e) = *(iVar21 + 6);
code_r0x08001e7c:
                puVar14 = rmnet_frag_header_ptr(iVar15,*(arg1_00 + 0x34),8,auStack_a8);
                if (puVar14 != NULL) {
                    *(arg1_00 + 1) = *puVar14;
                    *(arg1_00 + 10) = puVar14[1];
                    if (*(arg1_00 + 0x39) == '\x06') {
                        iVar21 = rmnet_frag_header_ptr(iVar15,*(arg1_00 + 0x34),0x14,auStack_c0);
                        if (iVar21 == 0) goto code_r0x08002068;
                        puVar23 = iVar21 + 4;
                        if ((*(iVar15 + 0x51) & 8) != 0) {
                            puVar23 = iVar15 + 0x3c;
                        }
                        uVar19 = (*puVar23 & 0xff00ff00) >> 8 | (*puVar23 & 0xff00ff) << 8;
                        *(arg1_00 + 6) = uVar19 >> 0x10 | uVar19 << 0x10;
                    }
                    uVar10 = sym.DATARMNETcb7325e02d(arg1_00);
                    uVar11 = 0;
                    *(arg1_00 + 0x3c) = uVar10;
                    iVar25 = *(iVar15 + 0x4a);
                    iVar6 = *(iVar15 + 0x4c);
                    uVar10 = *(iVar15 + 0x30);
                    *arg1_00 = iVar15;
                    *(arg1_00 + 0x43) = 0;
                    *(arg1_00 + 8) = uVar10 - (iVar25 + iVar6);
                    goto code_r0x08002094;
                }
            }
        }
        else {
            uStack_88 = 0;
            uStack_80 = 0;
            auStack_a8[2] = 0;
            uStack_90 = 0;
            auStack_a8[1] = 0;
            puVar13 = rmnet_frag_header_ptr(iVar15,0,0x28,auStack_a8 + 1);
            if (puVar13 != NULL) {
                uVar11 = *(puVar13 + 4);
                *(arg1_00 + 0xc) = *(puVar13 + 2);
                *(arg1_00 + 0x14) = uVar11;
                uVar11 = *(puVar13 + 8);
                *(arg1_00 + 0x1c) = *(puVar13 + 6);
                *(arg1_00 + 0x24) = uVar11;
                *(arg1_00 + 0x2c) = *puVar13;
                if (0x28 < *(arg1_00 + 0x34)) {
                    acStack_cc[0] = *(puVar13 + 6);
                    aiStack_c4[0] = 0;
                    acStack_c8[0] = '\0';
                    iVar9 = rmnet_frag_ipv6_skip_exthdr(iVar15,0x28,acStack_cc,aiStack_c4,acStack_c8);
                    if (((iVar9 < 0) || (aiStack_c4[0] != 0)) || (acStack_c8[0] != '\0')) {
                        if (acStack_cc[0] == ',') {
                            iVar6 = *(arg1_00 + 0x34);
code_r0x0800205c:
                            *(arg1_00 + 0x34) = iVar6 + 8;
                        }
                        goto code_r0x08002060;
                    }
                }
                goto code_r0x08001e7c;
            }
        }
code_r0x08002068:
        *(arg1_00 + 8) = iVar25 - (*(arg1_00 + 0x34) + *(arg1_00 + 0x36));
        if (*(arg1_00 + 0x44) != '\0') {
            sym.DATARMNETa00cda79d0(7);
        }
        uVar11 = 0;
        *arg1_00 = iVar15;
    }
code_r0x08002094:
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_78) {
        return;
    }
    iVar15 = __stack_chk_fail(uVar11);
    *extraout_x18_00 = 0x8002144;
    ppuStack_e0 = &puStack_70;
    uStack_d8 = 0x8002144;
    iVar21 = sp_el0;
    iStack_e8 = *(iVar21 + 0x5e0);
    uVar4 = *(iVar15 + 0x39);
    auStack_108[6] = 0;
    auStack_108[2] = 0;
    auStack_108[3] = 0;
    auStack_108[4] = 0;
    auStack_108[5] = 0;
    uStack_110 = 0;
    auStack_108[0] = 0;
    auStack_108[1] = 0;
    if (uVar4 == 0x11) {
code_r0x08002194:
        uVar19 = *(iVar15 + 8);
        uVar20 = *(iVar15 + 10);
    }
    else {
        uVar19 = 0;
        uVar20 = 0;
        if (uVar4 == 6) goto code_r0x08002194;
    }
    if (*(iVar15 + 0x38) == '\x04') {
        iVar9 = 5;
        iVar21 = 4;
        iVar22 = 3;
        iVar24 = 2;
        uStack_118 = CONCAT44(*(iVar15 + 0xc),*(iVar15 + 0x1c));
    }
    else {
        iVar9 = 0xb;
        iVar21 = 10;
        iVar22 = 9;
        uStack_118 = *(iVar15 + 0x1c);
        uStack_110 = *(iVar15 + 0x24);
        auStack_108[1] = *(iVar15 + 0xc);
        auStack_108[2] = *(iVar15 + 0xc) >> 0x20;
        iVar24 = 8;
        auStack_108[3] = *(iVar15 + 0x14);
    }
    *(&uStack_118 + iVar24 * 4) = uVar4;
    *(&uStack_118 + iVar22 * 4) = uVar20;
    *(&uStack_118 + iVar21 * 4) = uVar19;
    iVar1 = iVar9 * 4 + -0x21524111;
    uVar19 = uStack_110 + iVar1;
    uVar20 = (uStack_118 + iVar1) - uVar19 ^ (uVar19 >> 0x1c | uVar19 * 0x10);
    iVar18 = uVar19 + uStack_118._4_4_ + iVar1;
    uVar19 = (uStack_118._4_4_ + iVar1) - uVar20 ^ (uVar20 >> 0x1a | uVar20 << 6);
    iVar1 = uVar20 + iVar18;
    uVar20 = iVar18 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
    iVar18 = uVar19 + iVar1;
    uVar19 = iVar1 - uVar20 ^ (uVar20 >> 0x10 | uVar20 << 0x10);
    iVar1 = uVar20 + iVar18;
    uVar20 = iVar18 - uVar19 ^ (uVar19 >> 0xd | uVar19 << 0x13);
    uVar16 = (iVar9 - 4U & 0xff) / 3;
    iVar18 = uVar19 + iVar1;
    uVar19 = iVar1 - uVar20 ^ (uVar20 >> 0x1c | uVar20 << 4);
    uVar20 = uVar20 + iVar18;
    if (iVar9 - 7U < 0xfffffffc) {
        uVar19 = auStack_108[1] + uVar19;
        uVar3 = (uStack_110._4_4_ + iVar18) - uVar19 ^ (uVar19 >> 0x1c | uVar19 * 0x10);
        iVar1 = uVar19 + auStack_108[0] + uVar20;
        uVar19 = (auStack_108[0] + uVar20) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
        iVar18 = uVar3 + iVar1;
        uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
        iVar1 = uVar19 + iVar18;
        uVar19 = iVar18 - uVar20 ^ (uVar20 >> 0x10 | uVar20 << 0x10);
        iVar2 = uVar20 + iVar1;
        uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0xd | uVar19 << 0x13);
        iVar18 = uVar19 + iVar2;
        uVar19 = iVar2 - uVar20 ^ (uVar20 >> 0x1c | uVar20 << 4);
        uVar20 = uVar20 + iVar18;
        if (iVar9 - 10U < 0xfffffffc) {
            uVar19 = auStack_108[4] + uVar19;
            uVar3 = (auStack_108[2] + iVar18) - uVar19 ^ (uVar19 >> 0x1c | uVar19 * 0x10);
            iVar1 = uVar19 + auStack_108[3] + uVar20;
            uVar19 = (auStack_108[3] + uVar20) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
            iVar18 = uVar3 + iVar1;
            uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0x18 | uVar19 << 8);
            iVar1 = uVar19 + iVar18;
            uVar19 = iVar18 - uVar20 ^ (uVar20 >> 0x10 | uVar20 << 0x10);
            iVar2 = uVar20 + iVar1;
            iVar18 = uVar19 + iVar2;
            uVar20 = iVar1 - uVar19 ^ (uVar19 >> 0xd | uVar19 << 0x13);
            puVar23 = auStack_108 + 5;
            uVar19 = iVar2 - uVar20 ^ (uVar20 >> 0x1c | uVar20 << 4);
            uVar20 = uVar20 + iVar18;
        }
        else {
            puVar23 = auStack_108 + 2;
        }
    }
    else {
        puVar23 = &uStack_110 + 4;
    }
    uVar3 = (iVar9 - 4U) + uVar16 * -3 & 0xff | 4;
    if (uVar3 == 4) {
code_r0x080023b4:
        uVar19 = (uVar19 ^ uVar20) - (uVar20 >> 0x12 | uVar20 << 0xe);
        uVar16 = (*puVar23 + iVar18 ^ uVar19) - (uVar19 >> 0x15 | uVar19 * 0x800);
        uVar20 = (uVar16 ^ uVar20) - (uVar16 >> 7 | uVar16 * 0x2000000);
        uVar19 = (uVar20 ^ uVar19) - (uVar20 >> 0x10 | uVar20 * 0x10000);
        uVar16 = (uVar19 ^ uVar16) - (uVar19 >> 0x1c | uVar19 * 0x10);
        uVar20 = (uVar16 ^ uVar20) - (uVar16 >> 0x12 | uVar16 * 0x4000);
        uVar19 = (uVar20 ^ uVar19) - (uVar20 >> 8 | uVar20 * 0x1000000);
    }
    else {
        if (uVar3 == 5) {
code_r0x080023ac:
            uVar20 = auStack_108[uVar16 * 3] + uVar20;
            goto code_r0x080023b4;
        }
        if (uVar3 == 6) {
            if (iVar9 - 10U < 3) goto code_r0x0800243c;
            uVar19 = auStack_108[uVar16 * 3 + 1] + uVar19;
            goto code_r0x080023ac;
        }
    }
    iVar21 = sp_el0;
    if (*(iVar21 + 0x5e0) == iStack_e8) {
        return;
    }
    __stack_chk_fail(uVar19);
code_r0x0800243c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(1,0x8002440);
    (*pcVar8)();
}


// ===== sym.DATARMNET1a7ed9a6a2 @ 0x08001c34 (size 1300) =====

void sym.DATARMNET1a7ed9a6a2(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    char cVar6;
    int16_t iVar7;
    ushort uVar8;
    code *pcVar9;
    int iVar10;
    uint uVar11;
    ulong uVar12;
    uint8_t *puVar13;
    uint *puVar14;
    ushort *puVar15;
    int64_t iVar16;
    uint32_t uVar17;
    int64_t *piVar18;
    int iVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    int64_t iVar22;
    int64_t iVar23;
    int *piVar24;
    int64_t iVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    int16_t iVar26;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    uint32_t auStack_c8 [8];
    int64_t iStack_a8;
    uchar *puStack_a0;
    ulong uStack_98;
    char acStack_8c [4];
    char acStack_88 [4];
    int16_t aiStack_84 [2];
    uint64_t auStack_80 [2];
    uint uStack_70;
    uint64_t uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_38 = *(iVar22 + 0x5e0);
    uVar20 = *(arg1 + 0x30);
    iVar26 = uVar20;
    *(arg2 + 0x43) = 1;
    if ((*(*(arg1 + 0x20) + 0xe5) & 1) == 0) goto code_r0x08002068;
    if ((*(arg1 + 0x51) >> 1 & 1) == 0) {
        piVar18 = *(arg1 + 0x10);
        uVar12 = 1;
        if ((piVar18 != NULL) && (arg1 + 0x10 != piVar18)) {
            puVar13 = ((piVar18[2] & 0x3ffffffffffc0U) << 6 | 0xff00000000000000) + *(piVar18 + 0x1c);
            if (puVar13 != NULL) {
                uVar5 = *puVar13 >> 4;
                *(arg2 + 0x38) = uVar5;
                if (uVar5 == 6) {
                    uStack_48 = 0;
                    uStack_40 = 0;
                    uStack_58 = 0;
                    uStack_50 = 0;
                    uStack_60 = 0;
                    auStack_80[0] = auStack_80[0] & 0xffffffffffff0000;
                    uStack_68 = uStack_68 & 0xffffffffffffff00;
                    puVar14 = rmnet_frag_header_ptr(arg1,0,0x28,&stack0xffffffffffffffa0);
                    if (puVar14 != NULL) {
                        aiStack_84[0] = CONCAT11(aiStack_84[0]._1_1_,*(puVar14 + 6));
                        uVar21 = rmnet_frag_ipv6_skip_exthdr
                                           (arg1,0x28,&stack0xffffffffffffff7c,&stack0xffffffffffffff80,
                                            &stack0xffffffffffffff98);
                        if (-1 < uVar21) {
                            iVar7 = uVar21;
                            *(arg2 + 0x34) = iVar7;
                            *(arg2 + 0x39) = aiStack_84[0];
                            uVar12 = *(puVar14 + 4);
                            *(arg2 + 0xc) = *(puVar14 + 2);
                            *(arg2 + 0x14) = uVar12;
                            uVar12 = *(puVar14 + 8);
                            *(arg2 + 0x1c) = *(puVar14 + 6);
                            *(arg2 + 0x24) = uVar12;
                            *(arg2 + 0x2c) = *puVar14;
                            if ((auStack_80[0] == 0) && (uStack_68 == '\0')) {
                                uVar17 = (*(puVar14 + 1) >> 8 | (*(puVar14 + 1) & 0xff00ff) << 8) + 0x28 & 0xffff;
                                uVar5 = aiStack_84[0];
                                goto code_r0x08001fcc;
                            }
                            if (aiStack_84[0] == 0x2c) goto code_r0x0800205c;
code_r0x08002060:
                            sym.DATARMNETa00cda79d0(6);
                        }
                    }
                }
                else {
                    if (uVar5 != 4) goto code_r0x08001f20;
                    uStack_50 = uStack_50._4_4_ << 0x20;
                    uStack_60 = 0;
                    uStack_58 = 0;
                    puVar13 = rmnet_frag_header_ptr(arg1,0,0x14,&stack0xffffffffffffffa0);
                    if (puVar13 != NULL) {
                        uVar21 = (*puVar13 & 0xf) << 2;
                        *(arg2 + 0x34) = uVar21;
                        uVar5 = puVar13[9];
                        *(arg2 + 0x39) = uVar5;
                        *(arg2 + 0xc) = *(puVar13 + 0xc);
                        *(arg2 + 0x1c) = *(puVar13 + 0x10);
                        *(arg2 + 0x2c) = puVar13[8];
                        *(arg2 + 0x2d) = puVar13[1];
                        *(arg2 + 0x2e) = *(puVar13 + 6);
                        if ((*(puVar13 + 6) & 0xff3f) != 0) goto code_r0x08002060;
                        uVar17 = *(puVar13 + 2) >> 8 | (*(puVar13 + 2) & 0xff00ff) << 8;
code_r0x08001fcc:
                        *(arg2 + 0x44) = uVar17 != (uVar20 & 0xffff);
                        if (uVar5 == 0x11) {
                            uStack_60 = 0;
                            puVar15 = rmnet_frag_header_ptr(arg1,uVar21 & 0xffff,8,&stack0xffffffffffffffa0);
                            if (puVar15 != NULL) {
                                *(arg2 + 0x36) = 8;
                                *(arg2 + 8) = *puVar15;
                                *(arg2 + 10) = puVar15[1];
code_r0x080020f8:
                                *(arg2 + 0x43) = 0;
                                uVar11 = sym.DATARMNETcb7325e02d(arg2);
                                *(arg2 + 0x3c) = uVar11;
                                if (*(arg2 + 0x44) == '\0') {
                                    *(arg1 + 0x4e) = *(arg2 + 0x38);
                                    *(arg1 + 0x4a) = *(arg2 + 0x34);
                                    *(arg1 + 0x4f) = *(arg2 + 0x39);
                                    uVar8 = *(arg2 + 0x36);
                                    *(arg1 + 0x51) = *(arg1 + 0x51) | 2;
                                    *(arg1 + 0x4c) = uVar8;
                                }
                            }
                        }
                        else if (uVar5 == 6) {
                            uStack_50 = uStack_50 & 0xffffffff00000000;
                            uStack_60 = 0;
                            uStack_58 = 0;
                            puVar15 = rmnet_frag_header_ptr(arg1,uVar21 & 0xffff,0x14,&stack0xffffffffffffffa0);
                            if (puVar15 != NULL) {
                                *(arg2 + 0x36) = *(puVar15 + 6) >> 2 & 0x3c;
                                *(arg2 + 8) = *puVar15;
                                *(arg2 + 10) = puVar15[1];
                                uVar20 = (*(puVar15 + 2) & 0xff00ff00) >> 8 | (*(puVar15 + 2) & 0xff00ff) << 8;
                                *(arg2 + 0x30) = uVar20 >> 0x10 | uVar20 << 0x10;
                                goto code_r0x080020f8;
                            }
                        }
                    }
                }
                goto code_r0x08002068;
            }
code_r0x08001f20:
            uVar12 = 1;
        }
    }
    else {
        cVar6 = *(arg1 + 0x4e);
        uStack_68 = 0;
        uStack_70 = 0;
        auStack_80[0] = 0;
        auStack_80[1] = 0;
        *(arg2 + 0x38) = cVar6;
        *(arg2 + 0x34) = *(arg1 + 0x4a);
        *(arg2 + 0x39) = *(arg1 + 0x4f);
        *(arg2 + 0x36) = *(arg1 + 0x4c);
        iVar26 = *(arg1 + 0x30);
        if (cVar6 == '\x04') {
            uStack_50 = uStack_50._4_4_ << 0x20;
            uStack_60 = 0;
            uStack_58 = 0;
            iVar22 = rmnet_frag_header_ptr(arg1,0,0x14,&stack0xffffffffffffffa0);
            if (iVar22 != 0) {
                *(arg2 + 0xc) = *(iVar22 + 0xc);
                *(arg2 + 0x1c) = *(iVar22 + 0x10);
                *(arg2 + 0x2c) = *(iVar22 + 8);
                *(arg2 + 0x2d) = *(iVar22 + 1);
                *(arg2 + 0x2e) = *(iVar22 + 6);
code_r0x08001e7c:
                puVar15 = rmnet_frag_header_ptr(arg1,*(arg2 + 0x34),8,&stack0xffffffffffffff98);
                if (puVar15 != NULL) {
                    *(arg2 + 8) = *puVar15;
                    *(arg2 + 10) = puVar15[1];
                    if (*(arg2 + 0x39) == '\x06') {
                        iVar22 = rmnet_frag_header_ptr(arg1,*(arg2 + 0x34),0x14,&stack0xffffffffffffff80);
                        if (iVar22 == 0) goto code_r0x08002068;
                        puVar3 = iVar22 + 4;
                        if ((*(arg1 + 0x51) & 8) != 0) {
                            puVar3 = arg1 + 0x3c;
                        }
                        uVar20 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
                        *(arg2 + 0x30) = uVar20 >> 0x10 | uVar20 << 0x10;
                    }
                    uVar11 = sym.DATARMNETcb7325e02d(arg2);
                    uVar12 = 0;
                    *(arg2 + 0x3c) = uVar11;
                    iVar26 = *(arg1 + 0x4a);
                    iVar7 = *(arg1 + 0x4c);
                    uVar11 = *(arg1 + 0x30);
                    *arg2 = arg1;
                    *(arg2 + 0x43) = 0;
                    *(arg2 + 0x40) = uVar11 - (iVar26 + iVar7);
                    goto code_r0x08002094;
                }
            }
        }
        else {
            uStack_48 = 0;
            uStack_40 = 0;
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_60 = 0;
            puVar14 = rmnet_frag_header_ptr(arg1,0,0x28,&stack0xffffffffffffffa0);
            if (puVar14 != NULL) {
                uVar12 = *(puVar14 + 4);
                *(arg2 + 0xc) = *(puVar14 + 2);
                *(arg2 + 0x14) = uVar12;
                uVar12 = *(puVar14 + 8);
                *(arg2 + 0x1c) = *(puVar14 + 6);
                *(arg2 + 0x24) = uVar12;
                *(arg2 + 0x2c) = *puVar14;
                if (0x28 < *(arg2 + 0x34)) {
                    acStack_8c[0] = *(puVar14 + 6);
                    aiStack_84[0] = 0;
                    acStack_88[0] = '\0';
                    iVar10 = rmnet_frag_ipv6_skip_exthdr
                                       (arg1,0x28,&stack0xffffffffffffff74,&stack0xffffffffffffff7c,
                                        &stack0xffffffffffffff78);
                    if (((iVar10 < 0) || (aiStack_84[0] != 0)) || (acStack_88[0] != '\0')) {
                        if (acStack_8c[0] == ',') {
                            iVar7 = *(arg2 + 0x34);
code_r0x0800205c:
                            *(arg2 + 0x34) = iVar7 + 8;
                        }
                        goto code_r0x08002060;
                    }
                }
                goto code_r0x08001e7c;
            }
        }
code_r0x08002068:
        *(arg2 + 0x40) = iVar26 - (*(arg2 + 0x34) + *(arg2 + 0x36));
        if (*(arg2 + 0x44) != '\0') {
            sym.DATARMNETa00cda79d0(7);
        }
        uVar12 = 0;
        *arg2 = arg1;
    }
code_r0x08002094:
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_38) {
        return;
    }
    iVar16 = __stack_chk_fail(uVar12);
    *extraout_x18 = 0x8002144;
    puStack_a0 = &stack0xffffffffffffffd0;
    uStack_98 = 0x8002144;
    iVar22 = sp_el0;
    iStack_a8 = *(iVar22 + 0x5e0);
    uVar5 = *(iVar16 + 0x39);
    auStack_c8[6] = 0;
    auStack_c8[2] = 0;
    auStack_c8[3] = 0;
    auStack_c8[4] = 0;
    auStack_c8[5] = 0;
    uStack_d0 = 0;
    auStack_c8[0] = 0;
    auStack_c8[1] = 0;
    if (uVar5 == 0x11) {
code_r0x08002194:
        uVar20 = *(iVar16 + 8);
        uVar21 = *(iVar16 + 10);
    }
    else {
        uVar20 = 0;
        uVar21 = 0;
        if (uVar5 == 6) goto code_r0x08002194;
    }
    if (*(iVar16 + 0x38) == '\x04') {
        iVar10 = 5;
        iVar22 = 4;
        iVar23 = 3;
        iVar25 = 2;
        uStack_d8 = CONCAT44(*(iVar16 + 0xc),*(iVar16 + 0x1c));
    }
    else {
        iVar10 = 0xb;
        iVar22 = 10;
        iVar23 = 9;
        uStack_d8 = *(iVar16 + 0x1c);
        uStack_d0 = *(iVar16 + 0x24);
        auStack_c8[1] = *(iVar16 + 0xc);
        auStack_c8[2] = *(iVar16 + 0xc) >> 0x20;
        iVar25 = 8;
        auStack_c8[3] = *(iVar16 + 0x14);
    }
    *(&stack0xffffffffffffff28 + iVar25 * 4) = uVar5;
    *(&stack0xffffffffffffff28 + iVar23 * 4) = uVar21;
    *(&stack0xffffffffffffff28 + iVar22 * 4) = uVar20;
    iVar1 = iVar10 * 4 + -0x21524111;
    uVar20 = uStack_d0 + iVar1;
    uVar21 = (uStack_d8 + iVar1) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
    iVar19 = uVar20 + uStack_d8._4_4_ + iVar1;
    uVar20 = (uStack_d8._4_4_ + iVar1) - uVar21 ^ (uVar21 >> 0x1a | uVar21 << 6);
    iVar1 = uVar21 + iVar19;
    uVar21 = iVar19 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
    iVar19 = uVar20 + iVar1;
    uVar20 = iVar1 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
    iVar1 = uVar21 + iVar19;
    uVar21 = iVar19 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
    uVar17 = (iVar10 - 4U & 0xff) / 3;
    iVar19 = uVar20 + iVar1;
    uVar20 = iVar1 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
    uVar21 = uVar21 + iVar19;
    if (iVar10 - 7U < 0xfffffffc) {
        uVar20 = auStack_c8[1] + uVar20;
        uVar4 = (uStack_d0._4_4_ + iVar19) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
        iVar1 = uVar20 + auStack_c8[0] + uVar21;
        uVar20 = (auStack_c8[0] + uVar21) - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
        iVar19 = uVar4 + iVar1;
        uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
        iVar1 = uVar20 + iVar19;
        uVar20 = iVar19 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
        iVar2 = uVar21 + iVar1;
        uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
        iVar19 = uVar20 + iVar2;
        uVar20 = iVar2 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
        uVar21 = uVar21 + iVar19;
        if (iVar10 - 10U < 0xfffffffc) {
            uVar20 = auStack_c8[4] + uVar20;
            uVar4 = (auStack_c8[2] + iVar19) - uVar20 ^ (uVar20 >> 0x1c | uVar20 * 0x10);
            iVar1 = uVar20 + auStack_c8[3] + uVar21;
            uVar20 = (auStack_c8[3] + uVar21) - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
            iVar19 = uVar4 + iVar1;
            uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0x18 | uVar20 << 8);
            iVar1 = uVar20 + iVar19;
            uVar20 = iVar19 - uVar21 ^ (uVar21 >> 0x10 | uVar21 << 0x10);
            iVar2 = uVar21 + iVar1;
            iVar19 = uVar20 + iVar2;
            uVar21 = iVar1 - uVar20 ^ (uVar20 >> 0xd | uVar20 << 0x13);
            piVar24 = &stack0xffffffffffffff4c;
            uVar20 = iVar2 - uVar21 ^ (uVar21 >> 0x1c | uVar21 << 4);
            uVar21 = uVar21 + iVar19;
        }
        else {
            piVar24 = &stack0xffffffffffffff40;
        }
    }
    else {
        piVar24 = &stack0xffffffffffffff34;
    }
    uVar4 = (iVar10 - 4U) + uVar17 * -3 & 0xff | 4;
    if (uVar4 == 4) {
code_r0x080023b4:
        uVar20 = (uVar20 ^ uVar21) - (uVar21 >> 0x12 | uVar21 << 0xe);
        uVar17 = (*piVar24 + iVar19 ^ uVar20) - (uVar20 >> 0x15 | uVar20 * 0x800);
        uVar21 = (uVar17 ^ uVar21) - (uVar17 >> 7 | uVar17 * 0x2000000);
        uVar20 = (uVar21 ^ uVar20) - (uVar21 >> 0x10 | uVar21 * 0x10000);
        uVar17 = (uVar20 ^ uVar17) - (uVar20 >> 0x1c | uVar20 * 0x10);
        uVar21 = (uVar17 ^ uVar21) - (uVar17 >> 0x12 | uVar17 * 0x4000);
        uVar20 = (uVar21 ^ uVar20) - (uVar21 >> 8 | uVar21 * 0x1000000);
    }
    else {
        iVar22 = uVar17 * 0xc;
        if (uVar4 == 5) {
code_r0x080023ac:
            uVar21 = *(&stack0xffffffffffffff38 + iVar22) + uVar21;
            goto code_r0x080023b4;
        }
        if (uVar4 == 6) {
            if (iVar10 - 10U < 3) goto code_r0x0800243c;
            uVar20 = *(&stack0xffffffffffffff3c + iVar22) + uVar20;
            goto code_r0x080023ac;
        }
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_a8) {
        return;
    }
    __stack_chk_fail(uVar20);
code_r0x0800243c:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(1,0x8002440);
    (*pcVar9)();
}


// ===== sym.DATARMNETcb7325e02d @ 0x08002148 (size 760) =====

void sym.DATARMNETcb7325e02d(int64_t arg1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    code *pcVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    uint32_t auStack_38 [8];
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_18 = *(iVar11 + 0x5e0);
    uVar4 = *(arg1 + 0x39);
    auStack_38[6] = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    auStack_38[4] = 0;
    auStack_38[5] = 0;
    uStack_40 = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    if (uVar4 == 0x11) {
code_r0x08002194:
        uVar9 = *(arg1 + 8);
        uVar10 = *(arg1 + 10);
    }
    else {
        uVar9 = 0;
        uVar10 = 0;
        if (uVar4 == 6) goto code_r0x08002194;
    }
    if (*(arg1 + 0x38) == '\x04') {
        iVar7 = 5;
        iVar11 = 4;
        iVar12 = 3;
        iVar14 = 2;
        uStack_48 = CONCAT44(*(arg1 + 0xc),*(arg1 + 0x1c));
    }
    else {
        iVar7 = 0xb;
        iVar11 = 10;
        iVar12 = 9;
        uStack_48 = *(arg1 + 0x1c);
        uStack_40 = *(arg1 + 0x24);
        auStack_38[1] = *(arg1 + 0xc);
        auStack_38[2] = *(arg1 + 0xc) >> 0x20;
        iVar14 = 8;
        auStack_38[3] = *(arg1 + 0x14);
    }
    *(&uStack_48 + iVar14 * 4) = uVar4;
    *(&uStack_48 + iVar12 * 4) = uVar10;
    *(&uStack_48 + iVar11 * 4) = uVar9;
    iVar1 = iVar7 * 4 + -0x21524111;
    uVar9 = uStack_40 + iVar1;
    uVar10 = (uStack_48 + iVar1) - uVar9 ^ (uVar9 >> 0x1c | uVar9 * 0x10);
    iVar8 = uVar9 + uStack_48._4_4_ + iVar1;
    uVar9 = (uStack_48._4_4_ + iVar1) - uVar10 ^ (uVar10 >> 0x1a | uVar10 << 6);
    iVar1 = uVar10 + iVar8;
    uVar10 = iVar8 - uVar9 ^ (uVar9 >> 0x18 | uVar9 << 8);
    iVar8 = uVar9 + iVar1;
    uVar9 = iVar1 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
    iVar1 = uVar10 + iVar8;
    uVar10 = iVar8 - uVar9 ^ (uVar9 >> 0xd | uVar9 << 0x13);
    uVar5 = (iVar7 - 4U & 0xff) / 3;
    iVar8 = uVar9 + iVar1;
    uVar9 = iVar1 - uVar10 ^ (uVar10 >> 0x1c | uVar10 << 4);
    uVar10 = uVar10 + iVar8;
    if (iVar7 - 7U < 0xfffffffc) {
        uVar9 = auStack_38[1] + uVar9;
        uVar3 = (uStack_40._4_4_ + iVar8) - uVar9 ^ (uVar9 >> 0x1c | uVar9 * 0x10);
        iVar1 = uVar9 + auStack_38[0] + uVar10;
        uVar9 = (auStack_38[0] + uVar10) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
        iVar8 = uVar3 + iVar1;
        uVar10 = iVar1 - uVar9 ^ (uVar9 >> 0x18 | uVar9 << 8);
        iVar1 = uVar9 + iVar8;
        uVar9 = iVar8 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
        iVar2 = uVar10 + iVar1;
        uVar10 = iVar1 - uVar9 ^ (uVar9 >> 0xd | uVar9 << 0x13);
        iVar8 = uVar9 + iVar2;
        uVar9 = iVar2 - uVar10 ^ (uVar10 >> 0x1c | uVar10 << 4);
        uVar10 = uVar10 + iVar8;
        if (iVar7 - 10U < 0xfffffffc) {
            uVar9 = auStack_38[4] + uVar9;
            uVar3 = (auStack_38[2] + iVar8) - uVar9 ^ (uVar9 >> 0x1c | uVar9 * 0x10);
            iVar1 = uVar9 + auStack_38[3] + uVar10;
            uVar9 = (auStack_38[3] + uVar10) - uVar3 ^ (uVar3 >> 0x1a | uVar3 << 6);
            iVar8 = uVar3 + iVar1;
            uVar10 = iVar1 - uVar9 ^ (uVar9 >> 0x18 | uVar9 << 8);
            iVar1 = uVar9 + iVar8;
            uVar9 = iVar8 - uVar10 ^ (uVar10 >> 0x10 | uVar10 << 0x10);
            iVar2 = uVar10 + iVar1;
            iVar8 = uVar9 + iVar2;
            uVar10 = iVar1 - uVar9 ^ (uVar9 >> 0xd | uVar9 << 0x13);
            puVar13 = auStack_38 + 5;
            uVar9 = iVar2 - uVar10 ^ (uVar10 >> 0x1c | uVar10 << 4);
            uVar10 = uVar10 + iVar8;
        }
        else {
            puVar13 = auStack_38 + 2;
        }
    }
    else {
        puVar13 = &uStack_40 + 4;
    }
    uVar3 = (iVar7 - 4U) + uVar5 * -3 & 0xff | 4;
    if (uVar3 == 4) {
code_r0x080023b4:
        uVar9 = (uVar9 ^ uVar10) - (uVar10 >> 0x12 | uVar10 << 0xe);
        uVar5 = (*puVar13 + iVar8 ^ uVar9) - (uVar9 >> 0x15 | uVar9 * 0x800);
        uVar10 = (uVar5 ^ uVar10) - (uVar5 >> 7 | uVar5 * 0x2000000);
        uVar9 = (uVar10 ^ uVar9) - (uVar10 >> 0x10 | uVar10 * 0x10000);
        uVar5 = (uVar9 ^ uVar5) - (uVar9 >> 0x1c | uVar9 * 0x10);
        uVar10 = (uVar5 ^ uVar10) - (uVar5 >> 0x12 | uVar5 * 0x4000);
        uVar9 = (uVar10 ^ uVar9) - (uVar10 >> 8 | uVar10 * 0x1000000);
    }
    else {
        if (uVar3 == 5) {
code_r0x080023ac:
            uVar10 = auStack_38[uVar5 * 3] + uVar10;
            goto code_r0x080023b4;
        }
        if (uVar3 == 6) {
            if (iVar7 - 10U < 3) goto code_r0x0800243c;
            uVar9 = auStack_38[uVar5 * 3 + 1] + uVar9;
            goto code_r0x080023ac;
        }
    }
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail(uVar9);
code_r0x0800243c:
    //WARNING: Does not return
    pcVar6 = SoftwareBreakpoint(1,0x8002440);
    (*pcVar6)();
}


// ===== sym.DATARMNET29e8d137c4 @ 0x08002440 (size 136) =====

void sym.DATARMNET29e8d137c4(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *arg1_00;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t *piVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *arg1;
    while (arg1_00 != arg1) {
        piVar4 = *arg1_00;
        uVar3 = __list_del_entry_valid(arg1_00);
        if ((uVar3 & 1) != 0) {
            iVar1 = *arg1_00;
            piVar2 = arg1_00[1];
            *(iVar1 + 8) = piVar2;
            *piVar2 = iVar1;
        }
        *arg1_00 = arg1_00;
        arg1_00[1] = arg1_00;
        sym.DATARMNETb56d685c50(arg1_00,arg2);
        arg1_00 = piVar4;
    }
    return;
}


// ===== sym.DATARMNETd4230b6bfe @ 0x080024c8 (size 68) =====

void sym.DATARMNETd4230b6bfe(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _rmnet_perf_chain_end = sym.DATARMNETbe30d096c6.881e72f5f88a4a394e75c9529b77e0ea.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNETcbc211d052.llvm.17123689797798262549,1);
    return;
}


// ===== sym.DATARMNETbe30d096c6 @ 0x0800250c (size 224) =====

void sym.DATARMNETbe30d096c6(void)

{
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *arg1;
    int iVar1;
    int64_t iVar2;
    ulong unaff_x30;
    ulong ****ppppuStack_48;
    ulong ****ppppuStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    ppppuStack_48 = &ppppuStack_48;
    ppppuStack_40 = ppppuStack_48;
    _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    iVar2 = 0;
    iVar1 = 0;
    do {
        for (arg1 = *(obj.DATARMNET4791268d67 + iVar2 * 8); arg1 != NULL; arg1 = *arg1) {
            if (*(arg1 + 0x62) != '\0') {
                iVar1 = iVar1 + 1;
                sym.DATARMNETa3055c21f2(arg1,&ppppuStack_48);
            }
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 != 0x20);
    if (iVar1 != 0) {
        sym.DATARMNETa00cda79d0(9);
    }
    _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    sym.DATARMNETc70e73c8d4(&ppppuStack_48);
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_38) {
        return;
    }
    __stack_chk_fail();
    *extraout_x18 = sym.DATARMNET560e127137;
    _kmalloc_caches = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNETcbc211d052.llvm.17123689797798262549,1);
    return;
}


// ===== sym.DATARMNET560e127137 @ 0x080025ec (size 56) =====

void sym.DATARMNET560e127137(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _kmalloc_caches = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNETcbc211d052.llvm.17123689797798262549,1);
    return;
}


// ===== sym.DATARMNET241493ab9a @ 0x08002624 (size 428) =====

int sym.DATARMNET241493ab9a(uint32_t arg1,uint32_t arg2)

{
    int64_t arg2_00;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar1;
    int iVar2;
    uint64_t arg2_01;
    int64_t iVar3;
    ulong unaff_x30;
    ulong ****ppppuStack_48;
    ulong ****ppppuStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    ppppuStack_48 = &ppppuStack_48;
    iStack_38 = *(iVar3 + 0x5e0);
    ppppuStack_40 = ppppuStack_48;
    if ((arg1 != 3) && (arg2 != 0)) {
        if (arg2 == 1) {
            iVar3 = 0;
            arg2_01 = 0;
            do {
                for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
                    if ((*(piVar1 + 0x62) != '\0') && (*(piVar1 + 0x51) == '\x11')) {
                        arg2_01 = arg2_01 + 1;
                        sym.DATARMNETa3055c21f2(piVar1,&ppppuStack_48);
                    }
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
        }
        else if (arg2 == 2) {
            iVar3 = 0;
            arg2_01 = 0;
            do {
                for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
                    if ((*(piVar1 + 0x62) != '\0') && (*(piVar1 + 0x51) == '\x06')) {
                        arg2_01 = arg2_01 + 1;
                        sym.DATARMNETa3055c21f2(piVar1,&ppppuStack_48);
                    }
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
        }
        else if (arg2 == 3) {
            iVar3 = 0;
            arg2_01 = 0;
            do {
                for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
                    if (*(piVar1 + 0x62) != '\0') {
                        arg2_01 = arg2_01 + 1;
                        sym.DATARMNETa3055c21f2(piVar1,&ppppuStack_48);
                    }
                }
                iVar3 = iVar3 + 1;
            } while (iVar3 != 0x20);
        }
        else {
            arg2_01 = 0;
        }
        sym.DATARMNETbad3b5165e(0xb,arg2_01);
        sym.DATARMNETc70e73c8d4(&ppppuStack_48);
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return 0;
    }
    arg2_00 = __stack_chk_fail();
    *extraout_x18 = sym.DATARMNETae70636c90;
    iVar3 = 0;
    iVar2 = 0;
    do {
        for (piVar1 = *(obj.DATARMNET4791268d67 + iVar3 * 8); piVar1 != NULL; piVar1 = *piVar1) {
            if (*(piVar1 + 0x62) != '\0') {
                iVar2 = iVar2 + 1;
                sym.DATARMNETa3055c21f2(piVar1,arg2_00);
            }
        }
        iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
    return iVar2;
}


// ===== sym.DATARMNETae70636c90 @ 0x080027d0 (size 144) =====

int sym.DATARMNETae70636c90(int64_t arg1)

{
    ulong *in_x18;
    int iVar1;
    int64_t *arg1_00;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = 0;
    iVar1 = 0;
    do {
        for (arg1_00 = *(obj.DATARMNET4791268d67 + iVar2 * 8); arg1_00 != NULL; arg1_00 = *arg1_00) {
            if (*(arg1_00 + 0x62) != '\0') {
                iVar1 = iVar1 + 1;
                sym.DATARMNETa3055c21f2(arg1_00,arg1);
            }
        }
        iVar2 = iVar2 + 1;
    } while (iVar2 != 0x20);
    return iVar1;
}


// ===== sym.DATARMNETa3055c21f2 @ 0x08002860 (size 344) =====

void sym.DATARMNETa3055c21f2(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int16_t iVar6;
    ulong *puVar7;
    int iVar8;
    uint64_t uVar9;
    ulong *in_x18;
    int64_t *piVar10;
    ulong *puVar11;
    ulong *puVar12;
    ulong *puVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg1 + 0x62) != '\0') {
        uVar4 = *(arg1 + 0x4c);
        uVar5 = *(arg1 + 0x4e);
        puVar12 = arg1 + 0x10;
        piVar10 = *puVar12;
        if (piVar10[9] == 0) {
            *(piVar10 + 9) = 1;
        }
        puVar7 = _segment.ehdr;
        *(piVar10 + 0x46) = *(arg1 + 0x60);
        if (*piVar10 != puVar12) {
            iVar1 = uVar5 + uVar4;
            puVar11 = *piVar10;
            do {
                puVar13 = *puVar11;
                iVar8 = rmnet_frag_descriptor_add_frags_from(piVar10,puVar11,iVar1,*(puVar11 + 6) - iVar1);
                if (iVar8 == 0) {
                    iVar6 = *(puVar11 + 9);
                    if (iVar6 == 0) {
                        iVar6 = 1;
                    }
                    *(piVar10 + 9) = iVar6 + piVar10[9];
                    *(piVar10 + 0x2c) = *(piVar10 + 0x2c) + *(puVar11 + 0x2c);
                    *(piVar10 + 5) = piVar10[5] + *(puVar11 + 5);
                }
                rmnet_recycle_frag_descriptor(puVar11,*puVar7);
                puVar11 = puVar13;
            } while (puVar13 != puVar12);
        }
        *(piVar10 + 0x34) = *(arg1 + 0x54);
        uVar9 = __list_del_entry_valid(piVar10);
        if ((uVar9 & 1) != 0) {
            iVar2 = *piVar10;
            piVar3 = piVar10[1];
            *(iVar2 + 8) = piVar3;
            *piVar3 = iVar2;
        }
        *piVar10 = piVar10;
        piVar10[1] = piVar10;
        puVar12 = *(arg2 + 8);
        uVar9 = __list_add_valid(piVar10,puVar12,arg2);
        if ((uVar9 & 1) != 0) {
            *(arg2 + 8) = piVar10;
            *piVar10 = arg2;
            piVar10[1] = puVar12;
            *puVar12 = piVar10;
        }
        *(arg1 + 0x62) = 0;
        *(arg1 + 0x58) = 0;
    }
    return;
}


// ===== sym.DATARMNETc38c135c9f @ 0x080029b8 (size 136) =====

void sym.DATARMNETc38c135c9f(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    for (arg1_00 = *(obj.DATARMNET4791268d67 + (arg1 * 0x61c88647 >> 0x1b) * 8); arg1_00 != NULL; arg1_00 = *arg1_00) {
        if ((*(arg1_00 + 0x54) == arg1) && (*(arg1_00 + 0x62) != '\0')) {
            sym.DATARMNETa3055c21f2(arg1_00,arg2);
        }
    }
    return;
}


// ===== sym.DATARMNET33aa5df9ef @ 0x08002a40 (size 240) =====

void sym.DATARMNET33aa5df9ef(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int16_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    ulong *puVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x42) != '\0') {
        uVar1 = *(arg2 + 0x18);
        uVar4 = *(arg2 + 8);
        *(arg1 + 0x28) = *(arg2 + 0x10);
        *(arg1 + 0x30) = uVar1;
        *(arg1 + 0x20) = uVar4;
        uVar1 = *(arg2 + 0x28);
        uVar4 = *(arg2 + 0x30);
        uVar5 = *(arg2 + 0x20);
        *(arg1 + 0x50) = *(arg2 + 0x38);
        *(arg1 + 0x40) = uVar1;
        *(arg1 + 0x48) = uVar4;
        *(arg1 + 0x38) = uVar5;
        *(arg1 + 0x54) = *(arg2 + 0x3c);
        iVar2 = *(*arg2 + 0x46);
        if (iVar2 == 0) {
            iVar2 = *(arg2 + 0x40);
        }
        *(arg1 + 0x60) = iVar2;
    }
    if (*(arg2 + 0x39) == '\x06') {
        *(arg1 + 0x48) = *(arg1 + 0x48) + *(arg2 + 0x40);
    }
    piVar6 = *arg2;
    puVar7 = *(arg1 + 0x18);
    uVar3 = __list_add_valid(piVar6,puVar7,arg1 + 0x10);
    if ((uVar3 & 1) != 0) {
        *(arg1 + 0x18) = piVar6;
        *piVar6 = arg1 + 0x10;
        piVar6[1] = puVar7;
        *puVar7 = piVar6;
    }
    *(arg1 + 0x62) = *(arg1 + 0x62) + '\x01';
    *(arg1 + 0x58) = *(arg1 + 0x58) + *(arg2 + 0x40);
    return;
}


// ===== sym.DATARMNETfbf5798e15 @ 0x08002b30 (size 840) =====

//WARNING: Type propagation algorithm not settling

uint32_t sym.DATARMNETfbf5798e15(int64_t arg1,int64_t arg2)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    code *pcVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *arg1_00;
    ulong unaff_x30;
    uchar in_q1 [16];
    ulong *******pppppppuStack_58;
    ulong *******pppppppuStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_48 = *(iVar7 + 0x5e0);
    cVar2 = *(arg1 + 0x39);
    iVar6 = sym.DATARMNETf1d1b8287f(2);
    iVar7 = _segment.ehdr;
    if (((iVar6 == 0) || ((cVar2 == '\x06' && (iVar6 == 1)))) || ((cVar2 == '\x11' && (iVar6 == 2)))) {
        for (arg1_00 = *(obj.DATARMNET4791268d67 + (*(arg1 + 0x3c) * 0x61c88647 >> 0x1b) * 8); arg1_00 != NULL;
            arg1_00 = *arg1_00) {
            if (*(arg1_00 + 0x62) == '\0') {
                if (*(arg1_00 + 0x54) == *(arg1 + 0x3c)) goto code_r0x08002df4;
            }
            else if (((*(arg1_00 + 0x51) == *(arg1 + 0x39)) && (arg1_00[4] == *(arg1 + 8))) &&
                    (*(arg1_00 + 0x22) == *(arg1 + 10))) {
                if (*(arg1 + 0x38) == '\x06') {
                    if ((*(arg1_00 + 0x24) == *(arg1 + 0xc) && *(arg1_00 + 0x2c) == *(arg1 + 0x14)) &&
                       (*(arg1_00 + 0x34) == *(arg1 + 0x1c) && *(arg1_00 + 0x3c) == *(arg1 + 0x24)))
                    goto code_r0x08002df4;
                }
                else if ((*(arg1 + 0x38) == '\x04') &&
                        ((*(arg1_00 + 0x24) == *(arg1 + 0xc) && (*(arg1_00 + 0x34) == *(arg1 + 0x1c)))))
                goto code_r0x08002df4;
            }
        }
        pppppppuStack_58 = &pppppppuStack_58;
        uVar3 = *(_segment.ehdr + 0x14b0);
        pppppppuStack_50 = pppppppuStack_58;
        if (uVar3 < 0x32) {
            arg1_00 = _segment.ehdr + uVar3 * 0x68 + 0x60;
            *(_segment.ehdr + 0x14b0) = uVar3 + 1;
        }
        else {
            uVar3 = *(_segment.ehdr + 0x14b1);
            if (0x32 < uVar3) goto code_r0x08002e74;
            iVar6 = _segment.ehdr + uVar3 * 0x68;
            arg1_00 = iVar6 + 0x60;
            *(_segment.ehdr + 0x14b1) = uVar3 + 1 + ((uVar3 + 1) / 0x32) * -0x32;
            piVar8 = *(iVar6 + 0x68);
            if (piVar8 != NULL) {
                iVar9 = *arg1_00;
                *piVar8 = iVar9;
                if (iVar9 != 0) {
                    *(iVar9 + 8) = piVar8;
                }
                *arg1_00 = 0;
                *(iVar6 + 0x68) = 0;
            }
            if (*(iVar7 + uVar3 * 0x68 + 0xc2) != '\0') {
                sym.DATARMNETa00cda79d0(8);
                sym.DATARMNETa3055c21f2(arg1_00,&pppppppuStack_58);
            }
            sym.DATARMNETc70e73c8d4(&pppppppuStack_58);
        }
        iVar1 = *(arg1 + 0x3c);
        *(arg1_00 + 0x54) = iVar1;
        pcVar4 = obj.DATARMNET4791268d67 + (iVar1 * 0x61c88647 >> 0x1b) * 8;
        iVar7 = *pcVar4;
        *arg1_00 = iVar7;
        if (iVar7 != 0) {
            *(iVar7 + 8) = arg1_00;
        }
        *pcVar4 = arg1_00;
        arg1_00[1] = pcVar4;
code_r0x08002df4:
        *(arg1 + 0x42) = 1;
        if (cVar2 == '\x11') {
            uVar5 = sym.DATARMNET8dc47eb7af(arg1_00,arg1,in_q1,arg2);
        }
        else {
            if (cVar2 != '\x06') goto code_r0x08002e20;
            uVar5 = sym.DATARMNET4c7cdc25b7(arg1_00,arg1,in_q1,arg2);
        }
    }
    else {
        sym.DATARMNETa00cda79d0(10);
code_r0x08002e20:
        uVar5 = 0;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_48) {
        return uVar5 & 1;
    }
    __stack_chk_fail();
code_r0x08002e74:
    //WARNING: Does not return
    pcVar4 = SoftwareBreakpoint(0x5512,0x8002e78);
    (*pcVar4)();
}


// ===== sym.DATARMNETb98b78b8e3 @ 0x08002e78 (size 88) =====

void sym.DATARMNETb98b78b8e3(void)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong *puVar3;
    int64_t iVar4;
    
    iVar4 = 0;
    do {
        puVar1 = *(obj.DATARMNET4791268d67 + iVar4 * 8);
        while (puVar3 = puVar1, puVar3 != NULL) {
            puVar1 = *puVar3;
            puVar2 = puVar3[1];
            if (puVar2 != NULL) {
                *puVar2 = puVar1;
                if (puVar1 != NULL) {
                    puVar1[1] = puVar2;
                }
                *puVar3 = 0;
                puVar3[1] = 0;
            }
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 != 0x20);
    return;
}


// ===== sym.DATARMNETdbcaf01255 @ 0x08002ed0 (size 60) =====

ulong sym.DATARMNETdbcaf01255(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    iVar2 = 0x32;
    piVar1 = _segment.ehdr + 0x78;
    do {
        iVar2 = iVar2 + -1;
        piVar1[-1] = piVar1 + -1;
        *piVar1 = piVar1 + -1;
        piVar1[-3] = 0;
        piVar1[-2] = 0;
        piVar1 = piVar1 + 0xd;
    } while (iVar2 != 0);
    return 0;
}


// ===== sym.DATARMNET4c7cdc25b7 @ 0x08002f0c (size 564) =====

ulong sym.DATARMNET4c7cdc25b7(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int *piVar1;
    int *piVar2;
    uint8_t uVar3;
    int16_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *arg2_00;
    uint64_t in_x2;
    ulong *arg2_01;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_b8;
    ulong uStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    uint64_t uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_38 = *(iVar6 + 0x5e0);
    if ((in_x2 & 1) == 0) {
        arg2_01 = &uStack_78;
        in_x2 = 0;
        uStack_68 = uStack_68 & 0xffffffff00000000;
        uStack_78 = 0;
        uStack_70 = 0;
        iVar6 = rmnet_frag_header_ptr(*arg2,*(arg2 + 0x34));
        if (iVar6 == 0) {
            uVar5 = 0xd;
            goto code_r0x080030dc;
        }
        if ((*(*arg2 + 0x51) >> 5 & 1) == 0) {
            uVar3 = *(iVar6 + 0xd);
        }
        else {
            uVar3 = *(*arg2 + 0x43);
        }
        uVar5 = 0xd;
        if (((*(arg2 + 0x40) == 0 & (uVar3 & 0x10) >> 4) != 0) || ((uVar3 & 0xaf) != 0)) goto code_r0x080030dc;
        if (*(arg1 + 0x62) != '\0') {
            arg2_01 = &uStack_78;
            uStack_40 = 0;
            in_x2 = *(arg1 + 0x4e);
            uStack_50 = 0;
            uStack_48 = 0;
            uStack_60 = 0;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_90 = 0;
            uStack_88 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_b0 = 0;
            uStack_a8 = 0;
            uStack_b8 = 0;
            iVar6 = rmnet_frag_header_ptr(*(arg1 + 0x10),*(arg1 + 0x4c));
            if (iVar6 == 0) {
code_r0x080030b4:
                uVar5 = 0xe;
            }
            else {
                arg2_01 = &uStack_b8;
                in_x2 = *(arg2 + 0x36);
                iVar7 = rmnet_frag_header_ptr(*arg2,*(arg2 + 0x34));
                if (iVar7 == 0) goto code_r0x080030b4;
                uVar5 = *(iVar6 + 0xc) >> 2 & 0x3c;
                if ((*(iVar7 + 0xc) >> 2 & 0x3c) != uVar5) goto code_r0x080030b4;
                if (0x14 < uVar5) {
                    uVar8 = 0x14;
                    do {
                        piVar1 = iVar6 + uVar8;
                        piVar2 = iVar7 + uVar8;
                        uVar8 = uVar8 + 4;
                    } while (*piVar1 == *piVar2 && uVar8 < uVar5);
                    if (*piVar1 != *piVar2) goto code_r0x080030b4;
                }
                if (*(arg2 + 0x30) != *(arg1 + 0x48)) {
                    uVar5 = 0xf;
                    goto code_r0x080030dc;
                }
                iVar4 = *(*arg2 + 0x46);
                if (iVar4 == 0) {
                    iVar4 = *(arg2 + 0x40);
                }
                if (iVar4 == *(arg1 + 0x60)) {
                    uVar8 = sym.DATARMNETf1d1b8287f(0);
                    if (*(arg1 + 0x58) + *(arg2 + 0x40) < uVar8) {
                        *(arg2 + 0x42) = 0;
                        goto code_r0x080030c8;
                    }
                    uVar5 = 0x11;
                }
                else {
                    uVar5 = 0x10;
                }
            }
            sym.DATARMNETa00cda79d0(uVar5);
            sym.DATARMNETa3055c21f2(arg1,arg3);
        }
code_r0x080030c8:
        sym.DATARMNET33aa5df9ef(arg1,arg2);
    }
    else {
        uVar5 = 0xc;
        arg2_01 = arg3;
code_r0x080030dc:
        sym.DATARMNETa00cda79d0(uVar5);
        sym.DATARMNETa3055c21f2(arg1,arg3);
        sym.DATARMNET19d190f2bd(arg2,arg3);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return 1;
    }
    auVar9 = __stack_chk_fail();
    arg2_00 = auVar9._8_8_;
    iVar6 = auVar9._0_8_;
    *extraout_x18 = sym.DATARMNET8dc47eb7af;
    if ((in_x2 & 1) != 0) {
        sym.DATARMNETa00cda79d0(0x12);
        sym.DATARMNETa3055c21f2(iVar6,arg2_01);
        sym.DATARMNET19d190f2bd(arg2_00,arg2_01);
        return 1;
    }
    if (*(iVar6 + 0x62) != '\0') {
        iVar4 = *(*arg2_00 + 0x46);
        if (iVar4 == 0) {
            iVar4 = arg2_00[8];
        }
        if (iVar4 == *(iVar6 + 0x60)) {
            uVar8 = sym.DATARMNETf1d1b8287f(1);
            if (*(iVar6 + 0x58) + *(arg2_00 + 8) < uVar8) {
                *(arg2_00 + 0x42) = 0;
                goto code_r0x080031f0;
            }
            uVar5 = 0x14;
        }
        else {
            uVar5 = 0x13;
        }
        sym.DATARMNETa00cda79d0(uVar5);
        sym.DATARMNETa3055c21f2(iVar6,arg2_01);
    }
code_r0x080031f0:
    sym.DATARMNET33aa5df9ef(iVar6,arg2_00);
    return 1;
}


// ===== sym.DATARMNET8dc47eb7af @ 0x08003140 (size 216) =====

ulong sym.DATARMNET8dc47eb7af(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int16_t iVar1;
    uint32_t arg1_00;
    uint64_t uVar2;
    uint32_t in_w2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((in_w2 & 1) != 0) {
        sym.DATARMNETa00cda79d0(0x12);
        sym.DATARMNETa3055c21f2(arg1,arg3);
        sym.DATARMNET19d190f2bd(arg2,arg3);
        return 1;
    }
    if (*(arg1 + 0x62) != '\0') {
        iVar1 = *(*arg2 + 0x46);
        if (iVar1 == 0) {
            iVar1 = *(arg2 + 0x40);
        }
        if (iVar1 == *(arg1 + 0x60)) {
            uVar2 = sym.DATARMNETf1d1b8287f(1);
            if (*(arg1 + 0x58) + *(arg2 + 0x40) < uVar2) {
                *(arg2 + 0x42) = 0;
                goto code_r0x080031f0;
            }
            arg1_00 = 0x14;
        }
        else {
            arg1_00 = 0x13;
        }
        sym.DATARMNETa00cda79d0(arg1_00);
        sym.DATARMNETa3055c21f2(arg1,arg3);
    }
code_r0x080031f0:
    sym.DATARMNET33aa5df9ef(arg1,arg2);
    return 1;
}


// ===== sym.DATARMNETbad3b5165e @ 0x08003218 (size 52) =====

void sym.DATARMNETbad3b5165e(uint32_t arg1,int64_t arg2)

{
    if (arg1 < 0x1c) {
        *(obj.DATARMNET6c78aba0c8 + arg1 * 8) = *(obj.DATARMNET6c78aba0c8 + arg1 * 8) + arg2;
    }
    return;
}


// ===== sym.DATARMNETa00cda79d0 @ 0x0800324c (size 52) =====

void sym.DATARMNETa00cda79d0(uint32_t arg1)

{
    if (arg1 < 0x1c) {
        *(obj.DATARMNET6c78aba0c8 + arg1 * 8) = *(obj.DATARMNET6c78aba0c8 + arg1 * 8) + 1;
    }
    return;
}


// ===== sym.DATARMNETf1d1b8287f @ 0x08003280 (size 52) =====

ulong sym.DATARMNETf1d1b8287f(uint32_t arg1)

{
    if (2 < arg1) {
        return 0xffffffffffffffff;
    }
    return *(obj.DATARMNET07ae1e39fb + arg1 * 0x40);
}


// ===== sym.__DATARMNETdf66588a73 @ 0x080032b4 (size 40) =====

void sym.__DATARMNETdf66588a73(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETf467eaf6fc(arg1,arg2,0);
    return;
}


// ===== sym.__DATARMNET9c85bb95a3 @ 0x080032dc (size 40) =====

void sym.__DATARMNET9c85bb95a3(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETf467eaf6fc(arg1,arg2,1);
    return;
}


// ===== sym.__DATARMNET6d2ed4b822 @ 0x08003304 (size 40) =====

void sym.__DATARMNET6d2ed4b822(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.DATARMNETf467eaf6fc(arg1,arg2,2);
    return;
}


// ===== sym.DATARMNETf467eaf6fc @ 0x0800332c (size 408) =====

uint64_t sym.DATARMNETf467eaf6fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    code *pcVar3;
    code *extraout_x8;
    uint64_t *puVar4;
    ulong *in_x18;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong unaff_x30;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    uVar6 = arg3 & 0xffffffff;
    iStack_48 = *(iVar1 + 0x5e0);
    uStack_50 = 0;
    uVar2 = kstrtoull(arg1,0,&uStack_50);
    if (uVar2 < 0) {
        uVar5 = uVar2;
    }
    else {
        if (0xc0 < (uVar6 << 6 | 8)) goto code_r0x0800348c;
        if (*(uVar6 * 0x40 + 0x80000a8) <= uStack_50) {
            if (0xc0 < (uVar6 << 6 | 0x10)) {
code_r0x0800348c:
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(1,0x8003490);
                (*pcVar3)();
            }
            if (uStack_50 <= *(uVar6 * 0x40 + 0x80000b0)) {
                _raw_spin_lock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
                puVar4 = *(arg2 + 0x20);
                uVar5 = *puVar4;
                if (uStack_50 == uVar5) {
                    uVar5 = 0;
                    goto code_r0x08003448;
                }
                if ((uVar6 << 6 | 0x18) < 0xc1) {
                    pcVar3 = *(uVar6 * 0x40 + 0x80000b8);
                    if (pcVar3 == NULL) goto code_r0x08003438;
                    if (pcVar3 != sym.__typeid__ZTSFiyyE_global_addr) goto code_r0x08003494;
                    goto code_r0x08003424;
                }
                goto code_r0x0800348c;
            }
        }
        uVar5 = 0xffffffde;
    }
    while( true ) {
        iVar1 = sp_el0;
        if (*(iVar1 + 0x5e0) == iStack_48) break;
        __stack_chk_fail();
        pcVar3 = extraout_x8;
code_r0x08003494:
        __cfi_slowpath_diag(0x1996fdbd024c04c3,pcVar3,0x8000160);
code_r0x08003424:
        uVar2 = (*pcVar3)(uVar5,uStack_50);
        if (uVar2 < 0) {
            uVar5 = uVar2;
        }
        else {
            puVar4 = *(arg2 + 0x20);
code_r0x08003438:
            uVar5 = 0;
            *puVar4 = uStack_50;
        }
code_r0x08003448:
        _raw_spin_unlock_bh(obj.DATARMNET0b5e447f18.llvm.17990970886840922578);
    }
    return uVar5;
}


// ===== sym.init_module @ 0x080034d4 (size 64) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001cf,"DATARMNETb1c42acd9c");
    register_netdevice_notifier(reloc.DATARMNET7dec24813e.cb09fe597dc53e8c863ba90454a985c6.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x08003514 (size 64) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x8000258,"DATARMNET0f6d85e415");
    unregister_netdevice_notifier(reloc.DATARMNET7dec24813e.cb09fe597dc53e8c863ba90454a985c6.cfi_jt);
    return;
}

