// decompiled from mdt_loader by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 244) =====

//WARNING: Switch with 1 destination removed at 0x08001b6c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x729d0e74e82d938) {
        if (arg1 == -0xe7e23c2e341d840) {
            pcVar2 = sym.qcom_mdt_get_size.cfi_jt;
        }
        else {
            if (arg1 != -0xae746e4ffe68e90) goto code_r0x08001b2c;
            pcVar2 = sym.qcom_mdt_free_metadata.cfi_jt;
        }
    }
    else if (arg1 == -0x729d0e74e82d938) {
        pcVar2 = sym.qcom_mdt_load_no_free.cfi_jt;
    }
    else {
        if (arg1 == 0x3993298f907c9b86) {
            if ((pcVar1 + -0x8001110 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001b2c;
        }
        if (arg1 != 0x647aa65d4738ce43) goto code_r0x08001b2c;
        pcVar2 = sym.qcom_mdt_read_metadata.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001b2c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b80);
    (*pcVar1)();
}


// ===== sym.qcom_mdt_read_metadata.cfi_jt @ 0x08001100 (size 8) =====

int64_t * sym.qcom_mdt_read_metadata.cfi_jt
                    (int64_t *param_1,uint64_t *param_2,int64_t *param_3,int64_t *param_4,uint64_t param_5,
                    int64_t *param_6)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int *piVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    int64_t *piVar15;
    int64_t *piVar16;
    uint32_t *puVar17;
    uint64_t uVar18;
    ulong unaff_x30;
    uchar auVar19 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_68 = *(iVar4 + 0x5e0);
    uVar8 = param_2[1];
    uStack_70 = 0;
    piVar7 = param_3;
    piVar6 = param_4;
    if ((1 < *(uVar8 + 0x2c)) && (*(uVar8 + 0x34) != 1)) {
        puVar17 = uVar8 + 0x6c;
        uVar18 = 1;
        do {
            if ((puVar17[-6] != 1) && ((*puVar17 & 0x7000000) == 0x2000000)) {
                piVar16 = *(uVar8 + 0x44);
                piVar15 = puVar17[-2];
                if (param_6 == NULL) {
                    piVar14 = __kmalloc(piVar15 + piVar16,0xcc0);
code_r0x080012f0:
                    piVar9 = NULL;
                }
                else {
                    if ((param_5 & 1) != 0) {
                        piVar6 = 0xcc0;
                        piVar7 = param_6;
                        piVar14 = dma_alloc_attrs(param_1,piVar15 + piVar16,param_6,0xcc0,0);
                        goto code_r0x080012f0;
                    }
                    piVar9 = qcom_get_scm_device();
                    if (piVar9 == NULL) {
                        piVar14 = 0xfffffffffffffdfb;
                        goto code_r0x0800121c;
                    }
                    piVar6 = 0xcc0;
                    piVar7 = param_6;
                    piVar14 = dma_alloc_attrs(piVar9,piVar15 + piVar16,param_6,0xcc0,0);
                }
                if (piVar14 == NULL) {
                    piVar14 = 0xfffffffffffffff4;
                    goto code_r0x0800121c;
                }
                piVar7 = piVar16;
                memcpy(piVar14,param_2[1]);
                uVar8 = param_2[1];
                uVar10 = *(uVar8 + 0x2c);
                if (uVar10 == 0) goto code_r0x0800141c;
                uVar11 = *param_2;
                if ((uVar11 < *(uVar8 + 0x38)) || (uVar11 < *(uVar8 + 0x44) + *(uVar8 + 0x38))) goto code_r0x08001378;
                piVar12 = uVar8 + 100;
                uVar2 = 1;
                goto code_r0x08001344;
            }
            uVar18 = uVar18 + 1;
            puVar17 = puVar17 + 8;
        } while (*(uVar8 + 0x2c) != uVar18);
    }
    piVar14 = 0xffffffffffffffea;
    goto code_r0x0800121c;
    while( true ) {
        iVar3 = *piVar12;
        piVar12 = piVar12 + 8;
        uVar2 = uVar13 + 1;
        if (uVar11 < iVar3 + *puVar1) break;
code_r0x08001344:
        uVar13 = uVar2;
        if ((uVar10 == uVar13) || (puVar1 = piVar12 + -3, uVar11 < *puVar1)) break;
    }
    if (uVar13 < uVar10) {
code_r0x08001378:
        iVar4 = kstrdup(param_3,0xcc0);
        if (iVar4 == 0) {
            iVar3 = -0xc;
        }
        else {
            iVar5 = strlen();
            snprintf(iVar4 + iVar5 + -3,4,"b%02d",uVar18);
            piVar6 = piVar14 + piVar16;
            piVar7 = param_1;
            iVar3 = request_firmware_into_buf(&uStack_70,iVar4,param_1,piVar6,piVar15);
            kfree(iVar4);
            if (iVar3 == 0) {
                release_firmware(uStack_70);
                goto code_r0x08001434;
            }
        }
        if (param_6 == NULL) {
            kfree(piVar14);
        }
        else {
            piVar6 = *param_6;
            if ((param_5 & 1) != 0) {
                piVar9 = param_1;
            }
            dma_free_attrs(piVar9,piVar15 + piVar16,piVar14,piVar6,0);
            piVar7 = piVar14;
        }
        piVar14 = iVar3;
    }
    else {
code_r0x0800141c:
        piVar7 = piVar15;
        memcpy(piVar14 + piVar16,uVar8 + puVar17[-5]);
code_r0x08001434:
        *param_4 = piVar15 + piVar16;
    }
code_r0x0800121c:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return piVar14;
    }
    auVar19 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_mdt_load;
    piVar6 = sym.__qcom_mdt_load(auVar19._0_8_,auVar19._8_8_,piVar7,piVar6);
    return piVar6;
}


// ===== sym.qcom_mdt_free_metadata.cfi_jt @ 0x08001108 (size 8) =====

void sym.qcom_mdt_free_metadata.cfi_jt(int64_t param_1,uint param_2,ulong *param_3,uint64_t param_4,int param_5)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    if ((param_5 != 0) && (iVar2 = qcom_scm_pas_shutdown_retry(param_2), iVar2 != 0)) {
        auVar6 = panic("Panicking, failed to shutdown peripheral %d\n",param_2);
        puVar3 = auVar6._0_8_;
        *extraout_x18 = sym.__cfi_check_fail;
        if (puVar3 != NULL) {
            switch(*puVar3) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
                __ubsan_handle_cfi_check_fail_abort(puVar3,auVar6._8_8_,0);
                break;
            default:
                return;
            }
        }
    //WARNING: Does not return
        pcVar1 = SoftwareBreakpoint(0x5502,0x8001b80);
        (*pcVar1)();
    }
    if (param_3 != NULL) {
        if ((param_4 & 1) == 0) {
            param_1 = qcom_get_scm_device();
            if (param_1 == 0) {
                _printk(0x8000148,"qcom_mdt_free_metadata");
                return;
            }
            uVar5 = param_3[1];
            uVar4 = param_3[2];
        }
        else {
            uVar5 = param_3[1];
            uVar4 = param_3[2];
        }
        dma_free_attrs(param_1,uVar4,*param_3,uVar5,0);
    }
    return;
}


// ===== sym.qcom_mdt_load_no_init.cfi_jt @ 0x08001110 (size 8) =====

void sym.qcom_mdt_load_no_init.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_mdt_load(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.qcom_mdt_load.cfi_jt @ 0x08001118 (size 8) =====

void sym.qcom_mdt_load.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_mdt_load(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.qcom_mdt_get_size.cfi_jt @ 0x08001120 (size 8) =====

int64_t sym.qcom_mdt_get_size.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    
    uVar7 = *(*(param_1 + 8) + 0x2c);
    if (uVar7 == 0) {
        uVar4 = 0;
        uVar6 = 0xffffffffffffffff;
    }
    else {
        uVar4 = 0;
        puVar8 = *(param_1 + 8) + 0x4c;
        uVar5 = 0xffffffffffffffff;
        do {
            uVar6 = uVar5;
            if (((puVar8[-6] == 1) && ((*puVar8 & 0x7000000) != 0x2000000)) && (puVar8[-1] != 0)) {
                uVar2 = puVar8[-3];
                uVar1 = uVar2 + puVar8[-1];
                uVar6 = uVar2;
                if (uVar5 <= uVar2) {
                    uVar6 = uVar5;
                }
                if (uVar4 < uVar1) {
                    uVar4 = uVar1 + 0xfff & 0xfffff000;
                }
            }
            uVar7 = uVar7 - 1;
            puVar8 = puVar8 + 8;
            uVar5 = uVar6;
        } while (uVar7 != 0);
    }
    iVar3 = uVar4 - uVar6;
    if (uVar4 < uVar6 || iVar3 == 0) {
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.qcom_mdt_load_no_free.cfi_jt @ 0x08001128 (size 8) =====

void sym.qcom_mdt_load_no_free.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_mdt_load(param_1,param_2,param_3,param_4);
    return;
}


// ===== sym.qcom_mdt_get_size @ 0x08001130 (size 148) =====

int64_t sym.qcom_mdt_get_size(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    
    uVar7 = *(*(arg1 + 8) + 0x2c);
    if (uVar7 == 0) {
        uVar4 = 0;
        uVar6 = 0xffffffffffffffff;
    }
    else {
        uVar4 = 0;
        puVar8 = *(arg1 + 8) + 0x4c;
        uVar5 = 0xffffffffffffffff;
        do {
            uVar6 = uVar5;
            if (((puVar8[-6] == 1) && ((*puVar8 & 0x7000000) != 0x2000000)) && (puVar8[-1] != 0)) {
                uVar2 = puVar8[-3];
                uVar1 = uVar2 + puVar8[-1];
                uVar6 = uVar2;
                if (uVar5 <= uVar2) {
                    uVar6 = uVar5;
                }
                if (uVar4 < uVar1) {
                    uVar4 = uVar1 + 0xfff & 0xfffff000;
                }
            }
            uVar7 = uVar7 - 1;
            puVar8 = puVar8 + 8;
            uVar5 = uVar6;
        } while (uVar7 != 0);
    }
    iVar3 = uVar4 - uVar6;
    if (uVar4 < uVar6 || iVar3 == 0) {
        iVar3 = -0x16;
    }
    return iVar3;
}


// ===== sym.qcom_mdt_read_metadata @ 0x080011c4 (size 716) =====

int64_t * sym.qcom_mdt_read_metadata(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    int iVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t in_x4;
    int64_t *in_x5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int *piVar10;
    uint64_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [16];
    ulong uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    iVar6 = *(arg2 + 8);
    uStack_70 = 0;
    piVar4 = arg3;
    iVar5 = arg4;
    if ((1 < *(iVar6 + 0x2c)) && (*(iVar6 + 0x34) != 1)) {
        puVar15 = iVar6 + 0x6c;
        uVar16 = 1;
        do {
            if ((puVar15[-6] != 1) && ((*puVar15 & 0x7000000) == 0x2000000)) {
                piVar14 = *(iVar6 + 0x44);
                piVar13 = puVar15[-2];
                if (in_x5 == NULL) {
                    piVar12 = __kmalloc(piVar13 + piVar14,0xcc0);
code_r0x080012f0:
                    iVar6 = 0;
                }
                else {
                    if ((in_x4 & 1) != 0) {
                        iVar5 = 0xcc0;
                        piVar4 = in_x5;
                        piVar12 = dma_alloc_attrs(arg1,piVar13 + piVar14);
                        goto code_r0x080012f0;
                    }
                    iVar6 = qcom_get_scm_device();
                    if (iVar6 == 0) {
                        piVar12 = 0xfffffffffffffdfb;
                        goto code_r0x0800121c;
                    }
                    iVar5 = 0xcc0;
                    piVar4 = in_x5;
                    piVar12 = dma_alloc_attrs(iVar6,piVar13 + piVar14);
                }
                if (piVar12 == NULL) {
                    piVar12 = 0xfffffffffffffff4;
                    goto code_r0x0800121c;
                }
                piVar4 = piVar14;
                memcpy(piVar12,*(arg2 + 8));
                iVar7 = *(arg2 + 8);
                uVar8 = *(iVar7 + 0x2c);
                if (uVar8 == 0) goto code_r0x0800141c;
                uVar9 = *arg2;
                if ((uVar9 < *(iVar7 + 0x38)) || (uVar9 < *(iVar7 + 0x44) + *(iVar7 + 0x38))) goto code_r0x08001378;
                piVar10 = iVar7 + 100;
                uVar2 = 1;
                goto code_r0x08001344;
            }
            uVar16 = uVar16 + 1;
            puVar15 = puVar15 + 8;
        } while (*(iVar6 + 0x2c) != uVar16);
    }
    piVar12 = 0xffffffffffffffea;
    goto code_r0x0800121c;
    while( true ) {
        iVar3 = *piVar10;
        piVar10 = piVar10 + 8;
        uVar2 = uVar11 + 1;
        if (uVar9 < iVar3 + *puVar1) break;
code_r0x08001344:
        uVar11 = uVar2;
        if ((uVar8 == uVar11) || (puVar1 = piVar10 + -3, uVar9 < *puVar1)) break;
    }
    if (uVar11 < uVar8) {
code_r0x08001378:
        iVar7 = kstrdup(arg3,0xcc0);
        if (iVar7 == 0) {
            iVar3 = -0xc;
        }
        else {
            iVar5 = strlen();
            snprintf(iVar7 + iVar5 + -3,4,"b%02d",uVar16);
            iVar5 = piVar12 + piVar14;
            piVar4 = arg1;
            iVar3 = request_firmware_into_buf(&uStack_70,iVar7,arg1,iVar5,piVar13);
            kfree(iVar7);
            if (iVar3 == 0) {
                release_firmware(uStack_70);
                goto code_r0x08001434;
            }
        }
        if (in_x5 == NULL) {
            kfree(piVar12);
        }
        else {
            iVar5 = *in_x5;
            if ((in_x4 & 1) != 0) {
                iVar6 = arg1;
            }
            dma_free_attrs(iVar6,piVar13 + piVar14,piVar12,iVar5,0);
            piVar4 = piVar12;
        }
        piVar12 = iVar3;
    }
    else {
code_r0x0800141c:
        piVar4 = piVar13;
        memcpy(piVar12 + piVar14,iVar7 + puVar15[-5]);
code_r0x08001434:
        *arg4 = piVar13 + piVar14;
    }
code_r0x0800121c:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return piVar12;
    }
    auVar17 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_mdt_load;
    piVar4 = sym.__qcom_mdt_load(auVar17._0_8_,auVar17._8_8_,piVar4,iVar5);
    return piVar4;
}


// ===== sym.qcom_mdt_load @ 0x08001490 (size 60) =====

void sym.qcom_mdt_load(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_mdt_load(arg1,arg2,arg3,in_x3);
    return;
}


// ===== sym.__qcom_mdt_load @ 0x080014cc (size 1340) =====

uint64_t sym.__qcom_mdt_load(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t uVar4;
    int64_t iVar5;
    bool bVar6;
    uint32_t uVar7;
    ulong *puVar8;
    ulong *puVar9;
    char *pcVar10;
    ulong *puVar11;
    ulong *arg4_00;
    int64_t in_x4;
    uint64_t in_x5;
    uint64_t in_x6;
    uint64_t *in_x7;
    uint64_t uVar12;
    uint64_t uVar13;
    int *piVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    ulong unaff_x30;
    uchar auVar20 [16];
    uint8_t in_stack_00000000;
    uint8_t in_stack_00000008;
    ulong *in_stack_00000010;
    ulong uStack_80;
    ulong *puStack_78;
    uint64_t *puStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    uVar7 = 0xffffffea;
    iStack_68 = *(iVar17 + 0x5e0);
    puStack_78 = NULL;
    puStack_70 = NULL;
    uStack_80 = 0;
    puVar11 = arg3;
    arg4_00 = arg4;
    if ((((arg2 == 0) || (in_x4 == 0)) || (in_x5 == 0)) || (in_x6 == 0)) goto code_r0x080018cc;
    iVar17 = *(arg2 + 8);
    uVar12 = *(iVar17 + 0x2c);
    if (uVar12 == 0) {
        bVar6 = false;
    }
    else {
        uVar13 = *arg2;
        if ((uVar13 < *(iVar17 + 0x38)) || (uVar13 < *(iVar17 + 0x44) + *(iVar17 + 0x38))) {
            bVar6 = true;
        }
        else {
            piVar14 = iVar17 + 100;
            uVar19 = 1;
            do {
                uVar18 = uVar19;
                if ((uVar12 == uVar18) || (puVar16 = piVar14 + -3, uVar13 < *puVar16)) break;
                iVar3 = *piVar14;
                piVar14 = piVar14 + 8;
                uVar19 = uVar18 + 1;
            } while (iVar3 + *puVar16 <= uVar13);
            bVar6 = uVar18 < uVar12;
        }
    }
    uVar12 = strlen(arg3);
    if (uVar12 < 5) {
        uVar7 = 0xffffffea;
        goto code_r0x080018cc;
    }
    puVar8 = kstrdup(arg3,0xcc0);
    if (puVar8 == NULL) {
        uVar7 = 0xfffffff4;
        goto code_r0x080018cc;
    }
    if ((in_stack_00000000 & 1) == 0) {
        puVar9 = NULL;
        uVar4 = *(iVar17 + 0x2c);
        arg3 = puVar11;
joined_r0x08001658:
        uVar19 = uVar4;
        uVar13 = in_x5;
        if (uVar19 == 0) {
code_r0x0800191c:
            uVar7 = 0;
        }
        else {
            uVar7 = 0;
            uVar15 = 0;
            puVar16 = iVar17 + 0x4c;
            uVar18 = 0xffffffffffffffff;
            do {
                uVar13 = uVar18;
                if (((puVar16[-6] == 1) && ((*puVar16 & 0x7000000) != 0x2000000)) && (puVar16[-1] != 0)) {
                    uVar2 = puVar16[-3];
                    uVar7 = uVar7 | (*puVar16 & 0x8000000) >> 0x1b;
                    uVar1 = uVar2 + puVar16[-1];
                    uVar13 = uVar2;
                    if (uVar18 <= uVar2) {
                        uVar13 = uVar18;
                    }
                    if (uVar15 < uVar1) {
                        uVar15 = uVar1 + 0xfff & 0xfffff000;
                    }
                }
                uVar19 = uVar19 - 1;
                puVar16 = puVar16 + 8;
                uVar18 = uVar13;
            } while (uVar19 != 0);
            if ((uVar7 & in_stack_00000000) == 0) {
                if (uVar7 == 0) {
                    uVar13 = in_x5;
                }
            }
            else {
                arg3 = uVar15 - uVar13;
                uVar7 = qcom_scm_pas_mem_setup(arg4 & 0xffffffff);
                if (uVar7 != 0) {
                    pcVar10 = "unable to setup relocation\n";
                    goto code_r0x0800196c;
                }
                if (*(iVar17 + 0x2c) == 0) goto code_r0x0800191c;
            }
            uVar19 = 0;
            puVar16 = iVar17 + 0x4c;
            do {
                if ((puVar16[-6] == 1) && ((*puVar16 & 0x7000000) != 0x2000000)) {
                    uVar7 = puVar16[-1];
                    if (uVar7 != 0) {
                        iVar5 = puVar16[-3] - uVar13;
                        if ((iVar5 < 0) || (in_x6 < iVar5 + uVar7)) {
                            _dev_err(arg1,"segment outside memory range\n");
                            uVar7 = 0xffffffea;
                            goto joined_r0x08001874;
                        }
                        uVar1 = puVar16[-2];
                        arg3 = uVar1;
                        if (uVar7 < uVar1) {
                            arg3 = uVar19 & 0xffffffff;
                            _dev_err(arg1,"refusing to load segment %d with p_filesz > p_memsz\n");
                            uVar7 = 0xffffffea;
                            goto joined_r0x08001874;
                        }
                        puVar11 = in_x4 + iVar5;
                        if (uVar1 != 0) {
                            if (bVar6) {
                                snprintf(puVar8 + (uVar12 - 3),4,"b%02d",uVar19 & 0xffffffff);
                                arg3 = arg1;
                                arg4_00 = puVar11;
                                uVar7 = request_firmware_into_buf(&puStack_70,puVar8,arg1,puVar11,puVar16[-2]);
                                if (uVar7 != 0) {
                                    arg3 = puVar8;
                                    _dev_err(arg1,"failed to load %s\n");
                                    goto joined_r0x08001874;
                                }
                                if (*puStack_70 != puVar16[-2]) {
                                    arg3 = uVar19 & 0xffffffff;
                                    arg4_00 = puVar8;
                                    _dev_err(arg1,"failed to load segment %d from truncated file %s\n");
                                    release_firmware(puStack_70);
                                    uVar7 = 0xffffffea;
                                    goto joined_r0x08001874;
                                }
                                release_firmware();
                            }
                            else {
                                memcpy(puVar11,*(arg2 + 8) + puVar16[-5]);
                            }
                        }
                        uVar7 = puVar16[-2];
                        if (uVar7 < puVar16[-1]) {
                            arg3 = puVar16[-1] - uVar7;
                            memset(puVar11 + uVar7,0);
                        }
                    }
                }
                uVar19 = uVar19 + 1;
                puVar16 = puVar16 + 8;
            } while (uVar19 < *(iVar17 + 0x2c));
            uVar7 = 0;
        }
joined_r0x08001874:
        if (in_x7 != NULL) {
            *in_x7 = uVar13;
        }
        if (uVar7 != 0) {
code_r0x08001880:
            qcom_scm_pas_shutdown(arg4 & 0xffffffff);
        }
        if (((in_stack_00000010 == NULL) && ((in_stack_00000000 & 1) != 0)) &&
           (((in_stack_00000008 & 1) != 0 || (arg1 = qcom_get_scm_device(), arg1 != 0)))) {
            arg4_00 = puStack_78;
            dma_free_attrs(arg1,uStack_80,puVar9,puStack_78,0);
            arg3 = puVar9;
        }
    }
    else {
        arg4_00 = &uStack_80;
        puVar9 = sym.qcom_mdt_read_metadata(arg1,arg2,arg3,arg4_00);
        if (puVar9 < 0xfffffffffffff001) {
            if (in_stack_00000010 != NULL) {
                in_stack_00000010[2] = uStack_80;
                *in_stack_00000010 = puVar9;
                in_stack_00000010[1] = puStack_78;
            }
            uVar7 = qcom_scm_pas_init_image(arg4 & 0xffffffff,puStack_78);
            if (uVar7 == 0) {
                uVar4 = *(iVar17 + 0x2c);
                goto joined_r0x08001658;
            }
            pcVar10 = "invalid firmware metadata\n";
code_r0x0800196c:
            _dev_err(arg1,pcVar10);
            goto code_r0x08001880;
        }
        arg3 = puVar9 & 0xffffffff;
        arg4_00 = puVar8;
        _dev_err(arg1,"error %d reading firmware %s metadata\n");
        uVar7 = puVar9;
    }
    kfree(puVar8);
    puVar11 = arg3;
code_r0x080018cc:
    iVar17 = sp_el0;
    if (*(iVar17 + 0x5e0) != iStack_68) {
        auVar20 = __stack_chk_fail();
        *extraout_x18 = sym.qcom_mdt_load_no_init;
        uVar12 = sym.__qcom_mdt_load(auVar20._0_8_,auVar20._8_8_,puVar11,arg4_00);
        return uVar12;
    }
    return uVar7;
}


// ===== sym.qcom_mdt_load_no_init @ 0x08001a08 (size 56) =====

void sym.qcom_mdt_load_no_init(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_x3;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_mdt_load(arg1,arg2,arg3,in_x3);
    return;
}


// ===== sym.qcom_mdt_load_no_free @ 0x08001a40 (size 68) =====

void sym.qcom_mdt_load_no_free(int64_t arg2,int64_t arg4,int64_t arg3,int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    sym.__qcom_mdt_load(arg2,arg4,arg3,arg1);
    return;
}


// ===== sym.qcom_mdt_free_metadata @ 0x08001a84 (size 164) =====

void sym.qcom_mdt_free_metadata(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    int iVar2;
    uchar *puVar3;
    ulong uVar4;
    ulong uVar5;
    int in_w4;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    
    *in_x18 = unaff_x30;
    if (in_w4 != 0) {
        iVar2 = qcom_scm_pas_shutdown_retry(arg2 & 0xffffffff);
        if (iVar2 != 0) {
            auVar6 = panic("Panicking, failed to shutdown peripheral %d\n",arg2 & 0xffffffff);
            puVar3 = auVar6._0_8_;
            *extraout_x18 = sym.__cfi_check_fail;
            if (puVar3 != NULL) {
                switch(*puVar3) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                    __ubsan_handle_cfi_check_fail_abort(puVar3,auVar6._8_8_,0);
                    break;
                default:
                    return;
                }
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x8001b80);
            (*pcVar1)();
        }
    }
    if (arg3 != 0) {
        if ((arg4 & 1U) == 0) {
            arg1 = qcom_get_scm_device();
            if (arg1 == 0) {
                _printk(0x8000148,"qcom_mdt_free_metadata");
                return;
            }
            uVar5 = *(arg3 + 8);
            uVar4 = *(arg3 + 0x10);
        }
        else {
            uVar5 = *(arg3 + 8);
            uVar4 = *(arg3 + 0x10);
        }
        dma_free_attrs(arg1,uVar4,*arg3,uVar5,0);
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x08001b28 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001b6c

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
    //switch table (4 cases) at 0x80000a0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001b80);
    (*pcVar1)();
}

