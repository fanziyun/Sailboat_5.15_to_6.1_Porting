// decompiled from tmecom-intf by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 604) =====

//WARNING: Switch with 1 destination removed at 0x08001b0c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x774b57dcfe90443a) {
                pcVar2 = sym.tmecom_process_request.cfi_jt;
            }
            else if (arg1 == -0x631f31ee7603c3b1) {
                pcVar2 = sym.tmecom_receive_message.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt;
            }
            else {
                if (arg1 != -0x5c749a09b449ed7a) goto code_r0x08001acc;
                pcVar2 = sym.tme_hwkm_master_generatekey.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x3557318fb8d07b71) {
                pcVar2 = sym.tmecom_probe.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt;
code_r0x0800121c:
                if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08001acc;
            }
            if (arg1 == -0x2e0099eb089f4c5b) {
                pcVar2 = sym.tme_hwkm_master_importkey.cfi_jt;
            }
            else {
                if (arg1 != -0x8dc801903aca538) goto code_r0x08001acc;
                pcVar2 = sym.simple_open.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x2a36a6f371fdbb18) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.tmecom_debugfs_write.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt;
        }
        else {
            if (arg1 != 0x24fbb1a7ca8573c7) goto code_r0x08001acc;
            pcVar2 = sym.tme_hwkm_master_derivekey.cfi_jt;
        }
    }
    else if (arg1 < 0x5a577be50fb7376b) {
        if (arg1 == 0x2a36a6f371fdbb18) {
            pcVar2 = sym.tme_hwkm_master_unwrapkey.cfi_jt;
            goto code_r0x0800121c;
        }
        if (arg1 != 0x307776253a2795d8) goto code_r0x08001acc;
        pcVar2 = sym.tme_hwkm_master_broadcast_transportkey.cfi_jt;
    }
    else if (arg1 == 0x5a577be50fb7376b) {
        pcVar2 = sym.tme_hwkm_master_clearkey.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001acc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001acc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b20);
    (*pcVar1)();
}


// ===== sym.tme_hwkm_master_importkey.cfi_jt @ 0x08001268 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint32_t sym.tme_hwkm_master_importkey.cfi_jt
                   (uint32_t param_1,ulong *param_2,ulong *param_3,uint param_4,int *param_5)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    int *piVar11;
    ulong *arg1;
    int *arg3;
    ulong uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int *unaff_x19;
    ulong *unaff_x20;
    int *unaff_x21;
    uint64_t unaff_x22;
    ulong *unaff_x23;
    ulong unaff_x30;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    ulong *puStack_90;
    uint64_t uStack_80;
    int *piStack_78;
    ulong *puStack_70;
    int *piStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar10 = 0xffffffea;
    iStack_60 = 0x14;
    piStack_68 = unaff_x19;
    puStack_90 = unaff_x23;
    if (((param_2 != NULL) && (puStack_90 = param_3, param_3 != NULL)) && (piStack_68 = param_5, param_5 != NULL)) {
        unaff_x22 = param_1;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar6 = param_3[5];
            uVar7 = param_3[6];
            *(unaff_x20 + 0xc) = *param_2;
            *(unaff_x20 + 0x5c) = param_4;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = param_3[7];
            uVar8 = param_3[8];
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 1) = param_1;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = param_3[1];
            uVar7 = param_3[2];
            *(unaff_x20 + 0x54) = uVar8;
            uVar12 = *param_3;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = param_3[3];
            uVar8 = param_3[4];
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar12;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,unaff_x21,&iStack_60);
            if (uVar10 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = unaff_x21[1];
                    iVar3 = unaff_x21[2];
                    iVar5 = unaff_x21[3];
                    *param_5 = iVar2;
                    param_5[1] = iVar4;
                    iVar9 = unaff_x21[4];
                    param_5[2] = iVar3;
                    param_5[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    param_5[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_60,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x8000309,param_1);
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_98 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b0 = 0x14;
    puStack_a0 = &stack0xffffffffffffffb0;
    uStack_80 = unaff_x22;
    piStack_78 = unaff_x21;
    puStack_70 = unaff_x20;
    if (piVar11 == NULL) {
        uVar10 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((arg1 != NULL) && (arg3 != NULL)) {
            *arg1 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1,8,arg3,&iStack_b0);
            if (uVar10 == 0) {
                if (iStack_b0 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = arg3[1];
                    iVar3 = arg3[2];
                    iVar5 = arg3[3];
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = arg3[4];
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_b0,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x800054a);
            }
        }
        kfree(arg1);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar10;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_generatekey.cfi_jt @ 0x08001270 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_generatekey.cfi_jt
                 (uint32_t param_1,code *param_2,code *param_3,code *param_4,code *param_5)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    uint32_t uVar9;
    int *piVar10;
    ulong *arg1;
    int *arg3;
    code *pcVar11;
    code *pcVar12;
    uint uVar13;
    code *pcVar14;
    code *pcVar15;
    code *pcVar16;
    ulong uVar17;
    ulong uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *unaff_x19;
    code *pcVar19;
    code *unaff_x20;
    code *unaff_x21;
    code *pcVar20;
    code *unaff_x22;
    code *pcVar21;
    code *pcVar22;
    code *unaff_x23;
    code *unaff_x24;
    code *pcVar23;
    code *pcVar24;
    code *pcVar25;
    code *pcVar26;
    code *unaff_x26;
    ulong unaff_x30;
    uchar auVar27 [16];
    int64_t iStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    code *pcStack_1f0;
    code *pcStack_1e8;
    code *pcStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong ***pppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
    code *pcStack_188;
    code *pcStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar ***pppuStack_160;
    code *pcStack_158;
    code *pcStack_150;
    code *pcStack_140;
    code *pcStack_138;
    code *pcStack_130;
    code *pcStack_128;
    code *pcStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    code *pcStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    pcVar23 = &iStack_60;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    pcVar24 = 0xffffffea;
    iStack_60 = 0x14;
    pcVar11 = param_3;
    pcVar14 = param_4;
    pcStack_68 = unaff_x19;
    pcStack_90 = unaff_x24;
    if ((param_2 != NULL) && (pcStack_68 = param_4, param_4 != NULL)) {
        unaff_x26 = kmalloc_caches;
        unaff_x22 = param_1;
        unaff_x23 = param_3 & 0xffffffff;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
        pcVar11 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar24 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar17 = *param_2;
            *(unaff_x20 + 8) = param_1;
            *(unaff_x20 + 0x14) = param_3;
            *unaff_x20 = 0x1542f01d9;
            *(unaff_x20 + 0xc) = uVar17;
            pcVar11 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x18,unaff_x21,&iStack_60);
            if (uVar9 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *param_4 = iVar2;
                    *(param_4 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(param_4 + 8) = iVar3;
                    *(param_4 + 0xc) = iVar5;
                    pcVar24 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(param_4 + 0x10) = uVar13;
                    pcVar14 = pcVar23;
                }
                else {
                    pcVar11 = 0x8;
                    _printk(0x80004d0);
                    pcVar24 = 0xffffffb6;
                    pcVar14 = pcVar23;
                }
            }
            else {
                pcVar24 = uVar9;
                _printk(0x8000593,param_1);
                pcVar14 = pcVar23;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_90 = param_2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return pcVar24;
    }
    auVar27 = __stack_chk_fail();
    pcVar20 = auVar27._8_8_;
    pcVar22 = &iStack_c0;
    *extraout_x18 = sym.tme_hwkm_master_derivekey;
    pcStack_a8 = sym.tme_hwkm_master_derivekey;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    pcVar25 = 0xffffffea;
    iStack_c0 = 0x14;
    pcVar12 = pcVar11;
    pcVar15 = pcVar14;
    pcVar19 = pcStack_68;
    pcVar21 = unaff_x22;
    pcStack_e8 = unaff_x23;
    pcVar23 = pcStack_90;
    puStack_b0 = &stack0xffffffffffffffb0;
    pcStack_a0 = pcVar24;
    pcStack_88 = unaff_x23;
    pcStack_80 = unaff_x22;
    pcStack_78 = unaff_x21;
    pcStack_70 = unaff_x20;
    if ((pcVar20 != NULL) && (pcVar19 = pcVar14, pcVar14 != NULL)) {
        pcVar23 = pcVar11 & 0xffffffff;
        pcVar21 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090b4,0xdc0,0xf8);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar25 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xf4) = pcVar11;
            *unaff_x20 = 0x2582f01d9;
            memcpy(unaff_x20 + 0xc,pcVar20,0xe8);
            pcVar12 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0xf8,unaff_x21,&iStack_c0);
            if (uVar9 == 0) {
                if (iStack_c0 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *pcVar14 = iVar2;
                    *(pcVar14 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(pcVar14 + 8) = iVar3;
                    *(pcVar14 + 0xc) = iVar5;
                    pcVar25 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar14 + 0x10) = uVar13;
                    pcVar15 = pcVar22;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar25 = 0xffffffb6;
                    pcVar15 = pcVar22;
                }
            }
            else {
                pcVar25 = uVar9;
                _printk(0x80002e0,auVar27._0_8_ & 0xffffffff);
                pcVar15 = pcVar22;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_e8 = pcVar20;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return pcVar25;
    }
    auVar27 = __stack_chk_fail();
    pcVar22 = &iStack_110;
    *extraout_x18_00 = sym.tme_hwkm_master_wrapkey;
    pcStack_f8 = sym.tme_hwkm_master_wrapkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar20 = 0xffffffea;
    iStack_110 = 0x7c;
    pcVar11 = pcVar15;
    pcVar14 = param_5;
    pcStack_130 = pcVar21;
    pcVar24 = pcStack_e8;
    ppuStack_100 = &puStack_b0;
    pcStack_f0 = pcVar23;
    pcStack_e0 = pcVar21;
    pcStack_d8 = unaff_x21;
    pcStack_d0 = unaff_x20;
    pcStack_c8 = pcVar19;
    if ((pcVar15 != NULL) && (pcStack_130 = param_5, param_5 != NULL)) {
        pcVar24 = auVar27._0_8_ & 0xffffffff;
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = pcVar15;
        if (pcVar21 == NULL) {
            pcVar20 = 0xfffffff4;
        }
        else {
            *(pcVar21 + 8) = auVar27._0_4_;
            *(pcVar21 + 0xc) = auVar27._8_4_;
            pcVar23 = obj.tmecom_probe.__key;
            *pcVar21 = 0x3502f01d9;
            pcVar12 = pcVar23;
            uVar9 = sym.tmecom_process_request(pcVar21,0x14,0x80005a8,&iStack_110);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar9 == 0) {
                if (iStack_110 == 0x7c) {
                    pcVar20 = 0x1;
                    *param_5 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    *(param_5 + 4) = *0x80005ac;
                    iVar4 = *0x80005b0;
                    *(param_5 + 8) = *0x80005b0;
                    iVar5 = *0x80005b4;
                    *(param_5 + 0xc) = *0x80005b4;
                    *(param_5 + 0x10) = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        pcVar20 = NULL;
                        *pcVar15 = *0x80005bc;
                        *(pcVar15 + 0x18) = *0x80005d4;
                        *(pcVar15 + 0x20) = *0x80005dc;
                        *(pcVar15 + 8) = *0x80005c4;
                        *(pcVar15 + 0x10) = *0x80005cc;
                        *(pcVar15 + 0x38) = *0x80005f4;
                        *(pcVar15 + 0x40) = *0x80005fc;
                        *(pcVar15 + 0x28) = *0x80005e4;
                        *(pcVar15 + 0x30) = *0x80005ec;
                        *(pcVar15 + 0x58) = *0x8000614;
                        *(pcVar15 + 0x60) = *0x800061c;
                        *(pcVar15 + 0x48) = *0x8000604;
                        *(pcVar15 + 0x50) = *0x800060c;
                    }
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar20 = 0xffffffb6;
                }
            }
            else {
                pcVar20 = uVar9;
                _printk(0x800048e,auVar27._0_8_ & 0xffffffff);
            }
            kfree(pcVar21);
            pcVar11 = pcVar22;
            pcVar19 = pcVar21;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar20;
    }
    auVar27 = __stack_chk_fail();
    pcVar16 = &iStack_170;
    *extraout_x18_01 = sym.tme_hwkm_master_unwrapkey;
    pcStack_158 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_168 = *(iVar1 + 0x5e0);
    pcVar26 = 0xffffffea;
    iStack_170 = 0x14;
    pcVar15 = pcVar11;
    pcVar21 = pcVar14;
    pcStack_178 = pcVar19;
    pcVar22 = pcStack_130;
    pcStack_198 = pcVar24;
    pppuStack_160 = &ppuStack_100;
    pcStack_150 = pcVar25;
    pcStack_140 = pcVar23;
    pcStack_138 = pcVar24;
    pcStack_128 = pcVar20;
    pcStack_120 = unaff_x20;
    pcStack_118 = pcVar19;
    if ((pcVar11 != NULL) && (pcStack_178 = pcVar14, pcVar14 != NULL)) {
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar22 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar26 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar20 != NULL)) {
            uVar17 = *(pcVar11 + 0x50);
            uVar6 = *(pcVar11 + 0x58);
            *(unaff_x20 + 0x70) = *(pcVar11 + 0x60);
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xc) = auVar27._8_4_;
            *unaff_x20 = 0x4582f01d9;
            *(unaff_x20 + 0x60) = uVar17;
            *(unaff_x20 + 0x68) = uVar6;
            uVar6 = *(pcVar11 + 0x38);
            uVar17 = *(pcVar11 + 0x40);
            uVar7 = *(pcVar11 + 0x48);
            *(unaff_x20 + 0x40) = *(pcVar11 + 0x30);
            *(unaff_x20 + 0x48) = uVar6;
            uVar6 = *(pcVar11 + 0x10);
            uVar18 = *(pcVar11 + 0x18);
            *(unaff_x20 + 0x50) = uVar17;
            *(unaff_x20 + 0x58) = uVar7;
            uVar17 = *(pcVar11 + 0x20);
            uVar7 = *(pcVar11 + 0x28);
            *(unaff_x20 + 0x20) = uVar6;
            *(unaff_x20 + 0x28) = uVar18;
            uVar6 = *pcVar11;
            uVar18 = *(pcVar11 + 8);
            *(unaff_x20 + 0x30) = uVar17;
            *(unaff_x20 + 0x38) = uVar7;
            *(unaff_x20 + 0x10) = uVar6;
            *(unaff_x20 + 0x18) = uVar18;
            pcVar12 = pcVar20;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x7c,pcVar20,&iStack_170);
            if (uVar9 == 0) {
                if (iStack_170 == 0x14) {
                    iVar2 = *pcVar20;
                    iVar4 = *(pcVar20 + 4);
                    iVar3 = *(pcVar20 + 8);
                    iVar5 = *(pcVar20 + 0xc);
                    *pcVar14 = iVar2;
                    *(pcVar14 + 4) = iVar4;
                    uVar13 = *(pcVar20 + 0x10);
                    *(pcVar14 + 8) = iVar3;
                    *(pcVar14 + 0xc) = iVar5;
                    pcVar26 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar14 + 0x10) = uVar13;
                    pcVar15 = pcVar16;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar26 = 0xffffffb6;
                    pcVar15 = pcVar16;
                }
            }
            else {
                pcVar26 = uVar9;
                _printk(0x8000420,auVar27._0_8_ & 0xffffffff);
                pcVar15 = pcVar16;
            }
        }
        kfree(unaff_x20);
        kfree(pcVar20);
        pcStack_198 = pcVar11;
    }
    uVar13 = SUB84(pcVar15,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_168) {
        return pcVar26;
    }
    auVar27 = __stack_chk_fail();
    *extraout_x18_02 = sym.tme_hwkm_master_importkey;
    pcStack_1b8 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_1c8 = *(iVar1 + 0x5e0);
    pcVar11 = 0xffffffea;
    iStack_1d0 = 0x14;
    pcStack_1d8 = pcStack_178;
    pcStack_200 = pcStack_198;
    pppuStack_1c0 = &pppuStack_160;
    pcStack_1b0 = unaff_x26;
    pcStack_1a8 = pcVar26;
    pcStack_1a0 = pcVar23;
    pcStack_190 = pcVar22;
    pcStack_188 = pcVar20;
    pcStack_180 = unaff_x20;
    if (((auVar27._8_8_ != NULL) && (pcStack_200 = pcVar12, pcVar12 != NULL)) &&
       (pcStack_1d8 = pcVar21, pcVar21 != NULL)) {
        pcVar22 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar20 != NULL)) {
            uVar17 = *(pcVar12 + 0x28);
            uVar6 = *(pcVar12 + 0x30);
            *(unaff_x20 + 0xc) = *auVar27._8_8_;
            *(unaff_x20 + 0x5c) = uVar13;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar17;
            uVar17 = *(pcVar12 + 0x38);
            uVar7 = *(pcVar12 + 0x40);
            *(unaff_x20 + 0x44) = uVar6;
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0x4c) = uVar17;
            uVar17 = *(pcVar12 + 8);
            uVar6 = *(pcVar12 + 0x10);
            *(unaff_x20 + 0x54) = uVar7;
            uVar18 = *pcVar12;
            *(unaff_x20 + 0x1c) = uVar17;
            uVar17 = *(pcVar12 + 0x18);
            uVar7 = *(pcVar12 + 0x20);
            *(unaff_x20 + 0x24) = uVar6;
            *(unaff_x20 + 0x14) = uVar18;
            *(unaff_x20 + 0x2c) = uVar17;
            *(unaff_x20 + 0x34) = uVar7;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x60,pcVar20,&iStack_1d0);
            if (uVar9 == 0) {
                if (iStack_1d0 == 0x14) {
                    iVar2 = *pcVar20;
                    iVar4 = *(pcVar20 + 4);
                    iVar3 = *(pcVar20 + 8);
                    iVar5 = *(pcVar20 + 0xc);
                    *pcVar21 = iVar2;
                    *(pcVar21 + 4) = iVar4;
                    uVar13 = *(pcVar20 + 0x10);
                    *(pcVar21 + 8) = iVar3;
                    *(pcVar21 + 0xc) = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar21 + 0x10) = uVar13;
                }
                else {
                    _printk(0x80004d0,iStack_1d0,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x8000309,auVar27._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(pcVar20);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1c8) {
        return pcVar11;
    }
    piVar10 = __stack_chk_fail();
    *extraout_x18_03 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_208 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_218 = *(iVar1 + 0x5e0);
    iStack_220 = 0x14;
    pppuStack_210 = &pppuStack_1c0;
    pcStack_1f0 = pcVar22;
    pcStack_1e8 = pcVar20;
    pcStack_1e0 = unaff_x20;
    if (piVar10 == NULL) {
        pcVar11 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((arg1 != NULL) && (arg3 != NULL)) {
            *arg1 = 0x6442f01d9;
            uVar9 = sym.tmecom_process_request(arg1,8,arg3,&iStack_220);
            if (uVar9 == 0) {
                if (iStack_220 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = arg3[1];
                    iVar3 = arg3[2];
                    iVar5 = arg3[3];
                    *piVar10 = iVar2;
                    piVar10[1] = iVar4;
                    iVar8 = arg3[4];
                    piVar10[2] = iVar3;
                    piVar10[3] = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar10[4] = iVar8;
                }
                else {
                    _printk(0x80004d0,iStack_220,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x800054a);
            }
        }
        kfree(arg1);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_218) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_broadcast_transportkey.cfi_jt @ 0x08001278 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint32_t sym.tme_hwkm_master_broadcast_transportkey.cfi_jt(int *param_1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    ulong *arg1;
    int *arg3;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0x14;
    if (param_1 == NULL) {
        uVar7 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar7 = 0xfffffff4;
        if ((arg1 != NULL) && (arg3 != NULL)) {
            *arg1 = 0x6442f01d9;
            uVar7 = sym.tmecom_process_request(arg1,8,arg3,&iStack_50);
            if (uVar7 == 0) {
                if (iStack_50 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = arg3[1];
                    iVar3 = arg3[2];
                    iVar5 = arg3[3];
                    *param_1 = iVar2;
                    param_1[1] = iVar4;
                    iVar6 = arg3[4];
                    param_1[2] = iVar3;
                    param_1[3] = iVar5;
                    uVar7 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    param_1[4] = iVar6;
                }
                else {
                    _printk(0x80004d0,iStack_50,8);
                    uVar7 = 0xffffffb6;
                }
            }
            else {
                _printk(0x800054a);
            }
        }
        kfree(arg1);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001280 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tmecom_probe.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001288 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tmecom_probe.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.tmecom_receive_message.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt @ 0x08001290 (size 8) =====

void sym.tmecom_receive_message.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt(int64_t *param_1,uint *param_2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(*param_1 + 0x98);
    if (param_2 == NULL) {
        _dev_err(*puVar2,"");
    }
    else if (*(puVar2 + 0x15) == '\0') {
        *(puVar2 + 0xf) = *param_2;
        uVar1 = *(param_2 + 2);
        *(puVar2 + 0x15) = 1;
        puVar2[0x10] = uVar1;
    }
    else {
        _dev_err(*puVar2,"");
    }
    __wake_up(puVar2 + 0x11,1,1,0);
    return;
}


// ===== sym.tmecom_process_request.cfi_jt @ 0x08001298 (size 8) =====

uint64_t sym.tmecom_process_request.cfi_jt(int64_t param_1,uint32_t *param_2,int64_t param_3,uint64_t *param_4)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *unaff_x19;
    uint64_t *unaff_x20;
    uint64_t uVar10;
    uint32_t *unaff_x22;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint32_t *puStack_a0;
    uint64_t uStack_98;
    uint64_t *puStack_90;
    int64_t *piStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    piVar5 = _segment.ehdr;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    if (_segment.ehdr == NULL) {
        _printk(0x80003a5,"");
        uVar10 = 0xffffffed;
        param_4 = unaff_x20;
    }
    else {
        if ((param_1 == 0) || (unaff_x22 = param_2, param_2 - 0x401U < 0xfffffffffffffc00)) {
            iVar8 = *_segment.ehdr;
            pcVar9 = "";
            param_4 = unaff_x20;
        }
        else {
            if (((param_3 != 0) && (unaff_x20 = param_4, param_4 != NULL)) && (*param_4 < 0x401)) {
                unaff_x19 = _segment.ehdr + 9;
                mutex_lock(unaff_x19);
                *(piVar5 + 0x15) = 0;
                memcpy(piVar5[0x14] + 8,param_1,param_2);
                unaff_x22 = piVar5 + 0xf;
                *unaff_x22 = param_2 + 0xbU & 0xfffffffc;
                piVar5[0x10] = piVar5[0x14];
                iVar3 = mbox_send_message(piVar5[8],unaff_x22);
                if (iVar3 < 0) {
                    _dev_err(*piVar5,"");
                    uVar10 = 0xfffffff5;
                }
                else {
                    iVar8 = piVar5[3];
                    if (iVar8 == 0 && piVar5[0x15] != '\0') {
                        iVar8 = 1;
                    }
                    if ((piVar5[0x15] == '\0') && (iVar8 != 0)) {
                        uStack_68 = 0;
                        uStack_60 = 0;
                        iVar7 = piVar5[3];
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_80 = 0;
                        init_wait_entry(&uStack_80,0);
                        piVar1 = piVar5 + 0x11;
                        iVar8 = prepare_to_wait_event(piVar1,&uStack_80,1);
                        cVar2 = piVar5[0x15];
                        if (iVar7 == 0 && cVar2 != '\0') {
                            iVar7 = 1;
                        }
                        while ((iVar4 = iVar7, cVar2 == '\0' && (iVar4 = 0, iVar7 != 0))) {
                            if (iVar8 != 0) goto code_r0x080014dc;
                            iVar7 = schedule_timeout(iVar7);
                            iVar8 = prepare_to_wait_event(piVar1,&uStack_80,1);
                            cVar2 = piVar5[0x15];
                            if (iVar7 == 0 && cVar2 != '\0') {
                                iVar7 = 1;
                            }
                        }
                        iVar8 = iVar4;
                        finish_wait(piVar1,&uStack_80);
                    }
code_r0x080014dc:
                    if (iVar8 == 0) {
                        _dev_err(*piVar5,"");
                        uVar10 = 0xffffff92;
                    }
                    else {
                        _dev_info(*piVar5,"");
                        if (*unaff_x22 < 0xd) {
                            _dev_err(*piVar5,"");
                            uVar10 = 0xffffffb9;
                        }
                        else {
                            memcpy(param_3,piVar5[0x10] + 0xc,*unaff_x22 - 0xc);
                            uVar10 = 0;
                            *param_4 = *(piVar5 + 0xf) - 0xc;
                            *(piVar5 + 0x15) = 0;
                        }
                    }
                }
                mutex_unlock(unaff_x19);
                goto code_r0x08001390;
            }
            iVar8 = *_segment.ehdr;
            pcVar9 = "";
            param_4 = unaff_x20;
        }
        _dev_err(iVar8,pcVar9);
        uVar10 = 0xffffffea;
    }
code_r0x08001390:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.tmecom_probe;
    pcStack_a8 = sym.tmecom_probe;
    iVar7 = sp_el0;
    iVar8 = iVar4 + 0x10;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_b0 = &stack0xffffffffffffffb0;
    puStack_a0 = unaff_x22;
    uStack_98 = uVar10;
    puStack_90 = param_4;
    piStack_88 = unaff_x19;
    piVar5 = devm_kmalloc(iVar8,0xb0,0xdc0);
    if (piVar5 != NULL) {
        uVar6 = *(iVar4 + 0x300);
        piVar5[1] = iVar8;
        *(piVar5 + 2) = 1;
        piVar5[3] = 500;
        *(piVar5 + 4) = 0;
        piVar5[5] = sym.tmecom_receive_message.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt;
        iVar7 = of_get_property(uVar6,"",0);
        if (iVar7 == 0) {
            uVar10 = 0xffffffea;
            goto code_r0x080016b4;
        }
        snprintf(&uStack_d8,0x20,"",iVar7);
        uVar10 = mbox_request_channel(piVar5 + 1,0);
        piVar5[8] = uVar10;
        if (0xfffffffffffff000 < uVar10) {
            _dev_err(iVar8,"");
            uVar10 = *(piVar5 + 8);
            goto code_r0x080016b4;
        }
        __mutex_init(piVar5 + 9,"",obj.tmecom_probe.__key);
        if (piVar5[8] != 0) {
            iVar7 = devm_kmalloc(iVar8,0x400,0xdc0);
            piVar5[0x14] = iVar7;
            if (iVar7 == 0) {
                _dev_err(iVar8,"");
                goto code_r0x080016a8;
            }
        }
        __init_waitqueue_head(piVar5 + 0x11,"",obj.tmecom_probe.__key);
        _segment.ehdr = debugfs_create_file(&uStack_d8,0x90,0,piVar5,obj.tmecom_debugfs_ops);
        if (_segment.ehdr != NULL) {
            *(piVar5 + 0x15) = 0;
            *piVar5 = iVar8;
            *(iVar4 + 0xa8) = piVar5;
            _segment.ehdr = piVar5;
            _dev_info(iVar4 + 0x10,"");
            uVar10 = 0;
            goto code_r0x080016b4;
        }
        mbox_free_channel(piVar5[8]);
    }
code_r0x080016a8:
    uVar10 = 0xfffffff4;
code_r0x080016b4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_b8) {
        iVar8 = __stack_chk_fail(uVar10);
        *extraout_x18_00 = sym.tmecom_remove;
        iVar7 = *(iVar8 + 0xa8);
        debugfs_remove(_segment.ehdr);
        if (*(iVar7 + 0x40) != 0) {
            mbox_free_channel();
        }
        _dev_info(iVar8 + 0x10,"");
        return 0;
    }
    return uVar10;
}


// ===== sym.tmecom_probe.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt @ 0x080012a0 (size 8) =====

uint sym.tmecom_probe.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt(int64_t param_1)

{
    uint uVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar6 = param_1 + 0x10;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    piVar2 = devm_kmalloc(iVar6,0xb0,0xdc0);
    if (piVar2 != NULL) {
        uVar3 = *(param_1 + 0x300);
        piVar2[1] = iVar6;
        *(piVar2 + 2) = 1;
        piVar2[3] = 500;
        *(piVar2 + 4) = 0;
        piVar2[5] = sym.tmecom_receive_message.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt;
        iVar4 = of_get_property(uVar3,"",0);
        if (iVar4 == 0) {
            uVar1 = 0xffffffea;
            goto code_r0x080016b4;
        }
        snprintf(&uStack_58,0x20,"",iVar4);
        uVar5 = mbox_request_channel(piVar2 + 1,0);
        piVar2[8] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(iVar6,"");
            uVar1 = piVar2[8];
            goto code_r0x080016b4;
        }
        __mutex_init(piVar2 + 9,"",obj.tmecom_probe.__key);
        if (piVar2[8] != 0) {
            iVar4 = devm_kmalloc(iVar6,0x400,0xdc0);
            piVar2[0x14] = iVar4;
            if (iVar4 == 0) {
                _dev_err(iVar6,"");
                goto code_r0x080016a8;
            }
        }
        __init_waitqueue_head(piVar2 + 0x11,"",obj.tmecom_probe.__key);
        _segment.ehdr = debugfs_create_file(&uStack_58,0x90,0,piVar2,obj.tmecom_debugfs_ops);
        if (_segment.ehdr != NULL) {
            *(piVar2 + 0x15) = 0;
            *piVar2 = iVar6;
            *(param_1 + 0xa8) = piVar2;
            _segment.ehdr = piVar2;
            _dev_info(param_1 + 0x10,"");
            uVar1 = 0;
            goto code_r0x080016b4;
        }
        mbox_free_channel(piVar2[8]);
    }
code_r0x080016a8:
    uVar1 = 0xfffffff4;
code_r0x080016b4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    iVar6 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.tmecom_remove;
    iVar4 = *(iVar6 + 0xa8);
    debugfs_remove(_segment.ehdr);
    if (*(iVar4 + 0x40) != 0) {
        mbox_free_channel();
    }
    _dev_info(iVar6 + 0x10,"");
    return 0;
}


// ===== sym.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt @ 0x080012a8 (size 8) =====

ulong sym.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    debugfs_remove(_segment.ehdr);
    if (*(iVar1 + 0x40) != 0) {
        mbox_free_channel();
    }
    _dev_info(param_1 + 0x10,"");
    return 0;
}


// ===== sym.tmecom_debugfs_write.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt @ 0x080012b0 (size 8) =====

uint64_t sym.tmecom_debugfs_write.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt
                   (ulong param_1,int64_t param_2,uint64_t param_3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    if (param_3 - 0x401 < 0xfffffffffffffc00) {
        _printk(0x8000474);
        param_3 = 0xffffffffffffffea;
    }
    else {
        reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt = 0x0;
        __check_object_size(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt,param_3,0);
        iVar6 = sym._copy_from_user(param_2,param_3);
        if (iVar6 == 0) {
            sym.tmecom_process_request(0x8000198,param_3,0x8000198,&uStack_30);
            sym.tme_hwkm_master_broadcast_transportkey(0x8000198);
        }
        else {
            _printk(0x80002bc,"");
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return param_3;
    }
    auVar11 = __stack_chk_fail();
    uVar9 = auVar11._8_8_;
    uVar7 = auVar11._0_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar4 = (uVar7 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar7, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar10 = uVar7 & uVar4;
    }
    bVar5 = CARRY8(uVar10,uVar9);
    uVar10 = uVar10 + uVar9;
    uVar1 = 0;
    if (!bVar5 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar8 = uVar9;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar5) || uVar10 == uVar1 + !bVar5) {
        if ((_simple_open >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar7 & uVar4 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        uVar8 = __arch_copy_from_user(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt,uVar7,uVar9);
        if ((_simple_open >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    if (uVar8 != 0) {
        memset(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt + (uVar9 - uVar8),0,uVar8);
    }
    return uVar8;
}


// ===== sym.simple_open.cfi_jt @ 0x080012b8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_derivekey.cfi_jt @ 0x080012c0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_derivekey.cfi_jt
                 (uint32_t param_1,code *param_2,code *param_3,code *param_4,code *param_5)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    code *pcVar11;
    int *piVar12;
    ulong *arg1;
    int *arg3;
    code *pcVar13;
    uint uVar14;
    code *pcVar15;
    code *pcVar16;
    code *pcVar17;
    code *pcVar18;
    ulong uVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    code *unaff_x19;
    code *unaff_x20;
    code *unaff_x21;
    code *arg3_00;
    code *unaff_x22;
    code *unaff_x23;
    code *pcVar20;
    code *unaff_x24;
    code *pcVar21;
    code *pcVar22;
    code *pcVar23;
    code *pcVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uchar auVar26 [12];
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    code *pcStack_190;
    code *pcStack_188;
    code *pcStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar ***pppuStack_160;
    code *pcStack_158;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    pcVar21 = &iStack_60;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    pcVar22 = 0xffffffea;
    iStack_60 = 0x14;
    pcVar13 = param_3;
    pcVar24 = param_4;
    pcStack_88 = unaff_x23;
    if ((param_2 != NULL) && (unaff_x19 = param_4, param_4 != NULL)) {
        unaff_x24 = param_3 & 0xffffffff;
        unaff_x22 = param_1;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090b4,0xdc0,0xf8);
        pcVar13 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar22 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = param_1;
            *(unaff_x20 + 0xf4) = param_3;
            *unaff_x20 = 0x2582f01d9;
            memcpy(unaff_x20 + 0xc,param_2,0xe8);
            pcVar13 = unaff_x21;
            uVar10 = sym.tmecom_process_request(unaff_x20,0xf8,unaff_x21,&iStack_60);
            if (uVar10 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *param_4 = iVar2;
                    *(param_4 + 4) = iVar4;
                    uVar14 = *(unaff_x21 + 0x10);
                    *(param_4 + 8) = iVar3;
                    *(param_4 + 0xc) = iVar5;
                    pcVar22 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(param_4 + 0x10) = uVar14;
                    pcVar24 = pcVar21;
                }
                else {
                    pcVar13 = 0x8;
                    _printk(0x80004d0);
                    pcVar22 = 0xffffffb6;
                    pcVar24 = pcVar21;
                }
            }
            else {
                pcVar22 = uVar10;
                _printk(0x80002e0,param_1);
                pcVar24 = pcVar21;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_88 = param_2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return pcVar22;
    }
    auVar25 = __stack_chk_fail();
    pcVar16 = &iStack_b0;
    *extraout_x18 = sym.tme_hwkm_master_wrapkey;
    pcStack_98 = sym.tme_hwkm_master_wrapkey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    arg3_00 = 0xffffffea;
    iStack_b0 = 0x7c;
    pcVar15 = pcVar24;
    pcVar18 = param_5;
    pcStack_d0 = unaff_x22;
    pcVar20 = pcStack_88;
    pcVar21 = unaff_x24;
    puStack_a0 = &stack0xffffffffffffffb0;
    pcStack_90 = unaff_x24;
    pcStack_80 = unaff_x22;
    pcStack_78 = unaff_x21;
    pcStack_70 = unaff_x20;
    pcStack_68 = unaff_x19;
    if ((pcVar24 != NULL) && (pcStack_d0 = param_5, param_5 != NULL)) {
        pcVar20 = auVar25._0_8_ & 0xffffffff;
        pcVar21 = auVar25._8_8_ & 0xffffffff;
        pcVar13 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = pcVar24;
        if (pcVar11 == NULL) {
            arg3_00 = 0xfffffff4;
        }
        else {
            *(pcVar11 + 8) = auVar25._0_4_;
            *(pcVar11 + 0xc) = auVar25._8_4_;
            pcVar21 = obj.tmecom_probe.__key;
            *pcVar11 = 0x3502f01d9;
            pcVar13 = pcVar21;
            uVar10 = sym.tmecom_process_request(pcVar11,0x14,0x80005a8,&iStack_b0);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar10 == 0) {
                if (iStack_b0 == 0x7c) {
                    arg3_00 = 0x1;
                    *param_5 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    *(param_5 + 4) = *0x80005ac;
                    iVar4 = *0x80005b0;
                    *(param_5 + 8) = *0x80005b0;
                    iVar5 = *0x80005b4;
                    *(param_5 + 0xc) = *0x80005b4;
                    *(param_5 + 0x10) = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        arg3_00 = NULL;
                        *pcVar24 = *0x80005bc;
                        *(pcVar24 + 0x18) = *0x80005d4;
                        *(pcVar24 + 0x20) = *0x80005dc;
                        *(pcVar24 + 8) = *0x80005c4;
                        *(pcVar24 + 0x10) = *0x80005cc;
                        *(pcVar24 + 0x38) = *0x80005f4;
                        *(pcVar24 + 0x40) = *0x80005fc;
                        *(pcVar24 + 0x28) = *0x80005e4;
                        *(pcVar24 + 0x30) = *0x80005ec;
                        *(pcVar24 + 0x58) = *0x8000614;
                        *(pcVar24 + 0x60) = *0x800061c;
                        *(pcVar24 + 0x48) = *0x8000604;
                        *(pcVar24 + 0x50) = *0x800060c;
                    }
                }
                else {
                    pcVar13 = 0x8;
                    _printk(0x80004d0);
                    arg3_00 = 0xffffffb6;
                }
            }
            else {
                arg3_00 = uVar10;
                _printk(0x800048e,auVar25._0_8_ & 0xffffffff);
            }
            kfree(pcVar11);
            pcVar15 = pcVar16;
            unaff_x19 = pcVar11;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return arg3_00;
    }
    auVar26 = __stack_chk_fail();
    pcVar17 = &iStack_110;
    *extraout_x18_00 = sym.tme_hwkm_master_unwrapkey;
    pcStack_f8 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar23 = 0xffffffea;
    iStack_110 = 0x14;
    pcVar24 = pcVar15;
    pcVar16 = pcVar18;
    pcStack_178 = unaff_x19;
    pcVar11 = pcStack_d0;
    ppuStack_100 = &puStack_a0;
    pcStack_f0 = pcVar22;
    pcStack_e0 = pcVar21;
    pcStack_d8 = pcVar20;
    pcStack_c8 = arg3_00;
    pcStack_c0 = unaff_x20;
    pcStack_b8 = unaff_x19;
    if ((pcVar15 != NULL) && (pcStack_178 = pcVar18, pcVar18 != NULL)) {
        pcVar11 = auVar26._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        pcVar13 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar23 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3_00 != NULL)) {
            uVar6 = *(pcVar15 + 0x50);
            uVar7 = *(pcVar15 + 0x58);
            *(unaff_x20 + 0x70) = *(pcVar15 + 0x60);
            *(unaff_x20 + 8) = auVar26._0_4_;
            *(unaff_x20 + 0xc) = auVar26._8_4_;
            *unaff_x20 = 0x4582f01d9;
            *(unaff_x20 + 0x60) = uVar6;
            *(unaff_x20 + 0x68) = uVar7;
            uVar7 = *(pcVar15 + 0x38);
            uVar6 = *(pcVar15 + 0x40);
            uVar8 = *(pcVar15 + 0x48);
            *(unaff_x20 + 0x40) = *(pcVar15 + 0x30);
            *(unaff_x20 + 0x48) = uVar7;
            uVar7 = *(pcVar15 + 0x10);
            uVar19 = *(pcVar15 + 0x18);
            *(unaff_x20 + 0x50) = uVar6;
            *(unaff_x20 + 0x58) = uVar8;
            uVar6 = *(pcVar15 + 0x20);
            uVar8 = *(pcVar15 + 0x28);
            *(unaff_x20 + 0x20) = uVar7;
            *(unaff_x20 + 0x28) = uVar19;
            uVar7 = *pcVar15;
            uVar19 = *(pcVar15 + 8);
            *(unaff_x20 + 0x30) = uVar6;
            *(unaff_x20 + 0x38) = uVar8;
            *(unaff_x20 + 0x10) = uVar7;
            *(unaff_x20 + 0x18) = uVar19;
            pcVar13 = arg3_00;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x7c,arg3_00,&iStack_110);
            if (uVar10 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = *(arg3_00 + 4);
                    iVar3 = *(arg3_00 + 8);
                    iVar5 = *(arg3_00 + 0xc);
                    *pcVar18 = iVar2;
                    *(pcVar18 + 4) = iVar4;
                    uVar14 = *(arg3_00 + 0x10);
                    *(pcVar18 + 8) = iVar3;
                    *(pcVar18 + 0xc) = iVar5;
                    pcVar23 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar18 + 0x10) = uVar14;
                    pcVar24 = pcVar17;
                }
                else {
                    pcVar13 = 0x8;
                    _printk(0x80004d0);
                    pcVar23 = 0xffffffb6;
                    pcVar24 = pcVar17;
                }
            }
            else {
                pcVar23 = uVar10;
                _printk(0x8000420,auVar26._0_8_ & 0xffffffff);
                pcVar24 = pcVar17;
            }
        }
        kfree(unaff_x20);
        kfree(arg3_00);
        pcVar20 = pcVar15;
    }
    uVar14 = SUB84(pcVar24,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar23;
    }
    auVar25 = __stack_chk_fail();
    *extraout_x18_01 = sym.tme_hwkm_master_importkey;
    pcStack_158 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_168 = *(iVar1 + 0x5e0);
    pcVar24 = 0xffffffea;
    iStack_170 = 0x14;
    pcStack_1a0 = pcVar20;
    pppuStack_160 = &ppuStack_100;
    if (((auVar25._8_8_ != NULL) && (pcStack_1a0 = pcVar13, pcVar13 != NULL)) &&
       (pcStack_178 = pcVar16, pcVar16 != NULL)) {
        pcVar11 = auVar25._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar24 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3_00 != NULL)) {
            uVar6 = *(pcVar13 + 0x28);
            uVar7 = *(pcVar13 + 0x30);
            *(unaff_x20 + 0xc) = *auVar25._8_8_;
            *(unaff_x20 + 0x5c) = uVar14;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = *(pcVar13 + 0x38);
            uVar8 = *(pcVar13 + 0x40);
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 8) = auVar25._0_4_;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = *(pcVar13 + 8);
            uVar7 = *(pcVar13 + 0x10);
            *(unaff_x20 + 0x54) = uVar8;
            uVar19 = *pcVar13;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = *(pcVar13 + 0x18);
            uVar8 = *(pcVar13 + 0x20);
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar19;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,arg3_00,&iStack_170);
            if (uVar10 == 0) {
                if (iStack_170 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = *(arg3_00 + 4);
                    iVar3 = *(arg3_00 + 8);
                    iVar5 = *(arg3_00 + 0xc);
                    *pcVar16 = iVar2;
                    *(pcVar16 + 4) = iVar4;
                    uVar14 = *(arg3_00 + 0x10);
                    *(pcVar16 + 8) = iVar3;
                    *(pcVar16 + 0xc) = iVar5;
                    pcVar24 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar16 + 0x10) = uVar14;
                }
                else {
                    _printk(0x80004d0,iStack_170,8);
                    pcVar24 = 0xffffffb6;
                }
            }
            else {
                pcVar24 = uVar10;
                _printk(0x8000309,auVar25._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(arg3_00);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_168) {
        return pcVar24;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18_02 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_1a8 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_1b8 = *(iVar1 + 0x5e0);
    iStack_1c0 = 0x14;
    pppuStack_1b0 = &pppuStack_160;
    pcStack_190 = pcVar11;
    pcStack_188 = arg3_00;
    pcStack_180 = unaff_x20;
    if (piVar12 == NULL) {
        pcVar13 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar13 = 0xfffffff4;
        if ((arg1 != NULL) && (arg3 != NULL)) {
            *arg1 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1,8,arg3,&iStack_1c0);
            if (uVar10 == 0) {
                if (iStack_1c0 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = arg3[1];
                    iVar3 = arg3[2];
                    iVar5 = arg3[3];
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = arg3[4];
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    pcVar13 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_1c0,8);
                    pcVar13 = 0xffffffb6;
                }
            }
            else {
                pcVar13 = uVar10;
                _printk(0x800054a);
            }
        }
        kfree(arg1);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1b8) {
        return pcVar13;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_clearkey.cfi_jt @ 0x080012c8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_clearkey.cfi_jt(uint32_t param_1,code *param_2,code *param_3,code *param_4,code *param_5)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    uint32_t uVar9;
    int *piVar10;
    ulong *arg1;
    int *arg3;
    code *pcVar11;
    code *pcVar12;
    uint uVar13;
    code *pcVar14;
    code *pcVar15;
    ulong uVar16;
    ulong uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    code *unaff_x19;
    code *pcVar18;
    code *unaff_x20;
    code *unaff_x21;
    code *pcVar19;
    code *unaff_x22;
    code *pcVar20;
    code *pcVar21;
    code *pcVar22;
    code *unaff_x24;
    code *pcVar23;
    code *pcVar24;
    code *pcVar25;
    code *pcVar26;
    code *unaff_x26;
    ulong unaff_x30;
    uchar auVar27 [16];
    int64_t iStack_270;
    int64_t iStack_268;
    ulong ***pppuStack_260;
    code *pcStack_258;
    code *pcStack_250;
    code *pcStack_240;
    code *pcStack_238;
    code *pcStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    code *pcStack_1f8;
    code *pcStack_1f0;
    code *pcStack_1e8;
    code *pcStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    code *pcStack_1c8;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    code *pcStack_190;
    code *pcStack_188;
    code *pcStack_180;
    code *pcStack_178;
    code *pcStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    code *pcStack_140;
    code *pcStack_138;
    code *pcStack_130;
    code *pcStack_128;
    code *pcStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_50;
    int64_t iStack_48;
    
    pcVar11 = &iStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0x14;
    if (param_2 == NULL) {
        pcVar21 = 0xffffffea;
    }
    else {
        unaff_x24 = kmalloc_caches;
        unaff_x22 = param_1;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0xc);
        param_3 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar21 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = param_1;
            *unaff_x20 = 0x482f01d9;
            param_3 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0xc,unaff_x21,&iStack_50);
            if (uVar9 == 0) {
                if (iStack_50 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *param_2 = iVar2;
                    *(param_2 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(param_2 + 8) = iVar3;
                    *(param_2 + 0xc) = iVar5;
                    pcVar21 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(param_2 + 0x10) = uVar13;
                    param_4 = pcVar11;
                }
                else {
                    param_3 = 0x8;
                    _printk(0x80004d0);
                    pcVar21 = 0xffffffb6;
                    param_4 = pcVar11;
                }
            }
            else {
                pcVar21 = uVar9;
                _printk(0x800037d,param_1);
                param_4 = pcVar11;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        unaff_x19 = param_2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return pcVar21;
    }
    auVar27 = __stack_chk_fail();
    pcVar12 = auVar27._8_8_;
    pcVar23 = &iStack_b0;
    *extraout_x18 = sym.tme_hwkm_master_generatekey;
    pcStack_98 = sym.tme_hwkm_master_generatekey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    pcVar24 = 0xffffffea;
    iStack_b0 = 0x14;
    pcVar11 = param_3;
    pcVar22 = param_4;
    pcStack_b8 = unaff_x19;
    pcStack_e0 = unaff_x24;
    puStack_a0 = &stack0xffffffffffffffc0;
    if ((pcVar12 != NULL) && (pcStack_b8 = param_4, param_4 != NULL)) {
        unaff_x26 = kmalloc_caches;
        unaff_x22 = auVar27._0_8_ & 0xffffffff;
        pcVar21 = param_3 & 0xffffffff;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
        pcVar11 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar24 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar16 = *pcVar12;
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0x14) = param_3;
            *unaff_x20 = 0x1542f01d9;
            *(unaff_x20 + 0xc) = uVar16;
            pcVar11 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x18,unaff_x21,&iStack_b0);
            if (uVar9 == 0) {
                if (iStack_b0 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *param_4 = iVar2;
                    *(param_4 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(param_4 + 8) = iVar3;
                    *(param_4 + 0xc) = iVar5;
                    pcVar24 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(param_4 + 0x10) = uVar13;
                    pcVar22 = pcVar23;
                }
                else {
                    pcVar11 = 0x8;
                    _printk(0x80004d0);
                    pcVar24 = 0xffffffb6;
                    pcVar22 = pcVar23;
                }
            }
            else {
                pcVar24 = uVar9;
                _printk(0x8000593,auVar27._0_8_ & 0xffffffff);
                pcVar22 = pcVar23;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_e0 = pcVar12;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return pcVar24;
    }
    auVar27 = __stack_chk_fail();
    pcVar15 = auVar27._8_8_;
    pcVar19 = &iStack_110;
    *extraout_x18_00 = sym.tme_hwkm_master_derivekey;
    pcStack_f8 = sym.tme_hwkm_master_derivekey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar25 = 0xffffffea;
    iStack_110 = 0x14;
    pcVar12 = pcVar11;
    pcVar14 = pcVar22;
    pcVar18 = pcStack_b8;
    pcVar20 = unaff_x22;
    pcStack_138 = pcVar21;
    pcVar23 = pcStack_e0;
    ppuStack_100 = &puStack_a0;
    pcStack_f0 = pcVar24;
    pcStack_d8 = pcVar21;
    pcStack_d0 = unaff_x22;
    pcStack_c8 = unaff_x21;
    pcStack_c0 = unaff_x20;
    if ((pcVar15 != NULL) && (pcVar18 = pcVar22, pcVar22 != NULL)) {
        pcVar23 = pcVar11 & 0xffffffff;
        pcVar20 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090b4,0xdc0,0xf8);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar25 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xf4) = pcVar11;
            *unaff_x20 = 0x2582f01d9;
            memcpy(unaff_x20 + 0xc,pcVar15,0xe8);
            pcVar12 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0xf8,unaff_x21,&iStack_110);
            if (uVar9 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *pcVar22 = iVar2;
                    *(pcVar22 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(pcVar22 + 8) = iVar3;
                    *(pcVar22 + 0xc) = iVar5;
                    pcVar25 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar22 + 0x10) = uVar13;
                    pcVar14 = pcVar19;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar25 = 0xffffffb6;
                    pcVar14 = pcVar19;
                }
            }
            else {
                pcVar25 = uVar9;
                _printk(0x80002e0,auVar27._0_8_ & 0xffffffff);
                pcVar14 = pcVar19;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_138 = pcVar15;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar25;
    }
    auVar27 = __stack_chk_fail();
    pcVar24 = &iStack_160;
    *extraout_x18_01 = sym.tme_hwkm_master_wrapkey;
    pcStack_148 = sym.tme_hwkm_master_wrapkey;
    iVar1 = sp_el0;
    iStack_158 = *(iVar1 + 0x5e0);
    pcVar19 = 0xffffffea;
    iStack_160 = 0x7c;
    pcVar11 = pcVar14;
    pcVar21 = param_5;
    pcStack_180 = pcVar20;
    pcVar22 = pcStack_138;
    pppuStack_150 = &ppuStack_100;
    pcStack_140 = pcVar23;
    pcStack_130 = pcVar20;
    pcStack_128 = unaff_x21;
    pcStack_120 = unaff_x20;
    pcStack_118 = pcVar18;
    if ((pcVar14 != NULL) && (pcStack_180 = param_5, param_5 != NULL)) {
        pcVar22 = auVar27._0_8_ & 0xffffffff;
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = pcVar14;
        if (pcVar20 == NULL) {
            pcVar19 = 0xfffffff4;
        }
        else {
            *(pcVar20 + 8) = auVar27._0_4_;
            *(pcVar20 + 0xc) = auVar27._8_4_;
            pcVar23 = obj.tmecom_probe.__key;
            *pcVar20 = 0x3502f01d9;
            pcVar12 = pcVar23;
            uVar9 = sym.tmecom_process_request(pcVar20,0x14,0x80005a8,&iStack_160);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar9 == 0) {
                if (iStack_160 == 0x7c) {
                    pcVar19 = 0x1;
                    *param_5 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    *(param_5 + 4) = *0x80005ac;
                    iVar4 = *0x80005b0;
                    *(param_5 + 8) = *0x80005b0;
                    iVar5 = *0x80005b4;
                    *(param_5 + 0xc) = *0x80005b4;
                    *(param_5 + 0x10) = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        pcVar19 = NULL;
                        *pcVar14 = *0x80005bc;
                        *(pcVar14 + 0x18) = *0x80005d4;
                        *(pcVar14 + 0x20) = *0x80005dc;
                        *(pcVar14 + 8) = *0x80005c4;
                        *(pcVar14 + 0x10) = *0x80005cc;
                        *(pcVar14 + 0x38) = *0x80005f4;
                        *(pcVar14 + 0x40) = *0x80005fc;
                        *(pcVar14 + 0x28) = *0x80005e4;
                        *(pcVar14 + 0x30) = *0x80005ec;
                        *(pcVar14 + 0x58) = *0x8000614;
                        *(pcVar14 + 0x60) = *0x800061c;
                        *(pcVar14 + 0x48) = *0x8000604;
                        *(pcVar14 + 0x50) = *0x800060c;
                    }
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar19 = 0xffffffb6;
                }
            }
            else {
                pcVar19 = uVar9;
                _printk(0x800048e,auVar27._0_8_ & 0xffffffff);
            }
            kfree(pcVar20);
            pcVar11 = pcVar24;
            pcVar18 = pcVar20;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_158) {
        return pcVar19;
    }
    auVar27 = __stack_chk_fail();
    pcVar15 = &iStack_1c0;
    *extraout_x18_02 = sym.tme_hwkm_master_unwrapkey;
    pcStack_1a8 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_1b8 = *(iVar1 + 0x5e0);
    pcVar26 = 0xffffffea;
    iStack_1c0 = 0x14;
    pcVar24 = pcVar11;
    pcVar14 = pcVar21;
    pcStack_1c8 = pcVar18;
    pcVar20 = pcStack_180;
    pcStack_1e8 = pcVar22;
    pppuStack_1b0 = &pppuStack_150;
    pcStack_1a0 = pcVar25;
    pcStack_190 = pcVar23;
    pcStack_188 = pcVar22;
    pcStack_178 = pcVar19;
    pcStack_170 = unaff_x20;
    pcStack_168 = pcVar18;
    if ((pcVar11 != NULL) && (pcStack_1c8 = pcVar21, pcVar21 != NULL)) {
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar20 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar19 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar26 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar19 != NULL)) {
            uVar16 = *(pcVar11 + 0x50);
            uVar6 = *(pcVar11 + 0x58);
            *(unaff_x20 + 0x70) = *(pcVar11 + 0x60);
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xc) = auVar27._8_4_;
            *unaff_x20 = 0x4582f01d9;
            *(unaff_x20 + 0x60) = uVar16;
            *(unaff_x20 + 0x68) = uVar6;
            uVar6 = *(pcVar11 + 0x38);
            uVar16 = *(pcVar11 + 0x40);
            uVar7 = *(pcVar11 + 0x48);
            *(unaff_x20 + 0x40) = *(pcVar11 + 0x30);
            *(unaff_x20 + 0x48) = uVar6;
            uVar6 = *(pcVar11 + 0x10);
            uVar17 = *(pcVar11 + 0x18);
            *(unaff_x20 + 0x50) = uVar16;
            *(unaff_x20 + 0x58) = uVar7;
            uVar16 = *(pcVar11 + 0x20);
            uVar7 = *(pcVar11 + 0x28);
            *(unaff_x20 + 0x20) = uVar6;
            *(unaff_x20 + 0x28) = uVar17;
            uVar6 = *pcVar11;
            uVar17 = *(pcVar11 + 8);
            *(unaff_x20 + 0x30) = uVar16;
            *(unaff_x20 + 0x38) = uVar7;
            *(unaff_x20 + 0x10) = uVar6;
            *(unaff_x20 + 0x18) = uVar17;
            pcVar12 = pcVar19;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x7c,pcVar19,&iStack_1c0);
            if (uVar9 == 0) {
                if (iStack_1c0 == 0x14) {
                    iVar2 = *pcVar19;
                    iVar4 = *(pcVar19 + 4);
                    iVar3 = *(pcVar19 + 8);
                    iVar5 = *(pcVar19 + 0xc);
                    *pcVar21 = iVar2;
                    *(pcVar21 + 4) = iVar4;
                    uVar13 = *(pcVar19 + 0x10);
                    *(pcVar21 + 8) = iVar3;
                    *(pcVar21 + 0xc) = iVar5;
                    pcVar26 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar21 + 0x10) = uVar13;
                    pcVar24 = pcVar15;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar26 = 0xffffffb6;
                    pcVar24 = pcVar15;
                }
            }
            else {
                pcVar26 = uVar9;
                _printk(0x8000420,auVar27._0_8_ & 0xffffffff);
                pcVar24 = pcVar15;
            }
        }
        kfree(unaff_x20);
        kfree(pcVar19);
        pcStack_1e8 = pcVar11;
    }
    uVar13 = SUB84(pcVar24,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1b8) {
        return pcVar26;
    }
    auVar27 = __stack_chk_fail();
    *extraout_x18_03 = sym.tme_hwkm_master_importkey;
    pcStack_208 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_218 = *(iVar1 + 0x5e0);
    pcVar11 = 0xffffffea;
    iStack_220 = 0x14;
    pcStack_228 = pcStack_1c8;
    pcStack_250 = pcStack_1e8;
    pppuStack_210 = &pppuStack_1b0;
    pcStack_200 = unaff_x26;
    pcStack_1f8 = pcVar26;
    pcStack_1f0 = pcVar23;
    pcStack_1e0 = pcVar20;
    pcStack_1d8 = pcVar19;
    pcStack_1d0 = unaff_x20;
    if (((auVar27._8_8_ != NULL) && (pcStack_250 = pcVar12, pcVar12 != NULL)) &&
       (pcStack_228 = pcVar14, pcVar14 != NULL)) {
        pcVar20 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar19 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar19 != NULL)) {
            uVar16 = *(pcVar12 + 0x28);
            uVar6 = *(pcVar12 + 0x30);
            *(unaff_x20 + 0xc) = *auVar27._8_8_;
            *(unaff_x20 + 0x5c) = uVar13;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar16;
            uVar16 = *(pcVar12 + 0x38);
            uVar7 = *(pcVar12 + 0x40);
            *(unaff_x20 + 0x44) = uVar6;
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0x4c) = uVar16;
            uVar16 = *(pcVar12 + 8);
            uVar6 = *(pcVar12 + 0x10);
            *(unaff_x20 + 0x54) = uVar7;
            uVar17 = *pcVar12;
            *(unaff_x20 + 0x1c) = uVar16;
            uVar16 = *(pcVar12 + 0x18);
            uVar7 = *(pcVar12 + 0x20);
            *(unaff_x20 + 0x24) = uVar6;
            *(unaff_x20 + 0x14) = uVar17;
            *(unaff_x20 + 0x2c) = uVar16;
            *(unaff_x20 + 0x34) = uVar7;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x60,pcVar19,&iStack_220);
            if (uVar9 == 0) {
                if (iStack_220 == 0x14) {
                    iVar2 = *pcVar19;
                    iVar4 = *(pcVar19 + 4);
                    iVar3 = *(pcVar19 + 8);
                    iVar5 = *(pcVar19 + 0xc);
                    *pcVar14 = iVar2;
                    *(pcVar14 + 4) = iVar4;
                    uVar13 = *(pcVar19 + 0x10);
                    *(pcVar14 + 8) = iVar3;
                    *(pcVar14 + 0xc) = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar14 + 0x10) = uVar13;
                }
                else {
                    _printk(0x80004d0,iStack_220,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x8000309,auVar27._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(pcVar19);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_218) {
        return pcVar11;
    }
    piVar10 = __stack_chk_fail();
    *extraout_x18_04 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_258 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_268 = *(iVar1 + 0x5e0);
    iStack_270 = 0x14;
    pppuStack_260 = &pppuStack_210;
    pcStack_240 = pcVar20;
    pcStack_238 = pcVar19;
    pcStack_230 = unaff_x20;
    if (piVar10 == NULL) {
        pcVar11 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((arg1 != NULL) && (arg3 != NULL)) {
            *arg1 = 0x6442f01d9;
            uVar9 = sym.tmecom_process_request(arg1,8,arg3,&iStack_270);
            if (uVar9 == 0) {
                if (iStack_270 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = arg3[1];
                    iVar3 = arg3[2];
                    iVar5 = arg3[3];
                    *piVar10 = iVar2;
                    piVar10[1] = iVar4;
                    iVar8 = arg3[4];
                    piVar10[2] = iVar3;
                    piVar10[3] = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar10[4] = iVar8;
                }
                else {
                    _printk(0x80004d0,iStack_270,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x800054a);
            }
        }
        kfree(arg1);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_268) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_unwrapkey.cfi_jt @ 0x080012d0 (size 8) =====

//WARNING: Control flow encountered bad instruction data

uint32_t sym.tme_hwkm_master_unwrapkey.cfi_jt(uint32_t param_1,uint param_2,int *param_3,int *param_4,int *param_5)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    int *piVar11;
    ulong *arg1;
    int *piVar12;
    uint uVar13;
    int64_t *piVar14;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int *unaff_x19;
    ulong *unaff_x20;
    int *unaff_x21;
    uint64_t unaff_x22;
    int *unaff_x23;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int *piStack_f0;
    uint64_t uStack_e0;
    int *piStack_d8;
    ulong *puStack_d0;
    int *piStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_60;
    int64_t iStack_58;
    
    piVar14 = &iStack_60;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar10 = 0xffffffea;
    iStack_60 = 0x14;
    piVar11 = param_4;
    piVar12 = param_5;
    if ((param_4 != NULL) && (unaff_x19 = param_5, param_5 != NULL)) {
        unaff_x22 = param_1;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        param_3 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        uVar10 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar6 = *(param_4 + 0x14);
            uVar7 = *(param_4 + 0x16);
            unaff_x20[0xe] = *(param_4 + 0x18);
            *(unaff_x20 + 1) = param_1;
            *(unaff_x20 + 0xc) = param_2;
            *unaff_x20 = 0x4582f01d9;
            unaff_x20[0xc] = uVar6;
            unaff_x20[0xd] = uVar7;
            uVar7 = *(param_4 + 0xe);
            uVar6 = *(param_4 + 0x10);
            uVar8 = *(param_4 + 0x12);
            unaff_x20[8] = *(param_4 + 0xc);
            unaff_x20[9] = uVar7;
            uVar7 = *(param_4 + 4);
            uVar15 = *(param_4 + 6);
            unaff_x20[10] = uVar6;
            unaff_x20[0xb] = uVar8;
            uVar6 = *(param_4 + 8);
            uVar8 = *(param_4 + 10);
            unaff_x20[4] = uVar7;
            unaff_x20[5] = uVar15;
            uVar7 = *param_4;
            uVar15 = *(param_4 + 2);
            unaff_x20[6] = uVar6;
            unaff_x20[7] = uVar8;
            unaff_x20[2] = uVar7;
            unaff_x20[3] = uVar15;
            param_3 = unaff_x21;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x7c,unaff_x21,&iStack_60);
            if (uVar10 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = unaff_x21[1];
                    iVar3 = unaff_x21[2];
                    iVar5 = unaff_x21[3];
                    *param_5 = iVar2;
                    param_5[1] = iVar4;
                    iVar9 = unaff_x21[4];
                    param_5[2] = iVar3;
                    param_5[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    param_5[4] = iVar9;
                    piVar11 = piVar14;
                }
                else {
                    param_3 = 0x8;
                    _printk(0x80004d0);
                    uVar10 = 0xffffffb6;
                    piVar11 = piVar14;
                }
            }
            else {
                _printk(0x8000420,param_1);
                piVar11 = piVar14;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        unaff_x23 = param_4;
    }
    uVar13 = SUB84(piVar11,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18 = sym.tme_hwkm_master_importkey;
    pcStack_a8 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    uVar10 = 0xffffffea;
    iStack_c0 = 0x14;
    piStack_c8 = unaff_x19;
    piStack_f0 = unaff_x23;
    puStack_b0 = &stack0xffffffffffffffb0;
    if (((auVar16._8_8_ != NULL) && (piStack_f0 = param_3, param_3 != NULL)) &&
       (piStack_c8 = piVar12, piVar12 != NULL)) {
        unaff_x22 = auVar16._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar6 = *(param_3 + 10);
            uVar7 = *(param_3 + 0xc);
            *(unaff_x20 + 0xc) = *auVar16._8_8_;
            *(unaff_x20 + 0x5c) = uVar13;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = *(param_3 + 0xe);
            uVar8 = *(param_3 + 0x10);
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 1) = auVar16._0_4_;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = *(param_3 + 2);
            uVar7 = *(param_3 + 4);
            *(unaff_x20 + 0x54) = uVar8;
            uVar15 = *param_3;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = *(param_3 + 6);
            uVar8 = *(param_3 + 8);
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar15;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,unaff_x21,&iStack_c0);
            if (uVar10 == 0) {
                if (iStack_c0 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = unaff_x21[1];
                    iVar3 = unaff_x21[2];
                    iVar5 = unaff_x21[3];
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = unaff_x21[4];
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_c0,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x8000309,auVar16._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return uVar10;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_f8 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    iStack_110 = 0x14;
    ppuStack_100 = &puStack_b0;
    uStack_e0 = unaff_x22;
    piStack_d8 = unaff_x21;
    puStack_d0 = unaff_x20;
    if (piVar11 == NULL) {
        uVar10 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar12 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((arg1 != NULL) && (piVar12 != NULL)) {
            *arg1 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1,8,piVar12,&iStack_110);
            if (uVar10 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *piVar12;
                    iVar4 = piVar12[1];
                    iVar3 = piVar12[2];
                    iVar5 = piVar12[3];
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = piVar12[4];
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_110,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x800054a);
            }
        }
        kfree(arg1);
        kfree(piVar12);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return uVar10;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_wrapkey.cfi_jt @ 0x080012d8 (size 8) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_wrapkey.cfi_jt(uint32_t param_1,int param_2,code *param_3,code *param_4,int *param_5)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    int *piVar11;
    int *piVar12;
    ulong *arg1;
    uint uVar13;
    code *pcVar14;
    code *pcVar15;
    ulong uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int *unaff_x19;
    code *unaff_x20;
    code *arg3;
    int *unaff_x22;
    code *unaff_x23;
    code *pcVar17;
    code *pcVar18;
    ulong unaff_x30;
    uchar auVar19 [12];
    uchar auVar20 [16];
    int64_t iStack_160;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    code *pcStack_140;
    int *piStack_130;
    code *pcStack_128;
    code *pcStack_120;
    int *piStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_50;
    int64_t iStack_48;
    
    pcVar14 = &iStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    arg3 = 0xffffffea;
    iStack_50 = 0x7c;
    pcVar18 = param_4;
    piVar12 = param_5;
    if ((param_4 != NULL) && (unaff_x22 = param_5, param_5 != NULL)) {
        unaff_x23 = param_1;
        param_3 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = param_4;
        if (piVar11 == NULL) {
            arg3 = 0xfffffff4;
        }
        else {
            piVar11[2] = param_1;
            piVar11[3] = param_2;
            param_3 = obj.tmecom_probe.__key;
            piVar11[0] = 0x502f01d9;
            piVar11[1] = 3;
            uVar10 = sym.tmecom_process_request(piVar11,0x14,0x80005a8,&iStack_50);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar10 == 0) {
                if (iStack_50 == 0x7c) {
                    arg3 = 0x1;
                    *param_5 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    param_5[1] = *0x80005ac;
                    iVar4 = *0x80005b0;
                    param_5[2] = *0x80005b0;
                    iVar5 = *0x80005b4;
                    param_5[3] = *0x80005b4;
                    param_5[4] = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        arg3 = NULL;
                        *param_4 = *0x80005bc;
                        uVar8 = *0x80005dc;
                        uVar7 = *0x80005cc;
                        uVar6 = *0x80005c4;
                        *(param_4 + 0x18) = *0x80005d4;
                        *(param_4 + 0x20) = uVar8;
                        *(param_4 + 8) = uVar6;
                        *(param_4 + 0x10) = uVar7;
                        uVar8 = *0x80005fc;
                        uVar7 = *0x80005ec;
                        uVar6 = *0x80005e4;
                        *(param_4 + 0x38) = *0x80005f4;
                        *(param_4 + 0x40) = uVar8;
                        *(param_4 + 0x28) = uVar6;
                        *(param_4 + 0x30) = uVar7;
                        uVar8 = *0x800061c;
                        uVar7 = *0x800060c;
                        uVar6 = *0x8000604;
                        *(param_4 + 0x58) = *0x8000614;
                        *(param_4 + 0x60) = uVar8;
                        *(param_4 + 0x48) = uVar6;
                        *(param_4 + 0x50) = uVar7;
                    }
                }
                else {
                    param_3 = 0x8;
                    _printk(0x80004d0);
                    arg3 = 0xffffffb6;
                }
            }
            else {
                arg3 = uVar10;
                _printk(0x800048e,param_1);
            }
            kfree(piVar11);
            pcVar18 = pcVar14;
            unaff_x19 = piVar11;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return arg3;
    }
    auVar19 = __stack_chk_fail();
    pcVar15 = &iStack_b0;
    *extraout_x18 = sym.tme_hwkm_master_unwrapkey;
    pcStack_98 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    pcVar17 = 0xffffffea;
    iStack_b0 = 0x14;
    pcVar14 = pcVar18;
    piVar11 = piVar12;
    puStack_a0 = &stack0xffffffffffffffc0;
    if ((pcVar18 != NULL) && (unaff_x19 = piVar12, piVar12 != NULL)) {
        unaff_x22 = auVar19._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        param_3 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar17 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3 != NULL)) {
            uVar6 = *(pcVar18 + 0x50);
            uVar7 = *(pcVar18 + 0x58);
            *(unaff_x20 + 0x70) = *(pcVar18 + 0x60);
            *(unaff_x20 + 8) = auVar19._0_4_;
            *(unaff_x20 + 0xc) = auVar19._8_4_;
            *unaff_x20 = 0x4582f01d9;
            *(unaff_x20 + 0x60) = uVar6;
            *(unaff_x20 + 0x68) = uVar7;
            uVar7 = *(pcVar18 + 0x38);
            uVar6 = *(pcVar18 + 0x40);
            uVar8 = *(pcVar18 + 0x48);
            *(unaff_x20 + 0x40) = *(pcVar18 + 0x30);
            *(unaff_x20 + 0x48) = uVar7;
            uVar7 = *(pcVar18 + 0x10);
            uVar16 = *(pcVar18 + 0x18);
            *(unaff_x20 + 0x50) = uVar6;
            *(unaff_x20 + 0x58) = uVar8;
            uVar6 = *(pcVar18 + 0x20);
            uVar8 = *(pcVar18 + 0x28);
            *(unaff_x20 + 0x20) = uVar7;
            *(unaff_x20 + 0x28) = uVar16;
            uVar7 = *pcVar18;
            uVar16 = *(pcVar18 + 8);
            *(unaff_x20 + 0x30) = uVar6;
            *(unaff_x20 + 0x38) = uVar8;
            *(unaff_x20 + 0x10) = uVar7;
            *(unaff_x20 + 0x18) = uVar16;
            param_3 = arg3;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x7c,arg3,&iStack_b0);
            if (uVar10 == 0) {
                if (iStack_b0 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = *(arg3 + 4);
                    iVar3 = *(arg3 + 8);
                    iVar5 = *(arg3 + 0xc);
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = *(arg3 + 0x10);
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    pcVar17 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                    pcVar14 = pcVar15;
                }
                else {
                    param_3 = 0x8;
                    _printk(0x80004d0);
                    pcVar17 = 0xffffffb6;
                    pcVar14 = pcVar15;
                }
            }
            else {
                pcVar17 = uVar10;
                _printk(0x8000420,auVar19._0_8_ & 0xffffffff);
                pcVar14 = pcVar15;
            }
        }
        kfree(unaff_x20);
        kfree(arg3);
        unaff_x23 = pcVar18;
    }
    uVar13 = SUB84(pcVar14,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return pcVar17;
    }
    auVar20 = __stack_chk_fail();
    *extraout_x18_00 = sym.tme_hwkm_master_importkey;
    pcStack_f8 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar18 = 0xffffffea;
    iStack_110 = 0x14;
    piStack_118 = unaff_x19;
    pcStack_140 = unaff_x23;
    ppuStack_100 = &puStack_a0;
    if (((auVar20._8_8_ != NULL) && (pcStack_140 = param_3, param_3 != NULL)) &&
       (piStack_118 = piVar11, piVar11 != NULL)) {
        unaff_x22 = auVar20._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar18 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3 != NULL)) {
            uVar6 = *(param_3 + 0x28);
            uVar7 = *(param_3 + 0x30);
            *(unaff_x20 + 0xc) = *auVar20._8_8_;
            *(unaff_x20 + 0x5c) = uVar13;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = *(param_3 + 0x38);
            uVar8 = *(param_3 + 0x40);
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 8) = auVar20._0_4_;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = *(param_3 + 8);
            uVar7 = *(param_3 + 0x10);
            *(unaff_x20 + 0x54) = uVar8;
            uVar16 = *param_3;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = *(param_3 + 0x18);
            uVar8 = *(param_3 + 0x20);
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar16;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,arg3,&iStack_110);
            if (uVar10 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = *(arg3 + 4);
                    iVar3 = *(arg3 + 8);
                    iVar5 = *(arg3 + 0xc);
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = *(arg3 + 0x10);
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    pcVar18 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_110,8);
                    pcVar18 = 0xffffffb6;
                }
            }
            else {
                pcVar18 = uVar10;
                _printk(0x8000309,auVar20._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar18;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_148 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_158 = *(iVar1 + 0x5e0);
    iStack_160 = 0x14;
    pppuStack_150 = &ppuStack_100;
    piStack_130 = unaff_x22;
    pcStack_128 = arg3;
    pcStack_120 = unaff_x20;
    if (piVar12 == NULL) {
        pcVar18 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar18 = 0xfffffff4;
        if ((arg1 != NULL) && (piVar11 != NULL)) {
            *arg1 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1,8,piVar11,&iStack_160);
            if (uVar10 == 0) {
                if (iStack_160 == 0x14) {
                    iVar2 = *piVar11;
                    iVar4 = piVar11[1];
                    iVar3 = piVar11[2];
                    iVar5 = piVar11[3];
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = piVar11[4];
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    pcVar18 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_160,8);
                    pcVar18 = 0xffffffb6;
                }
            }
            else {
                pcVar18 = uVar10;
                _printk(0x800054a);
            }
        }
        kfree(arg1);
        kfree(piVar11);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_158) {
        return pcVar18;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tmecom_process_request @ 0x080012e0 (size 648) =====

uint64_t sym.tmecom_process_request(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *unaff_x19;
    int64_t unaff_x20;
    uint64_t uVar10;
    uint32_t *unaff_x22;
    ulong unaff_x30;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint32_t *puStack_a0;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t *piStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    piVar5 = _segment.ehdr;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    if (_segment.ehdr == NULL) {
        _printk(0x80003a5,"");
        uVar10 = 0xffffffed;
        arg4 = unaff_x20;
    }
    else {
        if ((arg1 == 0) || (unaff_x22 = arg2, arg2 - 0x401U < 0xfffffffffffffc00)) {
            iVar8 = *_segment.ehdr;
            pcVar9 = "";
            arg4 = unaff_x20;
        }
        else {
            if (((arg3 != 0) && (unaff_x20 = arg4, arg4 != 0)) && (*arg4 < 0x401)) {
                unaff_x19 = _segment.ehdr + 9;
                mutex_lock(unaff_x19);
                *(piVar5 + 0x15) = 0;
                memcpy(piVar5[0x14] + 8,arg1,arg2);
                unaff_x22 = piVar5 + 0xf;
                *unaff_x22 = arg2 + 0xbU & 0xfffffffc;
                piVar5[0x10] = piVar5[0x14];
                iVar3 = mbox_send_message(piVar5[8],unaff_x22);
                if (iVar3 < 0) {
                    _dev_err(*piVar5,"");
                    uVar10 = 0xfffffff5;
                }
                else {
                    iVar8 = piVar5[3];
                    if (iVar8 == 0 && piVar5[0x15] != '\0') {
                        iVar8 = 1;
                    }
                    if ((piVar5[0x15] == '\0') && (iVar8 != 0)) {
                        uStack_68 = 0;
                        uStack_60 = 0;
                        iVar7 = piVar5[3];
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_80 = 0;
                        init_wait_entry(&uStack_80,0);
                        piVar1 = piVar5 + 0x11;
                        iVar8 = prepare_to_wait_event(piVar1,&uStack_80,1);
                        cVar2 = piVar5[0x15];
                        if (iVar7 == 0 && cVar2 != '\0') {
                            iVar7 = 1;
                        }
                        while ((iVar4 = iVar7, cVar2 == '\0' && (iVar4 = 0, iVar7 != 0))) {
                            if (iVar8 != 0) goto code_r0x080014dc;
                            iVar7 = schedule_timeout(iVar7);
                            iVar8 = prepare_to_wait_event(piVar1,&uStack_80,1);
                            cVar2 = piVar5[0x15];
                            if (iVar7 == 0 && cVar2 != '\0') {
                                iVar7 = 1;
                            }
                        }
                        iVar8 = iVar4;
                        finish_wait(piVar1,&uStack_80);
                    }
code_r0x080014dc:
                    if (iVar8 == 0) {
                        _dev_err(*piVar5,"");
                        uVar10 = 0xffffff92;
                    }
                    else {
                        _dev_info(*piVar5,"");
                        if (*unaff_x22 < 0xd) {
                            _dev_err(*piVar5,"");
                            uVar10 = 0xffffffb9;
                        }
                        else {
                            memcpy(arg3,piVar5[0x10] + 0xc,*unaff_x22 - 0xc);
                            uVar10 = 0;
                            *arg4 = *(piVar5 + 0xf) - 0xc;
                            *(piVar5 + 0x15) = 0;
                        }
                    }
                }
                mutex_unlock(unaff_x19);
                goto code_r0x08001390;
            }
            iVar8 = *_segment.ehdr;
            pcVar9 = "";
            arg4 = unaff_x20;
        }
        _dev_err(iVar8,pcVar9);
        uVar10 = 0xffffffea;
    }
code_r0x08001390:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.tmecom_probe;
    pcStack_a8 = sym.tmecom_probe;
    iVar7 = sp_el0;
    iVar8 = iVar4 + 0x10;
    iStack_b8 = *(iVar7 + 0x5e0);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_b0 = &stack0xffffffffffffffb0;
    puStack_a0 = unaff_x22;
    uStack_98 = uVar10;
    iStack_90 = arg4;
    piStack_88 = unaff_x19;
    piVar5 = devm_kmalloc(iVar8,0xb0,0xdc0);
    if (piVar5 != NULL) {
        uVar6 = *(iVar4 + 0x300);
        piVar5[1] = iVar8;
        *(piVar5 + 2) = 1;
        piVar5[3] = 500;
        *(piVar5 + 4) = 0;
        piVar5[5] = sym.tmecom_receive_message.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt;
        iVar7 = of_get_property(uVar6,"",0);
        if (iVar7 == 0) {
            uVar10 = 0xffffffea;
            goto code_r0x080016b4;
        }
        snprintf(&uStack_d8,0x20,"",iVar7);
        uVar10 = mbox_request_channel(piVar5 + 1,0);
        piVar5[8] = uVar10;
        if (0xfffffffffffff000 < uVar10) {
            _dev_err(iVar8,"");
            uVar10 = *(piVar5 + 8);
            goto code_r0x080016b4;
        }
        __mutex_init(piVar5 + 9,"",obj.tmecom_probe.__key);
        if (piVar5[8] != 0) {
            iVar7 = devm_kmalloc(iVar8,0x400,0xdc0);
            piVar5[0x14] = iVar7;
            if (iVar7 == 0) {
                _dev_err(iVar8,"");
                goto code_r0x080016a8;
            }
        }
        __init_waitqueue_head(piVar5 + 0x11,"",obj.tmecom_probe.__key);
        _segment.ehdr = debugfs_create_file(&uStack_d8,0x90,0,piVar5,obj.tmecom_debugfs_ops);
        if (_segment.ehdr != NULL) {
            *(piVar5 + 0x15) = 0;
            *piVar5 = iVar8;
            *(iVar4 + 0xa8) = piVar5;
            _segment.ehdr = piVar5;
            _dev_info(iVar4 + 0x10,"");
            uVar10 = 0;
            goto code_r0x080016b4;
        }
        mbox_free_channel(piVar5[8]);
    }
code_r0x080016a8:
    uVar10 = 0xfffffff4;
code_r0x080016b4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_b8) {
        iVar8 = __stack_chk_fail(uVar10);
        *extraout_x18_00 = sym.tmecom_remove;
        iVar7 = *(iVar8 + 0xa8);
        debugfs_remove(_segment.ehdr);
        if (*(iVar7 + 0x40) != 0) {
            mbox_free_channel();
        }
        _dev_info(iVar8 + 0x10,"");
        return 0;
    }
    return uVar10;
}


// ===== sym.tmecom_probe @ 0x08001568 (size 472) =====

uint sym.tmecom_probe(int64_t arg1)

{
    uint uVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iVar6 = arg1 + 0x10;
    iStack_38 = *(iVar4 + 0x5e0);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    piVar2 = devm_kmalloc(iVar6,0xb0,0xdc0);
    if (piVar2 != NULL) {
        uVar3 = *(arg1 + 0x300);
        piVar2[1] = iVar6;
        *(piVar2 + 2) = 1;
        piVar2[3] = 500;
        *(piVar2 + 4) = 0;
        piVar2[5] = sym.tmecom_receive_message.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt;
        iVar4 = of_get_property(uVar3,"",0);
        if (iVar4 == 0) {
            uVar1 = 0xffffffea;
            goto code_r0x080016b4;
        }
        snprintf(&uStack_58,0x20,"",iVar4);
        uVar5 = mbox_request_channel(piVar2 + 1,0);
        piVar2[8] = uVar5;
        if (0xfffffffffffff000 < uVar5) {
            _dev_err(iVar6,"");
            uVar1 = piVar2[8];
            goto code_r0x080016b4;
        }
        __mutex_init(piVar2 + 9,"",obj.tmecom_probe.__key);
        if (piVar2[8] != 0) {
            iVar4 = devm_kmalloc(iVar6,0x400,0xdc0);
            piVar2[0x14] = iVar4;
            if (iVar4 == 0) {
                _dev_err(iVar6,"");
                goto code_r0x080016a8;
            }
        }
        __init_waitqueue_head(piVar2 + 0x11,"",obj.tmecom_probe.__key);
        _segment.ehdr = debugfs_create_file(&uStack_58,0x90,0,piVar2,obj.tmecom_debugfs_ops);
        if (_segment.ehdr != NULL) {
            *(piVar2 + 0x15) = 0;
            *piVar2 = iVar6;
            *(arg1 + 0xa8) = piVar2;
            _segment.ehdr = piVar2;
            _dev_info(arg1 + 0x10,"");
            uVar1 = 0;
            goto code_r0x080016b4;
        }
        mbox_free_channel(piVar2[8]);
    }
code_r0x080016a8:
    uVar1 = 0xfffffff4;
code_r0x080016b4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_38) {
        return uVar1;
    }
    iVar6 = __stack_chk_fail(uVar1);
    *extraout_x18 = sym.tmecom_remove;
    iVar4 = *(iVar6 + 0xa8);
    debugfs_remove(_segment.ehdr);
    if (*(iVar4 + 0x40) != 0) {
        mbox_free_channel();
    }
    _dev_info(iVar6 + 0x10,"");
    return 0;
}


// ===== sym.tmecom_remove @ 0x08001740 (size 92) =====

ulong sym.tmecom_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    debugfs_remove(_segment.ehdr);
    if (*(iVar1 + 0x40) != 0) {
        mbox_free_channel();
    }
    _dev_info(arg1 + 0x10,"");
    return 0;
}


// ===== sym.tmecom_receive_message @ 0x0800179c (size 144) =====

void sym.tmecom_receive_message(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *in_x18;
    ulong *puVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = *(*arg1 + 0x98);
    if (arg2 == 0) {
        _dev_err(*puVar2,"");
    }
    else if (*(puVar2 + 0x15) == '\0') {
        *(puVar2 + 0xf) = *arg2;
        uVar1 = *(arg2 + 8);
        *(puVar2 + 0x15) = 1;
        puVar2[0x10] = uVar1;
    }
    else {
        _dev_err(*puVar2,"");
    }
    __wake_up(puVar2 + 0x11,1,1,0);
    return;
}


// ===== sym.tmecom_debugfs_write @ 0x0800182c (size 236) =====

uint64_t sym.tmecom_debugfs_write(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_28 = *(iVar2 + 0x5e0);
    uStack_30 = 0;
    if (arg2 - 0x401U < 0xfffffffffffffc00) {
        _printk(0x8000474);
        arg2 = 0xffffffffffffffea;
    }
    else {
        reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt = 0x0;
        __check_object_size(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt,arg2,0);
        iVar6 = sym._copy_from_user(arg1,arg2);
        if (iVar6 == 0) {
            sym.tmecom_process_request(0x8000198,arg2,0x8000198,&uStack_30);
            sym.tme_hwkm_master_broadcast_transportkey(0x8000198);
        }
        else {
            _printk(0x80002bc,"");
        }
    }
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) == iStack_28) {
        return arg2;
    }
    auVar11 = __stack_chk_fail();
    uVar9 = auVar11._8_8_;
    uVar7 = auVar11._0_8_;
    *extraout_x18 = sym._copy_from_user;
    puVar3 = sp_el0;
    uVar4 = (uVar7 << 8) >> 8;
    if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar10 = uVar7, (*puVar3 >> 0x1a & 1) != 0)) {
        uVar10 = uVar7 & uVar4;
    }
    bVar5 = CARRY8(uVar10,uVar9);
    uVar10 = uVar10 + uVar9;
    uVar1 = 0;
    if (!bVar5 || uVar10 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar5) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar8 = uVar9;
    if (!CARRY8(uVar10,~uVar1) && !CARRY8(uVar10 + ~uVar1,bVar5) || uVar10 == uVar1 + !bVar5) {
        if ((_simple_open >> 0x18 & 1) == 0) {
            uVar10 = daif;
            if ((uVar10 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar3[1];
            InstructionSynchronizationBarrier();
            daif = uVar10;
        }
        if ((uVar7 & uVar4 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        uVar8 = __arch_copy_from_user(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt,uVar7,uVar9);
        if ((_simple_open >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    if (uVar8 != 0) {
        memset(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt + (uVar9 - uVar8),0,uVar8);
    }
    return uVar8;
}


// ===== sym._copy_from_user @ 0x08001918 (size 372) =====

int64_t sym._copy_from_user(int64_t arg1,int64_t arg2)

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
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar6 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar6 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar6,arg2);
    uVar6 = uVar6 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar6 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar6 = 0xffffffffffffffff;
    }
    iVar5 = arg2;
    if (!CARRY8(uVar6,~uVar1) && !CARRY8(uVar6 + ~uVar1,bVar4) || uVar6 == uVar1 + !bVar4) {
        if ((_simple_open >> 0x18 & 1) == 0) {
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
        iVar5 = __arch_copy_from_user(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt,arg1,arg2);
        if ((_simple_open >> 0x18 & 1) == 0) {
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
        memset(reloc.tmecom_remove.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt + (arg2 - iVar5),0,iVar5);
    }
    return iVar5;
}


// ===== sym.__cfi_check_fail @ 0x08001ac8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001b0c

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
    //switch table (4 cases) at 0x8000280
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b20);
    (*pcVar1)();
}


// ===== sym.tme_hwkm_master_clearkey @ 0x08001b20 (size 392) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_clearkey(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    uint32_t uVar9;
    int *piVar10;
    ulong *arg1_00;
    int *arg3;
    code *in_x2;
    code *pcVar11;
    code *pcVar12;
    uint uVar13;
    code *in_x3;
    code *pcVar14;
    code *pcVar15;
    code *in_x4;
    ulong uVar16;
    ulong uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    ulong *extraout_x18_04;
    code *unaff_x19;
    code *pcVar18;
    code *unaff_x20;
    code *unaff_x21;
    code *pcVar19;
    code *unaff_x22;
    code *pcVar20;
    code *pcVar21;
    code *pcVar22;
    code *unaff_x24;
    code *pcVar23;
    code *pcVar24;
    code *pcVar25;
    code *pcVar26;
    code *unaff_x26;
    ulong unaff_x30;
    uchar auVar27 [16];
    int64_t iStack_270;
    int64_t iStack_268;
    ulong ***pppuStack_260;
    code *pcStack_258;
    code *pcStack_250;
    code *pcStack_240;
    code *pcStack_238;
    code *pcStack_230;
    code *pcStack_228;
    int64_t iStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    code *pcStack_1f8;
    code *pcStack_1f0;
    code *pcStack_1e8;
    code *pcStack_1e0;
    code *pcStack_1d8;
    code *pcStack_1d0;
    code *pcStack_1c8;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    code *pcStack_190;
    code *pcStack_188;
    code *pcStack_180;
    code *pcStack_178;
    code *pcStack_170;
    code *pcStack_168;
    int64_t iStack_160;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    code *pcStack_140;
    code *pcStack_138;
    code *pcStack_130;
    code *pcStack_128;
    code *pcStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_50;
    int64_t iStack_48;
    
    pcVar11 = &iStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0x14;
    if (arg2 == 0) {
        pcVar21 = 0xffffffea;
    }
    else {
        unaff_x24 = kmalloc_caches;
        unaff_x22 = arg1 & 0xffffffff;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0xc);
        in_x2 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar21 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = arg1;
            *unaff_x20 = 0x482f01d9;
            in_x2 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0xc,unaff_x21,&iStack_50);
            if (uVar9 == 0) {
                if (iStack_50 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *arg2 = iVar2;
                    *(arg2 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(arg2 + 8) = iVar3;
                    *(arg2 + 0xc) = iVar5;
                    pcVar21 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(arg2 + 0x10) = uVar13;
                    in_x3 = pcVar11;
                }
                else {
                    in_x2 = 0x8;
                    _printk(0x80004d0);
                    pcVar21 = 0xffffffb6;
                    in_x3 = pcVar11;
                }
            }
            else {
                pcVar21 = uVar9;
                _printk(0x800037d,arg1 & 0xffffffff);
                in_x3 = pcVar11;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        unaff_x19 = arg2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return pcVar21;
    }
    auVar27 = __stack_chk_fail();
    pcVar12 = auVar27._8_8_;
    pcVar23 = &iStack_b0;
    *extraout_x18 = sym.tme_hwkm_master_generatekey;
    pcStack_98 = sym.tme_hwkm_master_generatekey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    pcVar24 = 0xffffffea;
    iStack_b0 = 0x14;
    pcVar11 = in_x2;
    pcVar22 = in_x3;
    pcStack_b8 = unaff_x19;
    pcStack_e0 = unaff_x24;
    puStack_a0 = &stack0xffffffffffffffc0;
    if ((pcVar12 != NULL) && (pcStack_b8 = in_x3, in_x3 != NULL)) {
        unaff_x26 = kmalloc_caches;
        unaff_x22 = auVar27._0_8_ & 0xffffffff;
        pcVar21 = in_x2 & 0xffffffff;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
        pcVar11 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar24 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar16 = *pcVar12;
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0x14) = in_x2;
            *unaff_x20 = 0x1542f01d9;
            *(unaff_x20 + 0xc) = uVar16;
            pcVar11 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x18,unaff_x21,&iStack_b0);
            if (uVar9 == 0) {
                if (iStack_b0 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *in_x3 = iVar2;
                    *(in_x3 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(in_x3 + 8) = iVar3;
                    *(in_x3 + 0xc) = iVar5;
                    pcVar24 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(in_x3 + 0x10) = uVar13;
                    pcVar22 = pcVar23;
                }
                else {
                    pcVar11 = 0x8;
                    _printk(0x80004d0);
                    pcVar24 = 0xffffffb6;
                    pcVar22 = pcVar23;
                }
            }
            else {
                pcVar24 = uVar9;
                _printk(0x8000593,auVar27._0_8_ & 0xffffffff);
                pcVar22 = pcVar23;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_e0 = pcVar12;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return pcVar24;
    }
    auVar27 = __stack_chk_fail();
    pcVar15 = auVar27._8_8_;
    pcVar19 = &iStack_110;
    *extraout_x18_00 = sym.tme_hwkm_master_derivekey;
    pcStack_f8 = sym.tme_hwkm_master_derivekey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar25 = 0xffffffea;
    iStack_110 = 0x14;
    pcVar12 = pcVar11;
    pcVar14 = pcVar22;
    pcVar18 = pcStack_b8;
    pcVar20 = unaff_x22;
    pcStack_138 = pcVar21;
    pcVar23 = pcStack_e0;
    ppuStack_100 = &puStack_a0;
    pcStack_f0 = pcVar24;
    pcStack_d8 = pcVar21;
    pcStack_d0 = unaff_x22;
    pcStack_c8 = unaff_x21;
    pcStack_c0 = unaff_x20;
    if ((pcVar15 != NULL) && (pcVar18 = pcVar22, pcVar22 != NULL)) {
        pcVar23 = pcVar11 & 0xffffffff;
        pcVar20 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090b4,0xdc0,0xf8);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar25 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xf4) = pcVar11;
            *unaff_x20 = 0x2582f01d9;
            memcpy(unaff_x20 + 0xc,pcVar15,0xe8);
            pcVar12 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0xf8,unaff_x21,&iStack_110);
            if (uVar9 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *pcVar22 = iVar2;
                    *(pcVar22 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(pcVar22 + 8) = iVar3;
                    *(pcVar22 + 0xc) = iVar5;
                    pcVar25 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar22 + 0x10) = uVar13;
                    pcVar14 = pcVar19;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar25 = 0xffffffb6;
                    pcVar14 = pcVar19;
                }
            }
            else {
                pcVar25 = uVar9;
                _printk(0x80002e0,auVar27._0_8_ & 0xffffffff);
                pcVar14 = pcVar19;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_138 = pcVar15;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar25;
    }
    auVar27 = __stack_chk_fail();
    pcVar24 = &iStack_160;
    *extraout_x18_01 = sym.tme_hwkm_master_wrapkey;
    pcStack_148 = sym.tme_hwkm_master_wrapkey;
    iVar1 = sp_el0;
    iStack_158 = *(iVar1 + 0x5e0);
    pcVar19 = 0xffffffea;
    iStack_160 = 0x7c;
    pcVar11 = pcVar14;
    pcVar21 = in_x4;
    pcStack_180 = pcVar20;
    pcVar22 = pcStack_138;
    pppuStack_150 = &ppuStack_100;
    pcStack_140 = pcVar23;
    pcStack_130 = pcVar20;
    pcStack_128 = unaff_x21;
    pcStack_120 = unaff_x20;
    pcStack_118 = pcVar18;
    if ((pcVar14 != NULL) && (pcStack_180 = in_x4, in_x4 != NULL)) {
        pcVar22 = auVar27._0_8_ & 0xffffffff;
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = pcVar14;
        if (pcVar20 == NULL) {
            pcVar19 = 0xfffffff4;
        }
        else {
            *(pcVar20 + 8) = auVar27._0_4_;
            *(pcVar20 + 0xc) = auVar27._8_4_;
            pcVar23 = obj.tmecom_probe.__key;
            *pcVar20 = 0x3502f01d9;
            pcVar12 = pcVar23;
            uVar9 = sym.tmecom_process_request(pcVar20,0x14,0x80005a8,&iStack_160);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar9 == 0) {
                if (iStack_160 == 0x7c) {
                    pcVar19 = 0x1;
                    *in_x4 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    *(in_x4 + 4) = *0x80005ac;
                    iVar4 = *0x80005b0;
                    *(in_x4 + 8) = *0x80005b0;
                    iVar5 = *0x80005b4;
                    *(in_x4 + 0xc) = *0x80005b4;
                    *(in_x4 + 0x10) = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        pcVar19 = NULL;
                        *pcVar14 = *0x80005bc;
                        *(pcVar14 + 0x18) = *0x80005d4;
                        *(pcVar14 + 0x20) = *0x80005dc;
                        *(pcVar14 + 8) = *0x80005c4;
                        *(pcVar14 + 0x10) = *0x80005cc;
                        *(pcVar14 + 0x38) = *0x80005f4;
                        *(pcVar14 + 0x40) = *0x80005fc;
                        *(pcVar14 + 0x28) = *0x80005e4;
                        *(pcVar14 + 0x30) = *0x80005ec;
                        *(pcVar14 + 0x58) = *0x8000614;
                        *(pcVar14 + 0x60) = *0x800061c;
                        *(pcVar14 + 0x48) = *0x8000604;
                        *(pcVar14 + 0x50) = *0x800060c;
                    }
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar19 = 0xffffffb6;
                }
            }
            else {
                pcVar19 = uVar9;
                _printk(0x800048e,auVar27._0_8_ & 0xffffffff);
            }
            kfree(pcVar20);
            pcVar11 = pcVar24;
            pcVar18 = pcVar20;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_158) {
        return pcVar19;
    }
    auVar27 = __stack_chk_fail();
    pcVar15 = &iStack_1c0;
    *extraout_x18_02 = sym.tme_hwkm_master_unwrapkey;
    pcStack_1a8 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_1b8 = *(iVar1 + 0x5e0);
    pcVar26 = 0xffffffea;
    iStack_1c0 = 0x14;
    pcVar24 = pcVar11;
    pcVar14 = pcVar21;
    pcStack_1c8 = pcVar18;
    pcVar20 = pcStack_180;
    pcStack_1e8 = pcVar22;
    pppuStack_1b0 = &pppuStack_150;
    pcStack_1a0 = pcVar25;
    pcStack_190 = pcVar23;
    pcStack_188 = pcVar22;
    pcStack_178 = pcVar19;
    pcStack_170 = unaff_x20;
    pcStack_168 = pcVar18;
    if ((pcVar11 != NULL) && (pcStack_1c8 = pcVar21, pcVar21 != NULL)) {
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar20 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar19 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar26 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar19 != NULL)) {
            uVar16 = *(pcVar11 + 0x50);
            uVar6 = *(pcVar11 + 0x58);
            *(unaff_x20 + 0x70) = *(pcVar11 + 0x60);
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xc) = auVar27._8_4_;
            *unaff_x20 = 0x4582f01d9;
            *(unaff_x20 + 0x60) = uVar16;
            *(unaff_x20 + 0x68) = uVar6;
            uVar6 = *(pcVar11 + 0x38);
            uVar16 = *(pcVar11 + 0x40);
            uVar7 = *(pcVar11 + 0x48);
            *(unaff_x20 + 0x40) = *(pcVar11 + 0x30);
            *(unaff_x20 + 0x48) = uVar6;
            uVar6 = *(pcVar11 + 0x10);
            uVar17 = *(pcVar11 + 0x18);
            *(unaff_x20 + 0x50) = uVar16;
            *(unaff_x20 + 0x58) = uVar7;
            uVar16 = *(pcVar11 + 0x20);
            uVar7 = *(pcVar11 + 0x28);
            *(unaff_x20 + 0x20) = uVar6;
            *(unaff_x20 + 0x28) = uVar17;
            uVar6 = *pcVar11;
            uVar17 = *(pcVar11 + 8);
            *(unaff_x20 + 0x30) = uVar16;
            *(unaff_x20 + 0x38) = uVar7;
            *(unaff_x20 + 0x10) = uVar6;
            *(unaff_x20 + 0x18) = uVar17;
            pcVar12 = pcVar19;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x7c,pcVar19,&iStack_1c0);
            if (uVar9 == 0) {
                if (iStack_1c0 == 0x14) {
                    iVar2 = *pcVar19;
                    iVar4 = *(pcVar19 + 4);
                    iVar3 = *(pcVar19 + 8);
                    iVar5 = *(pcVar19 + 0xc);
                    *pcVar21 = iVar2;
                    *(pcVar21 + 4) = iVar4;
                    uVar13 = *(pcVar19 + 0x10);
                    *(pcVar21 + 8) = iVar3;
                    *(pcVar21 + 0xc) = iVar5;
                    pcVar26 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar21 + 0x10) = uVar13;
                    pcVar24 = pcVar15;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar26 = 0xffffffb6;
                    pcVar24 = pcVar15;
                }
            }
            else {
                pcVar26 = uVar9;
                _printk(0x8000420,auVar27._0_8_ & 0xffffffff);
                pcVar24 = pcVar15;
            }
        }
        kfree(unaff_x20);
        kfree(pcVar19);
        pcStack_1e8 = pcVar11;
    }
    uVar13 = SUB84(pcVar24,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1b8) {
        return pcVar26;
    }
    auVar27 = __stack_chk_fail();
    *extraout_x18_03 = sym.tme_hwkm_master_importkey;
    pcStack_208 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_218 = *(iVar1 + 0x5e0);
    pcVar11 = 0xffffffea;
    iStack_220 = 0x14;
    pcStack_228 = pcStack_1c8;
    pcStack_250 = pcStack_1e8;
    pppuStack_210 = &pppuStack_1b0;
    pcStack_200 = unaff_x26;
    pcStack_1f8 = pcVar26;
    pcStack_1f0 = pcVar23;
    pcStack_1e0 = pcVar20;
    pcStack_1d8 = pcVar19;
    pcStack_1d0 = unaff_x20;
    if (((auVar27._8_8_ != NULL) && (pcStack_250 = pcVar12, pcVar12 != NULL)) &&
       (pcStack_228 = pcVar14, pcVar14 != NULL)) {
        pcVar20 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar19 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar19 != NULL)) {
            uVar16 = *(pcVar12 + 0x28);
            uVar6 = *(pcVar12 + 0x30);
            *(unaff_x20 + 0xc) = *auVar27._8_8_;
            *(unaff_x20 + 0x5c) = uVar13;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar16;
            uVar16 = *(pcVar12 + 0x38);
            uVar7 = *(pcVar12 + 0x40);
            *(unaff_x20 + 0x44) = uVar6;
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0x4c) = uVar16;
            uVar16 = *(pcVar12 + 8);
            uVar6 = *(pcVar12 + 0x10);
            *(unaff_x20 + 0x54) = uVar7;
            uVar17 = *pcVar12;
            *(unaff_x20 + 0x1c) = uVar16;
            uVar16 = *(pcVar12 + 0x18);
            uVar7 = *(pcVar12 + 0x20);
            *(unaff_x20 + 0x24) = uVar6;
            *(unaff_x20 + 0x14) = uVar17;
            *(unaff_x20 + 0x2c) = uVar16;
            *(unaff_x20 + 0x34) = uVar7;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x60,pcVar19,&iStack_220);
            if (uVar9 == 0) {
                if (iStack_220 == 0x14) {
                    iVar2 = *pcVar19;
                    iVar4 = *(pcVar19 + 4);
                    iVar3 = *(pcVar19 + 8);
                    iVar5 = *(pcVar19 + 0xc);
                    *pcVar14 = iVar2;
                    *(pcVar14 + 4) = iVar4;
                    uVar13 = *(pcVar19 + 0x10);
                    *(pcVar14 + 8) = iVar3;
                    *(pcVar14 + 0xc) = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar14 + 0x10) = uVar13;
                }
                else {
                    _printk(0x80004d0,iStack_220,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x8000309,auVar27._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(pcVar19);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_218) {
        return pcVar11;
    }
    piVar10 = __stack_chk_fail();
    *extraout_x18_04 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_258 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_268 = *(iVar1 + 0x5e0);
    iStack_270 = 0x14;
    pppuStack_260 = &pppuStack_210;
    pcStack_240 = pcVar20;
    pcStack_238 = pcVar19;
    pcStack_230 = unaff_x20;
    if (piVar10 == NULL) {
        pcVar11 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((arg1_00 != NULL) && (arg3 != NULL)) {
            *arg1_00 = 0x6442f01d9;
            uVar9 = sym.tmecom_process_request(arg1_00,8,arg3,&iStack_270);
            if (uVar9 == 0) {
                if (iStack_270 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = arg3[1];
                    iVar3 = arg3[2];
                    iVar5 = arg3[3];
                    *piVar10 = iVar2;
                    piVar10[1] = iVar4;
                    iVar8 = arg3[4];
                    piVar10[2] = iVar3;
                    piVar10[3] = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar10[4] = iVar8;
                }
                else {
                    _printk(0x80004d0,iStack_270,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x800054a);
            }
        }
        kfree(arg1_00);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_268) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_generatekey @ 0x08001ca8 (size 424) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_generatekey(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    int iVar8;
    uint32_t uVar9;
    int *piVar10;
    ulong *arg1_00;
    int *arg3_00;
    code *pcVar11;
    code *pcVar12;
    uint uVar13;
    code *pcVar14;
    code *pcVar15;
    code *pcVar16;
    code *in_x4;
    ulong uVar17;
    ulong uVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong *extraout_x18_03;
    code *unaff_x19;
    code *pcVar19;
    code *unaff_x20;
    code *unaff_x21;
    code *pcVar20;
    code *unaff_x22;
    code *pcVar21;
    code *pcVar22;
    code *unaff_x23;
    code *unaff_x24;
    code *pcVar23;
    code *pcVar24;
    code *pcVar25;
    code *pcVar26;
    code *unaff_x26;
    ulong unaff_x30;
    uchar auVar27 [16];
    int64_t iStack_220;
    int64_t iStack_218;
    ulong ***pppuStack_210;
    code *pcStack_208;
    code *pcStack_200;
    code *pcStack_1f0;
    code *pcStack_1e8;
    code *pcStack_1e0;
    code *pcStack_1d8;
    int64_t iStack_1d0;
    int64_t iStack_1c8;
    ulong ***pppuStack_1c0;
    code *pcStack_1b8;
    code *pcStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    code *pcStack_198;
    code *pcStack_190;
    code *pcStack_188;
    code *pcStack_180;
    code *pcStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar ***pppuStack_160;
    code *pcStack_158;
    code *pcStack_150;
    code *pcStack_140;
    code *pcStack_138;
    code *pcStack_130;
    code *pcStack_128;
    code *pcStack_120;
    code *pcStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e8;
    code *pcStack_e0;
    code *pcStack_d8;
    code *pcStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    code *pcStack_90;
    code *pcStack_88;
    code *pcStack_80;
    code *pcStack_78;
    code *pcStack_70;
    code *pcStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    pcVar23 = &iStack_60;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    pcVar24 = 0xffffffea;
    iStack_60 = 0x14;
    pcVar11 = arg3;
    pcVar14 = arg4;
    pcStack_68 = unaff_x19;
    pcStack_90 = unaff_x24;
    if ((arg2 != 0) && (pcStack_68 = arg4, arg4 != 0)) {
        unaff_x26 = kmalloc_caches;
        unaff_x22 = arg1 & 0xffffffff;
        unaff_x23 = arg3 & 0xffffffff;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x18);
        pcVar11 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar24 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar17 = *arg2;
            *(unaff_x20 + 8) = arg1;
            *(unaff_x20 + 0x14) = arg3;
            *unaff_x20 = 0x1542f01d9;
            *(unaff_x20 + 0xc) = uVar17;
            pcVar11 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x18,unaff_x21,&iStack_60);
            if (uVar9 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *arg4 = iVar2;
                    *(arg4 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(arg4 + 8) = iVar3;
                    *(arg4 + 0xc) = iVar5;
                    pcVar24 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(arg4 + 0x10) = uVar13;
                    pcVar14 = pcVar23;
                }
                else {
                    pcVar11 = 0x8;
                    _printk(0x80004d0);
                    pcVar24 = 0xffffffb6;
                    pcVar14 = pcVar23;
                }
            }
            else {
                pcVar24 = uVar9;
                _printk(0x8000593,arg1 & 0xffffffff);
                pcVar14 = pcVar23;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_90 = arg2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return pcVar24;
    }
    auVar27 = __stack_chk_fail();
    pcVar20 = auVar27._8_8_;
    pcVar22 = &iStack_c0;
    *extraout_x18 = sym.tme_hwkm_master_derivekey;
    pcStack_a8 = sym.tme_hwkm_master_derivekey;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    pcVar25 = 0xffffffea;
    iStack_c0 = 0x14;
    pcVar12 = pcVar11;
    pcVar15 = pcVar14;
    pcVar19 = pcStack_68;
    pcVar21 = unaff_x22;
    pcStack_e8 = unaff_x23;
    pcVar23 = pcStack_90;
    puStack_b0 = &stack0xffffffffffffffb0;
    pcStack_a0 = pcVar24;
    pcStack_88 = unaff_x23;
    pcStack_80 = unaff_x22;
    pcStack_78 = unaff_x21;
    pcStack_70 = unaff_x20;
    if ((pcVar20 != NULL) && (pcVar19 = pcVar14, pcVar14 != NULL)) {
        pcVar23 = pcVar11 & 0xffffffff;
        pcVar21 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090b4,0xdc0,0xf8);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar25 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xf4) = pcVar11;
            *unaff_x20 = 0x2582f01d9;
            memcpy(unaff_x20 + 0xc,pcVar20,0xe8);
            pcVar12 = unaff_x21;
            uVar9 = sym.tmecom_process_request(unaff_x20,0xf8,unaff_x21,&iStack_c0);
            if (uVar9 == 0) {
                if (iStack_c0 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *pcVar14 = iVar2;
                    *(pcVar14 + 4) = iVar4;
                    uVar13 = *(unaff_x21 + 0x10);
                    *(pcVar14 + 8) = iVar3;
                    *(pcVar14 + 0xc) = iVar5;
                    pcVar25 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar14 + 0x10) = uVar13;
                    pcVar15 = pcVar22;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar25 = 0xffffffb6;
                    pcVar15 = pcVar22;
                }
            }
            else {
                pcVar25 = uVar9;
                _printk(0x80002e0,auVar27._0_8_ & 0xffffffff);
                pcVar15 = pcVar22;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_e8 = pcVar20;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return pcVar25;
    }
    auVar27 = __stack_chk_fail();
    pcVar22 = &iStack_110;
    *extraout_x18_00 = sym.tme_hwkm_master_wrapkey;
    pcStack_f8 = sym.tme_hwkm_master_wrapkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar20 = 0xffffffea;
    iStack_110 = 0x7c;
    pcVar11 = pcVar15;
    pcVar14 = in_x4;
    pcStack_130 = pcVar21;
    pcVar24 = pcStack_e8;
    ppuStack_100 = &puStack_b0;
    pcStack_f0 = pcVar23;
    pcStack_e0 = pcVar21;
    pcStack_d8 = unaff_x21;
    pcStack_d0 = unaff_x20;
    pcStack_c8 = pcVar19;
    if ((pcVar15 != NULL) && (pcStack_130 = in_x4, in_x4 != NULL)) {
        pcVar24 = auVar27._0_8_ & 0xffffffff;
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = pcVar15;
        if (pcVar21 == NULL) {
            pcVar20 = 0xfffffff4;
        }
        else {
            *(pcVar21 + 8) = auVar27._0_4_;
            *(pcVar21 + 0xc) = auVar27._8_4_;
            pcVar23 = obj.tmecom_probe.__key;
            *pcVar21 = 0x3502f01d9;
            pcVar12 = pcVar23;
            uVar9 = sym.tmecom_process_request(pcVar21,0x14,0x80005a8,&iStack_110);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar9 == 0) {
                if (iStack_110 == 0x7c) {
                    pcVar20 = 0x1;
                    *in_x4 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    *(in_x4 + 4) = *0x80005ac;
                    iVar4 = *0x80005b0;
                    *(in_x4 + 8) = *0x80005b0;
                    iVar5 = *0x80005b4;
                    *(in_x4 + 0xc) = *0x80005b4;
                    *(in_x4 + 0x10) = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        pcVar20 = NULL;
                        *pcVar15 = *0x80005bc;
                        *(pcVar15 + 0x18) = *0x80005d4;
                        *(pcVar15 + 0x20) = *0x80005dc;
                        *(pcVar15 + 8) = *0x80005c4;
                        *(pcVar15 + 0x10) = *0x80005cc;
                        *(pcVar15 + 0x38) = *0x80005f4;
                        *(pcVar15 + 0x40) = *0x80005fc;
                        *(pcVar15 + 0x28) = *0x80005e4;
                        *(pcVar15 + 0x30) = *0x80005ec;
                        *(pcVar15 + 0x58) = *0x8000614;
                        *(pcVar15 + 0x60) = *0x800061c;
                        *(pcVar15 + 0x48) = *0x8000604;
                        *(pcVar15 + 0x50) = *0x800060c;
                    }
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar20 = 0xffffffb6;
                }
            }
            else {
                pcVar20 = uVar9;
                _printk(0x800048e,auVar27._0_8_ & 0xffffffff);
            }
            kfree(pcVar21);
            pcVar11 = pcVar22;
            pcVar19 = pcVar21;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar20;
    }
    auVar27 = __stack_chk_fail();
    pcVar16 = &iStack_170;
    *extraout_x18_01 = sym.tme_hwkm_master_unwrapkey;
    pcStack_158 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_168 = *(iVar1 + 0x5e0);
    pcVar26 = 0xffffffea;
    iStack_170 = 0x14;
    pcVar15 = pcVar11;
    pcVar21 = pcVar14;
    pcStack_178 = pcVar19;
    pcVar22 = pcStack_130;
    pcStack_198 = pcVar24;
    pppuStack_160 = &ppuStack_100;
    pcStack_150 = pcVar25;
    pcStack_140 = pcVar23;
    pcStack_138 = pcVar24;
    pcStack_128 = pcVar20;
    pcStack_120 = unaff_x20;
    pcStack_118 = pcVar19;
    if ((pcVar11 != NULL) && (pcStack_178 = pcVar14, pcVar14 != NULL)) {
        pcVar23 = auVar27._8_8_ & 0xffffffff;
        pcVar22 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        pcVar12 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar26 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar20 != NULL)) {
            uVar17 = *(pcVar11 + 0x50);
            uVar6 = *(pcVar11 + 0x58);
            *(unaff_x20 + 0x70) = *(pcVar11 + 0x60);
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0xc) = auVar27._8_4_;
            *unaff_x20 = 0x4582f01d9;
            *(unaff_x20 + 0x60) = uVar17;
            *(unaff_x20 + 0x68) = uVar6;
            uVar6 = *(pcVar11 + 0x38);
            uVar17 = *(pcVar11 + 0x40);
            uVar7 = *(pcVar11 + 0x48);
            *(unaff_x20 + 0x40) = *(pcVar11 + 0x30);
            *(unaff_x20 + 0x48) = uVar6;
            uVar6 = *(pcVar11 + 0x10);
            uVar18 = *(pcVar11 + 0x18);
            *(unaff_x20 + 0x50) = uVar17;
            *(unaff_x20 + 0x58) = uVar7;
            uVar17 = *(pcVar11 + 0x20);
            uVar7 = *(pcVar11 + 0x28);
            *(unaff_x20 + 0x20) = uVar6;
            *(unaff_x20 + 0x28) = uVar18;
            uVar6 = *pcVar11;
            uVar18 = *(pcVar11 + 8);
            *(unaff_x20 + 0x30) = uVar17;
            *(unaff_x20 + 0x38) = uVar7;
            *(unaff_x20 + 0x10) = uVar6;
            *(unaff_x20 + 0x18) = uVar18;
            pcVar12 = pcVar20;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x7c,pcVar20,&iStack_170);
            if (uVar9 == 0) {
                if (iStack_170 == 0x14) {
                    iVar2 = *pcVar20;
                    iVar4 = *(pcVar20 + 4);
                    iVar3 = *(pcVar20 + 8);
                    iVar5 = *(pcVar20 + 0xc);
                    *pcVar14 = iVar2;
                    *(pcVar14 + 4) = iVar4;
                    uVar13 = *(pcVar20 + 0x10);
                    *(pcVar14 + 8) = iVar3;
                    *(pcVar14 + 0xc) = iVar5;
                    pcVar26 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar14 + 0x10) = uVar13;
                    pcVar15 = pcVar16;
                }
                else {
                    pcVar12 = 0x8;
                    _printk(0x80004d0);
                    pcVar26 = 0xffffffb6;
                    pcVar15 = pcVar16;
                }
            }
            else {
                pcVar26 = uVar9;
                _printk(0x8000420,auVar27._0_8_ & 0xffffffff);
                pcVar15 = pcVar16;
            }
        }
        kfree(unaff_x20);
        kfree(pcVar20);
        pcStack_198 = pcVar11;
    }
    uVar13 = SUB84(pcVar15,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_168) {
        return pcVar26;
    }
    auVar27 = __stack_chk_fail();
    *extraout_x18_02 = sym.tme_hwkm_master_importkey;
    pcStack_1b8 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_1c8 = *(iVar1 + 0x5e0);
    pcVar11 = 0xffffffea;
    iStack_1d0 = 0x14;
    pcStack_1d8 = pcStack_178;
    pcStack_200 = pcStack_198;
    pppuStack_1c0 = &pppuStack_160;
    pcStack_1b0 = unaff_x26;
    pcStack_1a8 = pcVar26;
    pcStack_1a0 = pcVar23;
    pcStack_190 = pcVar22;
    pcStack_188 = pcVar20;
    pcStack_180 = unaff_x20;
    if (((auVar27._8_8_ != NULL) && (pcStack_200 = pcVar12, pcVar12 != NULL)) &&
       (pcStack_1d8 = pcVar21, pcVar21 != NULL)) {
        pcVar22 = auVar27._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (pcVar20 != NULL)) {
            uVar17 = *(pcVar12 + 0x28);
            uVar6 = *(pcVar12 + 0x30);
            *(unaff_x20 + 0xc) = *auVar27._8_8_;
            *(unaff_x20 + 0x5c) = uVar13;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar17;
            uVar17 = *(pcVar12 + 0x38);
            uVar7 = *(pcVar12 + 0x40);
            *(unaff_x20 + 0x44) = uVar6;
            *(unaff_x20 + 8) = auVar27._0_4_;
            *(unaff_x20 + 0x4c) = uVar17;
            uVar17 = *(pcVar12 + 8);
            uVar6 = *(pcVar12 + 0x10);
            *(unaff_x20 + 0x54) = uVar7;
            uVar18 = *pcVar12;
            *(unaff_x20 + 0x1c) = uVar17;
            uVar17 = *(pcVar12 + 0x18);
            uVar7 = *(pcVar12 + 0x20);
            *(unaff_x20 + 0x24) = uVar6;
            *(unaff_x20 + 0x14) = uVar18;
            *(unaff_x20 + 0x2c) = uVar17;
            *(unaff_x20 + 0x34) = uVar7;
            uVar9 = sym.tmecom_process_request(unaff_x20,0x60,pcVar20,&iStack_1d0);
            if (uVar9 == 0) {
                if (iStack_1d0 == 0x14) {
                    iVar2 = *pcVar20;
                    iVar4 = *(pcVar20 + 4);
                    iVar3 = *(pcVar20 + 8);
                    iVar5 = *(pcVar20 + 0xc);
                    *pcVar21 = iVar2;
                    *(pcVar21 + 4) = iVar4;
                    uVar13 = *(pcVar20 + 0x10);
                    *(pcVar21 + 8) = iVar3;
                    *(pcVar21 + 0xc) = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(pcVar21 + 0x10) = uVar13;
                }
                else {
                    _printk(0x80004d0,iStack_1d0,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x8000309,auVar27._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(pcVar20);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1c8) {
        return pcVar11;
    }
    piVar10 = __stack_chk_fail();
    *extraout_x18_03 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_208 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_218 = *(iVar1 + 0x5e0);
    iStack_220 = 0x14;
    pppuStack_210 = &pppuStack_1c0;
    pcStack_1f0 = pcVar22;
    pcStack_1e8 = pcVar20;
    pcStack_1e0 = unaff_x20;
    if (piVar10 == NULL) {
        pcVar11 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar11 = 0xfffffff4;
        if ((arg1_00 != NULL) && (arg3_00 != NULL)) {
            *arg1_00 = 0x6442f01d9;
            uVar9 = sym.tmecom_process_request(arg1_00,8,arg3_00,&iStack_220);
            if (uVar9 == 0) {
                if (iStack_220 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = arg3_00[1];
                    iVar3 = arg3_00[2];
                    iVar5 = arg3_00[3];
                    *piVar10 = iVar2;
                    piVar10[1] = iVar4;
                    iVar8 = arg3_00[4];
                    piVar10[2] = iVar3;
                    piVar10[3] = iVar5;
                    pcVar11 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar10[4] = iVar8;
                }
                else {
                    _printk(0x80004d0,iStack_220,8);
                    pcVar11 = 0xffffffb6;
                }
            }
            else {
                pcVar11 = uVar9;
                _printk(0x800054a);
            }
        }
        kfree(arg1_00);
        kfree(arg3_00);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_218) {
        return pcVar11;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_derivekey @ 0x08001e50 (size 420) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_derivekey(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    int *piVar11;
    int *piVar12;
    ulong *arg1_00;
    code *pcVar13;
    uint uVar14;
    code *pcVar15;
    code *pcVar16;
    int *in_x4;
    ulong uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    int *unaff_x19;
    code *unaff_x20;
    code *unaff_x21;
    code *arg3_00;
    int *unaff_x22;
    int *piVar18;
    code *unaff_x23;
    code *pcVar19;
    code *unaff_x24;
    code *pcVar20;
    code *pcVar21;
    code *pcVar22;
    code *pcVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uchar auVar25 [12];
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    ulong ***pppuStack_1b0;
    code *pcStack_1a8;
    code *pcStack_1a0;
    int *piStack_190;
    code *pcStack_188;
    code *pcStack_180;
    int *piStack_178;
    int64_t iStack_170;
    int64_t iStack_168;
    uchar ***pppuStack_160;
    code *pcStack_158;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    code *pcStack_f0;
    code *pcStack_e0;
    code *pcStack_d8;
    int *piStack_d0;
    code *pcStack_c8;
    code *pcStack_c0;
    int *piStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    code *pcStack_90;
    code *pcStack_88;
    int *piStack_80;
    code *pcStack_78;
    code *pcStack_70;
    int *piStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    
    pcVar20 = &iStack_60;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    pcVar21 = 0xffffffea;
    iStack_60 = 0x14;
    pcVar13 = arg3;
    pcVar23 = arg4;
    pcStack_88 = unaff_x23;
    if ((arg2 != 0) && (unaff_x19 = arg4, arg4 != 0)) {
        unaff_x24 = arg3 & 0xffffffff;
        unaff_x22 = arg1 & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090b4,0xdc0,0xf8);
        pcVar13 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar21 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            *(unaff_x20 + 8) = arg1;
            *(unaff_x20 + 0xf4) = arg3;
            *unaff_x20 = 0x2582f01d9;
            memcpy(unaff_x20 + 0xc,arg2,0xe8);
            pcVar13 = unaff_x21;
            uVar10 = sym.tmecom_process_request(unaff_x20,0xf8,unaff_x21,&iStack_60);
            if (uVar10 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = *(unaff_x21 + 4);
                    iVar3 = *(unaff_x21 + 8);
                    iVar5 = *(unaff_x21 + 0xc);
                    *arg4 = iVar2;
                    *(arg4 + 4) = iVar4;
                    uVar14 = *(unaff_x21 + 0x10);
                    *(arg4 + 8) = iVar3;
                    *(arg4 + 0xc) = iVar5;
                    pcVar21 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(arg4 + 0x10) = uVar14;
                    pcVar23 = pcVar20;
                }
                else {
                    pcVar13 = 0x8;
                    _printk(0x80004d0);
                    pcVar21 = 0xffffffb6;
                    pcVar23 = pcVar20;
                }
            }
            else {
                pcVar21 = uVar10;
                _printk(0x80002e0,arg1 & 0xffffffff);
                pcVar23 = pcVar20;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        pcStack_88 = arg2;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return pcVar21;
    }
    auVar24 = __stack_chk_fail();
    pcVar16 = &iStack_b0;
    *extraout_x18 = sym.tme_hwkm_master_wrapkey;
    pcStack_98 = sym.tme_hwkm_master_wrapkey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    arg3_00 = 0xffffffea;
    iStack_b0 = 0x7c;
    pcVar15 = pcVar23;
    piVar12 = in_x4;
    piStack_d0 = unaff_x22;
    pcVar19 = pcStack_88;
    pcVar20 = unaff_x24;
    puStack_a0 = &stack0xffffffffffffffb0;
    pcStack_90 = unaff_x24;
    piStack_80 = unaff_x22;
    pcStack_78 = unaff_x21;
    pcStack_70 = unaff_x20;
    piStack_68 = unaff_x19;
    if ((pcVar23 != NULL) && (piStack_d0 = in_x4, in_x4 != NULL)) {
        pcVar19 = auVar24._0_8_ & 0xffffffff;
        pcVar20 = auVar24._8_8_ & 0xffffffff;
        pcVar13 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = pcVar23;
        if (piVar11 == NULL) {
            arg3_00 = 0xfffffff4;
        }
        else {
            piVar11[2] = auVar24._0_4_;
            piVar11[3] = auVar24._8_4_;
            pcVar20 = obj.tmecom_probe.__key;
            piVar11[0] = 0x502f01d9;
            piVar11[1] = 3;
            pcVar13 = pcVar20;
            uVar10 = sym.tmecom_process_request(piVar11,0x14,0x80005a8,&iStack_b0);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar10 == 0) {
                if (iStack_b0 == 0x7c) {
                    arg3_00 = 0x1;
                    *in_x4 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    in_x4[1] = *0x80005ac;
                    iVar4 = *0x80005b0;
                    in_x4[2] = *0x80005b0;
                    iVar5 = *0x80005b4;
                    in_x4[3] = *0x80005b4;
                    in_x4[4] = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        arg3_00 = NULL;
                        *pcVar23 = *0x80005bc;
                        *(pcVar23 + 0x18) = *0x80005d4;
                        *(pcVar23 + 0x20) = *0x80005dc;
                        *(pcVar23 + 8) = *0x80005c4;
                        *(pcVar23 + 0x10) = *0x80005cc;
                        *(pcVar23 + 0x38) = *0x80005f4;
                        *(pcVar23 + 0x40) = *0x80005fc;
                        *(pcVar23 + 0x28) = *0x80005e4;
                        *(pcVar23 + 0x30) = *0x80005ec;
                        *(pcVar23 + 0x58) = *0x8000614;
                        *(pcVar23 + 0x60) = *0x800061c;
                        *(pcVar23 + 0x48) = *0x8000604;
                        *(pcVar23 + 0x50) = *0x800060c;
                    }
                }
                else {
                    pcVar13 = 0x8;
                    _printk(0x80004d0);
                    arg3_00 = 0xffffffb6;
                }
            }
            else {
                arg3_00 = uVar10;
                _printk(0x800048e,auVar24._0_8_ & 0xffffffff);
            }
            kfree(piVar11);
            pcVar15 = pcVar16;
            unaff_x19 = piVar11;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return arg3_00;
    }
    auVar25 = __stack_chk_fail();
    pcVar16 = &iStack_110;
    *extraout_x18_00 = sym.tme_hwkm_master_unwrapkey;
    pcStack_f8 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar22 = 0xffffffea;
    iStack_110 = 0x14;
    pcVar23 = pcVar15;
    piVar11 = piVar12;
    piStack_178 = unaff_x19;
    piVar18 = piStack_d0;
    ppuStack_100 = &puStack_a0;
    pcStack_f0 = pcVar21;
    pcStack_e0 = pcVar20;
    pcStack_d8 = pcVar19;
    pcStack_c8 = arg3_00;
    pcStack_c0 = unaff_x20;
    piStack_b8 = unaff_x19;
    if ((pcVar15 != NULL) && (piStack_178 = piVar12, piVar12 != NULL)) {
        piVar18 = auVar25._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        pcVar13 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar22 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3_00 != NULL)) {
            uVar6 = *(pcVar15 + 0x50);
            uVar7 = *(pcVar15 + 0x58);
            *(unaff_x20 + 0x70) = *(pcVar15 + 0x60);
            *(unaff_x20 + 8) = auVar25._0_4_;
            *(unaff_x20 + 0xc) = auVar25._8_4_;
            *unaff_x20 = 0x4582f01d9;
            *(unaff_x20 + 0x60) = uVar6;
            *(unaff_x20 + 0x68) = uVar7;
            uVar7 = *(pcVar15 + 0x38);
            uVar6 = *(pcVar15 + 0x40);
            uVar8 = *(pcVar15 + 0x48);
            *(unaff_x20 + 0x40) = *(pcVar15 + 0x30);
            *(unaff_x20 + 0x48) = uVar7;
            uVar7 = *(pcVar15 + 0x10);
            uVar17 = *(pcVar15 + 0x18);
            *(unaff_x20 + 0x50) = uVar6;
            *(unaff_x20 + 0x58) = uVar8;
            uVar6 = *(pcVar15 + 0x20);
            uVar8 = *(pcVar15 + 0x28);
            *(unaff_x20 + 0x20) = uVar7;
            *(unaff_x20 + 0x28) = uVar17;
            uVar7 = *pcVar15;
            uVar17 = *(pcVar15 + 8);
            *(unaff_x20 + 0x30) = uVar6;
            *(unaff_x20 + 0x38) = uVar8;
            *(unaff_x20 + 0x10) = uVar7;
            *(unaff_x20 + 0x18) = uVar17;
            pcVar13 = arg3_00;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x7c,arg3_00,&iStack_110);
            if (uVar10 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = *(arg3_00 + 4);
                    iVar3 = *(arg3_00 + 8);
                    iVar5 = *(arg3_00 + 0xc);
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = *(arg3_00 + 0x10);
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    pcVar22 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                    pcVar23 = pcVar16;
                }
                else {
                    pcVar13 = 0x8;
                    _printk(0x80004d0);
                    pcVar22 = 0xffffffb6;
                    pcVar23 = pcVar16;
                }
            }
            else {
                pcVar22 = uVar10;
                _printk(0x8000420,auVar25._0_8_ & 0xffffffff);
                pcVar23 = pcVar16;
            }
        }
        kfree(unaff_x20);
        kfree(arg3_00);
        pcVar19 = pcVar15;
    }
    uVar14 = SUB84(pcVar23,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar22;
    }
    auVar24 = __stack_chk_fail();
    *extraout_x18_01 = sym.tme_hwkm_master_importkey;
    pcStack_158 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_168 = *(iVar1 + 0x5e0);
    pcVar23 = 0xffffffea;
    iStack_170 = 0x14;
    pcStack_1a0 = pcVar19;
    pppuStack_160 = &ppuStack_100;
    if (((auVar24._8_8_ != NULL) && (pcStack_1a0 = pcVar13, pcVar13 != NULL)) &&
       (piStack_178 = piVar11, piVar11 != NULL)) {
        piVar18 = auVar24._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar23 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3_00 != NULL)) {
            uVar6 = *(pcVar13 + 0x28);
            uVar7 = *(pcVar13 + 0x30);
            *(unaff_x20 + 0xc) = *auVar24._8_8_;
            *(unaff_x20 + 0x5c) = uVar14;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = *(pcVar13 + 0x38);
            uVar8 = *(pcVar13 + 0x40);
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 8) = auVar24._0_4_;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = *(pcVar13 + 8);
            uVar7 = *(pcVar13 + 0x10);
            *(unaff_x20 + 0x54) = uVar8;
            uVar17 = *pcVar13;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = *(pcVar13 + 0x18);
            uVar8 = *(pcVar13 + 0x20);
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar17;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,arg3_00,&iStack_170);
            if (uVar10 == 0) {
                if (iStack_170 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = *(arg3_00 + 4);
                    iVar3 = *(arg3_00 + 8);
                    iVar5 = *(arg3_00 + 0xc);
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = *(arg3_00 + 0x10);
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    pcVar23 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_170,8);
                    pcVar23 = 0xffffffb6;
                }
            }
            else {
                pcVar23 = uVar10;
                _printk(0x8000309,auVar24._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(arg3_00);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_168) {
        return pcVar23;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18_02 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_1a8 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_1b8 = *(iVar1 + 0x5e0);
    iStack_1c0 = 0x14;
    pppuStack_1b0 = &pppuStack_160;
    piStack_190 = piVar18;
    pcStack_188 = arg3_00;
    pcStack_180 = unaff_x20;
    if (piVar12 == NULL) {
        pcVar13 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar13 = 0xfffffff4;
        if ((arg1_00 != NULL) && (piVar11 != NULL)) {
            *arg1_00 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1_00,8,piVar11,&iStack_1c0);
            if (uVar10 == 0) {
                if (iStack_1c0 == 0x14) {
                    iVar2 = *piVar11;
                    iVar4 = piVar11[1];
                    iVar3 = piVar11[2];
                    iVar5 = piVar11[3];
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = piVar11[4];
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    pcVar13 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_1c0,8);
                    pcVar13 = 0xffffffb6;
                }
            }
            else {
                pcVar13 = uVar10;
                _printk(0x800054a);
            }
        }
        kfree(arg1_00);
        kfree(piVar11);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_1b8) {
        return pcVar13;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_wrapkey @ 0x08001ff4 (size 448) =====

//WARNING: Control flow encountered bad instruction data

code * sym.tme_hwkm_master_wrapkey(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    int *piVar11;
    int *piVar12;
    ulong *arg1_00;
    code *in_x2;
    uint uVar13;
    code *pcVar14;
    code *pcVar15;
    int *in_x4;
    ulong uVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int *unaff_x19;
    ulong *unaff_x20;
    code *arg3_00;
    int *unaff_x22;
    code *unaff_x23;
    code *pcVar17;
    code *pcVar18;
    ulong unaff_x30;
    uchar auVar19 [12];
    uchar auVar20 [16];
    int64_t iStack_160;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    code *pcStack_140;
    int *piStack_130;
    code *pcStack_128;
    ulong *puStack_120;
    int *piStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_50;
    int64_t iStack_48;
    
    pcVar14 = &iStack_50;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    arg3_00 = 0xffffffea;
    iStack_50 = 0x7c;
    pcVar18 = arg3;
    piVar12 = in_x4;
    if ((arg3 != 0) && (unaff_x22 = in_x4, in_x4 != NULL)) {
        unaff_x23 = arg1 & 0xffffffff;
        in_x2 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        unaff_x20 = arg3;
        if (piVar11 == NULL) {
            arg3_00 = 0xfffffff4;
        }
        else {
            piVar11[2] = arg1;
            piVar11[3] = arg2;
            in_x2 = obj.tmecom_probe.__key;
            piVar11[0] = 0x502f01d9;
            piVar11[1] = 3;
            uVar10 = sym.tmecom_process_request(piVar11,0x14,0x80005a8,&iStack_50);
            iVar2 = _obj.tmecom_probe.__key;
            if (uVar10 == 0) {
                if (iStack_50 == 0x7c) {
                    arg3_00 = 0x1;
                    *in_x4 = _obj.tmecom_probe.__key;
                    iVar3 = *0x80005ac;
                    in_x4[1] = *0x80005ac;
                    iVar4 = *0x80005b0;
                    in_x4[2] = *0x80005b0;
                    iVar5 = *0x80005b4;
                    in_x4[3] = *0x80005b4;
                    in_x4[4] = *0x80005b8;
                    if ((((iVar2 == 0) && (iVar3 == 0)) && (iVar4 == 0)) && (iVar5 == 0)) {
                        arg3_00 = NULL;
                        *arg3 = *0x80005bc;
                        uVar8 = *0x80005dc;
                        uVar7 = *0x80005cc;
                        uVar6 = *0x80005c4;
                        *(arg3 + 0x18) = *0x80005d4;
                        *(arg3 + 0x20) = uVar8;
                        *(arg3 + 8) = uVar6;
                        *(arg3 + 0x10) = uVar7;
                        uVar8 = *0x80005fc;
                        uVar7 = *0x80005ec;
                        uVar6 = *0x80005e4;
                        *(arg3 + 0x38) = *0x80005f4;
                        *(arg3 + 0x40) = uVar8;
                        *(arg3 + 0x28) = uVar6;
                        *(arg3 + 0x30) = uVar7;
                        uVar8 = *0x800061c;
                        uVar7 = *0x800060c;
                        uVar6 = *0x8000604;
                        *(arg3 + 0x58) = *0x8000614;
                        *(arg3 + 0x60) = uVar8;
                        *(arg3 + 0x48) = uVar6;
                        *(arg3 + 0x50) = uVar7;
                    }
                }
                else {
                    in_x2 = 0x8;
                    _printk(0x80004d0);
                    arg3_00 = 0xffffffb6;
                }
            }
            else {
                arg3_00 = uVar10;
                _printk(0x800048e,arg1 & 0xffffffff);
            }
            kfree(piVar11);
            pcVar18 = pcVar14;
            unaff_x19 = piVar11;
        }
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return arg3_00;
    }
    auVar19 = __stack_chk_fail();
    pcVar15 = &iStack_b0;
    *extraout_x18 = sym.tme_hwkm_master_unwrapkey;
    pcStack_98 = sym.tme_hwkm_master_unwrapkey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    pcVar17 = 0xffffffea;
    iStack_b0 = 0x14;
    pcVar14 = pcVar18;
    piVar11 = piVar12;
    puStack_a0 = &stack0xffffffffffffffc0;
    if ((pcVar18 != NULL) && (unaff_x19 = piVar12, piVar12 != NULL)) {
        unaff_x22 = auVar19._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        in_x2 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        pcVar17 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3_00 != NULL)) {
            uVar6 = *(pcVar18 + 0x50);
            uVar7 = *(pcVar18 + 0x58);
            unaff_x20[0xe] = *(pcVar18 + 0x60);
            *(unaff_x20 + 1) = auVar19._0_4_;
            *(unaff_x20 + 0xc) = auVar19._8_4_;
            *unaff_x20 = 0x4582f01d9;
            unaff_x20[0xc] = uVar6;
            unaff_x20[0xd] = uVar7;
            uVar7 = *(pcVar18 + 0x38);
            uVar6 = *(pcVar18 + 0x40);
            uVar8 = *(pcVar18 + 0x48);
            unaff_x20[8] = *(pcVar18 + 0x30);
            unaff_x20[9] = uVar7;
            uVar7 = *(pcVar18 + 0x10);
            uVar16 = *(pcVar18 + 0x18);
            unaff_x20[10] = uVar6;
            unaff_x20[0xb] = uVar8;
            uVar6 = *(pcVar18 + 0x20);
            uVar8 = *(pcVar18 + 0x28);
            unaff_x20[4] = uVar7;
            unaff_x20[5] = uVar16;
            uVar7 = *pcVar18;
            uVar16 = *(pcVar18 + 8);
            unaff_x20[6] = uVar6;
            unaff_x20[7] = uVar8;
            unaff_x20[2] = uVar7;
            unaff_x20[3] = uVar16;
            in_x2 = arg3_00;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x7c,arg3_00,&iStack_b0);
            if (uVar10 == 0) {
                if (iStack_b0 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = *(arg3_00 + 4);
                    iVar3 = *(arg3_00 + 8);
                    iVar5 = *(arg3_00 + 0xc);
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = *(arg3_00 + 0x10);
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    pcVar17 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                    pcVar14 = pcVar15;
                }
                else {
                    in_x2 = 0x8;
                    _printk(0x80004d0);
                    pcVar17 = 0xffffffb6;
                    pcVar14 = pcVar15;
                }
            }
            else {
                pcVar17 = uVar10;
                _printk(0x8000420,auVar19._0_8_ & 0xffffffff);
                pcVar14 = pcVar15;
            }
        }
        kfree(unaff_x20);
        kfree(arg3_00);
        unaff_x23 = pcVar18;
    }
    uVar13 = SUB84(pcVar14,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return pcVar17;
    }
    auVar20 = __stack_chk_fail();
    *extraout_x18_00 = sym.tme_hwkm_master_importkey;
    pcStack_f8 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    pcVar18 = 0xffffffea;
    iStack_110 = 0x14;
    piStack_118 = unaff_x19;
    pcStack_140 = unaff_x23;
    ppuStack_100 = &puStack_a0;
    if (((auVar20._8_8_ != NULL) && (pcStack_140 = in_x2, in_x2 != NULL)) && (piStack_118 = piVar11, piVar11 != NULL))
    {
        unaff_x22 = auVar20._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar18 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (arg3_00 != NULL)) {
            uVar6 = *(in_x2 + 0x28);
            uVar7 = *(in_x2 + 0x30);
            *(unaff_x20 + 0xc) = *auVar20._8_8_;
            *(unaff_x20 + 0x5c) = uVar13;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = *(in_x2 + 0x38);
            uVar8 = *(in_x2 + 0x40);
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 1) = auVar20._0_4_;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = *(in_x2 + 8);
            uVar7 = *(in_x2 + 0x10);
            *(unaff_x20 + 0x54) = uVar8;
            uVar16 = *in_x2;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = *(in_x2 + 0x18);
            uVar8 = *(in_x2 + 0x20);
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar16;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,arg3_00,&iStack_110);
            if (uVar10 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = *(arg3_00 + 4);
                    iVar3 = *(arg3_00 + 8);
                    iVar5 = *(arg3_00 + 0xc);
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = *(arg3_00 + 0x10);
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    pcVar18 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_110,8);
                    pcVar18 = 0xffffffb6;
                }
            }
            else {
                pcVar18 = uVar10;
                _printk(0x8000309,auVar20._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(arg3_00);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return pcVar18;
    }
    piVar12 = __stack_chk_fail();
    *extraout_x18_01 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_148 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_158 = *(iVar1 + 0x5e0);
    iStack_160 = 0x14;
    pppuStack_150 = &ppuStack_100;
    piStack_130 = unaff_x22;
    pcStack_128 = arg3_00;
    puStack_120 = unaff_x20;
    if (piVar12 == NULL) {
        pcVar18 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        piVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        pcVar18 = 0xfffffff4;
        if ((arg1_00 != NULL) && (piVar11 != NULL)) {
            *arg1_00 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1_00,8,piVar11,&iStack_160);
            if (uVar10 == 0) {
                if (iStack_160 == 0x14) {
                    iVar2 = *piVar11;
                    iVar4 = piVar11[1];
                    iVar3 = piVar11[2];
                    iVar5 = piVar11[3];
                    *piVar12 = iVar2;
                    piVar12[1] = iVar4;
                    iVar9 = piVar11[4];
                    piVar12[2] = iVar3;
                    piVar12[3] = iVar5;
                    pcVar18 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar12[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_160,8);
                    pcVar18 = 0xffffffb6;
                }
            }
            else {
                pcVar18 = uVar10;
                _printk(0x800054a);
            }
        }
        kfree(arg1_00);
        kfree(piVar11);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_158) {
        return pcVar18;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_unwrapkey @ 0x080021b4 (size 456) =====

//WARNING: Control flow encountered bad instruction data

uint32_t sym.tme_hwkm_master_unwrapkey(int64_t arg1,int64_t arg2,uchar noname_2 [16],int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    int *piVar11;
    ulong *arg1_00;
    int *arg3_00;
    int *in_x2;
    uint uVar12;
    uchar *puVar13;
    int64_t *piVar14;
    int *in_x4;
    ulong uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *unaff_x20;
    int *unaff_x21;
    uint64_t unaff_x22;
    int *unaff_x23;
    ulong unaff_x30;
    uchar auVar16 [16];
    int64_t iStack_110;
    int64_t iStack_108;
    uchar **ppuStack_100;
    code *pcStack_f8;
    int *piStack_f0;
    uint64_t uStack_e0;
    int *piStack_d8;
    ulong *puStack_d0;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    int64_t iStack_60;
    int64_t iStack_58;
    
    piVar14 = &iStack_60;
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar10 = 0xffffffea;
    iStack_60 = 0x14;
    puVar13 = arg3;
    piVar11 = in_x4;
    if ((arg3 != 0) && (in_x4 != NULL)) {
        unaff_x22 = arg1 & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x7c);
        in_x2 = 0x14;
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0);
        uVar10 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar6 = *(arg3 + 0x50);
            uVar7 = *(arg3 + 0x58);
            unaff_x20[0xe] = *(arg3 + 0x60);
            *(unaff_x20 + 1) = arg1;
            *(unaff_x20 + 0xc) = arg2;
            *unaff_x20 = 0x4582f01d9;
            unaff_x20[0xc] = uVar6;
            unaff_x20[0xd] = uVar7;
            uVar7 = *(arg3 + 0x38);
            uVar6 = *(arg3 + 0x40);
            uVar8 = *(arg3 + 0x48);
            unaff_x20[8] = *(arg3 + 0x30);
            unaff_x20[9] = uVar7;
            uVar7 = *(arg3 + 0x10);
            uVar15 = *(arg3 + 0x18);
            unaff_x20[10] = uVar6;
            unaff_x20[0xb] = uVar8;
            uVar6 = *(arg3 + 0x20);
            uVar8 = *(arg3 + 0x28);
            unaff_x20[4] = uVar7;
            unaff_x20[5] = uVar15;
            uVar7 = *arg3;
            uVar15 = *(arg3 + 8);
            unaff_x20[6] = uVar6;
            unaff_x20[7] = uVar8;
            unaff_x20[2] = uVar7;
            unaff_x20[3] = uVar15;
            in_x2 = unaff_x21;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x7c,unaff_x21,&iStack_60);
            if (uVar10 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = unaff_x21[1];
                    iVar3 = unaff_x21[2];
                    iVar5 = unaff_x21[3];
                    *in_x4 = iVar2;
                    in_x4[1] = iVar4;
                    iVar9 = unaff_x21[4];
                    in_x4[2] = iVar3;
                    in_x4[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    in_x4[4] = iVar9;
                    puVar13 = piVar14;
                }
                else {
                    in_x2 = 0x8;
                    _printk(0x80004d0);
                    uVar10 = 0xffffffb6;
                    puVar13 = piVar14;
                }
            }
            else {
                _printk(0x8000420,arg1 & 0xffffffff);
                puVar13 = piVar14;
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
        unaff_x23 = arg3;
    }
    uVar12 = SUB84(puVar13,0);
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    auVar16 = __stack_chk_fail();
    *extraout_x18 = sym.tme_hwkm_master_importkey;
    pcStack_a8 = sym.tme_hwkm_master_importkey;
    iVar1 = sp_el0;
    iStack_b8 = *(iVar1 + 0x5e0);
    uVar10 = 0xffffffea;
    iStack_c0 = 0x14;
    piStack_f0 = unaff_x23;
    puStack_b0 = &stack0xffffffffffffffb0;
    if (((auVar16._8_8_ != NULL) && (piStack_f0 = in_x2, in_x2 != NULL)) && (piVar11 != NULL)) {
        unaff_x22 = auVar16._0_8_ & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar6 = *(in_x2 + 10);
            uVar7 = *(in_x2 + 0xc);
            *(unaff_x20 + 0xc) = *auVar16._8_8_;
            *(unaff_x20 + 0x5c) = uVar12;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = *(in_x2 + 0xe);
            uVar8 = *(in_x2 + 0x10);
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 1) = auVar16._0_4_;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = *(in_x2 + 2);
            uVar7 = *(in_x2 + 4);
            *(unaff_x20 + 0x54) = uVar8;
            uVar15 = *in_x2;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = *(in_x2 + 6);
            uVar8 = *(in_x2 + 8);
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar15;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,unaff_x21,&iStack_c0);
            if (uVar10 == 0) {
                if (iStack_c0 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = unaff_x21[1];
                    iVar3 = unaff_x21[2];
                    iVar5 = unaff_x21[3];
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = unaff_x21[4];
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_c0,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x8000309,auVar16._0_8_ & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_b8) {
        return uVar10;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18_00 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_f8 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_108 = *(iVar1 + 0x5e0);
    iStack_110 = 0x14;
    ppuStack_100 = &puStack_b0;
    uStack_e0 = unaff_x22;
    piStack_d8 = unaff_x21;
    puStack_d0 = unaff_x20;
    if (piVar11 == NULL) {
        uVar10 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((arg1_00 != NULL) && (arg3_00 != NULL)) {
            *arg1_00 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1_00,8,arg3_00,&iStack_110);
            if (uVar10 == 0) {
                if (iStack_110 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = arg3_00[1];
                    iVar3 = arg3_00[2];
                    iVar5 = arg3_00[3];
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = arg3_00[4];
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_110,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x800054a);
            }
        }
        kfree(arg1_00);
        kfree(arg3_00);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_108) {
        return uVar10;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_importkey @ 0x0800237c (size 476) =====

//WARNING: Control flow encountered bad instruction data

uint32_t sym.tme_hwkm_master_importkey(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    int iVar9;
    uint32_t uVar10;
    int *piVar11;
    ulong *arg1_00;
    int *arg3_00;
    int *in_x4;
    ulong uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *unaff_x20;
    int *unaff_x21;
    uint64_t unaff_x22;
    int64_t unaff_x23;
    ulong unaff_x30;
    int64_t iStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    int64_t iStack_90;
    uint64_t uStack_80;
    int *piStack_78;
    ulong *puStack_70;
    int64_t iStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_58 = *(iVar1 + 0x5e0);
    uVar10 = 0xffffffea;
    iStack_60 = 0x14;
    iStack_90 = unaff_x23;
    if (((arg2 != 0) && (iStack_90 = arg3, arg3 != 0)) && (in_x4 != NULL)) {
        unaff_x22 = arg1 & 0xffffffff;
        unaff_x20 = kmem_cache_alloc_trace(*0x80090ac,0xdc0,0x60);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        unaff_x21 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((unaff_x20 != NULL) && (unaff_x21 != NULL)) {
            uVar6 = *(arg3 + 0x28);
            uVar7 = *(arg3 + 0x30);
            *(unaff_x20 + 0xc) = *arg2;
            *(unaff_x20 + 0x5c) = arg4;
            *unaff_x20 = 0x5582f01d9;
            *(unaff_x20 + 0x3c) = uVar6;
            uVar6 = *(arg3 + 0x38);
            uVar8 = *(arg3 + 0x40);
            *(unaff_x20 + 0x44) = uVar7;
            *(unaff_x20 + 1) = arg1;
            *(unaff_x20 + 0x4c) = uVar6;
            uVar6 = *(arg3 + 8);
            uVar7 = *(arg3 + 0x10);
            *(unaff_x20 + 0x54) = uVar8;
            uVar12 = *arg3;
            *(unaff_x20 + 0x1c) = uVar6;
            uVar6 = *(arg3 + 0x18);
            uVar8 = *(arg3 + 0x20);
            *(unaff_x20 + 0x24) = uVar7;
            *(unaff_x20 + 0x14) = uVar12;
            *(unaff_x20 + 0x2c) = uVar6;
            *(unaff_x20 + 0x34) = uVar8;
            uVar10 = sym.tmecom_process_request(unaff_x20,0x60,unaff_x21,&iStack_60);
            if (uVar10 == 0) {
                if (iStack_60 == 0x14) {
                    iVar2 = *unaff_x21;
                    iVar4 = unaff_x21[1];
                    iVar3 = unaff_x21[2];
                    iVar5 = unaff_x21[3];
                    *in_x4 = iVar2;
                    in_x4[1] = iVar4;
                    iVar9 = unaff_x21[4];
                    in_x4[2] = iVar3;
                    in_x4[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    in_x4[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_60,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x8000309,arg1 & 0xffffffff);
            }
        }
        kfree(unaff_x20);
        kfree(unaff_x21);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_58) {
        return uVar10;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.tme_hwkm_master_broadcast_transportkey;
    pcStack_98 = sym.tme_hwkm_master_broadcast_transportkey;
    iVar1 = sp_el0;
    iStack_a8 = *(iVar1 + 0x5e0);
    iStack_b0 = 0x14;
    puStack_a0 = &stack0xffffffffffffffb0;
    uStack_80 = unaff_x22;
    piStack_78 = unaff_x21;
    puStack_70 = unaff_x20;
    if (piVar11 == NULL) {
        uVar10 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar10 = 0xfffffff4;
        if ((arg1_00 != NULL) && (arg3_00 != NULL)) {
            *arg1_00 = 0x6442f01d9;
            uVar10 = sym.tmecom_process_request(arg1_00,8,arg3_00,&iStack_b0);
            if (uVar10 == 0) {
                if (iStack_b0 == 0x14) {
                    iVar2 = *arg3_00;
                    iVar4 = arg3_00[1];
                    iVar3 = arg3_00[2];
                    iVar5 = arg3_00[3];
                    *piVar11 = iVar2;
                    piVar11[1] = iVar4;
                    iVar9 = arg3_00[4];
                    piVar11[2] = iVar3;
                    piVar11[3] = iVar5;
                    uVar10 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    piVar11[4] = iVar9;
                }
                else {
                    _printk(0x80004d0,iStack_b0,8);
                    uVar10 = 0xffffffb6;
                }
            }
            else {
                _printk(0x800054a);
            }
        }
        kfree(arg1_00);
        kfree(arg3_00);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_a8) {
        return uVar10;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.tme_hwkm_master_broadcast_transportkey @ 0x08002558 (size 384) =====

//WARNING: Control flow encountered bad instruction data

uint32_t sym.tme_hwkm_master_broadcast_transportkey(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    ulong *arg1_00;
    int *arg3;
    ulong *in_x18;
    ulong unaff_x30;
    int64_t iStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_48 = *(iVar1 + 0x5e0);
    iStack_50 = 0x14;
    if (arg1 == 0) {
        uVar7 = 0xffffffea;
    }
    else {
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg1_00 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,8);
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        arg3 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x14);
        uVar7 = 0xfffffff4;
        if ((arg1_00 != NULL) && (arg3 != NULL)) {
            *arg1_00 = 0x6442f01d9;
            uVar7 = sym.tmecom_process_request(arg1_00,8,arg3,&iStack_50);
            if (uVar7 == 0) {
                if (iStack_50 == 0x14) {
                    iVar2 = *arg3;
                    iVar4 = arg3[1];
                    iVar3 = arg3[2];
                    iVar5 = arg3[3];
                    *arg1 = iVar2;
                    *(arg1 + 4) = iVar4;
                    iVar6 = arg3[4];
                    *(arg1 + 8) = iVar3;
                    *(arg1 + 0xc) = iVar5;
                    uVar7 = ((iVar2 != 0 || iVar4 != 0) || iVar3 != 0) || iVar5 != 0;
                    *(arg1 + 0x10) = iVar6;
                }
                else {
                    _printk(0x80004d0,iStack_50,8);
                    uVar7 = 0xffffffb6;
                }
            }
            else {
                _printk(0x800054a);
            }
        }
        kfree(arg1_00);
        kfree(arg3);
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    __stack_chk_fail();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.init_module @ 0x080027c0 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.tmecom_probe.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080027f4 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.tmecom_probe.8f76e51b5e4c5b6ca59816f95dbd0239.cfi_jt);
    return;
}

