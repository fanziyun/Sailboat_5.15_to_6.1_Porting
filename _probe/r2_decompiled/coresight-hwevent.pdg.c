// decompiled from coresight-hwevent by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 224) =====

//WARNING: Switch with 1 destination removed at 0x08001980

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar2 = arg2;
    if (arg1 < 0x1e3d0ffe3d0499e9) {
        if (arg1 == -0x3557318fb8d07b71) {
            if ((pcVar2 + -0x80010f8 >> 3 | pcVar2 << 0x3d) < 2) {
                return;
            }
            goto code_r0x08001940;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x08001940;
        pcVar1 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 != 0x1e3d0ffe3d0499e9) {
            if ((arg1 == 0x7e04a0fb7ad8bcd5) && (pcVar2 == sym.cleanup_module.cfi_jt)) {
                return;
            }
            goto code_r0x08001940;
        }
        pcVar1 = sym.setreg_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
    }
    if (pcVar2 == pcVar1) {
        return;
    }
code_r0x08001940:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar2,0);
    }
    //WARNING: Does not return
    pcVar2 = SoftwareBreakpoint(0x5502,0x8001994);
    (*pcVar2)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010e8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010f0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f8 (size 8) =====

uint64_t sym.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *puVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint64_t auStack_b8 [5];
    code *pcStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar11 = param_1 + 0x10;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    iStack_88 = 0;
    uStack_80 = 0;
    auStack_b8[4] = 0;
    pcStack_90 = NULL;
    auStack_b8[2] = 0;
    auStack_b8[3] = 0;
    auStack_b8[0] = 0;
    auStack_b8[1] = 0;
    iStack_88 = coresight_alloc_device_name(obj.hwevent_devs,iVar11);
    if (iStack_88 != 0) {
        uVar6 = coresight_get_platform_data(iVar11);
        if (0xfffffffffffff000 < uVar6) goto code_r0x08001464;
        *(param_1 + 0xa0) = uVar6;
        piVar7 = devm_kmalloc(iVar11,0x88,0xdc0);
        if (piVar7 != NULL) {
            *piVar7 = iVar11;
            *(param_1 + 0xa8) = piVar7;
            __mutex_init(piVar7 + 3,"&drvdata->mutex",reloc.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
            iVar2 = of_get_coresight_csr_name(*(param_1 + 0x300),piVar7 + 0x10);
            if (iVar2 == 0) {
                uVar6 = coresight_csr_get(piVar7[0x10]);
                piVar7[0xf] = uVar6;
                if (0xfffffffffffff000 < uVar6) {
                    uVar6 = 0xfffffdfb;
                    goto code_r0x08001464;
                }
            }
            else {
                _dev_err(iVar11,"No csr data\n");
            }
            uVar6 = devm_clk_get(iVar11,"apb_pclk");
            piVar7[2] = uVar6;
            if (0xfffffffffffff000 < uVar6) goto code_r0x08001464;
            uVar12 = *(*piVar7 + 0x2f0);
            uStack_60 = 0;
            uVar3 = of_property_read_string_helper(uVar12,"reg-names",0,0,0);
            uVar5 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
            *(piVar7 + 0xd) = uVar5;
            if (0 < uVar3) {
                iVar8 = devm_kmalloc(*piVar7,uVar5 << 4,0xdc0);
                piVar7[0xe] = iVar8;
                if (iVar8 == 0) goto code_r0x08001460;
                if (0 < piVar7[0xd]) {
                    iVar8 = 0;
                    uVar13 = 0;
                    do {
                        uVar6 = of_property_read_string_helper(uVar12,"reg-names",&uStack_60,1,uVar13 & 0xffffffff);
                        if (uVar6 < 0) goto code_r0x08001464;
                        puVar9 = platform_get_resource_byname(param_1,0x200,uStack_60);
                        if (puVar9 == NULL) {
                            uVar6 = 0xffffffed;
                            goto code_r0x08001464;
                        }
                        uVar13 = uVar13 + 1;
                        *(piVar7[0xe] + iVar8) = *puVar9;
                        iVar1 = piVar7[0xe] + iVar8;
                        iVar8 = iVar8 + 0x10;
                        *(iVar1 + 8) = puVar9[1];
                    } while (uVar13 < piVar7[0xd]);
                }
            }
            uVar12 = *(*piVar7 + 0x2f0);
            uStack_68 = 0;
            uStack_60 = 0;
            uVar4 = of_property_read_string_helper(uVar12,"qcom,hwevent-clks",0,0,0);
            *(piVar7 + 9) = uVar4;
            uVar5 = of_property_read_string_helper(uVar12,"qcom,hwevent-regs",0,0,0);
            *(piVar7 + 0xb) = uVar5;
            if (0 < *(piVar7 + 9)) {
                iVar8 = devm_kmalloc(*piVar7,*(piVar7 + 9) << 3,0xdc0);
                piVar7[10] = iVar8;
                if (iVar8 == 0) goto code_r0x08001460;
                if (0 < piVar7[9]) {
                    uVar13 = 0;
                    do {
                        uVar6 = of_property_read_string_helper
                                          (uVar12,"qcom,hwevent-clks",&uStack_60,1,uVar13 & 0xffffffff);
                        if (uVar6 < 0) goto code_r0x08001464;
                        uVar10 = devm_clk_get(*piVar7,uStack_60);
                        *(piVar7[10] + uVar13 * 8) = uVar10;
                        uVar6 = *(piVar7[10] + uVar13 * 8);
                        if (0xfffffffffffff000 < uVar6) goto code_r0x080014a4;
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < piVar7[9]);
                }
                uVar5 = *(piVar7 + 0xb);
            }
            if (0 < uVar5) {
                iVar8 = devm_kmalloc(*piVar7,uVar5 << 3,0xdc0);
                piVar7[0xc] = iVar8;
                if (iVar8 == 0) goto code_r0x08001460;
                if (0 < piVar7[0xb]) {
                    uVar13 = 0;
                    do {
                        uVar6 = of_property_read_string_helper
                                          (uVar12,"qcom,hwevent-regs",&uStack_68,1,uVar13 & 0xffffffff);
                        if (uVar6 < 0) goto code_r0x08001464;
                        uVar10 = devm_regulator_get(*piVar7,uStack_68);
                        *(piVar7[0xc] + uVar13 * 8) = uVar10;
                        uVar6 = *(piVar7[0xc] + uVar13 * 8);
                        if (0xfffffffffffff000 < uVar6) goto code_r0x080014a4;
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < piVar7[0xb]);
                }
            }
code_r0x080014a8:
            auStack_b8[3] = *(param_1 + 0xa0);
            auStack_b8[0] = auStack_b8[0] & 0xffffffff00000000;
            pcStack_90 = obj.hwevent_attr_grps;
            auStack_b8[4] = iVar11;
            uVar13 = coresight_register(auStack_b8);
            uVar6 = 0;
            piVar7[1] = uVar13;
            if (0xfffffffffffff000 < uVar13) {
                uVar6 = uVar13 & 0xffffffff;
            }
            goto code_r0x08001464;
        }
    }
code_r0x08001460:
    uVar6 = 0xfffffff4;
code_r0x08001464:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_58) {
        iVar11 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.hwevent_remove;
        coresight_unregister(*(*(iVar11 + 0xa8) + 8));
        return 0;
    }
    return uVar6;
code_r0x080014a4:
    if (uVar6 != 0) goto code_r0x08001464;
    goto code_r0x080014a8;
}


// ===== sym.hwevent_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.hwevent_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(param_1 + 0xa8) + 8));
    return 0;
}


// ===== sym.setreg_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001108 (size 8) =====

int64_t sym.setreg_store.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt
                  (int64_t param_1,ulong param_2,ulong param_3,int64_t param_4)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint32_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint64_t uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    iVar8 = *(*(param_1 + 0x60) + 0x98);
    iVar3 = sscanf(param_3,"%llx %lx",&uStack_60,&uStack_68);
    if (iVar3 != 2) {
        param_4 = -0x16;
        goto code_r0x080017a4;
    }
    iVar2 = iVar8 + 0x18;
    mutex_lock(iVar2);
    uVar10 = *(iVar8 + 0x10);
    iVar3 = clk_prepare(uVar10);
    if (iVar3 == 0) {
        iVar3 = clk_enable(uVar10);
        if (iVar3 == 0) {
            if (*(iVar8 + 0x58) < 1) {
                iVar11 = 0;
            }
            else {
                iVar11 = 0;
                do {
                    iVar3 = regulator_enable(*(*(iVar8 + 0x60) + iVar11 * 8));
                    if (iVar3 != 0) goto code_r0x08001760;
                    iVar11 = iVar11 + 1;
                } while (iVar11 < *(iVar8 + 0x58));
            }
            if (0 < *(iVar8 + 0x48)) {
                iVar12 = 0;
                do {
                    uVar10 = *(*(iVar8 + 0x50) + iVar12 * 8);
                    iVar3 = clk_prepare(uVar10);
                    if (iVar3 != 0) {
code_r0x0800172c:
                        if (iVar12 != 0) {
                            do {
                                uVar10 = *(*(iVar8 + 0x50) + (iVar12 + -1) * 8);
                                clk_disable(uVar10);
                                clk_unprepare(uVar10);
                                bVar1 = 1 < iVar12;
                                iVar12 = iVar12 + -1;
                            } while (bVar1);
                        }
code_r0x08001760:
                        uVar6 = iVar11 - 1;
                        if (-1 < uVar6) {
                            iVar11 = uVar6 << 3;
                            do {
                                regulator_disable(*(*(iVar8 + 0x60) + iVar11));
                                iVar11 = iVar11 + -8;
                            } while (iVar11 != -8);
                        }
                        uVar10 = *(iVar8 + 0x10);
                        clk_disable(uVar10);
                        goto code_r0x08001790;
                    }
                    iVar3 = clk_enable(uVar10);
                    if (iVar3 != 0) {
                        clk_unprepare(uVar10);
                        goto code_r0x0800172c;
                    }
                    iVar12 = iVar12 + 1;
                } while (iVar12 < *(iVar8 + 0x48));
            }
            uVar6 = *(iVar8 + 0x68);
            if (uVar6 < 1) {
                uVar9 = 0;
code_r0x080016e8:
                if (uVar9 == uVar6) goto code_r0x080016f4;
            }
            else {
                uVar9 = 0;
                iVar11 = 0;
                do {
                    uVar4 = *(*(iVar8 + 0x70) + iVar11);
                    if ((uVar4 <= uStack_60) && (uVar7 = *(*(iVar8 + 0x70) + iVar11 + 8), uStack_60 < uVar7)) {
                        uVar10 = 0x68000000000713;
                        if (arm64_use_ng_mappings != 0x0) {
                            uVar10 = 0x68000000000f13;
                        }
                        iVar12 = __ioremap(uVar4,uVar7 - uVar4,uVar10);
                        if (iVar12 == 0) {
                            _dev_err(param_1,"unable to map address 0x%llx\n",uStack_60);
                            param_4 = -0xc;
                            goto code_r0x08001704;
                        }
                        sym.writel_relaxed(uStack_68 & 0xffffffff,(iVar12 + uStack_60) - *(*(iVar8 + 0x70) + iVar11));
                        DataSynchronizationBarrier(3,3,0);
                        iounmap(iVar12);
                        uVar6 = *(iVar8 + 0x68);
                        goto code_r0x080016e8;
                    }
                    iVar11 = iVar11 + 0x10;
                    uVar9 = uVar9 + 1;
                } while (uVar6 * 0x10 - iVar11 != 0);
code_r0x080016f4:
                iVar3 = coresight_csr_hwctrl_set(*(iVar8 + 0x78),uStack_60,uStack_68 & 0xffffffff);
                if (iVar3 != 0) {
                    _dev_err(param_1,"invalid mux control register address\n");
                    param_4 = -0x16;
                }
            }
code_r0x08001704:
            sym.hwevent_disable(iVar8);
            mutex_unlock(iVar2);
            goto code_r0x080017a4;
        }
code_r0x08001790:
        clk_unprepare(uVar10);
    }
    mutex_unlock(iVar2);
    param_4 = iVar3;
code_r0x080017a4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        auVar13 = __stack_chk_fail();
        puVar5 = auVar13._8_8_;
        *extraout_x18 = sym.writel_relaxed;
        uVar4 = auVar13._0_8_ & 0xffffffff;
        log_write_mmio(uVar4,0x20,puVar5,0x8001834);
        *puVar5 = auVar13._0_4_;
        iVar8 = log_post_write_mmio(uVar4,0x20,puVar5,0x800185c);
        return iVar8;
    }
    return param_4;
}


// ===== sym.hwevent_probe @ 0x08001110 (size 984) =====

uint64_t sym.hwevent_probe(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *puVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar12;
    uint64_t uVar13;
    ulong unaff_x30;
    uint64_t auStack_b8 [5];
    code *pcStack_90;
    int64_t iStack_88;
    ulong uStack_80;
    ulong uStack_78;
    ulong uStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iVar11 = arg1 + 0x10;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_78 = 0;
    uStack_70 = 0;
    iStack_88 = 0;
    uStack_80 = 0;
    auStack_b8[4] = 0;
    pcStack_90 = NULL;
    auStack_b8[2] = 0;
    auStack_b8[3] = 0;
    auStack_b8[0] = 0;
    auStack_b8[1] = 0;
    iStack_88 = coresight_alloc_device_name(obj.hwevent_devs,iVar11);
    if (iStack_88 != 0) {
        uVar6 = coresight_get_platform_data(iVar11);
        if (0xfffffffffffff000 < uVar6) goto code_r0x08001464;
        *(arg1 + 0xa0) = uVar6;
        piVar7 = devm_kmalloc(iVar11,0x88,0xdc0);
        if (piVar7 != NULL) {
            *piVar7 = iVar11;
            *(arg1 + 0xa8) = piVar7;
            __mutex_init(piVar7 + 3,"&drvdata->mutex",reloc.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
            iVar2 = of_get_coresight_csr_name(*(arg1 + 0x300),piVar7 + 0x10);
            if (iVar2 == 0) {
                uVar6 = coresight_csr_get(piVar7[0x10]);
                piVar7[0xf] = uVar6;
                if (0xfffffffffffff000 < uVar6) {
                    uVar6 = 0xfffffdfb;
                    goto code_r0x08001464;
                }
            }
            else {
                _dev_err(iVar11,"No csr data\n");
            }
            uVar6 = devm_clk_get(iVar11,"apb_pclk");
            piVar7[2] = uVar6;
            if (0xfffffffffffff000 < uVar6) goto code_r0x08001464;
            uVar12 = *(*piVar7 + 0x2f0);
            uStack_60 = 0;
            uVar3 = of_property_read_string_helper(uVar12,"reg-names",0,0,0);
            uVar5 = uVar3 & (uVar3 >> 0x1f ^ 0xffffffffU);
            *(piVar7 + 0xd) = uVar5;
            if (0 < uVar3) {
                iVar8 = devm_kmalloc(*piVar7,uVar5 << 4,0xdc0);
                piVar7[0xe] = iVar8;
                if (iVar8 == 0) goto code_r0x08001460;
                if (0 < piVar7[0xd]) {
                    iVar8 = 0;
                    uVar13 = 0;
                    do {
                        uVar6 = of_property_read_string_helper(uVar12,"reg-names",&uStack_60,1,uVar13 & 0xffffffff);
                        if (uVar6 < 0) goto code_r0x08001464;
                        puVar9 = platform_get_resource_byname(arg1,0x200,uStack_60);
                        if (puVar9 == NULL) {
                            uVar6 = 0xffffffed;
                            goto code_r0x08001464;
                        }
                        uVar13 = uVar13 + 1;
                        *(piVar7[0xe] + iVar8) = *puVar9;
                        iVar1 = piVar7[0xe] + iVar8;
                        iVar8 = iVar8 + 0x10;
                        *(iVar1 + 8) = puVar9[1];
                    } while (uVar13 < piVar7[0xd]);
                }
            }
            uVar12 = *(*piVar7 + 0x2f0);
            uStack_68 = 0;
            uStack_60 = 0;
            uVar4 = of_property_read_string_helper(uVar12,"qcom,hwevent-clks",0,0,0);
            *(piVar7 + 9) = uVar4;
            uVar5 = of_property_read_string_helper(uVar12,"qcom,hwevent-regs",0,0,0);
            *(piVar7 + 0xb) = uVar5;
            if (0 < *(piVar7 + 9)) {
                iVar8 = devm_kmalloc(*piVar7,*(piVar7 + 9) << 3,0xdc0);
                piVar7[10] = iVar8;
                if (iVar8 == 0) goto code_r0x08001460;
                if (0 < piVar7[9]) {
                    uVar13 = 0;
                    do {
                        uVar6 = of_property_read_string_helper
                                          (uVar12,"qcom,hwevent-clks",&uStack_60,1,uVar13 & 0xffffffff);
                        if (uVar6 < 0) goto code_r0x08001464;
                        uVar10 = devm_clk_get(*piVar7,uStack_60);
                        *(piVar7[10] + uVar13 * 8) = uVar10;
                        uVar6 = *(piVar7[10] + uVar13 * 8);
                        if (0xfffffffffffff000 < uVar6) goto code_r0x080014a4;
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < piVar7[9]);
                }
                uVar5 = *(piVar7 + 0xb);
            }
            if (0 < uVar5) {
                iVar8 = devm_kmalloc(*piVar7,uVar5 << 3,0xdc0);
                piVar7[0xc] = iVar8;
                if (iVar8 == 0) goto code_r0x08001460;
                if (0 < piVar7[0xb]) {
                    uVar13 = 0;
                    do {
                        uVar6 = of_property_read_string_helper
                                          (uVar12,"qcom,hwevent-regs",&uStack_68,1,uVar13 & 0xffffffff);
                        if (uVar6 < 0) goto code_r0x08001464;
                        uVar10 = devm_regulator_get(*piVar7,uStack_68);
                        *(piVar7[0xc] + uVar13 * 8) = uVar10;
                        uVar6 = *(piVar7[0xc] + uVar13 * 8);
                        if (0xfffffffffffff000 < uVar6) goto code_r0x080014a4;
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < piVar7[0xb]);
                }
            }
code_r0x080014a8:
            auStack_b8[3] = *(arg1 + 0xa0);
            auStack_b8[0] = auStack_b8[0] & 0xffffffff00000000;
            pcStack_90 = obj.hwevent_attr_grps;
            auStack_b8[4] = iVar11;
            uVar13 = coresight_register(auStack_b8);
            uVar6 = 0;
            piVar7[1] = uVar13;
            if (0xfffffffffffff000 < uVar13) {
                uVar6 = uVar13 & 0xffffffff;
            }
            goto code_r0x08001464;
        }
    }
code_r0x08001460:
    uVar6 = 0xfffffff4;
code_r0x08001464:
    iVar11 = sp_el0;
    if (*(iVar11 + 0x5e0) != iStack_58) {
        iVar11 = __stack_chk_fail(uVar6);
        *extraout_x18 = sym.hwevent_remove;
        coresight_unregister(*(*(iVar11 + 0xa8) + 8));
        return 0;
    }
    return uVar6;
code_r0x080014a4:
    if (uVar6 != 0) goto code_r0x08001464;
    goto code_r0x080014a8;
}


// ===== sym.hwevent_remove @ 0x080014e8 (size 48) =====

ulong sym.hwevent_remove(int64_t arg1)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    coresight_unregister(*(*(arg1 + 0xa8) + 8));
    return 0;
}


// ===== sym.setreg_store @ 0x08001518 (size 768) =====

int64_t sym.setreg_store(int64_t arg1,uchar noname_1 [16],int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong *in_x18;
    ulong *extraout_x18;
    int64_t iVar8;
    uint32_t uVar9;
    ulong uVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong unaff_x30;
    uchar auVar13 [16];
    uint64_t uStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    
    *in_x18 = unaff_x30;
    iVar8 = sp_el0;
    iStack_58 = *(iVar8 + 0x5e0);
    uStack_68 = 0;
    uStack_60 = 0;
    iVar8 = *(*(arg1 + 0x60) + 0x98);
    iVar3 = sscanf(arg2,"%llx %lx",&uStack_60,&uStack_68);
    if (iVar3 != 2) {
        arg3 = -0x16;
        goto code_r0x080017a4;
    }
    iVar2 = iVar8 + 0x18;
    mutex_lock(iVar2);
    uVar10 = *(iVar8 + 0x10);
    iVar3 = clk_prepare(uVar10);
    if (iVar3 == 0) {
        iVar3 = clk_enable(uVar10);
        if (iVar3 == 0) {
            if (*(iVar8 + 0x58) < 1) {
                iVar11 = 0;
            }
            else {
                iVar11 = 0;
                do {
                    iVar3 = regulator_enable(*(*(iVar8 + 0x60) + iVar11 * 8));
                    if (iVar3 != 0) goto code_r0x08001760;
                    iVar11 = iVar11 + 1;
                } while (iVar11 < *(iVar8 + 0x58));
            }
            if (0 < *(iVar8 + 0x48)) {
                iVar12 = 0;
                do {
                    uVar10 = *(*(iVar8 + 0x50) + iVar12 * 8);
                    iVar3 = clk_prepare(uVar10);
                    if (iVar3 != 0) {
code_r0x0800172c:
                        if (iVar12 != 0) {
                            do {
                                uVar10 = *(*(iVar8 + 0x50) + (iVar12 + -1) * 8);
                                clk_disable(uVar10);
                                clk_unprepare(uVar10);
                                bVar1 = 1 < iVar12;
                                iVar12 = iVar12 + -1;
                            } while (bVar1);
                        }
code_r0x08001760:
                        uVar6 = iVar11 - 1;
                        if (-1 < uVar6) {
                            iVar11 = uVar6 << 3;
                            do {
                                regulator_disable(*(*(iVar8 + 0x60) + iVar11));
                                iVar11 = iVar11 + -8;
                            } while (iVar11 != -8);
                        }
                        uVar10 = *(iVar8 + 0x10);
                        clk_disable(uVar10);
                        goto code_r0x08001790;
                    }
                    iVar3 = clk_enable(uVar10);
                    if (iVar3 != 0) {
                        clk_unprepare(uVar10);
                        goto code_r0x0800172c;
                    }
                    iVar12 = iVar12 + 1;
                } while (iVar12 < *(iVar8 + 0x48));
            }
            uVar6 = *(iVar8 + 0x68);
            if (uVar6 < 1) {
                uVar9 = 0;
code_r0x080016e8:
                if (uVar9 == uVar6) goto code_r0x080016f4;
            }
            else {
                uVar9 = 0;
                iVar11 = 0;
                do {
                    uVar4 = *(*(iVar8 + 0x70) + iVar11);
                    if ((uVar4 <= uStack_60) && (uVar7 = *(*(iVar8 + 0x70) + iVar11 + 8), uStack_60 < uVar7)) {
                        uVar10 = 0x68000000000713;
                        if (arm64_use_ng_mappings != 0x0) {
                            uVar10 = 0x68000000000f13;
                        }
                        iVar12 = __ioremap(uVar4,uVar7 - uVar4,uVar10);
                        if (iVar12 == 0) {
                            _dev_err(arg1,"unable to map address 0x%llx\n",uStack_60);
                            arg3 = -0xc;
                            goto code_r0x08001704;
                        }
                        sym.writel_relaxed(uStack_68 & 0xffffffff,(iVar12 + uStack_60) - *(*(iVar8 + 0x70) + iVar11));
                        DataSynchronizationBarrier(3,3,0);
                        iounmap(iVar12);
                        uVar6 = *(iVar8 + 0x68);
                        goto code_r0x080016e8;
                    }
                    iVar11 = iVar11 + 0x10;
                    uVar9 = uVar9 + 1;
                } while (uVar6 * 0x10 - iVar11 != 0);
code_r0x080016f4:
                iVar3 = coresight_csr_hwctrl_set(*(iVar8 + 0x78),uStack_60,uStack_68 & 0xffffffff);
                if (iVar3 != 0) {
                    _dev_err(arg1,"invalid mux control register address\n");
                    arg3 = -0x16;
                }
            }
code_r0x08001704:
            sym.hwevent_disable(iVar8);
            mutex_unlock(iVar2);
            goto code_r0x080017a4;
        }
code_r0x08001790:
        clk_unprepare(uVar10);
    }
    mutex_unlock(iVar2);
    arg3 = iVar3;
code_r0x080017a4:
    iVar8 = sp_el0;
    if (*(iVar8 + 0x5e0) != iStack_58) {
        auVar13 = __stack_chk_fail();
        puVar5 = auVar13._8_8_;
        *extraout_x18 = sym.writel_relaxed;
        uVar4 = auVar13._0_8_ & 0xffffffff;
        log_write_mmio(uVar4,0x20,puVar5,0x8001834);
        *puVar5 = auVar13._0_4_;
        iVar8 = log_post_write_mmio(uVar4,0x20,puVar5,0x800185c);
        return iVar8;
    }
    return arg3;
}


// ===== sym.writel_relaxed @ 0x08001818 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x8001834);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800185c);
    return;
}


// ===== sym.hwevent_disable @ 0x08001890 (size 172) =====

void sym.hwevent_disable(int64_t arg1)

{
    ulong *in_x18;
    ulong uVar1;
    int64_t iVar2;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    uVar1 = *(arg1 + 0x10);
    clk_disable(uVar1);
    clk_unprepare(uVar1);
    if (0 < *(arg1 + 0x48)) {
        iVar2 = 0;
        do {
            uVar1 = *(*(arg1 + 0x50) + iVar2 * 8);
            clk_disable(uVar1);
            clk_unprepare(uVar1);
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(arg1 + 0x48));
    }
    if (0 < *(arg1 + 0x58)) {
        iVar2 = 0;
        do {
            regulator_disable(*(*(arg1 + 0x60) + iVar2 * 8));
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(arg1 + 0x58));
    }
    return;
}


// ===== sym.__cfi_check_fail @ 0x0800193c (size 88) =====

//WARNING: Switch with 1 destination removed at 0x08001980

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
    //switch table (4 cases) at 0x80001b0
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001994);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x080019a4 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x080019d8 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.hwevent_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

