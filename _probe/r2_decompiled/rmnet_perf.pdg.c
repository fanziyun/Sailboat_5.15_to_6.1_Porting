// decompiled from rmnet_perf by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 196) =====

//WARNING: Switch with 1 destination removed at 0x080015e8

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    uint32_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    if (arg1 < 0x68131453fce1715e) {
        if (arg1 == -0x269f0ca40a294141) {
            uVar2 = 0x80010e8;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x080015a8;
            uVar2 = 0x80010d8;
        }
    }
    else if (arg1 == 0x68131453fce1715e) {
        uVar2 = 0x80010e0;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080015a8;
        uVar2 = 0x80010d0;
    }
    if (arg2 == uVar2) {
        return;
    }
code_r0x080015a8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,arg2,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015fc);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _ipv6_skip_exthdr = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET95a71e03c1,2);
    synchronize_rcu();
    _printk(0x80000c9,"DATARMNETa343229e33");
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010d8 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000e3,"DATARMNET63abbdc3d3");
    _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
    return 0;
}


// ===== sym.DATARMNET05c4bf8af9.cfi_jt @ 0x080010e0 (size 8) =====

void sym.DATARMNET05c4bf8af9.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int16_t aiStack_58 [2];
    uint8_t auStack_54 [4];
    uint8_t auStack_50 [16];
    uint64_t uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if (*(param_1 + 0xb0) == -0x227a) {
        uStack_38 = 0;
        uStack_30 = 0;
        auStack_50[8] = 0;
        auStack_50[9] = 0;
        auStack_50[10] = 0;
        auStack_50[0xb] = 0;
        auStack_50[0xc] = 0;
        auStack_50[0xd] = 0;
        auStack_50[0xe] = 0;
        auStack_50[0xf] = 0;
        uStack_40 = 0;
        auStack_50[0] = 0;
        auStack_50[1] = 0;
        auStack_50[2] = 0;
        auStack_50[3] = 0;
        auStack_50[4] = 0;
        auStack_50[5] = 0;
        auStack_50[6] = 0;
        auStack_50[7] = 0;
        aiStack_58[0] = 0;
        if (*(param_1 + 0x70) - *(param_1 + 0x74) < 0x28) {
            if (param_1 == 0) goto code_r0x080014ac;
            iVar3 = skb_copy_bits(param_1,0,auStack_50,0x28);
            puVar5 = auStack_50;
            if (iVar3 < 0) goto code_r0x080014ac;
        }
        else {
            puVar5 = *(param_1 + 0xd8);
            if (puVar5 == NULL) goto code_r0x080014ac;
        }
        auStack_54[0] = puVar5[6];
        uVar2 = ipv6_skip_exthdr(param_1,0x28,auStack_54,aiStack_58);
        if (((aiStack_58[0] != 0) || (auStack_54[0] != 0x11)) || (uVar2 == 0xffffffff)) goto code_r0x080014ac;
    }
    else {
        if (*(param_1 + 0xb0) != 8) goto code_r0x080014ac;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        auStack_50[0] = 0;
        auStack_50[1] = 0;
        auStack_50[2] = 0;
        auStack_50[3] = 0;
        auStack_50[4] = 0;
        auStack_50[5] = 0;
        auStack_50[6] = 0;
        auStack_50[7] = 0;
        auStack_50[8] = 0;
        auStack_50[9] = 0;
        auStack_50[10] = 0;
        auStack_50[0xb] = 0;
        auStack_50[0xc] = 0;
        auStack_50[0xd] = 0;
        auStack_50[0xe] = 0;
        auStack_50[0xf] = 0;
        if (*(param_1 + 0x70) - *(param_1 + 0x74) < 0x14) {
            if (param_1 == 0) goto code_r0x080014ac;
            iVar3 = skb_copy_bits(param_1,0,auStack_50,0x14);
            puVar5 = auStack_50;
            if (iVar3 < 0) goto code_r0x080014ac;
        }
        else {
            puVar5 = *(param_1 + 0xd8);
            if (puVar5 == NULL) goto code_r0x080014ac;
        }
        if (((*(puVar5 + 6) & 0xff3f) != 0) || (puVar5[9] != 0x11)) goto code_r0x080014ac;
        uVar2 = (*puVar5 & 0xf) << 2;
    }
    uVar4 = sym.DATARMNET77ab42949f(param_1,uVar2);
    if ((uVar4 & 1) != 0) {
        *(param_1 + 0x8c) = 0xda001a;
    }
code_r0x080014ac:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.DATARMNET49c17a32bc;
        _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
        return;
    }
    return;
}


// ===== sym.DATARMNETee9214ce9b.cfi_jt @ 0x080010e8 (size 8) =====

void sym.DATARMNETee9214ce9b.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t arg1;
    uint8_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int16_t *piVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int16_t aiStack_108 [2];
    uint8_t auStack_104 [4];
    uint8_t auStack_100 [16];
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint8_t *puStack_c0;
    int16_t aiStack_a8 [6];
    uint8_t auStack_9c [4];
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int16_t aiStack_58 [2];
    uint8_t auStack_54 [4];
    uint8_t auStack_50 [16];
    uint64_t uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if (*(param_1 + 0xb0) == -0x227a) {
        uStack_38 = 0;
        uStack_30 = 0;
        auStack_50[8] = 0;
        auStack_50[9] = 0;
        auStack_50[10] = 0;
        auStack_50[0xb] = 0;
        auStack_50[0xc] = 0;
        auStack_50[0xd] = 0;
        auStack_50[0xe] = 0;
        auStack_50[0xf] = 0;
        uStack_40 = 0;
        auStack_50[0] = 0;
        auStack_50[1] = 0;
        auStack_50[2] = 0;
        auStack_50[3] = 0;
        auStack_50[4] = 0;
        auStack_50[5] = 0;
        auStack_50[6] = 0;
        auStack_50[7] = 0;
        aiStack_58[0] = 0;
        if (*(param_1 + 0x70) - *(param_1 + 0x74) < 0x28) {
            if (param_1 != 0) {
                iVar5 = skb_copy_bits(param_1,0,auStack_50,0x28);
                puVar8 = auStack_50;
                if (-1 < iVar5) goto code_r0x0800119c;
            }
            goto code_r0x08001240;
        }
        puVar8 = *(param_1 + 0xd8);
        if (puVar8 == NULL) goto code_r0x08001240;
code_r0x0800119c:
        auStack_54[0] = puVar8[6];
        uVar4 = ipv6_skip_exthdr(param_1,0x28,auStack_54,aiStack_58);
        if (((aiStack_58[0] != 0) || (auStack_54[0] != 0x11)) || (uVar4 == 0xffffffff)) goto code_r0x08001240;
code_r0x080011d8:
        uVar6 = sym.DATARMNET77ab42949f(param_1,uVar4);
        if ((uVar6 & 1) == 0) goto code_r0x08001240;
        uVar7 = 0;
        *(param_1 + 0x94) = 0;
        *(param_1 + 0x80) = *(param_1 + 0x80) | 0x200;
    }
    else {
        if (*(param_1 + 0xb0) == 8) {
            uStack_40 = uStack_40 & 0xffffffff00000000;
            auStack_50[0] = 0;
            auStack_50[1] = 0;
            auStack_50[2] = 0;
            auStack_50[3] = 0;
            auStack_50[4] = 0;
            auStack_50[5] = 0;
            auStack_50[6] = 0;
            auStack_50[7] = 0;
            auStack_50[8] = 0;
            auStack_50[9] = 0;
            auStack_50[10] = 0;
            auStack_50[0xb] = 0;
            auStack_50[0xc] = 0;
            auStack_50[0xd] = 0;
            auStack_50[0xe] = 0;
            auStack_50[0xf] = 0;
            if (*(param_1 + 0x70) - *(param_1 + 0x74) < 0x14) {
                if (param_1 != 0) {
                    iVar5 = skb_copy_bits(param_1,0,auStack_50,0x14);
                    puVar8 = auStack_50;
                    if (-1 < iVar5) goto code_r0x08001150;
                }
            }
            else {
                puVar8 = *(param_1 + 0xd8);
                if (puVar8 != NULL) {
code_r0x08001150:
                    if (((*(puVar8 + 6) & 0xff3f) == 0) && (puVar8[9] == 0x11)) {
                        uVar4 = (*puVar8 & 0xf) << 2;
                        goto code_r0x080011d8;
                    }
                }
            }
        }
code_r0x08001240:
        uVar7 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    auVar10 = __stack_chk_fail(uVar7);
    puStack_c0 = auVar10._0_8_;
    *extraout_x18 = sym.DATARMNET77ab42949f;
    puStack_90 = &stack0xffffffffffffffe0;
    pcStack_88 = sym.DATARMNET77ab42949f;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    auStack_9c[0] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    iVar5 = auVar10._8_4_;
    if (*(puStack_c0 + 0x70) - (*(puStack_c0 + 0x74) + iVar5) < 8) {
        if (puStack_c0 != NULL) {
            piVar9 = aiStack_a8;
            iVar3 = skb_copy_bits(puStack_c0,auVar10._8_8_ & 0xffffffff,aiStack_a8,8);
            if (-1 < iVar3) goto code_r0x080012cc;
        }
code_r0x08001374:
        bVar2 = false;
    }
    else {
        piVar9 = *(puStack_c0 + 0xd8) + iVar5;
        if (piVar9 == NULL) goto code_r0x08001374;
code_r0x080012cc:
        if (((*piVar9 != -0x44ff) && (piVar9[1] != -0x44ff)) || ((piVar9[2] >> 8 | piVar9[2] << 8) < 9))
        goto code_r0x08001374;
        if ((*(puStack_c0 + 0x70) - (*(puStack_c0 + 0x74) + iVar5)) + -8 < 1) {
            if (puStack_c0 != NULL) {
                puVar8 = auStack_9c;
                iVar5 = skb_copy_bits(puStack_c0,iVar5 + 8,auStack_9c,1);
                puStack_c0 = puVar8;
                if (-1 < iVar5) goto code_r0x08001324;
            }
            goto code_r0x08001374;
        }
        puVar8 = *(puStack_c0 + 0xd8) + iVar5 + 8;
        puStack_c0 = puVar8;
        if (puVar8 == NULL) goto code_r0x08001374;
code_r0x08001324:
        bVar2 = 0xbf < *puVar8;
        puStack_c0 = puVar8;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return;
    }
    arg1 = __stack_chk_fail(bVar2);
    *extraout_x18_00 = sym.DATARMNET05c4bf8af9;
    ppuStack_d0 = &puStack_90;
    pcStack_c8 = sym.DATARMNET05c4bf8af9;
    iVar1 = sp_el0;
    iStack_d8 = *(iVar1 + 0x5e0);
    if (*(arg1 + 0xb0) == -0x227a) {
        uStack_e8 = 0;
        uStack_e0 = 0;
        auStack_100[8] = 0;
        auStack_100[9] = 0;
        auStack_100[10] = 0;
        auStack_100[0xb] = 0;
        auStack_100[0xc] = 0;
        auStack_100[0xd] = 0;
        auStack_100[0xe] = 0;
        auStack_100[0xf] = 0;
        uStack_f0 = 0;
        auStack_100[0] = 0;
        auStack_100[1] = 0;
        auStack_100[2] = 0;
        auStack_100[3] = 0;
        auStack_100[4] = 0;
        auStack_100[5] = 0;
        auStack_100[6] = 0;
        auStack_100[7] = 0;
        aiStack_108[0] = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
            if (arg1 == 0) goto code_r0x080014ac;
            iVar5 = skb_copy_bits(arg1,0,auStack_100,0x28);
            puVar8 = auStack_100;
            if (iVar5 < 0) goto code_r0x080014ac;
        }
        else {
            puVar8 = *(arg1 + 0xd8);
            if (puVar8 == NULL) goto code_r0x080014ac;
        }
        auStack_104[0] = puVar8[6];
        uVar4 = ipv6_skip_exthdr(arg1,0x28,auStack_104,aiStack_108);
        if (((aiStack_108[0] != 0) || (auStack_104[0] != 0x11)) || (uVar4 == 0xffffffff)) goto code_r0x080014ac;
    }
    else {
        if (*(arg1 + 0xb0) != 8) goto code_r0x080014ac;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        auStack_100[0] = 0;
        auStack_100[1] = 0;
        auStack_100[2] = 0;
        auStack_100[3] = 0;
        auStack_100[4] = 0;
        auStack_100[5] = 0;
        auStack_100[6] = 0;
        auStack_100[7] = 0;
        auStack_100[8] = 0;
        auStack_100[9] = 0;
        auStack_100[10] = 0;
        auStack_100[0xb] = 0;
        auStack_100[0xc] = 0;
        auStack_100[0xd] = 0;
        auStack_100[0xe] = 0;
        auStack_100[0xf] = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
            if (arg1 == 0) goto code_r0x080014ac;
            iVar5 = skb_copy_bits(arg1,0,auStack_100,0x14);
            puVar8 = auStack_100;
            if (iVar5 < 0) goto code_r0x080014ac;
        }
        else {
            puVar8 = *(arg1 + 0xd8);
            if (puVar8 == NULL) goto code_r0x080014ac;
        }
        if (((*(puVar8 + 6) & 0xff3f) != 0) || (puVar8[9] != 0x11)) goto code_r0x080014ac;
        uVar4 = (*puVar8 & 0xf) << 2;
    }
    uVar6 = sym.DATARMNET77ab42949f(arg1,uVar4);
    if ((uVar6 & 1) != 0) {
        *(arg1 + 0x8c) = 0xda001a;
    }
code_r0x080014ac:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_d8) {
        __stack_chk_fail();
        *extraout_x18_01 = sym.DATARMNET49c17a32bc;
        _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
        return;
    }
    return;
}


// ===== sym.DATARMNETee9214ce9b @ 0x080010f0 (size 388) =====

void sym.DATARMNETee9214ce9b(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint64_t uVar6;
    ulong uVar7;
    int64_t arg1_00;
    uint8_t *puVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int16_t *piVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    int16_t aiStack_108 [2];
    uint8_t auStack_104 [4];
    uint8_t auStack_100 [16];
    uint64_t uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_d8;
    uchar **ppuStack_d0;
    code *pcStack_c8;
    uint8_t *puStack_c0;
    int16_t aiStack_a8 [6];
    uint8_t auStack_9c [4];
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    int16_t aiStack_58 [2];
    uint8_t auStack_54 [4];
    uint8_t auStack_50 [16];
    uint64_t uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if (*(arg1 + 0xb0) == -0x227a) {
        uStack_38 = 0;
        uStack_30 = 0;
        auStack_50[8] = 0;
        auStack_50[9] = 0;
        auStack_50[10] = 0;
        auStack_50[0xb] = 0;
        auStack_50[0xc] = 0;
        auStack_50[0xd] = 0;
        auStack_50[0xe] = 0;
        auStack_50[0xf] = 0;
        uStack_40 = 0;
        auStack_50[0] = 0;
        auStack_50[1] = 0;
        auStack_50[2] = 0;
        auStack_50[3] = 0;
        auStack_50[4] = 0;
        auStack_50[5] = 0;
        auStack_50[6] = 0;
        auStack_50[7] = 0;
        aiStack_58[0] = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
            if (arg1 != 0) {
                iVar5 = skb_copy_bits(arg1,0,auStack_50,0x28);
                puVar8 = auStack_50;
                if (-1 < iVar5) goto code_r0x0800119c;
            }
            goto code_r0x08001240;
        }
        puVar8 = *(arg1 + 0xd8);
        if (puVar8 == NULL) goto code_r0x08001240;
code_r0x0800119c:
        auStack_54[0] = puVar8[6];
        uVar4 = ipv6_skip_exthdr(arg1,0x28,auStack_54,aiStack_58);
        if (((aiStack_58[0] != 0) || (auStack_54[0] != 0x11)) || (uVar4 == 0xffffffff)) goto code_r0x08001240;
code_r0x080011d8:
        uVar6 = sym.DATARMNET77ab42949f(arg1,uVar4);
        if ((uVar6 & 1) == 0) goto code_r0x08001240;
        uVar7 = 0;
        *(arg1 + 0x94) = 0;
        *(arg1 + 0x80) = *(arg1 + 0x80) | 0x200;
    }
    else {
        if (*(arg1 + 0xb0) == 8) {
            uStack_40 = uStack_40 & 0xffffffff00000000;
            auStack_50[0] = 0;
            auStack_50[1] = 0;
            auStack_50[2] = 0;
            auStack_50[3] = 0;
            auStack_50[4] = 0;
            auStack_50[5] = 0;
            auStack_50[6] = 0;
            auStack_50[7] = 0;
            auStack_50[8] = 0;
            auStack_50[9] = 0;
            auStack_50[10] = 0;
            auStack_50[0xb] = 0;
            auStack_50[0xc] = 0;
            auStack_50[0xd] = 0;
            auStack_50[0xe] = 0;
            auStack_50[0xf] = 0;
            if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
                if (arg1 != 0) {
                    iVar5 = skb_copy_bits(arg1,0,auStack_50,0x14);
                    puVar8 = auStack_50;
                    if (-1 < iVar5) goto code_r0x08001150;
                }
            }
            else {
                puVar8 = *(arg1 + 0xd8);
                if (puVar8 != NULL) {
code_r0x08001150:
                    if (((*(puVar8 + 6) & 0xff3f) == 0) && (puVar8[9] == 0x11)) {
                        uVar4 = (*puVar8 & 0xf) << 2;
                        goto code_r0x080011d8;
                    }
                }
            }
        }
code_r0x08001240:
        uVar7 = 0xffffffea;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_28) {
        return;
    }
    auVar10 = __stack_chk_fail(uVar7);
    puStack_c0 = auVar10._0_8_;
    *extraout_x18 = sym.DATARMNET77ab42949f;
    puStack_90 = &stack0xffffffffffffffe0;
    pcStack_88 = sym.DATARMNET77ab42949f;
    iVar1 = sp_el0;
    iStack_98 = *(iVar1 + 0x5e0);
    auStack_9c[0] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    iVar5 = auVar10._8_4_;
    if (*(puStack_c0 + 0x70) - (*(puStack_c0 + 0x74) + iVar5) < 8) {
        if (puStack_c0 != NULL) {
            piVar9 = aiStack_a8;
            iVar3 = skb_copy_bits(puStack_c0,auVar10._8_8_ & 0xffffffff,aiStack_a8,8);
            if (-1 < iVar3) goto code_r0x080012cc;
        }
code_r0x08001374:
        bVar2 = false;
    }
    else {
        piVar9 = *(puStack_c0 + 0xd8) + iVar5;
        if (piVar9 == NULL) goto code_r0x08001374;
code_r0x080012cc:
        if (((*piVar9 != -0x44ff) && (piVar9[1] != -0x44ff)) || ((piVar9[2] >> 8 | piVar9[2] << 8) < 9))
        goto code_r0x08001374;
        if ((*(puStack_c0 + 0x70) - (*(puStack_c0 + 0x74) + iVar5)) + -8 < 1) {
            if (puStack_c0 != NULL) {
                puVar8 = auStack_9c;
                iVar5 = skb_copy_bits(puStack_c0,iVar5 + 8,auStack_9c,1);
                puStack_c0 = puVar8;
                if (-1 < iVar5) goto code_r0x08001324;
            }
            goto code_r0x08001374;
        }
        puVar8 = *(puStack_c0 + 0xd8) + iVar5 + 8;
        puStack_c0 = puVar8;
        if (puVar8 == NULL) goto code_r0x08001374;
code_r0x08001324:
        bVar2 = 0xbf < *puVar8;
        puStack_c0 = puVar8;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_98) {
        return;
    }
    arg1_00 = __stack_chk_fail(bVar2);
    *extraout_x18_00 = sym.DATARMNET05c4bf8af9;
    ppuStack_d0 = &puStack_90;
    pcStack_c8 = sym.DATARMNET05c4bf8af9;
    iVar1 = sp_el0;
    iStack_d8 = *(iVar1 + 0x5e0);
    if (*(arg1_00 + 0xb0) == -0x227a) {
        uStack_e8 = 0;
        uStack_e0 = 0;
        auStack_100[8] = 0;
        auStack_100[9] = 0;
        auStack_100[10] = 0;
        auStack_100[0xb] = 0;
        auStack_100[0xc] = 0;
        auStack_100[0xd] = 0;
        auStack_100[0xe] = 0;
        auStack_100[0xf] = 0;
        uStack_f0 = 0;
        auStack_100[0] = 0;
        auStack_100[1] = 0;
        auStack_100[2] = 0;
        auStack_100[3] = 0;
        auStack_100[4] = 0;
        auStack_100[5] = 0;
        auStack_100[6] = 0;
        auStack_100[7] = 0;
        aiStack_108[0] = 0;
        if (*(arg1_00 + 0x70) - *(arg1_00 + 0x74) < 0x28) {
            if (arg1_00 == 0) goto code_r0x080014ac;
            iVar5 = skb_copy_bits(arg1_00,0,auStack_100,0x28);
            puVar8 = auStack_100;
            if (iVar5 < 0) goto code_r0x080014ac;
        }
        else {
            puVar8 = *(arg1_00 + 0xd8);
            if (puVar8 == NULL) goto code_r0x080014ac;
        }
        auStack_104[0] = puVar8[6];
        uVar4 = ipv6_skip_exthdr(arg1_00,0x28,auStack_104,aiStack_108);
        if (((aiStack_108[0] != 0) || (auStack_104[0] != 0x11)) || (uVar4 == 0xffffffff)) goto code_r0x080014ac;
    }
    else {
        if (*(arg1_00 + 0xb0) != 8) goto code_r0x080014ac;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        auStack_100[0] = 0;
        auStack_100[1] = 0;
        auStack_100[2] = 0;
        auStack_100[3] = 0;
        auStack_100[4] = 0;
        auStack_100[5] = 0;
        auStack_100[6] = 0;
        auStack_100[7] = 0;
        auStack_100[8] = 0;
        auStack_100[9] = 0;
        auStack_100[10] = 0;
        auStack_100[0xb] = 0;
        auStack_100[0xc] = 0;
        auStack_100[0xd] = 0;
        auStack_100[0xe] = 0;
        auStack_100[0xf] = 0;
        if (*(arg1_00 + 0x70) - *(arg1_00 + 0x74) < 0x14) {
            if (arg1_00 == 0) goto code_r0x080014ac;
            iVar5 = skb_copy_bits(arg1_00,0,auStack_100,0x14);
            puVar8 = auStack_100;
            if (iVar5 < 0) goto code_r0x080014ac;
        }
        else {
            puVar8 = *(arg1_00 + 0xd8);
            if (puVar8 == NULL) goto code_r0x080014ac;
        }
        if (((*(puVar8 + 6) & 0xff3f) != 0) || (puVar8[9] != 0x11)) goto code_r0x080014ac;
        uVar4 = (*puVar8 & 0xf) << 2;
    }
    uVar6 = sym.DATARMNET77ab42949f(arg1_00,uVar4);
    if ((uVar6 & 1) != 0) {
        *(arg1_00 + 0x8c) = 0xda001a;
    }
code_r0x080014ac:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_d8) {
        __stack_chk_fail();
        *extraout_x18_01 = sym.DATARMNET49c17a32bc;
        _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
        return;
    }
    return;
}


// ===== sym.DATARMNET77ab42949f @ 0x08001274 (size 312) =====

void sym.DATARMNET77ab42949f(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t arg1_00;
    uint64_t uVar6;
    uint8_t *puVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int16_t *piVar8;
    ulong unaff_x30;
    int16_t aiStack_a8 [2];
    uint8_t auStack_a4 [4];
    uint8_t auStack_a0 [16];
    uint64_t uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint8_t *puStack_60;
    int16_t aiStack_48 [6];
    uint8_t auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    auStack_3c[0] = 0;
    aiStack_48[0] = 0;
    aiStack_48[1] = 0;
    aiStack_48[2] = 0;
    aiStack_48[3] = 0;
    iVar5 = arg2;
    if (*(arg1 + 0x70) - (*(arg1 + 0x74) + iVar5) < 8) {
        if (arg1 != 0) {
            piVar8 = aiStack_48;
            iVar3 = skb_copy_bits(arg1,arg2 & 0xffffffff,aiStack_48,8);
            if (-1 < iVar3) goto code_r0x080012cc;
        }
code_r0x08001374:
        bVar2 = false;
    }
    else {
        piVar8 = *(arg1 + 0xd8) + iVar5;
        if (piVar8 == NULL) goto code_r0x08001374;
code_r0x080012cc:
        if (((*piVar8 != -0x44ff) && (piVar8[1] != -0x44ff)) || ((piVar8[2] >> 8 | piVar8[2] << 8) < 9))
        goto code_r0x08001374;
        if ((*(arg1 + 0x70) - (*(arg1 + 0x74) + iVar5)) + -8 < 1) {
            if (arg1 != 0) {
                puVar7 = auStack_3c;
                iVar5 = skb_copy_bits(arg1,iVar5 + 8,auStack_3c,1);
                arg1 = puVar7;
                if (-1 < iVar5) goto code_r0x08001324;
            }
            goto code_r0x08001374;
        }
        puVar7 = *(arg1 + 0xd8) + iVar5 + 8;
        arg1 = puVar7;
        if (puVar7 == NULL) goto code_r0x08001374;
code_r0x08001324:
        bVar2 = 0xbf < *puVar7;
        arg1 = puVar7;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    arg1_00 = __stack_chk_fail(bVar2);
    *extraout_x18 = sym.DATARMNET05c4bf8af9;
    puStack_70 = &stack0xffffffffffffffd0;
    pcStack_68 = sym.DATARMNET05c4bf8af9;
    puStack_60 = arg1;
    iVar1 = sp_el0;
    iStack_78 = *(iVar1 + 0x5e0);
    if (*(arg1_00 + 0xb0) == -0x227a) {
        uStack_88 = 0;
        uStack_80 = 0;
        auStack_a0[8] = 0;
        auStack_a0[9] = 0;
        auStack_a0[10] = 0;
        auStack_a0[0xb] = 0;
        auStack_a0[0xc] = 0;
        auStack_a0[0xd] = 0;
        auStack_a0[0xe] = 0;
        auStack_a0[0xf] = 0;
        uStack_90 = 0;
        auStack_a0[0] = 0;
        auStack_a0[1] = 0;
        auStack_a0[2] = 0;
        auStack_a0[3] = 0;
        auStack_a0[4] = 0;
        auStack_a0[5] = 0;
        auStack_a0[6] = 0;
        auStack_a0[7] = 0;
        aiStack_a8[0] = 0;
        if (*(arg1_00 + 0x70) - *(arg1_00 + 0x74) < 0x28) {
            if (arg1_00 == 0) goto code_r0x080014ac;
            iVar5 = skb_copy_bits(arg1_00,0,auStack_a0,0x28);
            puVar7 = auStack_a0;
            if (iVar5 < 0) goto code_r0x080014ac;
        }
        else {
            puVar7 = *(arg1_00 + 0xd8);
            if (puVar7 == NULL) goto code_r0x080014ac;
        }
        auStack_a4[0] = puVar7[6];
        uVar4 = ipv6_skip_exthdr(arg1_00,0x28,auStack_a4,aiStack_a8);
        if (((aiStack_a8[0] != 0) || (auStack_a4[0] != 0x11)) || (uVar4 == 0xffffffff)) goto code_r0x080014ac;
    }
    else {
        if (*(arg1_00 + 0xb0) != 8) goto code_r0x080014ac;
        uStack_90 = uStack_90 & 0xffffffff00000000;
        auStack_a0[0] = 0;
        auStack_a0[1] = 0;
        auStack_a0[2] = 0;
        auStack_a0[3] = 0;
        auStack_a0[4] = 0;
        auStack_a0[5] = 0;
        auStack_a0[6] = 0;
        auStack_a0[7] = 0;
        auStack_a0[8] = 0;
        auStack_a0[9] = 0;
        auStack_a0[10] = 0;
        auStack_a0[0xb] = 0;
        auStack_a0[0xc] = 0;
        auStack_a0[0xd] = 0;
        auStack_a0[0xe] = 0;
        auStack_a0[0xf] = 0;
        if (*(arg1_00 + 0x70) - *(arg1_00 + 0x74) < 0x14) {
            if (arg1_00 == 0) goto code_r0x080014ac;
            iVar5 = skb_copy_bits(arg1_00,0,auStack_a0,0x14);
            puVar7 = auStack_a0;
            if (iVar5 < 0) goto code_r0x080014ac;
        }
        else {
            puVar7 = *(arg1_00 + 0xd8);
            if (puVar7 == NULL) goto code_r0x080014ac;
        }
        if (((*(puVar7 + 6) & 0xff3f) != 0) || (puVar7[9] != 0x11)) goto code_r0x080014ac;
        uVar4 = (*puVar7 & 0xf) << 2;
    }
    uVar6 = sym.DATARMNET77ab42949f(arg1_00,uVar4);
    if ((uVar6 & 1) != 0) {
        *(arg1_00 + 0x8c) = 0xda001a;
    }
code_r0x080014ac:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_78) {
        __stack_chk_fail();
        *extraout_x18_00 = sym.DATARMNET49c17a32bc;
        _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
        return;
    }
    return;
}


// ===== sym.DATARMNET05c4bf8af9 @ 0x080013ac (size 376) =====

void sym.DATARMNET05c4bf8af9(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    int16_t aiStack_58 [2];
    uint8_t auStack_54 [4];
    uint8_t auStack_50 [16];
    uint64_t uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_28 = *(iVar1 + 0x5e0);
    if (*(arg1 + 0xb0) == -0x227a) {
        uStack_38 = 0;
        uStack_30 = 0;
        auStack_50[8] = 0;
        auStack_50[9] = 0;
        auStack_50[10] = 0;
        auStack_50[0xb] = 0;
        auStack_50[0xc] = 0;
        auStack_50[0xd] = 0;
        auStack_50[0xe] = 0;
        auStack_50[0xf] = 0;
        uStack_40 = 0;
        auStack_50[0] = 0;
        auStack_50[1] = 0;
        auStack_50[2] = 0;
        auStack_50[3] = 0;
        auStack_50[4] = 0;
        auStack_50[5] = 0;
        auStack_50[6] = 0;
        auStack_50[7] = 0;
        aiStack_58[0] = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x28) {
            if (arg1 == 0) goto code_r0x080014ac;
            iVar3 = skb_copy_bits(arg1,0,auStack_50,0x28);
            puVar5 = auStack_50;
            if (iVar3 < 0) goto code_r0x080014ac;
        }
        else {
            puVar5 = *(arg1 + 0xd8);
            if (puVar5 == NULL) goto code_r0x080014ac;
        }
        auStack_54[0] = puVar5[6];
        uVar2 = ipv6_skip_exthdr(arg1,0x28,auStack_54,aiStack_58);
        if (((aiStack_58[0] != 0) || (auStack_54[0] != 0x11)) || (uVar2 == 0xffffffff)) goto code_r0x080014ac;
    }
    else {
        if (*(arg1 + 0xb0) != 8) goto code_r0x080014ac;
        uStack_40 = uStack_40 & 0xffffffff00000000;
        auStack_50[0] = 0;
        auStack_50[1] = 0;
        auStack_50[2] = 0;
        auStack_50[3] = 0;
        auStack_50[4] = 0;
        auStack_50[5] = 0;
        auStack_50[6] = 0;
        auStack_50[7] = 0;
        auStack_50[8] = 0;
        auStack_50[9] = 0;
        auStack_50[10] = 0;
        auStack_50[0xb] = 0;
        auStack_50[0xc] = 0;
        auStack_50[0xd] = 0;
        auStack_50[0xe] = 0;
        auStack_50[0xf] = 0;
        if (*(arg1 + 0x70) - *(arg1 + 0x74) < 0x14) {
            if (arg1 == 0) goto code_r0x080014ac;
            iVar3 = skb_copy_bits(arg1,0,auStack_50,0x14);
            puVar5 = auStack_50;
            if (iVar3 < 0) goto code_r0x080014ac;
        }
        else {
            puVar5 = *(arg1 + 0xd8);
            if (puVar5 == NULL) goto code_r0x080014ac;
        }
        if (((*(puVar5 + 6) & 0xff3f) != 0) || (puVar5[9] != 0x11)) goto code_r0x080014ac;
        uVar2 = (*puVar5 & 0xf) << 2;
    }
    uVar4 = sym.DATARMNET77ab42949f(arg1,uVar2);
    if ((uVar4 & 1) != 0) {
        *(arg1 + 0x8c) = 0xda001a;
    }
code_r0x080014ac:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_28) {
        __stack_chk_fail();
        *extraout_x18 = sym.DATARMNET49c17a32bc;
        _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
        rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
        return;
    }
    return;
}


// ===== sym.DATARMNET49c17a32bc @ 0x08001524 (size 68) =====

void sym.DATARMNET49c17a32bc(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
    return;
}


// ===== sym.DATARMNET41e8cc085c @ 0x08001568 (size 60) =====

void sym.DATARMNET41e8cc085c(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _ipv6_skip_exthdr = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET95a71e03c1,2);
    synchronize_rcu();
    return;
}


// ===== sym.__cfi_check_fail @ 0x080015a4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080015e8

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
    //switch table (4 cases) at 0x8000070
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80015fc);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001604 (size 92) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _printk(0x80000e3,"DATARMNET63abbdc3d3");
    _rmnet_perf_egress_hook1 = sym.DATARMNET05c4bf8af9.cfi_jt;
    rmnet_module_hook_register(obj.DATARMNET95a71e03c1,2);
    return 0;
}


// ===== sym.cleanup_module @ 0x08001660 (size 80) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    _ipv6_skip_exthdr = 0;
    rmnet_module_hook_unregister_no_sync(obj.DATARMNET95a71e03c1,2);
    synchronize_rcu();
    _printk(0x80000c9,"DATARMNETa343229e33");
    return;
}

