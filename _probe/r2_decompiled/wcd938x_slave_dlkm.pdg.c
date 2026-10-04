// decompiled from wcd938x_slave_dlkm by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 400) =====

//WARNING: Switch with 1 destination removed at 0x08001f54

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7ff5a213d37b1a6) {
        if (arg1 < -0x8dc801903aca538) {
            if (arg1 == -0x440ca8bece010a7b) {
                pcVar2 = sym.wcd938x_swr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                goto code_r0x08001174;
            }
            if (arg1 != -0xc5845f7c0eb41eb) goto code_r0x08001f14;
            pcVar2 = sym.wcd938x_slave_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else if (arg1 == -0x8dc801903aca538) {
            pcVar2 = sym.codec_debug_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001f14;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else if (arg1 < 0x1d7ed092cb04d3f1) {
        if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.codec_debug_dump.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x08001174:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001f14;
        }
        if (arg1 != 0x173b3928f20e90cc) goto code_r0x08001f14;
        pcVar2 = sym.wcd938x_slave_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else {
        if (arg1 == 0x1d7ed092cb04d3f1) {
            pcVar2 = sym.codec_debug_peek_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x08001174;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001f14;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001f14:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f68);
    (*pcVar1)();
}


// ===== sym.wcd938x_slave_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001198 (size 8) =====

void sym.wcd938x_slave_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    bool bVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    auStack_2c[0] = 0;
    if ((param_1 == 0) || (iVar5 = param_1 + -0x48, iVar5 == 0)) {
        iVar2 = ___ratelimit(obj.wcd938x_slave_bind._rs,"wcd938x_slave_bind");
        if (iVar2 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            _printk(0x800041b,"wcd938x_slave_bind");
            uVar3 = 0xffffffea;
        }
    }
    else {
        usleep_range_state(100,0x6e,2);
        iVar2 = swr_get_logical_dev_num(iVar5,*(param_1 + 0x390),auStack_2c);
        bVar1 = iVar2 == 0;
        if (iVar2 != 0) {
            usleep_range_state(100,0x6e,2);
            iVar2 = swr_get_logical_dev_num(iVar5,*(param_1 + 0x390),auStack_2c);
            bVar1 = iVar2 == 0;
            if (iVar2 != 0) {
                usleep_range_state(100,0x6e,2);
                iVar2 = swr_get_logical_dev_num(iVar5,*(param_1 + 0x390),auStack_2c);
                bVar1 = iVar2 == 0;
                if (iVar2 != 0) {
                    usleep_range_state(100,0x6e,2);
                    iVar2 = swr_get_logical_dev_num(iVar5,*(param_1 + 0x390),auStack_2c);
                    bVar1 = iVar2 == 0;
                    if (iVar2 != 0) {
                        usleep_range_state(100,0x6e,2);
                        iVar2 = swr_get_logical_dev_num(iVar5,*(param_1 + 0x390),auStack_2c);
                        bVar1 = iVar2 == 0;
                    }
                }
            }
        }
        if (bVar1) {
            uVar3 = 0;
            *(param_1 + -8) = auStack_2c[0];
        }
        else {
            uVar3 = 0xfffffdfb;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.wcd938x_slave_unbind;
    iVar5 = 0;
    if (iVar4 != 0) {
        iVar5 = iVar4 + -0x48;
    }
    if (((iVar5 == 0) || (*(iVar5 + 0xe0) == 0)) &&
       (iVar2 = ___ratelimit(obj.wcd938x_slave_unbind._rs,"wcd938x_slave_unbind"), iVar2 != 0)) {
        _dev_err(iVar5 + 0x48,"%s: wcd938x_slave is NULL\n","wcd938x_slave_unbind");
    }
    return;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011a0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.wcd938x_swr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011a8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.wcd938x_swr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.codec_debug_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011b0 (size 8) =====

ulong sym.codec_debug_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0xd8) = *(param_1 + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_peek_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011b8 (size 8) =====

uint64_t sym.codec_debug_peek_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint uVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar auVar7 [16];
    int64_t *piStack_88;
    uint64_t auStack_80 [2];
    uint uStack_70;
    int64_t aiStack_68 [5];
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    aiStack_68[4] = *(iVar5 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    aiStack_68[2] = 0;
    aiStack_68[3] = 0;
    aiStack_68[0] = 0;
    aiStack_68[1] = 0;
    uStack_70 = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == 0)) || (param_4 == NULL)) goto code_r0x08001568;
    iVar5 = *(param_1 + 0xd8);
    if ((iVar5 != 0) && (iVar6 = *(iVar5 + 0xe0), iVar6 != 0)) {
        uVar2 = 0xffffffffffffffea;
        if ((0x1f < param_3) || (*param_4 < 0)) goto code_r0x08001568;
        __check_object_size(aiStack_68,param_3,0);
        iVar1 = sym._copy_from_user(aiStack_68,param_2,param_3);
        if (iVar1 != 0) {
            uVar2 = 0xfffffffffffffff2;
            goto code_r0x08001568;
        }
        *(aiStack_68 + param_3) = 0;
        piStack_88 = aiStack_68;
        iVar3 = strsep(&piStack_88,0x800034d);
        if (iVar3 != 0) {
            uVar4 = 0x10;
            if ((*(iVar3 + 1) & 0xdf) != 0x58) {
                uVar4 = 10;
            }
            iVar1 = kstrtouint(iVar3,uVar4,auStack_80);
            if (iVar1 == 0) {
                strsep(&piStack_88,0x800034d);
                if (auStack_80[0] < 0x200a) {
                    swr_read(iVar5,*(iVar5 + 0x40),auStack_80[0] & 0xffffffff,iVar6 + 0x28,1);
                    uVar2 = param_3;
                    goto code_r0x08001568;
                }
            }
        }
    }
    uVar2 = 0xffffffffffffffea;
code_r0x08001568:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == aiStack_68[4]) {
        return uVar2;
    }
    auVar7 = __stack_chk_fail(uVar2);
    *(auVar7._8_8_ + 0xd8) = *(auVar7._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c0 (size 8) =====

int64_t * sym.codec_debug_write.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    uint32_t uVar14;
    int64_t *arg2;
    int64_t *piVar15;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar16 [16];
    uint uStack_104;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    aiStack_58[4] = *(iVar13 + 0x5e0);
    piVar7 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar10 = param_3;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_4 != NULL)) &&
       ((piVar7 = 0xffffffffffffffea, param_3 < 0x20 && (iVar13 = *(param_1 + 0xd8), iVar13 != 0)))) {
        __check_object_size(aiStack_58,param_3,0);
        iVar6 = sym._copy_from_user(aiStack_58,param_2,param_3);
        if (iVar6 == 0) {
            *(aiStack_58 + param_3) = '\0';
            piStack_78 = aiStack_58;
            iVar8 = strsep(&piStack_78,0x800034d);
            if (iVar8 != 0) {
                piVar10 = &uStack_70;
                uVar11 = 0x10;
                if ((*(iVar8 + 1) & 0xdf) != 0x58) {
                    uVar11 = 10;
                }
                iVar6 = kstrtouint(iVar8,uVar11);
                if ((iVar6 == 0) && (iVar8 = strsep(&piStack_78,0x800034d), iVar8 != 0)) {
                    piVar15 = &uStack_70 | 4;
                    uVar11 = 0x10;
                    if ((*(iVar8 + 1) & 0xdf) != 0x58) {
                        uVar11 = 10;
                    }
                    piVar10 = piVar15;
                    iVar6 = kstrtouint(iVar8,uVar11);
                    if (iVar6 == 0) {
                        strsep(&piStack_78,0x800034d);
                        piVar10 = uStack_70 & 0xffffffff;
                        piVar7 = 0xffffffffffffffea;
                        if ((uStack_70 < 0x200a) && (uStack_70._4_4_ < 0x100)) {
                            swr_write(iVar13,*(iVar13 + 0x40));
                            piVar7 = param_3;
                            param_4 = piVar15;
                        }
                        goto code_r0x08001848;
                    }
                }
            }
            piVar7 = 0xffffffffffffffea;
        }
        else {
            piVar7 = 0xfffffffffffffff2;
        }
    }
code_r0x08001848:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == aiStack_58[4]) {
        return piVar7;
    }
    auVar16 = __stack_chk_fail(piVar7);
    *extraout_x18 = sym.codec_debug_dump;
    pcStack_d8 = sym.codec_debug_dump;
    iVar13 = sp_el0;
    piVar7 = 0xffffffffffffffea;
    iStack_e8 = *(iVar13 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar16._8_8_ != 0) && (auVar16._0_8_ != 0)) && (piVar10 != NULL)) && (param_4 != NULL)) {
        iVar13 = *(auVar16._0_8_ + 0xd8);
        if ((iVar13 == 0) || (*param_4 < 0)) {
            piVar7 = 0xffffffffffffffea;
        }
        else {
            piVar7 = NULL;
            uStack_104 = 0;
            iVar6 = *param_4;
            uStack_f0 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            if (iVar6 < 0x17d78) {
                piVar7 = NULL;
                piVar15 = piVar10 + -1;
                uVar14 = iVar6 / 0xc + 0x40;
                do {
                    if ((((0xdfc < uVar14 - 0x406 >> 1) && (0xcb < uVar14 - 0x339)) &&
                        ((0xcb < uVar14 - 0x239 &&
                         (((0xcb < uVar14 - 0x139 && (6 < uVar14 - 0x429)) && (6 < (uVar14 & 0xfffffeff) - 0x229))))))
                       && (((6 < uVar14 - 0x129 && (0x19 < uVar14 - 0x406)) &&
                           ((0x19 < (uVar14 & 0xfffffeff) - 0x206 &&
                            ((((0x19 < uVar14 - 0x106 && (0xe < uVar14 - 0xf1)) &&
                              ((0xe < uVar14 - 0xe1 &&
                               (((0xe < uVar14 - 0xd1 && (0x79 < uVar14 - 0x56)) && (2 < uVar14 - 0x47)))))) &&
                             (4 < uVar14 - 0x4b)))))))) {
                        swr_read(iVar13,*(iVar13 + 0x40),uVar14,&uStack_104,1);
                        piVar10 = "0x%.3x: 0x%.2x\n";
                        iVar6 = snprintf(&uStack_100,0x14,"0x%.3x: 0x%.2x\n",uVar14,uStack_104);
                        if (iVar6 < 0) break;
                        arg2 = iVar6;
                        if (piVar15 <= piVar7 + arg2) break;
                        noname_1 = __check_object_size(&uStack_100,arg2,1);
                        piVar10 = arg2;
                        iVar8 = sym._copy_to_user(auVar16._8_8_ + piVar7,noname_1,arg2);
                        if (iVar8 != 0) {
                            iVar6 = ___ratelimit(obj.wcd938x_swrslave_reg_show._rs,"wcd938x_swrslave_reg_show");
                            if (iVar6 != 0) {
                                _printk(0x8000370,"wcd938x_swrslave_reg_show");
                            }
                            piVar7 = 0xfffffffffffffff2;
                            break;
                        }
                        *param_4 = *param_4 + arg2;
                        piVar7 = piVar7 + arg2;
                    }
                    bVar5 = uVar14 < 0x2009;
                    uVar14 = uVar14 + 1;
                } while (bVar5);
            }
            *param_4 = 0x1806c;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_e8) {
        return piVar7;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar4 = (uVar9 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar12 = uVar9 & uVar4;
    }
    bVar5 = CARRY8(uVar12,piVar10);
    pcVar1 = uVar12 + piVar10;
    uVar12 = 0;
    if (!bVar5 || pcVar1 == NULL) {
        uVar12 = 0x7fffffffff;
    }
    if (bVar5) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar12) && !CARRY8(pcVar1 + ~uVar12,bVar5) || pcVar1 == uVar12 + !bVar5) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar9 & uVar4 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        piVar10 = __arch_copy_to_user(uVar9);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return piVar10;
}


// ===== sym.codec_debug_dump.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011c8 (size 8) =====

char * sym.codec_debug_dump.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                 (int64_t param_1,int64_t param_2,char *param_3,int64_t *param_4)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar9;
    int64_t iVar10;
    uint32_t uVar11;
    char *arg2;
    char *pcVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    pcVar9 = 0xffffffffffffffea;
    iStack_68 = *(iVar10 + 0x5e0);
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        iVar10 = *(param_1 + 0xd8);
        if ((iVar10 == 0) || (*param_4 < 0)) {
            pcVar9 = 0xffffffffffffffea;
        }
        else {
            pcVar9 = NULL;
            uStack_84 = 0;
            iVar5 = *param_4;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            if (iVar5 < 0x17d78) {
                pcVar9 = NULL;
                pcVar12 = param_3 + -1;
                uVar11 = iVar5 / 0xc + 0x40;
                do {
                    if ((((0xdfc < uVar11 - 0x406 >> 1) && (0xcb < uVar11 - 0x339)) &&
                        ((0xcb < uVar11 - 0x239 &&
                         ((((0xcb < uVar11 - 0x139 && (6 < uVar11 - 0x429)) && (6 < (uVar11 & 0xfffffeff) - 0x229)) &&
                          ((6 < uVar11 - 0x129 && (0x19 < uVar11 - 0x406)))))))) &&
                       (((0x19 < (uVar11 & 0xfffffeff) - 0x206 && ((0x19 < uVar11 - 0x106 && (0xe < uVar11 - 0xf1)))) &&
                        (((0xe < uVar11 - 0xe1 &&
                          (((0xe < uVar11 - 0xd1 && (0x79 < uVar11 - 0x56)) && (2 < uVar11 - 0x47)))) &&
                         (4 < uVar11 - 0x4b)))))) {
                        swr_read(iVar10,*(iVar10 + 0x40),uVar11,&uStack_84,1);
                        param_3 = "0x%.3x: 0x%.2x\n";
                        iVar5 = snprintf(&uStack_80,0x14,"0x%.3x: 0x%.2x\n",uVar11,uStack_84);
                        if (iVar5 < 0) break;
                        arg2 = iVar5;
                        if (pcVar12 <= pcVar9 + arg2) break;
                        noname_1 = __check_object_size(&uStack_80,arg2,1);
                        param_3 = arg2;
                        iVar6 = sym._copy_to_user(pcVar9 + param_2,noname_1,arg2);
                        if (iVar6 != 0) {
                            iVar5 = ___ratelimit(obj.wcd938x_swrslave_reg_show._rs,"wcd938x_swrslave_reg_show");
                            if (iVar5 != 0) {
                                _printk(0x8000370,"wcd938x_swrslave_reg_show");
                            }
                            pcVar9 = 0xfffffffffffffff2;
                            break;
                        }
                        *param_4 = arg2 + *param_4;
                        pcVar9 = pcVar9 + arg2;
                    }
                    bVar4 = uVar11 < 0x2009;
                    uVar11 = uVar11 + 1;
                } while (bVar4);
            }
            *param_4 = 0x1806c;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return pcVar9;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar3 = (uVar7 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar7, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar8 = uVar7 & uVar3;
    }
    bVar4 = CARRY8(uVar8,param_3);
    pcVar9 = param_3 + uVar8;
    uVar8 = 0;
    if (!bVar4 || pcVar9 == NULL) {
        uVar8 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar9,~uVar8) && !CARRY8(pcVar9 + ~uVar8,bVar4) || pcVar9 == uVar8 + !bVar4) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar7 & uVar3 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        param_3 = __arch_copy_to_user(uVar7);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return param_3;
}


// ===== sym.codec_debug_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d0 (size 8) =====

int64_t * sym.codec_debug_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                    (int64_t param_1,int64_t param_2,int64_t *param_3,int64_t *param_4)

{
    int iVar1;
    int64_t *piVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_c8;
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    int64_t aiStack_a8 [5];
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar4 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    piVar2 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((param_2 != 0) && (param_1 != 0)) && (param_3 != NULL)) && (param_4 != NULL)) {
        if (((*(param_1 + 0xd8) == 0) || (iVar7 = *(*(param_1 + 0xd8) + 0xe0), iVar7 == 0)) || (*param_4 < 0)) {
            piVar2 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(iVar7 + 0x28));
            uVar3 = strnlen(&iStack_40,7);
            piVar2 = simple_read_from_buffer(param_2,param_3,param_4,&iStack_40,uVar3);
            param_3 = param_4;
            param_4 = piVar4;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return piVar2;
    }
    auVar9 = __stack_chk_fail(piVar2);
    *extraout_x18 = sym.codec_debug_peek_write;
    pcStack_78 = sym.codec_debug_peek_write;
    iVar7 = sp_el0;
    aiStack_a8[4] = *(iVar7 + 0x5e0);
    piVar4 = 0xffffffffffffffea;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    uStack_b0 = 0;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    if (((auVar9._8_8_ == 0) || (auVar9._0_8_ == 0)) || ((param_3 == NULL || (param_4 == NULL)))) goto code_r0x08001568;
    iVar7 = *(auVar9._0_8_ + 0xd8);
    if ((iVar7 != 0) && (iVar8 = *(iVar7 + 0xe0), iVar8 != 0)) {
        piVar4 = 0xffffffffffffffea;
        if ((0x1f < param_3) || (*param_4 < 0)) goto code_r0x08001568;
        __check_object_size(aiStack_a8,param_3,0);
        iVar1 = sym._copy_from_user(aiStack_a8,auVar9._8_8_,param_3);
        if (iVar1 != 0) {
            piVar4 = 0xfffffffffffffff2;
            goto code_r0x08001568;
        }
        *(aiStack_a8 + param_3) = 0;
        piStack_c8 = aiStack_a8;
        iVar5 = strsep(&piStack_c8,0x800034d);
        if (iVar5 != 0) {
            uVar6 = 0x10;
            if ((*(iVar5 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar1 = kstrtouint(iVar5,uVar6,auStack_c0);
            if (iVar1 == 0) {
                strsep(&piStack_c8,0x800034d);
                if (auStack_c0[0] < 0x200a) {
                    swr_read(iVar7,*(iVar7 + 0x40),auStack_c0[0] & 0xffffffff,iVar8 + 0x28,1);
                    piVar4 = param_3;
                    goto code_r0x08001568;
                }
            }
        }
    }
    piVar4 = 0xffffffffffffffea;
code_r0x08001568:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_a8[4]) {
        return piVar4;
    }
    auVar9 = __stack_chk_fail(piVar4);
    *(auVar9._8_8_ + 0xd8) = *(auVar9._0_8_ + 0x2d8);
    return NULL;
}


// ===== sym.wcd938x_swr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011d8 (size 8) =====

ulong sym.wcd938x_swr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = param_1 + 0x48;
    piVar2 = devm_kmalloc(piVar1,0x30,0xdc0);
    if (piVar2 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        iVar5 = piVar2[1];
        *(param_1 + 0xe0) = piVar2;
        *piVar2 = param_1;
        if (iVar5 == 0) {
            iVar5 = *(param_1 + 0xb8);
            if (iVar5 == 0) {
                iVar5 = *piVar1;
            }
            uVar3 = debugfs_create_dir(iVar5,0);
            piVar2[1] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                iVar5 = debugfs_create_file("swrslave_peek",0x8124,uVar3,param_1,obj.codec_debug_read_ops);
                piVar2[2] = iVar5;
                iVar5 = debugfs_create_file("swrslave_poke",0x8124,piVar2[1],param_1,obj.codec_debug_write_ops);
                piVar2[3] = iVar5;
                iVar5 = debugfs_create_file("swrslave_reg_dump",0x8124,piVar2[1],param_1,obj.codec_debug_dump_ops);
                piVar2[4] = iVar5;
            }
        }
        uVar4 = component_add(piVar1,reloc.wcd938x_slave_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    }
    return uVar4;
}


// ===== sym.wcd938x_swr_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.wcd938x_swr_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 != 0) && (iVar1 = *(param_1 + 0xe0), iVar1 != 0)) {
        debugfs_remove(*(iVar1 + 8));
        *(iVar1 + 8) = 0;
    }
    component_del(param_1 + 0x48,reloc.wcd938x_slave_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(param_1 + 0xe0) = 0;
    swr_remove_device(param_1);
    return 0;
}


// ===== sym.wcd938x_slave_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080011e8 (size 8) =====

void sym.wcd938x_slave_unbind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0;
    if (param_1 != 0) {
        iVar1 = param_1 + -0x48;
    }
    if (((iVar1 == 0) || (*(iVar1 + 0xe0) == 0)) &&
       (iVar2 = ___ratelimit(obj.wcd938x_slave_unbind._rs,"wcd938x_slave_unbind"), iVar2 != 0)) {
        _dev_err(iVar1 + 0x48,"%s: wcd938x_slave is NULL\n","wcd938x_slave_unbind");
    }
    return;
}


// ===== sym.wcd938x_swr_probe @ 0x080011f0 (size 260) =====

ulong sym.wcd938x_swr_probe(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar1 = arg1 + 0x48;
    piVar2 = devm_kmalloc(piVar1,0x30,0xdc0);
    if (piVar2 == NULL) {
        uVar4 = 0xfffffff4;
    }
    else {
        iVar5 = piVar2[1];
        *(arg1 + 0xe0) = piVar2;
        *piVar2 = arg1;
        if (iVar5 == 0) {
            iVar5 = *(arg1 + 0xb8);
            if (iVar5 == 0) {
                iVar5 = *piVar1;
            }
            uVar3 = debugfs_create_dir(iVar5,0);
            piVar2[1] = uVar3;
            if (uVar3 < 0xfffffffffffff001) {
                iVar5 = debugfs_create_file("swrslave_peek",0x8124,uVar3,arg1,obj.codec_debug_read_ops);
                piVar2[2] = iVar5;
                iVar5 = debugfs_create_file("swrslave_poke",0x8124,piVar2[1],arg1,obj.codec_debug_write_ops);
                piVar2[3] = iVar5;
                iVar5 = debugfs_create_file("swrslave_reg_dump",0x8124,piVar2[1],arg1,obj.codec_debug_dump_ops);
                piVar2[4] = iVar5;
            }
        }
        uVar4 = component_add(piVar1,reloc.wcd938x_slave_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    }
    return uVar4;
}


// ===== sym.wcd938x_swr_remove @ 0x080012f4 (size 100) =====

ulong sym.wcd938x_swr_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t iVar1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 != 0) && (iVar1 = *(arg1 + 0xe0), iVar1 != 0)) {
        debugfs_remove(*(iVar1 + 8));
        *(iVar1 + 8) = 0;
    }
    component_del(arg1 + 0x48,reloc.wcd938x_slave_bind.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    *(arg1 + 0xe0) = 0;
    swr_remove_device(arg1);
    return 0;
}


// ===== sym.codec_debug_read @ 0x08001358 (size 224) =====

uint64_t sym.codec_debug_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint uVar6;
    int64_t iVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    int64_t *piStack_c8;
    uint64_t auStack_c0 [2];
    uint uStack_b0;
    int64_t aiStack_a8 [5];
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_40;
    int64_t iStack_38;
    
    piVar5 = &iStack_40;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    iStack_40 = 0;
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        if (((*(arg1 + 0xd8) == 0) || (iVar7 = *(*(arg1 + 0xd8) + 0xe0), iVar7 == 0)) || (*arg4 < 0)) {
            uVar2 = 0xffffffffffffffea;
        }
        else {
            snprintf(&iStack_40,8,"0x%x\n",*(iVar7 + 0x28));
            uVar3 = strnlen(&iStack_40,7);
            uVar2 = simple_read_from_buffer(arg2,arg3,arg4,&iStack_40,uVar3);
            arg3 = arg4;
            arg4 = piVar5;
        }
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_38) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail(uVar2);
    *extraout_x18 = sym.codec_debug_peek_write;
    pcStack_78 = sym.codec_debug_peek_write;
    iVar7 = sp_el0;
    aiStack_a8[4] = *(iVar7 + 0x5e0);
    uVar2 = 0xffffffffffffffea;
    aiStack_a8[2] = 0;
    aiStack_a8[3] = 0;
    aiStack_a8[0] = 0;
    aiStack_a8[1] = 0;
    uStack_b0 = 0;
    auStack_c0[0] = 0;
    auStack_c0[1] = 0;
    puStack_80 = &stack0xffffffffffffffd0;
    if (((auVar9._8_8_ == 0) || (auVar9._0_8_ == 0)) || ((arg3 == 0 || (arg4 == NULL)))) goto code_r0x08001568;
    iVar7 = *(auVar9._0_8_ + 0xd8);
    if ((iVar7 != 0) && (iVar8 = *(iVar7 + 0xe0), iVar8 != 0)) {
        uVar2 = 0xffffffffffffffea;
        if ((0x1f < arg3) || (*arg4 < 0)) goto code_r0x08001568;
        __check_object_size(aiStack_a8,arg3,0);
        iVar1 = sym._copy_from_user(aiStack_a8,auVar9._8_8_,arg3);
        if (iVar1 != 0) {
            uVar2 = 0xfffffffffffffff2;
            goto code_r0x08001568;
        }
        *(aiStack_a8 + arg3) = 0;
        piStack_c8 = aiStack_a8;
        iVar4 = strsep(&piStack_c8,0x800034d);
        if (iVar4 != 0) {
            uVar6 = 0x10;
            if ((*(iVar4 + 1) & 0xdf) != 0x58) {
                uVar6 = 10;
            }
            iVar1 = kstrtouint(iVar4,uVar6,auStack_c0);
            if (iVar1 == 0) {
                strsep(&piStack_c8,0x800034d);
                if (auStack_c0[0] < 0x200a) {
                    swr_read(iVar7,*(iVar7 + 0x40),auStack_c0[0] & 0xffffffff,iVar8 + 0x28,1);
                    uVar2 = arg3;
                    goto code_r0x08001568;
                }
            }
        }
    }
    uVar2 = 0xffffffffffffffea;
code_r0x08001568:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == aiStack_a8[4]) {
        return uVar2;
    }
    auVar9 = __stack_chk_fail(uVar2);
    *(auVar9._8_8_ + 0xd8) = *(auVar9._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_peek_write @ 0x08001438 (size 360) =====

int64_t sym.codec_debug_peek_write(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint uVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auVar6 [16];
    int64_t *piStack_88;
    uint64_t auStack_80 [2];
    uint uStack_70;
    int64_t aiStack_68 [5];
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    aiStack_68[4] = *(iVar2 + 0x5e0);
    iVar2 = -0x16;
    aiStack_68[2] = 0;
    aiStack_68[3] = 0;
    aiStack_68[0] = 0;
    aiStack_68[1] = 0;
    uStack_70 = 0;
    auStack_80[0] = 0;
    auStack_80[1] = 0;
    if ((((arg2 == 0) || (arg1 == 0)) || (arg3 == 0)) || (arg4 == 0)) goto code_r0x08001568;
    iVar4 = *(arg1 + 0xd8);
    if ((iVar4 != 0) && (iVar5 = *(iVar4 + 0xe0), iVar5 != 0)) {
        iVar2 = -0x16;
        if ((0x1f < arg3) || (*arg4 < 0)) goto code_r0x08001568;
        __check_object_size(aiStack_68,arg3,0);
        iVar1 = sym._copy_from_user(aiStack_68,arg2,arg3);
        if (iVar1 != 0) {
            iVar2 = -0xe;
            goto code_r0x08001568;
        }
        *(aiStack_68 + arg3) = 0;
        piStack_88 = aiStack_68;
        iVar2 = strsep(&piStack_88,0x800034d);
        if (iVar2 != 0) {
            uVar3 = 0x10;
            if ((*(iVar2 + 1) & 0xdf) != 0x58) {
                uVar3 = 10;
            }
            iVar1 = kstrtouint(iVar2,uVar3,auStack_80);
            if (iVar1 == 0) {
                strsep(&piStack_88,0x800034d);
                if (auStack_80[0] < 0x200a) {
                    swr_read(iVar4,*(iVar4 + 0x40),auStack_80[0] & 0xffffffff,iVar5 + 0x28,1);
                    iVar2 = arg3;
                    goto code_r0x08001568;
                }
            }
        }
    }
    iVar2 = -0x16;
code_r0x08001568:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == aiStack_68[4]) {
        return iVar2;
    }
    auVar6 = __stack_chk_fail(iVar2);
    *(auVar6._8_8_ + 0xd8) = *(auVar6._0_8_ + 0x2d8);
    return 0;
}


// ===== sym.codec_debug_open @ 0x080015a0 (size 24) =====

ulong sym.codec_debug_open(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0xd8) = *(arg1 + 0x2d8);
    return 0;
}


// ===== sym._copy_from_user @ 0x080015b8 (size 376) =====

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
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
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
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
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


// ===== sym.codec_debug_write @ 0x0800176c (size 408) =====

int64_t * sym.codec_debug_write(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char *pcVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    bool bVar5;
    int iVar6;
    int64_t *piVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    int64_t *in_x3;
    uint uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar13;
    uint32_t uVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    ulong unaff_x30;
    uchar noname_1 [16];
    uchar auVar17 [16];
    uint uStack_104;
    ulong uStack_100;
    ulong uStack_f8;
    uint uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t *piStack_78;
    ulong uStack_70;
    ulong uStack_68;
    uint uStack_60;
    int64_t aiStack_58 [5];
    
    piVar16 = arg3;
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    aiStack_58[4] = *(iVar13 + 0x5e0);
    piVar7 = 0xffffffffffffffea;
    aiStack_58[2] = 0;
    aiStack_58[3] = 0;
    aiStack_58[0] = 0;
    aiStack_58[1] = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar10 = piVar16;
    if ((((arg2 != 0) && (arg1 != 0)) && (in_x3 != NULL)) &&
       ((piVar7 = 0xffffffffffffffea, piVar16 < 0x20 && (iVar13 = *(arg1 + 0xd8), iVar13 != 0)))) {
        __check_object_size(aiStack_58,piVar16,0);
        iVar6 = sym._copy_from_user(aiStack_58,arg2,piVar16);
        if (iVar6 == 0) {
            *(aiStack_58 + piVar16) = '\0';
            piStack_78 = aiStack_58;
            iVar8 = strsep(&piStack_78,0x800034d);
            if (iVar8 != 0) {
                piVar10 = &uStack_70;
                uVar11 = 0x10;
                if ((*(iVar8 + 1) & 0xdf) != 0x58) {
                    uVar11 = 10;
                }
                iVar6 = kstrtouint(iVar8,uVar11);
                if ((iVar6 == 0) && (iVar8 = strsep(&piStack_78,0x800034d), iVar8 != 0)) {
                    piVar15 = &uStack_70 | 4;
                    uVar11 = 0x10;
                    if ((*(iVar8 + 1) & 0xdf) != 0x58) {
                        uVar11 = 10;
                    }
                    piVar10 = piVar15;
                    iVar6 = kstrtouint(iVar8,uVar11);
                    if (iVar6 == 0) {
                        strsep(&piStack_78,0x800034d);
                        piVar10 = uStack_70 & 0xffffffff;
                        piVar7 = 0xffffffffffffffea;
                        if ((uStack_70 < 0x200a) && (uStack_70._4_4_ < 0x100)) {
                            swr_write(iVar13,*(iVar13 + 0x40));
                            piVar7 = piVar16;
                            in_x3 = piVar15;
                        }
                        goto code_r0x08001848;
                    }
                }
            }
            piVar7 = 0xffffffffffffffea;
        }
        else {
            piVar7 = 0xfffffffffffffff2;
        }
    }
code_r0x08001848:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == aiStack_58[4]) {
        return piVar7;
    }
    auVar17 = __stack_chk_fail(piVar7);
    *extraout_x18 = sym.codec_debug_dump;
    pcStack_d8 = sym.codec_debug_dump;
    iVar13 = sp_el0;
    piVar7 = 0xffffffffffffffea;
    iStack_e8 = *(iVar13 + 0x5e0);
    puStack_e0 = &stack0xffffffffffffffd0;
    if ((((auVar17._8_8_ != 0) && (auVar17._0_8_ != 0)) && (piVar10 != NULL)) && (in_x3 != NULL)) {
        iVar13 = *(auVar17._0_8_ + 0xd8);
        if ((iVar13 == 0) || (*in_x3 < 0)) {
            piVar7 = 0xffffffffffffffea;
        }
        else {
            piVar7 = NULL;
            uStack_104 = 0;
            iVar6 = *in_x3;
            uStack_f0 = 0;
            uStack_100 = 0;
            uStack_f8 = 0;
            if (iVar6 < 0x17d78) {
                piVar7 = NULL;
                piVar16 = piVar10 + -1;
                uVar14 = iVar6 / 0xc + 0x40;
                do {
                    if ((((0xdfc < uVar14 - 0x406 >> 1) && (0xcb < uVar14 - 0x339)) &&
                        ((0xcb < uVar14 - 0x239 &&
                         (((0xcb < uVar14 - 0x139 && (6 < uVar14 - 0x429)) && (6 < (uVar14 & 0xfffffeff) - 0x229))))))
                       && (((6 < uVar14 - 0x129 && (0x19 < uVar14 - 0x406)) &&
                           ((0x19 < (uVar14 & 0xfffffeff) - 0x206 &&
                            ((((0x19 < uVar14 - 0x106 && (0xe < uVar14 - 0xf1)) &&
                              ((0xe < uVar14 - 0xe1 &&
                               (((0xe < uVar14 - 0xd1 && (0x79 < uVar14 - 0x56)) && (2 < uVar14 - 0x47)))))) &&
                             (4 < uVar14 - 0x4b)))))))) {
                        swr_read(iVar13,*(iVar13 + 0x40),uVar14,&uStack_104,1);
                        piVar10 = "0x%.3x: 0x%.2x\n";
                        iVar6 = snprintf(&uStack_100,0x14,"0x%.3x: 0x%.2x\n",uVar14,uStack_104);
                        if (iVar6 < 0) break;
                        piVar15 = iVar6;
                        if (piVar16 <= piVar7 + piVar15) break;
                        noname_1 = __check_object_size(&uStack_100,piVar15,1);
                        piVar10 = piVar15;
                        iVar8 = sym._copy_to_user(auVar17._8_8_ + piVar7,noname_1,piVar15);
                        if (iVar8 != 0) {
                            iVar6 = ___ratelimit(obj.wcd938x_swrslave_reg_show._rs,"wcd938x_swrslave_reg_show");
                            if (iVar6 != 0) {
                                _printk(0x8000370,"wcd938x_swrslave_reg_show");
                            }
                            piVar7 = 0xfffffffffffffff2;
                            break;
                        }
                        *in_x3 = *in_x3 + piVar15;
                        piVar7 = piVar7 + piVar15;
                    }
                    bVar5 = uVar14 < 0x2009;
                    uVar14 = uVar14 + 1;
                } while (bVar5);
            }
            *in_x3 = 0x1806c;
        }
    }
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_e8) {
        return piVar7;
    }
    uVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym._copy_to_user;
    puVar2 = sp_el0;
    uVar4 = (uVar9 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar12 = uVar9, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar12 = uVar9 & uVar4;
    }
    bVar5 = CARRY8(uVar12,piVar10);
    pcVar1 = uVar12 + piVar10;
    uVar12 = 0;
    if (!bVar5 || pcVar1 == NULL) {
        uVar12 = 0x7fffffffff;
    }
    if (bVar5) {
        pcVar1 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar1,~uVar12) && !CARRY8(pcVar1 + ~uVar12,bVar5) || pcVar1 == uVar12 + !bVar5) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar12 = daif;
            if ((uVar12 & 0x80) == 0) {
                uVar3 = daif;
                daif = uVar3 | 0xc0;
            }
            uVar3 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar3 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar12;
        }
        if ((uVar9 & uVar4 & 0xffffff8000000000) != 0) {
            uVar9 = 0;
        }
        piVar10 = __arch_copy_to_user(uVar9);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar4 = daif;
            if ((uVar4 & 0x80) == 0) {
                uVar9 = daif;
                daif = uVar9 | 0xc0;
            }
            uVar9 = ttbr1_el1;
            ttbr0_el1 = (uVar9 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar9 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar4;
        }
    }
    return piVar10;
}


// ===== sym.codec_debug_dump @ 0x08001904 (size 660) =====

char * sym.codec_debug_dump(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    bool bVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    char *pcVar9;
    int64_t iVar10;
    uint32_t uVar11;
    char *arg2_00;
    char *pcVar12;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_84;
    ulong uStack_80;
    ulong uStack_78;
    uint uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    pcVar9 = 0xffffffffffffffea;
    iStack_68 = *(iVar10 + 0x5e0);
    if ((((arg2 != 0) && (arg1 != 0)) && (arg3 != 0)) && (arg4 != 0)) {
        iVar10 = *(arg1 + 0xd8);
        if ((iVar10 == 0) || (*arg4 < 0)) {
            pcVar9 = 0xffffffffffffffea;
        }
        else {
            pcVar9 = NULL;
            uStack_84 = 0;
            iVar5 = *arg4;
            uStack_70 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            if (iVar5 < 0x17d78) {
                pcVar9 = NULL;
                pcVar12 = arg3 - 1;
                uVar11 = iVar5 / 0xc + 0x40;
                do {
                    if ((((0xdfc < uVar11 - 0x406 >> 1) && (0xcb < uVar11 - 0x339)) &&
                        ((0xcb < uVar11 - 0x239 &&
                         ((((0xcb < uVar11 - 0x139 && (6 < uVar11 - 0x429)) && (6 < (uVar11 & 0xfffffeff) - 0x229)) &&
                          ((6 < uVar11 - 0x129 && (0x19 < uVar11 - 0x406)))))))) &&
                       (((0x19 < (uVar11 & 0xfffffeff) - 0x206 && ((0x19 < uVar11 - 0x106 && (0xe < uVar11 - 0xf1)))) &&
                        (((0xe < uVar11 - 0xe1 &&
                          (((0xe < uVar11 - 0xd1 && (0x79 < uVar11 - 0x56)) && (2 < uVar11 - 0x47)))) &&
                         (4 < uVar11 - 0x4b)))))) {
                        swr_read(iVar10,*(iVar10 + 0x40),uVar11,&uStack_84,1);
                        arg3 = "0x%.3x: 0x%.2x\n";
                        iVar5 = snprintf(&uStack_80,0x14,"0x%.3x: 0x%.2x\n",uVar11,uStack_84);
                        if (iVar5 < 0) break;
                        arg2_00 = iVar5;
                        if (pcVar12 <= pcVar9 + arg2_00) break;
                        noname_1 = __check_object_size(&uStack_80,arg2_00,1);
                        arg3 = arg2_00;
                        iVar6 = sym._copy_to_user(pcVar9 + arg2,noname_1,arg2_00);
                        if (iVar6 != 0) {
                            iVar5 = ___ratelimit(obj.wcd938x_swrslave_reg_show._rs,"wcd938x_swrslave_reg_show");
                            if (iVar5 != 0) {
                                _printk(0x8000370,"wcd938x_swrslave_reg_show");
                            }
                            pcVar9 = 0xfffffffffffffff2;
                            break;
                        }
                        *arg4 = arg2_00 + *arg4;
                        pcVar9 = pcVar9 + arg2_00;
                    }
                    bVar4 = uVar11 < 0x2009;
                    uVar11 = uVar11 + 1;
                } while (bVar4);
            }
            *arg4 = 0x1806c;
        }
    }
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) == iStack_68) {
        return pcVar9;
    }
    uVar7 = __stack_chk_fail();
    *extraout_x18 = sym._copy_to_user;
    puVar1 = sp_el0;
    uVar3 = (uVar7 << 8) >> 8;
    if (((*(puVar1 + 0x3e) >> 5 & 1) != 0) || (uVar8 = uVar7, (*puVar1 >> 0x1a & 1) != 0)) {
        uVar8 = uVar7 & uVar3;
    }
    bVar4 = CARRY8(uVar8,arg3);
    pcVar9 = arg3 + uVar8;
    uVar8 = 0;
    if (!bVar4 || pcVar9 == NULL) {
        uVar8 = 0x7fffffffff;
    }
    if (bVar4) {
        pcVar9 = 0xffffffffffffffff;
    }
    if (!CARRY8(pcVar9,~uVar8) && !CARRY8(pcVar9 + ~uVar8,bVar4) || pcVar9 == uVar8 + !bVar4) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar8 = daif;
            if ((uVar8 & 0x80) == 0) {
                uVar2 = daif;
                daif = uVar2 | 0xc0;
            }
            uVar2 = ttbr1_el1;
            ttbr1_el1 = puVar1[1] & 0xffff000000000000 | uVar2 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar1[1];
            InstructionSynchronizationBarrier();
            daif = uVar8;
        }
        if ((uVar7 & uVar3 & 0xffffff8000000000) != 0) {
            uVar7 = 0;
        }
        arg3 = __arch_copy_to_user(uVar7);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar7 = daif;
                daif = uVar7 | 0xc0;
            }
            uVar7 = ttbr1_el1;
            ttbr0_el1 = (uVar7 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar7 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg3;
}


// ===== sym._copy_to_user @ 0x08001b98 (size 312) =====

int64_t sym._copy_to_user(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint64_t uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar2 = sp_el0;
    uVar3 = (arg1 << 8) >> 8;
    if (((*(puVar2 + 0x3e) >> 5 & 1) != 0) || (uVar5 = arg1, (*puVar2 >> 0x1a & 1) != 0)) {
        uVar5 = arg1 & uVar3;
    }
    bVar4 = CARRY8(uVar5,arg2);
    uVar5 = uVar5 + arg2;
    uVar1 = 0;
    if (!bVar4 || uVar5 == 0) {
        uVar1 = 0x7fffffffff;
    }
    if (bVar4) {
        uVar5 = 0xffffffffffffffff;
    }
    if (!CARRY8(uVar5,~uVar1) && !CARRY8(uVar5 + ~uVar1,bVar4) || uVar5 == uVar1 + !bVar4) {
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar5 = daif;
            if ((uVar5 & 0x80) == 0) {
                uVar1 = daif;
                daif = uVar1 | 0xc0;
            }
            uVar1 = ttbr1_el1;
            ttbr1_el1 = puVar2[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            ttbr0_el1 = puVar2[1];
            InstructionSynchronizationBarrier();
            daif = uVar5;
        }
        if ((arg1 & uVar3 & 0xffffff8000000000) != 0) {
            arg1 = 0;
        }
        arg2 = __arch_copy_to_user(arg1);
        if ((_devm_kmalloc >> 0x18 & 1) == 0) {
            uVar3 = daif;
            if ((uVar3 & 0x80) == 0) {
                uVar5 = daif;
                daif = uVar5 | 0xc0;
            }
            uVar5 = ttbr1_el1;
            ttbr0_el1 = (uVar5 & 0xffffffffffff) - 0x1000;
            InstructionSynchronizationBarrier();
            ttbr1_el1 = uVar5 & 0xffffffffffff;
            InstructionSynchronizationBarrier();
            daif = uVar3;
        }
    }
    return arg2;
}


// ===== sym.wcd938x_slave_bind @ 0x08001d0c (size 400) =====

void sym.wcd938x_slave_bind(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    ulong uVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    uchar auStack_2c [4];
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    auStack_2c[0] = 0;
    if ((arg1 == 0) || (iVar5 = arg1 + -0x48, iVar5 == 0)) {
        iVar2 = ___ratelimit(obj.wcd938x_slave_bind._rs,"wcd938x_slave_bind");
        if (iVar2 == 0) {
            uVar3 = 0xffffffea;
        }
        else {
            _printk(0x800041b,"wcd938x_slave_bind");
            uVar3 = 0xffffffea;
        }
    }
    else {
        usleep_range_state(100,0x6e,2);
        iVar2 = swr_get_logical_dev_num(iVar5,*(arg1 + 0x390),auStack_2c);
        bVar1 = iVar2 == 0;
        if (iVar2 != 0) {
            usleep_range_state(100,0x6e,2);
            iVar2 = swr_get_logical_dev_num(iVar5,*(arg1 + 0x390),auStack_2c);
            bVar1 = iVar2 == 0;
            if (iVar2 != 0) {
                usleep_range_state(100,0x6e,2);
                iVar2 = swr_get_logical_dev_num(iVar5,*(arg1 + 0x390),auStack_2c);
                bVar1 = iVar2 == 0;
                if (iVar2 != 0) {
                    usleep_range_state(100,0x6e,2);
                    iVar2 = swr_get_logical_dev_num(iVar5,*(arg1 + 0x390),auStack_2c);
                    bVar1 = iVar2 == 0;
                    if (iVar2 != 0) {
                        usleep_range_state(100,0x6e,2);
                        iVar2 = swr_get_logical_dev_num(iVar5,*(arg1 + 0x390),auStack_2c);
                        bVar1 = iVar2 == 0;
                    }
                }
            }
        }
        if (bVar1) {
            uVar3 = 0;
            *(arg1 + -8) = auStack_2c[0];
        }
        else {
            uVar3 = 0xfffffdfb;
        }
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_28) {
        return;
    }
    iVar4 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.wcd938x_slave_unbind;
    iVar5 = 0;
    if (iVar4 != 0) {
        iVar5 = iVar4 + -0x48;
    }
    if (((iVar5 == 0) || (*(iVar5 + 0xe0) == 0)) &&
       (iVar2 = ___ratelimit(obj.wcd938x_slave_unbind._rs,"wcd938x_slave_unbind"), iVar2 != 0)) {
        _dev_err(iVar5 + 0x48,"%s: wcd938x_slave is NULL\n","wcd938x_slave_unbind");
    }
    return;
}


// ===== sym.wcd938x_slave_unbind @ 0x08001e9c (size 116) =====

void sym.wcd938x_slave_unbind(uint32_t arg1)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = 0;
    if (arg1 != 0) {
        iVar1 = arg1 - 0x48;
    }
    if (((iVar1 == 0) || (*(iVar1 + 0xe0) == 0)) &&
       (iVar2 = ___ratelimit(obj.wcd938x_slave_unbind._rs,"wcd938x_slave_unbind"), iVar2 != 0)) {
        _dev_err(iVar1 + 0x48,"%s: wcd938x_slave is NULL\n","wcd938x_slave_unbind");
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001f10 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001f54

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
    //switch table (4 cases) at 0x8000348
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001f68);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001f74 (size 44) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_register(reloc.wcd938x_swr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.cleanup_module @ 0x08001fa0 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    swr_driver_unregister(reloc.wcd938x_swr_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

