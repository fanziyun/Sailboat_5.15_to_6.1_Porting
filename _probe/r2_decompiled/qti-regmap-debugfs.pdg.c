// decompiled from qti-regmap-debugfs by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 340) =====

//WARNING: Switch with 1 destination removed at 0x080022dc

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < -0x29f74e5d3f9103af) {
        if (arg1 == -0x7ddd03c6873ebfc2) {
            pcVar2 = sym.devm_regmap_qti_debugfs_register.cfi_jt;
        }
        else {
            if (arg1 == -0x58c4a7feef7ff60d) {
                pcVar2 = sym.devm_regmap_qti_debugfs_match.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt;
                goto code_r0x08001144;
            }
            if (arg1 != -0x48ef54602b463a27) goto code_r0x0800229c;
            pcVar2 = sym.devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt;
        }
code_r0x08001114:
        if (1 < (pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d)) goto code_r0x0800229c;
    }
    else {
        if (arg1 < 0x7ff5a213d37b1a6) {
            if (arg1 == -0x29f74e5d3f9103af) {
                pcVar2 = sym.regmap_qti_debugfs_unregister.cfi_jt;
                goto code_r0x08001114;
            }
            if (arg1 != -0x8dc801903aca538) goto code_r0x0800229c;
            pcVar2 = sym.simple_open.cfi_jt;
        }
        else if (arg1 == 0x7ff5a213d37b1a6) {
            pcVar2 = sym.regmap_data_read_file.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt;
        }
        else {
            if (arg1 != 0x321969b888d4949e) goto code_r0x0800229c;
            pcVar2 = sym.default_llseek.cfi_jt;
        }
code_r0x08001144:
        if (pcVar1 != pcVar2) {
code_r0x0800229c:
            *in_x18 = unaff_x30;
            if (arg3 != 0) {
                if (4 < *arg3) {
                    return;
                }
                __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
            }
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(0x5502,0x80022f0);
            (*pcVar1)();
        }
    }
    return;
}


// ===== sym.default_llseek.cfi_jt @ 0x08001160 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.default_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.devm_regmap_qti_debugfs_match.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt @ 0x08001168 (size 8) =====

bool sym.devm_regmap_qti_debugfs_match.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt
               (ulong param_1,int64_t *param_2,int64_t param_3)

{
    code *pcVar1;
    
    if ((param_2 != NULL) && (*param_2 != 0)) {
        return *param_2 == param_3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001730);
    (*pcVar1)();
}


// ===== sym.simple_open.cfi_jt @ 0x08001170 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.simple_open.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.regmap_qti_debugfs_unregister.cfi_jt @ 0x08001178 (size 8) =====

void sym.regmap_qti_debugfs_unregister.cfi_jt(uint64_t param_1)

{
    code *arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (0xfffffffffffff000 < param_1)) {
        _printk(0x80003f0,"regmap_qti_debugfs_unregister");
    }
    else {
        mutex_lock(obj.regmap_qti_debugfs_lock);
        arg1 = obj.regmap_qti_debugfs_list;
        do {
            arg1 = *arg1;
            if (arg1 == obj.regmap_qti_debugfs_list) goto code_r0x080013c0;
        } while (*(arg1 + 0x10) != param_1);
        sym.regmap_qti_debugfs_remove(arg1);
code_r0x080013c0:
        mutex_unlock(obj.regmap_qti_debugfs_lock);
    }
    return;
}


// ===== sym.devm_regmap_qti_debugfs_unregister.cfi_jt @ 0x08001180 (size 8) =====

void sym.devm_regmap_qti_debugfs_unregister.cfi_jt(uint64_t param_1)

{
    code *pcVar1;
    ulong *in_x18;
    code *pcVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((param_1 == 0) || (0xfffffffffffff000 < param_1)) {
        _printk(0x80003f0,"devm_regmap_qti_debugfs_unregister");
    }
    else {
        mutex_lock(obj.regmap_qti_debugfs_lock);
        pcVar1 = _obj.regmap_qti_debugfs_list;
        if (_obj.regmap_qti_debugfs_list != obj.regmap_qti_debugfs_list) {
            do {
                pcVar2 = *pcVar1;
                if (*(pcVar1 + 0x10) == param_1) {
                    devres_release(*(pcVar1 + 0x18),
                                   sym._devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt,
                                   sym.devm_regmap_qti_debugfs_match.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt);
                }
                pcVar1 = pcVar2;
            } while (pcVar2 != obj.regmap_qti_debugfs_list);
        }
        mutex_unlock(obj.regmap_qti_debugfs_lock);
    }
    return;
}


// ===== sym.devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt @ 0x08001188 (size 8) =====

void sym.devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt(ulong param_1,ulong *param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.regmap_qti_debugfs_lock);
    if (_obj.regmap_qti_debugfs_list != obj.regmap_qti_debugfs_list) {
        pcVar1 = _obj.regmap_qti_debugfs_list;
        do {
            if (pcVar1 == *param_2) {
                sym.regmap_qti_debugfs_remove(*param_2);
                break;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.regmap_qti_debugfs_list);
    }
    mutex_unlock(obj.regmap_qti_debugfs_lock);
    return;
}


// ===== sym._devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt @ 0x08001190 (size 8) =====

void sym._devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt(ulong param_1,ulong *param_2)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.regmap_qti_debugfs_list != obj.regmap_qti_debugfs_list) {
        pcVar1 = _obj.regmap_qti_debugfs_list;
        do {
            if (pcVar1 == *param_2) {
                sym.regmap_qti_debugfs_remove(*param_2);
                return;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.regmap_qti_debugfs_list);
    }
    return;
}


// ===== sym.devm_regmap_qti_debugfs_register.cfi_jt @ 0x08001198 (size 8) =====

uint64_t sym.devm_regmap_qti_debugfs_register.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = __devres_alloc_node(sym.devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt,8,0xcc0,
                                 0xffffffff,"devm_regmap_qti_debugfs_release");
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = sym.regmap_qti_debugfs_add(param_1,param_2);
        if (uVar2 < 0xfffffffffffff001) {
            *puVar1 = uVar2;
            devres_add(param_1,puVar1);
            uVar2 = 0;
        }
        else {
            devres_free(puVar1);
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.regmap_qti_debugfs_register.cfi_jt @ 0x080011a0 (size 8) =====

uint sym.regmap_qti_debugfs_register.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.regmap_qti_debugfs_add(param_1,param_2);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.regmap_data_read_file.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt @ 0x080011a8 (size 8) =====

uint64_t sym.regmap_data_read_file.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3,int64_t *param_4)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    code *pcVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint64_t uVar12;
    ulong *puVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar16;
    int64_t *piVar17;
    uint32_t uVar18;
    int64_t iVar19;
    int64_t arg1;
    ulong *puVar20;
    int64_t iVar21;
    uint64_t uVar22;
    ulong *puVar23;
    int64_t iVar24;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    iVar21 = *(param_1 + 0xd8);
    iVar19 = *(iVar21 + 0x10);
    uVar18 = *(iVar21 + 0x20);
    if (*(iVar19 + 0x120) == 0) {
        iVar8 = snprintf(0,0,0x800046d,*(iVar19 + 0x168));
        *(iVar19 + 0x118) = iVar8;
        iVar9 = *(iVar19 + 0x78) * 2;
        *(iVar19 + 0x11c) = iVar9;
        *(iVar19 + 0x120) = iVar8 + iVar9 + 3;
    }
    iVar9 = sym.regmap_debugfs_generate_cache(iVar19);
    if (-1 < iVar9) {
        iVar24 = iVar19 + 0x138;
        mutex_lock(iVar24);
        for (puVar13 = *(iVar19 + 0x128); puVar13 != iVar19 + 0x128; puVar13 = *puVar13) {
            if ((*(puVar13 + 4) <= uVar18) && (uVar18 <= *(puVar13 + 0x24))) {
                uVar5 = 0;
                if (*(iVar19 + 0x204) != 0) {
                    uVar5 = (uVar18 - *(puVar13 + 4)) / *(iVar19 + 0x204);
                }
                iVar19 = puVar13[2] + *(iVar19 + 0x120) * uVar5;
                mutex_unlock(iVar24);
                uStack_6c = 0;
                iVar24 = iVar19 + *param_4;
                *param_4 = iVar24;
                arg1 = *(iVar21 + 0x10);
                iVar2 = *(iVar21 + 0x20);
                uVar22 = 0xffffffffffffffea;
                iVar8 = *(arg1 + 0x204);
                iVar9 = 0;
                if (*(iVar21 + 0x24) != 0) {
                    iVar9 = *(iVar21 + 0x24) + -1;
                }
                if (iVar8 == 0) {
                    iVar8 = 1;
                }
                if ((param_3 == 0) || (iVar24 < 0)) goto code_r0x08001b70;
                if (0x3fffff < param_3) {
                    param_3 = 0x400000;
                }
                iVar21 = __kmalloc(param_3,0xdc0);
                if (iVar21 == 0) {
                    uVar22 = 0xfffffffffffffff4;
                    goto code_r0x08001b70;
                }
                if (*(arg1 + 0x120) == 0) {
                    iVar10 = snprintf(0,0,0x800046d,*(arg1 + 0x168));
                    *(arg1 + 0x118) = iVar10;
                    iVar11 = *(arg1 + 0x78) * 2;
                    *(arg1 + 0x11c) = iVar11;
                    *(arg1 + 0x120) = iVar10 + iVar11 + 3;
                }
                iVar16 = *param_4;
                iVar11 = sym.regmap_debugfs_generate_cache(arg1);
                if (iVar11 < 0) {
                    uVar18 = 0;
                    goto code_r0x080019c4;
                }
                iVar1 = arg1 + 0x138;
                mutex_lock(iVar1);
                piVar17 = arg1 + 0x128;
                if (piVar17 == *piVar17) {
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x800,0x8001b90);
                    (*pcVar7)();
                }
                piVar3 = *piVar17;
                if (*piVar17 != piVar17) goto code_r0x08001900;
                uVar18 = 0;
                goto code_r0x08001990;
            }
        }
        mutex_unlock(iVar24);
        iVar9 = -0x16;
    }
    uVar22 = iVar9;
    goto code_r0x0800193c;
code_r0x08001b20:
    if (uVar22 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x8001b9c);
        (*pcVar7)();
    }
    goto code_r0x08001b28;
    while (piVar3 = *piVar14, *piVar14 != piVar17) {
code_r0x08001900:
        piVar14 = piVar3;
        iVar15 = piVar14[2];
        iVar24 = piVar14[3];
        if (iVar15 <= iVar16 && iVar16 <= iVar24) {
            uVar18 = *(arg1 + 0x120);
            uVar5 = 0;
            if (uVar18 != 0) {
                uVar5 = (iVar16 - iVar15) / uVar18;
            }
            iVar24 = iVar15 + uVar5 * uVar18;
            mutex_unlock(iVar1);
            uVar18 = piVar14[4] + *(arg1 + 0x204) * uVar5;
            goto code_r0x080019c4;
        }
    }
    uVar18 = *(piVar14 + 0x24);
code_r0x08001990:
    mutex_unlock(iVar1);
code_r0x080019c4:
    uVar22 = 0;
    if ((-1 < uVar18) && (uVar5 = iVar2 + iVar8 * iVar9, uVar18 <= uVar5)) {
        uVar22 = 0;
        do {
            if (*param_4 <= iVar24) {
                if (param_3 < uVar22 + *(arg1 + 0x120)) goto code_r0x08001b20;
                snprintf(iVar21 + uVar22,param_3 - uVar22,"%.*x: ",*(arg1 + 0x118),uVar18);
                iVar16 = uVar22 + (*(arg1 + 0x118) + 2);
                iVar9 = regmap_read(arg1,uVar18,&uStack_6c);
                if (iVar9 == 0) {
                    snprintf(iVar21 + iVar16,param_3 - iVar16,"%.*x",*(arg1 + 0x11c),uStack_6c);
                }
                else {
                    memset(iVar21 + iVar16,0x58,*(arg1 + 0x11c));
                }
                iVar16 = iVar16 + *(arg1 + 0x78) * 2;
                uVar22 = iVar16 + 1;
                *(iVar21 + iVar16) = 10;
            }
            uVar4 = *(arg1 + 0x120);
            uVar12 = sym.regmap_printable(arg1,*(arg1 + 0x204) + uVar18);
            if ((uVar12 & 1) == 0) {
                mutex_lock(arg1 + 0x138);
                for (puVar13 = *(arg1 + 0x128); puVar13 != arg1 + 0x128; puVar13 = *puVar13) {
                    if ((uVar18 <= *(puVar13 + 0x24)) && (uVar6 = *(puVar13 + 4), uVar18 < *(puVar13 + 4)))
                    goto code_r0x08001b08;
                }
                uVar6 = 0xffffffea;
code_r0x08001b08:
                uVar18 = uVar6;
                mutex_unlock(arg1 + 0x138);
            }
            else {
                uVar18 = *(arg1 + 0x204) + uVar18;
            }
            if ((uVar18 < 0) || (iVar24 = iVar24 + uVar4, uVar5 < uVar18)) goto code_r0x08001b20;
        } while( true );
    }
code_r0x08001b28:
    noname_1 = __check_object_size(iVar21,uVar22,1);
    iVar24 = sym._copy_to_user(param_2,noname_1,uVar22);
    if (iVar24 == 0) {
        *param_4 = *param_4 + uVar22;
    }
    else {
        uVar22 = 0xfffffffffffffff2;
    }
    kfree(iVar21);
code_r0x08001b70:
    if (*param_4 < iVar19) {
        uVar22 = 0xffffffffffffffea;
    }
    else {
        *param_4 = *param_4 - iVar19;
    }
code_r0x0800193c:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_68) {
        return uVar22;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18 = 0x8001ba4;
    mutex_lock(iVar19 + 0x138);
    puVar13 = iVar19 + 0x128;
    if (puVar13 == *puVar13) {
        uVar18 = 0;
        iVar21 = 0;
        puVar20 = NULL;
        do {
            uVar22 = sym.regmap_printable(iVar19,uVar18);
            if ((uVar22 & 1) == 0) {
                if (puVar20 != NULL) {
                    puVar20[3] = iVar21 + -1;
                    *(puVar20 + 0x24) = uVar18 - *(iVar19 + 0x204);
                    puVar23 = *(iVar19 + 0x130);
                    uVar22 = __list_add_valid(puVar20,puVar23,puVar13);
                    if ((uVar22 & 1) == 0) {
                        puVar20 = NULL;
                    }
                    else {
                        *(iVar19 + 0x130) = puVar20;
                        *puVar20 = puVar13;
                        puVar20[1] = puVar23;
                        *puVar23 = puVar20;
                        puVar20 = NULL;
                    }
                }
            }
            else {
                if (puVar20 == NULL) {
                    iVar24 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar24 = 0x30;
                    }
                    puVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar24),0xdc0,0x28);
                    if (puVar20 == NULL) {
                        puVar20 = *puVar13;
                        while (puVar13 != puVar20) {
                            piVar17 = *puVar13;
                            uVar22 = __list_del_entry_valid(piVar17);
                            if ((uVar22 & 1) != 0) {
                                iVar21 = *piVar17;
                                piVar3 = piVar17[1];
                                *(iVar21 + 8) = piVar3;
                                *piVar3 = iVar21;
                            }
                            *piVar17 = -0x2152ffffffffff00;
                            piVar17[1] = -0x2152fffffffffede;
                            kfree(piVar17);
                            puVar20 = *puVar13;
                        }
                        uVar18 = 0xfffffff4;
                        goto code_r0x08001bf0;
                    }
                    puVar20[2] = iVar21;
                    *(puVar20 + 4) = uVar18;
                }
                iVar21 = iVar21 + *(iVar19 + 0x120);
            }
            uVar18 = *(iVar19 + 0x204) + uVar18;
        } while (uVar18 <= *(iVar19 + 0x168));
        if (puVar20 != NULL) {
            puVar20[3] = iVar21 + -1;
            *(puVar20 + 0x24) = uVar18 - *(iVar19 + 0x204);
            puVar23 = *(iVar19 + 0x130);
            uVar22 = __list_add_valid(puVar20,puVar23,puVar13);
            uVar18 = 0;
            if ((uVar22 & 1) != 0) {
                *(iVar19 + 0x130) = puVar20;
                *puVar20 = puVar13;
                puVar20[1] = puVar23;
                *puVar23 = puVar20;
                uVar18 = 0;
            }
            goto code_r0x08001bf0;
        }
    }
    uVar18 = 0;
code_r0x08001bf0:
    mutex_unlock(iVar19 + 0x138);
    return uVar18;
}


// ===== sym.regmap_qti_debugfs_register @ 0x080011b0 (size 44) =====

uint sym.regmap_qti_debugfs_register(int64_t arg2,int64_t arg1)

{
    uint uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = sym.regmap_qti_debugfs_add(arg2,arg1);
    uVar1 = uVar2;
    if (uVar2 < 0xfffffffffffff001) {
        uVar1 = 0;
    }
    return uVar1;
}


// ===== sym.regmap_qti_debugfs_add @ 0x080011dc (size 396) =====

code * sym.regmap_qti_debugfs_add(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    code *pcVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if ((arg1 == 0) || (arg2 == 0)) {
        _printk(0x80002f7,"regmap_qti_debugfs_add");
        pcVar4 = 0xffffffffffffffea;
    }
    else {
        mutex_lock(obj.regmap_qti_debugfs_lock);
        for (pcVar4 = _obj.regmap_qti_debugfs_list; pcVar4 != obj.regmap_qti_debugfs_list; pcVar4 = *pcVar4) {
            if (*(pcVar4 + 0x10) == arg2) {
                _dev_err(arg1,"%s: qti debugfs files already registered for regmap\n","regmap_qti_debugfs_add");
                pcVar4 = 0xffffffffffffffea;
                goto code_r0x08001300;
            }
        }
        iVar1 = 0x38;
        if (android_kmalloc_64_create != 0x0) {
            iVar1 = 0x30;
        }
        pcVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar1),0xdc0,0x28);
        pcVar2 = _obj.regmap_qti_debugfs_list;
        if (pcVar4 == NULL) {
            pcVar4 = 0xfffffffffffffff4;
        }
        else {
            *(pcVar4 + 0x10) = arg2;
            *(pcVar4 + 0x18) = arg1;
            *(pcVar4 + 0x24) = 1;
            uVar3 = __list_add_valid(pcVar4,obj.regmap_qti_debugfs_list,pcVar2);
            if ((uVar3 & 1) != 0) {
                *(pcVar2 + 8) = pcVar4;
                *pcVar4 = pcVar2;
                *(pcVar4 + 8) = obj.regmap_qti_debugfs_list;
                _obj.regmap_qti_debugfs_list = pcVar4;
            }
            debugfs_create_x32("address",0x180,*(arg2 + 0x108),pcVar4 + 0x20);
            debugfs_create_u32("count",0x180,*(arg2 + 0x108),pcVar4 + 0x24);
            debugfs_create_file_unsafe("data",0x100,*(arg2 + 0x108),pcVar4,obj.regmap_data_fops);
        }
code_r0x08001300:
        mutex_unlock(obj.regmap_qti_debugfs_lock);
    }
    return pcVar4;
}


// ===== sym.regmap_qti_debugfs_unregister @ 0x08001368 (size 144) =====

void sym.regmap_qti_debugfs_unregister(uint32_t arg1)

{
    uint64_t uVar1;
    code *arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
        _printk(0x80003f0,"regmap_qti_debugfs_unregister");
    }
    else {
        mutex_lock(obj.regmap_qti_debugfs_lock);
        arg1_00 = obj.regmap_qti_debugfs_list;
        do {
            arg1_00 = *arg1_00;
            if (arg1_00 == obj.regmap_qti_debugfs_list) goto code_r0x080013c0;
        } while (*(arg1_00 + 0x10) != uVar1);
        sym.regmap_qti_debugfs_remove(arg1_00);
code_r0x080013c0:
        mutex_unlock(obj.regmap_qti_debugfs_lock);
    }
    return;
}


// ===== sym.regmap_qti_debugfs_remove @ 0x080013f8 (size 204) =====

void sym.regmap_qti_debugfs_remove(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = debugfs_lookup("address",*(*(arg1 + 0x10) + 0x108));
    dput();
    debugfs_remove(uVar3);
    uVar3 = debugfs_lookup("count",*(*(arg1 + 0x10) + 0x108));
    dput();
    debugfs_remove(uVar3);
    uVar3 = debugfs_lookup("data",*(*(arg1 + 0x10) + 0x108));
    dput();
    debugfs_remove(uVar3);
    uVar4 = __list_del_entry_valid(arg1);
    if ((uVar4 & 1) != 0) {
        iVar1 = *arg1;
        piVar2 = *(arg1 + 8);
        *(iVar1 + 8) = piVar2;
        *piVar2 = iVar1;
    }
    *arg1 = 0xdead000000000100;
    *(arg1 + 8) = 0xdead000000000122;
    kfree(arg1);
    return;
}


// ===== sym.devm_regmap_qti_debugfs_register @ 0x080014c4 (size 164) =====

uint64_t sym.devm_regmap_qti_debugfs_register(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    puVar1 = __devres_alloc_node(sym.devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt,8,0xcc0,
                                 0xffffffff,"devm_regmap_qti_debugfs_release");
    if (puVar1 == NULL) {
        uVar2 = 0xfffffff4;
    }
    else {
        uVar2 = sym.regmap_qti_debugfs_add(arg1,arg2);
        if (uVar2 < 0xfffffffffffff001) {
            *puVar1 = uVar2;
            devres_add(arg1,puVar1);
            uVar2 = 0;
        }
        else {
            devres_free(puVar1);
        }
    }
    return uVar2 & 0xffffffff;
}


// ===== sym.devm_regmap_qti_debugfs_release @ 0x08001568 (size 120) =====

void sym.devm_regmap_qti_debugfs_release(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.regmap_qti_debugfs_lock);
    if (_obj.regmap_qti_debugfs_list != obj.regmap_qti_debugfs_list) {
        pcVar1 = _obj.regmap_qti_debugfs_list;
        do {
            if (pcVar1 == *arg1) {
                sym.regmap_qti_debugfs_remove(*arg1);
                break;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.regmap_qti_debugfs_list);
    }
    mutex_unlock(obj.regmap_qti_debugfs_lock);
    return;
}


// ===== sym.devm_regmap_qti_debugfs_unregister @ 0x080015e0 (size 208) =====

void sym.devm_regmap_qti_debugfs_unregister(uint32_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    ulong *in_x18;
    code *pcVar3;
    ulong unaff_x30;
    
    uVar1 = arg1;
    *in_x18 = unaff_x30;
    if ((uVar1 == 0) || (0xfffffffffffff000 < uVar1)) {
        _printk(0x80003f0,"devm_regmap_qti_debugfs_unregister");
    }
    else {
        mutex_lock(obj.regmap_qti_debugfs_lock);
        pcVar2 = _obj.regmap_qti_debugfs_list;
        if (_obj.regmap_qti_debugfs_list != obj.regmap_qti_debugfs_list) {
            do {
                pcVar3 = *pcVar2;
                if (*(pcVar2 + 0x10) == uVar1) {
                    devres_release(*(pcVar2 + 0x18),
                                   sym._devm_regmap_qti_debugfs_release.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt,
                                   sym.devm_regmap_qti_debugfs_match.e3ec441d85922c31fc5dfe3dd2ae0b27.cfi_jt);
                }
                pcVar2 = pcVar3;
            } while (pcVar3 != obj.regmap_qti_debugfs_list);
        }
        mutex_unlock(obj.regmap_qti_debugfs_lock);
    }
    return;
}


// ===== sym._devm_regmap_qti_debugfs_release @ 0x080016b0 (size 84) =====

void sym._devm_regmap_qti_debugfs_release(ulong noname_0,int64_t arg1)

{
    code *pcVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_obj.regmap_qti_debugfs_list != obj.regmap_qti_debugfs_list) {
        pcVar1 = _obj.regmap_qti_debugfs_list;
        do {
            if (pcVar1 == *arg1) {
                sym.regmap_qti_debugfs_remove(*arg1);
                return;
            }
            pcVar1 = *pcVar1;
        } while (pcVar1 != obj.regmap_qti_debugfs_list);
    }
    return;
}


// ===== sym.devm_regmap_qti_debugfs_match @ 0x08001704 (size 44) =====

bool sym.devm_regmap_qti_debugfs_match(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    
    if ((arg2 != 0) && (*arg2 != 0)) {
        return *arg2 == arg3;
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x800,0x8001730);
    (*pcVar1)();
}


// ===== sym.regmap_data_read_file @ 0x08001734 (size 1140) =====

uint64_t sym.regmap_data_read_file(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    code *pcVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    uint64_t uVar12;
    ulong *puVar13;
    int64_t *piVar14;
    int64_t iVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar16;
    int64_t *piVar17;
    uint32_t uVar18;
    int64_t iVar19;
    int64_t arg1_00;
    ulong *puVar20;
    int64_t iVar21;
    uint64_t uVar22;
    ulong *puVar23;
    int64_t iVar24;
    ulong unaff_x30;
    uchar noname_1 [16];
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_68 = *(iVar19 + 0x5e0);
    iVar21 = *(arg1 + 0xd8);
    iVar19 = *(iVar21 + 0x10);
    uVar18 = *(iVar21 + 0x20);
    if (*(iVar19 + 0x120) == 0) {
        iVar8 = snprintf(0,0,0x800046d,*(iVar19 + 0x168));
        *(iVar19 + 0x118) = iVar8;
        iVar9 = *(iVar19 + 0x78) * 2;
        *(iVar19 + 0x11c) = iVar9;
        *(iVar19 + 0x120) = iVar8 + iVar9 + 3;
    }
    iVar9 = sym.regmap_debugfs_generate_cache(iVar19);
    if (-1 < iVar9) {
        iVar24 = iVar19 + 0x138;
        mutex_lock(iVar24);
        for (puVar13 = *(iVar19 + 0x128); puVar13 != iVar19 + 0x128; puVar13 = *puVar13) {
            if ((*(puVar13 + 4) <= uVar18) && (uVar18 <= *(puVar13 + 0x24))) {
                uVar5 = 0;
                if (*(iVar19 + 0x204) != 0) {
                    uVar5 = (uVar18 - *(puVar13 + 4)) / *(iVar19 + 0x204);
                }
                iVar19 = puVar13[2] + *(iVar19 + 0x120) * uVar5;
                mutex_unlock(iVar24);
                uStack_6c = 0;
                iVar24 = iVar19 + *arg4;
                *arg4 = iVar24;
                arg1_00 = *(iVar21 + 0x10);
                iVar2 = *(iVar21 + 0x20);
                uVar22 = 0xffffffffffffffea;
                iVar8 = *(arg1_00 + 0x204);
                iVar9 = 0;
                if (*(iVar21 + 0x24) != 0) {
                    iVar9 = *(iVar21 + 0x24) + -1;
                }
                if (iVar8 == 0) {
                    iVar8 = 1;
                }
                if ((arg3 == 0) || (iVar24 < 0)) goto code_r0x08001b70;
                if (0x3fffff < arg3) {
                    arg3 = 0x400000;
                }
                iVar21 = __kmalloc(arg3,0xdc0);
                if (iVar21 == 0) {
                    uVar22 = 0xfffffffffffffff4;
                    goto code_r0x08001b70;
                }
                if (*(arg1_00 + 0x120) == 0) {
                    iVar10 = snprintf(0,0,0x800046d,*(arg1_00 + 0x168));
                    *(arg1_00 + 0x118) = iVar10;
                    iVar11 = *(arg1_00 + 0x78) * 2;
                    *(arg1_00 + 0x11c) = iVar11;
                    *(arg1_00 + 0x120) = iVar10 + iVar11 + 3;
                }
                iVar16 = *arg4;
                iVar11 = sym.regmap_debugfs_generate_cache(arg1_00);
                if (iVar11 < 0) {
                    uVar18 = 0;
                    goto code_r0x080019c4;
                }
                iVar1 = arg1_00 + 0x138;
                mutex_lock(iVar1);
                piVar17 = arg1_00 + 0x128;
                if (piVar17 == *piVar17) {
    //WARNING: Does not return
                    pcVar7 = SoftwareBreakpoint(0x800,0x8001b90);
                    (*pcVar7)();
                }
                piVar3 = *piVar17;
                if (*piVar17 != piVar17) goto code_r0x08001900;
                uVar18 = 0;
                goto code_r0x08001990;
            }
        }
        mutex_unlock(iVar24);
        iVar9 = -0x16;
    }
    uVar22 = iVar9;
    goto code_r0x0800193c;
code_r0x08001b20:
    if (uVar22 >> 0x1f != 0) {
    //WARNING: Does not return
        pcVar7 = SoftwareBreakpoint(0x800,0x8001b9c);
        (*pcVar7)();
    }
    goto code_r0x08001b28;
    while (piVar3 = *piVar14, *piVar14 != piVar17) {
code_r0x08001900:
        piVar14 = piVar3;
        iVar15 = piVar14[2];
        iVar24 = piVar14[3];
        if (iVar15 <= iVar16 && iVar16 <= iVar24) {
            uVar18 = *(arg1_00 + 0x120);
            uVar5 = 0;
            if (uVar18 != 0) {
                uVar5 = (iVar16 - iVar15) / uVar18;
            }
            iVar24 = iVar15 + uVar5 * uVar18;
            mutex_unlock(iVar1);
            uVar18 = piVar14[4] + *(arg1_00 + 0x204) * uVar5;
            goto code_r0x080019c4;
        }
    }
    uVar18 = *(piVar14 + 0x24);
code_r0x08001990:
    mutex_unlock(iVar1);
code_r0x080019c4:
    uVar22 = 0;
    if ((-1 < uVar18) && (uVar5 = iVar2 + iVar8 * iVar9, uVar18 <= uVar5)) {
        uVar22 = 0;
        do {
            if (*arg4 <= iVar24) {
                if (arg3 < uVar22 + *(arg1_00 + 0x120)) goto code_r0x08001b20;
                snprintf(iVar21 + uVar22,arg3 - uVar22,"%.*x: ",*(arg1_00 + 0x118),uVar18);
                iVar16 = uVar22 + (*(arg1_00 + 0x118) + 2);
                iVar9 = regmap_read(arg1_00,uVar18,&stack0xffffffffffffff94);
                if (iVar9 == 0) {
                    snprintf(iVar21 + iVar16,arg3 - iVar16,"%.*x",*(arg1_00 + 0x11c),uStack_6c);
                }
                else {
                    memset(iVar21 + iVar16,0x58,*(arg1_00 + 0x11c));
                }
                iVar16 = iVar16 + *(arg1_00 + 0x78) * 2;
                uVar22 = iVar16 + 1;
                *(iVar21 + iVar16) = 10;
            }
            uVar4 = *(arg1_00 + 0x120);
            uVar12 = sym.regmap_printable(arg1_00,*(arg1_00 + 0x204) + uVar18);
            if ((uVar12 & 1) == 0) {
                mutex_lock(arg1_00 + 0x138);
                for (puVar13 = *(arg1_00 + 0x128); puVar13 != arg1_00 + 0x128; puVar13 = *puVar13) {
                    if ((uVar18 <= *(puVar13 + 0x24)) && (uVar6 = *(puVar13 + 4), uVar18 < *(puVar13 + 4)))
                    goto code_r0x08001b08;
                }
                uVar6 = 0xffffffea;
code_r0x08001b08:
                uVar18 = uVar6;
                mutex_unlock(arg1_00 + 0x138);
            }
            else {
                uVar18 = *(arg1_00 + 0x204) + uVar18;
            }
            if ((uVar18 < 0) || (iVar24 = iVar24 + uVar4, uVar5 < uVar18)) goto code_r0x08001b20;
        } while( true );
    }
code_r0x08001b28:
    noname_1 = __check_object_size(iVar21,uVar22,1);
    iVar24 = sym._copy_to_user(arg2,noname_1,uVar22);
    if (iVar24 == 0) {
        *arg4 = *arg4 + uVar22;
    }
    else {
        uVar22 = 0xfffffffffffffff2;
    }
    kfree(iVar21);
code_r0x08001b70:
    if (*arg4 < iVar19) {
        uVar22 = 0xffffffffffffffea;
    }
    else {
        *arg4 = *arg4 - iVar19;
    }
code_r0x0800193c:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_68) {
        return uVar22;
    }
    iVar19 = __stack_chk_fail();
    *extraout_x18 = 0x8001ba4;
    mutex_lock(iVar19 + 0x138);
    puVar13 = iVar19 + 0x128;
    if (puVar13 == *puVar13) {
        uVar18 = 0;
        iVar21 = 0;
        puVar20 = NULL;
        do {
            uVar22 = sym.regmap_printable(iVar19,uVar18);
            if ((uVar22 & 1) == 0) {
                if (puVar20 != NULL) {
                    puVar20[3] = iVar21 + -1;
                    *(puVar20 + 0x24) = uVar18 - *(iVar19 + 0x204);
                    puVar23 = *(iVar19 + 0x130);
                    uVar22 = __list_add_valid(puVar20,puVar23,puVar13);
                    if ((uVar22 & 1) == 0) {
                        puVar20 = NULL;
                    }
                    else {
                        *(iVar19 + 0x130) = puVar20;
                        *puVar20 = puVar13;
                        puVar20[1] = puVar23;
                        *puVar23 = puVar20;
                        puVar20 = NULL;
                    }
                }
            }
            else {
                if (puVar20 == NULL) {
                    iVar24 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar24 = 0x30;
                    }
                    puVar20 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar24),0xdc0,0x28);
                    if (puVar20 == NULL) {
                        puVar20 = *puVar13;
                        while (puVar13 != puVar20) {
                            piVar17 = *puVar13;
                            uVar22 = __list_del_entry_valid(piVar17);
                            if ((uVar22 & 1) != 0) {
                                iVar21 = *piVar17;
                                piVar3 = piVar17[1];
                                *(iVar21 + 8) = piVar3;
                                *piVar3 = iVar21;
                            }
                            *piVar17 = -0x2152ffffffffff00;
                            piVar17[1] = -0x2152fffffffffede;
                            kfree(piVar17);
                            puVar20 = *puVar13;
                        }
                        uVar18 = 0xfffffff4;
                        goto code_r0x08001bf0;
                    }
                    puVar20[2] = iVar21;
                    *(puVar20 + 4) = uVar18;
                }
                iVar21 = iVar21 + *(iVar19 + 0x120);
            }
            uVar18 = *(iVar19 + 0x204) + uVar18;
        } while (uVar18 <= *(iVar19 + 0x168));
        if (puVar20 != NULL) {
            puVar20[3] = iVar21 + -1;
            *(puVar20 + 0x24) = uVar18 - *(iVar19 + 0x204);
            puVar23 = *(iVar19 + 0x130);
            uVar22 = __list_add_valid(puVar20,puVar23,puVar13);
            uVar18 = 0;
            if ((uVar22 & 1) != 0) {
                *(iVar19 + 0x130) = puVar20;
                *puVar20 = puVar13;
                puVar20[1] = puVar23;
                *puVar23 = puVar20;
                uVar18 = 0;
            }
            goto code_r0x08001bf0;
        }
    }
    uVar18 = 0;
code_r0x08001bf0:
    mutex_unlock(iVar19 + 0x138);
    return uVar18;
}


// ===== sym.regmap_debugfs_generate_cache @ 0x08001ba8 (size 488) =====

uint sym.regmap_debugfs_generate_cache(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    ulong *in_x18;
    int64_t *piVar5;
    uint uVar6;
    uint32_t uVar7;
    ulong *puVar8;
    ulong *puVar9;
    int64_t iVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x138);
    puVar1 = arg1 + 0x128;
    if (puVar1 == *puVar1) {
        uVar7 = 0;
        iVar10 = 0;
        puVar8 = NULL;
        do {
            uVar4 = sym.regmap_printable(arg1,uVar7);
            if ((uVar4 & 1) == 0) {
                if (puVar8 != NULL) {
                    puVar8[3] = iVar10 + -1;
                    *(puVar8 + 0x24) = uVar7 - *(arg1 + 0x204);
                    puVar9 = *(arg1 + 0x130);
                    uVar4 = __list_add_valid(puVar8,puVar9,puVar1);
                    if ((uVar4 & 1) == 0) {
                        puVar8 = NULL;
                    }
                    else {
                        *(arg1 + 0x130) = puVar8;
                        *puVar8 = puVar1;
                        puVar8[1] = puVar9;
                        *puVar9 = puVar8;
                        puVar8 = NULL;
                    }
                }
            }
            else {
                if (puVar8 == NULL) {
                    iVar2 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar2 = 0x30;
                    }
                    puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar2),0xdc0,0x28);
                    if (puVar8 == NULL) {
                        puVar8 = *puVar1;
                        while (puVar1 != puVar8) {
                            piVar5 = *puVar1;
                            uVar4 = __list_del_entry_valid(piVar5);
                            if ((uVar4 & 1) != 0) {
                                iVar10 = *piVar5;
                                piVar3 = piVar5[1];
                                *(iVar10 + 8) = piVar3;
                                *piVar3 = iVar10;
                            }
                            *piVar5 = -0x2152ffffffffff00;
                            piVar5[1] = -0x2152fffffffffede;
                            kfree(piVar5);
                            puVar8 = *puVar1;
                        }
                        uVar6 = 0xfffffff4;
                        goto code_r0x08001bf0;
                    }
                    puVar8[2] = iVar10;
                    *(puVar8 + 4) = uVar7;
                }
                iVar10 = iVar10 + *(arg1 + 0x120);
            }
            uVar7 = *(arg1 + 0x204) + uVar7;
        } while (uVar7 <= *(arg1 + 0x168));
        if (puVar8 != NULL) {
            puVar8[3] = iVar10 + -1;
            *(puVar8 + 0x24) = uVar7 - *(arg1 + 0x204);
            puVar9 = *(arg1 + 0x130);
            uVar4 = __list_add_valid(puVar8,puVar9,puVar1);
            uVar6 = 0;
            if ((uVar4 & 1) != 0) {
                *(arg1 + 0x130) = puVar8;
                *puVar8 = puVar1;
                puVar8[1] = puVar9;
                *puVar9 = puVar8;
                uVar6 = 0;
            }
            goto code_r0x08001bf0;
        }
    }
    uVar6 = 0;
code_r0x08001bf0:
    mutex_unlock(arg1 + 0x138);
    return uVar6;
}


// ===== sym.regmap_printable @ 0x08001d9c (size 904) =====

uint64_t sym.regmap_printable(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong *puVar3;
    bool bVar4;
    int iVar5;
    uint64_t uVar6;
    uint64_t in_x2;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar8;
    uint64_t uVar9;
    code *pcVar10;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar2 = sp_el0;
    iStack_38 = *(iVar2 + 0x5e0);
    uVar9 = arg2 & 0xffffffff;
    uVar8 = arg2;
    if (*(arg1 + 0x1d0) == 0) {
code_r0x08001e0c:
        uStack_3c = 0;
        if (((*(arg1 + 0x218) != 0) && (*(arg1 + 0x210) != 0)) && ((*(arg1 + 0x168) == 0 || (uVar8 <= *(arg1 + 0x168))))
           ) {
            pcVar10 = *(arg1 + 0x30);
            __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar10,0x8000230);
            (*pcVar10)(*(arg1 + 0x40));
            if (*(arg1 + 0x218) == 0) {
code_r0x080020c0:
                pcVar10 = *(arg1 + 0x38);
                in_x2 = 0x8000250;
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar10);
                (*pcVar10)(*(arg1 + 0x40));
            }
            else {
                if (*(arg1 + 0x210) == 0) {
    //WARNING: Does not return
                    pcVar10 = SoftwareBreakpoint(0x800,0x80020c0);
                    (*pcVar10)();
                }
                if (*(arg1 + 0x80) == 0) {
                    if ((*(arg1 + 0x1d0) != 0) && ((*(arg1 + 0x168) == 0 || (uVar8 <= *(arg1 + 0x168))))) {
                        pcVar10 = *(arg1 + 0x178);
                        if (pcVar10 == NULL) {
                            if (*(arg1 + 0x1a8) == 0) goto code_r0x08001e74;
                            uVar6 = regmap_check_range_table(arg1,arg2 & 0xffffffff);
                        }
                        else {
                            __cfi_slowpath_diag(0x6be91529ddea3c2,pcVar10,0x8000210);
                            uVar6 = (*pcVar10)(*(arg1 + 0x50),arg2 & 0xffffffff);
                        }
                        if ((uVar6 & 1) != 0) goto code_r0x08001e74;
                    }
                }
                else {
code_r0x08001e74:
                    pcVar10 = *(arg1 + 0x180);
                    if (pcVar10 == NULL) {
                        if (*(arg1 + 0x1b0) == 0) {
                            if (*(arg1 + 0x210) == 0) goto code_r0x080020c0;
                            goto code_r0x0800202c;
                        }
                        uVar6 = regmap_check_range_table(arg1,uVar9);
                    }
                    else {
                        __cfi_slowpath_diag(0x6be91529ddea3c2,pcVar10,0x8000290);
                        uVar6 = (*pcVar10)(*(arg1 + 0x50),uVar9);
                    }
                    if ((uVar6 & 1) != 0) goto code_r0x080020c0;
                }
code_r0x0800202c:
                pcVar10 = *(*(arg1 + 0x210) + 0x28);
                __cfi_slowpath_diag(0x9a389b1a68b53df5,pcVar10,0x8000270);
                iVar5 = (*pcVar10)(arg1,uVar9,&uStack_3c);
                pcVar10 = *(arg1 + 0x38);
                in_x2 = 0x8000250;
                __cfi_slowpath_diag(0x4c550309df1cf4c1,pcVar10);
                (*pcVar10)(*(arg1 + 0x40));
                if (iVar5 == 0) goto code_r0x08002098;
            }
        }
    }
    else {
        if (((*(arg1 + 0x168) != 0) && (*(arg1 + 0x168) < uVar8)) || (*(arg1 + 0x80) != 0)) {
code_r0x08001dec:
            if (((*(arg1 + 0x1d0) == 0) || ((*(arg1 + 0x168) != 0 && (*(arg1 + 0x168) < uVar8)))) ||
               (*(arg1 + 0x80) != 0)) goto code_r0x08001e0c;
            pcVar10 = *(arg1 + 0x178);
            if (pcVar10 == NULL) {
                in_x2 = *(arg1 + 0x1a8);
                if (in_x2 != 0) {
                    uVar6 = regmap_check_range_table(arg1,uVar9);
                    goto joined_r0x08002000;
                }
            }
            else {
                in_x2 = 0x8000210;
                __cfi_slowpath_diag(0x6be91529ddea3c2,pcVar10);
                uVar6 = (*pcVar10)(*(arg1 + 0x50),uVar9);
joined_r0x08002000:
                if ((uVar6 & 1) == 0) goto code_r0x08001e0c;
            }
code_r0x08002098:
            uVar9 = 1;
            goto code_r0x080020f0;
        }
        pcVar10 = *(arg1 + 0x178);
        if (pcVar10 == NULL) {
            in_x2 = *(arg1 + 0x1a8);
            if ((in_x2 == 0) || (uVar6 = regmap_check_range_table(arg1,uVar9), (uVar6 & 1) != 0))
            goto code_r0x08001f40;
            goto code_r0x08001dec;
        }
        in_x2 = 0x8000210;
        __cfi_slowpath_diag(0x6be91529ddea3c2,pcVar10);
        uVar6 = (*pcVar10)(*(arg1 + 0x50),uVar9);
        if ((uVar6 & 1) == 0) goto code_r0x08001dec;
code_r0x08001f40:
        pcVar10 = *(arg1 + 0x188);
        if (pcVar10 == NULL) {
            in_x2 = *(arg1 + 0x1b8);
            if (in_x2 == 0) goto code_r0x08001dec;
            uVar6 = regmap_check_range_table(arg1,uVar9);
        }
        else {
            in_x2 = 0x80001f0;
            __cfi_slowpath_diag(0x6be91529ddea3c2,pcVar10);
            uVar6 = (*pcVar10)(*(arg1 + 0x50),uVar9);
        }
        if ((uVar6 & 1) == 0) goto code_r0x08001dec;
    }
    uVar9 = 0;
code_r0x080020f0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_38) {
        uVar6 = __stack_chk_fail(uVar9);
        *extraout_x18 = sym._copy_to_user;
        puVar3 = sp_el0;
        uVar9 = (uVar6 << 8) >> 8;
        if (((*(puVar3 + 0x3e) >> 5 & 1) != 0) || (uVar7 = uVar6, (*puVar3 >> 0x1a & 1) != 0)) {
            uVar7 = uVar6 & uVar9;
        }
        bVar4 = CARRY8(uVar7,in_x2);
        uVar7 = uVar7 + in_x2;
        uVar1 = 0;
        if (!bVar4 || uVar7 == 0) {
            uVar1 = 0x7fffffffff;
        }
        if (bVar4) {
            uVar7 = 0xffffffffffffffff;
        }
        if (!CARRY8(uVar7,~uVar1) && !CARRY8(uVar7 + ~uVar1,bVar4) || uVar7 == uVar1 + !bVar4) {
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar7 = daif;
                if ((uVar7 & 0x80) == 0) {
                    uVar1 = daif;
                    daif = uVar1 | 0xc0;
                }
                uVar1 = ttbr1_el1;
                ttbr1_el1 = puVar3[1] & 0xffff000000000000 | uVar1 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                ttbr0_el1 = puVar3[1];
                InstructionSynchronizationBarrier();
                daif = uVar7;
            }
            if ((uVar6 & uVar9 & 0xffffff8000000000) != 0) {
                uVar6 = 0;
            }
            in_x2 = __arch_copy_to_user(uVar6);
            if ((_default_llseek >> 0x18 & 1) == 0) {
                uVar9 = daif;
                if ((uVar9 & 0x80) == 0) {
                    uVar6 = daif;
                    daif = uVar6 | 0xc0;
                }
                uVar6 = ttbr1_el1;
                ttbr0_el1 = (uVar6 & 0xffffffffffff) - 0x1000;
                InstructionSynchronizationBarrier();
                ttbr1_el1 = uVar6 & 0xffffffffffff;
                InstructionSynchronizationBarrier();
                daif = uVar9;
            }
        }
        return in_x2;
    }
    return uVar9;
}


// ===== sym._copy_to_user @ 0x08002124 (size 312) =====

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
        if ((_default_llseek >> 0x18 & 1) == 0) {
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
        if ((_default_llseek >> 0x18 & 1) == 0) {
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


// ===== sym.__cfi_check_fail @ 0x08002298 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x080022dc

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
    //switch table (4 cases) at 0x8000478
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80022f0);
    (*pcVar1)();
}

