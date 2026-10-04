// decompiled from memory_dump_v2 by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 356) =====

//WARNING: Switch with 1 destination removed at 0x0800314c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 == -0x66d421a09845f9f8) {
            pcVar2 = sym.core_reg_num_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt;
code_r0x08001124:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 5) {
                return;
            }
            goto code_r0x0800310c;
        }
        if (arg1 != -0x3557318fb8d07b71) {
            if ((arg1 == -0x2acf75da45e19525) && ((pcVar1 + -0x80011b8 >> 3 | pcVar1 << 0x3d) < 2)) {
                return;
            }
            goto code_r0x0800310c;
        }
        pcVar2 = sym.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt;
    }
    else if (arg1 < 0x6e9810b85546f85e) {
        if (arg1 != 0x2b3a43e29242445) {
            if (arg1 != 0x1e3d0ffe3d0499e9) goto code_r0x0800310c;
            pcVar2 = sym.register_reset_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt;
            goto code_r0x08001124;
        }
        pcVar2 = sym.init_module.cfi_jt;
    }
    else if (arg1 == 0x6e9810b85546f85e) {
        pcVar2 = sym.msm_dump_table_version.cfi_jt;
    }
    else {
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800310c;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x0800310c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003160);
    (*pcVar1)();
}


// ===== sym.msm_dump_table_version.cfi_jt @ 0x08001170 (size 8) =====

ulong sym.msm_dump_table_version.cfi_jt(void)

{
    return 0x200000;
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001178 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001180 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x08001188 (size 8) =====

uint64_t sym.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    uint uVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *puVar14;
    uint *puVar15;
    ulong *puVar16;
    uint32_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong uVar19;
    uint64_t uVar20;
    uint *puVar21;
    int64_t iVar22;
    ulong unaff_x30;
    uint32_t uStack_dc;
    ulong uStack_d0;
    uint64_t *puStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
    uint uStack_a0;
    uint uStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint *puStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar1 = param_1 + 0x10;
    iStack_68 = *(iVar13 + 0x5e0);
    uVar12 = dma_set_mask(iVar1,0xffffffffffffffff);
    if (uVar12 == 0) {
        dma_set_coherent_mask(iVar1,0xffffffffffffffff);
    }
    else {
        uVar20 = uVar12 & 0xffffffff;
        if (uVar12 < 0) goto code_r0x08001604;
    }
    uVar19 = *(param_1 + 0x300);
    iStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    puStack_80 = NULL;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_c8 = NULL;
    uStack_c0 = 0;
    uStack_a0 = 6;
    uStack_9c = 3;
    uStack_d0 = 0;
    iVar13 = of_parse_phandle(uVar19,"memory-region",0);
    if ((iVar13 == 0) || (iVar9 = of_reserved_mem_device_init_by_idx(iVar1,*(param_1 + 0x300),0), iVar9 == 0)) {
        uStack_b0 = uStack_b0 & 0xffffffff;
        puVar14 = of_get_next_available_child(uVar19,0);
        if (puVar14 == NULL) {
            iVar9 = 0;
            iVar13 = 0x7e10;
        }
        else {
            iVar9 = 0;
            iVar13 = 0x7e10;
            do {
                iVar10 = of_property_read_variable_u32_array(puVar14,"qcom,dump-size",&uStack_b0 + 4,1,0);
                if (iVar10 < 0) {
                    _dev_err(iVar1,"Unable to find size for %s\n",*puVar14);
                }
                else {
                    iVar9 = iVar9 + 1;
                    iVar13 = iVar13 + (uStack_b0 >> 0x20);
                }
                puVar14 = of_get_next_available_child(uVar19,puVar14);
            } while (puVar14 != NULL);
        }
        uVar12 = iVar13 + iVar9 * 0x40 + 0xfffU & 0xfffffffffffff000;
        puVar15 = dmam_alloc_attrs(iVar1,uVar12,&uStack_b8,0xcc0,0);
        if (puVar15 != NULL) {
            dma_get_sgtable_attrs(iVar1,&puStack_c8,puVar15,uStack_b8,uVar12,0);
            iVar13 = ((*puStack_c8 & 0x3fffffffffffffc) + (__printk >> 0xc) * 0x40) * 0x40;
            iVar2 = iVar13 + 0x8000000000;
            sg_free_table(&puStack_c8);
            memset(puVar15,0,uVar12);
            uVar11 = qtee_shmbridge_register(iVar2,uVar12,&uStack_9c,&uStack_a0,1,6,&uStack_d0);
            if (uVar11 != 0) {
                uVar20 = uVar11;
                _dev_err(iVar1,"Failed to create shm bridge.ret=%d\n",uVar20);
                goto code_r0x08001604;
            }
            *0x8000078 = puVar15;
            *puVar15 = 0x200000;
            _reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt = iVar2;
            puVar15[0xfc2] = 0x200000;
            puVar21 = *0x8000078;
            if ((*0x8000078 == NULL) || (uVar11 = (*0x8000078)[1], 0x14f < uVar11)) {
                _printk(0x800049f);
                _dev_err(iVar1,"Memory Dump table set up is failed\n");
                qtee_shmbridge_deregister(uStack_d0);
                uVar20 = 0xffffffea;
                goto code_r0x08001604;
            }
            (*0x8000078)[uVar11 * 0xc + 2] = 0;
            puVar21[uVar11 * 0xc + 0xb] = 1;
            *(puVar21 + uVar11 * 0xc + 0xc) = iVar13 + 0x8000003f08;
            puVar21[1] = uVar11 + 1;
            _printk(0x800060d);
            iVar9 = qcom_scm_assign_dump_table_region(1,iVar2,uVar12);
            if (iVar9 != 0) {
                uStack_a8 = uVar12;
                iVar22 = of_find_compatible_node(0,0,"qcom,msm-imem-mem_dump_table");
                if (iVar22 == 0) {
                    uVar20 = 0xffffffed;
                    uVar19 = 0x8000462;
                }
                else {
                    iVar22 = of_iomap(iVar22,0);
                    if (iVar22 != 0) {
                        __memcpy_toio(iVar22,reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt,8);
                        __memcpy_toio(iVar22 + 0x724,&uStack_a8,8);
                        DataSynchronizationBarrier(3,3,0);
                        _printk(0x800085d);
                        iounmap(iVar22);
                        goto code_r0x0800179c;
                    }
                    uVar20 = 0xfffffff4;
                    uVar19 = 0x80006a7;
                }
                _printk(uVar19);
                qtee_shmbridge_deregister(uStack_d0);
                goto code_r0x08001604;
            }
code_r0x0800179c:
            puVar14 = of_get_next_available_child(uVar19,0);
            if (puVar14 == NULL) {
                uVar20 = 0;
                uStack_dc = 0;
            }
            else {
                iVar13 = iVar13 + 0x8000007e10;
                puVar21 = puVar15 + 0x1f84;
                uStack_dc = 0;
                do {
                    uVar11 = of_property_read_variable_u32_array(puVar14,"qcom,dump-size",&uStack_b0 + 4,1,0);
                    if (uVar11 < 0) {
                        uVar20 = uVar11;
                    }
                    else {
                        uVar11 = of_property_read_variable_u32_array(puVar14,"qcom,dump-id",&uStack_b0,1,0);
                        if (uVar11 < 0) {
                            uVar20 = uVar11;
                            _dev_err(iVar1,"Unable to find id for %s\n",*puVar14);
                        }
                        else {
                            uVar7 = uStack_b0;
                            *(puVar21 + 10) = iVar13 + 0x40;
                            *(puVar21 + 0xc) = uStack_b0 >> 0x20;
                            strscpy(puVar21 + 2,*puVar14,0x20);
                            iVar22 = CONCAT44(*0x8000004,_segment.ehdr);
                            if (iVar22 == 0) {
                                _printk(0x8000640);
                            }
                            else {
                                iVar18 = -0x3f00;
                                do {
                                    if (*(iVar22 + iVar18 + 0x3f08) == 0) {
                                        iVar18 = *(iVar22 + iVar18 + 0x3f30);
                                        if (iVar18 != 0) {
                                            uVar20 = iVar22 + (iVar18 - CONCAT44(*0x8000004,_segment.ehdr));
                                            if (0xfffffffffffff000 < uVar20) goto code_r0x08001938;
                                            if (uVar20 != 0) {
                                                uVar11 = *(uVar20 + 4);
                                                if (uVar11 < 0x150) {
                                                    iVar22 = uVar20 + uVar11 * 0x30;
                                                    *(uVar20 + 4) = uVar11 + 1;
                                                    uVar20 = 0;
                                                    *(iVar22 + 8) = uVar7;
                                                    *(iVar22 + 0x2c) = 0;
                                                    *(iVar22 + 0x30) = iVar13;
                                                    goto code_r0x0800193c;
                                                }
                                            }
                                            uVar20 = 0xffffffea;
                                            goto code_r0x08001a18;
                                        }
                                        break;
                                    }
                                    iVar18 = iVar18 + 0x30;
                                } while (iVar18 != 0);
                                _printk(0x80005c1,0);
                            }
                            uVar20 = 0xffffffffffffffea;
code_r0x08001938:
                            if (uVar20 != 0) {
code_r0x08001a18:
                                _dev_err(iVar1,"Data dump setup failed, id = %d\n",uStack_b0 & 0xffffffff);
                            }
code_r0x0800193c:
                            uVar11 = uStack_b0;
                            if ((uStack_b0 == 0xef) || ((uStack_b0 & 0xfffffff8) == 0x1f0)) {
                                iVar22 = *(param_1 + 0xa8);
                                uVar7 = uStack_b0._4_4_;
                                if (iVar22 == 0) {
                                    iVar22 = devm_kmalloc(iVar1,0x78,0xdc0);
                                    if (iVar22 != 0) {
                                        __mutex_init(iVar22,"&cpudata->mutex",obj.cpuss_dump_init.__key);
                                        *(param_1 + 0xa8) = iVar22;
                                        goto code_r0x08001994;
                                    }
                                }
                                else {
code_r0x08001994:
                                    if (uVar11 == 0xef) {
                                        puVar16 = devm_kmalloc(iVar1,0x20,0xdc0);
                                        *(iVar22 + 0x30) = puVar16;
                                        if (puVar16 != NULL) {
                                            uVar17 = 1;
                                            *puVar16 = puVar21 + 0x10;
                                            iVar22 = *(iVar22 + 0x30);
code_r0x080017c8:
                                            _segment.ehdr = _segment.ehdr | uVar17;
                                            *(iVar22 + 8) = uVar7;
                                        }
                                    }
                                    else {
                                        uVar11 = uVar11 - 0x1f0;
                                        puVar16 = devm_kmalloc(iVar1,0x18,0xdc0);
                                        if (7 < uVar11) goto code_r0x08001d48;
                                        *(iVar22 + 0x38 + uVar11 * 8) = puVar16;
                                        if (puVar16 != NULL) {
                                            *puVar16 = puVar21 + 0x10;
                                            uVar17 = 2;
                                            iVar22 = *(iVar22 + 0x38 + uVar11 * 8);
                                            goto code_r0x080017c8;
                                        }
                                    }
                                }
                                uStack_dc = _segment.ehdr;
                            }
                            iVar22 = (uStack_b0 >> 0x20) + 0x40;
                            puVar21 = puVar21 + iVar22;
                            iVar13 = iVar22 + iVar13;
                        }
                    }
                    puVar14 = of_get_next_available_child(uVar19,puVar14);
                } while (puVar14 != NULL);
            }
            puStack_80 = puVar15;
            iStack_78 = iVar2;
            uStack_70 = uVar12;
            strscpy(&uStack_98,"MEMDUMP",0xd);
            iVar9 = msm_minidump_add_region(&uStack_98);
            if (iVar9 < 0) {
                _dev_err(iVar1,"Mini dump entry failed id = %d\n",uStack_b0 & 0xffffffff);
            }
            if ((uStack_dc & 1) != 0) {
                iVar9 = device_create_file(iVar1,obj.dev_attr_core_reg_num);
                if (iVar9 == 0) {
                    iVar9 = device_create_file(iVar1,obj.dev_attr_register_config);
                    if (iVar9 == 0) {
                        iVar9 = device_create_file(iVar1,obj.dev_attr_register_reset);
                        if (iVar9 == 0) {
                            iVar9 = device_create_file(iVar1,obj.dev_attr_format_version);
                            if (iVar9 == 0) goto code_r0x08001c08;
                            bVar3 = false;
                            bVar4 = false;
                            bVar5 = false;
                            bVar6 = true;
                            iVar13 = 3;
                        }
                        else {
                            bVar3 = false;
                            bVar4 = false;
                            bVar6 = false;
                            bVar5 = true;
                            iVar13 = 2;
                        }
                    }
                    else {
                        bVar3 = false;
                        bVar5 = false;
                        bVar6 = false;
                        bVar4 = true;
                        iVar13 = 1;
                    }
                }
                else {
                    bVar4 = false;
                    bVar5 = false;
                    bVar6 = false;
                    iVar13 = 0;
                    bVar3 = true;
                }
                _dev_err(iVar1,"Couldn\'t create sysfs attribute: %s\n",**(obj.register_dump_attrs + iVar13 * 8));
                if ((((!bVar3) && (device_remove_file(iVar1,obj.dev_attr_core_reg_num), !bVar4)) &&
                    (device_remove_file(iVar1,obj.dev_attr_register_config), !bVar5)) &&
                   (device_remove_file(iVar1,obj.dev_attr_register_reset), !bVar6)) {
                    device_remove_file(iVar1,obj.dev_attr_format_version);
                }
                _dev_err(iVar1,"Fail to create files for cpuss register dump\n");
            }
code_r0x08001c08:
            if ((uStack_dc >> 1 & 1) != 0) {
                iVar9 = device_create_file(iVar1,obj.dev_attr_spr_config);
                if (iVar9 == 0) {
                    iVar9 = device_create_file(iVar1,obj.dev_attr_sprs_register_reset);
                    if (iVar9 == 0) {
                        iVar9 = device_create_file(iVar1,obj.dev_attr_sprs_format_version);
                        if (iVar9 == 0) goto joined_r0x08001c48;
                        bVar3 = false;
                        bVar4 = false;
                        bVar5 = true;
                        iVar13 = 2;
                    }
                    else {
                        bVar3 = false;
                        bVar5 = false;
                        bVar4 = true;
                        iVar13 = 1;
                    }
                }
                else {
                    bVar4 = false;
                    bVar5 = false;
                    iVar13 = 0;
                    bVar3 = true;
                }
                _dev_err(iVar1,"Couldn\'t create sysfs attribute: %s\n",**(obj.spr_dump_attrs + iVar13 * 8));
                if (((!bVar3) && (device_remove_file(iVar1,obj.dev_attr_spr_config), !bVar4)) &&
                   (device_remove_file(iVar1,obj.dev_attr_sprs_register_reset), !bVar5)) {
                    device_remove_file(iVar1,obj.dev_attr_sprs_format_version);
                }
                _dev_err(iVar1,"Fail to create files for spr dump\n");
            }
joined_r0x08001c48:
            if ((uStack_dc >> 1 & 1) != 0) {
                sym.reset_sprs_dump_table(iVar1);
            }
            goto code_r0x08001604;
        }
    }
    else {
        _dev_err(iVar1,"Failed to initialize reserved mem, ret %d\n",iVar9);
    }
    uVar20 = 0xfffffff4;
code_r0x08001604:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar20 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08001d48:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8001d4c);
    (*pcVar8)();
}


// ===== sym.register_reset_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x08001190 (size 8) =====

int64_t sym.register_reset_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    int iVar1;
    int *piVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    piVar2 = &iStack_2c;
    iStack_2c = 0;
    iVar1 = kstrtouint(param_3,0x10,piVar2);
    iVar5 = -0x16;
    if ((iVar1 == 0) && (iStack_2c == 1)) {
        iVar5 = *(param_1 + 0x98);
        mutex_lock(iVar5);
        if (0x20 < *(*(iVar5 + 0x30) + 8)) {
            *(*(iVar5 + 0x30) + 0xc) = 1;
            *(*(iVar5 + 0x30) + 0x10) = 0;
            *(*(iVar5 + 0x30) + 0x14) = 4;
            *(*(iVar5 + 0x30) + 0x18) = 0;
            *(*(iVar5 + 0x30) + 0x1c) = 0x20;
            piVar2 = *(*(iVar5 + 0x30) + 1);
            memset(**(iVar5 + 0x30),0xde,piVar2);
            puVar3 = **(iVar5 + 0x30);
            *puVar3 = 0x200c0ffee;
            puVar3[1] = 0x2000000007;
            iVar4 = **(iVar5 + 0x30);
            *(iVar4 + 0x10) = 0;
            *(iVar4 + 0x18) = 0;
        }
        mutex_unlock(iVar5);
        iVar5 = param_4;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar5 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.format_version_show;
    iVar5 = *(iVar5 + 0x98);
    if (iVar5 == 0) {
        iVar5 = -0xe;
    }
    else {
        mutex_lock(iVar5);
        iVar1 = scnprintf(piVar2,0x1000,0x80003d3,*(**(iVar5 + 0x30) + 4));
        mutex_unlock(iVar5);
        iVar5 = iVar1;
    }
    return iVar5;
}


// ===== sym.register_config_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x08001198 (size 8) =====

int64_t sym.register_config_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint32_t *arg3;
    uint32_t uVar5;
    uint64_t arg4;
    uint32_t *puVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint8_t auStack_58 [4];
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    arg3 = &uStack_4c;
    puVar6 = &uStack_50;
    iVar12 = *(param_1 + 0x98);
    uVar7 = auStack_58;
    puVar8 = &uStack_54;
    uStack_4c = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    auStack_58[0] = 0;
    iVar2 = sscanf(param_3,"%x %x %c %u");
    uVar5 = puVar6;
    if (1 < iVar2) {
        if (iVar2 == 2) {
            auStack_58[0] = 0x72;
        }
        if (uStack_54 < 2) {
            if ((uStack_4c & 3) == 0) {
                if ((auStack_58[0] & 0xdf) != 0x52) {
                    uVar14 = 4;
code_r0x08002598:
                    uVar3 = mutex_lock(iVar12);
                    uVar5 = puVar6;
                    piVar9 = *(iVar12 + 0x30);
                    iVar13 = *piVar9;
                    if (uStack_54 == 0) {
                        puVar6 = auStack_58[0];
                        uVar3 = 8;
                        if (uVar14 != 4 || auStack_58[0] != 0x72) {
                            uVar3 = uVar14 + 8;
                        }
                        if (((uVar3 < uVar14) || (uVar3 = uVar3 + *(piVar9 + 0x1c), uVar3 < *(piVar9 + 0x1c))) ||
                           (*(piVar9 + 1) < uVar3)) {
                            pcVar4 = "Couldn\'t add system reg config, no enough memory\n";
                            goto code_r0x08002754;
                        }
                        puVar8 = uStack_50;
                        uVar14 = *(iVar13 + 8) + (*(piVar9 + 3) >> 2);
                        arg3 = uVar14;
                        uVar7 = uStack_4c;
                        iVar2 = sym.config_cpuss_register(param_1,iVar13,arg3,puVar6);
                        uVar5 = puVar6;
                        if (iVar2 == 0) {
                            iVar2 = 4;
                            if (auStack_58[0] != 0x72 || uStack_50 != 4) {
                                iVar2 = 8;
                            }
                            iVar11 = 1;
                            if (auStack_58[0] != 0x72 || uStack_50 != 4) {
                                iVar11 = 2;
                            }
                            *(*(iVar12 + 0x30) + 0x18) = iVar2 + *(*(iVar12 + 0x30) + 0x18);
                            uVar14 = iVar11 + uVar14;
                            *(*(iVar12 + 0x30) + 0x1c) = uVar3;
                            *(iVar13 + uVar14 * 4) = 0;
                            *(iVar13 + 0xc) = uVar14 * 4 + 4;
                            iVar2 = param_4;
                        }
                    }
                    else if (piVar9[2] == *(piVar9 + 0xc)) {
                        _dev_err(param_1,"Couldn\'t add per-core config, out of range\n");
                        iVar2 = -0x16;
                    }
                    else {
                        *arg3 = uVar3;
                        uVar3 = __sw_hweight64(_printk);
                        uVar5 = 0;
                        if (uVar3 != 0) {
                            uVar5 = (uVar14 * uVar3) / uVar3;
                        }
                        if (uVar14 <= uVar5) {
                            iVar10 = *(iVar12 + 0x30);
                            uVar14 = uVar14 * uVar3 + *(iVar10 + 0x1c);
                            if ((*(iVar10 + 0x1c) <= uVar14) && (uVar14 <= *(iVar10 + 8))) {
                                arg3 = *(iVar10 + 0x14);
                                puVar8 = uStack_50;
                                arg4 = auStack_58[0];
                                uVar7 = uStack_4c;
                                iVar2 = sym.config_cpuss_register(param_1,iVar13,arg3,arg4);
                                uVar5 = arg4;
                                if (iVar2 == 0) {
                                    iVar2 = 1;
                                    if (uStack_50 != 4 || auStack_58[0] != 0x72) {
                                        iVar2 = 2;
                                    }
                                    *(*(iVar12 + 0x30) + 0x14) = iVar2 + *(*(iVar12 + 0x30) + 0x14);
                                    *(*(iVar12 + 0x30) + 0x10) = *(*(iVar12 + 0x30) + 0x10) + 1;
                                    *(*(iVar12 + 0x30) + 0x1c) = uVar14;
                                    iVar2 = param_4;
                                }
                                goto code_r0x08002778;
                            }
                        }
                        pcVar4 = "Couldn\'t add per-core reg config, no enough memory\n";
code_r0x08002754:
                        uVar5 = puVar6;
                        _dev_err(param_1,pcVar4);
                        iVar2 = -0xc;
                    }
code_r0x08002778:
                    mutex_unlock(iVar12);
                    iVar12 = iVar2;
                    goto code_r0x08002784;
                }
                if (uStack_50 == 0) {
                    pcVar4 = "Invalid length of 0\n";
                }
                else {
                    if ((auStack_58[0] != 0x72) || ((uStack_50 & 3) == 0)) {
                        uVar14 = uStack_50 << 2;
                        if (auStack_58[0] != 0x52) {
                            uVar14 = uStack_50;
                        }
                        goto code_r0x08002598;
                    }
                    pcVar4 = "Invalid length, must be 4 byte aligned\n";
                }
            }
            else {
                pcVar4 = "Invalid address, must be 4 byte aligned\n";
            }
            _dev_err(param_1,pcVar4);
            iVar12 = -0x16;
            goto code_r0x08002784;
        }
    }
    iVar12 = -0x16;
code_r0x08002784:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return iVar12;
    }
    auVar15 = __stack_chk_fail(iVar12);
    iVar12 = auVar15._8_8_;
    *extraout_x18 = sym.config_cpuss_register;
    uVar14 = puVar8;
    switch(uVar5 & 0xff) {
    case 0x52:
        if ((puVar8 & 0xff000000) == 0) {
            puVar6 = iVar12 + (arg3 & 0xffffffff) * 4;
            *puVar6 = uVar7 | 3;
            puVar6[1] = uVar14 | 0x2000000;
            return 0;
        }
        pcVar4 = "repeat read time exceeded the limit\n";
        break;
    default:
        pcVar4 = "Don\'t support this command\n";
        break;
    case 100:
        if (uVar14 >> 0x18 == 0) {
            puVar1 = iVar12 + (arg3 & 0xffffffff) * 4;
            *puVar1 = 3;
            puVar1[1] = uVar14 | 0x1000000;
            return 0;
        }
        pcVar4 = "sleep time exceeded the limit\n";
        break;
    case 0x72:
        if (4 < uVar14) {
            puVar6 = iVar12 + (arg3 & 0xffffffff) * 4;
            *puVar6 = uVar7;
            puVar6[1] = uVar14;
            return 0;
        }
        *(iVar12 + (arg3 & 0xffffffff) * 4) = uVar7 | 1;
        return 0;
    case 0x77:
        puVar6 = iVar12 + (arg3 & 0xffffffff) * 4;
        *puVar6 = uVar7 | 2;
        puVar6[1] = uVar14;
        return 0;
    }
    _dev_err(auVar15._0_8_,pcVar4);
    return 0xffffffea;
}


// ===== sym.spr_config_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011a0 (size 8) =====

int64_t sym.spr_config_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int param_4)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar8 = *(param_1 + 0x98);
    uStack_40 = 0;
    iVar3 = sscanf(param_3,"%d %d",&uStack_40 + 4,&uStack_40);
    if (iVar3 == 2) {
        if (iVar8 == 0) {
            iVar4 = -0xe;
        }
        else if (uStack_40 < 8) {
            mutex_lock(iVar8);
            if (7 < uStack_40) goto code_r0x08002dc8;
            iVar4 = iVar8 + 0x38;
            piVar5 = *(iVar4 + (uStack_40 & 0xffffffff) * 8);
            if (piVar5 == NULL) {
code_r0x08002d44:
                iVar4 = param_4;
            }
            else {
                if (piVar5[2] + 0xcU < *(piVar5 + 1)) {
                    uVar1 = *(piVar5 + 0xc);
                    iVar6 = *piVar5;
                    *(iVar6 + 0xc) = uVar1 * 4 + 0x1c;
                    iVar6 = iVar6 + uVar1 * 4;
                    *(iVar6 + 0x14) = uStack_40._4_4_;
                    *(iVar6 + 0x18) = 0;
                    if (7 < uStack_40) goto code_r0x08002dc8;
                    iVar6 = (uStack_40 & 0xffffffff) * 8;
                    iVar7 = *(iVar4 + iVar6);
                    *(iVar7 + 0xc) = *(iVar7 + 0xc) + 1;
                    iVar4 = *(iVar4 + iVar6);
                    *(iVar4 + 0x10) = *(iVar4 + 0x10) + 0xc;
                    goto code_r0x08002d44;
                }
                _dev_err(param_1,"Couldn\'t add SPR config, no enough memory\n");
                iVar4 = -0xc;
            }
            mutex_unlock(iVar8);
        }
        else {
            _dev_err(param_1,"Input the wrong CPU number\n");
            iVar4 = -0x16;
        }
    }
    else {
        iVar4 = -0x16;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08002dc8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002dcc);
    (*pcVar2)();
}


// ===== sym.core_reg_num_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011a8 (size 8) =====

uint64_t sym.core_reg_num_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    uint *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t arg1;
    char *pcVar8;
    uint32_t *arg3;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    uint32_t *puVar13;
    int iVar14;
    ulong *puVar15;
    int64_t *piVar16;
    int64_t iVar17;
    int iVar18;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar19;
    uint32_t *puVar20;
    uint64_t unaff_x22;
    uint32_t uVar21;
    char *unaff_x23;
    uint64_t unaff_x24;
    int iVar22;
    int64_t iVar23;
    ulong unaff_x30;
    uchar auVar24 [16];
    uint8_t auStack_158 [4];
    uint32_t uStack_154;
    uint32_t uStack_150;
    uint32_t uStack_14c;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    char *pcStack_128;
    uint64_t uStack_120;
    uint32_t *puStack_118;
    int64_t iStack_110;
    uint64_t uStack_108;
    uint64_t uStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar19 = sp_el0;
    iStack_48 = *(iVar19 + 0x5e0);
    puVar11 = &uStack_4c;
    puVar20 = *(param_1 + 0x98);
    uStack_4c = 0;
    uVar10 = param_4;
    iVar2 = kstrtouint(param_3,0x10);
    if (iVar2 == 0) {
        mutex_lock(puVar20);
        uVar12 = uStack_4c;
        iVar19 = *(puVar20 + 0xc);
        if ((*(iVar19 + 0x10) == 0) && (*(iVar19 + 0x18) == 0)) {
            unaff_x22 = uStack_4c;
            uVar9 = *(iVar19 + 0xc);
            unaff_x23 = uVar9;
            mutex_unlock(puVar20);
            uVar21 = uStack_4c;
            if (uVar12 != uVar9) {
                puVar20 = *(param_1 + 0x98);
                unaff_x24 = uStack_4c;
                uVar9 = uStack_4c * 2;
                unaff_x22 = uVar9;
                uVar12 = uVar9 + 6;
                unaff_x23 = uVar12;
                mutex_lock(puVar20);
                if (uVar12 <= (uVar12 & 0x3ffffffe)) {
                    uVar12 = uVar12 * 4;
                    unaff_x23 = uVar12;
                    if (uVar12 < *(*(puVar20 + 0xc) + 8)) {
                        *(*(puVar20 + 0xc) + 0xc) = uVar21;
                        *(*(puVar20 + 0xc) + 0x10) = 0;
                        *(*(puVar20 + 0xc) + 0x14) = 4;
                        *(*(puVar20 + 0xc) + 0x18) = 0;
                        *(*(puVar20 + 0xc) + 0x1c) = uVar12;
                        memset(**(puVar20 + 0xc),0xde,*(*(puVar20 + 0xc) + 1));
                        puVar15 = **(puVar20 + 0xc);
                        *puVar15 = 0x200c0ffee;
                        *(puVar15 + 1) = uVar9 + 5;
                        *(puVar15 + 0xc) = uVar12;
                        puVar11 = uVar9 + 2 << 2;
                        memset(**(puVar20 + 0xc) + 0x10,0);
                        mutex_unlock(puVar20);
                        goto code_r0x08002214;
                    }
                }
                mutex_unlock(puVar20);
                _dev_err(param_1,"Couldn\'t set core_reg_num, no enough memory\n");
                param_4 = 0xfffffffffffffff4;
            }
        }
        else {
            _dev_err(param_1,"Couldn\'t set core_reg_num, register available in list\n");
            mutex_unlock(puVar20);
            param_4 = 0xffffffffffffffff;
        }
    }
    else {
        param_4 = 0xffffffffffffffea;
    }
code_r0x08002214:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_48) {
        return param_4;
    }
    uVar6 = __stack_chk_fail();
    iVar2 = uVar10;
    *extraout_x18 = sym.register_config_show;
    pcStack_a8 = sym.register_config_show;
    iVar19 = sp_el0;
    iStack_b8 = *(iVar19 + 0x5e0);
    iVar19 = *(uVar6 + 0x98);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    *puVar11 = '\0';
    puStack_b0 = &stack0xffffffffffffffc0;
    if (iVar19 == 0) {
        uVar10 = 0xfffffffffffffff2;
        pcVar8 = puVar11;
    }
    else {
        mutex_lock(iVar19);
        iVar23 = **(iVar19 + 0x30);
        uVar7 = scnprintf(&uStack_f8,0x40,"per-core registers:\n");
        unaff_x22 = uVar7 & 0xffffffff;
        pcVar8 = 0x1000;
        strlcat(puVar11,&uStack_f8,0x1000);
        iVar2 = uVar10;
        iVar18 = *(iVar23 + 8);
        iVar4 = iVar18 + (*(*(iVar19 + 0x30) + 0x18) >> 2) + 1;
        param_4 = uVar6;
        if (4 < iVar4) {
            iVar22 = 4;
            unaff_x23 = "system registers:\n";
            uStack_100 = uVar6;
            do {
                uVar6 = unaff_x22;
                if (iVar22 == iVar18) {
                    pcVar8 = unaff_x23;
                    iVar3 = scnprintf(&uStack_f8,0x40,"system registers:\n");
                    iVar2 = uVar10;
                    uVar12 = iVar3 + unaff_x22;
                    uVar6 = uVar12;
                    uVar7 = unaff_x22;
                    unaff_x24 = uVar6;
                    if (uVar12 < 0x1001) {
                        pcVar8 = 0x1000;
                        strlcat(puVar11,&uStack_f8,0x1000);
                        goto code_r0x0800237c;
                    }
code_r0x08002464:
                    unaff_x22 = uVar7;
                    _dev_err(uStack_100,"Couldn\'t write complete config\n");
                    param_4 = 0x8000240;
                    break;
                }
code_r0x0800237c:
                puVar20 = iVar23 + iVar22 * 4;
                uVar12 = *puVar20;
                if (uVar12 == 0) {
                    iVar22 = iVar22 + 1;
                    unaff_x22 = uVar6;
                }
                else {
                    uVar10 = uVar12 & 0xfffffffc;
                    switch(uVar12 & 3) {
                    case 0:
                        uVar12 = puVar20[1];
                        pcVar8 = "0x%x, 0x%x, r\n";
                        break;
                    case 1:
                        pcVar8 = "0x%x, 0x%x, r\n";
                        iVar3 = scnprintf(&uStack_f8,0x40,"0x%x, 0x%x, r\n",uVar10,4);
                        iVar14 = 1;
                        goto code_r0x08002434;
                    case 2:
                        uVar12 = puVar20[1];
                        pcVar8 = "0x%x, 0x%x, w\n";
                        break;
                    case 3:
                        uVar12 = puVar20[1] & 0xffffff;
                        pcVar8 = "0x%x, 0x%x, d\n";
                        if (puVar20[1] >> 0x18 != 1) {
                            pcVar8 = "0x%x, 0x%x, R\n";
                        }
                    }
                    iVar3 = scnprintf(&uStack_f8,0x40,pcVar8,uVar10,uVar12);
                    iVar14 = 2;
code_r0x08002434:
                    iVar2 = uVar10;
                    uVar12 = iVar3 + uVar6;
                    unaff_x22 = uVar12;
                    uVar7 = uVar6;
                    unaff_x24 = unaff_x22;
                    if (0x1000 < uVar12) goto code_r0x08002464;
                    pcVar8 = 0x1000;
                    iVar22 = iVar14 + iVar22;
                    strlcat(puVar11,&uStack_f8,0x1000);
                }
                iVar2 = uVar10;
                param_4 = 0x8000240;
            } while (iVar22 < iVar4);
        }
        mutex_unlock(iVar19);
        uVar10 = unaff_x22;
        puVar20 = puVar11;
    }
    iVar23 = sp_el0;
    if (*(iVar23 + 0x5e0) == iStack_b8) {
        return uVar10;
    }
    arg1 = __stack_chk_fail(uVar10);
    *extraout_x18_00 = sym.register_config_store;
    pcStack_138 = sym.register_config_store;
    iVar23 = sp_el0;
    iStack_148 = *(iVar23 + 0x5e0);
    arg3 = &uStack_14c;
    puVar11 = &uStack_150;
    iVar23 = *(arg1 + 0x98);
    uVar12 = auStack_158;
    puVar13 = &uStack_154;
    uStack_14c = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    auStack_158[0] = 0;
    ppuStack_140 = &puStack_b0;
    uStack_130 = unaff_x24;
    pcStack_128 = unaff_x23;
    uStack_120 = unaff_x22;
    puStack_118 = puVar20;
    iStack_110 = iVar19;
    uStack_108 = param_4;
    iVar4 = sscanf(pcVar8,"%x %x %c %u");
    uVar9 = puVar11;
    if (1 < iVar4) {
        if (iVar4 == 2) {
            auStack_158[0] = 0x72;
        }
        if (uStack_154 < 2) {
            if ((uStack_14c & 3) == 0) {
                if ((auStack_158[0] & 0xdf) != 0x52) {
                    uVar21 = 4;
code_r0x08002598:
                    uVar5 = mutex_lock(iVar23);
                    uVar9 = puVar11;
                    piVar16 = *(iVar23 + 0x30);
                    iVar19 = *piVar16;
                    if (uStack_154 == 0) {
                        puVar11 = auStack_158[0];
                        uVar5 = 8;
                        if (uVar21 != 4 || auStack_158[0] != 0x72) {
                            uVar5 = uVar21 + 8;
                        }
                        if (((uVar5 < uVar21) || (uVar5 = uVar5 + *(piVar16 + 0x1c), uVar5 < *(piVar16 + 0x1c))) ||
                           (*(piVar16 + 1) < uVar5)) {
                            pcVar8 = "Couldn\'t add system reg config, no enough memory\n";
                            goto code_r0x08002754;
                        }
                        puVar13 = uStack_150;
                        uVar21 = *(iVar19 + 8) + (*(piVar16 + 3) >> 2);
                        arg3 = uVar21;
                        uVar12 = uStack_14c;
                        iVar4 = sym.config_cpuss_register(arg1,iVar19,arg3,puVar11);
                        uVar9 = puVar11;
                        if (iVar4 == 0) {
                            iVar4 = 4;
                            if (auStack_158[0] != 0x72 || uStack_150 != 4) {
                                iVar4 = 8;
                            }
                            iVar18 = 1;
                            if (auStack_158[0] != 0x72 || uStack_150 != 4) {
                                iVar18 = 2;
                            }
                            *(*(iVar23 + 0x30) + 0x18) = iVar4 + *(*(iVar23 + 0x30) + 0x18);
                            uVar21 = iVar18 + uVar21;
                            *(*(iVar23 + 0x30) + 0x1c) = uVar5;
                            *(iVar19 + uVar21 * 4) = 0;
                            *(iVar19 + 0xc) = uVar21 * 4 + 4;
                            iVar4 = iVar2;
                        }
                    }
                    else if (piVar16[2] == *(piVar16 + 0xc)) {
                        _dev_err(arg1,"Couldn\'t add per-core config, out of range\n");
                        iVar4 = -0x16;
                    }
                    else {
                        *arg3 = uVar5;
                        uVar5 = __sw_hweight64(_printk);
                        uVar9 = 0;
                        if (uVar5 != 0) {
                            uVar9 = (uVar21 * uVar5) / uVar5;
                        }
                        if (uVar21 <= uVar9) {
                            iVar17 = *(iVar23 + 0x30);
                            uVar21 = uVar21 * uVar5 + *(iVar17 + 0x1c);
                            if ((*(iVar17 + 0x1c) <= uVar21) && (uVar21 <= *(iVar17 + 8))) {
                                arg3 = *(iVar17 + 0x14);
                                puVar13 = uStack_150;
                                uVar10 = auStack_158[0];
                                uVar12 = uStack_14c;
                                iVar4 = sym.config_cpuss_register(arg1,iVar19,arg3,uVar10);
                                uVar9 = uVar10;
                                if (iVar4 == 0) {
                                    iVar4 = 1;
                                    if (uStack_150 != 4 || auStack_158[0] != 0x72) {
                                        iVar4 = 2;
                                    }
                                    *(*(iVar23 + 0x30) + 0x14) = iVar4 + *(*(iVar23 + 0x30) + 0x14);
                                    *(*(iVar23 + 0x30) + 0x10) = *(*(iVar23 + 0x30) + 0x10) + 1;
                                    *(*(iVar23 + 0x30) + 0x1c) = uVar21;
                                    iVar4 = iVar2;
                                }
                                goto code_r0x08002778;
                            }
                        }
                        pcVar8 = "Couldn\'t add per-core reg config, no enough memory\n";
code_r0x08002754:
                        uVar9 = puVar11;
                        _dev_err(arg1,pcVar8);
                        iVar4 = -0xc;
                    }
code_r0x08002778:
                    mutex_unlock(iVar23);
                    uVar10 = iVar4;
                    goto code_r0x08002784;
                }
                if (uStack_150 == 0) {
                    pcVar8 = "Invalid length of 0\n";
                }
                else {
                    if ((auStack_158[0] != 0x72) || ((uStack_150 & 3) == 0)) {
                        uVar21 = uStack_150 << 2;
                        if (auStack_158[0] != 0x52) {
                            uVar21 = uStack_150;
                        }
                        goto code_r0x08002598;
                    }
                    pcVar8 = "Invalid length, must be 4 byte aligned\n";
                }
            }
            else {
                pcVar8 = "Invalid address, must be 4 byte aligned\n";
            }
            _dev_err(arg1,pcVar8);
            uVar10 = 0xffffffffffffffea;
            goto code_r0x08002784;
        }
    }
    uVar10 = 0xffffffffffffffea;
code_r0x08002784:
    iVar19 = sp_el0;
    if (*(iVar19 + 0x5e0) == iStack_148) {
        return uVar10;
    }
    auVar24 = __stack_chk_fail(uVar10);
    iVar19 = auVar24._8_8_;
    *extraout_x18_01 = sym.config_cpuss_register;
    uVar21 = puVar13;
    switch(uVar9 & 0xff) {
    case 0x52:
        if ((puVar13 & 0xff000000) == 0) {
            puVar11 = iVar19 + (arg3 & 0xffffffff) * 4;
            *puVar11 = uVar12 | 3;
            puVar11[1] = uVar21 | 0x2000000;
            return 0;
        }
        pcVar8 = "repeat read time exceeded the limit\n";
        break;
    default:
        pcVar8 = "Don\'t support this command\n";
        break;
    case 100:
        if (uVar21 >> 0x18 == 0) {
            puVar1 = iVar19 + (arg3 & 0xffffffff) * 4;
            *puVar1 = 3;
            puVar1[1] = uVar21 | 0x1000000;
            return 0;
        }
        pcVar8 = "sleep time exceeded the limit\n";
        break;
    case 0x72:
        if (4 < uVar21) {
            puVar11 = iVar19 + (arg3 & 0xffffffff) * 4;
            *puVar11 = uVar12;
            puVar11[1] = uVar21;
            return 0;
        }
        *(iVar19 + (arg3 & 0xffffffff) * 4) = uVar12 | 1;
        return 0;
    case 0x77:
        puVar11 = iVar19 + (arg3 & 0xffffffff) * 4;
        *puVar11 = uVar12 | 2;
        puVar11[1] = uVar21;
        return 0;
    }
    _dev_err(auVar24._0_8_,pcVar8);
    return 0xffffffea;
}


// ===== sym.sprs_register_reset_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011b0 (size 8) =====

void sym.sprs_register_reset_store.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
               (int64_t param_1,ulong param_2,ulong param_3,ulong param_4)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    int64_t iVar5;
    uchar *puVar6;
    int *piVar7;
    int64_t *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar9;
    ulong unaff_x30;
    uchar auVar10 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar9 = sp_el0;
    iStack_28 = *(iVar9 + 0x5e0);
    piVar7 = &iStack_2c;
    iStack_2c = 0;
    iVar2 = kstrtouint(param_3,0x10);
    uVar4 = 0xffffffffffffffea;
    if ((iVar2 == 0) && (iStack_2c == 1)) {
        sym.reset_sprs_dump_table(param_1);
        uVar4 = param_4;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.sprs_format_version_show;
    pcStack_58 = sym.sprs_format_version_show;
    iVar9 = sp_el0;
    iStack_68 = *(iVar9 + 0x5e0);
    iVar9 = *(iVar5 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *piVar7 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    if (iVar9 == 0) {
        iVar9 = -0xe;
    }
    else {
        mutex_lock(iVar9);
        if (*(iVar9 + 0x38) == NULL) {
            iVar2 = 0;
            piVar8 = *(iVar9 + 0x40);
        }
        else {
            iVar2 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",0,*(**(iVar9 + 0x38) + 4))
            ;
            strlcat(piVar7,&uStack_a8,0x1000);
            piVar8 = *(iVar9 + 0x40);
        }
        if (piVar8 != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",1,*(*piVar8 + 4));
            strlcat(piVar7,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar9 + 0x48) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",2,*(**(iVar9 + 0x48) + 4))
            ;
            strlcat(piVar7,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar9 + 0x50) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",3,*(**(iVar9 + 0x50) + 4))
            ;
            strlcat(piVar7,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar9 + 0x58) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",4,*(**(iVar9 + 0x58) + 4))
            ;
            strlcat(piVar7,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar9 + 0x60) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",5,*(**(iVar9 + 0x60) + 4))
            ;
            strlcat(piVar7,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar9 + 0x68) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",6,*(**(iVar9 + 0x68) + 4))
            ;
            strlcat(piVar7,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar9 + 0x70) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",7,*(**(iVar9 + 0x70) + 4))
            ;
            strlcat(piVar7,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        mutex_unlock(iVar9);
        iVar9 = iVar2;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_68) {
        return;
    }
    auVar10 = __stack_chk_fail(iVar9);
    puVar6 = auVar10._0_8_;
    *extraout_x18_00 = sym.__cfi_check_fail;
    if (puVar6 != NULL) {
        switch(*puVar6) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar6,auVar10._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003160);
    (*pcVar1)();
}


// ===== sym.msm_dump_data_register.cfi_jt @ 0x080011b8 (size 8) =====

uint64_t sym.msm_dump_data_register.cfi_jt(int param_1,uint *param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (_segment.ehdr == 0) {
        _printk(0x8000640);
    }
    else {
        iVar4 = -0x3f00;
        do {
            if (*(_segment.ehdr + iVar4 + 0x3f08) == param_1) {
                uVar3 = *(_segment.ehdr + iVar4 + 0x3f30);
                if (uVar3 != 0) {
                    if (0xfffffffffffff000 < uVar3) goto code_r0x080012dc;
                    if (uVar3 != 0) {
                        uVar1 = *(uVar3 + 4);
                        if (uVar1 < 0x150) {
                            iVar4 = uVar3 + uVar1 * 0x30;
                            *(iVar4 + 8) = *param_2;
                            *(iVar4 + 0x2c) = 0;
                            uVar5 = *(param_2 + 10);
                            *(uVar3 + 4) = uVar1 + 1;
                            *(iVar4 + 0x30) = uVar5;
                            goto code_r0x080012e0;
                        }
                    }
                    uVar3 = 0xffffffea;
                    goto code_r0x08001374;
                }
                break;
            }
            iVar4 = iVar4 + 0x30;
        } while (iVar4 != 0);
        _printk(0x80005c1);
    }
    uVar3 = 0xffffffffffffffea;
code_r0x080012dc:
    if (uVar3 != 0) goto code_r0x08001374;
code_r0x080012e0:
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar3 = *(param_2 + 10) - __printk | 0xffffff8000000000;
    if ((*(uVar3 + 0x28) == 0) || (*(uVar3 + 0x30) == 0)) {
code_r0x080013a4:
        _printk(0x8000303);
    }
    else {
        if (*(uVar3 + 8) == '\0') {
            snprintf(&uStack_68,0xd,"KMDT0x%X",*param_2);
        }
        else {
            strscpy(&uStack_68,uVar3 + 8,0xd);
        }
        iStack_48 = *(uVar3 + 0x28);
        uStack_40 = *(uVar3 + 0x30);
        uStack_50 = iStack_48 - __printk | 0xffffff8000000000;
        uStack_58 = CONCAT44(uStack_58._4_4_,*param_2);
        iVar2 = msm_minidump_add_region(&uStack_68);
        if (iVar2 < 0) goto code_r0x080013a4;
    }
    uVar3 = 0;
code_r0x08001374:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.msm_dump_data_register_nominidump;
    if (_segment.ehdr == 0) {
        _printk(0x8000640);
    }
    else {
        iVar4 = -0x3f00;
        do {
            if (*(_segment.ehdr + iVar4 + 0x3f08) == auVar6._0_4_) {
                uVar3 = *(_segment.ehdr + iVar4 + 0x3f30);
                if (uVar3 != 0) {
                    if (0xfffffffffffff000 < uVar3) {
                        return uVar3;
                    }
                    if (uVar3 != 0) {
                        uVar1 = *(uVar3 + 4);
                        if (uVar1 < 0x150) {
                            iVar4 = uVar3 + uVar1 * 0x30;
                            *(iVar4 + 8) = *auVar6._8_8_;
                            *(iVar4 + 0x2c) = 0;
                            uVar5 = *(auVar6._8_8_ + 10);
                            *(uVar3 + 4) = uVar1 + 1;
                            *(iVar4 + 0x30) = uVar5;
                            return 0;
                        }
                    }
                    return 0xffffffea;
                }
                break;
            }
            iVar4 = iVar4 + 0x30;
        } while (iVar4 != 0);
        _printk(0x80005c1,auVar6._0_8_ & 0xffffffff);
    }
    return 0xffffffffffffffea;
}


// ===== sym.msm_dump_data_register_nominidump.cfi_jt @ 0x080011c0 (size 8) =====

uint64_t sym.msm_dump_data_register_nominidump.cfi_jt(int param_1,uint *param_2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x8000640);
    }
    else {
        iVar2 = -0x3f00;
        do {
            if (*(_segment.ehdr + iVar2 + 0x3f08) == param_1) {
                uVar3 = *(_segment.ehdr + iVar2 + 0x3f30);
                if (uVar3 != 0) {
                    if (0xfffffffffffff000 < uVar3) {
                        return uVar3;
                    }
                    if (uVar3 != 0) {
                        uVar1 = *(uVar3 + 4);
                        if (uVar1 < 0x150) {
                            iVar2 = uVar3 + uVar1 * 0x30;
                            *(iVar2 + 8) = *param_2;
                            *(iVar2 + 0x2c) = 0;
                            uVar4 = *(param_2 + 10);
                            *(uVar3 + 4) = uVar1 + 1;
                            *(iVar2 + 0x30) = uVar4;
                            return 0;
                        }
                    }
                    return 0xffffffea;
                }
                break;
            }
            iVar2 = iVar2 + 0x30;
        } while (iVar2 != 0);
        _printk(0x80005c1,param_1);
    }
    return 0xffffffffffffffea;
}


// ===== sym.core_reg_num_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011c8 (size 8) =====

int64_t sym.core_reg_num_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (iVar2 == 0) {
        iVar2 = -0xe;
    }
    else {
        mutex_lock(iVar2);
        iVar1 = scnprintf(param_3,0x1000,0x80003d3,*(*(iVar2 + 0x30) + 0xc));
        mutex_unlock(iVar2);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.format_version_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011d0 (size 8) =====

int64_t sym.format_version_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0x98);
    if (iVar2 == 0) {
        iVar2 = -0xe;
    }
    else {
        mutex_lock(iVar2);
        iVar1 = scnprintf(param_3,0x1000,0x80003d3,*(**(iVar2 + 0x30) + 4));
        mutex_unlock(iVar2);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.spr_config_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011d8 (size 8) =====

int64_t sym.spr_config_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
                  (int64_t param_1,ulong param_2,uchar *param_3,uint64_t param_4)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uchar *puVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    uchar *unaff_x20;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    uchar *puStack_c0;
    int64_t iStack_b8;
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
    
    iVar3 = param_4;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = *(param_1 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *param_3 = 0;
    iStack_b0 = param_1;
    if (iVar10 == 0) {
        iVar5 = -0xe;
        puVar7 = param_3;
    }
    else {
        mutex_lock(iVar10);
        uVar2 = scnprintf(&uStack_a8,0x40,"spr data list below:\n");
        puVar7 = 0x1000;
        strlcat(param_3,&uStack_a8,0x1000);
        uVar11 = 0;
        iVar5 = iVar10 + 0x38;
        do {
            iVar3 = param_4;
            if (0x1000 < uVar2) {
                _dev_err(iStack_b0,"Couldn\'t write complete config\n");
                break;
            }
            piVar8 = *(iVar5 + uVar11 * 8);
            if (piVar8 == NULL) {
                puVar7 = uVar11 & 0xffffffff;
                _dev_err(iStack_b0,"SPR data pinter for CPU%d is empty\n",puVar7);
            }
            else {
                param_4 = uVar11 & 0xffffffff;
                unaff_x19 = *piVar8;
                iVar3 = scnprintf(&uStack_a8,0x40,"spr data for CPU[%d] below:\n",param_4);
                puVar7 = 0x1000;
                strlcat(param_3,&uStack_a8,0x1000);
                uVar2 = iVar3 + uVar2;
                if (*(*(iVar5 + uVar11 * 8) + 0xc) != 0) {
                    uVar12 = 0;
                    unaff_x19 = unaff_x19 + 0x14;
                    do {
                        if (0x1000 < uVar2) {
                            _dev_err(iStack_b0,"Couldn\'t write complete config\n");
                            break;
                        }
                        param_4 = *(unaff_x19 + uVar12 * 4);
                        iVar3 = scnprintf(&uStack_a8,0x40,0x80005e9,param_4);
                        puVar7 = 0x1000;
                        strlcat(param_3,&uStack_a8,0x1000);
                        uVar2 = iVar3 + uVar2;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < *(*(iVar5 + uVar11 * 8) + 0xc));
                }
            }
            iVar3 = param_4;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 8);
        mutex_unlock(iVar10);
        iVar5 = uVar2;
        unaff_x20 = param_3;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.spr_config_store;
    pcStack_d8 = sym.spr_config_store;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar6 + 0x98);
    uStack_f0 = 0;
    puStack_e0 = &stack0xffffffffffffffa0;
    iStack_d0 = iVar10;
    puStack_c0 = unaff_x20;
    iStack_b8 = unaff_x19;
    iVar4 = sscanf(puVar7,"%d %d",&uStack_f0 + 4,&uStack_f0);
    if (iVar4 == 2) {
        if (iVar5 == 0) {
            iVar10 = -0xe;
        }
        else if (uStack_f0 < 8) {
            mutex_lock(iVar5);
            if (7 < uStack_f0) goto code_r0x08002dc8;
            iVar10 = iVar5 + 0x38;
            piVar8 = *(iVar10 + (uStack_f0 & 0xffffffff) * 8);
            if (piVar8 == NULL) {
code_r0x08002d44:
                iVar10 = iVar3;
            }
            else {
                if (piVar8[2] + 0xcU < *(piVar8 + 1)) {
                    uVar2 = *(piVar8 + 0xc);
                    iVar6 = *piVar8;
                    *(iVar6 + 0xc) = uVar2 * 4 + 0x1c;
                    iVar6 = iVar6 + uVar2 * 4;
                    *(iVar6 + 0x14) = uStack_f0._4_4_;
                    *(iVar6 + 0x18) = 0;
                    if (7 < uStack_f0) goto code_r0x08002dc8;
                    iVar6 = (uStack_f0 & 0xffffffff) * 8;
                    iVar9 = *(iVar10 + iVar6);
                    *(iVar9 + 0xc) = *(iVar9 + 0xc) + 1;
                    iVar10 = *(iVar10 + iVar6);
                    *(iVar10 + 0x10) = *(iVar10 + 0x10) + 0xc;
                    goto code_r0x08002d44;
                }
                _dev_err(iVar6,"Couldn\'t add SPR config, no enough memory\n");
                iVar10 = -0xc;
            }
            mutex_unlock(iVar5);
        }
        else {
            _dev_err(iVar6,"Input the wrong CPU number\n");
            iVar10 = -0x16;
        }
    }
    else {
        iVar10 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return iVar10;
    }
    __stack_chk_fail();
code_r0x08002dc8:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002dcc);
    (*pcVar1)();
}


// ===== sym.register_config_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011e0 (size 8) =====

int64_t sym.register_config_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
                  (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    uint *puVar1;
    uint64_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t *arg3;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t *puVar12;
    int iVar13;
    int64_t *piVar14;
    int64_t iVar15;
    int iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t iVar17;
    char *unaff_x21;
    uint64_t unaff_x22;
    uint32_t uVar18;
    char *unaff_x23;
    uint64_t unaff_x24;
    int iVar19;
    int64_t iVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uint8_t auStack_108 [4];
    uint32_t uStack_104;
    uint32_t uStack_100;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    char *pcStack_d8;
    uint64_t uStack_d0;
    char *pcStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
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
    
    iVar9 = param_4;
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    iVar17 = *(param_1 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *param_3 = '\0';
    if (iVar17 == 0) {
        iVar20 = -0xe;
        pcVar8 = param_3;
    }
    else {
        mutex_lock(iVar17);
        iVar20 = **(iVar17 + 0x30);
        uVar6 = scnprintf(&uStack_a8,0x40,"per-core registers:\n");
        unaff_x22 = uVar6 & 0xffffffff;
        pcVar8 = 0x1000;
        strlcat(param_3,&uStack_a8,0x1000);
        iVar9 = param_4;
        iVar16 = *(iVar20 + 8);
        iVar4 = iVar16 + (*(*(iVar17 + 0x30) + 0x18) >> 2) + 1;
        unaff_x19 = param_1;
        if (4 < iVar4) {
            iVar19 = 4;
            unaff_x23 = "system registers:\n";
            iStack_b0 = param_1;
            do {
                uVar6 = unaff_x22;
                if (iVar19 == iVar16) {
                    pcVar8 = unaff_x23;
                    iVar3 = scnprintf(&uStack_a8,0x40,"system registers:\n");
                    iVar9 = param_4;
                    uVar11 = iVar3 + unaff_x22;
                    uVar6 = uVar11;
                    uVar2 = unaff_x22;
                    unaff_x24 = uVar6;
                    if (uVar11 < 0x1001) {
                        pcVar8 = 0x1000;
                        strlcat(param_3,&uStack_a8,0x1000);
                        goto code_r0x0800237c;
                    }
code_r0x08002464:
                    unaff_x22 = uVar2;
                    _dev_err(iStack_b0,"Couldn\'t write complete config\n");
                    unaff_x19 = 0x8000240;
                    break;
                }
code_r0x0800237c:
                puVar12 = iVar20 + iVar19 * 4;
                uVar11 = *puVar12;
                if (uVar11 == 0) {
                    iVar19 = iVar19 + 1;
                    unaff_x22 = uVar6;
                }
                else {
                    param_4 = uVar11 & 0xfffffffc;
                    switch(uVar11 & 3) {
                    case 0:
                        uVar11 = puVar12[1];
                        pcVar8 = "0x%x, 0x%x, r\n";
                        break;
                    case 1:
                        pcVar8 = "0x%x, 0x%x, r\n";
                        iVar3 = scnprintf(&uStack_a8,0x40,"0x%x, 0x%x, r\n",param_4,4);
                        iVar13 = 1;
                        goto code_r0x08002434;
                    case 2:
                        uVar11 = puVar12[1];
                        pcVar8 = "0x%x, 0x%x, w\n";
                        break;
                    case 3:
                        uVar11 = puVar12[1] & 0xffffff;
                        pcVar8 = "0x%x, 0x%x, d\n";
                        if (puVar12[1] >> 0x18 != 1) {
                            pcVar8 = "0x%x, 0x%x, R\n";
                        }
                    }
                    iVar3 = scnprintf(&uStack_a8,0x40,pcVar8,param_4,uVar11);
                    iVar13 = 2;
code_r0x08002434:
                    iVar9 = param_4;
                    uVar11 = iVar3 + uVar6;
                    unaff_x22 = uVar11;
                    uVar2 = uVar6;
                    unaff_x24 = unaff_x22;
                    if (0x1000 < uVar11) goto code_r0x08002464;
                    pcVar8 = 0x1000;
                    iVar19 = iVar13 + iVar19;
                    strlcat(param_3,&uStack_a8,0x1000);
                }
                iVar9 = param_4;
                unaff_x19 = 0x8000240;
            } while (iVar19 < iVar4);
        }
        mutex_unlock(iVar17);
        iVar20 = unaff_x22;
        unaff_x21 = param_3;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar20;
    }
    iVar7 = __stack_chk_fail(iVar20);
    *extraout_x18 = sym.register_config_store;
    pcStack_e8 = sym.register_config_store;
    iVar20 = sp_el0;
    iStack_f8 = *(iVar20 + 0x5e0);
    arg3 = &uStack_fc;
    uVar6 = 0;
    iVar20 = *(iVar7 + 0x98);
    uVar11 = auStack_108;
    puVar12 = &uStack_104;
    uStack_fc = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    auStack_108[0] = 0;
    puStack_f0 = &stack0xffffffffffffffa0;
    uStack_e0 = unaff_x24;
    pcStack_d8 = unaff_x23;
    uStack_d0 = unaff_x22;
    pcStack_c8 = unaff_x21;
    iStack_c0 = iVar17;
    iStack_b8 = unaff_x19;
    iVar4 = sscanf(pcVar8,"%x %x %c %u");
    uVar10 = uVar6;
    if (1 < iVar4) {
        if (iVar4 == 2) {
            auStack_108[0] = 0x72;
        }
        if (uStack_104 < 2) {
            if ((uStack_fc & 3) == 0) {
                if ((auStack_108[0] & 0xdf) != 0x52) {
                    uVar18 = 4;
code_r0x08002598:
                    uVar5 = mutex_lock(iVar20);
                    uVar10 = uVar6;
                    piVar14 = *(iVar20 + 0x30);
                    iVar17 = *piVar14;
                    if (uStack_104 == 0) {
                        uVar6 = auStack_108[0];
                        uVar5 = 8;
                        if (uVar18 != 4 || auStack_108[0] != 0x72) {
                            uVar5 = uVar18 + 8;
                        }
                        if (((uVar5 < uVar18) || (uVar5 = uVar5 + *(piVar14 + 0x1c), uVar5 < *(piVar14 + 0x1c))) ||
                           (*(piVar14 + 1) < uVar5)) {
                            pcVar8 = "Couldn\'t add system reg config, no enough memory\n";
                            goto code_r0x08002754;
                        }
                        puVar12 = uStack_100;
                        uVar18 = *(iVar17 + 8) + (*(piVar14 + 3) >> 2);
                        arg3 = uVar18;
                        uVar11 = uStack_fc;
                        iVar4 = sym.config_cpuss_register(iVar7,iVar17,arg3,uVar6);
                        uVar10 = uVar6;
                        if (iVar4 == 0) {
                            iVar4 = 4;
                            if (auStack_108[0] != 0x72 || uStack_100 != 4) {
                                iVar4 = 8;
                            }
                            iVar16 = 1;
                            if (auStack_108[0] != 0x72 || uStack_100 != 4) {
                                iVar16 = 2;
                            }
                            *(*(iVar20 + 0x30) + 0x18) = iVar4 + *(*(iVar20 + 0x30) + 0x18);
                            uVar18 = iVar16 + uVar18;
                            *(*(iVar20 + 0x30) + 0x1c) = uVar5;
                            *(iVar17 + uVar18 * 4) = 0;
                            *(iVar17 + 0xc) = uVar18 * 4 + 4;
                            iVar4 = iVar9;
                        }
                    }
                    else if (piVar14[2] == *(piVar14 + 0xc)) {
                        _dev_err(iVar7,"Couldn\'t add per-core config, out of range\n");
                        iVar4 = -0x16;
                    }
                    else {
                        *arg3 = uVar5;
                        uVar5 = __sw_hweight64(_printk);
                        uVar10 = 0;
                        if (uVar5 != 0) {
                            uVar10 = (uVar18 * uVar5) / uVar5;
                        }
                        if (uVar18 <= uVar10) {
                            iVar15 = *(iVar20 + 0x30);
                            uVar18 = uVar18 * uVar5 + *(iVar15 + 0x1c);
                            if ((*(iVar15 + 0x1c) <= uVar18) && (uVar18 <= *(iVar15 + 8))) {
                                arg3 = *(iVar15 + 0x14);
                                puVar12 = uStack_100;
                                uVar6 = auStack_108[0];
                                uVar11 = uStack_fc;
                                iVar4 = sym.config_cpuss_register(iVar7,iVar17,arg3,uVar6);
                                uVar10 = uVar6;
                                if (iVar4 == 0) {
                                    iVar4 = 1;
                                    if (uStack_100 != 4 || auStack_108[0] != 0x72) {
                                        iVar4 = 2;
                                    }
                                    *(*(iVar20 + 0x30) + 0x14) = iVar4 + *(*(iVar20 + 0x30) + 0x14);
                                    *(*(iVar20 + 0x30) + 0x10) = *(*(iVar20 + 0x30) + 0x10) + 1;
                                    *(*(iVar20 + 0x30) + 0x1c) = uVar18;
                                    iVar4 = iVar9;
                                }
                                goto code_r0x08002778;
                            }
                        }
                        pcVar8 = "Couldn\'t add per-core reg config, no enough memory\n";
code_r0x08002754:
                        uVar10 = uVar6;
                        _dev_err(iVar7,pcVar8);
                        iVar4 = -0xc;
                    }
code_r0x08002778:
                    mutex_unlock(iVar20);
                    iVar17 = iVar4;
                    goto code_r0x08002784;
                }
                if (uStack_100 == 0) {
                    pcVar8 = "Invalid length of 0\n";
                }
                else {
                    if ((auStack_108[0] != 0x72) || ((uStack_100 & 3) == 0)) {
                        uVar18 = uStack_100 << 2;
                        if (auStack_108[0] != 0x52) {
                            uVar18 = uStack_100;
                        }
                        goto code_r0x08002598;
                    }
                    pcVar8 = "Invalid length, must be 4 byte aligned\n";
                }
            }
            else {
                pcVar8 = "Invalid address, must be 4 byte aligned\n";
            }
            _dev_err(iVar7,pcVar8);
            iVar17 = -0x16;
            goto code_r0x08002784;
        }
    }
    iVar17 = -0x16;
code_r0x08002784:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_f8) {
        return iVar17;
    }
    auVar21 = __stack_chk_fail(iVar17);
    iVar17 = auVar21._8_8_;
    *extraout_x18_00 = sym.config_cpuss_register;
    uVar18 = puVar12;
    switch(uVar10 & 0xff) {
    case 0x52:
        if ((puVar12 & 0xff000000) == 0) {
            puVar12 = iVar17 + (arg3 & 0xffffffff) * 4;
            *puVar12 = uVar11 | 3;
            puVar12[1] = uVar18 | 0x2000000;
            return 0;
        }
        pcVar8 = "repeat read time exceeded the limit\n";
        break;
    default:
        pcVar8 = "Don\'t support this command\n";
        break;
    case 100:
        if (uVar18 >> 0x18 == 0) {
            puVar1 = iVar17 + (arg3 & 0xffffffff) * 4;
            *puVar1 = 3;
            puVar1[1] = uVar18 | 0x1000000;
            return 0;
        }
        pcVar8 = "sleep time exceeded the limit\n";
        break;
    case 0x72:
        if (4 < uVar18) {
            puVar12 = iVar17 + (arg3 & 0xffffffff) * 4;
            *puVar12 = uVar11;
            puVar12[1] = uVar18;
            return 0;
        }
        *(iVar17 + (arg3 & 0xffffffff) * 4) = uVar11 | 1;
        return 0;
    case 0x77:
        puVar12 = iVar17 + (arg3 & 0xffffffff) * 4;
        *puVar12 = uVar11 | 2;
        puVar12[1] = uVar18;
        return 0;
    }
    _dev_err(auVar21._0_8_,pcVar8);
    return 0xffffffea;
}


// ===== sym.sprs_format_version_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt @ 0x080011e8 (size 8) =====

void sym.sprs_format_version_show.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt
               (int64_t param_1,ulong param_2,uchar *param_3)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uchar *puVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = *(param_1 + 0x98);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    *param_3 = 0;
    if (iVar7 == 0) {
        iVar7 = -0xe;
    }
    else {
        mutex_lock(iVar7);
        if (*(iVar7 + 0x38) == NULL) {
            iVar3 = 0;
            piVar6 = *(iVar7 + 0x40);
        }
        else {
            iVar3 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",0,*(**(iVar7 + 0x38) + 4))
            ;
            strlcat(param_3,&uStack_78,0x1000);
            piVar6 = *(iVar7 + 0x40);
        }
        if (piVar6 != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",1,*(*piVar6 + 4));
            strlcat(param_3,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x48) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",2,*(**(iVar7 + 0x48) + 4))
            ;
            strlcat(param_3,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x50) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",3,*(**(iVar7 + 0x50) + 4))
            ;
            strlcat(param_3,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x58) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",4,*(**(iVar7 + 0x58) + 4))
            ;
            strlcat(param_3,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x60) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",5,*(**(iVar7 + 0x60) + 4))
            ;
            strlcat(param_3,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x68) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",6,*(**(iVar7 + 0x68) + 4))
            ;
            strlcat(param_3,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x70) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",7,*(**(iVar7 + 0x70) + 4))
            ;
            strlcat(param_3,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        mutex_unlock(iVar7);
        iVar7 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail(iVar7);
    puVar5 = auVar8._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar5 != NULL) {
        switch(*puVar5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x8003160);
    (*pcVar2)();
}


// ===== sym.msm_dump_table_version @ 0x080011f0 (size 16) =====

ulong sym.msm_dump_table_version(void)

{
    return 0x200000;
}


// ===== sym.msm_dump_data_register @ 0x08001200 (size 440) =====

uint64_t sym.msm_dump_data_register(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong unaff_x30;
    uchar auVar6 [16];
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_38 = *(iVar4 + 0x5e0);
    if (_segment.ehdr == 0) {
        _printk(0x8000640);
    }
    else {
        iVar4 = -0x3f00;
        do {
            if (*(_segment.ehdr + iVar4 + 0x3f08) == arg1) {
                uVar3 = *(_segment.ehdr + iVar4 + 0x3f30);
                if (uVar3 != 0) {
                    if (0xfffffffffffff000 < uVar3) goto code_r0x080012dc;
                    if (uVar3 != 0) {
                        uVar1 = *(uVar3 + 4);
                        if (uVar1 < 0x150) {
                            iVar4 = uVar3 + uVar1 * 0x30;
                            *(iVar4 + 8) = *arg2;
                            *(iVar4 + 0x2c) = 0;
                            uVar5 = *(arg2 + 0x28);
                            *(uVar3 + 4) = uVar1 + 1;
                            *(iVar4 + 0x30) = uVar5;
                            goto code_r0x080012e0;
                        }
                    }
                    uVar3 = 0xffffffea;
                    goto code_r0x08001374;
                }
                break;
            }
            iVar4 = iVar4 + 0x30;
        } while (iVar4 != 0);
        _printk(0x80005c1);
    }
    uVar3 = 0xffffffffffffffea;
code_r0x080012dc:
    if (uVar3 != 0) goto code_r0x08001374;
code_r0x080012e0:
    iStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uVar3 = *(arg2 + 0x28) - __printk | 0xffffff8000000000;
    if ((*(uVar3 + 0x28) == 0) || (*(uVar3 + 0x30) == 0)) {
code_r0x080013a4:
        _printk(0x8000303);
    }
    else {
        if (*(uVar3 + 8) == '\0') {
            snprintf(&uStack_68,0xd,"KMDT0x%X",*arg2);
        }
        else {
            strscpy(&uStack_68,uVar3 + 8,0xd);
        }
        iStack_48 = *(uVar3 + 0x28);
        uStack_40 = *(uVar3 + 0x30);
        uStack_50 = iStack_48 - __printk | 0xffffff8000000000;
        uStack_58 = CONCAT44(uStack_58._4_4_,*arg2);
        iVar2 = msm_minidump_add_region(&uStack_68);
        if (iVar2 < 0) goto code_r0x080013a4;
    }
    uVar3 = 0;
code_r0x08001374:
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_38) {
        return uVar3;
    }
    auVar6 = __stack_chk_fail(uVar3);
    *extraout_x18 = sym.msm_dump_data_register_nominidump;
    if (_segment.ehdr == 0) {
        _printk(0x8000640);
    }
    else {
        iVar4 = -0x3f00;
        do {
            if (*(_segment.ehdr + iVar4 + 0x3f08) == auVar6._0_4_) {
                uVar3 = *(_segment.ehdr + iVar4 + 0x3f30);
                if (uVar3 != 0) {
                    if (0xfffffffffffff000 < uVar3) {
                        return uVar3;
                    }
                    if (uVar3 != 0) {
                        uVar1 = *(uVar3 + 4);
                        if (uVar1 < 0x150) {
                            iVar4 = uVar3 + uVar1 * 0x30;
                            *(iVar4 + 8) = *auVar6._8_8_;
                            *(iVar4 + 0x2c) = 0;
                            uVar5 = *(auVar6._8_8_ + 10);
                            *(uVar3 + 4) = uVar1 + 1;
                            *(iVar4 + 0x30) = uVar5;
                            return 0;
                        }
                    }
                    return 0xffffffea;
                }
                break;
            }
            iVar4 = iVar4 + 0x30;
        } while (iVar4 != 0);
        _printk(0x80005c1,auVar6._0_8_ & 0xffffffff);
    }
    return 0xffffffffffffffea;
}


// ===== sym.msm_dump_data_register_nominidump @ 0x080013b8 (size 216) =====

uint64_t sym.msm_dump_data_register_nominidump(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (_segment.ehdr == 0) {
        _printk(0x8000640);
    }
    else {
        iVar2 = -0x3f00;
        do {
            if (*(_segment.ehdr + iVar2 + 0x3f08) == arg1) {
                uVar3 = *(_segment.ehdr + iVar2 + 0x3f30);
                if (uVar3 != 0) {
                    if (0xfffffffffffff000 < uVar3) {
                        return uVar3;
                    }
                    if (uVar3 != 0) {
                        uVar1 = *(uVar3 + 4);
                        if (uVar1 < 0x150) {
                            iVar2 = uVar3 + uVar1 * 0x30;
                            *(iVar2 + 8) = *arg2;
                            *(iVar2 + 0x2c) = 0;
                            uVar4 = *(arg2 + 0x28);
                            *(uVar3 + 4) = uVar1 + 1;
                            *(iVar2 + 0x30) = uVar4;
                            return 0;
                        }
                    }
                    return 0xffffffea;
                }
                break;
            }
            iVar2 = iVar2 + 0x30;
        } while (iVar2 != 0);
        _printk(0x80005c1,arg1 & 0xffffffff);
    }
    return 0xffffffffffffffea;
}


// ===== sym.mem_dump_probe @ 0x08001490 (size 2236) =====

uint64_t sym.mem_dump_probe(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    uint uVar7;
    code *pcVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    ulong *puVar14;
    uint *puVar15;
    ulong *puVar16;
    uint32_t uVar17;
    int64_t iVar18;
    ulong *in_x18;
    ulong uVar19;
    uint64_t uVar20;
    uint *puVar21;
    int64_t iVar22;
    ulong unaff_x30;
    uint32_t uStack_dc;
    ulong uStack_d0;
    uint64_t *puStack_c8;
    ulong uStack_c0;
    ulong uStack_b8;
    ulong uStack_b0;
    uint64_t uStack_a8;
    uint uStack_a0;
    uint uStack_9c;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    uint *puStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar13 = sp_el0;
    iVar1 = arg1 + 0x10;
    iStack_68 = *(iVar13 + 0x5e0);
    uVar12 = dma_set_mask(iVar1,0xffffffffffffffff);
    if (uVar12 == 0) {
        dma_set_coherent_mask(iVar1,0xffffffffffffffff);
    }
    else {
        uVar20 = uVar12 & 0xffffffff;
        if (uVar12 < 0) goto code_r0x08001604;
    }
    uVar19 = *(arg1 + 0x300);
    iStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    puStack_80 = NULL;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_c8 = NULL;
    uStack_c0 = 0;
    uStack_a0 = 6;
    uStack_9c = 3;
    uStack_d0 = 0;
    iVar13 = of_parse_phandle(uVar19,"memory-region",0);
    if ((iVar13 == 0) || (iVar9 = of_reserved_mem_device_init_by_idx(iVar1,*(arg1 + 0x300),0), iVar9 == 0)) {
        uStack_b0 = uStack_b0 & 0xffffffff;
        puVar14 = of_get_next_available_child(uVar19,0);
        if (puVar14 == NULL) {
            iVar9 = 0;
            iVar13 = 0x7e10;
        }
        else {
            iVar9 = 0;
            iVar13 = 0x7e10;
            do {
                iVar10 = of_property_read_variable_u32_array(puVar14,"qcom,dump-size",&uStack_b0 + 4,1,0);
                if (iVar10 < 0) {
                    _dev_err(iVar1,"Unable to find size for %s\n",*puVar14);
                }
                else {
                    iVar9 = iVar9 + 1;
                    iVar13 = iVar13 + (uStack_b0 >> 0x20);
                }
                puVar14 = of_get_next_available_child(uVar19,puVar14);
            } while (puVar14 != NULL);
        }
        uVar12 = iVar13 + iVar9 * 0x40 + 0xfffU & 0xfffffffffffff000;
        puVar15 = dmam_alloc_attrs(iVar1,uVar12,&uStack_b8,0xcc0,0);
        if (puVar15 != NULL) {
            dma_get_sgtable_attrs(iVar1,&puStack_c8,puVar15,uStack_b8,uVar12,0);
            iVar13 = ((*puStack_c8 & 0x3fffffffffffffc) + (__printk >> 0xc) * 0x40) * 0x40;
            iVar2 = iVar13 + 0x8000000000;
            sg_free_table(&puStack_c8);
            memset(puVar15,0,uVar12);
            uVar11 = qtee_shmbridge_register(iVar2,uVar12,&uStack_9c,&uStack_a0,1,6,&uStack_d0);
            if (uVar11 != 0) {
                uVar20 = uVar11;
                _dev_err(iVar1,"Failed to create shm bridge.ret=%d\n",uVar20);
                goto code_r0x08001604;
            }
            *0x8000078 = puVar15;
            *puVar15 = 0x200000;
            _reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt = iVar2;
            puVar15[0xfc2] = 0x200000;
            puVar21 = *0x8000078;
            if ((*0x8000078 == NULL) || (uVar11 = (*0x8000078)[1], 0x14f < uVar11)) {
                _printk(0x800049f);
                _dev_err(iVar1,"Memory Dump table set up is failed\n");
                qtee_shmbridge_deregister(uStack_d0);
                uVar20 = 0xffffffea;
                goto code_r0x08001604;
            }
            (*0x8000078)[uVar11 * 0xc + 2] = 0;
            puVar21[uVar11 * 0xc + 0xb] = 1;
            *(puVar21 + uVar11 * 0xc + 0xc) = iVar13 + 0x8000003f08;
            puVar21[1] = uVar11 + 1;
            _printk(0x800060d);
            iVar9 = qcom_scm_assign_dump_table_region(1,iVar2,uVar12);
            if (iVar9 != 0) {
                uStack_a8 = uVar12;
                iVar22 = of_find_compatible_node(0,0,"qcom,msm-imem-mem_dump_table");
                if (iVar22 == 0) {
                    uVar20 = 0xffffffed;
                    uVar19 = 0x8000462;
                }
                else {
                    iVar22 = of_iomap(iVar22,0);
                    if (iVar22 != 0) {
                        __memcpy_toio(iVar22,reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt,8);
                        __memcpy_toio(iVar22 + 0x724,&uStack_a8,8);
                        DataSynchronizationBarrier(3,3,0);
                        _printk(0x800085d);
                        iounmap(iVar22);
                        goto code_r0x0800179c;
                    }
                    uVar20 = 0xfffffff4;
                    uVar19 = 0x80006a7;
                }
                _printk(uVar19);
                qtee_shmbridge_deregister(uStack_d0);
                goto code_r0x08001604;
            }
code_r0x0800179c:
            puVar14 = of_get_next_available_child(uVar19,0);
            if (puVar14 == NULL) {
                uVar20 = 0;
                uStack_dc = 0;
            }
            else {
                iVar13 = iVar13 + 0x8000007e10;
                puVar21 = puVar15 + 0x1f84;
                uStack_dc = 0;
                do {
                    uVar11 = of_property_read_variable_u32_array(puVar14,"qcom,dump-size",&uStack_b0 + 4,1,0);
                    if (uVar11 < 0) {
                        uVar20 = uVar11;
                    }
                    else {
                        uVar11 = of_property_read_variable_u32_array(puVar14,"qcom,dump-id",&uStack_b0,1,0);
                        if (uVar11 < 0) {
                            uVar20 = uVar11;
                            _dev_err(iVar1,"Unable to find id for %s\n",*puVar14);
                        }
                        else {
                            uVar7 = uStack_b0;
                            *(puVar21 + 10) = iVar13 + 0x40;
                            *(puVar21 + 0xc) = uStack_b0 >> 0x20;
                            strscpy(puVar21 + 2,*puVar14,0x20);
                            iVar22 = CONCAT44(*0x8000004,_segment.ehdr);
                            if (iVar22 == 0) {
                                _printk(0x8000640);
                            }
                            else {
                                iVar18 = -0x3f00;
                                do {
                                    if (*(iVar22 + iVar18 + 0x3f08) == 0) {
                                        iVar18 = *(iVar22 + iVar18 + 0x3f30);
                                        if (iVar18 != 0) {
                                            uVar20 = iVar22 + (iVar18 - CONCAT44(*0x8000004,_segment.ehdr));
                                            if (0xfffffffffffff000 < uVar20) goto code_r0x08001938;
                                            if (uVar20 != 0) {
                                                uVar11 = *(uVar20 + 4);
                                                if (uVar11 < 0x150) {
                                                    iVar22 = uVar20 + uVar11 * 0x30;
                                                    *(uVar20 + 4) = uVar11 + 1;
                                                    uVar20 = 0;
                                                    *(iVar22 + 8) = uVar7;
                                                    *(iVar22 + 0x2c) = 0;
                                                    *(iVar22 + 0x30) = iVar13;
                                                    goto code_r0x0800193c;
                                                }
                                            }
                                            uVar20 = 0xffffffea;
                                            goto code_r0x08001a18;
                                        }
                                        break;
                                    }
                                    iVar18 = iVar18 + 0x30;
                                } while (iVar18 != 0);
                                _printk(0x80005c1,0);
                            }
                            uVar20 = 0xffffffffffffffea;
code_r0x08001938:
                            if (uVar20 != 0) {
code_r0x08001a18:
                                _dev_err(iVar1,"Data dump setup failed, id = %d\n",uStack_b0 & 0xffffffff);
                            }
code_r0x0800193c:
                            uVar11 = uStack_b0;
                            if ((uStack_b0 == 0xef) || ((uStack_b0 & 0xfffffff8) == 0x1f0)) {
                                iVar22 = *(arg1 + 0xa8);
                                uVar7 = uStack_b0._4_4_;
                                if (iVar22 == 0) {
                                    iVar22 = devm_kmalloc(iVar1,0x78,0xdc0);
                                    if (iVar22 != 0) {
                                        __mutex_init(iVar22,"&cpudata->mutex",obj.cpuss_dump_init.__key);
                                        *(arg1 + 0xa8) = iVar22;
                                        goto code_r0x08001994;
                                    }
                                }
                                else {
code_r0x08001994:
                                    if (uVar11 == 0xef) {
                                        puVar16 = devm_kmalloc(iVar1,0x20,0xdc0);
                                        *(iVar22 + 0x30) = puVar16;
                                        if (puVar16 != NULL) {
                                            uVar17 = 1;
                                            *puVar16 = puVar21 + 0x10;
                                            iVar22 = *(iVar22 + 0x30);
code_r0x080017c8:
                                            _segment.ehdr = _segment.ehdr | uVar17;
                                            *(iVar22 + 8) = uVar7;
                                        }
                                    }
                                    else {
                                        uVar11 = uVar11 - 0x1f0;
                                        puVar16 = devm_kmalloc(iVar1,0x18,0xdc0);
                                        if (7 < uVar11) goto code_r0x08001d48;
                                        *(iVar22 + 0x38 + uVar11 * 8) = puVar16;
                                        if (puVar16 != NULL) {
                                            *puVar16 = puVar21 + 0x10;
                                            uVar17 = 2;
                                            iVar22 = *(iVar22 + 0x38 + uVar11 * 8);
                                            goto code_r0x080017c8;
                                        }
                                    }
                                }
                                uStack_dc = _segment.ehdr;
                            }
                            iVar22 = (uStack_b0 >> 0x20) + 0x40;
                            puVar21 = puVar21 + iVar22;
                            iVar13 = iVar22 + iVar13;
                        }
                    }
                    puVar14 = of_get_next_available_child(uVar19,puVar14);
                } while (puVar14 != NULL);
            }
            puStack_80 = puVar15;
            iStack_78 = iVar2;
            uStack_70 = uVar12;
            strscpy(&uStack_98,"MEMDUMP",0xd);
            iVar9 = msm_minidump_add_region(&uStack_98);
            if (iVar9 < 0) {
                _dev_err(iVar1,"Mini dump entry failed id = %d\n",uStack_b0 & 0xffffffff);
            }
            if ((uStack_dc & 1) != 0) {
                iVar9 = device_create_file(iVar1,obj.dev_attr_core_reg_num);
                if (iVar9 == 0) {
                    iVar9 = device_create_file(iVar1,obj.dev_attr_register_config);
                    if (iVar9 == 0) {
                        iVar9 = device_create_file(iVar1,obj.dev_attr_register_reset);
                        if (iVar9 == 0) {
                            iVar9 = device_create_file(iVar1,obj.dev_attr_format_version);
                            if (iVar9 == 0) goto code_r0x08001c08;
                            bVar3 = false;
                            bVar4 = false;
                            bVar5 = false;
                            bVar6 = true;
                            iVar13 = 3;
                        }
                        else {
                            bVar3 = false;
                            bVar4 = false;
                            bVar6 = false;
                            bVar5 = true;
                            iVar13 = 2;
                        }
                    }
                    else {
                        bVar3 = false;
                        bVar5 = false;
                        bVar6 = false;
                        bVar4 = true;
                        iVar13 = 1;
                    }
                }
                else {
                    bVar4 = false;
                    bVar5 = false;
                    bVar6 = false;
                    iVar13 = 0;
                    bVar3 = true;
                }
                _dev_err(iVar1,"Couldn\'t create sysfs attribute: %s\n",**(obj.register_dump_attrs + iVar13 * 8));
                if ((((!bVar3) && (device_remove_file(iVar1,obj.dev_attr_core_reg_num), !bVar4)) &&
                    (device_remove_file(iVar1,obj.dev_attr_register_config), !bVar5)) &&
                   (device_remove_file(iVar1,obj.dev_attr_register_reset), !bVar6)) {
                    device_remove_file(iVar1,obj.dev_attr_format_version);
                }
                _dev_err(iVar1,"Fail to create files for cpuss register dump\n");
            }
code_r0x08001c08:
            if ((uStack_dc >> 1 & 1) != 0) {
                iVar9 = device_create_file(iVar1,obj.dev_attr_spr_config);
                if (iVar9 == 0) {
                    iVar9 = device_create_file(iVar1,obj.dev_attr_sprs_register_reset);
                    if (iVar9 == 0) {
                        iVar9 = device_create_file(iVar1,obj.dev_attr_sprs_format_version);
                        if (iVar9 == 0) goto joined_r0x08001c48;
                        bVar3 = false;
                        bVar4 = false;
                        bVar5 = true;
                        iVar13 = 2;
                    }
                    else {
                        bVar3 = false;
                        bVar5 = false;
                        bVar4 = true;
                        iVar13 = 1;
                    }
                }
                else {
                    bVar4 = false;
                    bVar5 = false;
                    iVar13 = 0;
                    bVar3 = true;
                }
                _dev_err(iVar1,"Couldn\'t create sysfs attribute: %s\n",**(obj.spr_dump_attrs + iVar13 * 8));
                if (((!bVar3) && (device_remove_file(iVar1,obj.dev_attr_spr_config), !bVar4)) &&
                   (device_remove_file(iVar1,obj.dev_attr_sprs_register_reset), !bVar5)) {
                    device_remove_file(iVar1,obj.dev_attr_sprs_format_version);
                }
                _dev_err(iVar1,"Fail to create files for spr dump\n");
            }
joined_r0x08001c48:
            if ((uStack_dc >> 1 & 1) != 0) {
                sym.reset_sprs_dump_table(iVar1);
            }
            goto code_r0x08001604;
        }
    }
    else {
        _dev_err(iVar1,"Failed to initialize reserved mem, ret %d\n",iVar9);
    }
    uVar20 = 0xfffffff4;
code_r0x08001604:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_68) {
        return uVar20 & 0xffffffff;
    }
    __stack_chk_fail();
code_r0x08001d48:
    //WARNING: Does not return
    pcVar8 = SoftwareBreakpoint(0x5512,0x8001d4c);
    (*pcVar8)();
}


// ===== sym.reset_sprs_dump_table @ 0x08001d4c (size 752) =====

void sym.reset_sprs_dump_table(int64_t arg1)

{
    uint *puVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (iVar2 != 0) {
        mutex_lock(iVar2);
        if (*(iVar2 + 0x38) != 0) {
            *(*(iVar2 + 0x38) + 0xc) = 0;
            *(*(iVar2 + 0x38) + 0x10) = 0x18;
            memset(**(iVar2 + 0x38),0xde,*(*(iVar2 + 0x38) + 1));
            puVar1 = **(iVar2 + 0x38);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x38) + 0x10) = 0;
        }
        if (*(iVar2 + 0x40) != 0) {
            *(*(iVar2 + 0x40) + 0xc) = 0;
            *(*(iVar2 + 0x40) + 0x10) = 0x18;
            memset(**(iVar2 + 0x40),0xde,*(*(iVar2 + 0x40) + 1));
            puVar1 = **(iVar2 + 0x40);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x40) + 0x10) = 0;
        }
        if (*(iVar2 + 0x48) != 0) {
            *(*(iVar2 + 0x48) + 0xc) = 0;
            *(*(iVar2 + 0x48) + 0x10) = 0x18;
            memset(**(iVar2 + 0x48),0xde,*(*(iVar2 + 0x48) + 1));
            puVar1 = **(iVar2 + 0x48);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x48) + 0x10) = 0;
        }
        if (*(iVar2 + 0x50) != 0) {
            *(*(iVar2 + 0x50) + 0xc) = 0;
            *(*(iVar2 + 0x50) + 0x10) = 0x18;
            memset(**(iVar2 + 0x50),0xde,*(*(iVar2 + 0x50) + 1));
            puVar1 = **(iVar2 + 0x50);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x50) + 0x10) = 0;
        }
        if (*(iVar2 + 0x58) != 0) {
            *(*(iVar2 + 0x58) + 0xc) = 0;
            *(*(iVar2 + 0x58) + 0x10) = 0x18;
            memset(**(iVar2 + 0x58),0xde,*(*(iVar2 + 0x58) + 1));
            puVar1 = **(iVar2 + 0x58);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x58) + 0x10) = 0;
        }
        if (*(iVar2 + 0x60) != 0) {
            *(*(iVar2 + 0x60) + 0xc) = 0;
            *(*(iVar2 + 0x60) + 0x10) = 0x18;
            memset(**(iVar2 + 0x60),0xde,*(*(iVar2 + 0x60) + 1));
            puVar1 = **(iVar2 + 0x60);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x60) + 0x10) = 0;
        }
        if (*(iVar2 + 0x68) != 0) {
            *(*(iVar2 + 0x68) + 0xc) = 0;
            *(*(iVar2 + 0x68) + 0x10) = 0x18;
            memset(**(iVar2 + 0x68),0xde,*(*(iVar2 + 0x68) + 1));
            puVar1 = **(iVar2 + 0x68);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x68) + 0x10) = 0;
        }
        if (*(iVar2 + 0x70) != 0) {
            *(*(iVar2 + 0x70) + 0xc) = 0;
            *(*(iVar2 + 0x70) + 0x10) = 0x18;
            memset(**(iVar2 + 0x70),0xde,*(*(iVar2 + 0x70) + 1));
            puVar1 = **(iVar2 + 0x70);
            *puVar1 = 0xc0ffee;
            *(puVar1 + 1) = 0x500000001;
            puVar1[3] = 0x18;
            *(**(iVar2 + 0x70) + 0x10) = 0;
        }
        mutex_unlock(iVar2);
    }
    return;
}


// ===== sym.core_reg_num_show @ 0x0800203c (size 112) =====

int64_t sym.core_reg_num_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (iVar2 == 0) {
        iVar2 = -0xe;
    }
    else {
        mutex_lock(iVar2);
        iVar1 = scnprintf(arg2,0x1000,0x80003d3,*(*(iVar2 + 0x30) + 0xc));
        mutex_unlock(iVar2);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.core_reg_num_store @ 0x080020ac (size 452) =====

int64_t sym.core_reg_num_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    uint64_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint32_t *arg3_00;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint32_t uVar13;
    uint32_t *puVar14;
    int iVar15;
    ulong *puVar16;
    int64_t *piVar17;
    int64_t iVar18;
    int iVar19;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    int64_t iVar20;
    uint32_t *puVar21;
    uint64_t unaff_x22;
    uint32_t uVar22;
    char *unaff_x23;
    uint64_t unaff_x24;
    int iVar23;
    int64_t iVar24;
    ulong unaff_x30;
    uchar auVar25 [16];
    uint8_t auStack_158 [4];
    uint32_t uStack_154;
    uint32_t uStack_150;
    uint32_t uStack_14c;
    int64_t iStack_148;
    uchar **ppuStack_140;
    code *pcStack_138;
    uint64_t uStack_130;
    char *pcStack_128;
    uint64_t uStack_120;
    uint32_t *puStack_118;
    int64_t iStack_110;
    int64_t iStack_108;
    int64_t iStack_100;
    ulong uStack_f8;
    ulong uStack_f0;
    ulong uStack_e8;
    ulong uStack_e0;
    ulong uStack_d8;
    ulong uStack_d0;
    ulong uStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    uchar *puStack_b0;
    code *pcStack_a8;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar20 = sp_el0;
    iStack_48 = *(iVar20 + 0x5e0);
    puVar12 = &uStack_4c;
    puVar21 = *(arg1 + 0x98);
    uStack_4c = 0;
    uVar11 = arg3;
    iVar3 = kstrtouint(arg2,0x10);
    if (iVar3 == 0) {
        mutex_lock(puVar21);
        uVar13 = uStack_4c;
        iVar20 = *(puVar21 + 0xc);
        if ((*(iVar20 + 0x10) == 0) && (*(iVar20 + 0x18) == 0)) {
            unaff_x22 = uStack_4c;
            uVar10 = *(iVar20 + 0xc);
            unaff_x23 = uVar10;
            mutex_unlock(puVar21);
            uVar22 = uStack_4c;
            if (uVar13 != uVar10) {
                puVar21 = *(arg1 + 0x98);
                unaff_x24 = uStack_4c;
                uVar10 = uStack_4c * 2;
                unaff_x22 = uVar10;
                uVar13 = uVar10 + 6;
                unaff_x23 = uVar13;
                mutex_lock(puVar21);
                if (uVar13 <= (uVar13 & 0x3ffffffe)) {
                    uVar13 = uVar13 * 4;
                    unaff_x23 = uVar13;
                    if (uVar13 < *(*(puVar21 + 0xc) + 8)) {
                        *(*(puVar21 + 0xc) + 0xc) = uVar22;
                        *(*(puVar21 + 0xc) + 0x10) = 0;
                        *(*(puVar21 + 0xc) + 0x14) = 4;
                        *(*(puVar21 + 0xc) + 0x18) = 0;
                        *(*(puVar21 + 0xc) + 0x1c) = uVar13;
                        memset(**(puVar21 + 0xc),0xde,*(*(puVar21 + 0xc) + 1));
                        puVar16 = **(puVar21 + 0xc);
                        *puVar16 = 0x200c0ffee;
                        *(puVar16 + 1) = uVar10 + 5;
                        *(puVar16 + 0xc) = uVar13;
                        puVar12 = uVar10 + 2 << 2;
                        memset(**(puVar21 + 0xc) + 0x10,0);
                        mutex_unlock(puVar21);
                        goto code_r0x08002214;
                    }
                }
                mutex_unlock(puVar21);
                _dev_err(arg1,"Couldn\'t set core_reg_num, no enough memory\n");
                arg3 = -0xc;
            }
        }
        else {
            _dev_err(arg1,"Couldn\'t set core_reg_num, register available in list\n");
            mutex_unlock(puVar21);
            arg3 = -1;
        }
    }
    else {
        arg3 = -0x16;
    }
code_r0x08002214:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar7 = __stack_chk_fail();
    iVar3 = uVar11;
    *extraout_x18 = sym.register_config_show;
    pcStack_a8 = sym.register_config_show;
    iVar20 = sp_el0;
    iStack_b8 = *(iVar20 + 0x5e0);
    iVar20 = *(iVar7 + 0x98);
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    *puVar12 = '\0';
    puStack_b0 = &stack0xffffffffffffffc0;
    if (iVar20 == 0) {
        iVar7 = -0xe;
        pcVar9 = puVar12;
    }
    else {
        mutex_lock(iVar20);
        iVar24 = **(iVar20 + 0x30);
        uVar8 = scnprintf(&uStack_f8,0x40,"per-core registers:\n");
        unaff_x22 = uVar8 & 0xffffffff;
        pcVar9 = 0x1000;
        strlcat(puVar12,&uStack_f8,0x1000);
        iVar3 = uVar11;
        iVar19 = *(iVar24 + 8);
        iVar5 = iVar19 + (*(*(iVar20 + 0x30) + 0x18) >> 2) + 1;
        arg3 = iVar7;
        if (4 < iVar5) {
            iVar23 = 4;
            unaff_x23 = "system registers:\n";
            iStack_100 = iVar7;
            do {
                uVar8 = unaff_x22;
                if (iVar23 == iVar19) {
                    pcVar9 = unaff_x23;
                    iVar4 = scnprintf(&uStack_f8,0x40,"system registers:\n");
                    iVar3 = uVar11;
                    uVar13 = iVar4 + unaff_x22;
                    uVar8 = uVar13;
                    uVar2 = unaff_x22;
                    unaff_x24 = uVar8;
                    if (uVar13 < 0x1001) {
                        pcVar9 = 0x1000;
                        strlcat(puVar12,&uStack_f8,0x1000);
                        goto code_r0x0800237c;
                    }
code_r0x08002464:
                    unaff_x22 = uVar2;
                    _dev_err(iStack_100,"Couldn\'t write complete config\n");
                    arg3 = 0x8000240;
                    break;
                }
code_r0x0800237c:
                puVar21 = iVar24 + iVar23 * 4;
                uVar13 = *puVar21;
                if (uVar13 == 0) {
                    iVar23 = iVar23 + 1;
                    unaff_x22 = uVar8;
                }
                else {
                    uVar11 = uVar13 & 0xfffffffc;
                    switch(uVar13 & 3) {
                    case 0:
                        uVar13 = puVar21[1];
                        pcVar9 = "0x%x, 0x%x, r\n";
                        break;
                    case 1:
                        pcVar9 = "0x%x, 0x%x, r\n";
                        iVar4 = scnprintf(&uStack_f8,0x40,"0x%x, 0x%x, r\n",uVar11,4);
                        iVar15 = 1;
                        goto code_r0x08002434;
                    case 2:
                        uVar13 = puVar21[1];
                        pcVar9 = "0x%x, 0x%x, w\n";
                        break;
                    case 3:
                        uVar13 = puVar21[1] & 0xffffff;
                        pcVar9 = "0x%x, 0x%x, d\n";
                        if (puVar21[1] >> 0x18 != 1) {
                            pcVar9 = "0x%x, 0x%x, R\n";
                        }
                    }
                    iVar4 = scnprintf(&uStack_f8,0x40,pcVar9,uVar11,uVar13);
                    iVar15 = 2;
code_r0x08002434:
                    iVar3 = uVar11;
                    uVar13 = iVar4 + uVar8;
                    unaff_x22 = uVar13;
                    uVar2 = uVar8;
                    unaff_x24 = unaff_x22;
                    if (0x1000 < uVar13) goto code_r0x08002464;
                    pcVar9 = 0x1000;
                    iVar23 = iVar15 + iVar23;
                    strlcat(puVar12,&uStack_f8,0x1000);
                }
                iVar3 = uVar11;
                arg3 = 0x8000240;
            } while (iVar23 < iVar5);
        }
        mutex_unlock(iVar20);
        iVar7 = unaff_x22;
        puVar21 = puVar12;
    }
    iVar24 = sp_el0;
    if (*(iVar24 + 0x5e0) == iStack_b8) {
        return iVar7;
    }
    iVar24 = __stack_chk_fail(iVar7);
    *extraout_x18_00 = sym.register_config_store;
    pcStack_138 = sym.register_config_store;
    iVar7 = sp_el0;
    iStack_148 = *(iVar7 + 0x5e0);
    arg3_00 = &uStack_14c;
    puVar12 = &uStack_150;
    iVar7 = *(iVar24 + 0x98);
    uVar13 = auStack_158;
    puVar14 = &uStack_154;
    uStack_14c = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    auStack_158[0] = 0;
    ppuStack_140 = &puStack_b0;
    uStack_130 = unaff_x24;
    pcStack_128 = unaff_x23;
    uStack_120 = unaff_x22;
    puStack_118 = puVar21;
    iStack_110 = iVar20;
    iStack_108 = arg3;
    iVar5 = sscanf(pcVar9,"%x %x %c %u");
    uVar10 = puVar12;
    if (1 < iVar5) {
        if (iVar5 == 2) {
            auStack_158[0] = 0x72;
        }
        if (uStack_154 < 2) {
            if ((uStack_14c & 3) == 0) {
                if ((auStack_158[0] & 0xdf) != 0x52) {
                    uVar22 = 4;
code_r0x08002598:
                    uVar6 = mutex_lock(iVar7);
                    uVar10 = puVar12;
                    piVar17 = *(iVar7 + 0x30);
                    iVar20 = *piVar17;
                    if (uStack_154 == 0) {
                        puVar12 = auStack_158[0];
                        uVar6 = 8;
                        if (uVar22 != 4 || auStack_158[0] != 0x72) {
                            uVar6 = uVar22 + 8;
                        }
                        if (((uVar6 < uVar22) || (uVar6 = uVar6 + *(piVar17 + 0x1c), uVar6 < *(piVar17 + 0x1c))) ||
                           (*(piVar17 + 1) < uVar6)) {
                            pcVar9 = "Couldn\'t add system reg config, no enough memory\n";
                            goto code_r0x08002754;
                        }
                        puVar14 = uStack_150;
                        uVar22 = *(iVar20 + 8) + (*(piVar17 + 3) >> 2);
                        arg3_00 = uVar22;
                        uVar13 = uStack_14c;
                        iVar5 = sym.config_cpuss_register(iVar24,iVar20,arg3_00,puVar12);
                        uVar10 = puVar12;
                        if (iVar5 == 0) {
                            iVar5 = 4;
                            if (auStack_158[0] != 0x72 || uStack_150 != 4) {
                                iVar5 = 8;
                            }
                            iVar19 = 1;
                            if (auStack_158[0] != 0x72 || uStack_150 != 4) {
                                iVar19 = 2;
                            }
                            *(*(iVar7 + 0x30) + 0x18) = iVar5 + *(*(iVar7 + 0x30) + 0x18);
                            uVar22 = iVar19 + uVar22;
                            *(*(iVar7 + 0x30) + 0x1c) = uVar6;
                            *(iVar20 + uVar22 * 4) = 0;
                            *(iVar20 + 0xc) = uVar22 * 4 + 4;
                            iVar5 = iVar3;
                        }
                    }
                    else if (piVar17[2] == *(piVar17 + 0xc)) {
                        _dev_err(iVar24,"Couldn\'t add per-core config, out of range\n");
                        iVar5 = -0x16;
                    }
                    else {
                        *arg3_00 = uVar6;
                        uVar6 = __sw_hweight64(_printk);
                        uVar10 = 0;
                        if (uVar6 != 0) {
                            uVar10 = (uVar22 * uVar6) / uVar6;
                        }
                        if (uVar22 <= uVar10) {
                            iVar18 = *(iVar7 + 0x30);
                            uVar22 = uVar22 * uVar6 + *(iVar18 + 0x1c);
                            if ((*(iVar18 + 0x1c) <= uVar22) && (uVar22 <= *(iVar18 + 8))) {
                                arg3_00 = *(iVar18 + 0x14);
                                puVar14 = uStack_150;
                                uVar11 = auStack_158[0];
                                uVar13 = uStack_14c;
                                iVar5 = sym.config_cpuss_register(iVar24,iVar20,arg3_00,uVar11);
                                uVar10 = uVar11;
                                if (iVar5 == 0) {
                                    iVar5 = 1;
                                    if (uStack_150 != 4 || auStack_158[0] != 0x72) {
                                        iVar5 = 2;
                                    }
                                    *(*(iVar7 + 0x30) + 0x14) = iVar5 + *(*(iVar7 + 0x30) + 0x14);
                                    *(*(iVar7 + 0x30) + 0x10) = *(*(iVar7 + 0x30) + 0x10) + 1;
                                    *(*(iVar7 + 0x30) + 0x1c) = uVar22;
                                    iVar5 = iVar3;
                                }
                                goto code_r0x08002778;
                            }
                        }
                        pcVar9 = "Couldn\'t add per-core reg config, no enough memory\n";
code_r0x08002754:
                        uVar10 = puVar12;
                        _dev_err(iVar24,pcVar9);
                        iVar5 = -0xc;
                    }
code_r0x08002778:
                    mutex_unlock(iVar7);
                    iVar20 = iVar5;
                    goto code_r0x08002784;
                }
                if (uStack_150 == 0) {
                    pcVar9 = "Invalid length of 0\n";
                }
                else {
                    if ((auStack_158[0] != 0x72) || ((uStack_150 & 3) == 0)) {
                        uVar22 = uStack_150 << 2;
                        if (auStack_158[0] != 0x52) {
                            uVar22 = uStack_150;
                        }
                        goto code_r0x08002598;
                    }
                    pcVar9 = "Invalid length, must be 4 byte aligned\n";
                }
            }
            else {
                pcVar9 = "Invalid address, must be 4 byte aligned\n";
            }
            _dev_err(iVar24,pcVar9);
            iVar20 = -0x16;
            goto code_r0x08002784;
        }
    }
    iVar20 = -0x16;
code_r0x08002784:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_148) {
        return iVar20;
    }
    auVar25 = __stack_chk_fail(iVar20);
    iVar20 = auVar25._8_8_;
    *extraout_x18_01 = sym.config_cpuss_register;
    uVar22 = puVar14;
    switch(uVar10 & 0xff) {
    case 0x52:
        if ((puVar14 & 0xff000000) == 0) {
            puVar12 = iVar20 + (arg3_00 & 0xffffffff) * 4;
            *puVar12 = uVar13 | 3;
            puVar12[1] = uVar22 | 0x2000000;
            return 0;
        }
        pcVar9 = "repeat read time exceeded the limit\n";
        break;
    default:
        pcVar9 = "Don\'t support this command\n";
        break;
    case 100:
        if (uVar22 >> 0x18 == 0) {
            puVar1 = iVar20 + (arg3_00 & 0xffffffff) * 4;
            *puVar1 = 3;
            puVar1[1] = uVar22 | 0x1000000;
            return 0;
        }
        pcVar9 = "sleep time exceeded the limit\n";
        break;
    case 0x72:
        if (4 < uVar22) {
            puVar12 = iVar20 + (arg3_00 & 0xffffffff) * 4;
            *puVar12 = uVar13;
            puVar12[1] = uVar22;
            return 0;
        }
        *(iVar20 + (arg3_00 & 0xffffffff) * 4) = uVar13 | 1;
        return 0;
    case 0x77:
        puVar12 = iVar20 + (arg3_00 & 0xffffffff) * 4;
        *puVar12 = uVar13 | 2;
        puVar12[1] = uVar22;
        return 0;
    }
    _dev_err(auVar25._0_8_,pcVar9);
    return 0xffffffea;
}


// ===== sym.register_config_show @ 0x08002270 (size 592) =====

int64_t sym.register_config_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    uint *puVar1;
    uint64_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t *arg3;
    int iVar9;
    uint32_t uVar10;
    uint64_t in_x3;
    uint32_t uVar11;
    uint32_t *puVar12;
    int iVar13;
    int64_t *piVar14;
    int64_t iVar15;
    int iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t unaff_x19;
    int64_t iVar17;
    int64_t unaff_x21;
    uint64_t unaff_x22;
    uint32_t uVar18;
    char *unaff_x23;
    uint64_t unaff_x24;
    int iVar19;
    int64_t iVar20;
    ulong unaff_x30;
    uchar auVar21 [16];
    uint8_t auStack_108 [4];
    uint32_t uStack_104;
    uint32_t uStack_100;
    uint32_t uStack_fc;
    int64_t iStack_f8;
    uchar *puStack_f0;
    code *pcStack_e8;
    uint64_t uStack_e0;
    char *pcStack_d8;
    uint64_t uStack_d0;
    int64_t iStack_c8;
    int64_t iStack_c0;
    int64_t iStack_b8;
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
    
    iVar9 = in_x3;
    *in_x18 = unaff_x30;
    iVar17 = sp_el0;
    iStack_68 = *(iVar17 + 0x5e0);
    iVar17 = *(arg1 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *arg2 = 0;
    if (iVar17 == 0) {
        iVar20 = -0xe;
        pcVar8 = arg2;
    }
    else {
        mutex_lock(iVar17);
        iVar20 = **(iVar17 + 0x30);
        uVar6 = scnprintf(&uStack_a8,0x40,"per-core registers:\n");
        unaff_x22 = uVar6 & 0xffffffff;
        pcVar8 = 0x1000;
        strlcat(arg2,&uStack_a8,0x1000);
        iVar9 = in_x3;
        iVar16 = *(iVar20 + 8);
        iVar4 = iVar16 + (*(*(iVar17 + 0x30) + 0x18) >> 2) + 1;
        unaff_x19 = arg1;
        if (4 < iVar4) {
            iVar19 = 4;
            unaff_x23 = "system registers:\n";
            iStack_b0 = arg1;
            do {
                uVar6 = unaff_x22;
                if (iVar19 == iVar16) {
                    pcVar8 = unaff_x23;
                    iVar3 = scnprintf(&uStack_a8,0x40,"system registers:\n");
                    iVar9 = in_x3;
                    uVar11 = iVar3 + unaff_x22;
                    uVar6 = uVar11;
                    uVar2 = unaff_x22;
                    unaff_x24 = uVar6;
                    if (uVar11 < 0x1001) {
                        pcVar8 = 0x1000;
                        strlcat(arg2,&uStack_a8,0x1000);
                        goto code_r0x0800237c;
                    }
code_r0x08002464:
                    unaff_x22 = uVar2;
                    _dev_err(iStack_b0,"Couldn\'t write complete config\n");
                    unaff_x19 = 0x8000240;
                    break;
                }
code_r0x0800237c:
                puVar12 = iVar20 + iVar19 * 4;
                uVar11 = *puVar12;
                if (uVar11 == 0) {
                    iVar19 = iVar19 + 1;
                    unaff_x22 = uVar6;
                }
                else {
                    in_x3 = uVar11 & 0xfffffffc;
                    switch(uVar11 & 3) {
                    case 0:
                        uVar11 = puVar12[1];
                        pcVar8 = "0x%x, 0x%x, r\n";
                        break;
                    case 1:
                        pcVar8 = "0x%x, 0x%x, r\n";
                        iVar3 = scnprintf(&uStack_a8,0x40,"0x%x, 0x%x, r\n",in_x3,4);
                        iVar13 = 1;
                        goto code_r0x08002434;
                    case 2:
                        uVar11 = puVar12[1];
                        pcVar8 = "0x%x, 0x%x, w\n";
                        break;
                    case 3:
                        uVar11 = puVar12[1] & 0xffffff;
                        pcVar8 = "0x%x, 0x%x, d\n";
                        if (puVar12[1] >> 0x18 != 1) {
                            pcVar8 = "0x%x, 0x%x, R\n";
                        }
                    }
                    iVar3 = scnprintf(&uStack_a8,0x40,pcVar8,in_x3,uVar11);
                    iVar13 = 2;
code_r0x08002434:
                    iVar9 = in_x3;
                    uVar11 = iVar3 + uVar6;
                    unaff_x22 = uVar11;
                    uVar2 = uVar6;
                    unaff_x24 = unaff_x22;
                    if (0x1000 < uVar11) goto code_r0x08002464;
                    pcVar8 = 0x1000;
                    iVar19 = iVar13 + iVar19;
                    strlcat(arg2,&uStack_a8,0x1000);
                }
                iVar9 = in_x3;
                unaff_x19 = 0x8000240;
            } while (iVar19 < iVar4);
        }
        noname_1 = mutex_unlock(iVar17);
        iVar20 = unaff_x22;
        unaff_x21 = arg2;
    }
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) == iStack_68) {
        return iVar20;
    }
    iVar7 = __stack_chk_fail(noname_1,iVar20);
    *extraout_x18 = sym.register_config_store;
    pcStack_e8 = sym.register_config_store;
    iVar20 = sp_el0;
    iStack_f8 = *(iVar20 + 0x5e0);
    arg3 = &uStack_fc;
    uVar6 = 0;
    iVar20 = *(iVar7 + 0x98);
    uVar11 = auStack_108;
    puVar12 = &uStack_104;
    uStack_fc = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    auStack_108[0] = 0;
    puStack_f0 = &stack0xffffffffffffffa0;
    uStack_e0 = unaff_x24;
    pcStack_d8 = unaff_x23;
    uStack_d0 = unaff_x22;
    iStack_c8 = unaff_x21;
    iStack_c0 = iVar17;
    iStack_b8 = unaff_x19;
    iVar4 = sscanf(pcVar8,"%x %x %c %u");
    uVar10 = uVar6;
    if (1 < iVar4) {
        if (iVar4 == 2) {
            auStack_108[0] = 0x72;
        }
        if (uStack_104 < 2) {
            if ((uStack_fc & 3) == 0) {
                if ((auStack_108[0] & 0xdf) != 0x52) {
                    uVar18 = 4;
code_r0x08002598:
                    uVar5 = mutex_lock(iVar20);
                    uVar10 = uVar6;
                    piVar14 = *(iVar20 + 0x30);
                    iVar17 = *piVar14;
                    if (uStack_104 == 0) {
                        uVar6 = auStack_108[0];
                        uVar5 = 8;
                        if (uVar18 != 4 || auStack_108[0] != 0x72) {
                            uVar5 = uVar18 + 8;
                        }
                        if (((uVar5 < uVar18) || (uVar5 = uVar5 + *(piVar14 + 0x1c), uVar5 < *(piVar14 + 0x1c))) ||
                           (*(piVar14 + 1) < uVar5)) {
                            pcVar8 = "Couldn\'t add system reg config, no enough memory\n";
                            goto code_r0x08002754;
                        }
                        puVar12 = uStack_100;
                        uVar18 = *(iVar17 + 8) + (*(piVar14 + 3) >> 2);
                        arg3 = uVar18;
                        uVar11 = uStack_fc;
                        iVar4 = sym.config_cpuss_register(iVar7,iVar17,arg3,uVar6);
                        uVar10 = uVar6;
                        if (iVar4 == 0) {
                            iVar4 = 4;
                            if (auStack_108[0] != 0x72 || uStack_100 != 4) {
                                iVar4 = 8;
                            }
                            iVar16 = 1;
                            if (auStack_108[0] != 0x72 || uStack_100 != 4) {
                                iVar16 = 2;
                            }
                            *(*(iVar20 + 0x30) + 0x18) = iVar4 + *(*(iVar20 + 0x30) + 0x18);
                            uVar18 = iVar16 + uVar18;
                            *(*(iVar20 + 0x30) + 0x1c) = uVar5;
                            *(iVar17 + uVar18 * 4) = 0;
                            *(iVar17 + 0xc) = uVar18 * 4 + 4;
                            iVar4 = iVar9;
                        }
                    }
                    else if (piVar14[2] == *(piVar14 + 0xc)) {
                        _dev_err(iVar7,"Couldn\'t add per-core config, out of range\n");
                        iVar4 = -0x16;
                    }
                    else {
                        *arg3 = uVar5;
                        uVar5 = __sw_hweight64(_printk);
                        uVar10 = 0;
                        if (uVar5 != 0) {
                            uVar10 = (uVar18 * uVar5) / uVar5;
                        }
                        if (uVar18 <= uVar10) {
                            iVar15 = *(iVar20 + 0x30);
                            uVar18 = uVar18 * uVar5 + *(iVar15 + 0x1c);
                            if ((*(iVar15 + 0x1c) <= uVar18) && (uVar18 <= *(iVar15 + 8))) {
                                arg3 = *(iVar15 + 0x14);
                                puVar12 = uStack_100;
                                uVar6 = auStack_108[0];
                                uVar11 = uStack_fc;
                                iVar4 = sym.config_cpuss_register(iVar7,iVar17,arg3,uVar6);
                                uVar10 = uVar6;
                                if (iVar4 == 0) {
                                    iVar4 = 1;
                                    if (uStack_100 != 4 || auStack_108[0] != 0x72) {
                                        iVar4 = 2;
                                    }
                                    *(*(iVar20 + 0x30) + 0x14) = iVar4 + *(*(iVar20 + 0x30) + 0x14);
                                    *(*(iVar20 + 0x30) + 0x10) = *(*(iVar20 + 0x30) + 0x10) + 1;
                                    *(*(iVar20 + 0x30) + 0x1c) = uVar18;
                                    iVar4 = iVar9;
                                }
                                goto code_r0x08002778;
                            }
                        }
                        pcVar8 = "Couldn\'t add per-core reg config, no enough memory\n";
code_r0x08002754:
                        uVar10 = uVar6;
                        _dev_err(iVar7,pcVar8);
                        iVar4 = -0xc;
                    }
code_r0x08002778:
                    mutex_unlock(iVar20);
                    iVar17 = iVar4;
                    goto code_r0x08002784;
                }
                if (uStack_100 == 0) {
                    pcVar8 = "Invalid length of 0\n";
                }
                else {
                    if ((auStack_108[0] != 0x72) || ((uStack_100 & 3) == 0)) {
                        uVar18 = uStack_100 << 2;
                        if (auStack_108[0] != 0x52) {
                            uVar18 = uStack_100;
                        }
                        goto code_r0x08002598;
                    }
                    pcVar8 = "Invalid length, must be 4 byte aligned\n";
                }
            }
            else {
                pcVar8 = "Invalid address, must be 4 byte aligned\n";
            }
            _dev_err(iVar7,pcVar8);
            iVar17 = -0x16;
            goto code_r0x08002784;
        }
    }
    iVar17 = -0x16;
code_r0x08002784:
    iVar20 = sp_el0;
    if (*(iVar20 + 0x5e0) == iStack_f8) {
        return iVar17;
    }
    auVar21 = __stack_chk_fail(iVar17);
    iVar17 = auVar21._8_8_;
    *extraout_x18_00 = sym.config_cpuss_register;
    uVar18 = puVar12;
    switch(uVar10 & 0xff) {
    case 0x52:
        if ((puVar12 & 0xff000000) == 0) {
            puVar12 = iVar17 + (arg3 & 0xffffffff) * 4;
            *puVar12 = uVar11 | 3;
            puVar12[1] = uVar18 | 0x2000000;
            return 0;
        }
        pcVar8 = "repeat read time exceeded the limit\n";
        break;
    default:
        pcVar8 = "Don\'t support this command\n";
        break;
    case 100:
        if (uVar18 >> 0x18 == 0) {
            puVar1 = iVar17 + (arg3 & 0xffffffff) * 4;
            *puVar1 = 3;
            puVar1[1] = uVar18 | 0x1000000;
            return 0;
        }
        pcVar8 = "sleep time exceeded the limit\n";
        break;
    case 0x72:
        if (4 < uVar18) {
            puVar12 = iVar17 + (arg3 & 0xffffffff) * 4;
            *puVar12 = uVar11;
            puVar12[1] = uVar18;
            return 0;
        }
        *(iVar17 + (arg3 & 0xffffffff) * 4) = uVar11 | 1;
        return 0;
    case 0x77:
        puVar12 = iVar17 + (arg3 & 0xffffffff) * 4;
        *puVar12 = uVar11 | 2;
        puVar12[1] = uVar18;
        return 0;
    }
    _dev_err(auVar21._0_8_,pcVar8);
    return 0xffffffea;
}


// ===== sym.register_config_store @ 0x080024c0 (size 800) =====

int64_t sym.register_config_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint32_t *arg3_00;
    uint32_t uVar5;
    uint64_t arg4;
    uint32_t *puVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    int64_t *piVar9;
    int64_t iVar10;
    int iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar12;
    int64_t iVar13;
    uint32_t uVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    uint8_t auStack_58 [4];
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar12 = sp_el0;
    iStack_48 = *(iVar12 + 0x5e0);
    arg3_00 = &uStack_4c;
    puVar6 = &uStack_50;
    iVar12 = *(arg1 + 0x98);
    uVar7 = auStack_58;
    puVar8 = &uStack_54;
    uStack_4c = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    auStack_58[0] = 0;
    iVar2 = sscanf(arg2,"%x %x %c %u");
    uVar5 = puVar6;
    if (1 < iVar2) {
        if (iVar2 == 2) {
            auStack_58[0] = 0x72;
        }
        if (uStack_54 < 2) {
            if ((uStack_4c & 3) == 0) {
                if ((auStack_58[0] & 0xdf) != 0x52) {
                    uVar14 = 4;
code_r0x08002598:
                    uVar3 = mutex_lock(iVar12);
                    uVar5 = puVar6;
                    piVar9 = *(iVar12 + 0x30);
                    iVar13 = *piVar9;
                    if (uStack_54 == 0) {
                        puVar6 = auStack_58[0];
                        uVar3 = 8;
                        if (uVar14 != 4 || auStack_58[0] != 0x72) {
                            uVar3 = uVar14 + 8;
                        }
                        if (((uVar3 < uVar14) || (uVar3 = uVar3 + *(piVar9 + 0x1c), uVar3 < *(piVar9 + 0x1c))) ||
                           (*(piVar9 + 1) < uVar3)) {
                            pcVar4 = "Couldn\'t add system reg config, no enough memory\n";
                            goto code_r0x08002754;
                        }
                        puVar8 = uStack_50;
                        uVar14 = *(iVar13 + 8) + (*(piVar9 + 3) >> 2);
                        arg3_00 = uVar14;
                        uVar7 = uStack_4c;
                        iVar2 = sym.config_cpuss_register(arg1,iVar13,arg3_00,puVar6);
                        uVar5 = puVar6;
                        if (iVar2 == 0) {
                            iVar2 = 4;
                            if (auStack_58[0] != 0x72 || uStack_50 != 4) {
                                iVar2 = 8;
                            }
                            iVar11 = 1;
                            if (auStack_58[0] != 0x72 || uStack_50 != 4) {
                                iVar11 = 2;
                            }
                            *(*(iVar12 + 0x30) + 0x18) = iVar2 + *(*(iVar12 + 0x30) + 0x18);
                            uVar14 = iVar11 + uVar14;
                            *(*(iVar12 + 0x30) + 0x1c) = uVar3;
                            *(iVar13 + uVar14 * 4) = 0;
                            *(iVar13 + 0xc) = uVar14 * 4 + 4;
code_r0x0800272c:
                            iVar2 = arg3;
                        }
                    }
                    else if (piVar9[2] == *(piVar9 + 0xc)) {
                        _dev_err(arg1,"Couldn\'t add per-core config, out of range\n");
                        iVar2 = -0x16;
                    }
                    else {
                        *arg3_00 = uVar3;
                        uVar3 = __sw_hweight64(_printk);
                        uVar5 = 0;
                        if (uVar3 != 0) {
                            uVar5 = (uVar14 * uVar3) / uVar3;
                        }
                        if (uVar14 <= uVar5) {
                            iVar10 = *(iVar12 + 0x30);
                            uVar14 = uVar14 * uVar3 + *(iVar10 + 0x1c);
                            if ((*(iVar10 + 0x1c) <= uVar14) && (uVar14 <= *(iVar10 + 8))) {
                                arg3_00 = *(iVar10 + 0x14);
                                puVar8 = uStack_50;
                                arg4 = auStack_58[0];
                                uVar7 = uStack_4c;
                                iVar2 = sym.config_cpuss_register(arg1,iVar13,arg3_00,arg4);
                                uVar5 = arg4;
                                if (iVar2 == 0) {
                                    iVar2 = 1;
                                    if (uStack_50 != 4 || auStack_58[0] != 0x72) {
                                        iVar2 = 2;
                                    }
                                    *(*(iVar12 + 0x30) + 0x14) = iVar2 + *(*(iVar12 + 0x30) + 0x14);
                                    *(*(iVar12 + 0x30) + 0x10) = *(*(iVar12 + 0x30) + 0x10) + 1;
                                    *(*(iVar12 + 0x30) + 0x1c) = uVar14;
                                    goto code_r0x0800272c;
                                }
                                goto code_r0x08002778;
                            }
                        }
                        pcVar4 = "Couldn\'t add per-core reg config, no enough memory\n";
code_r0x08002754:
                        uVar5 = puVar6;
                        _dev_err(arg1,pcVar4);
                        iVar2 = -0xc;
                    }
code_r0x08002778:
                    mutex_unlock(iVar12);
                    iVar12 = iVar2;
                    goto code_r0x08002784;
                }
                if (uStack_50 == 0) {
                    pcVar4 = "Invalid length of 0\n";
                }
                else {
                    if ((auStack_58[0] != 0x72) || ((uStack_50 & 3) == 0)) {
                        uVar14 = uStack_50 << 2;
                        if (auStack_58[0] != 0x52) {
                            uVar14 = uStack_50;
                        }
                        goto code_r0x08002598;
                    }
                    pcVar4 = "Invalid length, must be 4 byte aligned\n";
                }
            }
            else {
                pcVar4 = "Invalid address, must be 4 byte aligned\n";
            }
            _dev_err(arg1,pcVar4);
            iVar12 = -0x16;
            goto code_r0x08002784;
        }
    }
    iVar12 = -0x16;
code_r0x08002784:
    iVar13 = sp_el0;
    if (*(iVar13 + 0x5e0) == iStack_48) {
        return iVar12;
    }
    auVar15 = __stack_chk_fail(iVar12);
    iVar12 = auVar15._8_8_;
    *extraout_x18 = sym.config_cpuss_register;
    uVar14 = puVar8;
    switch(uVar5 & 0xff) {
    case 0x52:
        if ((puVar8 & 0xff000000) == 0) {
            puVar6 = iVar12 + (arg3_00 & 0xffffffff) * 4;
            *puVar6 = uVar7 | 3;
            puVar6[1] = uVar14 | 0x2000000;
            return 0;
        }
        pcVar4 = "repeat read time exceeded the limit\n";
        break;
    default:
        pcVar4 = "Don\'t support this command\n";
        break;
    case 100:
        if (uVar14 >> 0x18 == 0) {
            puVar1 = iVar12 + (arg3_00 & 0xffffffff) * 4;
            *puVar1 = 3;
            puVar1[1] = uVar14 | 0x1000000;
            return 0;
        }
        pcVar4 = "sleep time exceeded the limit\n";
        break;
    case 0x72:
        if (4 < uVar14) {
            puVar6 = iVar12 + (arg3_00 & 0xffffffff) * 4;
            *puVar6 = uVar7;
            puVar6[1] = uVar14;
            return 0;
        }
        *(iVar12 + (arg3_00 & 0xffffffff) * 4) = uVar7 | 1;
        return 0;
    case 0x77:
        puVar6 = iVar12 + (arg3_00 & 0xffffffff) * 4;
        *puVar6 = uVar7 | 2;
        puVar6[1] = uVar14;
        return 0;
    }
    _dev_err(auVar15._0_8_,pcVar4);
    return 0xffffffea;
}


// ===== sym.config_cpuss_register @ 0x080027e0 (size 256) =====

ulong sym.config_cpuss_register(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint32_t in_w4;
    uint32_t in_w5;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = (arg4 & 0xff) - 0x52;
    if (uVar3 < 0x26) {
    //switch table (38 cases) at 0x8000244
        switch(*(uVar3 + 0x8000244) * 4 + 0x8002818) {
        case 0x800281c:
            if (in_w5 >> 0x18 == 0) {
                puVar2 = arg2 + (arg3 & 0xffffffffU) * 4;
                *puVar2 = in_w4 | 3;
                puVar2[1] = in_w5 | 0x2000000;
                return 0;
            }
            pcVar4 = "repeat read time exceeded the limit\n";
            break;
        case 0x8002840:
            if (in_w5 >> 0x18 == 0) {
                puVar1 = arg2 + (arg3 & 0xffffffffU) * 4;
                *puVar1 = 3;
                puVar1[1] = in_w5 | 0x1000000;
                return 0;
            }
            pcVar4 = "sleep time exceeded the limit\n";
            break;
        case 0x8002864:
            if (4 < in_w5) {
                puVar2 = arg2 + (arg3 & 0xffffffffU) * 4;
                *puVar2 = in_w4;
                puVar2[1] = in_w5;
                return 0;
            }
            *(arg2 + (arg3 & 0xffffffffU) * 4) = in_w4 | 1;
            return 0;
        case 0x8002880:
            puVar2 = arg2 + (arg3 & 0xffffffffU) * 4;
            *puVar2 = in_w4 | 2;
            puVar2[1] = in_w5;
            return 0;
        case 0x80028a8:
            goto code_r0x080028a8;
        }
    }
    else {
code_r0x080028a8:
        pcVar4 = "Don\'t support this command\n";
    }
    _dev_err(arg1,pcVar4);
    return 0xffffffea;
}


// ===== sym.register_reset_store @ 0x080028e0 (size 292) =====

int64_t sym.register_reset_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int iVar1;
    int *piVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar5;
    ulong unaff_x30;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iStack_28 = *(iVar5 + 0x5e0);
    piVar2 = &iStack_2c;
    iStack_2c = 0;
    iVar1 = kstrtouint(arg2,0x10,piVar2);
    iVar5 = -0x16;
    if ((iVar1 == 0) && (iStack_2c == 1)) {
        iVar5 = *(arg1 + 0x98);
        mutex_lock(iVar5);
        if (0x20 < *(*(iVar5 + 0x30) + 8)) {
            *(*(iVar5 + 0x30) + 0xc) = 1;
            *(*(iVar5 + 0x30) + 0x10) = 0;
            *(*(iVar5 + 0x30) + 0x14) = 4;
            *(*(iVar5 + 0x30) + 0x18) = 0;
            *(*(iVar5 + 0x30) + 0x1c) = 0x20;
            piVar2 = *(*(iVar5 + 0x30) + 1);
            memset(**(iVar5 + 0x30),0xde,piVar2);
            puVar3 = **(iVar5 + 0x30);
            *puVar3 = 0x200c0ffee;
            puVar3[1] = 0x2000000007;
            iVar4 = **(iVar5 + 0x30);
            *(iVar4 + 0x10) = 0;
            *(iVar4 + 0x18) = 0;
        }
        mutex_unlock(iVar5);
        iVar5 = arg3;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return iVar5;
    }
    iVar5 = __stack_chk_fail(iVar5);
    *extraout_x18 = sym.format_version_show;
    iVar5 = *(iVar5 + 0x98);
    if (iVar5 == 0) {
        iVar5 = -0xe;
    }
    else {
        mutex_lock(iVar5);
        iVar1 = scnprintf(piVar2,0x1000,0x80003d3,*(**(iVar5 + 0x30) + 4));
        mutex_unlock(iVar5);
        iVar5 = iVar1;
    }
    return iVar5;
}


// ===== sym.format_version_show @ 0x08002a04 (size 116) =====

int64_t sym.format_version_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0x98);
    if (iVar2 == 0) {
        iVar2 = -0xe;
    }
    else {
        mutex_lock(iVar2);
        iVar1 = scnprintf(arg2,0x1000,0x80003d3,*(**(iVar2 + 0x30) + 4));
        mutex_unlock(iVar2);
        iVar2 = iVar1;
    }
    return iVar2;
}


// ===== sym.spr_config_show @ 0x08002a78 (size 476) =====

int64_t sym.spr_config_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t in_x3;
    int64_t *piVar8;
    int64_t iVar9;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t unaff_x19;
    int64_t unaff_x20;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    ulong unaff_x30;
    ulong uStack_f0;
    int64_t iStack_e8;
    uchar *puStack_e0;
    code *pcStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c0;
    int64_t iStack_b8;
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
    
    iVar3 = in_x3;
    *in_x18 = unaff_x30;
    iVar10 = sp_el0;
    iStack_68 = *(iVar10 + 0x5e0);
    iVar10 = *(arg1 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *arg2 = 0;
    iStack_b0 = arg1;
    if (iVar10 == 0) {
        iVar5 = -0xe;
        uVar7 = arg2;
    }
    else {
        mutex_lock(iVar10);
        uVar2 = scnprintf(&uStack_a8,0x40,"spr data list below:\n");
        uVar7 = 0x1000;
        strlcat(arg2,&uStack_a8,0x1000);
        uVar11 = 0;
        iVar5 = iVar10 + 0x38;
        do {
            iVar3 = in_x3;
            if (0x1000 < uVar2) {
                _dev_err(iStack_b0,"Couldn\'t write complete config\n");
                break;
            }
            piVar8 = *(iVar5 + uVar11 * 8);
            if (piVar8 == NULL) {
                uVar7 = uVar11 & 0xffffffff;
                _dev_err(iStack_b0,"SPR data pinter for CPU%d is empty\n",uVar7);
            }
            else {
                in_x3 = uVar11 & 0xffffffff;
                unaff_x19 = *piVar8;
                iVar3 = scnprintf(&uStack_a8,0x40,"spr data for CPU[%d] below:\n",in_x3);
                uVar7 = 0x1000;
                strlcat(arg2,&uStack_a8,0x1000);
                uVar2 = iVar3 + uVar2;
                if (*(*(iVar5 + uVar11 * 8) + 0xc) != 0) {
                    uVar12 = 0;
                    unaff_x19 = unaff_x19 + 0x14;
                    do {
                        if (0x1000 < uVar2) {
                            _dev_err(iStack_b0,"Couldn\'t write complete config\n");
                            break;
                        }
                        in_x3 = *(unaff_x19 + uVar12 * 4);
                        iVar3 = scnprintf(&uStack_a8,0x40,0x80005e9,in_x3);
                        uVar7 = 0x1000;
                        strlcat(arg2,&uStack_a8,0x1000);
                        uVar2 = iVar3 + uVar2;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < *(*(iVar5 + uVar11 * 8) + 0xc));
                }
            }
            iVar3 = in_x3;
            uVar11 = uVar11 + 1;
        } while (uVar11 != 8);
        noname_1 = mutex_unlock(iVar10);
        iVar5 = uVar2;
        unaff_x20 = arg2;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_68) {
        return iVar5;
    }
    iVar6 = __stack_chk_fail(noname_1,iVar5);
    *extraout_x18 = sym.spr_config_store;
    pcStack_d8 = sym.spr_config_store;
    iVar5 = sp_el0;
    iStack_e8 = *(iVar5 + 0x5e0);
    iVar5 = *(iVar6 + 0x98);
    uStack_f0 = 0;
    puStack_e0 = &stack0xffffffffffffffa0;
    iStack_d0 = iVar10;
    iStack_c0 = unaff_x20;
    iStack_b8 = unaff_x19;
    iVar4 = sscanf(uVar7,"%d %d",&uStack_f0 + 4,&uStack_f0);
    if (iVar4 == 2) {
        if (iVar5 == 0) {
            iVar10 = -0xe;
        }
        else if (uStack_f0 < 8) {
            mutex_lock(iVar5);
            if (7 < uStack_f0) goto code_r0x08002dc8;
            iVar10 = iVar5 + 0x38;
            piVar8 = *(iVar10 + (uStack_f0 & 0xffffffff) * 8);
            if (piVar8 == NULL) {
code_r0x08002d44:
                iVar10 = iVar3;
            }
            else {
                if (piVar8[2] + 0xcU < *(piVar8 + 1)) {
                    uVar2 = *(piVar8 + 0xc);
                    iVar6 = *piVar8;
                    *(iVar6 + 0xc) = uVar2 * 4 + 0x1c;
                    iVar6 = iVar6 + uVar2 * 4;
                    *(iVar6 + 0x14) = uStack_f0._4_4_;
                    *(iVar6 + 0x18) = 0;
                    if (7 < uStack_f0) goto code_r0x08002dc8;
                    iVar6 = (uStack_f0 & 0xffffffff) * 8;
                    iVar9 = *(iVar10 + iVar6);
                    *(iVar9 + 0xc) = *(iVar9 + 0xc) + 1;
                    iVar10 = *(iVar10 + iVar6);
                    *(iVar10 + 0x10) = *(iVar10 + 0x10) + 0xc;
                    goto code_r0x08002d44;
                }
                _dev_err(iVar6,"Couldn\'t add SPR config, no enough memory\n");
                iVar10 = -0xc;
            }
            mutex_unlock(iVar5);
        }
        else {
            _dev_err(iVar6,"Input the wrong CPU number\n");
            iVar10 = -0x16;
        }
    }
    else {
        iVar10 = -0x16;
    }
    iVar5 = sp_el0;
    if (*(iVar5 + 0x5e0) == iStack_e8) {
        return iVar10;
    }
    __stack_chk_fail();
code_r0x08002dc8:
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5512,0x8002dcc);
    (*pcVar1)();
}


// ===== sym.spr_config_store @ 0x08002c54 (size 376) =====

int64_t sym.spr_config_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    code *pcVar2;
    int iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *in_x18;
    int64_t iVar8;
    ulong unaff_x30;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_38 = *(iVar8 + 0x5e0);
    iVar8 = *(arg1 + 0x98);
    uStack_40 = 0;
    iVar3 = sscanf(arg2,"%d %d",&uStack_40 + 4,&uStack_40);
    if (iVar3 == 2) {
        if (iVar8 == 0) {
            iVar4 = -0xe;
        }
        else if (uStack_40 < 8) {
            mutex_lock(iVar8);
            if (7 < uStack_40) goto code_r0x08002dc8;
            iVar4 = iVar8 + 0x38;
            piVar5 = *(iVar4 + (uStack_40 & 0xffffffff) * 8);
            if (piVar5 == NULL) {
code_r0x08002d44:
                iVar4 = arg3;
            }
            else {
                if (piVar5[2] + 0xcU < *(piVar5 + 1)) {
                    uVar1 = *(piVar5 + 0xc);
                    iVar6 = *piVar5;
                    *(iVar6 + 0xc) = uVar1 * 4 + 0x1c;
                    iVar6 = iVar6 + uVar1 * 4;
                    *(iVar6 + 0x14) = uStack_40._4_4_;
                    *(iVar6 + 0x18) = 0;
                    if (7 < uStack_40) goto code_r0x08002dc8;
                    iVar6 = (uStack_40 & 0xffffffff) * 8;
                    iVar7 = *(iVar4 + iVar6);
                    *(iVar7 + 0xc) = *(iVar7 + 0xc) + 1;
                    iVar4 = *(iVar4 + iVar6);
                    *(iVar4 + 0x10) = *(iVar4 + 0x10) + 0xc;
                    goto code_r0x08002d44;
                }
                _dev_err(arg1,"Couldn\'t add SPR config, no enough memory\n");
                iVar4 = -0xc;
            }
            mutex_unlock(iVar8);
        }
        else {
            _dev_err(arg1,"Input the wrong CPU number\n");
            iVar4 = -0x16;
        }
    }
    else {
        iVar4 = -0x16;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_38) {
        return iVar4;
    }
    __stack_chk_fail();
code_r0x08002dc8:
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5512,0x8002dcc);
    (*pcVar2)();
}


// ===== sym.sprs_register_reset_store @ 0x08002dcc (size 152) =====

void sym.sprs_register_reset_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uchar *puVar5;
    int *piVar6;
    int64_t *piVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int64_t iVar8;
    ulong unaff_x30;
    uchar auVar9 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ulong uStack_98;
    ulong uStack_90;
    ulong uStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar *puStack_60;
    code *pcStack_58;
    int iStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    piVar6 = &iStack_2c;
    iStack_2c = 0;
    iVar2 = kstrtouint(arg2,0x10);
    iVar8 = -0x16;
    if ((iVar2 == 0) && (iStack_2c == 1)) {
        sym.reset_sprs_dump_table(arg1);
        iVar8 = arg3;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_28) {
        return;
    }
    iVar4 = __stack_chk_fail(iVar8);
    *extraout_x18 = sym.sprs_format_version_show;
    pcStack_58 = sym.sprs_format_version_show;
    iVar8 = sp_el0;
    iStack_68 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar4 + 0x98);
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    *piVar6 = 0;
    puStack_60 = &stack0xffffffffffffffe0;
    if (iVar8 == 0) {
        iVar8 = -0xe;
    }
    else {
        mutex_lock(iVar8);
        if (*(iVar8 + 0x38) == NULL) {
            iVar2 = 0;
            piVar7 = *(iVar8 + 0x40);
        }
        else {
            iVar2 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",0,*(**(iVar8 + 0x38) + 4))
            ;
            strlcat(piVar6,&uStack_a8,0x1000);
            piVar7 = *(iVar8 + 0x40);
        }
        if (piVar7 != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",1,*(*piVar7 + 4));
            strlcat(piVar6,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar8 + 0x48) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",2,*(**(iVar8 + 0x48) + 4))
            ;
            strlcat(piVar6,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar8 + 0x50) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",3,*(**(iVar8 + 0x50) + 4))
            ;
            strlcat(piVar6,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar8 + 0x58) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",4,*(**(iVar8 + 0x58) + 4))
            ;
            strlcat(piVar6,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar8 + 0x60) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",5,*(**(iVar8 + 0x60) + 4))
            ;
            strlcat(piVar6,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar8 + 0x68) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",6,*(**(iVar8 + 0x68) + 4))
            ;
            strlcat(piVar6,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        if (*(iVar8 + 0x70) != NULL) {
            iVar3 = scnprintf(&uStack_a8,0x40,"SPR data format version for cpu%d is %d\n",7,*(**(iVar8 + 0x70) + 4))
            ;
            strlcat(piVar6,&uStack_a8,0x1000);
            iVar2 = iVar3 + iVar2;
        }
        mutex_unlock(iVar8);
        iVar8 = iVar2;
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_68) {
        return;
    }
    auVar9 = __stack_chk_fail(iVar8);
    puVar5 = auVar9._0_8_;
    *extraout_x18_00 = sym.__cfi_check_fail;
    if (puVar5 != NULL) {
        switch(*puVar5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar5,auVar9._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003160);
    (*pcVar1)();
}


// ===== sym.sprs_format_version_show @ 0x08002e64 (size 676) =====

void sym.sprs_format_version_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    int iVar3;
    int iVar4;
    uchar *puVar5;
    int64_t *piVar6;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar7;
    ulong unaff_x30;
    uchar auVar8 [16];
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    ulong uStack_48;
    ulong uStack_40;
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar7 = sp_el0;
    iStack_38 = *(iVar7 + 0x5e0);
    iVar7 = *(arg1 + 0x98);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    *arg2 = 0;
    if (iVar7 == 0) {
        iVar7 = -0xe;
    }
    else {
        mutex_lock(iVar7);
        if (*(iVar7 + 0x38) == NULL) {
            iVar3 = 0;
            piVar6 = *(iVar7 + 0x40);
        }
        else {
            iVar3 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",0,*(**(iVar7 + 0x38) + 4))
            ;
            strlcat(arg2,&uStack_78,0x1000);
            piVar6 = *(iVar7 + 0x40);
        }
        if (piVar6 != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",1,*(*piVar6 + 4));
            strlcat(arg2,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x48) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",2,*(**(iVar7 + 0x48) + 4))
            ;
            strlcat(arg2,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x50) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",3,*(**(iVar7 + 0x50) + 4))
            ;
            strlcat(arg2,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x58) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",4,*(**(iVar7 + 0x58) + 4))
            ;
            strlcat(arg2,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x60) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",5,*(**(iVar7 + 0x60) + 4))
            ;
            strlcat(arg2,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x68) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",6,*(**(iVar7 + 0x68) + 4))
            ;
            strlcat(arg2,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        if (*(iVar7 + 0x70) != NULL) {
            iVar4 = scnprintf(&uStack_78,0x40,"SPR data format version for cpu%d is %d\n",7,*(**(iVar7 + 0x70) + 4))
            ;
            strlcat(arg2,&uStack_78,0x1000);
            iVar3 = iVar4 + iVar3;
        }
        noname_1 = mutex_unlock(iVar7);
        iVar7 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return;
    }
    auVar8 = __stack_chk_fail(noname_1,iVar7);
    puVar5 = auVar8._0_8_;
    *extraout_x18 = sym.__cfi_check_fail;
    if (puVar5 != NULL) {
        switch(*puVar5) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            __ubsan_handle_cfi_check_fail_abort(puVar5,auVar8._8_8_,0);
            break;
        default:
            return;
        }
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x8003160);
    (*pcVar2)();
}


// ===== sym.__cfi_check_fail @ 0x08003108 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800314c

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
    //switch table (4 cases) at 0x800026a
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8003160);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080031b4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080031e8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.mem_dump_probe.5f8f755adc34f5ecd4d0fd195a7c0b39.cfi_jt);
    return;
}

