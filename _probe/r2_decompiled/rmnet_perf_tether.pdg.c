// decompiled from rmnet_perf_tether by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 268) =====

//WARNING: Switch with 1 destination removed at 0x080021a8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x6ff45a98e768e832) {
        if (arg1 == -0x52827989418b0b8b) {
            uVar2 = 0x8001138;
        }
        else if (arg1 == 0x2b3a43e29242445) {
            uVar2 = 0x8001128;
        }
        else {
            if (arg1 != 0x68131453fce1715e) goto code_r0x08002168;
            uVar2 = 0x8001118;
        }
    }
    else if (arg1 == 0x6ff45a98e768e832) {
        uVar2 = 0x8001130;
    }
    else if (arg1 == 0x7d57972cd3914fb1) {
        uVar2 = 0x8001140;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08002168;
        uVar2 = 0x8001120;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x08002168:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80021bc);
    (*pcVar1)();
}


// ===== sym.DATARMNET6ab362e985.cfi_jt @ 0x08001118 (size 8) =====

void sym.DATARMNET6ab362e985.cfi_jt(uchar param_1 [16],uchar param_2 [16],int64_t param_3)

{
    code *pcVar1;
    code *pcVar2;
    int *piVar3;
    ulong uVar4;
    bool bVar5;
    char cVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t extraout_x1;
    uint uVar12;
    int64_t *piVar13;
    ulong *puVar14;
    uint8_t *puVar15;
    code *pcVar16;
    int64_t iVar17;
    int64_t *piVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_3c = 0;
    if ((((*0x8002000 == 0) || (*(param_3 + 0x90) == 0)) || (iVar8 = __dev_get_by_index(init_net), iVar8 == 0)) ||
       (iVar7 = sym.DATARMNET233bccd449(param_3,&iStack_3c,param_2,1), iStack_3c == 0)) goto code_r0x08001ba8;
    uVar9 = _raw_spin_lock_irqsave(obj.DATARMNETcf56327171);
    pcVar2 = _obj.DATARMNETcf56327171;
    if ((_obj.DATARMNETcf56327171 == NULL) || (_obj.DATARMNETcf56327171 == obj.DATARMNETcf56327171)) {
        iVar8 = 0;
        do {
            piVar13 = *(obj.DATARMNET031f18e039 + iVar8);
            if (piVar13 != NULL && piVar13 != 0x10) {
                piVar18 = piVar13[1];
                if (piVar18 != NULL) {
                    iVar8 = *piVar13;
                    *piVar18 = iVar8;
                    if (iVar8 != 0) {
                        *(iVar8 + 8) = piVar18;
                    }
                    *piVar13 = 0;
                    piVar13[1] = 0;
                }
                *(piVar13 + 2) = iVar7;
                if (*(param_3 + 0xb0) == -0x227a) {
                    iVar8 = *(param_3 + 0xd0) + *(param_3 + 0xb4);
                    uVar4 = *(iVar8 + 0x20);
                    *(piVar13 + 0x14) = *(iVar8 + 0x18);
                    *(piVar13 + 0x1c) = uVar4;
                    iVar8 = *(param_3 + 0xd0) + *(param_3 + 0xb4);
                    iVar11 = *(iVar8 + 0x10);
                    piVar13[5] = *(iVar8 + 8);
                    piVar13[6] = iVar11;
                    *(piVar13 + 0x34) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 6);
                    *(piVar13 + 7) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2) + 2);
                    uVar12 = 0xb;
                    *(piVar13 + 0x3c) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2));
code_r0x08001b68:
                    *(piVar13 + 8) = uVar12;
                }
                else if (*(param_3 + 0xb0) == 8) {
                    *(piVar13 + 0x14) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 0x10);
                    *(piVar13 + 3) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 0xc);
                    *(piVar13 + 0x1c) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 9);
                    *(piVar13 + 4) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2) + 2);
                    uVar12 = 5;
                    *(piVar13 + 0x24) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2));
                    goto code_r0x08001b68;
                }
                pcVar2 = obj.DATARMNET031f18e039 + (iVar7 * 0x61c88647 >> 0x1b) * 8;
                iVar8 = *pcVar2;
                *piVar13 = iVar8;
                if (iVar8 != 0) {
                    *(iVar8 + 8) = piVar13;
                }
                *pcVar2 = piVar13;
                piVar13[1] = pcVar2;
                break;
            }
            iVar8 = iVar8 + 8;
        } while (iVar8 != 0x100);
    }
    else {
        uVar10 = __list_del_entry_valid(_obj.DATARMNETcf56327171);
        if ((uVar10 & 1) != 0) {
            iVar8 = *pcVar2;
            piVar13 = *(pcVar2 + 8);
            *(iVar8 + 8) = piVar13;
            *piVar13 = iVar8;
        }
        *(pcVar2 + 0x20) = iVar7;
        *pcVar2 = -0x2152ffffffffff00;
        *(pcVar2 + 8) = -0x2152fffffffffede;
        if (*(param_3 + 0xb0) == -0x227a) {
            iVar8 = *(param_3 + 0xd0) + *(param_3 + 0xb4);
            uVar4 = *(iVar8 + 0x20);
            *(pcVar2 + 0x24) = *(iVar8 + 0x18);
            *(pcVar2 + 0x2c) = uVar4;
            iVar8 = *(param_3 + 0xd0) + *(param_3 + 0xb4);
            iVar11 = *(iVar8 + 0x10);
            *(pcVar2 + 0x38) = *(iVar8 + 8);
            *(pcVar2 + 0x40) = iVar11;
            *(pcVar2 + 0x44) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 6);
            *(pcVar2 + 0x48) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2) + 2);
            uVar12 = 0xb;
            *(pcVar2 + 0x4c) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2));
code_r0x08001ac0:
            *(pcVar2 + 0x50) = uVar12;
        }
        else if (*(param_3 + 0xb0) == 8) {
            *(pcVar2 + 0x24) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 0x10);
            *(pcVar2 + 0x28) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 0xc);
            *(pcVar2 + 0x2c) = *(*(param_3 + 0xd0) + *(param_3 + 0xb4) + 9);
            *(pcVar2 + 0x30) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2) + 2);
            uVar12 = 5;
            *(pcVar2 + 0x34) = *(*(param_3 + 0xd0) + *(param_3 + 0xb2));
            goto code_r0x08001ac0;
        }
        pcVar1 = obj.DATARMNET031f18e039 + (iVar7 * 0x61c88647 >> 0x1b) * 8;
        iVar8 = *pcVar1;
        pcVar16 = pcVar2 + 0x10;
        *pcVar16 = iVar8;
        if (iVar8 != 0) {
            *(iVar8 + 8) = pcVar16;
        }
        *pcVar1 = pcVar16;
        *(pcVar2 + 0x18) = pcVar1;
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNETcf56327171,uVar9);
code_r0x08001ba8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    cVar6 = __stack_chk_fail();
    *extraout_x18 = 0x8001bdc;
    iVar8 = dev_get_by_name(init_net,"rmnet_ipa0");
    if (iVar8 != 0) {
        if ((cVar6 == '\x01') && (iVar11 = __alloc_skb(0x10,0xa20,0,0xffffffff), iVar11 != 0)) {
            skb_put(iVar11,0x10);
            puVar14 = *(iVar11 + 0xd8);
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar15 = *(iVar11 + 0xd8);
            puVar15[2] = 0;
            puVar15[3] = 0xc;
            *puVar15 = *puVar15 | 0x80;
            *(*(iVar11 + 0xd8) + 4) = 0x1b;
            iVar17 = *(iVar11 + 0xd8);
            *(iVar17 + 0xc) = 1;
            *(iVar17 + 0xe) = extraout_x1 == 0;
            *(iVar11 + 0x10) = iVar8;
            *(iVar11 + 0xb0) = 0xf900;
            rmnet_qmap_send(iVar11,0xff,0);
        }
        iVar11 = sp_el0;
        piVar13 = iVar11 + 0x10;
        *(iVar11 + 0x10) = *piVar13 + 1;
        iVar17 = tpidr_el1;
        piVar3 = iVar17 + *(iVar8 + 0x4d0);
        do {
            cVar6 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
                *piVar3 = *piVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar8 = *piVar13;
        *(iVar11 + 0x10) = iVar8 + -1;
        if ((iVar8 + -1 == 0) || (*piVar13 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001120 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001b9,"DATARMNET50e3d76d94");
    unregister_netdevice_notifier(reloc.DATARMNET6e31e62d2e.738b6e6ae135bd842ca33a1f4baaf200.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001128 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001f7,"");
    register_netdevice_notifier(reloc.DATARMNET6e31e62d2e.738b6e6ae135bd842ca33a1f4baaf200.cfi_jt);
    return;
}


// ===== sym.DATARMNETe70d5ec61a.cfi_jt @ 0x08001130 (size 8) =====

void sym.DATARMNETe70d5ec61a.cfi_jt
               (uchar param_1 [16],uchar param_2 [16],int64_t param_3,int64_t param_4,int param_5,int param_6)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    char cVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    ulong *puVar9;
    code *pcVar10;
    bool bVar11;
    int iVar12;
    ulong uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    uint *puVar17;
    uint32_t uVar18;
    int iVar19;
    int64_t iVar20;
    char *pcVar21;
    uint16_t *puVar22;
    uint16_t *puVar23;
    uint32_t uVar24;
    uint *puVar25;
    int64_t iVar26;
    uint32_t *puVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar28;
    ulong unaff_x30;
    uchar auVar29 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    uint32_t auStack_98 [4];
    ulong uStack_88;
    uint uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_58 = *(iVar20 + 0x5e0);
    iStack_5c = 0;
    if (*0x8002000 != 0) {
        param_5 = 1;
        param_6 = 0;
        iVar12 = sym.DATARMNET233bccd449(param_4,&iStack_5c,param_2,0);
        if (iStack_5c != 0) {
            uVar13 = _raw_spin_lock_irqsave(obj.DATARMNETcf56327171);
            if ((*(obj.DATARMNET031f18e039 + (iVar12 * 0x61c88647 >> 0x1b) * 8) != 0) &&
               (puVar28 = *(obj.DATARMNET031f18e039 + (iVar12 * 0x61c88647 >> 0x1b) * 8) + -0x10, puVar28 != NULL)) {
                do {
                    if (*(param_4 + 0xb0) == -0x227a) {
                        iVar20 = *(param_4 + 0xd0) + *(param_4 + 0xb4);
                        if ((((*(puVar28 + 0x24) == *(iVar20 + 8) && *(puVar28 + 0x2c) == *(iVar20 + 0x10)) &&
                             (puVar28[7] == *(iVar20 + 0x18) && puVar28[8] == *(iVar20 + 0x20))) &&
                            (*(puVar28 + 0x44) == *(iVar20 + 6))) &&
                           (((puVar22 = *(param_4 + 0xd0) + *(param_4 + 0xb2), *(puVar28 + 9) == *puVar22 &&
                             (*(puVar28 + 0x4c) == puVar22[1])) && (*(puVar28 + 10) == 0xb)))) {
code_r0x0800131c:
                            piVar16 = puVar28[3];
                            if (piVar16 != NULL) {
                                iVar20 = puVar28[2];
                                *piVar16 = iVar20;
                                if (iVar20 != 0) {
                                    *(iVar20 + 8) = piVar16;
                                }
                                puVar28[2] = 0;
                                puVar28[3] = 0;
                            }
                            puVar9 = _obj.DATARMNET031f18e039;
                            param_5 = 0x8000088;
                            uVar14 = __list_add_valid(puVar28,_obj.DATARMNET031f18e039);
                            if ((uVar14 & 1) != 0) {
                                _obj.DATARMNET031f18e039 = puVar28;
                                *puVar28 = obj.DATARMNETcf56327171;
                                puVar28[1] = puVar9;
                                *puVar9 = puVar28;
                            }
                            _raw_spin_unlock_irqrestore(obj.DATARMNETcf56327171,uVar13);
                            if (((*(param_3 + 0xc) ^ 0xffff) & 0x1200) != 0) goto code_r0x080013fc;
                            if (*0x8002000 != 0) {
                                if (0xffff < *0x8002000) {
                                    *0x8002000 = 0xffff;
                                }
                                *(param_3 + 0xe) = *0x8002000 >> 8 & 0xff | (*0x8002000 & 0xff00ff) << 8;
                            }
                            if (*0x8002000 == 0) goto code_r0x080013fc;
                            if (0xe < *0x8002000) {
                                *0x8002000 = 0xe;
                            }
                            uVar18 = (*(param_3 + 0xc) >> 2 & 0x3c) - 0x14;
                            if (uVar18 == 0) goto code_r0x080013fc;
                            pcVar21 = param_3 + 0x14;
                            goto code_r0x08001440;
                        }
                    }
                    else if (*(param_4 + 0xb0) == 8) {
                        iVar20 = *(param_4 + 0xd0) + *(param_4 + 0xb4);
                        if (((*(puVar28 + 0x24) == *(iVar20 + 0xc)) && (*(puVar28 + 5) == *(iVar20 + 0x10))) &&
                           ((*(puVar28 + 0x2c) == *(iVar20 + 9) &&
                            (((puVar22 = *(param_4 + 0xd0) + *(param_4 + 0xb2), *(puVar28 + 6) == *puVar22 &&
                              (*(puVar28 + 0x34) == puVar22[1])) && (*(puVar28 + 10) == 5)))))) goto code_r0x0800131c;
                    }
                    piVar16 = puVar28 + 2;
                    puVar28 = NULL;
                    if (*piVar16 != 0) {
                        puVar28 = *piVar16 + -0x10;
                    }
                } while (puVar28 != NULL);
            }
            _raw_spin_unlock_irqrestore(obj.DATARMNETcf56327171,uVar13);
        }
    }
    goto code_r0x080013fc;
code_r0x08001440:
    do {
        cVar5 = *pcVar21;
        if (cVar5 == '\x01') {
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar21 + 1;
        }
        else {
            if ((cVar5 == '\0') || (uVar18 < 2)) break;
            uVar6 = pcVar21[1];
            if ((uVar6 < 2) || (bVar11 = uVar18 < uVar6, uVar18 = uVar18 - uVar6, bVar11)) break;
            if (cVar5 == '\x03') {
                pcVar21[2] = *0x8002000;
            }
            pcVar21 = pcVar21 + 2 + (uVar6 - 2);
        }
    } while (uVar18 != 0);
code_r0x080013fc:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_58) {
        return;
    }
    auVar29 = __stack_chk_fail();
    iVar15 = auVar29._0_8_;
    *extraout_x18 = sym.DATARMNET233bccd449;
    puStack_70 = &stack0xffffffffffffffb0;
    pcStack_68 = sym.DATARMNET233bccd449;
    iVar20 = sp_el0;
    iStack_78 = *(iVar20 + 0x5e0);
    uStack_80 = 0;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    uStack_a8 = 0;
    if (*(iVar15 + 0xb0) == -0x227a) {
        puVar22 = *(iVar15 + 0xd0) + *(iVar15 + 0xb2);
        uVar7 = puVar22[6];
        if ((uVar7 >> 9 & 1) == 0) goto code_r0x08001598;
        if (param_5 == 0) {
            if ((uVar7 >> 0xc & 1) == 0) goto code_r0x08001540;
            goto code_r0x08001598;
        }
        if ((uVar7 >> 0xc & 1) == 0) goto code_r0x08001598;
code_r0x08001540:
        iVar20 = 8;
        if (param_6 != 0) {
            iVar20 = 0x18;
        }
        iVar3 = 0x18;
        if (param_6 != 0) {
            iVar3 = 8;
        }
        iVar15 = *(iVar15 + 0xd0) + *(iVar15 + 0xb4);
        iVar26 = 10;
        uStack_a8 = *(iVar15 + iVar20);
        uStack_a0 = (iVar15 + iVar20)[1];
        iVar20 = 9;
        uVar13 = *(iVar15 + iVar3);
        auStack_98[1] = uVar13;
        auStack_98[2] = uVar13 >> 0x20;
        auStack_98[3] = *(iVar15 + iVar3 + 1);
        uStack_88 = *(iVar15 + 6);
        iVar12 = 0xb;
        uVar7 = puVar22[1];
code_r0x08001600:
        *(&uStack_a8 + iVar20 * 4) = uVar7;
        *(&uStack_a8 + iVar26 * 4) = *puVar22;
        iVar1 = iVar12 * 4 + -0x21524111;
        uVar18 = uStack_a0 + iVar1;
        uVar24 = (uStack_a8 + iVar1) - uVar18 ^ (uVar18 >> 0x1c | uVar18 * 0x10);
        iVar19 = uVar18 + uStack_a8._4_4_ + iVar1;
        uVar18 = (uStack_a8._4_4_ + iVar1) - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
        iVar1 = uVar24 + iVar19;
        uVar24 = iVar19 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
        iVar19 = uVar18 + iVar1;
        uVar18 = iVar1 - uVar24 ^ (uVar24 >> 0x10 | uVar24 << 0x10);
        iVar1 = uVar24 + iVar19;
        uVar24 = iVar19 - uVar18 ^ (uVar18 >> 0xd | uVar18 << 0x13);
        uVar8 = (iVar12 - 4U & 0xff) / 3;
        iVar19 = uVar18 + iVar1;
        uVar18 = iVar1 - uVar24 ^ (uVar24 >> 0x1c | uVar24 << 4);
        uVar24 = uVar24 + iVar19;
        *auVar29._8_8_ = 1;
        if (iVar12 - 7U < 0xfffffffc) {
            uVar18 = auStack_98[1] + uVar18;
            uVar4 = (uStack_a0._4_4_ + iVar19) - uVar18 ^ (uVar18 >> 0x1c | uVar18 * 0x10);
            iVar1 = uVar18 + auStack_98[0] + uVar24;
            uVar18 = (auStack_98[0] + uVar24) - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
            iVar19 = uVar4 + iVar1;
            uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
            iVar1 = uVar18 + iVar19;
            uVar18 = iVar19 - uVar24 ^ (uVar24 >> 0x10 | uVar24 << 0x10);
            iVar2 = uVar24 + iVar1;
            uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0xd | uVar18 << 0x13);
            iVar19 = uVar18 + iVar2;
            uVar18 = iVar2 - uVar24 ^ (uVar24 >> 0x1c | uVar24 << 4);
            uVar24 = uVar24 + iVar19;
            if (iVar12 - 10U < 0xfffffffc) {
                uVar18 = uStack_88 + uVar18;
                uVar4 = (auStack_98[2] + iVar19) - uVar18 ^ (uVar18 >> 0x1c | uVar18 * 0x10);
                iVar1 = uVar18 + auStack_98[3] + uVar24;
                uVar18 = (auStack_98[3] + uVar24) - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
                iVar19 = uVar4 + iVar1;
                uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
                iVar1 = uVar18 + iVar19;
                uVar18 = iVar19 - uVar24 ^ (uVar24 >> 0x10 | uVar24 << 0x10);
                iVar2 = uVar24 + iVar1;
                iVar19 = uVar18 + iVar2;
                uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0xd | uVar18 << 0x13);
                puVar27 = &uStack_88 + 4;
                uVar18 = iVar2 - uVar24 ^ (uVar24 >> 0x1c | uVar24 << 4);
                uVar24 = uVar24 + iVar19;
            }
            else {
                puVar27 = auStack_98 + 2;
            }
        }
        else {
            puVar27 = &uStack_a0 + 4;
        }
        uVar4 = (iVar12 - 4U) + uVar8 * -3 & 0xff | 4;
        if (uVar4 == 4) {
code_r0x080017c8:
            uVar18 = (uVar18 ^ uVar24) - (uVar24 >> 0x12 | uVar24 << 0xe);
            uVar8 = (*puVar27 + iVar19 ^ uVar18) - (uVar18 >> 0x15 | uVar18 * 0x800);
            uVar24 = (uVar8 ^ uVar24) - (uVar8 >> 7 | uVar8 * 0x2000000);
            uVar18 = (uVar24 ^ uVar18) - (uVar24 >> 0x10 | uVar24 * 0x10000);
            uVar8 = (uVar18 ^ uVar8) - (uVar18 >> 0x1c | uVar18 * 0x10);
            uVar24 = (uVar8 ^ uVar24) - (uVar8 >> 0x12 | uVar8 * 0x4000);
            uVar18 = (uVar24 ^ uVar18) - (uVar24 >> 8 | uVar24 * 0x1000000);
        }
        else {
            if (uVar4 == 5) {
code_r0x080017c0:
                uVar24 = auStack_98[uVar8 * 3] + uVar24;
                goto code_r0x080017c8;
            }
            if (uVar4 == 6) {
                if (iVar12 - 10U < 3) goto code_r0x0800182c;
                uVar18 = auStack_98[uVar8 * 3 + 1] + uVar18;
                goto code_r0x080017c0;
            }
        }
    }
    else {
        if (*(iVar15 + 0xb0) == 8) {
            puVar23 = *(iVar15 + 0xd0) + *(iVar15 + 0xb2);
            uVar7 = puVar23[6];
            if ((uVar7 >> 9 & 1) != 0) {
                if (param_5 == 0) {
                    if ((uVar7 >> 0xc & 1) == 0) goto code_r0x08001520;
                }
                else if ((uVar7 >> 0xc & 1) != 0) {
code_r0x08001520:
                    iVar15 = *(iVar15 + 0xd0) + *(iVar15 + 0xb4);
                    if (param_6 == 0) {
                        puVar22 = puVar23 + 1;
                        puVar17 = iVar15 + 0xc;
                        puVar25 = iVar15 + 0x10;
                    }
                    else {
                        puVar17 = iVar15 + 0x10;
                        puVar25 = iVar15 + 0xc;
                        puVar22 = puVar23;
                        puVar23 = puVar23 + 1;
                    }
                    iVar12 = 5;
                    iVar26 = 4;
                    iVar20 = 3;
                    uVar7 = *puVar23;
                    uStack_a8 = CONCAT44(*puVar25,*puVar17);
                    uStack_a0 = *(iVar15 + 9);
                    goto code_r0x08001600;
                }
            }
        }
code_r0x08001598:
        uVar18 = 0;
        *auVar29._8_8_ = 0;
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_78) {
        return;
    }
    __stack_chk_fail(uVar18);
code_r0x0800182c:
    //WARNING: Does not return
    pcVar10 = SoftwareBreakpoint(1,0x8001830);
    (*pcVar10)();
}


// ===== sym.DATARMNET136e008d70.cfi_jt @ 0x08001138 (size 8) =====

void sym.DATARMNET136e008d70.cfi_jt(char param_1,int64_t param_2)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint8_t *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = dev_get_by_name(init_net,"rmnet_ipa0");
    if (iVar5 != 0) {
        if ((param_1 == '\x01') && (iVar6 = __alloc_skb(0x10,0xa20,0,0xffffffff), iVar6 != 0)) {
            skb_put(iVar6,0x10);
            puVar7 = *(iVar6 + 0xd8);
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar8 = *(iVar6 + 0xd8);
            puVar8[2] = 0;
            puVar8[3] = 0xc;
            *puVar8 = *puVar8 | 0x80;
            *(*(iVar6 + 0xd8) + 4) = 0x1b;
            iVar9 = *(iVar6 + 0xd8);
            *(iVar9 + 0xc) = 1;
            *(iVar9 + 0xe) = param_2 == 0;
            *(iVar6 + 0x10) = iVar5;
            *(iVar6 + 0xb0) = 0xf900;
            rmnet_qmap_send(iVar6,0xff,0);
        }
        iVar6 = sp_el0;
        piVar1 = iVar6 + 0x10;
        *(iVar6 + 0x10) = *piVar1 + 1;
        iVar9 = tpidr_el1;
        piVar2 = iVar9 + *(iVar5 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = *piVar1;
        *(iVar6 + 0x10) = iVar5 + -1;
        if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.DATARMNET6e31e62d2e.738b6e6ae135bd842ca33a1f4baaf200.cfi_jt @ 0x08001140 (size 8) =====

ulong sym.DATARMNET6e31e62d2e.738b6e6ae135bd842ca33a1f4baaf200.cfi_jt(ulong param_1,int64_t param_2,int64_t *param_3)

{
    char cVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *param_3;
    if ((iVar3 != 0) && (iVar2 = strncmp(iVar3,"rmnet_data",10), iVar2 == 0)) {
        if (param_2 == 6) {
            if ((_segment.ehdr != NULL) && (cVar1 = *_segment.ehdr, *_segment.ehdr = cVar1 + -1, cVar1 + -1 == '\0'))
            {
                _printk(0x8000168,"DATARMNET6e31e62d2e",iVar3);
                sym.DATARMNET3ece352201();
            }
        }
        else if (param_2 == 5) {
            if (_segment.ehdr == NULL) {
                _printk(0x800018d,"DATARMNET6e31e62d2e",iVar3);
                iVar2 = sym.DATARMNETaa549ce89a();
                if (iVar2 != 0) {
                    _printk(0x8000140,"DATARMNET6e31e62d2e");
                }
            }
            else {
                *_segment.ehdr = *_segment.ehdr + '\x01';
            }
        }
    }
    return 0;
}


// ===== sym.DATARMNETe70d5ec61a @ 0x08001148 (size 844) =====

void sym.DATARMNETe70d5ec61a(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    char cVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    ulong *puVar9;
    code *pcVar10;
    bool bVar11;
    int iVar12;
    ulong uVar13;
    uint64_t uVar14;
    int64_t iVar15;
    int in_w2;
    int in_w3;
    int64_t *piVar16;
    uint *puVar17;
    uint32_t uVar18;
    int iVar19;
    int64_t iVar20;
    char *pcVar21;
    uint16_t *puVar22;
    uint16_t *puVar23;
    uint32_t uVar24;
    uint *puVar25;
    int64_t iVar26;
    uint32_t *puVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *puVar28;
    ulong unaff_x30;
    uchar in_q1 [16];
    uchar auVar29 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    uint32_t auStack_98 [4];
    ulong uStack_88;
    uint uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    int iStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_58 = *(iVar20 + 0x5e0);
    iStack_5c = 0;
    if (*0x8002000 != 0) {
        in_w2 = 1;
        in_w3 = 0;
        iVar12 = sym.DATARMNET233bccd449(arg2,&iStack_5c,in_q1,0);
        if (iStack_5c != 0) {
            uVar13 = _raw_spin_lock_irqsave(obj.DATARMNETcf56327171);
            if ((*(obj.DATARMNET031f18e039 + (iVar12 * 0x61c88647 >> 0x1b) * 8) != 0) &&
               (puVar28 = *(obj.DATARMNET031f18e039 + (iVar12 * 0x61c88647 >> 0x1b) * 8) + -0x10, puVar28 != NULL)) {
                do {
                    if (*(arg2 + 0xb0) == -0x227a) {
                        iVar20 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
                        if ((((*(puVar28 + 0x24) == *(iVar20 + 8) && *(puVar28 + 0x2c) == *(iVar20 + 0x10)) &&
                             (puVar28[7] == *(iVar20 + 0x18) && puVar28[8] == *(iVar20 + 0x20))) &&
                            (*(puVar28 + 0x44) == *(iVar20 + 6))) &&
                           (((puVar22 = *(arg2 + 0xd0) + *(arg2 + 0xb2), *(puVar28 + 9) == *puVar22 &&
                             (*(puVar28 + 0x4c) == puVar22[1])) && (*(puVar28 + 10) == 0xb)))) {
code_r0x0800131c:
                            piVar16 = puVar28[3];
                            if (piVar16 != NULL) {
                                iVar20 = puVar28[2];
                                *piVar16 = iVar20;
                                if (iVar20 != 0) {
                                    *(iVar20 + 8) = piVar16;
                                }
                                puVar28[2] = 0;
                                puVar28[3] = 0;
                            }
                            puVar9 = _obj.DATARMNET031f18e039;
                            in_w2 = 0x8000088;
                            uVar14 = __list_add_valid(puVar28,_obj.DATARMNET031f18e039);
                            if ((uVar14 & 1) != 0) {
                                _obj.DATARMNET031f18e039 = puVar28;
                                *puVar28 = obj.DATARMNETcf56327171;
                                puVar28[1] = puVar9;
                                *puVar9 = puVar28;
                            }
                            _raw_spin_unlock_irqrestore(obj.DATARMNETcf56327171,uVar13);
                            if (((*(arg1 + 0xc) ^ 0xffff) & 0x1200) != 0) goto code_r0x080013fc;
                            if (*0x8002000 != 0) {
                                if (0xffff < *0x8002000) {
                                    *0x8002000 = 0xffff;
                                }
                                *(arg1 + 0xe) = *0x8002000 >> 8 & 0xff | (*0x8002000 & 0xff00ff) << 8;
                            }
                            if (*0x8002000 == 0) goto code_r0x080013fc;
                            if (0xe < *0x8002000) {
                                *0x8002000 = 0xe;
                            }
                            uVar18 = (*(arg1 + 0xc) >> 2 & 0x3c) - 0x14;
                            if (uVar18 == 0) goto code_r0x080013fc;
                            pcVar21 = arg1 + 0x14;
                            goto code_r0x08001440;
                        }
                    }
                    else if (*(arg2 + 0xb0) == 8) {
                        iVar20 = *(arg2 + 0xd0) + *(arg2 + 0xb4);
                        if (((*(puVar28 + 0x24) == *(iVar20 + 0xc)) && (*(puVar28 + 5) == *(iVar20 + 0x10))) &&
                           ((*(puVar28 + 0x2c) == *(iVar20 + 9) &&
                            (((puVar22 = *(arg2 + 0xd0) + *(arg2 + 0xb2), *(puVar28 + 6) == *puVar22 &&
                              (*(puVar28 + 0x34) == puVar22[1])) && (*(puVar28 + 10) == 5)))))) goto code_r0x0800131c;
                    }
                    piVar16 = puVar28 + 2;
                    puVar28 = NULL;
                    if (*piVar16 != 0) {
                        puVar28 = *piVar16 + -0x10;
                    }
                } while (puVar28 != NULL);
            }
            _raw_spin_unlock_irqrestore(obj.DATARMNETcf56327171,uVar13);
        }
    }
    goto code_r0x080013fc;
code_r0x08001440:
    do {
        cVar5 = *pcVar21;
        if (cVar5 == '\x01') {
            uVar18 = uVar18 - 1;
            pcVar21 = pcVar21 + 1;
        }
        else {
            if ((cVar5 == '\0') || (uVar18 < 2)) break;
            uVar6 = pcVar21[1];
            if ((uVar6 < 2) || (bVar11 = uVar18 < uVar6, uVar18 = uVar18 - uVar6, bVar11)) break;
            if (cVar5 == '\x03') {
                pcVar21[2] = *0x8002000;
            }
            pcVar21 = pcVar21 + 2 + (uVar6 - 2);
        }
    } while (uVar18 != 0);
code_r0x080013fc:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_58) {
        return;
    }
    auVar29 = __stack_chk_fail();
    iVar15 = auVar29._0_8_;
    *extraout_x18 = sym.DATARMNET233bccd449;
    puStack_70 = &stack0xffffffffffffffb0;
    pcStack_68 = sym.DATARMNET233bccd449;
    iVar20 = sp_el0;
    iStack_78 = *(iVar20 + 0x5e0);
    uStack_80 = 0;
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    uStack_a8 = 0;
    if (*(iVar15 + 0xb0) == -0x227a) {
        puVar22 = *(iVar15 + 0xd0) + *(iVar15 + 0xb2);
        uVar7 = puVar22[6];
        if ((uVar7 >> 9 & 1) == 0) goto code_r0x08001598;
        if (in_w2 == 0) {
            if ((uVar7 >> 0xc & 1) == 0) goto code_r0x08001540;
            goto code_r0x08001598;
        }
        if ((uVar7 >> 0xc & 1) == 0) goto code_r0x08001598;
code_r0x08001540:
        iVar20 = 8;
        if (in_w3 != 0) {
            iVar20 = 0x18;
        }
        iVar3 = 0x18;
        if (in_w3 != 0) {
            iVar3 = 8;
        }
        iVar15 = *(iVar15 + 0xd0) + *(iVar15 + 0xb4);
        iVar26 = 10;
        uStack_a8 = *(iVar15 + iVar20);
        uStack_a0 = (iVar15 + iVar20)[1];
        iVar20 = 9;
        uVar13 = *(iVar15 + iVar3);
        auStack_98[1] = uVar13;
        auStack_98[2] = uVar13 >> 0x20;
        auStack_98[3] = *(iVar15 + iVar3 + 1);
        uStack_88 = *(iVar15 + 6);
        iVar12 = 0xb;
        uVar7 = puVar22[1];
code_r0x08001600:
        *(&uStack_a8 + iVar20 * 4) = uVar7;
        *(&uStack_a8 + iVar26 * 4) = *puVar22;
        iVar1 = iVar12 * 4 + -0x21524111;
        uVar18 = uStack_a0 + iVar1;
        uVar24 = (uStack_a8 + iVar1) - uVar18 ^ (uVar18 >> 0x1c | uVar18 * 0x10);
        iVar19 = uVar18 + uStack_a8._4_4_ + iVar1;
        uVar18 = (uStack_a8._4_4_ + iVar1) - uVar24 ^ (uVar24 >> 0x1a | uVar24 << 6);
        iVar1 = uVar24 + iVar19;
        uVar24 = iVar19 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
        iVar19 = uVar18 + iVar1;
        uVar18 = iVar1 - uVar24 ^ (uVar24 >> 0x10 | uVar24 << 0x10);
        iVar1 = uVar24 + iVar19;
        uVar24 = iVar19 - uVar18 ^ (uVar18 >> 0xd | uVar18 << 0x13);
        uVar8 = (iVar12 - 4U & 0xff) / 3;
        iVar19 = uVar18 + iVar1;
        uVar18 = iVar1 - uVar24 ^ (uVar24 >> 0x1c | uVar24 << 4);
        uVar24 = uVar24 + iVar19;
        *auVar29._8_8_ = 1;
        if (iVar12 - 7U < 0xfffffffc) {
            uVar18 = auStack_98[1] + uVar18;
            uVar4 = (uStack_a0._4_4_ + iVar19) - uVar18 ^ (uVar18 >> 0x1c | uVar18 * 0x10);
            iVar1 = uVar18 + auStack_98[0] + uVar24;
            uVar18 = (auStack_98[0] + uVar24) - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
            iVar19 = uVar4 + iVar1;
            uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
            iVar1 = uVar18 + iVar19;
            uVar18 = iVar19 - uVar24 ^ (uVar24 >> 0x10 | uVar24 << 0x10);
            iVar2 = uVar24 + iVar1;
            uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0xd | uVar18 << 0x13);
            iVar19 = uVar18 + iVar2;
            uVar18 = iVar2 - uVar24 ^ (uVar24 >> 0x1c | uVar24 << 4);
            uVar24 = uVar24 + iVar19;
            if (iVar12 - 10U < 0xfffffffc) {
                uVar18 = uStack_88 + uVar18;
                uVar4 = (auStack_98[2] + iVar19) - uVar18 ^ (uVar18 >> 0x1c | uVar18 * 0x10);
                iVar1 = uVar18 + auStack_98[3] + uVar24;
                uVar18 = (auStack_98[3] + uVar24) - uVar4 ^ (uVar4 >> 0x1a | uVar4 << 6);
                iVar19 = uVar4 + iVar1;
                uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0x18 | uVar18 << 8);
                iVar1 = uVar18 + iVar19;
                uVar18 = iVar19 - uVar24 ^ (uVar24 >> 0x10 | uVar24 << 0x10);
                iVar2 = uVar24 + iVar1;
                iVar19 = uVar18 + iVar2;
                uVar24 = iVar1 - uVar18 ^ (uVar18 >> 0xd | uVar18 << 0x13);
                puVar27 = &uStack_88 + 4;
                uVar18 = iVar2 - uVar24 ^ (uVar24 >> 0x1c | uVar24 << 4);
                uVar24 = uVar24 + iVar19;
            }
            else {
                puVar27 = auStack_98 + 2;
            }
        }
        else {
            puVar27 = &uStack_a0 + 4;
        }
        uVar4 = (iVar12 - 4U) + uVar8 * -3 & 0xff | 4;
        if (uVar4 == 4) {
code_r0x080017c8:
            uVar18 = (uVar18 ^ uVar24) - (uVar24 >> 0x12 | uVar24 << 0xe);
            uVar8 = (*puVar27 + iVar19 ^ uVar18) - (uVar18 >> 0x15 | uVar18 * 0x800);
            uVar24 = (uVar8 ^ uVar24) - (uVar8 >> 7 | uVar8 * 0x2000000);
            uVar18 = (uVar24 ^ uVar18) - (uVar24 >> 0x10 | uVar24 * 0x10000);
            uVar8 = (uVar18 ^ uVar8) - (uVar18 >> 0x1c | uVar18 * 0x10);
            uVar24 = (uVar8 ^ uVar24) - (uVar8 >> 0x12 | uVar8 * 0x4000);
            uVar18 = (uVar24 ^ uVar18) - (uVar24 >> 8 | uVar24 * 0x1000000);
        }
        else {
            if (uVar4 == 5) {
code_r0x080017c0:
                uVar24 = auStack_98[uVar8 * 3] + uVar24;
                goto code_r0x080017c8;
            }
            if (uVar4 == 6) {
                if (iVar12 - 10U < 3) goto code_r0x0800182c;
                uVar18 = auStack_98[uVar8 * 3 + 1] + uVar18;
                goto code_r0x080017c0;
            }
        }
    }
    else {
        if (*(iVar15 + 0xb0) == 8) {
            puVar23 = *(iVar15 + 0xd0) + *(iVar15 + 0xb2);
            uVar7 = puVar23[6];
            if ((uVar7 >> 9 & 1) != 0) {
                if (in_w2 == 0) {
                    if ((uVar7 >> 0xc & 1) == 0) goto code_r0x08001520;
                }
                else if ((uVar7 >> 0xc & 1) != 0) {
code_r0x08001520:
                    iVar15 = *(iVar15 + 0xd0) + *(iVar15 + 0xb4);
                    if (in_w3 == 0) {
                        puVar22 = puVar23 + 1;
                        puVar17 = iVar15 + 0xc;
                        puVar25 = iVar15 + 0x10;
                    }
                    else {
                        puVar17 = iVar15 + 0x10;
                        puVar25 = iVar15 + 0xc;
                        puVar22 = puVar23;
                        puVar23 = puVar23 + 1;
                    }
                    iVar12 = 5;
                    iVar26 = 4;
                    iVar20 = 3;
                    uVar7 = *puVar23;
                    uStack_a8 = CONCAT44(*puVar25,*puVar17);
                    uStack_a0 = *(iVar15 + 9);
                    goto code_r0x08001600;
                }
            }
        }
code_r0x08001598:
        uVar18 = 0;
        *auVar29._8_8_ = 0;
    }
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_78) {
        return;
    }
    __stack_chk_fail(uVar18);
code_r0x0800182c:
    //WARNING: Does not return
    pcVar10 = SoftwareBreakpoint(1,0x8001830);
    (*pcVar10)();
}


// ===== sym.DATARMNET233bccd449 @ 0x08001494 (size 924) =====

void sym.DATARMNET233bccd449(int64_t arg1,int64_t arg2,uchar noname_2 [16],uint32_t arg3)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    code *pcVar8;
    uint32_t uVar9;
    int in_w2;
    int iVar10;
    uint *puVar11;
    ulong uVar12;
    int iVar13;
    uint16_t *puVar14;
    uint16_t *puVar15;
    uint32_t uVar16;
    uint *puVar17;
    int64_t iVar18;
    int64_t iVar19;
    uint32_t *puVar20;
    ulong *in_x18;
    ulong unaff_x30;
    ulong uStack_48;
    ulong uStack_40;
    uint32_t auStack_38 [4];
    ulong uStack_28;
    uint uStack_20;
    int64_t iStack_18;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_18 = *(iVar19 + 0x5e0);
    uStack_20 = 0;
    auStack_38[2] = 0;
    auStack_38[3] = 0;
    uStack_28 = 0;
    uStack_40 = 0;
    auStack_38[0] = 0;
    auStack_38[1] = 0;
    uStack_48 = 0;
    if (*(arg1 + 0xb0) == -0x227a) {
        puVar14 = *(arg1 + 0xd0) + *(arg1 + 0xb2);
        uVar6 = puVar14[6];
        if ((uVar6 >> 9 & 1) == 0) goto code_r0x08001598;
        if (in_w2 == 0) {
            if ((uVar6 >> 0xc & 1) == 0) goto code_r0x08001540;
            goto code_r0x08001598;
        }
        if ((uVar6 >> 0xc & 1) == 0) goto code_r0x08001598;
code_r0x08001540:
        iVar19 = 8;
        if (arg3 != 0) {
            iVar19 = 0x18;
        }
        iVar3 = 0x18;
        if (arg3 != 0) {
            iVar3 = 8;
        }
        iVar4 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
        iVar18 = 10;
        uStack_48 = *(iVar4 + iVar19);
        uStack_40 = (iVar4 + iVar19)[1];
        iVar19 = 9;
        uVar12 = *(iVar4 + iVar3);
        auStack_38[1] = uVar12;
        auStack_38[2] = uVar12 >> 0x20;
        auStack_38[3] = *(iVar4 + iVar3 + 1);
        uStack_28 = *(iVar4 + 6);
        iVar10 = 0xb;
        uVar6 = puVar14[1];
code_r0x08001600:
        *(&uStack_48 + iVar19 * 4) = uVar6;
        *(&uStack_48 + iVar18 * 4) = *puVar14;
        iVar1 = iVar10 * 4 + -0x21524111;
        uVar9 = uStack_40 + iVar1;
        uVar16 = (uStack_48 + iVar1) - uVar9 ^ (uVar9 >> 0x1c | uVar9 * 0x10);
        iVar13 = uVar9 + uStack_48._4_4_ + iVar1;
        uVar9 = (uStack_48._4_4_ + iVar1) - uVar16 ^ (uVar16 >> 0x1a | uVar16 << 6);
        iVar1 = uVar16 + iVar13;
        uVar16 = iVar13 - uVar9 ^ (uVar9 >> 0x18 | uVar9 << 8);
        iVar13 = uVar9 + iVar1;
        uVar9 = iVar1 - uVar16 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
        iVar1 = uVar16 + iVar13;
        uVar16 = iVar13 - uVar9 ^ (uVar9 >> 0xd | uVar9 << 0x13);
        uVar7 = (iVar10 - 4U & 0xff) / 3;
        iVar13 = uVar9 + iVar1;
        uVar9 = iVar1 - uVar16 ^ (uVar16 >> 0x1c | uVar16 << 4);
        uVar16 = uVar16 + iVar13;
        *arg2 = 1;
        if (iVar10 - 7U < 0xfffffffc) {
            uVar9 = auStack_38[1] + uVar9;
            uVar5 = (uStack_40._4_4_ + iVar13) - uVar9 ^ (uVar9 >> 0x1c | uVar9 * 0x10);
            iVar1 = uVar9 + auStack_38[0] + uVar16;
            uVar9 = (auStack_38[0] + uVar16) - uVar5 ^ (uVar5 >> 0x1a | uVar5 << 6);
            iVar13 = uVar5 + iVar1;
            uVar16 = iVar1 - uVar9 ^ (uVar9 >> 0x18 | uVar9 << 8);
            iVar1 = uVar9 + iVar13;
            uVar9 = iVar13 - uVar16 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
            iVar2 = uVar16 + iVar1;
            uVar16 = iVar1 - uVar9 ^ (uVar9 >> 0xd | uVar9 << 0x13);
            iVar13 = uVar9 + iVar2;
            uVar9 = iVar2 - uVar16 ^ (uVar16 >> 0x1c | uVar16 << 4);
            uVar16 = uVar16 + iVar13;
            if (iVar10 - 10U < 0xfffffffc) {
                uVar9 = uStack_28 + uVar9;
                uVar5 = (auStack_38[2] + iVar13) - uVar9 ^ (uVar9 >> 0x1c | uVar9 * 0x10);
                iVar1 = uVar9 + auStack_38[3] + uVar16;
                uVar9 = (auStack_38[3] + uVar16) - uVar5 ^ (uVar5 >> 0x1a | uVar5 << 6);
                iVar13 = uVar5 + iVar1;
                uVar16 = iVar1 - uVar9 ^ (uVar9 >> 0x18 | uVar9 << 8);
                iVar1 = uVar9 + iVar13;
                uVar9 = iVar13 - uVar16 ^ (uVar16 >> 0x10 | uVar16 << 0x10);
                iVar2 = uVar16 + iVar1;
                iVar13 = uVar9 + iVar2;
                uVar16 = iVar1 - uVar9 ^ (uVar9 >> 0xd | uVar9 << 0x13);
                puVar20 = &uStack_28 + 4;
                uVar9 = iVar2 - uVar16 ^ (uVar16 >> 0x1c | uVar16 << 4);
                uVar16 = uVar16 + iVar13;
            }
            else {
                puVar20 = auStack_38 + 2;
            }
        }
        else {
            puVar20 = &uStack_40 + 4;
        }
        uVar5 = (iVar10 - 4U) + uVar7 * -3 & 0xff | 4;
        if (uVar5 == 4) {
code_r0x080017c8:
            uVar9 = (uVar9 ^ uVar16) - (uVar16 >> 0x12 | uVar16 << 0xe);
            uVar7 = (*puVar20 + iVar13 ^ uVar9) - (uVar9 >> 0x15 | uVar9 * 0x800);
            uVar16 = (uVar7 ^ uVar16) - (uVar7 >> 7 | uVar7 * 0x2000000);
            uVar9 = (uVar16 ^ uVar9) - (uVar16 >> 0x10 | uVar16 * 0x10000);
            uVar7 = (uVar9 ^ uVar7) - (uVar9 >> 0x1c | uVar9 * 0x10);
            uVar16 = (uVar7 ^ uVar16) - (uVar7 >> 0x12 | uVar7 * 0x4000);
            uVar9 = (uVar16 ^ uVar9) - (uVar16 >> 8 | uVar16 * 0x1000000);
        }
        else {
            if (uVar5 == 5) {
code_r0x080017c0:
                uVar16 = auStack_38[uVar7 * 3] + uVar16;
                goto code_r0x080017c8;
            }
            if (uVar5 == 6) {
                if (iVar10 - 10U < 3) goto code_r0x0800182c;
                uVar9 = auStack_38[uVar7 * 3 + 1] + uVar9;
                goto code_r0x080017c0;
            }
        }
    }
    else {
        if (*(arg1 + 0xb0) == 8) {
            puVar15 = *(arg1 + 0xd0) + *(arg1 + 0xb2);
            uVar6 = puVar15[6];
            if ((uVar6 >> 9 & 1) != 0) {
                if (in_w2 == 0) {
                    if ((uVar6 >> 0xc & 1) == 0) goto code_r0x08001520;
                }
                else if ((uVar6 >> 0xc & 1) != 0) {
code_r0x08001520:
                    iVar3 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
                    if (arg3 == 0) {
                        puVar14 = puVar15 + 1;
                        puVar11 = iVar3 + 0xc;
                        puVar17 = iVar3 + 0x10;
                    }
                    else {
                        puVar11 = iVar3 + 0x10;
                        puVar17 = iVar3 + 0xc;
                        puVar14 = puVar15;
                        puVar15 = puVar15 + 1;
                    }
                    iVar10 = 5;
                    iVar18 = 4;
                    iVar19 = 3;
                    uVar6 = *puVar15;
                    uStack_48 = CONCAT44(*puVar17,*puVar11);
                    uStack_40 = *(iVar3 + 9);
                    goto code_r0x08001600;
                }
            }
        }
code_r0x08001598:
        uVar9 = 0;
        *arg2 = 0;
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_18) {
        return;
    }
    __stack_chk_fail(uVar9);
code_r0x0800182c:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(1,0x8001830);
    (*pcVar8)();
}


// ===== sym.DATARMNET6ab362e985 @ 0x08001830 (size 944) =====

void sym.DATARMNET6ab362e985(int64_t arg1)

{
    code *pcVar1;
    code *pcVar2;
    int *piVar3;
    ulong uVar4;
    bool bVar5;
    char cVar6;
    int iVar7;
    int64_t iVar8;
    ulong uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t extraout_x1;
    uint uVar12;
    int64_t *piVar13;
    ulong *puVar14;
    uint8_t *puVar15;
    code *pcVar16;
    int64_t iVar17;
    int64_t *piVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar in_q1 [16];
    int iStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iStack_3c = 0;
    if ((((*0x8002000 == 0) || (*(arg1 + 0x90) == 0)) || (iVar8 = __dev_get_by_index(init_net), iVar8 == 0)) ||
       (iVar7 = sym.DATARMNET233bccd449(arg1,&stack0xffffffffffffffc4,in_q1,1), iStack_3c == 0))
    goto code_r0x08001ba8;
    uVar9 = _raw_spin_lock_irqsave(obj.DATARMNETcf56327171);
    pcVar2 = _obj.DATARMNETcf56327171;
    if ((_obj.DATARMNETcf56327171 == NULL) || (_obj.DATARMNETcf56327171 == obj.DATARMNETcf56327171)) {
        iVar8 = 0;
        do {
            piVar13 = *(obj.DATARMNET031f18e039 + iVar8);
            if (piVar13 != NULL && piVar13 != 0x10) {
                piVar18 = piVar13[1];
                if (piVar18 != NULL) {
                    iVar8 = *piVar13;
                    *piVar18 = iVar8;
                    if (iVar8 != 0) {
                        *(iVar8 + 8) = piVar18;
                    }
                    *piVar13 = 0;
                    piVar13[1] = 0;
                }
                *(piVar13 + 2) = iVar7;
                if (*(arg1 + 0xb0) == -0x227a) {
                    iVar8 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
                    uVar4 = *(iVar8 + 0x20);
                    *(piVar13 + 0x14) = *(iVar8 + 0x18);
                    *(piVar13 + 0x1c) = uVar4;
                    iVar8 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
                    iVar11 = *(iVar8 + 0x10);
                    piVar13[5] = *(iVar8 + 8);
                    piVar13[6] = iVar11;
                    *(piVar13 + 0x34) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 6);
                    *(piVar13 + 7) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2) + 2);
                    uVar12 = 0xb;
                    *(piVar13 + 0x3c) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2));
code_r0x08001b68:
                    *(piVar13 + 8) = uVar12;
                }
                else if (*(arg1 + 0xb0) == 8) {
                    *(piVar13 + 0x14) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 0x10);
                    *(piVar13 + 3) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 0xc);
                    *(piVar13 + 0x1c) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 9);
                    *(piVar13 + 4) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2) + 2);
                    uVar12 = 5;
                    *(piVar13 + 0x24) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2));
                    goto code_r0x08001b68;
                }
                pcVar2 = obj.DATARMNET031f18e039 + (iVar7 * 0x61c88647 >> 0x1b) * 8;
                iVar8 = *pcVar2;
                *piVar13 = iVar8;
                if (iVar8 != 0) {
                    *(iVar8 + 8) = piVar13;
                }
                *pcVar2 = piVar13;
                piVar13[1] = pcVar2;
                break;
            }
            iVar8 = iVar8 + 8;
        } while (iVar8 != 0x100);
    }
    else {
        uVar10 = __list_del_entry_valid(_obj.DATARMNETcf56327171);
        if ((uVar10 & 1) != 0) {
            iVar8 = *pcVar2;
            piVar13 = *(pcVar2 + 8);
            *(iVar8 + 8) = piVar13;
            *piVar13 = iVar8;
        }
        *(pcVar2 + 0x20) = iVar7;
        *pcVar2 = -0x2152ffffffffff00;
        *(pcVar2 + 8) = -0x2152fffffffffede;
        if (*(arg1 + 0xb0) == -0x227a) {
            iVar8 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
            uVar4 = *(iVar8 + 0x20);
            *(pcVar2 + 0x24) = *(iVar8 + 0x18);
            *(pcVar2 + 0x2c) = uVar4;
            iVar8 = *(arg1 + 0xd0) + *(arg1 + 0xb4);
            iVar11 = *(iVar8 + 0x10);
            *(pcVar2 + 0x38) = *(iVar8 + 8);
            *(pcVar2 + 0x40) = iVar11;
            *(pcVar2 + 0x44) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 6);
            *(pcVar2 + 0x48) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2) + 2);
            uVar12 = 0xb;
            *(pcVar2 + 0x4c) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2));
code_r0x08001ac0:
            *(pcVar2 + 0x50) = uVar12;
        }
        else if (*(arg1 + 0xb0) == 8) {
            *(pcVar2 + 0x24) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 0x10);
            *(pcVar2 + 0x28) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 0xc);
            *(pcVar2 + 0x2c) = *(*(arg1 + 0xd0) + *(arg1 + 0xb4) + 9);
            *(pcVar2 + 0x30) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2) + 2);
            uVar12 = 5;
            *(pcVar2 + 0x34) = *(*(arg1 + 0xd0) + *(arg1 + 0xb2));
            goto code_r0x08001ac0;
        }
        pcVar1 = obj.DATARMNET031f18e039 + (iVar7 * 0x61c88647 >> 0x1b) * 8;
        iVar8 = *pcVar1;
        pcVar16 = pcVar2 + 0x10;
        *pcVar16 = iVar8;
        if (iVar8 != 0) {
            *(iVar8 + 8) = pcVar16;
        }
        *pcVar1 = pcVar16;
        *(pcVar2 + 0x18) = pcVar1;
    }
    _raw_spin_unlock_irqrestore(obj.DATARMNETcf56327171,uVar9);
code_r0x08001ba8:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return;
    }
    cVar6 = __stack_chk_fail();
    *extraout_x18 = 0x8001bdc;
    iVar8 = dev_get_by_name(init_net,"rmnet_ipa0");
    if (iVar8 != 0) {
        if ((cVar6 == '\x01') && (iVar11 = __alloc_skb(0x10,0xa20,0,0xffffffff), iVar11 != 0)) {
            skb_put(iVar11,0x10);
            puVar14 = *(iVar11 + 0xd8);
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar15 = *(iVar11 + 0xd8);
            puVar15[2] = 0;
            puVar15[3] = 0xc;
            *puVar15 = *puVar15 | 0x80;
            *(*(iVar11 + 0xd8) + 4) = 0x1b;
            iVar17 = *(iVar11 + 0xd8);
            *(iVar17 + 0xc) = 1;
            *(iVar17 + 0xe) = extraout_x1 == 0;
            *(iVar11 + 0x10) = iVar8;
            *(iVar11 + 0xb0) = 0xf900;
            rmnet_qmap_send(iVar11,0xff,0);
        }
        iVar11 = sp_el0;
        piVar13 = iVar11 + 0x10;
        *(iVar11 + 0x10) = *piVar13 + 1;
        iVar17 = tpidr_el1;
        piVar3 = iVar17 + *(iVar8 + 0x4d0);
        do {
            cVar6 = '\x01';
            bVar5 = ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
                *piVar3 = *piVar3 + -1;
                cVar6 = ExclusiveMonitorsStatus();
            }
        } while (cVar6 != '\0');
        iVar8 = *piVar13;
        *(iVar11 + 0x10) = iVar8 + -1;
        if ((iVar8 + -1 == 0) || (*piVar13 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.DATARMNET136e008d70 @ 0x08001be0 (size 312) =====

void sym.DATARMNET136e008d70(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int *piVar2;
    char cVar3;
    bool bVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint8_t *puVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = dev_get_by_name(init_net,"rmnet_ipa0");
    if (iVar5 != 0) {
        if (((arg1 & 0xff) == 1) && (iVar6 = __alloc_skb(0x10,0xa20,0,0xffffffff), iVar6 != 0)) {
            skb_put(iVar6,0x10);
            puVar7 = *(iVar6 + 0xd8);
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar8 = *(iVar6 + 0xd8);
            puVar8[2] = 0;
            puVar8[3] = 0xc;
            *puVar8 = *puVar8 | 0x80;
            *(*(iVar6 + 0xd8) + 4) = 0x1b;
            iVar9 = *(iVar6 + 0xd8);
            *(iVar9 + 0xc) = 1;
            *(iVar9 + 0xe) = arg2 == 0;
            *(iVar6 + 0x10) = iVar5;
            *(iVar6 + 0xb0) = 0xf900;
            rmnet_qmap_send(iVar6,0xff,0);
        }
        iVar6 = sp_el0;
        piVar1 = iVar6 + 0x10;
        *(iVar6 + 0x10) = *piVar1 + 1;
        iVar9 = tpidr_el1;
        piVar2 = iVar9 + *(iVar5 + 0x4d0);
        do {
            cVar3 = '\x01';
            bVar4 = ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
                *piVar2 = *piVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
            }
        } while (cVar3 != '\0');
        iVar5 = *piVar1;
        *(iVar6 + 0x10) = iVar5 + -1;
        if ((iVar5 + -1 == 0) || (*piVar1 == 0)) {
            preempt_schedule_notrace();
        }
    }
    return;
}


// ===== sym.DATARMNET5fe3ffe2ab @ 0x08001d38 (size 108) =====

void sym.DATARMNET5fe3ffe2ab(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _rmnet_perf_tether_ingress_hook = 0x8001130;
    _rmnet_perf_tether_egress_hook = 0x8001118;
    _rmnet_perf_tether_cmd_hook = 0x8001138;
    _rmnet_module_hook_register = 0;
    rmnet_module_hook_register(obj.DATARMNET0762b4f121,3);
    return;
}


// ===== sym.DATARMNET229327cbd2 @ 0x08001da4 (size 76) =====

void sym.DATARMNET229327cbd2(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __raw_spin_lock_irqsave = 0;
    __raw_spin_unlock_irqrestore = 0;
    _init_net = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET0762b4f121,3);
    synchronize_rcu();
    return;
}


// ===== sym.DATARMNET6e31e62d2e @ 0x08001df0 (size 244) =====

ulong sym.DATARMNET6e31e62d2e(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg3 = *arg3;
    if ((arg3 != 0) && (iVar2 = strncmp(arg3,"rmnet_data",10), iVar2 == 0)) {
        if (arg2 == 6) {
            if ((_segment.ehdr != NULL) && (cVar1 = *_segment.ehdr, *_segment.ehdr = cVar1 + -1, cVar1 + -1 == '\0'))
            {
                _printk(0x8000168,"DATARMNET6e31e62d2e",arg3);
                sym.DATARMNET3ece352201();
            }
        }
        else if (arg2 == 5) {
            if (_segment.ehdr == NULL) {
                _printk(0x800018d,"DATARMNET6e31e62d2e",arg3);
                iVar2 = sym.DATARMNETaa549ce89a();
                if (iVar2 != 0) {
                    _printk(0x8000140,"DATARMNET6e31e62d2e");
                }
            }
            else {
                *_segment.ehdr = *_segment.ehdr + '\x01';
            }
        }
    }
    return 0;
}


// ===== sym.DATARMNETaa549ce89a @ 0x08001ee4 (size 336) =====

ulong sym.DATARMNETaa549ce89a(void)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    int iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar1 = 0x30;
    }
    _segment.ehdr = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,1);
    if (_segment.ehdr == NULL) {
        _printk(0x80001d3,"DATARMNETaa549ce89a");
        uVar5 = 0xffffffff;
    }
    else {
        iVar6 = 0x32;
        *_segment.ehdr = *_segment.ehdr + '\x01';
        do {
            puVar3 = kmem_cache_alloc_trace(___list_del_entry_valid,0xb20,0x58);
            if (puVar3 != NULL) {
                *puVar3 = puVar3;
                puVar3[1] = puVar3;
                puVar2 = _obj.DATARMNET031f18e039;
                puVar3[2] = 0;
                puVar3[3] = 0;
                uVar4 = __list_add_valid(puVar3,puVar2,obj.DATARMNETcf56327171);
                if ((uVar4 & 1) != 0) {
                    _obj.DATARMNET031f18e039 = puVar3;
                    *puVar3 = obj.DATARMNETcf56327171;
                    puVar3[1] = puVar2;
                    *puVar2 = puVar3;
                }
            }
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        _rmnet_perf_tether_ingress_hook = 0x8001130;
        _rmnet_perf_tether_egress_hook = 0x8001118;
        _rmnet_perf_tether_cmd_hook = 0x8001138;
        _rmnet_module_hook_register = 0;
        rmnet_module_hook_register(obj.DATARMNET0762b4f121,3);
        uVar5 = 0;
    }
    return uVar5;
}


// ===== sym.DATARMNET3ece352201 @ 0x08002034 (size 304) =====

void sym.DATARMNET3ece352201(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *in_x18;
    code *pcVar5;
    int64_t iVar6;
    code *pcVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __raw_spin_lock_irqsave = 0;
    __raw_spin_unlock_irqrestore = 0;
    _init_net = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET0762b4f121,3);
    synchronize_rcu();
    pcVar5 = _obj.DATARMNETcf56327171;
    if (_obj.DATARMNETcf56327171 != obj.DATARMNETcf56327171) {
        do {
            pcVar7 = *pcVar5;
            uVar3 = __list_del_entry_valid(pcVar5);
            if ((uVar3 & 1) != 0) {
                iVar6 = *pcVar5;
                piVar2 = *(pcVar5 + 8);
                *(iVar6 + 8) = piVar2;
                *piVar2 = iVar6;
            }
            *pcVar5 = -0x2152ffffffffff00;
            *(pcVar5 + 8) = -0x2152fffffffffede;
            kfree(pcVar5);
            pcVar5 = pcVar7;
        } while (pcVar7 != obj.DATARMNETcf56327171);
    }
    iVar6 = 0;
    do {
        iVar4 = *(obj.DATARMNET031f18e039 + iVar6 * 8) + -0x10;
        if (*(obj.DATARMNET031f18e039 + iVar6 * 8) != 0 && iVar4 != 0) {
            do {
                iVar1 = *(iVar4 + 0x10);
                piVar2 = *(iVar4 + 0x18);
                if (piVar2 != NULL) {
                    *piVar2 = iVar1;
                    if (iVar1 != 0) {
                        *(iVar1 + 8) = piVar2;
                    }
                    *(iVar4 + 0x10) = 0;
                    *(iVar4 + 0x18) = 0;
                }
                kfree();
                iVar4 = 0;
                if (iVar1 != 0) {
                    iVar4 = iVar1 + -0x10;
                }
            } while (iVar4 != 0);
        }
        iVar6 = iVar6 + 1;
    } while (iVar6 != 0x20);
    kfree(_segment.ehdr);
    _segment.ehdr = 0;
    return;
}


// ===== sym.__cfi_check_fail @ 0x08002164 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080021a8

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
    //switch table (4 cases) at 0x80000d0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80021bc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080021c4 (size 64) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001f7,"");
    register_netdevice_notifier(reloc.DATARMNET6e31e62d2e.738b6e6ae135bd842ca33a1f4baaf200.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x08002204 (size 64) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80001b9,"DATARMNET50e3d76d94");
    unregister_netdevice_notifier(reloc.DATARMNET6e31e62d2e.738b6e6ae135bd842ca33a1f4baaf200.cfi_jt);
    return;
}

