// decompiled from ofpart by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x08001718

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x225264477cacae02) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
code_r0x0800109c:
            if (pcVar1 == pcVar2) {
                return;
            }
            goto code_r0x080016d8;
        }
        if (arg1 != 0x2236638f2b85595a) goto code_r0x080016d8;
        pcVar2 = sym.parse_fixed_partitions.cfede723b005f56ed3e0de7acc051d70.cfi_jt;
    }
    else {
        if (arg1 != 0x225264477cacae02) {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080016d8;
            pcVar2 = sym.cleanup_module.cfi_jt;
            goto code_r0x0800109c;
        }
        pcVar2 = sym.__typeid__ZTSFiP8mtd_infoP13mtd_partitioniE_global_addr;
    }
    if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
        return;
    }
code_r0x080016d8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800172c);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    deregister_mtd_parser(obj.ofpart_parser);
    deregister_mtd_parser(obj.ofoldpart_parser);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e0 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_mtd_parser(obj.ofpart_parser,obj.__this_module);
    __register_mtd_parser(obj.ofoldpart_parser,obj.__this_module);
    return 0;
}


// ===== sym.parse_fixed_partitions.cfede723b005f56ed3e0de7acc051d70.cfi_jt @ 0x080010e8 (size 8) =====

int sym.parse_fixed_partitions.cfede723b005f56ed3e0de7acc051d70.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uint32_t uVar1;
    uchar auVar2 [16];
    bool bVar3;
    int iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    int iVar13;
    int64_t *unaff_x19;
    int64_t *piVar14;
    int64_t unaff_x20;
    int64_t iVar15;
    int iVar16;
    int64_t *piVar17;
    code *pcVar18;
    code *pcVar19;
    int64_t unaff_x24;
    int64_t iVar20;
    ulong unaff_x30;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    pcVar18 = *(param_1 + 0x490);
    if (pcVar18 != NULL) {
        pcVar19 = pcVar18;
        if (*(param_1 + 0x568) == 0) {
            pcVar6 = of_get_child_by_name(pcVar18,"partitions");
            bVar3 = pcVar6 != NULL;
            if (bVar3) {
                pcVar19 = pcVar6;
            }
        }
        else {
            bVar3 = true;
        }
        iVar7 = of_match_node(obj.parse_ofpart_match_table,pcVar19);
        unaff_x19 = param_2;
        unaff_x20 = param_1;
        if ((!bVar3) || (iVar7 != 0)) {
            if (iVar7 == 0) {
                piVar17 = NULL;
            }
            else {
                piVar17 = *(iVar7 + 0xc0);
            }
            iVar7 = of_get_next_child(pcVar19,0);
            if (iVar7 != 0) {
                iVar16 = 0;
                do {
                    if ((bVar3) || (iVar8 = of_get_property(iVar7,"compatible",0), iVar8 == 0)) {
                        iVar16 = iVar16 + 1;
                    }
                    iVar7 = of_get_next_child(pcVar19,iVar7);
                } while (iVar7 != 0);
                unaff_x24 = 0;
                if (iVar16 != 0) {
                    auVar2._8_8_ = 0;
                    auVar2._0_8_ = iVar16;
                    if ((SUB168(auVar2 * ZEXT816(0x30),8) == 0) &&
                       (iVar7 = __kmalloc((iVar16 + iVar16 * 2) * 0x10,0xdc0), iVar7 != 0)) {
                        iVar8 = of_get_next_child(pcVar19,0);
                        if (iVar8 != 0) {
                            piVar14 = NULL;
                            iVar15 = 0x30;
                            do {
                                iStack_6c = 0;
                                if (bVar3) {
                                    puVar9 = of_get_property(iVar8,0x8000548,&iStack_6c);
                                    if (puVar9 != NULL) {
code_r0x080012f4:
                                        iVar4 = of_n_addr_cells(iVar8);
                                        iVar5 = of_n_size_cells(iVar8);
                                        iVar13 = iStack_6c + 3;
                                        if (-1 < iStack_6c) {
                                            iVar13 = iStack_6c;
                                        }
                                        if (iVar5 + iVar4 == iVar13 >> 2) {
                                            if (iVar4 == 0) {
                                                uVar12 = 0;
                                            }
                                            else {
                                                uVar12 = 0;
                                                puVar11 = puVar9;
                                                iVar13 = iVar4;
                                                do {
                                                    iVar13 = iVar13 + -1;
                                                    uVar1 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
                                                    uVar12 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar12 << 0x20;
                                                    puVar11 = puVar11 + 1;
                                                } while (iVar13 != 0);
                                            }
                                            iVar13 = piVar14;
                                            *(iVar7 + iVar13 * 0x30 + 0x18) = uVar12;
                                            if (iVar5 == 0) {
                                                uVar12 = 0;
                                            }
                                            else {
                                                uVar12 = 0;
                                                puVar9 = puVar9 + iVar4;
                                                do {
                                                    iVar5 = iVar5 + -1;
                                                    uVar1 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
                                                    uVar12 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar12 << 0x20;
                                                    puVar9 = puVar9 + 1;
                                                } while (iVar5 != 0);
                                            }
                                            iVar20 = iVar13;
                                            iVar10 = iVar7 + iVar20 * 0x30;
                                            *(iVar10 + 0x10) = uVar12;
                                            *(iVar10 + 0x28) = iVar8;
                                            iVar10 = of_get_property(iVar8,"label",&iStack_6c);
                                            if (iVar10 == 0) {
                                                iVar10 = of_get_property(iVar8,"name",&iStack_6c);
                                            }
                                            *(iVar7 + iVar20 * 0x30) = iVar10;
                                            iVar10 = of_get_property(iVar8,"read-only",&iStack_6c);
                                            if (iVar10 != 0) {
                                                iVar10 = iVar7 + iVar20 * 0x30;
                                                *(iVar10 + 0x20) = *(iVar10 + 0x20) | 0x400;
                                            }
                                            iVar10 = of_get_property(iVar8,"lock",&iStack_6c);
                                            if (iVar10 != 0) {
                                                iVar10 = iVar7 + iVar20 * 0x30;
                                                *(iVar10 + 0x20) = *(iVar10 + 0x20) | 0x2000;
                                            }
                                            iVar10 = of_find_property(iVar8,"slc-mode",0);
                                            if (iVar10 != 0) {
                                                iVar10 = iVar7 + iVar20 * 0x30;
                                                *(iVar10 + 0x24) = *(iVar10 + 0x24) | 0x4000;
                                            }
                                            piVar14 = iVar13 + 1;
                                            goto code_r0x080012bc;
                                        }
                                    }
                                    _printk(0x80004e5,*(param_1 + 0x38),iVar8,pcVar18);
                                    iVar16 = -0x16;
                                    goto code_r0x080014f4;
                                }
                                iVar10 = of_get_property(iVar8,"compatible",0);
                                if (iVar10 == 0) {
                                    puVar9 = of_get_property(iVar8,0x8000548,&iStack_6c);
                                    if (puVar9 != NULL) goto code_r0x080012f4;
                                    iVar16 = iVar16 + -1;
                                }
code_r0x080012bc:
                                iVar8 = of_get_next_child(pcVar19,iVar8);
                            } while (iVar8 != 0);
                            piVar14 = param_2;
                            iVar15 = param_1;
                            if (iVar16 == 0) {
code_r0x080014f4:
                                kfree(iVar7);
                                param_2 = piVar14;
                                param_1 = iVar15;
                                unaff_x24 = iVar7;
                                goto code_r0x08001224;
                            }
                        }
                        if (piVar17 == NULL) goto code_r0x080014cc;
                        pcVar18 = *piVar17;
                        if (pcVar18 == NULL) goto code_r0x080014cc;
                        if (1 < (pcVar18 + -0x80010f8 >> 3 | pcVar18 << 0x3d)) goto code_r0x08001504;
                        goto code_r0x080014bc;
                    }
                    iVar16 = -0xc;
                }
                goto code_r0x08001224;
            }
        }
    }
    param_1 = unaff_x20;
    param_2 = unaff_x19;
    iVar16 = 0;
code_r0x08001224:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        iVar7 = unaff_x24;
code_r0x08001504:
        __cfi_slowpath_diag(0x225264477cacae02,pcVar18,0x80000c0);
code_r0x080014bc:
        (*pcVar18)(param_1,iVar7,iVar16);
code_r0x080014cc:
        *param_2 = iVar7;
        unaff_x24 = iVar7;
    }
    return iVar16;
}


// ===== sym.parse_ofoldpart_partitions.cfede723b005f56ed3e0de7acc051d70.cfi_jt @ 0x080010f0 (size 8) =====

uchar * sym.parse_ofoldpart_partitions.cfede723b005f56ed3e0de7acc051d70.cfi_jt(int64_t param_1,int64_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    char *pcVar7;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint *puVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puVar8;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar11 = *(param_1 + 0x490);
    uStack_6c = 0;
    if ((iVar11 == 0) || (puVar5 = of_get_property(iVar11,"partitions",&uStack_6c), puVar5 == NULL)) {
        uVar10 = 0;
    }
    else {
        _printk(0x800049f,iVar11);
        uVar1 = uStack_6c;
        uVar12 = (uStack_6c << 0x20) >> 0x23;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar12;
        if (SUB168(auVar14 * ZEXT816(0x30),8) == 0) {
            uVar10 = uStack_6c >> 3;
            iVar6 = __kmalloc((uVar12 + uVar10 * 2) * 0x10,0xdc0);
            if (iVar6 != 0) {
                pcVar7 = of_get_property(iVar11,"partition-names",&uStack_6c);
                if (7 < uVar1) {
                    uVar1 = uVar10;
                    if (uVar10 < 2) {
                        uVar1 = 1;
                    }
                    uVar12 = uVar1;
                    puVar13 = iVar6 + 0x20;
                    do {
                        uVar2 = uStack_6c;
                        uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
                        *(puVar13 + -2) = uVar1 >> 0x10 | uVar1 << 0x10;
                        uVar1 = (puVar5[1] & 0xfe00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
                        *(puVar13 + -4) = uVar1 >> 0x10 | uVar1 << 0x10;
                        if ((*(puVar5 + 7) & 1) != 0) {
                            *puVar13 = 0x400;
                        }
                        pcVar9 = "unnamed";
                        if ((pcVar7 != NULL) && (0 < uStack_6c)) {
                            iVar4 = strlen(pcVar7);
                            uStack_6c = uVar2 - (iVar4 + 1);
                            pcVar9 = pcVar7;
                            pcVar7 = pcVar7 + (iVar4 + 1);
                        }
                        *(puVar13 + -8) = pcVar9;
                        uVar12 = uVar12 - 1;
                        puVar13 = puVar13 + 0xc;
                        puVar5 = puVar5 + 2;
                    } while (uVar12 != 0);
                }
                *param_2 = iVar6;
                goto code_r0x08001588;
            }
        }
        uVar10 = 0xfffffff4;
    }
code_r0x08001588:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        auVar14 = __stack_chk_fail();
        puVar8 = auVar14._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar14._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800172c);
        (*pcVar3)();
    }
    return uVar10;
}


// ===== sym.__typeid__ZTSFiP8mtd_infoP13mtd_partitioniE_global_addr @ 0x080010f8 (size 8) =====

ulong sym.__typeid__ZTSFiP8mtd_infoP13mtd_partitioniE_global_addr(void)

{
    return 0xffffffa1;
}


// ===== sym.linksys_ns_partitions_post_parse.cfede723b005f56ed3e0de7acc051d70.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.linksys_ns_partitions_post_parse.cfede723b005f56ed3e0de7acc051d70.cfi_jt(void)

{
    return 0xffffffa1;
}


// ===== sym.bcm4908_partitions_post_parse @ 0x08001108 (size 16) =====

ulong sym.bcm4908_partitions_post_parse(void)

{
    return 0xffffffa1;
}


// ===== sym.linksys_ns_partitions_post_parse @ 0x08001118 (size 16) =====

ulong sym.linksys_ns_partitions_post_parse(void)

{
    return 0xffffffa1;
}


// ===== sym.parse_fixed_partitions @ 0x08001128 (size 1024) =====

int sym.parse_fixed_partitions(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uchar auVar2 [16];
    bool bVar3;
    int iVar4;
    int iVar5;
    code *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    uint32_t *puVar11;
    uint64_t uVar12;
    ulong *in_x18;
    int iVar13;
    int64_t *unaff_x19;
    int64_t *piVar14;
    int64_t unaff_x20;
    int64_t iVar15;
    int iVar16;
    int64_t *piVar17;
    code *pcVar18;
    code *pcVar19;
    int64_t unaff_x24;
    int64_t iVar20;
    ulong unaff_x30;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_68 = *(iVar7 + 0x5e0);
    pcVar18 = *(arg1 + 0x490);
    if (pcVar18 != NULL) {
        pcVar19 = pcVar18;
        if (*(arg1 + 0x568) == 0) {
            pcVar6 = of_get_child_by_name(pcVar18,"partitions");
            bVar3 = pcVar6 != NULL;
            if (bVar3) {
                pcVar19 = pcVar6;
            }
        }
        else {
            bVar3 = true;
        }
        iVar7 = of_match_node(obj.parse_ofpart_match_table,pcVar19);
        unaff_x19 = arg2;
        unaff_x20 = arg1;
        if ((!bVar3) || (iVar7 != 0)) {
            if (iVar7 == 0) {
                piVar17 = NULL;
            }
            else {
                piVar17 = *(iVar7 + 0xc0);
            }
            iVar7 = of_get_next_child(pcVar19,0);
            if (iVar7 != 0) {
                iVar16 = 0;
                do {
                    if ((bVar3) || (iVar8 = of_get_property(iVar7,"compatible",0), iVar8 == 0)) {
                        iVar16 = iVar16 + 1;
                    }
                    iVar7 = of_get_next_child(pcVar19,iVar7);
                } while (iVar7 != 0);
                unaff_x24 = 0;
                if (iVar16 != 0) {
                    auVar2._8_8_ = 0;
                    auVar2._0_8_ = iVar16;
                    if ((SUB168(auVar2 * ZEXT816(0x30),8) == 0) &&
                       (iVar7 = __kmalloc((iVar16 + iVar16 * 2) * 0x10,0xdc0), iVar7 != 0)) {
                        iVar8 = of_get_next_child(pcVar19,0);
                        if (iVar8 != 0) {
                            piVar14 = NULL;
                            iVar15 = 0x30;
                            do {
                                iStack_6c = 0;
                                if (bVar3) {
                                    puVar9 = of_get_property(iVar8,0x8000548,&iStack_6c);
                                    if (puVar9 != NULL) {
code_r0x080012f4:
                                        iVar4 = of_n_addr_cells(iVar8);
                                        iVar5 = of_n_size_cells(iVar8);
                                        iVar13 = iStack_6c + 3;
                                        if (-1 < iStack_6c) {
                                            iVar13 = iStack_6c;
                                        }
                                        if (iVar5 + iVar4 == iVar13 >> 2) {
                                            if (iVar4 == 0) {
                                                uVar12 = 0;
                                            }
                                            else {
                                                uVar12 = 0;
                                                puVar11 = puVar9;
                                                iVar13 = iVar4;
                                                do {
                                                    iVar13 = iVar13 + -1;
                                                    uVar1 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
                                                    uVar12 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar12 << 0x20;
                                                    puVar11 = puVar11 + 1;
                                                } while (iVar13 != 0);
                                            }
                                            iVar13 = piVar14;
                                            *(iVar7 + iVar13 * 0x30 + 0x18) = uVar12;
                                            if (iVar5 == 0) {
                                                uVar12 = 0;
                                            }
                                            else {
                                                uVar12 = 0;
                                                puVar9 = puVar9 + iVar4;
                                                do {
                                                    iVar5 = iVar5 + -1;
                                                    uVar1 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
                                                    uVar12 = uVar1 >> 0x10 | uVar1 << 0x10 | uVar12 << 0x20;
                                                    puVar9 = puVar9 + 1;
                                                } while (iVar5 != 0);
                                            }
                                            iVar20 = iVar13;
                                            iVar10 = iVar7 + iVar20 * 0x30;
                                            *(iVar10 + 0x10) = uVar12;
                                            *(iVar10 + 0x28) = iVar8;
                                            iVar10 = of_get_property(iVar8,"label",&iStack_6c);
                                            if (iVar10 == 0) {
                                                iVar10 = of_get_property(iVar8,"name",&iStack_6c);
                                            }
                                            *(iVar7 + iVar20 * 0x30) = iVar10;
                                            iVar10 = of_get_property(iVar8,"read-only",&iStack_6c);
                                            if (iVar10 != 0) {
                                                iVar10 = iVar7 + iVar20 * 0x30;
                                                *(iVar10 + 0x20) = *(iVar10 + 0x20) | 0x400;
                                            }
                                            iVar10 = of_get_property(iVar8,"lock",&iStack_6c);
                                            if (iVar10 != 0) {
                                                iVar10 = iVar7 + iVar20 * 0x30;
                                                *(iVar10 + 0x20) = *(iVar10 + 0x20) | 0x2000;
                                            }
                                            iVar10 = of_find_property(iVar8,"slc-mode",0);
                                            if (iVar10 != 0) {
                                                iVar10 = iVar7 + iVar20 * 0x30;
                                                *(iVar10 + 0x24) = *(iVar10 + 0x24) | 0x4000;
                                            }
                                            piVar14 = iVar13 + 1;
                                            goto code_r0x080012bc;
                                        }
                                    }
                                    _printk(0x80004e5,*(arg1 + 0x38),iVar8,pcVar18);
                                    iVar16 = -0x16;
                                    goto code_r0x080014f4;
                                }
                                iVar10 = of_get_property(iVar8,"compatible",0);
                                if (iVar10 == 0) {
                                    puVar9 = of_get_property(iVar8,0x8000548,&iStack_6c);
                                    if (puVar9 != NULL) goto code_r0x080012f4;
                                    iVar16 = iVar16 + -1;
                                }
code_r0x080012bc:
                                iVar8 = of_get_next_child(pcVar19,iVar8);
                            } while (iVar8 != 0);
                            piVar14 = arg2;
                            iVar15 = arg1;
                            if (iVar16 == 0) {
code_r0x080014f4:
                                kfree(iVar7);
                                arg2 = piVar14;
                                arg1 = iVar15;
                                unaff_x24 = iVar7;
                                goto code_r0x08001224;
                            }
                        }
                        if (piVar17 == NULL) goto code_r0x080014cc;
                        pcVar18 = *piVar17;
                        if (pcVar18 == NULL) goto code_r0x080014cc;
                        if (1 < (pcVar18 + -0x80010f8 >> 3 | pcVar18 << 0x3d)) goto code_r0x08001504;
                        goto code_r0x080014bc;
                    }
                    iVar16 = -0xc;
                }
                goto code_r0x08001224;
            }
        }
    }
    arg1 = unaff_x20;
    arg2 = unaff_x19;
    iVar16 = 0;
code_r0x08001224:
    while (iVar7 = sp_el0, *(iVar7 + 0x5e0) != iStack_68) {
        __stack_chk_fail();
        iVar7 = unaff_x24;
code_r0x08001504:
        __cfi_slowpath_diag(0x225264477cacae02,pcVar18,0x80000c0);
code_r0x080014bc:
        (*pcVar18)(arg1,iVar7,iVar16);
code_r0x080014cc:
        *arg2 = iVar7;
        unaff_x24 = iVar7;
    }
    return iVar16;
}


// ===== sym.parse_ofoldpart_partitions @ 0x08001528 (size 428) =====

uchar * sym.parse_ofoldpart_partitions(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    code *pcVar3;
    int iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    char *pcVar7;
    char *pcVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint *puVar13;
    ulong unaff_x30;
    uchar auVar14 [16];
    uint32_t uStack_6c;
    int64_t iStack_68;
    uchar *puVar8;
    
    *in_x18 = unaff_x30;
    iVar11 = sp_el0;
    iStack_68 = *(iVar11 + 0x5e0);
    iVar11 = *(arg1 + 0x490);
    uStack_6c = 0;
    if ((iVar11 == 0) || (puVar5 = of_get_property(iVar11,"partitions",&uStack_6c), puVar5 == NULL)) {
        uVar10 = 0;
    }
    else {
        _printk(0x800049f,iVar11);
        uVar1 = uStack_6c;
        uVar12 = (uStack_6c << 0x20) >> 0x23;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar12;
        if (SUB168(auVar14 * ZEXT816(0x30),8) == 0) {
            uVar10 = uStack_6c >> 3;
            iVar6 = __kmalloc((uVar12 + uVar10 * 2) * 0x10,0xdc0);
            if (iVar6 != 0) {
                pcVar7 = of_get_property(iVar11,"partition-names",&uStack_6c);
                if (7 < uVar1) {
                    uVar1 = uVar10;
                    if (uVar10 < 2) {
                        uVar1 = 1;
                    }
                    uVar12 = uVar1;
                    puVar13 = iVar6 + 0x20;
                    do {
                        uVar2 = uStack_6c;
                        uVar1 = (*puVar5 & 0xff00ff00) >> 8 | (*puVar5 & 0xff00ff) << 8;
                        *(puVar13 + -2) = uVar1 >> 0x10 | uVar1 << 0x10;
                        uVar1 = (puVar5[1] & 0xfe00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
                        *(puVar13 + -4) = uVar1 >> 0x10 | uVar1 << 0x10;
                        if ((*(puVar5 + 7) & 1) != 0) {
                            *puVar13 = 0x400;
                        }
                        pcVar9 = "unnamed";
                        if ((pcVar7 != NULL) && (0 < uStack_6c)) {
                            iVar4 = strlen(pcVar7);
                            uStack_6c = uVar2 - (iVar4 + 1);
                            pcVar9 = pcVar7;
                            pcVar7 = pcVar7 + (iVar4 + 1);
                        }
                        *(puVar13 + -8) = pcVar9;
                        uVar12 = uVar12 - 1;
                        puVar13 = puVar13 + 0xc;
                        puVar5 = puVar5 + 2;
                    } while (uVar12 != 0);
                }
                *arg2 = iVar6;
                goto code_r0x08001588;
            }
        }
        uVar10 = 0xfffffff4;
    }
code_r0x08001588:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_68) {
        auVar14 = __stack_chk_fail();
        puVar8 = auVar14._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar14._8_8_,0);
                break;
            default:
                return puVar8;
            }
        }
    //WARNING: Does not return
        pcVar3 = SoftwareBreakpoint(0x5502,0x800172c);
        (*pcVar3)();
    }
    return uVar10;
}


// ===== sym.__cfi_check_fail @ 0x080016d4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001718

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
    //switch table (4 cases) at 0x80000e0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800172c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001734 (size 84) =====

ulong sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __register_mtd_parser(obj.ofpart_parser,obj.__this_module);
    __register_mtd_parser(obj.ofoldpart_parser,obj.__this_module);
    return 0;
}


// ===== sym.cleanup_module @ 0x08001788 (size 56) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    deregister_mtd_parser(obj.ofpart_parser);
    deregister_mtd_parser(obj.ofoldpart_parser);
    return;
}

