// decompiled from sdpm_clk by radare2+r2ghidra (pdg)

// ===== sym.__cfi_check @ 0x08001000 (size 208) =====

//WARNING: Switch with 1 destination removed at 0x0800183c

void sym.__cfi_check(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    code *pcVar1;
    code *pcVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    pcVar1 = arg2;
    if (arg1 < 0x7d57972cd3914fb1) {
        if (arg1 == -0x3557318fb8d07b71) {
            pcVar2 = sym.sdpm_clk_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
code_r0x080010b4:
            if ((pcVar1 - pcVar2 >> 3 | pcVar1 << 0x3d) < 2) {
                return;
            }
            goto code_r0x080017fc;
        }
        if (arg1 != 0x2b3a43e29242445) goto code_r0x080017fc;
        pcVar2 = sym.init_module.cfi_jt;
    }
    else {
        if (arg1 == 0x7d57972cd3914fb1) {
            pcVar2 = sym.sdpm_reg_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
            goto code_r0x080010b4;
        }
        if (arg1 != 0x7e04a0fb7ad8bcd5) goto code_r0x080017fc;
        pcVar2 = sym.cleanup_module.cfi_jt;
    }
    if (pcVar1 == pcVar2) {
        return;
    }
code_r0x080017fc:
    *in_x18 = unaff_x30;
    if (arg3 != 0) {
        if (4 < *arg3) {
            return;
        }
        __ubsan_handle_cfi_check_fail_abort(arg3,pcVar1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001850);
    (*pcVar1)();
}


// ===== sym.cleanup_module.cfi_jt @ 0x080010d8 (size 8) =====

void sym.cleanup_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}


// ===== sym.init_module.cfi_jt @ 0x080010e0 (size 8) =====

void sym.init_module.cfi_jt(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.sdpm_clk_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010e8 (size 8) =====

ulong sym.sdpm_clk_device_remove.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(param_1 + 0xa8);
    if (*(iVar2 + 0x10) != 0) {
        uVar1 = 0;
        do {
            iVar3 = (uVar1 + uVar1 * 8) * 0x10;
            clk_notifier_unregister(*(*(iVar2 + 0x18) + iVar3 + 0x18));
            iVar3 = *(*(iVar2 + 0x18) + iVar3 + 0x40);
            if (iVar3 != 0) {
                regulator_unregister_notifier(iVar3,*(iVar2 + 0x18) + uVar1 * 0x90 + 0x28);
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return 0;
}


// ===== sym.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f0 (size 8) =====

uint64_t sym.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = param_1 + 0x10;
    iStack_68 = *(iVar3 + 0x5e0);
    uVar9 = *(param_1 + 0x300);
    uStack_6c = 0;
    piVar2 = devm_kmalloc(iVar7,0x20,0xdc0);
    if (piVar2 == NULL) {
code_r0x0800144c:
        uVar12 = 0xfffffff4;
        goto code_r0x080014cc;
    }
    *piVar2 = iVar7;
    iVar3 = platform_get_resource(param_1,0x200,0);
    if (iVar3 == 0) {
        pcVar8 = "Couldn\'t get MEM resource\n";
code_r0x08001470:
        _dev_err(iVar7,pcVar8);
    }
    else {
        *(param_1 + 0xa8) = piVar2;
        iVar3 = devm_ioremap_resource(iVar7,iVar3);
        piVar2[1] = iVar3;
        if (iVar3 == 0) {
            pcVar8 = "Couldn\'t get regmap\n";
            goto code_r0x08001470;
        }
        uVar1 = of_property_read_string_helper(uVar9,"clock-names",0,0,0);
        uVar12 = uVar1;
        if (uVar1 < 0) {
            _dev_err(iVar7,"Couldn\'t get clock names. %d\n",uVar12);
            goto code_r0x080014cc;
        }
        uVar4 = of_property_count_elems_of_size(uVar9,"csr-id",4);
        if (uVar4 < 1) {
            _dev_err(iVar7,"Couldn\'t get csr ID array. %d\n",uVar4 & 0xffffffff);
            uVar12 = uVar4 & 0xffffffff;
            goto code_r0x080014cc;
        }
        if (uVar1 == uVar4) {
            *(piVar2 + 2) = uVar1;
            iVar3 = devm_kmalloc(iVar7,uVar12 * 0x90,0xdc0);
            piVar2[3] = iVar3;
            if (iVar3 != 0) {
                if (piVar2[2] == 0) {
code_r0x08001454:
                    uVar12 = 0;
                }
                else {
                    uVar1 = of_property_read_string_helper(uVar9,"clock-names",iVar3 + 0x20,1,0);
                    if (uVar1 < 0) {
                        uVar10 = 0;
                    }
                    else {
                        uVar4 = 0;
                        do {
                            iVar3 = uVar4 * 0x90;
                            uVar5 = devm_clk_get(iVar7,*(piVar2[3] + iVar3 + 0x20));
                            *(piVar2[3] + iVar3 + 0x18) = uVar5;
                            uVar12 = *(piVar2[3] + iVar3 + 0x18);
                            if (0xfffffffffffff000 < uVar12) goto code_r0x080014cc;
                            uVar6 = of_property_read_u32_index(uVar9,"csr-id",uVar4 & 0xffffffff,&uStack_6c);
                            uVar12 = uVar6 & 0xffffffff;
                            if (uVar6 < 0) {
                                pcVar8 = "Couldn\'t get CSR for index:%d. %d\n";
                                uVar4 = uVar4 & 0xffffffff;
                                goto code_r0x08001554;
                            }
                            if (7 < uVar6) {
                                _dev_err(iVar7,"Invalid CSR %d\n");
                                goto code_r0x080014c8;
                            }
                            iVar11 = uVar4 * 0x90;
                            *(piVar2[3] + iVar11 + 0x4c) = uStack_6c;
                            *(piVar2[3] + iVar11 + 0x88) = piVar2;
                            *(piVar2[3] + iVar11) = sym.sdpm_clock_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            uVar12 = clk_get_rate(*(piVar2[3] + iVar11 + 0x18));
                            *(piVar2[3] + iVar11 + 0x50) = uVar12 / 1000000;
                            *(piVar2[3] + iVar11 + 0x48) = 1;
                            *(piVar2[3] + iVar11 + 0x40) = 0;
                            iVar3 = piVar2[3] + iVar11;
                            uVar1 = 0;
                            if (*(iVar3 + 0x48) != '\0') {
                                uVar1 = *(iVar3 + 0x50);
                            }
                            sym.writel_relaxed(uVar1,*(*(iVar3 + 0x88) + 8) + (*(iVar3 + 0x4c) << 2) + 0xf00);
                            __mutex_init(piVar2[3] + iVar11 + 0x58,"&sdpm_clk->clk_data[idx].sdpm_mutex",
                                         reloc.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                            clk_notifier_register(*(piVar2[3] + iVar11 + 0x18));
                            uVar5 = devm_regulator_get(iVar7,*(piVar2[3] + iVar11 + 0x20));
                            *(piVar2[3] + iVar11 + 0x40) = uVar5;
                            iVar3 = piVar2[3] + iVar11;
                            if (*(iVar3 + 0x40) < 0xfffffffffffff001) {
                                *(iVar3 + 0x28) = sym.sdpm_reg_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                regulator_register_notifier(*(piVar2[3] + iVar11 + 0x40),piVar2[3] + iVar11 + 0x28);
                            }
                            else {
                                _dev_err(iVar7,"regulator:%s get err:%d\n",iVar7,*(iVar3 + 0x20));
                                if (*(piVar2[3] + iVar11 + 0x40) == -0x205) {
                                    uVar12 = 0xfffffdfb;
                                    goto code_r0x080014cc;
                                }
                            }
                            uVar10 = uVar4 + 1;
                            if (*(piVar2 + 2) <= uVar10) goto code_r0x08001454;
                            uVar4 = uVar10;
                            uVar1 = of_property_read_string_helper
                                              (uVar9,"clock-names",piVar2[3] + uVar10 * 0x90 + 0x20,1,uVar10);
                        } while (-1 < uVar1);
                    }
                    uVar12 = uVar1;
                    pcVar8 = "Couldn\'t get clk name index:%d. %d\n";
                    uVar4 = uVar10;
code_r0x08001554:
                    _dev_err(iVar7,pcVar8,uVar4,uVar12);
                }
                goto code_r0x080014cc;
            }
            goto code_r0x0800144c;
        }
        _dev_err(iVar7,"Invalid csr:%d and clk:%d count.\n",uVar4 & 0xffffffff,uVar12);
    }
code_r0x080014c8:
    uVar12 = 0xffffffea;
code_r0x080014cc:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.sdpm_clk_device_remove;
        iVar7 = *(iVar7 + 0xa8);
        if (*(iVar7 + 0x10) != 0) {
            uVar1 = 0;
            do {
                iVar3 = (uVar1 + uVar1 * 8) * 0x10;
                clk_notifier_unregister(*(*(iVar7 + 0x18) + iVar3 + 0x18));
                iVar3 = *(*(iVar7 + 0x18) + iVar3 + 0x40);
                if (iVar3 != 0) {
                    regulator_unregister_notifier(iVar3,*(iVar7 + 0x18) + uVar1 * 0x90 + 0x28);
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 < *(iVar7 + 0x10));
        }
        return 0;
    }
    return uVar12 & 0xffffffff;
}


// ===== sym.sdpm_reg_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x080010f8 (size 8) =====

ulong sym.sdpm_reg_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2)

{
    uint64_t arg1;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 0x80) {
        mutex_lock(param_1 + 0x30);
        arg1 = 0;
        *(param_1 + 0x20) = 0;
    }
    else {
        if (param_2 != 0x1000) {
            return 1;
        }
        mutex_lock(param_1 + 0x30);
        arg1 = *(param_1 + 0x28);
        *(param_1 + 0x20) = 1;
    }
    sym.writel_relaxed(arg1,*(*(param_1 + 0x60) + 8) + (*(param_1 + 0x24) << 2) + 0xf00);
    mutex_unlock(param_1 + 0x30);
    return 1;
}


// ===== sym.sdpm_clock_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt @ 0x08001100 (size 8) =====

ulong sym.sdpm_clock_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt(int64_t param_1,int64_t param_2,int64_t param_3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (param_2 == 4) {
        mutex_lock(param_1 + 0x58);
        uVar2 = *(param_3 + 8);
        if (*(param_3 + 0x10) <= uVar2) goto code_r0x080016ac;
    }
    else if (param_2 == 2) {
        mutex_lock(param_1 + 0x58);
        uVar2 = *(param_3 + 0x10);
        if (*(param_3 + 8) <= uVar2) goto code_r0x080016ac;
    }
    else {
        if (param_2 != 1) {
            return 0;
        }
        mutex_lock(param_1 + 0x58);
        uVar2 = *(param_3 + 0x10);
        if (uVar2 <= *(param_3 + 8)) goto code_r0x080016ac;
    }
    uVar1 = 0;
    if (*(param_1 + 0x48) != '\0') {
        uVar1 = uVar2 / 1000000;
    }
    *(param_1 + 0x50) = uVar2 / 1000000;
    sym.writel_relaxed(uVar1,*(*(param_1 + 0x88) + 8) + (*(param_1 + 0x4c) << 2) + 0xf00);
code_r0x080016ac:
    mutex_unlock(param_1 + 0x58);
    return 0;
}


// ===== sym.sdpm_clk_device_probe @ 0x08001108 (size 1116) =====

uint64_t sym.sdpm_clk_device_probe(int64_t arg1)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    ulong uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    ulong *in_x18;
    ulong *extraout_x18;
    ulong uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    ulong unaff_x30;
    uint uStack_6c;
    int64_t iStack_68;
    
    *in_x18 = unaff_x30;
    iVar3 = sp_el0;
    iVar7 = arg1 + 0x10;
    iStack_68 = *(iVar3 + 0x5e0);
    uVar9 = *(arg1 + 0x300);
    uStack_6c = 0;
    piVar2 = devm_kmalloc(iVar7,0x20,0xdc0);
    if (piVar2 == NULL) {
code_r0x0800144c:
        uVar12 = 0xfffffff4;
        goto code_r0x080014cc;
    }
    *piVar2 = iVar7;
    iVar3 = platform_get_resource(arg1,0x200,0);
    if (iVar3 == 0) {
        pcVar8 = "Couldn\'t get MEM resource\n";
code_r0x08001470:
        _dev_err(iVar7,pcVar8);
    }
    else {
        *(arg1 + 0xa8) = piVar2;
        iVar3 = devm_ioremap_resource(iVar7,iVar3);
        piVar2[1] = iVar3;
        if (iVar3 == 0) {
            pcVar8 = "Couldn\'t get regmap\n";
            goto code_r0x08001470;
        }
        uVar1 = of_property_read_string_helper(uVar9,"clock-names",0,0,0);
        uVar12 = uVar1;
        if (uVar1 < 0) {
            _dev_err(iVar7,"Couldn\'t get clock names. %d\n",uVar12);
            goto code_r0x080014cc;
        }
        uVar4 = of_property_count_elems_of_size(uVar9,"csr-id",4);
        if (uVar4 < 1) {
            _dev_err(iVar7,"Couldn\'t get csr ID array. %d\n",uVar4 & 0xffffffff);
            uVar12 = uVar4 & 0xffffffff;
            goto code_r0x080014cc;
        }
        if (uVar1 == uVar4) {
            *(piVar2 + 2) = uVar1;
            iVar3 = devm_kmalloc(iVar7,uVar12 * 0x90,0xdc0);
            piVar2[3] = iVar3;
            if (iVar3 != 0) {
                if (piVar2[2] == 0) {
code_r0x08001454:
                    uVar12 = 0;
                }
                else {
                    uVar1 = of_property_read_string_helper(uVar9,"clock-names",iVar3 + 0x20,1,0);
                    if (uVar1 < 0) {
                        uVar10 = 0;
                    }
                    else {
                        uVar4 = 0;
                        do {
                            iVar3 = uVar4 * 0x90;
                            uVar5 = devm_clk_get(iVar7,*(piVar2[3] + iVar3 + 0x20));
                            *(piVar2[3] + iVar3 + 0x18) = uVar5;
                            uVar12 = *(piVar2[3] + iVar3 + 0x18);
                            if (0xfffffffffffff000 < uVar12) goto code_r0x080014cc;
                            uVar6 = of_property_read_u32_index(uVar9,"csr-id",uVar4 & 0xffffffff,&uStack_6c);
                            uVar12 = uVar6 & 0xffffffff;
                            if (uVar6 < 0) {
                                pcVar8 = "Couldn\'t get CSR for index:%d. %d\n";
                                uVar4 = uVar4 & 0xffffffff;
                                goto code_r0x08001554;
                            }
                            if (7 < uVar6) {
                                _dev_err(iVar7,"Invalid CSR %d\n");
                                goto code_r0x080014c8;
                            }
                            iVar11 = uVar4 * 0x90;
                            *(piVar2[3] + iVar11 + 0x4c) = uStack_6c;
                            *(piVar2[3] + iVar11 + 0x88) = piVar2;
                            *(piVar2[3] + iVar11) = sym.sdpm_clock_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                            uVar12 = clk_get_rate(*(piVar2[3] + iVar11 + 0x18));
                            *(piVar2[3] + iVar11 + 0x50) = uVar12 / 1000000;
                            *(piVar2[3] + iVar11 + 0x48) = 1;
                            *(piVar2[3] + iVar11 + 0x40) = 0;
                            iVar3 = piVar2[3] + iVar11;
                            uVar1 = 0;
                            if (*(iVar3 + 0x48) != '\0') {
                                uVar1 = *(iVar3 + 0x50);
                            }
                            sym.writel_relaxed(uVar1,*(*(iVar3 + 0x88) + 8) + (*(iVar3 + 0x4c) << 2) + 0xf00);
                            __mutex_init(piVar2[3] + iVar11 + 0x58,"&sdpm_clk->clk_data[idx].sdpm_mutex",
                                         reloc.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
                            clk_notifier_register(*(piVar2[3] + iVar11 + 0x18));
                            uVar5 = devm_regulator_get(iVar7,*(piVar2[3] + iVar11 + 0x20));
                            *(piVar2[3] + iVar11 + 0x40) = uVar5;
                            iVar3 = piVar2[3] + iVar11;
                            if (*(iVar3 + 0x40) < 0xfffffffffffff001) {
                                *(iVar3 + 0x28) = sym.sdpm_reg_notifier.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt;
                                regulator_register_notifier(*(piVar2[3] + iVar11 + 0x40),piVar2[3] + iVar11 + 0x28);
                            }
                            else {
                                _dev_err(iVar7,"regulator:%s get err:%d\n",iVar7,*(iVar3 + 0x20));
                                if (*(piVar2[3] + iVar11 + 0x40) == -0x205) {
                                    uVar12 = 0xfffffdfb;
                                    goto code_r0x080014cc;
                                }
                            }
                            uVar10 = uVar4 + 1;
                            if (*(piVar2 + 2) <= uVar10) goto code_r0x08001454;
                            uVar4 = uVar10;
                            uVar1 = of_property_read_string_helper
                                              (uVar9,"clock-names",piVar2[3] + uVar10 * 0x90 + 0x20,1,uVar10);
                        } while (-1 < uVar1);
                    }
                    uVar12 = uVar1;
                    pcVar8 = "Couldn\'t get clk name index:%d. %d\n";
                    uVar4 = uVar10;
code_r0x08001554:
                    _dev_err(iVar7,pcVar8,uVar4,uVar12);
                }
                goto code_r0x080014cc;
            }
            goto code_r0x0800144c;
        }
        _dev_err(iVar7,"Invalid csr:%d and clk:%d count.\n",uVar4 & 0xffffffff,uVar12);
    }
code_r0x080014c8:
    uVar12 = 0xffffffea;
code_r0x080014cc:
    iVar7 = sp_el0;
    if (*(iVar7 + 0x5e0) != iStack_68) {
        iVar7 = __stack_chk_fail();
        *extraout_x18 = sym.sdpm_clk_device_remove;
        iVar7 = *(iVar7 + 0xa8);
        if (*(iVar7 + 0x10) != 0) {
            uVar1 = 0;
            do {
                iVar3 = (uVar1 + uVar1 * 8) * 0x10;
                clk_notifier_unregister(*(*(iVar7 + 0x18) + iVar3 + 0x18));
                iVar3 = *(*(iVar7 + 0x18) + iVar3 + 0x40);
                if (iVar3 != 0) {
                    regulator_unregister_notifier(iVar3,*(iVar7 + 0x18) + uVar1 * 0x90 + 0x28);
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 < *(iVar7 + 0x10));
        }
        return 0;
    }
    return uVar12 & 0xffffffff;
}


// ===== sym.sdpm_clk_device_remove @ 0x08001564 (size 152) =====

ulong sym.sdpm_clk_device_remove(int64_t arg1)

{
    uint32_t uVar1;
    ulong *in_x18;
    int64_t iVar2;
    int64_t iVar3;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    iVar2 = *(arg1 + 0xa8);
    if (*(iVar2 + 0x10) != 0) {
        uVar1 = 0;
        do {
            iVar3 = (uVar1 + uVar1 * 8) * 0x10;
            clk_notifier_unregister(*(*(iVar2 + 0x18) + iVar3 + 0x18));
            iVar3 = *(*(iVar2 + 0x18) + iVar3 + 0x40);
            if (iVar3 != 0) {
                regulator_unregister_notifier(iVar3,*(iVar2 + 0x18) + uVar1 * 0x90 + 0x28);
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x10));
    }
    return 0;
}


// ===== sym.sdpm_clock_notifier @ 0x080015fc (size 240) =====

ulong sym.sdpm_clock_notifier(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 4) {
        mutex_lock(arg1 + 0x58);
        uVar2 = *(arg3 + 8);
        if (*(arg3 + 0x10) <= uVar2) goto code_r0x080016ac;
    }
    else if (arg2 == 2) {
        mutex_lock(arg1 + 0x58);
        uVar2 = *(arg3 + 0x10);
        if (*(arg3 + 8) <= uVar2) goto code_r0x080016ac;
    }
    else {
        if (arg2 != 1) {
            return 0;
        }
        mutex_lock(arg1 + 0x58);
        uVar2 = *(arg3 + 0x10);
        if (uVar2 <= *(arg3 + 8)) goto code_r0x080016ac;
    }
    uVar1 = 0;
    if (*(arg1 + 0x48) != '\0') {
        uVar1 = uVar2 / 1000000;
    }
    *(arg1 + 0x50) = uVar2 / 1000000;
    sym.writel_relaxed(uVar1,*(*(arg1 + 0x88) + 8) + (*(arg1 + 0x4c) << 2) + 0xf00);
code_r0x080016ac:
    mutex_unlock(arg1 + 0x58);
    return 0;
}


// ===== sym.sdpm_reg_notifier @ 0x080016ec (size 148) =====

ulong sym.sdpm_reg_notifier(int64_t arg1,uint32_t arg2)

{
    uint64_t arg1_00;
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    if (arg2 == 0x80) {
        mutex_lock(arg1 + 0x30);
        arg1_00 = 0;
        *(arg1 + 0x20) = 0;
    }
    else {
        if (arg2 != 0x1000) {
            return 1;
        }
        mutex_lock(arg1 + 0x30);
        arg1_00 = *(arg1 + 0x28);
        *(arg1 + 0x20) = 1;
    }
    sym.writel_relaxed(arg1_00,*(*(arg1 + 0x60) + 8) + (*(arg1 + 0x24) << 2) + 0xf00);
    mutex_unlock(arg1 + 0x30);
    return 1;
}


// ===== sym.writel_relaxed @ 0x08001780 (size 120) =====

void sym.writel_relaxed(int64_t arg1,int64_t arg2)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    log_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x800179c);
    *arg2 = arg1;
    log_post_write_mmio(arg1 & 0xffffffffU,0x20,arg2,0x80017c4);
    return;
}


// ===== sym.__cfi_check_fail @ 0x080017f8 (size 88) =====

//WARNING: Switch with 1 destination removed at 0x0800183c

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
    //switch table (4 cases) at 0x8000130
        __ubsan_handle_cfi_check_fail_abort(arg1,in_x1,0);
    }
    //WARNING: Does not return
    pcVar1 = SoftwareBreakpoint(0x5502,0x8001850);
    (*pcVar1)();
}


// ===== sym.init_module @ 0x08001854 (size 52) =====

void sym.init_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    __platform_driver_register(reloc.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt,obj.__this_module);
    return;
}


// ===== sym.cleanup_module @ 0x08001888 (size 44) =====

void sym.cleanup_module(void)

{
    ulong *in_x18;
    ulong unaff_x30;
    
    *in_x18 = unaff_x30;
    platform_driver_unregister(reloc.sdpm_clk_device_probe.4e8b0154c58fc8baa75c3124f9a25b1c.cfi_jt);
    return;
}

