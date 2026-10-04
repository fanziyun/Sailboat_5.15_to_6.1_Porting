// decompiled from dcc_v2 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08002000 (size 484) =====

//WARNING: Switch with 1 destination removed at 0x08006538

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0x3557318fb8d07b71) {
            if (arg1 == -0x66d421a09845f9f8) {
                if ((pcVar1 + -0x80022b8 >> 3 | pcVar1 << 0x3d) < 0xc) {
                    return;
                }
            }
            else if ((arg1 == -0x57be845bca9148ef) && ((pcVar1 + -0x80022a0 >> 3 | pcVar1 << 0x3d) < 3)) {
                return;
            }
            goto code_r0x080064f8;
        }
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8002210 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080064f8;
        }
        if (arg1 != -0x8dc801903aca538) goto code_r0x080064f8;
        pcVar2 = sym.dcc_sram_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    else if (arg1 < 0x1e3d0ffe3d0499e9) {
        if (arg1 == 0x2b3a43e29242445) {
            pcVar2 = sym.init_module.cfi_jt;
        }
        else {
            if (arg1 != 0x7ff5a213d37b1a6) goto code_r0x080064f8;
            pcVar2 = sym.dcc_sram_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x1e3d0ffe3d0499e9) {
            if ((pcVar1 + -0x8002220 >> 3 | pcVar1 << 0x3d) < 0xf) {
                return;
            }
            goto code_r0x080064f8;
        }
        if (arg1 == 0x321969b888d4949e) {
            pcVar2 = sym.no_llseek.cfi_jt;
        }
        else {
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080064f8;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080064f8:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800654c);
    (*pcVar1)();
}


// ===== sym.dcc_sram_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080021f0 (size 8) =====

ulong sym.dcc_sram_open.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    *(param_2 + 0xd8) = *(param_1 + 0x2b0) + -0xa8;
    return 0;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080021f8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08002200 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.dcc_sram_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002208 (size 8) =====

uint64_t sym.dcc_sram_read.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t *param_4)

{
    uint uVar1;
    code *pcVar2;
    uint *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint64_t uVar7;
    uint *puVar8;
    ulong *in_x18;
    uint64_t arg2;
    int64_t iVar9;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar9 = *(param_1 + 0xd8);
    uVar5 = *param_4;
    uVar7 = *(iVar9 + 0x50);
    if (uVar5 < uVar7) {
        arg2 = uVar7 - uVar5;
        if (!CARRY8(uVar5,param_3) && uVar5 + param_3 <= uVar7) {
            arg2 = param_3;
        }
        puVar3 = __kmalloc(arg2,0xdc0);
        if (puVar3 == NULL) {
            arg2 = 0xfffffffffffffff4;
        }
        else {
            if ((arg2 == 0) || (puVar6 = *(iVar9 + 0x48) + *param_4, ((arg2 | puVar6) & 3) != 0)) {
                _dev_err(*(iVar9 + 0x10),"Target address or size not aligned with 4 bytes\n");
                arg2 = 0xffffffffffffffea;
            }
            else {
                uVar5 = arg2;
                puVar8 = puVar3;
                if (3 < arg2) {
                    do {
                        uVar1 = *puVar6;
                        puVar6 = puVar6 + 1;
                        uVar5 = uVar5 - 4;
                        *puVar8 = uVar1;
                        puVar8 = puVar8 + 1;
                    } while (3 < uVar5);
                    if (arg2 >> 0x1f != 0) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x8002c1c);
                        (*pcVar2)();
                    }
                }
                noname_1 = __check_object_size(puVar3,arg2,1);
                iVar4 = sym._copy_to_user(param_2,noname_1,arg2);
                if (iVar4 == 0) {
                    *param_4 = *param_4 + arg2;
                }
                else {
                    _dev_err(*(iVar9 + 0x10),"DCC: Couldn\'t copy all data to user\n");
                    arg2 = 0xfffffffffffffff2;
                }
            }
            kfree(puVar3);
        }
    }
    else {
        arg2 = 0;
    }
    return arg2;
}


// ===== sym.dcc_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002210 (size 8) =====

ulong sym.dcc_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    int64_t arg1;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1 = *(param_1 + 0xa8);
    device_destroy(*(arg1 + 0x130),*(arg1 + 0x128));
    class_destroy(*(arg1 + 0x130));
    cdev_del(arg1 + 0xa8);
    unregister_chrdev_region(*(arg1 + 0x128),1);
    sym.dcc_config_reset(arg1);
    return 0;
}


// ===== sym.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002218 (size 8) =====

ulong sym.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int iVar1;
    int64_t *arg1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    ulong *extraout_x8;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar5 = param_1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    iStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    arg1 = devm_kmalloc(iVar5,0x180,0xdc0);
    if (arg1 != NULL) {
        arg1[2] = iVar5;
        *(param_1 + 0xa8) = arg1;
        piVar2 = platform_get_resource_byname(param_1,0x200,"dcc-base");
        if (piVar2 == NULL) {
code_r0x080024cc:
            uVar4 = 0xffffffea;
            goto code_r0x08002728;
        }
        *(arg1 + 1) = (piVar2[1] - *piVar2) + 1;
        iVar3 = devm_ioremap(iVar5,*piVar2,(piVar2[1] - *piVar2) + 1);
        *arg1 = iVar3;
        if (iVar3 == 0) goto code_r0x08002724;
        piVar2 = platform_get_resource_byname(param_1,0x200,"dcc-ram-base");
        if (piVar2 == NULL) goto code_r0x080024cc;
        *(arg1 + 10) = (piVar2[1] - *piVar2) + 1;
        iVar3 = devm_ioremap(iVar5,*piVar2,(piVar2[1] - *piVar2) + 1);
        arg1[9] = iVar3;
        if (iVar3 == 0) goto code_r0x08002724;
        iVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"dcc-ram-offset",arg1 + 0x54,1,0);
        if (iVar1 < 0) goto code_r0x080024cc;
        iVar1 = of_property_count_elems_of_size(*(param_1 + 0x300),"ll-reg-offsets",4);
        *(arg1 + 0x164) = iVar1;
        if (iVar1 < 1) {
            _dev_info(iVar5,"ll-reg-offsets property doesn\'t exist\n");
            *(arg1 + 0x164) = 0;
        }
        else {
            iVar1 = of_property_read_variable_u32_array(*(param_1 + 0x300),"per-ll-reg-cnt",arg1 + 0x2c,1,0);
            if (iVar1 < 0) goto code_r0x080024cc;
        }
        if ((*(*arg1 + 4) >> 9 & 1) == 0) {
            if ((~*(*arg1 + 4) & 0x3f) == 0) {
                *(arg1 + 0xd) = 1;
                iVar1 = *(*arg1 + 0x10);
                *(arg1 + 0x29) = iVar1;
                goto joined_r0x080024c8;
            }
            *(arg1 + 0xd) = 0;
            *(arg1 + 0x29) = 8;
        }
        else {
            *(arg1 + 0xd) = 2;
            iVar1 = *(*arg1 + 0x10);
            *(arg1 + 0x29) = iVar1;
joined_r0x080024c8:
            if (iVar1 == 0) goto code_r0x080024cc;
        }
        if ((*(*arg1 + 4) >> 6 & 1) == 0) {
            iVar1 = (*(arg1 + 0x54) + arg1[10] >> 2) - 1;
            cVar6 = '\0';
            if (iVar1 != 0) {
                cVar6 = ' ' - LZCOUNT(iVar1);
            }
        }
        else {
            cVar6 = '\x10';
        }
        *(arg1 + 0x2b) = cVar6;
        __mutex_init(arg1 + 3,"&drvdata->mutex",reloc.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        iVar3 = devm_kmalloc(iVar5,*(arg1 + 0x29) << 2,0xdc0);
        arg1[0xb] = iVar3;
        if (iVar3 != 0) {
            iVar3 = devm_kmalloc(iVar5,*(arg1 + 0x29) << 2,0xdc0);
            arg1[0xc] = iVar3;
            if (iVar3 != 0) {
                iVar3 = devm_kmalloc(iVar5,arg1[0x29],0xdc0);
                arg1[0xf] = iVar3;
                if (iVar3 != 0) {
                    iVar3 = devm_kmalloc(iVar5,arg1[0x29],0xdc0);
                    arg1[0x10] = iVar3;
                    if (iVar3 != 0) {
                        iVar3 = devm_kmalloc(iVar5,arg1[0x29],0xdc0);
                        arg1[0x11] = iVar3;
                        if (iVar3 != 0) {
                            iVar3 = devm_kmalloc(iVar5,arg1[0x29],0xdc0);
                            arg1[0x12] = iVar3;
                            if (iVar3 != 0) {
                                iVar3 = devm_kmalloc(iVar5,*(arg1 + 0x29) << 2,0xdc0);
                                arg1[0x28] = iVar3;
                                if (iVar3 != 0) {
                                    iVar3 = devm_kmalloc(iVar5,arg1[0x29],0xdc0);
                                    arg1[0x2a] = iVar3;
                                    if (iVar3 != 0) {
                                        iVar3 = devm_kmalloc(iVar5,arg1[0x29],0xdc0);
                                        arg1[0x2f] = iVar3;
                                        if (iVar3 != 0) {
                                            iVar3 = devm_kmalloc(iVar5,*(arg1 + 0x29) << 4,0xdc0);
                                            arg1[0x27] = iVar3;
                                            if (iVar3 != 0) {
                                                if (arg1[0x29] != 0) {
                                                    *iVar3 = iVar3;
                                                    *(iVar3 + 8) = iVar3;
                                                    *arg1[0x28] = 0;
                                                    *arg1[0x10] = 1;
                                                    *arg1[0x11] = 0;
                                                    if (1 < *(arg1 + 0x29)) {
                                                        uVar7 = 1;
                                                        do {
                                                            iVar8 = uVar7;
                                                            iVar3 = arg1[0x27] + uVar7 * 0x10;
                                                            *iVar3 = iVar3;
                                                            *(iVar3 + 8) = iVar3;
                                                            *(arg1[0x28] + uVar7 * 4) = 0;
                                                            uVar7 = uVar7 + 1;
                                                            *(arg1[0x10] + iVar8) = 1;
                                                            *(arg1[0x11] + iVar8) = 0;
                                                        } while (uVar7 < *(arg1 + 0x29));
                                                    }
                                                }
                                                __memset_io(arg1[9],0,arg1[10]);
                                                *(arg1 + 0x14c) = 0xff;
                                                uVar4 = sym.dcc_sram_dev_init(arg1);
                                                if ((uVar4 == 0) && (uVar4 = sym.dcc_create_files(iVar5), uVar4 == 0))
                                                {
                                                    sym.dcc_configure_list(arg1,*(param_1 + 0x300));
                                                    strscpy(&uStack_68,"KDCCDATA",0xd);
                                                    iStack_50 = arg1[9];
                                                    uStack_40 = *(arg1 + 10);
                                                    iStack_48 = *piVar2;
                                                    iVar1 = msm_minidump_add_region(&uStack_68);
                                                    if (iVar1 < 0) {
                                                        _dev_err(arg1[2],"Failed to add DCC data in Minidump\n");
                                                    }
                                                    uVar4 = 0;
                                                }
                                                goto code_r0x08002728;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x08002724:
    uVar4 = 0xfffffff4;
code_r0x08002728:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    uVar4 = *****extraout_x8;
    *extraout_x18 = 0x8002788;
    iVar5 = *(iVar5 + 0xa8);
    device_destroy(uVar4,*(iVar5 + 0x130),*(iVar5 + 0x128));
    class_destroy(*(iVar5 + 0x130));
    cdev_del(iVar5 + 0xa8);
    unregister_chrdev_region(*(iVar5 + 0x128),1);
    sym.dcc_config_reset(iVar5);
    return 0;
}


// ===== sym.data_sink_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002220 (size 8) =====

uint64_t sym.data_sink_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong *param_3,int param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    ulong *puVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint uVar11;
    uint32_t uVar12;
    ulong *extraout_x9;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int iVar15;
    int64_t iVar16;
    int64_t *piVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_38 = *(iVar16 + 0x5e0);
    iVar16 = *(param_1 + 0x98);
    uStack_40 = 0;
    uStack_48 = 0;
    puVar8 = param_3;
    iVar15 = param_4;
    uVar5 = strlen(param_3);
    if (uVar5 < 10) {
        puVar8 = &uStack_48;
        iVar4 = sscanf(param_3,0x80009b3,puVar8);
        if (iVar4 == 1) {
            mutex_lock(iVar16 + 0x18);
            uVar3 = *(iVar16 + 0x14c);
            if (uVar3 < *(iVar16 + 0x148)) {
                if (*(*(iVar16 + 0x78) + uVar3) == '\0') {
                    uVar11 = 0;
                    if (uStack_48 != 0x6d617273 || uStack_48._4_1_ != '\0') {
                        if (uStack_48 != 0x627461) goto code_r0x0800316c;
                        uVar11 = 1;
                    }
                    uVar5 = param_4;
                    *(*(iVar16 + 0x58) + uVar3 * 4) = uVar11;
                }
                else {
                    uVar5 = 0xfffffffffffffff0;
                }
            }
            else {
                _dev_err(param_1,"Select link list to program using curr_list\n");
code_r0x0800316c:
                uVar5 = 0xffffffffffffffea;
            }
            mutex_unlock(iVar16 + 0x18);
            goto code_r0x08003178;
        }
    }
    uVar5 = 0xffffffffffffffea;
code_r0x08003178:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.trigger_store;
    pcStack_a8 = sym.trigger_store;
    iVar16 = sp_el0;
    iStack_b8 = *(iVar16 + 0x5e0);
    piVar17 = *(iVar6 + 0x98);
    iStack_c0 = 0;
    puStack_b0 = &stack0xffffffffffffffd0;
    iVar4 = kstrtoull(puVar8,0x10,&iStack_c0);
    uVar5 = 0xffffffffffffffea;
    if ((iVar4 == 0) && (iStack_c0 == 1)) {
        mutex_lock(piVar17 + 3);
        uVar12 = *(piVar17 + 0x29);
        if (uVar12 != 0) {
            uVar13 = 0;
            uVar5 = 0x30;
            do {
                iVar4 = uVar5;
                if ((*(piVar17[0xf] + uVar13) != '\0') && (*(piVar17[0x11] + uVar13) != '\0')) {
                    _dev_info(piVar17[2],"DCC SW trigger link list %d\n",uVar13);
                    uVar12 = uVar13 << 7;
                    uVar10 = uVar13 << 7 | 0x38;
                    uVar14 = uVar5;
                    if ((piVar17[0xd] != 1) && (uVar14 = uVar10, piVar17[0xd] == 0)) {
                        uVar14 = uVar12 | 0x20;
                    }
                    uVar1 = *(*piVar17 + uVar14);
                    iVar2 = piVar17[0xd];
                    uVar18 = 0xfffffeff;
                    if (iVar2 != 2) {
                        uVar18 = 0xfffffdff;
                    }
                    uVar14 = uVar5;
                    if ((iVar2 != 1) && (uVar14 = uVar10, iVar2 == 0)) {
                        uVar14 = uVar12 | 0x20;
                    }
                    *(*piVar17 + uVar14) = uVar18 & uVar1;
                    if (piVar17[0xd] == 1) {
                        uVar18 = iVar4 + 0x28;
                    }
                    else if (piVar17[0xd] == 0) {
                        uVar18 = uVar12 | 0x44;
                    }
                    else {
                        uVar18 = uVar12 | 0x60;
                    }
                    *(*piVar17 + uVar18) = 1;
                    if ((piVar17[0xd] != 1) && (uVar5 = uVar10, piVar17[0xd] == 0)) {
                        uVar5 = uVar12 | 0x20;
                    }
                    *(*piVar17 + uVar5) = uVar1;
                    uVar12 = *(piVar17 + 0x29);
                }
                uVar13 = uVar13 + 1;
                uVar5 = iVar4 + 0x80;
            } while (uVar13 < uVar12);
        }
        iVar16 = ktime_get();
        uVar5 = sym.readl(*piVar17 + 0x1c);
        if ((uVar5 & 3) != 0) {
            do {
                iVar6 = ktime_get();
                if (iVar16 + 100000 < iVar6) {
                    uVar5 = sym.readl(*piVar17 + 0x1c);
                    if ((uVar5 & 3) != 0) {
                        _dev_err(piVar17[2],"DCC is busy after receiving sw tigger.\n");
                        iVar15 = -0x10;
                        goto code_r0x08003534;
                    }
                    break;
                }
                usleep_range_state(1,1,2);
                uVar5 = sym.readl(*piVar17 + 0x1c);
            } while ((uVar5 & 3) != 0);
        }
        uVar12 = *(piVar17 + 0x29);
        if (uVar12 != 0) {
            uVar13 = 0;
            uVar18 = 100;
            do {
                if (*(piVar17[0xf] + uVar13) != '\0') {
                    if (piVar17[0xd] == 1) {
                        uVar12 = uVar18 - 8;
                    }
                    else if (piVar17[0xd] == 0) {
                        uVar12 = uVar13 << 7 | 0x48;
                    }
                    else {
                        uVar12 = uVar13 << 7 | 100;
                    }
                    if (*(*piVar17 + uVar12) != 0) {
                        _dev_err(piVar17[2],"Read access error for list %d err: 0x%x.\n");
                        uVar12 = uVar18 - 0x2c;
                        if (piVar17[0xd] == 0) {
                            uVar5 = uVar18 - 0x44;
                        }
                        else {
                            uVar5 = uVar12;
                            if (piVar17[0xd] == 1) {
                                uVar5 = uVar18 - 0x34;
                            }
                        }
                        uVar1 = *(*piVar17 + uVar5);
                        iVar15 = piVar17[0xd];
                        uVar13 = 0xfffffeff;
                        if (iVar15 != 2) {
                            uVar13 = 0xfffffdff;
                        }
                        if (iVar15 == 0) {
                            uVar5 = uVar18 - 0x44;
                        }
                        else {
                            uVar5 = uVar12;
                            if (iVar15 == 1) {
                                uVar5 = uVar18 - 0x34;
                            }
                        }
                        *(*piVar17 + uVar5) = uVar13 & uVar1;
                        if (piVar17[0xd] == 0) {
                            uVar5 = uVar18 - 0x1c;
                        }
                        else {
                            uVar5 = uVar18;
                            if (piVar17[0xd] == 1) {
                                uVar5 = uVar18 - 8;
                            }
                        }
                        *(*piVar17 + uVar5) = 3;
                        if (piVar17[0xd] == 0) {
                            uVar12 = uVar18 - 0x44;
                        }
                        else if (piVar17[0xd] == 1) {
                            uVar12 = uVar18 - 0x34;
                        }
                        iVar15 = -0x3d;
                        *(*piVar17 + uVar12) = uVar1;
                        break;
                    }
                    uVar12 = *(piVar17 + 0x29);
                }
                uVar13 = uVar13 + 1;
                uVar18 = uVar18 + 0x80;
            } while (uVar13 < uVar12);
        }
code_r0x08003534:
        mutex_unlock(piVar17 + 3);
        uVar5 = iVar15;
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_b8) {
        return uVar5;
    }
    puVar7 = __stack_chk_fail(uVar5);
    uVar9 = *extraout_x9;
    *extraout_x18_00 = 0x8003580;
    log_read_mmio(0x20,puVar7,0x8003590,uVar9);
    uVar12 = *puVar7;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar12,0x20,puVar7,0x80035d4);
    return uVar12;
}


// ===== sym.config_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002228 (size 8) =====

uint64_t sym.config_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint32_t *puVar6;
    int iVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t *piVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [12];
    uint32_t uStack_34;
    int iStack_30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    puVar6 = &uStack_34;
    puVar8 = &uStack_2c;
    iVar12 = *(param_1 + 0x98);
    uStack_2c = 0;
    uStack_34 = 0;
    iStack_30 = 0;
    iVar3 = sscanf(param_3,"%x %i %d",puVar6,puVar8,&iStack_30);
    iVar7 = puVar8;
    uVar4 = 0xffffffffffffffea;
    if (((0xfffffffc < iVar3 - 4U) && (-1 < iStack_30)) && (iStack_30 < 2)) {
        if (iVar3 == 1) {
            uStack_2c = 1;
code_r0x08004b3c:
            iVar9 = 0;
            iStack_30 = 0;
        }
        else {
            if ((iVar3 != 3) || (iStack_30 != 1)) goto code_r0x08004b3c;
            iVar9 = 1;
            iStack_30 = 1;
        }
        puVar6 = uStack_2c;
        iVar3 = sym.dcc_config_add(iVar12,uStack_34,puVar6,iVar9);
        iVar7 = iVar9;
        uVar4 = param_4;
        if (iVar3 != 0) {
            uVar4 = iVar3;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar17 = __stack_chk_fail(uVar4);
    uVar16 = auVar17._8_4_;
    iVar12 = auVar17._0_8_;
    *extraout_x18 = sym.dcc_config_add;
    uVar4 = puVar6 & 0xffffffff;
    mutex_lock(iVar12 + 0x18);
    if (*(iVar12 + 0x14c) < *(iVar12 + 0x148)) {
        uVar11 = puVar6;
        if ((uVar11 != 0) && (uVar11 <= *(iVar12 + 0x50) >> 3)) {
            piVar14 = *(iVar12 + 0x138) + *(iVar12 + 0x14c) * 0x10;
            uVar15 = uVar16 & 0xfffffff0;
            if ((piVar14 == *piVar14) ||
               (iVar9 = *(*(iVar12 + 0x138) + *(iVar12 + 0x14c) * 0x10 + 8), *(iVar9 + -8) != 0)) {
code_r0x08004c28:
                uVar16 = uVar16 - uVar15;
                do {
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x38);
                    if (puVar6 == NULL) {
                        uVar16 = 0xfffffff4;
                        goto code_r0x08004d5c;
                    }
                    uVar2 = *(iVar12 + 0x14c);
                    uVar13 = uVar4;
                    iVar9 = *(iVar12 + 0x140);
                    uVar11 = uVar13;
                    if (0x7e < uVar13) {
                        uVar11 = 0x7f;
                    }
                    *puVar6 = uVar15;
                    puVar6[1] = uVar16;
                    iVar10 = uVar2 * 4;
                    puVar8 = puVar6 + 10;
                    puVar6[2] = uVar11;
                    uVar11 = *(iVar9 + iVar10);
                    *(iVar9 + iVar10) = uVar11 + 1;
                    puVar6[3] = uVar11;
                    puVar6[8] = 0;
                    *(puVar6 + 7) = iVar7 != 0;
                    *(puVar6 + 10) = puVar8;
                    *(puVar6 + 0xc) = puVar8;
                    iVar9 = *(iVar12 + 0x138) + *(iVar12 + 0x14c) * 0x10;
                    piVar14 = *(iVar9 + 8);
                    uVar4 = __list_add_valid(puVar8,piVar14,iVar9);
                    if ((uVar4 & 1) != 0) {
                        *(iVar9 + 8) = puVar8;
                        *(puVar6 + 10) = iVar9;
                        *(puVar6 + 0xc) = piVar14;
                        *piVar14 = puVar8;
                    }
                    uVar16 = uVar16 + 0x1fc;
                    uVar4 = uVar13 - puVar6[2];
                } while (uVar13 - puVar6[2] != 0);
            }
            else {
                uVar1 = *(iVar9 + -0x28);
                uVar13 = *(iVar9 + -0x24) + uVar1;
                if (((uVar16 < uVar13) || (uVar13 + 0x3fc < uVar16)) ||
                   (uVar15 = uVar1, uVar13 + *(iVar9 + -0x20) * 4 != uVar16)) goto code_r0x08004c28;
                uVar11 = *(iVar9 + -0x20) + uVar11;
                uVar16 = uVar11;
                if (0x7e < uVar11) {
                    uVar16 = 0x7f;
                }
                uVar4 = uVar11 - uVar16;
                *(iVar9 + -0x20) = uVar16;
                if (uVar11 - uVar16 != 0) {
                    uVar16 = uVar13 + uVar16 * 4;
                    goto code_r0x08004c28;
                }
            }
            uVar16 = 0;
            goto code_r0x08004d5c;
        }
        pcVar5 = "DCC: Invalid length\n";
    }
    else {
        pcVar5 = "Select link list to program using curr_list\n";
    }
    _dev_err(*(iVar12 + 0x10),pcVar5);
    uVar16 = 0xffffffea;
code_r0x08004d5c:
    mutex_unlock(iVar12 + 0x18);
    return uVar16;
}


// ===== sym.interrupt_disable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002230 (size 8) =====

uint64_t sym.interrupt_disable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uchar *puVar1;
    uint8_t uVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint uVar8;
    uint64_t *puVar9;
    ulong *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar9 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_38 = *(iVar15 + 0x5e0);
    iVar15 = *(param_1 + 0x98);
    uStack_40 = 0;
    uVar14 = param_4;
    iVar4 = kstrtoull(param_3,0x10);
    uVar7 = 0xffffffffffffffea;
    if ((iVar4 == 0) && (uStack_40 < 2)) {
        iVar5 = iVar15 + 0x18;
        mutex_lock(iVar5);
        *(iVar15 + 0x98) = uStack_40 != 0;
        mutex_unlock(iVar5);
        uVar7 = param_4;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar5 = __stack_chk_fail(uVar7);
    puVar10 = &uStack_a0;
    *extraout_x18 = sym.loop_store;
    pcStack_88 = sym.loop_store;
    iVar15 = sp_el0;
    iStack_98 = *(iVar15 + 0x5e0);
    iVar17 = *(iVar5 + 0x98);
    uStack_a0 = 0;
    iVar15 = iVar17 + 0x18;
    uVar7 = uVar14;
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(iVar15);
    iVar4 = kstrtoull(puVar9,0x10,&uStack_a0);
    uVar3 = uStack_a0;
    if (iVar4 == 0) {
        if (*(iVar17 + 0x14c) < *(iVar17 + 0x148)) {
            puVar10 = 0x38;
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x38);
            if (iVar5 == 0) {
                uVar14 = 0xfffffffffffffff4;
            }
            else {
                uVar11 = uVar3;
                if (0xfe < uVar11) {
                    uVar11 = 0xff;
                }
                iVar12 = iVar5 + 0x28;
                *(iVar5 + 0x10) = uVar11;
                iVar13 = *(iVar17 + 0x14c) * 4;
                iVar4 = *(*(iVar17 + 0x140) + iVar13);
                *(*(iVar17 + 0x140) + iVar13) = iVar4 + 1;
                *(iVar5 + 0xc) = iVar4;
                *(iVar5 + 0x20) = 1;
                *(iVar5 + 0x28) = iVar12;
                *(iVar5 + 0x30) = iVar12;
                puVar1 = *(iVar17 + 0x138) + *(iVar17 + 0x14c) * 0x10;
                piVar16 = *(puVar1 + 8);
                puVar10 = puVar1;
                uVar6 = __list_add_valid(iVar12,piVar16,puVar1);
                if ((uVar6 & 1) != 0) {
                    *(puVar1 + 8) = iVar12;
                    *(iVar5 + 0x28) = puVar1;
                    *(iVar5 + 0x30) = piVar16;
                    *piVar16 = iVar12;
                }
            }
            goto code_r0x08005268;
        }
        _dev_err(iVar5,"Select link list to program using curr_list\n");
    }
    uVar14 = 0xffffffffffffffea;
code_r0x08005268:
    mutex_unlock(iVar15);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_98) {
        return uVar14;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_00 = sym.rd_mod_wr_store;
    pcStack_b8 = sym.rd_mod_wr_store;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_d0 + 4;
    iVar17 = *(iVar17 + 0x98);
    uStack_d0 = 0;
    ppuStack_c0 = &puStack_90;
    iStack_b0 = iVar15;
    uStack_a8 = uVar14;
    iVar4 = sscanf(puVar10,"%x %x",iVar5,&uStack_d0);
    uVar8 = iVar5;
    if (iVar4 == 2) {
        uVar14 = uStack_d0 & 0xffffffff;
        iVar4 = sym.dcc_rd_mod_wr_add(iVar17,uStack_d0 >> 0x20,uVar14);
        uVar8 = uVar14;
        if (iVar4 != 0) {
            uVar7 = iVar4;
        }
    }
    else {
        uVar7 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_c8) {
        auVar18 = __stack_chk_fail(uVar7);
        iVar15 = auVar18._0_8_;
        *extraout_x18_01 = sym.dcc_rd_mod_wr_add;
        mutex_lock(iVar15 + 0x18);
        if (*(iVar15 + 0x14c) < *(iVar15 + 0x148)) {
            piVar16 = *(iVar15 + 0x138) + *(iVar15 + 0x14c) * 0x10;
            if (piVar16 == *piVar16) {
                _dev_err(*(iVar15 + 0x10),"DCC: No read address programmed\n");
                uVar11 = 0xffffffff;
            }
            else {
                iVar5 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar5 = 0x30;
                }
                iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x38);
                if (iVar5 == 0) {
                    uVar11 = 0xfffffff4;
                }
                else {
                    uVar2 = *(iVar15 + 0x14c);
                    iVar13 = *(iVar15 + 0x140);
                    *(iVar5 + 0x14) = uVar8;
                    *(iVar5 + 0x18) = auVar18._8_4_;
                    iVar17 = iVar5 + 0x28;
                    iVar12 = uVar2 * 4;
                    *(iVar5 + 0x20) = 2;
                    iVar4 = *(iVar13 + iVar12);
                    *(iVar13 + iVar12) = iVar4 + 1;
                    *(iVar5 + 0xc) = iVar4;
                    *(iVar5 + 0x28) = iVar17;
                    *(iVar5 + 0x30) = iVar17;
                    iVar12 = *(iVar15 + 0x138) + *(iVar15 + 0x14c) * 0x10;
                    piVar16 = *(iVar12 + 8);
                    uVar7 = __list_add_valid(iVar17,piVar16,iVar12);
                    uVar11 = 0;
                    if ((uVar7 & 1) != 0) {
                        *(iVar12 + 8) = iVar17;
                        *(iVar5 + 0x28) = iVar12;
                        *(iVar5 + 0x30) = piVar16;
                        *piVar16 = iVar17;
                    }
                }
            }
        }
        else {
            _dev_err(*(iVar15 + 0x10),"Select link list to program using curr_list\n");
            uVar11 = 0xffffffea;
        }
        mutex_unlock(iVar15 + 0x18);
        return uVar11;
    }
    return uVar7;
}


// ===== sym.curr_list_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002238 (size 8) =====

int64_t sym.curr_list_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    uint32_t *puVar12;
    char *pcVar13;
    uint32_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar15;
    int64_t iVar16;
    int64_t iVar17;
    ulong unaff_x30;
    int iStack_a4;
    uint32_t uStack_a0;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar11 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_38 = *(iVar10 + 0x5e0);
    piVar15 = *(param_1 + 0x98);
    uStack_40 = 0;
    iVar10 = param_4;
    iVar5 = kstrtoull(param_3,0x10,&uStack_40);
    if ((iVar5 != 0) || (*(piVar15 + 0x29) <= uStack_40)) {
        param_4 = -0x16;
        goto code_r0x0800570c;
    }
    mutex_lock(piVar15 + 3);
    pcVar13 = piVar15[0xf];
    if ((((*pcVar13 == '\0') && (pcVar13[1] == '\0')) && (pcVar13[2] == '\0')) &&
       (((pcVar13[3] == '\0' && (pcVar13[4] == '\0')) && ((pcVar13[5] == '\0' && (pcVar13[6] == '\0')))))) {
        bVar4 = pcVar13[7] == '\0';
    }
    else {
        bVar4 = false;
    }
    if ((*(piVar15 + 0x14c) == -1) || (bVar4)) {
        if (piVar15[0xd] == 1) {
            uVar14 = uStack_40 << 7 | 0x2c;
        }
        else if (piVar15[0xd] == 0) {
            uVar14 = uStack_40 << 7 | 0x1c;
        }
        else {
            uVar14 = uStack_40 << 7 | 0x34;
        }
        if ((*(*piVar15 + uVar14) & 1) != 0) {
            iVar16 = piVar15[2];
            pcVar13 = "DCC linked list is already configured\n";
            goto code_r0x08005790;
        }
        *(piVar15 + 0x14c) = uStack_40;
    }
    else {
        iVar16 = piVar15[2];
        pcVar13 = "DCC is enabled, please disable it first.\n";
code_r0x08005790:
        _dev_err(iVar16,pcVar13);
        param_4 = -0x16;
    }
    mutex_unlock(piVar15 + 3);
code_r0x0800570c:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = 0x80057b0;
    uStack_88 = 0x80057b0;
    iVar16 = sp_el0;
    iStack_98 = *(iVar16 + 0x5e0);
    iVar17 = *(iVar7 + 0x98);
    uStack_9c = 0;
    iStack_a4 = 0;
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(iVar17 + 0x18);
    puVar12 = &uStack_9c;
    iVar6 = sscanf(puVar11,"%x %x %d",puVar12,&uStack_a0,&iStack_a4);
    uVar3 = uStack_9c;
    uVar14 = uStack_a0;
    iVar5 = iStack_a4;
    iVar16 = -0x16;
    if (((0xfffffffd < iVar6 - 4U) && (-1 < iStack_a4)) && (iStack_a4 < 2)) {
        if (*(iVar17 + 0x14c) < *(iVar17 + 0x148)) {
            puVar12 = 0x38;
            iVar16 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar16 = 0x30;
            }
            puVar8 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar16),0xdc0,0x38);
            if (puVar8 == NULL) {
                iVar16 = -0xc;
            }
            else {
                puVar8[5] = uVar14;
                puVar8[8] = 3;
                puVar1 = puVar8 + 10;
                *puVar8 = uVar3 & 0xfffffff0;
                puVar8[1] = uVar3 & 0xf;
                iVar16 = *(iVar17 + 0x14c) * 4;
                uVar14 = *(*(iVar17 + 0x140) + iVar16);
                *(*(iVar17 + 0x140) + iVar16) = uVar14 + 1;
                puVar8[2] = 1;
                puVar8[3] = uVar14;
                *(puVar8 + 7) = iVar5 != 0;
                *(puVar8 + 10) = puVar1;
                *(puVar8 + 0xc) = puVar1;
                puVar2 = *(iVar17 + 0x138) + *(iVar17 + 0x14c) * 0x10;
                piVar15 = *(puVar2 + 2);
                puVar12 = puVar2;
                uVar9 = __list_add_valid(puVar1,piVar15,puVar2);
                iVar16 = iVar10;
                if ((uVar9 & 1) != 0) {
                    *(puVar2 + 2) = puVar1;
                    *(puVar8 + 10) = puVar2;
                    *(puVar8 + 0xc) = piVar15;
                    *piVar15 = puVar1;
                }
            }
        }
        else {
            _dev_err(iVar7,"Select link list to program using curr_list\n");
            iVar16 = -0x16;
        }
    }
    mutex_unlock(iVar17 + 0x18);
    iVar10 = sp_el0;
    if (*(iVar10 + 0x5e0) != iStack_98) {
        iVar10 = __stack_chk_fail();
        *extraout_x18_00 = sym.cti_trig_show;
        iVar5 = scnprintf(puVar12,0x1000,0x800093d,*(*(*(iVar10 + 0x98) + 0x150) + *(*(iVar10 + 0x98) + 0x14c)));
        return iVar5;
    }
    return iVar16;
}


// ===== sym.trigger_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002240 (size 8) =====

uint64_t sym.trigger_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *extraout_x9;
    uint32_t uVar11;
    uint64_t uVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piVar13 = *(param_1 + 0x98);
    iStack_70 = 0;
    iVar3 = kstrtoull(param_3,0x10,&iStack_70);
    uVar4 = 0xffffffffffffffea;
    if ((iVar3 == 0) && (iStack_70 == 1)) {
        mutex_lock(piVar13 + 3);
        uVar10 = *(piVar13 + 0x29);
        if (uVar10 != 0) {
            uVar11 = 0;
            uVar4 = 0x30;
            do {
                iVar3 = uVar4;
                if ((*(piVar13[0xf] + uVar11) != '\0') && (*(piVar13[0x11] + uVar11) != '\0')) {
                    _dev_info(piVar13[2],"DCC SW trigger link list %d\n",uVar11);
                    uVar10 = uVar11 << 7;
                    uVar9 = uVar11 << 7 | 0x38;
                    uVar12 = uVar4;
                    if ((piVar13[0xd] != 1) && (uVar12 = uVar9, piVar13[0xd] == 0)) {
                        uVar12 = uVar10 | 0x20;
                    }
                    uVar1 = *(*piVar13 + uVar12);
                    iVar2 = piVar13[0xd];
                    uVar14 = 0xfffffeff;
                    if (iVar2 != 2) {
                        uVar14 = 0xfffffdff;
                    }
                    uVar12 = uVar4;
                    if ((iVar2 != 1) && (uVar12 = uVar9, iVar2 == 0)) {
                        uVar12 = uVar10 | 0x20;
                    }
                    *(*piVar13 + uVar12) = uVar14 & uVar1;
                    if (piVar13[0xd] == 1) {
                        uVar14 = iVar3 + 0x28;
                    }
                    else if (piVar13[0xd] == 0) {
                        uVar14 = uVar10 | 0x44;
                    }
                    else {
                        uVar14 = uVar10 | 0x60;
                    }
                    *(*piVar13 + uVar14) = 1;
                    if ((piVar13[0xd] != 1) && (uVar4 = uVar9, piVar13[0xd] == 0)) {
                        uVar4 = uVar10 | 0x20;
                    }
                    *(*piVar13 + uVar4) = uVar1;
                    uVar10 = *(piVar13 + 0x29);
                }
                uVar11 = uVar11 + 1;
                uVar4 = iVar3 + 0x80;
            } while (uVar11 < uVar10);
        }
        iVar5 = ktime_get();
        uVar4 = sym.readl(*piVar13 + 0x1c);
        if ((uVar4 & 3) != 0) {
            do {
                iVar6 = ktime_get();
                if (iVar5 + 100000 < iVar6) {
                    uVar4 = sym.readl(*piVar13 + 0x1c);
                    if ((uVar4 & 3) != 0) {
                        _dev_err(piVar13[2],"DCC is busy after receiving sw tigger.\n");
                        param_4 = -0x10;
                        goto code_r0x08003534;
                    }
                    break;
                }
                usleep_range_state(1,1,2);
                uVar4 = sym.readl(*piVar13 + 0x1c);
            } while ((uVar4 & 3) != 0);
        }
        uVar10 = *(piVar13 + 0x29);
        if (uVar10 != 0) {
            uVar11 = 0;
            uVar14 = 100;
            do {
                if (*(piVar13[0xf] + uVar11) != '\0') {
                    if (piVar13[0xd] == 1) {
                        uVar10 = uVar14 - 8;
                    }
                    else if (piVar13[0xd] == 0) {
                        uVar10 = uVar11 << 7 | 0x48;
                    }
                    else {
                        uVar10 = uVar11 << 7 | 100;
                    }
                    if (*(*piVar13 + uVar10) != 0) {
                        _dev_err(piVar13[2],"Read access error for list %d err: 0x%x.\n");
                        uVar10 = uVar14 - 0x2c;
                        if (piVar13[0xd] == 0) {
                            uVar4 = uVar14 - 0x44;
                        }
                        else {
                            uVar4 = uVar10;
                            if (piVar13[0xd] == 1) {
                                uVar4 = uVar14 - 0x34;
                            }
                        }
                        uVar1 = *(*piVar13 + uVar4);
                        iVar3 = piVar13[0xd];
                        uVar11 = 0xfffffeff;
                        if (iVar3 != 2) {
                            uVar11 = 0xfffffdff;
                        }
                        if (iVar3 == 0) {
                            uVar4 = uVar14 - 0x44;
                        }
                        else {
                            uVar4 = uVar10;
                            if (iVar3 == 1) {
                                uVar4 = uVar14 - 0x34;
                            }
                        }
                        *(*piVar13 + uVar4) = uVar11 & uVar1;
                        if (piVar13[0xd] == 0) {
                            uVar4 = uVar14 - 0x1c;
                        }
                        else {
                            uVar4 = uVar14;
                            if (piVar13[0xd] == 1) {
                                uVar4 = uVar14 - 8;
                            }
                        }
                        *(*piVar13 + uVar4) = 3;
                        if (piVar13[0xd] == 0) {
                            uVar10 = uVar14 - 0x44;
                        }
                        else if (piVar13[0xd] == 1) {
                            uVar10 = uVar14 - 0x34;
                        }
                        param_4 = -0x3d;
                        *(*piVar13 + uVar10) = uVar1;
                        break;
                    }
                    uVar10 = *(piVar13 + 0x29);
                }
                uVar11 = uVar11 + 1;
                uVar14 = uVar14 + 0x80;
            } while (uVar11 < uVar10);
        }
code_r0x08003534:
        mutex_unlock(piVar13 + 3);
        uVar4 = param_4;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    puVar7 = __stack_chk_fail(uVar4);
    uVar8 = *extraout_x9;
    *extraout_x18 = 0x8003580;
    log_read_mmio(0x20,puVar7,0x8003590,uVar8);
    uVar10 = *puVar7;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar10,0x20,puVar7,0x80035d4);
    return uVar10;
}


// ===== sym.rd_mod_wr_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002248 (size 8) =====

uint64_t sym.rd_mod_wr_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iVar6 = &uStack_30 + 4;
    iVar10 = *(param_1 + 0x98);
    uStack_30 = 0;
    iVar3 = sscanf(param_3,"%x %x",iVar6,&uStack_30);
    uVar5 = iVar6;
    if (iVar3 == 2) {
        uVar4 = uStack_30 & 0xffffffff;
        iVar3 = sym.dcc_rd_mod_wr_add(iVar10,uStack_30 >> 0x20,uVar4);
        uVar5 = uVar4;
        if (iVar3 != 0) {
            param_4 = iVar3;
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_28) {
        auVar12 = __stack_chk_fail(param_4);
        iVar6 = auVar12._0_8_;
        *extraout_x18 = sym.dcc_rd_mod_wr_add;
        mutex_lock(iVar6 + 0x18);
        if (*(iVar6 + 0x14c) < *(iVar6 + 0x148)) {
            piVar11 = *(iVar6 + 0x138) + *(iVar6 + 0x14c) * 0x10;
            if (piVar11 == *piVar11) {
                _dev_err(*(iVar6 + 0x10),"DCC: No read address programmed\n");
                uVar9 = 0xffffffff;
            }
            else {
                iVar10 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar10 = 0x30;
                }
                iVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x38);
                if (iVar10 == 0) {
                    uVar9 = 0xfffffff4;
                }
                else {
                    uVar2 = *(iVar6 + 0x14c);
                    iVar8 = *(iVar6 + 0x140);
                    *(iVar10 + 0x14) = uVar5;
                    *(iVar10 + 0x18) = auVar12._8_4_;
                    iVar1 = iVar10 + 0x28;
                    iVar7 = uVar2 * 4;
                    *(iVar10 + 0x20) = 2;
                    iVar3 = *(iVar8 + iVar7);
                    *(iVar8 + iVar7) = iVar3 + 1;
                    *(iVar10 + 0xc) = iVar3;
                    *(iVar10 + 0x28) = iVar1;
                    *(iVar10 + 0x30) = iVar1;
                    iVar7 = *(iVar6 + 0x138) + *(iVar6 + 0x14c) * 0x10;
                    piVar11 = *(iVar7 + 8);
                    uVar4 = __list_add_valid(iVar1,piVar11,iVar7);
                    uVar9 = 0;
                    if ((uVar4 & 1) != 0) {
                        *(iVar7 + 8) = iVar1;
                        *(iVar10 + 0x28) = iVar7;
                        *(iVar10 + 0x30) = piVar11;
                        *piVar11 = iVar1;
                    }
                }
            }
        }
        else {
            _dev_err(*(iVar6 + 0x10),"Select link list to program using curr_list\n");
            uVar9 = 0xffffffea;
        }
        mutex_unlock(iVar6 + 0x18);
        return uVar9;
    }
    return param_4;
}


// ===== sym.loop_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002250 (size 8) =====

uint64_t sym.loop_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uchar *puVar1;
    uint8_t uVar2;
    ulong uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint uVar9;
    ulong *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uint64_t uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    puVar10 = &uStack_60;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar15 = *(param_1 + 0x98);
    uStack_60 = 0;
    iVar7 = iVar15 + 0x18;
    uVar8 = param_4;
    mutex_lock(iVar7);
    iVar4 = kstrtoull(param_3,0x10,&uStack_60);
    uVar3 = uStack_60;
    if (iVar4 == 0) {
        if (*(iVar15 + 0x14c) < *(iVar15 + 0x148)) {
            puVar10 = 0x38;
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            iVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x38);
            if (iVar6 == 0) {
                param_4 = 0xfffffffffffffff4;
            }
            else {
                uVar11 = uVar3;
                if (0xfe < uVar11) {
                    uVar11 = 0xff;
                }
                iVar12 = iVar6 + 0x28;
                *(iVar6 + 0x10) = uVar11;
                iVar13 = *(iVar15 + 0x14c) * 4;
                iVar4 = *(*(iVar15 + 0x140) + iVar13);
                *(*(iVar15 + 0x140) + iVar13) = iVar4 + 1;
                *(iVar6 + 0xc) = iVar4;
                *(iVar6 + 0x20) = 1;
                *(iVar6 + 0x28) = iVar12;
                *(iVar6 + 0x30) = iVar12;
                puVar1 = *(iVar15 + 0x138) + *(iVar15 + 0x14c) * 0x10;
                piVar14 = *(puVar1 + 8);
                puVar10 = puVar1;
                uVar5 = __list_add_valid(iVar12,piVar14,puVar1);
                if ((uVar5 & 1) != 0) {
                    *(puVar1 + 8) = iVar12;
                    *(iVar6 + 0x28) = puVar1;
                    *(iVar6 + 0x30) = piVar14;
                    *piVar14 = iVar12;
                }
            }
            goto code_r0x08005268;
        }
        _dev_err(param_1,"Select link list to program using curr_list\n");
    }
    param_4 = 0xffffffffffffffea;
code_r0x08005268:
    mutex_unlock(iVar7);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return param_4;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.rd_mod_wr_store;
    pcStack_78 = sym.rd_mod_wr_store;
    iVar15 = sp_el0;
    iStack_88 = *(iVar15 + 0x5e0);
    iVar15 = &uStack_90 + 4;
    iVar6 = *(iVar6 + 0x98);
    uStack_90 = 0;
    puStack_80 = &stack0xffffffffffffffb0;
    iStack_70 = iVar7;
    uStack_68 = param_4;
    iVar4 = sscanf(puVar10,"%x %x",iVar15,&uStack_90);
    uVar9 = iVar15;
    if (iVar4 == 2) {
        uVar5 = uStack_90 & 0xffffffff;
        iVar4 = sym.dcc_rd_mod_wr_add(iVar6,uStack_90 >> 0x20,uVar5);
        uVar9 = uVar5;
        if (iVar4 != 0) {
            uVar8 = iVar4;
        }
    }
    else {
        uVar8 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_88) {
        auVar16 = __stack_chk_fail(uVar8);
        iVar7 = auVar16._0_8_;
        *extraout_x18_00 = sym.dcc_rd_mod_wr_add;
        mutex_lock(iVar7 + 0x18);
        if (*(iVar7 + 0x14c) < *(iVar7 + 0x148)) {
            piVar14 = *(iVar7 + 0x138) + *(iVar7 + 0x14c) * 0x10;
            if (piVar14 == *piVar14) {
                _dev_err(*(iVar7 + 0x10),"DCC: No read address programmed\n");
                uVar11 = 0xffffffff;
            }
            else {
                iVar15 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar15 = 0x30;
                }
                iVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xdc0,0x38);
                if (iVar15 == 0) {
                    uVar11 = 0xfffffff4;
                }
                else {
                    uVar2 = *(iVar7 + 0x14c);
                    iVar13 = *(iVar7 + 0x140);
                    *(iVar15 + 0x14) = uVar9;
                    *(iVar15 + 0x18) = auVar16._8_4_;
                    iVar6 = iVar15 + 0x28;
                    iVar12 = uVar2 * 4;
                    *(iVar15 + 0x20) = 2;
                    iVar4 = *(iVar13 + iVar12);
                    *(iVar13 + iVar12) = iVar4 + 1;
                    *(iVar15 + 0xc) = iVar4;
                    *(iVar15 + 0x28) = iVar6;
                    *(iVar15 + 0x30) = iVar6;
                    iVar12 = *(iVar7 + 0x138) + *(iVar7 + 0x14c) * 0x10;
                    piVar14 = *(iVar12 + 8);
                    uVar8 = __list_add_valid(iVar6,piVar14,iVar12);
                    uVar11 = 0;
                    if ((uVar8 & 1) != 0) {
                        *(iVar12 + 8) = iVar6;
                        *(iVar15 + 0x28) = iVar12;
                        *(iVar15 + 0x30) = piVar14;
                        *piVar14 = iVar6;
                    }
                }
            }
        }
        else {
            _dev_err(*(iVar7 + 0x10),"Select link list to program using curr_list\n");
            uVar11 = 0xffffffea;
        }
        mutex_unlock(iVar7 + 0x18);
        return uVar11;
    }
    return uVar8;
}


// ===== sym.sw_trig_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002258 (size 8) =====

uint64_t sym.sw_trig_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint uVar1;
    uint32_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    uchar uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    uint64_t *puVar11;
    char *pcVar12;
    uint32_t *puVar13;
    int iVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    uint32_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar18;
    int64_t iVar19;
    int64_t *piVar20;
    int64_t *piVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [12];
    uint32_t uStack_124;
    int iStack_120;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    uint64_t uStack_f8;
    int64_t iStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_40;
    int64_t iStack_38;
    uint uVar2;
    
    puVar11 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_38 = *(iVar19 + 0x5e0);
    iVar19 = *(param_1 + 0x98);
    uStack_40 = 0;
    uVar15 = param_4;
    iVar7 = kstrtoull(param_3,0x10);
    uVar8 = 0xffffffffffffffea;
    if ((iVar7 == 0) && (uStack_40 < 2)) {
        if (*(iVar19 + 0x14c) < *(iVar19 + 0x148)) {
            uVar8 = param_4;
            *(*(iVar19 + 0x88) + *(iVar19 + 0x14c)) = uStack_40 != 0;
        }
        else {
            _dev_err(param_1,"Select link list to program using curr_list\n");
            uVar8 = 0xffffffffffffffea;
        }
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.config_show;
    pcStack_98 = sym.config_show;
    iVar19 = sp_el0;
    iStack_a8 = *(iVar19 + 0x5e0);
    iVar24 = *(iVar9 + 0x98);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    iVar19 = iVar24 + 0x18;
    uStack_e8 = 0;
    uStack_e0 = 0;
    *puVar11 = '\0';
    pcVar12 = puVar11;
    puStack_a0 = &stack0xffffffffffffffd0;
    mutex_lock(iVar19);
    if (*(iVar24 + 0x14c) < *(iVar24 + 0x148)) {
        piVar21 = *(iVar24 + 0x138) + *(iVar24 + 0x14c) * 0x10;
        piVar20 = *piVar21;
        if (piVar21 == piVar20) {
            uVar8 = 0;
        }
        else {
            uVar25 = 0;
            iStack_f0 = iVar9;
            do {
                iVar7 = piVar20[-1];
                if (iVar7 == 1) {
                    uVar15 = *(piVar20 + -0x1c);
                    pcVar12 = "Index: 0x%x, Loop: %d\n";
                    iVar7 = scnprintf(&uStack_e8,0x40,"Index: 0x%x, Loop: %d\n",uVar15,piVar20[-3]);
                }
                else {
                    if (iVar7 == 3) {
                        uVar1 = piVar20[-5];
                        uVar4 = *(piVar20 + -0x24);
                        uVar2 = piVar20[-4];
                        uVar23 = *(piVar20 + -0x1c);
                        uVar6 = *(piVar20 + -0xc);
                        pcVar12 = "Write Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    else {
                        if (iVar7 == 2) {
                            uVar15 = *(piVar20 + -0x1c);
                            pcVar12 = "Index: 0x%x, mask: 0x%x, val: 0x%x\n";
                            iVar7 = scnprintf(&uStack_e8,0x40,"Index: 0x%x, mask: 0x%x, val: 0x%x\n",uVar15,
                                              piVar20[-2],*(piVar20 + -0x14));
                            goto code_r0x080049d8;
                        }
                        uVar1 = piVar20[-5];
                        uVar4 = *(piVar20 + -0x24);
                        uVar2 = piVar20[-4];
                        uVar23 = *(piVar20 + -0x1c);
                        uVar6 = *(piVar20 + -0xc);
                        pcVar12 = "Read Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    uVar15 = uVar23;
                    iVar7 = scnprintf(&uStack_e8,0x40,pcVar12,uVar15,uVar1,uVar4,uVar2,uVar6);
                }
code_r0x080049d8:
                uVar23 = iVar7 + uVar25;
                uVar8 = uVar23;
                if (0x1000 < uVar23) {
                    pcVar10 = "DCC: Couldn\'t write complete config\n";
                    iVar9 = iStack_f0;
                    uVar8 = uVar25;
                    goto code_r0x08004a38;
                }
                pcVar12 = 0x1000;
                strlcat(puVar11,&uStack_e8,0x1000);
                piVar20 = *piVar20;
                uVar25 = uVar8;
            } while (*(iVar24 + 0x138) + *(iVar24 + 0x14c) * 0x10 != piVar20);
        }
    }
    else {
        uVar8 = 0xffffffea;
        pcVar10 = "Select link list to program using curr_list\n";
code_r0x08004a38:
        _dev_err(iVar9,pcVar10);
    }
    mutex_unlock(iVar19);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar8;
    }
    iVar24 = __stack_chk_fail();
    *extraout_x18_00 = sym.config_store;
    pcStack_108 = sym.config_store;
    iVar9 = sp_el0;
    iStack_118 = *(iVar9 + 0x5e0);
    puVar13 = &uStack_124;
    puVar16 = &uStack_11c;
    iVar9 = *(iVar24 + 0x98);
    uStack_11c = 0;
    uStack_124 = 0;
    iStack_120 = 0;
    ppuStack_110 = &puStack_a0;
    iStack_100 = iVar19;
    uStack_f8 = uVar8;
    iVar7 = sscanf(pcVar12,"%x %i %d",puVar13,puVar16,&iStack_120);
    iVar14 = puVar16;
    uVar8 = 0xffffffffffffffea;
    if (((0xfffffffc < iVar7 - 4U) && (-1 < iStack_120)) && (iStack_120 < 2)) {
        if (iVar7 == 1) {
            uStack_11c = 1;
code_r0x08004b3c:
            iVar19 = 0;
            iStack_120 = 0;
        }
        else {
            if ((iVar7 != 3) || (iStack_120 != 1)) goto code_r0x08004b3c;
            iVar19 = 1;
            iStack_120 = 1;
        }
        puVar13 = uStack_11c;
        iVar7 = sym.dcc_config_add(iVar9,uStack_124,puVar13,iVar19);
        iVar14 = iVar19;
        uVar8 = uVar15;
        if (iVar7 != 0) {
            uVar8 = iVar7;
        }
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_118) {
        return uVar8;
    }
    auVar26 = __stack_chk_fail(uVar8);
    uVar23 = auVar26._8_4_;
    iVar19 = auVar26._0_8_;
    *extraout_x18_01 = sym.dcc_config_add;
    uVar15 = puVar13 & 0xffffffff;
    mutex_lock(iVar19 + 0x18);
    if (*(iVar19 + 0x14c) < *(iVar19 + 0x148)) {
        uVar17 = puVar13;
        if ((uVar17 != 0) && (uVar17 <= *(iVar19 + 0x50) >> 3)) {
            piVar21 = *(iVar19 + 0x138) + *(iVar19 + 0x14c) * 0x10;
            uVar22 = uVar23 & 0xfffffff0;
            if ((piVar21 == *piVar21) ||
               (iVar9 = *(*(iVar19 + 0x138) + *(iVar19 + 0x14c) * 0x10 + 8), *(iVar9 + -8) != 0)) {
code_r0x08004c28:
                uVar23 = uVar23 - uVar22;
                do {
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x38);
                    if (puVar13 == NULL) {
                        uVar23 = 0xfffffff4;
                        goto code_r0x08004d5c;
                    }
                    uVar5 = *(iVar19 + 0x14c);
                    uVar18 = uVar15;
                    iVar9 = *(iVar19 + 0x140);
                    uVar17 = uVar18;
                    if (0x7e < uVar18) {
                        uVar17 = 0x7f;
                    }
                    *puVar13 = uVar22;
                    puVar13[1] = uVar23;
                    iVar24 = uVar5 * 4;
                    puVar16 = puVar13 + 10;
                    puVar13[2] = uVar17;
                    uVar17 = *(iVar9 + iVar24);
                    *(iVar9 + iVar24) = uVar17 + 1;
                    puVar13[3] = uVar17;
                    puVar13[8] = 0;
                    *(puVar13 + 7) = iVar14 != 0;
                    *(puVar13 + 10) = puVar16;
                    *(puVar13 + 0xc) = puVar16;
                    iVar9 = *(iVar19 + 0x138) + *(iVar19 + 0x14c) * 0x10;
                    piVar21 = *(iVar9 + 8);
                    uVar15 = __list_add_valid(puVar16,piVar21,iVar9);
                    if ((uVar15 & 1) != 0) {
                        *(iVar9 + 8) = puVar16;
                        *(puVar13 + 10) = iVar9;
                        *(puVar13 + 0xc) = piVar21;
                        *piVar21 = puVar16;
                    }
                    uVar23 = uVar23 + 0x1fc;
                    uVar15 = uVar18 - puVar13[2];
                } while (uVar18 - puVar13[2] != 0);
            }
            else {
                uVar3 = *(iVar9 + -0x28);
                uVar18 = *(iVar9 + -0x24) + uVar3;
                if (((uVar23 < uVar18) || (uVar18 + 0x3fc < uVar23)) ||
                   (uVar22 = uVar3, uVar18 + *(iVar9 + -0x20) * 4 != uVar23)) goto code_r0x08004c28;
                uVar17 = *(iVar9 + -0x20) + uVar17;
                uVar23 = uVar17;
                if (0x7e < uVar17) {
                    uVar23 = 0x7f;
                }
                uVar15 = uVar17 - uVar23;
                *(iVar9 + -0x20) = uVar23;
                if (uVar17 - uVar23 != 0) {
                    uVar23 = uVar18 + uVar23 * 4;
                    goto code_r0x08004c28;
                }
            }
            uVar23 = 0;
            goto code_r0x08004d5c;
        }
        pcVar12 = "DCC: Invalid length\n";
    }
    else {
        pcVar12 = "Select link list to program using curr_list\n";
    }
    _dev_err(*(iVar19 + 0x10),pcVar12);
    uVar23 = 0xffffffea;
code_r0x08004d5c:
    mutex_unlock(iVar19 + 0x18);
    return uVar23;
}


// ===== sym.func_type_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002260 (size 8) =====

int64_t sym.func_type_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong *param_3,int param_4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    iVar9 = *(param_1 + 0x98);
    uStack_40 = 0;
    uStack_48 = 0;
    puVar6 = param_3;
    uVar5 = strlen(param_3);
    if (uVar5 < 10) {
        puVar6 = &uStack_48;
        iVar4 = sscanf(param_3,0x80009b3,puVar6);
        if (iVar4 == 1) {
            mutex_lock(iVar9 + 0x18);
            uVar2 = *(iVar9 + 0x14c);
            if (uVar2 < *(iVar9 + 0x148)) {
                if (*(*(iVar9 + 0x78) + uVar2) == '\0') {
                    if (uStack_48 == 0x706163) {
                        uVar7 = 0;
                    }
                    else {
                        if (uStack_48 != 0x637263) goto code_r0x08002f78;
                        uVar7 = 1;
                    }
                    iVar8 = param_4;
                    *(*(iVar9 + 0x60) + uVar2 * 4) = uVar7;
                }
                else {
                    iVar8 = -0x10;
                }
            }
            else {
                _dev_err(param_1,"Select link list to program using curr_list\n");
code_r0x08002f78:
                iVar8 = -0x16;
            }
            mutex_unlock(iVar9 + 0x18);
            goto code_r0x08002f84;
        }
    }
    iVar8 = -0x16;
code_r0x08002f84:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.data_sink_show;
    iVar9 = *(iVar9 + 0x98);
    if (*(iVar9 + 0x148) == 0) {
        iVar8 = 0;
    }
    else {
        uVar5 = 0;
        iVar8 = 0;
        do {
            uVar1 = *(*(iVar9 + 0x58) + uVar5 * 4);
            if (1 < uVar1) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8003074);
                (*pcVar3)();
            }
            iVar4 = scnprintf(puVar6 + iVar8,0x1000 - iVar8,"%u :%s\n",uVar5 & 0xffffffff,
                              *(obj.str_dcc_data_sink + uVar1 * 8));
            iVar8 = iVar8 + iVar4;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar9 + 0x148));
    }
    return iVar8;
}


// ===== sym.config_write_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002268 (size 8) =====

int64_t sym.config_write_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    int iStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iVar11 = *(param_1 + 0x98);
    uStack_5c = 0;
    iStack_64 = 0;
    uStack_60 = 0;
    mutex_lock(iVar11 + 0x18);
    puVar9 = &uStack_5c;
    iVar5 = sscanf(param_3,"%x %x %d",puVar9,&uStack_60,&iStack_64);
    uVar4 = uStack_5c;
    uVar3 = uStack_60;
    iVar6 = iStack_64;
    iVar10 = -0x16;
    if (((0xfffffffd < iVar5 - 4U) && (-1 < iStack_64)) && (iStack_64 < 2)) {
        if (*(iVar11 + 0x14c) < *(iVar11 + 0x148)) {
            puVar9 = 0x38;
            iVar10 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar10 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x38);
            if (puVar7 == NULL) {
                iVar10 = -0xc;
            }
            else {
                puVar7[5] = uVar3;
                puVar7[8] = 3;
                puVar1 = puVar7 + 10;
                *puVar7 = uVar4 & 0xfffffff0;
                puVar7[1] = uVar4 & 0xf;
                iVar10 = *(iVar11 + 0x14c) * 4;
                uVar3 = *(*(iVar11 + 0x140) + iVar10);
                *(*(iVar11 + 0x140) + iVar10) = uVar3 + 1;
                puVar7[2] = 1;
                puVar7[3] = uVar3;
                *(puVar7 + 7) = iVar6 != 0;
                *(puVar7 + 10) = puVar1;
                *(puVar7 + 0xc) = puVar1;
                puVar2 = *(iVar11 + 0x138) + *(iVar11 + 0x14c) * 0x10;
                piVar12 = *(puVar2 + 2);
                puVar9 = puVar2;
                uVar8 = __list_add_valid(puVar1,piVar12,puVar2);
                iVar10 = param_4;
                if ((uVar8 & 1) != 0) {
                    *(puVar2 + 2) = puVar1;
                    *(puVar7 + 10) = puVar2;
                    *(puVar7 + 0xc) = piVar12;
                    *piVar12 = puVar1;
                }
            }
        }
        else {
            _dev_err(param_1,"Select link list to program using curr_list\n");
            iVar10 = -0x16;
        }
    }
    mutex_unlock(iVar11 + 0x18);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_58) {
        iVar10 = __stack_chk_fail();
        *extraout_x18 = sym.cti_trig_show;
        iVar6 = scnprintf(puVar9,0x1000,0x800093d,*(*(*(iVar10 + 0x98) + 0x150) + *(*(iVar10 + 0x98) + 0x14c)));
        return iVar6;
    }
    return iVar10;
}


// ===== sym.enable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002270 (size 8) =====

uint64_t sym.enable_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    int64_t *piVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    int iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint64_t *puVar16;
    char *pcVar17;
    int iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    int64_t *piVar21;
    uint32_t uVar22;
    int iVar23;
    int iVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar28;
    ulong uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    int64_t iVar32;
    ulong unaff_x30;
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar16 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar32 = sp_el0;
    iStack_38 = *(iVar32 + 0x5e0);
    piVar28 = *(param_1 + 0x98);
    uStack_40 = 0;
    iVar9 = kstrtoull(param_3,0x10,&uStack_40);
    uVar11 = 0xffffffffffffffea;
    if ((iVar9 != 0) || (1 < uStack_40)) goto code_r0x0800392c;
    if (uStack_40 == 0) {
        mutex_lock(piVar28 + 3);
        iVar32 = ktime_get();
        uVar11 = sym.readl(*piVar28 + 0x1c);
        if ((uVar11 & 3) != 0) {
            do {
                iVar12 = ktime_get();
                if (iVar32 + 100000 < iVar12) {
                    uVar11 = sym.readl(*piVar28 + 0x1c);
                    if ((uVar11 & 3) != 0) {
                        _dev_err(piVar28[2],"DCC is not ready Disabling DCC...\n");
                        uVar10 = *(piVar28 + 0x29);
                        goto joined_r0x08003900;
                    }
                    break;
                }
                usleep_range_state(1,1,2);
                uVar11 = sym.readl(*piVar28 + 0x1c);
            } while ((uVar11 & 3) != 0);
        }
        uVar10 = *(piVar28 + 0x29);
joined_r0x08003900:
        if (uVar10 != 0) {
            uVar20 = 0;
            uVar19 = 0x34;
            do {
                if (*(piVar28[0xf] + uVar20) != '\0') {
                    uVar22 = uVar20 << 7;
                    uVar10 = uVar20 << 7 | 0x38;
                    if (piVar28[0xd] == 1) {
                        uVar11 = uVar19 - 4;
                    }
                    else {
                        uVar11 = uVar10;
                        if (piVar28[0xd] == 0) {
                            uVar11 = uVar22 | 0x20;
                        }
                    }
                    *(*piVar28 + uVar11) = 0;
                    if (piVar28[0xd] == 1) {
                        uVar11 = uVar19;
                    }
                    else if (piVar28[0xd] == 0) {
                        uVar11 = uVar22 | 0x24;
                    }
                    else {
                        uVar11 = uVar22 | 0x3c;
                    }
                    *(*piVar28 + uVar11) = 0;
                    if (piVar28[0xd] != 1) {
                        if (piVar28[0xd] == 0) {
                            uVar10 = uVar19 - 0xc;
                        }
                        else {
                            uVar10 = uVar22 | 0x40;
                        }
                    }
                    *(*piVar28 + uVar10) = 0;
                    if (piVar28[0xd] == 1) {
                        uVar22 = uVar19 - 8;
                    }
                    else if (piVar28[0xd] == 0) {
                        uVar22 = uVar22 | 0x1c;
                    }
                    else {
                        uVar22 = uVar22 | 0x34;
                    }
                    *(*piVar28 + uVar22) = 0;
                    *(piVar28[0xf] + uVar20) = 0;
                    uVar10 = *(piVar28 + 0x29);
                }
                uVar20 = uVar20 + 1;
                uVar19 = uVar19 + 0x80;
            } while (uVar20 < uVar10);
        }
        puVar16 = *(piVar28 + 10);
        __memset_io(piVar28[9],0,puVar16);
        *(piVar28 + 0x6c) = 0;
        *(piVar28 + 0x15c) = 0;
        mutex_unlock(piVar28 + 3);
code_r0x08003924:
        iVar9 = param_4;
    }
    else {
        iVar9 = sym.dcc_enable(piVar28);
        if (iVar9 == 0) goto code_r0x08003924;
    }
    uVar11 = iVar9;
code_r0x0800392c:
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    piVar28 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.dcc_enable;
    pcStack_98 = sym.dcc_enable;
    iVar32 = sp_el0;
    iStack_a8 = *(iVar32 + 0x5e0);
    iStack_ac = 0;
    uVar29 = *(piVar28[2] + 0x2f0);
    puStack_a0 = &stack0xffffffffffffffd0;
    mutex_lock(piVar28 + 3);
    pcVar17 = piVar28[0xf];
    if (((((*pcVar17 == '\0') && (pcVar17[1] == '\0')) && (pcVar17[2] == '\0')) &&
        ((pcVar17[3] == '\0' && (pcVar17[4] == '\0')))) &&
       ((pcVar17[5] == '\0' && ((pcVar17[6] == '\0' && (pcVar17[7] == '\0')))))) {
        puVar16 = *(piVar28 + 10);
        __memset_io(piVar28[9],0xde,puVar16);
    }
    if (piVar28[0x29] == 0) {
        uVar10 = 0;
    }
    else {
        uVar20 = 0;
        uVar10 = 0;
        do {
            iVar32 = uVar20;
            piVar1 = piVar28[0x27] + uVar20 * 0x10;
            if (piVar1 != *piVar1) {
                if (*(piVar28[0xf] + iVar32) == '\0') {
                    uVar22 = uVar20 << 7;
                    uVar19 = uVar20 << 7 | 0x34;
                    if (piVar28[0xd] == 1) {
                        uVar11 = uVar22 | 0x2c;
                    }
                    else {
                        uVar11 = uVar19;
                        if (piVar28[0xd] == 0) {
                            uVar11 = uVar22 | 0x1c;
                        }
                    }
                    if ((*(*piVar28 + uVar11) & 1) == 0) {
                        puVar16 = uVar20;
                        _dev_info(piVar28[2],"DCC list passed %d\n",puVar16);
                        if (piVar28[0xd] == 1) {
                            uVar11 = uVar22 | 0x2c;
                        }
                        else {
                            uVar11 = uVar19;
                            if (piVar28[0xd] == 0) {
                                uVar11 = uVar22 | 0x1c;
                            }
                        }
                        *(*piVar28 + uVar11) = 1;
                        piVar1 = piVar28[0x27] + iVar32 * 0x10;
                        iVar9 = *(piVar28 + 0x6c);
                        piVar21 = *piVar1;
                        uVar10 = iVar9 << 2;
                        if (piVar1 == piVar21) {
                            iVar18 = 0;
code_r0x08003b48:
                            uVar15 = *(piVar28 + 10);
                            uVar31 = uVar10;
                            if (uVar10 <= uVar15 - 4) {
                                *(piVar28[9] + uVar10) = 0xc0000000;
                                uVar10 = uVar10 + 4;
                                if ((*(piVar28[0xb] + iVar32 * 4) == 0) && (*(piVar28[0xc] + iVar32 * 4) == 0)) {
                                    uVar31 = uVar10 + iVar18;
                                    uVar15 = *(piVar28 + 10);
                                    *(piVar28 + 0x6c) = uVar31 >> 2;
                                    if (uVar31 <= uVar15) {
code_r0x08003bb8:
                                        *(piVar28 + 0xe) = uVar10 >> 2;
                                        if (piVar28[0xd] == 1) {
                                            uVar11 = uVar19;
                                        }
                                        else {
                                            uVar11 = uVar22 | 0x3c;
                                            if (piVar28[0xd] == 0) {
                                                uVar11 = uVar22 | 0x24;
                                            }
                                        }
                                        uVar26 = uVar22 | 0x40;
                                        *(*piVar28 + uVar11) = iVar9 + (*(piVar28 + 0x54) >> 2);
                                        if (piVar28[0xd] == 1) {
                                            uVar11 = uVar22 | 0x38;
                                        }
                                        else {
                                            uVar11 = uVar26;
                                            if (piVar28[0xd] == 0) {
                                                uVar11 = uVar22 | 0x28;
                                            }
                                        }
                                        *(*piVar28 + uVar11) = piVar28[0xe] + (*(piVar28 + 0x54) >> 2);
                                        uVar27 = uVar22 | 0x44;
                                        uVar10 = uVar22 | 0x3c;
                                        if ((piVar28[0xd] != 1) && (uVar10 = uVar27, piVar28[0xd] == 0)) {
                                            uVar10 = uVar22 | 0x2c;
                                        }
                                        *(*piVar28 + uVar10) = 0xfff;
                                        if ((*(*piVar28 + 4) >> 7 & 1) == 0) {
                                            uVar10 = 0;
                                        }
                                        else {
                                            puVar16 = &iStack_ac;
                                            uVar10 = of_property_read_variable_u32_array
                                                               (uVar29,"qcom,transaction_timeout",puVar16,1,0);
                                            if (uVar10 < 0) {
                                                iStack_ac = 0x3f;
                                            }
                                            else if (iStack_ac == 0) {
                                                uVar10 = 0;
                                                goto code_r0x08004098;
                                            }
                                            if (piVar28[0xd] != 1) {
                                                if (piVar28[0xd] == 0) {
                                                    uVar26 = uVar22 | 0x30;
                                                }
                                                else {
                                                    uVar26 = uVar22 | 0x48;
                                                }
                                            }
                                            uVar10 = uVar10 & uVar10 >> 0x1f;
                                            *(*piVar28 + uVar26) = iStack_ac;
                                        }
code_r0x08004098:
                                        uVar26 = uVar22 | 0x4c;
                                        uVar25 = uVar27;
                                        if ((piVar28[0xd] != 1) && (uVar25 = uVar26, piVar28[0xd] == 0)) {
                                            uVar25 = uVar22 | 0x30;
                                        }
                                        *(*piVar28 + uVar25) = 0;
                                        if (piVar28[0xd] == 1) {
                                            uVar19 = 0x48;
code_r0x080040f0:
                                            uVar19 = uVar22 | uVar19;
                                        }
                                        else if (piVar28[0xd] != 0) {
                                            uVar19 = 0x50;
                                            goto code_r0x080040f0;
                                        }
                                        *(*piVar28 + uVar19) = 7;
                                        _dev_info(piVar28[2],"All values written to enable.\n");
                                        DataSynchronizationBarrier(3,3,0);
                                        *(piVar28[0xf] + iVar32) = 1;
                                        if (*(piVar28[0xc] + iVar32 * 4) == 1) {
                                            iVar12 = ktime_get();
                                            uVar11 = sym.readl(*piVar28 + 0x1c);
                                            if ((uVar11 & 3) != 0) {
                                                do {
                                                    iVar13 = ktime_get();
                                                    if (iVar12 + 100000 < iVar13) {
                                                        uVar11 = sym.readl(*piVar28 + 0x1c);
                                                        if ((uVar11 & 3) != 0) {
                                                            _dev_err(piVar28[2],"DCC is not ready\n");
                                                        }
                                                        break;
                                                    }
                                                    puVar16 = 0x2;
                                                    usleep_range_state(1,1,2);
                                                    uVar11 = sym.readl(*piVar28 + 0x1c);
                                                } while ((uVar11 & 3) != 0);
                                            }
                                            if (piVar28[0xd] == 1) {
                                                uVar19 = 0x58;
code_r0x080041c8:
                                                uVar19 = *(piVar28 + 0x14c) << 7 | uVar19;
                                            }
                                            else {
                                                if (piVar28[0xd] == 0) {
                                                    uVar19 = 0x44;
                                                    goto code_r0x080041c8;
                                                }
                                                uVar19 = *(piVar28 + 0x14c) << 7 | 0x60;
                                            }
                                            *(*piVar28 + uVar19) = 1;
                                            iVar12 = ktime_get();
                                            uVar11 = sym.readl(*piVar28 + 0x1c);
                                            if ((uVar11 & 3) != 0) {
                                                do {
                                                    iVar13 = ktime_get();
                                                    if (iVar12 + 100000 < iVar13) {
                                                        uVar11 = sym.readl(*piVar28 + 0x1c);
                                                        if ((uVar11 & 3) != 0) {
                                                            _dev_err(piVar28[2],"DCC is not ready\n");
                                                        }
                                                        break;
                                                    }
                                                    puVar16 = 0x2;
                                                    usleep_range_state(1,1,2);
                                                    uVar11 = sym.readl(*piVar28 + 0x1c);
                                                } while ((uVar11 & 3) != 0);
                                            }
                                            if (piVar28[0xd] == 0) {
                                                uVar19 = 0x44;
code_r0x0800427c:
                                                uVar19 = *(piVar28 + 0x14c) << 7 | uVar19;
                                            }
                                            else {
                                                if (piVar28[0xd] == 1) {
                                                    uVar19 = 0x58;
                                                    goto code_r0x0800427c;
                                                }
                                                uVar19 = *(piVar28 + 0x14c) << 7 | 0x60;
                                            }
                                            *(*piVar28 + uVar19) = 1;
                                            if (piVar28[0xd] == 1) {
                                                uVar19 = 0x48;
code_r0x080042c0:
                                                uVar19 = *(piVar28 + 0x14c) << 7 | uVar19;
                                            }
                                            else {
                                                if (piVar28[0xd] == 0) {
                                                    uVar19 = 0x34;
                                                    goto code_r0x080042c0;
                                                }
                                                uVar19 = *(piVar28 + 0x14c) << 7 | 0x50;
                                            }
                                            *(*piVar28 + uVar19) = 2;
                                            if (piVar28[0x13] == '\0') {
                                                if ((piVar28[0xd] != 1) && (uVar27 = uVar26, piVar28[0xd] == 0)) {
                                                    uVar27 = uVar22 | 0x30;
                                                }
                                                *(*piVar28 + uVar27) = 2;
                                            }
                                        }
                                        iVar9 = piVar28[0xd];
                                        if (iVar9 == 2) {
                                            *(*piVar28 + (uVar22 | 0x6c)) = *(piVar28[0x2f] + iVar32);
                                            if (piVar28[0xd] == 1) {
                                                uVar26 = uVar22 | 0x60;
                                            }
                                            else if (piVar28[0xd] != 0) {
                                                uVar26 = uVar22 | 0x68;
                                            }
                                            *(*piVar28 + uVar26) = *(piVar28[0x2a] + iVar32);
                                            uVar19 = *(piVar28[0xc] + iVar32 * 4) | *(piVar28[0xb] + iVar32 * 4) << 4;
                                            if (*(piVar28[0x10] + iVar32) == '\0') {
                                                if (piVar28[0xd] == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (piVar28[0xd] == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) = uVar19 & 0xfffffeff;
                                            }
                                            else {
                                                if (piVar28[0xd] == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (piVar28[0xd] == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) = uVar19 | 0x100;
                                            }
                                        }
                                        else {
                                            uVar19 = *(piVar28[0x2a] + iVar32) << 8;
                                            uVar26 = *(piVar28[0xb] + iVar32 * 4) << 4;
                                            if (*(piVar28[0x10] + iVar32) == '\0') {
                                                if (iVar9 == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (iVar9 == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) =
                                                     (uVar26 | uVar19 | *(piVar28[0xc] + iVar32 * 4)) & 0xfffffdff;
                                            }
                                            else {
                                                if (iVar9 == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (iVar9 == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) =
                                                     uVar26 | uVar19 | *(piVar28[0xc] + iVar32 * 4) | 0x200;
                                            }
                                        }
                                        goto code_r0x08003a48;
                                    }
                                }
                                else {
                                    uVar15 = *(piVar28 + 10);
                                    *(piVar28 + 0x6c) = uVar10 >> 2;
                                    uVar31 = uVar10;
                                    if (uVar10 <= uVar15) goto code_r0x08003bb8;
                                }
                            }
code_r0x08004558:
                            __memset_io(piVar28[9],0,uVar15);
                            iVar32 = piVar28[2];
                            uVar3 = piVar28[10];
                            pcVar17 = "DCC SRAM oversteps, 0x%x (0x%x)\n";
code_r0x0800457c:
                            puVar16 = uVar31;
                            _dev_err(iVar32,pcVar17,puVar16,uVar3);
                        }
                        else {
                            uVar14 = 0;
                            bVar8 = false;
                            iVar23 = 0;
                            iVar24 = 0;
                            iVar18 = 0;
                            uVar26 = 0;
                            uVar25 = 0;
                            uVar27 = 0;
                            do {
                                iVar4 = piVar21[-1];
                                uVar30 = 0x10000000;
                                uVar31 = uVar10;
                                if (iVar4 == 1) {
                                    if (uVar26 != 0) {
                                        uVar15 = *(piVar28 + 10);
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar26;
                                    }
                                    if (bVar8) {
                                        uVar15 = *(piVar28 + 10);
                                        uVar31 = uVar10;
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar25 = uVar10 - uVar25;
                                        uVar31 = uVar10 + 4;
                                        iVar18 = iVar18 + (iVar18 - iVar24) * iVar23;
                                        uVar11 = uVar10;
                                        uVar10 = 0;
                                        *(piVar28[9] + uVar11) =
                                             (-1L << (*(piVar28 + 0x2b) & 0x3f)) + 0x10000000U &
                                             iVar23 << (*(piVar28 + 0x2b) & 0x1f) | uVar25 >> 2 | 0x40000000;
                                        iVar24 = 0;
                                    }
                                    else {
                                        iVar23 = piVar21[-3] + -1;
                                        uVar31 = uVar10;
                                        iVar24 = iVar18;
                                    }
                                    uVar27 = 0;
                                    uVar26 = 0;
                                    uVar14 = 0;
                                    bVar8 = bVar8 ^ 1;
                                    uVar25 = uVar10;
                                }
                                else if (iVar4 == 3) {
                                    if (uVar26 != 0) {
                                        uVar15 = *(piVar28 + 10);
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar27 = 0;
                                        uVar14 = 0;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar26;
                                    }
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10;
                                    if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                    if (*(piVar21 + -0xc) != '\0') {
                                        uVar30 = 0x30000000;
                                    }
                                    *(piVar28[9] + uVar10) = uVar30 | *(piVar21 + -5) >> 4;
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 4;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    *(piVar28[9] + uVar31) =
                                         uVar26 | *(piVar21 + -0x24) >> 2 & 0xff | (*(piVar21 + -4) & 0x7f) << 8 |
                                         0xc0008000;
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 8;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    uVar26 = 0;
                                    puVar16 = *(piVar21 + -0x14);
                                    *(piVar28[9] + uVar31) = *(piVar21 + -0x14);
                                    uVar31 = uVar10 + 0xc;
                                }
                                else if (iVar4 == 2) {
                                    if (uVar26 != 0) {
                                        uVar15 = *(piVar28 + 10);
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar27 = 0;
                                        uVar14 = 0;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar26;
                                    }
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10;
                                    if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                    *(piVar28[9] + uVar10) = 0x80000000;
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 4;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    *(piVar28[9] + uVar31) = piVar21[-2];
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 8;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    uVar26 = 0;
                                    puVar16 = *(piVar21 + -0x14);
                                    *(piVar28[9] + uVar31) = *(piVar21 + -0x14);
                                    uVar31 = uVar10 + 0xc;
                                }
                                else {
                                    uVar6 = *(piVar21 + -0x24) >> 2;
                                    uVar30 = *(piVar21 + -5) >> 4;
                                    if (*(piVar21 + -0xc) != '\0') {
                                        uVar30 = *(piVar21 + -5) >> 4 | 0x20000000;
                                    }
                                    uVar5 = *(piVar21 + -4);
                                    puVar16 = uVar5;
                                    if (((uVar14 == 0) || (uVar14 != uVar30)) || (uVar6 < uVar27)) {
                                        if (uVar26 != 0) {
                                            uVar15 = *(piVar28 + 10);
                                            if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                            uVar11 = uVar10;
                                            uVar10 = uVar10 + 4;
                                            *(piVar28[9] + uVar11) = uVar26;
                                        }
                                        uVar15 = *(piVar28 + 10);
                                        uVar31 = uVar10;
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar27 = 0;
                                        uVar26 = 0;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar30;
                                    }
                                    if ((0xff < uVar6 - uVar27) || (uVar14 = *(piVar21 + -4), 0x7f < uVar14)) {
                                        uVar31 = *(piVar21 + -5);
                                        uVar3 = *(piVar21 + -0x24);
                                        iVar32 = piVar28[2];
                                        pcVar17 = "DCC: Programming error Base: 0x%x, offset 0x%x\n";
                                        goto code_r0x0800457c;
                                    }
                                    uVar31 = 0;
                                    if (uVar26 != 0) {
                                        uVar31 = 0xf;
                                    }
                                    uVar7 = 0xc0008000;
                                    if (uVar26 != 0) {
                                        uVar7 = uVar26 & 0x7fff | 0xc0000000;
                                    }
                                    uVar7 = ((uVar14 & 0x7f) << 8 | uVar6 - uVar27) << uVar31 | uVar7;
                                    bVar2 = uVar26 != 0;
                                    uVar26 = uVar7;
                                    if (bVar2) {
                                        uVar15 = *(piVar28 + 10);
                                        uVar31 = uVar10;
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar7;
                                        uVar26 = 0;
                                        uVar14 = *(piVar21 + -4);
                                    }
                                    iVar18 = iVar18 + uVar5 * 4;
                                    uVar27 = (uVar6 + uVar14) - 1;
                                    uVar31 = uVar10;
                                    uVar14 = uVar30;
                                }
                                uVar10 = uVar31;
                                piVar21 = *piVar21;
                            } while (piVar28[0x27] + iVar32 * 0x10 != piVar21);
                            if (uVar26 != 0) {
                                uVar15 = *(piVar28 + 10);
                                uVar31 = uVar10;
                                if (uVar10 <= uVar15 - 4) {
                                    *(piVar28[9] + uVar10) = uVar26;
                                    if (bVar8) goto code_r0x080045cc;
                                    uVar10 = uVar10 + 4;
                                    goto code_r0x08003b48;
                                }
                                goto code_r0x08004558;
                            }
                            if (!bVar8) goto code_r0x08003b48;
code_r0x080045cc:
                            _dev_err(piVar28[2],"DCC: Programming error: Loop unterminated\n");
                        }
                        if (piVar28[0xd] == 1) {
                            uVar19 = uVar22 | 0x2c;
                        }
                        else if (piVar28[0xd] == 0) {
                            uVar19 = uVar22 | 0x1c;
                        }
                        *(*piVar28 + uVar19) = 0;
                        _dev_info(piVar28[2],"DCC ram programming failed\n");
                        uVar10 = 0xffffffea;
                        goto code_r0x080044e8;
                    }
                    puVar16 = uVar20;
                    _dev_err(piVar28[2],"List %d is already locked\n",puVar16);
                }
                else {
                    puVar16 = uVar20;
                    _dev_err(piVar28[2],"List %d is already enabled\n",puVar16);
                }
            }
code_r0x08003a48:
            uVar20 = uVar20 + 1;
        } while (uVar20 < *(piVar28 + 0x29));
    }
    *(piVar28 + 0x15c) = *(piVar28 + 0x6c) << 2;
code_r0x080044e8:
    mutex_unlock(piVar28 + 3);
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_a8) {
        return uVar10;
    }
    iVar32 = __stack_chk_fail();
    *extraout_x18_00 = 0x80045e4;
    iVar12 = *(iVar32 + 0x98);
    if (*(iVar12 + 0x14c) < *(iVar12 + 0x148)) {
        iVar9 = scnprintf(puVar16,0x1000,0x8000696,*(*(iVar12 + 0x80) + *(iVar12 + 0x14c)));
        uVar11 = iVar9;
    }
    else {
        _dev_err(iVar32,"Select link list to program using curr_list\n");
        uVar11 = 0xffffffffffffffea;
    }
    return uVar11;
}


// ===== sym.ap_ns_qad_override_en_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002278 (size 8) =====

uint64_t sym.ap_ns_qad_override_en_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    code *pcVar8;
    bool bVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t arg1;
    int64_t iVar13;
    uint32_t *puVar14;
    ulong uVar15;
    uint uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t *piVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_c8;
    uint32_t uStack_c0;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_48 = *(iVar22 + 0x5e0);
    iVar22 = *(param_1 + 0x98);
    uStack_50 = 0;
    if (*(iVar22 + 0x68) == 2) {
        iVar10 = kstrtoull(param_3,0x10,&uStack_50);
        uVar21 = 0xffffffffffffffea;
        if ((iVar10 == 0) && (uStack_50 < 2)) {
            mutex_lock(iVar22 + 0x18);
            uVar3 = *(iVar22 + 0x14c);
            if (uVar3 < *(iVar22 + 0x148)) {
                if (*(*(iVar22 + 0x78) + uVar3) == '\0') {
                    uVar21 = param_4;
                    *(*(iVar22 + 0x178) + uVar3) = uStack_50 != 0;
                }
                else {
                    uVar21 = 0xfffffffffffffff0;
                }
            }
            else {
                _dev_err(param_1,"Select link list to program using curr_list\n");
                uVar21 = 0xffffffffffffffea;
            }
            mutex_unlock(iVar22 + 0x18);
        }
    }
    else {
        _dev_err(param_1,"QAD output is not supported\n");
        uVar21 = 0xffffffffffffffea;
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_48) {
        return uVar21;
    }
    auVar24 = __stack_chk_fail();
    uVar15 = auVar24._8_8_;
    arg1 = auVar24._0_8_;
    *extraout_x18 = sym.dcc_dt_parse;
    pcStack_a8 = sym.dcc_dt_parse;
    iVar22 = sp_el0;
    iStack_b8 = *(iVar22 + 0x5e0);
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    puStack_b0 = &stack0xffffffffffffffc0;
    uVar11 = of_property_read_variable_u32_array(uVar15,"qcom,curr-link-list",&uStack_c0,1,0);
    if (uVar11 < 0) {
        uVar21 = uVar11;
    }
    else {
        if (uStack_c0 < *(arg1 + 0x148)) {
            *(arg1 + 0x14c) = uStack_c0;
            iVar22 = of_find_property(uVar15,"qcom,ap-qad-override",0);
            if (iVar22 != 0) {
                *(*(arg1 + 0x178) + *(arg1 + 0x14c)) = 1;
            }
            *(*(arg1 + 0x58) + uStack_c0 * 4) = 0;
            uVar11 = of_property_read_string(uVar15,"qcom,data-sink",&uStack_c8);
            uVar7 = uStack_c8;
            uVar21 = uVar11;
            if (uVar11 == 0) {
                iVar10 = strcmp(uStack_c8,"sram");
                if (iVar10 == 0) {
                    uVar16 = 0;
                }
                else {
                    iVar10 = strcmp(uVar7,0x8000555);
                    if (iVar10 != 0) {
                        uVar11 = *(*(arg1 + 0x58) + uStack_c0 * 4);
                        if (1 < uVar11) goto code_r0x08006098;
                        _dev_err(*(arg1 + 0x10),"Unknown sink type for DCC Using \'%s\' as data sink\n",
                                 *(obj.str_dcc_data_sink + uVar11 * 8));
                        goto code_r0x08005d9c;
                    }
                    uVar16 = 1;
                }
                *(*(arg1 + 0x58) + uStack_c0 * 4) = uVar16;
            }
code_r0x08005d9c:
            *(*(arg1 + 0x178) + *(arg1 + 0x14c)) = 1;
            iVar22 = of_get_property(uVar15,"qcom,link-list",&uStack_bc);
            if ((iVar22 == 0) || (uVar11 = uStack_bc >> 2, bVar9 = uStack_bc < 4, uStack_bc = uVar11, bVar9))
            goto code_r0x08005ffc;
            uVar11 = 0;
            do {
                uVar12 = *(iVar22 + uVar11 * 4);
                uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                if (3 < uVar12) {
                    uVar21 = 0xffffffea;
                    goto code_r0x0800607c;
                }
                uVar18 = *(iVar22 + (uVar11 + 1) * 4);
                uVar1 = *(iVar22 + (uVar11 + 2) * 4);
                uVar2 = *(iVar22 + (uVar11 + 3) * 4);
                uVar5 = (uVar18 & 0xff00ff00) >> 8;
                uVar4 = uVar5 | (uVar18 & 0xff00ff) << 8;
                uVar6 = uVar4 >> 0x10;
                uVar4 = uVar4 << 0x10;
                uVar18 = uVar6 | uVar4;
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
                switch(uVar12) {
                case 0:
                    uVar12 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                    uVar12 = sym.dcc_config_add(arg1,uVar18,uVar1,uVar12 >> 0x10 | uVar12 << 0x10);
                    goto joined_r0x08005e0c;
                case 1:
                    iVar13 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar13 = 0x30;
                    }
                    puVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar13),0xdc0,0x38);
                    if (puVar14 == NULL) {
code_r0x08006070:
                        uVar21 = 0xfffffff4;
                        goto code_r0x0800607c;
                    }
                    uVar3 = *(arg1 + 0x14c);
                    iVar19 = *(arg1 + 0x140);
                    puVar14[5] = uVar1;
                    puVar14[8] = 3;
                    iVar13 = uVar3 * 4;
                    puVar20 = puVar14 + 10;
                    *puVar14 = uVar6 & 0xfffffff0 | uVar4;
                    puVar14[1] = (uVar5 & 0xf0000) >> 0x10;
                    uVar12 = *(iVar19 + iVar13);
                    *(iVar19 + iVar13) = uVar12 + 1;
                    *(puVar14 + 7) = uVar2 != 0;
                    puVar14[2] = 1;
                    puVar14[3] = uVar12;
                    *(puVar14 + 10) = puVar20;
                    *(puVar14 + 0xc) = puVar20;
                    iVar13 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
                    piVar23 = *(iVar13 + 8);
                    uVar21 = __list_add_valid(puVar20,piVar23,iVar13);
                    if ((uVar21 & 1) != 0) {
                        *(iVar13 + 8) = puVar20;
                        *(puVar14 + 10) = iVar13;
                        *(puVar14 + 0xc) = piVar23;
code_r0x08005fe0:
                        *piVar23 = puVar20;
                    }
                    break;
                case 2:
                    iVar13 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar13 = 0x30;
                    }
                    iVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar13),0xdc0,0x38);
                    if (iVar13 == 0) goto code_r0x08006070;
                    iVar19 = *(arg1 + 0x140);
                    if (0xfe < uVar18) {
                        uVar18 = 0xff;
                    }
                    puVar20 = iVar13 + 0x28;
                    iVar17 = *(arg1 + 0x14c) * 4;
                    *(iVar13 + 0x10) = uVar18;
                    iVar10 = *(iVar19 + iVar17);
                    *(iVar19 + iVar17) = iVar10 + 1;
                    *(iVar13 + 0xc) = iVar10;
                    *(iVar13 + 0x20) = 1;
                    *(iVar13 + 0x28) = puVar20;
                    *(iVar13 + 0x30) = puVar20;
                    iVar19 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
                    piVar23 = *(iVar19 + 8);
                    uVar21 = __list_add_valid(puVar20,piVar23,iVar19);
                    if ((uVar21 & 1) != 0) {
                        *(iVar19 + 8) = puVar20;
                        *(iVar13 + 0x28) = iVar19;
                        *(iVar13 + 0x30) = piVar23;
                        goto code_r0x08005fe0;
                    }
                    break;
                case 3:
                    uVar12 = sym.dcc_rd_mod_wr_add(arg1,uVar18,uVar1);
joined_r0x08005e0c:
                    uVar21 = uVar12;
                    if (uVar12 != 0) {
code_r0x0800607c:
                        _dev_err(*(arg1 + 0x10),"DCC init time config failed err:%d\n",uVar21);
                        goto code_r0x08005ffc;
                    }
                }
                uVar11 = uVar11 + 4;
            } while (uVar11 < uStack_bc);
        }
        else {
            _dev_err(*(arg1 + 0x10),"List configuration failed.\n");
        }
        uVar21 = 0;
    }
code_r0x08005ffc:
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_b8) {
        return uVar21;
    }
    __stack_chk_fail();
code_r0x08006098:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800609c);
    (*pcVar8)();
}


// ===== sym.hw_trig_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002280 (size 8) =====

int64_t sym.hw_trig_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    puVar3 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    uStack_50 = 0;
    iVar2 = kstrtoull(param_3,0x10,&uStack_50);
    iVar4 = -0x16;
    if ((iVar2 == 0) && (uStack_50 < 2)) {
        mutex_lock(iVar5 + 0x18);
        uVar1 = *(iVar5 + 0x14c);
        if (uVar1 < *(iVar5 + 0x148)) {
            if (*(*(iVar5 + 0x78) + uVar1) == '\0') {
                iVar4 = param_4;
                *(*(iVar5 + 0x80) + uVar1) = uStack_50 != 0;
            }
            else {
                iVar4 = -0x10;
            }
        }
        else {
            _dev_err(param_1,"Select link list to program using curr_list\n");
            iVar4 = -0x16;
        }
        mutex_unlock(iVar5 + 0x18);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.sw_trig_show;
    iVar5 = *(iVar4 + 0x98);
    if (*(iVar5 + 0x14c) < *(iVar5 + 0x148)) {
        iVar2 = scnprintf(puVar3,0x1000,0x8000696,*(*(iVar5 + 0x88) + *(iVar5 + 0x14c)));
        iVar4 = iVar2;
    }
    else {
        _dev_err(iVar4,"Select link list to program using curr_list\n");
        iVar4 = -0x16;
    }
    return iVar4;
}


// ===== sym.config_reset_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002288 (size 8) =====

void sym.config_reset_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    int64_t *piVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x98);
    uStack_30 = 0;
    iVar2 = kstrtoull(param_3,0x10,&uStack_30);
    uVar3 = 0xffffffffffffffea;
    if (((iVar2 == 0) && (uStack_30 < 2)) && (uVar3 = param_4, uStack_30 != 0)) {
        sym.dcc_config_reset(iVar8);
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_28) {
        iVar8 = __stack_chk_fail(uVar3);
        *extraout_x18 = sym.dcc_config_reset;
        mutex_lock(iVar8 + 0x18);
        uVar6 = *(iVar8 + 0x148);
        if (uVar6 != 0) {
            uVar7 = 0;
            iVar5 = *(iVar8 + 0x138);
            do {
                piVar10 = iVar5 + uVar7 * 0x10;
                piVar9 = *piVar10;
                if (piVar10 != piVar9) {
                    do {
                        piVar10 = *piVar9;
                        uVar4 = __list_del_entry_valid(piVar9);
                        if ((uVar4 & 1) != 0) {
                            iVar5 = *piVar9;
                            piVar1 = piVar9[1];
                            *(iVar5 + 8) = piVar1;
                            *piVar1 = iVar5;
                        }
                        *piVar9 = -0x2152ffffffffff00;
                        piVar9[1] = -0x2152fffffffffede;
                        kfree(piVar9 + -5);
                        iVar5 = uVar7 * 4;
                        *(*(iVar8 + 0x140) + iVar5) = *(*(iVar8 + 0x140) + iVar5) + -1;
                        iVar5 = *(iVar8 + 0x138);
                        piVar9 = piVar10;
                    } while (iVar5 + uVar7 * 0x10 != piVar10);
                    uVar6 = *(iVar8 + 0x148);
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
        }
        *(iVar8 + 0x6c) = 0;
        *(iVar8 + 0x15c) = 0;
        mutex_unlock(iVar8 + 0x18);
        return;
    }
    return;
}


// ===== sym.cti_trig_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002290 (size 8) =====

int64_t sym.cti_trig_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    puVar3 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar5 = *(param_1 + 0x98);
    uStack_50 = 0;
    iVar2 = kstrtoull(param_3,0x10,&uStack_50);
    iVar4 = -0x16;
    if ((iVar2 == 0) && (uStack_50 < 2)) {
        mutex_lock(iVar5 + 0x18);
        uVar1 = *(iVar5 + 0x14c);
        if (uVar1 < *(iVar5 + 0x148)) {
            if (*(*(iVar5 + 0x78) + uVar1) == '\0') {
                iVar4 = param_4;
                *(*(iVar5 + 0x150) + uVar1) = uStack_50 != 0;
            }
            else {
                iVar4 = -0x10;
            }
        }
        else {
            _dev_err(param_1,"Select link list to program using curr_list\n");
            iVar4 = -0x16;
        }
        mutex_unlock(iVar5 + 0x18);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.ap_ns_qad_override_en_show;
    iVar5 = *(iVar4 + 0x98);
    if (*(iVar5 + 0x68) == 2) {
        iVar2 = scnprintf(puVar3,0x1000,0x800093d,*(*(iVar5 + 0x178) + *(iVar5 + 0x14c)));
        iVar4 = iVar2;
    }
    else {
        _dev_err(iVar4,"QAD output is not supported\n");
        iVar4 = -0x16;
    }
    return iVar4;
}


// ===== sym.no_llseek.cfi_jt @ 0x08002298 (size 8) =====

//WARNING: Control flow encountered bad instruction data

void sym.no_llseek.cfi_jt(void)

{
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


// ===== sym.dcc_v2_restore.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022a0 (size 8) =====

uint sym.dcc_v2_restore.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    int iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    uint uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar12 = *(param_1 + 0x98);
    if (piVar12 == NULL) {
        _dev_err(param_1,"Err: %s Invalid argument\n","dcc_state_restore");
        return 0xffffffea;
    }
    pcVar6 = piVar12[0xf];
    if ((((((*pcVar6 != '\0') || (pcVar6[1] != '\0')) || (pcVar6[2] != '\0')) ||
         ((pcVar6[3] != '\0' || (pcVar6[4] != '\0')))) ||
        ((pcVar6[5] != '\0' || ((pcVar6[6] != '\0' || (pcVar6[7] != '\0')))))) &&
       (iVar4 = *(piVar12 + 0x164), iVar4 != 0)) {
        iVar7 = piVar12[0x2e];
        if ((iVar7 == 0) || (piVar12[0x2d] == 0)) {
            _dev_err(param_1,"Err: Restore state is NULL\n");
            uVar11 = 0xffffffea;
            goto code_r0x0800648c;
        }
        uVar5 = *(piVar12 + 0x15c);
        if (3 < uVar5) {
            uVar9 = 0;
            do {
                if (uVar9 <= piVar12[10] - 4) {
                    *(piVar12[9] + uVar9) = *(iVar7 + uVar9);
                }
                uVar9 = uVar9 + 4;
            } while ((uVar5 & 0xfffffffc) != uVar9);
        }
        mutex_lock(piVar12 + 3);
        if ((piVar12[0x29] != 0) && (0 < iVar4)) {
            uVar5 = 0;
            iVar8 = 0;
            do {
                piVar1 = piVar12[0x27] + uVar5 * 0x10;
                if (piVar1 == *piVar1) {
                    iVar8 = piVar12[0x2c] + iVar8;
                }
                else if (piVar12[0x2c] != 0) {
                    uVar10 = 0;
                    do {
                        iVar3 = iVar8 + uVar10;
                        uVar10 = uVar10 + 1;
                        puVar2 = piVar12[0x2d] + iVar3 * 8;
                        *(*piVar12 + *puVar2) = puVar2[1];
                    } while (uVar10 < *(piVar12 + 0x2c));
                    iVar8 = iVar8 + uVar10;
                }
                uVar5 = uVar5 + 1;
            } while ((uVar5 < *(piVar12 + 0x29)) && (iVar8 < iVar4));
        }
        mutex_unlock(piVar12 + 3);
    }
    uVar11 = 0;
code_r0x0800648c:
    kfree(piVar12[0x2e]);
    piVar12[0x2e] = 0;
    kfree(piVar12[0x2d]);
    piVar12[0x2d] = 0;
    return uVar11;
}


// ===== sym.dcc_v2_thaw.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022a8 (size 8) =====

ulong sym.dcc_v2_thaw.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (((iVar2 == 0) || (*(iVar2 + 0x168) == 0)) || (*(iVar2 + 0x170) == 0)) {
        _dev_err(param_1,"Err: %s Invalid argument\n","dcc_v2_thaw");
        uVar1 = 0xffffffea;
    }
    else {
        kfree(*(iVar2 + 0x170));
        kfree(*(iVar2 + 0x168));
        uVar1 = 0;
        *(iVar2 + 0x168) = 0;
        *(iVar2 + 0x170) = 0;
    }
    return uVar1;
}


// ===== sym.dcc_v2_freeze.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022b0 (size 8) =====

int sym.dcc_v2_freeze.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    uint *puVar8;
    char *pcVar9;
    uint *puVar10;
    uint32_t *puVar11;
    ulong *in_x18;
    uint64_t uVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar13 = *(param_1 + 0x98);
    if (piVar13 == NULL) {
        iVar5 = -0x16;
    }
    else {
        pcVar9 = piVar13[0xf];
        if (((((*pcVar9 != '\0') || (pcVar9[1] != '\0')) || (pcVar9[2] != '\0')) ||
            ((pcVar9[3] != '\0' || (pcVar9[4] != '\0')))) ||
           ((pcVar9[5] != '\0' || ((pcVar9[6] != '\0' || (pcVar9[7] != '\0')))))) {
            uVar4 = *(piVar13 + 0x164);
            uVar12 = uVar4;
            if (uVar4 != 0) {
                if ((uVar12 >> 0x3e != 0) || (puVar6 = __kmalloc(uVar12 << 2,0xdc0), puVar6 == NULL)) {
                    _dev_err(param_1,"Failed to alloc memory for reg_offsets\n");
                    return -0xc;
                }
                iVar5 = of_property_read_variable_u32_array
                                  (*(param_1 + 0x2f0),"ll-reg-offsets",puVar6,uVar12,uVar12);
                if (-1 < iVar5) {
                    iVar7 = __kmalloc(uVar12 << 3,0xdc0);
                    piVar13[0x2d] = iVar7;
                    if (iVar7 == 0) {
                        iVar5 = -0xc;
                    }
                    else {
                        puVar8 = __kmalloc(piVar13[10],0xdc0);
                        piVar13[0x2e] = puVar8;
                        if (puVar8 == NULL) {
                            iVar5 = -0xc;
                        }
                        else {
                            uVar2 = *(piVar13 + 0x15c);
                            uVar12 = uVar2;
                            if ((uVar2 != 0) && (puVar10 = piVar13[9], ((puVar10 | uVar2) & 3) == 0)) {
                                if (3 < uVar2) {
                                    do {
                                        uVar3 = *puVar10;
                                        puVar10 = puVar10 + 1;
                                        uVar12 = uVar12 - 4;
                                        *puVar8 = uVar3;
                                        puVar8 = puVar8 + 1;
                                    } while (3 < uVar12);
                                }
                                mutex_lock(piVar13 + 3);
                                if (0 < uVar4) {
                                    iVar7 = 0;
                                    puVar11 = puVar6;
                                    do {
                                        *(piVar13[0x2d] + iVar7) = *puVar11;
                                        iVar1 = piVar13[0x2d] + iVar7;
                                        iVar7 = iVar7 + 8;
                                        *(iVar1 + 4) = *(*piVar13 + *puVar11);
                                        puVar11 = puVar11 + 1;
                                    } while (uVar4 * 8 - iVar7 != 0);
                                }
                                mutex_unlock(piVar13 + 3);
                                kfree(puVar6);
                                return 0;
                            }
                            _dev_err(param_1,"Failed to copy DCC SRAM contents\n");
                            kfree(piVar13[0x2e]);
                            iVar5 = -0x16;
                            piVar13[0x2e] = 0;
                        }
                        kfree(piVar13[0x2d]);
                        piVar13[0x2d] = 0;
                    }
                }
                kfree(puVar6);
                return iVar5;
            }
        }
        iVar5 = 0;
    }
    return iVar5;
}


// ===== sym.curr_list_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022b8 (size 8) =====

int64_t sym.curr_list_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(param_1 + 0x98);
    iVar1 = iVar3 + 0x18;
    mutex_lock(iVar1);
    if (*(iVar3 + 0x14c) == -1) {
        _dev_err(param_1,"curr_list is not set.\n");
        iVar3 = -0x16;
    }
    else {
        iVar2 = scnprintf(param_3,0x1000,0x800093d);
        iVar3 = iVar2;
    }
    mutex_unlock(iVar1);
    return iVar3;
}


// ===== sym.sw_trig_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022c0 (size 8) =====

int64_t sym.sw_trig_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (*(iVar2 + 0x14c) < *(iVar2 + 0x148)) {
        iVar1 = scnprintf(param_3,0x1000,0x8000696,*(*(iVar2 + 0x88) + *(iVar2 + 0x14c)));
        iVar2 = iVar1;
    }
    else {
        _dev_err(param_1,"Select link list to program using curr_list\n");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.enable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022c8 (size 8) =====

int64_t sym.enable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    char cVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(param_1 + 0x98);
    mutex_lock(iVar5 + 0x18);
    if (*(iVar5 + 0x14c) < *(iVar5 + 0x148)) {
        pcVar3 = *(iVar5 + 0x78);
        if ((((*pcVar3 == '\0') && (pcVar3[1] == '\0')) && (pcVar3[2] == '\0')) &&
           (((pcVar3[3] == '\0' && (pcVar3[4] == '\0')) && ((pcVar3[5] == '\0' && (pcVar3[6] == '\0')))))) {
            cVar2 = pcVar3[7];
        }
        else {
            cVar2 = '\x01';
        }
        iVar1 = scnprintf(param_3,0x1000,0x8000696,cVar2);
        iVar4 = iVar1;
    }
    else {
        _dev_err(param_1,"Select link list to program using curr_list\n");
        iVar4 = -0x16;
    }
    mutex_unlock(iVar5 + 0x18);
    return iVar4;
}


// ===== sym.config_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022d0 (size 8) =====

uint64_t sym.config_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    uint uVar1;
    uint32_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    uchar uVar6;
    int iVar7;
    int64_t iVar8;
    char *pcVar9;
    char *pcVar10;
    uint32_t *puVar11;
    int iVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar16;
    uint32_t uVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    int64_t iVar22;
    uint64_t uVar23;
    ulong unaff_x30;
    uchar auVar24 [12];
    uint32_t uStack_e4;
    int iStack_e0;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uint uVar2;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar22 = *(param_1 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iVar14 = iVar22 + 0x18;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *param_3 = '\0';
    pcVar10 = param_3;
    mutex_lock(iVar14);
    if (*(iVar22 + 0x14c) < *(iVar22 + 0x148)) {
        piVar19 = *(iVar22 + 0x138) + *(iVar22 + 0x14c) * 0x10;
        piVar18 = *piVar19;
        if (piVar19 == piVar18) {
            uVar16 = 0;
        }
        else {
            uVar23 = 0;
            iStack_b0 = param_1;
            do {
                iVar7 = piVar18[-1];
                if (iVar7 == 1) {
                    param_4 = *(piVar18 + -0x1c);
                    pcVar10 = "Index: 0x%x, Loop: %d\n";
                    iVar7 = scnprintf(&uStack_a8,0x40,"Index: 0x%x, Loop: %d\n",param_4,piVar18[-3]);
                }
                else {
                    if (iVar7 == 3) {
                        uVar1 = piVar18[-5];
                        uVar4 = *(piVar18 + -0x24);
                        uVar2 = piVar18[-4];
                        uVar21 = *(piVar18 + -0x1c);
                        uVar6 = *(piVar18 + -0xc);
                        pcVar10 = "Write Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    else {
                        if (iVar7 == 2) {
                            param_4 = *(piVar18 + -0x1c);
                            pcVar10 = "Index: 0x%x, mask: 0x%x, val: 0x%x\n";
                            iVar7 = scnprintf(&uStack_a8,0x40,"Index: 0x%x, mask: 0x%x, val: 0x%x\n",param_4,
                                              piVar18[-2],*(piVar18 + -0x14));
                            goto code_r0x080049d8;
                        }
                        uVar1 = piVar18[-5];
                        uVar4 = *(piVar18 + -0x24);
                        uVar2 = piVar18[-4];
                        uVar21 = *(piVar18 + -0x1c);
                        uVar6 = *(piVar18 + -0xc);
                        pcVar10 = "Read Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    param_4 = uVar21;
                    iVar7 = scnprintf(&uStack_a8,0x40,pcVar10,param_4,uVar1,uVar4,uVar2,uVar6);
                }
code_r0x080049d8:
                uVar21 = iVar7 + uVar23;
                uVar16 = uVar21;
                if (0x1000 < uVar21) {
                    pcVar9 = "DCC: Couldn\'t write complete config\n";
                    param_1 = iStack_b0;
                    uVar16 = uVar23;
                    goto code_r0x08004a38;
                }
                pcVar10 = 0x1000;
                strlcat(param_3,&uStack_a8,0x1000);
                piVar18 = *piVar18;
                uVar23 = uVar16;
            } while (*(iVar22 + 0x138) + *(iVar22 + 0x14c) * 0x10 != piVar18);
        }
    }
    else {
        uVar16 = 0xffffffea;
        pcVar9 = "Select link list to program using curr_list\n";
code_r0x08004a38:
        _dev_err(param_1,pcVar9);
    }
    mutex_unlock(iVar14);
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.config_store;
    pcStack_c8 = sym.config_store;
    iVar22 = sp_el0;
    iStack_d8 = *(iVar22 + 0x5e0);
    puVar11 = &uStack_e4;
    puVar13 = &uStack_dc;
    iVar22 = *(iVar8 + 0x98);
    uStack_dc = 0;
    uStack_e4 = 0;
    iStack_e0 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    iStack_c0 = iVar14;
    uStack_b8 = uVar16;
    iVar7 = sscanf(pcVar10,"%x %i %d",puVar11,puVar13,&iStack_e0);
    iVar12 = puVar13;
    uVar16 = 0xffffffffffffffea;
    if (((0xfffffffc < iVar7 - 4U) && (-1 < iStack_e0)) && (iStack_e0 < 2)) {
        if (iVar7 == 1) {
            uStack_dc = 1;
code_r0x08004b3c:
            iVar14 = 0;
            iStack_e0 = 0;
        }
        else {
            if ((iVar7 != 3) || (iStack_e0 != 1)) goto code_r0x08004b3c;
            iVar14 = 1;
            iStack_e0 = 1;
        }
        puVar11 = uStack_dc;
        iVar7 = sym.dcc_config_add(iVar22,uStack_e4,puVar11,iVar14);
        iVar12 = iVar14;
        uVar16 = param_4;
        if (iVar7 != 0) {
            uVar16 = iVar7;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_d8) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail(uVar16);
    uVar21 = auVar24._8_4_;
    iVar14 = auVar24._0_8_;
    *extraout_x18_00 = sym.dcc_config_add;
    uVar16 = puVar11 & 0xffffffff;
    mutex_lock(iVar14 + 0x18);
    if (*(iVar14 + 0x14c) < *(iVar14 + 0x148)) {
        uVar15 = puVar11;
        if ((uVar15 != 0) && (uVar15 <= *(iVar14 + 0x50) >> 3)) {
            piVar19 = *(iVar14 + 0x138) + *(iVar14 + 0x14c) * 0x10;
            uVar20 = uVar21 & 0xfffffff0;
            if ((piVar19 == *piVar19) ||
               (iVar22 = *(*(iVar14 + 0x138) + *(iVar14 + 0x14c) * 0x10 + 8), *(iVar22 + -8) != 0)) {
code_r0x08004c28:
                uVar21 = uVar21 - uVar20;
                do {
                    iVar22 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar22 = 0x30;
                    }
                    puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar22),0xdc0,0x38);
                    if (puVar11 == NULL) {
                        uVar21 = 0xfffffff4;
                        goto code_r0x08004d5c;
                    }
                    uVar5 = *(iVar14 + 0x14c);
                    uVar17 = uVar16;
                    iVar22 = *(iVar14 + 0x140);
                    uVar15 = uVar17;
                    if (0x7e < uVar17) {
                        uVar15 = 0x7f;
                    }
                    *puVar11 = uVar20;
                    puVar11[1] = uVar21;
                    iVar8 = uVar5 * 4;
                    puVar13 = puVar11 + 10;
                    puVar11[2] = uVar15;
                    uVar15 = *(iVar22 + iVar8);
                    *(iVar22 + iVar8) = uVar15 + 1;
                    puVar11[3] = uVar15;
                    puVar11[8] = 0;
                    *(puVar11 + 7) = iVar12 != 0;
                    *(puVar11 + 10) = puVar13;
                    *(puVar11 + 0xc) = puVar13;
                    iVar22 = *(iVar14 + 0x138) + *(iVar14 + 0x14c) * 0x10;
                    piVar19 = *(iVar22 + 8);
                    uVar16 = __list_add_valid(puVar13,piVar19,iVar22);
                    if ((uVar16 & 1) != 0) {
                        *(iVar22 + 8) = puVar13;
                        *(puVar11 + 10) = iVar22;
                        *(puVar11 + 0xc) = piVar19;
                        *piVar19 = puVar13;
                    }
                    uVar21 = uVar21 + 0x1fc;
                    uVar16 = uVar17 - puVar11[2];
                } while (uVar17 - puVar11[2] != 0);
            }
            else {
                uVar3 = *(iVar22 + -0x28);
                uVar17 = *(iVar22 + -0x24) + uVar3;
                if (((uVar21 < uVar17) || (uVar17 + 0x3fc < uVar21)) ||
                   (uVar20 = uVar3, uVar17 + *(iVar22 + -0x20) * 4 != uVar21)) goto code_r0x08004c28;
                uVar15 = *(iVar22 + -0x20) + uVar15;
                uVar21 = uVar15;
                if (0x7e < uVar15) {
                    uVar21 = 0x7f;
                }
                uVar16 = uVar15 - uVar21;
                *(iVar22 + -0x20) = uVar21;
                if (uVar15 - uVar21 != 0) {
                    uVar21 = uVar17 + uVar21 * 4;
                    goto code_r0x08004c28;
                }
            }
            uVar21 = 0;
            goto code_r0x08004d5c;
        }
        pcVar10 = "DCC: Invalid length\n";
    }
    else {
        pcVar10 = "Select link list to program using curr_list\n";
    }
    _dev_err(*(iVar14 + 0x10),pcVar10);
    uVar21 = 0xffffffea;
code_r0x08004d5c:
    mutex_unlock(iVar14 + 0x18);
    return uVar21;
}


// ===== sym.cti_trig_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022d8 (size 8) =====

int64_t sym.cti_trig_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x800093d,*(*(*(param_1 + 0x98) + 0x150) + *(*(param_1 + 0x98) + 0x14c)));
    return iVar1;
}


// ===== sym.func_type_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022e0 (size 8) =====

int64_t sym.func_type_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x98);
    if (*(iVar6 + 0x148) == 0) {
        iVar4 = 0;
    }
    else {
        uVar5 = 0;
        iVar4 = 0;
        do {
            uVar1 = *(*(iVar6 + 0x60) + uVar5 * 4);
            if (1 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8002e80);
                (*pcVar2)();
            }
            iVar3 = scnprintf(param_3 + iVar4,0x1000 - iVar4,"%u :%s\n",uVar5 & 0xffffffff,
                              *(obj.str_dcc_func_type + uVar1 * 8));
            iVar4 = iVar4 + iVar3;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar6 + 0x148));
    }
    return iVar4;
}


// ===== sym.crc_error_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022e8 (size 8) =====

int64_t sym.crc_error_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(param_1 + 0x98);
    mutex_lock(piVar6 + 3);
    uVar3 = *(piVar6 + 0x14c);
    if (uVar3 < *(piVar6 + 0x29)) {
        if (*(piVar6[0xf] + uVar3) != '\0') {
            uVar1 = uVar3 << 7 | 0x50;
            if (piVar6[0xd] == 0) {
                uVar1 = uVar3 << 7 | 0x34;
            }
            uVar2 = uVar3 << 7 | 0x48;
            if (piVar6[0xd] != 1) {
                uVar2 = uVar1;
            }
            iVar4 = scnprintf(param_3,0x1000,0x8000696,*(*piVar6 + uVar2) >> 1 & 1);
            iVar5 = iVar4;
            goto code_r0x080050d8;
        }
    }
    else {
        _dev_err(param_1,"Select link list to program using curr_list\n");
    }
    iVar5 = -0x16;
code_r0x080050d8:
    mutex_unlock(piVar6 + 3);
    return iVar5;
}


// ===== sym.ready_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022f0 (size 8) =====

int64_t sym.ready_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(param_1 + 0x98);
    mutex_lock(piVar3 + 3);
    if (*(piVar3 + 0x14c) < *(piVar3 + 0x29)) {
        if (*(piVar3[0xf] + *(piVar3 + 0x14c)) != '\0') {
            iVar2 = 0xc;
            if (piVar3[0xd] != 0) {
                iVar2 = 0x1c;
            }
            iVar1 = scnprintf(param_3,0x1000,0x8000696,*(*piVar3 + iVar2) >> 1 & 1);
            iVar2 = iVar1;
            goto code_r0x08004ff4;
        }
    }
    else {
        _dev_err(param_1,"Select link list to program using curr_list\n");
    }
    iVar2 = -0x16;
code_r0x08004ff4:
    mutex_unlock(piVar3 + 3);
    return iVar2;
}


// ===== sym.interrupt_disable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080022f8 (size 8) =====

int64_t sym.interrupt_disable_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,0x8000696,*(*(param_1 + 0x98) + 0x98));
    return iVar1;
}


// ===== sym.data_sink_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002300 (size 8) =====

int64_t sym.data_sink_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,int64_t param_3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar6 = *(param_1 + 0x98);
    if (*(iVar6 + 0x148) == 0) {
        iVar4 = 0;
    }
    else {
        uVar5 = 0;
        iVar4 = 0;
        do {
            uVar1 = *(*(iVar6 + 0x58) + uVar5 * 4);
            if (1 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8003074);
                (*pcVar2)();
            }
            iVar3 = scnprintf(param_3 + iVar4,0x1000 - iVar4,"%u :%s\n",uVar5 & 0xffffffff,
                              *(obj.str_dcc_data_sink + uVar1 * 8));
            iVar4 = iVar4 + iVar3;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar6 + 0x148));
    }
    return iVar4;
}


// ===== sym.hw_trig_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002308 (size 8) =====

int64_t sym.hw_trig_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (*(iVar2 + 0x14c) < *(iVar2 + 0x148)) {
        iVar1 = scnprintf(param_3,0x1000,0x8000696,*(*(iVar2 + 0x80) + *(iVar2 + 0x14c)));
        iVar2 = iVar1;
    }
    else {
        _dev_err(param_1,"Select link list to program using curr_list\n");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.ap_ns_qad_override_en_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08002310 (size 8) =====

int64_t sym.ap_ns_qad_override_en_show.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (*(iVar2 + 0x68) == 2) {
        iVar1 = scnprintf(param_3,0x1000,0x800093d,*(*(iVar2 + 0x178) + *(iVar2 + 0x14c)));
        iVar2 = iVar1;
    }
    else {
        _dev_err(param_1,"QAD output is not supported\n");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.dcc_probe @ 0x08002318 (size 1156) =====

ulong sym.dcc_probe(int64_t arg1)

{
    int iVar1;
    int64_t *arg1_00;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    ulong *extraout_x8;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar5 = arg1 + 0x10;
    iStack_38 = *(iVar3 + 0x5e0);
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    iStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    arg1_00 = devm_kmalloc(iVar5,0x180,0xdc0);
    if (arg1_00 != NULL) {
        arg1_00[2] = iVar5;
        *(arg1 + 0xa8) = arg1_00;
        piVar2 = platform_get_resource_byname(arg1,0x200,"dcc-base");
        if (piVar2 == NULL) {
code_r0x080024cc:
            uVar4 = 0xffffffea;
            goto code_r0x08002728;
        }
        *(arg1_00 + 1) = (piVar2[1] - *piVar2) + 1;
        iVar3 = devm_ioremap(iVar5,*piVar2,(piVar2[1] - *piVar2) + 1);
        *arg1_00 = iVar3;
        if (iVar3 == 0) goto code_r0x08002724;
        piVar2 = platform_get_resource_byname(arg1,0x200,"dcc-ram-base");
        if (piVar2 == NULL) goto code_r0x080024cc;
        *(arg1_00 + 10) = (piVar2[1] - *piVar2) + 1;
        iVar3 = devm_ioremap(iVar5,*piVar2,(piVar2[1] - *piVar2) + 1);
        arg1_00[9] = iVar3;
        if (iVar3 == 0) goto code_r0x08002724;
        iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"dcc-ram-offset",arg1_00 + 0x54,1,0);
        if (iVar1 < 0) goto code_r0x080024cc;
        iVar1 = of_property_count_elems_of_size(*(arg1 + 0x300),"ll-reg-offsets",4);
        *(arg1_00 + 0x164) = iVar1;
        if (iVar1 < 1) {
            _dev_info(iVar5,"ll-reg-offsets property doesn\'t exist\n");
            *(arg1_00 + 0x164) = 0;
        }
        else {
            iVar1 = of_property_read_variable_u32_array(*(arg1 + 0x300),"per-ll-reg-cnt",arg1_00 + 0x2c,1,0);
            if (iVar1 < 0) goto code_r0x080024cc;
        }
        if ((*(*arg1_00 + 4) >> 9 & 1) == 0) {
            if ((~*(*arg1_00 + 4) & 0x3f) == 0) {
                *(arg1_00 + 0xd) = 1;
                iVar1 = *(*arg1_00 + 0x10);
                *(arg1_00 + 0x29) = iVar1;
                goto joined_r0x080024c8;
            }
            *(arg1_00 + 0xd) = 0;
            *(arg1_00 + 0x29) = 8;
        }
        else {
            *(arg1_00 + 0xd) = 2;
            iVar1 = *(*arg1_00 + 0x10);
            *(arg1_00 + 0x29) = iVar1;
joined_r0x080024c8:
            if (iVar1 == 0) goto code_r0x080024cc;
        }
        if ((*(*arg1_00 + 4) >> 6 & 1) == 0) {
            iVar1 = (*(arg1_00 + 0x54) + arg1_00[10] >> 2) - 1;
            cVar6 = '\0';
            if (iVar1 != 0) {
                cVar6 = ' ' - LZCOUNT(iVar1);
            }
        }
        else {
            cVar6 = '\x10';
        }
        *(arg1_00 + 0x2b) = cVar6;
        __mutex_init(arg1_00 + 3,"&drvdata->mutex",reloc.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
        iVar3 = devm_kmalloc(iVar5,*(arg1_00 + 0x29) << 2,0xdc0);
        arg1_00[0xb] = iVar3;
        if (iVar3 != 0) {
            iVar3 = devm_kmalloc(iVar5,*(arg1_00 + 0x29) << 2,0xdc0);
            arg1_00[0xc] = iVar3;
            if (iVar3 != 0) {
                iVar3 = devm_kmalloc(iVar5,arg1_00[0x29],0xdc0);
                arg1_00[0xf] = iVar3;
                if (iVar3 != 0) {
                    iVar3 = devm_kmalloc(iVar5,arg1_00[0x29],0xdc0);
                    arg1_00[0x10] = iVar3;
                    if (iVar3 != 0) {
                        iVar3 = devm_kmalloc(iVar5,arg1_00[0x29],0xdc0);
                        arg1_00[0x11] = iVar3;
                        if (iVar3 != 0) {
                            iVar3 = devm_kmalloc(iVar5,arg1_00[0x29],0xdc0);
                            arg1_00[0x12] = iVar3;
                            if (iVar3 != 0) {
                                iVar3 = devm_kmalloc(iVar5,*(arg1_00 + 0x29) << 2,0xdc0);
                                arg1_00[0x28] = iVar3;
                                if (iVar3 != 0) {
                                    iVar3 = devm_kmalloc(iVar5,arg1_00[0x29],0xdc0);
                                    arg1_00[0x2a] = iVar3;
                                    if (iVar3 != 0) {
                                        iVar3 = devm_kmalloc(iVar5,arg1_00[0x29],0xdc0);
                                        arg1_00[0x2f] = iVar3;
                                        if (iVar3 != 0) {
                                            iVar3 = devm_kmalloc(iVar5,*(arg1_00 + 0x29) << 4,0xdc0);
                                            arg1_00[0x27] = iVar3;
                                            if (iVar3 != 0) {
                                                if (arg1_00[0x29] != 0) {
                                                    *iVar3 = iVar3;
                                                    *(iVar3 + 8) = iVar3;
                                                    *arg1_00[0x28] = 0;
                                                    *arg1_00[0x10] = 1;
                                                    *arg1_00[0x11] = 0;
                                                    if (1 < *(arg1_00 + 0x29)) {
                                                        uVar7 = 1;
                                                        do {
                                                            iVar8 = uVar7;
                                                            iVar3 = arg1_00[0x27] + uVar7 * 0x10;
                                                            *iVar3 = iVar3;
                                                            *(iVar3 + 8) = iVar3;
                                                            *(arg1_00[0x28] + uVar7 * 4) = 0;
                                                            uVar7 = uVar7 + 1;
                                                            *(arg1_00[0x10] + iVar8) = 1;
                                                            *(arg1_00[0x11] + iVar8) = 0;
                                                        } while (uVar7 < *(arg1_00 + 0x29));
                                                    }
                                                }
                                                __memset_io(arg1_00[9],0,arg1_00[10]);
                                                *(arg1_00 + 0x14c) = 0xff;
                                                uVar4 = sym.dcc_sram_dev_init(arg1_00);
                                                if ((uVar4 == 0) && (uVar4 = sym.dcc_create_files(iVar5), uVar4 == 0))
                                                {
                                                    sym.dcc_configure_list(arg1_00,*(arg1 + 0x300));
                                                    strscpy(&stack0xffffffffffffff98,"KDCCDATA",0xd);
                                                    iStack_50 = arg1_00[9];
                                                    uStack_40 = *(arg1_00 + 10);
                                                    iStack_48 = *piVar2;
                                                    iVar1 = msm_minidump_add_region(&stack0xffffffffffffff98);
                                                    if (iVar1 < 0) {
                                                        _dev_err(arg1_00[2],"Failed to add DCC data in Minidump\n");
                                                    }
                                                    uVar4 = 0;
                                                }
                                                goto code_r0x08002728;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x08002724:
    uVar4 = 0xfffffff4;
code_r0x08002728:
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_38) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    uVar4 = *****extraout_x8;
    *extraout_x18 = 0x8002788;
    iVar5 = *(iVar5 + 0xa8);
    device_destroy(uVar4,*(iVar5 + 0x130),*(iVar5 + 0x128));
    class_destroy(*(iVar5 + 0x130));
    cdev_del(iVar5 + 0xa8);
    unregister_chrdev_region(*(iVar5 + 0x128),1);
    sym.dcc_config_reset(iVar5);
    return 0;
}


// ===== sym.dcc_remove @ 0x0800279c (size 100) =====

ulong sym.dcc_remove(int64_t arg1)

{
    ulong *in_x18;
    int64_t arg1_00;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg1_00 = *(arg1 + 0xa8);
    device_destroy(*(arg1_00 + 0x130),*(arg1_00 + 0x128));
    class_destroy(*(arg1_00 + 0x130));
    cdev_del(arg1_00 + 0xa8);
    unregister_chrdev_region(*(arg1_00 + 0x128),1);
    sym.dcc_config_reset(arg1_00);
    return 0;
}


// ===== sym.dcc_sram_dev_init @ 0x08002800 (size 388) =====

uint64_t sym.dcc_sram_dev_init(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar6;
    ulong unaff_x30;
    uint uStack_3c;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_38 = *(iVar3 + 0x5e0);
    iVar3 = devm_kmalloc(*(arg1 + 0x10),9,0xdc0);
    *(arg1 + 0xa0) = iVar3;
    if (iVar3 == 0) {
        uVar4 = 0xfffffff4;
    }
    else {
        strscpy(iVar3,"dcc_sram",9);
        uStack_3c = 0;
        uVar2 = alloc_chrdev_region(&uStack_3c,0,1,*(arg1 + 0xa0));
        if (uVar2 == 0) {
            iVar3 = arg1 + 0xa8;
            cdev_init(iVar3,obj.dcc_sram_fops);
            *(arg1 + 0x108) = obj.__this_module;
            uVar2 = cdev_add(iVar3,uStack_3c,1);
            if (uVar2 == 0) {
                uVar4 = __class_create(obj.__this_module,*(arg1 + 0xa0),
                                       reloc.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                *(arg1 + 0x130) = uVar4;
                if (uVar4 < 0xfffffffffffff001) {
                    uVar4 = device_create(uVar4,0,*(arg1 + 0x128),arg1,*(arg1 + 0xa0));
                    if (uVar4 < 0xfffffffffffff001) {
                        uVar4 = 0;
                        goto code_r0x0800294c;
                    }
                    class_destroy(*(arg1 + 0x130));
                }
                cdev_del(iVar3);
                unregister_chrdev_region(*(arg1 + 0x128),1);
                if (uVar4 == 0) goto code_r0x0800294c;
            }
            else {
                uVar4 = uVar2;
                unregister_chrdev_region(*(arg1 + 0x128),1);
            }
        }
        else {
            uVar4 = uVar2;
        }
        _dev_err(*(arg1 + 0x10),"DCC: sram node not registered.\n");
    }
code_r0x0800294c:
    iVar3 = sp_el0;
    if (*(iVar3 + 0x5e0) == iStack_38) {
        return uVar4 & 0xffffffff;
    }
    uVar5 = __stack_chk_fail();
    *extraout_x18 = sym.dcc_create_files;
    uVar2 = device_create_file(uVar5,obj.dev_attr_func_type);
    pcVar1 = obj.dcc_attrs;
    if (uVar2 == 0) {
        uVar4 = 0;
        do {
            uVar6 = uVar4;
            if (uVar6 == 0x80) {
                return 0;
            }
            uVar2 = device_create_file(uVar5,*(uVar6 + 0x8000ef0));
            uVar4 = uVar6 + 8;
        } while (uVar2 == 0);
        if (0x88 < uVar6 + 8) {
    //WARNING: Does not return
            pcVar1 = SoftwareBreakpoint(1,0x8002a34);
            (*pcVar1)();
        }
        pcVar1 = uVar6 + 0x8000ef0;
    }
    _dev_err(uVar5,"DCC: Couldn\'t create sysfs attribute: %s\n",**pcVar1);
    return uVar2;
}


// ===== sym.dcc_create_files @ 0x08002984 (size 176) =====

int sym.dcc_create_files(int64_t arg1)

{
    uint64_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    uint64_t uVar4;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = device_create_file(arg1,obj.dev_attr_func_type);
    pcVar2 = obj.dcc_attrs;
    if (iVar3 == 0) {
        uVar1 = 0;
        do {
            uVar4 = uVar1;
            if (uVar4 == 0x80) {
                return 0;
            }
            iVar3 = device_create_file(arg1,*(uVar4 + 0x8000ef0));
            uVar1 = uVar4 + 8;
        } while (iVar3 == 0);
        if (0x88 < uVar4 + 8) {
    //WARNING: Does not return
            pcVar2 = SoftwareBreakpoint(1,0x8002a34);
            (*pcVar2)();
        }
        pcVar2 = uVar4 + 0x8000ef0;
    }
    _dev_err(arg1,"DCC: Couldn\'t create sysfs attribute: %s\n",**pcVar2);
    return iVar3;
}


// ===== sym.dcc_configure_list @ 0x08002a34 (size 172) =====

void sym.dcc_configure_list(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t arg2_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    arg2_00 = of_get_next_available_child(arg2,0);
    if (arg2_00 == 0) {
code_r0x08002ab8:
        iVar1 = sym.dcc_dt_parse(arg1,arg2);
        if (iVar1 != 0) {
            return;
        }
    }
    else {
        do {
            iVar1 = sym.dcc_dt_parse(arg1,arg2_00);
            if (iVar1 != 0) {
                _dev_err(*(arg1 + 0x10),"DCC link list config failed err:%d\n",iVar1);
                if (iVar1 != -1) {
                    return;
                }
                goto code_r0x08002ab8;
            }
            arg2_00 = of_get_next_available_child(arg2,arg2_00);
        } while (arg2_00 != 0);
    }
    sym.dcc_enable(arg1);
    return;
}


// ===== sym.dcc_sram_read @ 0x08002ae0 (size 340) =====

uint64_t sym.dcc_sram_read(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    code *pcVar2;
    uint *puVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint64_t uVar7;
    uint *puVar8;
    ulong *in_x18;
    uint64_t arg2_00;
    int64_t iVar9;
    ulong unaff_x30;
    uchar noname_1 [16];
    
    *in_x18 = unaff_x30;
    iVar9 = *(arg1 + 0xd8);
    uVar5 = *arg4;
    uVar7 = *(iVar9 + 0x50);
    if (uVar5 < uVar7) {
        arg2_00 = uVar7 - uVar5;
        if (!CARRY8(uVar5,arg3) && uVar5 + arg3 <= uVar7) {
            arg2_00 = arg3;
        }
        puVar3 = __kmalloc(arg2_00,0xdc0);
        if (puVar3 == NULL) {
            arg2_00 = 0xfffffffffffffff4;
        }
        else {
            if ((arg2_00 == 0) || (puVar6 = *(iVar9 + 0x48) + *arg4, ((arg2_00 | puVar6) & 3) != 0)) {
                _dev_err(*(iVar9 + 0x10),"Target address or size not aligned with 4 bytes\n");
                arg2_00 = 0xffffffffffffffea;
            }
            else {
                uVar5 = arg2_00;
                puVar8 = puVar3;
                if (3 < arg2_00) {
                    do {
                        uVar1 = *puVar6;
                        puVar6 = puVar6 + 1;
                        uVar5 = uVar5 - 4;
                        *puVar8 = uVar1;
                        puVar8 = puVar8 + 1;
                    } while (3 < uVar5);
                    if (arg2_00 >> 0x1f != 0) {
    //WARNING: Does not return
                        pcVar2 = SoftwareBreakpoint(0x800,0x8002c1c);
                        (*pcVar2)();
                    }
                }
                noname_1 = __check_object_size(puVar3,arg2_00,1);
                iVar4 = sym._copy_to_user(arg2,noname_1,arg2_00);
                if (iVar4 == 0) {
                    *arg4 = *arg4 + arg2_00;
                }
                else {
                    _dev_err(*(iVar9 + 0x10),"DCC: Couldn\'t copy all data to user\n");
                    arg2_00 = 0xfffffffffffffff2;
                }
            }
            kfree(puVar3);
        }
    }
    else {
        arg2_00 = 0;
    }
    return arg2_00;
}


// ===== sym.dcc_sram_open @ 0x08002c38 (size 28) =====

ulong sym.dcc_sram_open(int64_t arg1,int64_t arg2)

{
    *(arg2 + 0xd8) = *(arg1 + 0x2b0) + -0xa8;
    return 0;
}


// ===== sym._copy_to_user @ 0x08002c54 (size 312) =====

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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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
        if ((_no_llseek >> 0x18 & 1) == 0) {
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


// ===== sym.func_type_show @ 0x08002dc8 (size 184) =====

int64_t sym.func_type_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x98);
    if (*(iVar6 + 0x148) == 0) {
        iVar4 = 0;
    }
    else {
        uVar5 = 0;
        iVar4 = 0;
        do {
            uVar1 = *(*(iVar6 + 0x60) + uVar5 * 4);
            if (1 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8002e80);
                (*pcVar2)();
            }
            iVar3 = scnprintf(noname_1,arg2 + iVar4,0x1000 - iVar4,"%u :%s\n",uVar5 & 0xffffffff,
                              *(obj.str_dcc_func_type + uVar1 * 8));
            iVar4 = iVar4 + iVar3;
            uVar5 = uVar5 + 1;
            noname_1 = extraout_q0;
        } while (uVar5 < *(iVar6 + 0x148));
    }
    return iVar4;
}


// ===== sym.func_type_store @ 0x08002e80 (size 316) =====

int64_t sym.func_type_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    code *pcVar3;
    int iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    uint uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    int64_t iVar9;
    ulong unaff_x30;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    iVar9 = *(arg1 + 0x98);
    uStack_40 = 0;
    uStack_48 = 0;
    puVar6 = arg2;
    uVar5 = strlen(arg2);
    if (uVar5 < 10) {
        puVar6 = &uStack_48;
        iVar4 = sscanf(arg2,0x80009b3,puVar6);
        if (iVar4 == 1) {
            mutex_lock(iVar9 + 0x18);
            uVar2 = *(iVar9 + 0x14c);
            if (uVar2 < *(iVar9 + 0x148)) {
                if (*(*(iVar9 + 0x78) + uVar2) == '\0') {
                    if (uStack_48 == 0x706163) {
                        uVar7 = 0;
                    }
                    else {
                        if (uStack_48 != 0x637263) goto code_r0x08002f78;
                        uVar7 = 1;
                    }
                    iVar8 = arg3;
                    *(*(iVar9 + 0x60) + uVar2 * 4) = uVar7;
                }
                else {
                    iVar8 = -0x10;
                }
            }
            else {
                _dev_err(arg1,"Select link list to program using curr_list\n");
code_r0x08002f78:
                iVar8 = -0x16;
            }
            mutex_unlock(iVar9 + 0x18);
            goto code_r0x08002f84;
        }
    }
    iVar8 = -0x16;
code_r0x08002f84:
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_38) {
        return iVar8;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18 = sym.data_sink_show;
    iVar9 = *(iVar9 + 0x98);
    if (*(iVar9 + 0x148) == 0) {
        iVar8 = 0;
    }
    else {
        uVar5 = 0;
        iVar8 = 0;
        do {
            uVar1 = *(*(iVar9 + 0x58) + uVar5 * 4);
            if (1 < uVar1) {
    //WARNING: Does not return
                pcVar3 = SoftwareBreakpoint(0x5512,0x8003074);
                (*pcVar3)();
            }
            iVar4 = scnprintf(puVar6 + iVar8,0x1000 - iVar8,"%u :%s\n",uVar5 & 0xffffffff,
                              *(obj.str_dcc_data_sink + uVar1 * 8));
            iVar8 = iVar8 + iVar4;
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar9 + 0x148));
    }
    return iVar8;
}


// ===== sym.data_sink_show @ 0x08002fbc (size 184) =====

int64_t sym.data_sink_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    ulong *in_x18;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    ulong unaff_x30;
    uchar extraout_q0 [16];
    
    *in_x18 = unaff_x30;
    iVar6 = *(arg1 + 0x98);
    if (*(iVar6 + 0x148) == 0) {
        iVar4 = 0;
    }
    else {
        uVar5 = 0;
        iVar4 = 0;
        do {
            uVar1 = *(*(iVar6 + 0x58) + uVar5 * 4);
            if (1 < uVar1) {
    //WARNING: Does not return
                pcVar2 = SoftwareBreakpoint(0x5512,0x8003074);
                (*pcVar2)();
            }
            iVar3 = scnprintf(noname_1,arg2 + iVar4,0x1000 - iVar4,"%u :%s\n",uVar5 & 0xffffffff,
                              *(obj.str_dcc_data_sink + uVar1 * 8));
            iVar4 = iVar4 + iVar3;
            uVar5 = uVar5 + 1;
            noname_1 = extraout_q0;
        } while (uVar5 < *(iVar6 + 0x148));
    }
    return iVar4;
}


// ===== sym.data_sink_store @ 0x08003074 (size 316) =====

uint64_t sym.data_sink_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    ulong *puVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint uVar11;
    uint32_t uVar12;
    ulong *extraout_x9;
    uint32_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int iVar15;
    int64_t iVar16;
    int64_t *piVar17;
    uint32_t uVar18;
    ulong unaff_x30;
    int64_t iStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    ulong uStack_48;
    ushort uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar16 = sp_el0;
    iStack_38 = *(iVar16 + 0x5e0);
    iVar16 = *(arg1 + 0x98);
    uStack_40 = 0;
    uStack_48 = 0;
    puVar8 = arg2;
    iVar15 = arg3;
    uVar5 = strlen(arg2);
    if (uVar5 < 10) {
        puVar8 = &uStack_48;
        iVar4 = sscanf(arg2,0x80009b3,puVar8);
        if (iVar4 == 1) {
            mutex_lock(iVar16 + 0x18);
            uVar3 = *(iVar16 + 0x14c);
            if (uVar3 < *(iVar16 + 0x148)) {
                if (*(*(iVar16 + 0x78) + uVar3) == '\0') {
                    uVar11 = 0;
                    if (uStack_48 != 0x6d617273 || uStack_48._4_1_ != '\0') {
                        if (uStack_48 != 0x627461) goto code_r0x0800316c;
                        uVar11 = 1;
                    }
                    uVar5 = arg3;
                    *(*(iVar16 + 0x58) + uVar3 * 4) = uVar11;
                }
                else {
                    uVar5 = 0xfffffffffffffff0;
                }
            }
            else {
                _dev_err(arg1,"Select link list to program using curr_list\n");
code_r0x0800316c:
                uVar5 = 0xffffffffffffffea;
            }
            mutex_unlock(iVar16 + 0x18);
            goto code_r0x08003178;
        }
    }
    uVar5 = 0xffffffffffffffea;
code_r0x08003178:
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_38) {
        return uVar5;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.trigger_store;
    pcStack_a8 = sym.trigger_store;
    iVar16 = sp_el0;
    iStack_b8 = *(iVar16 + 0x5e0);
    piVar17 = *(iVar6 + 0x98);
    iStack_c0 = 0;
    puStack_b0 = &stack0xffffffffffffffd0;
    iVar4 = kstrtoull(puVar8,0x10,&iStack_c0);
    uVar5 = 0xffffffffffffffea;
    if ((iVar4 == 0) && (iStack_c0 == 1)) {
        mutex_lock(piVar17 + 3);
        uVar12 = *(piVar17 + 0x29);
        if (uVar12 != 0) {
            uVar13 = 0;
            uVar5 = 0x30;
            do {
                iVar4 = uVar5;
                if ((*(piVar17[0xf] + uVar13) != '\0') && (*(piVar17[0x11] + uVar13) != '\0')) {
                    _dev_info(piVar17[2],"DCC SW trigger link list %d\n",uVar13);
                    uVar12 = uVar13 << 7;
                    uVar10 = uVar13 << 7 | 0x38;
                    uVar14 = uVar5;
                    if ((piVar17[0xd] != 1) && (uVar14 = uVar10, piVar17[0xd] == 0)) {
                        uVar14 = uVar12 | 0x20;
                    }
                    uVar1 = *(*piVar17 + uVar14);
                    iVar2 = piVar17[0xd];
                    uVar18 = 0xfffffeff;
                    if (iVar2 != 2) {
                        uVar18 = 0xfffffdff;
                    }
                    uVar14 = uVar5;
                    if ((iVar2 != 1) && (uVar14 = uVar10, iVar2 == 0)) {
                        uVar14 = uVar12 | 0x20;
                    }
                    *(*piVar17 + uVar14) = uVar18 & uVar1;
                    if (piVar17[0xd] == 1) {
                        uVar18 = iVar4 + 0x28;
                    }
                    else if (piVar17[0xd] == 0) {
                        uVar18 = uVar12 | 0x44;
                    }
                    else {
                        uVar18 = uVar12 | 0x60;
                    }
                    *(*piVar17 + uVar18) = 1;
                    if ((piVar17[0xd] != 1) && (uVar5 = uVar10, piVar17[0xd] == 0)) {
                        uVar5 = uVar12 | 0x20;
                    }
                    *(*piVar17 + uVar5) = uVar1;
                    uVar12 = *(piVar17 + 0x29);
                }
                uVar13 = uVar13 + 1;
                uVar5 = iVar4 + 0x80;
            } while (uVar13 < uVar12);
        }
        iVar16 = ktime_get();
        uVar5 = sym.readl(*piVar17 + 0x1c);
        if ((uVar5 & 3) != 0) {
            do {
                iVar6 = ktime_get();
                if (iVar16 + 100000 < iVar6) {
                    uVar5 = sym.readl(*piVar17 + 0x1c);
                    if ((uVar5 & 3) != 0) {
                        _dev_err(piVar17[2],"DCC is busy after receiving sw tigger.\n");
                        iVar15 = -0x10;
                        goto code_r0x08003534;
                    }
                    break;
                }
                usleep_range_state(1,1,2);
                uVar5 = sym.readl(*piVar17 + 0x1c);
            } while ((uVar5 & 3) != 0);
        }
        uVar12 = *(piVar17 + 0x29);
        if (uVar12 != 0) {
            uVar13 = 0;
            uVar18 = 100;
            do {
                if (*(piVar17[0xf] + uVar13) != '\0') {
                    if (piVar17[0xd] == 1) {
                        uVar12 = uVar18 - 8;
                    }
                    else if (piVar17[0xd] == 0) {
                        uVar12 = uVar13 << 7 | 0x48;
                    }
                    else {
                        uVar12 = uVar13 << 7 | 100;
                    }
                    if (*(*piVar17 + uVar12) != 0) {
                        _dev_err(piVar17[2],"Read access error for list %d err: 0x%x.\n");
                        uVar12 = uVar18 - 0x2c;
                        if (piVar17[0xd] == 0) {
                            uVar5 = uVar18 - 0x44;
                        }
                        else {
                            uVar5 = uVar12;
                            if (piVar17[0xd] == 1) {
                                uVar5 = uVar18 - 0x34;
                            }
                        }
                        uVar1 = *(*piVar17 + uVar5);
                        iVar15 = piVar17[0xd];
                        uVar13 = 0xfffffeff;
                        if (iVar15 != 2) {
                            uVar13 = 0xfffffdff;
                        }
                        if (iVar15 == 0) {
                            uVar5 = uVar18 - 0x44;
                        }
                        else {
                            uVar5 = uVar12;
                            if (iVar15 == 1) {
                                uVar5 = uVar18 - 0x34;
                            }
                        }
                        *(*piVar17 + uVar5) = uVar13 & uVar1;
                        if (piVar17[0xd] == 0) {
                            uVar5 = uVar18 - 0x1c;
                        }
                        else {
                            uVar5 = uVar18;
                            if (piVar17[0xd] == 1) {
                                uVar5 = uVar18 - 8;
                            }
                        }
                        *(*piVar17 + uVar5) = 3;
                        if (piVar17[0xd] == 0) {
                            uVar12 = uVar18 - 0x44;
                        }
                        else if (piVar17[0xd] == 1) {
                            uVar12 = uVar18 - 0x34;
                        }
                        iVar15 = -0x3d;
                        *(*piVar17 + uVar12) = uVar1;
                        break;
                    }
                    uVar12 = *(piVar17 + 0x29);
                }
                uVar13 = uVar13 + 1;
                uVar18 = uVar18 + 0x80;
            } while (uVar13 < uVar12);
        }
code_r0x08003534:
        mutex_unlock(piVar17 + 3);
        uVar5 = iVar15;
    }
    iVar16 = sp_el0;
    if (*(iVar16 + 0x5e0) == iStack_b8) {
        return uVar5;
    }
    puVar7 = __stack_chk_fail(uVar5);
    uVar9 = *extraout_x9;
    *extraout_x18_00 = 0x8003580;
    log_read_mmio(0x20,puVar7,0x8003590,uVar9);
    uVar12 = *puVar7;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar12,0x20,puVar7,0x80035d4);
    return uVar12;
}


// ===== sym.trigger_store @ 0x080031b0 (size 988) =====

uint64_t sym.trigger_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    int iVar8;
    ulong uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    ulong *extraout_x9;
    uint32_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t *piVar14;
    uint32_t uVar15;
    ulong unaff_x30;
    int64_t iStack_70;
    int64_t iStack_68;
    
    iVar8 = arg3;
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_68 = *(iVar5 + 0x5e0);
    piVar14 = *(arg1 + 0x98);
    iStack_70 = 0;
    iVar3 = kstrtoull(arg2,0x10,&stack0xffffffffffffff90);
    uVar4 = 0xffffffffffffffea;
    if ((iVar3 == 0) && (iStack_70 == 1)) {
        mutex_lock(piVar14 + 3);
        uVar11 = *(piVar14 + 0x29);
        if (uVar11 != 0) {
            uVar12 = 0;
            uVar4 = 0x30;
            do {
                iVar3 = uVar4;
                if ((*(piVar14[0xf] + uVar12) != '\0') && (*(piVar14[0x11] + uVar12) != '\0')) {
                    _dev_info(piVar14[2],"DCC SW trigger link list %d\n",uVar12);
                    uVar11 = uVar12 << 7;
                    uVar10 = uVar12 << 7 | 0x38;
                    uVar13 = uVar4;
                    if ((piVar14[0xd] != 1) && (uVar13 = uVar10, piVar14[0xd] == 0)) {
                        uVar13 = uVar11 | 0x20;
                    }
                    uVar1 = *(*piVar14 + uVar13);
                    iVar2 = piVar14[0xd];
                    uVar15 = 0xfffffeff;
                    if (iVar2 != 2) {
                        uVar15 = 0xfffffdff;
                    }
                    uVar13 = uVar4;
                    if ((iVar2 != 1) && (uVar13 = uVar10, iVar2 == 0)) {
                        uVar13 = uVar11 | 0x20;
                    }
                    *(*piVar14 + uVar13) = uVar15 & uVar1;
                    if (piVar14[0xd] == 1) {
                        uVar15 = iVar3 + 0x28;
                    }
                    else if (piVar14[0xd] == 0) {
                        uVar15 = uVar11 | 0x44;
                    }
                    else {
                        uVar15 = uVar11 | 0x60;
                    }
                    *(*piVar14 + uVar15) = 1;
                    if ((piVar14[0xd] != 1) && (uVar4 = uVar10, piVar14[0xd] == 0)) {
                        uVar4 = uVar11 | 0x20;
                    }
                    *(*piVar14 + uVar4) = uVar1;
                    uVar11 = *(piVar14 + 0x29);
                }
                uVar12 = uVar12 + 1;
                uVar4 = iVar3 + 0x80;
            } while (uVar12 < uVar11);
        }
        iVar5 = ktime_get();
        uVar4 = sym.readl(*piVar14 + 0x1c);
        if ((uVar4 & 3) != 0) {
            do {
                iVar6 = ktime_get();
                if (iVar5 + 100000 < iVar6) {
                    uVar4 = sym.readl(*piVar14 + 0x1c);
                    if ((uVar4 & 3) != 0) {
                        _dev_err(piVar14[2],"DCC is busy after receiving sw tigger.\n");
                        iVar8 = -0x10;
                        goto code_r0x08003534;
                    }
                    break;
                }
                usleep_range_state(1,1,2);
                uVar4 = sym.readl(*piVar14 + 0x1c);
            } while ((uVar4 & 3) != 0);
        }
        uVar11 = *(piVar14 + 0x29);
        if (uVar11 != 0) {
            uVar12 = 0;
            uVar15 = 100;
            do {
                if (*(piVar14[0xf] + uVar12) != '\0') {
                    if (piVar14[0xd] == 1) {
                        uVar11 = uVar15 - 8;
                    }
                    else if (piVar14[0xd] == 0) {
                        uVar11 = uVar12 << 7 | 0x48;
                    }
                    else {
                        uVar11 = uVar12 << 7 | 100;
                    }
                    if (*(*piVar14 + uVar11) != 0) {
                        _dev_err(piVar14[2],"Read access error for list %d err: 0x%x.\n");
                        uVar11 = uVar15 - 0x2c;
                        if (piVar14[0xd] == 0) {
                            uVar4 = uVar15 - 0x44;
                        }
                        else {
                            uVar4 = uVar11;
                            if (piVar14[0xd] == 1) {
                                uVar4 = uVar15 - 0x34;
                            }
                        }
                        uVar1 = *(*piVar14 + uVar4);
                        iVar3 = piVar14[0xd];
                        uVar12 = 0xfffffeff;
                        if (iVar3 != 2) {
                            uVar12 = 0xfffffdff;
                        }
                        if (iVar3 == 0) {
                            uVar4 = uVar15 - 0x44;
                        }
                        else {
                            uVar4 = uVar11;
                            if (iVar3 == 1) {
                                uVar4 = uVar15 - 0x34;
                            }
                        }
                        *(*piVar14 + uVar4) = uVar12 & uVar1;
                        if (piVar14[0xd] == 0) {
                            uVar4 = uVar15 - 0x1c;
                        }
                        else {
                            uVar4 = uVar15;
                            if (piVar14[0xd] == 1) {
                                uVar4 = uVar15 - 8;
                            }
                        }
                        *(*piVar14 + uVar4) = 3;
                        if (piVar14[0xd] == 0) {
                            uVar11 = uVar15 - 0x44;
                        }
                        else if (piVar14[0xd] == 1) {
                            uVar11 = uVar15 - 0x34;
                        }
                        iVar8 = -0x3d;
                        *(*piVar14 + uVar11) = uVar1;
                        break;
                    }
                    uVar11 = *(piVar14 + 0x29);
                }
                uVar12 = uVar12 + 1;
                uVar15 = uVar15 + 0x80;
            } while (uVar12 < uVar11);
        }
code_r0x08003534:
        mutex_unlock(piVar14 + 3);
        uVar4 = iVar8;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return uVar4;
    }
    puVar7 = __stack_chk_fail(uVar4);
    uVar9 = *extraout_x9;
    *extraout_x18 = 0x8003580;
    log_read_mmio(0x20,puVar7,0x8003590,uVar9);
    uVar11 = *puVar7;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar11,0x20,puVar7,0x80035d4);
    return uVar11;
}


// ===== sym.readl @ 0x0800358c (size 124) =====

uint sym.readl(int64_t arg1)

{
    uint uVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_read_mmio(0x20,arg1,0x8003590);
    uVar1 = *arg1;
    DataMemoryBarrier(0,1);
    log_post_read_mmio(uVar1,0x20,arg1,0x80035d4);
    return uVar1;
}


// ===== sym.enable_show @ 0x0800360c (size 220) =====

int64_t sym.enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    char cVar2;
    char *pcVar3;
    ulong *in_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *(arg1 + 0x98);
    mutex_lock(iVar5 + 0x18);
    if (*(iVar5 + 0x14c) < *(iVar5 + 0x148)) {
        pcVar3 = *(iVar5 + 0x78);
        if ((((*pcVar3 == '\0') && (pcVar3[1] == '\0')) && (pcVar3[2] == '\0')) &&
           (((pcVar3[3] == '\0' && (pcVar3[4] == '\0')) && ((pcVar3[5] == '\0' && (pcVar3[6] == '\0')))))) {
            cVar2 = pcVar3[7];
        }
        else {
            cVar2 = '\x01';
        }
        iVar1 = scnprintf(arg2,0x1000,0x8000696,cVar2);
        iVar4 = iVar1;
    }
    else {
        _dev_err(arg1,"Select link list to program using curr_list\n");
        iVar4 = -0x16;
    }
    mutex_unlock(iVar5 + 0x18);
    return iVar4;
}


// ===== sym.enable_store @ 0x080036e8 (size 632) =====

uint64_t sym.enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    int iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint64_t *puVar16;
    char *pcVar17;
    int iVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    int64_t *piVar21;
    uint32_t uVar22;
    int iVar23;
    int iVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar28;
    ulong uVar29;
    uint32_t uVar30;
    uint32_t uVar31;
    int64_t iVar32;
    ulong unaff_x30;
    int iStack_ac;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar16 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar32 = sp_el0;
    iStack_38 = *(iVar32 + 0x5e0);
    piVar28 = *(arg1 + 0x98);
    uStack_40 = 0;
    iVar9 = kstrtoull(arg2,0x10,&uStack_40);
    uVar11 = 0xffffffffffffffea;
    if ((iVar9 != 0) || (1 < uStack_40)) goto code_r0x0800392c;
    if (uStack_40 == 0) {
        mutex_lock(piVar28 + 3);
        iVar32 = ktime_get();
        uVar11 = sym.readl(*piVar28 + 0x1c);
        if ((uVar11 & 3) != 0) {
            do {
                iVar12 = ktime_get();
                if (iVar32 + 100000 < iVar12) {
                    uVar11 = sym.readl(*piVar28 + 0x1c);
                    if ((uVar11 & 3) != 0) {
                        _dev_err(piVar28[2],"DCC is not ready Disabling DCC...\n");
                        uVar10 = *(piVar28 + 0x29);
                        goto joined_r0x08003900;
                    }
                    break;
                }
                usleep_range_state(1,1,2);
                uVar11 = sym.readl(*piVar28 + 0x1c);
            } while ((uVar11 & 3) != 0);
        }
        uVar10 = *(piVar28 + 0x29);
joined_r0x08003900:
        if (uVar10 != 0) {
            uVar20 = 0;
            uVar19 = 0x34;
            do {
                if (*(piVar28[0xf] + uVar20) != '\0') {
                    uVar22 = uVar20 << 7;
                    uVar10 = uVar20 << 7 | 0x38;
                    if (piVar28[0xd] == 1) {
                        uVar11 = uVar19 - 4;
                    }
                    else {
                        uVar11 = uVar10;
                        if (piVar28[0xd] == 0) {
                            uVar11 = uVar22 | 0x20;
                        }
                    }
                    *(*piVar28 + uVar11) = 0;
                    if (piVar28[0xd] == 1) {
                        uVar11 = uVar19;
                    }
                    else if (piVar28[0xd] == 0) {
                        uVar11 = uVar22 | 0x24;
                    }
                    else {
                        uVar11 = uVar22 | 0x3c;
                    }
                    *(*piVar28 + uVar11) = 0;
                    if (piVar28[0xd] != 1) {
                        if (piVar28[0xd] == 0) {
                            uVar10 = uVar19 - 0xc;
                        }
                        else {
                            uVar10 = uVar22 | 0x40;
                        }
                    }
                    *(*piVar28 + uVar10) = 0;
                    if (piVar28[0xd] == 1) {
                        uVar22 = uVar19 - 8;
                    }
                    else if (piVar28[0xd] == 0) {
                        uVar22 = uVar22 | 0x1c;
                    }
                    else {
                        uVar22 = uVar22 | 0x34;
                    }
                    *(*piVar28 + uVar22) = 0;
                    *(piVar28[0xf] + uVar20) = 0;
                    uVar10 = *(piVar28 + 0x29);
                }
                uVar20 = uVar20 + 1;
                uVar19 = uVar19 + 0x80;
            } while (uVar20 < uVar10);
        }
        puVar16 = *(piVar28 + 10);
        __memset_io(piVar28[9],0,puVar16);
        *(piVar28 + 0x6c) = 0;
        *(piVar28 + 0x15c) = 0;
        mutex_unlock(piVar28 + 3);
code_r0x08003924:
        iVar9 = arg3;
    }
    else {
        iVar9 = sym.dcc_enable(piVar28);
        if (iVar9 == 0) goto code_r0x08003924;
    }
    uVar11 = iVar9;
code_r0x0800392c:
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_38) {
        return uVar11;
    }
    piVar28 = __stack_chk_fail(uVar11);
    *extraout_x18 = sym.dcc_enable;
    pcStack_98 = sym.dcc_enable;
    iVar32 = sp_el0;
    iStack_a8 = *(iVar32 + 0x5e0);
    iStack_ac = 0;
    uVar29 = *(piVar28[2] + 0x2f0);
    puStack_a0 = &stack0xffffffffffffffd0;
    mutex_lock(piVar28 + 3);
    pcVar17 = piVar28[0xf];
    if (((((*pcVar17 == '\0') && (pcVar17[1] == '\0')) && (pcVar17[2] == '\0')) &&
        ((pcVar17[3] == '\0' && (pcVar17[4] == '\0')))) &&
       ((pcVar17[5] == '\0' && ((pcVar17[6] == '\0' && (pcVar17[7] == '\0')))))) {
        puVar16 = *(piVar28 + 10);
        __memset_io(piVar28[9],0xde,puVar16);
    }
    if (piVar28[0x29] == 0) {
        uVar10 = 0;
    }
    else {
        uVar20 = 0;
        uVar10 = 0;
        do {
            iVar32 = uVar20;
            piVar1 = piVar28[0x27] + uVar20 * 0x10;
            if (piVar1 != *piVar1) {
                if (*(piVar28[0xf] + iVar32) == '\0') {
                    uVar22 = uVar20 << 7;
                    uVar19 = uVar20 << 7 | 0x34;
                    if (piVar28[0xd] == 1) {
                        uVar11 = uVar22 | 0x2c;
                    }
                    else {
                        uVar11 = uVar19;
                        if (piVar28[0xd] == 0) {
                            uVar11 = uVar22 | 0x1c;
                        }
                    }
                    if ((*(*piVar28 + uVar11) & 1) == 0) {
                        puVar16 = uVar20;
                        _dev_info(piVar28[2],"DCC list passed %d\n",puVar16);
                        if (piVar28[0xd] == 1) {
                            uVar11 = uVar22 | 0x2c;
                        }
                        else {
                            uVar11 = uVar19;
                            if (piVar28[0xd] == 0) {
                                uVar11 = uVar22 | 0x1c;
                            }
                        }
                        *(*piVar28 + uVar11) = 1;
                        piVar1 = piVar28[0x27] + iVar32 * 0x10;
                        iVar9 = *(piVar28 + 0x6c);
                        piVar21 = *piVar1;
                        uVar10 = iVar9 << 2;
                        if (piVar1 == piVar21) {
                            iVar18 = 0;
code_r0x08003b48:
                            uVar15 = *(piVar28 + 10);
                            uVar31 = uVar10;
                            if (uVar10 <= uVar15 - 4) {
                                *(piVar28[9] + uVar10) = 0xc0000000;
                                uVar10 = uVar10 + 4;
                                if ((*(piVar28[0xb] + iVar32 * 4) == 0) && (*(piVar28[0xc] + iVar32 * 4) == 0)) {
                                    uVar31 = uVar10 + iVar18;
                                    uVar15 = *(piVar28 + 10);
                                    *(piVar28 + 0x6c) = uVar31 >> 2;
                                    if (uVar31 <= uVar15) {
code_r0x08003bb8:
                                        *(piVar28 + 0xe) = uVar10 >> 2;
                                        if (piVar28[0xd] == 1) {
                                            uVar11 = uVar19;
                                        }
                                        else {
                                            uVar11 = uVar22 | 0x3c;
                                            if (piVar28[0xd] == 0) {
                                                uVar11 = uVar22 | 0x24;
                                            }
                                        }
                                        uVar26 = uVar22 | 0x40;
                                        *(*piVar28 + uVar11) = iVar9 + (*(piVar28 + 0x54) >> 2);
                                        if (piVar28[0xd] == 1) {
                                            uVar11 = uVar22 | 0x38;
                                        }
                                        else {
                                            uVar11 = uVar26;
                                            if (piVar28[0xd] == 0) {
                                                uVar11 = uVar22 | 0x28;
                                            }
                                        }
                                        *(*piVar28 + uVar11) = piVar28[0xe] + (*(piVar28 + 0x54) >> 2);
                                        uVar27 = uVar22 | 0x44;
                                        uVar10 = uVar22 | 0x3c;
                                        if ((piVar28[0xd] != 1) && (uVar10 = uVar27, piVar28[0xd] == 0)) {
                                            uVar10 = uVar22 | 0x2c;
                                        }
                                        *(*piVar28 + uVar10) = 0xfff;
                                        if ((*(*piVar28 + 4) >> 7 & 1) == 0) {
                                            uVar10 = 0;
                                        }
                                        else {
                                            puVar16 = &iStack_ac;
                                            uVar10 = of_property_read_variable_u32_array
                                                               (uVar29,"qcom,transaction_timeout",puVar16,1,0);
                                            if (uVar10 < 0) {
                                                iStack_ac = 0x3f;
                                            }
                                            else if (iStack_ac == 0) {
                                                uVar10 = 0;
                                                goto code_r0x08004098;
                                            }
                                            if (piVar28[0xd] != 1) {
                                                if (piVar28[0xd] == 0) {
                                                    uVar26 = uVar22 | 0x30;
                                                }
                                                else {
                                                    uVar26 = uVar22 | 0x48;
                                                }
                                            }
                                            uVar10 = uVar10 & uVar10 >> 0x1f;
                                            *(*piVar28 + uVar26) = iStack_ac;
                                        }
code_r0x08004098:
                                        uVar26 = uVar22 | 0x4c;
                                        uVar25 = uVar27;
                                        if ((piVar28[0xd] != 1) && (uVar25 = uVar26, piVar28[0xd] == 0)) {
                                            uVar25 = uVar22 | 0x30;
                                        }
                                        *(*piVar28 + uVar25) = 0;
                                        if (piVar28[0xd] == 1) {
                                            uVar19 = 0x48;
code_r0x080040f0:
                                            uVar19 = uVar22 | uVar19;
                                        }
                                        else if (piVar28[0xd] != 0) {
                                            uVar19 = 0x50;
                                            goto code_r0x080040f0;
                                        }
                                        *(*piVar28 + uVar19) = 7;
                                        _dev_info(piVar28[2],"All values written to enable.\n");
                                        DataSynchronizationBarrier(3,3,0);
                                        *(piVar28[0xf] + iVar32) = 1;
                                        if (*(piVar28[0xc] + iVar32 * 4) == 1) {
                                            iVar12 = ktime_get();
                                            uVar11 = sym.readl(*piVar28 + 0x1c);
                                            if ((uVar11 & 3) != 0) {
                                                do {
                                                    iVar13 = ktime_get();
                                                    if (iVar12 + 100000 < iVar13) {
                                                        uVar11 = sym.readl(*piVar28 + 0x1c);
                                                        if ((uVar11 & 3) != 0) {
                                                            _dev_err(piVar28[2],"DCC is not ready\n");
                                                        }
                                                        break;
                                                    }
                                                    puVar16 = 0x2;
                                                    usleep_range_state(1,1,2);
                                                    uVar11 = sym.readl(*piVar28 + 0x1c);
                                                } while ((uVar11 & 3) != 0);
                                            }
                                            if (piVar28[0xd] == 1) {
                                                uVar19 = 0x58;
code_r0x080041c8:
                                                uVar19 = *(piVar28 + 0x14c) << 7 | uVar19;
                                            }
                                            else {
                                                if (piVar28[0xd] == 0) {
                                                    uVar19 = 0x44;
                                                    goto code_r0x080041c8;
                                                }
                                                uVar19 = *(piVar28 + 0x14c) << 7 | 0x60;
                                            }
                                            *(*piVar28 + uVar19) = 1;
                                            iVar12 = ktime_get();
                                            uVar11 = sym.readl(*piVar28 + 0x1c);
                                            if ((uVar11 & 3) != 0) {
                                                do {
                                                    iVar13 = ktime_get();
                                                    if (iVar12 + 100000 < iVar13) {
                                                        uVar11 = sym.readl(*piVar28 + 0x1c);
                                                        if ((uVar11 & 3) != 0) {
                                                            _dev_err(piVar28[2],"DCC is not ready\n");
                                                        }
                                                        break;
                                                    }
                                                    puVar16 = 0x2;
                                                    usleep_range_state(1,1,2);
                                                    uVar11 = sym.readl(*piVar28 + 0x1c);
                                                } while ((uVar11 & 3) != 0);
                                            }
                                            if (piVar28[0xd] == 0) {
                                                uVar19 = 0x44;
code_r0x0800427c:
                                                uVar19 = *(piVar28 + 0x14c) << 7 | uVar19;
                                            }
                                            else {
                                                if (piVar28[0xd] == 1) {
                                                    uVar19 = 0x58;
                                                    goto code_r0x0800427c;
                                                }
                                                uVar19 = *(piVar28 + 0x14c) << 7 | 0x60;
                                            }
                                            *(*piVar28 + uVar19) = 1;
                                            if (piVar28[0xd] == 1) {
                                                uVar19 = 0x48;
code_r0x080042c0:
                                                uVar19 = *(piVar28 + 0x14c) << 7 | uVar19;
                                            }
                                            else {
                                                if (piVar28[0xd] == 0) {
                                                    uVar19 = 0x34;
                                                    goto code_r0x080042c0;
                                                }
                                                uVar19 = *(piVar28 + 0x14c) << 7 | 0x50;
                                            }
                                            *(*piVar28 + uVar19) = 2;
                                            if (piVar28[0x13] == '\0') {
                                                if ((piVar28[0xd] != 1) && (uVar27 = uVar26, piVar28[0xd] == 0)) {
                                                    uVar27 = uVar22 | 0x30;
                                                }
                                                *(*piVar28 + uVar27) = 2;
                                            }
                                        }
                                        iVar9 = piVar28[0xd];
                                        if (iVar9 == 2) {
                                            *(*piVar28 + (uVar22 | 0x6c)) = *(piVar28[0x2f] + iVar32);
                                            if (piVar28[0xd] == 1) {
                                                uVar26 = uVar22 | 0x60;
                                            }
                                            else if (piVar28[0xd] != 0) {
                                                uVar26 = uVar22 | 0x68;
                                            }
                                            *(*piVar28 + uVar26) = *(piVar28[0x2a] + iVar32);
                                            uVar19 = *(piVar28[0xc] + iVar32 * 4) | *(piVar28[0xb] + iVar32 * 4) << 4;
                                            if (*(piVar28[0x10] + iVar32) == '\0') {
                                                if (piVar28[0xd] == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (piVar28[0xd] == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) = uVar19 & 0xfffffeff;
                                            }
                                            else {
                                                if (piVar28[0xd] == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (piVar28[0xd] == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) = uVar19 | 0x100;
                                            }
                                        }
                                        else {
                                            uVar19 = *(piVar28[0x2a] + iVar32) << 8;
                                            uVar26 = *(piVar28[0xb] + iVar32 * 4) << 4;
                                            if (*(piVar28[0x10] + iVar32) == '\0') {
                                                if (iVar9 == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (iVar9 == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) =
                                                     (uVar26 | uVar19 | *(piVar28[0xc] + iVar32 * 4)) & 0xfffffdff;
                                            }
                                            else {
                                                if (iVar9 == 1) {
                                                    uVar22 = uVar22 | 0x30;
                                                }
                                                else if (iVar9 == 0) {
                                                    uVar22 = uVar22 | 0x20;
                                                }
                                                else {
                                                    uVar22 = uVar22 | 0x38;
                                                }
                                                *(*piVar28 + uVar22) =
                                                     uVar26 | uVar19 | *(piVar28[0xc] + iVar32 * 4) | 0x200;
                                            }
                                        }
                                        goto code_r0x08003a48;
                                    }
                                }
                                else {
                                    uVar15 = *(piVar28 + 10);
                                    *(piVar28 + 0x6c) = uVar10 >> 2;
                                    uVar31 = uVar10;
                                    if (uVar10 <= uVar15) goto code_r0x08003bb8;
                                }
                            }
code_r0x08004558:
                            __memset_io(piVar28[9],0,uVar15);
                            iVar32 = piVar28[2];
                            uVar3 = piVar28[10];
                            pcVar17 = "DCC SRAM oversteps, 0x%x (0x%x)\n";
code_r0x0800457c:
                            puVar16 = uVar31;
                            _dev_err(iVar32,pcVar17,puVar16,uVar3);
                        }
                        else {
                            uVar14 = 0;
                            bVar8 = false;
                            iVar23 = 0;
                            iVar24 = 0;
                            iVar18 = 0;
                            uVar26 = 0;
                            uVar25 = 0;
                            uVar27 = 0;
                            do {
                                iVar4 = piVar21[-1];
                                uVar30 = 0x10000000;
                                uVar31 = uVar10;
                                if (iVar4 == 1) {
                                    if (uVar26 != 0) {
                                        uVar15 = *(piVar28 + 10);
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar26;
                                    }
                                    if (bVar8) {
                                        uVar15 = *(piVar28 + 10);
                                        uVar31 = uVar10;
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar25 = uVar10 - uVar25;
                                        uVar31 = uVar10 + 4;
                                        iVar18 = iVar18 + (iVar18 - iVar24) * iVar23;
                                        uVar11 = uVar10;
                                        uVar10 = 0;
                                        *(piVar28[9] + uVar11) =
                                             (-1L << (*(piVar28 + 0x2b) & 0x3f)) + 0x10000000U &
                                             iVar23 << (*(piVar28 + 0x2b) & 0x1f) | uVar25 >> 2 | 0x40000000;
                                        iVar24 = 0;
                                    }
                                    else {
                                        iVar23 = piVar21[-3] + -1;
                                        uVar31 = uVar10;
                                        iVar24 = iVar18;
                                    }
                                    uVar27 = 0;
                                    uVar26 = 0;
                                    uVar14 = 0;
                                    bVar8 = bVar8 ^ 1;
                                    uVar25 = uVar10;
                                }
                                else if (iVar4 == 3) {
                                    if (uVar26 != 0) {
                                        uVar15 = *(piVar28 + 10);
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar27 = 0;
                                        uVar14 = 0;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar26;
                                    }
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10;
                                    if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                    if (*(piVar21 + -0xc) != '\0') {
                                        uVar30 = 0x30000000;
                                    }
                                    *(piVar28[9] + uVar10) = uVar30 | *(piVar21 + -5) >> 4;
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 4;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    *(piVar28[9] + uVar31) =
                                         uVar26 | *(piVar21 + -0x24) >> 2 & 0xff | (*(piVar21 + -4) & 0x7f) << 8 |
                                         0xc0008000;
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 8;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    uVar26 = 0;
                                    puVar16 = *(piVar21 + -0x14);
                                    *(piVar28[9] + uVar31) = *(piVar21 + -0x14);
                                    uVar31 = uVar10 + 0xc;
                                }
                                else if (iVar4 == 2) {
                                    if (uVar26 != 0) {
                                        uVar15 = *(piVar28 + 10);
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar27 = 0;
                                        uVar14 = 0;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar26;
                                    }
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10;
                                    if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                    *(piVar28[9] + uVar10) = 0x80000000;
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 4;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    *(piVar28[9] + uVar31) = piVar21[-2];
                                    uVar15 = *(piVar28 + 10);
                                    uVar31 = uVar10 + 8;
                                    if (uVar15 - 4 < uVar31) goto code_r0x08004558;
                                    uVar26 = 0;
                                    puVar16 = *(piVar21 + -0x14);
                                    *(piVar28[9] + uVar31) = *(piVar21 + -0x14);
                                    uVar31 = uVar10 + 0xc;
                                }
                                else {
                                    uVar6 = *(piVar21 + -0x24) >> 2;
                                    uVar30 = *(piVar21 + -5) >> 4;
                                    if (*(piVar21 + -0xc) != '\0') {
                                        uVar30 = *(piVar21 + -5) >> 4 | 0x20000000;
                                    }
                                    uVar5 = *(piVar21 + -4);
                                    puVar16 = uVar5;
                                    if (((uVar14 == 0) || (uVar14 != uVar30)) || (uVar6 < uVar27)) {
                                        if (uVar26 != 0) {
                                            uVar15 = *(piVar28 + 10);
                                            if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                            uVar11 = uVar10;
                                            uVar10 = uVar10 + 4;
                                            *(piVar28[9] + uVar11) = uVar26;
                                        }
                                        uVar15 = *(piVar28 + 10);
                                        uVar31 = uVar10;
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar27 = 0;
                                        uVar26 = 0;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar30;
                                    }
                                    if ((0xff < uVar6 - uVar27) || (uVar14 = *(piVar21 + -4), 0x7f < uVar14)) {
                                        uVar31 = *(piVar21 + -5);
                                        uVar3 = *(piVar21 + -0x24);
                                        iVar32 = piVar28[2];
                                        pcVar17 = "DCC: Programming error Base: 0x%x, offset 0x%x\n";
                                        goto code_r0x0800457c;
                                    }
                                    uVar31 = 0;
                                    if (uVar26 != 0) {
                                        uVar31 = 0xf;
                                    }
                                    uVar7 = 0xc0008000;
                                    if (uVar26 != 0) {
                                        uVar7 = uVar26 & 0x7fff | 0xc0000000;
                                    }
                                    uVar7 = ((uVar14 & 0x7f) << 8 | uVar6 - uVar27) << uVar31 | uVar7;
                                    bVar2 = uVar26 != 0;
                                    uVar26 = uVar7;
                                    if (bVar2) {
                                        uVar15 = *(piVar28 + 10);
                                        uVar31 = uVar10;
                                        if (uVar15 - 4 < uVar10) goto code_r0x08004558;
                                        uVar11 = uVar10;
                                        uVar10 = uVar10 + 4;
                                        *(piVar28[9] + uVar11) = uVar7;
                                        uVar26 = 0;
                                        uVar14 = *(piVar21 + -4);
                                    }
                                    iVar18 = iVar18 + uVar5 * 4;
                                    uVar27 = (uVar6 + uVar14) - 1;
                                    uVar31 = uVar10;
                                    uVar14 = uVar30;
                                }
                                uVar10 = uVar31;
                                piVar21 = *piVar21;
                            } while (piVar28[0x27] + iVar32 * 0x10 != piVar21);
                            if (uVar26 != 0) {
                                uVar15 = *(piVar28 + 10);
                                uVar31 = uVar10;
                                if (uVar10 <= uVar15 - 4) {
                                    *(piVar28[9] + uVar10) = uVar26;
                                    if (bVar8) goto code_r0x080045cc;
                                    uVar10 = uVar10 + 4;
                                    goto code_r0x08003b48;
                                }
                                goto code_r0x08004558;
                            }
                            if (!bVar8) goto code_r0x08003b48;
code_r0x080045cc:
                            _dev_err(piVar28[2],"DCC: Programming error: Loop unterminated\n");
                        }
                        if (piVar28[0xd] == 1) {
                            uVar19 = uVar22 | 0x2c;
                        }
                        else if (piVar28[0xd] == 0) {
                            uVar19 = uVar22 | 0x1c;
                        }
                        *(*piVar28 + uVar19) = 0;
                        _dev_info(piVar28[2],"DCC ram programming failed\n");
                        uVar10 = 0xffffffea;
                        goto code_r0x080044e8;
                    }
                    puVar16 = uVar20;
                    _dev_err(piVar28[2],"List %d is already locked\n",puVar16);
                }
                else {
                    puVar16 = uVar20;
                    _dev_err(piVar28[2],"List %d is already enabled\n",puVar16);
                }
            }
code_r0x08003a48:
            uVar20 = uVar20 + 1;
        } while (uVar20 < *(piVar28 + 0x29));
    }
    *(piVar28 + 0x15c) = *(piVar28 + 0x6c) << 2;
code_r0x080044e8:
    mutex_unlock(piVar28 + 3);
    iVar32 = sp_el0;
    if (*(iVar32 + 0x5e0) == iStack_a8) {
        return uVar10;
    }
    iVar32 = __stack_chk_fail();
    *extraout_x18_00 = 0x80045e4;
    iVar12 = *(iVar32 + 0x98);
    if (*(iVar12 + 0x14c) < *(iVar12 + 0x148)) {
        iVar9 = scnprintf(puVar16,0x1000,0x8000696,*(*(iVar12 + 0x80) + *(iVar12 + 0x14c)));
        uVar11 = iVar9;
    }
    else {
        _dev_err(iVar32,"Select link list to program using curr_list\n");
        uVar11 = 0xffffffffffffffea;
    }
    return uVar11;
}


// ===== sym.dcc_enable @ 0x08003960 (size 3216) =====

uint64_t sym.dcc_enable(int64_t arg1)

{
    int64_t *piVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    uint32_t uVar9;
    int iVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uchar *in_x2;
    uint32_t uVar15;
    char *pcVar16;
    uint64_t uVar17;
    int iVar18;
    uint32_t uVar19;
    int64_t *piVar20;
    int iVar21;
    int iVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    int64_t iVar30;
    ulong unaff_x30;
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar30 = sp_el0;
    iStack_68 = *(iVar30 + 0x5e0);
    iStack_6c = 0;
    uVar26 = *(*(arg1 + 0x10) + 0x2f0);
    mutex_lock(arg1 + 0x18);
    pcVar16 = *(arg1 + 0x78);
    if (((((*pcVar16 == '\0') && (pcVar16[1] == '\0')) && (pcVar16[2] == '\0')) &&
        ((pcVar16[3] == '\0' && (pcVar16[4] == '\0')))) &&
       ((pcVar16[5] == '\0' && ((pcVar16[6] == '\0' && (pcVar16[7] == '\0')))))) {
        in_x2 = *(arg1 + 0x50);
        __memset_io(*(arg1 + 0x48),0xde,in_x2);
    }
    if (*(arg1 + 0x148) == 0) {
        uVar9 = 0;
    }
    else {
        uVar15 = 0;
        uVar9 = 0;
        do {
            iVar30 = uVar15;
            piVar1 = *(arg1 + 0x138) + uVar15 * 0x10;
            if (piVar1 != *piVar1) {
                if (*(*(arg1 + 0x78) + iVar30) == '\0') {
                    uVar19 = uVar15 << 7;
                    uVar29 = uVar15 << 7 | 0x34;
                    if (*(arg1 + 0x68) == 1) {
                        uVar17 = uVar19 | 0x2c;
                    }
                    else {
                        uVar17 = uVar29;
                        if (*(arg1 + 0x68) == 0) {
                            uVar17 = uVar19 | 0x1c;
                        }
                    }
                    if ((*(*arg1 + uVar17) & 1) == 0) {
                        in_x2 = uVar15;
                        _dev_info(*(arg1 + 0x10),"DCC list passed %d\n",in_x2);
                        if (*(arg1 + 0x68) == 1) {
                            uVar17 = uVar19 | 0x2c;
                        }
                        else {
                            uVar17 = uVar29;
                            if (*(arg1 + 0x68) == 0) {
                                uVar17 = uVar19 | 0x1c;
                            }
                        }
                        *(*arg1 + uVar17) = 1;
                        piVar1 = *(arg1 + 0x138) + iVar30 * 0x10;
                        iVar10 = *(arg1 + 0x6c);
                        piVar20 = *piVar1;
                        uVar9 = iVar10 << 2;
                        if (piVar1 == piVar20) {
                            iVar18 = 0;
code_r0x08003b48:
                            uVar14 = *(arg1 + 0x50);
                            uVar28 = uVar9;
                            if (uVar9 <= uVar14 - 4) {
                                *(*(arg1 + 0x48) + uVar9) = 0xc0000000;
                                uVar9 = uVar9 + 4;
                                if ((*(*(arg1 + 0x58) + iVar30 * 4) == 0) && (*(*(arg1 + 0x60) + iVar30 * 4) == 0)) {
                                    uVar28 = uVar9 + iVar18;
                                    uVar14 = *(arg1 + 0x50);
                                    *(arg1 + 0x6c) = uVar28 >> 2;
                                    if (uVar28 <= uVar14) {
code_r0x08003bb8:
                                        *(arg1 + 0x70) = uVar9 >> 2;
                                        if (*(arg1 + 0x68) == 1) {
                                            uVar17 = uVar29;
                                        }
                                        else {
                                            uVar17 = uVar19 | 0x3c;
                                            if (*(arg1 + 0x68) == 0) {
                                                uVar17 = uVar19 | 0x24;
                                            }
                                        }
                                        uVar24 = uVar19 | 0x40;
                                        *(*arg1 + uVar17) = iVar10 + (*(arg1 + 0x54) >> 2);
                                        if (*(arg1 + 0x68) == 1) {
                                            uVar17 = uVar19 | 0x38;
                                        }
                                        else {
                                            uVar17 = uVar24;
                                            if (*(arg1 + 0x68) == 0) {
                                                uVar17 = uVar19 | 0x28;
                                            }
                                        }
                                        *(*arg1 + uVar17) = *(arg1 + 0x70) + (*(arg1 + 0x54) >> 2);
                                        uVar25 = uVar19 | 0x44;
                                        uVar9 = uVar19 | 0x3c;
                                        if ((*(arg1 + 0x68) != 1) && (uVar9 = uVar25, *(arg1 + 0x68) == 0)) {
                                            uVar9 = uVar19 | 0x2c;
                                        }
                                        *(*arg1 + uVar9) = 0xfff;
                                        if ((*(*arg1 + 4) >> 7 & 1) == 0) {
                                            uVar9 = 0;
                                        }
                                        else {
                                            in_x2 = &stack0xffffffffffffff94;
                                            uVar9 = of_property_read_variable_u32_array
                                                              (uVar26,"qcom,transaction_timeout",in_x2,1,0);
                                            if (uVar9 < 0) {
                                                iStack_6c = 0x3f;
                                            }
                                            else if (iStack_6c == 0) {
                                                uVar9 = 0;
                                                goto code_r0x08004098;
                                            }
                                            if (*(arg1 + 0x68) != 1) {
                                                if (*(arg1 + 0x68) == 0) {
                                                    uVar24 = uVar19 | 0x30;
                                                }
                                                else {
                                                    uVar24 = uVar19 | 0x48;
                                                }
                                            }
                                            uVar9 = uVar9 & uVar9 >> 0x1f;
                                            *(*arg1 + uVar24) = iStack_6c;
                                        }
code_r0x08004098:
                                        uVar24 = uVar19 | 0x4c;
                                        uVar23 = uVar25;
                                        if ((*(arg1 + 0x68) != 1) && (uVar23 = uVar24, *(arg1 + 0x68) == 0)) {
                                            uVar23 = uVar19 | 0x30;
                                        }
                                        *(*arg1 + uVar23) = 0;
                                        if (*(arg1 + 0x68) == 1) {
                                            uVar29 = 0x48;
code_r0x080040f0:
                                            uVar29 = uVar19 | uVar29;
                                        }
                                        else if (*(arg1 + 0x68) != 0) {
                                            uVar29 = 0x50;
                                            goto code_r0x080040f0;
                                        }
                                        *(*arg1 + uVar29) = 7;
                                        _dev_info(*(arg1 + 0x10),"All values written to enable.\n");
                                        DataSynchronizationBarrier(3,3,0);
                                        *(*(arg1 + 0x78) + iVar30) = 1;
                                        if (*(*(arg1 + 0x60) + iVar30 * 4) == 1) {
                                            iVar11 = ktime_get();
                                            uVar17 = sym.readl(*arg1 + 0x1c);
                                            if ((uVar17 & 3) != 0) {
                                                do {
                                                    iVar12 = ktime_get();
                                                    if (iVar11 + 100000 < iVar12) {
                                                        uVar17 = sym.readl(*arg1 + 0x1c);
                                                        if ((uVar17 & 3) != 0) {
                                                            _dev_err(*(arg1 + 0x10),"DCC is not ready\n");
                                                        }
                                                        break;
                                                    }
                                                    in_x2 = 0x2;
                                                    usleep_range_state(1,1,2);
                                                    uVar17 = sym.readl(*arg1 + 0x1c);
                                                } while ((uVar17 & 3) != 0);
                                            }
                                            if (*(arg1 + 0x68) == 1) {
                                                uVar29 = 0x58;
code_r0x080041c8:
                                                uVar29 = *(arg1 + 0x14c) << 7 | uVar29;
                                            }
                                            else {
                                                if (*(arg1 + 0x68) == 0) {
                                                    uVar29 = 0x44;
                                                    goto code_r0x080041c8;
                                                }
                                                uVar29 = *(arg1 + 0x14c) << 7 | 0x60;
                                            }
                                            *(*arg1 + uVar29) = 1;
                                            iVar11 = ktime_get();
                                            uVar17 = sym.readl(*arg1 + 0x1c);
                                            if ((uVar17 & 3) != 0) {
                                                do {
                                                    iVar12 = ktime_get();
                                                    if (iVar11 + 100000 < iVar12) {
                                                        uVar17 = sym.readl(*arg1 + 0x1c);
                                                        if ((uVar17 & 3) != 0) {
                                                            _dev_err(*(arg1 + 0x10),"DCC is not ready\n");
                                                        }
                                                        break;
                                                    }
                                                    in_x2 = 0x2;
                                                    usleep_range_state(1,1,2);
                                                    uVar17 = sym.readl(*arg1 + 0x1c);
                                                } while ((uVar17 & 3) != 0);
                                            }
                                            if (*(arg1 + 0x68) == 0) {
                                                uVar29 = 0x44;
code_r0x0800427c:
                                                uVar29 = *(arg1 + 0x14c) << 7 | uVar29;
                                            }
                                            else {
                                                if (*(arg1 + 0x68) == 1) {
                                                    uVar29 = 0x58;
                                                    goto code_r0x0800427c;
                                                }
                                                uVar29 = *(arg1 + 0x14c) << 7 | 0x60;
                                            }
                                            *(*arg1 + uVar29) = 1;
                                            if (*(arg1 + 0x68) == 1) {
                                                uVar29 = 0x48;
code_r0x080042c0:
                                                uVar29 = *(arg1 + 0x14c) << 7 | uVar29;
                                            }
                                            else {
                                                if (*(arg1 + 0x68) == 0) {
                                                    uVar29 = 0x34;
                                                    goto code_r0x080042c0;
                                                }
                                                uVar29 = *(arg1 + 0x14c) << 7 | 0x50;
                                            }
                                            *(*arg1 + uVar29) = 2;
                                            if (*(arg1 + 0x98) == '\0') {
                                                if ((*(arg1 + 0x68) != 1) && (uVar25 = uVar24, *(arg1 + 0x68) == 0)) {
                                                    uVar25 = uVar19 | 0x30;
                                                }
                                                *(*arg1 + uVar25) = 2;
                                            }
                                        }
                                        iVar10 = *(arg1 + 0x68);
                                        if (iVar10 == 2) {
                                            *(*arg1 + (uVar19 | 0x6c)) = *(*(arg1 + 0x178) + iVar30);
                                            if (*(arg1 + 0x68) == 1) {
                                                uVar24 = uVar19 | 0x60;
                                            }
                                            else if (*(arg1 + 0x68) != 0) {
                                                uVar24 = uVar19 | 0x68;
                                            }
                                            *(*arg1 + uVar24) = *(*(arg1 + 0x150) + iVar30);
                                            uVar29 = *(*(arg1 + 0x60) + iVar30 * 4) |
                                                     *(*(arg1 + 0x58) + iVar30 * 4) << 4;
                                            if (*(*(arg1 + 0x80) + iVar30) == '\0') {
                                                if (*(arg1 + 0x68) == 1) {
                                                    uVar19 = uVar19 | 0x30;
                                                }
                                                else if (*(arg1 + 0x68) == 0) {
                                                    uVar19 = uVar19 | 0x20;
                                                }
                                                else {
                                                    uVar19 = uVar19 | 0x38;
                                                }
                                                *(*arg1 + uVar19) = uVar29 & 0xfffffeff;
                                            }
                                            else {
                                                if (*(arg1 + 0x68) == 1) {
                                                    uVar19 = uVar19 | 0x30;
                                                }
                                                else if (*(arg1 + 0x68) == 0) {
                                                    uVar19 = uVar19 | 0x20;
                                                }
                                                else {
                                                    uVar19 = uVar19 | 0x38;
                                                }
                                                *(*arg1 + uVar19) = uVar29 | 0x100;
                                            }
                                        }
                                        else {
                                            uVar29 = *(*(arg1 + 0x150) + iVar30) << 8;
                                            uVar24 = *(*(arg1 + 0x58) + iVar30 * 4) << 4;
                                            if (*(*(arg1 + 0x80) + iVar30) == '\0') {
                                                if (iVar10 == 1) {
                                                    uVar19 = uVar19 | 0x30;
                                                }
                                                else if (iVar10 == 0) {
                                                    uVar19 = uVar19 | 0x20;
                                                }
                                                else {
                                                    uVar19 = uVar19 | 0x38;
                                                }
                                                *(*arg1 + uVar19) =
                                                     (uVar24 | uVar29 | *(*(arg1 + 0x60) + iVar30 * 4)) & 0xfffffdff;
                                            }
                                            else {
                                                if (iVar10 == 1) {
                                                    uVar19 = uVar19 | 0x30;
                                                }
                                                else if (iVar10 == 0) {
                                                    uVar19 = uVar19 | 0x20;
                                                }
                                                else {
                                                    uVar19 = uVar19 | 0x38;
                                                }
                                                *(*arg1 + uVar19) =
                                                     uVar24 | uVar29 | *(*(arg1 + 0x60) + iVar30 * 4) | 0x200;
                                            }
                                        }
                                        goto code_r0x08003a48;
                                    }
                                }
                                else {
                                    uVar14 = *(arg1 + 0x50);
                                    *(arg1 + 0x6c) = uVar9 >> 2;
                                    uVar28 = uVar9;
                                    if (uVar9 <= uVar14) goto code_r0x08003bb8;
                                }
                            }
code_r0x08004558:
                            __memset_io(*(arg1 + 0x48),0,uVar14);
                            uVar26 = *(arg1 + 0x10);
                            uVar3 = *(arg1 + 0x50);
                            pcVar16 = "DCC SRAM oversteps, 0x%x (0x%x)\n";
code_r0x0800457c:
                            in_x2 = uVar28;
                            _dev_err(uVar26,pcVar16,in_x2,uVar3);
                        }
                        else {
                            uVar13 = 0;
                            bVar8 = false;
                            iVar21 = 0;
                            iVar22 = 0;
                            iVar18 = 0;
                            uVar24 = 0;
                            uVar23 = 0;
                            uVar25 = 0;
                            do {
                                iVar4 = piVar20[-1];
                                uVar27 = 0x10000000;
                                uVar28 = uVar9;
                                if (iVar4 == 1) {
                                    if (uVar24 != 0) {
                                        uVar14 = *(arg1 + 0x50);
                                        if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                        uVar17 = uVar9;
                                        uVar9 = uVar9 + 4;
                                        *(*(arg1 + 0x48) + uVar17) = uVar24;
                                    }
                                    if (bVar8) {
                                        uVar14 = *(arg1 + 0x50);
                                        uVar28 = uVar9;
                                        if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                        uVar23 = uVar9 - uVar23;
                                        uVar28 = uVar9 + 4;
                                        iVar18 = iVar18 + (iVar18 - iVar22) * iVar21;
                                        uVar17 = uVar9;
                                        uVar9 = 0;
                                        *(*(arg1 + 0x48) + uVar17) =
                                             (-1L << (*(arg1 + 0x158) & 0x3f)) + 0x10000000U &
                                             iVar21 << (*(arg1 + 0x158) & 0x1f) | uVar23 >> 2 | 0x40000000;
                                        iVar22 = 0;
                                    }
                                    else {
                                        iVar21 = piVar20[-3] + -1;
                                        uVar28 = uVar9;
                                        iVar22 = iVar18;
                                    }
                                    uVar25 = 0;
                                    uVar24 = 0;
                                    uVar13 = 0;
                                    bVar8 = bVar8 ^ 1;
                                    uVar23 = uVar9;
                                }
                                else if (iVar4 == 3) {
                                    if (uVar24 != 0) {
                                        uVar14 = *(arg1 + 0x50);
                                        if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                        uVar25 = 0;
                                        uVar13 = 0;
                                        uVar17 = uVar9;
                                        uVar9 = uVar9 + 4;
                                        *(*(arg1 + 0x48) + uVar17) = uVar24;
                                    }
                                    uVar14 = *(arg1 + 0x50);
                                    uVar28 = uVar9;
                                    if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                    if (*(piVar20 + -0xc) != '\0') {
                                        uVar27 = 0x30000000;
                                    }
                                    *(*(arg1 + 0x48) + uVar9) = uVar27 | *(piVar20 + -5) >> 4;
                                    uVar14 = *(arg1 + 0x50);
                                    uVar28 = uVar9 + 4;
                                    if (uVar14 - 4 < uVar28) goto code_r0x08004558;
                                    *(*(arg1 + 0x48) + uVar28) =
                                         uVar24 | *(piVar20 + -0x24) >> 2 & 0xff | (*(piVar20 + -4) & 0x7f) << 8 |
                                         0xc0008000;
                                    uVar14 = *(arg1 + 0x50);
                                    uVar28 = uVar9 + 8;
                                    if (uVar14 - 4 < uVar28) goto code_r0x08004558;
                                    uVar24 = 0;
                                    in_x2 = *(piVar20 + -0x14);
                                    *(*(arg1 + 0x48) + uVar28) = *(piVar20 + -0x14);
                                    uVar28 = uVar9 + 0xc;
                                }
                                else if (iVar4 == 2) {
                                    if (uVar24 != 0) {
                                        uVar14 = *(arg1 + 0x50);
                                        if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                        uVar25 = 0;
                                        uVar13 = 0;
                                        uVar17 = uVar9;
                                        uVar9 = uVar9 + 4;
                                        *(*(arg1 + 0x48) + uVar17) = uVar24;
                                    }
                                    uVar14 = *(arg1 + 0x50);
                                    uVar28 = uVar9;
                                    if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                    *(*(arg1 + 0x48) + uVar9) = 0x80000000;
                                    uVar14 = *(arg1 + 0x50);
                                    uVar28 = uVar9 + 4;
                                    if (uVar14 - 4 < uVar28) goto code_r0x08004558;
                                    *(*(arg1 + 0x48) + uVar28) = piVar20[-2];
                                    uVar14 = *(arg1 + 0x50);
                                    uVar28 = uVar9 + 8;
                                    if (uVar14 - 4 < uVar28) goto code_r0x08004558;
                                    uVar24 = 0;
                                    in_x2 = *(piVar20 + -0x14);
                                    *(*(arg1 + 0x48) + uVar28) = *(piVar20 + -0x14);
                                    uVar28 = uVar9 + 0xc;
                                }
                                else {
                                    uVar6 = *(piVar20 + -0x24) >> 2;
                                    uVar27 = *(piVar20 + -5) >> 4;
                                    if (*(piVar20 + -0xc) != '\0') {
                                        uVar27 = *(piVar20 + -5) >> 4 | 0x20000000;
                                    }
                                    uVar5 = *(piVar20 + -4);
                                    in_x2 = uVar5;
                                    if (((uVar13 == 0) || (uVar13 != uVar27)) || (uVar6 < uVar25)) {
                                        if (uVar24 != 0) {
                                            uVar14 = *(arg1 + 0x50);
                                            if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                            uVar17 = uVar9;
                                            uVar9 = uVar9 + 4;
                                            *(*(arg1 + 0x48) + uVar17) = uVar24;
                                        }
                                        uVar14 = *(arg1 + 0x50);
                                        uVar28 = uVar9;
                                        if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                        uVar25 = 0;
                                        uVar24 = 0;
                                        uVar17 = uVar9;
                                        uVar9 = uVar9 + 4;
                                        *(*(arg1 + 0x48) + uVar17) = uVar27;
                                    }
                                    if ((0xff < uVar6 - uVar25) || (uVar13 = *(piVar20 + -4), 0x7f < uVar13)) {
                                        uVar28 = *(piVar20 + -5);
                                        uVar3 = *(piVar20 + -0x24);
                                        uVar26 = *(arg1 + 0x10);
                                        pcVar16 = "DCC: Programming error Base: 0x%x, offset 0x%x\n";
                                        goto code_r0x0800457c;
                                    }
                                    uVar28 = 0;
                                    if (uVar24 != 0) {
                                        uVar28 = 0xf;
                                    }
                                    uVar7 = 0xc0008000;
                                    if (uVar24 != 0) {
                                        uVar7 = uVar24 & 0x7fff | 0xc0000000;
                                    }
                                    uVar7 = ((uVar13 & 0x7f) << 8 | uVar6 - uVar25) << uVar28 | uVar7;
                                    bVar2 = uVar24 != 0;
                                    uVar24 = uVar7;
                                    if (bVar2) {
                                        uVar14 = *(arg1 + 0x50);
                                        uVar28 = uVar9;
                                        if (uVar14 - 4 < uVar9) goto code_r0x08004558;
                                        uVar17 = uVar9;
                                        uVar9 = uVar9 + 4;
                                        *(*(arg1 + 0x48) + uVar17) = uVar7;
                                        uVar24 = 0;
                                        uVar13 = *(piVar20 + -4);
                                    }
                                    iVar18 = iVar18 + uVar5 * 4;
                                    uVar25 = (uVar6 + uVar13) - 1;
                                    uVar28 = uVar9;
                                    uVar13 = uVar27;
                                }
                                uVar9 = uVar28;
                                piVar20 = *piVar20;
                            } while (*(arg1 + 0x138) + iVar30 * 0x10 != piVar20);
                            if (uVar24 != 0) {
                                uVar14 = *(arg1 + 0x50);
                                uVar28 = uVar9;
                                if (uVar9 <= uVar14 - 4) {
                                    *(*(arg1 + 0x48) + uVar9) = uVar24;
                                    if (bVar8) goto code_r0x080045cc;
                                    uVar9 = uVar9 + 4;
                                    goto code_r0x08003b48;
                                }
                                goto code_r0x08004558;
                            }
                            if (!bVar8) goto code_r0x08003b48;
code_r0x080045cc:
                            _dev_err(*(arg1 + 0x10),"DCC: Programming error: Loop unterminated\n");
                        }
                        if (*(arg1 + 0x68) == 1) {
                            uVar29 = uVar19 | 0x2c;
                        }
                        else if (*(arg1 + 0x68) == 0) {
                            uVar29 = uVar19 | 0x1c;
                        }
                        *(*arg1 + uVar29) = 0;
                        _dev_info(*(arg1 + 0x10),"DCC ram programming failed\n");
                        uVar9 = 0xffffffea;
                        goto code_r0x080044e8;
                    }
                    in_x2 = uVar15;
                    _dev_err(*(arg1 + 0x10),"List %d is already locked\n",in_x2);
                }
                else {
                    in_x2 = uVar15;
                    _dev_err(*(arg1 + 0x10),"List %d is already enabled\n",in_x2);
                }
            }
code_r0x08003a48:
            uVar15 = uVar15 + 1;
        } while (uVar15 < *(arg1 + 0x148));
    }
    *(arg1 + 0x15c) = *(arg1 + 0x6c) << 2;
code_r0x080044e8:
    mutex_unlock(arg1 + 0x18);
    iVar30 = sp_el0;
    if (*(iVar30 + 0x5e0) != iStack_68) {
        iVar30 = __stack_chk_fail();
        *extraout_x18 = 0x80045e4;
        iVar11 = *(iVar30 + 0x98);
        if (*(iVar11 + 0x14c) < *(iVar11 + 0x148)) {
            iVar10 = scnprintf(in_x2,0x1000,0x8000696,*(*(iVar11 + 0x80) + *(iVar11 + 0x14c)));
            uVar17 = iVar10;
        }
        else {
            _dev_err(iVar30,"Select link list to program using curr_list\n");
            uVar17 = 0xffffffffffffffea;
        }
        return uVar17;
    }
    return uVar9;
}


// ===== sym.hw_trig_show @ 0x080045f0 (size 108) =====

int64_t sym.hw_trig_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (*(iVar2 + 0x14c) < *(iVar2 + 0x148)) {
        iVar1 = scnprintf(arg2,0x1000,0x8000696,*(*(iVar2 + 0x80) + *(iVar2 + 0x14c)));
        iVar2 = iVar1;
    }
    else {
        _dev_err(arg1,"Select link list to program using curr_list\n");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.hw_trig_store @ 0x0800465c (size 264) =====

int64_t sym.hw_trig_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    puVar3 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    uStack_50 = 0;
    iVar2 = kstrtoull(arg2,0x10,&uStack_50);
    iVar4 = -0x16;
    if ((iVar2 == 0) && (uStack_50 < 2)) {
        mutex_lock(iVar5 + 0x18);
        uVar1 = *(iVar5 + 0x14c);
        if (uVar1 < *(iVar5 + 0x148)) {
            if (*(*(iVar5 + 0x78) + uVar1) == '\0') {
                iVar4 = arg3;
                *(*(iVar5 + 0x80) + uVar1) = uStack_50 != 0;
            }
            else {
                iVar4 = -0x10;
            }
        }
        else {
            _dev_err(arg1,"Select link list to program using curr_list\n");
            iVar4 = -0x16;
        }
        mutex_unlock(iVar5 + 0x18);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.sw_trig_show;
    iVar5 = *(iVar4 + 0x98);
    if (*(iVar5 + 0x14c) < *(iVar5 + 0x148)) {
        iVar2 = scnprintf(puVar3,0x1000,0x8000696,*(*(iVar5 + 0x88) + *(iVar5 + 0x14c)));
        iVar4 = iVar2;
    }
    else {
        _dev_err(iVar4,"Select link list to program using curr_list\n");
        iVar4 = -0x16;
    }
    return iVar4;
}


// ===== sym.sw_trig_show @ 0x08004764 (size 108) =====

int64_t sym.sw_trig_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (*(iVar2 + 0x14c) < *(iVar2 + 0x148)) {
        iVar1 = scnprintf(arg2,0x1000,0x8000696,*(*(iVar2 + 0x88) + *(iVar2 + 0x14c)));
        iVar2 = iVar1;
    }
    else {
        _dev_err(arg1,"Select link list to program using curr_list\n");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.sw_trig_store @ 0x080047d0 (size 212) =====

uint64_t sym.sw_trig_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint32_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    uchar uVar6;
    int iVar7;
    uint64_t uVar8;
    int64_t iVar9;
    char *pcVar10;
    uint64_t *puVar11;
    char *pcVar12;
    uint32_t *puVar13;
    int iVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    uint32_t uVar17;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint32_t uVar18;
    int64_t iVar19;
    int64_t *piVar20;
    int64_t *piVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    int64_t iVar24;
    uint64_t uVar25;
    ulong unaff_x30;
    uchar auVar26 [12];
    uint32_t uStack_124;
    int iStack_120;
    uint32_t uStack_11c;
    int64_t iStack_118;
    uchar **ppuStack_110;
    code *pcStack_108;
    int64_t iStack_100;
    uint64_t uStack_f8;
    int64_t iStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    int64_t iStack_a8;
    uchar *puStack_a0;
    code *pcStack_98;
    uint64_t uStack_40;
    int64_t iStack_38;
    uint uVar2;
    
    puVar11 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_38 = *(iVar19 + 0x5e0);
    iVar19 = *(arg1 + 0x98);
    uStack_40 = 0;
    uVar15 = arg3;
    iVar7 = kstrtoull(arg2,0x10);
    uVar8 = 0xffffffffffffffea;
    if ((iVar7 == 0) && (uStack_40 < 2)) {
        if (*(iVar19 + 0x14c) < *(iVar19 + 0x148)) {
            uVar8 = arg3;
            *(*(iVar19 + 0x88) + *(iVar19 + 0x14c)) = uStack_40 != 0;
        }
        else {
            _dev_err(arg1,"Select link list to program using curr_list\n");
            uVar8 = 0xffffffffffffffea;
        }
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_38) {
        return uVar8;
    }
    iVar9 = __stack_chk_fail(uVar8);
    *extraout_x18 = sym.config_show;
    pcStack_98 = sym.config_show;
    iVar19 = sp_el0;
    iStack_a8 = *(iVar19 + 0x5e0);
    iVar24 = *(iVar9 + 0x98);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    iVar19 = iVar24 + 0x18;
    uStack_e8 = 0;
    uStack_e0 = 0;
    *puVar11 = '\0';
    pcVar12 = puVar11;
    puStack_a0 = &stack0xffffffffffffffd0;
    mutex_lock(iVar19);
    if (*(iVar24 + 0x14c) < *(iVar24 + 0x148)) {
        piVar21 = *(iVar24 + 0x138) + *(iVar24 + 0x14c) * 0x10;
        piVar20 = *piVar21;
        if (piVar21 == piVar20) {
            uVar8 = 0;
        }
        else {
            uVar25 = 0;
            iStack_f0 = iVar9;
            do {
                iVar7 = piVar20[-1];
                if (iVar7 == 1) {
                    uVar15 = *(piVar20 + -0x1c);
                    pcVar12 = "Index: 0x%x, Loop: %d\n";
                    iVar7 = scnprintf(&uStack_e8,0x40,"Index: 0x%x, Loop: %d\n",uVar15,piVar20[-3]);
                }
                else {
                    if (iVar7 == 3) {
                        uVar1 = piVar20[-5];
                        uVar4 = *(piVar20 + -0x24);
                        uVar2 = piVar20[-4];
                        uVar23 = *(piVar20 + -0x1c);
                        uVar6 = *(piVar20 + -0xc);
                        pcVar12 = "Write Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    else {
                        if (iVar7 == 2) {
                            uVar15 = *(piVar20 + -0x1c);
                            pcVar12 = "Index: 0x%x, mask: 0x%x, val: 0x%x\n";
                            iVar7 = scnprintf(&uStack_e8,0x40,"Index: 0x%x, mask: 0x%x, val: 0x%x\n",uVar15,
                                              piVar20[-2],*(piVar20 + -0x14));
                            goto code_r0x080049d8;
                        }
                        uVar1 = piVar20[-5];
                        uVar4 = *(piVar20 + -0x24);
                        uVar2 = piVar20[-4];
                        uVar23 = *(piVar20 + -0x1c);
                        uVar6 = *(piVar20 + -0xc);
                        pcVar12 = "Read Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    uVar15 = uVar23;
                    iVar7 = scnprintf(&uStack_e8,0x40,pcVar12,uVar15,uVar1,uVar4,uVar2,uVar6);
                }
code_r0x080049d8:
                uVar23 = iVar7 + uVar25;
                uVar8 = uVar23;
                if (0x1000 < uVar23) {
                    pcVar10 = "DCC: Couldn\'t write complete config\n";
                    iVar9 = iStack_f0;
                    uVar8 = uVar25;
                    goto code_r0x08004a38;
                }
                pcVar12 = 0x1000;
                strlcat(puVar11,&uStack_e8,0x1000);
                piVar20 = *piVar20;
                uVar25 = uVar8;
            } while (*(iVar24 + 0x138) + *(iVar24 + 0x14c) * 0x10 != piVar20);
        }
    }
    else {
        uVar8 = 0xffffffea;
        pcVar10 = "Select link list to program using curr_list\n";
code_r0x08004a38:
        _dev_err(iVar9,pcVar10);
    }
    mutex_unlock(iVar19);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_a8) {
        return uVar8;
    }
    iVar24 = __stack_chk_fail();
    *extraout_x18_00 = sym.config_store;
    pcStack_108 = sym.config_store;
    iVar9 = sp_el0;
    iStack_118 = *(iVar9 + 0x5e0);
    puVar13 = &uStack_124;
    puVar16 = &uStack_11c;
    iVar9 = *(iVar24 + 0x98);
    uStack_11c = 0;
    uStack_124 = 0;
    iStack_120 = 0;
    ppuStack_110 = &puStack_a0;
    iStack_100 = iVar19;
    uStack_f8 = uVar8;
    iVar7 = sscanf(pcVar12,"%x %i %d",puVar13,puVar16,&iStack_120);
    iVar14 = puVar16;
    uVar8 = 0xffffffffffffffea;
    if (((0xfffffffc < iVar7 - 4U) && (-1 < iStack_120)) && (iStack_120 < 2)) {
        if (iVar7 == 1) {
            uStack_11c = 1;
code_r0x08004b3c:
            iVar19 = 0;
            iStack_120 = 0;
        }
        else {
            if ((iVar7 != 3) || (iStack_120 != 1)) goto code_r0x08004b3c;
            iVar19 = 1;
            iStack_120 = 1;
        }
        puVar13 = uStack_11c;
        iVar7 = sym.dcc_config_add(iVar9,uStack_124,puVar13,iVar19);
        iVar14 = iVar19;
        uVar8 = uVar15;
        if (iVar7 != 0) {
            uVar8 = iVar7;
        }
    }
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_118) {
        return uVar8;
    }
    auVar26 = __stack_chk_fail(uVar8);
    uVar23 = auVar26._8_4_;
    iVar19 = auVar26._0_8_;
    *extraout_x18_01 = sym.dcc_config_add;
    uVar15 = puVar13 & 0xffffffff;
    mutex_lock(iVar19 + 0x18);
    if (*(iVar19 + 0x14c) < *(iVar19 + 0x148)) {
        uVar17 = puVar13;
        if ((uVar17 != 0) && (uVar17 <= *(iVar19 + 0x50) >> 3)) {
            piVar21 = *(iVar19 + 0x138) + *(iVar19 + 0x14c) * 0x10;
            uVar22 = uVar23 & 0xfffffff0;
            if ((piVar21 == *piVar21) ||
               (iVar9 = *(*(iVar19 + 0x138) + *(iVar19 + 0x14c) * 0x10 + 8), *(iVar9 + -8) != 0)) {
code_r0x08004c28:
                uVar23 = uVar23 - uVar22;
                do {
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    puVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x38);
                    if (puVar13 == NULL) {
                        uVar23 = 0xfffffff4;
                        goto code_r0x08004d5c;
                    }
                    uVar5 = *(iVar19 + 0x14c);
                    uVar18 = uVar15;
                    iVar9 = *(iVar19 + 0x140);
                    uVar17 = uVar18;
                    if (0x7e < uVar18) {
                        uVar17 = 0x7f;
                    }
                    *puVar13 = uVar22;
                    puVar13[1] = uVar23;
                    iVar24 = uVar5 * 4;
                    puVar16 = puVar13 + 10;
                    puVar13[2] = uVar17;
                    uVar17 = *(iVar9 + iVar24);
                    *(iVar9 + iVar24) = uVar17 + 1;
                    puVar13[3] = uVar17;
                    puVar13[8] = 0;
                    *(puVar13 + 7) = iVar14 != 0;
                    *(puVar13 + 10) = puVar16;
                    *(puVar13 + 0xc) = puVar16;
                    iVar9 = *(iVar19 + 0x138) + *(iVar19 + 0x14c) * 0x10;
                    piVar21 = *(iVar9 + 8);
                    uVar15 = __list_add_valid(puVar16,piVar21,iVar9);
                    if ((uVar15 & 1) != 0) {
                        *(iVar9 + 8) = puVar16;
                        *(puVar13 + 10) = iVar9;
                        *(puVar13 + 0xc) = piVar21;
                        *piVar21 = puVar16;
                    }
                    uVar23 = uVar23 + 0x1fc;
                    uVar15 = uVar18 - puVar13[2];
                } while (uVar18 - puVar13[2] != 0);
            }
            else {
                uVar3 = *(iVar9 + -0x28);
                uVar18 = *(iVar9 + -0x24) + uVar3;
                if (((uVar23 < uVar18) || (uVar18 + 0x3fc < uVar23)) ||
                   (uVar22 = uVar3, uVar18 + *(iVar9 + -0x20) * 4 != uVar23)) goto code_r0x08004c28;
                uVar17 = *(iVar9 + -0x20) + uVar17;
                uVar23 = uVar17;
                if (0x7e < uVar17) {
                    uVar23 = 0x7f;
                }
                uVar15 = uVar17 - uVar23;
                *(iVar9 + -0x20) = uVar23;
                if (uVar17 - uVar23 != 0) {
                    uVar23 = uVar18 + uVar23 * 4;
                    goto code_r0x08004c28;
                }
            }
            uVar23 = 0;
            goto code_r0x08004d5c;
        }
        pcVar12 = "DCC: Invalid length\n";
    }
    else {
        pcVar12 = "Select link list to program using curr_list\n";
    }
    _dev_err(*(iVar19 + 0x10),pcVar12);
    uVar23 = 0xffffffea;
code_r0x08004d5c:
    mutex_unlock(iVar19 + 0x18);
    return uVar23;
}


// ===== sym.config_show @ 0x080048a4 (size 492) =====

uint64_t sym.config_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint uVar1;
    uint32_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    uchar uVar6;
    int iVar7;
    int64_t iVar8;
    char *pcVar9;
    char *pcVar10;
    uint32_t *puVar11;
    int iVar12;
    uint64_t in_x3;
    uint32_t *puVar13;
    int64_t iVar14;
    uint32_t uVar15;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar16;
    uint32_t uVar17;
    int64_t *piVar18;
    int64_t *piVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    int64_t iVar22;
    uint64_t uVar23;
    ulong unaff_x30;
    uchar auVar24 [12];
    uint32_t uStack_e4;
    int iStack_e0;
    uint32_t uStack_dc;
    int64_t iStack_d8;
    uchar *puStack_d0;
    code *pcStack_c8;
    int64_t iStack_c0;
    uint64_t uStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uint uVar2;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar22 = *(arg1 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    iVar14 = iVar22 + 0x18;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *arg2 = 0;
    pcVar10 = arg2;
    mutex_lock(iVar14);
    if (*(iVar22 + 0x14c) < *(iVar22 + 0x148)) {
        piVar19 = *(iVar22 + 0x138) + *(iVar22 + 0x14c) * 0x10;
        piVar18 = *piVar19;
        if (piVar19 == piVar18) {
            uVar16 = 0;
        }
        else {
            uVar23 = 0;
            iStack_b0 = arg1;
            do {
                iVar7 = piVar18[-1];
                if (iVar7 == 1) {
                    in_x3 = *(piVar18 + -0x1c);
                    pcVar10 = "Index: 0x%x, Loop: %d\n";
                    iVar7 = scnprintf(&uStack_a8,0x40,"Index: 0x%x, Loop: %d\n",in_x3,piVar18[-3]);
                }
                else {
                    if (iVar7 == 3) {
                        uVar1 = piVar18[-5];
                        uVar4 = *(piVar18 + -0x24);
                        uVar2 = piVar18[-4];
                        uVar21 = *(piVar18 + -0x1c);
                        uVar6 = *(piVar18 + -0xc);
                        pcVar10 = "Write Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    else {
                        if (iVar7 == 2) {
                            in_x3 = *(piVar18 + -0x1c);
                            pcVar10 = "Index: 0x%x, mask: 0x%x, val: 0x%x\n";
                            iVar7 = scnprintf(&uStack_a8,0x40,"Index: 0x%x, mask: 0x%x, val: 0x%x\n",in_x3,
                                              piVar18[-2],*(piVar18 + -0x14));
                            goto code_r0x080049d8;
                        }
                        uVar1 = piVar18[-5];
                        uVar4 = *(piVar18 + -0x24);
                        uVar2 = piVar18[-4];
                        uVar21 = *(piVar18 + -0x1c);
                        uVar6 = *(piVar18 + -0xc);
                        pcVar10 = "Read Index: 0x%x, Base: 0x%x, Offset: 0x%x, len: 0x%x APB: %d\n";
                    }
                    in_x3 = uVar21;
                    iVar7 = scnprintf(&uStack_a8,0x40,pcVar10,in_x3,uVar1,uVar4,uVar2,uVar6);
                }
code_r0x080049d8:
                uVar21 = iVar7 + uVar23;
                uVar16 = uVar21;
                if (0x1000 < uVar21) {
                    pcVar9 = "DCC: Couldn\'t write complete config\n";
                    arg1 = iStack_b0;
                    uVar16 = uVar23;
                    goto code_r0x08004a38;
                }
                pcVar10 = 0x1000;
                strlcat(arg2,&uStack_a8,0x1000);
                piVar18 = *piVar18;
                uVar23 = uVar16;
            } while (*(iVar22 + 0x138) + *(iVar22 + 0x14c) * 0x10 != piVar18);
        }
    }
    else {
        uVar16 = 0xffffffea;
        pcVar9 = "Select link list to program using curr_list\n";
code_r0x08004a38:
        _dev_err(arg1,pcVar9);
    }
    mutex_unlock(iVar14);
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_68) {
        return uVar16;
    }
    iVar8 = __stack_chk_fail();
    *extraout_x18 = sym.config_store;
    pcStack_c8 = sym.config_store;
    iVar22 = sp_el0;
    iStack_d8 = *(iVar22 + 0x5e0);
    puVar11 = &uStack_e4;
    puVar13 = &uStack_dc;
    iVar22 = *(iVar8 + 0x98);
    uStack_dc = 0;
    uStack_e4 = 0;
    iStack_e0 = 0;
    puStack_d0 = &stack0xffffffffffffffa0;
    iStack_c0 = iVar14;
    uStack_b8 = uVar16;
    iVar7 = sscanf(pcVar10,"%x %i %d",puVar11,puVar13,&iStack_e0);
    iVar12 = puVar13;
    uVar16 = 0xffffffffffffffea;
    if (((0xfffffffc < iVar7 - 4U) && (-1 < iStack_e0)) && (iStack_e0 < 2)) {
        if (iVar7 == 1) {
            uStack_dc = 1;
code_r0x08004b3c:
            iVar14 = 0;
            iStack_e0 = 0;
        }
        else {
            if ((iVar7 != 3) || (iStack_e0 != 1)) goto code_r0x08004b3c;
            iVar14 = 1;
            iStack_e0 = 1;
        }
        puVar11 = uStack_dc;
        iVar7 = sym.dcc_config_add(iVar22,uStack_e4,puVar11,iVar14);
        iVar12 = iVar14;
        uVar16 = in_x3;
        if (iVar7 != 0) {
            uVar16 = iVar7;
        }
    }
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_d8) {
        return uVar16;
    }
    auVar24 = __stack_chk_fail(uVar16);
    uVar21 = auVar24._8_4_;
    iVar14 = auVar24._0_8_;
    *extraout_x18_00 = sym.dcc_config_add;
    uVar16 = puVar11 & 0xffffffff;
    mutex_lock(iVar14 + 0x18);
    if (*(iVar14 + 0x14c) < *(iVar14 + 0x148)) {
        uVar15 = puVar11;
        if ((uVar15 != 0) && (uVar15 <= *(iVar14 + 0x50) >> 3)) {
            piVar19 = *(iVar14 + 0x138) + *(iVar14 + 0x14c) * 0x10;
            uVar20 = uVar21 & 0xfffffff0;
            if ((piVar19 == *piVar19) ||
               (iVar22 = *(*(iVar14 + 0x138) + *(iVar14 + 0x14c) * 0x10 + 8), *(iVar22 + -8) != 0)) {
code_r0x08004c28:
                uVar21 = uVar21 - uVar20;
                do {
                    iVar22 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar22 = 0x30;
                    }
                    puVar11 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar22),0xdc0,0x38);
                    if (puVar11 == NULL) {
                        uVar21 = 0xfffffff4;
                        goto code_r0x08004d5c;
                    }
                    uVar5 = *(iVar14 + 0x14c);
                    uVar17 = uVar16;
                    iVar22 = *(iVar14 + 0x140);
                    uVar15 = uVar17;
                    if (0x7e < uVar17) {
                        uVar15 = 0x7f;
                    }
                    *puVar11 = uVar20;
                    puVar11[1] = uVar21;
                    iVar8 = uVar5 * 4;
                    puVar13 = puVar11 + 10;
                    puVar11[2] = uVar15;
                    uVar15 = *(iVar22 + iVar8);
                    *(iVar22 + iVar8) = uVar15 + 1;
                    puVar11[3] = uVar15;
                    puVar11[8] = 0;
                    *(puVar11 + 7) = iVar12 != 0;
                    *(puVar11 + 10) = puVar13;
                    *(puVar11 + 0xc) = puVar13;
                    iVar22 = *(iVar14 + 0x138) + *(iVar14 + 0x14c) * 0x10;
                    piVar19 = *(iVar22 + 8);
                    uVar16 = __list_add_valid(puVar13,piVar19,iVar22);
                    if ((uVar16 & 1) != 0) {
                        *(iVar22 + 8) = puVar13;
                        *(puVar11 + 10) = iVar22;
                        *(puVar11 + 0xc) = piVar19;
                        *piVar19 = puVar13;
                    }
                    uVar21 = uVar21 + 0x1fc;
                    uVar16 = uVar17 - puVar11[2];
                } while (uVar17 - puVar11[2] != 0);
            }
            else {
                uVar3 = *(iVar22 + -0x28);
                uVar17 = *(iVar22 + -0x24) + uVar3;
                if (((uVar21 < uVar17) || (uVar17 + 0x3fc < uVar21)) ||
                   (uVar20 = uVar3, uVar17 + *(iVar22 + -0x20) * 4 != uVar21)) goto code_r0x08004c28;
                uVar15 = *(iVar22 + -0x20) + uVar15;
                uVar21 = uVar15;
                if (0x7e < uVar15) {
                    uVar21 = 0x7f;
                }
                uVar16 = uVar15 - uVar21;
                *(iVar22 + -0x20) = uVar21;
                if (uVar15 - uVar21 != 0) {
                    uVar21 = uVar17 + uVar21 * 4;
                    goto code_r0x08004c28;
                }
            }
            uVar21 = 0;
            goto code_r0x08004d5c;
        }
        pcVar10 = "DCC: Invalid length\n";
    }
    else {
        pcVar10 = "Select link list to program using curr_list\n";
    }
    _dev_err(*(iVar14 + 0x10),pcVar10);
    uVar21 = 0xffffffea;
code_r0x08004d5c:
    mutex_unlock(iVar14 + 0x18);
    return uVar21;
}


// ===== sym.config_store @ 0x08004a90 (size 252) =====

uint64_t sym.config_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint32_t *puVar6;
    int iVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint32_t uVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    uint32_t uVar13;
    int64_t *piVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    ulong unaff_x30;
    uchar auVar17 [12];
    uint32_t uStack_34;
    int iStack_30;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_28 = *(iVar12 + 0x5e0);
    puVar6 = &uStack_34;
    puVar8 = &uStack_2c;
    iVar12 = *(arg1 + 0x98);
    uStack_2c = 0;
    uStack_34 = 0;
    iStack_30 = 0;
    iVar3 = sscanf(arg2,"%x %i %d",puVar6,puVar8,&iStack_30);
    iVar7 = puVar8;
    uVar4 = 0xffffffffffffffea;
    if (((0xfffffffc < iVar3 - 4U) && (-1 < iStack_30)) && (iStack_30 < 2)) {
        if (iVar3 == 1) {
            uStack_2c = 1;
code_r0x08004b3c:
            iVar9 = 0;
            iStack_30 = 0;
        }
        else {
            if ((iVar3 != 3) || (iStack_30 != 1)) goto code_r0x08004b3c;
            iVar9 = 1;
            iStack_30 = 1;
        }
        puVar6 = uStack_2c;
        iVar3 = sym.dcc_config_add(iVar12,uStack_34,puVar6,iVar9);
        iVar7 = iVar9;
        uVar4 = arg3;
        if (iVar3 != 0) {
            uVar4 = iVar3;
        }
    }
    iVar12 = sp_el0;
    if (*(iVar12 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    auVar17 = __stack_chk_fail(uVar4);
    uVar16 = auVar17._8_4_;
    iVar12 = auVar17._0_8_;
    *extraout_x18 = sym.dcc_config_add;
    uVar4 = puVar6 & 0xffffffff;
    mutex_lock(iVar12 + 0x18);
    if (*(iVar12 + 0x14c) < *(iVar12 + 0x148)) {
        uVar11 = puVar6;
        if ((uVar11 != 0) && (uVar11 <= *(iVar12 + 0x50) >> 3)) {
            piVar14 = *(iVar12 + 0x138) + *(iVar12 + 0x14c) * 0x10;
            uVar15 = uVar16 & 0xfffffff0;
            if ((piVar14 == *piVar14) ||
               (iVar9 = *(*(iVar12 + 0x138) + *(iVar12 + 0x14c) * 0x10 + 8), *(iVar9 + -8) != 0)) {
code_r0x08004c28:
                uVar16 = uVar16 - uVar15;
                do {
                    iVar9 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar9 = 0x30;
                    }
                    puVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar9),0xdc0,0x38);
                    if (puVar6 == NULL) {
                        uVar16 = 0xfffffff4;
                        goto code_r0x08004d5c;
                    }
                    uVar2 = *(iVar12 + 0x14c);
                    uVar13 = uVar4;
                    iVar9 = *(iVar12 + 0x140);
                    uVar11 = uVar13;
                    if (0x7e < uVar13) {
                        uVar11 = 0x7f;
                    }
                    *puVar6 = uVar15;
                    puVar6[1] = uVar16;
                    iVar10 = uVar2 * 4;
                    puVar8 = puVar6 + 10;
                    puVar6[2] = uVar11;
                    uVar11 = *(iVar9 + iVar10);
                    *(iVar9 + iVar10) = uVar11 + 1;
                    puVar6[3] = uVar11;
                    puVar6[8] = 0;
                    *(puVar6 + 7) = iVar7 != 0;
                    *(puVar6 + 10) = puVar8;
                    *(puVar6 + 0xc) = puVar8;
                    iVar9 = *(iVar12 + 0x138) + *(iVar12 + 0x14c) * 0x10;
                    piVar14 = *(iVar9 + 8);
                    uVar4 = __list_add_valid(puVar8,piVar14,iVar9);
                    if ((uVar4 & 1) != 0) {
                        *(iVar9 + 8) = puVar8;
                        *(puVar6 + 10) = iVar9;
                        *(puVar6 + 0xc) = piVar14;
                        *piVar14 = puVar8;
                    }
                    uVar16 = uVar16 + 0x1fc;
                    uVar4 = uVar13 - puVar6[2];
                } while (uVar13 - puVar6[2] != 0);
            }
            else {
                uVar1 = *(iVar9 + -0x28);
                uVar13 = *(iVar9 + -0x24) + uVar1;
                if (((uVar16 < uVar13) || (uVar13 + 0x3fc < uVar16)) ||
                   (uVar15 = uVar1, uVar13 + *(iVar9 + -0x20) * 4 != uVar16)) goto code_r0x08004c28;
                uVar11 = *(iVar9 + -0x20) + uVar11;
                uVar16 = uVar11;
                if (0x7e < uVar11) {
                    uVar16 = 0x7f;
                }
                uVar4 = uVar11 - uVar16;
                *(iVar9 + -0x20) = uVar16;
                if (uVar11 - uVar16 != 0) {
                    uVar16 = uVar13 + uVar16 * 4;
                    goto code_r0x08004c28;
                }
            }
            uVar16 = 0;
            goto code_r0x08004d5c;
        }
        pcVar5 = "DCC: Invalid length\n";
    }
    else {
        pcVar5 = "Select link list to program using curr_list\n";
    }
    _dev_err(*(iVar12 + 0x10),pcVar5);
    uVar16 = 0xffffffea;
code_r0x08004d5c:
    mutex_unlock(iVar12 + 0x18);
    return uVar16;
}


// ===== sym.dcc_config_add @ 0x08004b8c (size 552) =====

uint sym.dcc_config_add(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t *puVar4;
    char *pcVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    ulong *in_x18;
    uint uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar11 = arg3 & 0xffffffff;
    uVar14 = arg2;
    mutex_lock(arg1 + 0x18);
    if (*(arg1 + 0x14c) < *(arg1 + 0x148)) {
        uVar7 = arg3;
        if ((uVar7 != 0) && (uVar7 <= *(arg1 + 0x50) >> 3)) {
            piVar12 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
            uVar13 = uVar14 & 0xfffffff0;
            if ((piVar12 == *piVar12) || (iVar8 = *(*(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10 + 8), *(iVar8 + -8) != 0))
            {
code_r0x08004c28:
                uVar14 = uVar14 - uVar13;
                do {
                    iVar8 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar8 = 0x30;
                    }
                    puVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar8),0xdc0,0x38);
                    if (puVar4 == NULL) {
                        uVar9 = 0xfffffff4;
                        goto code_r0x08004d5c;
                    }
                    uVar3 = *(arg1 + 0x14c);
                    uVar10 = uVar11;
                    iVar8 = *(arg1 + 0x140);
                    uVar7 = uVar10;
                    if (0x7e < uVar10) {
                        uVar7 = 0x7f;
                    }
                    *puVar4 = uVar13;
                    puVar4[1] = uVar14;
                    iVar6 = uVar3 * 4;
                    puVar1 = puVar4 + 10;
                    puVar4[2] = uVar7;
                    uVar7 = *(iVar8 + iVar6);
                    *(iVar8 + iVar6) = uVar7 + 1;
                    puVar4[3] = uVar7;
                    puVar4[8] = 0;
                    *(puVar4 + 7) = arg4 != 0;
                    *(puVar4 + 10) = puVar1;
                    *(puVar4 + 0xc) = puVar1;
                    iVar8 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
                    piVar12 = *(iVar8 + 8);
                    uVar11 = __list_add_valid(puVar1,piVar12,iVar8);
                    if ((uVar11 & 1) != 0) {
                        *(iVar8 + 8) = puVar1;
                        *(puVar4 + 10) = iVar8;
                        *(puVar4 + 0xc) = piVar12;
                        *piVar12 = puVar1;
                    }
                    uVar14 = uVar14 + 0x1fc;
                    uVar11 = uVar10 - puVar4[2];
                } while (uVar10 - puVar4[2] != 0);
            }
            else {
                uVar2 = *(iVar8 + -0x28);
                uVar10 = *(iVar8 + -0x24) + uVar2;
                if (((uVar14 < uVar10) || (uVar10 + 0x3fc < uVar14)) ||
                   (uVar13 = uVar2, uVar10 + *(iVar8 + -0x20) * 4 != uVar14)) goto code_r0x08004c28;
                uVar7 = *(iVar8 + -0x20) + uVar7;
                uVar14 = uVar7;
                if (0x7e < uVar7) {
                    uVar14 = 0x7f;
                }
                uVar11 = uVar7 - uVar14;
                *(iVar8 + -0x20) = uVar14;
                if (uVar7 - uVar14 != 0) {
                    uVar14 = uVar10 + uVar14 * 4;
                    goto code_r0x08004c28;
                }
            }
            uVar9 = 0;
            goto code_r0x08004d5c;
        }
        pcVar5 = "DCC: Invalid length\n";
    }
    else {
        pcVar5 = "Select link list to program using curr_list\n";
    }
    _dev_err(*(arg1 + 0x10),pcVar5);
    uVar9 = 0xffffffea;
code_r0x08004d5c:
    mutex_unlock(arg1 + 0x18);
    return uVar9;
}


// ===== sym.config_reset_store @ 0x08004db8 (size 156) =====

void sym.config_reset_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    uint64_t uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iStack_28 = *(iVar3 + 0x5e0);
    iVar7 = *(arg1 + 0x98);
    uStack_30 = 0;
    iVar2 = kstrtoull(arg2,0x10,&uStack_30);
    iVar3 = -0x16;
    if (((iVar2 == 0) && (uStack_30 < 2)) && (iVar3 = arg3, uStack_30 != 0)) {
        sym.dcc_config_reset(iVar7);
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_28) {
        iVar3 = __stack_chk_fail(iVar3);
        *extraout_x18 = sym.dcc_config_reset;
        mutex_lock(iVar3 + 0x18);
        uVar5 = *(iVar3 + 0x148);
        if (uVar5 != 0) {
            uVar6 = 0;
            iVar7 = *(iVar3 + 0x138);
            do {
                piVar9 = iVar7 + uVar6 * 0x10;
                piVar8 = *piVar9;
                if (piVar9 != piVar8) {
                    do {
                        piVar9 = *piVar8;
                        uVar4 = __list_del_entry_valid(piVar8);
                        if ((uVar4 & 1) != 0) {
                            iVar7 = *piVar8;
                            piVar1 = piVar8[1];
                            *(iVar7 + 8) = piVar1;
                            *piVar1 = iVar7;
                        }
                        *piVar8 = -0x2152ffffffffff00;
                        piVar8[1] = -0x2152fffffffffede;
                        kfree(piVar8 + -5);
                        iVar7 = uVar6 * 4;
                        *(*(iVar3 + 0x140) + iVar7) = *(*(iVar3 + 0x140) + iVar7) + -1;
                        iVar7 = *(iVar3 + 0x138);
                        piVar8 = piVar9;
                    } while (iVar7 + uVar6 * 0x10 != piVar9);
                    uVar5 = *(iVar3 + 0x148);
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uVar5);
        }
        *(iVar3 + 0x6c) = 0;
        *(iVar3 + 0x15c) = 0;
        mutex_unlock(iVar3 + 0x18);
        return;
    }
    return;
}


// ===== sym.dcc_config_reset @ 0x08004e54 (size 256) =====

void sym.dcc_config_reset(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong *in_x18;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x18);
    uVar4 = *(arg1 + 0x148);
    if (uVar4 != 0) {
        uVar5 = 0;
        iVar3 = *(arg1 + 0x138);
        do {
            piVar7 = iVar3 + uVar5 * 0x10;
            piVar6 = *piVar7;
            if (piVar7 != piVar6) {
                do {
                    piVar7 = *piVar6;
                    uVar2 = __list_del_entry_valid(piVar6);
                    if ((uVar2 & 1) != 0) {
                        iVar3 = *piVar6;
                        piVar1 = piVar6[1];
                        *(iVar3 + 8) = piVar1;
                        *piVar1 = iVar3;
                    }
                    *piVar6 = -0x2152ffffffffff00;
                    piVar6[1] = -0x2152fffffffffede;
                    kfree(piVar6 + -5);
                    iVar3 = uVar5 * 4;
                    *(*(arg1 + 0x140) + iVar3) = *(*(arg1 + 0x140) + iVar3) + -1;
                    iVar3 = *(arg1 + 0x138);
                    piVar6 = piVar7;
                } while (iVar3 + uVar5 * 0x10 != piVar7);
                uVar4 = *(arg1 + 0x148);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
    }
    *(arg1 + 0x6c) = 0;
    *(arg1 + 0x15c) = 0;
    mutex_unlock(arg1 + 0x18);
    return;
}


// ===== sym.ready_show @ 0x08004f54 (size 196) =====

int64_t sym.ready_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t *piVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar3 = *(arg1 + 0x98);
    mutex_lock(piVar3 + 3);
    if (*(piVar3 + 0x14c) < *(piVar3 + 0x29)) {
        if (*(piVar3[0xf] + *(piVar3 + 0x14c)) != '\0') {
            iVar2 = 0xc;
            if (piVar3[0xd] != 0) {
                iVar2 = 0x1c;
            }
            iVar1 = scnprintf(arg2,0x1000,0x8000696,*(*piVar3 + iVar2) >> 1 & 1);
            iVar2 = iVar1;
            goto code_r0x08004ff4;
        }
    }
    else {
        _dev_err(arg1,"Select link list to program using curr_list\n");
    }
    iVar2 = -0x16;
code_r0x08004ff4:
    mutex_unlock(piVar3 + 3);
    return iVar2;
}


// ===== sym.crc_error_show @ 0x0800501c (size 224) =====

int64_t sym.crc_error_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    int iVar4;
    ulong *in_x18;
    int64_t iVar5;
    int64_t *piVar6;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar6 = *(arg1 + 0x98);
    mutex_lock(piVar6 + 3);
    uVar3 = *(piVar6 + 0x14c);
    if (uVar3 < *(piVar6 + 0x29)) {
        if (*(piVar6[0xf] + uVar3) != '\0') {
            uVar1 = uVar3 << 7 | 0x50;
            if (piVar6[0xd] == 0) {
                uVar1 = uVar3 << 7 | 0x34;
            }
            uVar2 = uVar3 << 7 | 0x48;
            if (piVar6[0xd] != 1) {
                uVar2 = uVar1;
            }
            iVar4 = scnprintf(arg2,0x1000,0x8000696,*(*piVar6 + uVar2) >> 1 & 1);
            iVar5 = iVar4;
            goto code_r0x080050d8;
        }
    }
    else {
        _dev_err(arg1,"Select link list to program using curr_list\n");
    }
    iVar5 = -0x16;
code_r0x080050d8:
    mutex_unlock(piVar6 + 3);
    return iVar5;
}


// ===== sym.interrupt_disable_show @ 0x08005100 (size 68) =====

int64_t sym.interrupt_disable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x8000696,*(*(arg1 + 0x98) + 0x98));
    return iVar1;
}


// ===== sym.interrupt_disable_store @ 0x08005144 (size 188) =====

uint64_t sym.interrupt_disable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    uint8_t uVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint uVar8;
    uint64_t *puVar9;
    ulong *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar14;
    int64_t iVar15;
    int64_t *piVar16;
    int64_t iVar17;
    ulong unaff_x30;
    uchar auVar18 [12];
    ulong uStack_d0;
    int64_t iStack_c8;
    uchar **ppuStack_c0;
    code *pcStack_b8;
    int64_t iStack_b0;
    uint64_t uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar9 = &uStack_40;
    *in_x18 = unaff_x30;
    iVar15 = sp_el0;
    iStack_38 = *(iVar15 + 0x5e0);
    iVar15 = *(arg1 + 0x98);
    uStack_40 = 0;
    uVar14 = arg3;
    iVar4 = kstrtoull(arg2,0x10);
    uVar7 = 0xffffffffffffffea;
    if ((iVar4 == 0) && (uStack_40 < 2)) {
        iVar5 = iVar15 + 0x18;
        mutex_lock(iVar5);
        *(iVar15 + 0x98) = uStack_40 != 0;
        mutex_unlock(iVar5);
        uVar7 = arg3;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return uVar7;
    }
    iVar5 = __stack_chk_fail(uVar7);
    puVar10 = &uStack_a0;
    *extraout_x18 = sym.loop_store;
    pcStack_88 = sym.loop_store;
    iVar15 = sp_el0;
    iStack_98 = *(iVar15 + 0x5e0);
    iVar17 = *(iVar5 + 0x98);
    uStack_a0 = 0;
    iVar15 = iVar17 + 0x18;
    uVar7 = uVar14;
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(iVar15);
    iVar4 = kstrtoull(puVar9,0x10,&uStack_a0);
    uVar3 = uStack_a0;
    if (iVar4 == 0) {
        if (*(iVar17 + 0x14c) < *(iVar17 + 0x148)) {
            puVar10 = 0x38;
            iVar5 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar5 = 0x30;
            }
            iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x38);
            if (iVar5 == 0) {
                uVar14 = 0xfffffffffffffff4;
            }
            else {
                uVar11 = uVar3;
                if (0xfe < uVar11) {
                    uVar11 = 0xff;
                }
                iVar12 = iVar5 + 0x28;
                *(iVar5 + 0x10) = uVar11;
                iVar13 = *(iVar17 + 0x14c) * 4;
                iVar4 = *(*(iVar17 + 0x140) + iVar13);
                *(*(iVar17 + 0x140) + iVar13) = iVar4 + 1;
                *(iVar5 + 0xc) = iVar4;
                *(iVar5 + 0x20) = 1;
                *(iVar5 + 0x28) = iVar12;
                *(iVar5 + 0x30) = iVar12;
                puVar1 = *(iVar17 + 0x138) + *(iVar17 + 0x14c) * 0x10;
                piVar16 = *(puVar1 + 8);
                puVar10 = puVar1;
                uVar6 = __list_add_valid(iVar12,piVar16,puVar1);
                if ((uVar6 & 1) != 0) {
                    *(puVar1 + 8) = iVar12;
                    *(iVar5 + 0x28) = puVar1;
                    *(iVar5 + 0x30) = piVar16;
                    *piVar16 = iVar12;
                }
            }
            goto code_r0x08005268;
        }
        _dev_err(iVar5,"Select link list to program using curr_list\n");
    }
    uVar14 = 0xffffffffffffffea;
code_r0x08005268:
    mutex_unlock(iVar15);
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_98) {
        return uVar14;
    }
    iVar17 = __stack_chk_fail();
    *extraout_x18_00 = sym.rd_mod_wr_store;
    pcStack_b8 = sym.rd_mod_wr_store;
    iVar5 = sp_el0;
    iStack_c8 = *(iVar5 + 0x5e0);
    iVar5 = &uStack_d0 + 4;
    iVar17 = *(iVar17 + 0x98);
    uStack_d0 = 0;
    ppuStack_c0 = &puStack_90;
    iStack_b0 = iVar15;
    uStack_a8 = uVar14;
    iVar4 = sscanf(puVar10,"%x %x",iVar5,&uStack_d0);
    uVar8 = iVar5;
    if (iVar4 == 2) {
        uVar14 = uStack_d0 & 0xffffffff;
        iVar4 = sym.dcc_rd_mod_wr_add(iVar17,uStack_d0 >> 0x20,uVar14);
        uVar8 = uVar14;
        if (iVar4 != 0) {
            uVar7 = iVar4;
        }
    }
    else {
        uVar7 = 0xffffffffffffffea;
    }
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) != iStack_c8) {
        auVar18 = __stack_chk_fail(uVar7);
        iVar15 = auVar18._0_8_;
        *extraout_x18_01 = sym.dcc_rd_mod_wr_add;
        mutex_lock(iVar15 + 0x18);
        if (*(iVar15 + 0x14c) < *(iVar15 + 0x148)) {
            piVar16 = *(iVar15 + 0x138) + *(iVar15 + 0x14c) * 0x10;
            if (piVar16 == *piVar16) {
                _dev_err(*(iVar15 + 0x10),"DCC: No read address programmed\n");
                uVar11 = 0xffffffff;
            }
            else {
                iVar5 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar5 = 0x30;
                }
                iVar5 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x38);
                if (iVar5 == 0) {
                    uVar11 = 0xfffffff4;
                }
                else {
                    uVar2 = *(iVar15 + 0x14c);
                    iVar13 = *(iVar15 + 0x140);
                    *(iVar5 + 0x14) = uVar8;
                    *(iVar5 + 0x18) = auVar18._8_4_;
                    iVar17 = iVar5 + 0x28;
                    iVar12 = uVar2 * 4;
                    *(iVar5 + 0x20) = 2;
                    iVar4 = *(iVar13 + iVar12);
                    *(iVar13 + iVar12) = iVar4 + 1;
                    *(iVar5 + 0xc) = iVar4;
                    *(iVar5 + 0x28) = iVar17;
                    *(iVar5 + 0x30) = iVar17;
                    iVar12 = *(iVar15 + 0x138) + *(iVar15 + 0x14c) * 0x10;
                    piVar16 = *(iVar12 + 8);
                    uVar7 = __list_add_valid(iVar17,piVar16,iVar12);
                    uVar11 = 0;
                    if ((uVar7 & 1) != 0) {
                        *(iVar12 + 8) = iVar17;
                        *(iVar5 + 0x28) = iVar12;
                        *(iVar5 + 0x30) = piVar16;
                        *piVar16 = iVar17;
                    }
                }
            }
        }
        else {
            _dev_err(*(iVar15 + 0x10),"Select link list to program using curr_list\n");
            uVar11 = 0xffffffea;
        }
        mutex_unlock(iVar15 + 0x18);
        return uVar11;
    }
    return uVar7;
}


// ===== sym.loop_store @ 0x08005200 (size 400) =====

uint64_t sym.loop_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    uint8_t uVar2;
    ulong uVar3;
    int iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint uVar9;
    ulong *puVar10;
    uint32_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar14;
    int64_t iVar15;
    ulong unaff_x30;
    uchar auVar16 [12];
    ulong uStack_90;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    int64_t iStack_70;
    uint64_t uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    puVar10 = &uStack_60;
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_58 = *(iVar7 + 0x5e0);
    iVar15 = *(arg1 + 0x98);
    uStack_60 = 0;
    iVar7 = iVar15 + 0x18;
    uVar8 = arg3;
    mutex_lock(iVar7);
    iVar4 = kstrtoull(arg2,0x10,&uStack_60);
    uVar3 = uStack_60;
    if (iVar4 == 0) {
        if (*(iVar15 + 0x14c) < *(iVar15 + 0x148)) {
            puVar10 = 0x38;
            iVar6 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar6 = 0x30;
            }
            iVar6 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar6),0xdc0,0x38);
            if (iVar6 == 0) {
                arg3 = 0xfffffffffffffff4;
            }
            else {
                uVar11 = uVar3;
                if (0xfe < uVar11) {
                    uVar11 = 0xff;
                }
                iVar12 = iVar6 + 0x28;
                *(iVar6 + 0x10) = uVar11;
                iVar13 = *(iVar15 + 0x14c) * 4;
                iVar4 = *(*(iVar15 + 0x140) + iVar13);
                *(*(iVar15 + 0x140) + iVar13) = iVar4 + 1;
                *(iVar6 + 0xc) = iVar4;
                *(iVar6 + 0x20) = 1;
                *(iVar6 + 0x28) = iVar12;
                *(iVar6 + 0x30) = iVar12;
                puVar1 = *(iVar15 + 0x138) + *(iVar15 + 0x14c) * 0x10;
                piVar14 = *(puVar1 + 8);
                puVar10 = puVar1;
                uVar5 = __list_add_valid(iVar12,piVar14,puVar1);
                if ((uVar5 & 1) != 0) {
                    *(puVar1 + 8) = iVar12;
                    *(iVar6 + 0x28) = puVar1;
                    *(iVar6 + 0x30) = piVar14;
                    *piVar14 = iVar12;
                }
            }
            goto code_r0x08005268;
        }
        _dev_err(arg1,"Select link list to program using curr_list\n");
    }
    arg3 = 0xffffffffffffffea;
code_r0x08005268:
    mutex_unlock(iVar7);
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_58) {
        return arg3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.rd_mod_wr_store;
    pcStack_78 = sym.rd_mod_wr_store;
    iVar15 = sp_el0;
    iStack_88 = *(iVar15 + 0x5e0);
    iVar15 = &uStack_90 + 4;
    iVar6 = *(iVar6 + 0x98);
    uStack_90 = 0;
    puStack_80 = &stack0xffffffffffffffb0;
    iStack_70 = iVar7;
    uStack_68 = arg3;
    iVar4 = sscanf(puVar10,"%x %x",iVar15,&uStack_90);
    uVar9 = iVar15;
    if (iVar4 == 2) {
        uVar5 = uStack_90 & 0xffffffff;
        iVar4 = sym.dcc_rd_mod_wr_add(iVar6,uStack_90 >> 0x20,uVar5);
        uVar9 = uVar5;
        if (iVar4 != 0) {
            uVar8 = iVar4;
        }
    }
    else {
        uVar8 = 0xffffffffffffffea;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_88) {
        auVar16 = __stack_chk_fail(uVar8);
        iVar7 = auVar16._0_8_;
        *extraout_x18_00 = sym.dcc_rd_mod_wr_add;
        mutex_lock(iVar7 + 0x18);
        if (*(iVar7 + 0x14c) < *(iVar7 + 0x148)) {
            piVar14 = *(iVar7 + 0x138) + *(iVar7 + 0x14c) * 0x10;
            if (piVar14 == *piVar14) {
                _dev_err(*(iVar7 + 0x10),"DCC: No read address programmed\n");
                uVar11 = 0xffffffff;
            }
            else {
                iVar15 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar15 = 0x30;
                }
                iVar15 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xdc0,0x38);
                if (iVar15 == 0) {
                    uVar11 = 0xfffffff4;
                }
                else {
                    uVar2 = *(iVar7 + 0x14c);
                    iVar13 = *(iVar7 + 0x140);
                    *(iVar15 + 0x14) = uVar9;
                    *(iVar15 + 0x18) = auVar16._8_4_;
                    iVar6 = iVar15 + 0x28;
                    iVar12 = uVar2 * 4;
                    *(iVar15 + 0x20) = 2;
                    iVar4 = *(iVar13 + iVar12);
                    *(iVar13 + iVar12) = iVar4 + 1;
                    *(iVar15 + 0xc) = iVar4;
                    *(iVar15 + 0x28) = iVar6;
                    *(iVar15 + 0x30) = iVar6;
                    iVar12 = *(iVar7 + 0x138) + *(iVar7 + 0x14c) * 0x10;
                    piVar14 = *(iVar12 + 8);
                    uVar8 = __list_add_valid(iVar6,piVar14,iVar12);
                    uVar11 = 0;
                    if ((uVar8 & 1) != 0) {
                        *(iVar12 + 8) = iVar6;
                        *(iVar15 + 0x28) = iVar12;
                        *(iVar15 + 0x30) = piVar14;
                        *piVar14 = iVar6;
                    }
                }
            }
        }
        else {
            _dev_err(*(iVar7 + 0x10),"Select link list to program using curr_list\n");
            uVar11 = 0xffffffea;
        }
        mutex_unlock(iVar7 + 0x18);
        return uVar11;
    }
    return uVar8;
}


// ===== sym.rd_mod_wr_store @ 0x08005390 (size 164) =====

int64_t sym.rd_mod_wr_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t *piVar11;
    ulong unaff_x30;
    uchar auVar12 [12];
    ulong uStack_30;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    iVar6 = &uStack_30 + 4;
    iVar10 = *(arg1 + 0x98);
    uStack_30 = 0;
    iVar3 = sscanf(arg2,"%x %x",iVar6,&uStack_30);
    uVar5 = iVar6;
    if (iVar3 == 2) {
        uVar4 = uStack_30 & 0xffffffff;
        iVar3 = sym.dcc_rd_mod_wr_add(iVar10,uStack_30 >> 0x20,uVar4);
        uVar5 = uVar4;
        if (iVar3 != 0) {
            arg3 = iVar3;
        }
    }
    else {
        arg3 = 0xffffffffffffffea;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_28) {
        auVar12 = __stack_chk_fail(arg3);
        iVar6 = auVar12._0_8_;
        *extraout_x18 = sym.dcc_rd_mod_wr_add;
        mutex_lock(iVar6 + 0x18);
        if (*(iVar6 + 0x14c) < *(iVar6 + 0x148)) {
            piVar11 = *(iVar6 + 0x138) + *(iVar6 + 0x14c) * 0x10;
            if (piVar11 == *piVar11) {
                _dev_err(*(iVar6 + 0x10),"DCC: No read address programmed\n");
                uVar9 = 0xffffffff;
            }
            else {
                iVar10 = 0x38;
                if (android_kmalloc_64_create != 0x0) {
                    iVar10 = 0x30;
                }
                iVar10 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x38);
                if (iVar10 == 0) {
                    uVar9 = 0xfffffff4;
                }
                else {
                    uVar2 = *(iVar6 + 0x14c);
                    iVar8 = *(iVar6 + 0x140);
                    *(iVar10 + 0x14) = uVar5;
                    *(iVar10 + 0x18) = auVar12._8_4_;
                    iVar1 = iVar10 + 0x28;
                    iVar7 = uVar2 * 4;
                    *(iVar10 + 0x20) = 2;
                    iVar3 = *(iVar8 + iVar7);
                    *(iVar8 + iVar7) = iVar3 + 1;
                    *(iVar10 + 0xc) = iVar3;
                    *(iVar10 + 0x28) = iVar1;
                    *(iVar10 + 0x30) = iVar1;
                    iVar7 = *(iVar6 + 0x138) + *(iVar6 + 0x14c) * 0x10;
                    piVar11 = *(iVar7 + 8);
                    uVar4 = __list_add_valid(iVar1,piVar11,iVar7);
                    uVar9 = 0;
                    if ((uVar4 & 1) != 0) {
                        *(iVar7 + 8) = iVar1;
                        *(iVar10 + 0x28) = iVar7;
                        *(iVar10 + 0x30) = piVar11;
                        *piVar11 = iVar1;
                    }
                }
            }
        }
        else {
            _dev_err(*(iVar6 + 0x10),"Select link list to program using curr_list\n");
            uVar9 = 0xffffffea;
        }
        mutex_unlock(iVar6 + 0x18);
        return uVar9;
    }
    return arg3;
}


// ===== sym.dcc_rd_mod_wr_add @ 0x08005434 (size 356) =====

uint sym.dcc_rd_mod_wr_add(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    uint uVar8;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(arg1 + 0x18);
    if (*(arg1 + 0x14c) < *(arg1 + 0x148)) {
        piVar9 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
        if (piVar9 == *piVar9) {
            _dev_err(*(arg1 + 0x10),"DCC: No read address programmed\n");
            uVar8 = 0xffffffff;
        }
        else {
            iVar4 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar4 = 0x30;
            }
            iVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar4),0xdc0,0x38);
            if (iVar4 == 0) {
                uVar8 = 0xfffffff4;
            }
            else {
                uVar3 = *(arg1 + 0x14c);
                iVar7 = *(arg1 + 0x140);
                *(iVar4 + 0x14) = arg3;
                *(iVar4 + 0x18) = arg2;
                iVar1 = iVar4 + 0x28;
                iVar6 = uVar3 * 4;
                *(iVar4 + 0x20) = 2;
                iVar2 = *(iVar7 + iVar6);
                *(iVar7 + iVar6) = iVar2 + 1;
                *(iVar4 + 0xc) = iVar2;
                *(iVar4 + 0x28) = iVar1;
                *(iVar4 + 0x30) = iVar1;
                iVar6 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
                piVar9 = *(iVar6 + 8);
                uVar5 = __list_add_valid(iVar1,piVar9,iVar6);
                uVar8 = 0;
                if ((uVar5 & 1) != 0) {
                    *(iVar6 + 8) = iVar1;
                    *(iVar4 + 0x28) = iVar6;
                    *(iVar4 + 0x30) = piVar9;
                    *piVar9 = iVar1;
                }
            }
        }
    }
    else {
        _dev_err(*(arg1 + 0x10),"Select link list to program using curr_list\n");
        uVar8 = 0xffffffea;
    }
    mutex_unlock(arg1 + 0x18);
    return uVar8;
}


// ===== sym.curr_list_show @ 0x0800559c (size 144) =====

int64_t sym.curr_list_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong *in_x18;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *(arg1 + 0x98);
    iVar1 = iVar3 + 0x18;
    mutex_lock(iVar1);
    if (*(iVar3 + 0x14c) == -1) {
        _dev_err(arg1,"curr_list is not set.\n");
        iVar3 = -0x16;
    }
    else {
        iVar2 = scnprintf(arg2,0x1000,0x800093d);
        iVar3 = iVar2;
    }
    mutex_unlock(iVar1);
    return iVar3;
}


// ===== sym.curr_list_store @ 0x0800562c (size 392) =====

int64_t sym.curr_list_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uchar *puVar10;
    uchar *puVar11;
    char *pcVar12;
    uint32_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t *piVar14;
    int64_t iVar15;
    int64_t iVar16;
    ulong unaff_x30;
    int iStack_a4;
    uint32_t uStack_a0;
    uint32_t uStack_9c;
    int64_t iStack_98;
    uchar *puStack_90;
    ulong uStack_88;
    uint64_t uStack_40;
    int64_t iStack_38;
    
    puVar10 = &stack0xffffffffffffffc0;
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_38 = *(iVar9 + 0x5e0);
    piVar14 = *(arg1 + 0x98);
    uStack_40 = 0;
    iVar9 = arg3;
    iVar4 = kstrtoull(arg2,0x10,&stack0xffffffffffffffc0);
    if ((iVar4 != 0) || (*(piVar14 + 0x29) <= uStack_40)) {
        arg3 = -0x16;
        goto code_r0x0800570c;
    }
    mutex_lock(piVar14 + 3);
    pcVar12 = piVar14[0xf];
    if ((((*pcVar12 == '\0') && (pcVar12[1] == '\0')) && (pcVar12[2] == '\0')) &&
       (((pcVar12[3] == '\0' && (pcVar12[4] == '\0')) && ((pcVar12[5] == '\0' && (pcVar12[6] == '\0')))))) {
        bVar3 = pcVar12[7] == '\0';
    }
    else {
        bVar3 = false;
    }
    if ((*(piVar14 + 0x14c) == -1) || (bVar3)) {
        if (piVar14[0xd] == 1) {
            uVar13 = uStack_40 << 7 | 0x2c;
        }
        else if (piVar14[0xd] == 0) {
            uVar13 = uStack_40 << 7 | 0x1c;
        }
        else {
            uVar13 = uStack_40 << 7 | 0x34;
        }
        if ((*(*piVar14 + uVar13) & 1) != 0) {
            iVar15 = piVar14[2];
            pcVar12 = "DCC linked list is already configured\n";
            goto code_r0x08005790;
        }
        *(piVar14 + 0x14c) = uStack_40;
    }
    else {
        iVar15 = piVar14[2];
        pcVar12 = "DCC is enabled, please disable it first.\n";
code_r0x08005790:
        _dev_err(iVar15,pcVar12);
        arg3 = -0x16;
    }
    mutex_unlock(piVar14 + 3);
code_r0x0800570c:
    iVar15 = sp_el0;
    if (*(iVar15 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = 0x80057b0;
    uStack_88 = 0x80057b0;
    iVar15 = sp_el0;
    iStack_98 = *(iVar15 + 0x5e0);
    iVar16 = *(iVar6 + 0x98);
    uStack_9c = 0;
    iStack_a4 = 0;
    uStack_a0 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    mutex_lock(iVar16 + 0x18);
    puVar11 = &stack0xffffffffffffff64;
    iVar5 = sscanf(puVar10,"%x %x %d",puVar11,&stack0xffffffffffffff60,&stack0xffffffffffffff5c);
    uVar2 = uStack_9c;
    uVar13 = uStack_a0;
    iVar4 = iStack_a4;
    iVar15 = -0x16;
    if (((0xfffffffd < iVar5 - 4U) && (-1 < iStack_a4)) && (iStack_a4 < 2)) {
        if (*(iVar16 + 0x14c) < *(iVar16 + 0x148)) {
            puVar11 = 0x38;
            iVar15 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar15 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar15),0xdc0,0x38);
            if (puVar7 == NULL) {
                iVar15 = -0xc;
            }
            else {
                puVar7[5] = uVar13;
                puVar7[8] = 3;
                puVar1 = puVar7 + 10;
                *puVar7 = uVar2 & 0xfffffff0;
                puVar7[1] = uVar2 & 0xf;
                iVar15 = *(iVar16 + 0x14c) * 4;
                uVar13 = *(*(iVar16 + 0x140) + iVar15);
                *(*(iVar16 + 0x140) + iVar15) = uVar13 + 1;
                puVar7[2] = 1;
                puVar7[3] = uVar13;
                *(puVar7 + 7) = iVar4 != 0;
                *(puVar7 + 10) = puVar1;
                *(puVar7 + 0xc) = puVar1;
                puVar10 = *(iVar16 + 0x138) + *(iVar16 + 0x14c) * 0x10;
                piVar14 = *(puVar10 + 8);
                puVar11 = puVar10;
                uVar8 = __list_add_valid(puVar1,piVar14,puVar10);
                iVar15 = iVar9;
                if ((uVar8 & 1) != 0) {
                    *(puVar10 + 8) = puVar1;
                    *(puVar7 + 10) = puVar10;
                    *(puVar7 + 0xc) = piVar14;
                    *piVar14 = puVar1;
                }
            }
        }
        else {
            _dev_err(iVar6,"Select link list to program using curr_list\n");
            iVar15 = -0x16;
        }
    }
    mutex_unlock(iVar16 + 0x18);
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) != iStack_98) {
        iVar9 = __stack_chk_fail();
        *extraout_x18_00 = sym.cti_trig_show;
        iVar4 = scnprintf(puVar11,0x1000,0x800093d,*(*(*(iVar9 + 0x98) + 0x150) + *(*(iVar9 + 0x98) + 0x14c)));
        return iVar4;
    }
    return iVar15;
}


// ===== sym.config_write_store @ 0x080057b4 (size 492) =====

int64_t sym.config_write_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar10;
    int64_t iVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    int iStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_58 = *(iVar10 + 0x5e0);
    iVar11 = *(arg1 + 0x98);
    uStack_5c = 0;
    iStack_64 = 0;
    uStack_60 = 0;
    mutex_lock(iVar11 + 0x18);
    puVar9 = &uStack_5c;
    iVar5 = sscanf(arg2,"%x %x %d",puVar9,&uStack_60,&iStack_64);
    uVar4 = uStack_5c;
    uVar3 = uStack_60;
    iVar6 = iStack_64;
    iVar10 = -0x16;
    if (((0xfffffffd < iVar5 - 4U) && (-1 < iStack_64)) && (iStack_64 < 2)) {
        if (*(iVar11 + 0x14c) < *(iVar11 + 0x148)) {
            puVar9 = 0x38;
            iVar10 = 0x38;
            if (android_kmalloc_64_create != 0x0) {
                iVar10 = 0x30;
            }
            puVar7 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar10),0xdc0,0x38);
            if (puVar7 == NULL) {
                iVar10 = -0xc;
            }
            else {
                puVar7[5] = uVar3;
                puVar7[8] = 3;
                puVar1 = puVar7 + 10;
                *puVar7 = uVar4 & 0xfffffff0;
                puVar7[1] = uVar4 & 0xf;
                iVar10 = *(iVar11 + 0x14c) * 4;
                uVar3 = *(*(iVar11 + 0x140) + iVar10);
                *(*(iVar11 + 0x140) + iVar10) = uVar3 + 1;
                puVar7[2] = 1;
                puVar7[3] = uVar3;
                *(puVar7 + 7) = iVar6 != 0;
                *(puVar7 + 10) = puVar1;
                *(puVar7 + 0xc) = puVar1;
                puVar2 = *(iVar11 + 0x138) + *(iVar11 + 0x14c) * 0x10;
                piVar12 = *(puVar2 + 2);
                puVar9 = puVar2;
                uVar8 = __list_add_valid(puVar1,piVar12,puVar2);
                iVar10 = arg3;
                if ((uVar8 & 1) != 0) {
                    *(puVar2 + 2) = puVar1;
                    *(puVar7 + 10) = puVar2;
                    *(puVar7 + 0xc) = piVar12;
                    *piVar12 = puVar1;
                }
            }
        }
        else {
            _dev_err(arg1,"Select link list to program using curr_list\n");
            iVar10 = -0x16;
        }
    }
    mutex_unlock(iVar11 + 0x18);
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_58) {
        iVar10 = __stack_chk_fail();
        *extraout_x18 = sym.cti_trig_show;
        iVar6 = scnprintf(puVar9,0x1000,0x800093d,*(*(*(iVar10 + 0x98) + 0x150) + *(*(iVar10 + 0x98) + 0x14c)));
        return iVar6;
    }
    return iVar10;
}


// ===== sym.cti_trig_show @ 0x080059a0 (size 72) =====

int64_t sym.cti_trig_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,0x800093d,*(*(*(arg1 + 0x98) + 0x150) + *(*(arg1 + 0x98) + 0x14c)));
    return iVar1;
}


// ===== sym.cti_trig_store @ 0x080059e8 (size 264) =====

int64_t sym.cti_trig_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    uint64_t *puVar3;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar4;
    int64_t iVar5;
    ulong unaff_x30;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    puVar3 = &uStack_50;
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    iVar5 = *(arg1 + 0x98);
    uStack_50 = 0;
    iVar2 = kstrtoull(arg2,0x10,&uStack_50);
    iVar4 = -0x16;
    if ((iVar2 == 0) && (uStack_50 < 2)) {
        mutex_lock(iVar5 + 0x18);
        uVar1 = *(iVar5 + 0x14c);
        if (uVar1 < *(iVar5 + 0x148)) {
            if (*(*(iVar5 + 0x78) + uVar1) == '\0') {
                iVar4 = arg3;
                *(*(iVar5 + 0x150) + uVar1) = uStack_50 != 0;
            }
            else {
                iVar4 = -0x10;
            }
        }
        else {
            _dev_err(arg1,"Select link list to program using curr_list\n");
            iVar4 = -0x16;
        }
        mutex_unlock(iVar5 + 0x18);
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_48) {
        return iVar4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.ap_ns_qad_override_en_show;
    iVar5 = *(iVar4 + 0x98);
    if (*(iVar5 + 0x68) == 2) {
        iVar2 = scnprintf(puVar3,0x1000,0x800093d,*(*(iVar5 + 0x178) + *(iVar5 + 0x14c)));
        iVar4 = iVar2;
    }
    else {
        _dev_err(iVar4,"QAD output is not supported\n");
        iVar4 = -0x16;
    }
    return iVar4;
}


// ===== sym.ap_ns_qad_override_en_show @ 0x08005af0 (size 108) =====

int64_t sym.ap_ns_qad_override_en_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (*(iVar2 + 0x68) == 2) {
        iVar1 = scnprintf(arg2,0x1000,0x800093d,*(*(iVar2 + 0x178) + *(iVar2 + 0x14c)));
        iVar2 = iVar1;
    }
    else {
        _dev_err(arg1,"QAD output is not supported\n");
        iVar2 = -0x16;
    }
    return iVar2;
}


// ===== sym.ap_ns_qad_override_en_store @ 0x08005b5c (size 296) =====

uint64_t sym.ap_ns_qad_override_en_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    code *pcVar8;
    bool bVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t arg1_00;
    int64_t iVar13;
    uint32_t *puVar14;
    ulong uVar15;
    uint uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    int64_t iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    uint32_t *puVar20;
    uint64_t uVar21;
    int64_t iVar22;
    int64_t *piVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    ulong uStack_c8;
    uint32_t uStack_c0;
    uint32_t uStack_bc;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar22 = sp_el0;
    iStack_48 = *(iVar22 + 0x5e0);
    iVar22 = *(arg1 + 0x98);
    uStack_50 = 0;
    if (*(iVar22 + 0x68) == 2) {
        iVar10 = kstrtoull(arg2,0x10,&uStack_50);
        uVar21 = 0xffffffffffffffea;
        if ((iVar10 == 0) && (uStack_50 < 2)) {
            mutex_lock(iVar22 + 0x18);
            uVar3 = *(iVar22 + 0x14c);
            if (uVar3 < *(iVar22 + 0x148)) {
                if (*(*(iVar22 + 0x78) + uVar3) == '\0') {
                    uVar21 = arg3;
                    *(*(iVar22 + 0x178) + uVar3) = uStack_50 != 0;
                }
                else {
                    uVar21 = 0xfffffffffffffff0;
                }
            }
            else {
                _dev_err(arg1,"Select link list to program using curr_list\n");
                uVar21 = 0xffffffffffffffea;
            }
            mutex_unlock(iVar22 + 0x18);
        }
    }
    else {
        _dev_err(arg1,"QAD output is not supported\n");
        uVar21 = 0xffffffffffffffea;
    }
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_48) {
        return uVar21;
    }
    auVar24 = __stack_chk_fail();
    uVar15 = auVar24._8_8_;
    arg1_00 = auVar24._0_8_;
    *extraout_x18 = sym.dcc_dt_parse;
    pcStack_a8 = sym.dcc_dt_parse;
    iVar22 = sp_el0;
    iStack_b8 = *(iVar22 + 0x5e0);
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    puStack_b0 = &stack0xffffffffffffffc0;
    uVar11 = of_property_read_variable_u32_array(uVar15,"qcom,curr-link-list",&uStack_c0,1,0);
    if (uVar11 < 0) {
        uVar21 = uVar11;
    }
    else {
        if (uStack_c0 < *(arg1_00 + 0x148)) {
            *(arg1_00 + 0x14c) = uStack_c0;
            iVar22 = of_find_property(uVar15,"qcom,ap-qad-override",0);
            if (iVar22 != 0) {
                *(*(arg1_00 + 0x178) + *(arg1_00 + 0x14c)) = 1;
            }
            *(*(arg1_00 + 0x58) + uStack_c0 * 4) = 0;
            uVar11 = of_property_read_string(uVar15,"qcom,data-sink",&uStack_c8);
            uVar7 = uStack_c8;
            uVar21 = uVar11;
            if (uVar11 == 0) {
                iVar10 = strcmp(uStack_c8,"sram");
                if (iVar10 == 0) {
                    uVar16 = 0;
                }
                else {
                    iVar10 = strcmp(uVar7,0x8000555);
                    if (iVar10 != 0) {
                        uVar11 = *(*(arg1_00 + 0x58) + uStack_c0 * 4);
                        if (1 < uVar11) goto code_r0x08006098;
                        _dev_err(*(arg1_00 + 0x10),"Unknown sink type for DCC Using \'%s\' as data sink\n",
                                 *(obj.str_dcc_data_sink + uVar11 * 8));
                        goto code_r0x08005d9c;
                    }
                    uVar16 = 1;
                }
                *(*(arg1_00 + 0x58) + uStack_c0 * 4) = uVar16;
            }
code_r0x08005d9c:
            *(*(arg1_00 + 0x178) + *(arg1_00 + 0x14c)) = 1;
            iVar22 = of_get_property(uVar15,"qcom,link-list",&uStack_bc);
            if ((iVar22 == 0) || (uVar11 = uStack_bc >> 2, bVar9 = uStack_bc < 4, uStack_bc = uVar11, bVar9))
            goto code_r0x08005ffc;
            uVar11 = 0;
            do {
                uVar12 = *(iVar22 + uVar11 * 4);
                uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
                uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
                if (3 < uVar12) {
                    uVar21 = 0xffffffea;
                    goto code_r0x0800607c;
                }
                uVar18 = *(iVar22 + (uVar11 + 1) * 4);
                uVar1 = *(iVar22 + (uVar11 + 2) * 4);
                uVar2 = *(iVar22 + (uVar11 + 3) * 4);
                uVar5 = (uVar18 & 0xff00ff00) >> 8;
                uVar4 = uVar5 | (uVar18 & 0xff00ff) << 8;
                uVar6 = uVar4 >> 0x10;
                uVar4 = uVar4 << 0x10;
                uVar18 = uVar6 | uVar4;
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
                switch(uVar12) {
                case 0:
                    uVar12 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                    uVar12 = sym.dcc_config_add(arg1_00,uVar18,uVar1,uVar12 >> 0x10 | uVar12 << 0x10);
                    goto joined_r0x08005e0c;
                case 1:
                    iVar13 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar13 = 0x30;
                    }
                    puVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar13),0xdc0,0x38);
                    if (puVar14 == NULL) {
code_r0x08006070:
                        uVar21 = 0xfffffff4;
                        goto code_r0x0800607c;
                    }
                    uVar3 = *(arg1_00 + 0x14c);
                    iVar19 = *(arg1_00 + 0x140);
                    puVar14[5] = uVar1;
                    puVar14[8] = 3;
                    iVar13 = uVar3 * 4;
                    puVar20 = puVar14 + 10;
                    *puVar14 = uVar6 & 0xfffffff0 | uVar4;
                    puVar14[1] = (uVar5 & 0xf0000) >> 0x10;
                    uVar12 = *(iVar19 + iVar13);
                    *(iVar19 + iVar13) = uVar12 + 1;
                    *(puVar14 + 7) = uVar2 != 0;
                    puVar14[2] = 1;
                    puVar14[3] = uVar12;
                    *(puVar14 + 10) = puVar20;
                    *(puVar14 + 0xc) = puVar20;
                    iVar13 = *(arg1_00 + 0x138) + *(arg1_00 + 0x14c) * 0x10;
                    piVar23 = *(iVar13 + 8);
                    uVar21 = __list_add_valid(puVar20,piVar23,iVar13);
                    if ((uVar21 & 1) != 0) {
                        *(iVar13 + 8) = puVar20;
                        *(puVar14 + 10) = iVar13;
                        *(puVar14 + 0xc) = piVar23;
code_r0x08005fe0:
                        *piVar23 = puVar20;
                    }
                    break;
                case 2:
                    iVar13 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar13 = 0x30;
                    }
                    iVar13 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar13),0xdc0,0x38);
                    if (iVar13 == 0) goto code_r0x08006070;
                    iVar19 = *(arg1_00 + 0x140);
                    if (0xfe < uVar18) {
                        uVar18 = 0xff;
                    }
                    puVar20 = iVar13 + 0x28;
                    iVar17 = *(arg1_00 + 0x14c) * 4;
                    *(iVar13 + 0x10) = uVar18;
                    iVar10 = *(iVar19 + iVar17);
                    *(iVar19 + iVar17) = iVar10 + 1;
                    *(iVar13 + 0xc) = iVar10;
                    *(iVar13 + 0x20) = 1;
                    *(iVar13 + 0x28) = puVar20;
                    *(iVar13 + 0x30) = puVar20;
                    iVar19 = *(arg1_00 + 0x138) + *(arg1_00 + 0x14c) * 0x10;
                    piVar23 = *(iVar19 + 8);
                    uVar21 = __list_add_valid(puVar20,piVar23,iVar19);
                    if ((uVar21 & 1) != 0) {
                        *(iVar19 + 8) = puVar20;
                        *(iVar13 + 0x28) = iVar19;
                        *(iVar13 + 0x30) = piVar23;
                        goto code_r0x08005fe0;
                    }
                    break;
                case 3:
                    uVar12 = sym.dcc_rd_mod_wr_add(arg1_00,uVar18,uVar1);
joined_r0x08005e0c:
                    uVar21 = uVar12;
                    if (uVar12 != 0) {
code_r0x0800607c:
                        _dev_err(*(arg1_00 + 0x10),"DCC init time config failed err:%d\n",uVar21);
                        goto code_r0x08005ffc;
                    }
                }
                uVar11 = uVar11 + 4;
            } while (uVar11 < uStack_bc);
        }
        else {
            _dev_err(*(arg1_00 + 0x10),"List configuration failed.\n");
        }
        uVar21 = 0;
    }
code_r0x08005ffc:
    iVar22 = sp_el0;
    if (*(iVar22 + 0x5e0) == iStack_b8) {
        return uVar21;
    }
    __stack_chk_fail();
code_r0x08006098:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x800609c);
    (*pcVar8)();
}


// ===== sym.dcc_dt_parse @ 0x08005c84 (size 1048) =====

int sym.dcc_dt_parse(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    code *pcVar9;
    bool bVar10;
    int iVar11;
    int iVar12;
    int64_t iVar13;
    int64_t iVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    uint uVar17;
    int64_t iVar18;
    uint32_t uVar19;
    int64_t iVar20;
    ulong *in_x18;
    uint32_t *puVar21;
    int64_t *piVar22;
    uint32_t uVar23;
    ulong unaff_x30;
    ulong uStack_78;
    uint32_t uStack_70;
    uint32_t uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iStack_68 = *(iVar13 + 0x5e0);
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    iVar11 = of_property_read_variable_u32_array(arg2,"qcom,curr-link-list",&uStack_70,1,0);
    if (-1 < iVar11) {
        if (uStack_70 < *(arg1 + 0x148)) {
            *(arg1 + 0x14c) = uStack_70;
            iVar13 = of_find_property(arg2,"qcom,ap-qad-override",0);
            if (iVar13 != 0) {
                *(*(arg1 + 0x178) + *(arg1 + 0x14c)) = 1;
            }
            *(*(arg1 + 0x58) + uStack_70 * 4) = 0;
            iVar11 = of_property_read_string(arg2,"qcom,data-sink",&uStack_78);
            uVar8 = uStack_78;
            if (iVar11 == 0) {
                iVar12 = strcmp(uStack_78,"sram");
                if (iVar12 == 0) {
                    uVar17 = 0;
                }
                else {
                    iVar12 = strcmp(uVar8,0x8000555);
                    if (iVar12 != 0) {
                        uVar23 = *(*(arg1 + 0x58) + uStack_70 * 4);
                        if (1 < uVar23) goto code_r0x08006098;
                        _dev_err(*(arg1 + 0x10),"Unknown sink type for DCC Using \'%s\' as data sink\n",
                                 *(obj.str_dcc_data_sink + uVar23 * 8));
                        goto code_r0x08005d9c;
                    }
                    uVar17 = 1;
                }
                *(*(arg1 + 0x58) + uStack_70 * 4) = uVar17;
            }
code_r0x08005d9c:
            *(*(arg1 + 0x178) + *(arg1 + 0x14c)) = 1;
            iVar13 = of_get_property(arg2,"qcom,link-list",&uStack_6c);
            if ((iVar13 == 0) || (uVar23 = uStack_6c >> 2, bVar10 = uStack_6c < 4, uStack_6c = uVar23, bVar10))
            goto code_r0x08005ffc;
            uVar23 = 0;
            do {
                uVar1 = *(iVar13 + uVar23 * 4);
                uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
                uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
                if (3 < uVar1) {
                    iVar11 = -0x16;
                    goto code_r0x0800607c;
                }
                uVar19 = *(iVar13 + (uVar23 + 1) * 4);
                uVar2 = *(iVar13 + (uVar23 + 2) * 4);
                uVar3 = *(iVar13 + (uVar23 + 3) * 4);
                uVar6 = (uVar19 & 0xff00ff00) >> 8;
                uVar5 = uVar6 | (uVar19 & 0xff00ff) << 8;
                uVar7 = uVar5 >> 0x10;
                uVar5 = uVar5 << 0x10;
                uVar19 = uVar7 | uVar5;
                uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    //switch table (3 cases) at 0x8000c89
                switch(uVar1) {
                case 0:
                    uVar1 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                    iVar11 = sym.dcc_config_add(arg1,uVar19,uVar2,uVar1 >> 0x10 | uVar1 << 0x10);
                    goto joined_r0x08005e0c;
                case 1:
                    iVar14 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar14 = 0x30;
                    }
                    puVar16 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x38);
                    if (puVar16 == NULL) {
code_r0x08006070:
                        iVar11 = -0xc;
                        goto code_r0x0800607c;
                    }
                    uVar4 = *(arg1 + 0x14c);
                    iVar20 = *(arg1 + 0x140);
                    puVar16[5] = uVar2;
                    puVar16[8] = 3;
                    iVar14 = uVar4 * 4;
                    puVar21 = puVar16 + 10;
                    *puVar16 = uVar7 & 0xfffffff0 | uVar5;
                    puVar16[1] = (uVar6 & 0xf0000) >> 0x10;
                    uVar1 = *(iVar20 + iVar14);
                    *(iVar20 + iVar14) = uVar1 + 1;
                    *(puVar16 + 7) = uVar3 != 0;
                    puVar16[2] = 1;
                    puVar16[3] = uVar1;
                    *(puVar16 + 10) = puVar21;
                    *(puVar16 + 0xc) = puVar21;
                    iVar14 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
                    piVar22 = *(iVar14 + 8);
                    uVar15 = __list_add_valid(puVar21,piVar22,iVar14);
                    if ((uVar15 & 1) != 0) {
                        *(iVar14 + 8) = puVar21;
                        *(puVar16 + 10) = iVar14;
                        *(puVar16 + 0xc) = piVar22;
code_r0x08005fe0:
                        *piVar22 = puVar21;
                    }
                    break;
                case 2:
                    iVar14 = 0x38;
                    if (android_kmalloc_64_create != 0x0) {
                        iVar14 = 0x30;
                    }
                    iVar14 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar14),0xdc0,0x38);
                    if (iVar14 == 0) goto code_r0x08006070;
                    iVar20 = *(arg1 + 0x140);
                    if (0xfe < uVar19) {
                        uVar19 = 0xff;
                    }
                    puVar21 = iVar14 + 0x28;
                    iVar18 = *(arg1 + 0x14c) * 4;
                    *(iVar14 + 0x10) = uVar19;
                    iVar11 = *(iVar20 + iVar18);
                    *(iVar20 + iVar18) = iVar11 + 1;
                    *(iVar14 + 0xc) = iVar11;
                    *(iVar14 + 0x20) = 1;
                    *(iVar14 + 0x28) = puVar21;
                    *(iVar14 + 0x30) = puVar21;
                    iVar20 = *(arg1 + 0x138) + *(arg1 + 0x14c) * 0x10;
                    piVar22 = *(iVar20 + 8);
                    uVar15 = __list_add_valid(puVar21,piVar22,iVar20);
                    if ((uVar15 & 1) != 0) {
                        *(iVar20 + 8) = puVar21;
                        *(iVar14 + 0x28) = iVar20;
                        *(iVar14 + 0x30) = piVar22;
                        goto code_r0x08005fe0;
                    }
                    break;
                case 3:
                    iVar11 = sym.dcc_rd_mod_wr_add(arg1,uVar19,uVar2);
joined_r0x08005e0c:
                    if (iVar11 != 0) {
code_r0x0800607c:
                        _dev_err(*(arg1 + 0x10),"DCC init time config failed err:%d\n",iVar11);
                        goto code_r0x08005ffc;
                    }
                }
                uVar23 = uVar23 + 4;
            } while (uVar23 < uStack_6c);
        }
        else {
            _dev_err(*(arg1 + 0x10),"List configuration failed.\n");
        }
        iVar11 = 0;
    }
code_r0x08005ffc:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_68) {
        return iVar11;
    }
    __stack_chk_fail();
code_r0x08006098:
    //WARNING: Does not return
    pcVar9 = SoftwareBreakpoint(0x5512,0x800609c);
    (*pcVar9)();
}


// ===== sym.dcc_v2_freeze @ 0x0800609c (size 532) =====

int sym.dcc_v2_freeze(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    uint *puVar8;
    char *pcVar9;
    uint *puVar10;
    uint32_t *puVar11;
    ulong *in_x18;
    uint64_t uVar12;
    int64_t *piVar13;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar13 = *(arg1 + 0x98);
    if (piVar13 == NULL) {
        iVar5 = -0x16;
    }
    else {
        pcVar9 = piVar13[0xf];
        if (((((*pcVar9 != '\0') || (pcVar9[1] != '\0')) || (pcVar9[2] != '\0')) ||
            ((pcVar9[3] != '\0' || (pcVar9[4] != '\0')))) ||
           ((pcVar9[5] != '\0' || ((pcVar9[6] != '\0' || (pcVar9[7] != '\0')))))) {
            uVar4 = *(piVar13 + 0x164);
            uVar12 = uVar4;
            if (uVar4 != 0) {
                if ((uVar12 >> 0x3e != 0) || (puVar6 = __kmalloc(uVar12 << 2,0xdc0), puVar6 == NULL)) {
                    _dev_err(arg1,"Failed to alloc memory for reg_offsets\n");
                    return -0xc;
                }
                iVar5 = of_property_read_variable_u32_array(*(arg1 + 0x2f0),"ll-reg-offsets",puVar6,uVar12,uVar12);
                if (-1 < iVar5) {
                    iVar7 = __kmalloc(uVar12 << 3,0xdc0);
                    piVar13[0x2d] = iVar7;
                    if (iVar7 == 0) {
                        iVar5 = -0xc;
                    }
                    else {
                        puVar8 = __kmalloc(piVar13[10],0xdc0);
                        piVar13[0x2e] = puVar8;
                        if (puVar8 == NULL) {
                            iVar5 = -0xc;
                        }
                        else {
                            uVar2 = *(piVar13 + 0x15c);
                            uVar12 = uVar2;
                            if ((uVar2 != 0) && (puVar10 = piVar13[9], ((puVar10 | uVar2) & 3) == 0)) {
                                if (3 < uVar2) {
                                    do {
                                        uVar3 = *puVar10;
                                        puVar10 = puVar10 + 1;
                                        uVar12 = uVar12 - 4;
                                        *puVar8 = uVar3;
                                        puVar8 = puVar8 + 1;
                                    } while (3 < uVar12);
                                }
                                mutex_lock(piVar13 + 3);
                                if (0 < uVar4) {
                                    iVar7 = 0;
                                    puVar11 = puVar6;
                                    do {
                                        *(piVar13[0x2d] + iVar7) = *puVar11;
                                        iVar1 = piVar13[0x2d] + iVar7;
                                        iVar7 = iVar7 + 8;
                                        *(iVar1 + 4) = *(*piVar13 + *puVar11);
                                        puVar11 = puVar11 + 1;
                                    } while (uVar4 * 8 - iVar7 != 0);
                                }
                                mutex_unlock(piVar13 + 3);
                                kfree(puVar6);
                                return 0;
                            }
                            _dev_err(arg1,"Failed to copy DCC SRAM contents\n");
                            kfree(piVar13[0x2e]);
                            iVar5 = -0x16;
                            piVar13[0x2e] = 0;
                        }
                        kfree(piVar13[0x2d]);
                        piVar13[0x2d] = 0;
                    }
                }
                kfree(puVar6);
                return iVar5;
            }
        }
        iVar5 = 0;
    }
    return iVar5;
}


// ===== sym.dcc_v2_thaw @ 0x080062b8 (size 120) =====

ulong sym.dcc_v2_thaw(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (((iVar2 == 0) || (*(iVar2 + 0x168) == 0)) || (*(iVar2 + 0x170) == 0)) {
        _dev_err(arg1,"Err: %s Invalid argument\n","dcc_v2_thaw");
        uVar1 = 0xffffffea;
    }
    else {
        kfree(*(iVar2 + 0x170));
        kfree(*(iVar2 + 0x168));
        uVar1 = 0;
        *(iVar2 + 0x168) = 0;
        *(iVar2 + 0x170) = 0;
    }
    return uVar1;
}


// ===== sym.dcc_v2_restore @ 0x08006330 (size 448) =====

uint sym.dcc_v2_restore(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    int iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    ulong *in_x18;
    uint uVar11;
    int64_t *piVar12;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    piVar12 = *(arg1 + 0x98);
    if (piVar12 == NULL) {
        _dev_err(arg1,"Err: %s Invalid argument\n","dcc_state_restore");
        return 0xffffffea;
    }
    pcVar6 = piVar12[0xf];
    if ((((((*pcVar6 != '\0') || (pcVar6[1] != '\0')) || (pcVar6[2] != '\0')) ||
         ((pcVar6[3] != '\0' || (pcVar6[4] != '\0')))) ||
        ((pcVar6[5] != '\0' || ((pcVar6[6] != '\0' || (pcVar6[7] != '\0')))))) &&
       (iVar4 = *(piVar12 + 0x164), iVar4 != 0)) {
        iVar7 = piVar12[0x2e];
        if ((iVar7 == 0) || (piVar12[0x2d] == 0)) {
            _dev_err(arg1,"Err: Restore state is NULL\n");
            uVar11 = 0xffffffea;
            goto code_r0x0800648c;
        }
        uVar5 = *(piVar12 + 0x15c);
        if (3 < uVar5) {
            uVar9 = 0;
            do {
                if (uVar9 <= piVar12[10] - 4) {
                    *(piVar12[9] + uVar9) = *(iVar7 + uVar9);
                }
                uVar9 = uVar9 + 4;
            } while ((uVar5 & 0xfffffffc) != uVar9);
        }
        mutex_lock(piVar12 + 3);
        if ((piVar12[0x29] != 0) && (0 < iVar4)) {
            uVar5 = 0;
            iVar8 = 0;
            do {
                piVar1 = piVar12[0x27] + uVar5 * 0x10;
                if (piVar1 == *piVar1) {
                    iVar8 = piVar12[0x2c] + iVar8;
                }
                else if (piVar12[0x2c] != 0) {
                    uVar10 = 0;
                    do {
                        iVar3 = iVar8 + uVar10;
                        uVar10 = uVar10 + 1;
                        puVar2 = piVar12[0x2d] + iVar3 * 8;
                        *(*piVar12 + *puVar2) = puVar2[1];
                    } while (uVar10 < *(piVar12 + 0x2c));
                    iVar8 = iVar8 + uVar10;
                }
                uVar5 = uVar5 + 1;
            } while ((uVar5 < *(piVar12 + 0x29)) && (iVar8 < iVar4));
        }
        mutex_unlock(piVar12 + 3);
    }
    uVar11 = 0;
code_r0x0800648c:
    kfree(piVar12[0x2e]);
    piVar12[0x2e] = 0;
    kfree(piVar12[0x2d]);
    piVar12[0x2d] = 0;
    return uVar11;
}


// ===== sym.__cfi_check_fail @ 0x080064f4 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08006538

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
    //switch table (4 cases) at 0x8000c8d
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x800654c);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08006554 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08006588 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.dcc_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

