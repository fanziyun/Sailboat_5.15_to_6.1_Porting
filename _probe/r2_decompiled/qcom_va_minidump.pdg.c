// decompiled from qcom_va_minidump by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 436) =====

//WARNING: Switch with 1 destination removed at 0x0800289c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2b3a43e29242445) {
        if (arg1 < -0xdd8137c92219f59) {
            if (arg1 != -0x3557318fb8d07b71) {
                if (arg1 != -0x1a08dc7d0ed78794) goto code_r0x0800285c;
                pcVar2 = sym.qcom_va_md_add_region.cfi_jt;
                goto code_r0x08001180;
            }
            pcVar2 = sym.qcom_va_md_driver_remove.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt;
        }
        else if (arg1 == -0xdd8137c92219f59) {
            pcVar2 = sym.qcom_va_md_unregister.cfi_jt;
        }
        else {
            if (arg1 != -0x558484723f05168) goto code_r0x0800285c;
            pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr;
        }
code_r0x0800119c:
        if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
            return;
        }
    }
    else {
        if (arg1 < 0x741b966c574d47b1) {
            if (arg1 != 0x2b3a43e29242445) {
                if (arg1 != 0x2c1d832160b5d123) goto code_r0x0800285c;
                pcVar2 = sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr;
                goto code_r0x0800119c;
            }
            pcVar2 = sym.init_module.cfi_jt;
        }
        else if (arg1 == 0x741b966c574d47b1) {
            pcVar2 = sym.qcom_va_md_enabled.cfi_jt;
        }
        else {
            if (arg1 == 0x7d57972cd3914fb1) {
                pcVar2 = sym.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt;
                goto code_r0x0800119c;
            }
            if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x0800285c;
            pcVar2 = sym.cleanup_module.cfi_jt;
        }
code_r0x08001180:
        if (pcVar1 == pcVar2) {
            return;
        }
    }
code_r0x0800285c:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80028b0);
    (*pcVar1)();
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr @ 0x080011c0 (size 8) =====

uint64_t sym.__typeid__ZTSFlP7kobjectP9attributePKcmE_global_addr
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar14;
    uint64_t uVar15;
    code *pcVar16;
    code *pcVar17;
    code *pcVar18;
    code *pcVar19;
    ulong unaff_x30;
    uint64_t uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    auStack_3c[0] = 0;
    iVar3 = kstrtobool(param_3,auStack_3c);
    if (iVar3 == 0) {
        *(param_1 + 0x90) = auStack_3c[0];
    }
    else {
        _printk(0x80006f1,"enable_store");
        param_4 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return param_4;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_va_md_driver_probe;
    pcStack_88 = sym.qcom_va_md_driver_probe;
    iVar6 = sp_el0;
    iVar1 = iVar5 + 0x10;
    iStack_98 = *(iVar6 + 0x5e0);
    uStack_a8 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    uVar4 = dma_set_mask(iVar1,0xffffffffffffffff);
    uVar15 = uVar4;
    if (uVar4 != 0) goto code_r0x080020d0;
    dma_set_coherent_mask(iVar1,0xffffffffffffffff);
    uStack_a0 = 0;
    iVar6 = of_parse_phandle(*(iVar5 + 0x300),"memory-region",0);
    if ((iVar6 == 0) || (uVar4 = of_reserved_mem_device_init_by_idx(iVar1,*(iVar5 + 0x300),0), uVar4 == 0)) {
        uVar4 = of_property_read_variable_u32_array(iVar6,"size",&uStack_a0,2,0);
        if (-1 < uVar4) {
            _segment.ehdr = uStack_a0._4_4_;
            iVar6 = dma_alloc_attrs(iVar1,uStack_a0._4_4_,&uStack_a8,0xcc0,0);
            if (iVar6 != 0) {
                dma_free_attrs(iVar1,_segment.ehdr,iVar6,uStack_a8,0);
                iVar6 = _kmalloc_caches;
                iVar8 = *(iVar5 + 0x2c8);
                uVar15 = uStack_a8;
                if (iVar8 != 0) {
                    uVar15 = *(iVar8 + 0x10);
                    if (uVar15 != 0) {
                        piVar10 = iVar8 + 0x18;
                        do {
                            if (piVar10[-2] <= uStack_a8 && uStack_a8 - piVar10[-2] < uVar15) {
                                uVar15 = *piVar10 + uStack_a8;
                                goto code_r0x08001eec;
                            }
                            uVar15 = piVar10[3];
                            piVar10 = piVar10 + 4;
                        } while (uVar15 != 0);
                    }
                    uVar15 = 0xffffffffffffffff;
                }
code_r0x08001eec:
                uVar4 = _segment.ehdr + 0xfff;
                uVar2 = uVar4 >> 0xc;
                iVar8 = __kmalloc(uVar2 << 3,0xcc0);
                if (iVar8 != 0) {
                    if (0xfff < uVar4) {
                        uVar4 = uVar2;
                        if (uVar2 < 2) {
                            uVar4 = 1;
                        }
                        uVar11 = uVar4;
                        if (uVar4 < 2) {
                            uVar12 = 0;
                        }
                        else {
                            uVar12 = uVar11 & 0xffffe;
                            iVar9 = (iVar6 >> 0xc) * -0x40 + -0x200000000 + (uVar15 >> 0xc) * 0x40;
                            piVar10 = iVar8 + 8;
                            uVar13 = uVar12;
                            do {
                                uVar13 = uVar13 - 2;
                                piVar10[-1] = iVar9;
                                *piVar10 = iVar9 + 0x40;
                                iVar9 = iVar9 + 0x80;
                                piVar10 = piVar10 + 2;
                            } while (uVar13 != 0);
                            if (uVar12 == uVar11) goto code_r0x08001f9c;
                        }
                        iVar9 = uVar11 - uVar12;
                        iVar6 = ((uVar12 + (uVar15 >> 0xc)) - (iVar6 >> 0xc)) * 0x40 + -0x200000000;
                        piVar10 = iVar8 + uVar12 * 8;
                        do {
                            *piVar10 = iVar6;
                            iVar9 = iVar9 + -1;
                            iVar6 = iVar6 + 0x40;
                            piVar10 = piVar10 + 1;
                        } while (iVar9 != 0);
                    }
code_r0x08001f9c:
                    uVar7 = 0x6800000000070b;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar7 = 0x68000000000f0b;
                    }
                    uVar7 = vmap(iVar8,uVar2,0x10,uVar7);
                    kfree(iVar8);
                    iVar6 = *(iVar5 + 0x2c8);
                    _obj.va_md_lock = uStack_a8;
                    if (iVar6 != 0) {
                        uVar15 = *(iVar6 + 0x10);
                        if (uVar15 != 0) {
                            piVar10 = iVar6 + 0x18;
                            do {
                                if (piVar10[-2] <= uStack_a8 && uStack_a8 - piVar10[-2] < uVar15) {
                                    _obj.va_md_lock = *piVar10 + uStack_a8;
                                    goto code_r0x08002018;
                                }
                                uVar15 = piVar10[3];
                                piVar10 = piVar10 + 4;
                            } while (uVar15 != 0);
                        }
                        _obj.va_md_lock = 0xffffffffffffffff;
                    }
code_r0x08002018:
                    *0x80000d0 = uVar7;
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    _obj.va_md_s_attr_group = obj.va_md_s_attr_group;
                    *0x8000150 = obj.va_md_s_attr_group;
                    *0x8000158 = kset_create_and_add("va-minidump",0,_mutex_lock);
                    if (*0x8000158 == 0) {
                        _dev_err(iVar1,"Failed to create kset for va-minidump\n");
                        vunmap(CONCAT44(*0x8000004,_segment.ehdr));
                        uVar15 = 0xfffffff4;
                    }
                    else {
                        *0x8000142 = 1;
                        uVar15 = 0;
                    }
                    goto code_r0x080020d0;
                }
            }
            uVar15 = 0xfffffff4;
            goto code_r0x080020d0;
        }
        uVar7 = 0x80004a7;
    }
    else {
        uVar7 = 0x80003e1;
    }
    uVar15 = uVar4;
    _printk(uVar7,"qcom_va_md_reserve_mem",uVar15);
    _dev_err(iVar1,"CMA for VA based minidump is not present\n");
code_r0x080020d0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_98) {
        __stack_chk_fail();
        *extraout_x18_00 = sym.qcom_va_md_driver_remove;
        mutex_lock(obj.va_md_lock);
        pcVar14 = _obj.va_md_s_attr_group;
        if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
            do {
                pcVar16 = pcVar14 + 0x10;
                pcVar18 = *pcVar14;
                pcVar17 = *pcVar16;
                while (pcVar17 != pcVar16) {
                    pcVar19 = *pcVar17;
                    atomic_notifier_chain_unregister(pcVar14 + -0x10,pcVar17 + -0x18);
                    uVar15 = __list_del_entry_valid(pcVar17);
                    if ((uVar15 & 1) != 0) {
                        iVar1 = *pcVar17;
                        piVar10 = *(pcVar17 + 8);
                        *(iVar1 + 8) = piVar10;
                        *piVar10 = iVar1;
                    }
                    *pcVar17 = -0x2152ffffffffff00;
                    *(pcVar17 + 8) = -0x2152fffffffffede;
                    kfree(pcVar17 + -0x18);
                    pcVar17 = pcVar19;
                }
                pcVar17 = pcVar14 + -0x70;
                uVar15 = __list_del_entry_valid(pcVar16);
                if ((uVar15 & 1) != 0) {
                    iVar1 = *(pcVar14 + 0x10);
                    piVar10 = *(pcVar14 + 0x18);
                    *(iVar1 + 8) = piVar10;
                    *piVar10 = iVar1;
                }
                *(pcVar14 + 0x10) = -0x2152ffffffffff00;
                *(pcVar14 + 0x18) = -0x2152fffffffffede;
                sysfs_remove_group(pcVar17,obj.va_md_s_attr_group);
                kobject_put(pcVar17);
                uVar15 = __list_del_entry_valid(pcVar14);
                if ((uVar15 & 1) != 0) {
                    iVar1 = *pcVar14;
                    piVar10 = *(pcVar14 + 8);
                    *(iVar1 + 8) = piVar10;
                    *piVar10 = iVar1;
                }
                *pcVar14 = -0x2152ffffffffff00;
                *(pcVar14 + 8) = -0x2152fffffffffede;
                kfree(pcVar17);
                pcVar14 = pcVar18;
            } while (pcVar18 != obj.va_md_s_attr_group);
        }
        mutex_unlock(obj.va_md_lock);
        kset_unregister(*0x8000158);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        vunmap(*0x80000d0);
        return 0;
    }
    return uVar15;
}


// ===== sym.attr_store.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt @ 0x080011c8 (size 8) =====

ulong sym.attr_store.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt
                (ulong param_1,int64_t param_2,ulong param_3,ulong param_4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (1 < (pcVar2 + -0x80011c0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x80002f0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.cleanup_module.cfi_jt @ 0x080011d0 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_va_md_driver_probe.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080011d8 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_va_md_driver_probe.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.qcom_va_md_add_region.cfi_jt @ 0x080011e0 (size 8) =====

ulong sym.qcom_va_md_add_region.cfi_jt(uint64_t *param_1)

{
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    code *pcVar4;
    ulong uVar5;
    char *pcVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    ulong *in_x18;
    uint64_t *puVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    int *piVar18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar3 = *0x80000d0;
    if (*0x8000140 != '\0') {
        if (((*param_1 != 0) == (param_1[6] == 0)) && (param_1[5] != 0)) {
            uVar8 = _segment.ehdr;
            if (0xffff < _segment.ehdr) {
                _printk(0x80005dc,"qcom_va_md_add_region");
                return 0xffffffe4;
            }
            if ((*0x80000d0 + *0x80000c8) - 1 < *0x80000d0 + uVar8 * 0x40 + 0x3f) {
                _printk(0x8000679,"qcom_va_md_add_region");
                return 0xfffffff4;
            }
            if ((*param_1 == 0) || (_segment.ehdr == 0)) {
                puVar15 = *0x80000d0 + uVar8 * 0x40;
                uVar5 = strlen(param_1 + 1);
                uVar8 = param_1[1];
                uVar17 = param_1[2];
                *puVar15 = *param_1;
                puVar15[1] = uVar8;
                puVar15[2] = uVar17;
                uVar17 = param_1[6];
                uVar8 = param_1[3];
                uVar11 = param_1[4];
                puVar15[5] = param_1[5];
                puVar15[6] = uVar17;
                puVar15[3] = uVar8;
                puVar15[4] = uVar11;
                if ((0x1f < uVar5) && (obj.va_md_add_entry.__already_done == 0x0)) {
                    obj.va_md_add_entry.__already_done = 0x1;
                    __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",param_1 + 1,uVar5,
                                  0x1f);
    //WARNING: Does not return
                    pcVar4 = SoftwareBreakpoint(0x800,0x8001b60);
                    (*pcVar4)();
                }
                *(puVar15 + 0x27) = 0;
                uVar9 = 0xfffffffe;
                if (*param_1 != 0) {
                    uVar9 = 0xffffffff;
                }
                *(puVar15 + 7) = uVar9;
                *(puVar15 + 0x3c) = uVar9;
                _segment.ehdr = _segment.ehdr + 1;
                return 0;
            }
            uVar17 = 0;
            uVar16 = 0;
            piVar18 = *0x80000d0 + 0x3c;
            puVar10 = *0x80000d0 + 0x38;
            do {
                while( true ) {
                    uVar2 = *puVar10;
                    uVar7 = uVar8;
                    if ((uVar2 == 0xfffffffe) && (*piVar18 == -2)) {
                        uVar16 = uVar16 + 1;
                        goto code_r0x0800185c;
                    }
                    uVar13 = *param_1;
                    puVar15 = CONCAT44(*0x8000004,_segment.ehdr) + uVar17 * 0x40;
                    uVar11 = *puVar15;
                    uVar12 = (uVar11 + puVar15[5]) - 1;
                    if (((uVar11 <= uVar13 && uVar13 <= uVar12) ||
                        (uVar14 = (uVar13 + param_1[5]) - 1, uVar11 <= uVar14 && uVar14 <= uVar12)) ||
                       ((uVar13 <= uVar11 && (uVar12 <= uVar14)))) {
                        *(param_1 + 0x27) = 0;
                        uVar5 = 0x800086e;
                        pcVar6 = "va_md_tree_insert";
                        goto code_r0x08001a94;
                    }
                    if ((uVar11 <= uVar13) || (uVar11 <= uVar14)) break;
                    uVar16 = uVar2;
                    if (uVar2 == 0xffffffff) {
                        *puVar10 = uVar7;
                        puVar15 = *0x80000d0 + *0x80000d8 * 0x40;
                        uVar5 = strlen(param_1 + 1);
                        uVar8 = param_1[1];
                        uVar17 = param_1[2];
                        *puVar15 = *param_1;
                        puVar15[1] = uVar8;
                        puVar15[2] = uVar17;
                        uVar17 = param_1[6];
                        uVar8 = param_1[3];
                        uVar11 = param_1[4];
                        puVar15[5] = param_1[5];
                        puVar15[6] = uVar17;
                        puVar15[3] = uVar8;
                        puVar15[4] = uVar11;
                        if ((0x1f < uVar5) && (obj.va_md_add_entry.__already_done == 0x0)) {
                            obj.va_md_add_entry.__already_done = 0x1;
                            __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",param_1 + 1,
                                          uVar5,0x1f);
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x8001b3c);
                            (*pcVar4)();
                        }
code_r0x08001980:
                        *(puVar15 + 0x27) = 0;
                        uVar9 = 0xfffffffe;
                        if (*param_1 != 0) {
                            uVar9 = 0xffffffff;
                        }
                        *(puVar15 + 7) = uVar9;
                        *(puVar15 + 0x3c) = uVar9;
                        uVar8 = _segment.ehdr + 1;
                        _segment.ehdr = _segment.ehdr + 1;
                        goto joined_r0x080018fc;
                    }
code_r0x0800185c:
                    uVar17 = uVar16;
                    iVar1 = iVar3 + uVar17 * 0x40;
                    puVar10 = iVar1 + 0x38;
                    piVar18 = iVar1 + 0x3c;
                    if (uVar7 <= uVar16) goto joined_r0x080018fc;
                }
                if (uVar12 < uVar13 && uVar12 < uVar14) {
                    puVar10 = iVar3 + uVar16 * 0x40 + 0x3c;
                    uVar16 = *puVar10;
                    if (uVar16 == 0xffffffff) {
                        *puVar10 = uVar7;
                        puVar15 = *0x80000d0 + *0x80000d8 * 0x40;
                        uVar5 = strlen(param_1 + 1);
                        uVar8 = param_1[1];
                        uVar17 = param_1[2];
                        *puVar15 = *param_1;
                        puVar15[1] = uVar8;
                        puVar15[2] = uVar17;
                        uVar17 = param_1[6];
                        uVar8 = param_1[3];
                        uVar11 = param_1[4];
                        puVar15[5] = param_1[5];
                        puVar15[6] = uVar17;
                        puVar15[3] = uVar8;
                        puVar15[4] = uVar11;
                        if ((0x1f < uVar5) && (obj.va_md_add_entry.__already_done == 0x0)) {
                            obj.va_md_add_entry.__already_done = 0x1;
                            __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",param_1 + 1,
                                          uVar5,0x1f);
    //WARNING: Does not return
                            pcVar4 = SoftwareBreakpoint(0x800,0x8001ba8);
                            (*pcVar4)();
                        }
                        goto code_r0x08001980;
                    }
                    goto code_r0x0800185c;
                }
                _printk(0x800082d,"va_md_tree_insert");
                uVar8 = _segment.ehdr;
            } while (uVar16 < _segment.ehdr);
joined_r0x080018fc:
            if (_segment.ehdr != 0) {
                return 0;
            }
            puVar15 = (*0x8000004 << 0x20) + uVar8 * 0x40;
            uVar5 = strlen(param_1 + 1);
            uVar8 = param_1[1];
            uVar17 = param_1[2];
            *puVar15 = *param_1;
            puVar15[1] = uVar8;
            puVar15[2] = uVar17;
            uVar17 = param_1[6];
            uVar8 = param_1[3];
            uVar11 = param_1[4];
            puVar15[5] = param_1[5];
            puVar15[6] = uVar17;
            puVar15[3] = uVar8;
            puVar15[4] = uVar11;
            if ((0x1f < uVar5) && (obj.va_md_add_entry.__already_done == 0x0)) {
                obj.va_md_add_entry.__already_done = 0x1;
                __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",param_1 + 1,uVar5,0x1f)
                ;
    //WARNING: Does not return
                pcVar4 = SoftwareBreakpoint(0x800,0x8001b84);
                (*pcVar4)();
            }
            *(puVar15 + 0x27) = 0;
            uVar9 = 0xfffffffe;
            if (*param_1 != 0) {
                uVar9 = 0xffffffff;
            }
            *(puVar15 + 7) = uVar9;
            *(puVar15 + 0x3c) = uVar9;
            _segment.ehdr = _segment.ehdr + 1;
            return 0;
        }
        uVar5 = 0x80003b1;
        pcVar6 = "qcom_va_md_add_region";
        *(param_1 + 0x27) = 0;
code_r0x08001a94:
        _printk(uVar5,pcVar6,param_1 + 1);
    }
    return 0xffffffea;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x080011e8 (size 8) =====

ulong sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr(ulong param_1,int64_t param_2,ulong param_3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(param_2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (1 < (pcVar2 + -0x80011e8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80002d0);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.enable_show.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt @ 0x080011f0 (size 8) =====

int64_t sym.enable_show.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0x1000,"enable: %u\n",*(param_1 + 0x90));
    return iVar1;
}


// ===== sym.qcom_va_md_driver_remove.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt @ 0x080011f8 (size 8) =====

ulong sym.qcom_va_md_driver_remove.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    code *pcVar6;
    code *pcVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.va_md_lock);
    pcVar4 = _obj.va_md_s_attr_group;
    if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
        do {
            pcVar5 = pcVar4 + 0x10;
            pcVar7 = *pcVar4;
            pcVar6 = *pcVar5;
            while (pcVar6 != pcVar5) {
                pcVar8 = *pcVar6;
                atomic_notifier_chain_unregister(pcVar4 + -0x10,pcVar6 + -0x18);
                uVar3 = __list_del_entry_valid(pcVar6);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar6;
                    piVar2 = *(pcVar6 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar6 = -0x2152ffffffffff00;
                *(pcVar6 + 8) = -0x2152fffffffffede;
                kfree(pcVar6 + -0x18);
                pcVar6 = pcVar8;
            }
            pcVar6 = pcVar4 + -0x70;
            uVar3 = __list_del_entry_valid(pcVar5);
            if ((uVar3 & 1) != 0) {
                iVar1 = *(pcVar4 + 0x10);
                piVar2 = *(pcVar4 + 0x18);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *(pcVar4 + 0x10) = -0x2152ffffffffff00;
            *(pcVar4 + 0x18) = -0x2152fffffffffede;
            sysfs_remove_group(pcVar6,obj.va_md_s_attr_group);
            kobject_put(pcVar6);
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            kfree(pcVar6);
            pcVar4 = pcVar7;
        } while (pcVar7 != obj.va_md_s_attr_group);
    }
    mutex_unlock(obj.va_md_lock);
    kset_unregister(*0x8000158);
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
    vunmap(*0x80000d0);
    return 0;
}


// ===== sym.qcom_va_md_driver_probe.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt @ 0x08001200 (size 8) =====

int sym.qcom_va_md_driver_probe.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar14;
    code *pcVar15;
    code *pcVar16;
    code *pcVar17;
    code *pcVar18;
    ulong unaff_x30;
    uint64_t uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar2 = param_1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    iVar4 = dma_set_mask(iVar2,0xffffffffffffffff);
    if (iVar4 != 0) goto code_r0x080020d0;
    dma_set_coherent_mask(iVar2,0xffffffffffffffff);
    uStack_60 = 0;
    iVar5 = of_parse_phandle(*(param_1 + 0x300),"memory-region",0);
    if ((iVar5 == 0) || (iVar4 = of_reserved_mem_device_init_by_idx(iVar2,*(param_1 + 0x300),0), iVar4 == 0)) {
        iVar4 = of_property_read_variable_u32_array(iVar5,"size",&uStack_60,2,0);
        if (-1 < iVar4) {
            _segment.ehdr = uStack_60._4_4_;
            iVar5 = dma_alloc_attrs(iVar2,uStack_60._4_4_,&uStack_68,0xcc0,0);
            if (iVar5 != 0) {
                dma_free_attrs(iVar2,_segment.ehdr,iVar5,uStack_68,0);
                iVar5 = _kmalloc_caches;
                iVar7 = *(param_1 + 0x2c8);
                uVar10 = uStack_68;
                if (iVar7 != 0) {
                    uVar10 = *(iVar7 + 0x10);
                    if (uVar10 != 0) {
                        piVar9 = iVar7 + 0x18;
                        do {
                            if (piVar9[-2] <= uStack_68 && uStack_68 - piVar9[-2] < uVar10) {
                                uVar10 = *piVar9 + uStack_68;
                                goto code_r0x08001eec;
                            }
                            uVar10 = piVar9[3];
                            piVar9 = piVar9 + 4;
                        } while (uVar10 != 0);
                    }
                    uVar10 = 0xffffffffffffffff;
                }
code_r0x08001eec:
                uVar1 = _segment.ehdr + 0xfff;
                uVar3 = uVar1 >> 0xc;
                iVar7 = __kmalloc(uVar3 << 3,0xcc0);
                if (iVar7 != 0) {
                    if (0xfff < uVar1) {
                        uVar1 = uVar3;
                        if (uVar3 < 2) {
                            uVar1 = 1;
                        }
                        uVar11 = uVar1;
                        if (uVar1 < 2) {
                            uVar12 = 0;
                        }
                        else {
                            uVar12 = uVar11 & 0xffffe;
                            iVar8 = (iVar5 >> 0xc) * -0x40 + -0x200000000 + (uVar10 >> 0xc) * 0x40;
                            piVar9 = iVar7 + 8;
                            uVar13 = uVar12;
                            do {
                                uVar13 = uVar13 - 2;
                                piVar9[-1] = iVar8;
                                *piVar9 = iVar8 + 0x40;
                                iVar8 = iVar8 + 0x80;
                                piVar9 = piVar9 + 2;
                            } while (uVar13 != 0);
                            if (uVar12 == uVar11) goto code_r0x08001f9c;
                        }
                        iVar8 = uVar11 - uVar12;
                        iVar5 = ((uVar12 + (uVar10 >> 0xc)) - (iVar5 >> 0xc)) * 0x40 + -0x200000000;
                        piVar9 = iVar7 + uVar12 * 8;
                        do {
                            *piVar9 = iVar5;
                            iVar8 = iVar8 + -1;
                            iVar5 = iVar5 + 0x40;
                            piVar9 = piVar9 + 1;
                        } while (iVar8 != 0);
                    }
code_r0x08001f9c:
                    uVar6 = 0x6800000000070b;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar6 = 0x68000000000f0b;
                    }
                    uVar6 = vmap(iVar7,uVar3,0x10,uVar6);
                    kfree(iVar7);
                    iVar5 = *(param_1 + 0x2c8);
                    _obj.va_md_lock = uStack_68;
                    if (iVar5 != 0) {
                        uVar10 = *(iVar5 + 0x10);
                        if (uVar10 != 0) {
                            piVar9 = iVar5 + 0x18;
                            do {
                                if (piVar9[-2] <= uStack_68 && uStack_68 - piVar9[-2] < uVar10) {
                                    _obj.va_md_lock = *piVar9 + uStack_68;
                                    goto code_r0x08002018;
                                }
                                uVar10 = piVar9[3];
                                piVar9 = piVar9 + 4;
                            } while (uVar10 != 0);
                        }
                        _obj.va_md_lock = 0xffffffffffffffff;
                    }
code_r0x08002018:
                    *0x80000d0 = uVar6;
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    _obj.va_md_s_attr_group = obj.va_md_s_attr_group;
                    *0x8000150 = obj.va_md_s_attr_group;
                    *0x8000158 = kset_create_and_add("va-minidump",0,_mutex_lock);
                    if (*0x8000158 == 0) {
                        _dev_err(iVar2,"Failed to create kset for va-minidump\n");
                        vunmap(CONCAT44(*0x8000004,_segment.ehdr));
                        iVar4 = -0xc;
                    }
                    else {
                        *0x8000142 = 1;
                        iVar4 = 0;
                    }
                    goto code_r0x080020d0;
                }
            }
            iVar4 = -0xc;
            goto code_r0x080020d0;
        }
        uVar6 = 0x80004a7;
    }
    else {
        uVar6 = 0x80003e1;
    }
    _printk(uVar6,"qcom_va_md_reserve_mem",iVar4);
    _dev_err(iVar2,"CMA for VA based minidump is not present\n");
code_r0x080020d0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        *extraout_x18 = sym.qcom_va_md_driver_remove;
        mutex_lock(obj.va_md_lock);
        pcVar14 = _obj.va_md_s_attr_group;
        if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
            do {
                pcVar15 = pcVar14 + 0x10;
                pcVar17 = *pcVar14;
                pcVar16 = *pcVar15;
                while (pcVar16 != pcVar15) {
                    pcVar18 = *pcVar16;
                    atomic_notifier_chain_unregister(pcVar14 + -0x10,pcVar16 + -0x18);
                    uVar10 = __list_del_entry_valid(pcVar16);
                    if ((uVar10 & 1) != 0) {
                        iVar2 = *pcVar16;
                        piVar9 = *(pcVar16 + 8);
                        *(iVar2 + 8) = piVar9;
                        *piVar9 = iVar2;
                    }
                    *pcVar16 = -0x2152ffffffffff00;
                    *(pcVar16 + 8) = -0x2152fffffffffede;
                    kfree(pcVar16 + -0x18);
                    pcVar16 = pcVar18;
                }
                pcVar16 = pcVar14 + -0x70;
                uVar10 = __list_del_entry_valid(pcVar15);
                if ((uVar10 & 1) != 0) {
                    iVar2 = *(pcVar14 + 0x10);
                    piVar9 = *(pcVar14 + 0x18);
                    *(iVar2 + 8) = piVar9;
                    *piVar9 = iVar2;
                }
                *(pcVar14 + 0x10) = -0x2152ffffffffff00;
                *(pcVar14 + 0x18) = -0x2152fffffffffede;
                sysfs_remove_group(pcVar16,obj.va_md_s_attr_group);
                kobject_put(pcVar16);
                uVar10 = __list_del_entry_valid(pcVar14);
                if ((uVar10 & 1) != 0) {
                    iVar2 = *pcVar14;
                    piVar9 = *(pcVar14 + 8);
                    *(iVar2 + 8) = piVar9;
                    *piVar9 = iVar2;
                }
                *pcVar14 = -0x2152ffffffffff00;
                *(pcVar14 + 8) = -0x2152fffffffffede;
                kfree(pcVar16);
                pcVar14 = pcVar17;
            } while (pcVar17 != obj.va_md_s_attr_group);
        }
        mutex_unlock(obj.va_md_lock);
        kset_unregister(*0x8000158);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        vunmap(*0x80000d0);
        return 0;
    }
    return iVar4;
}


// ===== sym.qcom_va_md_unregister.cfi_jt @ 0x08001208 (size 8) =====

uint sym.qcom_va_md_unregister.cfi_jt(ulong param_1,int64_t *param_2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = msm_minidump_enabled();
    if (((uVar4 & 1) == 0) || ((*0x8000142 & 1) == 0)) {
        _printk(0x80004dd,"qcom_va_md_unregister");
        uVar6 = 0xffffffed;
    }
    else {
        mutex_lock(obj.va_md_lock);
        iVar5 = kset_find_obj(_segment.ehdr,param_1);
        if (iVar5 == 0) {
            _printk(0x800051c,"qcom_va_md_unregister",param_1);
            mutex_unlock(obj.va_md_lock);
            uVar6 = 0xffffffea;
        }
        else {
            kobject_put();
            piVar1 = iVar5 + 0x80;
            piVar7 = piVar1;
            do {
                piVar7 = *piVar7;
                if (piVar7 == piVar1) {
                    _printk(0x800046b,"qcom_va_md_unregister",param_1);
                    uVar6 = 0xffffffea;
                    goto code_r0x08001640;
                }
            } while (piVar7[-3] != *param_2);
            atomic_notifier_chain_unregister(iVar5 + 0x60,piVar7 + -3);
            uVar4 = __list_del_entry_valid(piVar7);
            if ((uVar4 & 1) != 0) {
                iVar2 = *piVar7;
                piVar3 = piVar7[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            kfree(piVar7 + -3);
            if (*piVar1 == piVar1) {
                uVar4 = __list_del_entry_valid(piVar1);
                if ((uVar4 & 1) != 0) {
                    iVar2 = *piVar1;
                    piVar1 = *(iVar5 + 0x88);
                    *(iVar2 + 8) = piVar1;
                    *piVar1 = iVar2;
                }
                *(iVar5 + 0x80) = 0xdead000000000100;
                *(iVar5 + 0x88) = 0xdead000000000122;
                sysfs_remove_group(iVar5,obj.va_md_s_attr_group);
                kobject_put(iVar5);
                uVar4 = __list_del_entry_valid(iVar5 + 0x70);
                if ((uVar4 & 1) != 0) {
                    iVar2 = *(iVar5 + 0x70);
                    piVar1 = *(iVar5 + 0x78);
                    *(iVar2 + 8) = piVar1;
                    *piVar1 = iVar2;
                }
                *(iVar5 + 0x70) = 0xdead000000000100;
                *(iVar5 + 0x78) = 0xdead000000000122;
                kfree(iVar5);
            }
            uVar6 = 0;
code_r0x08001640:
            mutex_unlock(obj.va_md_lock);
        }
    }
    return uVar6;
}


// ===== sym.qcom_va_md_register.cfi_jt @ 0x08001210 (size 8) =====

int sym.qcom_va_md_register.cfi_jt(ulong param_1,int64_t *param_2)

{
    int64_t *piVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = msm_minidump_enabled();
    if (((uVar3 & 1) == 0) || ((*0x8000142 & 1) == 0)) {
        _printk(0x80004dd,"qcom_va_md_register");
        return -0x13;
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x28);
    if (piVar4 == NULL) {
        return -0xc;
    }
    iVar5 = param_2[1];
    iVar8 = param_2[2];
    *piVar4 = *param_2;
    piVar4[1] = iVar5;
    piVar4[2] = iVar8;
    mutex_lock(obj.va_md_lock);
    iVar5 = kset_find_obj(_segment.ehdr,param_1);
    if (iVar5 == 0) {
        iVar5 = kmem_cache_alloc_trace(CONCAT44(_android_kmalloc_64_create,_msm_minidump_enabled),0xdc0,0x98);
        if (iVar5 == 0) {
            kfree(piVar4);
            iVar2 = -0xc;
            goto code_r0x08001454;
        }
        iVar8 = _segment.ehdr + 0x18;
        *(iVar5 + 0x20) = _segment.ehdr;
        iVar2 = kobject_init_and_add(iVar5,obj.va_md_kobj_type,iVar8,param_1);
        if (iVar2 == 0) {
            kobject_uevent(iVar5,0);
            iVar2 = sysfs_create_group(iVar5,obj.va_md_s_attr_group);
            if (iVar2 == 0) {
                *(iVar5 + 0x60) = 0;
                *(iVar5 + 0x68) = 0;
                piVar1 = iVar5 + 0x70;
                *(iVar5 + 0x80) = iVar5 + 0x80;
                *(iVar5 + 0x88) = iVar5 + 0x80;
                piVar7 = *0x8000150;
                *(iVar5 + 0x90) = 0;
                uVar3 = __list_add_valid(piVar1,piVar7,obj.va_md_s_attr_group);
                if ((uVar3 & 1) != 0) {
                    *0x8000150 = piVar1;
                    *(iVar5 + 0x70) = obj.va_md_s_attr_group;
                    *(iVar5 + 0x78) = piVar7;
                    *piVar7 = piVar1;
                }
                goto code_r0x080013b8;
            }
            uVar6 = 0x8000919;
        }
        else {
            uVar6 = 0x8000759;
        }
        _printk(uVar6,"qcom_va_md_register","qcom_va_md_register");
        kobject_put(iVar5);
        kfree(piVar4);
    }
    else {
        _printk(0x800062c,"qcom_va_md_register",param_1);
        kobject_put(iVar5);
code_r0x080013b8:
        piVar1 = iVar5 + 0x80;
        piVar7 = piVar1;
        do {
            piVar7 = *piVar7;
            if (piVar7 == piVar1) {
                atomic_notifier_chain_register(iVar5 + 0x60,piVar4);
                piVar9 = *(iVar5 + 0x88);
                piVar7 = piVar4 + 3;
                uVar3 = __list_add_valid(piVar7,piVar9,piVar1);
                iVar2 = 0;
                if ((uVar3 & 1) != 0) {
                    *(iVar5 + 0x88) = piVar7;
                    piVar4[3] = piVar1;
                    piVar4[4] = piVar9;
                    *piVar9 = piVar7;
                }
                goto code_r0x08001454;
            }
        } while (piVar7[-3] != *piVar4);
        _printk(0x80008b7,"qcom_va_md_register",param_1);
        kfree(piVar4);
        iVar2 = -0x11;
    }
code_r0x08001454:
    mutex_unlock(obj.va_md_lock);
    return iVar2;
}


// ===== sym.qcom_va_md_enabled.cfi_jt @ 0x08001218 (size 8) =====

uint8_t sym.qcom_va_md_enabled.cfi_jt(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = msm_minidump_enabled();
    if ((uVar2 & 1) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = *0x8000142 & 1;
    }
    return uVar1;
}


// ===== sym.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt @ 0x08001220 (size 8) =====

ulong sym.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt(void)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint *puVar10;
    ulong *in_x18;
    int64_t iVar11;
    code *pcVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint32_t *puVar15;
    uint64_t *puVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = _obj.va_md_kobj_type;
    puVar3 = *0x80000e8;
    if ((*0x80000d8 != 0) && (*0x8000141 != '\0')) {
        **0x80000e8 = 0x10102464c457f;
        puVar3[2] = 0x100b70004;
        *(puVar3 + 0x34) = 0x380040;
        *(puVar3 + 0x3a) = 0x40;
        iVar9 = *0x80000d0;
        puVar3[4] = iVar11 * 0x40 + 0x40;
        puVar3[5] = 0x40;
        puVar4 = *0x80000e8;
        *(puVar3 + 0x3e) = 1;
        *0x80000e0 = 1;
        iVar11 = puVar4[4] + *0x80000f8 * 0x38;
        puVar10 = puVar4 + (*(puVar4 + 0x3c) + 1) * 0x40 + puVar4[5];
        *(puVar4 + 0x3c) = *(puVar4 + 0x3c) + 2;
        puVar10[1] = 3;
        *(puVar10 + 6) = iVar11;
        iVar6 = _segment.ehdr;
        if ((*(puVar4 + 0x3e) == 0) ||
           (iVar5 = puVar4 + *(puVar4 + *(puVar4 + 0x3e) * 0x40 + puVar4[5] + 0x18), iVar5 == 0)) {
            iVar6 = 0;
        }
        else {
            iVar5 = strscpy(iVar5 + _segment.ehdr,"STR_TBL",0x20);
            _segment.ehdr = iVar6 + iVar5 + 1;
        }
        *puVar10 = iVar6;
        *(puVar10 + 8) = *0x8000108;
        if (_obj.va_md_kobj_type != 2) {
            uVar14 = 0;
            puVar15 = iVar9 + 0x28;
            uVar7 = *(puVar4 + 0x3c);
            iVar11 = _segment.ehdr + iVar11;
            do {
                iVar9 = puVar4[5];
                uVar13 = uVar7;
                puVar10 = puVar4 + uVar13 * 0x40 + iVar9;
                puVar10[1] = 1;
                iVar6 = _segment.ehdr;
                if (*(puVar4 + 0x3e) == 0) {
                    iVar5 = 0;
                }
                else {
                    iVar5 = 0;
                    if ((puVar15 + -8 != NULL) &&
                       (iVar1 = puVar4 + *(puVar4 + *(puVar4 + 0x3e) * 0x40 + puVar4[5] + 0x18), iVar1 != 0)) {
                        iVar5 = strscpy(iVar1 + _segment.ehdr,puVar15 + -8,0x20);
                        _segment.ehdr = iVar6 + iVar5 + 1;
                        iVar5 = iVar6;
                    }
                }
                *puVar10 = iVar5;
                puVar16 = puVar10 + 8;
                *puVar16 = *puVar15;
                *(puVar10 + 2) = 1;
                *(puVar10 + 6) = iVar11;
                iVar5 = puVar4[4];
                uVar8 = *(puVar4 + 7);
                puVar10 = puVar4 + uVar8 * 0x38 + iVar5;
                *puVar10 = 1;
                *(puVar10 + 2) = iVar11;
                uVar2 = *puVar15;
                *(puVar10 + 8) = uVar2;
                *(puVar10 + 10) = uVar2;
                puVar10[1] = 6;
                iVar6 = *(puVar15 + -10);
                if (iVar6 == 0) {
                    iVar6 = _segment.ehdr + iVar11;
                    *(puVar4 + uVar8 * 0x38 + iVar5 + 0x10) = iVar6;
                    *(puVar4 + uVar13 * 0x40 + iVar9 + 0x10) = iVar6;
                    pcVar12 = *(puVar15 + 2);
                    __cfi_slowpath_diag(0xe9a24bd020e62db5,pcVar12,0x8000310);
                    (*pcVar12)(_segment.ehdr + iVar11,*puVar16);
                }
                else {
                    *(puVar4 + uVar8 * 0x38 + iVar5 + 0x10) = iVar6;
                    *(puVar4 + uVar13 * 0x40 + iVar9 + 0x10) = iVar6;
                    memcpy(_segment.ehdr + iVar11,iVar6,*puVar16);
                }
                uVar14 = uVar14 + 1;
                puVar15 = puVar15 + 0x10;
                iVar11 = *puVar16 + iVar11;
                uVar7 = *(puVar4 + 0x3c) + 1;
                uVar13 = _segment.ehdr - 2;
                *(puVar4 + 0x3c) = uVar7;
                *(puVar4 + 7) = *(puVar4 + 7) + 1;
            } while (uVar14 < uVar13);
        }
    }
    *0x8000140 = 0;
    return 0;
}


// ===== sym.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt @ 0x08001228 (size 8) =====

ulong sym.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    code *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8000140 == '\0') {
        *0x8000140 = '\x01';
        pcVar7 = _obj.va_md_s_attr_group;
        if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
            do {
                if (pcVar7[0x20] != 0x0) {
                    atomic_notifier_call_chain(pcVar7 + -0x10,0,0);
                }
                pcVar7 = *pcVar7;
            } while (pcVar7 != obj.va_md_s_attr_group);
        }
        iVar4 = *0x80000d0;
        if (_segment.ehdr != 0) {
            uVar10 = (_segment.ehdr & 0xffffffff) * 0x40;
            uVar8 = *0x80000c8;
            iVar1 = *0x80000d0 + uVar10;
            if ((*0x80000d0 + uVar8) - 1 < iVar1 + 0x3fU) {
                _printk(0x800042c,"qcom_va_md_calc_elf_size");
            }
            else {
                iVar9 = 0;
                do {
                    if (iVar9 == 0) {
                        iVar6 = 0x142;
                        _segment.ehdr = uVar10;
                    }
                    else {
                        iVar6 = 0x79;
                    }
                    uVar3 = _segment.ehdr;
                    iVar2 = iVar4 + iVar9;
                    iVar5 = strlen(iVar2 + 8);
                    _segment.ehdr = (iVar5 + iVar6 + *(iVar2 + 0x28)) + uVar3;
                    if (uVar8 < _segment.ehdr) {
                        _printk(0x800071a,"qcom_va_md_calc_size");
                        return 0;
                    }
                    if (iVar9 == 0) {
                        *0x8000100 = 0;
                        *0x8000108 = 9;
                        *0x80000f8 = 1;
                        _obj.va_md_kobj_type = 3;
                        *0x80000e8 = iVar1;
                    }
                    else {
                        _obj.va_md_kobj_type = _obj.va_md_kobj_type + 1;
                        *0x80000f8 = *0x80000f8 + 1;
                    }
                    *0x8000108 = *0x8000108 + iVar5 + 1;
                    iVar9 = iVar9 + 0x40;
                    *0x8000100 = *0x8000100 + *(iVar2 + 0x28);
                } while (uVar10 - iVar9 != 0);
                memset(*0x80000e8,0,
                       *0x8000108 + *0x80000f8 * 0x38 + _obj.va_md_kobj_type * 0x40 + *0x8000100 + 0x43U &
                       0xfffffffffffffffc);
                strscpy(0x8000110,"KVA_DUMP",0xd);
                *0x8000130 = _obj.va_md_lock + *0x80000d8 * 0x40;
                *0x8000138 = *0x80000f8 * 0x38 + _obj.va_md_kobj_type * 0x40 + *0x8000100 + *0x8000108 + 0x43U &
                             0xfffffffffffffffc;
                *0x8000128 = *0x80000e8;
                iVar6 = msm_minidump_add_region(0x8000110);
                if (iVar6 < 0) {
                    _printk(0x80007d7,"qcom_va_md_minidump_registration");
                }
                *0x8000141 = iVar6 >= 0;
            }
        }
    }
    return 0;
}


// ===== sym.qcom_va_md_enabled @ 0x08001230 (size 64) =====

uint8_t sym.qcom_va_md_enabled(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar2 = msm_minidump_enabled();
    if ((uVar2 & 1) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = *0x8000142 & 1;
    }
    return uVar1;
}


// ===== sym.qcom_va_md_register @ 0x08001270 (size 660) =====

int sym.qcom_va_md_register(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *in_x18;
    int64_t *piVar9;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar3 = msm_minidump_enabled();
    if (((uVar3 & 1) == 0) || ((*0x8000142 & 1) == 0)) {
        _printk(0x80004dd,"qcom_va_md_register");
        return -0x13;
    }
    iVar5 = 0x38;
    if (android_kmalloc_64_create != 0x0) {
        iVar5 = 0x30;
    }
    piVar4 = kmem_cache_alloc_trace(*(kmalloc_caches + iVar5),0xdc0,0x28);
    if (piVar4 == NULL) {
        return -0xc;
    }
    iVar5 = *(arg2 + 8);
    iVar8 = *(arg2 + 0x10);
    *piVar4 = *arg2;
    piVar4[1] = iVar5;
    piVar4[2] = iVar8;
    mutex_lock(obj.va_md_lock);
    iVar5 = kset_find_obj(_segment.ehdr,arg1);
    if (iVar5 == 0) {
        iVar5 = kmem_cache_alloc_trace(CONCAT44(_android_kmalloc_64_create,_msm_minidump_enabled),0xdc0,0x98);
        if (iVar5 == 0) {
            kfree(piVar4);
            iVar2 = -0xc;
            goto code_r0x08001454;
        }
        iVar8 = _segment.ehdr + 0x18;
        *(iVar5 + 0x20) = _segment.ehdr;
        iVar2 = kobject_init_and_add(iVar5,obj.va_md_kobj_type,iVar8,arg1);
        if (iVar2 == 0) {
            kobject_uevent(iVar5,0);
            iVar2 = sysfs_create_group(iVar5,obj.va_md_s_attr_group);
            if (iVar2 == 0) {
                *(iVar5 + 0x60) = 0;
                *(iVar5 + 0x68) = 0;
                piVar1 = iVar5 + 0x70;
                *(iVar5 + 0x80) = iVar5 + 0x80;
                *(iVar5 + 0x88) = iVar5 + 0x80;
                piVar7 = *0x8000150;
                *(iVar5 + 0x90) = 0;
                uVar3 = __list_add_valid(piVar1,piVar7,obj.va_md_s_attr_group);
                if ((uVar3 & 1) != 0) {
                    *0x8000150 = piVar1;
                    *(iVar5 + 0x70) = obj.va_md_s_attr_group;
                    *(iVar5 + 0x78) = piVar7;
                    *piVar7 = piVar1;
                }
                goto code_r0x080013b8;
            }
            uVar6 = 0x8000919;
        }
        else {
            uVar6 = 0x8000759;
        }
        _printk(uVar6,"qcom_va_md_register","qcom_va_md_register");
        kobject_put(iVar5);
        kfree(piVar4);
    }
    else {
        _printk(0x800062c,"qcom_va_md_register",arg1);
        kobject_put(iVar5);
code_r0x080013b8:
        piVar1 = iVar5 + 0x80;
        piVar7 = piVar1;
        do {
            piVar7 = *piVar7;
            if (piVar7 == piVar1) {
                atomic_notifier_chain_register(iVar5 + 0x60,piVar4);
                piVar9 = *(iVar5 + 0x88);
                piVar7 = piVar4 + 3;
                uVar3 = __list_add_valid(piVar7,piVar9,piVar1);
                iVar2 = 0;
                if ((uVar3 & 1) != 0) {
                    *(iVar5 + 0x88) = piVar7;
                    piVar4[3] = piVar1;
                    piVar4[4] = piVar9;
                    *piVar9 = piVar7;
                }
                goto code_r0x08001454;
            }
        } while (piVar7[-3] != *piVar4);
        _printk(0x80008b7,"qcom_va_md_register",arg1);
        kfree(piVar4);
        iVar2 = -0x11;
    }
code_r0x08001454:
    mutex_unlock(obj.va_md_lock);
    return iVar2;
}


// ===== sym.qcom_va_md_unregister @ 0x08001504 (size 464) =====

uint sym.qcom_va_md_unregister(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong *in_x18;
    uint uVar6;
    int64_t *piVar7;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar4 = msm_minidump_enabled();
    if (((uVar4 & 1) == 0) || ((*0x8000142 & 1) == 0)) {
        _printk(0x80004dd,"qcom_va_md_unregister");
        uVar6 = 0xffffffed;
    }
    else {
        mutex_lock(obj.va_md_lock);
        iVar5 = kset_find_obj(_segment.ehdr,arg1);
        if (iVar5 == 0) {
            _printk(0x800051c,"qcom_va_md_unregister",arg1);
            mutex_unlock(obj.va_md_lock);
            uVar6 = 0xffffffea;
        }
        else {
            kobject_put();
            piVar1 = iVar5 + 0x80;
            piVar7 = piVar1;
            do {
                piVar7 = *piVar7;
                if (piVar7 == piVar1) {
                    _printk(0x800046b,"qcom_va_md_unregister",arg1);
                    uVar6 = 0xffffffea;
                    goto code_r0x08001640;
                }
            } while (piVar7[-3] != *arg2);
            atomic_notifier_chain_unregister(iVar5 + 0x60,piVar7 + -3);
            uVar4 = __list_del_entry_valid(piVar7);
            if ((uVar4 & 1) != 0) {
                iVar2 = *piVar7;
                piVar3 = piVar7[1];
                *(iVar2 + 8) = piVar3;
                *piVar3 = iVar2;
            }
            *piVar7 = -0x2152ffffffffff00;
            piVar7[1] = -0x2152fffffffffede;
            kfree(piVar7 + -3);
            if (*piVar1 == piVar1) {
                uVar4 = __list_del_entry_valid(piVar1);
                if ((uVar4 & 1) != 0) {
                    iVar2 = *piVar1;
                    piVar1 = *(iVar5 + 0x88);
                    *(iVar2 + 8) = piVar1;
                    *piVar1 = iVar2;
                }
                *(iVar5 + 0x80) = 0xdead000000000100;
                *(iVar5 + 0x88) = 0xdead000000000122;
                sysfs_remove_group(iVar5,obj.va_md_s_attr_group);
                kobject_put(iVar5);
                uVar4 = __list_del_entry_valid(iVar5 + 0x70);
                if ((uVar4 & 1) != 0) {
                    iVar2 = *(iVar5 + 0x70);
                    piVar1 = *(iVar5 + 0x78);
                    *(iVar2 + 8) = piVar1;
                    *piVar1 = iVar2;
                }
                *(iVar5 + 0x70) = 0xdead000000000100;
                *(iVar5 + 0x78) = 0xdead000000000122;
                kfree(iVar5);
            }
            uVar6 = 0;
code_r0x08001640:
            mutex_unlock(obj.va_md_lock);
        }
    }
    return uVar6;
}


// ===== sym.qcom_va_md_add_region @ 0x080016d8 (size 1232) =====

ulong sym.qcom_va_md_add_region(int64_t arg1)

{
    uint64_t *puVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    code *pcVar6;
    ulong uVar7;
    ulong uVar8;
    char *pcVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    uint uVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    ulong uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    ulong *in_x18;
    ulong *puVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    int *piVar22;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar5 = *0x80000d0;
    if (*0x8000140 != '\0') {
        if (((*arg1 != 0) == (*(arg1 + 0x30) == 0)) && (*(arg1 + 0x28) != 0)) {
            uVar11 = _segment.ehdr;
            if (0xffff < _segment.ehdr) {
                _printk(0x80005dc,"qcom_va_md_add_region");
                return 0xffffffe4;
            }
            if ((*0x80000d0 + *0x80000c8) - 1 < *0x80000d0 + uVar11 * 0x40 + 0x3f) {
                _printk(0x8000679,"qcom_va_md_add_region");
                return 0xfffffff4;
            }
            if ((*arg1 == 0) || (_segment.ehdr == 0)) {
                puVar19 = *0x80000d0 + uVar11 * 0x40;
                uVar8 = strlen(arg1 + 8);
                uVar7 = *(arg1 + 8);
                uVar15 = *(arg1 + 0x10);
                *puVar19 = *arg1;
                puVar19[1] = uVar7;
                puVar19[2] = uVar15;
                uVar15 = *(arg1 + 0x30);
                uVar7 = *(arg1 + 0x18);
                uVar3 = *(arg1 + 0x20);
                puVar19[5] = *(arg1 + 0x28);
                puVar19[6] = uVar15;
                puVar19[3] = uVar7;
                puVar19[4] = uVar3;
                if ((0x1f < uVar8) && (obj.va_md_add_entry.__already_done == 0x0)) {
                    obj.va_md_add_entry.__already_done = 0x1;
                    __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",arg1 + 8,uVar8,0x1f
                                 );
    //WARNING: Does not return
                    pcVar6 = SoftwareBreakpoint(0x800,0x8001b60);
                    (*pcVar6)();
                }
                *(puVar19 + 0x27) = 0;
                uVar12 = 0xfffffffe;
                if (*arg1 != 0) {
                    uVar12 = 0xffffffff;
                }
                *(puVar19 + 7) = uVar12;
                *(puVar19 + 0x3c) = uVar12;
                _segment.ehdr = _segment.ehdr + 1;
                return 0;
            }
            uVar21 = 0;
            uVar20 = 0;
            piVar22 = *0x80000d0 + 0x3c;
            puVar13 = *0x80000d0 + 0x38;
            do {
                while( true ) {
                    uVar4 = *puVar13;
                    uVar10 = uVar11;
                    if ((uVar4 == 0xfffffffe) && (*piVar22 == -2)) {
                        uVar20 = uVar20 + 1;
                        goto code_r0x0800185c;
                    }
                    uVar17 = *arg1;
                    puVar1 = CONCAT44(*0x8000004,_segment.ehdr) + uVar21 * 0x40;
                    uVar14 = *puVar1;
                    uVar16 = (uVar14 + puVar1[5]) - 1;
                    if (((uVar14 <= uVar17 && uVar17 <= uVar16) ||
                        (uVar18 = (uVar17 + *(arg1 + 0x28)) - 1, uVar14 <= uVar18 && uVar18 <= uVar16)) ||
                       ((uVar17 <= uVar14 && (uVar16 <= uVar18)))) {
                        *(arg1 + 0x27) = 0;
                        uVar7 = 0x800086e;
                        pcVar9 = "va_md_tree_insert";
                        goto code_r0x08001a94;
                    }
                    if ((uVar14 <= uVar17) || (uVar14 <= uVar18)) break;
                    uVar20 = uVar4;
                    if (uVar4 == 0xffffffff) {
                        *puVar13 = uVar10;
                        puVar19 = *0x80000d0 + *0x80000d8 * 0x40;
                        uVar8 = strlen(arg1 + 8);
                        uVar7 = *(arg1 + 8);
                        uVar15 = *(arg1 + 0x10);
                        *puVar19 = *arg1;
                        puVar19[1] = uVar7;
                        puVar19[2] = uVar15;
                        uVar15 = *(arg1 + 0x30);
                        uVar7 = *(arg1 + 0x18);
                        uVar3 = *(arg1 + 0x20);
                        puVar19[5] = *(arg1 + 0x28);
                        puVar19[6] = uVar15;
                        puVar19[3] = uVar7;
                        puVar19[4] = uVar3;
                        if ((0x1f < uVar8) && (obj.va_md_add_entry.__already_done == 0x0)) {
                            obj.va_md_add_entry.__already_done = 0x1;
                            __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",arg1 + 8,
                                          uVar8,0x1f);
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x8001b3c);
                            (*pcVar6)();
                        }
code_r0x08001980:
                        *(puVar19 + 0x27) = 0;
                        uVar12 = 0xfffffffe;
                        if (*arg1 != 0) {
                            uVar12 = 0xffffffff;
                        }
                        *(puVar19 + 7) = uVar12;
                        *(puVar19 + 0x3c) = uVar12;
                        uVar11 = _segment.ehdr + 1;
                        _segment.ehdr = _segment.ehdr + 1;
                        goto joined_r0x080018fc;
                    }
code_r0x0800185c:
                    uVar21 = uVar20;
                    iVar2 = iVar5 + uVar21 * 0x40;
                    puVar13 = iVar2 + 0x38;
                    piVar22 = iVar2 + 0x3c;
                    if (uVar10 <= uVar20) goto joined_r0x080018fc;
                }
                if (uVar16 < uVar17 && uVar16 < uVar18) {
                    puVar13 = iVar5 + uVar20 * 0x40 + 0x3c;
                    uVar20 = *puVar13;
                    if (uVar20 == 0xffffffff) {
                        *puVar13 = uVar10;
                        puVar19 = *0x80000d0 + *0x80000d8 * 0x40;
                        uVar8 = strlen(arg1 + 8);
                        uVar7 = *(arg1 + 8);
                        uVar15 = *(arg1 + 0x10);
                        *puVar19 = *arg1;
                        puVar19[1] = uVar7;
                        puVar19[2] = uVar15;
                        uVar15 = *(arg1 + 0x30);
                        uVar7 = *(arg1 + 0x18);
                        uVar3 = *(arg1 + 0x20);
                        puVar19[5] = *(arg1 + 0x28);
                        puVar19[6] = uVar15;
                        puVar19[3] = uVar7;
                        puVar19[4] = uVar3;
                        if ((0x1f < uVar8) && (obj.va_md_add_entry.__already_done == 0x0)) {
                            obj.va_md_add_entry.__already_done = 0x1;
                            __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",arg1 + 8,
                                          uVar8,0x1f);
    //WARNING: Does not return
                            pcVar6 = SoftwareBreakpoint(0x800,0x8001ba8);
                            (*pcVar6)();
                        }
                        goto code_r0x08001980;
                    }
                    goto code_r0x0800185c;
                }
                _printk(0x800082d,"va_md_tree_insert");
                uVar11 = _segment.ehdr;
            } while (uVar20 < _segment.ehdr);
joined_r0x080018fc:
            if (_segment.ehdr != 0) {
                return 0;
            }
            puVar19 = (*0x8000004 << 0x20) + uVar11 * 0x40;
            uVar8 = strlen(arg1 + 8);
            uVar7 = *(arg1 + 8);
            uVar15 = *(arg1 + 0x10);
            *puVar19 = *arg1;
            puVar19[1] = uVar7;
            puVar19[2] = uVar15;
            uVar15 = *(arg1 + 0x30);
            uVar7 = *(arg1 + 0x18);
            uVar3 = *(arg1 + 0x20);
            puVar19[5] = *(arg1 + 0x28);
            puVar19[6] = uVar15;
            puVar19[3] = uVar7;
            puVar19[4] = uVar3;
            if ((0x1f < uVar8) && (obj.va_md_add_entry.__already_done == 0x0)) {
                obj.va_md_add_entry.__already_done = 0x1;
                __warn_printk("Client entry name %s (len = %u) is greater than expected %u\n",arg1 + 8,uVar8,0x1f);
    //WARNING: Does not return
                pcVar6 = SoftwareBreakpoint(0x800,0x8001b84);
                (*pcVar6)();
            }
            *(puVar19 + 0x27) = 0;
            uVar12 = 0xfffffffe;
            if (*arg1 != 0) {
                uVar12 = 0xffffffff;
            }
            *(puVar19 + 7) = uVar12;
            *(puVar19 + 0x3c) = uVar12;
            _segment.ehdr = _segment.ehdr + 1;
            return 0;
        }
        uVar7 = 0x80003b1;
        pcVar9 = "qcom_va_md_add_region";
        *(arg1 + 0x27) = 0;
code_r0x08001a94:
        _printk(uVar7,pcVar9,arg1 + 8);
    }
    return 0xffffffea;
}


// ===== sym.attr_show @ 0x08001bac (size 148) =====

ulong sym.attr_show(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x10);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (1 < (pcVar2 + -0x80011e8 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x80002d0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x08001c40 (size 148) =====

ulong sym.attr_store(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    pcVar2 = *(arg2 + 0x18);
    if (pcVar2 == NULL) {
        uVar1 = 0xfffffffffffffffb;
    }
    else {
        if (1 < (pcVar2 + -0x80011c0 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0xfaa7b7b8dc0fae98,pcVar2,0x80002f0);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.enable_show @ 0x08001cd4 (size 64) =====

int64_t sym.enable_show(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0x1000,"enable: %u\n",*(arg1 + 0x90));
    return iVar1;
}


// ===== sym.enable_store @ 0x08001d14 (size 164) =====

uint64_t sym.enable_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    code *pcVar14;
    uint64_t uVar15;
    code *pcVar16;
    code *pcVar17;
    code *pcVar18;
    code *pcVar19;
    ulong unaff_x30;
    uint64_t uStack_a8;
    ulong uStack_a0;
    int64_t iStack_98;
    uchar *puStack_90;
    code *pcStack_88;
    uchar auStack_3c [4];
    int64_t iStack_38;
    
    *in_x18 = unaff_x30;
    iVar1 = sp_el0;
    iStack_38 = *(iVar1 + 0x5e0);
    auStack_3c[0] = 0;
    iVar3 = kstrtobool(arg2,auStack_3c);
    if (iVar3 == 0) {
        *(arg1 + 0x90) = auStack_3c[0];
    }
    else {
        _printk(0x80006f1,"enable_store");
        arg3 = iVar3;
    }
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) == iStack_38) {
        return arg3;
    }
    iVar5 = __stack_chk_fail();
    *extraout_x18 = sym.qcom_va_md_driver_probe;
    pcStack_88 = sym.qcom_va_md_driver_probe;
    iVar6 = sp_el0;
    iVar1 = iVar5 + 0x10;
    iStack_98 = *(iVar6 + 0x5e0);
    uStack_a8 = 0;
    puStack_90 = &stack0xffffffffffffffd0;
    uVar4 = dma_set_mask(iVar1,0xffffffffffffffff);
    uVar15 = uVar4;
    if (uVar4 != 0) goto code_r0x080020d0;
    dma_set_coherent_mask(iVar1,0xffffffffffffffff);
    uStack_a0 = 0;
    iVar6 = of_parse_phandle(*(iVar5 + 0x300),"memory-region",0);
    if ((iVar6 == 0) || (uVar4 = of_reserved_mem_device_init_by_idx(iVar1,*(iVar5 + 0x300),0), uVar4 == 0)) {
        uVar4 = of_property_read_variable_u32_array(iVar6,"size",&uStack_a0,2,0);
        if (-1 < uVar4) {
            _segment.ehdr = uStack_a0._4_4_;
            iVar6 = dma_alloc_attrs(iVar1,uStack_a0._4_4_,&uStack_a8,0xcc0,0);
            if (iVar6 != 0) {
                dma_free_attrs(iVar1,_segment.ehdr,iVar6,uStack_a8,0);
                iVar6 = _kmalloc_caches;
                iVar8 = *(iVar5 + 0x2c8);
                uVar15 = uStack_a8;
                if (iVar8 != 0) {
                    uVar15 = *(iVar8 + 0x10);
                    if (uVar15 != 0) {
                        piVar10 = iVar8 + 0x18;
                        do {
                            if (piVar10[-2] <= uStack_a8 && uStack_a8 - piVar10[-2] < uVar15) {
                                uVar15 = *piVar10 + uStack_a8;
                                goto code_r0x08001eec;
                            }
                            uVar15 = piVar10[3];
                            piVar10 = piVar10 + 4;
                        } while (uVar15 != 0);
                    }
                    uVar15 = 0xffffffffffffffff;
                }
code_r0x08001eec:
                uVar4 = _segment.ehdr + 0xfff;
                uVar2 = uVar4 >> 0xc;
                iVar8 = __kmalloc(uVar2 << 3,0xcc0);
                if (iVar8 != 0) {
                    if (0xfff < uVar4) {
                        uVar4 = uVar2;
                        if (uVar2 < 2) {
                            uVar4 = 1;
                        }
                        uVar11 = uVar4;
                        if (uVar4 < 2) {
                            uVar12 = 0;
                        }
                        else {
                            uVar12 = uVar11 & 0xffffe;
                            iVar9 = (iVar6 >> 0xc) * -0x40 + -0x200000000 + (uVar15 >> 0xc) * 0x40;
                            piVar10 = iVar8 + 8;
                            uVar13 = uVar12;
                            do {
                                uVar13 = uVar13 - 2;
                                piVar10[-1] = iVar9;
                                *piVar10 = iVar9 + 0x40;
                                iVar9 = iVar9 + 0x80;
                                piVar10 = piVar10 + 2;
                            } while (uVar13 != 0);
                            if (uVar12 == uVar11) goto code_r0x08001f9c;
                        }
                        iVar9 = uVar11 - uVar12;
                        iVar6 = ((uVar12 + (uVar15 >> 0xc)) - (iVar6 >> 0xc)) * 0x40 + -0x200000000;
                        piVar10 = iVar8 + uVar12 * 8;
                        do {
                            *piVar10 = iVar6;
                            iVar9 = iVar9 + -1;
                            iVar6 = iVar6 + 0x40;
                            piVar10 = piVar10 + 1;
                        } while (iVar9 != 0);
                    }
code_r0x08001f9c:
                    uVar7 = 0x6800000000070b;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar7 = 0x68000000000f0b;
                    }
                    uVar7 = vmap(iVar8,uVar2,0x10,uVar7);
                    kfree(iVar8);
                    iVar6 = *(iVar5 + 0x2c8);
                    _obj.va_md_lock = uStack_a8;
                    if (iVar6 != 0) {
                        uVar15 = *(iVar6 + 0x10);
                        if (uVar15 != 0) {
                            piVar10 = iVar6 + 0x18;
                            do {
                                if (piVar10[-2] <= uStack_a8 && uStack_a8 - piVar10[-2] < uVar15) {
                                    _obj.va_md_lock = *piVar10 + uStack_a8;
                                    goto code_r0x08002018;
                                }
                                uVar15 = piVar10[3];
                                piVar10 = piVar10 + 4;
                            } while (uVar15 != 0);
                        }
                        _obj.va_md_lock = 0xffffffffffffffff;
                    }
code_r0x08002018:
                    *0x80000d0 = uVar7;
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    _obj.va_md_s_attr_group = obj.va_md_s_attr_group;
                    *0x8000150 = obj.va_md_s_attr_group;
                    *0x8000158 = kset_create_and_add("va-minidump",0,_mutex_lock);
                    if (*0x8000158 == 0) {
                        _dev_err(iVar1,"Failed to create kset for va-minidump\n");
                        vunmap(CONCAT44(*0x8000004,_segment.ehdr));
                        uVar15 = 0xfffffff4;
                    }
                    else {
                        *0x8000142 = 1;
                        uVar15 = 0;
                    }
                    goto code_r0x080020d0;
                }
            }
            uVar15 = 0xfffffff4;
            goto code_r0x080020d0;
        }
        uVar7 = 0x80004a7;
    }
    else {
        uVar7 = 0x80003e1;
    }
    uVar15 = uVar4;
    _printk(uVar7,"qcom_va_md_reserve_mem",uVar15);
    _dev_err(iVar1,"CMA for VA based minidump is not present\n");
code_r0x080020d0:
    iVar1 = sp_el0;
    if (*(iVar1 + 0x5e0) != iStack_98) {
        __stack_chk_fail();
        *extraout_x18_00 = sym.qcom_va_md_driver_remove;
        mutex_lock(obj.va_md_lock);
        pcVar14 = _obj.va_md_s_attr_group;
        if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
            do {
                pcVar16 = pcVar14 + 0x10;
                pcVar18 = *pcVar14;
                pcVar17 = *pcVar16;
                while (pcVar17 != pcVar16) {
                    pcVar19 = *pcVar17;
                    atomic_notifier_chain_unregister(pcVar14 + -0x10,pcVar17 + -0x18);
                    uVar15 = __list_del_entry_valid(pcVar17);
                    if ((uVar15 & 1) != 0) {
                        iVar1 = *pcVar17;
                        piVar10 = *(pcVar17 + 8);
                        *(iVar1 + 8) = piVar10;
                        *piVar10 = iVar1;
                    }
                    *pcVar17 = -0x2152ffffffffff00;
                    *(pcVar17 + 8) = -0x2152fffffffffede;
                    kfree(pcVar17 + -0x18);
                    pcVar17 = pcVar19;
                }
                pcVar17 = pcVar14 + -0x70;
                uVar15 = __list_del_entry_valid(pcVar16);
                if ((uVar15 & 1) != 0) {
                    iVar1 = *(pcVar14 + 0x10);
                    piVar10 = *(pcVar14 + 0x18);
                    *(iVar1 + 8) = piVar10;
                    *piVar10 = iVar1;
                }
                *(pcVar14 + 0x10) = -0x2152ffffffffff00;
                *(pcVar14 + 0x18) = -0x2152fffffffffede;
                sysfs_remove_group(pcVar17,obj.va_md_s_attr_group);
                kobject_put(pcVar17);
                uVar15 = __list_del_entry_valid(pcVar14);
                if ((uVar15 & 1) != 0) {
                    iVar1 = *pcVar14;
                    piVar10 = *(pcVar14 + 8);
                    *(iVar1 + 8) = piVar10;
                    *piVar10 = iVar1;
                }
                *pcVar14 = -0x2152ffffffffff00;
                *(pcVar14 + 8) = -0x2152fffffffffede;
                kfree(pcVar17);
                pcVar14 = pcVar18;
            } while (pcVar18 != obj.va_md_s_attr_group);
        }
        mutex_unlock(obj.va_md_lock);
        kset_unregister(*0x8000158);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        vunmap(*0x80000d0);
        return 0;
    }
    return uVar15;
}


// ===== sym.qcom_va_md_driver_probe @ 0x08001db8 (size 892) =====

int sym.qcom_va_md_driver_probe(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    code *pcVar14;
    code *pcVar15;
    code *pcVar16;
    code *pcVar17;
    code *pcVar18;
    ulong unaff_x30;
    uint64_t uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar5 = sp_el0;
    iVar2 = arg1 + 0x10;
    iStack_58 = *(iVar5 + 0x5e0);
    uStack_68 = 0;
    iVar4 = dma_set_mask(iVar2,0xffffffffffffffff);
    if (iVar4 != 0) goto code_r0x080020d0;
    dma_set_coherent_mask(iVar2,0xffffffffffffffff);
    uStack_60 = 0;
    iVar5 = of_parse_phandle(*(arg1 + 0x300),"memory-region",0);
    if ((iVar5 == 0) || (iVar4 = of_reserved_mem_device_init_by_idx(iVar2,*(arg1 + 0x300),0), iVar4 == 0)) {
        iVar4 = of_property_read_variable_u32_array(iVar5,"size",&uStack_60,2,0);
        if (-1 < iVar4) {
            _segment.ehdr = uStack_60._4_4_;
            iVar5 = dma_alloc_attrs(iVar2,uStack_60._4_4_,&uStack_68,0xcc0,0);
            if (iVar5 != 0) {
                dma_free_attrs(iVar2,_segment.ehdr,iVar5,uStack_68,0);
                iVar5 = _kmalloc_caches;
                iVar7 = *(arg1 + 0x2c8);
                uVar10 = uStack_68;
                if (iVar7 != 0) {
                    uVar10 = *(iVar7 + 0x10);
                    if (uVar10 != 0) {
                        piVar9 = iVar7 + 0x18;
                        do {
                            if (piVar9[-2] <= uStack_68 && uStack_68 - piVar9[-2] < uVar10) {
                                uVar10 = *piVar9 + uStack_68;
                                goto code_r0x08001eec;
                            }
                            uVar10 = piVar9[3];
                            piVar9 = piVar9 + 4;
                        } while (uVar10 != 0);
                    }
                    uVar10 = 0xffffffffffffffff;
                }
code_r0x08001eec:
                uVar1 = _segment.ehdr + 0xfff;
                uVar3 = uVar1 >> 0xc;
                iVar7 = __kmalloc(uVar3 << 3,0xcc0);
                if (iVar7 != 0) {
                    if (0xfff < uVar1) {
                        uVar1 = uVar3;
                        if (uVar3 < 2) {
                            uVar1 = 1;
                        }
                        uVar11 = uVar1;
                        if (uVar1 < 2) {
                            uVar12 = 0;
                        }
                        else {
                            uVar12 = uVar11 & 0xffffe;
                            iVar8 = (iVar5 >> 0xc) * -0x40 + -0x200000000 + (uVar10 >> 0xc) * 0x40;
                            piVar9 = iVar7 + 8;
                            uVar13 = uVar12;
                            do {
                                uVar13 = uVar13 - 2;
                                piVar9[-1] = iVar8;
                                *piVar9 = iVar8 + 0x40;
                                iVar8 = iVar8 + 0x80;
                                piVar9 = piVar9 + 2;
                            } while (uVar13 != 0);
                            if (uVar12 == uVar11) goto code_r0x08001f9c;
                        }
                        iVar8 = uVar11 - uVar12;
                        iVar5 = ((uVar12 + (uVar10 >> 0xc)) - (iVar5 >> 0xc)) * 0x40 + -0x200000000;
                        piVar9 = iVar7 + uVar12 * 8;
                        do {
                            *piVar9 = iVar5;
                            iVar8 = iVar8 + -1;
                            iVar5 = iVar5 + 0x40;
                            piVar9 = piVar9 + 1;
                        } while (iVar8 != 0);
                    }
code_r0x08001f9c:
                    uVar6 = 0x6800000000070b;
                    if (arm64_use_ng_mappings != 0x0) {
                        uVar6 = 0x68000000000f0b;
                    }
                    uVar6 = vmap(iVar7,uVar3,0x10,uVar6);
                    kfree(iVar7);
                    iVar5 = *(arg1 + 0x2c8);
                    _obj.va_md_lock = uStack_68;
                    if (iVar5 != 0) {
                        uVar10 = *(iVar5 + 0x10);
                        if (uVar10 != 0) {
                            piVar9 = iVar5 + 0x18;
                            do {
                                if (piVar9[-2] <= uStack_68 && uStack_68 - piVar9[-2] < uVar10) {
                                    _obj.va_md_lock = *piVar9 + uStack_68;
                                    goto code_r0x08002018;
                                }
                                uVar10 = piVar9[3];
                                piVar9 = piVar9 + 4;
                            } while (uVar10 != 0);
                        }
                        _obj.va_md_lock = 0xffffffffffffffff;
                    }
code_r0x08002018:
                    *0x80000d0 = uVar6;
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    atomic_notifier_chain_register
                              (panic_notifier_list,
                               reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
                    _obj.va_md_s_attr_group = obj.va_md_s_attr_group;
                    *0x8000150 = obj.va_md_s_attr_group;
                    *0x8000158 = kset_create_and_add("va-minidump",0,_mutex_lock);
                    if (*0x8000158 == 0) {
                        _dev_err(iVar2,"Failed to create kset for va-minidump\n");
                        vunmap(CONCAT44(*0x8000004,_segment.ehdr));
                        iVar4 = -0xc;
                    }
                    else {
                        *0x8000142 = 1;
                        iVar4 = 0;
                    }
                    goto code_r0x080020d0;
                }
            }
            iVar4 = -0xc;
            goto code_r0x080020d0;
        }
        uVar6 = 0x80004a7;
    }
    else {
        uVar6 = 0x80003e1;
    }
    _printk(uVar6,"qcom_va_md_reserve_mem",iVar4);
    _dev_err(iVar2,"CMA for VA based minidump is not present\n");
code_r0x080020d0:
    iVar2 = sp_el0;
    if (*(iVar2 + 0x5e0) != iStack_58) {
        __stack_chk_fail();
        *extraout_x18 = sym.qcom_va_md_driver_remove;
        mutex_lock(obj.va_md_lock);
        pcVar14 = _obj.va_md_s_attr_group;
        if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
            do {
                pcVar15 = pcVar14 + 0x10;
                pcVar17 = *pcVar14;
                pcVar16 = *pcVar15;
                while (pcVar16 != pcVar15) {
                    pcVar18 = *pcVar16;
                    atomic_notifier_chain_unregister(pcVar14 + -0x10,pcVar16 + -0x18);
                    uVar10 = __list_del_entry_valid(pcVar16);
                    if ((uVar10 & 1) != 0) {
                        iVar2 = *pcVar16;
                        piVar9 = *(pcVar16 + 8);
                        *(iVar2 + 8) = piVar9;
                        *piVar9 = iVar2;
                    }
                    *pcVar16 = -0x2152ffffffffff00;
                    *(pcVar16 + 8) = -0x2152fffffffffede;
                    kfree(pcVar16 + -0x18);
                    pcVar16 = pcVar18;
                }
                pcVar16 = pcVar14 + -0x70;
                uVar10 = __list_del_entry_valid(pcVar15);
                if ((uVar10 & 1) != 0) {
                    iVar2 = *(pcVar14 + 0x10);
                    piVar9 = *(pcVar14 + 0x18);
                    *(iVar2 + 8) = piVar9;
                    *piVar9 = iVar2;
                }
                *(pcVar14 + 0x10) = -0x2152ffffffffff00;
                *(pcVar14 + 0x18) = -0x2152fffffffffede;
                sysfs_remove_group(pcVar16,obj.va_md_s_attr_group);
                kobject_put(pcVar16);
                uVar10 = __list_del_entry_valid(pcVar14);
                if ((uVar10 & 1) != 0) {
                    iVar2 = *pcVar14;
                    piVar9 = *(pcVar14 + 8);
                    *(iVar2 + 8) = piVar9;
                    *piVar9 = iVar2;
                }
                *pcVar14 = -0x2152ffffffffff00;
                *(pcVar14 + 8) = -0x2152fffffffffede;
                kfree(pcVar16);
                pcVar14 = pcVar17;
            } while (pcVar17 != obj.va_md_s_attr_group);
        }
        mutex_unlock(obj.va_md_lock);
        kset_unregister(*0x8000158);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        atomic_notifier_chain_unregister
                  (panic_notifier_list,reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
        vunmap(*0x80000d0);
        return 0;
    }
    return iVar4;
}


// ===== sym.qcom_va_md_driver_remove @ 0x08002134 (size 412) =====

ulong sym.qcom_va_md_driver_remove(void)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *in_x18;
    code *pcVar4;
    code *pcVar5;
    code *pcVar6;
    code *pcVar7;
    code *pcVar8;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    mutex_lock(obj.va_md_lock);
    pcVar4 = _obj.va_md_s_attr_group;
    if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
        do {
            pcVar5 = pcVar4 + 0x10;
            pcVar7 = *pcVar4;
            pcVar6 = *pcVar5;
            while (pcVar6 != pcVar5) {
                pcVar8 = *pcVar6;
                atomic_notifier_chain_unregister(pcVar4 + -0x10,pcVar6 + -0x18);
                uVar3 = __list_del_entry_valid(pcVar6);
                if ((uVar3 & 1) != 0) {
                    iVar1 = *pcVar6;
                    piVar2 = *(pcVar6 + 8);
                    *(iVar1 + 8) = piVar2;
                    *piVar2 = iVar1;
                }
                *pcVar6 = -0x2152ffffffffff00;
                *(pcVar6 + 8) = -0x2152fffffffffede;
                kfree(pcVar6 + -0x18);
                pcVar6 = pcVar8;
            }
            pcVar6 = pcVar4 + -0x70;
            uVar3 = __list_del_entry_valid(pcVar5);
            if ((uVar3 & 1) != 0) {
                iVar1 = *(pcVar4 + 0x10);
                piVar2 = *(pcVar4 + 0x18);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *(pcVar4 + 0x10) = -0x2152ffffffffff00;
            *(pcVar4 + 0x18) = -0x2152fffffffffede;
            sysfs_remove_group(pcVar6,obj.va_md_s_attr_group);
            kobject_put(pcVar6);
            uVar3 = __list_del_entry_valid(pcVar4);
            if ((uVar3 & 1) != 0) {
                iVar1 = *pcVar4;
                piVar2 = *(pcVar4 + 8);
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar1;
            }
            *pcVar4 = -0x2152ffffffffff00;
            *(pcVar4 + 8) = -0x2152fffffffffede;
            kfree(pcVar6);
            pcVar4 = pcVar7;
        } while (pcVar7 != obj.va_md_s_attr_group);
    }
    mutex_unlock(obj.va_md_lock);
    kset_unregister(*0x8000158);
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.qcom_va_md_elf_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
    atomic_notifier_chain_unregister
              (panic_notifier_list,reloc.qcom_va_md_panic_handler.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
    vunmap(*0x80000d0);
    return 0;
}


// ===== sym.qcom_va_md_panic_handler @ 0x080022d0 (size 648) =====

ulong sym.qcom_va_md_panic_handler(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int iVar5;
    int iVar6;
    ulong *in_x18;
    code *pcVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (*0x8000140 == '\0') {
        *0x8000140 = '\x01';
        pcVar7 = _obj.va_md_s_attr_group;
        if (_obj.va_md_s_attr_group != obj.va_md_s_attr_group) {
            do {
                if (pcVar7[0x20] != 0x0) {
                    atomic_notifier_call_chain(pcVar7 + -0x10,0,0);
                }
                pcVar7 = *pcVar7;
            } while (pcVar7 != obj.va_md_s_attr_group);
        }
        iVar4 = *0x80000d0;
        if (_segment.ehdr != 0) {
            uVar10 = (_segment.ehdr & 0xffffffff) * 0x40;
            uVar8 = *0x80000c8;
            iVar1 = *0x80000d0 + uVar10;
            if ((*0x80000d0 + uVar8) - 1 < iVar1 + 0x3fU) {
                _printk(0x800042c,"qcom_va_md_calc_elf_size");
            }
            else {
                iVar9 = 0;
                do {
                    if (iVar9 == 0) {
                        iVar6 = 0x142;
                        _segment.ehdr = uVar10;
                    }
                    else {
                        iVar6 = 0x79;
                    }
                    uVar3 = _segment.ehdr;
                    iVar2 = iVar4 + iVar9;
                    iVar5 = strlen(iVar2 + 8);
                    _segment.ehdr = (iVar5 + iVar6 + *(iVar2 + 0x28)) + uVar3;
                    if (uVar8 < _segment.ehdr) {
                        _printk(0x800071a,"qcom_va_md_calc_size");
                        return 0;
                    }
                    if (iVar9 == 0) {
                        *0x8000100 = 0;
                        *0x8000108 = 9;
                        *0x80000f8 = 1;
                        _obj.va_md_kobj_type = 3;
                        *0x80000e8 = iVar1;
                    }
                    else {
                        _obj.va_md_kobj_type = _obj.va_md_kobj_type + 1;
                        *0x80000f8 = *0x80000f8 + 1;
                    }
                    *0x8000108 = *0x8000108 + iVar5 + 1;
                    iVar9 = iVar9 + 0x40;
                    *0x8000100 = *0x8000100 + *(iVar2 + 0x28);
                } while (uVar10 - iVar9 != 0);
                memset(*0x80000e8,0,
                       *0x8000108 + *0x80000f8 * 0x38 + _obj.va_md_kobj_type * 0x40 + *0x8000100 + 0x43U &
                       0xfffffffffffffffc);
                strscpy(0x8000110,"KVA_DUMP",0xd);
                *0x8000130 = _obj.va_md_lock + *0x80000d8 * 0x40;
                *0x8000138 = *0x80000f8 * 0x38 + _obj.va_md_kobj_type * 0x40 + *0x8000100 + *0x8000108 + 0x43U &
                             0xfffffffffffffffc;
                *0x8000128 = *0x80000e8;
                iVar6 = msm_minidump_add_region(0x8000110);
                if (iVar6 < 0) {
                    _printk(0x80007d7,"qcom_va_md_minidump_registration");
                }
                *0x8000141 = iVar6 >= 0;
            }
        }
    }
    return 0;
}


// ===== sym.qcom_va_md_elf_panic_handler @ 0x08002558 (size 768) =====

ulong sym.qcom_va_md_elf_panic_handler(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint *puVar10;
    ulong *in_x18;
    int64_t iVar11;
    code *pcVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint32_t *puVar15;
    uint64_t *puVar16;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar11 = _obj.va_md_kobj_type;
    puVar3 = *0x80000e8;
    if ((*0x80000d8 != 0) && (*0x8000141 != '\0')) {
        **0x80000e8 = 0x10102464c457f;
        puVar3[2] = 0x100b70004;
        *(puVar3 + 0x34) = 0x380040;
        *(puVar3 + 0x3a) = 0x40;
        iVar9 = *0x80000d0;
        puVar3[4] = iVar11 * 0x40 + 0x40;
        puVar3[5] = 0x40;
        puVar4 = *0x80000e8;
        *(puVar3 + 0x3e) = 1;
        *0x80000e0 = 1;
        iVar11 = puVar4[4] + *0x80000f8 * 0x38;
        puVar10 = puVar4 + (*(puVar4 + 0x3c) + 1) * 0x40 + puVar4[5];
        *(puVar4 + 0x3c) = *(puVar4 + 0x3c) + 2;
        puVar10[1] = 3;
        *(puVar10 + 6) = iVar11;
        iVar6 = _segment.ehdr;
        if ((*(puVar4 + 0x3e) == 0) ||
           (iVar5 = puVar4 + *(puVar4 + *(puVar4 + 0x3e) * 0x40 + puVar4[5] + 0x18), iVar5 == 0)) {
            iVar6 = 0;
        }
        else {
            iVar5 = strscpy(iVar5 + _segment.ehdr,"STR_TBL",0x20);
            _segment.ehdr = iVar6 + iVar5 + 1;
        }
        *puVar10 = iVar6;
        *(puVar10 + 8) = *0x8000108;
        if (_obj.va_md_kobj_type != 2) {
            uVar14 = 0;
            puVar15 = iVar9 + 0x28;
            uVar7 = *(puVar4 + 0x3c);
            iVar11 = _segment.ehdr + iVar11;
            do {
                iVar9 = puVar4[5];
                uVar13 = uVar7;
                puVar10 = puVar4 + uVar13 * 0x40 + iVar9;
                puVar10[1] = 1;
                iVar6 = _segment.ehdr;
                if (*(puVar4 + 0x3e) == 0) {
                    iVar5 = 0;
                }
                else {
                    iVar5 = 0;
                    if ((puVar15 + -8 != NULL) &&
                       (iVar1 = puVar4 + *(puVar4 + *(puVar4 + 0x3e) * 0x40 + puVar4[5] + 0x18), iVar1 != 0)) {
                        iVar5 = strscpy(iVar1 + _segment.ehdr,puVar15 + -8,0x20);
                        _segment.ehdr = iVar6 + iVar5 + 1;
                        iVar5 = iVar6;
                    }
                }
                *puVar10 = iVar5;
                puVar16 = puVar10 + 8;
                *puVar16 = *puVar15;
                *(puVar10 + 2) = 1;
                *(puVar10 + 6) = iVar11;
                iVar5 = puVar4[4];
                uVar8 = *(puVar4 + 7);
                puVar10 = puVar4 + uVar8 * 0x38 + iVar5;
                *puVar10 = 1;
                *(puVar10 + 2) = iVar11;
                uVar2 = *puVar15;
                *(puVar10 + 8) = uVar2;
                *(puVar10 + 10) = uVar2;
                puVar10[1] = 6;
                iVar6 = *(puVar15 + -10);
                if (iVar6 == 0) {
                    iVar6 = _segment.ehdr + iVar11;
                    *(puVar4 + uVar8 * 0x38 + iVar5 + 0x10) = iVar6;
                    *(puVar4 + uVar13 * 0x40 + iVar9 + 0x10) = iVar6;
                    pcVar12 = *(puVar15 + 2);
                    __cfi_slowpath_diag(0xe9a24bd020e62db5,pcVar12,0x8000310);
                    (*pcVar12)(_segment.ehdr + iVar11,*puVar16);
                }
                else {
                    *(puVar4 + uVar8 * 0x38 + iVar5 + 0x10) = iVar6;
                    *(puVar4 + uVar13 * 0x40 + iVar9 + 0x10) = iVar6;
                    memcpy(_segment.ehdr + iVar11,iVar6,*puVar16);
                }
                uVar14 = uVar14 + 1;
                puVar15 = puVar15 + 0x10;
                iVar11 = *puVar16 + iVar11;
                uVar7 = *(puVar4 + 0x3c) + 1;
                uVar13 = _segment.ehdr - 2;
                *(puVar4 + 0x3c) = uVar7;
                *(puVar4 + 7) = *(puVar4 + 7) + 1;
            } while (uVar14 < uVar13);
        }
    }
    *0x8000140 = 0;
    return 0;
}


// ===== sym.__cfi_check_fail @ 0x08002858 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800289c

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
    //switch table (4 cases) at 0x800095e
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x80028b0);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08002908 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.qcom_va_md_driver_probe.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt,obj.__this_module)
    ;
    return;
}


// ===== sym.cleanup_module @ 0x0800293c (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.qcom_va_md_driver_probe.3a0e7fe664fcd969ec763574a81c46bd.cfi_jt);
    return;
}

