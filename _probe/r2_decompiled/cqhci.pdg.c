// decompiled from cqhci by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 504) =====

//WARNING: Switch with 1 destination removed at 0x08004a98

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x309fc7792fcd83f0) {
        if (arg1 < -0x6ca80fdf90d2550d) {
            if (arg1 == -0x7a639965f4247d8b) {
                pcVar2 = sym.cqhci_irq.cfi_jt;
            }
            else {
                if (arg1 != -0x7391cbd6f3e35132) goto code_r0x08004a58;
                pcVar2 = sym.cqhci_timeout.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt;
            }
        }
        else {
            if (arg1 == -0x6ca80fdf90d2550d) {
                if ((pcVar1 + -0x8001228 >> 3 | pcVar1 << 0x3d) < 2) {
                    return;
                }
                goto code_r0x08004a58;
            }
            if (arg1 == -0x4b7eed78aaf18780) {
                pcVar2 = sym.cqhci_post_req.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt;
            }
            else {
                if (arg1 != -0x49498c89b0362bdf) goto code_r0x08004a58;
                pcVar2 = sym.cqhci_request.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt;
            }
        }
    }
    else if (arg1 < 0x12618acaef6fabd) {
        if (arg1 != -0x309fc7792fcd83f0) {
            if ((arg1 == -0x28f0e94db73b717c) && ((pcVar1 + -0x8001258 >> 3 | pcVar1 << 0x3d) < 4)) {
                return;
            }
            goto code_r0x08004a58;
        }
        pcVar2 = sym.cqhci_pltfm_init.cfi_jt;
    }
    else if (arg1 == 0x12618acaef6fabd) {
        pcVar2 = sym.cqhci_init.cfi_jt;
    }
    else {
        if (arg1 == 0x5149616ef9bb8d20) {
            if ((pcVar1 + -0x8001238 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08004a58;
        }
        if (arg1 != 0x7cf5b3bf457c5081) goto code_r0x08004a58;
        pcVar2 = sym.cqhci_enable.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08004a58:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004aac);
    (*pcVar1)();
}


// ===== sym.cqhci_enable.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001200 (size 8) =====

uint sym.cqhci_enable.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(int64_t param_1,int64_t param_2)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int iVar7;
    int iVar8;
    ulong *puVar9;
    ulong *in_x18;
    uint uVar10;
    int64_t *arg1;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(param_2 + 0x4f2) == '\0') {
        uVar10 = 0xffffffea;
    }
    else {
        arg1 = *(param_1 + 0x658);
        if (arg1[7] == '\0') {
            *(arg1 + 0x1c) = *(param_2 + 0x39c);
            if ((*(arg1 + 6) & 1) == 0) {
                iVar7 = 8;
            }
            else {
                pcVar11 = *(*arg1 + 0x10);
                if (pcVar11 == NULL) {
                    uVar5 = sym.readl_relaxed(arg1[1] + 8);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar11,0x8000130);
                    uVar5 = (*pcVar11)(arg1,8);
                }
                pcVar11 = *(*arg1 + 8);
                if (pcVar11 == NULL) {
                    sym.writel_relaxed(uVar5 | 0x100,arg1[1] + 8);
                }
                else {
                    __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
                    (*pcVar11)(arg1,uVar5 | 0x100,8);
                }
                iVar7 = 0x10;
            }
            *(arg1 + 0x59) = iVar7;
            if (arg1[4] == '\0') {
                uVar5 = 8;
                iVar8 = 8;
            }
            else {
                iVar8 = 0x10;
                uVar5 = 0x10;
                if ((*(arg1 + 0x34) & 1) != 0) {
                    uVar5 = 0xc;
                }
            }
            *(arg1 + 0x5a) = iVar8;
            puVar9 = arg1[2];
            *(arg1 + 0xd) = uVar5;
            *(arg1 + 0xb) = iVar8 + iVar7;
            iVar6 = *(arg1 + 0x24) * (iVar8 + iVar7);
            arg1[8] = iVar6;
            arg1[9] = uVar5 * *(puVar9 + 0xcc) * *(puVar9 + 0x7f);
            iVar6 = dmam_alloc_attrs(*puVar9,iVar6,arg1 + 0xe,0xcc0,0);
            arg1[10] = iVar6;
            if (iVar6 != 0) {
                iVar6 = dmam_alloc_attrs(*arg1[2],arg1[9],arg1 + 0xf,0xcc0,0);
                arg1[0xc] = iVar6;
                if (iVar6 != 0) {
                    if (0 < *(arg1 + 0x24)) {
                        uVar5 = 0;
                        do {
                            uVar2 = uVar5 & 0xff;
                            uVar3 = *(arg1 + 0xd);
                            puVar1 = arg1[10] + *(arg1 + 0xb) * uVar2 + *(arg1 + 0x59);
                            uVar4 = *(arg1[2] + 0x3f8);
                            iVar6 = arg1[0xf];
                            memset(puVar1,0,*(arg1 + 0x5a));
                            if (8 < *(arg1 + 0x5a)) {
                                puVar1[8] = 0;
                            }
                            if ((uVar2 == 0x1f) && ((*(arg1[2] + 0x3eb) & 1) != 0)) {
                                *puVar1 = 2;
                            }
                            else {
                                *puVar1 = 0x31;
                                iVar6 = iVar6 + uVar2 * uVar3 * uVar4;
                                if (arg1[4] == '\0') {
                                    *(puVar1 + 4) = iVar6;
                                }
                                else {
                                    *(puVar1 + 4) = iVar6;
                                }
                            }
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < *(arg1 + 0x24));
                    }
                    sym.__cqhci_enable(arg1);
                    pcVar11 = *(*arg1 + 0x48);
                    if (pcVar11 != NULL) {
                        __cfi_slowpath_diag(0xb94480562807b25e,pcVar11,0x80001b0);
                        (*pcVar11)(param_1,1);
                    }
                    *(arg1 + 7) = 1;
                    return 0;
                }
                dmam_free_coherent(*arg1[2],arg1[8],arg1[10],arg1[0xe]);
                arg1[10] = 0;
                arg1[0xe] = 0;
            }
            iVar6 = *(param_1 + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(param_1 + 8);
            }
            uVar10 = 0xfffffff4;
            _printk(0x8000474,iVar6,0xfffffff4);
        }
        else {
            uVar10 = 0;
        }
    }
    return uVar10;
}


// ===== sym.cqhci_pltfm_init.cfi_jt @ 0x08001208 (size 8) =====

int64_t sym.cqhci_pltfm_init.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = platform_get_resource_byname(param_1,0x200,"cqhci");
    if (piVar1 == NULL) {
        iVar2 = -0x16;
    }
    else {
        param_1 = param_1 + 0x10;
        iVar2 = devm_kmalloc(param_1,0xe8,0xdc0);
        if (iVar2 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar3 = devm_ioremap(param_1,*piVar1,(piVar1[1] - *piVar1) + 1);
            *(iVar2 + 8) = iVar3;
            if (iVar3 == 0) {
                _dev_err(param_1,"failed to remap cqhci regs\n");
                iVar2 = -0x10;
            }
        }
    }
    return iVar2;
}


// ===== sym.cqhci_post_req.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001210 (size 8) =====

void sym.cqhci_post_req.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(ulong *param_1,int64_t param_2)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_2 + 0x10);
    if (iVar1 != 0) {
        uVar2 = 1;
        if ((*(iVar1 + 0x18) & 0x200) != 0) {
            uVar2 = 2;
        }
        dma_unmap_sg_attrs(*param_1,*(iVar1 + 0x38),*(iVar1 + 0x30),uVar2,0);
    }
    return;
}


// ===== sym.cqhci_timeout.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001218 (size 8) =====

bool sym.cqhci_timeout.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(int64_t param_1,int64_t param_2,uchar *param_3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg1;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x658);
    if (*(param_2 + 8) == 0) {
        uVar3 = *(param_2 + 0x7c);
    }
    else {
        uVar3 = 0x1f;
    }
    iVar2 = arg1 + 0x18;
    iVar5 = *(arg1 + 0xb8);
    uVar1 = _raw_spin_lock_irqsave(iVar2);
    iVar4 = *(iVar5 + (-(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4));
    if (iVar4 == param_2) {
        iVar5 = iVar5 + uVar3 * 0x10;
        *(iVar5 + 8) = *(iVar5 + 8) | 1;
        iVar5 = *(param_1 + 0x658);
        if (*(iVar5 + 0x3d) == '\0') {
            *(iVar5 + 0x3d) = 1;
            __wake_up(iVar5 + 0xa0,3,1,0);
        }
        *param_3 = *(arg1 + 0x3d);
        _raw_spin_unlock_irqrestore(iVar2,uVar1);
        iVar2 = *(param_1 + 0x78);
        if (iVar2 == 0) {
            iVar2 = *(param_1 + 8);
        }
        _printk(0x800092f,iVar2,uVar3);
        sym.cqhci_dumpregs(arg1);
    }
    else {
        _raw_spin_unlock_irqrestore(iVar2,uVar1);
    }
    return iVar4 == param_2;
}


// ===== sym.cqhci_init.cfi_jt @ 0x08001220 (size 8) =====

int sym.cqhci_init.cfi_jt(int64_t *param_1,ulong *param_2,uchar param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(param_1 + 4) = param_3;
    param_1[2] = param_2;
    param_2[0xcb] = param_1;
    *(param_1 + 0x24) = 0x20;
    uVar5 = 0x1f;
    *(param_1 + 0x2c) = 0x1f;
    if ((*(param_2 + 0x7d) & 0x1000000) == 0) {
        uVar5 = 0x20;
    }
    *(param_2 + 0xcc) = uVar5;
    param_2[0xca] = reloc.cqhci_enable.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt;
    if (*(param_1 + 0x24) >> 0x3c == 0) {
        iVar4 = devm_kmalloc(*param_2,*(param_1 + 0x24) << 4,0xdc0);
        param_1[0x17] = iVar4;
        if (iVar4 != 0) {
            iVar1 = sym.cqhci_crypto_init(param_1);
            if (iVar1 == 0) {
                *(param_1 + 3) = 0;
                *(param_1 + 0x10) = 0;
                __init_swait_queue_head(param_1 + 0x11,"&x->wait",obj.init_completion.__key);
                __init_waitqueue_head(param_1 + 0x14,"&cq_host->wait_queue",obj.init_completion.__key);
                iVar4 = param_2[0xf];
                if (iVar4 == 0) {
                    iVar4 = param_2[1];
                }
                pcVar6 = *(*param_1 + 0x10);
                if (pcVar6 == NULL) {
                    uVar2 = sym.readl_relaxed(param_1[1]);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
                    uVar2 = (*pcVar6)(param_1,0);
                }
                pcVar6 = *(*param_1 + 0x10);
                if (pcVar6 == NULL) {
                    uVar3 = sym.readl_relaxed(param_1[1]);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
                    uVar3 = (*pcVar6)(param_1,0);
                }
                _printk(0x80007fb,iVar4,uVar2 >> 8 & 0xf,(uVar3 & 0xf) + (uVar3 >> 4 & 0xf) * 10);
                return 0;
            }
            iVar4 = param_2[0xf];
            if (iVar4 == 0) {
                iVar4 = param_2[1];
            }
            _printk(0x8000330,iVar4);
            iVar4 = param_2[0xf];
            goto joined_r0x080027b4;
        }
        iVar4 = param_2[0xf];
    }
    else {
        param_1[0x17] = 0;
        iVar4 = param_2[0xf];
    }
    iVar1 = -0xc;
joined_r0x080027b4:
    if (iVar4 == 0) {
        iVar4 = param_2[1];
    }
    pcVar6 = *(*param_1 + 0x10);
    if (pcVar6 == NULL) {
        uVar2 = sym.readl_relaxed(param_1[1]);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
        uVar2 = (*pcVar6)(param_1,0);
    }
    pcVar6 = *(*param_1 + 0x10);
    if (pcVar6 == NULL) {
        uVar3 = sym.readl_relaxed(param_1[1]);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
        uVar3 = (*pcVar6)(param_1,0);
    }
    _printk(0x8000554,iVar4,uVar2 >> 8 & 0xf,(uVar3 & 0xf) + (uVar3 >> 4 & 0xf) * 10,iVar1);
    return iVar1;
}


// ===== sym.cqhci_crypto_keyslot_program.1b0cf1b26cc4c8c5da90e27c8298a6a0.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.cqhci_crypto_keyslot_program.1b0cf1b26cc4c8c5da90e27c8298a6a0.cfi_jt
                (int64_t param_1,uint32_t *param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong *puVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint8_t *puVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar12;
    code *pcVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
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
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
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
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    uVar2 = *param_2;
    uVar10 = uVar2;
    if (4 < uVar2) {
code_r0x08004f0c:
    //WARNING: Does not return
        pcVar13 = SoftwareBreakpoint(0x5512,0x8004f10);
        (*pcVar13)();
    }
    iVar12 = *(param_1 + -0x10);
    uStack_58 = 0;
    uStack_50 = 0;
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
    if (*(iVar12 + 0xc0) != 0) {
        if (3 < uVar2) {
code_r0x08004f08:
    //WARNING: Does not return
            pcVar13 = SoftwareBreakpoint(1,0x8004f0c);
            (*pcVar13)();
        }
        uVar9 = 0;
        puVar11 = *(iVar12 + 200) + 1;
        do {
            if (*(obj.cqhci_crypto_algs + uVar10 * 8) == puVar11[-1]) {
                if (0x20 < (uVar10 << 3 | 4)) goto code_r0x08004f08;
                if ((*(uVar10 * 8 + 0x8000ad4) == puVar11[1]) && ((param_2[1] >> 9 & *puVar11) != 0)) {
                    if (-1 < uVar9) {
                        puVar8 = param_2 + 6;
                        uVar2 = param_2[5];
                        uVar10 = uVar2;
                        uStack_88._0_3_ = CONCAT11(uVar9,param_2[1] >> 9);
                        uStack_88 = CONCAT13(0x80,uStack_88);
                        if (puVar11[-1] == 0) {
                            uVar10 = uVar2 >> 1;
                            memcpy(&uStack_c8,puVar8,uVar10);
                            if (0x101 < uVar2) goto code_r0x08004f0c;
                            puVar4 = &uStack_a8;
                            puVar8 = param_2 + uVar10 + 0x18;
                        }
                        else {
                            puVar4 = &uStack_c8;
                        }
                        memcpy(puVar4,puVar8,uVar10);
                        uVar10 = param_3;
                        uVar5 = sym.cqhci_crypto_program_key(iVar12,&uStack_c8,uVar10);
                        uStack_c8 = 0;
                        uStack_c0 = 0;
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uStack_a8 = 0;
                        uStack_a0 = 0;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        uStack_58 = 0;
                        uStack_50 = 0;
                        iVar12 = sp_el0;
                        if (*(iVar12 + 0x5e0) == iStack_48) {
                            return uVar5;
                        }
                        iVar6 = __stack_chk_fail();
                        *extraout_x18 = sym.cqhci_crypto_keyslot_evict;
                        pcStack_d8 = sym.cqhci_crypto_keyslot_evict;
                        iVar12 = sp_el0;
                        iStack_e8 = *(iVar12 + 0x5e0);
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
                        puStack_e0 = &stack0xffffffffffffffc0;
                        uVar5 = sym.cqhci_crypto_program_key(*(iVar6 + -0x10),&uStack_168,uVar10);
                        iVar12 = sp_el0;
                        if (*(iVar12 + 0x5e0) == iStack_e8) {
                            return uVar5;
                        }
                        auVar14 = __stack_chk_fail();
                        iVar12 = auVar14._8_8_;
                        piVar7 = auVar14._0_8_;
                        *extraout_x18_00 = sym.cqhci_crypto_program_key;
                        pcVar13 = *(*piVar7 + 0x40);
                        if (pcVar13 == NULL) {
                            pcVar13 = *(*piVar7 + 8);
                            uVar2 = piVar7[0x1a] + uVar10 * 0x80;
                            iVar1 = uVar2 + 0x40;
                            if (pcVar13 == NULL) {
                                sym.writel_relaxed_1(0,piVar7[1] + iVar1);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000310);
                                (*pcVar13)(piVar7,0,iVar1);
                            }
                            iVar6 = 0;
                            do {
                                uVar3 = *(iVar12 + iVar6);
                                pcVar13 = *(*piVar7 + 8);
                                if (pcVar13 == NULL) {
                                    sym.writel_relaxed_1(uVar3,piVar7[1] + uVar2 + iVar6);
                                }
                                else {
                                    __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000310);
                                    (*pcVar13)(piVar7,uVar3,uVar2 + iVar6 & 0xffffffff);
                                }
                                iVar6 = iVar6 + 4;
                            } while (iVar6 != 0x40);
                            uVar3 = *(iVar12 + 0x44);
                            pcVar13 = *(*piVar7 + 8);
                            if (pcVar13 == NULL) {
                                sym.writel_relaxed_1(uVar3,piVar7[1] + uVar2 + 0x44);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000310);
                                (*pcVar13)(piVar7,uVar3,uVar2 + 0x44);
                            }
                            uVar2 = *(iVar12 + 0x40);
                            pcVar13 = *(*piVar7 + 8);
                            if (pcVar13 == NULL) {
                                sym.writel_relaxed_1(uVar2,piVar7[1] + iVar1);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000310);
                                (*pcVar13)(piVar7,uVar2,iVar1);
                            }
                            uVar5 = 0;
                        }
                        else {
                            __cfi_slowpath_diag(0x666408267b48a086,pcVar13,0x80002f0);
                            uVar5 = (*pcVar13)(piVar7,iVar12,uVar10 & 0xffffffff);
                        }
                        return uVar5;
                    }
                    break;
                }
            }
            uVar9 = uVar9 + 1;
            puVar11 = puVar11 + 4;
        } while (*(iVar12 + 0xc0) != uVar9);
    }
    //WARNING: Does not return
    pcVar13 = SoftwareBreakpoint(0x800,0x8004e6c);
    (*pcVar13)();
}


// ===== sym.cqhci_crypto_keyslot_evict.1b0cf1b26cc4c8c5da90e27c8298a6a0.cfi_jt @ 0x08001230 (size 8) =====

ulong sym.cqhci_crypto_keyslot_evict.1b0cf1b26cc4c8c5da90e27c8298a6a0.cfi_jt
                (int64_t param_1,ulong param_2,uint64_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
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
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_18 = *(iVar6 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
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
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar4 = sym.cqhci_crypto_program_key(*(param_1 + -0x10),&uStack_98,param_3);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    auVar9 = __stack_chk_fail();
    iVar6 = auVar9._8_8_;
    piVar5 = auVar9._0_8_;
    *extraout_x18 = sym.cqhci_crypto_program_key;
    pcVar7 = *(*piVar5 + 0x40);
    if (pcVar7 == NULL) {
        pcVar7 = *(*piVar5 + 8);
        uVar2 = piVar5[0x1a] + param_3 * 0x80;
        iVar1 = uVar2 + 0x40;
        if (pcVar7 == NULL) {
            sym.writel_relaxed_1(0,piVar5[1] + iVar1);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
            (*pcVar7)(piVar5,0,iVar1);
        }
        iVar8 = 0;
        do {
            uVar3 = *(iVar6 + iVar8);
            pcVar7 = *(*piVar5 + 8);
            if (pcVar7 == NULL) {
                sym.writel_relaxed_1(uVar3,piVar5[1] + uVar2 + iVar8);
            }
            else {
                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
                (*pcVar7)(piVar5,uVar3,uVar2 + iVar8 & 0xffffffff);
            }
            iVar8 = iVar8 + 4;
        } while (iVar8 != 0x40);
        uVar3 = *(iVar6 + 0x44);
        pcVar7 = *(*piVar5 + 8);
        if (pcVar7 == NULL) {
            sym.writel_relaxed_1(uVar3,piVar5[1] + uVar2 + 0x44);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
            (*pcVar7)(piVar5,uVar3,uVar2 + 0x44);
        }
        uVar2 = *(iVar6 + 0x40);
        pcVar7 = *(*piVar5 + 8);
        if (pcVar7 == NULL) {
            sym.writel_relaxed_1(uVar2,piVar5[1] + iVar1);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
            (*pcVar7)(piVar5,uVar2,iVar1);
        }
        uVar4 = 0;
    }
    else {
        __cfi_slowpath_diag(0x666408267b48a086,pcVar7,0x80002f0);
        uVar4 = (*pcVar7)(piVar5,iVar6,param_3 & 0xffffffff);
    }
    return uVar4;
}


// ===== sym.cqhci_resume.cfi_jt @ 0x08001238 (size 8) =====

ulong sym.cqhci_resume.cfi_jt(void)

{
    return 0;
}


// ===== sym.cqhci_deactivate.cfi_jt @ 0x08001240 (size 8) =====

ulong sym.cqhci_deactivate.cfi_jt(int64_t param_1)

{
    int64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0x658);
    if ((*(arg1 + 0x38) != '\0') && (*(arg1 + 0x3b) != '\0')) {
        sym.__cqhci_disable(arg1);
    }
    return 0;
}


// ===== sym.cqhci_wait_for_idle.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001248 (size 8) =====

uint32_t sym.cqhci_wait_for_idle.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(int64_t param_1,ulong param_2,uchar *param_3)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar8 = *(param_1 + 0x658);
    iVar5 = iVar8 + 0x18;
    uVar4 = _raw_spin_lock_irqsave(iVar5);
    bVar2 = *(iVar8 + 0x28) != 0;
    bVar3 = *(iVar8 + 0x3d) != '\0';
    uVar7 = 0;
    if (bVar3) {
        uVar7 = 0xfffffff0;
    }
    *(iVar8 + 0x3c) = bVar2 && !bVar3;
    _raw_spin_unlock_irqrestore(iVar5,uVar4);
    if (bVar2 && !bVar3) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        init_wait_entry(&uStack_70,0);
        while( true ) {
            param_3 = 0x2;
            prepare_to_wait_event(iVar8 + 0xa0,&uStack_70);
            uVar4 = _raw_spin_lock_irqsave(iVar5);
            cVar1 = *(iVar8 + 0x3d);
            bVar2 = *(iVar8 + 0x28) == 0;
            *(iVar8 + 0x3c) = !bVar2 && cVar1 == '\0';
            _raw_spin_unlock_irqrestore(iVar5,uVar4);
            if (bVar2 || cVar1 != '\0') break;
            schedule();
        }
        uVar7 = 0;
        if (cVar1 != '\0') {
            uVar7 = 0xfffffff0;
        }
        finish_wait(iVar8 + 0xa0,&uStack_70);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._8_8_;
    iVar5 = auVar12._0_8_;
    *extraout_x18 = sym.cqhci_timeout;
    arg1 = *(iVar5 + 0x658);
    if (*(iVar8 + 8) == 0) {
        uVar9 = *(iVar8 + 0x7c);
    }
    else {
        uVar9 = 0x1f;
    }
    iVar6 = arg1 + 0x18;
    iVar11 = *(arg1 + 0xb8);
    uVar4 = _raw_spin_lock_irqsave(iVar6);
    iVar10 = *(iVar11 + (-(uVar9 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4));
    if (iVar10 == iVar8) {
        iVar11 = iVar11 + uVar9 * 0x10;
        *(iVar11 + 8) = *(iVar11 + 8) | 1;
        iVar11 = *(iVar5 + 0x658);
        if (*(iVar11 + 0x3d) == '\0') {
            *(iVar11 + 0x3d) = 1;
            __wake_up(iVar11 + 0xa0,3,1,0);
        }
        *param_3 = *(arg1 + 0x3d);
        _raw_spin_unlock_irqrestore(iVar6,uVar4);
        iVar6 = *(iVar5 + 0x78);
        if (iVar6 == 0) {
            iVar6 = *(iVar5 + 8);
        }
        _printk(0x800092f,iVar6,uVar9);
        sym.cqhci_dumpregs(arg1);
    }
    else {
        _raw_spin_unlock_irqrestore(iVar6,uVar4);
    }
    return iVar10 == iVar8;
}


// ===== sym.cqhci_request.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001250 (size 8) =====

code * sym.cqhci_request.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(code *param_1,code *param_2)

{
    code cVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t *arg1;
    code *pcVar11;
    code *unaff_x23;
    uint32_t *puVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if (*(param_2 + 8) == 0) {
        uVar14 = *(param_2 + 0x7c);
    }
    else {
        uVar14 = 0x1f;
    }
    arg1 = *(param_1 + 0x658);
    if (arg1[7] == '\0') {
        iVar6 = *(param_1 + 0x78);
        if (iVar6 == 0) {
            iVar6 = *(param_1 + 8);
        }
        _printk(0x800049a,iVar6);
        pcVar11 = 0xffffffea;
        goto code_r0x08003328;
    }
    if (*(arg1 + 0x3b) == '\0') {
        sym.__cqhci_enable(arg1);
        cVar1 = param_1[0x665];
    }
    else {
        cVar1 = param_1[0x665];
    }
    if (cVar1 != 0x0) goto code_r0x08002fb4;
    iVar6 = *arg1;
    unaff_x23 = sym.__typeid__ZTSFvP8mmc_hostE_global_addr;
    pcVar11 = *(iVar6 + 0x30);
    if (pcVar11 == NULL) goto code_r0x08002f54;
    if (3 < (pcVar11 + -0x8001258 >> 3 | pcVar11 << 0x3d)) goto code_r0x08003460;
    do {
        (*pcVar11)(param_1);
        iVar6 = *arg1;
code_r0x08002f54:
        pcVar11 = *(iVar6 + 8);
        if (pcVar11 == NULL) {
            sym.writel_relaxed(0,arg1[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
            (*pcVar11)(arg1,0,0xc);
        }
        param_1[0x665] = 0x1;
        pcVar11 = *(*arg1 + 0x10);
        if (pcVar11 == NULL) {
            iVar3 = sym.readl_relaxed(arg1[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar11,0x8000130);
            iVar3 = (*pcVar11)(arg1,0xc);
        }
        if (iVar3 != 0) {
            iVar6 = *(param_1 + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(param_1 + 8);
            }
            _printk(0x800068d,iVar6);
        }
        pcVar11 = *(*arg1 + 0x18);
        if (pcVar11 != NULL) {
            if (3 < (pcVar11 - unaff_x23 >> 3 | pcVar11 - unaff_x23 << 0x3d)) {
                __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar11,0x8000230);
            }
            (*pcVar11)(param_1);
        }
code_r0x08002fb4:
        iVar6 = *(param_2 + 0x10);
        if (iVar6 == 0) {
            piVar13 = *(param_1 + 0x658);
            uStack_70 = 0;
            puVar7 = piVar13[10] + *(piVar13 + 0xb) * *(piVar13 + 0x2c);
            uVar9 = *(*(param_2 + 8) + 0x18) & 1;
            uVar10 = 0x1000000;
            if ((*(*(param_2 + 8) + 0x18) & 0x1d) != 0) {
                uVar10 = 0x1800000;
            }
            uVar4 = 0;
            if (uVar9 != 0) {
                uVar4 = uVar10;
            }
            memset(puVar7,0,*(piVar13 + 0x59));
            uStack_70 = uStack_70 | (**(param_2 + 8) << 0x10 & 0x3f0000 | uVar9 << 0x16 | uVar4) ^ 0x40402f;
            pcVar11 = *(*piVar13 + 0x28);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x4c7db2241fcf9d02,pcVar11,0x8000250);
                (*pcVar11)(param_1,param_2,&uStack_70);
            }
            *puVar7 = *puVar7 | uStack_70;
            *(puVar7 + 4) = *(*(param_2 + 8) + 4);
code_r0x080031d0:
            piVar13 = arg1 + 3;
            unaff_x23 = _raw_spin_lock_irqsave(piVar13);
            if (*(arg1 + 0x3d) == '\0') {
                uVar9 = -(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4;
                *(arg1[0x17] + uVar9) = param_2;
                uVar10 = 1 << (uVar14 & 0x1f);
                *(arg1[0x17] + uVar9 + 8) = 0;
                *(arg1 + 5) = arg1[5] + 1;
                DataSynchronizationBarrier(3,2,0);
                param_2 = *(*arg1 + 8);
                if (param_2 == NULL) {
                    sym.writel_relaxed(uVar10,arg1[1] + 0x28);
                }
                else {
                    __cfi_slowpath_diag(0x5568c9793ee870d9,param_2,0x8000170);
                    (*param_2)(arg1,uVar10,0x28);
                }
                param_1 = *(*arg1 + 0x10);
                if (param_1 == NULL) {
                    sym.readl_relaxed(arg1[1] + 0x28);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,param_1,0x8000130);
                    (*param_1)(arg1,0x28);
                }
                _raw_spin_unlock_irqrestore(piVar13,unaff_x23);
                pcVar11 = NULL;
            }
            else {
                _raw_spin_unlock_irqrestore(piVar13,unaff_x23);
                iVar6 = *(param_2 + 0x10);
                if (iVar6 != 0) {
                    uVar5 = 1;
                    if ((*(iVar6 + 0x18) & 0x200) != 0) {
                        uVar5 = 2;
                    }
                    dma_unmap_sg_attrs(*param_1,*(iVar6 + 0x38),*(iVar6 + 0x30),uVar5,0);
                }
                pcVar11 = 0xfffffff0;
            }
        }
        else {
            uVar4 = *(iVar6 + 0x18);
            uVar10 = uVar14 & 0xff;
            unaff_x23 = uVar10;
            puVar7 = arg1[10] + *(arg1 + 0xb) * unaff_x23;
            *puVar7 = uVar4 >> 2 & 0x800 | uVar4 >> 8 & 0x40 | uVar4 << 3 & 0x1000 | uVar4 << 2 & 0x2000 |
                      uVar4 << 4 & 0x4000 | *(iVar6 + 0xc) << 0x10 | *(iVar6 + 0x10) << 0x20 | 0x2f;
            if ((*(arg1 + 6) & 1) != 0) {
                uVar9 = 0;
                if (*(param_2 + 0x80) != 0) {
                    uVar9 = *(*(param_2 + 0x80) + 8);
                    if (uVar9 >> 0x20 != 0) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x800,0x8003450);
                        (*pcVar11)();
                    }
                    uVar9 = uVar9 | *(param_2 + 0x88) << 0x20 | 0x800000000000;
                }
                puVar7[1] = uVar9;
            }
            iVar6 = *(param_2 + 0x10);
            if (iVar6 == 0) {
                pcVar11 = 0xffffffea;
            }
            else {
                uVar5 = 1;
                if ((*(iVar6 + 0x18) & 0x100) == 0) {
                    uVar5 = 2;
                }
                iVar2 = arg1[4];
                uVar4 = dma_map_sg_attrs(**(param_2 + 0x70),*(iVar6 + 0x38),*(iVar6 + 0x30),uVar5,0);
                if (uVar4 == 0) {
                    _printk(0x8000542,"cqhci_dma_map",*(iVar6 + 0x30));
                    pcVar11 = 0xfffffff4;
                }
                else {
                    pcVar11 = uVar4;
                    if (-1 < uVar4) {
                        iVar6 = *(iVar6 + 0x38);
                        puVar12 = arg1[0xc] + uVar10 * *(arg1 + 0xd) * *(arg1[2] + 0x3f8);
                        do {
                            uVar10 = 0x23;
                            if (pcVar11 != 1) {
                                uVar10 = 0x21;
                            }
                            uVar8 = *(iVar6 + 0x10);
                            *puVar12 = uVar10 | *(iVar6 + 0x18) << 0x10;
                            if (iVar2 == '\0') {
                                puVar12[1] = uVar8;
                            }
                            else {
                                *(puVar12 + 1) = uVar8;
                            }
                            puVar12 = puVar12 + *(arg1 + 0xd);
                            iVar6 = sg_next();
                            uVar10 = pcVar11 - 1;
                            pcVar11 = uVar10;
                        } while (uVar10 != 0);
                        goto code_r0x080031d0;
                    }
                }
            }
            iVar6 = *(*(param_2 + 0x70) + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(*(param_2 + 0x70) + 8);
            }
            _printk(0x800035a,iVar6,"cqhci_prep_tran_desc",pcVar11);
            iVar6 = *(param_1 + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(param_1 + 8);
            }
            _printk(0x8000590,iVar6,pcVar11);
        }
code_r0x08003328:
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_68) {
            return pcVar11;
        }
        __stack_chk_fail();
code_r0x08003460:
        __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar11,0x8000210);
    } while( true );
}


// ===== sym.__typeid__ZTSFvP8mmc_hostE_global_addr @ 0x08001258 (size 8) =====

void sym.__typeid__ZTSFvP8mmc_hostE_global_addr(ulong *param_1)

{
    ulong *in_x18;
    int64_t *arg1;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = param_1[0xcb];
    if (arg1[7] != '\0') {
        sym.cqhci_off(param_1);
        sym.__cqhci_disable(arg1);
        pcVar1 = *(*arg1 + 0x48);
        if (pcVar1 != NULL) {
            __cfi_slowpath_diag(0xb94480562807b25e,pcVar1,0x80001f0);
            (*pcVar1)(param_1,0);
        }
        dmam_free_coherent(*param_1,arg1[9],arg1[0xc],arg1[0xf]);
        dmam_free_coherent(*param_1,arg1[8],arg1[10],arg1[0xe]);
        arg1[0xc] = 0;
        arg1[10] = 0;
        *(arg1 + 7) = 0;
    }
    return;
}


// ===== sym.cqhci_off.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001260 (size 8) =====

void sym.cqhci_off.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(int64_t param_1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(param_1 + 0x658);
    if (((piVar4[7] != '\0') && (*(param_1 + 0x665) != '\0')) && (*(piVar4 + 0x3d) == '\0')) {
        iVar3 = *piVar4;
        pcVar5 = *(iVar3 + 0x20);
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0xb94480562807b25e,pcVar5,0x8000270);
            (*pcVar5)(param_1,0);
            iVar3 = *piVar4;
        }
        pcVar5 = *(iVar3 + 8);
        if (pcVar5 == NULL) {
            sym.writel_relaxed(1,piVar4[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
            (*pcVar5)(piVar4,1,0xc);
        }
        iVar3 = ktime_get();
        do {
            pcVar5 = *(*piVar4 + 0x10);
            if (pcVar5 == NULL) {
                uVar1 = sym.readl_relaxed(piVar4[1] + 0xc);
            }
            else {
                __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
                uVar1 = (*pcVar5)(piVar4,0xc);
            }
            if ((uVar1 & 1) != 0) goto joined_r0x080036bc;
            iVar2 = ktime_get();
        } while (iVar2 <= iVar3 + 100000);
        pcVar5 = *(*piVar4 + 0x10);
        if (pcVar5 == NULL) {
            uVar1 = sym.readl_relaxed(piVar4[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
            uVar1 = (*pcVar5)(piVar4,0xc);
        }
joined_r0x080036bc:
        if ((uVar1 & 1) == 0) {
            iVar3 = *(param_1 + 0x78);
            if (iVar3 == 0) {
                iVar3 = *(param_1 + 8);
            }
            _printk(0x8000712,iVar3);
        }
        pcVar5 = *(*piVar4 + 0x38);
        if (pcVar5 != NULL) {
            if (3 < (pcVar5 + -0x8001258 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar5,0x8000290);
            }
            (*pcVar5)(param_1);
        }
        *(param_1 + 0x665) = 0;
    }
    return;
}


// ===== sym.cqhci_recovery_start.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001268 (size 8) =====

void sym.cqhci_recovery_start.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t *piVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(param_1 + 0x658);
    if (*(piVar1 + 0x3d) != '\0') {
        sym.cqhci_halt(param_1,5);
        pcVar2 = *(*piVar1 + 0x20);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0xb94480562807b25e,pcVar2,0x80002b0);
            (*pcVar2)(param_1,1);
        }
        *(param_1 + 0x665) = 0;
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x80039dc);
    (*pcVar2)();
}


// ===== sym.cqhci_recovery_finish.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt @ 0x08001270 (size 8) =====

void sym.cqhci_recovery_finish.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int iVar6;
    int64_t iVar7;
    uint uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    code *pcVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(param_1 + 0x658);
    if (*(piVar10 + 0x3d) == '\0') {
    //WARNING: Does not return
        pcVar11 = SoftwareBreakpoint(0x800,0x8003c0c);
        (*pcVar11)();
    }
    uVar2 = sym.cqhci_halt(param_1,0x14);
    uVar3 = sym.cqhci_clear_all_tasks(param_1);
    if (((uVar3 & 1) == 0) || ((uVar2 & 1) == 0)) {
        pcVar11 = *(*piVar10 + 0x10);
        if (pcVar11 == NULL) {
            uVar1 = sym.readl_relaxed(piVar10[1] + 8);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar11,0x8000130);
            uVar1 = (*pcVar11)(piVar10,8);
        }
        pcVar11 = *(*piVar10 + 8);
        if (pcVar11 == NULL) {
            sym.writel_relaxed(uVar1 & 0xfffffffe,piVar10[1] + 8);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
            (*pcVar11)(piVar10,uVar1 & 0xfffffffe,8);
        }
        pcVar11 = *(*piVar10 + 8);
        if (pcVar11 == NULL) {
            sym.writel_relaxed(uVar1 | 1,piVar10[1] + 8);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
            (*pcVar11)(piVar10,uVar1 | 1,8);
        }
        uVar2 = sym.cqhci_halt(param_1,0x14);
        uVar3 = sym.cqhci_clear_all_tasks(param_1);
        if (((uVar3 & 1) == 0) || ((uVar2 & 1) == 0)) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x800,0x8003d50);
            (*pcVar11)();
        }
    }
    iVar6 = *(piVar10 + 0x24);
    if (0 < iVar6) {
        iVar12 = 0;
        iVar13 = 0;
        do {
            iVar9 = piVar10[0x17];
            iVar5 = *(iVar9 + iVar12);
            if (iVar5 != 0) {
                *(iVar9 + iVar12) = 0;
                *(piVar10 + 5) = piVar10[5] + -1;
                iVar7 = *(iVar5 + 0x10);
                if (iVar7 == 0) {
                    uVar1 = *(iVar9 + iVar12 + 8);
                    uVar8 = 0;
                    if (uVar1 != 0) {
                        if ((uVar1 >> 2 & 1) == 0) {
                            uVar8 = 0xfffffffb;
                            if ((uVar1 & 9) != 0) {
                                uVar8 = 0xffffff92;
                            }
                        }
                        else {
                            uVar8 = 0xffffffac;
                        }
                    }
                    *(*(iVar5 + 8) + 0x20) = uVar8;
                }
                else {
                    *(iVar7 + 0x1c) = 0;
                    uVar1 = *(iVar9 + iVar12 + 8);
                    uVar8 = 0;
                    if (uVar1 != 0) {
                        if ((uVar1 >> 2 & 1) == 0) {
                            uVar8 = 0xfffffffb;
                            if ((uVar1 & 9) != 0) {
                                uVar8 = 0xffffff92;
                            }
                        }
                        else {
                            uVar8 = 0xffffffac;
                        }
                    }
                    *(iVar7 + 0x14) = uVar8;
                }
                mmc_cqe_request_done(piVar10[2]);
                iVar6 = *(piVar10 + 0x24);
            }
            iVar13 = iVar13 + 1;
            iVar12 = iVar12 + 0x10;
        } while (iVar13 < iVar6);
    }
    if (piVar10[5] != 0) {
    //WARNING: Does not return
        pcVar11 = SoftwareBreakpoint(0x800,0x8003c14);
        (*pcVar11)();
    }
    uVar4 = _raw_spin_lock_irqsave(piVar10 + 3);
    *(piVar10 + 5) = 0;
    *(piVar10 + 0x3d) = 0;
    *(param_1 + 0x665) = 0;
    _raw_spin_unlock_irqrestore(piVar10 + 3,uVar4);
    DataSynchronizationBarrier(3,2,0);
    pcVar11 = *(*piVar10 + 8);
    if (pcVar11 == NULL) {
        sym.writel_relaxed(9,piVar10[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
        (*pcVar11)(piVar10,9,0x10);
    }
    pcVar11 = *(*piVar10 + 8);
    if (pcVar11 == NULL) {
        sym.writel_relaxed(0x36,piVar10[1] + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
        (*pcVar11)(piVar10,0x36,0x14);
    }
    pcVar11 = *(*piVar10 + 8);
    if (pcVar11 == NULL) {
        sym.writel_relaxed(0x36,piVar10[1] + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
        (*pcVar11)(piVar10,0x36,0x18);
    }
    return;
}


// ===== sym.cqhci_irq.cfi_jt @ 0x08001278 (size 8) =====

ulong sym.cqhci_irq.cfi_jt(int64_t param_1,ulong param_2,int param_3,int param_4)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar11;
    int64_t iVar12;
    code *pcVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t *piVar16;
    int64_t *piVar17;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    piVar11 = *(param_1 + 0x658);
    uStack_70 = 0;
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar4 = sym.readl_relaxed(piVar11[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar4 = (*pcVar13)(piVar11,0x10);
    }
    uVar14 = uVar4;
    if ((param_4 == 0 && param_3 == 0) && ((uVar4 & 0x34) == 0)) {
        pcVar13 = *(*piVar11 + 8);
        if (pcVar13 == NULL) {
            sym.writel_relaxed(uVar14,piVar11[1] + 0x10);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
            (*pcVar13)(piVar11,uVar14,0x10);
        }
        goto code_r0x0800144c;
    }
    if ((uVar4 >> 2 & 1) == 0) {
        if ((uVar4 >> 4 & 1) == 0) goto code_r0x08001700;
code_r0x0800179c:
        *(param_1 + 0x754) = *(param_1 + 0x754) + 1;
        if ((uVar4 >> 5 & 1) != 0) goto code_r0x080017ac;
code_r0x08001704:
        iVar9 = *(param_1 + 0x78);
    }
    else {
        *(param_1 + 0x750) = *(param_1 + 0x750) + 1;
        if ((uVar4 >> 4 & 1) != 0) goto code_r0x0800179c;
code_r0x08001700:
        if ((uVar4 >> 5 & 1) == 0) goto code_r0x08001704;
code_r0x080017ac:
        *(param_1 + 0x758) = *(param_1 + 0x758) + 1;
        iVar9 = *(param_1 + 0x78);
    }
    if (iVar9 == 0) {
        iVar9 = *(param_1 + 8);
    }
    _printk(0x80007b9,iVar9,uVar14,param_3,param_4);
    sym.cqhci_dumpregs(piVar11);
    pcVar13 = *(*piVar11 + 8);
    if (pcVar13 == NULL) {
        sym.writel_relaxed(uVar14,piVar11[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
        (*pcVar13)(piVar11,uVar14,0x10);
    }
    piVar16 = *(param_1 + 0x658);
    _raw_spin_lock(piVar16 + 3);
    pcVar13 = *(*piVar16 + 0x10);
    if (pcVar13 == NULL) {
        uVar5 = sym.readl_relaxed(piVar16[1] + 0x54);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar5 = (*pcVar13)(piVar16,0x54);
    }
    if (*(piVar16 + 0x3d) == '\0') {
        if (piVar16[5] == 0) {
            if ((obj.cqhci_error_irq.__already_done & 1) == 0) {
                iVar9 = *(param_1 + 0x78);
                obj.cqhci_error_irq.__already_done = 0x1;
                if (iVar9 == 0) {
                    iVar9 = *(param_1 + 8);
                }
                __warn_printk("%s: cqhci: error when idle. IRQ status: 0x%08x cmd error %d data error %d TERRI: 0x%08x\n"
                              ,iVar9,uVar14,param_3,param_4,uVar5);
    //WARNING: Does not return
                pcVar13 = SoftwareBreakpoint(0x800,0x8001a70);
                (*pcVar13)();
            }
        }
        else {
            if ((uVar5 >> 0xf & 1) != 0) {
                uVar15 = uVar5 >> 8 & 0x1f;
                iVar9 = *(piVar16[0x17] + uVar15 * 0x10);
                if (iVar9 != 0) {
                    iVar1 = param_4;
                    if (param_3 != 0) {
                        iVar1 = param_3;
                    }
                    uVar6 = 8;
                    if (iVar1 != -0x6e) {
                        uVar6 = 0x10;
                    }
                    uVar7 = 4;
                    if (iVar1 != -0x54) {
                        uVar7 = uVar6;
                    }
                    *(piVar16[0x17] + uVar15 * 0x10 + 8) = uVar7;
                    iVar12 = *(param_1 + 0x658);
                    if (*(iVar12 + 0x3d) == '\0') {
                        *(iVar12 + 0x3d) = 1;
                        __wake_up(iVar12 + 0xa0,3,1,0);
                        pcVar13 = *(iVar9 + 0x68);
                        if (pcVar13 != NULL) {
                            __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                            (*pcVar13)(iVar9);
                        }
                    }
                }
            }
            if (uVar5 < 0) {
                uVar15 = uVar5 >> 0x18 & 0x1f;
                iVar9 = *(piVar16[0x17] + uVar15 * 0x10);
                if (iVar9 != 0) {
                    iVar1 = param_3;
                    if (param_4 != 0) {
                        iVar1 = param_4;
                    }
                    uVar6 = 8;
                    if (iVar1 != -0x6e) {
                        uVar6 = 0x10;
                    }
                    uVar7 = 4;
                    if (iVar1 != -0x54) {
                        uVar7 = uVar6;
                    }
                    *(piVar16[0x17] + uVar15 * 0x10 + 8) = uVar7;
                    iVar12 = *(param_1 + 0x658);
                    if (*(iVar12 + 0x3d) == '\0') {
                        *(iVar12 + 0x3d) = 1;
                        __wake_up(iVar12 + 0xa0,3,1,0);
                        pcVar13 = *(iVar9 + 0x68);
                        if (pcVar13 != NULL) {
                            __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                            (*pcVar13)(iVar9);
                        }
                    }
                }
            }
            if ((uVar4 >> 5 & 1) != 0) {
                pcVar13 = *(*piVar16 + 0x10);
                if (pcVar13 == NULL) {
                    uVar5 = sym.readl_relaxed(piVar16[1] + 0x3c);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
                    uVar5 = (*pcVar13)(piVar16,0x3c);
                }
                if ((obj.cqhci_error_irq.__already_done.24 & 1) == 0) {
                    iVar9 = *(param_1 + 0x78);
                    obj.cqhci_error_irq.__already_done.24 = 0x1;
                    if (iVar9 == 0) {
                        iVar9 = *(param_1 + 8);
                    }
                    __warn_printk("%s: cqhci: invalid crypto configuration error. IRQ status: 0x%08x TDPE: 0x%08x\n",
                                  iVar9,uVar14,uVar5);
    //WARNING: Does not return
                    pcVar13 = SoftwareBreakpoint(0x800,0x8001c84);
                    (*pcVar13)();
                }
                iVar1 = param_3;
                if (param_4 != 0) {
                    iVar1 = param_4;
                }
                uVar6 = 8;
                if (iVar1 != -0x6e) {
                    uVar6 = 0x10;
                }
                uVar7 = 4;
                if (iVar1 != -0x54) {
                    uVar7 = uVar6;
                }
                for (; uVar5 != 0; uVar5 = uVar5 & (1 << (iVar9 & 0x1f) ^ 0xffffffffU)) {
                    uVar3 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
                    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                    iVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
                    iVar12 = *(piVar16[0x17] + iVar9 * 0x10);
                    if (iVar12 != 0) {
                        *(piVar16[0x17] + iVar9 * 0x10 + 8) = uVar7;
                        iVar10 = *(param_1 + 0x658);
                        if (*(iVar10 + 0x3d) == '\0') {
                            *(iVar10 + 0x3d) = 1;
                            __wake_up(iVar10 + 0xa0,3,1,0);
                            pcVar13 = *(iVar12 + 0x68);
                            if (pcVar13 != NULL) {
                                __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                                (*pcVar13)(iVar12);
                            }
                        }
                    }
                }
            }
            if (*(piVar16 + 0x3d) == '\0') {
                iVar9 = 0;
                do {
                    iVar12 = *(piVar16[0x17] + iVar9);
                    if (iVar12 != 0) {
                        if (param_4 != 0) {
                            param_3 = param_4;
                        }
                        uVar6 = 8;
                        if (param_3 != -0x6e) {
                            uVar6 = 0x10;
                        }
                        uVar7 = 4;
                        if (param_3 != -0x54) {
                            uVar7 = uVar6;
                        }
                        *(piVar16[0x17] + iVar9 + 8) = uVar7;
                        iVar9 = *(param_1 + 0x658);
                        if (*(iVar9 + 0x3d) == '\0') {
                            *(iVar9 + 0x3d) = 1;
                            __wake_up(iVar9 + 0xa0,3,1,0);
                            pcVar13 = *(iVar12 + 0x68);
                            if (pcVar13 != NULL) {
                                __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                                (*pcVar13)(iVar12);
                            }
                        }
                        break;
                    }
                    iVar9 = iVar9 + 0x10;
                } while (iVar9 != 0x200);
            }
        }
    }
    _raw_spin_unlock(piVar16 + 3);
code_r0x0800144c:
    if ((uVar4 >> 1 & 1) != 0) {
        pcVar13 = *(*piVar11 + 0x10);
        if (pcVar13 == NULL) {
            uVar14 = sym.readl_relaxed(piVar11[1] + 0x2c);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
            uVar14 = (*pcVar13)(piVar11,0x2c);
        }
        uStack_70 = uVar14 & 0xffffffff;
        pcVar13 = *(*piVar11 + 8);
        if (pcVar13 == NULL) {
            sym.writel_relaxed(uVar14 & 0xffffffff,piVar11[1] + 0x2c);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
            (*pcVar13)(piVar11,uVar14 & 0xffffffff,0x2c);
        }
        _raw_spin_lock();
        uVar14 = _find_first_bit(&uStack_70,*(piVar11 + 0x24));
        if (uVar14 < *(piVar11 + 0x24)) {
            do {
                piVar17 = *(param_1 + 0x658);
                piVar16 = piVar17[0x17] + (uVar14 & 0xffffffff) * 0x10;
                iVar9 = *piVar16;
                if (iVar9 == 0) {
                    if ((obj.cqhci_finish_mrq.__already_done & 1) == 0) {
                        iVar9 = *(param_1 + 0x78);
                        obj.cqhci_finish_mrq.__already_done = 0x1;
                        if (iVar9 == 0) {
                            iVar9 = *(param_1 + 8);
                        }
                        __warn_printk("%s: cqhci: spurious TCN for tag %d\n",iVar9,uVar14 & 0xffffffff);
    //WARNING: Does not return
                        pcVar13 = SoftwareBreakpoint(0x800,0x8001640);
                        (*pcVar13)();
                    }
                }
                else if (*(piVar17 + 0x3d) == '\0') {
                    cVar2 = *(piVar17 + 0x3e);
                    *piVar16 = 0;
                    *(piVar17 + 5) = piVar17[5] + -1;
                    iVar12 = *(iVar9 + 0x10);
                    if (iVar12 == 0) {
                        pcVar13 = *(*piVar17 + 0x10);
                        uVar5 = 0x100;
                        if (cVar2 != '\0') {
                            uVar5 = 0xa00;
                        }
                        uVar15 = uVar5;
                        if (pcVar13 == NULL) {
                            uVar5 = sym.readl_relaxed(piVar17[1] + uVar15);
                        }
                        else {
                            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
                            uVar5 = (*pcVar13)(piVar17,uVar15);
                        }
                        pcVar13 = *(*piVar17 + 8);
                        if (pcVar13 == NULL) {
                            sym.writel_relaxed(uVar5 | 0x80000000,piVar17[1] + uVar15);
                        }
                        else {
                            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
                            (*pcVar13)(piVar17,uVar5 | 0x80000000,uVar15);
                        }
                    }
                    else if (*(iVar12 + 0x14) == 0) {
                        *(iVar12 + 0x1c) = *(iVar12 + 0xc) * *(iVar12 + 8);
                    }
                    else {
                        *(iVar12 + 0x1c) = 0;
                    }
                    mmc_cqe_request_done(param_1,iVar9);
                }
                else {
                    iVar9 = piVar17[0x17] + (uVar14 & 0xffffffff) * 0x10;
                    *(iVar9 + 8) = *(iVar9 + 8) | 2;
                }
                uVar14 = _find_next_bit(&uStack_70,0,*(piVar11 + 0x24),uVar14 + 1,0,0);
            } while (uVar14 < *(piVar11 + 0x24));
        }
        if ((*(piVar11 + 0x3c) != '\0') && (piVar11[5] == 0)) {
            *(piVar11 + 0x3c) = 0;
            __wake_up(piVar11 + 0x14,3,1,0);
        }
        _raw_spin_unlock(piVar11 + 3);
    }
    if ((uVar4 >> 3 & 1) != 0) {
        __wake_up(piVar11 + 0x14,3,1,0);
    }
    if ((uVar4 & 1) != 0) {
        __wake_up(piVar11 + 0x14,3,1,0);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return 1;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.cqhci_dumpregs;
    iVar12 = piVar11[2];
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    cVar2 = *(piVar11 + 0x3e);
    _printk(0x80004d4,iVar9);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 4);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,4);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1]);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0);
    }
    _printk(0x80003d1,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 8);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0xc);
    }
    _printk(0x8000a36,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x10);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x14);
    }
    _printk(0x8000a03,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x18);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x1c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x1c);
    }
    _printk(0x800088d,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x20);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x20);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x24);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x24);
    }
    _printk(0x800050f,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x28);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x28);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x2c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x2c);
    }
    _printk(0x80008c0,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x30);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x30);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x34);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x34);
    }
    _printk(0x8000380,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x38);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x38);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x40);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x40);
    }
    _printk(0x8000a69,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x44);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x44);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x48);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x48);
    }
    _printk(0x800072d,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x50);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x50);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x54);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x54);
    }
    _printk(0x8000766,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x58);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x58);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x5c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x5c);
    }
    _printk(0x8000959,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    uVar4 = 0x100;
    if (cVar2 != '\0') {
        uVar4 = 0xa00;
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + uVar4);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,uVar4);
    }
    _printk(0x8000799,iVar9,uVar6);
    pcVar13 = **piVar11;
    if (pcVar13 == NULL) {
        iVar9 = *(iVar12 + 0x78);
        if (iVar9 == 0) {
            iVar9 = *(iVar12 + 8);
        }
        uVar8 = _printk(0x80008f3,iVar9);
    }
    else {
        if (3 < (pcVar13 + -0x8001258 >> 3 | pcVar13 << 0x3d)) {
            __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar13,0x8000150);
        }
        uVar8 = (*pcVar13)(iVar12);
    }
    return uVar8;
}


// ===== sym.cqhci_qti_crypto_init @ 0x08001280 (size 16) =====

ulong sym.cqhci_qti_crypto_init(int64_t arg1)

{
    return 0;
}


// ===== sym.cqhci_deactivate @ 0x08001290 (size 60) =====

ulong sym.cqhci_deactivate(int64_t arg1)

{
    int64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x658);
    if ((*(arg1_00 + 0x38) != '\0') && (*(arg1_00 + 0x3b) != '\0')) {
        sym.__cqhci_disable(arg1_00);
    }
    return 0;
}


// ===== sym.__cqhci_disable @ 0x080012cc (size 220) =====

void sym.__cqhci_disable(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(*arg1 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = sym.readl_relaxed(*(arg1 + 8) + 8);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar2,0x8000130);
        uVar1 = (*pcVar2)(arg1,8);
    }
    pcVar2 = *(*arg1 + 8);
    if (pcVar2 == NULL) {
        sym.writel_relaxed(uVar1 & 0xfffffffe,*(arg1 + 8) + 8);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar2,0x8000170);
        (*pcVar2)(arg1,uVar1 & 0xfffffffe,8);
    }
    *(*(arg1 + 0x10) + 0x665) = 0;
    *(arg1 + 0x3b) = 0;
    return;
}


// ===== sym.cqhci_resume @ 0x080013a8 (size 16) =====

ulong sym.cqhci_resume(int64_t arg1)

{
    return 0;
}


// ===== sym.cqhci_irq @ 0x080013b8 (size 2260) =====

ulong sym.cqhci_irq(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    uint uVar7;
    ulong uVar8;
    int64_t iVar9;
    int64_t iVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar11;
    int64_t iVar12;
    code *pcVar13;
    uint64_t uVar14;
    int iVar15;
    int iVar16;
    uint64_t uVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    piVar11 = *(arg1 + 0x658);
    uStack_70 = 0;
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar4 = sym.readl_relaxed(piVar11[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar4 = (*pcVar13)(piVar11,0x10);
    }
    iVar15 = arg3;
    iVar16 = arg2;
    uVar14 = uVar4;
    if ((iVar15 == 0 && iVar16 == 0) && ((uVar4 & 0x34) == 0)) {
        pcVar13 = *(*piVar11 + 8);
        if (pcVar13 == NULL) {
            sym.writel_relaxed(uVar14,piVar11[1] + 0x10);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
            (*pcVar13)(piVar11,uVar14,0x10);
        }
        goto code_r0x0800144c;
    }
    if ((uVar4 >> 2 & 1) == 0) {
        if ((uVar4 >> 4 & 1) == 0) goto code_r0x08001700;
code_r0x0800179c:
        *(arg1 + 0x754) = *(arg1 + 0x754) + 1;
        if ((uVar4 >> 5 & 1) != 0) goto code_r0x080017ac;
code_r0x08001704:
        iVar9 = *(arg1 + 0x78);
    }
    else {
        *(arg1 + 0x750) = *(arg1 + 0x750) + 1;
        if ((uVar4 >> 4 & 1) != 0) goto code_r0x0800179c;
code_r0x08001700:
        if ((uVar4 >> 5 & 1) == 0) goto code_r0x08001704;
code_r0x080017ac:
        *(arg1 + 0x758) = *(arg1 + 0x758) + 1;
        iVar9 = *(arg1 + 0x78);
    }
    if (iVar9 == 0) {
        iVar9 = *(arg1 + 8);
    }
    _printk(0x80007b9,iVar9,uVar14,arg2 & 0xffffffff,arg3 & 0xffffffff);
    sym.cqhci_dumpregs(piVar11);
    pcVar13 = *(*piVar11 + 8);
    if (pcVar13 == NULL) {
        sym.writel_relaxed(uVar14,piVar11[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
        (*pcVar13)(piVar11,uVar14,0x10);
    }
    piVar18 = *(arg1 + 0x658);
    _raw_spin_lock(piVar18 + 3);
    pcVar13 = *(*piVar18 + 0x10);
    if (pcVar13 == NULL) {
        uVar5 = sym.readl_relaxed(piVar18[1] + 0x54);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar5 = (*pcVar13)(piVar18,0x54);
    }
    if (*(piVar18 + 0x3d) == '\0') {
        if (piVar18[5] == 0) {
            if ((obj.cqhci_error_irq.__already_done & 1) == 0) {
                iVar9 = *(arg1 + 0x78);
                obj.cqhci_error_irq.__already_done = 0x1;
                if (iVar9 == 0) {
                    iVar9 = *(arg1 + 8);
                }
                __warn_printk("%s: cqhci: error when idle. IRQ status: 0x%08x cmd error %d data error %d TERRI: 0x%08x\n"
                              ,iVar9,uVar14,arg2 & 0xffffffff,arg3 & 0xffffffff,uVar5);
    //WARNING: Does not return
                pcVar13 = SoftwareBreakpoint(0x800,0x8001a70);
                (*pcVar13)();
            }
        }
        else {
            if ((uVar5 >> 0xf & 1) != 0) {
                uVar17 = uVar5 >> 8 & 0x1f;
                iVar9 = *(piVar18[0x17] + uVar17 * 0x10);
                if (iVar9 != 0) {
                    iVar1 = iVar15;
                    if (iVar16 != 0) {
                        iVar1 = iVar16;
                    }
                    uVar6 = 8;
                    if (iVar1 != -0x6e) {
                        uVar6 = 0x10;
                    }
                    uVar7 = 4;
                    if (iVar1 != -0x54) {
                        uVar7 = uVar6;
                    }
                    *(piVar18[0x17] + uVar17 * 0x10 + 8) = uVar7;
                    iVar12 = *(arg1 + 0x658);
                    if (*(iVar12 + 0x3d) == '\0') {
                        *(iVar12 + 0x3d) = 1;
                        __wake_up(iVar12 + 0xa0,3,1,0);
                        pcVar13 = *(iVar9 + 0x68);
                        if (pcVar13 != NULL) {
                            __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                            (*pcVar13)(iVar9);
                        }
                    }
                }
            }
            if (uVar5 < 0) {
                uVar17 = uVar5 >> 0x18 & 0x1f;
                iVar9 = *(piVar18[0x17] + uVar17 * 0x10);
                if (iVar9 != 0) {
                    iVar1 = iVar16;
                    if (iVar15 != 0) {
                        iVar1 = iVar15;
                    }
                    uVar6 = 8;
                    if (iVar1 != -0x6e) {
                        uVar6 = 0x10;
                    }
                    uVar7 = 4;
                    if (iVar1 != -0x54) {
                        uVar7 = uVar6;
                    }
                    *(piVar18[0x17] + uVar17 * 0x10 + 8) = uVar7;
                    iVar12 = *(arg1 + 0x658);
                    if (*(iVar12 + 0x3d) == '\0') {
                        *(iVar12 + 0x3d) = 1;
                        __wake_up(iVar12 + 0xa0,3,1,0);
                        pcVar13 = *(iVar9 + 0x68);
                        if (pcVar13 != NULL) {
                            __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                            (*pcVar13)(iVar9);
                        }
                    }
                }
            }
            if ((uVar4 >> 5 & 1) != 0) {
                pcVar13 = *(*piVar18 + 0x10);
                if (pcVar13 == NULL) {
                    uVar5 = sym.readl_relaxed(piVar18[1] + 0x3c);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
                    uVar5 = (*pcVar13)(piVar18,0x3c);
                }
                if ((obj.cqhci_error_irq.__already_done.24 & 1) == 0) {
                    iVar9 = *(arg1 + 0x78);
                    obj.cqhci_error_irq.__already_done.24 = 0x1;
                    if (iVar9 == 0) {
                        iVar9 = *(arg1 + 8);
                    }
                    __warn_printk("%s: cqhci: invalid crypto configuration error. IRQ status: 0x%08x TDPE: 0x%08x\n",
                                  iVar9,uVar14,uVar5);
    //WARNING: Does not return
                    pcVar13 = SoftwareBreakpoint(0x800,0x8001c84);
                    (*pcVar13)();
                }
                iVar1 = iVar16;
                if (iVar15 != 0) {
                    iVar1 = iVar15;
                }
                uVar6 = 8;
                if (iVar1 != -0x6e) {
                    uVar6 = 0x10;
                }
                uVar7 = 4;
                if (iVar1 != -0x54) {
                    uVar7 = uVar6;
                }
                for (; uVar5 != 0; uVar5 = uVar5 & (1 << (iVar9 & 0x1f) ^ 0xffffffffU)) {
                    uVar3 = (uVar5 & 0xaaaaaaaa) >> 1 | (uVar5 & 0x55555555) << 1;
                    uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
                    uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
                    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                    iVar9 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
                    iVar12 = *(piVar18[0x17] + iVar9 * 0x10);
                    if (iVar12 != 0) {
                        *(piVar18[0x17] + iVar9 * 0x10 + 8) = uVar7;
                        iVar10 = *(arg1 + 0x658);
                        if (*(iVar10 + 0x3d) == '\0') {
                            *(iVar10 + 0x3d) = 1;
                            __wake_up(iVar10 + 0xa0,3,1,0);
                            pcVar13 = *(iVar12 + 0x68);
                            if (pcVar13 != NULL) {
                                __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                                (*pcVar13)(iVar12);
                            }
                        }
                    }
                }
            }
            if (*(piVar18 + 0x3d) == '\0') {
                iVar9 = 0;
                do {
                    iVar12 = *(piVar18[0x17] + iVar9);
                    if (iVar12 != 0) {
                        if (iVar15 != 0) {
                            iVar16 = iVar15;
                        }
                        uVar6 = 8;
                        if (iVar16 != -0x6e) {
                            uVar6 = 0x10;
                        }
                        uVar7 = 4;
                        if (iVar16 != -0x54) {
                            uVar7 = uVar6;
                        }
                        *(piVar18[0x17] + iVar9 + 8) = uVar7;
                        iVar9 = *(arg1 + 0x658);
                        if (*(iVar9 + 0x3d) == '\0') {
                            *(iVar9 + 0x3d) = 1;
                            __wake_up(iVar9 + 0xa0,3,1,0);
                            pcVar13 = *(iVar12 + 0x68);
                            if (pcVar13 != NULL) {
                                __cfi_slowpath_diag(0x6d4f4335c63303c9,pcVar13,0x8000190);
                                (*pcVar13)(iVar12);
                            }
                        }
                        break;
                    }
                    iVar9 = iVar9 + 0x10;
                } while (iVar9 != 0x200);
            }
        }
    }
    _raw_spin_unlock(piVar18 + 3);
code_r0x0800144c:
    if ((uVar4 >> 1 & 1) != 0) {
        pcVar13 = *(*piVar11 + 0x10);
        if (pcVar13 == NULL) {
            uVar14 = sym.readl_relaxed(piVar11[1] + 0x2c);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
            uVar14 = (*pcVar13)(piVar11,0x2c);
        }
        uStack_70 = uVar14 & 0xffffffff;
        pcVar13 = *(*piVar11 + 8);
        if (pcVar13 == NULL) {
            sym.writel_relaxed(uVar14 & 0xffffffff,piVar11[1] + 0x2c);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
            (*pcVar13)(piVar11,uVar14 & 0xffffffff,0x2c);
        }
        _raw_spin_lock();
        uVar14 = _find_first_bit(&uStack_70,*(piVar11 + 0x24));
        if (uVar14 < *(piVar11 + 0x24)) {
            do {
                piVar19 = *(arg1 + 0x658);
                piVar18 = piVar19[0x17] + (uVar14 & 0xffffffff) * 0x10;
                iVar9 = *piVar18;
                if (iVar9 == 0) {
                    if ((obj.cqhci_finish_mrq.__already_done & 1) == 0) {
                        iVar9 = *(arg1 + 0x78);
                        obj.cqhci_finish_mrq.__already_done = 0x1;
                        if (iVar9 == 0) {
                            iVar9 = *(arg1 + 8);
                        }
                        __warn_printk("%s: cqhci: spurious TCN for tag %d\n",iVar9,uVar14 & 0xffffffff);
    //WARNING: Does not return
                        pcVar13 = SoftwareBreakpoint(0x800,0x8001640);
                        (*pcVar13)();
                    }
                }
                else if (*(piVar19 + 0x3d) == '\0') {
                    cVar2 = *(piVar19 + 0x3e);
                    *piVar18 = 0;
                    *(piVar19 + 5) = piVar19[5] + -1;
                    iVar12 = *(iVar9 + 0x10);
                    if (iVar12 == 0) {
                        pcVar13 = *(*piVar19 + 0x10);
                        uVar5 = 0x100;
                        if (cVar2 != '\0') {
                            uVar5 = 0xa00;
                        }
                        uVar17 = uVar5;
                        if (pcVar13 == NULL) {
                            uVar5 = sym.readl_relaxed(piVar19[1] + uVar17);
                        }
                        else {
                            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
                            uVar5 = (*pcVar13)(piVar19,uVar17);
                        }
                        pcVar13 = *(*piVar19 + 8);
                        if (pcVar13 == NULL) {
                            sym.writel_relaxed(uVar5 | 0x80000000,piVar19[1] + uVar17);
                        }
                        else {
                            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar13,0x8000170);
                            (*pcVar13)(piVar19,uVar5 | 0x80000000,uVar17);
                        }
                    }
                    else if (*(iVar12 + 0x14) == 0) {
                        *(iVar12 + 0x1c) = *(iVar12 + 0xc) * *(iVar12 + 8);
                    }
                    else {
                        *(iVar12 + 0x1c) = 0;
                    }
                    mmc_cqe_request_done(arg1,iVar9);
                }
                else {
                    iVar9 = piVar19[0x17] + (uVar14 & 0xffffffff) * 0x10;
                    *(iVar9 + 8) = *(iVar9 + 8) | 2;
                }
                uVar14 = _find_next_bit(&uStack_70,0,*(piVar11 + 0x24),uVar14 + 1,0,0);
            } while (uVar14 < *(piVar11 + 0x24));
        }
        if ((*(piVar11 + 0x3c) != '\0') && (piVar11[5] == 0)) {
            *(piVar11 + 0x3c) = 0;
            __wake_up(piVar11 + 0x14,3,1,0);
        }
        _raw_spin_unlock(piVar11 + 3);
    }
    if ((uVar4 >> 3 & 1) != 0) {
        __wake_up(piVar11 + 0x14,3,1,0);
    }
    if ((uVar4 & 1) != 0) {
        __wake_up(piVar11 + 0x14,3,1,0);
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_68) {
        return 1;
    }
    piVar11 = __stack_chk_fail();
    *extraout_x18 = sym.cqhci_dumpregs;
    iVar12 = piVar11[2];
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    cVar2 = *(piVar11 + 0x3e);
    _printk(0x80004d4,iVar9);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 4);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,4);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1]);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0);
    }
    _printk(0x80003d1,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 8);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0xc);
    }
    _printk(0x8000a36,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x10);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x14);
    }
    _printk(0x8000a03,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x18);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x1c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x1c);
    }
    _printk(0x800088d,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x20);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x20);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x24);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x24);
    }
    _printk(0x800050f,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x28);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x28);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x2c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x2c);
    }
    _printk(0x80008c0,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x30);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x30);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x34);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x34);
    }
    _printk(0x8000380,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x38);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x38);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x40);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x40);
    }
    _printk(0x8000a69,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x44);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x44);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x48);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x48);
    }
    _printk(0x800072d,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x50);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x50);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x54);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x54);
    }
    _printk(0x8000766,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + 0x58);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,0x58);
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar7 = sym.readl_relaxed(piVar11[1] + 0x5c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar7 = (*pcVar13)(piVar11,0x5c);
    }
    _printk(0x8000959,iVar9,uVar6,uVar7);
    iVar9 = *(iVar12 + 0x78);
    if (iVar9 == 0) {
        iVar9 = *(iVar12 + 8);
    }
    uVar4 = 0x100;
    if (cVar2 != '\0') {
        uVar4 = 0xa00;
    }
    pcVar13 = *(*piVar11 + 0x10);
    if (pcVar13 == NULL) {
        uVar6 = sym.readl_relaxed(piVar11[1] + uVar4);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar13,0x8000130);
        uVar6 = (*pcVar13)(piVar11,uVar4);
    }
    _printk(0x8000799,iVar9,uVar6);
    pcVar13 = **piVar11;
    if (pcVar13 == NULL) {
        iVar9 = *(iVar12 + 0x78);
        if (iVar9 == 0) {
            iVar9 = *(iVar12 + 8);
        }
        uVar8 = _printk(0x80008f3,iVar9);
    }
    else {
        if (3 < (pcVar13 + -0x8001258 >> 3 | pcVar13 << 0x3d)) {
            __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar13,0x8000150);
        }
        uVar8 = (*pcVar13)(iVar12);
    }
    return uVar8;
}


// ===== sym.cqhci_dumpregs @ 0x08001c8c (size 2340) =====

void sym.cqhci_dumpregs(int64_t arg1)

{
    char cVar1;
    uint uVar2;
    uint uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x10);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    cVar1 = *(arg1 + 0x3e);
    _printk(0x80004d4,iVar4);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 4);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,4);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8));
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0);
    }
    _printk(0x80003d1,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 8);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0xc);
    }
    _printk(0x8000a36,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x10);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x14);
    }
    _printk(0x8000a03,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x18);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x1c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x1c);
    }
    _printk(0x800088d,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x20);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x20);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x24);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x24);
    }
    _printk(0x800050f,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x28);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x28);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x2c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x2c);
    }
    _printk(0x80008c0,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x30);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x30);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x34);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x34);
    }
    _printk(0x8000380,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x38);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x38);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x40);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x40);
    }
    _printk(0x8000a69,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x44);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x44);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x48);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x48);
    }
    _printk(0x800072d,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x50);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x50);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x54);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x54);
    }
    _printk(0x8000766,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 0x58);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,0x58);
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0x5c);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar3 = (*pcVar7)(arg1,0x5c);
    }
    _printk(0x8000959,iVar4,uVar2,uVar3);
    iVar4 = *(iVar6 + 0x78);
    if (iVar4 == 0) {
        iVar4 = *(iVar6 + 8);
    }
    uVar5 = 0x100;
    if (cVar1 != '\0') {
        uVar5 = 0xa00;
    }
    pcVar7 = *(*arg1 + 0x10);
    if (pcVar7 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + uVar5);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar7,0x8000130);
        uVar2 = (*pcVar7)(arg1,uVar5);
    }
    _printk(0x8000799,iVar4,uVar2);
    pcVar7 = **arg1;
    if (pcVar7 == NULL) {
        iVar4 = *(iVar6 + 0x78);
        if (iVar4 == 0) {
            iVar4 = *(iVar6 + 8);
        }
        _printk(0x80008f3,iVar4);
    }
    else {
        if (3 < (pcVar7 + -0x8001258 >> 3 | pcVar7 << 0x3d)) {
            __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar7,0x8000150);
        }
        (*pcVar7)(iVar6);
    }
    return;
}


// ===== sym.cqhci_pltfm_init @ 0x080025b0 (size 172) =====

int64_t sym.cqhci_pltfm_init(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = platform_get_resource_byname(arg1,0x200,"cqhci");
    if (piVar1 == NULL) {
        iVar2 = -0x16;
    }
    else {
        arg1 = arg1 + 0x10;
        iVar2 = devm_kmalloc(arg1,0xe8,0xdc0);
        if (iVar2 == 0) {
            iVar2 = -0xc;
        }
        else {
            iVar3 = devm_ioremap(arg1,*piVar1,(piVar1[1] - *piVar1) + 1);
            *(iVar2 + 8) = iVar3;
            if (iVar3 == 0) {
                _dev_err(arg1,"failed to remap cqhci regs\n");
                iVar2 = -0x10;
            }
        }
    }
    return iVar2;
}


// ===== sym.cqhci_init @ 0x0800265c (size 680) =====

int sym.cqhci_init(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint uVar5;
    ulong *in_x18;
    code *pcVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    *(arg1 + 0x20) = arg3;
    *(arg1 + 0x10) = arg2;
    *(arg2 + 0x658) = arg1;
    *(arg1 + 0x24) = 0x20;
    uVar5 = 0x1f;
    *(arg1 + 0x2c) = 0x1f;
    if ((*(arg2 + 1000) & 0x1000000) == 0) {
        uVar5 = 0x20;
    }
    *(arg2 + 0x660) = uVar5;
    *(arg2 + 0x650) = reloc.cqhci_enable.3e7ef2f22d63bcc075f2911fbf10fa24.cfi_jt;
    if (*(arg1 + 0x24) >> 0x3c == 0) {
        iVar4 = devm_kmalloc(*arg2,*(arg1 + 0x24) << 4,0xdc0);
        *(arg1 + 0xb8) = iVar4;
        if (iVar4 != 0) {
            iVar1 = sym.cqhci_crypto_init(arg1);
            if (iVar1 == 0) {
                *(arg1 + 0x18) = 0;
                *(arg1 + 0x80) = 0;
                __init_swait_queue_head(arg1 + 0x88,"&x->wait",obj.init_completion.__key);
                __init_waitqueue_head(arg1 + 0xa0,"&cq_host->wait_queue",obj.init_completion.__key);
                iVar4 = *(arg2 + 0x78);
                if (iVar4 == 0) {
                    iVar4 = *(arg2 + 8);
                }
                pcVar6 = *(*arg1 + 0x10);
                if (pcVar6 == NULL) {
                    uVar2 = sym.readl_relaxed(*(arg1 + 8));
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
                    uVar2 = (*pcVar6)(arg1,0);
                }
                pcVar6 = *(*arg1 + 0x10);
                if (pcVar6 == NULL) {
                    uVar3 = sym.readl_relaxed(*(arg1 + 8));
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
                    uVar3 = (*pcVar6)(arg1,0);
                }
                _printk(0x80007fb,iVar4,uVar2 >> 8 & 0xf,(uVar3 & 0xf) + (uVar3 >> 4 & 0xf) * 10);
                return 0;
            }
            iVar4 = *(arg2 + 0x78);
            if (iVar4 == 0) {
                iVar4 = *(arg2 + 8);
            }
            _printk(0x8000330,iVar4);
            iVar4 = *(arg2 + 0x78);
            goto joined_r0x080027b4;
        }
        iVar4 = *(arg2 + 0x78);
    }
    else {
        *(arg1 + 0xb8) = 0;
        iVar4 = *(arg2 + 0x78);
    }
    iVar1 = -0xc;
joined_r0x080027b4:
    if (iVar4 == 0) {
        iVar4 = *(arg2 + 8);
    }
    pcVar6 = *(*arg1 + 0x10);
    if (pcVar6 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8));
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
        uVar2 = (*pcVar6)(arg1,0);
    }
    pcVar6 = *(*arg1 + 0x10);
    if (pcVar6 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8));
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar6,0x8000130);
        uVar3 = (*pcVar6)(arg1,0);
    }
    _printk(0x8000554,iVar4,uVar2 >> 8 & 0xf,(uVar3 & 0xf) + (uVar3 >> 4 & 0xf) * 10,iVar1);
    return iVar1;
}


// ===== sym.readl_relaxed @ 0x08002904 (size 108) =====

uint sym.readl_relaxed(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002908);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x800293c);
    return uVar1;
}


// ===== sym.readl_relaxed_1 @ 0x08002974 (size 108) =====

uint sym.readl_relaxed_1(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8002978);
    uVar1 = *arg1;
    log_post_read_mmio(uVar1,0x20,arg1,0x80029ac);
    return uVar1;
}


// ===== sym.writel_relaxed @ 0x080029e4 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002a00);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002a28);
    return;
}


// ===== sym.writel_relaxed_1 @ 0x08002a5c (size 120) =====

void sym.writel_relaxed_1(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002a78);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8002aa0);
    return;
}


// ===== sym.cqhci_enable @ 0x08002ad4 (size 792) =====

uint sym.cqhci_enable(int64_t arg1,int64_t arg2)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int iVar7;
    int iVar8;
    ulong *puVar9;
    ulong *in_x18;
    uint uVar10;
    int64_t *arg1_00;
    code *pcVar11;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*(arg2 + 0x4f2) == '\0') {
        uVar10 = 0xffffffea;
    }
    else {
        arg1_00 = *(arg1 + 0x658);
        if (arg1_00[7] == '\0') {
            *(arg1_00 + 0x1c) = *(arg2 + 0x39c);
            if ((*(arg1_00 + 6) & 1) == 0) {
                iVar7 = 8;
            }
            else {
                pcVar11 = *(*arg1_00 + 0x10);
                if (pcVar11 == NULL) {
                    uVar5 = sym.readl_relaxed(arg1_00[1] + 8);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar11,0x8000130);
                    uVar5 = (*pcVar11)(arg1_00,8);
                }
                pcVar11 = *(*arg1_00 + 8);
                if (pcVar11 == NULL) {
                    sym.writel_relaxed(uVar5 | 0x100,arg1_00[1] + 8);
                }
                else {
                    __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
                    (*pcVar11)(arg1_00,uVar5 | 0x100,8);
                }
                iVar7 = 0x10;
            }
            *(arg1_00 + 0x59) = iVar7;
            if (arg1_00[4] == '\0') {
                uVar5 = 8;
                iVar8 = 8;
            }
            else {
                iVar8 = 0x10;
                uVar5 = 0x10;
                if ((*(arg1_00 + 0x34) & 1) != 0) {
                    uVar5 = 0xc;
                }
            }
            *(arg1_00 + 0x5a) = iVar8;
            puVar9 = arg1_00[2];
            *(arg1_00 + 0xd) = uVar5;
            *(arg1_00 + 0xb) = iVar8 + iVar7;
            iVar6 = *(arg1_00 + 0x24) * (iVar8 + iVar7);
            arg1_00[8] = iVar6;
            arg1_00[9] = uVar5 * *(puVar9 + 0xcc) * *(puVar9 + 0x7f);
            iVar6 = dmam_alloc_attrs(*puVar9,iVar6,arg1_00 + 0xe,0xcc0,0);
            arg1_00[10] = iVar6;
            if (iVar6 != 0) {
                iVar6 = dmam_alloc_attrs(*arg1_00[2],arg1_00[9],arg1_00 + 0xf,0xcc0,0);
                arg1_00[0xc] = iVar6;
                if (iVar6 != 0) {
                    if (0 < *(arg1_00 + 0x24)) {
                        uVar5 = 0;
                        do {
                            uVar2 = uVar5 & 0xff;
                            uVar3 = *(arg1_00 + 0xd);
                            puVar1 = arg1_00[10] + *(arg1_00 + 0xb) * uVar2 + *(arg1_00 + 0x59);
                            uVar4 = *(arg1_00[2] + 0x3f8);
                            iVar6 = arg1_00[0xf];
                            memset(puVar1,0,*(arg1_00 + 0x5a));
                            if (8 < *(arg1_00 + 0x5a)) {
                                puVar1[8] = 0;
                            }
                            if ((uVar2 == 0x1f) && ((*(arg1_00[2] + 0x3eb) & 1) != 0)) {
                                *puVar1 = 2;
                            }
                            else {
                                *puVar1 = 0x31;
                                iVar6 = iVar6 + uVar2 * uVar3 * uVar4;
                                if (arg1_00[4] == '\0') {
                                    *(puVar1 + 4) = iVar6;
                                }
                                else {
                                    *(puVar1 + 4) = iVar6;
                                }
                            }
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < *(arg1_00 + 0x24));
                    }
                    sym.__cqhci_enable(arg1_00);
                    pcVar11 = *(*arg1_00 + 0x48);
                    if (pcVar11 != NULL) {
                        __cfi_slowpath_diag(0xb94480562807b25e,pcVar11,0x80001b0);
                        (*pcVar11)(arg1,1);
                    }
                    *(arg1_00 + 7) = 1;
                    return 0;
                }
                dmam_free_coherent(*arg1_00[2],arg1_00[8],arg1_00[10],arg1_00[0xe]);
                arg1_00[10] = 0;
                arg1_00[0xe] = 0;
            }
            iVar6 = *(arg1 + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(arg1 + 8);
            }
            uVar10 = 0xfffffff4;
            _printk(0x8000474,iVar6,0xfffffff4);
        }
        else {
            uVar10 = 0;
        }
    }
    return uVar10;
}


// ===== sym.cqhci_disable @ 0x08002dec (size 184) =====

void sym.cqhci_disable(int64_t arg1)

{
    ulong *in_x18;
    int64_t *arg1_00;
    code *pcVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x658);
    if (arg1_00[7] != '\0') {
        sym.cqhci_off(arg1);
        sym.__cqhci_disable(arg1_00);
        pcVar1 = *(*arg1_00 + 0x48);
        if (pcVar1 != NULL) {
            __cfi_slowpath_diag(0xb94480562807b25e,pcVar1,0x80001f0);
            (*pcVar1)(arg1,0);
        }
        dmam_free_coherent(*arg1,arg1_00[9],arg1_00[0xc],arg1_00[0xf]);
        dmam_free_coherent(*arg1,arg1_00[8],arg1_00[10],arg1_00[0xe]);
        arg1_00[0xc] = 0;
        arg1_00[10] = 0;
        *(arg1_00 + 7) = 0;
    }
    return;
}


// ===== sym.cqhci_request @ 0x08002ea4 (size 1540) =====

code * sym.cqhci_request(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    int64_t *arg1_00;
    code *pcVar11;
    code *unaff_x23;
    uint32_t *puVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    ulong unaff_x30;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_68 = *(iVar6 + 0x5e0);
    if (*(arg2 + 8) == 0) {
        uVar14 = *(arg2 + 0x7c);
    }
    else {
        uVar14 = 0x1f;
    }
    arg1_00 = *(arg1 + 0x658);
    if (arg1_00[7] == '\0') {
        iVar6 = *(arg1 + 0x78);
        if (iVar6 == 0) {
            iVar6 = *(arg1 + 8);
        }
        _printk(0x800049a,iVar6);
        pcVar11 = 0xffffffea;
        goto code_r0x08003328;
    }
    if (*(arg1_00 + 0x3b) == '\0') {
        sym.__cqhci_enable(arg1_00);
        cVar1 = *(arg1 + 0x665);
    }
    else {
        cVar1 = *(arg1 + 0x665);
    }
    if (cVar1 != '\0') goto code_r0x08002fb4;
    iVar6 = *arg1_00;
    unaff_x23 = sym.__typeid__ZTSFvP8mmc_hostE_global_addr;
    pcVar11 = *(iVar6 + 0x30);
    if (pcVar11 == NULL) goto code_r0x08002f54;
    if (3 < (pcVar11 + -0x8001258 >> 3 | pcVar11 << 0x3d)) goto code_r0x08003460;
    do {
        (*pcVar11)(arg1);
        iVar6 = *arg1_00;
code_r0x08002f54:
        pcVar11 = *(iVar6 + 8);
        if (pcVar11 == NULL) {
            sym.writel_relaxed(0,arg1_00[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
            (*pcVar11)(arg1_00,0,0xc);
        }
        *(arg1 + 0x665) = 0x1;
        pcVar11 = *(*arg1_00 + 0x10);
        if (pcVar11 == NULL) {
            iVar3 = sym.readl_relaxed(arg1_00[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar11,0x8000130);
            iVar3 = (*pcVar11)(arg1_00,0xc);
        }
        if (iVar3 != 0) {
            iVar6 = *(arg1 + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(arg1 + 8);
            }
            _printk(0x800068d,iVar6);
        }
        pcVar11 = *(*arg1_00 + 0x18);
        if (pcVar11 != NULL) {
            if (3 < (pcVar11 - unaff_x23 >> 3 | pcVar11 - unaff_x23 << 0x3d)) {
                __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar11,0x8000230);
            }
            (*pcVar11)(arg1);
        }
code_r0x08002fb4:
        iVar6 = *(arg2 + 0x10);
        if (iVar6 == 0) {
            piVar13 = *(arg1 + 0x658);
            uStack_70 = 0;
            puVar7 = piVar13[10] + *(piVar13 + 0xb) * *(piVar13 + 0x2c);
            uVar9 = *(*(arg2 + 8) + 0x18) & 1;
            uVar10 = 0x1000000;
            if ((*(*(arg2 + 8) + 0x18) & 0x1d) != 0) {
                uVar10 = 0x1800000;
            }
            uVar4 = 0;
            if (uVar9 != 0) {
                uVar4 = uVar10;
            }
            memset(puVar7,0,*(piVar13 + 0x59));
            uStack_70 = uStack_70 | (**(arg2 + 8) << 0x10 & 0x3f0000 | uVar9 << 0x16 | uVar4) ^ 0x40402f;
            pcVar11 = *(*piVar13 + 0x28);
            if (pcVar11 != NULL) {
                __cfi_slowpath_diag(0x4c7db2241fcf9d02,pcVar11,0x8000250);
                (*pcVar11)(arg1,arg2,&uStack_70);
            }
            *puVar7 = *puVar7 | uStack_70;
            *(puVar7 + 4) = *(*(arg2 + 8) + 4);
code_r0x080031d0:
            piVar13 = arg1_00 + 3;
            unaff_x23 = _raw_spin_lock_irqsave(piVar13);
            if (*(arg1_00 + 0x3d) == '\0') {
                uVar9 = -(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4;
                *(arg1_00[0x17] + uVar9) = arg2;
                uVar10 = 1 << (uVar14 & 0x1f);
                *(arg1_00[0x17] + uVar9 + 8) = 0;
                *(arg1_00 + 5) = arg1_00[5] + 1;
                DataSynchronizationBarrier(3,2,0);
                arg2 = *(*arg1_00 + 8);
                if (arg2 == NULL) {
                    sym.writel_relaxed(uVar10,arg1_00[1] + 0x28);
                }
                else {
                    __cfi_slowpath_diag(0x5568c9793ee870d9,arg2,0x8000170);
                    (*arg2)(arg1_00,uVar10,0x28);
                }
                arg1 = *(*arg1_00 + 0x10);
                if (arg1 == NULL) {
                    sym.readl_relaxed(arg1_00[1] + 0x28);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,arg1,0x8000130);
                    (*arg1)(arg1_00,0x28);
                }
                _raw_spin_unlock_irqrestore(piVar13,unaff_x23);
                pcVar11 = NULL;
            }
            else {
                _raw_spin_unlock_irqrestore(piVar13,unaff_x23);
                iVar6 = *(arg2 + 0x10);
                if (iVar6 != 0) {
                    uVar5 = 1;
                    if ((*(iVar6 + 0x18) & 0x200) != 0) {
                        uVar5 = 2;
                    }
                    dma_unmap_sg_attrs(*arg1,*(iVar6 + 0x38),*(iVar6 + 0x30),uVar5,0);
                }
                pcVar11 = 0xfffffff0;
            }
        }
        else {
            uVar4 = *(iVar6 + 0x18);
            uVar10 = uVar14 & 0xff;
            unaff_x23 = uVar10;
            puVar7 = arg1_00[10] + *(arg1_00 + 0xb) * unaff_x23;
            *puVar7 = uVar4 >> 2 & 0x800 | uVar4 >> 8 & 0x40 | uVar4 << 3 & 0x1000 | uVar4 << 2 & 0x2000 |
                      uVar4 << 4 & 0x4000 | *(iVar6 + 0xc) << 0x10 | *(iVar6 + 0x10) << 0x20 | 0x2f;
            if ((*(arg1_00 + 6) & 1) != 0) {
                uVar9 = 0;
                if (*(arg2 + 0x80) != 0) {
                    uVar9 = *(*(arg2 + 0x80) + 8);
                    if (uVar9 >> 0x20 != 0) {
    //WARNING: Does not return
                        pcVar11 = SoftwareBreakpoint(0x800,0x8003450);
                        (*pcVar11)();
                    }
                    uVar9 = uVar9 | *(arg2 + 0x88) << 0x20 | 0x800000000000;
                }
                puVar7[1] = uVar9;
            }
            iVar6 = *(arg2 + 0x10);
            if (iVar6 == 0) {
                pcVar11 = 0xffffffea;
            }
            else {
                uVar5 = 1;
                if ((*(iVar6 + 0x18) & 0x100) == 0) {
                    uVar5 = 2;
                }
                iVar2 = arg1_00[4];
                uVar4 = dma_map_sg_attrs(**(arg2 + 0x70),*(iVar6 + 0x38),*(iVar6 + 0x30),uVar5,0);
                if (uVar4 == 0) {
                    _printk(0x8000542,"cqhci_dma_map",*(iVar6 + 0x30));
                    pcVar11 = 0xfffffff4;
                }
                else {
                    pcVar11 = uVar4;
                    if (-1 < uVar4) {
                        iVar6 = *(iVar6 + 0x38);
                        puVar12 = arg1_00[0xc] + uVar10 * *(arg1_00 + 0xd) * *(arg1_00[2] + 0x3f8);
                        do {
                            uVar10 = 0x23;
                            if (pcVar11 != 1) {
                                uVar10 = 0x21;
                            }
                            uVar8 = *(iVar6 + 0x10);
                            *puVar12 = uVar10 | *(iVar6 + 0x18) << 0x10;
                            if (iVar2 == '\0') {
                                puVar12[1] = uVar8;
                            }
                            else {
                                *(puVar12 + 1) = uVar8;
                            }
                            puVar12 = puVar12 + *(arg1_00 + 0xd);
                            iVar6 = sg_next();
                            uVar10 = pcVar11 - 1;
                            pcVar11 = uVar10;
                        } while (uVar10 != 0);
                        goto code_r0x080031d0;
                    }
                }
            }
            iVar6 = *(*(arg2 + 0x70) + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(*(arg2 + 0x70) + 8);
            }
            _printk(0x800035a,iVar6,"cqhci_prep_tran_desc",pcVar11);
            iVar6 = *(arg1 + 0x78);
            if (iVar6 == 0) {
                iVar6 = *(arg1 + 8);
            }
            _printk(0x8000590,iVar6,pcVar11);
        }
code_r0x08003328:
        iVar6 = sp_el0;
        if (*(iVar6 + 0x5e0) == iStack_68) {
            return pcVar11;
        }
        __stack_chk_fail();
code_r0x08003460:
        __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar11,0x8000210);
    } while( true );
}


// ===== sym.cqhci_post_req @ 0x080034a8 (size 76) =====

void sym.cqhci_post_req(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg2 + 0x10);
    if (iVar1 != 0) {
        uVar2 = 1;
        if ((*(iVar1 + 0x18) & 0x200) != 0) {
            uVar2 = 2;
        }
        dma_unmap_sg_attrs(*arg1,*(iVar1 + 0x38),*(iVar1 + 0x30),uVar2,0);
    }
    return;
}


// ===== sym.cqhci_off @ 0x080034f4 (size 524) =====

void sym.cqhci_off(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *in_x18;
    int64_t *piVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar4 = *(arg1 + 0x658);
    if (((piVar4[7] != '\0') && (*(arg1 + 0x665) != '\0')) && (*(piVar4 + 0x3d) == '\0')) {
        iVar3 = *piVar4;
        pcVar5 = *(iVar3 + 0x20);
        if (pcVar5 != NULL) {
            __cfi_slowpath_diag(0xb94480562807b25e,pcVar5,0x8000270);
            (*pcVar5)(arg1,0);
            iVar3 = *piVar4;
        }
        pcVar5 = *(iVar3 + 8);
        if (pcVar5 == NULL) {
            sym.writel_relaxed(1,piVar4[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
            (*pcVar5)(piVar4,1,0xc);
        }
        iVar3 = ktime_get();
        do {
            pcVar5 = *(*piVar4 + 0x10);
            if (pcVar5 == NULL) {
                uVar1 = sym.readl_relaxed(piVar4[1] + 0xc);
            }
            else {
                __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
                uVar1 = (*pcVar5)(piVar4,0xc);
            }
            if ((uVar1 & 1) != 0) goto joined_r0x080036bc;
            iVar2 = ktime_get();
        } while (iVar2 <= iVar3 + 100000);
        pcVar5 = *(*piVar4 + 0x10);
        if (pcVar5 == NULL) {
            uVar1 = sym.readl_relaxed(piVar4[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
            uVar1 = (*pcVar5)(piVar4,0xc);
        }
joined_r0x080036bc:
        if ((uVar1 & 1) == 0) {
            iVar3 = *(arg1 + 0x78);
            if (iVar3 == 0) {
                iVar3 = *(arg1 + 8);
            }
            _printk(0x8000712,iVar3);
        }
        pcVar5 = *(*piVar4 + 0x38);
        if (pcVar5 != NULL) {
            if (3 < (pcVar5 + -0x8001258 >> 3 | pcVar5 << 0x3d)) {
                __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar5,0x8000290);
            }
            (*pcVar5)(arg1);
        }
        *(arg1 + 0x665) = 0;
    }
    return;
}


// ===== sym.cqhci_wait_for_idle @ 0x08003700 (size 316) =====

uint32_t sym.cqhci_wait_for_idle(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uchar *in_x2;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t arg1_00;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong unaff_x30;
    uchar auVar12 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_48 = *(iVar5 + 0x5e0);
    iVar8 = *(arg1 + 0x658);
    iVar5 = iVar8 + 0x18;
    uVar4 = _raw_spin_lock_irqsave(iVar5);
    bVar2 = *(iVar8 + 0x28) != 0;
    bVar3 = *(iVar8 + 0x3d) != '\0';
    uVar7 = 0;
    if (bVar3) {
        uVar7 = 0xfffffff0;
    }
    *(iVar8 + 0x3c) = bVar2 && !bVar3;
    _raw_spin_unlock_irqrestore(iVar5,uVar4);
    if (bVar2 && !bVar3) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        init_wait_entry(&uStack_70,0);
        while( true ) {
            in_x2 = 0x2;
            prepare_to_wait_event(iVar8 + 0xa0,&uStack_70);
            uVar4 = _raw_spin_lock_irqsave(iVar5);
            cVar1 = *(iVar8 + 0x3d);
            bVar2 = *(iVar8 + 0x28) == 0;
            *(iVar8 + 0x3c) = !bVar2 && cVar1 == '\0';
            _raw_spin_unlock_irqrestore(iVar5,uVar4);
            if (bVar2 || cVar1 != '\0') break;
            schedule();
        }
        uVar7 = 0;
        if (cVar1 != '\0') {
            uVar7 = 0xfffffff0;
        }
        finish_wait(iVar8 + 0xa0,&uStack_70);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return uVar7;
    }
    auVar12 = __stack_chk_fail();
    iVar8 = auVar12._8_8_;
    iVar5 = auVar12._0_8_;
    *extraout_x18 = sym.cqhci_timeout;
    arg1_00 = *(iVar5 + 0x658);
    if (*(iVar8 + 8) == 0) {
        uVar9 = *(iVar8 + 0x7c);
    }
    else {
        uVar9 = 0x1f;
    }
    iVar6 = arg1_00 + 0x18;
    iVar11 = *(arg1_00 + 0xb8);
    uVar4 = _raw_spin_lock_irqsave(iVar6);
    iVar10 = *(iVar11 + (-(uVar9 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4));
    if (iVar10 == iVar8) {
        iVar11 = iVar11 + uVar9 * 0x10;
        *(iVar11 + 8) = *(iVar11 + 8) | 1;
        iVar11 = *(iVar5 + 0x658);
        if (*(iVar11 + 0x3d) == '\0') {
            *(iVar11 + 0x3d) = 1;
            __wake_up(iVar11 + 0xa0,3,1,0);
        }
        *in_x2 = *(arg1_00 + 0x3d);
        _raw_spin_unlock_irqrestore(iVar6,uVar4);
        iVar6 = *(iVar5 + 0x78);
        if (iVar6 == 0) {
            iVar6 = *(iVar5 + 8);
        }
        _printk(0x800092f,iVar6,uVar9);
        sym.cqhci_dumpregs(arg1_00);
    }
    else {
        _raw_spin_unlock_irqrestore(iVar6,uVar4);
    }
    return iVar10 == iVar8;
}


// ===== sym.cqhci_timeout @ 0x0800383c (size 284) =====

bool sym.cqhci_timeout(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    int64_t arg1_00;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0x658);
    if (*(arg2 + 8) == 0) {
        uVar3 = *(arg2 + 0x7c);
    }
    else {
        uVar3 = 0x1f;
    }
    iVar2 = arg1_00 + 0x18;
    iVar5 = *(arg1_00 + 0xb8);
    uVar1 = _raw_spin_lock_irqsave(iVar2);
    iVar4 = *(iVar5 + (-(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4));
    if (iVar4 == arg2) {
        iVar5 = iVar5 + uVar3 * 0x10;
        *(iVar5 + 8) = *(iVar5 + 8) | 1;
        iVar5 = *(arg1 + 0x658);
        if (*(iVar5 + 0x3d) == '\0') {
            *(iVar5 + 0x3d) = 1;
            __wake_up(iVar5 + 0xa0,3,1,0);
        }
        *arg3 = *(arg1_00 + 0x3d);
        _raw_spin_unlock_irqrestore(iVar2,uVar1);
        iVar2 = *(arg1 + 0x78);
        if (iVar2 == 0) {
            iVar2 = *(arg1 + 8);
        }
        _printk(0x800092f,iVar2,uVar3);
        sym.cqhci_dumpregs(arg1_00);
    }
    else {
        _raw_spin_unlock_irqrestore(iVar2,uVar1);
    }
    return iVar4 == arg2;
}


// ===== sym.cqhci_recovery_start @ 0x08003958 (size 132) =====

void sym.cqhci_recovery_start(int64_t arg1)

{
    ulong *in_x18;
    int64_t *piVar1;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = *(arg1 + 0x658);
    if (*(piVar1 + 0x3d) != '\0') {
        sym.cqhci_halt(arg1,5);
        pcVar2 = *(*piVar1 + 0x20);
        if (pcVar2 != NULL) {
            __cfi_slowpath_diag(0xb94480562807b25e,pcVar2,0x80002b0);
            (*pcVar2)(arg1,1);
        }
        *(arg1 + 0x665) = 0;
        return;
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x800,0x80039dc);
    (*pcVar2)();
}


// ===== sym.cqhci_recovery_finish @ 0x080039e0 (size 880) =====

void sym.cqhci_recovery_finish(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int iVar6;
    int64_t iVar7;
    uint uVar8;
    int64_t iVar9;
    ulong *in_x18;
    int64_t *piVar10;
    code *pcVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar10 = *(arg1 + 0x658);
    if (*(piVar10 + 0x3d) == '\0') {
    //WARNING: Does not return
        pcVar11 = SoftwareBreakpoint(0x800,0x8003c0c);
        (*pcVar11)();
    }
    uVar2 = sym.cqhci_halt(arg1,0x14);
    uVar3 = sym.cqhci_clear_all_tasks(arg1);
    if (((uVar3 & 1) == 0) || ((uVar2 & 1) == 0)) {
        pcVar11 = *(*piVar10 + 0x10);
        if (pcVar11 == NULL) {
            uVar1 = sym.readl_relaxed(piVar10[1] + 8);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar11,0x8000130);
            uVar1 = (*pcVar11)(piVar10,8);
        }
        pcVar11 = *(*piVar10 + 8);
        if (pcVar11 == NULL) {
            sym.writel_relaxed(uVar1 & 0xfffffffe,piVar10[1] + 8);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
            (*pcVar11)(piVar10,uVar1 & 0xfffffffe,8);
        }
        pcVar11 = *(*piVar10 + 8);
        if (pcVar11 == NULL) {
            sym.writel_relaxed(uVar1 | 1,piVar10[1] + 8);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
            (*pcVar11)(piVar10,uVar1 | 1,8);
        }
        uVar2 = sym.cqhci_halt(arg1,0x14);
        uVar3 = sym.cqhci_clear_all_tasks(arg1);
        if (((uVar3 & 1) == 0) || ((uVar2 & 1) == 0)) {
    //WARNING: Does not return
            pcVar11 = SoftwareBreakpoint(0x800,0x8003d50);
            (*pcVar11)();
        }
    }
    iVar6 = *(piVar10 + 0x24);
    if (0 < iVar6) {
        iVar12 = 0;
        iVar13 = 0;
        do {
            iVar9 = piVar10[0x17];
            iVar5 = *(iVar9 + iVar12);
            if (iVar5 != 0) {
                *(iVar9 + iVar12) = 0;
                *(piVar10 + 5) = piVar10[5] + -1;
                iVar7 = *(iVar5 + 0x10);
                if (iVar7 == 0) {
                    uVar1 = *(iVar9 + iVar12 + 8);
                    uVar8 = 0;
                    if (uVar1 != 0) {
                        if ((uVar1 >> 2 & 1) == 0) {
                            uVar8 = 0xfffffffb;
                            if ((uVar1 & 9) != 0) {
                                uVar8 = 0xffffff92;
                            }
                        }
                        else {
                            uVar8 = 0xffffffac;
                        }
                    }
                    *(*(iVar5 + 8) + 0x20) = uVar8;
                }
                else {
                    *(iVar7 + 0x1c) = 0;
                    uVar1 = *(iVar9 + iVar12 + 8);
                    uVar8 = 0;
                    if (uVar1 != 0) {
                        if ((uVar1 >> 2 & 1) == 0) {
                            uVar8 = 0xfffffffb;
                            if ((uVar1 & 9) != 0) {
                                uVar8 = 0xffffff92;
                            }
                        }
                        else {
                            uVar8 = 0xffffffac;
                        }
                    }
                    *(iVar7 + 0x14) = uVar8;
                }
                mmc_cqe_request_done(piVar10[2]);
                iVar6 = *(piVar10 + 0x24);
            }
            iVar13 = iVar13 + 1;
            iVar12 = iVar12 + 0x10;
        } while (iVar13 < iVar6);
    }
    if (piVar10[5] != 0) {
    //WARNING: Does not return
        pcVar11 = SoftwareBreakpoint(0x800,0x8003c14);
        (*pcVar11)();
    }
    uVar4 = _raw_spin_lock_irqsave(piVar10 + 3);
    *(piVar10 + 5) = 0;
    *(piVar10 + 0x3d) = 0;
    *(arg1 + 0x665) = 0;
    _raw_spin_unlock_irqrestore(piVar10 + 3,uVar4);
    DataSynchronizationBarrier(3,2,0);
    pcVar11 = *(*piVar10 + 8);
    if (pcVar11 == NULL) {
        sym.writel_relaxed(9,piVar10[1] + 0x10);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
        (*pcVar11)(piVar10,9,0x10);
    }
    pcVar11 = *(*piVar10 + 8);
    if (pcVar11 == NULL) {
        sym.writel_relaxed(0x36,piVar10[1] + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
        (*pcVar11)(piVar10,0x36,0x14);
    }
    pcVar11 = *(*piVar10 + 8);
    if (pcVar11 == NULL) {
        sym.writel_relaxed(0x36,piVar10[1] + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar11,0x8000170);
        (*pcVar11)(piVar10,0x36,0x18);
    }
    return;
}


// ===== sym.__cqhci_enable @ 0x08003d54 (size 1364) =====

void sym.__cqhci_enable(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    ulong *in_x18;
    int64_t iVar4;
    code *pcVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar4 = *(arg1 + 0x10);
    pcVar5 = *(*arg1 + 0x10);
    if (pcVar5 == NULL) {
        uVar2 = sym.readl_relaxed(*(arg1 + 8) + 8);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
        uVar2 = (*pcVar5)(arg1,8);
    }
    if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 & 0xfffffffe;
        pcVar5 = *(*arg1 + 8);
        if (pcVar5 == NULL) {
            sym.writel_relaxed(uVar2,*(arg1 + 8) + 8);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
            (*pcVar5)(arg1,uVar2,8);
        }
    }
    pcVar5 = *(*arg1 + 8);
    uVar2 = *(iVar4 + 1000) >> 0xc & 0x1000 | uVar2 & 0xffffee00 |
            uVar2 & 0xff | *(iVar4 + 1000) >> 0x1a & 2 | (*(arg1 + 0x30) & 1) << 8;
    if (pcVar5 == NULL) {
        sym.writel_relaxed(uVar2,*(arg1 + 8) + 8);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,uVar2,8);
    }
    uVar1 = *(arg1 + 0x70);
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(uVar1,*(arg1 + 8) + 0x20);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,uVar1,0x20);
    }
    uVar1 = *(arg1 + 0x74);
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(uVar1,*(arg1 + 8) + 0x24);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,uVar1,0x24);
    }
    uVar1 = *(arg1 + 0x1c);
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(uVar1,*(arg1 + 8) + 0x44);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,uVar1,0x44);
    }
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(0x70001,*(arg1 + 8) + 0x40);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,0x70001,0x40);
    }
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(0,*(arg1 + 8) + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,0,0x14);
    }
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(0,*(arg1 + 8) + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,0,0x18);
    }
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(uVar2 | 1,*(arg1 + 8) + 8);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,uVar2 | 1,8);
    }
    pcVar5 = *(*arg1 + 0x10);
    if (pcVar5 == NULL) {
        uVar3 = sym.readl_relaxed(*(arg1 + 8) + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
        uVar3 = (*pcVar5)(arg1,0xc);
    }
    if ((uVar3 & 1) != 0) {
        pcVar5 = *(*arg1 + 8);
        if (pcVar5 == NULL) {
            sym.writel_relaxed(0,*(arg1 + 8) + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
            (*pcVar5)(arg1,0,0xc);
        }
    }
    *(iVar4 + 0x665) = 1;
    pcVar5 = *(*arg1 + 0x18);
    if (pcVar5 != NULL) {
        if (3 < (pcVar5 + -0x8001258 >> 3 | pcVar5 << 0x3d)) {
            __cfi_slowpath_diag(0xd70f16b248c48e84,pcVar5,0x80001d0);
        }
        (*pcVar5)(iVar4);
    }
    DataSynchronizationBarrier(3,2,0);
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(0x36,*(arg1 + 8) + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,0x36,0x14);
    }
    pcVar5 = *(*arg1 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(0x36,*(arg1 + 8) + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(arg1,0x36,0x18);
    }
    *(arg1 + 0x3b) = 1;
    return;
}


// ===== sym.cqhci_halt @ 0x080042a8 (size 1040) =====

void sym.cqhci_halt(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar6;
    int64_t *piVar7;
    code *pcVar8;
    code *pcVar9;
    code *pcVar10;
    code *unaff_x22;
    code *unaff_x23;
    ulong unaff_x30;
    uchar auVar11 [16];
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    code *pcStack_a0;
    code *pcStack_90;
    code *pcStack_88;
    code *pcStack_80;
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    pcVar8 = arg2 & 0xffffffff;
    iStack_48 = *(iVar3 + 0x5e0);
    piVar6 = *(arg1 + 0x658);
    pcVar10 = *(*piVar6 + 0x10);
    if (pcVar10 == NULL) {
        uVar2 = sym.readl_relaxed(piVar6[1] + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000130);
        uVar2 = (*pcVar10)(piVar6,0xc);
    }
    if ((uVar2 & 1) == 0) {
        pcVar10 = *(*piVar6 + 8);
        if (pcVar10 == NULL) {
            sym.writel_relaxed(1,piVar6[1] + 0x14);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000170);
            (*pcVar10)(piVar6,1,0x14);
        }
        pcVar10 = *(*piVar6 + 8);
        if (pcVar10 == NULL) {
            sym.writel_relaxed(1,piVar6[1] + 0x18);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000170);
            (*pcVar10)(piVar6,1,0x18);
        }
        pcVar10 = *(*piVar6 + 0x10);
        if (pcVar10 == NULL) {
            uVar1 = sym.readl_relaxed(piVar6[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000130);
            uVar1 = (*pcVar10)(piVar6,0xc);
        }
        pcVar10 = *(*piVar6 + 8);
        if (pcVar10 == NULL) {
            sym.writel_relaxed(uVar1 | 1,piVar6[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000170);
            (*pcVar10)(piVar6,uVar1 | 1,0xc);
        }
        pcVar10 = __msecs_to_jiffies(pcVar8);
        unaff_x22 = *(*piVar6 + 0x10);
        if (unaff_x22 == NULL) {
            uVar2 = sym.readl_relaxed(piVar6[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,unaff_x22,0x8000130);
            uVar2 = (*unaff_x22)(piVar6,0xc);
        }
        if (((uVar2 & 1) == 0) && ((uVar2 & 1) != 0 || pcVar10 != 0xffffffffffffffff)) {
            uStack_58 = 0;
            uStack_50 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            uStack_70 = 0;
            iVar3 = __msecs_to_jiffies(pcVar8);
            pcVar10 = iVar3 + 1;
            init_wait_entry(&uStack_70,0);
            unaff_x22 = 0x8000130;
            while( true ) {
                prepare_to_wait_event(piVar6 + 0x14,&uStack_70,2);
                unaff_x23 = *(*piVar6 + 0x10);
                if (unaff_x23 == NULL) {
                    uVar1 = sym.readl_relaxed(piVar6[1] + 0xc);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,unaff_x23,0x8000130);
                    uVar1 = (*unaff_x23)(piVar6,0xc);
                }
                pcVar8 = pcVar10;
                if (pcVar10 == NULL && (uVar1 & 1) != 0) {
                    pcVar8 = 0x1;
                }
                if (((uVar1 & 1) != 0) || (pcVar8 == NULL)) break;
                pcVar10 = schedule_timeout(pcVar8);
            }
            finish_wait(piVar6 + 0x14,&uStack_70);
        }
        pcVar8 = *(*piVar6 + 8);
        if (pcVar8 == NULL) {
            sym.writel_relaxed(0,piVar6[1] + 0x14);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar8,0x8000170);
            (*pcVar8)(piVar6,0,0x14);
        }
        pcVar8 = *(*piVar6 + 8);
        if (pcVar8 == NULL) {
            sym.writel_relaxed(0,piVar6[1] + 0x18);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar8,0x8000170);
            (*pcVar8)(piVar6,0,0x18);
        }
        pcVar8 = *(*piVar6 + 0x10);
        if (pcVar8 == NULL) {
            uVar1 = sym.readl_relaxed(piVar6[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar8,0x8000130);
            uVar1 = (*pcVar8)(piVar6,0xc);
        }
        uVar1 = uVar1 & 1;
    }
    else {
        uVar1 = 1;
    }
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_48) {
        iVar4 = __stack_chk_fail(uVar1);
        *extraout_x18 = sym.cqhci_clear_all_tasks;
        pcStack_a8 = sym.cqhci_clear_all_tasks;
        iVar3 = sp_el0;
        iStack_b8 = *(iVar3 + 0x5e0);
        piVar7 = *(iVar4 + 0x658);
        pcVar9 = *(*piVar7 + 8);
        puStack_b0 = &stack0xffffffffffffffc0;
        pcStack_a0 = unaff_x23;
        pcStack_90 = unaff_x22;
        pcStack_88 = pcVar10;
        pcStack_80 = pcVar8;
        piStack_78 = piVar6;
        if (pcVar9 == NULL) {
            sym.writel_relaxed(8,piVar7[1] + 0x14);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar9,0x8000170);
            (*pcVar9)(piVar7,8,0x14);
        }
        pcVar10 = *(*piVar7 + 8);
        if (pcVar10 == NULL) {
            sym.writel_relaxed(8,piVar7[1] + 0x18);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000170);
            (*pcVar10)(piVar7,8,0x18);
        }
        pcVar10 = *(*piVar7 + 0x10);
        if (pcVar10 == NULL) {
            uVar1 = sym.readl_relaxed(piVar7[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000130);
            uVar1 = (*pcVar10)(piVar7,0xc);
        }
        pcVar10 = *(*piVar7 + 8);
        if (pcVar10 == NULL) {
            sym.writel_relaxed(uVar1 | 0x100,piVar7[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000170);
            (*pcVar10)(piVar7,uVar1 | 0x100,0xc);
        }
        pcVar10 = *(*piVar7 + 0x10);
        if (pcVar10 == NULL) {
            uVar1 = sym.readl_relaxed(piVar7[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000130);
            uVar1 = (*pcVar10)(piVar7,0xc);
        }
        if ((uVar1 >> 8 & 1) != 0) {
            uStack_c8 = 0;
            uStack_c0 = 0;
            uStack_d8 = 0;
            uStack_d0 = 0;
            uStack_e0 = 0;
            init_wait_entry(&uStack_e0,0);
            iVar3 = 6;
            while( true ) {
                prepare_to_wait_event(piVar7 + 0x14,&uStack_e0,2);
                pcVar10 = *(*piVar7 + 0x10);
                if (pcVar10 == NULL) {
                    uVar1 = sym.readl_relaxed(piVar7[1] + 0xc);
                }
                else {
                    __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000130);
                    uVar1 = (*pcVar10)(piVar7,0xc);
                }
                if (iVar3 == 0 && (uVar1 & 0x100) == 0) {
                    iVar3 = 1;
                }
                if (((uVar1 >> 8 & 1) == 0) || (iVar3 == 0)) break;
                iVar3 = schedule_timeout(iVar3);
            }
            finish_wait(piVar7 + 0x14,&uStack_e0);
        }
        pcVar10 = *(*piVar7 + 8);
        if (pcVar10 == NULL) {
            sym.writel_relaxed(0,piVar7[1] + 0x14);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000170);
            (*pcVar10)(piVar7,0,0x14);
        }
        pcVar10 = *(*piVar7 + 8);
        if (pcVar10 == NULL) {
            sym.writel_relaxed(0,piVar7[1] + 0x18);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar10,0x8000170);
            (*pcVar10)(piVar7,0,0x18);
        }
        pcVar10 = *(*piVar7 + 0x10);
        if (pcVar10 == NULL) {
            uVar2 = sym.readl_relaxed(piVar7[1] + 0xc);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar10,0x8000130);
            uVar2 = (*pcVar10)(piVar7,0xc);
        }
        iVar3 = sp_el0;
        if (*(iVar3 + 0x5e0) != iStack_b8) {
            auVar11 = __stack_chk_fail((uVar2 & 0x100) == 0);
            puVar5 = auVar11._0_8_;
            *extraout_x18_00 = sym.__cfi_check_fail;
            if (puVar5 != NULL) {
                switch(*puVar5) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar5,auVar11._8_8_,0);
                    break;
                default:
                    return;
                }
            }
    //WARNING: Does not return
            pcVar10 = SoftwareBreakpoint(0x5502,0x8004aac);
            (*pcVar10)();
        }
        return;
    }
    return;
}


// ===== sym.cqhci_clear_all_tasks @ 0x080046b8 (size 924) =====

void sym.cqhci_clear_all_tasks(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar4;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_48 = *(iVar6 + 0x5e0);
    piVar4 = *(arg1 + 0x658);
    pcVar5 = *(*piVar4 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(8,piVar4[1] + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(piVar4,8,0x14);
    }
    pcVar5 = *(*piVar4 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(8,piVar4[1] + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(piVar4,8,0x18);
    }
    pcVar5 = *(*piVar4 + 0x10);
    if (pcVar5 == NULL) {
        uVar1 = sym.readl_relaxed(piVar4[1] + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
        uVar1 = (*pcVar5)(piVar4,0xc);
    }
    pcVar5 = *(*piVar4 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(uVar1 | 0x100,piVar4[1] + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(piVar4,uVar1 | 0x100,0xc);
    }
    pcVar5 = *(*piVar4 + 0x10);
    if (pcVar5 == NULL) {
        uVar1 = sym.readl_relaxed(piVar4[1] + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
        uVar1 = (*pcVar5)(piVar4,0xc);
    }
    if ((uVar1 >> 8 & 1) != 0) {
        uStack_58 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_70 = 0;
        init_wait_entry(&uStack_70,0);
        iVar6 = 6;
        while( true ) {
            prepare_to_wait_event(piVar4 + 0x14,&uStack_70,2);
            pcVar5 = *(*piVar4 + 0x10);
            if (pcVar5 == NULL) {
                uVar1 = sym.readl_relaxed(piVar4[1] + 0xc);
            }
            else {
                __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
                uVar1 = (*pcVar5)(piVar4,0xc);
            }
            if (iVar6 == 0 && (uVar1 & 0x100) == 0) {
                iVar6 = 1;
            }
            if (((uVar1 >> 8 & 1) == 0) || (iVar6 == 0)) break;
            iVar6 = schedule_timeout(iVar6);
        }
        finish_wait(piVar4 + 0x14,&uStack_70);
    }
    pcVar5 = *(*piVar4 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(0,piVar4[1] + 0x14);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(piVar4,0,0x14);
    }
    pcVar5 = *(*piVar4 + 8);
    if (pcVar5 == NULL) {
        sym.writel_relaxed(0,piVar4[1] + 0x18);
    }
    else {
        __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000170);
        (*pcVar5)(piVar4,0,0x18);
    }
    pcVar5 = *(*piVar4 + 0x10);
    if (pcVar5 == NULL) {
        uVar2 = sym.readl_relaxed(piVar4[1] + 0xc);
    }
    else {
        __cfi_slowpath_diag(0x380bb0b8c54a3af6,pcVar5,0x8000130);
        uVar2 = (*pcVar5)(piVar4,0xc);
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_48) {
        return;
    }
    auVar7 = __stack_chk_fail((uVar2 & 0x100) == 0);
    puVar3 = auVar7._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar3 != NULL) {
        switch(*puVar3) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar3,auVar7._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar5 = SoftwareBreakpoint(0x5502,0x8004aac);
    (*pcVar5)();
}


// ===== sym.__cfi_check_fail @ 0x08004a54 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08004a98

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
    //switch table (4 cases) at 0x8000a9c
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8004aac);
    (*pcVar1)();
}


// ===== sym.cqhci_crypto_init @ 0x08004aac (size 668) =====

ulong sym.cqhci_crypto_init(int64_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    ulong uVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint32_t *puVar10;
    uint32_t *puVar11;
    uint64_t in_x2;
    uint64_t uVar12;
    uint64_t uVar13;
    uint8_t *puVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t unaff_x19;
    uint64_t unaff_x20;
    int64_t iVar15;
    code *unaff_x21;
    code *unaff_x22;
    code *pcVar16;
    uint64_t *puVar17;
    uint64_t unaff_x24;
    ulong unaff_x30;
    uchar auVar18 [16];
    ulong uStack_248;
    ulong uStack_240;
    ulong uStack_238;
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
    int64_t iStack_1c8;
    uchar **ppuStack_1c0;
    code *pcStack_1b8;
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
    int64_t iStack_128;
    uchar *puStack_120;
    code *pcStack_118;
    uint64_t uStack_110;
    uint64_t *puStack_108;
    code *pcStack_100;
    code *pcStack_f8;
    uint64_t uStack_f0;
    int64_t iStack_e8;
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
    iVar15 = sp_el0;
    iStack_58 = *(iVar15 + 0x5e0);
    puVar17 = *(arg1 + 0x10);
    if ((*(puVar17 + 0x3eb) >> 3 & 1) == 0) {
code_r0x08004b0c:
        uVar6 = 0;
        arg1 = unaff_x19;
    }
    else {
        unaff_x20 = *puVar17;
        unaff_x21 = *(*arg1 + 0x10);
        unaff_x19 = arg1;
        if (unaff_x21 != NULL) {
            in_x2 = 0x80002d0;
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,unaff_x21);
            uVar4 = (*unaff_x21)(arg1,4);
            if ((uVar4 >> 0x1c & 1) != 0) goto code_r0x08004b84;
            goto code_r0x08004b0c;
        }
        uVar4 = sym.readl_relaxed_1(*(arg1 + 8) + 4);
        if ((uVar4 >> 0x1c & 1) == 0) goto code_r0x08004b0c;
code_r0x08004b84:
        unaff_x21 = *(*arg1 + 0x10);
        if (unaff_x21 == NULL) {
            uVar6 = sym.readl_relaxed_1(*(arg1 + 8) + 0x100);
        }
        else {
            __cfi_slowpath_diag(0x380bb0b8c54a3af6,unaff_x21,0x80002d0);
            uVar6 = (*unaff_x21)(arg1,0x100);
        }
        *(arg1 + 0xc0) = uVar6;
        in_x2 = 0xdc0;
        *(arg1 + 0xd0) = uVar6 >> 0x10 & 0xff00;
        iVar15 = devm_kmalloc(unaff_x20,(uVar6 & 0xff) << 2);
        *(arg1 + 200) = iVar15;
        if (iVar15 == 0) {
            uVar6 = 0xfffffff4;
        }
        else {
            uVar3 = *(arg1 + 0xc1);
            unaff_x24 = uVar3;
            unaff_x21 = puVar17 + 0xcd;
            in_x2 = uVar3 + 1;
            uVar6 = devm_blk_ksm_init(unaff_x20,unaff_x21);
            if (uVar6 == 0) {
                puVar17[0xd3] = unaff_x20;
                uVar12 = *0x8000b58;
                uVar13 = _reloc.cqhci_crypto_keyslot_evict.1b0cf1b26cc4c8c5da90e27c8298a6a0.cfi_jt;
                *unaff_x21 = _reloc.cqhci_crypto_keyslot_program.1b0cf1b26cc4c8c5da90e27c8298a6a0.cfi_jt;
                puVar17[0xce] = uVar13;
                puVar17[0xcf] = uVar12;
                puVar17[0xd0] = 0x100000004;
                if (*(arg1 + 0xc0) != '\0') {
                    uVar13 = 0;
                    uVar12 = 0x104;
                    do {
                        unaff_x22 = *(*arg1 + 0x10);
                        if (unaff_x22 == NULL) {
                            uVar5 = sym.readl_relaxed_1(*(arg1 + 8) + uVar12);
                        }
                        else {
                            __cfi_slowpath_diag(0x380bb0b8c54a3af6,unaff_x22,0x80002d0);
                            uVar5 = (*unaff_x22)(arg1,uVar12 & 0xffffffff);
                        }
                        *(*(arg1 + 200) + uVar13 * 4) = uVar5;
                        uVar4 = *(*(arg1 + 200) + uVar13 * 4);
                        if ((uVar4 & 0xff00ff) == 0x30000) {
                            *(puVar17 + 0x68c) = *(puVar17 + 0x68c) | (uVar4 & 0xff00) << 1;
                        }
                        uVar13 = uVar13 + 1;
                        uVar12 = uVar12 + 4;
                    } while (uVar13 < *(arg1 + 0xc0));
                }
                unaff_x20 = 0;
                uVar4 = uVar3 + 1;
                unaff_x21 = uVar4;
                do {
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
                    in_x2 = unaff_x20;
                    sym.cqhci_crypto_program_key(arg1,&uStack_d8,unaff_x20);
                    uVar2 = unaff_x20 + 1;
                    unaff_x20 = uVar2;
                } while (uVar4 != uVar2);
                uVar6 = 0;
                *(arg1 + 0x30) = *(arg1 + 0x30) | 1;
                goto code_r0x08004b1c;
            }
        }
    }
    *(puVar17 + 0x7d) = puVar17[0x7d] & 0xf7ffffff;
code_r0x08004b1c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return uVar6;
    }
    auVar18 = __stack_chk_fail(uVar6);
    puVar10 = auVar18._8_8_;
    *extraout_x18 = sym.cqhci_crypto_keyslot_program;
    pcStack_118 = sym.cqhci_crypto_keyslot_program;
    iVar15 = sp_el0;
    iStack_128 = *(iVar15 + 0x5e0);
    uVar4 = *puVar10;
    uVar13 = uVar4;
    puStack_120 = &stack0xffffffffffffffb0;
    uStack_110 = unaff_x24;
    puStack_108 = puVar17;
    pcStack_100 = unaff_x22;
    pcStack_f8 = unaff_x21;
    uStack_f0 = unaff_x20;
    iStack_e8 = arg1;
    if (4 < uVar4) {
code_r0x08004f0c:
    //WARNING: Does not return
        pcVar16 = SoftwareBreakpoint(0x5512,0x8004f10);
        (*pcVar16)();
    }
    iVar15 = *(auVar18._0_8_ + -0x10);
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
    if (*(iVar15 + 0xc0) != 0) {
        if (3 < uVar4) {
code_r0x08004f08:
    //WARNING: Does not return
            pcVar16 = SoftwareBreakpoint(1,0x8004f0c);
            (*pcVar16)();
        }
        in_x2 = in_x2 & 0xffffffff;
        uVar12 = 0;
        puVar14 = *(iVar15 + 200) + 1;
        do {
            if (*(obj.cqhci_crypto_algs + uVar13 * 8) == puVar14[-1]) {
                if (0x20 < (uVar13 << 3 | 4)) goto code_r0x08004f08;
                if ((*(uVar13 * 8 + 0x8000ad4) == puVar14[1]) && ((puVar10[1] >> 9 & *puVar14) != 0)) {
                    if (-1 < uVar12) {
                        puVar11 = puVar10 + 6;
                        uVar4 = puVar10[5];
                        uVar13 = uVar4;
                        uStack_168._0_3_ = CONCAT11(uVar12,puVar10[1] >> 9);
                        uStack_168 = CONCAT13(0x80,uStack_168);
                        if (puVar14[-1] == 0) {
                            uVar13 = uVar4 >> 1;
                            memcpy(&uStack_1a8,puVar11,uVar13);
                            if (0x101 < uVar4) goto code_r0x08004f0c;
                            puVar7 = &uStack_188;
                            puVar11 = puVar10 + uVar13 + 0x18;
                        }
                        else {
                            puVar7 = &uStack_1a8;
                        }
                        memcpy(puVar7,puVar11,uVar13);
                        uVar6 = sym.cqhci_crypto_program_key(iVar15,&uStack_1a8,in_x2);
                        uStack_1a8 = 0;
                        uStack_1a0 = 0;
                        uStack_198 = 0;
                        uStack_190 = 0;
                        uStack_188 = 0;
                        uStack_180 = 0;
                        uStack_178 = 0;
                        uStack_170 = 0;
                        uStack_168 = 0;
                        uStack_160 = 0;
                        uStack_158 = 0;
                        uStack_150 = 0;
                        uStack_148 = 0;
                        uStack_140 = 0;
                        uStack_138 = 0;
                        uStack_130 = 0;
                        iVar15 = sp_el0;
                        if (*(iVar15 + 0x5e0) == iStack_128) {
                            return uVar6;
                        }
                        iVar8 = __stack_chk_fail();
                        *extraout_x18_00 = sym.cqhci_crypto_keyslot_evict;
                        pcStack_1b8 = sym.cqhci_crypto_keyslot_evict;
                        iVar15 = sp_el0;
                        iStack_1c8 = *(iVar15 + 0x5e0);
                        uStack_1d8 = 0;
                        uStack_1d0 = 0;
                        uStack_1e8 = 0;
                        uStack_1e0 = 0;
                        uStack_1f8 = 0;
                        uStack_1f0 = 0;
                        uStack_208 = 0;
                        uStack_200 = 0;
                        uStack_218 = 0;
                        uStack_210 = 0;
                        uStack_228 = 0;
                        uStack_220 = 0;
                        uStack_238 = 0;
                        uStack_230 = 0;
                        uStack_248 = 0;
                        uStack_240 = 0;
                        ppuStack_1c0 = &puStack_120;
                        uVar6 = sym.cqhci_crypto_program_key(*(iVar8 + -0x10),&uStack_248,in_x2);
                        iVar15 = sp_el0;
                        if (*(iVar15 + 0x5e0) == iStack_1c8) {
                            return uVar6;
                        }
                        auVar18 = __stack_chk_fail();
                        iVar15 = auVar18._8_8_;
                        piVar9 = auVar18._0_8_;
                        *extraout_x18_01 = sym.cqhci_crypto_program_key;
                        pcVar16 = *(*piVar9 + 0x40);
                        if (pcVar16 == NULL) {
                            pcVar16 = *(*piVar9 + 8);
                            uVar4 = piVar9[0x1a] + in_x2 * 0x80;
                            iVar1 = uVar4 + 0x40;
                            if (pcVar16 == NULL) {
                                sym.writel_relaxed_1(0,piVar9[1] + iVar1);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar16,0x8000310);
                                (*pcVar16)(piVar9,0,iVar1);
                            }
                            iVar8 = 0;
                            do {
                                uVar2 = *(iVar15 + iVar8);
                                pcVar16 = *(*piVar9 + 8);
                                if (pcVar16 == NULL) {
                                    sym.writel_relaxed_1(uVar2,piVar9[1] + uVar4 + iVar8);
                                }
                                else {
                                    __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar16,0x8000310);
                                    (*pcVar16)(piVar9,uVar2,uVar4 + iVar8 & 0xffffffff);
                                }
                                iVar8 = iVar8 + 4;
                            } while (iVar8 != 0x40);
                            uVar2 = *(iVar15 + 0x44);
                            pcVar16 = *(*piVar9 + 8);
                            if (pcVar16 == NULL) {
                                sym.writel_relaxed_1(uVar2,piVar9[1] + uVar4 + 0x44);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar16,0x8000310);
                                (*pcVar16)(piVar9,uVar2,uVar4 + 0x44);
                            }
                            uVar4 = *(iVar15 + 0x40);
                            pcVar16 = *(*piVar9 + 8);
                            if (pcVar16 == NULL) {
                                sym.writel_relaxed_1(uVar4,piVar9[1] + iVar1);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar16,0x8000310);
                                (*pcVar16)(piVar9,uVar4,iVar1);
                            }
                            uVar6 = 0;
                        }
                        else {
                            __cfi_slowpath_diag(0x666408267b48a086,pcVar16,0x80002f0);
                            uVar6 = (*pcVar16)(piVar9,iVar15,in_x2 & 0xffffffff);
                        }
                        return uVar6;
                    }
                    break;
                }
            }
            uVar12 = uVar12 + 1;
            puVar14 = puVar14 + 4;
        } while (*(iVar15 + 0xc0) != uVar12);
    }
    //WARNING: Does not return
    pcVar16 = SoftwareBreakpoint(0x800,0x8004e6c);
    (*pcVar16)();
}


// ===== sym.cqhci_crypto_keyslot_program @ 0x08004d48 (size 460) =====

ulong sym.cqhci_crypto_keyslot_program(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong *puVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint8_t *puVar10;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t arg3_00;
    int64_t iVar11;
    code *pcVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
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
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
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
    ulong uStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_48 = *(iVar11 + 0x5e0);
    uVar2 = *arg2;
    uVar9 = uVar2;
    if (4 < uVar2) {
code_r0x08004f0c:
    //WARNING: Does not return
        pcVar12 = SoftwareBreakpoint(0x5512,0x8004f10);
        (*pcVar12)();
    }
    iVar11 = *(arg1 + -0x10);
    uStack_58 = 0;
    uStack_50 = 0;
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
    if (*(iVar11 + 0xc0) != 0) {
        if (3 < uVar2) {
code_r0x08004f08:
    //WARNING: Does not return
            pcVar12 = SoftwareBreakpoint(1,0x8004f0c);
            (*pcVar12)();
        }
        arg3_00 = arg3 & 0xffffffff;
        uVar8 = 0;
        uVar2 = *(arg2 + 4) >> 9;
        puVar10 = *(iVar11 + 200) + 1;
        do {
            if (*(obj.cqhci_crypto_algs + uVar9 * 8) == puVar10[-1]) {
                if (0x20 < (uVar9 << 3 | 4)) goto code_r0x08004f08;
                if ((*(uVar9 * 8 + 0x8000ad4) == puVar10[1]) && ((uVar2 & *puVar10) != 0)) {
                    if (-1 < uVar8) {
                        iVar6 = arg2 + 0x18;
                        uVar3 = *(arg2 + 0x14);
                        uVar9 = uVar3;
                        uStack_88._0_3_ = CONCAT11(uVar8,uVar2);
                        uStack_88 = CONCAT13(0x80,uStack_88);
                        if (puVar10[-1] == 0) {
                            uVar9 = uVar3 >> 1;
                            memcpy(&uStack_c8,iVar6,uVar9);
                            if (0x101 < uVar3) goto code_r0x08004f0c;
                            puVar4 = &uStack_a8;
                            iVar6 = arg2 + uVar9 + 0x18;
                        }
                        else {
                            puVar4 = &uStack_c8;
                        }
                        memcpy(puVar4,iVar6,uVar9);
                        uVar5 = sym.cqhci_crypto_program_key(iVar11,&uStack_c8,arg3_00);
                        uStack_c8 = 0;
                        uStack_c0 = 0;
                        uStack_b8 = 0;
                        uStack_b0 = 0;
                        uStack_a8 = 0;
                        uStack_a0 = 0;
                        uStack_98 = 0;
                        uStack_90 = 0;
                        uStack_88 = 0;
                        uStack_80 = 0;
                        uStack_78 = 0;
                        uStack_70 = 0;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        uStack_58 = 0;
                        uStack_50 = 0;
                        iVar11 = sp_el0;
                        if (*(iVar11 + 0x5e0) == iStack_48) {
                            return uVar5;
                        }
                        iVar6 = __stack_chk_fail();
                        *extraout_x18 = sym.cqhci_crypto_keyslot_evict;
                        pcStack_d8 = sym.cqhci_crypto_keyslot_evict;
                        iVar11 = sp_el0;
                        iStack_e8 = *(iVar11 + 0x5e0);
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
                        puStack_e0 = &stack0xffffffffffffffc0;
                        uVar5 = sym.cqhci_crypto_program_key(*(iVar6 + -0x10),&uStack_168,arg3_00);
                        iVar11 = sp_el0;
                        if (*(iVar11 + 0x5e0) == iStack_e8) {
                            return uVar5;
                        }
                        auVar13 = __stack_chk_fail();
                        iVar11 = auVar13._8_8_;
                        piVar7 = auVar13._0_8_;
                        *extraout_x18_00 = sym.cqhci_crypto_program_key;
                        pcVar12 = *(*piVar7 + 0x40);
                        if (pcVar12 == NULL) {
                            pcVar12 = *(*piVar7 + 8);
                            uVar2 = piVar7[0x1a] + arg3_00 * 0x80;
                            iVar1 = uVar2 + 0x40;
                            if (pcVar12 == NULL) {
                                sym.writel_relaxed_1(0,piVar7[1] + iVar1);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar12,0x8000310);
                                (*pcVar12)(piVar7,0,iVar1);
                            }
                            iVar6 = 0;
                            do {
                                uVar3 = *(iVar11 + iVar6);
                                pcVar12 = *(*piVar7 + 8);
                                if (pcVar12 == NULL) {
                                    sym.writel_relaxed_1(uVar3,piVar7[1] + uVar2 + iVar6);
                                }
                                else {
                                    __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar12,0x8000310);
                                    (*pcVar12)(piVar7,uVar3,uVar2 + iVar6 & 0xffffffff);
                                }
                                iVar6 = iVar6 + 4;
                            } while (iVar6 != 0x40);
                            uVar3 = *(iVar11 + 0x44);
                            pcVar12 = *(*piVar7 + 8);
                            if (pcVar12 == NULL) {
                                sym.writel_relaxed_1(uVar3,piVar7[1] + uVar2 + 0x44);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar12,0x8000310);
                                (*pcVar12)(piVar7,uVar3,uVar2 + 0x44);
                            }
                            uVar2 = *(iVar11 + 0x40);
                            pcVar12 = *(*piVar7 + 8);
                            if (pcVar12 == NULL) {
                                sym.writel_relaxed_1(uVar2,piVar7[1] + iVar1);
                            }
                            else {
                                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar12,0x8000310);
                                (*pcVar12)(piVar7,uVar2,iVar1);
                            }
                            uVar5 = 0;
                        }
                        else {
                            __cfi_slowpath_diag(0x666408267b48a086,pcVar12,0x80002f0);
                            uVar5 = (*pcVar12)(piVar7,iVar11,arg3_00 & 0xffffffff);
                        }
                        return uVar5;
                    }
                    break;
                }
            }
            uVar8 = uVar8 + 1;
            puVar10 = puVar10 + 4;
        } while (*(iVar11 + 0xc0) != uVar8);
    }
    //WARNING: Does not return
    pcVar12 = SoftwareBreakpoint(0x800,0x8004e6c);
    (*pcVar12)();
}


// ===== sym.cqhci_crypto_keyslot_evict @ 0x08004f14 (size 120) =====

ulong sym.cqhci_crypto_keyslot_evict(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar7;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
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
    ulong uStack_28;
    ulong uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_18 = *(iVar6 + 0x5e0);
    uStack_28 = 0;
    uStack_20 = 0;
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
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar4 = sym.cqhci_crypto_program_key(*(arg1 + -0x10),&uStack_98,arg2);
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_18) {
        return uVar4;
    }
    auVar9 = __stack_chk_fail();
    iVar6 = auVar9._8_8_;
    piVar5 = auVar9._0_8_;
    *extraout_x18 = sym.cqhci_crypto_program_key;
    pcVar7 = *(*piVar5 + 0x40);
    if (pcVar7 == NULL) {
        pcVar7 = *(*piVar5 + 8);
        uVar2 = piVar5[0x1a] + arg2 * 0x80;
        iVar1 = uVar2 + 0x40;
        if (pcVar7 == NULL) {
            sym.writel_relaxed_1(0,piVar5[1] + iVar1);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
            (*pcVar7)(piVar5,0,iVar1);
        }
        iVar8 = 0;
        do {
            uVar3 = *(iVar6 + iVar8);
            pcVar7 = *(*piVar5 + 8);
            if (pcVar7 == NULL) {
                sym.writel_relaxed_1(uVar3,piVar5[1] + uVar2 + iVar8);
            }
            else {
                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
                (*pcVar7)(piVar5,uVar3,uVar2 + iVar8 & 0xffffffff);
            }
            iVar8 = iVar8 + 4;
        } while (iVar8 != 0x40);
        uVar3 = *(iVar6 + 0x44);
        pcVar7 = *(*piVar5 + 8);
        if (pcVar7 == NULL) {
            sym.writel_relaxed_1(uVar3,piVar5[1] + uVar2 + 0x44);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
            (*pcVar7)(piVar5,uVar3,uVar2 + 0x44);
        }
        uVar2 = *(iVar6 + 0x40);
        pcVar7 = *(*piVar5 + 8);
        if (pcVar7 == NULL) {
            sym.writel_relaxed_1(uVar2,piVar5[1] + iVar1);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar7,0x8000310);
            (*pcVar7)(piVar5,uVar2,iVar1);
        }
        uVar4 = 0;
    }
    else {
        __cfi_slowpath_diag(0x666408267b48a086,pcVar7,0x80002f0);
        uVar4 = (*pcVar7)(piVar5,iVar6,arg2 & 0xffffffff);
    }
    return uVar4;
}


// ===== sym.cqhci_crypto_program_key @ 0x08004f8c (size 524) =====

ulong sym.cqhci_crypto_program_key(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar5 = *(*arg1 + 0x40);
    if (pcVar5 == NULL) {
        pcVar5 = *(*arg1 + 8);
        uVar2 = *(arg1 + 0xd0) + arg3 * 0x80;
        iVar1 = uVar2 + 0x40;
        if (pcVar5 == NULL) {
            sym.writel_relaxed_1(0,*(arg1 + 8) + iVar1);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000310);
            (*pcVar5)(arg1,0,iVar1);
        }
        iVar6 = 0;
        do {
            uVar3 = *(arg2 + iVar6);
            pcVar5 = *(*arg1 + 8);
            if (pcVar5 == NULL) {
                sym.writel_relaxed_1(uVar3,*(arg1 + 8) + uVar2 + iVar6);
            }
            else {
                __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000310);
                (*pcVar5)(arg1,uVar3,uVar2 + iVar6 & 0xffffffff);
            }
            iVar6 = iVar6 + 4;
        } while (iVar6 != 0x40);
        uVar3 = *(arg2 + 0x44);
        pcVar5 = *(*arg1 + 8);
        if (pcVar5 == NULL) {
            sym.writel_relaxed_1(uVar3,*(arg1 + 8) + uVar2 + 0x44);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000310);
            (*pcVar5)(arg1,uVar3,uVar2 + 0x44);
        }
        uVar2 = *(arg2 + 0x40);
        pcVar5 = *(*arg1 + 8);
        if (pcVar5 == NULL) {
            sym.writel_relaxed_1(uVar2,*(arg1 + 8) + iVar1);
        }
        else {
            __cfi_slowpath_diag(0x5568c9793ee870d9,pcVar5,0x8000310);
            (*pcVar5)(arg1,uVar2,iVar1);
        }
        uVar4 = 0;
    }
    else {
        __cfi_slowpath_diag(0x666408267b48a086,pcVar5,0x80002f0);
        uVar4 = (*pcVar5)(arg1,arg2,arg3 & 0xffffffff);
    }
    return uVar4;
}

