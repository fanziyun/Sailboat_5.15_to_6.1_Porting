// decompiled from debug_symbol by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 112) =====

//WARNING: Switch with 1 destination removed at 0x0800136c

void sym.__cfi_check(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 == 0xcf581db2cc6ab284) {
        if (pcVar1 == sym.debug_symbol_lookup_name.cfi_jt) {
            return;
        }
    }
    else if ((arg1 == 0x2b3a43e29242445) && ((pcVar1 + -0x8001078 >> 3 | pcVar1 << 0x3d) < 2)) {
        return;
    }
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001380);
    (*pcVar1)();
}


// ===== sym.init_module.cfi_jt @ 0x08001078 (size 8) =====

ulong sym.init_module.cfi_jt(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_compatible_node(0,0,"");
    if (iVar1 == 0) {
        uVar3 = 0x80000df;
    }
    else {
        iVar1 = of_parse_phandle(iVar1,"",0);
        if (iVar1 == 0) {
            uVar3 = 0x800010a;
        }
        else {
            iVar1 = of_reserved_mem_lookup();
            if (iVar1 == 0) {
                uVar3 = 0x8000073;
            }
            else {
                iVar2 = memremap(*(iVar1 + 0x20),*(iVar1 + 0x28),1);
                if (iVar2 != 0) {
                    _segment.ehdr = iVar2;
                    memset(iVar2,0,0x1e4);
                    *(iVar1 + 0x30) = iVar2;
                    return 0;
                }
                uVar3 = 0x80000b1;
                _segment.ehdr = 0;
            }
        }
    }
    _printk(uVar3);
    return 0;
}


// ===== sym.debug_symbol_avaliable.cfi_jt @ 0x08001080 (size 8) =====

ulong sym.debug_symbol_avaliable.cfi_jt(void)

{
    if (_segment.ehdr == NULL) {
        return 0xffffffea;
    }
    if (*_segment.ehdr == -0x33112201) {
        if (_segment.ehdr != NULL) {
            return 0;
        }
        _segment.ehdr = *0x68 + _kimage_voffset;
        return 0;
    }
    return 0xfffffdfb;
}


// ===== sym.debug_symbol_lookup_name.cfi_jt @ 0x08001088 (size 8) =====

void sym.debug_symbol_lookup_name.cfi_jt(char *param_1)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uchar *puVar8;
    char *pcVar9;
    char *pcVar10;
    uint64_t uVar11;
    uint8_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    char *pcVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    char acStack_d8 [128];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = 0;
    acStack_d8[0x70] = '\0';
    acStack_d8[0x71] = '\0';
    acStack_d8[0x72] = '\0';
    acStack_d8[0x73] = '\0';
    acStack_d8[0x74] = '\0';
    acStack_d8[0x75] = '\0';
    acStack_d8[0x76] = '\0';
    acStack_d8[0x77] = '\0';
    acStack_d8[0x78] = '\0';
    acStack_d8[0x79] = '\0';
    acStack_d8[0x7a] = '\0';
    acStack_d8[0x7b] = '\0';
    acStack_d8[0x7c] = '\0';
    acStack_d8[0x7d] = '\0';
    acStack_d8[0x7e] = '\0';
    acStack_d8[0x7f] = '\0';
    acStack_d8[0x60] = '\0';
    acStack_d8[0x61] = '\0';
    acStack_d8[0x62] = '\0';
    acStack_d8[99] = '\0';
    acStack_d8[100] = '\0';
    acStack_d8[0x65] = '\0';
    acStack_d8[0x66] = '\0';
    acStack_d8[0x67] = '\0';
    acStack_d8[0x68] = '\0';
    acStack_d8[0x69] = '\0';
    acStack_d8[0x6a] = '\0';
    acStack_d8[0x6b] = '\0';
    acStack_d8[0x6c] = '\0';
    acStack_d8[0x6d] = '\0';
    acStack_d8[0x6e] = '\0';
    acStack_d8[0x6f] = '\0';
    acStack_d8[0x50] = '\0';
    acStack_d8[0x51] = '\0';
    acStack_d8[0x52] = '\0';
    acStack_d8[0x53] = '\0';
    acStack_d8[0x54] = '\0';
    acStack_d8[0x55] = '\0';
    acStack_d8[0x56] = '\0';
    acStack_d8[0x57] = '\0';
    acStack_d8[0x58] = '\0';
    acStack_d8[0x59] = '\0';
    acStack_d8[0x5a] = '\0';
    acStack_d8[0x5b] = '\0';
    acStack_d8[0x5c] = '\0';
    acStack_d8[0x5d] = '\0';
    acStack_d8[0x5e] = '\0';
    acStack_d8[0x5f] = '\0';
    acStack_d8[0x40] = '\0';
    acStack_d8[0x41] = '\0';
    acStack_d8[0x42] = '\0';
    acStack_d8[0x43] = '\0';
    acStack_d8[0x44] = '\0';
    acStack_d8[0x45] = '\0';
    acStack_d8[0x46] = '\0';
    acStack_d8[0x47] = '\0';
    acStack_d8[0x48] = '\0';
    acStack_d8[0x49] = '\0';
    acStack_d8[0x4a] = '\0';
    acStack_d8[0x4b] = '\0';
    acStack_d8[0x4c] = '\0';
    acStack_d8[0x4d] = '\0';
    acStack_d8[0x4e] = '\0';
    acStack_d8[0x4f] = '\0';
    acStack_d8[0x30] = '\0';
    acStack_d8[0x31] = '\0';
    acStack_d8[0x32] = '\0';
    acStack_d8[0x33] = '\0';
    acStack_d8[0x34] = '\0';
    acStack_d8[0x35] = '\0';
    acStack_d8[0x36] = '\0';
    acStack_d8[0x37] = '\0';
    acStack_d8[0x38] = '\0';
    acStack_d8[0x39] = '\0';
    acStack_d8[0x3a] = '\0';
    acStack_d8[0x3b] = '\0';
    acStack_d8[0x3c] = '\0';
    acStack_d8[0x3d] = '\0';
    acStack_d8[0x3e] = '\0';
    acStack_d8[0x3f] = '\0';
    acStack_d8[0x20] = '\0';
    acStack_d8[0x21] = '\0';
    acStack_d8[0x22] = '\0';
    acStack_d8[0x23] = '\0';
    acStack_d8[0x24] = '\0';
    acStack_d8[0x25] = '\0';
    acStack_d8[0x26] = '\0';
    acStack_d8[0x27] = '\0';
    acStack_d8[0x28] = '\0';
    acStack_d8[0x29] = '\0';
    acStack_d8[0x2a] = '\0';
    acStack_d8[0x2b] = '\0';
    acStack_d8[0x2c] = '\0';
    acStack_d8[0x2d] = '\0';
    acStack_d8[0x2e] = '\0';
    acStack_d8[0x2f] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    acStack_d8[0x18] = '\0';
    acStack_d8[0x19] = '\0';
    acStack_d8[0x1a] = '\0';
    acStack_d8[0x1b] = '\0';
    acStack_d8[0x1c] = '\0';
    acStack_d8[0x1d] = '\0';
    acStack_d8[0x1e] = '\0';
    acStack_d8[0x1f] = '\0';
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    if ((*param_1 != '\0') && (_segment.ehdr != 0)) {
        uVar17 = 0;
        uVar16 = 0;
        do {
            puVar12 = CONCAT44(*0x8000004,_segment.ehdr) + uVar17;
            uVar1 = *puVar12;
            uVar18 = uVar1;
            if (uVar18 == 0) {
                pcVar10 = acStack_d8;
code_r0x08001288:
                *pcVar10 = '\0';
            }
            else {
                bVar4 = false;
                uVar11 = 0;
                pcVar10 = acStack_d8;
                uVar13 = 0x80;
                do {
                    puVar12 = puVar12 + 1;
                    uVar14 = *(CONCAT44(*0x8000004,_segment.ehdr) + *puVar12 * 2);
                    cVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14);
                    if (cVar2 != '\0') {
                        pcVar9 = pcVar10;
                        pcVar15 = CONCAT44(*0x8000004,_segment.ehdr) + 1 + uVar14;
                        do {
                            pcVar10 = pcVar9;
                            if (bVar4) {
                                if (uVar13 < 2) goto code_r0x08001274;
                                if (0x7f < uVar11) goto code_r0x08001320;
                                uVar11 = uVar11 + 1;
                                uVar13 = uVar13 - 1;
                                pcVar10 = pcVar9 + 1;
                                *pcVar9 = cVar2;
                            }
                            cVar2 = *pcVar15;
                            bVar4 = true;
                            pcVar9 = pcVar10;
                            pcVar15 = pcVar15 + 1;
                        } while (cVar2 != '\0');
                    }
                    uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
code_r0x08001274:
                if (uVar13 != 0) {
                    if (0x7f < uVar11) {
code_r0x08001320:
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(1,0x8001324);
                        (*pcVar5)();
                    }
                    goto code_r0x08001288;
                }
            }
            iVar6 = strcmp(acStack_d8,param_1);
            if (iVar6 == 0) {
code_r0x080012c4:
                iVar7 = CONCAT44(*0x8000004,_segment.ehdr) +
                        *(CONCAT44(*0x8000004,_segment.ehdr) +
                         (-(uVar16 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar16 & 0xffffffff) << 2));
                goto code_r0x080012e8;
            }
            puVar8 = strnchr(acStack_d8,0x80,0x2e);
            if (puVar8 != NULL) {
                *puVar8 = 0;
                iVar6 = strcmp(acStack_d8,param_1);
                if (iVar6 == 0) goto code_r0x080012c4;
            }
            uVar17 = uVar17 + uVar1 + 1;
            uVar16 = uVar16 + 1;
        } while (uVar16 < _segment.ehdr);
        iVar7 = 0;
    }
code_r0x080012e8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_58) {
        auVar19 = __stack_chk_fail(iVar7);
        puVar8 = auVar19._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar19._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8001380);
        (*pcVar5)();
    }
    return;
}


// ===== sym.debug_symbol_avaliable @ 0x08001090 (size 196) =====

ulong sym.debug_symbol_avaliable(int64_t arg1)

{
    if (_segment.ehdr == NULL) {
        return 0xffffffea;
    }
    if (*_segment.ehdr == -0x33112201) {
        if (_segment.ehdr != NULL) {
            return 0;
        }
        _segment.ehdr = *0x68 + _kimage_voffset;
        return 0;
    }
    return 0xfffffdfb;
}


// ===== sym.debug_symbol_lookup_name @ 0x08001154 (size 468) =====

void sym.debug_symbol_lookup_name(int64_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    bool bVar4;
    code *pcVar5;
    int iVar6;
    int64_t iVar7;
    uchar *puVar8;
    char *pcVar9;
    char *pcVar10;
    uint64_t uVar11;
    uint8_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    char *pcVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    char acStack_d8 [128];
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar7 = 0;
    acStack_d8[0x70] = '\0';
    acStack_d8[0x71] = '\0';
    acStack_d8[0x72] = '\0';
    acStack_d8[0x73] = '\0';
    acStack_d8[0x74] = '\0';
    acStack_d8[0x75] = '\0';
    acStack_d8[0x76] = '\0';
    acStack_d8[0x77] = '\0';
    acStack_d8[0x78] = '\0';
    acStack_d8[0x79] = '\0';
    acStack_d8[0x7a] = '\0';
    acStack_d8[0x7b] = '\0';
    acStack_d8[0x7c] = '\0';
    acStack_d8[0x7d] = '\0';
    acStack_d8[0x7e] = '\0';
    acStack_d8[0x7f] = '\0';
    acStack_d8[0x60] = '\0';
    acStack_d8[0x61] = '\0';
    acStack_d8[0x62] = '\0';
    acStack_d8[99] = '\0';
    acStack_d8[100] = '\0';
    acStack_d8[0x65] = '\0';
    acStack_d8[0x66] = '\0';
    acStack_d8[0x67] = '\0';
    acStack_d8[0x68] = '\0';
    acStack_d8[0x69] = '\0';
    acStack_d8[0x6a] = '\0';
    acStack_d8[0x6b] = '\0';
    acStack_d8[0x6c] = '\0';
    acStack_d8[0x6d] = '\0';
    acStack_d8[0x6e] = '\0';
    acStack_d8[0x6f] = '\0';
    acStack_d8[0x50] = '\0';
    acStack_d8[0x51] = '\0';
    acStack_d8[0x52] = '\0';
    acStack_d8[0x53] = '\0';
    acStack_d8[0x54] = '\0';
    acStack_d8[0x55] = '\0';
    acStack_d8[0x56] = '\0';
    acStack_d8[0x57] = '\0';
    acStack_d8[0x58] = '\0';
    acStack_d8[0x59] = '\0';
    acStack_d8[0x5a] = '\0';
    acStack_d8[0x5b] = '\0';
    acStack_d8[0x5c] = '\0';
    acStack_d8[0x5d] = '\0';
    acStack_d8[0x5e] = '\0';
    acStack_d8[0x5f] = '\0';
    acStack_d8[0x40] = '\0';
    acStack_d8[0x41] = '\0';
    acStack_d8[0x42] = '\0';
    acStack_d8[0x43] = '\0';
    acStack_d8[0x44] = '\0';
    acStack_d8[0x45] = '\0';
    acStack_d8[0x46] = '\0';
    acStack_d8[0x47] = '\0';
    acStack_d8[0x48] = '\0';
    acStack_d8[0x49] = '\0';
    acStack_d8[0x4a] = '\0';
    acStack_d8[0x4b] = '\0';
    acStack_d8[0x4c] = '\0';
    acStack_d8[0x4d] = '\0';
    acStack_d8[0x4e] = '\0';
    acStack_d8[0x4f] = '\0';
    acStack_d8[0x30] = '\0';
    acStack_d8[0x31] = '\0';
    acStack_d8[0x32] = '\0';
    acStack_d8[0x33] = '\0';
    acStack_d8[0x34] = '\0';
    acStack_d8[0x35] = '\0';
    acStack_d8[0x36] = '\0';
    acStack_d8[0x37] = '\0';
    acStack_d8[0x38] = '\0';
    acStack_d8[0x39] = '\0';
    acStack_d8[0x3a] = '\0';
    acStack_d8[0x3b] = '\0';
    acStack_d8[0x3c] = '\0';
    acStack_d8[0x3d] = '\0';
    acStack_d8[0x3e] = '\0';
    acStack_d8[0x3f] = '\0';
    acStack_d8[0x20] = '\0';
    acStack_d8[0x21] = '\0';
    acStack_d8[0x22] = '\0';
    acStack_d8[0x23] = '\0';
    acStack_d8[0x24] = '\0';
    acStack_d8[0x25] = '\0';
    acStack_d8[0x26] = '\0';
    acStack_d8[0x27] = '\0';
    acStack_d8[0x28] = '\0';
    acStack_d8[0x29] = '\0';
    acStack_d8[0x2a] = '\0';
    acStack_d8[0x2b] = '\0';
    acStack_d8[0x2c] = '\0';
    acStack_d8[0x2d] = '\0';
    acStack_d8[0x2e] = '\0';
    acStack_d8[0x2f] = '\0';
    acStack_d8[0x10] = '\0';
    acStack_d8[0x11] = '\0';
    acStack_d8[0x12] = '\0';
    acStack_d8[0x13] = '\0';
    acStack_d8[0x14] = '\0';
    acStack_d8[0x15] = '\0';
    acStack_d8[0x16] = '\0';
    acStack_d8[0x17] = '\0';
    acStack_d8[0x18] = '\0';
    acStack_d8[0x19] = '\0';
    acStack_d8[0x1a] = '\0';
    acStack_d8[0x1b] = '\0';
    acStack_d8[0x1c] = '\0';
    acStack_d8[0x1d] = '\0';
    acStack_d8[0x1e] = '\0';
    acStack_d8[0x1f] = '\0';
    acStack_d8[0] = '\0';
    acStack_d8[1] = '\0';
    acStack_d8[2] = '\0';
    acStack_d8[3] = '\0';
    acStack_d8[4] = '\0';
    acStack_d8[5] = '\0';
    acStack_d8[6] = '\0';
    acStack_d8[7] = '\0';
    acStack_d8[8] = '\0';
    acStack_d8[9] = '\0';
    acStack_d8[10] = '\0';
    acStack_d8[0xb] = '\0';
    acStack_d8[0xc] = '\0';
    acStack_d8[0xd] = '\0';
    acStack_d8[0xe] = '\0';
    acStack_d8[0xf] = '\0';
    if ((*arg1 != '\0') && (_segment.ehdr != 0)) {
        uVar17 = 0;
        uVar16 = 0;
        do {
            puVar12 = CONCAT44(*0x8000004,_segment.ehdr) + uVar17;
            uVar1 = *puVar12;
            uVar18 = uVar1;
            if (uVar18 == 0) {
                pcVar10 = acStack_d8;
code_r0x08001288:
                *pcVar10 = '\0';
            }
            else {
                bVar4 = false;
                uVar11 = 0;
                pcVar10 = acStack_d8;
                uVar13 = 0x80;
                do {
                    puVar12 = puVar12 + 1;
                    uVar14 = *(CONCAT44(*0x8000004,_segment.ehdr) + *puVar12 * 2);
                    cVar2 = *(CONCAT44(*0x8000004,_segment.ehdr) + uVar14);
                    if (cVar2 != '\0') {
                        pcVar9 = pcVar10;
                        pcVar15 = CONCAT44(*0x8000004,_segment.ehdr) + 1 + uVar14;
                        do {
                            pcVar10 = pcVar9;
                            if (bVar4) {
                                if (uVar13 < 2) goto code_r0x08001274;
                                if (0x7f < uVar11) goto code_r0x08001320;
                                uVar11 = uVar11 + 1;
                                uVar13 = uVar13 - 1;
                                pcVar10 = pcVar9 + 1;
                                *pcVar9 = cVar2;
                            }
                            cVar2 = *pcVar15;
                            bVar4 = true;
                            pcVar9 = pcVar10;
                            pcVar15 = pcVar15 + 1;
                        } while (cVar2 != '\0');
                    }
                    uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
code_r0x08001274:
                if (uVar13 != 0) {
                    if (0x7f < uVar11) {
code_r0x08001320:
    //WARNING: Does not return
                        pcVar5 = SoftwareBreakpoint(1,0x8001324);
                        (*pcVar5)();
                    }
                    goto code_r0x08001288;
                }
            }
            iVar6 = strcmp(acStack_d8,arg1);
            if (iVar6 == 0) {
code_r0x080012c4:
                iVar7 = CONCAT44(*0x8000004,_segment.ehdr) +
                        *(CONCAT44(*0x8000004,_segment.ehdr) +
                         (-(uVar16 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar16 & 0xffffffff) << 2));
                goto code_r0x080012e8;
            }
            puVar8 = strnchr(acStack_d8,0x80,0x2e);
            if (puVar8 != NULL) {
                *puVar8 = 0;
                iVar6 = strcmp(acStack_d8,arg1);
                if (iVar6 == 0) goto code_r0x080012c4;
            }
            uVar17 = uVar17 + uVar1 + 1;
            uVar16 = uVar16 + 1;
        } while (uVar16 < _segment.ehdr);
        iVar7 = 0;
    }
code_r0x080012e8:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) != iStack_58) {
        auVar19 = __stack_chk_fail(iVar7);
        puVar8 = auVar19._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar8 != NULL) {
            switch(*puVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar8,auVar19._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar5 = SoftwareBreakpoint(0x5502,0x8001380);
        (*pcVar5)();
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001328 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800136c

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
    //switch table (4 cases) at 0x8000060
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001380);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080013b4 (size 200) =====

ulong sym.init_module(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = of_find_compatible_node(0,0,"");
    if (iVar1 == 0) {
        uVar3 = 0x80000df;
    }
    else {
        iVar1 = of_parse_phandle(iVar1,"",0);
        if (iVar1 == 0) {
            uVar3 = 0x800010a;
        }
        else {
            iVar1 = of_reserved_mem_lookup();
            if (iVar1 == 0) {
                uVar3 = 0x8000073;
            }
            else {
                iVar2 = memremap(*(iVar1 + 0x20),*(iVar1 + 0x28),1);
                if (iVar2 != 0) {
                    _segment.ehdr = iVar2;
                    memset(iVar2,0,0x1e4);
                    *(iVar1 + 0x30) = iVar2;
                    return 0;
                }
                uVar3 = 0x80000b1;
                _segment.ehdr = 0;
            }
        }
    }
    _printk(uVar3);
    return 0;
}

