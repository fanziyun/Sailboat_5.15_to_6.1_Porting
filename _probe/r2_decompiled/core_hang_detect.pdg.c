// decompiled from core_hang_detect by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 312) =====

//WARNING: Switch with 1 destination removed at 0x08001d30

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x2c1d832160b5d123) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar1 + -0x8001168 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001cf0;
        }
        if (arg1 == -0x558484723f05168) {
            pcVar2 = sym.attr_store.8907762e9d8d90f415c14b48b71210de.cfi_jt;
        }
        else {
            if (arg1 != 0x2b3a43e29242445) goto code_r0x08001cf0;
            pcVar2 = sym.init_module.cfi_jt;
        }
    }
    else {
        if (arg1 == 0x2c1d832160b5d123) {
            if ((pcVar1 + -0x8001180 >> 3 | pcVar1 << 0x3d) < 4) {
                return;
            }
            goto code_r0x08001cf0;
        }
        if (arg1 == 0x6616775b51bca303) {
            if ((pcVar1 + -0x8001150 >> 3 | pcVar1 << 0x3d) < 3) {
                return;
            }
            goto code_r0x08001cf0;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x08001cf0;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x08001cf0:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d44);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x08001140 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_hang_detect_probe.8907762e9d8d90f415c14b48b71210de.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x08001148 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_hang_detect_probe.8907762e9d8d90f415c14b48b71210de.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.__typeid__ZTSFmP7kobjectP9attributePKcmE_global_addr @ 0x08001150 (size 8) =====

uint64_t sym.__typeid__ZTSFmP7kobjectP9attributePKcmE_global_addr
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t *extraout_x1_02;
    uint64_t *extraout_x1_03;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong extraout_x8;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x25;
    ulong unaff_x26;
    ulong unaff_x30;
    uchar auVar17 [16];
    int iStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint8_t auStack_f0 [4];
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar7 = &uStack_60 + 4;
    uStack_60 = 0;
    uVar15 = param_4;
    iVar2 = kstrtouint(param_3,0);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else {
        uVar3 = uStack_60._4_4_;
        if (uStack_60._4_4_ < 0x20) {
            ___cpu_possible_mask = unaff_x25;
            uVar5 = cpumask_next(0xffffffff);
            if (uVar5 < unaff_x25) {
                uVar14 = uVar7;
                do {
                    uVar7 = uVar5;
                    if (0x1f < uVar5) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x5512,0x800152c);
                        (*pcVar1)();
                    }
                    iVar8 = *(param_1 + -0x108 + uVar7 * 8);
                    if (iVar8 != 0) {
                        iVar2 = qcom_scm_io_readl(iVar8,&uStack_60);
                        if (iVar2 == 0) {
                            iVar2 = qcom_scm_io_writel(*(param_1 + -0x108 + uVar7 * 8),
                                                       uStack_60 & 0xffffff0f | uStack_60._4_4_ << 4);
                            if (iVar2 == 0) {
                                *extraout_x1 = unaff_x25;
                                goto code_r0x08001460;
                            }
                            uVar13 = 0x800042e;
                        }
                        else {
                            uVar13 = 0x80005b1;
                        }
                        _printk(uVar13,"store_pmu_event_sel");
                        param_4 = 0xfffffffffffffffb;
                        goto code_r0x080014c0;
                    }
code_r0x08001460:
                    uVar5 = cpumask_next(uVar7,__cpu_possible_mask);
                } while (uVar5 < unaff_x25);
                uVar3 = uStack_60 >> 0x20;
                uVar7 = uVar14;
            }
            *(param_1 + -8) = uVar3;
        }
        else {
            param_4 = 0xffffffffffffffea;
        }
    }
code_r0x080014c0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return param_4;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.show_enable;
    pcStack_78 = sym.show_enable;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uStack_8c = 0;
    uVar14 = uVar7;
    puStack_80 = &stack0xffffffffffffffb0;
    uStack_70 = param_4;
    iVar2 = qcom_scm_io_readl(*(iVar6 + -0x108),&uStack_8c);
    if (iVar2 == 0) {
        uVar14 = 0x800038f;
        uStack_8c = uStack_8c >> 1 & 1;
        uVar15 = uStack_8c;
        iVar2 = scnprintf(uVar7,0xc,0x800038f);
        uVar7 = iVar2;
    }
    else {
        _printk(0x8000458,"show_enable");
        uVar7 = 0xfffffffffffffffb;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return uVar7;
    }
    iVar6 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.store_enable;
    pcStack_d8 = sym.store_enable;
    iVar8 = sp_el0;
    iStack_e8 = *(iVar8 + 0x5e0);
    uStack_ec = 0;
    auStack_f0[0] = 0;
    ppuStack_e0 = &puStack_80;
    iVar2 = kstrtobool(uVar14,auStack_f0);
    if (iVar2 < 0) {
        uVar15 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x26;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x26) {
            do {
                uVar7 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001734);
                    (*pcVar1)();
                }
                iVar8 = *(iVar6 + -0x108 + uVar7 * 8);
                if (iVar8 != 0) {
                    iVar2 = qcom_scm_io_readl(iVar8,&uStack_ec);
                    uVar13 = 0x80002de;
                    if ((iVar2 != 0) ||
                       (iVar2 = qcom_scm_io_writel(*(iVar6 + -0x108 + uVar7 * 8),
                                                   uStack_ec & 0xfffffffd | auStack_f0[0] << 1), uVar13 = 0x80003af,
                       iVar2 != 0)) {
                        _printk(uVar13,"store_enable",uVar7);
                        uVar15 = 0xfffffffffffffffb;
                        break;
                    }
                    *extraout_x1_00 = unaff_x26;
                }
                uVar3 = cpumask_next(uVar7,__cpu_possible_mask);
            } while (uVar3 < unaff_x26);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_e8) {
        return uVar15;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_01 = sym.msm_hang_detect_probe;
    pcStack_148 = sym.msm_hang_detect_probe;
    iVar8 = sp_el0;
    uVar7 = 0xffffffed;
    iStack_158 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar6 + 0x300);
    iStack_15c = 0;
    pppuStack_150 = &ppuStack_e0;
    if ((iVar8 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar9 = devm_kmalloc(iVar6 + 0x10,0x268,0xdc0);
    if (iVar9 == 0) {
code_r0x0800197c:
        uVar7 = 0xfffffff4;
        goto code_r0x08001ae4;
    }
    iVar10 = of_get_property(iVar8,"label",0);
    if (iVar10 == 0) {
        uVar13 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar13,"msm_hang_detect_probe");
    }
    else {
        uVar7 = 4;
        uVar3 = of_property_count_elems_of_size(iVar8,"qcom,threshold-arr");
        if (uVar3 < 0) {
            uVar13 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar15 = uVar3;
        *extraout_x1_01 = uVar7;
        if (uVar7 < uVar3) {
            uVar15 = uVar7 & 0xffffffff;
code_r0x080017f8:
            iVar2 = of_property_count_elems_of_size(iVar8,"qcom,config-arr",4);
            if (iVar2 < 0) {
                uVar13 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar15;
            if (iVar2 < iVar4) {
                uVar13 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar7 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            iVar11 = __kmalloc(uVar7,0xdc0);
            if (iVar11 == 0) goto code_r0x0800197c;
            iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,threshold-arr",iVar11,iVar4,0);
            if (iVar2 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar12 = __kmalloc(uVar7,0xdc0);
                if (iVar12 == 0) {
                    kfree(iVar11);
                    uVar7 = 0xfffffff4;
                    goto code_r0x08001ae4;
                }
                iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,config-arr",iVar12,iVar4,0);
                if (-1 < iVar2) {
                    iVar4 = of_property_read_variable_u32_array(iVar8,"cluster-id",&iStack_15c,1,0);
                    iVar2 = iStack_15c;
                    uVar3 = uVar15 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_03 = uVar7;
                    }
                    else {
                        *extraout_x1_02 = uVar7;
                        uVar7 = 0xffffffff;
                        do {
                            uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
                            if (uVar3 <= uVar7) {
                                uVar13 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar7) goto code_r0x08001978;
                        } while (*(kfree + (uVar7 & 0xffffffff) * 0x30) != iVar2);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar3) {
                        uVar7 = uVar5;
                        iVar2 = 0;
                        do {
                            uVar3 = uVar7;
                            iVar8 = of_get_cpu_node(uVar7,0);
                            if (iVar8 != 0) {
                                if (0x1f < uVar3) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar2 = iVar2 + 1;
                                iVar16 = uVar3 * 4;
                                iVar8 = uVar3 * 8;
                                uVar3 = *(iVar12 + iVar16);
                                *(iVar9 + iVar8) = *(iVar11 + iVar16);
                                *(iVar9 + 0x100 + iVar8) = uVar3;
                            }
                            auVar17 = cpumask_next(uVar7,__cpu_possible_mask);
                            *auVar17._8_8_ = extraout_x8;
                            uVar7 = auVar17._0_8_ & 0xffffffff;
                        } while (auVar17._0_4_ < extraout_x8);
                    }
                    else {
                        iVar2 = 0;
                    }
                    kfree(iVar11);
                    kfree(iVar12);
                    if (iVar2 != 0) {
                        iVar8 = iVar9 + 0x208;
                        uVar3 = kobject_init_and_add(iVar8,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar10);
                        if (uVar3 == 0) {
                            uVar3 = sysfs_create_group(iVar8,obj.hang_attr_group);
                            uVar7 = uVar3;
                            if (uVar3 == 0) {
                                *(iVar6 + 0xa8) = iVar9;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar8);
                        }
                        else {
                            uVar7 = uVar3;
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar8);
                        goto code_r0x08001ae4;
                    }
                    uVar13 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar11);
                iVar11 = iVar12;
            }
            kfree(iVar11);
        }
        else {
            if (uVar7 <= uVar3) goto code_r0x080017f8;
            uVar13 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar13,"msm_hang_detect_probe");
        }
    }
    uVar7 = 0xffffffea;
code_r0x08001ae4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_158) {
        iVar6 = __stack_chk_fail();
        *extraout_x18_02 = sym.msm_hang_detect_remove;
        iVar8 = *(iVar6 + 0xa8);
        *(iVar6 + 0xa8) = 0;
        iVar8 = iVar8 + 0x208;
        sysfs_remove_group(iVar8,obj.hang_attr_group);
        kobject_del(iVar8);
        kobject_put(iVar8);
        return 0;
    }
    return uVar7;
}


// ===== sym.store_enable.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001158 (size 8) =====

uint64_t sym.store_enable.8907762e9d8d90f415c14b48b71210de.cfi_jt
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    ulong *extraout_x1;
    uint64_t *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t *extraout_x1_02;
    ulong extraout_x8;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x26;
    ulong unaff_x30;
    uchar auVar16 [16];
    int iStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint8_t auStack_60 [4];
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_5c = 0;
    auStack_60[0] = 0;
    iVar2 = kstrtobool(param_3,auStack_60);
    if (iVar2 < 0) {
        param_4 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x26;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x26) {
            do {
                uVar14 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001734);
                    (*pcVar1)();
                }
                iVar6 = *(param_1 + -0x108 + uVar14 * 8);
                if (iVar6 != 0) {
                    iVar2 = qcom_scm_io_readl(iVar6,&uStack_5c);
                    uVar12 = 0x80002de;
                    if ((iVar2 != 0) ||
                       (iVar2 = qcom_scm_io_writel(*(param_1 + -0x108 + uVar14 * 8),
                                                   uStack_5c & 0xfffffffd | auStack_60[0] << 1), uVar12 = 0x80003af,
                       iVar2 != 0)) {
                        _printk(uVar12,"store_enable",uVar14);
                        param_4 = 0xfffffffffffffffb;
                        break;
                    }
                    *extraout_x1 = unaff_x26;
                }
                uVar3 = cpumask_next(uVar14,__cpu_possible_mask);
            } while (uVar3 < unaff_x26);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return param_4;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.msm_hang_detect_probe;
    pcStack_b8 = sym.msm_hang_detect_probe;
    iVar6 = sp_el0;
    uVar14 = 0xffffffed;
    iStack_c8 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar7 + 0x300);
    iStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffb0;
    if ((iVar6 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar8 = devm_kmalloc(iVar7 + 0x10,0x268,0xdc0);
    if (iVar8 == 0) {
code_r0x0800197c:
        uVar14 = 0xfffffff4;
        goto code_r0x08001ae4;
    }
    iVar9 = of_get_property(iVar6,"label",0);
    if (iVar9 == 0) {
        uVar12 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar12,"msm_hang_detect_probe");
    }
    else {
        uVar14 = 4;
        uVar3 = of_property_count_elems_of_size(iVar6,"qcom,threshold-arr");
        if (uVar3 < 0) {
            uVar12 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar15 = uVar3;
        *extraout_x1_00 = uVar14;
        if (uVar14 < uVar3) {
            uVar15 = uVar14 & 0xffffffff;
code_r0x080017f8:
            iVar2 = of_property_count_elems_of_size(iVar6,"qcom,config-arr",4);
            if (iVar2 < 0) {
                uVar12 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar15;
            if (iVar2 < iVar4) {
                uVar12 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar14 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            iVar10 = __kmalloc(uVar14,0xdc0);
            if (iVar10 == 0) goto code_r0x0800197c;
            iVar2 = of_property_read_variable_u32_array(iVar6,"qcom,threshold-arr",iVar10,iVar4,0);
            if (iVar2 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar11 = __kmalloc(uVar14,0xdc0);
                if (iVar11 == 0) {
                    kfree(iVar10);
                    uVar14 = 0xfffffff4;
                    goto code_r0x08001ae4;
                }
                iVar2 = of_property_read_variable_u32_array(iVar6,"qcom,config-arr",iVar11,iVar4,0);
                if (-1 < iVar2) {
                    iVar4 = of_property_read_variable_u32_array(iVar6,"cluster-id",&iStack_cc,1,0);
                    iVar2 = iStack_cc;
                    uVar3 = uVar15 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_02 = uVar14;
                    }
                    else {
                        *extraout_x1_01 = uVar14;
                        uVar14 = 0xffffffff;
                        do {
                            uVar14 = cpumask_next(uVar14,__cpu_possible_mask);
                            if (uVar3 <= uVar14) {
                                uVar12 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar14) goto code_r0x08001978;
                        } while (*(kfree + (uVar14 & 0xffffffff) * 0x30) != iVar2);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar3) {
                        uVar14 = uVar5;
                        iVar2 = 0;
                        do {
                            uVar3 = uVar14;
                            iVar6 = of_get_cpu_node(uVar14,0);
                            if (iVar6 != 0) {
                                if (0x1f < uVar3) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar2 = iVar2 + 1;
                                iVar13 = uVar3 * 4;
                                iVar6 = uVar3 * 8;
                                uVar3 = *(iVar11 + iVar13);
                                *(iVar8 + iVar6) = *(iVar10 + iVar13);
                                *(iVar8 + 0x100 + iVar6) = uVar3;
                            }
                            auVar16 = cpumask_next(uVar14,__cpu_possible_mask);
                            *auVar16._8_8_ = extraout_x8;
                            uVar14 = auVar16._0_8_ & 0xffffffff;
                        } while (auVar16._0_4_ < extraout_x8);
                    }
                    else {
                        iVar2 = 0;
                    }
                    kfree(iVar10);
                    kfree(iVar11);
                    if (iVar2 != 0) {
                        iVar6 = iVar8 + 0x208;
                        uVar3 = kobject_init_and_add(iVar6,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar9);
                        if (uVar3 == 0) {
                            uVar3 = sysfs_create_group(iVar6,obj.hang_attr_group);
                            uVar14 = uVar3;
                            if (uVar3 == 0) {
                                *(iVar7 + 0xa8) = iVar8;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar6);
                        }
                        else {
                            uVar14 = uVar3;
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar6);
                        goto code_r0x08001ae4;
                    }
                    uVar12 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar10);
                iVar10 = iVar11;
            }
            kfree(iVar10);
        }
        else {
            if (uVar14 <= uVar3) goto code_r0x080017f8;
            uVar12 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar12,"msm_hang_detect_probe");
        }
    }
    uVar14 = 0xffffffea;
code_r0x08001ae4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_c8) {
        iVar7 = __stack_chk_fail();
        *extraout_x18_00 = sym.msm_hang_detect_remove;
        iVar6 = *(iVar7 + 0xa8);
        *(iVar7 + 0xa8) = 0;
        iVar6 = iVar6 + 0x208;
        sysfs_remove_group(iVar6,obj.hang_attr_group);
        kobject_del(iVar6);
        kobject_put(iVar6);
        return 0;
    }
    return uVar14;
}


// ===== sym.store_threshold.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001160 (size 8) =====

int64_t sym.store_threshold.8907762e9d8d90f415c14b48b71210de.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *extraout_x1;
    int *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar6;
    ulong unaff_x23;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    piVar5 = &iStack_4c;
    iStack_4c = 0;
    iVar2 = kstrtouint(param_3,0,piVar5);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else if (iStack_4c == 0) {
        param_4 = -0x16;
    }
    else {
        ___cpu_possible_mask = unaff_x23;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x23) {
            do {
                piVar6 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar1)();
                }
                iVar4 = *(param_1 + -0x208 + piVar6 * 8);
                if (iVar4 != 0) {
                    iVar2 = qcom_scm_io_writel(iVar4,iStack_4c);
                    if (iVar2 != 0) {
                        _printk(0x80004b6,"store_threshold",piVar6);
                        param_4 = -5;
                        piVar5 = piVar6;
                        break;
                    }
                    *extraout_x1 = unaff_x23;
                }
                uVar3 = cpumask_next(piVar6,__cpu_possible_mask);
            } while (uVar3 < unaff_x23);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return param_4;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.show_pmu_event_sel;
    iVar2 = scnprintf(piVar5,0xc,"0x%x\n",*(iVar4 + -8));
    return iVar2;
}


// ===== sym.msm_hang_detect_remove.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001168 (size 8) =====

ulong sym.msm_hang_detect_remove.8907762e9d8d90f415c14b48b71210de.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(param_1 + 0xa8);
    *(param_1 + 0xa8) = 0;
    iVar1 = iVar1 + 0x208;
    sysfs_remove_group(iVar1,obj.hang_attr_group);
    kobject_del(iVar1);
    kobject_put(iVar1);
    return 0;
}


// ===== sym.msm_hang_detect_probe.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001170 (size 8) =====

int sym.msm_hang_detect_probe.8907762e9d8d90f415c14b48b71210de.cfi_jt(int64_t param_1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t *extraout_x1;
    uint64_t *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t uVar11;
    ulong extraout_x8;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar3 = -0x13;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar14 = *(param_1 + 0x300);
    iStack_6c = 0;
    if ((iVar14 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar6 = devm_kmalloc(param_1 + 0x10,0x268,0xdc0);
    if (iVar6 == 0) {
code_r0x0800197c:
        iVar3 = -0xc;
        goto code_r0x08001ae4;
    }
    iVar7 = of_get_property(iVar14,"label",0);
    if (iVar7 == 0) {
        uVar10 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar10,"msm_hang_detect_probe");
    }
    else {
        uVar11 = 4;
        uVar2 = of_property_count_elems_of_size(iVar14,"qcom,threshold-arr");
        if (uVar2 < 0) {
            uVar10 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar13 = uVar2;
        *extraout_x1 = uVar11;
        if (uVar11 < uVar2) {
            uVar13 = uVar11 & 0xffffffff;
code_r0x080017f8:
            iVar3 = of_property_count_elems_of_size(iVar14,"qcom,config-arr",4);
            if (iVar3 < 0) {
                uVar10 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar13;
            if (iVar3 < iVar4) {
                uVar10 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar11 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
            iVar8 = __kmalloc(uVar11,0xdc0);
            if (iVar8 == 0) goto code_r0x0800197c;
            iVar3 = of_property_read_variable_u32_array(iVar14,"qcom,threshold-arr",iVar8,iVar4,0);
            if (iVar3 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar9 = __kmalloc(uVar11,0xdc0);
                if (iVar9 == 0) {
                    kfree(iVar8);
                    iVar3 = -0xc;
                    goto code_r0x08001ae4;
                }
                iVar3 = of_property_read_variable_u32_array(iVar14,"qcom,config-arr",iVar9,iVar4,0);
                if (-1 < iVar3) {
                    iVar4 = of_property_read_variable_u32_array(iVar14,"cluster-id",&iStack_6c,1,0);
                    iVar3 = iStack_6c;
                    uVar2 = uVar13 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_01 = uVar11;
                    }
                    else {
                        *extraout_x1_00 = uVar11;
                        uVar11 = 0xffffffff;
                        do {
                            uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                            if (uVar2 <= uVar11) {
                                uVar10 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar11) goto code_r0x08001978;
                        } while (*(kfree + (uVar11 & 0xffffffff) * 0x30) != iVar3);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar2) {
                        uVar11 = uVar5;
                        iVar3 = 0;
                        do {
                            uVar2 = uVar11;
                            iVar14 = of_get_cpu_node(uVar11,0);
                            if (iVar14 != 0) {
                                if (0x1f < uVar2) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar3 = iVar3 + 1;
                                iVar12 = uVar2 * 4;
                                iVar14 = uVar2 * 8;
                                uVar2 = *(iVar9 + iVar12);
                                *(iVar6 + iVar14) = *(iVar8 + iVar12);
                                *(iVar6 + 0x100 + iVar14) = uVar2;
                            }
                            auVar15 = cpumask_next(uVar11,__cpu_possible_mask);
                            *auVar15._8_8_ = extraout_x8;
                            uVar11 = auVar15._0_8_ & 0xffffffff;
                        } while (auVar15._0_4_ < extraout_x8);
                    }
                    else {
                        iVar3 = 0;
                    }
                    kfree(iVar8);
                    kfree(iVar9);
                    if (iVar3 != 0) {
                        iVar14 = iVar6 + 0x208;
                        iVar3 = kobject_init_and_add(iVar14,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar7);
                        if (iVar3 == 0) {
                            iVar3 = sysfs_create_group(iVar14,obj.hang_attr_group);
                            if (iVar3 == 0) {
                                *(param_1 + 0xa8) = iVar6;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar14);
                        }
                        else {
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar14);
                        goto code_r0x08001ae4;
                    }
                    uVar10 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar8);
                iVar8 = iVar9;
            }
            kfree(iVar8);
        }
        else {
            if (uVar11 <= uVar2) goto code_r0x080017f8;
            uVar10 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar10,"msm_hang_detect_probe");
        }
    }
    iVar3 = -0x16;
code_r0x08001ae4:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.msm_hang_detect_remove;
    iVar14 = *(iVar6 + 0xa8);
    *(iVar6 + 0xa8) = 0;
    iVar14 = iVar14 + 0x208;
    sysfs_remove_group(iVar14,obj.hang_attr_group);
    kobject_del(iVar14);
    kobject_put(iVar14);
    return 0;
}


// ===== sym.attr_store.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001178 (size 8) =====

ulong sym.attr_store.8907762e9d8d90f415c14b48b71210de.cfi_jt
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
        if (2 < (pcVar2 + -0x8001150 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x6616775b51bca303,pcVar2,0x8000260);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3,param_4);
    }
    return uVar1;
}


// ===== sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr @ 0x08001180 (size 8) =====

uint64_t sym.__typeid__ZTSFlP7kobjectP9attributePcE_global_addr
                   (int64_t param_1,ulong param_2,ulong param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong *extraout_x1;
    uint64_t *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t *extraout_x1_02;
    ulong extraout_x8;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    ulong unaff_x26;
    ulong unaff_x30;
    uchar auVar16 [16];
    int iStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint8_t auStack_90 [4];
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_2c = 0;
    uVar13 = param_3;
    iVar2 = qcom_scm_io_readl(*(param_1 + -0x108),&uStack_2c);
    if (iVar2 == 0) {
        uVar13 = 0x800038f;
        uStack_2c = uStack_2c >> 1 & 1;
        param_4 = uStack_2c;
        iVar2 = scnprintf(param_3,0xc,0x800038f);
        uVar6 = iVar2;
    }
    else {
        _printk(0x8000458,"show_enable");
        uVar6 = 0xfffffffffffffffb;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.store_enable;
    pcStack_78 = sym.store_enable;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uStack_8c = 0;
    auStack_90[0] = 0;
    puStack_80 = &stack0xffffffffffffffe0;
    iVar2 = kstrtobool(uVar13,auStack_90);
    if (iVar2 < 0) {
        param_4 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x26;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x26) {
            do {
                uVar6 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001734);
                    (*pcVar1)();
                }
                iVar8 = *(iVar7 + -0x108 + uVar6 * 8);
                if (iVar8 != 0) {
                    iVar2 = qcom_scm_io_readl(iVar8,&uStack_8c);
                    uVar13 = 0x80002de;
                    if ((iVar2 != 0) ||
                       (iVar2 = qcom_scm_io_writel(*(iVar7 + -0x108 + uVar6 * 8),
                                                   uStack_8c & 0xfffffffd | auStack_90[0] << 1), uVar13 = 0x80003af,
                       iVar2 != 0)) {
                        _printk(uVar13,"store_enable",uVar6);
                        param_4 = 0xfffffffffffffffb;
                        break;
                    }
                    *extraout_x1 = unaff_x26;
                }
                uVar3 = cpumask_next(uVar6,__cpu_possible_mask);
            } while (uVar3 < unaff_x26);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return param_4;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_hang_detect_probe;
    pcStack_e8 = sym.msm_hang_detect_probe;
    iVar8 = sp_el0;
    uVar6 = 0xffffffed;
    iStack_f8 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar7 + 0x300);
    iStack_fc = 0;
    ppuStack_f0 = &puStack_80;
    if ((iVar8 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar9 = devm_kmalloc(iVar7 + 0x10,0x268,0xdc0);
    if (iVar9 == 0) {
code_r0x0800197c:
        uVar6 = 0xfffffff4;
        goto code_r0x08001ae4;
    }
    iVar10 = of_get_property(iVar8,"label",0);
    if (iVar10 == 0) {
        uVar13 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar13,"msm_hang_detect_probe");
    }
    else {
        uVar6 = 4;
        uVar3 = of_property_count_elems_of_size(iVar8,"qcom,threshold-arr");
        if (uVar3 < 0) {
            uVar13 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar15 = uVar3;
        *extraout_x1_00 = uVar6;
        if (uVar6 < uVar3) {
            uVar15 = uVar6 & 0xffffffff;
code_r0x080017f8:
            iVar2 = of_property_count_elems_of_size(iVar8,"qcom,config-arr",4);
            if (iVar2 < 0) {
                uVar13 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar15;
            if (iVar2 < iVar4) {
                uVar13 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar6 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            iVar11 = __kmalloc(uVar6,0xdc0);
            if (iVar11 == 0) goto code_r0x0800197c;
            iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,threshold-arr",iVar11,iVar4,0);
            if (iVar2 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar12 = __kmalloc(uVar6,0xdc0);
                if (iVar12 == 0) {
                    kfree(iVar11);
                    uVar6 = 0xfffffff4;
                    goto code_r0x08001ae4;
                }
                iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,config-arr",iVar12,iVar4,0);
                if (-1 < iVar2) {
                    iVar4 = of_property_read_variable_u32_array(iVar8,"cluster-id",&iStack_fc,1,0);
                    iVar2 = iStack_fc;
                    uVar3 = uVar15 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_02 = uVar6;
                    }
                    else {
                        *extraout_x1_01 = uVar6;
                        uVar6 = 0xffffffff;
                        do {
                            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
                            if (uVar3 <= uVar6) {
                                uVar13 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar6) goto code_r0x08001978;
                        } while (*(kfree + (uVar6 & 0xffffffff) * 0x30) != iVar2);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar3) {
                        uVar6 = uVar5;
                        iVar2 = 0;
                        do {
                            uVar3 = uVar6;
                            iVar8 = of_get_cpu_node(uVar6,0);
                            if (iVar8 != 0) {
                                if (0x1f < uVar3) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar2 = iVar2 + 1;
                                iVar14 = uVar3 * 4;
                                iVar8 = uVar3 * 8;
                                uVar3 = *(iVar12 + iVar14);
                                *(iVar9 + iVar8) = *(iVar11 + iVar14);
                                *(iVar9 + 0x100 + iVar8) = uVar3;
                            }
                            auVar16 = cpumask_next(uVar6,__cpu_possible_mask);
                            *auVar16._8_8_ = extraout_x8;
                            uVar6 = auVar16._0_8_ & 0xffffffff;
                        } while (auVar16._0_4_ < extraout_x8);
                    }
                    else {
                        iVar2 = 0;
                    }
                    kfree(iVar11);
                    kfree(iVar12);
                    if (iVar2 != 0) {
                        iVar8 = iVar9 + 0x208;
                        uVar3 = kobject_init_and_add(iVar8,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar10);
                        if (uVar3 == 0) {
                            uVar3 = sysfs_create_group(iVar8,obj.hang_attr_group);
                            uVar6 = uVar3;
                            if (uVar3 == 0) {
                                *(iVar7 + 0xa8) = iVar9;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar8);
                        }
                        else {
                            uVar6 = uVar3;
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar8);
                        goto code_r0x08001ae4;
                    }
                    uVar13 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar11);
                iVar11 = iVar12;
            }
            kfree(iVar11);
        }
        else {
            if (uVar6 <= uVar3) goto code_r0x080017f8;
            uVar13 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar13,"msm_hang_detect_probe");
        }
    }
    uVar6 = 0xffffffea;
code_r0x08001ae4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_f8) {
        iVar7 = __stack_chk_fail();
        *extraout_x18_01 = sym.msm_hang_detect_remove;
        iVar8 = *(iVar7 + 0xa8);
        *(iVar7 + 0xa8) = 0;
        iVar8 = iVar8 + 0x208;
        sysfs_remove_group(iVar8,obj.hang_attr_group);
        kobject_del(iVar8);
        kobject_put(iVar8);
        return 0;
    }
    return uVar6;
}


// ===== sym.show_threshold.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001188 (size 8) =====

uint64_t sym.show_threshold.8907762e9d8d90f415c14b48b71210de.cfi_jt
                   (int64_t param_1,ulong param_2,char *param_3,uint64_t param_4)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *extraout_x1;
    char *pcVar7;
    int *piVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int *piVar9;
    ulong unaff_x23;
    ulong unaff_x30;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_2c = 0;
    pcVar7 = param_3;
    iVar2 = qcom_scm_io_readl(*(param_1 + -0x208),&uStack_2c);
    if (iVar2 == 0) {
        param_4 = uStack_2c;
        pcVar7 = "0x%x\n";
        iVar2 = scnprintf(param_3,0xc,"0x%x\n",param_4);
        uVar4 = iVar2;
    }
    else {
        _printk(0x80005fa,"show_threshold");
        uVar4 = 0xfffffffffffffffb;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.store_threshold;
    pcStack_68 = sym.store_threshold;
    iVar6 = sp_el0;
    iStack_78 = *(iVar6 + 0x5e0);
    piVar8 = &iStack_7c;
    iStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iVar2 = kstrtouint(pcVar7,0,piVar8);
    if (iVar2 < 0) {
        param_4 = iVar2;
    }
    else if (iStack_7c == 0) {
        param_4 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x23;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x23) {
            do {
                piVar9 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar1)();
                }
                iVar6 = *(iVar5 + -0x208 + piVar9 * 8);
                if (iVar6 != 0) {
                    iVar2 = qcom_scm_io_writel(iVar6,iStack_7c);
                    if (iVar2 != 0) {
                        _printk(0x80004b6,"store_threshold",piVar9);
                        param_4 = 0xfffffffffffffffb;
                        piVar8 = piVar9;
                        break;
                    }
                    *extraout_x1 = unaff_x23;
                }
                uVar3 = cpumask_next(piVar9,__cpu_possible_mask);
            } while (uVar3 < unaff_x23);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_78) {
        return param_4;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.show_pmu_event_sel;
    iVar2 = scnprintf(piVar8,0xc,"0x%x\n",*(iVar6 + -8));
    return iVar2;
}


// ===== sym.show_pmu_event_sel.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001190 (size 8) =====

int64_t sym.show_pmu_event_sel.8907762e9d8d90f415c14b48b71210de.cfi_jt(int64_t param_1,ulong param_2,ulong param_3)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(param_3,0xc,"0x%x\n",*(param_1 + -8));
    return iVar1;
}


// ===== sym.attr_show.8907762e9d8d90f415c14b48b71210de.cfi_jt @ 0x08001198 (size 8) =====

ulong sym.attr_show.8907762e9d8d90f415c14b48b71210de.cfi_jt(ulong param_1,int64_t param_2,ulong param_3)

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
        if (3 < (pcVar2 + -0x8001180 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000240);
        }
        uVar1 = (*pcVar2)(param_1,param_2,param_3);
    }
    return uVar1;
}


// ===== sym.show_threshold @ 0x080011a0 (size 168) =====

uint64_t sym.show_threshold(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *extraout_x1;
    char *pcVar7;
    int *piVar8;
    uint64_t in_x3;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    int *piVar9;
    ulong unaff_x23;
    ulong unaff_x30;
    int iStack_7c;
    int64_t iStack_78;
    uchar *puStack_70;
    code *pcStack_68;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_28 = *(iVar6 + 0x5e0);
    uStack_2c = 0;
    pcVar7 = arg2;
    iVar2 = qcom_scm_io_readl(*(arg1 + -0x208),&uStack_2c);
    if (iVar2 == 0) {
        in_x3 = uStack_2c;
        pcVar7 = "0x%x\n";
        iVar2 = scnprintf(arg2,0xc,"0x%x\n",in_x3);
        uVar4 = iVar2;
    }
    else {
        _printk(0x80005fa,"show_threshold");
        uVar4 = 0xfffffffffffffffb;
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_28) {
        return uVar4;
    }
    iVar5 = __stack_chk_fail(uVar4);
    *extraout_x18 = sym.store_threshold;
    pcStack_68 = sym.store_threshold;
    iVar6 = sp_el0;
    iStack_78 = *(iVar6 + 0x5e0);
    piVar8 = &iStack_7c;
    iStack_7c = 0;
    puStack_70 = &stack0xffffffffffffffe0;
    iVar2 = kstrtouint(pcVar7,0,piVar8);
    if (iVar2 < 0) {
        in_x3 = iVar2;
    }
    else if (iStack_7c == 0) {
        in_x3 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x23;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x23) {
            do {
                piVar9 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar1)();
                }
                iVar6 = *(iVar5 + -0x208 + piVar9 * 8);
                if (iVar6 != 0) {
                    iVar2 = qcom_scm_io_writel(iVar6,iStack_7c);
                    if (iVar2 != 0) {
                        _printk(0x80004b6,"store_threshold",piVar9);
                        in_x3 = 0xfffffffffffffffb;
                        piVar8 = piVar9;
                        break;
                    }
                    *extraout_x1 = unaff_x23;
                }
                uVar3 = cpumask_next(piVar9,__cpu_possible_mask);
            } while (uVar3 < unaff_x23);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_78) {
        return in_x3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_00 = sym.show_pmu_event_sel;
    iVar2 = scnprintf(piVar8,0xc,"0x%x\n",*(iVar6 + -8));
    return iVar2;
}


// ===== sym.store_threshold @ 0x08001248 (size 304) =====

int64_t sym.store_threshold(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong *extraout_x1;
    int *piVar5;
    ulong *in_x18;
    ulong *extraout_x18;
    int *piVar6;
    ulong unaff_x23;
    ulong unaff_x30;
    int iStack_4c;
    int64_t iStack_48;
    
    *in_x18 = unaff_x30;
    iVar4 = sp_el0;
    iStack_48 = *(iVar4 + 0x5e0);
    piVar5 = &iStack_4c;
    iStack_4c = 0;
    iVar2 = kstrtouint(arg2,0,piVar5);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else if (iStack_4c == 0) {
        arg3 = -0x16;
    }
    else {
        ___cpu_possible_mask = unaff_x23;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x23) {
            do {
                piVar6 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001374);
                    (*pcVar1)();
                }
                iVar4 = *(arg1 + -0x208 + piVar6 * 8);
                if (iVar4 != 0) {
                    iVar2 = qcom_scm_io_writel(iVar4,iStack_4c);
                    if (iVar2 != 0) {
                        _printk(0x80004b6,"store_threshold",piVar6);
                        arg3 = -5;
                        piVar5 = piVar6;
                        break;
                    }
                    *extraout_x1 = unaff_x23;
                }
                uVar3 = cpumask_next(piVar6,__cpu_possible_mask);
            } while (uVar3 < unaff_x23);
        }
    }
    iVar4 = sp_el0;
    if (*(iVar4 + 0x5e0) == iStack_48) {
        return arg3;
    }
    iVar4 = __stack_chk_fail();
    *extraout_x18 = sym.show_pmu_event_sel;
    iVar2 = scnprintf(piVar5,0xc,"0x%x\n",*(iVar4 + -8));
    return iVar2;
}


// ===== sym.show_pmu_event_sel @ 0x08001378 (size 64) =====

int64_t sym.show_pmu_event_sel(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    int iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = scnprintf(arg2,0xc,"0x%x\n",*(arg1 + -8));
    return iVar1;
}


// ===== sym.store_pmu_event_sel @ 0x080013b8 (size 376) =====

uint64_t sym.store_pmu_event_sel(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong *extraout_x1;
    ulong *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t *extraout_x1_02;
    uint64_t *extraout_x1_03;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong extraout_x8;
    int64_t iVar16;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    ulong *extraout_x18_02;
    ulong unaff_x25;
    ulong unaff_x26;
    ulong unaff_x30;
    uchar auVar17 [16];
    int iStack_15c;
    int64_t iStack_158;
    uchar ***pppuStack_150;
    code *pcStack_148;
    uint8_t auStack_f0 [4];
    uint32_t uStack_ec;
    int64_t iStack_e8;
    uchar **ppuStack_e0;
    code *pcStack_d8;
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint64_t uStack_70;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uVar7 = &uStack_60 + 4;
    uStack_60 = 0;
    uVar15 = arg3;
    iVar2 = kstrtouint(arg2,0);
    if (iVar2 < 0) {
        arg3 = iVar2;
    }
    else {
        uVar3 = uStack_60._4_4_;
        if (uStack_60._4_4_ < 0x20) {
            ___cpu_possible_mask = unaff_x25;
            uVar5 = cpumask_next(0xffffffff);
            if (uVar5 < unaff_x25) {
                uVar14 = uVar7;
                do {
                    uVar7 = uVar5;
                    if (0x1f < uVar5) {
    //WARNING: Does not return
                        pcVar1 = SoftwareBreakpoint(0x5512,0x800152c);
                        (*pcVar1)();
                    }
                    iVar8 = *(arg1 + -0x108 + uVar7 * 8);
                    if (iVar8 != 0) {
                        iVar2 = qcom_scm_io_readl(iVar8,&uStack_60);
                        if (iVar2 == 0) {
                            iVar2 = qcom_scm_io_writel(*(arg1 + -0x108 + uVar7 * 8),
                                                       uStack_60 & 0xffffff0f | uStack_60._4_4_ << 4);
                            if (iVar2 == 0) {
                                *extraout_x1 = unaff_x25;
                                goto code_r0x08001460;
                            }
                            uVar13 = 0x800042e;
                        }
                        else {
                            uVar13 = 0x80005b1;
                        }
                        _printk(uVar13,"store_pmu_event_sel");
                        arg3 = 0xfffffffffffffffb;
                        goto code_r0x080014c0;
                    }
code_r0x08001460:
                    uVar5 = cpumask_next(uVar7,__cpu_possible_mask);
                } while (uVar5 < unaff_x25);
                uVar3 = uStack_60 >> 0x20;
                uVar7 = uVar14;
            }
            *(arg1 + -8) = uVar3;
        }
        else {
            arg3 = 0xffffffffffffffea;
        }
    }
code_r0x080014c0:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_58) {
        return arg3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.show_enable;
    pcStack_78 = sym.show_enable;
    iVar8 = sp_el0;
    iStack_88 = *(iVar8 + 0x5e0);
    uStack_8c = 0;
    uVar14 = uVar7;
    puStack_80 = &stack0xffffffffffffffb0;
    uStack_70 = arg3;
    iVar2 = qcom_scm_io_readl(*(iVar6 + -0x108),&uStack_8c);
    if (iVar2 == 0) {
        uVar14 = 0x800038f;
        uStack_8c = uStack_8c >> 1 & 1;
        uVar15 = uStack_8c;
        iVar2 = scnprintf(uVar7,0xc,0x800038f);
        uVar7 = iVar2;
    }
    else {
        _printk(0x8000458,"show_enable");
        uVar7 = 0xfffffffffffffffb;
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return uVar7;
    }
    iVar6 = __stack_chk_fail(uVar7);
    *extraout_x18_00 = sym.store_enable;
    pcStack_d8 = sym.store_enable;
    iVar8 = sp_el0;
    iStack_e8 = *(iVar8 + 0x5e0);
    uStack_ec = 0;
    auStack_f0[0] = 0;
    ppuStack_e0 = &puStack_80;
    iVar2 = kstrtobool(uVar14,auStack_f0);
    if (iVar2 < 0) {
        uVar15 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x26;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x26) {
            do {
                uVar7 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001734);
                    (*pcVar1)();
                }
                iVar8 = *(iVar6 + -0x108 + uVar7 * 8);
                if (iVar8 != 0) {
                    iVar2 = qcom_scm_io_readl(iVar8,&uStack_ec);
                    uVar13 = 0x80002de;
                    if ((iVar2 != 0) ||
                       (iVar2 = qcom_scm_io_writel(*(iVar6 + -0x108 + uVar7 * 8),
                                                   uStack_ec & 0xfffffffd | auStack_f0[0] << 1), uVar13 = 0x80003af,
                       iVar2 != 0)) {
                        _printk(uVar13,"store_enable",uVar7);
                        uVar15 = 0xfffffffffffffffb;
                        break;
                    }
                    *extraout_x1_00 = unaff_x26;
                }
                uVar3 = cpumask_next(uVar7,__cpu_possible_mask);
            } while (uVar3 < unaff_x26);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_e8) {
        return uVar15;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18_01 = sym.msm_hang_detect_probe;
    pcStack_148 = sym.msm_hang_detect_probe;
    iVar8 = sp_el0;
    uVar7 = 0xffffffed;
    iStack_158 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar6 + 0x300);
    iStack_15c = 0;
    pppuStack_150 = &ppuStack_e0;
    if ((iVar8 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar9 = devm_kmalloc(iVar6 + 0x10,0x268,0xdc0);
    if (iVar9 == 0) {
code_r0x0800197c:
        uVar7 = 0xfffffff4;
        goto code_r0x08001ae4;
    }
    iVar10 = of_get_property(iVar8,"label",0);
    if (iVar10 == 0) {
        uVar13 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar13,"msm_hang_detect_probe");
    }
    else {
        uVar7 = 4;
        uVar3 = of_property_count_elems_of_size(iVar8,"qcom,threshold-arr");
        if (uVar3 < 0) {
            uVar13 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar15 = uVar3;
        *extraout_x1_01 = uVar7;
        if (uVar7 < uVar3) {
            uVar15 = uVar7 & 0xffffffff;
code_r0x080017f8:
            iVar2 = of_property_count_elems_of_size(iVar8,"qcom,config-arr",4);
            if (iVar2 < 0) {
                uVar13 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar15;
            if (iVar2 < iVar4) {
                uVar13 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar7 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            iVar11 = __kmalloc(uVar7,0xdc0);
            if (iVar11 == 0) goto code_r0x0800197c;
            iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,threshold-arr",iVar11,iVar4,0);
            if (iVar2 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar12 = __kmalloc(uVar7,0xdc0);
                if (iVar12 == 0) {
                    kfree(iVar11);
                    uVar7 = 0xfffffff4;
                    goto code_r0x08001ae4;
                }
                iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,config-arr",iVar12,iVar4,0);
                if (-1 < iVar2) {
                    iVar4 = of_property_read_variable_u32_array(iVar8,"cluster-id",&iStack_15c,1,0);
                    iVar2 = iStack_15c;
                    uVar3 = uVar15 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_03 = uVar7;
                    }
                    else {
                        *extraout_x1_02 = uVar7;
                        uVar7 = 0xffffffff;
                        do {
                            uVar7 = cpumask_next(uVar7,__cpu_possible_mask);
                            if (uVar3 <= uVar7) {
                                uVar13 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar7) goto code_r0x08001978;
                        } while (*(kfree + (uVar7 & 0xffffffff) * 0x30) != iVar2);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar3) {
                        uVar7 = uVar5;
                        iVar2 = 0;
                        do {
                            uVar3 = uVar7;
                            iVar8 = of_get_cpu_node(uVar7,0);
                            if (iVar8 != 0) {
                                if (0x1f < uVar3) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar2 = iVar2 + 1;
                                iVar16 = uVar3 * 4;
                                iVar8 = uVar3 * 8;
                                uVar3 = *(iVar12 + iVar16);
                                *(iVar9 + iVar8) = *(iVar11 + iVar16);
                                *(iVar9 + 0x100 + iVar8) = uVar3;
                            }
                            auVar17 = cpumask_next(uVar7,__cpu_possible_mask);
                            *auVar17._8_8_ = extraout_x8;
                            uVar7 = auVar17._0_8_ & 0xffffffff;
                        } while (auVar17._0_4_ < extraout_x8);
                    }
                    else {
                        iVar2 = 0;
                    }
                    kfree(iVar11);
                    kfree(iVar12);
                    if (iVar2 != 0) {
                        iVar8 = iVar9 + 0x208;
                        uVar3 = kobject_init_and_add(iVar8,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar10);
                        if (uVar3 == 0) {
                            uVar3 = sysfs_create_group(iVar8,obj.hang_attr_group);
                            uVar7 = uVar3;
                            if (uVar3 == 0) {
                                *(iVar6 + 0xa8) = iVar9;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar8);
                        }
                        else {
                            uVar7 = uVar3;
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar8);
                        goto code_r0x08001ae4;
                    }
                    uVar13 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar11);
                iVar11 = iVar12;
            }
            kfree(iVar11);
        }
        else {
            if (uVar7 <= uVar3) goto code_r0x080017f8;
            uVar13 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar13,"msm_hang_detect_probe");
        }
    }
    uVar7 = 0xffffffea;
code_r0x08001ae4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_158) {
        iVar6 = __stack_chk_fail();
        *extraout_x18_02 = sym.msm_hang_detect_remove;
        iVar8 = *(iVar6 + 0xa8);
        *(iVar6 + 0xa8) = 0;
        iVar8 = iVar8 + 0x208;
        sysfs_remove_group(iVar8,obj.hang_attr_group);
        kobject_del(iVar8);
        kobject_put(iVar8);
        return 0;
    }
    return uVar7;
}


// ===== sym.show_enable @ 0x08001530 (size 176) =====

uint64_t sym.show_enable(int64_t arg1,uchar noname_1 [16],int64_t arg2)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    ulong *extraout_x1;
    uint64_t *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t *extraout_x1_02;
    uint64_t in_x3;
    ulong extraout_x8;
    int64_t iVar14;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    ulong *extraout_x18_01;
    uint64_t uVar15;
    ulong unaff_x26;
    ulong unaff_x30;
    uchar auVar16 [16];
    int iStack_fc;
    int64_t iStack_f8;
    uchar **ppuStack_f0;
    code *pcStack_e8;
    uint8_t auStack_90 [4];
    uint32_t uStack_8c;
    int64_t iStack_88;
    uchar *puStack_80;
    code *pcStack_78;
    uint32_t uStack_2c;
    int64_t iStack_28;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_28 = *(iVar8 + 0x5e0);
    uStack_2c = 0;
    iVar8 = arg2;
    iVar2 = qcom_scm_io_readl(*(arg1 + -0x108),&uStack_2c);
    if (iVar2 == 0) {
        iVar8 = 0x800038f;
        uStack_2c = uStack_2c >> 1 & 1;
        in_x3 = uStack_2c;
        iVar2 = scnprintf(arg2,0xc,0x800038f);
        uVar6 = iVar2;
    }
    else {
        _printk(0x8000458,"show_enable");
        uVar6 = 0xfffffffffffffffb;
    }
    iVar9 = sp_el0;
    if (*(iVar9 + 0x5e0) == iStack_28) {
        return uVar6;
    }
    iVar7 = __stack_chk_fail(uVar6);
    *extraout_x18 = sym.store_enable;
    pcStack_78 = sym.store_enable;
    iVar9 = sp_el0;
    iStack_88 = *(iVar9 + 0x5e0);
    uStack_8c = 0;
    auStack_90[0] = 0;
    puStack_80 = &stack0xffffffffffffffe0;
    iVar2 = kstrtobool(iVar8,auStack_90);
    if (iVar2 < 0) {
        in_x3 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x26;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x26) {
            do {
                uVar6 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001734);
                    (*pcVar1)();
                }
                iVar8 = *(iVar7 + -0x108 + uVar6 * 8);
                if (iVar8 != 0) {
                    iVar2 = qcom_scm_io_readl(iVar8,&uStack_8c);
                    uVar13 = 0x80002de;
                    if ((iVar2 != 0) ||
                       (iVar2 = qcom_scm_io_writel(*(iVar7 + -0x108 + uVar6 * 8),
                                                   uStack_8c & 0xfffffffd | auStack_90[0] << 1), uVar13 = 0x80003af,
                       iVar2 != 0)) {
                        _printk(uVar13,"store_enable",uVar6);
                        in_x3 = 0xfffffffffffffffb;
                        break;
                    }
                    *extraout_x1 = unaff_x26;
                }
                uVar3 = cpumask_next(uVar6,__cpu_possible_mask);
            } while (uVar3 < unaff_x26);
        }
    }
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) == iStack_88) {
        return in_x3;
    }
    iVar9 = __stack_chk_fail();
    *extraout_x18_00 = sym.msm_hang_detect_probe;
    pcStack_e8 = sym.msm_hang_detect_probe;
    iVar8 = sp_el0;
    uVar6 = 0xffffffed;
    iStack_f8 = *(iVar8 + 0x5e0);
    iVar8 = *(iVar9 + 0x300);
    iStack_fc = 0;
    ppuStack_f0 = &puStack_80;
    if ((iVar8 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar7 = devm_kmalloc(iVar9 + 0x10,0x268,0xdc0);
    if (iVar7 == 0) {
code_r0x0800197c:
        uVar6 = 0xfffffff4;
        goto code_r0x08001ae4;
    }
    iVar10 = of_get_property(iVar8,"label",0);
    if (iVar10 == 0) {
        uVar13 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar13,"msm_hang_detect_probe");
    }
    else {
        uVar6 = 4;
        uVar3 = of_property_count_elems_of_size(iVar8,"qcom,threshold-arr");
        if (uVar3 < 0) {
            uVar13 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar15 = uVar3;
        *extraout_x1_00 = uVar6;
        if (uVar6 < uVar3) {
            uVar15 = uVar6 & 0xffffffff;
code_r0x080017f8:
            iVar2 = of_property_count_elems_of_size(iVar8,"qcom,config-arr",4);
            if (iVar2 < 0) {
                uVar13 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar15;
            if (iVar2 < iVar4) {
                uVar13 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar6 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            iVar11 = __kmalloc(uVar6,0xdc0);
            if (iVar11 == 0) goto code_r0x0800197c;
            iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,threshold-arr",iVar11,iVar4,0);
            if (iVar2 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar12 = __kmalloc(uVar6,0xdc0);
                if (iVar12 == 0) {
                    kfree(iVar11);
                    uVar6 = 0xfffffff4;
                    goto code_r0x08001ae4;
                }
                iVar2 = of_property_read_variable_u32_array(iVar8,"qcom,config-arr",iVar12,iVar4,0);
                if (-1 < iVar2) {
                    iVar4 = of_property_read_variable_u32_array(iVar8,"cluster-id",&iStack_fc,1,0);
                    iVar2 = iStack_fc;
                    uVar3 = uVar15 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_02 = uVar6;
                    }
                    else {
                        *extraout_x1_01 = uVar6;
                        uVar6 = 0xffffffff;
                        do {
                            uVar6 = cpumask_next(uVar6,__cpu_possible_mask);
                            if (uVar3 <= uVar6) {
                                uVar13 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar6) goto code_r0x08001978;
                        } while (*(kfree + (uVar6 & 0xffffffff) * 0x30) != iVar2);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar3) {
                        uVar6 = uVar5;
                        iVar2 = 0;
                        do {
                            uVar3 = uVar6;
                            iVar8 = of_get_cpu_node(uVar6,0);
                            if (iVar8 != 0) {
                                if (0x1f < uVar3) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar2 = iVar2 + 1;
                                iVar14 = uVar3 * 4;
                                iVar8 = uVar3 * 8;
                                uVar3 = *(iVar12 + iVar14);
                                *(iVar7 + iVar8) = *(iVar11 + iVar14);
                                *(iVar7 + 0x100 + iVar8) = uVar3;
                            }
                            auVar16 = cpumask_next(uVar6,__cpu_possible_mask);
                            *auVar16._8_8_ = extraout_x8;
                            uVar6 = auVar16._0_8_ & 0xffffffff;
                        } while (auVar16._0_4_ < extraout_x8);
                    }
                    else {
                        iVar2 = 0;
                    }
                    kfree(iVar11);
                    kfree(iVar12);
                    if (iVar2 != 0) {
                        iVar8 = iVar7 + 0x208;
                        uVar3 = kobject_init_and_add(iVar8,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar10);
                        if (uVar3 == 0) {
                            uVar3 = sysfs_create_group(iVar8,obj.hang_attr_group);
                            uVar6 = uVar3;
                            if (uVar3 == 0) {
                                *(iVar9 + 0xa8) = iVar7;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar8);
                        }
                        else {
                            uVar6 = uVar3;
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar8);
                        goto code_r0x08001ae4;
                    }
                    uVar13 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar11);
                iVar11 = iVar12;
            }
            kfree(iVar11);
        }
        else {
            if (uVar6 <= uVar3) goto code_r0x080017f8;
            uVar13 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar13,"msm_hang_detect_probe");
        }
    }
    uVar6 = 0xffffffea;
code_r0x08001ae4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_f8) {
        iVar9 = __stack_chk_fail();
        *extraout_x18_01 = sym.msm_hang_detect_remove;
        iVar8 = *(iVar9 + 0xa8);
        *(iVar9 + 0xa8) = 0;
        iVar8 = iVar8 + 0x208;
        sysfs_remove_group(iVar8,obj.hang_attr_group);
        kobject_del(iVar8);
        kobject_put(iVar8);
        return 0;
    }
    return uVar6;
}


// ===== sym.store_enable @ 0x080015e0 (size 344) =====

uint64_t sym.store_enable(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    int64_t iVar11;
    ulong uVar12;
    ulong *extraout_x1;
    uint64_t *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t *extraout_x1_02;
    ulong extraout_x8;
    int64_t iVar13;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong *extraout_x18_00;
    uint64_t uVar14;
    uint64_t uVar15;
    ulong unaff_x26;
    ulong unaff_x30;
    uchar auVar16 [16];
    int iStack_cc;
    int64_t iStack_c8;
    uchar *puStack_c0;
    code *pcStack_b8;
    uint8_t auStack_60 [4];
    uint32_t uStack_5c;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar6 = sp_el0;
    iStack_58 = *(iVar6 + 0x5e0);
    uStack_5c = 0;
    auStack_60[0] = 0;
    iVar2 = kstrtobool(arg2,auStack_60);
    if (iVar2 < 0) {
        arg3 = 0xffffffffffffffea;
    }
    else {
        ___cpu_possible_mask = unaff_x26;
        uVar3 = cpumask_next(0xffffffff);
        if (uVar3 < unaff_x26) {
            do {
                uVar14 = uVar3;
                if (0x1f < uVar3) {
    //WARNING: Does not return
                    pcVar1 = SoftwareBreakpoint(0x5512,0x8001734);
                    (*pcVar1)();
                }
                iVar6 = *(arg1 + -0x108 + uVar14 * 8);
                if (iVar6 != 0) {
                    iVar2 = qcom_scm_io_readl(iVar6,&uStack_5c);
                    uVar12 = 0x80002de;
                    if ((iVar2 != 0) ||
                       (iVar2 = qcom_scm_io_writel(*(arg1 + -0x108 + uVar14 * 8),
                                                   uStack_5c & 0xfffffffd | auStack_60[0] << 1), uVar12 = 0x80003af,
                       iVar2 != 0)) {
                        _printk(uVar12,"store_enable",uVar14);
                        arg3 = 0xfffffffffffffffb;
                        break;
                    }
                    *extraout_x1 = unaff_x26;
                }
                uVar3 = cpumask_next(uVar14,__cpu_possible_mask);
            } while (uVar3 < unaff_x26);
        }
    }
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) == iStack_58) {
        return arg3;
    }
    iVar7 = __stack_chk_fail();
    *extraout_x18 = sym.msm_hang_detect_probe;
    pcStack_b8 = sym.msm_hang_detect_probe;
    iVar6 = sp_el0;
    uVar14 = 0xffffffed;
    iStack_c8 = *(iVar6 + 0x5e0);
    iVar6 = *(iVar7 + 0x300);
    iStack_cc = 0;
    puStack_c0 = &stack0xffffffffffffffb0;
    if ((iVar6 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar8 = devm_kmalloc(iVar7 + 0x10,0x268,0xdc0);
    if (iVar8 == 0) {
code_r0x0800197c:
        uVar14 = 0xfffffff4;
        goto code_r0x08001ae4;
    }
    iVar9 = of_get_property(iVar6,"label",0);
    if (iVar9 == 0) {
        uVar12 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar12,"msm_hang_detect_probe");
    }
    else {
        uVar14 = 4;
        uVar3 = of_property_count_elems_of_size(iVar6,"qcom,threshold-arr");
        if (uVar3 < 0) {
            uVar12 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar15 = uVar3;
        *extraout_x1_00 = uVar14;
        if (uVar14 < uVar3) {
            uVar15 = uVar14 & 0xffffffff;
code_r0x080017f8:
            iVar2 = of_property_count_elems_of_size(iVar6,"qcom,config-arr",4);
            if (iVar2 < 0) {
                uVar12 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar15;
            if (iVar2 < iVar4) {
                uVar12 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar14 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            iVar10 = __kmalloc(uVar14,0xdc0);
            if (iVar10 == 0) goto code_r0x0800197c;
            iVar2 = of_property_read_variable_u32_array(iVar6,"qcom,threshold-arr",iVar10,iVar4,0);
            if (iVar2 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar11 = __kmalloc(uVar14,0xdc0);
                if (iVar11 == 0) {
                    kfree(iVar10);
                    uVar14 = 0xfffffff4;
                    goto code_r0x08001ae4;
                }
                iVar2 = of_property_read_variable_u32_array(iVar6,"qcom,config-arr",iVar11,iVar4,0);
                if (-1 < iVar2) {
                    iVar4 = of_property_read_variable_u32_array(iVar6,"cluster-id",&iStack_cc,1,0);
                    iVar2 = iStack_cc;
                    uVar3 = uVar15 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_02 = uVar14;
                    }
                    else {
                        *extraout_x1_01 = uVar14;
                        uVar14 = 0xffffffff;
                        do {
                            uVar14 = cpumask_next(uVar14,__cpu_possible_mask);
                            if (uVar3 <= uVar14) {
                                uVar12 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar14) goto code_r0x08001978;
                        } while (*(kfree + (uVar14 & 0xffffffff) * 0x30) != iVar2);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar3) {
                        uVar14 = uVar5;
                        iVar2 = 0;
                        do {
                            uVar3 = uVar14;
                            iVar6 = of_get_cpu_node(uVar14,0);
                            if (iVar6 != 0) {
                                if (0x1f < uVar3) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar2 = iVar2 + 1;
                                iVar13 = uVar3 * 4;
                                iVar6 = uVar3 * 8;
                                uVar3 = *(iVar11 + iVar13);
                                *(iVar8 + iVar6) = *(iVar10 + iVar13);
                                *(iVar8 + 0x100 + iVar6) = uVar3;
                            }
                            auVar16 = cpumask_next(uVar14,__cpu_possible_mask);
                            *auVar16._8_8_ = extraout_x8;
                            uVar14 = auVar16._0_8_ & 0xffffffff;
                        } while (auVar16._0_4_ < extraout_x8);
                    }
                    else {
                        iVar2 = 0;
                    }
                    kfree(iVar10);
                    kfree(iVar11);
                    if (iVar2 != 0) {
                        iVar6 = iVar8 + 0x208;
                        uVar3 = kobject_init_and_add(iVar6,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar9);
                        if (uVar3 == 0) {
                            uVar3 = sysfs_create_group(iVar6,obj.hang_attr_group);
                            uVar14 = uVar3;
                            if (uVar3 == 0) {
                                *(iVar7 + 0xa8) = iVar8;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar6);
                        }
                        else {
                            uVar14 = uVar3;
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar6);
                        goto code_r0x08001ae4;
                    }
                    uVar12 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar10);
                iVar10 = iVar11;
            }
            kfree(iVar10);
        }
        else {
            if (uVar14 <= uVar3) goto code_r0x080017f8;
            uVar12 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar12,"msm_hang_detect_probe");
        }
    }
    uVar14 = 0xffffffea;
code_r0x08001ae4:
    iVar6 = sp_el0;
    if (*(iVar6 + 0x5e0) != iStack_c8) {
        iVar7 = __stack_chk_fail();
        *extraout_x18_00 = sym.msm_hang_detect_remove;
        iVar6 = *(iVar7 + 0xa8);
        *(iVar7 + 0xa8) = 0;
        iVar6 = iVar6 + 0x208;
        sysfs_remove_group(iVar6,obj.hang_attr_group);
        kobject_del(iVar6);
        kobject_put(iVar6);
        return 0;
    }
    return uVar14;
}


// ===== sym.msm_hang_detect_probe @ 0x08001738 (size 1076) =====

int sym.msm_hang_detect_probe(int64_t arg1)

{
    code *pcVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong uVar10;
    uint64_t *extraout_x1;
    uint64_t *extraout_x1_00;
    uint64_t *extraout_x1_01;
    uint64_t uVar11;
    ulong extraout_x8;
    int64_t iVar12;
    ulong *in_x18;
    ulong *extraout_x18;
    uint64_t uVar13;
    int64_t iVar14;
    ulong unaff_x30;
    uchar auVar15 [16];
    int iStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar14 = sp_el0;
    iVar3 = -0x13;
    iStack_68 = *(iVar14 + 0x5e0);
    iVar14 = *(arg1 + 0x300);
    iStack_6c = 0;
    if ((iVar14 == 0) || (_segment.ehdr == 0)) goto code_r0x08001ae4;
    iVar6 = devm_kmalloc(arg1 + 0x10,0x268,0xdc0);
    if (iVar6 == 0) {
code_r0x0800197c:
        iVar3 = -0xc;
        goto code_r0x08001ae4;
    }
    iVar7 = of_get_property(iVar14,"label",0);
    if (iVar7 == 0) {
        uVar10 = 0x8000308;
code_r0x08001ad4:
        _printk(uVar10,"msm_hang_detect_probe");
    }
    else {
        uVar11 = 4;
        uVar2 = of_property_count_elems_of_size(iVar14,"qcom,threshold-arr");
        if (uVar2 < 0) {
            uVar10 = 0x8000285;
            goto code_r0x08001ad4;
        }
        uVar13 = uVar2;
        *extraout_x1 = uVar11;
        if (uVar11 < uVar2) {
            uVar13 = uVar11 & 0xffffffff;
code_r0x080017f8:
            iVar3 = of_property_count_elems_of_size(iVar14,"qcom,config-arr",4);
            if (iVar3 < 0) {
                uVar10 = 0x8000355;
                goto code_r0x08001ad4;
            }
            iVar4 = uVar13;
            if (iVar3 < iVar4) {
                uVar10 = 0x80003d6;
                goto code_r0x08001ac4;
            }
            uVar11 = -(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2;
            iVar8 = __kmalloc(uVar11,0xdc0);
            if (iVar8 == 0) goto code_r0x0800197c;
            iVar3 = of_property_read_variable_u32_array(iVar14,"qcom,threshold-arr",iVar8,iVar4,0);
            if (iVar3 < 0) {
                _printk(0x8000285,"msm_hang_detect_probe");
            }
            else {
                iVar9 = __kmalloc(uVar11,0xdc0);
                if (iVar9 == 0) {
                    kfree(iVar8);
                    iVar3 = -0xc;
                    goto code_r0x08001ae4;
                }
                iVar3 = of_property_read_variable_u32_array(iVar14,"qcom,config-arr",iVar9,iVar4,0);
                if (-1 < iVar3) {
                    iVar4 = of_property_read_variable_u32_array(iVar14,"cluster-id",&iStack_6c,1,0);
                    iVar3 = iStack_6c;
                    uVar2 = uVar13 << 2;
                    if (iVar4 < 0) {
                        _printk(0x800040d,"msm_hang_detect_probe");
                        *extraout_x1_01 = uVar11;
                    }
                    else {
                        *extraout_x1_00 = uVar11;
                        uVar11 = 0xffffffff;
                        do {
                            uVar11 = cpumask_next(uVar11,__cpu_possible_mask);
                            if (uVar2 <= uVar11) {
                                uVar10 = 0x8000662;
                                goto code_r0x08001ac4;
                            }
                            if (0x1f < uVar11) goto code_r0x08001978;
                        } while (*(kfree + (uVar11 & 0xffffffff) * 0x30) != iVar3);
                    }
                    uVar5 = cpumask_next(0xffffffff,__cpu_possible_mask);
                    if (uVar5 < uVar2) {
                        uVar11 = uVar5;
                        iVar3 = 0;
                        do {
                            uVar2 = uVar11;
                            iVar14 = of_get_cpu_node(uVar11,0);
                            if (iVar14 != 0) {
                                if (0x1f < uVar2) {
code_r0x08001978:
    //WARNING: Does not return
                                    pcVar1 = SoftwareBreakpoint(0x5512,0x800197c);
                                    (*pcVar1)();
                                }
                                iVar3 = iVar3 + 1;
                                iVar12 = uVar2 * 4;
                                iVar14 = uVar2 * 8;
                                uVar2 = *(iVar9 + iVar12);
                                *(iVar6 + iVar14) = *(iVar8 + iVar12);
                                *(iVar6 + 0x100 + iVar14) = uVar2;
                            }
                            auVar15 = cpumask_next(uVar11,__cpu_possible_mask);
                            *auVar15._8_8_ = extraout_x8;
                            uVar11 = auVar15._0_8_ & 0xffffffff;
                        } while (auVar15._0_4_ < extraout_x8);
                    }
                    else {
                        iVar3 = 0;
                    }
                    kfree(iVar8);
                    kfree(iVar9);
                    if (iVar3 != 0) {
                        iVar14 = iVar6 + 0x208;
                        iVar3 = kobject_init_and_add(iVar14,obj.core_ktype,__printk,"%s_%s","hang_detect",iVar7);
                        if (iVar3 == 0) {
                            iVar3 = sysfs_create_group(iVar14,obj.hang_attr_group);
                            if (iVar3 == 0) {
                                *(arg1 + 0xa8) = iVar6;
                                goto code_r0x08001ae4;
                            }
                            _printk(0x8000572,"msm_hang_detect_probe");
                            kobject_del(iVar14);
                        }
                        else {
                            _printk(0x8000482,"msm_hang_detect_probe");
                        }
                        kobject_put(iVar14);
                        goto code_r0x08001ae4;
                    }
                    uVar10 = 0x80005dc;
                    goto code_r0x08001ad4;
                }
                _printk(0x8000355,"msm_hang_detect_probe");
                kfree(iVar8);
                iVar8 = iVar9;
            }
            kfree(iVar8);
        }
        else {
            if (uVar11 <= uVar2) goto code_r0x080017f8;
            uVar10 = 0x8000623;
code_r0x08001ac4:
            _printk(uVar10,"msm_hang_detect_probe");
        }
    }
    iVar3 = -0x16;
code_r0x08001ae4:
    iVar14 = sp_el0;
    if (*(iVar14 + 0x5e0) == iStack_68) {
        return iVar3;
    }
    iVar6 = __stack_chk_fail();
    *extraout_x18 = sym.msm_hang_detect_remove;
    iVar14 = *(iVar6 + 0xa8);
    *(iVar6 + 0xa8) = 0;
    iVar14 = iVar14 + 0x208;
    sysfs_remove_group(iVar14,obj.hang_attr_group);
    kobject_del(iVar14);
    kobject_put(iVar14);
    return 0;
}


// ===== sym.msm_hang_detect_remove @ 0x08001b6c (size 88) =====

ulong sym.msm_hang_detect_remove(int64_t arg1)

{
    int64_t iVar1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar1 = *(arg1 + 0xa8);
    *(arg1 + 0xa8) = 0;
    iVar1 = iVar1 + 0x208;
    sysfs_remove_group(iVar1,obj.hang_attr_group);
    kobject_del(iVar1);
    kobject_put(iVar1);
    return 0;
}


// ===== sym.attr_show @ 0x08001bc4 (size 148) =====

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
        if (3 < (pcVar2 + -0x8001180 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x2c1d832160b5d123,pcVar2,0x8000240);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3);
    }
    return uVar1;
}


// ===== sym.attr_store @ 0x08001c58 (size 148) =====

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
        if (2 < (pcVar2 + -0x8001150 >> 3 | pcVar2 << 0x3d)) {
            __cfi_slowpath_diag(0x6616775b51bca303,pcVar2,0x8000260);
        }
        uVar1 = (*pcVar2)(arg1,arg2,arg3,arg4);
    }
    return uVar1;
}


// ===== sym.__cfi_check_fail @ 0x08001cec (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001d30

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
    //switch table (4 cases) at 0x8000280
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001d44);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001d54 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.msm_hang_detect_probe.8907762e9d8d90f415c14b48b71210de.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001d88 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.msm_hang_detect_probe.8907762e9d8d90f415c14b48b71210de.cfi_jt);
    return;
}

